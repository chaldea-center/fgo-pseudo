void __fastcall UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F80E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__, method);
    byte_40F80E5 = 1;
  }
  this->fields.oldId = -1LL;
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    56,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *__fastcall UserQuestMaster__CreateQuestClearDummyData(
        UserQuestMaster_o *this,
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  __int64 v8; // x1
  UserQuestEntity_o *v9; // x22
  const MethodInfo *v10; // x1
  int64_t UserId; // x0

  if ( (byte_40F80EF & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, *(_QWORD *)&questId);
    sub_B16FFC(&UserQuestEntity_TypeInfo, v8);
    byte_40F80EF = 1;
  }
  if ( !questId )
    return 0LL;
  v9 = (UserQuestEntity_o *)sub_B170CC(
                              UserQuestEntity_TypeInfo,
                              *(_QWORD *)&questId,
                              *(_QWORD *)&phase,
                              updatedAt,
                              method);
  UserQuestEntity___ctor(v9, v10);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v9 )
    sub_B170D4();
  v9->fields.userId = UserId;
  v9->fields.questId = questId;
  v9->fields.questPhase = phase;
  v9->fields.clearNum = 1;
  v9->fields.updatedAt = updatedAt;
  return v9;
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *__fastcall UserQuestMaster__GetEntity(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x1

  if ( (byte_40F80E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__, userId);
    sub_B16FFC(&UserQuestEntity_TypeInfo, v7);
    byte_40F80E6 = 1;
  }
  if ( (BYTE3(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestEntity_TypeInfo);
  }
  PK = UserQuestEntity__CreatePK(userId, questId, *(const MethodInfo **)&questId);
  return (UserQuestEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
}


QuestEntity_o *__fastcall UserQuestMaster__GetLatestMainScenarioLastQuest(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
  __int64 v6; // x1
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  WebViewManager_o *Instance; // x0
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x22
  WebViewManager_o *v41; // x0
  ConstantMaster_o *v42; // x0
  int32_t Value; // w0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v44; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x10
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  UserQuestMaster___c_c *v64; // x0
  struct UserQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x23
  Il2CppObject *v67; // x24
  struct UserQuestMaster___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  __int64 v79; // x24
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **current; // x1
  __int64 v87; // x23
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v93; // x25
  QuestTree_o *v94; // x0
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v96; // x0
  int v97; // w8
  int v98; // w19
  int v99; // w9
  int32_t v101; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v103; // [xsp+20h] [xbp-A0h] BYREF
  int v104[4]; // [xsp+38h] [xbp-88h]
  int v105; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v106; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40F80EE & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userId);
    sub_B16FFC(&Method_BasicHelper_Any_int___, v6);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Comparison_UserQuestEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_UserQuestEntity__TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v14);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v15);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v16);
    sub_B16FFC(&System_IDisposable_TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v23);
    sub_B16FFC(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v26);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v27);
    sub_B16FFC(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__, v28);
    sub_B16FFC(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__, v29);
    sub_B16FFC(&UserQuestMaster___c__DisplayClass11_0_TypeInfo, v30);
    sub_B16FFC(&UserQuestMaster___c_TypeInfo, v31);
    sub_B16FFC(&UserQuestEntity_TypeInfo, v32);
    sub_B16FFC(&StringLiteral_2956/*"CHAPTER_F_END_ID"*/, v33);
    byte_40F80EE = 1;
  }
  memset(&v106, 0, sizeof(v106));
  v105 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_78;
  v42 = (ConstantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v41,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !v42 )
    goto LABEL_78;
  Value = ConstantMaster__GetValue(v42, (System_String_o *)StringLiteral_2956/*"CHAPTER_F_END_ID"*/, 0LL);
  v44 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v101 = Value;
  if ( !v44 )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v44,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v47;
        p_offset += 4;
        if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v50 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v51 = 0LL;
      v52 = &v50->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v52 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v51;
        v52 += 4;
        if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v53 = (__int64)&v50->vtable[*v52].method;
    }
    else
    {
LABEL_19:
      v53 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v54 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
            Enumerator,
            *(_QWORD *)(v53 + 8));
    if ( !v54 )
      goto LABEL_73;
    v55 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v54 + 300LL) < (unsigned int)v55
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v54 + 200LL) + 8 * v55 - 8) != UserQuestEntity_TypeInfo )
    {
      sub_B173C8(v54);
LABEL_73:
      sub_B170D4();
    }
    if ( *(_QWORD *)(v54 + 24) == userId && *(_DWORD *)(v54 + 40) )
    {
      if ( !v40 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v40,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    }
  }
  v104[0] = 117;
  v105 = 1;
  v56 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_32:
    v59 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(Enumerator, *(_QWORD *)(v59 + 8));
  v105 = 0;
  v64 = UserQuestMaster___c_TypeInfo;
  if ( (BYTE3(UserQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v64 = UserQuestMaster___c_TypeInfo;
  }
  static_fields = v64->static_fields;
  _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    }
    v67 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_UserQuestEntity__TypeInfo,
                                                                           v60,
                                                                           v61,
                                                                           v62,
                                                                           v63);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v67,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_UserQuestEntity___ctor__);
    v68 = UserQuestMaster___c_TypeInfo->static_fields;
    v68->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v68->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  if ( !v40 )
