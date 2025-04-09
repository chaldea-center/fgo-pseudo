void __fastcall WarBoardStageDetailMaster___ctor(WarBoardStageDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBF6F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_WarBoardStageDetailMaster__WarBoardStageDetailEntity__string___ctor__, method);
    byte_49BBF6F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    423,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_WarBoardStageDetailMaster__WarBoardStageDetailEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageDetailEntity_o *__fastcall WarBoardStageDetailMaster__GetWarBoardStageDetailEntity(
        WarBoardStageDetailMaster_o *this,
        int32_t stageId,
        int32_t warBoardCommonReleaseId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  WarBoardStageDetailEntity_o *result; // x0

  if ( (byte_49BBF70 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_WarBoardStageDetailEntity__get_Count__,
      *(_QWORD *)&stageId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_WarBoardStageDetailEntity__get_Item__, v7);
    byte_49BBF70 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_WarBoardStageDetailEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (WarBoardStageDetailEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                list,
                                                v11,
                                                (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_WarBoardStageDetailEntity__get_Item__);
      if ( result
        && result->fields.stageId == stageId
        && result->fields.warBoardCommonReleaseId == warBoardCommonReleaseId )
      {
        return result;
      }
      if ( v10 == ++v11 )
        return 0LL;
    }
LABEL_13:
    sub_1B4D1EC(list, *(_QWORD *)&stageId);
  }
  return 0LL;
}