void __fastcall CommandCardRankParamMaster___ctor(CommandCardRankParamMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8BD5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8BD5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    279,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string___ctor__);
}


CommandCardRankParamEntity_array *__fastcall CommandCardRankParamMaster__GetBeyondEntities(
        CommandCardRankParamMaster_o *this,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  __int64 v28; // x10

  if ( (byte_42E8BD7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, rank, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CommandCardRankParamEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCardRankParamEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCardRankParamEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCardRankParamEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_CommandCardRankParamEntity__TypeInfo, v21, v22, v23);
    byte_42E8BD7 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CommandCardRankParamEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CommandCardRankParamEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v27 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v27 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = list;
        v28 = *(&CommandCardRankParamEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (CommandCardRankParamEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == CommandCardRankParamEntity_TypeInfo )
        {
          if ( SLODWORD(list[1].klass) >= rank )
          {
            if ( !v24 )
              goto LABEL_17;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v24,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CommandCardRankParamEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v27;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_17;
  }
  if ( !v24 )
LABEL_17:
    sub_B5D69C(list, v25);
  return (CommandCardRankParamEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_CommandCardRankParamEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCardRankParamEntity_o *__fastcall CommandCardRankParamMaster__GetEntity(
        CommandCardRankParamMaster_o *this,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E8BD3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__GetEntity__,
      id,
      rank,
      method);
    byte_42E8BD3 = 1;
  }
  PK = CommandCardRankParamEntity__CreatePK(id, rank, *(const MethodInfo **)&rank);
  return (CommandCardRankParamEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_23FB260 *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__GetEntity__);
}


int32_t __fastcall CommandCardRankParamMaster__GetParamRank(
        CommandCardRankParamMaster_o *this,
        int32_t param,
        const MethodInfo *method)
{
  CommandCardRankParamEntity_o *RankParamEntity; // x0

  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(this, param, method);
  if ( RankParamEntity )
    LODWORD(RankParamEntity) = RankParamEntity->fields.rank;
  return (int)RankParamEntity;
}


// local variable allocation has failed, the output may be wrong!
CommandCardRankParamEntity_o *__fastcall CommandCardRankParamMaster__GetRankParamEntity(
        CommandCardRankParamMaster_o *this,
        int32_t param,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommandCardRankParamEntity_o *result; // x0
  int32_t v13; // w25
  int32_t v14; // w21
  __int64 v15; // x10
  int32_t rankMaxParam; // w8
  int32_t v17; // w8

  if ( (byte_42E8BD6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, param, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CommandCardRankParamEntity_TypeInfo, v9, v10, v11);
    byte_42E8BD6 = 1;
  }
  result = (CommandCardRankParamEntity_o *)this->fields.list;
  if ( !result )
LABEL_19:
    sub_B5D69C(result, *(_QWORD *)&param);
  v13 = 0;
  v14 = 0;
  while ( v14 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (CommandCardRankParamEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_19;
    result = (CommandCardRankParamEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                               v14,
                                               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( result )
    {
      v15 = *(&CommandCardRankParamEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v15 )
      {
        if ( (CommandCardRankParamEntity_c *)result->klass->_2.typeHierarchy[v15 - 1] != CommandCardRankParamEntity_TypeInfo )
          result = 0LL;
      }
      else
      {
        result = 0LL;
      }
    }
    if ( v13 <= param )
    {
      if ( !result )
        goto LABEL_19;
      rankMaxParam = result->fields.rankMaxParam;
      if ( rankMaxParam >= param || rankMaxParam == -1 )
        return result;
    }
    else if ( !result )
    {
      goto LABEL_19;
    }
    v17 = result->fields.rankMaxParam;
    result = (CommandCardRankParamEntity_o *)this->fields.list;
    ++v14;
    v13 = v17 + 1;
    if ( !result )
      goto LABEL_19;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommandCardRankParamMaster__TryGetEntity(
        CommandCardRankParamMaster_o *this,
        CommandCardRankParamEntity_o **entity,
        int32_t id,
        int32_t rank,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E8BD4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&rank);
    byte_42E8BD4 = 1;
  }
  PK = CommandCardRankParamEntity__CreatePK(id, rank, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_CommandCardRankParamMaster__CommandCardRankParamEntity__string__TryGetEntity__);
}