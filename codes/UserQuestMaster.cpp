void __fastcall UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6AAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6AAF = 1;
  }
  this->fields.oldId = -1LL;
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    57,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
}


UserQuestEntity_o *__fastcall UserQuestMaster__CreateQuestClearDummyData(
        UserQuestMaster_o *this,
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UserQuestEntity_o *v11; // x22
  const MethodInfo *v12; // x1
  int64_t UserId; // x0
  __int64 v14; // x1

  if ( (byte_42E6AB9 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, questId, phase, updatedAt);
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v8, v9, v10);
    byte_42E6AB9 = 1;
  }
  if ( !questId )
    return 0LL;
  v11 = (UserQuestEntity_o *)sub_B5D694(UserQuestEntity_TypeInfo);
  UserQuestEntity___ctor(v11, v12);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v11 )
    sub_B5D69C(UserId, v14);
  v11->fields.userId = UserId;
  v11->fields.questId = questId;
  v11->fields.questPhase = phase;
  v11->fields.clearNum = 1;
  v11->fields.updatedAt = updatedAt;
  return v11;
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *__fastcall UserQuestMaster__GetEntity(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x1

  if ( (byte_42E6AB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__, userId, questId, method);
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v7, v8, v9);
    byte_42E6AB0 = 1;
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
                                (const MethodInfo_23FB260 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
}


QuestEntity_o *__fastcall UserQuestMaster__GetLatestMainScenarioLastQuest(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Collections_Generic_List_int__o *materialLatestClearList,
        const MethodInfo *method)
{
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
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  void *Instance; // x0
  __int64 v91; // x1
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v93; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v94; // x8
  __int64 v95; // x1
  __int64 v96; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v99; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v102; // x3
  System_Collections_Generic_IEnumerator_T__c *v103; // x8
  unsigned __int64 v104; // x10
  int32_t *v105; // x11
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x10
  System_Collections_Generic_IEnumerator_T__c *v110; // x8
  unsigned __int64 v111; // x10
  int32_t *v112; // x11
  __int64 v113; // x0
  struct UserQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x23
  Il2CppObject *v116; // x24
  struct UserQuestMaster___c_StaticFields *v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  __int64 v124; // x24
  __int64 v125; // x0
  __int64 v126; // x1
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **current; // x1
  __int64 v134; // x23
  __int64 v135; // x0
  __int64 v136; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v138; // x25
  __int64 TypeFlag; // x0
  __int64 v140; // x1
  QuestTree_o *v141; // x0
  __int64 v142; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v144; // x0
  int v145; // w8
  int v146; // w19
  int v147; // w9
  int v149; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v151; // [xsp+20h] [xbp-A0h] BYREF
  int v152[4]; // [xsp+38h] [xbp-88h]
  int v153; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v154; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42E6AB8 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userId, (_DWORD)materialLatestClearList, method);
    sub_B5D5C4(&Method_BasicHelper_Any_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Comparison_UserQuestEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Comparison_UserQuestEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v57, v58, v59);
    sub_B5D5C4(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v60, v61, v62);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v63, v64, v65);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v66, v67, v68);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v69, v70, v71);
    sub_B5D5C4(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__, v72, v73, v74);
    sub_B5D5C4(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__, v75, v76, v77);
    sub_B5D5C4(&UserQuestMaster___c__DisplayClass11_0_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&UserQuestMaster___c_TypeInfo, v81, v82, v83);
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_3024/*"CHAPTER_F_END_ID"*/, v87, v88, v89);
    byte_42E6AB8 = 1;
  }
  memset(&v154, 0, sizeof(v154));
  v153 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v93,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_78;
  Instance = (void *)ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3024/*"CHAPTER_F_END_ID"*/, 0LL);
  v94 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v149 = (int)Instance;
  if ( !v94 )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v94,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v95);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v99 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v99;
        p_offset += 4;
        if ( v99 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v96);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v103 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v104 = 0LL;
      v105 = &v103->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v105 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v104;
        v105 += 4;
        if ( v104 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v106 = (__int64)&v103->vtable[*v105].method;
    }
    else
    {
LABEL_19:
      v106 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v102);
    }
    v107 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v106)(
             Enumerator,
             *(_QWORD *)(v106 + 8));
    if ( !v107 )
      goto LABEL_73;
    v109 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v107 + 300LL) < (unsigned int)v109
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v107 + 200LL) + 8 * v109 - 8) != UserQuestEntity_TypeInfo )
    {
      v107 = sub_B5D990(v107);
LABEL_73:
      sub_B5D69C(v107, v108);
    }
    if ( *(_QWORD *)(v107 + 24) == userId && *(_DWORD *)(v107 + 40) )
    {
      if ( !v93 )
        sub_B5D69C(v107, UserQuestEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v93,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v107,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    }
  }
  v152[0] = 117;
  v153 = 1;
  v110 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v111 = 0LL;
    v112 = &v110->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v112 - 1) != System_IDisposable_TypeInfo )
    {
      ++v111;
      v112 += 4;
      if ( v111 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v113 = (__int64)&v110->vtable[*v112].method;
  }
  else
  {
LABEL_32:
    v113 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v102);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v113)(
    Enumerator,
    *(_QWORD *)(v113 + 8));
  v153 = 0;
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
    v116 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v116,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_UserQuestEntity___ctor__);
    v117 = UserQuestMaster___c_TypeInfo->static_fields;
    v117->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v117->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
  }
  if ( !v93 )
