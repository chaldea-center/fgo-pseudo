void OrganizationTopListViewItem___ctor(
        OrganizationTopListViewItem_o *this,
        int32_t index,
        OrganizationTopItemInfo_o *info,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.info = info;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.info, (int32_t)info, v6, v7);
}


void OrganizationTopListViewItem__Finalize(OrganizationTopListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *OrganizationTopListViewItem__ToString(OrganizationTopListViewItem_o *this, const MethodInfo *method)
{
  OrganizationTopListViewItem_o *v2; // x19
  struct OrganizationTopItemInfo_o *info; // x8

  v2 = this;
  if ( (byte_4C22A90 & 1) == 0 )
  {
    this = (OrganizationTopListViewItem_o *)sub_1C2D490(&StringLiteral_10055/*"OrganizationTopItem "*/);
    byte_4C22A90 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1C2D6EC(this, method);
  return System_String__Concat_63457864((System_String_o *)StringLiteral_10055/*"OrganizationTopItem "*/, info->fields.textCode, 0);
}


System_String_o *OrganizationTopListViewItem__get_EventData(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct OrganizationTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C2D6EC(this, method);
  return info->fields.eventData;
}


System_String_o *OrganizationTopListViewItem__get_ImageName(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct OrganizationTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C2D6EC(this, method);
  return info->fields.imageName;
}


OrganizationTopItemInfo_o *OrganizationTopListViewItem__get_Info(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


System_String_o *OrganizationTopListViewItem__get_InfoText(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  OrganizationTopListViewItem_o *v2; // x19
  struct OrganizationTopItemInfo_o *info; // x8
  System_String_o *textCode; // x19

  v2 = this;
  if ( (byte_4C22A8F & 1) == 0 )
  {
    this = (OrganizationTopListViewItem_o *)sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C22A8F = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1C2D6EC(this, method);
  textCode = info->fields.textCode;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(textCode, 0);
}