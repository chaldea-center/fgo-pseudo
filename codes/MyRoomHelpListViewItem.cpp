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
  ListViewItem___ctor_41884928((ListViewItem_o *)this, index, 0LL);
  v6->fields.info = info;
  v6 = (MyRoomHelpListViewItem_o *)((char *)v6 + 112);
  sub_1C13CC8(v6);
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
  if ( (byte_4BB010E & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1C13D24(&StringLiteral_12974/*"Shader \"Lines/Colored Blended\" {SubShader { Pass { \tBlend SrcAlpha OneMinusSrcAlpha \tZWrite Off Cull Off Fog { Mode Off } \tBindChannels {\tBind \"vertex\", vertex Bind \"color\", color }} } }"*/, method);
    byte_4BB010E = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1C13F80(this, method);
  return System_String__Concat_62967944((System_String_o *)StringLiteral_12974/*"Shader \"Lines/Colored Blended\" {SubShader { Pass { \tBlend SrcAlpha OneMinusSrcAlpha \tZWrite Off Cull Off Fog { Mode Off } \tBindChannels {\tBind \"vertex\", vertex Bind \"color\", color }} } }"*/, info->fields.textCode, 0LL);
}


System_String_o *__fastcall MyRoomHelpListViewItem__get_ImageName(
        MyRoomHelpListViewItem_o *this,
        const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C13F80(this, method);
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
  if ( (byte_4BB010C & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1C13D24(&LocalizationManager_TypeInfo, method);
    byte_4BB010C = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1C13F80(this, method);
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
  if ( (byte_4BB010D & 1) == 0 )
  {
    this = (MyRoomHelpListViewItem_o *)sub_1C13D24(&LocalizationManager_TypeInfo, method);
    byte_4BB010D = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1C13F80(this, method);
  itemName = info->fields.itemName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(itemName, 0LL);
}