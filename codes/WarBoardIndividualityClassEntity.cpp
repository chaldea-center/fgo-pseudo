void __fastcall WarBoardIndividualityClassEntity___ctor(
        WarBoardIndividualityClassEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AC82F & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42AC82F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v3; // x20
  __int64 v4; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_42AC82E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42AC82E = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AEB684(v4);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v4 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B52A5C(MasterData_WarQuestSelectionMaster, method);
  }
  return (ServantClassEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                   this->fields.classId,
                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}