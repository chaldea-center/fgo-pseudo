void __fastcall ServantCollectionEntity___ctor(ServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B121C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B121C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantCollectionEntity__CreatePK(
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42B121A & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B121A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           collectionNo,
           priority,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v3; // x20
  __int64 v4; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_42B121B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42B121B = 1;
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
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B52A5C(MasterData_WarQuestSelectionMaster, method);
  }
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)MasterData_WarQuestSelectionMaster,
           this->fields.commonReleaseId,
           0LL,
           0,
           0LL);
}