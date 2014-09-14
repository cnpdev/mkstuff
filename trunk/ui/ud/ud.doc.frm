VERSION 5.00
Begin VB.Form CDoc 
   Appearance      =   0  'Flat
   AutoRedraw      =   -1  'True
   BackColor       =   &H00F2FFFF&
   Caption         =   "..."
   ClientHeight    =   6585
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   9630
   BeginProperty Font 
      Name            =   "Small Fonts"
      Size            =   6.75
      Charset         =   204
      Weight          =   400
      Underline       =   0   'False
      Italic          =   0   'False
      Strikethrough   =   0   'False
   EndProperty
   Icon            =   "ud.doc.frx":0000
   LinkTopic       =   "Form1"
   MDIChild        =   -1  'True
   MousePointer    =   2  'Cross
   ScaleHeight     =   439
   ScaleMode       =   3  'Pixel
   ScaleWidth      =   642
End
Attribute VB_Name = "CDoc"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
DefInt A-Z

Private Const cxMinSize = 256
Private Const cyMinSize = 256

Private backBmp As Long
Private backDc As Long
Private lastFont As Long
Private hFont As Long
Private originalCaption As String

Public Scheme As New CScheme

Private Sub Form_KeyDown(code As Integer, bshift As Integer)
    ' TODO: configure keyboard shortcuts
    Select Case code
        Case 8                  ' backspace - reset view
            Scheme.ResetView
            Invalidate Me, 0
            
        Case Asc("G")
            Scheme.ToggleGridOnOff
            Invalidate Me, 0
            
        Case Asc("R")
            Scheme.ToggleRulesOnOff
            Invalidate Me, 0
            
    End Select
End Sub

Private Sub Form_Load()
    On Error Resume Next
    Me.ScaleMode = vbPixels
    Me.AutoRedraw = False
    hFont = 0
    originalCaption = Me.Caption
    InstallUDocWndProc Me
End Sub

Public Sub AddTo(ByRef owner As MDIForm, title As String, visbl As Boolean, winsta As Integer)
    Me.Caption = title
    originalCaption = title
    Me.WindowState = winsta
    Me.Visible = visbl
    UpdateTitle
End Sub

Public Sub DrawBackBufer(ByVal hdc As Long)
    BitBlt hdc, 0, 0, Me.ScaleWidth, Me.ScaleHeight, backDc, 0, 0, vbSrcCopy
End Sub

Private Sub Form_Paint()
    OnPaint
    DrawBackBufer Me.hdc
End Sub

Private Sub Form_Resize()
    CreateDBuffer Me.ScaleWidth, Me.ScaleHeight
End Sub

Private Sub Form_Unload(Cancel As Integer)
    DeleteDBuffer
    
    If hFont = 0 Then DeleteObject hFont
End Sub

Private Sub DeleteDBuffer()
    On Error Resume Next
    
    DeleteObject SelectObject(backDc, lastFont)
    DeleteObject SelectObject(backDc, backBmp)
    DeleteDC backDc
    
    'Debug.Print "BKBUFFER: del &H" + Hex(backDc) + " &H" + Hex(backBmp)
End Sub

Private Sub CreateDBuffer(cx As Integer, cy As Integer)
    On Error Resume Next
    
    Dim lfnt As Long
    Dim bmp As Long
    Dim dc As Long
    
    If cx < cxMinSize Then cx = cxMinSize
    If cy < cyMinSize Then cy = cyMinSize
   
    dc = CreateCompatibleDC(ByVal 0&)
    bmp = CreateBitmap(cx, cy, GetDeviceCaps(dc, PLANES), GetDeviceCaps(dc, BITSPIXEL), ByVal 0&)
    bmp = SelectObject(dc, bmp)
    
    DeleteObject hFont
    hFont = OLEFont2HFONT(Me.Font, dc)
    lfnt = SelectObject(dc, hFont)
    
    DeleteDBuffer

    backBmp = bmp
    backDc = dc
    lastFont = lfnt
        
    'Debug.Print "BKBUFFER: new " + CStr(cx) + " x " + CStr(cy)
    Form_Paint
End Sub

Public Sub OnPaint()
    On Error GoTo PaintErr
    
    Dim rc As RECT
    GetClientRect Me.hwnd, rc
    
    FillSolidRect backDc, rc, DocBgColor
    
    Scheme.Draw backDc, 0, 0, rc.Right, rc.Bottom
    Exit Sub
    
PaintErr:
    Debug.Print "CHILDRAW: " + Err.Description
    Resume Next
End Sub

Public Sub OnMouseWheel(keys As Integer, delta As Integer, xp As Long, yp As Long)
    Scheme.IncrementScale CDbl(delta), keys
    UpdateTitle
    Invalidate Me
End Sub

Public Sub UpdateTitle()
    Me.Caption = originalCaption + " ^" + CStr(CInt(Scheme.GetScale() * 100#)) + "% " + Scheme.DebugString
End Sub

Public Sub OnBeginDrag(keys As Integer, xp As Long, yp As Long)
    Scheme.BeginDrag keys, xp, yp
End Sub

Public Sub OnDrag(keys As Integer, xp As Long, yp As Long)
    Scheme.Drag keys, xp, yp
    Invalidate Me, 0
End Sub

Public Sub OnEndDrag(keys As Integer, xp As Long, yp As Long)
    Scheme.EndDrag keys, xp, yp
    UpdateTitle
    Invalidate Me, 0
End Sub
