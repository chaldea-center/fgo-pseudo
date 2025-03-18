void __fastcall ServantFlagMaster___ctor(ServantFlagMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C227E7 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string___ctor__, method);
    byte_4C227E7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    230,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantFlagEntity_o *__fastcall ServantFlagMaster__GetEntity(
        ServantFlagMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C227E5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_4C227E5 = 1;
  }
  PK = (Il2CppObject *)ServantFlagEntity__CreatePK(svtId, flagId, *(const MethodInfo **)&flagId);
  return (ServantFlagEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_329F900 *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagMaster__TryGetEntity(
        ServantFlagMaster_o *this,
        ServantFlagEntity_o **entity,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C227E6 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__TryGetEntity__, entity);
    byte_4C227E6 = 1;
  }
  PK = (Il2CppObject *)ServantFlagEntity__CreatePK(svtId, flagId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantFlagMaster__getBeforeEnhanceTdId(
        ServantFlagMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  ServantFlagEntity_o *Entity; // x0
  __int64 v5; // x1
  struct System_Int32_array *args; // x8
  __int64 v7; // x9

  Entity = ServantFlagMaster__GetEntity(this, svtId, flagId, method);
  if ( !Entity )
    return -1;
  args = Entity->fields.args;
  if ( !args )
    return -1;
  v7 = *(_QWORD *)&args->max_length;
  if ( !v7 )
    return -1;
  if ( !(_DWORD)v7 )
    sub_1C3B9C8(Entity, v5);
  return args->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
ServantFlagEntity_o *__fastcall ServantFlagMaster__getEntity(
        ServantFlagMaster_o *this,
        int32_t svtId,
        int32_t flagType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  ServantFlagEntity_o *result; // x0
  int32_t v9; // w22

  if ( (byte_4C227E8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ServantFlagEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ServantFlagEntity__get_Item__, v7);
    byte_4C227E8 = 1;
  }
  result = (ServantFlagEntity_o *)this->fields.list;
  if ( !result )
LABEL_11:
    sub_1C3B9C0(result, *(_QWORD *)&svtId);
  v9 = 0;
  while ( v9 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_ServantFlagEntity__get_Count__) )
  {
    result = (ServantFlagEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_11;
    result = (ServantFlagEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v9,
                                      (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_ServantFlagEntity__get_Item__);
    if ( !result )
      goto LABEL_11;
    if ( result->fields.svtId == svtId && result->fields.flagType == flagType )
      return result;
    result = (ServantFlagEntity_o *)this->fields.list;
    ++v9;
    if ( !result )
      goto LABEL_11;
  }
  return 0LL;
}