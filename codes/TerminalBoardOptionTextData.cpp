void TerminalBoardOptionTextData___ctor(
        TerminalBoardOptionTextData_o *this,
        System_String_o *forwardText,
        System_String_o *behindTextFormat,
        int32_t itemImageId,
        bool isLeft,
        bool isCenter,
        int32_t alignment,
        const MethodInfo *method)
{
  TerminalBoardOptionTextData_o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v12->fields._ForwardText_k__BackingField = forwardText;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->fields, (int32_t)forwardText, v13, v14);
  v12->fields._BehindTextFormat_k__BackingField = behindTextFormat;
  v12 = (TerminalBoardOptionTextData_o *)((char *)v12 + 32);
  sub_1C32BC4((CGThumbnailListItem_o *)v12, (int32_t)behindTextFormat, v15, v16);
  LODWORD(v12->monitor) = itemImageId;
  HIDWORD(v12->monitor) = alignment;
}


void TerminalBoardOptionTextData__SetParamsToBehindText(
        TerminalBoardOptionTextData_o *this,
        System_Object_array *args,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  il2cpp_array_size_t max_length; // x9
  struct System_String_o *BehindTextFormat_k__BackingField; // x1
  struct System_String_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( !args )
    sub_1C32E7C(this);
  max_length = args->max_length;
  BehindTextFormat_k__BackingField = this->fields._BehindTextFormat_k__BackingField;
  if ( max_length )
  {
    v8 = System_String__Format_63559972(this->fields._BehindTextFormat_k__BackingField, args, 0);
    this->fields._BehindText_k__BackingField = v8;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._BehindText_k__BackingField, (int32_t)v8, v9, v10);
  }
  else
  {
    this->fields._BehindText_k__BackingField = BehindTextFormat_k__BackingField;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields._BehindText_k__BackingField,
      (int32_t)BehindTextFormat_k__BackingField,
      (int32_t)method,
      v3);
  }
}


int32_t TerminalBoardOptionTextData__get_Alignment(TerminalBoardOptionTextData_o *this, const MethodInfo *method)
{
  return this->fields._Alignment_k__BackingField;
}


System_String_o *TerminalBoardOptionTextData__get_BehindText(
        TerminalBoardOptionTextData_o *this,
        const MethodInfo *method)
{
  return this->fields._BehindText_k__BackingField;
}


System_String_o *TerminalBoardOptionTextData__get_BehindTextFormat(
        TerminalBoardOptionTextData_o *this,
        const MethodInfo *method)
{
  return this->fields._BehindTextFormat_k__BackingField;
}


System_String_o *TerminalBoardOptionTextData__get_ForwardText(
        TerminalBoardOptionTextData_o *this,
        const MethodInfo *method)
{
  return this->fields._ForwardText_k__BackingField;
}


bool TerminalBoardOptionTextData__get_IsLeft(TerminalBoardOptionTextData_o *this, const MethodInfo *method)
{
  return this->fields._Alignment_k__BackingField == 1;
}


int32_t TerminalBoardOptionTextData__get_ItemImageId(TerminalBoardOptionTextData_o *this, const MethodInfo *method)
{
  return this->fields._ItemImageId_k__BackingField;
}


void TerminalBoardOptionTextData__set_BehindText(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BehindText_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._BehindText_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void TerminalBoardOptionTextData__set_BehindTextFormat(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BehindTextFormat_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._BehindTextFormat_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void TerminalBoardOptionTextData__set_ForwardText(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ForwardText_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void TerminalBoardOptionTextData__set_ItemImageId(
        TerminalBoardOptionTextData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemImageId_k__BackingField = value;
}