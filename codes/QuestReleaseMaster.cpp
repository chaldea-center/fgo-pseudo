void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438FD1D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
    byte_438FD1D = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.isCached, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    69,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *v4; // x0

  if ( (byte_438FD1F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
    byte_438FD1F = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v4 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **)&this->fields.isCached;
  if ( !v4 )
    sub_B7769C(0LL, v3);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    v4,
    (const MethodInfo_2FF4354 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
  *((_BYTE *)&this->fields.revision + 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestReleaseMaster__EventPointWinActionType(
        QuestReleaseMaster_o *this,
        int32_t questId,
        bool winGroup1,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v10; // x10
  int klass_high; // w8

  if ( (byte_438FD26 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&QuestReleaseEntity_TypeInfo);
    byte_438FD26 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B7769C(list, *(_QWORD *)&questId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v8,
             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v10 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v10
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v10 - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(Item[1].klass) == questId )
      {
        klass_high = HIDWORD(Item[1].klass);
        if ( klass_high == 49 )
          return 3;
        if ( klass_high == 48 )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_14;
  }
  if ( winGroup1 )
    return 1;
  else
    return 2;
}


QuestReleaseEntity_o *__fastcall QuestReleaseMaster__GetEntity(
        QuestReleaseMaster_o *this,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438FD1B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
    byte_438FD1B = 1;
  }
  PK = QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_21FBCE4 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
}


System_Int32_array *__fastcall QuestReleaseMaster__GetQuestIdList(
        QuestReleaseMaster_o *this,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x23
  int32_t v13; // w25
  __int64 v14; // x10
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x19
  Il2CppObject *v17; // x20
  struct QuestReleaseMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_int__o *v25; // x19
  _BOOL8 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_438FD25 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_QuestEntity___ctor__);
    sub_B775C4(&System_Comparison_QuestEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_B775C4(&QuestReleaseEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__);
    sub_B775C4(&QuestReleaseMaster___c_TypeInfo);
    byte_438FD25 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_20;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_20;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v13,
                 (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Instance )
    {
      v14 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v14
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v14 - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Instance + 5) == type
        && *((_DWORD *)Instance + 6) == targetId
        && ((value & 0x80000000) != 0 || *((_DWORD *)Instance + 8) == value) )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_20;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     *((_DWORD *)Instance + 4),
                     (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( Instance )
        {
          if ( !v12 )
            goto LABEL_20;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
        }
      }
    }
    Instance = this->fields.list;
    ++v13;
    if ( !Instance )
      goto LABEL_20;
  }
  Instance = QuestReleaseMaster___c_TypeInfo;
  if ( (BYTE3(QuestReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestReleaseMaster___c_TypeInfo);
    Instance = QuestReleaseMaster___c_TypeInfo;
  }
  static_fields = (struct QuestReleaseMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_QuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v17,
      Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_QuestEntity___ctor__);
    v18 = QuestReleaseMaster___c_TypeInfo->static_fields;
    v18->__9__12_0 = (struct System_Comparison_QuestEntity__o *)_9__12_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v18->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v12 )
    goto LABEL_20;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v12,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v25 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v12,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v26 )
      break;
    if ( !v29.fields.current )
      sub_B7769C(v26, v27);
    if ( !v25 )
      sub_B7769C(v26, v27);
    System_Collections_Generic_List_int___Add(
      v25,
      (int32_t)v29.fields.current[1].klass,
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v25 )
LABEL_20:
    sub_B7769C(Instance, v10);
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall QuestReleaseMaster__IsContainCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  CommonReleaseMaster_o *v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x10
  int v14; // w8

  if ( (byte_438FD24 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&QuestReleaseEntity_TypeInfo);
    byte_438FD24 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_21:
    sub_B7769C(Master_WarQuestSelectionMaster, v8);
  v9 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    Master_WarQuestSelectionMaster = this->fields.list;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_21;
    Master_WarQuestSelectionMaster = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                                       v12,
                                       (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Master_WarQuestSelectionMaster )
    {
      v13 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Master_WarQuestSelectionMaster + 300LL) >= (unsigned int)v13
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 200LL) + 8 * v13 - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Master_WarQuestSelectionMaster + 4) == targetId )
      {
        v14 = *((_DWORD *)Master_WarQuestSelectionMaster + 5);
        if ( v14 == condType )
          return 1;
        if ( v14 == 113 )
        {
          if ( !v9 )
            goto LABEL_21;
          if ( CommonReleaseMaster__IsContainCondType(
                 v9,
                 *((_DWORD *)Master_WarQuestSelectionMaster + 6),
                 condType,
                 0LL) )
          {
            return 1;
          }
        }
      }
    }
    if ( ++v12 >= v11 )
      return 0;
  }
}


