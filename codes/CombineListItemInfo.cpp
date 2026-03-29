void CombineListItemInfo___ctor(
        CombineListItemInfo_o *this,
        int32_t kind,
        int32_t type,
        System_String_o *spriteName,
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

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.kind = kind;
  this->fields.type = type;
  this->fields.spriteName = spriteName;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.spriteName,
    (int32_t)spriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.eventData = eventData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventData, (int32_t)eventData, v17, v18, v19, v20, v21, v22);
}