void OrganizationTopItemInfo___ctor(
        OrganizationTopItemInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        System_String_o *eventData,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.kind = kind;
  this->fields.textCode = textCode;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.textCode, (int32_t)textCode, v11, v12);
  this->fields.imageName = imageName;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.imageName, (int32_t)imageName, v13, v14);
  this->fields.eventData = eventData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventData, (int32_t)eventData, v15, v16);
}