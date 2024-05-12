void __fastcall UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389332 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
    byte_4389332 = 1;
  }
  this->fields.oldId = -1LL;
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    57,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
}


UserQuestEntity_o *__fastcall UserQuestMaster__CreateQuestClearDummyData(
        UserQuestMaster_o *this,
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  UserQuestEntity_o *v8; // x22
  const MethodInfo *v9; // x1
  int64_t UserId; // x0
  __int64 v11; // x1

  if ( (byte_438933C & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UserQuestEntity_TypeInfo);
    byte_438933C = 1;
  }
  if ( !questId )
    return 0LL;
  v8 = (UserQuestEntity_o *)sub_B77694(UserQuestEntity_TypeInfo);
  UserQuestEntity___ctor(v8, v9);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v8 )
    sub_B7769C(UserId, v11);
  v8->fields.userId = UserId;
  v8->fields.questId = questId;
  v8->fields.questPhase = phase;
  v8->fields.clearNum = 1;
  v8->fields.updatedAt = updatedAt;
  return v8;
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *__fastcall UserQuestMaster__GetEntity(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4389333 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
    sub_B775C4(&UserQuestEntity_TypeInfo);
    byte_4389333 = 1;
  }
  if ( (BYTE3(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  }
  PK = UserQuestEntity__CreatePK(userId, questId, *(const MethodInfo **)&questId);
  return (UserQuestEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
}


QuestEntity_o *__fastcall UserQuestMaster__GetLatestMainScenarioLastQuest(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v7; // x1
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x8
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  struct UserQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x23
  Il2CppObject *v30; // x24
  struct UserQuestMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x24
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **current; // x1
  __int64 v48; // x23
  __int64 v49; // x0
  __int64 v50; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v52; // x25
  __int64 TypeFlag; // x0
  __int64 v54; // x1
  QuestTree_o *v55; // x0
  __int64 v56; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v58; // x0
  int v59; // w8
  int v60; // w19
  int v61; // w9
  int v63; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-A0h] BYREF
  int v66[4]; // [xsp+38h] [xbp-88h]
  int v67; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_438933B & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_BasicHelper_Any_int___);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Comparison_UserQuestEntity___ctor__);
    sub_B775C4(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B775C4(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__);
    sub_B775C4(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__);
    sub_B775C4(&UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    sub_B775C4(&UserQuestMaster___c_TypeInfo);
    sub_B775C4(&UserQuestEntity_TypeInfo);
    sub_B775C4(&StringLiteral_3082/*"CHAPTER_F_END_ID"*/);
    byte_438933B = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v67 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_78;
  Instance = (void *)ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3082/*"CHAPTER_F_END_ID"*/, 0LL);
  v10 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v63 = (int)Instance;
  if ( !v10 )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v10,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_19:
      v20 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_73;
    v23 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) < (unsigned int)v23
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v23 - 8) != UserQuestEntity_TypeInfo )
    {
      v21 = sub_B77990(v21);
LABEL_73:
      sub_B7769C(v21, v22);
    }
    if ( *(_QWORD *)(v21 + 24) == userId && *(_DWORD *)(v21 + 40) )
    {
      if ( !v9 )
        sub_B7769C(v21, UserQuestEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    }
  }
  v66[0] = 117;
  v67 = 1;
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_32:
    v27 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  v67 = 0;
  Instance = UserQuestMaster___c_TypeInfo;
  if ( (BYTE3(UserQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    Instance = UserQuestMaster___c_TypeInfo;
  }
  static_fields = (struct UserQuestMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v30,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_UserQuestEntity___ctor__);
    v31 = UserQuestMaster___c_TypeInfo->static_fields;
    v31->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v31->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !v9 )
LABEL_78:
    sub_B7769C(Instance, v7);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v68 = v65;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v38 = sub_B77694(UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    UserQuestMaster___c__DisplayClass11_0___ctor((UserQuestMaster___c__DisplayClass11_0_o *)v38, 0LL);
    if ( !v38 )
      sub_B7769C(v39, v40);
    current = (System_Int32_array **)v68.fields.current;
    *(_QWORD *)(v38 + 16) = v68.fields.current;
    v48 = v38 + 16;
    sub_B77560((BattleServantConfConponent_o *)(v38 + 16), current, v41, v42, v43, v44, v45, v46);
    if ( !*(_QWORD *)(v38 + 16) )
      sub_B7769C(v49, v50);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B7769C(v49, v50);
    QuestEntity = QuestMaster__getQuestEntity(
                    MasterData_WarQuestSelectionMaster,
                    *(_DWORD *)(*(_QWORD *)(v38 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v52 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v52,
        (Il2CppObject *)v38,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v52,
             (const MethodInfo_1C65E00 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_63;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_62;
        if ( !*(_QWORD *)v48 )
          sub_B7769C(TypeFlag, v54);
        if ( *(_DWORD *)(*(_QWORD *)v48 + 32LL) <= v63 )
        {
LABEL_62:
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          v55 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v48 )
            sub_B7769C(v55, v56);
          if ( !v55 )
            sub_B7769C(0LL, v56);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v55, *(_DWORD *)(*(_QWORD *)v48 + 32LL), 0LL);
          v58 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v58 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v58->static_fields->PowerUpQuestWarId )
          {
LABEL_63:
            v59 = 332;
            goto LABEL_65;
          }
        }
      }
    }
  }
  QuestEntity = 0LL;
  v59 = 330;
