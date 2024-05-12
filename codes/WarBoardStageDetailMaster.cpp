void __fastcall WarBoardStageDetailMaster___ctor(WarBoardStageDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D2AE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardStageDetailMaster__WarBoardStageDetailEntity__string___ctor__);
    byte_438D2AE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    416,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_WarBoardStageDetailMaster__WarBoardStageDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageDetailEntity_o *__fastcall WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
        WarBoardStageDetailMaster_o *this,
        int32_t stageId,
        int32_t warBoardCommonReleaseId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  WarBoardStageDetailEntity_o *result; // x0
  __int64 v12; // x10

  if ( (byte_438D2AF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&WarBoardStageDetailEntity_TypeInfo);
    byte_438D2AF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (WarBoardStageDetailEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                list,
                                                v10,
                                                (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v12 = *(&WarBoardStageDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (WarBoardStageDetailEntity_c *)result->klass->_2.typeHierarchy[v12 - 1] == WarBoardStageDetailEntity_TypeInfo
          && result->fields.stageId == stageId
          && result->fields.warBoardCommonReleaseId == warBoardCommonReleaseId )
        {
          return result;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_15:
    sub_B7769C(list, *(_QWORD *)&stageId);
  }
  return 0LL;
}