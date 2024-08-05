void __fastcall MstMissionDisplayInfoEntity___ctor(MstMissionDisplayInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE891 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_int___ctor__, method);
    byte_49FE891 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D5F80 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_49FE890 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    byte_49FE890 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && Time <= this->fields.endedAt;
}