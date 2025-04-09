void __fastcall MyRoomHelpListViewItem___ctor(
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
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  v6->fields.info = info;
  v6 = (MyRoomHelpListViewItem_o *)((char *)v6 + 112);
  sub_1B4CF34((CGThumbnailListItem_o *)v6, (int32_t)info, v8, v9);
  LOBYTE(v6->monitor) = v7;
}


void __fastcall MyRoomHelpListViewItem__Finalize(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall MyRoomHelpListViewItem__ToString(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *v2; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8

  v2 = this;
  if ( (byte_49B67E1 & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1B4CF90(&StringLiteral_12554/*"ShopHelpItem "*/, method);
    byte_49B67E1 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1B4D1EC(this, method);
  return System_String__Concat_61093468((System_String_o *)StringLiteral_12554/*"ShopHelpItem "*/, info->fields.textCode, 0LL);
}


System_String_o *__fastcall MyRoomHelpListViewItem__get_ImageName(
        MyRoomHelpListViewItem_o *this,
        const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1B4D1EC(this, method);
  return info->fields.imageName;
}


MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *__fastcall MyRoomHelpListViewItem__get_Info(
        MyRoomHelpListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


System_String_o *__fastcall MyRoomHelpListViewItem__get_InfoText(
        MyRoomHelpListViewItem_o *this,
        const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *v2; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *textCode; // x19

  v2 = this;
  if ( (byte_49B67DF & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    byte_49B67DF = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1B4D1EC(this, method);
  textCode = info->fields.textCode;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(textCode, 0LL);
}


bool __fastcall MyRoomHelpListViewItem__get_IsUse(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


System_String_o *__fastcall MyRoomHelpListViewItem__get_ItemName(
        MyRoomHelpListViewItem_o *this,
        const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *v2; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *itemName; // x19

  v2 = this;
  if ( (byte_49B67E0 & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    byte_49B67E0 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1B4D1EC(this, method);
  itemName = info->fields.itemName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(itemName, 0LL);
}