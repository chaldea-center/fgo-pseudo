void __fastcall ServantFlagMaster___ctor(ServantFlagMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189F74 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string___ctor__, method);
    byte_4189F74 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    222,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantFlagEntity_o *__fastcall ServantFlagMaster__GetEntity(
        ServantFlagMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4189F72 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_4189F72 = 1;
  }
  PK = ServantFlagEntity__CreatePK(svtId, flagId, *(const MethodInfo **)&flagId);
  return (ServantFlagEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagMaster__TryGetEntity(
        ServantFlagMaster_o *this,
        ServantFlagEntity_o **entity,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4189F73 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__TryGetEntity__, entity);
    byte_4189F73 = 1;
  }
  PK = ServantFlagEntity__CreatePK(svtId, flagId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantFlagMaster__ServantFlagEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantFlagMaster__getBeforeEnhanceTdId(
        ServantFlagMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  ServantFlagEntity_o *Entity; // x0
  struct System_Int32_array *args; // x8
  __int64 v6; // x9
  __int64 v8; // x0

  Entity = ServantFlagMaster__GetEntity(this, svtId, flagId, method);
  if ( !Entity )
    return -1;
  args = Entity->fields.args;
  if ( !args )
    return -1;
  v6 = *(_QWORD *)&args->max_length;
  if ( !v6 )
    return -1;
  if ( !(_DWORD)v6 )
  {
    v8 = sub_B2C460(Entity);
    sub_B2C400(v8, 0LL);
  }
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
  __int64 v11; // x10

  if ( (byte_4189F75 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&ServantFlagEntity_TypeInfo, v8);
    byte_4189F75 = 1;
  }
  result = (ServantFlagEntity_o *)this->fields.list;
  if ( !result )
LABEL_13:
    sub_B2C434(result, *(_QWORD *)&svtId);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (ServantFlagEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_13;
    result = (ServantFlagEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                      v10,
                                      (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_13;
    v11 = *(&ServantFlagEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (ServantFlagEntity_c *)result->klass->_2.typeHierarchy[v11 - 1] != ServantFlagEntity_TypeInfo )
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