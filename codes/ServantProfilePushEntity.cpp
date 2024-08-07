void __fastcall ServantProfilePushEntity___ctor(ServantProfilePushEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF2EB & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF2EB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantProfilePushEntity__CreatePK(int32_t svtId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_49FF2EA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_49FF2EA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           idx,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantProfilePushEntity__CreatePrimaryKey(
        ServantProfilePushEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantProfilePushEntity__CreatePK(this->fields.svtId, this->fields.idx, v2);
}


bool __fastcall ServantProfilePushEntity__TimeCheck(ServantProfilePushEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_49FF2E8 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    byte_49FF2E8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && Time <= this->fields.endedAt;
}


bool __fastcall ServantProfilePushEntity__TimeEnd(ServantProfilePushEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF2E9 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    byte_49FF2E9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) > this->fields.endedAt;
}