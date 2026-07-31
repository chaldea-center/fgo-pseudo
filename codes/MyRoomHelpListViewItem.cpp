void MyRoomHelpListViewItem___ctor(
        MyRoomHelpListViewItem_o *this,
        int32_t index,
        MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info,
        bool isUse,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.info = info;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.info, (int32_t)info, v7, v8, v9, v10, v11, v12);
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
    sub_21FFECC(this, method);
  return info->fields.imageName;
}


System_String_o *MyRoomHelpListViewItem__get_InfoText(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomHelpListViewItem_o *v3; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *textCode; // x19

  v3 = this;
  if ( (byte_5933C24 & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5933C24 = 1;
  }
  info = v3->fields.info;
  if ( !info )
    sub_21FFECC(this, method);
  textCode = info->fields.textCode;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  return LocalizationManager__Get(textCode, 0);
}


System_String_o *MyRoomHelpListViewItem__get_ItemName(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomHelpListViewItem_o *v3; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *itemName; // x19

  v3 = this;
  if ( (byte_5933C25 & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5933C25 = 1;
  }
  info = v3->fields.info;
  if ( !info )
    sub_21FFECC(this, method);
  itemName = info->fields.itemName;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  return LocalizationManager__Get(itemName, 0);
}