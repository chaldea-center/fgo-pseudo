void MstMissionDisplayInfoEntity___ctor(MstMissionDisplayInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C277DA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C277DA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t MstMissionDisplayInfoEntity__CreatePrimaryKey(MstMissionDisplayInfoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool MstMissionDisplayInfoEntity__isOpenNow(MstMissionDisplayInfoEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4C277D9 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C277D9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return Time >= this->fields.startedAt && Time <= this->fields.endedAt;
}