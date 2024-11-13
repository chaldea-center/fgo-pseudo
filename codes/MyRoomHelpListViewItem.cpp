void __fastcall MyRoomHelpListViewItem___ctor(
        MyRoomHelpListViewItem_o *this,
        int32_t index,
        MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info,
        bool isUse,
        const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *v6; // x20
  bool v7; // w21

  v6 = this;
  v7 = isUse;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  v6->fields.info = info;
  v6 = (MyRoomHelpListViewItem_o *)((char *)v6 + 112);
  sub_1BCA784(v6, info);
  LOBYTE(v6->monitor) = v7;
}


void __fastcall MyRoomHelpListViewItem__Finalize(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall MyRoomHelpListViewItem__ToString(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomHelpListViewItem_o *v3; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8

  v3 = this;
  if ( (byte_4B11CDD & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1BCA7E0(&StringLiteral_12904/*"ShopHelpItem "*/, method, v2);
    byte_4B11CDD = 1;
  }
  info = v3->fields.info;
  if ( !info )
    sub_1BCAA3C(this, method);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_12904/*"ShopHelpItem "*/, info->fields.textCode, 0LL);
}


System_String_o *__fastcall MyRoomHelpListViewItem__get_ImageName(
        MyRoomHelpListViewItem_o *this,
        const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  MyRoomHelpListViewItem_o *v3; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *textCode; // x19

  v3 = this;
  if ( (byte_4B11CDB & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B11CDB = 1;
  }
  info = v3->fields.info;
  if ( !info )
    sub_1BCAA3C(this, method);
  textCode = info->fields.textCode;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
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
  __int64 v2; // x2
  MyRoomHelpListViewItem_o *v3; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *itemName; // x19

  v3 = this;
  if ( (byte_4B11CDC & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B11CDC = 1;
  }
  info = v3->fields.info;
  if ( !info )
    sub_1BCAA3C(this, method);
  itemName = info->fields.itemName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get(itemName, 0LL);
}