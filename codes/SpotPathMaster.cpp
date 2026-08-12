void SpotPathMaster___ctor(SpotPathMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59714DC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__);
    byte_59714DC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    225,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__);
}


int32_t SpotPathMaster__CreateTargetId(int32_t eventId, int32_t termId, const MethodInfo *method)
{
  return termId + 100 * eventId;
}


// local variable allocation has failed, the output may be wrong!
SpotPathEntity_o *SpotPathMaster__GetSpotPathEntity(
        SpotPathMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  SpotPathEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int v12; // w23
  int32_t v13; // w22

  if ( (byte_59714DD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_SpotPathEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_SpotPathEntity__get_Item__);
    byte_59714DD = 1;
  }
  result = (SpotPathEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_SpotPathEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = termId + 100 * eventId;
    v13 = 0;
    while ( 1 )
    {
      result = (SpotPathEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (SpotPathEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                     (System_Collections_ObjectModel_Collection_T__o *)result,
                                     v13,
                                     (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_SpotPathEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.valueType == 1 && result->fields.targetId == v12 && result->fields.targetValue == groupId )
        return result;
      if ( v11 == ++v13 )
        return 0;
    }
LABEL_14:
    sub_2213CDC(result, *(_QWORD *)&eventId);
  }
  return 0;
}