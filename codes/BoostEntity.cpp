void __fastcall BoostEntity___ctor(BoostEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438AE67 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438AE67 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BoostEntity__CreatePrimaryKey(BoostEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall BoostEntity__IsValidPeriod(BoostEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_438AE66 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438AE66 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && Time < this->fields.endedAt;
}