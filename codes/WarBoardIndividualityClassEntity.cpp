void WarBoardIndividualityClassEntity___ctor(WarBoardIndividualityClassEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31B6E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D31B6E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t WarBoardIndividualityClassEntity__CreatePrimaryKey(
        WarBoardIndividualityClassEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.individuality;
}


ServantClassEntity_o *WarBoardIndividualityClassEntity__GetServantClassEntity(
        WarBoardIndividualityClassEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4D31B6D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4D31B6D = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C69B68(v2);
  MasterData_object = **(Il2CppObject ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0 )
  {
    sub_1C93D2C(MasterData_object, method);
  }
  return (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                   this->fields.classId,
                                   (const MethodInfo_3463274 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}