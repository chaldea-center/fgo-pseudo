void __fastcall ServantFlagMaster___ctor(ServantFlagMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B884 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string___ctor__);
    byte_4A5B884 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    224,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantFlagEntity_o *__fastcall ServantFlagMaster__GetEntity(
        ServantFlagMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B882 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__GetEntity__);
    byte_4A5B882 = 1;
  }
  PK = (Il2CppObject *)ServantFlagEntity__CreatePK(svtId, flagId, *(const MethodInfo **)&flagId);
  return (ServantFlagEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__GetEntity__);
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

  if ( (byte_4A5B883 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__TryGetEntity__);
    byte_4A5B883 = 1;
  }
  PK = (Il2CppObject *)ServantFlagEntity__CreatePK(svtId, flagId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__TryGetEntity__);
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
    sub_1B88814(Entity, v5);
  return args->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
ServantFlagEntity_o *__fastcall ServantFlagMaster__getEntity(
        ServantFlagMaster_o *this,
        int32_t svtId,
        int32_t flagType,
        const MethodInfo *method)
{
  ServantFlagEntity_o *result; // x0
  int32_t v8; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B885 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&ServantFlagEntity_TypeInfo);
    byte_4A5B885 = 1;
  }
  result = (ServantFlagEntity_o *)this->fields.list;
  if ( !result )
LABEL_13:
    sub_1B8880C(result, *(_QWORD *)&svtId);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (ServantFlagEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_13;
    result = (ServantFlagEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v8,
                                      (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_13;
    methodPtr_low = LOBYTE(ServantFlagEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantFlagEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantFlagEntity_TypeInfo )
    {
      goto LABEL_13;
    }
    if ( result->fields.svtId == svtId && result->fields.flagType == flagType )
      return result;
    result = (ServantFlagEntity_o *)this->fields.list;
    ++v8;
    if ( !result )
      goto LABEL_13;
  }
  return 0LL;
}