LABEL_78:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v40,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v103,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v40,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v106 = v103;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v106,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v79 = sub_B170CC(UserQuestMaster___c__DisplayClass11_0_TypeInfo, v75, v76, v77, v78);
    UserQuestMaster___c__DisplayClass11_0___ctor((UserQuestMaster___c__DisplayClass11_0_o *)v79, 0LL);
    if ( !v79 )
      sub_B170D4();
    current = (System_Int32_array **)v106.fields.current;
    *(_QWORD *)(v79 + 16) = v106.fields.current;
    v87 = v79 + 16;
    sub_B16F98((BattleServantConfConponent_o *)(v79 + 16), current, v80, v81, v82, v83, v84, v85);
    if ( !*(_QWORD *)(v79 + 16) )
      sub_B170D4();
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    QuestEntity = QuestMaster__getQuestEntity(
                    MasterData_WarQuestSelectionMaster,
                    *(_DWORD *)(*(_QWORD *)(v79 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v93 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v88, v89, v90, v91);
      System_Func_int__bool____ctor(
        v93,
        (Il2CppObject *)v79,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v93,
             (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_63;
      }
      if ( QuestEntity__GetTypeFlag(QuestEntity, 0LL) == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_85;
        if ( !*(_QWORD *)v87 )
          sub_B170D4();
        if ( *(_DWORD *)(*(_QWORD *)v87 + 32LL) <= v101 )
        {
LABEL_85:
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          v94 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v87 )
            sub_B170D4();
          if ( !v94 )
            sub_B170D4();
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v94, *(_DWORD *)(*(_QWORD *)v87 + 32LL), 0LL);
          v96 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v96 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v96->static_fields->PowerUpQuestWarId )
          {
LABEL_63:
            v97 = 332;
            goto LABEL_65;
          }
        }
      }
    }
  }
  QuestEntity = 0LL;
  v97 = 330;
