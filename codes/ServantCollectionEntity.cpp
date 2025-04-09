void __fastcall ServantCollectionEntity___ctor(ServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB578 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BB578 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCollectionEntity__CreatePK(
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49BB576 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_49BB576 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           collectionNo,
           priority,
           (const MethodInfo_2EFFCAC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_49BB577 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_49BB577 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1B9D620(v2);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1B9D620(v2);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B4D1EC(MasterData_object, method);
  }
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)MasterData_object,
           this->fields.commonReleaseId,
           0LL,
           0,
           0LL);
}