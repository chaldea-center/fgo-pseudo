void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42ED273 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo, v8, v9, v10);
    byte_42ED273 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isCached,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    69,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *v6; // x0

  if ( (byte_42ED275 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__,
      (_DWORD)method,
      v2,
      v3);
    byte_42ED275 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v6 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **)&this->fields.isCached;
  if ( !v6 )
    sub_B5D69C(0LL, v5);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    v6,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
  *((_BYTE *)&this->fields.revision + 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestReleaseMaster__EventPointWinActionType(
        QuestReleaseMaster_o *this,
        int32_t questId,
        bool winGroup1,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v16; // x10
  int klass_high; // w8

  if ( (byte_42ED27C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questId,
      winGroup1,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&QuestReleaseEntity_TypeInfo, v10, v11, v12);
    byte_42ED27C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B5D69C(list, *(_QWORD *)&questId);
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v14,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v16 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == QuestReleaseEntity_TypeInfo
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
    ++v14;
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

  if ( (byte_42ED271 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__,
      questId,
      type,
      *(_QWORD *)&targetId);
    byte_42ED271 = 1;
  }
  PK = QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestReleaseMaster__GetQuestIdList(
        QuestReleaseMaster_o *this,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  void *Instance; // x0
  __int64 v73; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x23
  int32_t v76; // w25
  __int64 v77; // x10
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x19
  Il2CppObject *v80; // x20
  struct QuestReleaseMaster___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Collections_Generic_List_int__o *v88; // x19
  _BOOL8 v89; // x0
  __int64 v90; // x1
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42ED27B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      type,
      targetId,
      *(_QWORD *)&value);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Comparison_QuestEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Comparison_QuestEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity__Add__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity__Sort__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v51, v52, v53);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&System_Collections_Generic_List_QuestEntity__TypeInfo, v57, v58, v59);
    sub_B5D5C4(&QuestReleaseEntity_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v63, v64, v65);
    sub_B5D5C4(&Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, v66, v67, v68);
    sub_B5D5C4(&QuestReleaseMaster___c_TypeInfo, v69, v70, v71);
    byte_42ED27B = 1;
  }
  memset(&v92, 0, sizeof(v92));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v75,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_20;
  v76 = 0;
  while ( v76 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_20;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v76,
                 (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Instance )
    {
      v77 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v77
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v77 - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Instance + 5) == type
        && *((_DWORD *)Instance + 6) == targetId
        && ((value & 0x80000000) != 0 || *((_DWORD *)Instance + 8) == value) )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_20;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     *((_DWORD *)Instance + 4),
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( Instance )
        {
          if ( !v75 )
            goto LABEL_20;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v75,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
        }
      }
    }
    Instance = this->fields.list;
    ++v76;
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
    v80 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_QuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v80,
      Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_QuestEntity___ctor__);
    v81 = QuestReleaseMaster___c_TypeInfo->static_fields;
    v81->__9__12_0 = (struct System_Comparison_QuestEntity__o *)_9__12_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v81->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
  }
  if ( !v75 )
    goto LABEL_20;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v75,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v88 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v88,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v92,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v75,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  while ( 1 )
  {
    v89 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v92,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v89 )
      break;
    if ( !v92.fields.current )
      sub_B5D69C(v89, v90);
    if ( !v88 )
      sub_B5D69C(v89, v90);
    System_Collections_Generic_List_int___Add(
      v88,
      (int32_t)v92.fields.current[1].klass,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v92,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v88 )
LABEL_20:
    sub_B5D69C(Instance, v73);
  return System_Collections_Generic_List_int___ToArray(
           v88,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall QuestReleaseMaster__IsContainCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v20; // x1
  CommonReleaseMaster_o *v21; // x22
  int32_t Count; // w0
  int32_t v23; // w23
  int32_t v24; // w24
  __int64 v25; // x10
  int v26; // w8

  if ( (byte_42ED27A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      targetId,
      condType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&QuestReleaseEntity_TypeInfo, v16, v17, v18);
    byte_42ED27A = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_21:
    sub_B5D69C(Master_WarQuestSelectionMaster, v20);
  v21 = (CommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v23 = Count;
  v24 = 0;
  while ( 1 )
  {
    Master_WarQuestSelectionMaster = this->fields.list;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_21;
    Master_WarQuestSelectionMaster = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                                       v24,
                                       (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Master_WarQuestSelectionMaster )
    {
      v25 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Master_WarQuestSelectionMaster + 300LL) >= (unsigned int)v25
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 200LL) + 8 * v25 - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Master_WarQuestSelectionMaster + 4) == targetId )
      {
        v26 = *((_DWORD *)Master_WarQuestSelectionMaster + 5);
        if ( v26 == condType )
          return 1;
        if ( v26 == 113 )
        {
          if ( !v21 )
            goto LABEL_21;
          if ( CommonReleaseMaster__IsContainCondType(
                 v21,
                 *((_DWORD *)Master_WarQuestSelectionMaster + 6),
                 condType,
                 0LL) )
          {
            return 1;
          }
        }
      }
    }
    if ( ++v24 >= v23 )
      return 0;
  }
}