LABEL_65:
  v104[0] = v97;
  v98 = ++v105;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v106,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  if ( !v98 )
    return 0LL;
  v99 = v104[v98 - 1];
  if ( v99 == 330 )
  {
    QuestEntity = 0LL;
    goto LABEL_70;
  }
  if ( v99 == 332 )
  {
LABEL_70:
    v105 = v98 - 1;
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
  __int64 v6; // x1
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  WebViewManager_o *Instance; // x0
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x22
  WebViewManager_o *v41; // x0
  ConstantMaster_o *v42; // x0
  int32_t Value; // w0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v44; // x8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x10
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  UserQuestMaster___c_c *v64; // x0
  struct UserQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__10_0; // x23
  Il2CppObject *v67; // x24
  struct UserQuestMaster___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  __int64 v79; // x24
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **current; // x1
  __int64 v87; // x23
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v93; // x25
  QuestTree_o *v94; // x0
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v96; // x0
  int v97; // w8
  int v98; // w19
  int v99; // w9
  int32_t v101; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v103; // [xsp+20h] [xbp-A0h] BYREF
  int v104[4]; // [xsp+38h] [xbp-88h]
  int v105; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v106; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40F80ED & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userId);
    sub_B16FFC(&Method_BasicHelper_Any_int___, v6);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Comparison_UserQuestEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_UserQuestEntity__TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v14);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v15);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v16);
    sub_B16FFC(&System_IDisposable_TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v23);
    sub_B16FFC(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v26);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v27);
    sub_B16FFC(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__, v28);
    sub_B16FFC(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__, v29);
    sub_B16FFC(&UserQuestMaster___c__DisplayClass10_0_TypeInfo, v30);
    sub_B16FFC(&UserQuestMaster___c_TypeInfo, v31);
    sub_B16FFC(&UserQuestEntity_TypeInfo, v32);
    sub_B16FFC(&StringLiteral_2956/*"CHAPTER_F_END_ID"*/, v33);
    byte_40F80ED = 1;
  }
  memset(&v106, 0, sizeof(v106));
  v105 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_77;
  v42 = (ConstantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v41,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !v42 )
    goto LABEL_77;
  Value = ConstantMaster__GetValue(v42, (System_String_o *)StringLiteral_2956/*"CHAPTER_F_END_ID"*/, 0LL);
  v44 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v101 = Value;
  if ( !v44 )
    goto LABEL_77;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v44,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v47;
        p_offset += 4;
        if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v50 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v51 = 0LL;
      v52 = &v50->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v52 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v51;
        v52 += 4;
        if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v53 = (__int64)&v50->vtable[*v52].method;
    }
    else
    {
LABEL_19:
      v53 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v54 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
            Enumerator,
            *(_QWORD *)(v53 + 8));
    if ( !v54 )
      goto LABEL_72;
    v55 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v54 + 300LL) < (unsigned int)v55
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v54 + 200LL) + 8 * v55 - 8) != UserQuestEntity_TypeInfo )
    {
      sub_B173C8(v54);
LABEL_72:
      sub_B170D4();
    }
    if ( *(_QWORD *)(v54 + 24) == userId )
    {
      if ( !v40 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v40,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    }
  }
  v104[0] = 108;
  v105 = 1;
  v56 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_31:
    v59 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(Enumerator, *(_QWORD *)(v59 + 8));
  v105 = 0;
  v64 = UserQuestMaster___c_TypeInfo;
  if ( (BYTE3(UserQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestMaster___c_TypeInfo);
    v64 = UserQuestMaster___c_TypeInfo;
  }
  static_fields = v64->static_fields;
  _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      static_fields = UserQuestMaster___c_TypeInfo->static_fields;
    }
    v67 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_UserQuestEntity__TypeInfo,
                                                                           v60,
                                                                           v61,
                                                                           v62,
                                                                           v63);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__10_0,
      v67,
      Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_UserQuestEntity___ctor__);
    v68 = UserQuestMaster___c_TypeInfo->static_fields;
    v68->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v68->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  if ( !v40 )
LABEL_77:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v40,
    (System_Comparison_T__o *)_9__10_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v103,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v40,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v106 = v103;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v106,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v79 = sub_B170CC(UserQuestMaster___c__DisplayClass10_0_TypeInfo, v75, v76, v77, v78);
    UserQuestMaster___c__DisplayClass10_0___ctor((UserQuestMaster___c__DisplayClass10_0_o *)v79, 0LL);
    if ( !v79 )
      sub_B170D4();
    current = (System_Int32_array **)v106.fields.current;
    *(_QWORD *)(v79 + 16) = v106.fields.current;
    v87 = v79 + 16;
    sub_B16F98((BattleServantConfConponent_o *)(v79 + 16), current, v80, v81, v82, v83, v84, v85);
    if ( !*(_QWORD *)(v79 + 16) )
      sub_B170D4();
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    QuestEntity = QuestMaster__getQuestEntity(
                    MasterData_WarQuestSelectionMaster,
                    *(_DWORD *)(*(_QWORD *)(v79 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v93 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v88, v89, v90, v91);
      System_Func_int__bool____ctor(
        v93,
        (Il2CppObject *)v79,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v93,
             (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_62;
      }
      if ( QuestEntity__GetTypeFlag(QuestEntity, 0LL) == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_84;
        if ( !*(_QWORD *)v87 )
          sub_B170D4();
        if ( *(_DWORD *)(*(_QWORD *)v87 + 32LL) <= v101 )
        {
LABEL_84:
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          v94 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v87 )
            sub_B170D4();
          if ( !v94 )
            sub_B170D4();
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v94, *(_DWORD *)(*(_QWORD *)v87 + 32LL), 0LL);
          v96 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v96 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v96->static_fields->PowerUpQuestWarId )
          {
LABEL_62:
            v97 = 323;
            goto LABEL_64;
          }
        }
      }
    }
  }
  QuestEntity = 0LL;
  v97 = 321;
