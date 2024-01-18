void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418AEE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo, v4);
    byte_418AEE9 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.isCached,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    68,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *v4; // x0

  if ( (byte_418AEEB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__, method);
    byte_418AEEB = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v4 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **)&this->fields.isCached;
  if ( !v4 )
    sub_B2C434(0LL, v3);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    v4,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
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

  if ( (byte_418AEF2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&QuestReleaseEntity_TypeInfo, v8);
    byte_418AEF2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B2C434(list, *(_QWORD *)&questId);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v10,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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

  if ( (byte_418AEE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_418AEE7 = 1;
  }
  PK = QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
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
  __int64 v31; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x23
  int32_t v34; // w25
  __int64 v35; // x10
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x19
  Il2CppObject *v38; // x20
  struct QuestReleaseMaster___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_List_int__o *v46; // x19
  _BOOL8 v47; // x0
  __int64 v48; // x1
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_418AEF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&Method_System_Comparison_QuestEntity___ctor__, v10);
    sub_B2C35C(&System_Comparison_QuestEntity__TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity__Sort__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v23);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_B2C35C(&System_Collections_Generic_List_QuestEntity__TypeInfo, v25);
    sub_B2C35C(&QuestReleaseEntity_TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B2C35C(&Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, v28);
    sub_B2C35C(&QuestReleaseMaster___c_TypeInfo, v29);
    byte_418AEF1 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_20;
  v34 = 0;
  while ( v34 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_20;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v34,
                 (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Instance )
    {
      v35 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v35
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v35 - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Instance + 5) == type
        && *((_DWORD *)Instance + 6) == targetId
        && ((value & 0x80000000) != 0 || *((_DWORD *)Instance + 8) == value) )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_20;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     *((_DWORD *)Instance + 4),
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( Instance )
        {
          if ( !v33 )
            goto LABEL_20;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v33,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
        }
      }
    }
    Instance = this->fields.list;
    ++v34;
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
    v38 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_QuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v38,
      Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_QuestEntity___ctor__);
    v39 = QuestReleaseMaster___c_TypeInfo->static_fields;
    v39->__9__12_0 = (struct System_Comparison_QuestEntity__o *)_9__12_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v39->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  if ( !v33 )
    goto LABEL_20;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v33,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v46 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v46,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v33,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  while ( 1 )
  {
    v47 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v47 )
      break;
    if ( !v50.fields.current )
      sub_B2C434(v47, v48);
    if ( !v46 )
      sub_B2C434(v47, v48);
    System_Collections_Generic_List_int___Add(
      v46,
      (int32_t)v50.fields.current[1].klass,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v50,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v46 )