bool __fastcall QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
        QuestReleaseMaster_o *this,
        System_Int32_array *questIdList,
        int32_t targetId,
        const MethodInfo *method)
{
  QuestReleaseMaster___c__DisplayClass15_0_o *v7; // x21
  QuestGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  QuestGroupMaster_o *v10; // x22
  int32_t Count; // w0
  int32_t v12; // w23
  int32_t v13; // w24
  __int64 v14; // x27
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x10
  System_Int32_array **v22; // x1
  __int64 v23; // x26
  System_Predicate_int__o *v24; // x28
  _DWORD *v25; // x8
  int32_t v26; // w9
  int v27; // w10
  _DWORD *v28; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v30; // x27
  System_Predicate_int__o *klass; // x28
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  BattleServantConfConponent_o *p__9__1; // [xsp+0h] [xbp-60h]

  if ( (byte_438FD28 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Exists_int___);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Predicate_int___ctor__);
    sub_B775C4(&System_Predicate_int__TypeInfo);
    sub_B775C4(&QuestReleaseEntity_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B775C4(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B775C4(&Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__);
    sub_B775C4(&QuestReleaseMaster___c__DisplayClass15_0_TypeInfo);
    sub_B775C4(&Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__);
    sub_B775C4(&QuestReleaseMaster___c__DisplayClass15_1_TypeInfo);
    byte_438FD28 = 1;
  }
  v7 = (QuestReleaseMaster___c__DisplayClass15_0_o *)sub_B77694(QuestReleaseMaster___c__DisplayClass15_0_TypeInfo);
  QuestReleaseMaster___c__DisplayClass15_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_52;
  v7->fields.targetId = targetId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_52:
    sub_B7769C(Master_WarQuestSelectionMaster, v9);
  v10 = Master_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  p__9__1 = (BattleServantConfConponent_o *)&v7->fields.__9__1;
  v12 = Count;
  v13 = 0;
  while ( 1 )
  {
    v14 = sub_B77694(QuestReleaseMaster___c__DisplayClass15_1_TypeInfo);
    QuestReleaseMaster___c__DisplayClass15_1___ctor((QuestReleaseMaster___c__DisplayClass15_1_o *)v14, 0LL);
    Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)this->fields.list;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_52;
    Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                                                             v13,
                                                             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v14 )
      goto LABEL_52;
    if ( Master_WarQuestSelectionMaster
      && (v21 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(&Master_WarQuestSelectionMaster->klass->_2.bitflags2 + 1) >= (unsigned int)v21) )
    {
      v22 = (QuestReleaseEntity_c *)Master_WarQuestSelectionMaster->klass->_2.typeHierarchy[v21 - 1] == QuestReleaseEntity_TypeInfo
          ? (System_Int32_array **)Master_WarQuestSelectionMaster
          : 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    *(_QWORD *)(v14 + 16) = v22;
    v23 = v14 + 16;
    sub_B77560((BattleServantConfConponent_o *)(v14 + 16), v22, v15, v16, v17, v18, v19, v20);
    if ( *(_QWORD *)(v14 + 16) )
    {
      v24 = (System_Predicate_int__o *)sub_B77694(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v24,
        (Il2CppObject *)v14,
        Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
        (const MethodInfo_2C30DC8 *)Method_System_Predicate_int___ctor__);
      Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                                               questIdList,
                                                               (System_Predicate_T__o *)v24,
                                                               (const MethodInfo_2003E00 *)Method_System_Array_Exists_int___);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v25 = *(_DWORD **)v23;
        if ( !*(_QWORD *)v23 )
          goto LABEL_52;
        v26 = v7->fields.targetId;
        if ( v25[4] != v26 )
        {
          v27 = v25[5];
          if ( v27 == 32 )
          {
            Master_WarQuestSelectionMaster = v10;
            if ( !v10 )
              goto LABEL_52;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v10, v25[6], 2, 0LL);
            if ( !QuestIdListByGroupId )
              goto LABEL_49;
            v30 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_49;
            klass = (System_Predicate_int__o *)p__9__1->klass;
            if ( !p__9__1->klass )
            {
              klass = (System_Predicate_int__o *)sub_B77694(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                klass,
                (Il2CppObject *)v7,
                Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
                (const MethodInfo_2C30DC8 *)Method_System_Predicate_int___ctor__);
              v7->fields.__9__1 = klass;
              sub_B77560(p__9__1, (System_Int32_array **)klass, v32, v33, v34, v35, v36, v37);
            }
            if ( !System_Array__Exists_int_(
                    v30,
                    (System_Predicate_T__o *)klass,
                    (const MethodInfo_2003E00 *)Method_System_Array_Exists_int___) )
              goto LABEL_49;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v28 = *(_DWORD **)v23;
            if ( !*(_QWORD *)v23 || !Master_WarQuestSelectionMaster )
              goto LABEL_52;
          }
          else
          {
            if ( v27 != 1 || v25[6] != v26 )
              goto LABEL_49;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v28 = *(_DWORD **)v23;
            if ( !*(_QWORD *)v23 || !Master_WarQuestSelectionMaster )
              goto LABEL_52;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_WarQuestSelectionMaster, v28[4], 0LL) )
            return 1;
          if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
          }
          Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !*(_QWORD *)v23 || !Master_WarQuestSelectionMaster )
            goto LABEL_52;
          if ( clsQuestCheck__IsQuestClear(
                 (clsQuestCheck_o *)Master_WarQuestSelectionMaster,
                 *(_DWORD *)(*(_QWORD *)v23 + 16LL),
                 0,
                 0LL) )
          {
            return 1;
          }
        }
      }
    }
