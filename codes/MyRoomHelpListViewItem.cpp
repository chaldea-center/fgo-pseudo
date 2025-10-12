void MyRoomHelpListViewItem___ctor(
        MyRoomHelpListViewItem_o *this,
        int32_t index,
        MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info,
        bool isUse,
        const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *v6; // x20
  bool v7; // w21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v6 = this;
  v7 = isUse;
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  v6->fields.info = info;
  v6 = (MyRoomHelpListViewItem_o *)((char *)v6 + 120);
  sub_1C32BC4((CGThumbnailListItem_o *)v6, (int32_t)info, v8, v9);
  LOBYTE(v6->monitor) = v7;
}


void MyRoomHelpListViewItem__Finalize(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *MyRoomHelpListViewItem__ToString(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *v2; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8

  v2 = this;
  if ( (byte_4C33139 & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1C32C20(&StringLiteral_12849/*"ShopHelpItem "*/);
    byte_4C33139 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1C32E7C(this);
  return System_String__Concat_63518544((System_String_o *)StringLiteral_12849/*"ShopHelpItem "*/, info->fields.textCode, 0);
}


System_String_o *MyRoomHelpListViewItem__get_ImageName(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C32E7C(this);
  return info->fields.imageName;
}


MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *MyRoomHelpListViewItem__get_Info(
        MyRoomHelpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


System_String_o *MyRoomHelpListViewItem__get_InfoText(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *v2; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *textCode; // x19

  v2 = this;
  if ( (byte_4C33137 & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C33137 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1C32E7C(this);
  textCode = info->fields.textCode;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(textCode, 0);
}


bool MyRoomHelpListViewItem__get_IsUse(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


System_String_o *MyRoomHelpListViewItem__get_ItemName(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *v2; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *itemName; // x19

  v2 = this;
  if ( (byte_4C33138 & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C33138 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1C32E7C(this);
  itemName = info->fields.itemName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(itemName, 0);
}