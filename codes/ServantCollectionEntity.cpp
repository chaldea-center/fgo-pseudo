void __fastcall ServantCollectionEntity___ctor(ServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B7D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B7D5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantCollectionEntity__CreatePK(
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A5B7D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B7D3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           collectionNo,
           priority,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v3; // x0
  __int64 v4; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4A5B7D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5B7D4 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  MasterData_object = **(Il2CppObject ***)(v4 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(MasterData_object, method);
  }
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)MasterData_object,
           this->fields.commonReleaseId,
           0LL,
           0,
           0LL);
}