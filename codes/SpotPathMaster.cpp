void SpotPathMaster___ctor(SpotPathMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D315F3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__);
    byte_4D315F3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    223,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__);
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
  int32_t v12; // w22
  int v13; // w23

  if ( (byte_4D315F4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_SpotPathEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_SpotPathEntity__get_Item__);
    byte_4D315F4 = 1;
  }
  result = (SpotPathEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_SpotPathEntity__get_Count__);
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
                                     (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_SpotPathEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.valueType == 1 && result->fields.targetId == v13 && result->fields.targetValue == groupId )
        return result;
      if ( v11 == ++v12 )
        return 0;
    }
LABEL_14:
    sub_1C93D2C(result, *(_QWORD *)&eventId);
  }
  return 0;
}