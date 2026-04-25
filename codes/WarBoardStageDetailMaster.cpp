void WarBoardStageDetailMaster___ctor(WarBoardStageDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E05C22 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_WarBoardStageDetailMaster__WarBoardStageDetailEntity__string___ctor__);
    byte_4E05C22 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    423,
    (const MethodInfo_34EBC44 *)Method_DataMasterBase_WarBoardStageDetailMaster__WarBoardStageDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageDetailEntity_o *WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
        WarBoardStageDetailMaster_o *this,
        int32_t stageId,
        int32_t warBoardCommonReleaseId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  WarBoardStageDetailEntity_o *result; // x0

  if ( (byte_4E05C23 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_ObjectModel_Collection_WarBoardStageDetailEntity__get_Count__);
    sub_1CE6700(&Method_System_Collections_ObjectModel_Collection_WarBoardStageDetailEntity__get_Item__);
    byte_4E05C23 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3480AB0 *)Method_System_Collections_ObjectModel_Collection_WarBoardStageDetailEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (WarBoardStageDetailEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                list,
                                                v10,
                                                (const MethodInfo_3480B40 *)Method_System_Collections_ObjectModel_Collection_WarBoardStageDetailEntity__get_Item__);
      if ( result
        && result->fields.stageId == stageId
        && result->fields.warBoardCommonReleaseId == warBoardCommonReleaseId )
      {
        return result;
      }
      if ( v9 == ++v10 )
        return 0;
    }
LABEL_13:
    sub_1CE6958(list, *(_QWORD *)&stageId);
  }
  return 0;
}