object Form1: TForm1
  Left = 0
  Top = 0
  Align = alTop
  Caption = 'Form1'
  ClientHeight = 985
  ClientWidth = 1662
  Color = 14931228
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesigned
  TextHeight = 15
  object Label1: TLabel
    Left = 696
    Top = 184
    Width = 238
    Height = 68
    Caption = 'Player X:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -60
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
  end
  object lblPlayerX: TLabel
    Left = 1000
    Top = 184
    Width = 34
    Height = 68
    Caption = '0'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -60
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
  end
  object lblPlayerO: TLabel
    Left = 1000
    Top = 272
    Width = 34
    Height = 68
    Caption = '0'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -60
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 696
    Top = 272
    Width = 253
    Height = 68
    Caption = 'Player O:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -60
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1681
    Height = 145
    Caption = 'Tic Tac Toes'
    Color = 14934935
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -97
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 0
  end
  object btnTic1: TButton
    Left = 8
    Top = 151
    Width = 140
    Height = 140
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -80
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = btnTic1Click
  end
  object btnTic2: TButton
    Left = 154
    Top = 151
    Width = 140
    Height = 140
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -80
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = btnTic2Click
  end
  object btnTic3: TButton
    Left = 300
    Top = 151
    Width = 140
    Height = 140
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -80
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = btnTic3Click
  end
  object btnTic4: TButton
    Left = 8
    Top = 297
    Width = 140
    Height = 140
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -80
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = btnTic4Click
  end
  object btnTic5: TButton
    Left = 154
    Top = 297
    Width = 140
    Height = 140
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -80
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnClick = btnTic5Click
  end
  object btnTic6: TButton
    Left = 300
    Top = 297
    Width = 140
    Height = 140
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -80
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = btnTic6Click
  end
  object btnTic7: TButton
    Left = 8
    Top = 443
    Width = 140
    Height = 140
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -80
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = btnTic7Click
  end
  object btnTic8: TButton
    Left = 154
    Top = 443
    Width = 140
    Height = 140
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -80
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = btnTic8Click
  end
  object btnTic9: TButton
    Left = 300
    Top = 443
    Width = 140
    Height = 140
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -80
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    OnClick = btnTic9Click
  end
  object btnReset: TButton
    Left = 472
    Top = 443
    Width = 240
    Height = 140
    Caption = 'RESET'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -60
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    OnClick = btnResetClick
  end
  object btnNewGame: TButton
    Left = 746
    Top = 443
    Width = 240
    Height = 140
    Caption = 'NEW GAME'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -60
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
    WordWrap = True
    OnClick = btnNewGameClick
  end
  object btnExit: TButton
    Left = 1020
    Top = 443
    Width = 240
    Height = 140
    Caption = 'EXIT'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -60
    Font.Name = 'Bauhaus 93'
    Font.Style = []
    ParentFont = False
    TabOrder = 12
    OnClick = btnExitClick
  end
end