LABEL_78:
    sub_B5D69C(Instance, v91);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v93,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v151,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v93,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v154 = v151;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v154,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v124 = sub_B5D694(UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    UserQuestMaster___c__DisplayClass11_0___ctor((UserQuestMaster___c__DisplayClass11_0_o *)v124, 0LL);
    if ( !v124 )
      sub_B5D69C(v125, v126);
    current = (System_Int32_array **)v154.fields.current;
    *(_QWORD *)(v124 + 16) = v154.fields.current;
    v134 = v124 + 16;
    sub_B5D560((BattleServantConfConponent_o *)(v124 + 16), current, v127, v128, v129, v130, v131, v132);
    if ( !*(_QWORD *)(v124 + 16) )
      sub_B5D69C(v135, v136);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(v135, v136);
    QuestEntity = QuestMaster__getQuestEntity(
                    MasterData_WarQuestSelectionMaster,
                    *(_DWORD *)(*(_QWORD *)(v124 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v138 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v138,
        (Il2CppObject *)v124,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v138,
             (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_63;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_62;
        if ( !*(_QWORD *)v134 )
          sub_B5D69C(TypeFlag, v140);
        if ( *(_DWORD *)(*(_QWORD *)v134 + 32LL) <= v149 )
        {
LABEL_62:
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          v141 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v134 )
            sub_B5D69C(v141, v142);
          if ( !v141 )
            sub_B5D69C(0LL, v142);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v141, *(_DWORD *)(*(_QWORD *)v134 + 32LL), 0LL);
          v144 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v144 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v144->static_fields->PowerUpQuestWarId )
          {
LABEL_63:
            v145 = 332;
            goto LABEL_65;
          }
        }
      }
    }
  }
  QuestEntity = 0LL;
  v145 = 330;