LABEL_65:
  v66[0] = v59;
  v60 = ++v67;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  if ( !v60 )
    return 0LL;
  v61 = v66[v60 - 1];
  if ( v61 == 330 )
  {
    QuestEntity = 0LL;
    goto LABEL_70;
  }
  if ( v61 == 332 )
  {
LABEL_70:
    v67 = v60 - 1;
    return QuestEntity;
  }
  return 0LL;
}


QuestEntity_o *__fastcall UserQuestMaster__GetMainScenarioLatestClear(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v7; // x1
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x8
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  struct UserQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__10_0; // x23
  Il2CppObject *v30; // x24
  struct UserQuestMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x24
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **current; // x1
  __int64 v48; // x23
  __int64 v49; // x0
  __int64 v50; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v52; // x25
  __int64 TypeFlag; // x0
  __int64 v54; // x1
  QuestTree_o *v55; // x0
  __int64 v56; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v58; // x0
  int v59; // w8
  int v60; // w19
  int v61; // w9
  int v63; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-A0h] BYREF
  int v66[4]; // [xsp+38h] [xbp-88h]
  int v67; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_438933A & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_BasicHelper_Any_int___);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Comparison_UserQuestEntity___ctor__);
    sub_B775C4(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B775C4(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__);
    sub_B775C4(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__);
    sub_B775C4(&UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    sub_B775C4(&UserQuestMaster___c_TypeInfo);
    sub_B775C4(&UserQuestEntity_TypeInfo);
    sub_B775C4(&StringLiteral_3082/*"CHAPTER_F_END_ID"*/);
    byte_438933A = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v67 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_77;
  Instance = (void *)ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3082/*"CHAPTER_F_END_ID"*/, 0LL);
  v10 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v63 = (int)Instance;
  if ( !v10 )
    goto LABEL_77;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v10,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_19:
      v20 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_72;
    v23 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) < (unsigned int)v23
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v23 - 8) != UserQuestEntity_TypeInfo )
    {
      v21 = sub_B77990(v21);
LABEL_72:
      sub_B7769C(v21, v22);
    }
    if ( *(_QWORD *)(v21 + 24) == userId )
    {
      if ( !v9 )
        sub_B7769C(v21, UserQuestEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    }
  }
  v66[0] = 108;
  v67 = 1;
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_31:
    v27 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  v67 = 0;
  Instance = UserQuestMaster___c_TypeInfo;
  if ( (BYTE3(UserQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    Instance = UserQuestMaster___c_TypeInfo;
  }
  static_fields = (struct UserQuestMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__10_0,
      v30,
      Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_UserQuestEntity___ctor__);
    v31 = UserQuestMaster___c_TypeInfo->static_fields;
    v31->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v31->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !v9 )
LABEL_77:
    sub_B7769C(Instance, v7);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__10_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v68 = v65;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v38 = sub_B77694(UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    UserQuestMaster___c__DisplayClass10_0___ctor((UserQuestMaster___c__DisplayClass10_0_o *)v38, 0LL);
    if ( !v38 )
      sub_B7769C(v39, v40);
    current = (System_Int32_array **)v68.fields.current;
    *(_QWORD *)(v38 + 16) = v68.fields.current;
    v48 = v38 + 16;
    sub_B77560((BattleServantConfConponent_o *)(v38 + 16), current, v41, v42, v43, v44, v45, v46);
    if ( !*(_QWORD *)(v38 + 16) )
      sub_B7769C(v49, v50);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B7769C(v49, v50);
    QuestEntity = QuestMaster__getQuestEntity(
                    MasterData_WarQuestSelectionMaster,
                    *(_DWORD *)(*(_QWORD *)(v38 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v52 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v52,
        (Il2CppObject *)v38,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v52,
             (const MethodInfo_1C65E00 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_62;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_61;
        if ( !*(_QWORD *)v48 )
          sub_B7769C(TypeFlag, v54);
        if ( *(_DWORD *)(*(_QWORD *)v48 + 32LL) <= v63 )
        {
LABEL_61:
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          v55 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v48 )
            sub_B7769C(v55, v56);
          if ( !v55 )
            sub_B7769C(0LL, v56);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v55, *(_DWORD *)(*(_QWORD *)v48 + 32LL), 0LL);
          v58 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v58 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v58->static_fields->PowerUpQuestWarId )
          {
LABEL_62:
            v59 = 323;
            goto LABEL_64;
          }
        }
      }
    }
  }
  QuestEntity = 0LL;
  v59 = 321;
