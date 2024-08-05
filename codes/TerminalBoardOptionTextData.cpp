void __fastcall TerminalBoardOptionTextData___ctor(
        TerminalBoardOptionTextData_o *this,
        System_String_o *forwardText,
        System_String_o *behindTextFormat,
        int32_t itemImageId,
        const MethodInfo *method)
{
  TerminalBoardOptionTextData_o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields._ForwardText_k__BackingField = forwardText;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v8->fields, (int32_t)forwardText, v9, v10);
  v8->fields._BehindTextFormat_k__BackingField = behindTextFormat;
  v8 = (TerminalBoardOptionTextData_o *)((char *)v8 + 32);
  sub_1B64814((ServantStatusBattleListViewItem_o *)v8, (int32_t)behindTextFormat, v11, v12);
  LODWORD(v8->monitor) = itemImageId;
}


void __fastcall TerminalBoardOptionTextData__SetParamsToBehindText(
        TerminalBoardOptionTextData_o *this,
        System_Object_array *args,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x9
  struct System_String_o *BehindTextFormat_k__BackingField; // x1
  struct System_String_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( !args )
    sub_1B64ACC(this, 0LL);
  v6 = *(_QWORD *)&args->max_length;
  BehindTextFormat_k__BackingField = this->fields._BehindTextFormat_k__BackingField;
  if ( v6 )
  {
    v8 = System_String__Format_61398084(this->fields._BehindTextFormat_k__BackingField, args, 0LL);
    this->fields._BehindText_k__BackingField = v8;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields._BehindText_k__BackingField, (int32_t)v8, v9, v10);
  }
  else
  {
    this->fields._BehindText_k__BackingField = BehindTextFormat_k__BackingField;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&this->fields._BehindText_k__BackingField,
      (int32_t)BehindTextFormat_k__BackingField,
      (int32_t)method,
      v3);
  }
}


System_String_o *__fastcall TerminalBoardOptionTextData__get_BehindText(
        TerminalBoardOptionTextData_o *this,
        const MethodInfo *method)
{
  return this->fields._BehindText_k__BackingField;
}


System_String_o *__fastcall TerminalBoardOptionTextData__get_BehindTextFormat(
        TerminalBoardOptionTextData_o *this,
        const MethodInfo *method)
{
  return this->fields._BehindTextFormat_k__BackingField;
}


System_String_o *__fastcall TerminalBoardOptionTextData__get_ForwardText(
        TerminalBoardOptionTextData_o *this,
        const MethodInfo *method)
{
  return this->fields._ForwardText_k__BackingField;
}


int32_t __fastcall TerminalBoardOptionTextData__get_ItemImageId(
        TerminalBoardOptionTextData_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemImageId_k__BackingField;
}


void __fastcall TerminalBoardOptionTextData__set_BehindText(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._BehindText_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._BehindText_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall TerminalBoardOptionTextData__set_BehindTextFormat(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._BehindTextFormat_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._BehindTextFormat_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall TerminalBoardOptionTextData__set_ForwardText(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ForwardText_k__BackingField = value;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall TerminalBoardOptionTextData__set_ItemImageId(
        TerminalBoardOptionTextData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemImageId_k__BackingField = value;
}