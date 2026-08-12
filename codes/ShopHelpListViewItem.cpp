void ShopHelpListViewItem___ctor(
        ShopHelpListViewItem_o *this,
        int32_t index,
        ShopHelpItemInfo_o *info,
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


System_String_o *ShopHelpListViewItem__get_ImageName(ShopHelpListViewItem_o *this, const MethodInfo *method)
{
  struct ShopHelpItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_2213CDC(this, method);
  return info->fields._ImageName_k__BackingField;
}


ShopHelpItemInfo_o *ShopHelpListViewItem__get_Info(ShopHelpListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.info;
}


System_String_o *ShopHelpListViewItem__get_InfoText(ShopHelpListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ShopHelpListViewItem_o *v3; // x19
  struct ShopHelpItemInfo_o *info; // x8
  System_String_o *TextCode_k__BackingField; // x19

  v3 = this;
  if ( (byte_596C85C & 1) == 0 )
  {
    this = (ShopHelpListViewItem_o *)sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596C85C = 1;
  }
  info = v3->fields.info;
  if ( !info )
    sub_2213CDC(this, method);
  TextCode_k__BackingField = info->fields._TextCode_k__BackingField;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  return LocalizationManager__Get(TextCode_k__BackingField, 0);
}


bool ShopHelpListViewItem__get_IsStone(ShopHelpListViewItem_o *this, const MethodInfo *method)
{
  struct ShopHelpItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_2213CDC(this, method);
  return info->fields._Kind_k__BackingField == 6;
}


int32_t ShopHelpListViewItem__get_LineCount(ShopHelpListViewItem_o *this, const MethodInfo *method)
{
  struct ShopHelpItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_2213CDC(this, method);
  return info->fields._Line_k__BackingField;
}