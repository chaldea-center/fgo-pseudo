void __fastcall ServantCollectionEntity___ctor(ServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189E95 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189E95 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCollectionEntity__CreatePK(
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4189E93 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4189E93 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           collectionNo,
           priority,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantCollectionEntity__CreatePrimaryKey(
        ServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCollectionEntity__CreatePK(this->fields.collectionNo, this->fields.priority, v2);
}


int32_t __fastcall ServantCollectionEntity__GetCollectionEffectType(
        ServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.type;
}


bool __fastcall ServantCollectionEntity__IsOpenCondition(ServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_4189E94 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v3);
    byte_4189E94 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(v5);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v5 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B2C434(MasterData_WarQuestSelectionMaster, method);
  }
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)MasterData_WarQuestSelectionMaster,
           this->fields.commonReleaseId,
           0LL,
           0,
           0LL);
}