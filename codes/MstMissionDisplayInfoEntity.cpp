void __fastcall MstMissionDisplayInfoEntity___ctor(MstMissionDisplayInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185BC9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4185BC9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MstMissionDisplayInfoEntity__CreatePrimaryKey(
        MstMissionDisplayInfoEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall MstMissionDisplayInfoEntity__isOpenNow(MstMissionDisplayInfoEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4185BC8 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4185BC8 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && Time <= this->fields.endedAt;
}