LABEL_49:
    if ( ++v13 >= v12 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsQuestOfResultBattleCleared(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v6; // w21
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v8; // x22
  __int64 v9; // x10

  if ( (byte_438FD27 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&QuestReleaseEntity_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B775C4(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_438FD27 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_B7769C(list, *(_QWORD *)&targetId);
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v6,
             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v8 = Item;
      v9 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v9 - 1] == QuestReleaseEntity_TypeInfo
        && (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 48
        && LODWORD(Item[1].monitor) == targetId )
      {
        if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
        }
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !list )
          goto LABEL_18;
        if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)list, (int32_t)v8[1].klass, 0, 0LL) )
          return 1;
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v6;
    if ( !list )
      goto LABEL_18;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__TryGetEntity(
        QuestReleaseMaster_o *this,
        QuestReleaseEntity_o **entity,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438FD1C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
    byte_438FD1C = 1;
  }
  PK = QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
}


QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByQuestID(
        QuestReleaseMaster_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_438FD1E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_B775C4(&QuestReleaseEntity_TypeInfo);
    byte_438FD1E = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == qid )
      {
        if ( !v5 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v5 )
LABEL_17:
    sub_B7769C(list, v6);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


void __fastcall QuestReleaseMaster__getListByQuestID_34428508(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *v12; // x20
  QuestReleaseEntity_o *v13; // x0
  int32_t Count; // w0
  QuestReleaseEntity_c **v15; // x28
  const MethodInfo_2FF5E9C **v16; // x26
  const MethodInfo_3053298 **v17; // x20
  int32_t v18; // w22
  int32_t v19; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x24
  __int64 v22; // x10
  int32_t missionTargetId; // w25
  QuestReleaseEntity_c **v24; // x27
  const MethodInfo_3053298 **v25; // x28
  const MethodInfo_2FF5E9C **v26; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x26
  WarBoardEvalValueSquare_CalcEval_o *v28; // x24
  signed __int64 eval_low; // x21
  unsigned __int64 v30; // x22
  int32_t v31; // [xsp+Ch] [xbp-84h]
  WarBoardEvalValueSquare_CalcEval_o *v32; // [xsp+10h] [xbp-80h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_438FD20 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_B775C4(&QuestReleaseEntity_TypeInfo);
    byte_438FD20 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v32 = 0LL;
  value = 0LL;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v7;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  if ( !QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
          (QuestReleaseOverwriteMaster_o *)Master_WarQuestSelectionMaster,
          &entityList,
          questId,
          0LL,
          v10) )
  {
    if ( !*((_BYTE *)&this->fields.revision + 4) )
    {
      Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      v31 = questId;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_42;
      Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                Master_WarQuestSelectionMaster,
                (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( Count >= 1 )
      {
        v15 = &QuestReleaseEntity_TypeInfo;
        v16 = (const MethodInfo_2FF5E9C **)&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__;
        v17 = (const MethodInfo_3053298 **)&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        v18 = Count;
        v19 = 0;
        do
        {
          Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_42;
          Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   Master_WarQuestSelectionMaster,
                   v19,
                   (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
            v22 = *(&(*v15)->_2.bitflags2 + 1);
            if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
              && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == *v15 )
            {
              Master_WarQuestSelectionMaster = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_42;
              missionTargetId = v21->fields.missionTargetId;
              if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Master_WarQuestSelectionMaster,
                      missionTargetId,
                      &value,
                      *v16) )
              {
                v24 = v15;
                v25 = v17;
                v26 = v16;
                v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                  v27,
                  (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
                value = (WarBoardEvalValueSquare_CalcEval_o *)v27;
                Master_WarQuestSelectionMaster = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_42;
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Master_WarQuestSelectionMaster,
                  missionTargetId,
                  (WarBoardAIRoute_RouteData_o *)v27,
                  (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
                v16 = v26;
                v17 = v25;
                v15 = v24;
              }
              Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)value;
              if ( !value )
                goto LABEL_42;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
                v21,
                *v17);
            }
          }
        }
        while ( ++v19 < v18 );
      }
      questId = v31;
      *((_BYTE *)&this->fields.revision + 4) = 1;
    }
    Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*resultList;
    if ( *resultList )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
      Master_WarQuestSelectionMaster = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue((System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Master_WarQuestSelectionMaster, questId, &v32, (const MethodInfo_2FF5E9C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          return;
        v28 = v32;
        if ( v32 )
        {
          eval_low = SLODWORD(v32->fields.eval);
          if ( (int)eval_low < 1 )
            return;
          v30 = 0LL;
          do
          {
            if ( v30 >= LODWORD(v28->fields.eval) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            if ( !*resultList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*resultList,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&v28->fields.viewpoint
                                                                      + 8 * v30++
                                                                      + 32),
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
            if ( (__int64)v30 >= eval_low )
              return;
            v28 = v32;
          }
          while ( v32 );
        }
      }
    }
LABEL_42:
    sub_B7769C(Master_WarQuestSelectionMaster, v9);
  }
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*resultList;
  if ( !*resultList )
    goto LABEL_42;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
  if ( !v7 )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v7,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v34.fields.current )
      sub_B7769C(0LL, v11);
    v12 = *resultList;
    v13 = QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
            (QuestReleaseOverwriteEntity_o *)v34.fields.current,
            v11);
    if ( !v12 )
      sub_B7769C(v13, v13);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v12,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
}


