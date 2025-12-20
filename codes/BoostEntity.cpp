void BoostEntity___ctor(BoostEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C514 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2C514 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


int32_t BoostEntity__CreatePrimaryKey(BoostEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool BoostEntity__IsValidPeriod(BoostEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4D2C513 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2C513 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return Time >= this->fields.startedAt && Time < this->fields.endedAt;
}