LABEL_20:
    sub_B2C434(Instance, v31);
  return System_Collections_Generic_List_int___ToArray(
           v46,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v12; // x1
  CommonReleaseMaster_o *v13; // x22
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  __int64 v17; // x10
  int v18; // w8

  if ( (byte_418AEF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&QuestReleaseEntity_TypeInfo, v10);
    byte_418AEF0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_21:
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  v13 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    Master_WarQuestSelectionMaster = this->fields.list;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_21;
    Master_WarQuestSelectionMaster = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                                       v16,
                                       (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Master_WarQuestSelectionMaster )
    {
      v17 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Master_WarQuestSelectionMaster + 300LL) >= (unsigned int)v17
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 200LL) + 8 * v17 - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Master_WarQuestSelectionMaster + 4) == targetId )
      {
        v18 = *((_DWORD *)Master_WarQuestSelectionMaster + 5);
        if ( v18 == condType )
          return 1;
        if ( v18 == 113 )
        {
          if ( !v13 )
            goto LABEL_21;
          if ( CommonReleaseMaster__IsContainCondType(
                 v13,
                 *((_DWORD *)Master_WarQuestSelectionMaster + 6),
                 condType,
                 0LL) )
          {
            return 1;
          }
        }
      }
    }
    if ( ++v16 >= v15 )
      return 0;
  }
}


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
  __int64 v22; // x1
  QuestGroupMaster_o *v23; // x22
  int32_t Count; // w0
  int32_t v25; // w23
  int32_t v26; // w24
  __int64 v27; // x27
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x10
  System_Int32_array **v35; // x1
  __int64 v36; // x26
  System_Predicate_int__o *v37; // x28
  _DWORD *v38; // x8
  int32_t v39; // w9
  int v40; // w10
  _DWORD *v41; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v43; // x27
  System_Predicate_int__o *klass; // x28
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  BattleServantConfConponent_o *p__9__1; // [xsp+0h] [xbp-60h]

  if ( (byte_418AEF4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Exists_int___, questIdList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestGroupMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v11);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v12);
    sub_B2C35C(&QuestReleaseEntity_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v14);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v15);
    sub_B2C35C(&Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__, v16);
    sub_B2C35C(&QuestReleaseMaster___c__DisplayClass15_0_TypeInfo, v17);
    sub_B2C35C(&Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__, v18);
    sub_B2C35C(&QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v19);
    byte_418AEF4 = 1;
  }
  v20 = (QuestReleaseMaster___c__DisplayClass15_0_o *)sub_B2C42C(QuestReleaseMaster___c__DisplayClass15_0_TypeInfo);
  QuestReleaseMaster___c__DisplayClass15_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_52;
  v20->fields.targetId = targetId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_52:
    sub_B2C434(Master_WarQuestSelectionMaster, v22);
  v23 = Master_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  p__9__1 = (BattleServantConfConponent_o *)&v20->fields.__9__1;
  v25 = Count;
  v26 = 0;
  while ( 1 )
  {
    v27 = sub_B2C42C(QuestReleaseMaster___c__DisplayClass15_1_TypeInfo);
    QuestReleaseMaster___c__DisplayClass15_1___ctor((QuestReleaseMaster___c__DisplayClass15_1_o *)v27, 0LL);
    Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)this->fields.list;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_52;
    Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                                                             v26,
                                                             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v27 )
      goto LABEL_52;
    if ( Master_WarQuestSelectionMaster
      && (v34 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(&Master_WarQuestSelectionMaster->klass->_2.bitflags2 + 1) >= (unsigned int)v34) )
    {
      v35 = (QuestReleaseEntity_c *)Master_WarQuestSelectionMaster->klass->_2.typeHierarchy[v34 - 1] == QuestReleaseEntity_TypeInfo
          ? (System_Int32_array **)Master_WarQuestSelectionMaster
          : 0LL;
    }
    else
    {
      v35 = 0LL;
    }
    *(_QWORD *)(v27 + 16) = v35;
    v36 = v27 + 16;
    sub_B2C2F8((BattleServantConfConponent_o *)(v27 + 16), v35, v28, v29, v30, v31, v32, v33);
    if ( *(_QWORD *)(v27 + 16) )
    {
      v37 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v37,
        (Il2CppObject *)v27,
        Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
        (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
      Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                                               questIdList,
                                                               (System_Predicate_T__o *)v37,
                                                               (const MethodInfo_1FFBEFC *)Method_System_Array_Exists_int___);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v38 = *(_DWORD **)v36;
        if ( !*(_QWORD *)v36 )
          goto LABEL_52;
        v39 = v20->fields.targetId;
        if ( v38[4] != v39 )
        {
          v40 = v38[5];
          if ( v40 == 32 )
          {
            Master_WarQuestSelectionMaster = v23;
            if ( !v23 )
              goto LABEL_52;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v23, v38[6], 2, 0LL);
            if ( !QuestIdListByGroupId )
              goto LABEL_49;
            v43 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_49;
            klass = (System_Predicate_int__o *)p__9__1->klass;
            if ( !p__9__1->klass )
            {
              klass = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                klass,
                (Il2CppObject *)v20,
                Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
                (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
              v20->fields.__9__1 = klass;
              sub_B2C2F8(p__9__1, (System_Int32_array **)klass, v45, v46, v47, v48, v49, v50);
            }
            if ( !System_Array__Exists_int_(
                    v43,
                    (System_Predicate_T__o *)klass,
                    (const MethodInfo_1FFBEFC *)Method_System_Array_Exists_int___) )
              goto LABEL_49;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v41 = *(_DWORD **)v36;
            if ( !*(_QWORD *)v36 || !Master_WarQuestSelectionMaster )
              goto LABEL_52;
          }
          else
          {
            if ( v40 != 1 || v38[6] != v39 )
              goto LABEL_49;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v41 = *(_DWORD **)v36;
            if ( !*(_QWORD *)v36 || !Master_WarQuestSelectionMaster )
              goto LABEL_52;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_WarQuestSelectionMaster, v41[4], 0LL) )
            return 1;
          if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
          }
          Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !*(_QWORD *)v36 || !Master_WarQuestSelectionMaster )
            goto LABEL_52;
          if ( clsQuestCheck__IsQuestClear(
                 (clsQuestCheck_o *)Master_WarQuestSelectionMaster,
                 *(_DWORD *)(*(_QWORD *)v36 + 16LL),
                 0,
                 0LL) )
          {
            return 1;
          }
        }
      }
    }
