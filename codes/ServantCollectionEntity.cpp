void __fastcall ServantCollectionEntity___ctor(ServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CD54 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1CD54 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCollectionEntity__CreatePK(
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B1CD52 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4B1CD52 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           collectionNo,
           priority,
           (const MethodInfo_3018C2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4B1CD53 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_4B1CD53 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C1B45C(v2);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1B45C(v2);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1BCB254(MasterData_object, method);
  }
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)MasterData_object,
           this->fields.commonReleaseId,
           0LL,
           0,
           0LL);
}