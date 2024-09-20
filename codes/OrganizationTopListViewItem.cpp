void __fastcall OrganizationTopListViewItem___ctor(
        OrganizationTopListViewItem_o *this,
        int32_t index,
        OrganizationTopItemInfo_o *info,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3

  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.info = info;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.info, (int32_t)info, v6, v7);
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
  if ( (byte_4A56E24 & 1) == 0 )
  {
    this = (OrganizationTopListViewItem_o *)sub_1B885B0(&StringLiteral_10059/*"OrganizationTopItem "*/);
    byte_4A56E24 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1B8880C(this, method);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_10059/*"OrganizationTopItem "*/, info->fields.textCode, 0LL);
}


System_String_o *__fastcall OrganizationTopListViewItem__get_EventData(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct OrganizationTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1B8880C(this, method);
  return info->fields.eventData;
}


System_String_o *__fastcall OrganizationTopListViewItem__get_ImageName(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct OrganizationTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1B8880C(this, method);
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
  if ( (byte_4A56E23 & 1) == 0 )
  {
    this = (OrganizationTopListViewItem_o *)sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56E23 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1B8880C(this, method);
  textCode = info->fields.textCode;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(textCode, 0LL);
}