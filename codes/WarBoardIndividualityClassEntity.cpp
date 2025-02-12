void __fastcall WarBoardIndividualityClassEntity___ctor(
        WarBoardIndividualityClassEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC8ADB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, method);
    byte_4BC8ADB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall WarBoardIndividualityClassEntity__CreatePrimaryKey(
        WarBoardIndividualityClassEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.individuality;
}


ServantClassEntity_o *__fastcall WarBoardIndividualityClassEntity__GetServantClassEntity(
        WarBoardIndividualityClassEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4BC8ADA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    byte_4BC8ADA = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6CAB0(v2);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6CAB0(v2);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1C1AE30(MasterData_object, method);
  }
  return (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                   this->fields.classId,
                                   (const MethodInfo_3248678 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}