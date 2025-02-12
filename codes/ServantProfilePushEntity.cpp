void __fastcall ServantProfilePushEntity___ctor(ServantProfilePushEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC83C4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC83C4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantProfilePushEntity__CreatePK(int32_t svtId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4BC83C3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4BC83C3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           idx,
           (const MethodInfo_2F9D6B4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4BC83C1 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    byte_4BC83C1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && Time <= this->fields.endedAt;
}


bool __fastcall ServantProfilePushEntity__TimeEnd(ServantProfilePushEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC83C2 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    byte_4BC83C2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) > this->fields.endedAt;
}