LABEL_64:
  v104[0] = v97;
  v98 = ++v105;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v106,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  if ( !v98 )
    return 0LL;
  v99 = v104[v98 - 1];
  if ( v99 == 321 )
  {
    QuestEntity = 0LL;
    goto LABEL_69;
  }
  if ( v99 == 323 )
  {
LABEL_69:
    v105 = v98 - 1;
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

  if ( !questIds )
    sub_B170D4();
  v4 = *(_QWORD *)&questIds->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v7 = this;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v4 )
    {
      sub_B17100(this, userId, questIds);
      sub_B170A0();
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
  __int64 v9; // x1
  System_String_o *PK; // x2

  if ( (byte_40F80E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__, entity);
    sub_B16FFC(&UserQuestEntity_TypeInfo, v9);
    byte_40F80E7 = 1;
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
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
}


int32_t __fastcall UserQuestMaster__getChallengeCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  struct System_String_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *userIdString; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x19
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x9
  UserQuestMaster_o *v27; // x0
  int64_t v28; // x1
  System_Int32_array *v29; // x2
  const MethodInfo *v30; // x3
  int32_t *v31; // [xsp+0h] [xbp-30h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF
  int64_t v33; // [xsp+18h] [xbp-18h] BYREF

  v33 = userId;
  v32 = questId;
  if ( (byte_40F80E9 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B16FFC(&UserQuestEntity_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v7);
    byte_40F80E9 = 1;
  }
  v31 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v33, 0LL);
    v9 = System_String__Concat_43743732(v8, (System_String_o *)StringLiteral_1223/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userIdString,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  userIdString = this->fields.userIdString;
  v17 = System_Int32__ToString((int32_t)&v32, 0LL);
  v18 = System_String__Concat_43743732(userIdString, v17, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_19;
  klass = lookup->klass;
  v21 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v22;
      p_offset += 2;
      if ( v22 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v21,
          v18,
          &v31,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  if ( !v31 )
LABEL_19:
    sub_B170D4();
  v25 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 300LL) >= (unsigned int)v25
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * v25 - 8) == UserQuestEntity_TypeInfo )
  {
    return v31[14];
  }
  v27 = (UserQuestMaster_o *)sub_B173C8(v31);
  return UserQuestMaster__getChallengeCountsFromIds(v27, v28, v29, v30);
}


int32_t __fastcall UserQuestMaster__getChallengeCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w22
  int32_t v19; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v22; // x25
  __int64 v23; // x10

  if ( (byte_40F80EA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&UserQuestEntity_TypeInfo, v13);
    byte_40F80EA = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    userId,
                                                    questIds,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor_49346956(
    v14,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v20 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v20,
               v19,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v22 = Item;
      v23 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (UserQuestEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( Item[1].monitor != (void *)userId )
        goto LABEL_21;
      if ( !v14 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v14,
              (int32_t)Item[2].klass,
              (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__)
        || (v18 += LODWORD(v22[3].monitor), v14->fields._size) )
      {
LABEL_21:
        if ( ++v19 < v17 )
          continue;
      }
      return v18;
    }
LABEL_18:
    sub_B170D4();
  }
  return 0;
}