bool __fastcall QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
        QuestReleaseMaster_o *this,
        System_Int32_array *questIdList,
        int32_t targetId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  QuestReleaseMaster___c__DisplayClass15_0_o *v46; // x21
  QuestGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v48; // x1
  QuestGroupMaster_o *v49; // x22
  int32_t Count; // w0
  int32_t v51; // w23
  int32_t v52; // w24
  __int64 v53; // x27
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x10
  System_Int32_array **v61; // x1
  __int64 v62; // x26
  System_Predicate_int__o *v63; // x28
  _DWORD *v64; // x8
  int32_t v65; // w9
  int v66; // w10
  _DWORD *v67; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v69; // x27
  System_Predicate_int__o *klass; // x28
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  BattleServantConfConponent_o *p__9__1; // [xsp+0h] [xbp-60h]

  if ( (byte_42ED27E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Exists_int___, (_DWORD)questIdList, targetId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&QuestReleaseEntity_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v31, v32, v33);
    sub_B5D5C4(
      &Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
      v34,
      v35,
      v36);
    sub_B5D5C4(&QuestReleaseMaster___c__DisplayClass15_0_TypeInfo, v37, v38, v39);
    sub_B5D5C4(
      &Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
      v40,
      v41,
      v42);
    sub_B5D5C4(&QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v43, v44, v45);
    byte_42ED27E = 1;
  }
  v46 = (QuestReleaseMaster___c__DisplayClass15_0_o *)sub_B5D694(QuestReleaseMaster___c__DisplayClass15_0_TypeInfo);
  QuestReleaseMaster___c__DisplayClass15_0___ctor(v46, 0LL);
  if ( !v46 )
    goto LABEL_52;
  v46->fields.targetId = targetId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_52:
    sub_B5D69C(Master_WarQuestSelectionMaster, v48);
  v49 = Master_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  p__9__1 = (BattleServantConfConponent_o *)&v46->fields.__9__1;
  v51 = Count;
  v52 = 0;
  while ( 1 )
  {
    v53 = sub_B5D694(QuestReleaseMaster___c__DisplayClass15_1_TypeInfo);
    QuestReleaseMaster___c__DisplayClass15_1___ctor((QuestReleaseMaster___c__DisplayClass15_1_o *)v53, 0LL);
    Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)this->fields.list;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_52;
    Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                                                             v52,
                                                             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v53 )
      goto LABEL_52;
    if ( Master_WarQuestSelectionMaster
      && (v60 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(&Master_WarQuestSelectionMaster->klass->_2.bitflags2 + 1) >= (unsigned int)v60) )
    {
      v61 = (QuestReleaseEntity_c *)Master_WarQuestSelectionMaster->klass->_2.typeHierarchy[v60 - 1] == QuestReleaseEntity_TypeInfo
          ? (System_Int32_array **)Master_WarQuestSelectionMaster
          : 0LL;
    }
    else
    {
      v61 = 0LL;
    }
    *(_QWORD *)(v53 + 16) = v61;
    v62 = v53 + 16;
    sub_B5D560((BattleServantConfConponent_o *)(v53 + 16), v61, v54, v55, v56, v57, v58, v59);
    if ( *(_QWORD *)(v53 + 16) )
    {
      v63 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v63,
        (Il2CppObject *)v53,
        Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
        (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
      Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                                               questIdList,
                                                               (System_Predicate_T__o *)v63,
                                                               (const MethodInfo_1FC013C *)Method_System_Array_Exists_int___);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v64 = *(_DWORD **)v62;
        if ( !*(_QWORD *)v62 )
          goto LABEL_52;
        v65 = v46->fields.targetId;
        if ( v64[4] != v65 )
        {
          v66 = v64[5];
          if ( v66 == 32 )
          {
            Master_WarQuestSelectionMaster = v49;
            if ( !v49 )
              goto LABEL_52;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v49, v64[6], 2, 0LL);
            if ( !QuestIdListByGroupId )
              goto LABEL_49;
            v69 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_49;
            klass = (System_Predicate_int__o *)p__9__1->klass;
            if ( !p__9__1->klass )
            {
              klass = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                klass,
                (Il2CppObject *)v46,
                Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
                (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
              v46->fields.__9__1 = klass;
              sub_B5D560(p__9__1, (System_Int32_array **)klass, v71, v72, v73, v74, v75, v76);
            }
            if ( !System_Array__Exists_int_(
                    v69,
                    (System_Predicate_T__o *)klass,
                    (const MethodInfo_1FC013C *)Method_System_Array_Exists_int___) )
              goto LABEL_49;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v67 = *(_DWORD **)v62;
            if ( !*(_QWORD *)v62 || !Master_WarQuestSelectionMaster )
              goto LABEL_52;
          }
          else
          {
            if ( v66 != 1 || v64[6] != v65 )
              goto LABEL_49;
            if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
            }
            Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v67 = *(_DWORD **)v62;
            if ( !*(_QWORD *)v62 || !Master_WarQuestSelectionMaster )
              goto LABEL_52;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_WarQuestSelectionMaster, v67[4], 0LL) )
            return 1;
          if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
          }
          Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !*(_QWORD *)v62 || !Master_WarQuestSelectionMaster )
            goto LABEL_52;
          if ( clsQuestCheck__IsQuestClear(
                 (clsQuestCheck_o *)Master_WarQuestSelectionMaster,
                 *(_DWORD *)(*(_QWORD *)v62 + 16LL),
                 0,
                 0LL) )
          {
            return 1;
          }
        }
      }
    }