System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall QuestReleaseMaster__getListByTargetAndCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x10

  if ( (byte_438FD23 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_B775C4(&QuestReleaseEntity_TypeInfo);
    byte_438FD23 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v12,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        v13 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] == QuestReleaseEntity_TypeInfo
          && LODWORD(list->fields._syncRoot) == targetId
          && HIDWORD(list->fields.items) == condType )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
        }
      }
      if ( ++v12 >= v11 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
    }
LABEL_16:
    sub_B7769C(list, v8);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
}


QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByType(
        QuestReleaseMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_438FD21 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_B775C4(&QuestReleaseEntity_TypeInfo);
    byte_438FD21 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == QuestReleaseEntity_TypeInfo
        && HIDWORD(list->fields.items) == type )
      {
        if ( !v5 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v5 )
LABEL_17:
    sub_B7769C(list, v6);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


System_Int32_array *__fastcall QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t openCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  __int64 v8; // x1
  void *list; // x0
  int32_t v10; // w23
  __int64 v11; // x10

  if ( (byte_438FD22 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&QuestReleaseEntity_TypeInfo);
    byte_438FD22 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  v10 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v10,
             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v11 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)list + 6) == targetId
        && *((_DWORD *)list + 5) == openCondType )
      {
        if ( !v7 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v7,
          *((_DWORD *)list + 4),
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    list = this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v7 )
LABEL_18:
    sub_B7769C(list, v8);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438B190 & 1) == 0 )
  {
    sub_B775C4(&QuestReleaseMaster___c_TypeInfo);
    byte_438B190 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(QuestReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestReleaseMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall QuestReleaseMaster___c___ctor(QuestReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestReleaseMaster___c___GetQuestIdList_b__12_0(
        QuestReleaseMaster___c_o *this,
        QuestEntity_o *a,
        QuestEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || (this = (QuestReleaseMaster___c_o *)QuestEntity__getPriority(b, 0LL), !a) )
    sub_B7769C(this, a);
  return (_DWORD)this - QuestEntity__getPriority(a, 0LL);
}


void __fastcall QuestReleaseMaster___c__DisplayClass15_0___ctor(
        QuestReleaseMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestReleaseMaster___c__DisplayClass15_0___IsContainUnPlayableQuestByTargetId_b__1(
        QuestReleaseMaster___c__DisplayClass15_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.targetId == x;
}


void __fastcall QuestReleaseMaster___c__DisplayClass15_1___ctor(
        QuestReleaseMaster___c__DisplayClass15_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestReleaseMaster___c__DisplayClass15_1___IsContainUnPlayableQuestByTargetId_b__0(
        QuestReleaseMaster___c__DisplayClass15_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct QuestReleaseEntity_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B7769C(this, x);
  return data->fields.questId == x;
}