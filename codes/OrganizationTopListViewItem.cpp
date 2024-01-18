void __fastcall OrganizationTopListViewItem___ctor(
        OrganizationTopListViewItem_o *this,
        int32_t index,
        OrganizationTopItemInfo_o *info,
        const MethodInfo *method)
{
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.info = info;
  sub_B2C2F8(&this->fields.info, info);
}


void __fastcall OrganizationTopListViewItem__Finalize(OrganizationTopListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall OrganizationTopListViewItem__ToString(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  OrganizationTopListViewItem_o *v2; // x19
  struct OrganizationTopItemInfo_o *info; // x8

  v2 = this;
  if ( (byte_418519A & 1) == 0 )
  {
    this = (OrganizationTopListViewItem_o *)sub_B2C35C(&StringLiteral_10149/*"OrganizationTopItem "*/, method);
    byte_418519A = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_10149/*"OrganizationTopItem "*/, info->fields.textCode, 0LL);
}


System_String_o *__fastcall OrganizationTopListViewItem__get_EventData(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct OrganizationTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return info->fields.eventData;
}


System_String_o *__fastcall OrganizationTopListViewItem__get_ImageName(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct OrganizationTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return info->fields.imageName;
}


OrganizationTopItemInfo_o *__fastcall OrganizationTopListViewItem__get_Info(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


System_String_o *__fastcall OrganizationTopListViewItem__get_InfoText(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  OrganizationTopListViewItem_o *v2; // x19
  struct OrganizationTopItemInfo_o *info; // x8
  System_String_o *textCode; // x19

  v2 = this;
  if ( (byte_4185199 & 1) == 0 )
  {
    this = (OrganizationTopListViewItem_o *)sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_4185199 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  textCode = info->fields.textCode;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(textCode, 0LL);
}