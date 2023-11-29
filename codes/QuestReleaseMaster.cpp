void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FD565 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo, v7);
    byte_40FD565 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.isCached,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    68,
    (const MethodInfo_266F73C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *v3; // x0

  if ( (byte_40FD567 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__, method);
    byte_40FD567 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v3 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **)&this->fields.isCached;
  if ( !v3 )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    v3,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
  *((_BYTE *)&this->fields.revision + 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestReleaseMaster__EventPointWinActionType(
        QuestReleaseMaster_o *this,
        int32_t questId,
        bool winGroup1,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10
  int klass_high; // w8

  if ( (byte_40FD56E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&QuestReleaseEntity_TypeInfo, v8);
    byte_40FD56E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B170D4();
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v11 )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v11,
             v10,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == QuestReleaseEntity_TypeInfo
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
    ++v10;
    if ( !list )
      goto LABEL_14;
  }
  if ( winGroup1 )
    return 1;
  else
    return 2;
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_o *__fastcall QuestReleaseMaster__GetEntity(
        QuestReleaseMaster_o *this,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FD563 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_40FD563 = 1;
  }
  PK = QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_266F7D8 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestReleaseMaster__GetQuestIdList(
        QuestReleaseMaster_o *this,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v38; // w25
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v43; // x0
  int32_t *Item; // x0
  __int64 v45; // x10
  WarEntity_o *Entity; // x0
  QuestReleaseMaster___c_c *v47; // x0
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x19
  Il2CppObject *v50; // x20
  struct QuestReleaseMaster___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Collections_Generic_List_int__o *v62; // x19
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40FD56D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&Method_System_Comparison_QuestEntity___ctor__, v10);
    sub_B16FFC(&System_Comparison_QuestEntity__TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestEntity__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestEntity__Sort__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_B16FFC(&System_Collections_Generic_List_QuestEntity__TypeInfo, v25);
    sub_B16FFC(&QuestReleaseEntity_TypeInfo, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B16FFC(&Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, v28);
    sub_B16FFC(&QuestReleaseMaster___c_TypeInfo, v29);
    byte_40FD56D = 1;
  }
  memset(&v64, 0, sizeof(v64));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                                                                  v32,
                                                                                                  v33,
                                                                                                  v34,
                                                                                                  v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v38 = 0;
  while ( v38 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v43 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v43 )
      goto LABEL_20;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        v43,
                        v38,
                        (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v45 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v45
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v45 - 8) == QuestReleaseEntity_TypeInfo
        && Item[5] == type
        && Item[6] == targetId
        && ((value & 0x80000000) != 0 || Item[8] == value) )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_20;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   Item[4],
                   (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( Entity )
        {
          if ( !v36 )
            goto LABEL_20;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v36,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v38;
    if ( !list )
      goto LABEL_20;
  }
  v47 = QuestReleaseMaster___c_TypeInfo;
  if ( (BYTE3(QuestReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestReleaseMaster___c_TypeInfo);
    v47 = QuestReleaseMaster___c_TypeInfo;
  }
  static_fields = v47->static_fields;
  _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_QuestEntity__TypeInfo,
                                                                           v39,
                                                                           v40,
                                                                           v41,
                                                                           v42);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v50,
      Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_QuestEntity___ctor__);
    v51 = QuestReleaseMaster___c_TypeInfo->static_fields;
    v51->__9__12_0 = (struct System_Comparison_QuestEntity__o *)_9__12_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v51->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  if ( !v36 )
    goto LABEL_20;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v36,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v62 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v58,
                                                    v59,
                                                    v60,
                                                    v61);
  System_Collections_Generic_List_int____ctor(
    v62,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v64,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v36,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v64,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
  {
    if ( !v64.fields.current )
      sub_B170D4();
    if ( !v62 )
      sub_B170D4();
    System_Collections_Generic_List_int___Add(
      v62,
      (int32_t)v64.fields.current[1].klass,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v64,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v62 )
LABEL_20:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v62,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsContainCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  CommonReleaseMaster_o *v12; // x22
  int32_t Count; // w0
  int32_t v14; // w23
  int32_t v15; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v18; // x10
  int klass_high; // w8

  if ( (byte_40FD56C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&QuestReleaseEntity_TypeInfo, v10);
    byte_40FD56C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_21:
    sub_B170D4();
  v12 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v15,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(Item[1].klass) == targetId )
      {
        klass_high = HIDWORD(Item[1].klass);
        if ( klass_high == condType )
          return 1;
        if ( klass_high == 113 )
        {
          if ( !v12 )
            goto LABEL_21;
          if ( CommonReleaseMaster__IsContainCondType(v12, (int32_t)Item[1].monitor, condType, 0LL) )
            return 1;
        }
      }
    }
    if ( ++v15 >= v14 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
        QuestReleaseMaster_o *this,
        System_Int32_array *questIdList,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  QuestReleaseMaster___c__DisplayClass15_0_o *v21; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  QuestGroupMaster_o *v23; // x22
  int32_t Count; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w23
  int32_t v30; // w24
  __int64 v31; // x27
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x10
  System_Int32_array **v41; // x1
  __int64 v42; // x26
  System_Predicate_int__o *v43; // x28
  _DWORD *v44; // x8
  int32_t v45; // w9
  int v46; // w10
  clsQuestCheck_o *v47; // x0
  _DWORD *v48; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v50; // x27
  System_Predicate_int__o *klass; // x28
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  clsQuestCheck_o *v58; // x0
  BattleServantConfConponent_o *p__9__1; // [xsp+0h] [xbp-60h]

  if ( (byte_40FD570 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Exists_int___, questIdList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestGroupMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v12);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v13);
    sub_B16FFC(&QuestReleaseEntity_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v15);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v16);
    sub_B16FFC(&Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__, v17);
    sub_B16FFC(&QuestReleaseMaster___c__DisplayClass15_0_TypeInfo, v18);
    sub_B16FFC(&Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__, v19);
    sub_B16FFC(&QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v20);
    byte_40FD570 = 1;
  }
  v21 = (QuestReleaseMaster___c__DisplayClass15_0_o *)sub_B170CC(
                                                        QuestReleaseMaster___c__DisplayClass15_0_TypeInfo,
                                                        questIdList,
                                                        *(_QWORD *)&targetId,
                                                        method,
                                                        v4);
  QuestReleaseMaster___c__DisplayClass15_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_52;
  v21->fields.targetId = targetId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_52:
    sub_B170D4();
  v23 = (QuestGroupMaster_o *)Master_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  p__9__1 = (BattleServantConfConponent_o *)&v21->fields.__9__1;
  v29 = Count;
  v30 = 0;
  while ( 1 )
  {
    v31 = sub_B170CC(QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v25, v26, v27, v28);
    QuestReleaseMaster___c__DisplayClass15_1___ctor((QuestReleaseMaster___c__DisplayClass15_1_o *)v31, 0LL);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_52;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v30,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v31 )
      goto LABEL_52;
    if ( Item
      && (v40 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1), *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v40) )
    {
      v41 = (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v40 - 1] == QuestReleaseEntity_TypeInfo
          ? (System_Int32_array **)Item
          : 0LL;
    }
    else
    {
      v41 = 0LL;
    }
    *(_QWORD *)(v31 + 16) = v41;
    v42 = v31 + 16;
    sub_B16F98((BattleServantConfConponent_o *)(v31 + 16), v41, v34, v35, v36, v37, v38, v39);
    if ( *(_QWORD *)(v31 + 16) )
    {
      v43 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v25, v26, v27, v28);
      System_Predicate_int____ctor(
        v43,
        (Il2CppObject *)v31,
        Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
        (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
      if ( System_Array__Exists_int_(
             questIdList,
             (System_Predicate_T__o *)v43,
             (const MethodInfo_2043F30 *)Method_System_Array_Exists_int___) )
      {
        v44 = *(_DWORD **)v42;
        if ( !*(_QWORD *)v42 )
          goto LABEL_52;
        v45 = v21->fields.targetId;
        if ( v44[4] != v45 )
        {
          v46 = v44[5];
          if ( v46 == 32 )
          {
            if ( !v23 )
              goto LABEL_52;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v23, v44[6], 2, 0LL);
            if ( !QuestIdListByGroupId )
              goto LABEL_49;
            v50 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_49;
            klass = (System_Predicate_int__o *)p__9__1->klass;
            if ( !p__9__1->klass )
            {
              klass = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v25, v26, v27, v28);
              System_Predicate_int____ctor(
                klass,
                (Il2CppObject *)v21,
                Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
                (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
              v21->fields.__9__1 = klass;
              sub_B16F98(p__9__1, (System_Int32_array **)klass, v52, v53, v54, v55, v56, v57);
            }
            if ( !System_Array__Exists_int_(
                    v50,
                    (System_Predicate_T__o *)klass,
                    (const MethodInfo_2043F30 *)Method_System_Array_Exists_int___) )
              goto LABEL_49;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            v47 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v48 = *(_DWORD **)v42;
            if ( !*(_QWORD *)v42 || !v47 )
              goto LABEL_52;
          }
          else
          {
            if ( v46 != 1 || v44[6] != v45 )
              goto LABEL_49;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            v47 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v48 = *(_DWORD **)v42;
            if ( !*(_QWORD *)v42 || !v47 )
              goto LABEL_52;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow(v47, v48[4], 0LL) )
            return 1;
          if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
          }
          v58 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !*(_QWORD *)v42 || !v58 )
            goto LABEL_52;
          if ( clsQuestCheck__IsQuestClear(v58, *(_DWORD *)(*(_QWORD *)v42 + 16LL), 0, 0LL) )
            return 1;
        }
      }
    }
