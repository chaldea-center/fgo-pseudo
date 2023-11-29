void __fastcall OrganizationTopListViewItem___ctor(
        OrganizationTopListViewItem_o *this,
        int32_t index,
        OrganizationTopItemInfo_o *info,
        const MethodInfo *method)
{
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.info = info;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.info, (System_Int32_array **)info, v6, v7, v8, v9, v10, v11);
}


void __fastcall OrganizationTopListViewItem__Finalize(OrganizationTopListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall OrganizationTopListViewItem__ToString(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct OrganizationTopItemInfo_o *info; // x8

  if ( (byte_40F7FB5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10116, method);
    byte_40F7FB5 = 1;
  }
  info = this->fields.info;
  if ( !info )
    sub_B170D4();
  return System_String__Concat_43743732((System_String_o *)StringLiteral_10116, info->fields.textCode, 0LL);
}


System_String_o *__fastcall OrganizationTopListViewItem__get_EventData(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct OrganizationTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B170D4();
  return info->fields.eventData;
}


System_String_o *__fastcall OrganizationTopListViewItem__get_ImageName(
        OrganizationTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct OrganizationTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B170D4();
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
  struct OrganizationTopItemInfo_o *info; // x8
  System_String_o *textCode; // x19

  if ( (byte_40F7FB4 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40F7FB4 = 1;
  }
  info = this->fields.info;
  if ( !info )
    sub_B170D4();
  textCode = info->fields.textCode;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(textCode, 0LL);
}