void MissionItemDisplayEntity___ctor(MissionItemDisplayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938BE0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938BE0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t MissionItemDisplayEntity__CreatePrimaryKey(MissionItemDisplayEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool MissionItemDisplayEntity__IsEnable(MissionItemDisplayEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_5938BDF & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938BDF = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  return Time >= this->fields.openedAt && Time <= this->fields.closedAt;
}