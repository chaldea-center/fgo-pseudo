void __fastcall StoneShopEntity___ctor(StoneShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7AF9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E7AF9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall StoneShopEntity__CreatePrimaryKey(StoneShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall StoneShopEntity__GetCountText(StoneShopEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7AF8 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7AF8 = 1;
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
  __int64 v3; // x3
  int64_t Time; // x20
  int64_t closedAt; // x8

  Time = nowTime;
  if ( (byte_42E7AF7 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, nowTime, (_DWORD)method, v3);
    byte_42E7AF7 = 1;
  }
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  closedAt = this->fields.closedAt;
  return (_DWORD)closedAt && Time > closedAt;
}


bool __fastcall StoneShopEntity__IsEnable(StoneShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x20
  int64_t closedAt; // x8
  bool result; // w0

  Time = nowTime;
  if ( (byte_42E7AF5 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, nowTime, (_DWORD)method, v3);
    byte_42E7AF5 = 1;
  }
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
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
  __int64 v3; // x3
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_42E7AF6 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, nowTime, (_DWORD)method, v3);
    byte_42E7AF6 = 1;
  }
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  return Time >= this->fields.openedAt;
}