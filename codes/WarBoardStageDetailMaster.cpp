void __fastcall WarBoardStageDetailMaster___ctor(WarBoardStageDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41892EC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardStageDetailMaster__WarBoardStageDetailEntity__string___ctor__, method);
    byte_41892EC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    415,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardStageDetailMaster__WarBoardStageDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageDetailEntity_o *__fastcall WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
        WarBoardStageDetailMaster_o *this,
        int32_t stageId,
        int32_t warBoardCommonReleaseId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  WarBoardStageDetailEntity_o *result; // x0
  __int64 v14; // x10

  if ( (byte_41892ED & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&WarBoardStageDetailEntity_TypeInfo, v8);
    byte_41892ED = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (WarBoardStageDetailEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                list,
                                                v12,
                                                (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v14 = *(&WarBoardStageDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (WarBoardStageDetailEntity_c *)result->klass->_2.typeHierarchy[v14 - 1] == WarBoardStageDetailEntity_TypeInfo
          && result->fields.stageId == stageId
          && result->fields.warBoardCommonReleaseId == warBoardCommonReleaseId )
        {
          return result;
        }
      }
      if ( ++v12 >= v11 )
        return 0LL;
    }
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&stageId);
  }
  return 0LL;
}