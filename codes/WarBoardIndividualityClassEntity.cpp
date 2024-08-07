void __fastcall WarBoardIndividualityClassEntity___ctor(
        WarBoardIndividualityClassEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FFABB & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FFABB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_49FFABA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1B64A00(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_49FFABA = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB68DC(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB68DC(v6);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1B64C5C(MasterData_object, method);
  }
  return (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                   this->fields.classId,
                                   (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}