int32_t __fastcall UserQuestMaster__getClearCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  struct System_String_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *userIdString; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x19
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x9
  UserQuestMaster_o *v27; // x0
  int64_t v28; // x1
  System_Int32_array *v29; // x2
  const MethodInfo *v30; // x3
  int32_t *v31; // [xsp+0h] [xbp-30h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF
  int64_t v33; // [xsp+18h] [xbp-18h] BYREF

  v33 = userId;
  v32 = questId;
  if ( (byte_40F80EB & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B16FFC(&UserQuestEntity_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v7);
    byte_40F80EB = 1;
  }
  v31 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v33, 0LL);
    v9 = System_String__Concat_43743732(v8, (System_String_o *)StringLiteral_1223/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userIdString,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  userIdString = this->fields.userIdString;
  v17 = System_Int32__ToString((int32_t)&v32, 0LL);
  v18 = System_String__Concat_43743732(userIdString, v17, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_19;
  klass = lookup->klass;
  v21 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v22;
      p_offset += 2;
      if ( v22 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v21,
          v18,
          &v31,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  if ( !v31 )
LABEL_19:
    sub_B170D4();
  v25 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 300LL) >= (unsigned int)v25
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * v25 - 8) == UserQuestEntity_TypeInfo )
  {
    return v31[10];
  }
  v27 = (UserQuestMaster_o *)sub_B173C8(v31);
  return UserQuestMaster__getClearCountsFromIds(v27, v28, v29, v30);
}


int32_t __fastcall UserQuestMaster__getClearCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w22
  int32_t v19; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v22; // x25
  __int64 v23; // x10

  if ( (byte_40F80EC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&UserQuestEntity_TypeInfo, v13);
    byte_40F80EC = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    userId,
                                                    questIds,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor_49346956(
    v14,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v20 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v20,
               v19,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v22 = Item;
      v23 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (UserQuestEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( Item[1].monitor != (void *)userId )
        goto LABEL_21;
      if ( !v14 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v14,
              (int32_t)Item[2].klass,
              (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__)
        || (v18 += LODWORD(v22[2].monitor), v14->fields._size) )
      {
LABEL_21:
        if ( ++v19 < v17 )
          continue;
      }
      return v18;
    }
LABEL_18:
    sub_B170D4();
  }
  return 0;
}


UserQuestEntity_o *__fastcall UserQuestMaster__getEntityFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  struct System_String_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *userIdString; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x21
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v25; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v26; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v27; // x19
  unsigned __int64 v28; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v29; // x11
  __int64 v30; // x0
  UserQuestEntity_o *result; // x0
  __int64 v32; // x10
  int32_t v33; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v34; // [xsp+8h] [xbp-28h] BYREF

  v34 = userId;
  v33 = questId;
  if ( (byte_40F80E8 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B16FFC(&UserQuestEntity_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v7);
    byte_40F80E8 = 1;
  }
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v34, 0LL);
    v9 = System_String__Concat_43743732(v8, (System_String_o *)StringLiteral_1223/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userIdString,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  userIdString = this->fields.userIdString;
  v17 = System_Int32__ToString((int32_t)&v33, 0LL);
  v18 = System_String__Concat_43743732(userIdString, v17, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_27;
  klass = lookup->klass;
  v21 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v21,
          v18,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  v25 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !v25 )
LABEL_27:
    sub_B170D4();
  v26 = v25->klass;
  v27 = v25;
  if ( *(_WORD *)&v25->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v26->_1.interfaceOffsets->offset;
    while ( *(v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v28;
      v29 += 2;
      if ( v28 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v30 = (__int64)&v26->vtable[*(_DWORD *)v29 + 2].method;
  }
  else
  {
LABEL_18:
    v30 = sub_AAFEF8(v25, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserQuestEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v30)(
                                  v27,
                                  v18,
                                  *(_QWORD *)(v30 + 8));
  if ( result )
  {
    v32 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v32 )
      return 0LL;
    if ( (UserQuestEntity_c *)result->klass->_2.typeHierarchy[v32 - 1] != UserQuestEntity_TypeInfo )
      return 0LL;
  }
  return result;
}


void __fastcall UserQuestMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F79AA & 1) == 0 )
  {
    sub_B16FFC(&UserQuestMaster___c_TypeInfo, v1);
    byte_40F79AA = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserQuestMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserQuestMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return usrEnt->fields.questId == a;
}