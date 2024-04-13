void __fastcall MyRoomHelpListViewItem___ctor(
        MyRoomHelpListViewItem_o *this,
        int32_t index,
        MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info,
        bool isUse,
        const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  v7 = this;
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  v7->fields.info = info;
  v7 = (MyRoomHelpListViewItem_o *)((char *)v7 + 112);
  sub_B5D560((BattleServantConfConponent_o *)v7, (System_Int32_array **)info, v8, v9, v10, v11, v12, v13);
  LOBYTE(v7->monitor) = isUse;
}


void __fastcall MyRoomHelpListViewItem__Finalize(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall MyRoomHelpListViewItem__ToString(MyRoomHelpListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MyRoomHelpListViewItem_o *v4; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8

  v4 = this;
  if ( (byte_42E853D & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_B5D5C4(&StringLiteral_12998/*"ShopHelpItem "*/, (_DWORD)method, v2, v3);
    byte_42E853D = 1;
  }
  info = v4->fields.info;
  if ( !info )
    sub_B5D69C(this, method);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_12998/*"ShopHelpItem "*/, info->fields.textCode, 0LL);
}


System_String_o *__fastcall MyRoomHelpListViewItem__get_ImageName(
        MyRoomHelpListViewItem_o *this,
        const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomHelpListViewItem_o *v4; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *textCode; // x19

  v4 = this;
  if ( (byte_42E853B & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E853B = 1;
  }
  info = v4->fields.info;
  if ( !info )
    sub_B5D69C(this, method);
  textCode = info->fields.textCode;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomHelpListViewItem_o *v4; // x19
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *itemName; // x19

  v4 = this;
  if ( (byte_42E853C & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E853C = 1;
  }
  info = v4->fields.info;
  if ( !info )
    sub_B5D69C(this, method);
  itemName = info->fields.itemName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(itemName, 0LL);
}