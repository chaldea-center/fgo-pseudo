void ServantCollectionEntity___ctor(ServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938F6D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938F6D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantCollectionEntity__CreatePK(int32_t collectionNo, int32_t priority, const MethodInfo *method)
{
  if ( (byte_5938F6B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938F6B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           collectionNo,
           priority,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantCollectionEntity__CreatePrimaryKey(ServantCollectionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCollectionEntity__CreatePK(this->fields.collectionNo, this->fields.priority, v2);
}


int32_t ServantCollectionEntity__GetCollectionEffectType(ServantCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


bool ServantCollectionEntity__IsOpenCondition(ServantCollectionEntity_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_5938F6C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_5938F6C = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_2237AF8(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_2237AF8(v2);
  MasterData_object = **(Il2CppObject ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_21FFECC(MasterData_object, method);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, this->fields.commonReleaseId, 0, 0, 0);
}