LABEL_65:
  v152[0] = v145;
  v146 = ++v153;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v154,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  if ( !v146 )
    return 0LL;
  v147 = v152[v146 - 1];
  if ( v147 == 330 )
  {
    QuestEntity = 0LL;
    goto LABEL_70;
  }
  if ( v147 == 332 )
  {
LABEL_70:
    v153 = v146 - 1;
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
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  void *Instance; // x0
  __int64 v91; // x1
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v93; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v94; // x8
  __int64 v95; // x1
  __int64 v96; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v99; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v102; // x3
  System_Collections_Generic_IEnumerator_T__c *v103; // x8
  unsigned __int64 v104; // x10
  int32_t *v105; // x11
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x10
  System_Collections_Generic_IEnumerator_T__c *v110; // x8
  unsigned __int64 v111; // x10
  int32_t *v112; // x11
  __int64 v113; // x0
  struct UserQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__10_0; // x23
  Il2CppObject *v116; // x24
  struct UserQuestMaster___c_StaticFields *v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  __int64 v124; // x24
  __int64 v125; // x0
  __int64 v126; // x1
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **current; // x1
  __int64 v134; // x23
  __int64 v135; // x0
  __int64 v136; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v138; // x25
  __int64 TypeFlag; // x0
  __int64 v140; // x1
  QuestTree_o *v141; // x0
  __int64 v142; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v144; // x0
  int v145; // w8
  int v146; // w19
  int v147; // w9
  int v149; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v151; // [xsp+20h] [xbp-A0h] BYREF
  int v152[4]; // [xsp+38h] [xbp-88h]
  int v153; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v154; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42E6AB7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userId, (_DWORD)materialLatestClearList, method);
    sub_B5D5C4(&Method_BasicHelper_Any_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Comparison_UserQuestEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Comparison_UserQuestEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v57, v58, v59);
    sub_B5D5C4(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v60, v61, v62);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v63, v64, v65);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v66, v67, v68);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v69, v70, v71);
    sub_B5D5C4(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__, v72, v73, v74);
    sub_B5D5C4(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__, v75, v76, v77);
    sub_B5D5C4(&UserQuestMaster___c__DisplayClass10_0_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&UserQuestMaster___c_TypeInfo, v81, v82, v83);
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_3024/*"CHAPTER_F_END_ID"*/, v87, v88, v89);
    byte_42E6AB7 = 1;
  }
  memset(&v154, 0, sizeof(v154));
  v153 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v93,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_77;
  Instance = (void *)ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_3024/*"CHAPTER_F_END_ID"*/, 0LL);
  v94 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v149 = (int)Instance;
  if ( !v94 )
    goto LABEL_77;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v94,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v95);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v99 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v99;
        p_offset += 4;
        if ( v99 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v96);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v103 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v104 = 0LL;
      v105 = &v103->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v105 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v104;
        v105 += 4;
        if ( v104 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v106 = (__int64)&v103->vtable[*v105].method;
    }
    else
    {
LABEL_19:
      v106 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v102);
    }
    v107 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v106)(
             Enumerator,
             *(_QWORD *)(v106 + 8));
    if ( !v107 )
      goto LABEL_72;
    v109 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v107 + 300LL) < (unsigned int)v109
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v107 + 200LL) + 8 * v109 - 8) != UserQuestEntity_TypeInfo )
    {
      v107 = sub_B5D990(v107);
LABEL_72:
      sub_B5D69C(v107, v108);
    }
    if ( *(_QWORD *)(v107 + 24) == userId )
    {
      if ( !v93 )
        sub_B5D69C(v107, UserQuestEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v93,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v107,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    }
  }
  v152[0] = 108;
  v153 = 1;
  v110 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v111 = 0LL;
    v112 = &v110->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v112 - 1) != System_IDisposable_TypeInfo )
    {
      ++v111;
      v112 += 4;
      if ( v111 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v113 = (__int64)&v110->vtable[*v112].method;
  }
  else
  {
LABEL_31:
    v113 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v102);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v113)(
    Enumerator,
    *(_QWORD *)(v113 + 8));
  v153 = 0;
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
    v116 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__10_0,
      v116,
      Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_UserQuestEntity___ctor__);
    v117 = UserQuestMaster___c_TypeInfo->static_fields;
    v117->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v117->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
  }
  if ( !v93 )
LABEL_77:
    sub_B5D69C(Instance, v91);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v93,
    (System_Comparison_T__o *)_9__10_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v151,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v93,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v154 = v151;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v154,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v124 = sub_B5D694(UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    UserQuestMaster___c__DisplayClass10_0___ctor((UserQuestMaster___c__DisplayClass10_0_o *)v124, 0LL);
    if ( !v124 )
      sub_B5D69C(v125, v126);
    current = (System_Int32_array **)v154.fields.current;
    *(_QWORD *)(v124 + 16) = v154.fields.current;
    v134 = v124 + 16;
    sub_B5D560((BattleServantConfConponent_o *)(v124 + 16), current, v127, v128, v129, v130, v131, v132);
    if ( !*(_QWORD *)(v124 + 16) )
      sub_B5D69C(v135, v136);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(v135, v136);
    QuestEntity = QuestMaster__getQuestEntity(
                    MasterData_WarQuestSelectionMaster,
                    *(_DWORD *)(*(_QWORD *)(v124 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v138 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v138,
        (Il2CppObject *)v124,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v138,
             (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_62;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_61;
        if ( !*(_QWORD *)v134 )
          sub_B5D69C(TypeFlag, v140);
        if ( *(_DWORD *)(*(_QWORD *)v134 + 32LL) <= v149 )
        {
LABEL_61:
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          v141 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v134 )
            sub_B5D69C(v141, v142);
          if ( !v141 )
            sub_B5D69C(0LL, v142);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v141, *(_DWORD *)(*(_QWORD *)v134 + 32LL), 0LL);
          v144 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v144 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v144->static_fields->PowerUpQuestWarId )
          {
LABEL_62:
            v145 = 323;
            goto LABEL_64;
          }
        }
      }
    }
  }
  QuestEntity = 0LL;
  v145 = 321;
