void StoneShopEntity___ctor(StoneShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC808E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC808E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
}


int32_t StoneShopEntity__CreatePrimaryKey(StoneShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *StoneShopEntity__GetCountText(StoneShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC808D & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    byte_4CC808D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetCountInfo(1, 0);
}


int32_t StoneShopEntity__GetPrice(StoneShopEntity_o *this, const MethodInfo *method)
{
  return this->fields.price;
}


int32_t StoneShopEntity__GetPriceIcon(StoneShopEntity_o *this, const MethodInfo *method)
{
  return 22;
}


int32_t StoneShopEntity__GetPriceUnitIcon(StoneShopEntity_o *this, const MethodInfo *method)
{
  return 12;
}


bool StoneShopEntity__IsClosed(StoneShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t closedAt; // x8

  if ( (byte_4CC808C & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC808C = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  closedAt = this->fields.closedAt;
  return (_DWORD)closedAt && nowTime > closedAt;
}


bool StoneShopEntity__IsEnable(StoneShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t closedAt; // x8
  bool result; // w0

  if ( (byte_4CC808A & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC808A = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
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


bool StoneShopEntity__IsOpened(StoneShopEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_4CC808B & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC808B = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  return nowTime >= this->fields.openedAt;
}