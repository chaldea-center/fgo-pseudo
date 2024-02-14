void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4217C64 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo, v5);
    byte_4217C64 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v6,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.isCached,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    68,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *v3; // x0

  if ( (byte_4217C66 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__, method);
    byte_4217C66 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v3 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **)&this->fields.isCached;
  if ( !v3 )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    v3,
    (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
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
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v12; // x10
  int klass_high; // w8

  if ( (byte_4217C6D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&QuestReleaseEntity_TypeInfo, v8);
    byte_4217C6D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B0D97C(list);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v10,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v12 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v12 - 1] == QuestReleaseEntity_TypeInfo
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

  if ( (byte_4217C62 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4217C62 = 1;
  }
  PK = QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_266A024 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
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
  void *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x23
  int32_t v35; // w25
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x10
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x19
  Il2CppObject *v41; // x20
  struct QuestReleaseMaster___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_int__o *v51; // x19
  _BOOL8 v52; // x0
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4217C6C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B0D8A4(&Method_System_Comparison_QuestEntity___ctor__, v10);
    sub_B0D8A4(&System_Comparison_QuestEntity__TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestEntity__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestEntity__Sort__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_B0D8A4(&System_Collections_Generic_List_QuestEntity__TypeInfo, v25);
    sub_B0D8A4(&QuestReleaseEntity_TypeInfo, v26);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B0D8A4(&Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, v28);
    sub_B0D8A4(&QuestReleaseMaster___c_TypeInfo, v29);
    byte_4217C6C = 1;
  }
  memset(&v54, 0, sizeof(v54));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_20;
  v35 = 0;
  while ( v35 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_20;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v35,
                 (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Instance )
    {
      v38 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v38
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v38 - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Instance + 5) == type
        && *((_DWORD *)Instance + 6) == targetId
        && ((value & 0x80000000) != 0 || *((_DWORD *)Instance + 8) == value) )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_20;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     *((_DWORD *)Instance + 4),
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( Instance )
        {
          if ( !v34 )
            goto LABEL_20;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v34,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
        }
      }
    }
    Instance = this->fields.list;
    ++v35;
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
    v41 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_QuestEntity__TypeInfo,
                                                                           v36,
                                                                           v37);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v41,
      Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_QuestEntity___ctor__);
    v42 = QuestReleaseMaster___c_TypeInfo->static_fields;
    v42->__9__12_0 = (struct System_Comparison_QuestEntity__o *)_9__12_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v42->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  if ( !v34 )
    goto LABEL_20;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v34,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v51 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v49, v50);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v54,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v34,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v54,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v52 )
      break;
    if ( !v54.fields.current )
      sub_B0D97C(v52);
    if ( !v51 )
      sub_B0D97C(v52);
    System_Collections_Generic_List_int___Add(
      v51,
      (int32_t)v54.fields.current[1].klass,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v54,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v51 )
