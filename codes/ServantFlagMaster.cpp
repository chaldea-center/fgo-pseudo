void __fastcall ServantFlagMaster___ctor(ServantFlagMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B6731F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string___ctor__, method);
    byte_4B6731F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    228,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantFlagEntity_o *__fastcall ServantFlagMaster__GetEntity(
        ServantFlagMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B6731D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_4B6731D = 1;
  }
  PK = (Il2CppObject *)ServantFlagEntity__CreatePK(svtId, flagId, *(const MethodInfo **)&flagId);
  return (ServantFlagEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31FDB1C *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__GetEntity__);
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

  if ( (byte_4B6731E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__TryGetEntity__, entity);
    byte_4B6731E = 1;
  }
  PK = (Il2CppObject *)ServantFlagEntity__CreatePK(svtId, flagId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__TryGetEntity__);
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
    sub_1BE4D30(Entity, v5);
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
  __int64 v8; // x1
  ServantFlagEntity_o *result; // x0
  int32_t v10; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B67320 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&ServantFlagEntity_TypeInfo, v8);
    byte_4B67320 = 1;
  }
  result = (ServantFlagEntity_o *)this->fields.list;
  if ( !result )
LABEL_13:
    sub_1BE4D28(result, *(_QWORD *)&svtId);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (ServantFlagEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_13;
    result = (ServantFlagEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v10,
                                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    ++v10;
    if ( !result )
      goto LABEL_13;
  }
  return 0LL;
}