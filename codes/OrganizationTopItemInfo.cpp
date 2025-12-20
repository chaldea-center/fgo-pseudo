void OrganizationTopItemInfo___ctor(
        OrganizationTopItemInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        System_String_o *eventData,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.kind = kind;
  this->fields.textCode = textCode;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.textCode, (int32_t)textCode, v11, v12, v13, v14, v15, v16);
  this->fields.imageName = imageName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.imageName, (int32_t)imageName, v17, v18, v19, v20, v21, v22);
  this->fields.eventData = eventData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.eventData, (int32_t)eventData, v23, v24, v25, v26, v27, v28);
}