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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v12->fields._ForwardText_k__BackingField = forwardText;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->fields, (int32_t)forwardText, v13, v14, v15, v16, v17, v18);
  v12->fields._BehindTextFormat_k__BackingField = behindTextFormat;
  v12 = (TerminalBoardOptionTextData_o *)((char *)v12 + 32);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v12, (int32_t)behindTextFormat, v19, v20, v21, v22, v23, v24);
  LODWORD(v12->monitor) = itemImageId;
  HIDWORD(v12->monitor) = alignment;
}


void TerminalBoardOptionTextData__SetParamsToBehindText(
        TerminalBoardOptionTextData_o *this,
        System_Object_array *args,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *BehindTextFormat_k__BackingField; // x8
  struct System_String_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( !args )
    sub_21FFECC(this, 0);
  BehindTextFormat_k__BackingField = this->fields._BehindTextFormat_k__BackingField;
  if ( args->max_length )
  {
    v10 = System_String__Format_75484712(this->fields._BehindTextFormat_k__BackingField, args, 0);
    this->fields._BehindText_k__BackingField = v10;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._BehindText_k__BackingField,
      (int32_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  else
  {
    this->fields._BehindText_k__BackingField = BehindTextFormat_k__BackingField;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._BehindText_k__BackingField,
      (int32_t)BehindTextFormat_k__BackingField,
      (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BehindText_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BehindText_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BehindTextFormat_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BehindTextFormat_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ForwardText_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalBoardOptionTextData__set_ItemImageId(
        TerminalBoardOptionTextData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemImageId_k__BackingField = value;
}