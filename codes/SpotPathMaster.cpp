void __fastcall SpotPathMaster___ctor(SpotPathMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BBFF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__);
    byte_4A5BBFF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    217,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__);
}


int32_t __fastcall SpotPathMaster__CreateTargetId(int32_t eventId, int32_t termId, const MethodInfo *method)
{
  return termId + 100 * eventId;
}


int32_t __fastcall SpotPathMaster__GetRaceSpotId(
        SpotPathMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  SpotPathEntity_o *SpotPathEntity; // x0

  SpotPathEntity = SpotPathMaster__GetSpotPathEntity(this, eventId, termId, groupId, method);
  if ( SpotPathEntity )
    LODWORD(SpotPathEntity) = SpotPathEntity->fields.spotId;
  return (int)SpotPathEntity;
}


// local variable allocation has failed, the output may be wrong!
SpotPathEntity_o *__fastcall SpotPathMaster__GetSpotPathEntity(
        SpotPathMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  SpotPathEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  int v13; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BC00 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&SpotPathEntity_TypeInfo);
    byte_4A5BC00 = 1;
  }
  result = (SpotPathEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = termId + 100 * eventId;
    while ( 1 )
    {
      result = (SpotPathEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (SpotPathEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     (System_Collections_ObjectModel_Collection_T__o *)result,
                                     v12,
                                     (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      methodPtr_low = LOBYTE(SpotPathEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SpotPathEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != SpotPathEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.valueType == 1 && result->fields.targetId == v13 && result->fields.targetValue == groupId )
        return result;
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_16:
    sub_1B8880C(result, *(_QWORD *)&eventId);
  }
  return 0LL;
}