LABEL_64:
  v152[0] = v145;
  v146 = ++v153;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v154,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  if ( !v146 )
    return 0LL;
  v147 = v152[v146 - 1];
  if ( v147 == 321 )
  {
    QuestEntity = 0LL;
    goto LABEL_69;
  }
  if ( v147 == 323 )
  {
LABEL_69:
    v153 = v146 - 1;
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
    sub_B5D69C(this, userId);
  v4 = *(_QWORD *)&questIds->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v7 = this;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v4 )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserQuestMaster__TryGetEntity(
        UserQuestMaster_o *this,
        UserQuestEntity_o **entity,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x2

  if ( (byte_42E6AB1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&questId);
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v9, v10, v11);
    byte_42E6AB1 = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
}


int32_t __fastcall UserQuestMaster__getChallengeCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *v12; // x0
  struct System_String_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *userIdString; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v27; // x19
  unsigned __int64 v28; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x9
  UserQuestMaster_o *v33; // x0
  int64_t v34; // x1
  System_Int32_array *v35; // x2
  const MethodInfo *v36; // x3
  int32_t *v37; // [xsp+0h] [xbp-30h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-24h] BYREF
  int64_t v39; // [xsp+18h] [xbp-18h] BYREF

  v39 = userId;
  v38 = questId;
  if ( (byte_42E6AB3 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      questId,
      method);
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v9, v10, v11);
    byte_42E6AB3 = 1;
  }
  v37 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v12 = System_Int64__ToString((int64_t)&v39, 0LL);
    v13 = System_String__Concat_44577788(v12, (System_String_o *)StringLiteral_1245/*":"*/, 0LL);
    this->fields.userIdString = v13;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.userIdString,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  userIdString = this->fields.userIdString;
  v21 = System_Int32__ToString((int32_t)&v38, 0LL);
  v22 = System_String__Concat_44577788(userIdString, v21, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_19;
  klass = lookup->klass;
  v27 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v28;
      p_offset += 2;
      if ( v28 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v25);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v27,
          v22,
          &v37,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v37;
  if ( !v37 )
LABEL_19:
    sub_B5D69C(lookup, v24);
  v31 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 300LL) >= (unsigned int)v31
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v31 - 8) == UserQuestEntity_TypeInfo )
  {
    return v37[14];
  }
  v33 = (UserQuestMaster_o *)sub_B5D990(v37);
  return UserQuestMaster__getChallengeCountsFromIds(v33, v34, v35, v36);
}


int32_t __fastcall UserQuestMaster__getChallengeCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
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
  System_Collections_Generic_List_int__o *v25; // x21
  __int64 v26; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v29; // w23
  int32_t v30; // w22
  int32_t v31; // w24
  _DWORD *v32; // x25
  __int64 v33; // x10

  if ( (byte_42E6AB4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)questIds,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v22, v23, v24);
    byte_42E6AB4 = 1;
  }
  v25 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
    v30 = 0;
    v31 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v31,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v32 = list;
      v33 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v33
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v33 - 8) != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_21;
      if ( !v25 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v25,
              *((_DWORD *)list + 8),
              (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v30 += v32[14], v25->fields._size) )
      {
LABEL_21:
        if ( ++v31 < v29 )
          continue;
      }
      return v30;
    }
LABEL_18:
    sub_B5D69C(list, v26);
  }
  return 0;
}