LABEL_20:
    sub_B0D97C(Instance);
  return System_Collections_Generic_List_int___ToArray(
           v51,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  void *Master_WarQuestSelectionMaster; // x0
  CommonReleaseMaster_o *v12; // x22
  int32_t Count; // w0
  int32_t v14; // w23
  int32_t v15; // w24
  __int64 v16; // x10
  int v17; // w8

  if ( (byte_4217C6B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&QuestReleaseEntity_TypeInfo, v10);
    byte_4217C6B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_21:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  v12 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    Master_WarQuestSelectionMaster = this->fields.list;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_21;
    Master_WarQuestSelectionMaster = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                                       v15,
                                       (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Master_WarQuestSelectionMaster )
    {
      v16 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Master_WarQuestSelectionMaster + 300LL) >= (unsigned int)v16
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 200LL) + 8 * v16 - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Master_WarQuestSelectionMaster + 4) == targetId )
      {
        v17 = *((_DWORD *)Master_WarQuestSelectionMaster + 5);
        if ( v17 == condType )
          return 1;
        if ( v17 == 113 )
        {
          if ( !v12 )
            goto LABEL_21;
          if ( CommonReleaseMaster__IsContainCondType(
                 v12,
                 *((_DWORD *)Master_WarQuestSelectionMaster + 6),
                 condType,
                 0LL) )
          {
            return 1;
          }
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
  __int64 v7; // x1
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
  QuestReleaseMaster___c__DisplayClass15_0_o *v20; // x21
  QuestGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  QuestGroupMaster_o *v22; // x22
  int32_t Count; // w0
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t v26; // w23
  int32_t v27; // w24
  __int64 v28; // x27
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x10
  System_Int32_array **v36; // x1
  __int64 v37; // x26
  System_Predicate_int__o *v38; // x28
  _DWORD *v39; // x8
  int32_t v40; // w9
  int v41; // w10
  _DWORD *v42; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v44; // x27
  System_Predicate_int__o *klass; // x28
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  BattleServantConfConponent_o *p__9__1; // [xsp+0h] [xbp-60h]

  if ( (byte_4217C6F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Exists_int___, questIdList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestGroupMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v11);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v12);
    sub_B0D8A4(&QuestReleaseEntity_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v14);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v15);
    sub_B0D8A4(&Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__, v16);
    sub_B0D8A4(&QuestReleaseMaster___c__DisplayClass15_0_TypeInfo, v17);
    sub_B0D8A4(&Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__, v18);
    sub_B0D8A4(&QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v19);
    byte_4217C6F = 1;
  }
  v20 = (QuestReleaseMaster___c__DisplayClass15_0_o *)sub_B0D974(
                                                        QuestReleaseMaster___c__DisplayClass15_0_TypeInfo,
                                                        questIdList,
                                                        *(_QWORD *)&targetId);
  QuestReleaseMaster___c__DisplayClass15_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_52;
  v20->fields.targetId = targetId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_52:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  v22 = Master_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  p__9__1 = (BattleServantConfConponent_o *)&v20->fields.__9__1;
  v26 = Count;
  v27 = 0;
  while ( 1 )
  {
    v28 = sub_B0D974(QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v24, v25);
    QuestReleaseMaster___c__DisplayClass15_1___ctor((QuestReleaseMaster___c__DisplayClass15_1_o *)v28, 0LL);
    Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)this->fields.list;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_52;
    Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                                                             v27,
                                                             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v28 )
      goto LABEL_52;
    if ( Master_WarQuestSelectionMaster
      && (v35 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(&Master_WarQuestSelectionMaster->klass->_2.bitflags2 + 1) >= (unsigned int)v35) )
    {
      v36 = (QuestReleaseEntity_c *)Master_WarQuestSelectionMaster->klass->_2.typeHierarchy[v35 - 1] == QuestReleaseEntity_TypeInfo
          ? (System_Int32_array **)Master_WarQuestSelectionMaster
          : 0LL;
    }
    else
    {
      v36 = 0LL;
    }
    *(_QWORD *)(v28 + 16) = v36;
    v37 = v28 + 16;
    sub_B0D840((BattleServantConfConponent_o *)(v28 + 16), v36, v29, v30, v31, v32, v33, v34);
    if ( *(_QWORD *)(v28 + 16) )
    {
      v38 = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v24, v25);
      System_Predicate_int____ctor(
        v38,
        (Il2CppObject *)v28,
        Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
        (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
      Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                                               questIdList,
                                                               (System_Predicate_T__o *)v38,
                                                               (const MethodInfo_1F684F0 *)Method_System_Array_Exists_int___);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v39 = *(_DWORD **)v37;
        if ( !*(_QWORD *)v37 )
          goto LABEL_52;
        v40 = v20->fields.targetId;
        if ( v39[4] != v40 )
        {
          v41 = v39[5];
          if ( v41 == 32 )
          {
            Master_WarQuestSelectionMaster = v22;
            if ( !v22 )
              goto LABEL_52;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v22, v39[6], 2, 0LL);
            if ( !QuestIdListByGroupId )
              goto LABEL_49;
            v44 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_49;
            klass = (System_Predicate_int__o *)p__9__1->klass;
            if ( !p__9__1->klass )
            {
              klass = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v24, v25);
              System_Predicate_int____ctor(
                klass,
                (Il2CppObject *)v20,
                Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
                (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
              v20->fields.__9__1 = klass;
              sub_B0D840(p__9__1, (System_Int32_array **)klass, v46, v47, v48, v49, v50, v51);
            }
            if ( !System_Array__Exists_int_(
                    v44,
                    (System_Predicate_T__o *)klass,
                    (const MethodInfo_1F684F0 *)Method_System_Array_Exists_int___) )
              goto LABEL_49;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v42 = *(_DWORD **)v37;
            if ( !*(_QWORD *)v37 || !Master_WarQuestSelectionMaster )
              goto LABEL_52;
          }
          else
          {
            if ( v41 != 1 || v39[6] != v40 )
              goto LABEL_49;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v42 = *(_DWORD **)v37;
            if ( !*(_QWORD *)v37 || !Master_WarQuestSelectionMaster )
              goto LABEL_52;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_WarQuestSelectionMaster, v42[4], 0LL) )
            return 1;
          if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
          }
          Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !*(_QWORD *)v37 || !Master_WarQuestSelectionMaster )
            goto LABEL_52;
          if ( clsQuestCheck__IsQuestClear(
                 (clsQuestCheck_o *)Master_WarQuestSelectionMaster,
                 *(_DWORD *)(*(_QWORD *)v37 + 16LL),
                 0,
                 0LL) )
          {
            return 1;
          }
        }
      }
    }
