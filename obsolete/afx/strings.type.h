#ifndef _nd_strings_type_h__
#define _nd_strings_type_h__

namespace Strings
{
    /**
     * ������ - �����?
     */
    template <typename C> 
    inline bool Is123(C sym) 
    {
        return (sym >= (C)'0') && (sym <= (C)'9'); 
    }

    /**
     * ������ - �����?
     */
    template <typename C> 
    inline bool IsDot(C sym) 
    {
        return (C)'.' == sym; 
    }

    /**
     * ������ - ���� �����?
     */
    template <typename C> 
    inline bool IsSignSymbol(C sym) 
    {
        return ((C)'-' == sym) || ((C)'+' == sym); 
    }

    /**
     * ������ - ���� ����� ��� �����?
     */
    template <typename C> 
    inline bool IsSignOr123(C sym) 
    {
        return  IsSignSymbol(sym) || Is123(sym); 
    }

    /**
     * ������ - ���� ����� ��� ����� ��� �����?
     */
    template <typename C> 
    inline bool IsSignOr123OrDot(C sym) 
    {
        return  IsSignSymbol(sym) || Is123(sym) || IsDot(sym); 
    }

    /**
     * ������ - ��������� ������?
     */
    template <typename C> 
    inline bool IsAbc(C sym) 
    {
        return (sym >= (C)'a') && (sym <= (C)'z'); 
    }

    /**
     * ������ - ��������� ��������� ������?
     */
    template <typename C> 
    inline bool IsAbcUpper(C sym) 
    {
        return (sym >= (C)'A') && (sym <= (C)'Z'); 
    }

    /**
     * �������� ������ ��������� �������.
     */
    template <typename C>
    struct ExactMatching
    {
        ExactMatching(C sym)
            : Symbol(sym) 
        {}

        bool operator() (C sym) const 
        {
            return Symbol == sym; 
        }

    private:
        C Symbol;
    };
}

#endif /* _nd_strings_type_h__ */
