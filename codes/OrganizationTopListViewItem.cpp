void OrganizationTopListViewItem___ctor(
        OrganizationTopListViewItem_o *this,
        int32_t index,
        OrganizationTopItemInfo_o *info,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.info = info;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.info, (int32_t)info, v6, v7, v8, v9, v10, v11);
}


void OrganizationTopListViewItem__Finalize(OrganizationTopListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *OrganizationTopListViewItem__get_EventData(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct OrganizationTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_2213CDC(this, method);
  return info->fields.eventData;
}


System_String_o *OrganizationTopListViewItem__get_ImageName(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct OrganizationTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_2213CDC(this, method);
  return info->fields.imageName;
}


System_String_o *OrganizationTopListViewItem__get_InfoText(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  OrganizationTopListViewItem_o *v3; // x19
  struct OrganizationTopItemInfo_o *info; // x8
  System_String_o *textCode; // x19

  v3 = this;
  if ( (byte_596BD63 & 1) == 0 )
  {
    this = (OrganizationTopListViewItem_o *)sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596BD63 = 1;
  }
  info = v3->fields.info;
  if ( !info )
    sub_2213CDC(this, method);
  textCode = info->fields.textCode;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  return LocalizationManager__Get(textCode, 0);
}