void ServantFlagMaster___ctor(ServantFlagMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D1BD & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string___ctor__);
    byte_4D2D1BD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    230,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantFlagEntity_o *ServantFlagMaster__GetEntity(
        ServantFlagMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D1BB & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__GetEntity__);
    byte_4D2D1BB = 1;
  }
  PK = (Il2CppObject *)ServantFlagEntity__CreatePK(svtId, flagId, *(const MethodInfo **)&flagId);
  return (ServantFlagEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_345FF78 *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantFlagMaster__TryGetEntity(
        ServantFlagMaster_o *this,
        ServantFlagEntity_o **entity,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2D1BC & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__TryGetEntity__);
    byte_4D2D1BC = 1;
  }
  PK = (Il2CppObject *)ServantFlagEntity__CreatePK(svtId, flagId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__TryGetEntity__);
}


int32_t ServantFlagMaster__getBeforeEnhanceTdId(
        ServantFlagMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  ServantFlagEntity_o *Entity; // x0
  struct System_Int32_array *args; // x8
  il2cpp_array_size_t max_length; // x9

  Entity = ServantFlagMaster__GetEntity(this, svtId, flagId, method);
  if ( !Entity )
    return -1;
  args = Entity->fields.args;
  if ( !args )
    return -1;
  max_length = args->max_length;
  if ( !max_length )
    return -1;
  if ( !(_DWORD)max_length )
    sub_1C942F8(Entity);
  return args->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
ServantFlagEntity_o *ServantFlagMaster__getEntity(
        ServantFlagMaster_o *this,
        int32_t svtId,
        int32_t flagType,
        const MethodInfo *method)
{
  ServantFlagEntity_o *result; // x0
  int32_t v8; // w22

  if ( (byte_4D2D1BE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ServantFlagEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ServantFlagEntity__get_Item__);
    byte_4D2D1BE = 1;
  }
  result = (ServantFlagEntity_o *)this->fields.list;
  if ( !result )
LABEL_11:
    sub_1C942F0(result, *(_QWORD *)&svtId);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_ServantFlagEntity__get_Count__) )
  {
    result = (ServantFlagEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_11;
    result = (ServantFlagEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v8,
                                      (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_ServantFlagEntity__get_Item__);
    if ( !result )
      goto LABEL_11;
    if ( result->fields.svtId == svtId && result->fields.flagType == flagType )
      return result;
    result = (ServantFlagEntity_o *)this->fields.list;
    ++v8;
    if ( !result )
      goto LABEL_11;
  }
  return 0;
}