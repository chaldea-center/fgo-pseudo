void ServantProfilePushEntity___ctor(ServantProfilePushEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939101 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939101 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantProfilePushEntity__CreatePK(int32_t svtId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5939100 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939100 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantProfilePushEntity__CreatePrimaryKey(ServantProfilePushEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantProfilePushEntity__CreatePK(this->fields.svtId, this->fields.idx, v2);
}


bool ServantProfilePushEntity__TimeCheck(ServantProfilePushEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_59390FE & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59390FE = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  return Time >= this->fields.startedAt && Time <= this->fields.endedAt;
}


bool ServantProfilePushEntity__TimeEnd(ServantProfilePushEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59390FF & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59390FF = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getTime(0) > this->fields.endedAt;
}