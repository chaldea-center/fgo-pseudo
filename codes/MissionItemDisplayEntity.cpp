void MissionItemDisplayEntity___ctor(MissionItemDisplayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30EF4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D30EF4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t MissionItemDisplayEntity__CreatePrimaryKey(MissionItemDisplayEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool MissionItemDisplayEntity__IsEnable(MissionItemDisplayEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4D30EF3 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30EF3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return Time >= this->fields.openedAt && Time <= this->fields.closedAt;
}