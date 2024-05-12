void __fastcall StoneShopEntity___ctor(StoneShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A57E & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438A57E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall StoneShopEntity__CreatePrimaryKey(StoneShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall StoneShopEntity__GetCountText(StoneShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A57D & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_438A57D = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__GetCountInfo(1, 0LL);
}


int32_t __fastcall StoneShopEntity__GetPrice(StoneShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.price;
}


int32_t __fastcall StoneShopEntity__GetPriceIcon(StoneShopEntity_o *this, const MethodInfo *method)
{
  return 22;
}


int32_t __fastcall StoneShopEntity__GetPriceUnitIcon(StoneShopEntity_o *this, const MethodInfo *method)
{
  return 12;
}


bool __fastcall StoneShopEntity__IsClosed(StoneShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t closedAt; // x8

  if ( (byte_438A57C & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438A57C = 1;
  }
  if ( !nowTime )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    nowTime = NetworkManager__getTime(0LL);
  }
  closedAt = this->fields.closedAt;
  return (_DWORD)closedAt && nowTime > closedAt;
}


bool __fastcall StoneShopEntity__IsEnable(StoneShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t closedAt; // x8
  bool result; // w0

  if ( (byte_438A57A & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438A57A = 1;
  }
  if ( !nowTime )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    nowTime = NetworkManager__getTime(0LL);
  }
  if ( nowTime < this->fields.openedAt )
    return 0;
  closedAt = this->fields.closedAt;
  result = 1;
  if ( (_DWORD)closedAt )
  {
    if ( nowTime > closedAt )
      return 0;
  }
  return result;
}


bool __fastcall StoneShopEntity__IsOpened(StoneShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_438A57B & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438A57B = 1;
  }
  if ( !nowTime )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    nowTime = NetworkManager__getTime(0LL);
  }
  return nowTime >= this->fields.openedAt;
}