LABEL_64:
  v66[0] = v59;
  v60 = ++v67;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  if ( !v60 )
    return 0LL;
  v61 = v66[v60 - 1];
  if ( v61 == 321 )
  {
    QuestEntity = 0LL;
    goto LABEL_69;
  }
  if ( v61 == 323 )
  {
LABEL_69:
    v67 = v60 - 1;
    return QuestEntity;
  }
  return 0LL;
}


bool __fastcall UserQuestMaster__IsQuestResetAndQuestClear(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  UserQuestEntity_o *EntityFromId; // x0

  EntityFromId = UserQuestMaster__getEntityFromId(this, userId, questId, method);
  return EntityFromId && EntityFromId->fields.clearNum >= 1 && (EntityFromId->fields.status & 2) != 0;
}


bool __fastcall UserQuestMaster__IsQuestResetAndQuestClearIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v4; // x8
  UserQuestMaster_o *v7; // x21
  unsigned __int64 v8; // x22
  __int64 v10; // x0

  if ( !questIds )
    sub_B7769C(this, userId);
  v4 = *(_QWORD *)&questIds->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v7 = this;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v4 )
    {
      v10 = sub_B776C8(this);
      sub_B77668(v10, 0LL);
    }
    this = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v7, userId, questIds->m_Items[v8 + 1], method);
    if ( this )
    {
      if ( SLODWORD(this->fields._lookup) >= 1 && (BYTE4(this->fields.sb) & 2) != 0 )
        break;
    }
    LODWORD(v4) = questIds->max_length;
    if ( (__int64)++v8 >= (int)v4 )
      return 0;
  }
  return 1;
}


