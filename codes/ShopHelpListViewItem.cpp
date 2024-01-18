void __fastcall ShopHelpListViewItem___ctor(
        ShopHelpListViewItem_o *this,
        int32_t index,
        ShopHelpItemInfo_o *info,
        const MethodInfo *method)
{
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.info = info;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.info, (System_Int32_array **)info, v6, v7, v8, v9, v10, v11);
}


System_String_o *__fastcall ShopHelpListViewItem__get_ImageName(ShopHelpListViewItem_o *this, const MethodInfo *method)
{
  struct ShopHelpItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return info->fields._ImageName_k__BackingField;
}


ShopHelpItemInfo_o *__fastcall ShopHelpListViewItem__get_Info(ShopHelpListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.info;
}


System_String_o *__fastcall ShopHelpListViewItem__get_InfoText(ShopHelpListViewItem_o *this, const MethodInfo *method)
{
  ShopHelpListViewItem_o *v2; // x19
  struct ShopHelpItemInfo_o *info; // x8
  System_String_o *TextCode_k__BackingField; // x19

  v2 = this;
  if ( (byte_4189163 & 1) == 0 )
  {
    this = (ShopHelpListViewItem_o *)sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_4189163 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  TextCode_k__BackingField = info->fields._TextCode_k__BackingField;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(TextCode_k__BackingField, 0LL);
}


bool __fastcall ShopHelpListViewItem__get_IsStone(ShopHelpListViewItem_o *this, const MethodInfo *method)
{
  struct ShopHelpItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return info->fields._Kind_k__BackingField == 6;
}


int32_t __fastcall ShopHelpListViewItem__get_LineCount(ShopHelpListViewItem_o *this, const MethodInfo *method)
{
  struct ShopHelpItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return info->fields._Line_k__BackingField;
}