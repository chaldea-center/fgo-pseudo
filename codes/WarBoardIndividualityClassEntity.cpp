void __fastcall WarBoardIndividualityClassEntity___ctor(
        WarBoardIndividualityClassEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4184066 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4184066 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
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
  __int64 v5; // x20
  __int64 v6; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_4184065 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_4184065 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(v6);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B2C434(MasterData_WarQuestSelectionMaster, method);
  }
  return (ServantClassEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                                   this->fields.classId,
                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}