bool __fastcall UserQuestMaster__TryGetEntity(
        UserQuestMaster_o *this,
        UserQuestEntity_o **entity,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4389334 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
    sub_B775C4(&UserQuestEntity_TypeInfo);
    byte_4389334 = 1;
  }
  if ( (BYTE3(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  }
  PK = UserQuestEntity__CreatePK(userId, questId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
}


int32_t __fastcall UserQuestMaster__getChallengeCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  struct System_String_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_o *userIdString; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v18; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v20; // x19
  unsigned __int64 v21; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x9
  UserQuestMaster_o *v26; // x0
  int64_t v27; // x1
  System_Int32_array *v28; // x2
  const MethodInfo *v29; // x3
  int32_t *v30; // [xsp+0h] [xbp-30h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-24h] BYREF
  int64_t v32; // [xsp+18h] [xbp-18h] BYREF

  v32 = userId;
  v31 = questId;
  if ( (byte_4389336 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&UserQuestEntity_TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_4389336 = 1;
  }
  v30 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v6 = System_Int64__ToString((int64_t)&v32, 0LL);
    v7 = System_String__Concat_44901936(v6, (System_String_o *)StringLiteral_1252/*":"*/, 0LL);
    this->fields.userIdString = v7;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.userIdString,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  userIdString = this->fields.userIdString;
  v15 = System_Int32__ToString((int32_t)&v31, 0LL);
  v16 = System_String__Concat_44901936(userIdString, v15, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_19;
  klass = lookup->klass;
  v20 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v21;
      p_offset += 2;
      if ( v21 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v20,
          v16,
          &v30,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v30;
  if ( !v30 )
LABEL_19:
    sub_B7769C(lookup, v18);
  v24 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) >= (unsigned int)v24
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * v24 - 8) == UserQuestEntity_TypeInfo )
  {
    return v30[14];
  }
  v26 = (UserQuestMaster_o *)sub_B77990(v30);
  return UserQuestMaster__getChallengeCountsFromIds(v26, v27, v28, v29);
}


int32_t __fastcall UserQuestMaster__getChallengeCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  __int64 v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w22
  int32_t v13; // w24
  _DWORD *v14; // x25
  __int64 v15; // x10

  if ( (byte_4389337 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&UserQuestEntity_TypeInfo);
    byte_4389337 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51270276(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v13,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = list;
      v15 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v15
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v15 - 8) != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_21;
      if ( !v7 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v7,
              *((_DWORD *)list + 8),
              (const MethodInfo_30E7764 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v12 += v14[14], v7->fields._size) )
      {
LABEL_21:
        if ( ++v13 < v11 )
          continue;
      }
      return v12;
    }
LABEL_18:
    sub_B7769C(list, v8);
  }
  return 0;
}


int32_t __fastcall UserQuestMaster__getClearCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  struct System_String_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_o *userIdString; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v18; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v20; // x19
  unsigned __int64 v21; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x9
  UserQuestMaster_o *v26; // x0
  int64_t v27; // x1
  System_Int32_array *v28; // x2
  const MethodInfo *v29; // x3
  int32_t *v30; // [xsp+0h] [xbp-30h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-24h] BYREF
  int64_t v32; // [xsp+18h] [xbp-18h] BYREF

  v32 = userId;
  v31 = questId;
  if ( (byte_4389338 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&UserQuestEntity_TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_4389338 = 1;
  }
  v30 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v6 = System_Int64__ToString((int64_t)&v32, 0LL);
    v7 = System_String__Concat_44901936(v6, (System_String_o *)StringLiteral_1252/*":"*/, 0LL);
    this->fields.userIdString = v7;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.userIdString,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  userIdString = this->fields.userIdString;
  v15 = System_Int32__ToString((int32_t)&v31, 0LL);
  v16 = System_String__Concat_44901936(userIdString, v15, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_19;
  klass = lookup->klass;
  v20 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v21;
      p_offset += 2;
      if ( v21 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v20,
          v16,
          &v30,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v30;
  if ( !v30 )
LABEL_19:
    sub_B7769C(lookup, v18);
  v24 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) >= (unsigned int)v24
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * v24 - 8) == UserQuestEntity_TypeInfo )
  {
    return v30[10];
  }
  v26 = (UserQuestMaster_o *)sub_B77990(v30);
  return UserQuestMaster__getClearCountsFromIds(v26, v27, v28, v29);
}


int32_t __fastcall UserQuestMaster__getClearCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  __int64 v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w22
  int32_t v13; // w24
  _DWORD *v14; // x25
  __int64 v15; // x10

  if ( (byte_4389339 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&UserQuestEntity_TypeInfo);
    byte_4389339 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51270276(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v13,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = list;
      v15 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v15
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v15 - 8) != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_21;
      if ( !v7 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v7,
              *((_DWORD *)list + 8),
              (const MethodInfo_30E7764 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v12 += v14[10], v7->fields._size) )
      {
LABEL_21:
        if ( ++v13 < v11 )
          continue;
      }
      return v12;
    }