LABEL_49:
    if ( ++v27 >= v26 )
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
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v12; // x22
  __int64 v13; // x10

  if ( (byte_4217C6E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&QuestReleaseEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v8);
    byte_4217C6E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_B0D97C(list);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v10,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v12 = Item;
      v13 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == QuestReleaseEntity_TypeInfo
        && (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 48
        && LODWORD(Item[1].monitor) == targetId )
      {
        if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
        }
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !list )
          goto LABEL_18;
        if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)list, (int32_t)v12[1].klass, 0, 0LL) )
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

  if ( (byte_4217C63 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, entity);
    byte_4217C63 = 1;
  }
  PK = QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByQuestID(
        QuestReleaseMaster_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w22
  __int64 v14; // x10

  if ( (byte_4217C65 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&qid);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    sub_B0D8A4(&QuestReleaseEntity_TypeInfo, v10);
    byte_4217C65 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&qid,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v13,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v14 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == qid )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B0D97C(list);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestReleaseMaster__getListByQuestID_30578992(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
        const MethodInfo *method)
{
  int32_t v5; // w20
  __int64 v7; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *v29; // x20
  QuestReleaseEntity_o *v30; // x0
  int32_t Count; // w0
  QuestReleaseEntity_c **v32; // x28
  const MethodInfo_2E9214C **v33; // x26
  const MethodInfo_2FC56E8 **v34; // x20
  int32_t v35; // w22
  int32_t v36; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x24
  __int64 v39; // x10
  int32_t missionTargetId; // w25
  __int64 v41; // x1
  __int64 v42; // x2
  QuestReleaseEntity_c **v43; // x27
  const MethodInfo_2FC56E8 **v44; // x28
  const MethodInfo_2E9214C **v45; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x26
  WarBoardEvalValueSquare_CalcEval_o *v47; // x24
  signed __int64 eval_low; // x21
  unsigned __int64 v49; // x22
  int32_t v50; // [xsp+Ch] [xbp-84h]
  WarBoardEvalValueSquare_CalcEval_o *v51; // [xsp+10h] [xbp-80h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-58h] BYREF

  v5 = questId;
  if ( (byte_4217C67 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v22);
    sub_B0D8A4(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v23);
    sub_B0D8A4(&QuestReleaseEntity_TypeInfo, v24);
    byte_4217C67 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v51 = 0LL;
  value = 0LL;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  resultList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v25;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  if ( !QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
          (QuestReleaseOverwriteMaster_o *)Master_WarQuestSelectionMaster,
          &entityList,
          v5,
          0LL,
          v27) )
  {
    if ( !*((_BYTE *)&this->fields.revision + 4) )
    {
      Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      v50 = v5;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_42;
      Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                Master_WarQuestSelectionMaster,
                (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( Count >= 1 )
      {
        v32 = &QuestReleaseEntity_TypeInfo;
        v33 = (const MethodInfo_2E9214C **)&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__;
        v34 = (const MethodInfo_2FC56E8 **)&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        v35 = Count;
        v36 = 0;
        do
        {
          Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_42;
          Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   Master_WarQuestSelectionMaster,
                   v36,
                   (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
            v39 = *(&(*v32)->_2.bitflags2 + 1);
            if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v39
              && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v39 - 1] == *v32 )
            {
              Master_WarQuestSelectionMaster = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_42;
              missionTargetId = v38->fields.missionTargetId;
              if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Master_WarQuestSelectionMaster,
                      missionTargetId,
                      &value,
                      *v33) )
              {
                v43 = v32;
                v44 = v34;
                v45 = v33;
                v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v41, v42);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                  v46,
                  (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
                value = (WarBoardEvalValueSquare_CalcEval_o *)v46;
                Master_WarQuestSelectionMaster = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_42;
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Master_WarQuestSelectionMaster,
                  missionTargetId,
                  (WarBoardAIRoute_RouteData_o *)v46,
                  (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
                v33 = v45;
                v34 = v44;
                v32 = v43;
              }
              Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)value;
              if ( !value )
                goto LABEL_42;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
                v38,
                *v34);
            }
          }
        }
        while ( ++v36 < v35 );
      }
      v5 = v50;
      *((_BYTE *)&this->fields.revision + 4) = 1;
    }
    Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*resultList;
    if ( *resultList )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
      Master_WarQuestSelectionMaster = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue((System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Master_WarQuestSelectionMaster, v5, &v51, (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          return;
        v47 = v51;
        if ( v51 )
        {
          eval_low = SLODWORD(v51->fields.eval);
          if ( (int)eval_low < 1 )
            return;
          v49 = 0LL;
          do
          {
            if ( v49 >= LODWORD(v47->fields.eval) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            if ( !*resultList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*resultList,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&v47->fields.viewpoint
                                                                      + 8 * v49++
                                                                      + 32),
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
            if ( (__int64)v49 >= eval_low )
              return;
            v47 = v51;
          }
          while ( v51 );
        }
      }
    }
LABEL_42:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*resultList;
  if ( !*resultList )
    goto LABEL_42;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
  if ( !v25 )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v53,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v25,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v53,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v53.fields.current )
      sub_B0D97C(0LL);
    v29 = *resultList;
    v30 = QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
            (QuestReleaseOverwriteEntity_o *)v53.fields.current,
            v28);
    if ( !v29 )
      sub_B0D97C(v30);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v53,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall QuestReleaseMaster__getListByTargetAndCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  __int64 v17; // x10

  if ( (byte_4217C6A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v10);
    sub_B0D8A4(&QuestReleaseEntity_TypeInfo, v11);
    byte_4217C6A = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&targetId,
                                                                                                  *(_QWORD *)&condType);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == QuestReleaseEntity_TypeInfo
          && LODWORD(list->fields._syncRoot) == targetId
          && HIDWORD(list->fields.items) == condType )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
        }
      }
      if ( ++v16 >= v15 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
    }
LABEL_16:
    sub_B0D97C(list);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByType(
        QuestReleaseMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w22
  __int64 v14; // x10

  if ( (byte_4217C68 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    sub_B0D8A4(&QuestReleaseEntity_TypeInfo, v10);
    byte_4217C68 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v13,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v14 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] == QuestReleaseEntity_TypeInfo
        && HIDWORD(list->fields.items) == type )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B0D97C(list);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t openCondType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x22
  void *list; // x0
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_4217C69 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B0D8A4(&QuestReleaseEntity_TypeInfo, v12);
    byte_4217C69 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&targetId,
                                                    *(_QWORD *)&openCondType);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  v15 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v15 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v15,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v16 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v16
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v16 - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)list + 6) == targetId
        && *((_DWORD *)list + 5) == openCondType )
      {
        if ( !v13 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v13,
          *((_DWORD *)list + 4),
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    list = this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v13 )
LABEL_18:
    sub_B0D97C(list);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42124E4 & 1) == 0 )
  {
    sub_B0D8A4(&QuestReleaseMaster___c_TypeInfo, v1);
    byte_42124E4 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestReleaseMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestReleaseMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return data->fields.questId == x;
}