LABEL_49:
    if ( ++v30 >= v29 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsQuestOfResultBattleCleared(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v13; // x22
  __int64 v14; // x10
  clsQuestCheck_o *v15; // x0

  if ( (byte_40FD56F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&QuestReleaseEntity_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v8);
    byte_40FD56F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_B170D4();
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v11 )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v11,
             v10,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = Item;
      v14 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == QuestReleaseEntity_TypeInfo
        && (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 48
        && LODWORD(Item[1].monitor) == targetId )
      {
        if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
        }
        v15 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !v15 )
          goto LABEL_18;
        if ( clsQuestCheck__IsQuestClear(v15, (int32_t)v13[1].klass, 0, 0LL) )
          return 1;
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v10;
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

  if ( (byte_40FD564 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, entity);
    byte_40FD564 = 1;
  }
  PK = QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByQuestID(
        QuestReleaseMaster_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_40FD566 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&qid);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v11);
    sub_B16FFC(&QuestReleaseEntity_TypeInfo, v12);
    byte_40FD566 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&qid,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v15 = 0;
  while ( v15 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v16 )
      goto LABEL_17;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v16,
                                                                    v15,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == QuestReleaseEntity_TypeInfo
        && Item->fields.missionTargetId == qid )
      {
        if ( !v13 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v13 )
LABEL_17:
    sub_B170D4();
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestReleaseMaster__getListByQuestID_31211884(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  int32_t v6; // w20
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  QuestReleaseOverwriteMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *v30; // x20
  QuestReleaseEntity_o *v31; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  QuestReleaseEntity_c **v34; // x28
  const MethodInfo_2DEB0E0 **v35; // x26
  const MethodInfo_2F25CD8 **v36; // x20
  int32_t v37; // w22
  int32_t v38; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v39; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x24
  __int64 v42; // x10
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v43; // x0
  int32_t missionTargetId; // w25
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  QuestReleaseEntity_c **v49; // x27
  const MethodInfo_2F25CD8 **v50; // x28
  const MethodInfo_2DEB0E0 **v51; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x26
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v53; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v54; // x0
  WarBoardEvalValueSquare_CalcEval_o *v55; // x24
  signed __int64 eval_low; // x21
  unsigned __int64 v57; // x22
  int32_t v58; // [xsp+Ch] [xbp-84h]
  WarBoardEvalValueSquare_CalcEval_o *v59; // [xsp+10h] [xbp-80h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-58h] BYREF

  v6 = questId;
  if ( (byte_40FD568 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v22);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v23);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v24);
    sub_B16FFC(&QuestReleaseEntity_TypeInfo, v25);
    byte_40FD568 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v59 = 0LL;
  value = 0LL;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  resultList,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v26;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  if ( !QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
          Master_WarQuestSelectionMaster,
          &entityList,
          v6,
          0LL,
          v28) )
  {
    if ( !*((_BYTE *)&this->fields.revision + 4) )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      v58 = v6;
      if ( !list )
        goto LABEL_42;
      Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                list,
                (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( Count >= 1 )
      {
        v34 = &QuestReleaseEntity_TypeInfo;
        v35 = (const MethodInfo_2DEB0E0 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__;
        v36 = (const MethodInfo_2F25CD8 **)&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        v37 = Count;
        v38 = 0;
        do
        {
          v39 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !v39 )
            goto LABEL_42;
          Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   v39,
                   v38,
                   (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
            v42 = *(&(*v34)->_2.bitflags2 + 1);
            if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v42
              && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v42 - 1] == *v34 )
            {
              v43 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **)&this->fields.isCached;
              if ( !v43 )
                goto LABEL_42;
              missionTargetId = v41->fields.missionTargetId;
              if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                      v43,
                      missionTargetId,
                      &value,
                      *v35) )
              {
                v49 = v34;
                v50 = v36;
                v51 = v35;
                v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v45, v46, v47, v48);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                  v52,
                  (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
                value = (WarBoardEvalValueSquare_CalcEval_o *)v52;
                v53 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **)&this->fields.isCached;
                if ( !v53 )
                  goto LABEL_42;
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                  v53,
                  missionTargetId,
                  (WarBoardAIRoute_RouteData_o *)v52,
                  (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
                v35 = v51;
                v36 = v50;
                v34 = v49;
              }
              if ( !value )
                goto LABEL_42;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
                v41,
                *v36);
            }
          }
        }
        while ( ++v38 < v37 );
      }
      v6 = v58;
      *((_BYTE *)&this->fields.revision + 4) = 1;
    }
    if ( *resultList )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)*resultList,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
      v54 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **)&this->fields.isCached;
      if ( v54 )
      {
        if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                v54,
                v6,
                &v59,
                (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
          return;
        v55 = v59;
        if ( v59 )
        {
          eval_low = SLODWORD(v59->fields.eval);
          if ( (int)eval_low < 1 )
            return;
          v57 = 0LL;
          do
          {
            if ( v57 >= LODWORD(v55->fields.eval) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            if ( !*resultList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*resultList,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&v55->fields.viewpoint
                                                                      + 8 * v57++
                                                                      + 32),
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
            if ( (__int64)v57 >= eval_low )
              return;
            v55 = v59;
          }
          while ( v59 );
        }
      }
    }
LABEL_42:
    sub_B170D4();
  }
  if ( !*resultList )
    goto LABEL_42;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)*resultList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
  if ( !v26 )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v61,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v26,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v61.fields.current )
      sub_B170D4();
    v30 = *resultList;
    v31 = QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
            (QuestReleaseOverwriteEntity_o *)v61.fields.current,
            v29);
    if ( !v30 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall QuestReleaseMaster__getListByTargetAndCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_40FD56B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v11);
    sub_B16FFC(&QuestReleaseEntity_TypeInfo, v12);
    byte_40FD56B = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&targetId,
                                                                                                  *(_QWORD *)&condType,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v18 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v18,
                                                                      v17,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == QuestReleaseEntity_TypeInfo
          && Item->fields.targetId == targetId
          && Item->fields.missionConditionDetailId == condType )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
        }
      }
      if ( ++v17 >= v16 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v13;
    }
