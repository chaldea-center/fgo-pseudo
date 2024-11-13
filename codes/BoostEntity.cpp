void __fastcall BoostEntity___ctor(BoostEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15EE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B15EE4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BoostEntity__CreatePrimaryKey(BoostEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall BoostEntity__IsValidPeriod(BoostEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t Time; // x0

  if ( (byte_4B15EE3 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B15EE3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && Time < this->fields.endedAt;
}