LABEL_49:
    if ( ++v52 >= v51 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsQuestOfResultBattleCleared(
        QuestReleaseMaster_o *this,
        int32_t targetId,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v19; // w21
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v21; // x22
  __int64 v22; // x10

  if ( (byte_42ED27D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      targetId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&QuestReleaseEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v15, v16, v17);
    byte_42ED27D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_18:
    sub_B5D69C(list, *(_QWORD *)&targetId);
  v19 = 0;
  while ( 1 )
  {
    if ( v19 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v19,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v21 = Item;
      v22 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == QuestReleaseEntity_TypeInfo
        && (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 48
        && LODWORD(Item[1].monitor) == targetId )
      {
        if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
        }
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !list )
          goto LABEL_18;
        if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)list, (int32_t)v21[1].klass, 0, 0LL) )
          return 1;
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v19;
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

  if ( (byte_42ED272 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&type);
    byte_42ED272 = 1;
  }
  PK = QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
}


QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByQuestID(
        QuestReleaseMaster_o *this,
        int32_t qid,
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

  if ( (byte_42ED274 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, qid, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&QuestReleaseEntity_TypeInfo, v21, v22, v23);
    byte_42ED274 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
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
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v27,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v25 = list;
      v28 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == qid )
      {
        if ( !v24 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v27;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v24 )
LABEL_17:
    sub_B5D69C(list, v25);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


void __fastcall QuestReleaseMaster__getListByQuestID_34232208(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
        const MethodInfo *method)
{
  int32_t v5; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Master_WarQuestSelectionMaster; // x0
  __int64 v63; // x1
  const MethodInfo *v64; // x4
  const MethodInfo *v65; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *v66; // x20
  QuestReleaseEntity_o *v67; // x0
  int32_t Count; // w0
  QuestReleaseEntity_c **v69; // x28
  const MethodInfo_2F33DE8 **v70; // x26
  const MethodInfo_3056FC0 **v71; // x20
  int32_t v72; // w22
  int32_t v73; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v75; // x24
  __int64 v76; // x10
  int32_t missionTargetId; // w25
  QuestReleaseEntity_c **v78; // x27
  const MethodInfo_3056FC0 **v79; // x28
  const MethodInfo_2F33DE8 **v80; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v81; // x26
  WarBoardEvalValueSquare_CalcEval_o *v82; // x24
  signed __int64 eval_low; // x21
  unsigned __int64 v84; // x22
  int32_t v85; // [xsp+Ch] [xbp-84h]
  WarBoardEvalValueSquare_CalcEval_o *v86; // [xsp+10h] [xbp-80h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-58h] BYREF

  v5 = questId;
  if ( (byte_42ED276 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questId,
      (_DWORD)resultList,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__,
      v16,
      v17,
      v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v22, v23, v24);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__,
      v25,
      v26,
      v27);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__,
      v28,
      v29,
      v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v49, v50, v51);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v52, v53, v54);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v55, v56, v57);
    sub_B5D5C4(&QuestReleaseEntity_TypeInfo, v58, v59, v60);
    byte_42ED276 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  v86 = 0LL;
  value = 0LL;
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v61;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  if ( !QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
          (QuestReleaseOverwriteMaster_o *)Master_WarQuestSelectionMaster,
          &entityList,
          v5,
          0LL,
          v64) )
  {
    if ( !*((_BYTE *)&this->fields.revision + 4) )
    {
      Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      v85 = v5;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_42;
      Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                Master_WarQuestSelectionMaster,
                (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( Count >= 1 )
      {
        v69 = &QuestReleaseEntity_TypeInfo;
        v70 = (const MethodInfo_2F33DE8 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__;
        v71 = (const MethodInfo_3056FC0 **)&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        v72 = Count;
        v73 = 0;
        do
        {
          Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_42;
          Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   Master_WarQuestSelectionMaster,
                   v73,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            v75 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
            v76 = *(&(*v69)->_2.bitflags2 + 1);
            if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v76
              && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[v76 - 1] == *v69 )
            {
              Master_WarQuestSelectionMaster = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_42;
              missionTargetId = v75->fields.missionTargetId;
              if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Master_WarQuestSelectionMaster,
                      missionTargetId,
                      &value,
                      *v70) )
              {
                v78 = v69;
                v79 = v71;
                v80 = v70;
                v81 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                  v81,
                  (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
                value = (WarBoardEvalValueSquare_CalcEval_o *)v81;
                Master_WarQuestSelectionMaster = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_42;
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Master_WarQuestSelectionMaster,
                  missionTargetId,
                  (WarBoardAIRoute_RouteData_o *)v81,
                  (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
                v70 = v80;
                v71 = v79;
                v69 = v78;
              }
              Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)value;
              if ( !value )
                goto LABEL_42;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
                v75,
                *v71);
            }
          }
        }
        while ( ++v73 < v72 );
      }
      v5 = v85;
      *((_BYTE *)&this->fields.revision + 4) = 1;
    }
    Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*resultList;
    if ( *resultList )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
      Master_WarQuestSelectionMaster = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue((System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Master_WarQuestSelectionMaster, v5, &v86, (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          return;
        v82 = v86;
        if ( v86 )
        {
          eval_low = SLODWORD(v86->fields.eval);
          if ( (int)eval_low < 1 )
            return;
          v84 = 0LL;
          do
          {
            if ( v84 >= LODWORD(v82->fields.eval) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            if ( !*resultList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*resultList,
              *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)&v82->fields.viewpoint
                                                                      + 8 * v84++
                                                                      + 32),
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
            if ( (__int64)v84 >= eval_low )
              return;
            v82 = v86;
          }
          while ( v86 );
        }
      }
    }
LABEL_42:
    sub_B5D69C(Master_WarQuestSelectionMaster, v63);
  }
  Master_WarQuestSelectionMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*resultList;
  if ( !*resultList )
    goto LABEL_42;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
  if ( !v61 )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v88,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v61,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v88,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v88.fields.current )
      sub_B5D69C(0LL, v65);
    v66 = *resultList;
    v67 = QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
            (QuestReleaseOverwriteEntity_o *)v88.fields.current,
            v65);
    if ( !v66 )
      sub_B5D69C(v67, v67);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v66,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v88,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
}