LABEL_16:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByType(
        QuestReleaseMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_40FD569 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v11);
    sub_B16FFC(&QuestReleaseEntity_TypeInfo, v12);
    byte_40FD569 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v15 = 0;
  while ( v15 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v16 )
      goto LABEL_17;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v16,
                                                                    v15,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == QuestReleaseEntity_TypeInfo
        && Item->fields.missionConditionDetailId == type )
      {
        if ( !v13 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v13 )
LABEL_17:
    sub_B170D4();
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t openCondType,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v16; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  int32_t *Item; // x0
  __int64 v19; // x10

  if ( (byte_40FD56A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&QuestReleaseEntity_TypeInfo, v13);
    byte_40FD56A = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&targetId,
                                                    *(_QWORD *)&openCondType,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v17 )
      goto LABEL_18;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        v17,
                        v16,
                        (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v19 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v19
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v19 - 8) == QuestReleaseEntity_TypeInfo
        && Item[6] == targetId
        && Item[5] == openCondType )
      {
        if ( !v14 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v14,
          Item[4],
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v14 )
LABEL_18:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA318 & 1) == 0 )
  {
    sub_B16FFC(&QuestReleaseMaster___c_TypeInfo, v1);
    byte_40FA318 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestReleaseMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestReleaseMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  int32_t Priority; // w0

  if ( !b || (Priority = QuestEntity__getPriority(b, 0LL), !a) )
    sub_B170D4();
  return Priority - QuestEntity__getPriority(a, 0LL);
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
    sub_B170D4();
  return data->fields.questId == x;
}