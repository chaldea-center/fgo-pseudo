void __fastcall TerminalBoardOptionTextData___ctor(
        TerminalBoardOptionTextData_o *this,
        System_String_o *forwardText,
        System_String_o *behindTextFormat,
        int32_t itemImageId,
        const MethodInfo *method)
{
  TerminalBoardOptionTextData_o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields._ForwardText_k__BackingField = forwardText;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v8->fields,
    (System_Int32_array **)forwardText,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v8->fields._BehindTextFormat_k__BackingField = behindTextFormat;
  v8 = (TerminalBoardOptionTextData_o *)((char *)v8 + 32);
  sub_B16F98((BattleServantConfConponent_o *)v8, (System_Int32_array **)behindTextFormat, v15, v16, v17, v18, v19, v20);
  LODWORD(v8->monitor) = itemImageId;
}


void __fastcall TerminalBoardOptionTextData__SetParamsToBehindText(
        TerminalBoardOptionTextData_o *this,
        System_Object_array *args,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x9
  struct System_String_o *BehindTextFormat_k__BackingField; // x1
  struct System_String_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( !args )
    sub_B170D4();
  v10 = *(_QWORD *)&args->max_length;
  BehindTextFormat_k__BackingField = this->fields._BehindTextFormat_k__BackingField;
  if ( v10 )
  {
    v12 = System_String__Format_43822456(this->fields._BehindTextFormat_k__BackingField, args, 0LL);
    this->fields._BehindText_k__BackingField = v12;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._BehindText_k__BackingField,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  else
  {
    this->fields._BehindText_k__BackingField = BehindTextFormat_k__BackingField;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._BehindText_k__BackingField,
      (System_Int32_array **)BehindTextFormat_k__BackingField,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BehindText_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._BehindText_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalBoardOptionTextData__set_BehindTextFormat(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BehindTextFormat_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._BehindTextFormat_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalBoardOptionTextData__set_ForwardText(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ForwardText_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalBoardOptionTextData__set_ItemImageId(
        TerminalBoardOptionTextData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemImageId_k__BackingField = value;
}