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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v12->fields._ForwardText_k__BackingField = forwardText;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12->fields, (int32_t)forwardText, v13, v14, v15, v16, v17, v18);
  v12->fields._BehindTextFormat_k__BackingField = behindTextFormat;
  v12 = (TerminalBoardOptionTextData_o *)((char *)v12 + 32);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v12, (int32_t)behindTextFormat, v19, v20, v21, v22, v23, v24);
  LODWORD(v12->monitor) = itemImageId;
  HIDWORD(v12->monitor) = alignment;
}


void TerminalBoardOptionTextData__SetParamsToBehindText(
        TerminalBoardOptionTextData_o *this,
        System_Object_array *args,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  il2cpp_array_size_t max_length; // x9
  struct System_String_o *BehindTextFormat_k__BackingField; // x1
  struct System_String_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( !args )
    sub_1C942F0(this, 0);
  max_length = args->max_length;
  BehindTextFormat_k__BackingField = this->fields._BehindTextFormat_k__BackingField;
  if ( max_length )
  {
    v12 = System_String__Format_64459188(this->fields._BehindTextFormat_k__BackingField, args, 0);
    this->fields._BehindText_k__BackingField = v12;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._BehindText_k__BackingField,
      (int32_t)v12,
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
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._BehindText_k__BackingField,
      (int32_t)BehindTextFormat_k__BackingField,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BehindText_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._BehindText_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalBoardOptionTextData__set_BehindTextFormat(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BehindTextFormat_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._BehindTextFormat_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalBoardOptionTextData__set_ForwardText(
        TerminalBoardOptionTextData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ForwardText_k__BackingField = value;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void TerminalBoardOptionTextData__set_ItemImageId(
        TerminalBoardOptionTextData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemImageId_k__BackingField = value;
}