LABEL_49:
    if ( ++v26 >= v25 )
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

  if ( (byte_418AEF3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&QuestReleaseEntity_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v8);
    byte_418AEF3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_B2C434(list, *(_QWORD *)&targetId);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v10,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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

  if ( (byte_418AEE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, entity);
    byte_418AEE8 = 1;
  }
  PK = QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  __int64 v15; // x10

  if ( (byte_418AEEA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&qid);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    sub_B2C35C(&QuestReleaseEntity_TypeInfo, v10);
    byte_418AEEA = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v14,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      v15 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == qid )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B2C434(list, v12);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestReleaseMaster__getListByQuestID_31194596(
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
  __int64 v27; // x1
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *v30; // x20
  QuestReleaseEntity_o *v31; // x0
  int32_t Count; // w0
  QuestReleaseEntity_c **v33; // x28
  const MethodInfo_2E66470 **v34; // x26
  const MethodInfo_2EF4460 **v35; // x20
  int32_t v36; // w22
  int32_t v37; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x24
  __int64 v40; // x10
  int32_t missionTargetId; // w25
  QuestReleaseEntity_c **v42; // x27
  const MethodInfo_2EF4460 **v43; // x28
  const MethodInfo_2E66470 **v44; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x26
  WarBoardEvalValueSquare_CalcEval_o *v46; // x24
  signed __int64 eval_low; // x21
  unsigned __int64 v48; // x22
  int32_t v49; // [xsp+Ch] [xbp-84h]
  WarBoardEvalValueSquare_CalcEval_o *v50; // [xsp+10h] [xbp-80h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-58h] BYREF

  v5 = questId;
  if ( (byte_418AEEC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v21);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v22);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v23);
    sub_B2C35C(&QuestReleaseEntity_TypeInfo, v24);
    byte_418AEEC = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v50 = 0LL;
  value = 0LL;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v25;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  if ( !QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
          (QuestReleaseOverwriteMaster_o *)Master_WarQuestSelectionMaster,
          &entityList,
          v5,
          0LL,
          v28) )
  {
    if ( !*((_BYTE *)&this->fields.revision + 4) )
    {
      Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      v49 = v5;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_42;
      Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                Master_WarQuestSelectionMaster,
                (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( Count >= 1 )
      {
        v33 = &QuestReleaseEntity_TypeInfo;
        v34 = (const MethodInfo_2E66470 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__;
        v35 = (const MethodInfo_2EF4460 **)&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        v36 = Count;
        v37 = 0;
        do
        {
          Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_42;
          Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   Master_WarQuestSelectionMaster,
                   v37,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
            v40 = *(&(*v33)->_2.bitflags2 + 1);
            if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v40
              && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v40 - 1] == *v33 )
            {
              Master_WarQuestSelectionMaster = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_42;
              missionTargetId = v39->fields.missionTargetId;
              if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Master_WarQuestSelectionMaster,
                      missionTargetId,
                      &value,
                      *v34) )
              {
                v42 = v33;
                v43 = v35;
                v44 = v34;
                v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                  v45,
                  (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
                value = (WarBoardEvalValueSquare_CalcEval_o *)v45;
                Master_WarQuestSelectionMaster = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_42;
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Master_WarQuestSelectionMaster,
                  missionTargetId,
                  (WarBoardAIRoute_RouteData_o *)v45,
                  (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
                v34 = v44;
                v35 = v43;
                v33 = v42;
              }
              Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)value;
              if ( !value )
                goto LABEL_42;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
                v39,
                *v35);
            }
          }
        }
        while ( ++v37 < v36 );
      }
      v5 = v49;
      *((_BYTE *)&this->fields.revision + 4) = 1;
    }
    Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*resultList;
    if ( *resultList )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
      Master_WarQuestSelectionMaster = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue((System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Master_WarQuestSelectionMaster, v5, &v50, (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          return;
        v46 = v50;
        if ( v50 )
        {
          eval_low = SLODWORD(v50->fields.eval);
          if ( (int)eval_low < 1 )
            return;
          v48 = 0LL;
          do
          {
            if ( v48 >= LODWORD(v46->fields.eval) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            if ( !*resultList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*resultList,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&v46->fields.viewpoint
                                                                      + 8 * v48++
                                                                      + 32),
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
            if ( (__int64)v48 >= eval_low )
              return;
            v46 = v50;
          }
          while ( v50 );
        }
      }
    }
LABEL_42:
    sub_B2C434(Master_WarQuestSelectionMaster, v27);
  }
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*resultList;
  if ( !*resultList )
    goto LABEL_42;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
  if ( !v25 )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v52,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v25,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v52.fields.current )
      sub_B2C434(0LL, v29);
    v30 = *resultList;
    v31 = QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
            (QuestReleaseOverwriteEntity_o *)v52.fields.current,
            v29);
    if ( !v30 )
      sub_B2C434(v31, v31);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_418AEEF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v10);
    sub_B2C35C(&QuestReleaseEntity_TypeInfo, v11);
    byte_418AEEF = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = list;
        v18 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] == QuestReleaseEntity_TypeInfo
          && LODWORD(list->fields._syncRoot) == targetId
          && HIDWORD(list->fields.items) == condType )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
        }
      }
      if ( ++v17 >= v16 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
    }
LABEL_16:
    sub_B2C434(list, v13);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  __int64 v15; // x10

  if ( (byte_418AEED & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    sub_B2C35C(&QuestReleaseEntity_TypeInfo, v10);
    byte_418AEED = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v14,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      v15 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == QuestReleaseEntity_TypeInfo
        && HIDWORD(list->fields.items) == type )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B2C434(list, v12);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
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
  __int64 v14; // x1
  void *list; // x0
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_418AEEE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&QuestReleaseEntity_TypeInfo, v12);
    byte_418AEEE = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  v16 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v16 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v16,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v17 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v17
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v17 - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)list + 6) == targetId
        && *((_DWORD *)list + 5) == openCondType )
      {
        if ( !v13 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v13,
          *((_DWORD *)list + 4),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    list = this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v13 )
LABEL_18:
    sub_B2C434(list, v14);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185613 & 1) == 0 )
  {
    sub_B2C35C(&QuestReleaseMaster___c_TypeInfo, v1);
    byte_4185613 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestReleaseMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, x);
  return data->fields.questId == x;
}