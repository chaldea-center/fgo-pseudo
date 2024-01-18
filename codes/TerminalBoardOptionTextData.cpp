void __fastcall TerminalBoardOptionTextData___ctor(
        TerminalBoardOptionTextData_o *this,
        System_String_o *forwardText,
        System_String_o *behindTextFormat,
        int32_t itemImageId,
        const MethodInfo *method)
{
  TerminalBoardOptionTextData_o *v8; // x22

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields._ForwardText_k__BackingField = forwardText;
  sub_B2C2F8(&v8->fields, forwardText);
  v8->fields._BehindTextFormat_k__BackingField = behindTextFormat;
  v8 = (TerminalBoardOptionTextData_o *)((char *)v8 + 32);
  sub_B2C2F8(v8, behindTextFormat);
  LODWORD(v8->monitor) = itemImageId;
}


void __fastcall TerminalBoardOptionTextData__SetParamsToBehindText(
        TerminalBoardOptionTextData_o *this,
        System_Object_array *args,
        const MethodInfo *method)
{
  __int64 v5; // x9
  struct System_String_o *BehindTextFormat_k__BackingField; // x1
  struct System_String_o *v7; // x0

  if ( !args )
    sub_B2C434(this, 0LL);
  v5 = *(_QWORD *)&args->max_length;
  BehindTextFormat_k__BackingField = this->fields._BehindTextFormat_k__BackingField;
  if ( v5 )
  {
    v7 = System_String__Format_44384256(this->fields._BehindTextFormat_k__BackingField, args, 0LL);
    this->fields._BehindText_k__BackingField = v7;
    sub_B2C2F8(&this->fields._BehindText_k__BackingField, v7);
  }
  else
  {
    this->fields._BehindText_k__BackingField = BehindTextFormat_k__BackingField;
    sub_B2C2F8(&this->fields._BehindText_k__BackingField, BehindTextFormat_k__BackingField);
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
  this->fields._BehindText_k__BackingField = value;
  sub_B2C2F8(&this->fields._BehindText_k__BackingField, value);
}


void __fastcall TerminalBoardOptionTextData__set_BehindTextFormat(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._BehindTextFormat_k__BackingField = value;
  sub_B2C2F8(&this->fields._BehindTextFormat_k__BackingField, value);
}


void __fastcall TerminalBoardOptionTextData__set_ForwardText(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._ForwardText_k__BackingField = value;
  sub_B2C2F8(&this->fields, value);
}


void __fastcall TerminalBoardOptionTextData__set_ItemImageId(
        TerminalBoardOptionTextData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemImageId_k__BackingField = value;
}