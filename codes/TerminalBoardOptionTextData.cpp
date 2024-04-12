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
  sub_B52920(&v8->fields);
  v8->fields._BehindTextFormat_k__BackingField = behindTextFormat;
  v8 = (TerminalBoardOptionTextData_o *)((char *)v8 + 32);
  sub_B52920(v8);
  LODWORD(v8->monitor) = itemImageId;
}


void __fastcall TerminalBoardOptionTextData__SetParamsToBehindText(
        TerminalBoardOptionTextData_o *this,
        System_Object_array *args,
        const MethodInfo *method)
{
  if ( !args )
    sub_B52A5C(this, 0LL);
  if ( *(_QWORD *)&args->max_length )
  {
    this->fields._BehindText_k__BackingField = System_String__Format_44647040(
                                                 this->fields._BehindTextFormat_k__BackingField,
                                                 args,
                                                 0LL);
    sub_B52920(&this->fields._BehindText_k__BackingField);
  }
  else
  {
    this->fields._BehindText_k__BackingField = this->fields._BehindTextFormat_k__BackingField;
    sub_B52920(&this->fields._BehindText_k__BackingField);
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
  sub_B52920(&this->fields._BehindText_k__BackingField);
}


void __fastcall TerminalBoardOptionTextData__set_BehindTextFormat(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._BehindTextFormat_k__BackingField = value;
  sub_B52920(&this->fields._BehindTextFormat_k__BackingField);
}


void __fastcall TerminalBoardOptionTextData__set_ForwardText(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._ForwardText_k__BackingField = value;
  sub_B52920(&this->fields);
}


void __fastcall TerminalBoardOptionTextData__set_ItemImageId(
        TerminalBoardOptionTextData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemImageId_k__BackingField = value;
}