System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall QuestReleaseMaster__getListByTargetAndCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v26; // w23
  int32_t v27; // w24
  __int64 v28; // x10

  if ( (byte_42ED279 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      targetId,
      condType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&QuestReleaseEntity_TypeInfo, v19, v20, v21);
    byte_42ED279 = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v23 = list;
        v28 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == QuestReleaseEntity_TypeInfo
          && LODWORD(list->fields._syncRoot) == targetId
          && HIDWORD(list->fields.items) == condType )
        {
          if ( !v22 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
        }
      }
      if ( ++v27 >= v26 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v22;
    }
LABEL_16:
    sub_B5D69C(list, v23);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v22;
}


QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByType(
        QuestReleaseMaster_o *this,
        int32_t type,
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

  if ( (byte_42ED277 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&QuestReleaseEntity_TypeInfo, v21, v22, v23);
    byte_42ED277 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
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
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v27,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v25 = list;
      v28 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == QuestReleaseEntity_TypeInfo
        && HIDWORD(list->fields.items) == type )
      {
        if ( !v24 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v27;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v24 )
LABEL_17:
    sub_B5D69C(list, v25);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


System_Int32_array *__fastcall QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t openCondType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_Collections_Generic_List_int__o *v25; // x22
  __int64 v26; // x1
  void *list; // x0
  int32_t v28; // w23
  __int64 v29; // x10

  if ( (byte_42ED278 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      targetId,
      openCondType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&QuestReleaseEntity_TypeInfo, v22, v23, v24);
    byte_42ED278 = 1;
  }
  v25 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  v28 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v28 >= (int)list )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v28,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v29 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v29
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v29 - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)list + 6) == targetId
        && *((_DWORD *)list + 5) == openCondType )
      {
        if ( !v25 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v25,
          *((_DWORD *)list + 4),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    list = this->fields.list;
    ++v28;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v25 )
LABEL_18:
    sub_B5D69C(list, v26);
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F07 & 1) == 0 )
  {
    sub_B5D5C4(&QuestReleaseMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7F07 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestReleaseMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestReleaseMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, x);
  return data->fields.questId == x;
}