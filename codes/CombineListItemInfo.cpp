void __fastcall CombineListItemInfo___ctor(
        CombineListItemInfo_o *this,
        int32_t kind,
        int32_t type,
        System_String_o *spriteName,
        System_String_o *eventData,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.kind = kind;
  this->fields.type = type;
  this->fields.spriteName = spriteName;
  sub_B0D840(&this->fields.spriteName, spriteName);
  this->fields.eventData = eventData;
  sub_B0D840(&this->fields.eventData, eventData);
}