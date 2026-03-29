void MyRoomHelpListViewItem___ctor(
        MyRoomHelpListViewItem_o *this,
        int32_t index,
        MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info,
        bool isUse,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.info = info;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.info, (int32_t)info, v7, v8, v9, v10, v11, v12);
}


void MyRoomHelpListViewItem__Finalize(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *MyRoomHelpListViewItem__get_ImageName(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C93D2C(this, method);
  return info->fields.imageName;
}


System_String_o *MyRoomHelpListViewItem__get_InfoText(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *v2; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *textCode; // x19

  v2 = this;
  if ( (byte_4D2BFC3 & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2BFC3 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1C93D2C(this, method);
  textCode = info->fields.textCode;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(textCode, 0);
}


System_String_o *MyRoomHelpListViewItem__get_ItemName(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *v2; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *itemName; // x19

  v2 = this;
  if ( (byte_4D2BFC4 & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2BFC4 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1C93D2C(this, method);
  itemName = info->fields.itemName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(itemName, 0);
}