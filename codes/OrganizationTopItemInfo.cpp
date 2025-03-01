void __fastcall OrganizationTopItemInfo___ctor(
        OrganizationTopItemInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        System_String_o *eventData,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.kind = kind;
  this->fields.textCode = textCode;
  sub_1C2E0D0(&this->fields.textCode);
  this->fields.imageName = imageName;
  sub_1C2E0D0(&this->fields.imageName);
  this->fields.eventData = eventData;
  sub_1C2E0D0(&this->fields.eventData);
}