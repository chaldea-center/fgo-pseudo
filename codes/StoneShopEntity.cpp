void __fastcall StoneShopEntity___ctor(StoneShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEEFD & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_int___ctor__, method);
    byte_49FEEFD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D5F80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall StoneShopEntity__CreatePrimaryKey(StoneShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall StoneShopEntity__GetCountText(StoneShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEEFC & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    byte_49FEEFC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
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
  int64_t Time; // x20
  int64_t closedAt; // x8

  Time = nowTime;
  if ( (byte_49FEEFB & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, nowTime);
    byte_49FEEFB = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  closedAt = this->fields.closedAt;
  return (_DWORD)closedAt && Time > closedAt;
}


bool __fastcall StoneShopEntity__IsEnable(StoneShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  int64_t closedAt; // x8
  bool result; // w0

  Time = nowTime;
  if ( (byte_49FEEF9 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, nowTime);
    byte_49FEEF9 = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  if ( Time < this->fields.openedAt )
    return 0;
  closedAt = this->fields.closedAt;
  result = 1;
  if ( (_DWORD)closedAt )
  {
    if ( Time > closedAt )
      return 0;
  }
  return result;
}


bool __fastcall StoneShopEntity__IsOpened(StoneShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_49FEEFA & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, nowTime);
    byte_49FEEFA = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  return Time >= this->fields.openedAt;
}