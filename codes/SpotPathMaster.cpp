void __fastcall SpotPathMaster___ctor(SpotPathMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188BD8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__, method);
    byte_4188BD8 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    215,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int___ctor__);
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
  __int64 v9; // x1
  __int64 v10; // x1
  SpotPathEntity_o *result; // x0
  int32_t Count; // w0
  int v13; // w23
  int32_t v14; // w21
  int32_t v15; // w22
  __int64 v16; // x10

  if ( (byte_4188BD9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&SpotPathEntity_TypeInfo, v10);
    byte_4188BD9 = 1;
  }
  result = (SpotPathEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = termId + 100 * eventId;
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      result = (SpotPathEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (SpotPathEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                     v15,
                                     (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v16 = *(&SpotPathEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (SpotPathEntity_c *)result->klass->_2.typeHierarchy[v16 - 1] != SpotPathEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.valueType == 1 && result->fields.targetId == v13 && result->fields.targetValue == groupId )
        return result;
      if ( ++v15 >= v14 )
        return 0LL;
    }
LABEL_16:
    sub_B2C434(result, *(_QWORD *)&eventId);
  }
  return 0LL;
}