void __fastcall MissionItemDisplayEntity___ctor(MissionItemDisplayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C9F5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1C9F5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4B1C9F4 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B1C9F4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.openedAt && Time <= this->fields.closedAt;
}