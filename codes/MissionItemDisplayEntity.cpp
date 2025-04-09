void __fastcall MissionItemDisplayEntity___ctor(MissionItemDisplayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB23C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BB23C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MissionItemDisplayEntity__CreatePrimaryKey(
        MissionItemDisplayEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall MissionItemDisplayEntity__IsEnable(MissionItemDisplayEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_49BB23B & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    byte_49BB23B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.openedAt && Time <= this->fields.closedAt;
}