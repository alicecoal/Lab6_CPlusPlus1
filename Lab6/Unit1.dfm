object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'App'
  ClientHeight = 479
  ClientWidth = 701
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object LabelPrint: TLabel
    Left = 472
    Top = 73
    Width = 37
    Height = 18
    Caption = 'Print'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object TreeView: TTreeView
    Left = 8
    Top = 8
    Width = 303
    Height = 249
    Indent = 19
    TabOrder = 0
  end
  object ButtonDirect: TButton
    Left = 327
    Top = 94
    Width = 114
    Height = 33
    Caption = 'Direct Order'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = ButtonDirectClick
  end
  object ButtonAscending: TButton
    Left = 327
    Top = 16
    Width = 114
    Height = 33
    Caption = 'Ascending Order'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = ButtonAscendingClick
  end
  object ButtonReverse: TButton
    Left = 327
    Top = 55
    Width = 114
    Height = 33
    Caption = 'Reverse Order'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = ButtonReverseClick
  end
  object Memo: TMemo
    Left = 327
    Top = 133
    Width = 366
    Height = 124
    Lines.Strings = (
      'Memo1')
    TabOrder = 4
  end
  object Key: TEdit
    Left = 344
    Top = 394
    Width = 121
    Height = 21
    TabOrder = 5
    TextHint = 'Key'
  end
  object String: TEdit
    Left = 344
    Top = 421
    Width = 121
    Height = 21
    TabOrder = 6
    TextHint = 'String'
  end
  object AddTree: TButton
    Left = 352
    Top = 288
    Width = 97
    Height = 41
    Caption = 'Add to tree'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = AddTreeClick
  end
  object ButtonFindSum: TButton
    Left = 536
    Top = 32
    Width = 145
    Height = 41
    Caption = 'Find amount of letters'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = ButtonFindSumClick
  end
  object ButtonBalance: TButton
    Left = 536
    Top = 421
    Width = 121
    Height = 41
    Caption = 'Balance'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    OnClick = ButtonBalanceClick
  end
  object Edit: TEdit
    Left = 536
    Top = 382
    Width = 121
    Height = 21
    TabOrder = 10
    TextHint = 'key'
    OnClick = EditClick
  end
  object Find: TButton
    Left = 595
    Top = 327
    Width = 98
    Height = 41
    Caption = 'Find'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
    OnClick = FindClick
  end
  object Delete: TButton
    Left = 495
    Top = 327
    Width = 98
    Height = 41
    Caption = 'Delete'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 12
    OnClick = DeleteClick
  end
  object Sum: TEdit
    Left = 536
    Top = 79
    Width = 145
    Height = 21
    Enabled = False
    TabOrder = 13
  end
  object AddArray: TButton
    Left = 352
    Top = 335
    Width = 97
    Height = 41
    Caption = 'Add to array'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 14
    OnClick = AddArrayClick
  end
  object ButtonAdd: TButton
    Left = 495
    Top = 280
    Width = 198
    Height = 33
    Caption = 'Add from array to tree'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 15
    OnClick = ButtonAddClick
  end
  object List: TMemo
    Left = 24
    Top = 296
    Width = 287
    Height = 175
    Lines.Strings = (
      'List')
    TabOrder = 16
  end
end