int32_t __fastcall UserQuestMaster__getClearCountsFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *v12; // x0
  struct System_String_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *userIdString; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v27; // x19
  unsigned __int64 v28; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x9
  UserQuestMaster_o *v33; // x0
  int64_t v34; // x1
  System_Int32_array *v35; // x2
  const MethodInfo *v36; // x3
  int32_t *v37; // [xsp+0h] [xbp-30h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-24h] BYREF
  int64_t v39; // [xsp+18h] [xbp-18h] BYREF

  v39 = userId;
  v38 = questId;
  if ( (byte_42E6AB5 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      questId,
      method);
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v9, v10, v11);
    byte_42E6AB5 = 1;
  }
  v37 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v12 = System_Int64__ToString((int64_t)&v39, 0LL);
    v13 = System_String__Concat_44577788(v12, (System_String_o *)StringLiteral_1245/*":"*/, 0LL);
    this->fields.userIdString = v13;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.userIdString,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  userIdString = this->fields.userIdString;
  v21 = System_Int32__ToString((int32_t)&v38, 0LL);
  v22 = System_String__Concat_44577788(userIdString, v21, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_19;
  klass = lookup->klass;
  v27 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v28;
      p_offset += 2;
      if ( v28 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v25);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v27,
          v22,
          &v37,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v37;
  if ( !v37 )
LABEL_19:
    sub_B5D69C(lookup, v24);
  v31 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 300LL) >= (unsigned int)v31
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v31 - 8) == UserQuestEntity_TypeInfo )
  {
    return v37[10];
  }
  v33 = (UserQuestMaster_o *)sub_B5D990(v37);
  return UserQuestMaster__getClearCountsFromIds(v33, v34, v35, v36);
}


int32_t __fastcall UserQuestMaster__getClearCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
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
  System_Collections_Generic_List_int__o *v25; // x21
  __int64 v26; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v29; // w23
  int32_t v30; // w22
  int32_t v31; // w24
  _DWORD *v32; // x25
  __int64 v33; // x10

  if ( (byte_42E6AB6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)questIds,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v22, v23, v24);
    byte_42E6AB6 = 1;
  }
  v25 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
    v30 = 0;
    v31 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v31,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v32 = list;
      v33 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v33
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v33 - 8) != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_21;
      if ( !v25 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v25,
              *((_DWORD *)list + 8),
              (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v30 += v32[10], v25->fields._size) )
      {
LABEL_21:
        if ( ++v31 < v29 )
          continue;
      }
      return v30;
    }
LABEL_18:
    sub_B5D69C(list, v26);
  }
  return 0;
}


UserQuestEntity_o *__fastcall UserQuestMaster__getEntityFromId(
        UserQuestMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *v12; // x0
  struct System_String_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *userIdString; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v27; // x21
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v32; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v33; // x19
  unsigned __int64 v34; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v35; // x11
  __int64 v36; // x0
  UserQuestEntity_o *result; // x0
  __int64 v38; // x10
  int32_t v39; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v40; // [xsp+8h] [xbp-28h] BYREF

  v40 = userId;
  v39 = questId;
  if ( (byte_42E6AB2 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      questId,
      method);
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v9, v10, v11);
    byte_42E6AB2 = 1;
  }
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v12 = System_Int64__ToString((int64_t)&v40, 0LL);
    v13 = System_String__Concat_44577788(v12, (System_String_o *)StringLiteral_1245/*":"*/, 0LL);
    this->fields.userIdString = v13;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.userIdString,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  userIdString = this->fields.userIdString;
  v21 = System_Int32__ToString((int32_t)&v39, 0LL);
  v22 = System_String__Concat_44577788(userIdString, v21, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_27;
  klass = lookup->klass;
  v27 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v25);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v27,
          v22,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_27:
    sub_B5D69C(lookup, v24);
  v32 = lookup->klass;
  v33 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v32->_1.interfaceOffsets->offset;
    while ( *(v35 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v34;
      v35 += 2;
      if ( v34 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v36 = (__int64)&v32->vtable[*(_DWORD *)v35 + 2].method;
  }
  else
  {
LABEL_18:
    v36 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v31);
  }
  result = (UserQuestEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v36)(
                                  v33,
                                  v22,
                                  *(_QWORD *)(v36 + 8));
  if ( result )
  {
    v38 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v38 )
      return 0LL;
    if ( (UserQuestEntity_c *)result->klass->_2.typeHierarchy[v38 - 1] != UserQuestEntity_TypeInfo )
      return 0LL;
  }
  return result;
}


void __fastcall UserQuestMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7024 & 1) == 0 )
  {
    sub_B5D5C4(&UserQuestMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7024 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserQuestMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserQuestMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, a);
  return usrEnt->fields.questId == a;
}