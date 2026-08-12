void OrganizationTopItemInfo___ctor(
        OrganizationTopItemInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        System_String_o *eventData,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.kind = kind;
  this->fields.textCode = textCode;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.textCode,
    (int32_t)textCode,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.imageName = imageName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.imageName,
    (int32_t)imageName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.eventData = eventData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventData,
    (int32_t)eventData,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}