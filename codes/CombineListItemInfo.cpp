void __fastcall CombineListItemInfo___ctor(
        CombineListItemInfo_o *this,
        int32_t kind,
        int32_t type,
        System_String_o *spriteName,
        System_String_o *eventData,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.kind = kind;
  this->fields.type = type;
  this->fields.spriteName = spriteName;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.spriteName, (int32_t)spriteName, v11, v12);
  this->fields.eventData = eventData;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.eventData, (int32_t)eventData, v13, v14);
}