LABEL_18:
    sub_B7769C(list, v8);
  }
  return 0;
}


UserQuestEntity_o *__fastcall UserQuestMaster__getEntityFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  struct System_String_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_o *userIdString; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v18; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v20; // x21
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v24; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v25; // x19
  unsigned __int64 v26; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v27; // x11
  __int64 v28; // x0
  UserQuestEntity_o *result; // x0
  __int64 v30; // x10
  int32_t v31; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v32; // [xsp+8h] [xbp-28h] BYREF

  v32 = userId;
  v31 = questId;
  if ( (byte_4389335 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&UserQuestEntity_TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_4389335 = 1;
  }
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v6 = System_Int64__ToString((int64_t)&v32, 0LL);
    v7 = System_String__Concat_44901936(v6, (System_String_o *)StringLiteral_1252/*":"*/, 0LL);
    this->fields.userIdString = v7;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.userIdString,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  userIdString = this->fields.userIdString;
  v15 = System_Int32__ToString((int32_t)&v31, 0LL);
  v16 = System_String__Concat_44901936(userIdString, v15, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_27;
  klass = lookup->klass;
  v20 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v20,
          v16,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_27:
    sub_B7769C(lookup, v18);
  v24 = lookup->klass;
  v25 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v24->_1.interfaceOffsets->offset;
    while ( *(v27 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v26;
      v27 += 2;
      if ( v26 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v28 = (__int64)&v24->vtable[*(_DWORD *)v27 + 2].method;
  }
  else
  {
LABEL_18:
    v28 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserQuestEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v28)(
                                  v25,
                                  v16,
                                  *(_QWORD *)(v28 + 8));
  if ( result )
  {
    v30 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v30 )
      return 0LL;
    if ( (UserQuestEntity_c *)result->klass->_2.typeHierarchy[v30 - 1] != UserQuestEntity_TypeInfo )
      return 0LL;
  }
  return result;
}


void __fastcall UserQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct UserQuestMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4388914 & 1) == 0 )
  {
    sub_B775C4(&UserQuestMaster___c_TypeInfo);
    byte_4388914 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(UserQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = UserQuestMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserQuestMaster___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall UserQuestMaster___c___ctor(UserQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserQuestMaster___c___GetLatestMainScenarioLastQuest_b__11_0(
        UserQuestMaster___c_o *this,
        UserQuestEntity_o *x,
        UserQuestEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_B7769C(this, x);
  return y->fields.questId - x->fields.questId;
}


int32_t __fastcall UserQuestMaster___c___GetMainScenarioLatestClear_b__10_0(
        UserQuestMaster___c_o *this,
        UserQuestEntity_o *x,
        UserQuestEntity_o *y,
        const MethodInfo *method)
{
  int64_t v4; // x8

  if ( !y || !x )
    sub_B7769C(this, x);
  v4 = y->fields.updatedAt - x->fields.updatedAt;
  if ( v4 < 0 )
    return -1;
  if ( v4 )
    return 1;
  return y->fields.questId - x->fields.questId;
}


void __fastcall UserQuestMaster___c__DisplayClass10_0___ctor(
        UserQuestMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserQuestMaster___c__DisplayClass10_0___GetMainScenarioLatestClear_b__1(
        UserQuestMaster___c__DisplayClass10_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *usrEnt; // x8

  usrEnt = this->fields.usrEnt;
  if ( !usrEnt )
    sub_B7769C(this, a);
  return usrEnt->fields.questId == a;
}


void __fastcall UserQuestMaster___c__DisplayClass11_0___ctor(
        UserQuestMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserQuestMaster___c__DisplayClass11_0___GetLatestMainScenarioLastQuest_b__1(
        UserQuestMaster___c__DisplayClass11_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *usrEnt; // x8

  usrEnt = this->fields.usrEnt;
  if ( !usrEnt )
    sub_B7769C(this, a);
  return usrEnt->fields.questId == a;
}