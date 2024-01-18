void __fastcall UserQuestMaster___ctor(UserQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185DFC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__, method);
    byte_4185DFC = 1;
  }
  this->fields.oldId = -1LL;
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    56,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string___ctor__);
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
  __int64 v12; // x1

  if ( (byte_4185E06 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&UserQuestEntity_TypeInfo, v8);
    byte_4185E06 = 1;
  }
  if ( !questId )
    return 0LL;
  v9 = (UserQuestEntity_o *)sub_B2C42C(UserQuestEntity_TypeInfo);
  UserQuestEntity___ctor(v9, v10);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v9 )
    sub_B2C434(UserId, v12);
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

  if ( (byte_4185DFD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__, userId);
    sub_B2C35C(&UserQuestEntity_TypeInfo, v7);
    byte_4185DFD = 1;
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
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__GetEntity__);
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
  void *Instance; // x0
  __int64 v35; // x1
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v38; // x8
  __int64 v39; // x1
  __int64 v40; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v46; // x3
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x10
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0
  struct UserQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x23
  Il2CppObject *v60; // x24
  struct UserQuestMaster___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x24
  __int64 v69; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **current; // x1
  __int64 v78; // x23
  __int64 v79; // x0
  __int64 v80; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v82; // x25
  __int64 TypeFlag; // x0
  __int64 v84; // x1
  QuestTree_o *v85; // x0
  __int64 v86; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v88; // x0
  int v89; // w8
  int v90; // w19
  int v91; // w9
  int v93; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+20h] [xbp-A0h] BYREF
  int v96[4]; // [xsp+38h] [xbp-88h]
  int v97; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4185E05 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userId);
    sub_B2C35C(&Method_BasicHelper_Any_int___, v6);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Comparison_UserQuestEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_UserQuestEntity__TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v14);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v15);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v16);
    sub_B2C35C(&System_IDisposable_TypeInfo, v17);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v23);
    sub_B2C35C(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v26);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v27);
    sub_B2C35C(&Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__, v28);
    sub_B2C35C(&Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__, v29);
    sub_B2C35C(&UserQuestMaster___c__DisplayClass11_0_TypeInfo, v30);
    sub_B2C35C(&UserQuestMaster___c_TypeInfo, v31);
    sub_B2C35C(&UserQuestEntity_TypeInfo, v32);
    sub_B2C35C(&StringLiteral_2965/*"CHAPTER_F_END_ID"*/, v33);
    byte_4185E05 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  v97 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_78;
  Instance = (void *)ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_2965/*"CHAPTER_F_END_ID"*/, 0LL);
  v38 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v93 = (int)Instance;
  if ( !v38 )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v38,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v39);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v43;
        p_offset += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v40);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v47 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v48 = 0LL;
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v49 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v50 = (__int64)&v47->vtable[*v49].method;
    }
    else
    {
LABEL_19:
      v50 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v46);
    }
    v51 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
            Enumerator,
            *(_QWORD *)(v50 + 8));
    if ( !v51 )
      goto LABEL_73;
    v53 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v51 + 300LL) < (unsigned int)v53
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v51 + 200LL) + 8 * v53 - 8) != UserQuestEntity_TypeInfo )
    {
      v51 = sub_B2C728(v51);
LABEL_73:
      sub_B2C434(v51, v52);
    }
    if ( *(_QWORD *)(v51 + 24) == userId && *(_DWORD *)(v51 + 40) )
    {
      if ( !v37 )
        sub_B2C434(v51, UserQuestEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v37,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    }
  }
  v96[0] = 117;
  v97 = 1;
  v54 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_32:
    v57 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v46);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(Enumerator, *(_QWORD *)(v57 + 8));
  v97 = 0;
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
    v60 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v60,
      Method_UserQuestMaster___c__GetLatestMainScenarioLastQuest_b__11_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserQuestEntity___ctor__);
    v61 = UserQuestMaster___c_TypeInfo->static_fields;
    v61->__9__11_0 = (struct System_Comparison_UserQuestEntity__o *)_9__11_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v61->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
  }
  if ( !v37 )
LABEL_78:
    sub_B2C434(Instance, v35);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v37,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v95,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v37,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v98 = v95;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v98,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v68 = sub_B2C42C(UserQuestMaster___c__DisplayClass11_0_TypeInfo);
    UserQuestMaster___c__DisplayClass11_0___ctor((UserQuestMaster___c__DisplayClass11_0_o *)v68, 0LL);
    if ( !v68 )
      sub_B2C434(v69, v70);
    current = (System_Int32_array **)v98.fields.current;
    *(_QWORD *)(v68 + 16) = v98.fields.current;
    v78 = v68 + 16;
    sub_B2C2F8((BattleServantConfConponent_o *)(v68 + 16), current, v71, v72, v73, v74, v75, v76);
    if ( !*(_QWORD *)(v68 + 16) )
      sub_B2C434(v79, v80);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(v79, v80);
    QuestEntity = QuestMaster__getQuestEntity(
                    MasterData_WarQuestSelectionMaster,
                    *(_DWORD *)(*(_QWORD *)(v68 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v82 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v82,
        (Il2CppObject *)v68,
        Method_UserQuestMaster___c__DisplayClass11_0__GetLatestMainScenarioLastQuest_b__1__,
        (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v82,
             (const MethodInfo_1726368 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_63;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_62;
        if ( !*(_QWORD *)v78 )
          sub_B2C434(TypeFlag, v84);
        if ( *(_DWORD *)(*(_QWORD *)v78 + 32LL) <= v93 )
        {
LABEL_62:
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          v85 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v78 )
            sub_B2C434(v85, v86);
          if ( !v85 )
            sub_B2C434(0LL, v86);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v85, *(_DWORD *)(*(_QWORD *)v78 + 32LL), 0LL);
          v88 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v88 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v88->static_fields->PowerUpQuestWarId )
          {
LABEL_63:
            v89 = 332;
            goto LABEL_65;
          }
        }
      }
    }
  }
  QuestEntity = 0LL;
  v89 = 330;
LABEL_65:
  v96[0] = v89;
  v90 = ++v97;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v98,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  if ( !v90 )
    return 0LL;
  v91 = v96[v90 - 1];
  if ( v91 == 330 )
  {
    QuestEntity = 0LL;
    goto LABEL_70;
  }
  if ( v91 == 332 )
  {
LABEL_70:
    v97 = v90 - 1;
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
  void *Instance; // x0
  __int64 v35; // x1
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v38; // x8
  __int64 v39; // x1
  __int64 v40; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v46; // x3
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x10
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0
  struct UserQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__10_0; // x23
  Il2CppObject *v60; // x24
  struct UserQuestMaster___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x24
  __int64 v69; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **current; // x1
  __int64 v78; // x23
  __int64 v79; // x0
  __int64 v80; // x1
  QuestEntity_o *QuestEntity; // x22
  System_Func_int__bool__o *v82; // x25
  __int64 TypeFlag; // x0
  __int64 v84; // x1
  QuestTree_o *v85; // x0
  __int64 v86; // x1
  int32_t WarID_ByQuestID; // w23
  BalanceConfig_c *v88; // x0
  int v89; // w8
  int v90; // w19
  int v91; // w9
  int v93; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+20h] [xbp-A0h] BYREF
  int v96[4]; // [xsp+38h] [xbp-88h]
  int v97; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4185E04 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userId);
    sub_B2C35C(&Method_BasicHelper_Any_int___, v6);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Comparison_UserQuestEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_UserQuestEntity__TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__get_Current__, v14);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v15);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v16);
    sub_B2C35C(&System_IDisposable_TypeInfo, v17);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v23);
    sub_B2C35C(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v26);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v27);
    sub_B2C35C(&Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__, v28);
    sub_B2C35C(&Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__, v29);
    sub_B2C35C(&UserQuestMaster___c__DisplayClass10_0_TypeInfo, v30);
    sub_B2C35C(&UserQuestMaster___c_TypeInfo, v31);
    sub_B2C35C(&UserQuestEntity_TypeInfo, v32);
    sub_B2C35C(&StringLiteral_2965/*"CHAPTER_F_END_ID"*/, v33);
    byte_4185E04 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  v97 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_77;
  Instance = (void *)ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_2965/*"CHAPTER_F_END_ID"*/, 0LL);
  v38 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  v93 = (int)Instance;
  if ( !v38 )
    goto LABEL_77;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v38,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v39);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v43;
        p_offset += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v40);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v47 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v48 = 0LL;
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v49 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v50 = (__int64)&v47->vtable[*v49].method;
    }
    else
    {
LABEL_19:
      v50 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v46);
    }
    v51 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
            Enumerator,
            *(_QWORD *)(v50 + 8));
    if ( !v51 )
      goto LABEL_72;
    v53 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v51 + 300LL) < (unsigned int)v53
      || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v51 + 200LL) + 8 * v53 - 8) != UserQuestEntity_TypeInfo )
    {
      v51 = sub_B2C728(v51);
LABEL_72:
      sub_B2C434(v51, v52);
    }
    if ( *(_QWORD *)(v51 + 24) == userId )
    {
      if ( !v37 )
        sub_B2C434(v51, UserQuestEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v37,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    }
  }
  v96[0] = 108;
  v97 = 1;
  v54 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_31:
    v57 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v46);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(Enumerator, *(_QWORD *)(v57 + 8));
  v97 = 0;
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
    v60 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__10_0,
      v60,
      Method_UserQuestMaster___c__GetMainScenarioLatestClear_b__10_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserQuestEntity___ctor__);
    v61 = UserQuestMaster___c_TypeInfo->static_fields;
    v61->__9__10_0 = (struct System_Comparison_UserQuestEntity__o *)_9__10_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v61->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
  }
  if ( !v37 )
LABEL_77:
    sub_B2C434(Instance, v35);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v37,
    (System_Comparison_T__o *)_9__10_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v95,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v37,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserQuestEntity__GetEnumerator__);
  v98 = v95;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v98,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__MoveNext__) )
  {
    v68 = sub_B2C42C(UserQuestMaster___c__DisplayClass10_0_TypeInfo);
    UserQuestMaster___c__DisplayClass10_0___ctor((UserQuestMaster___c__DisplayClass10_0_o *)v68, 0LL);
    if ( !v68 )
      sub_B2C434(v69, v70);
    current = (System_Int32_array **)v98.fields.current;
    *(_QWORD *)(v68 + 16) = v98.fields.current;
    v78 = v68 + 16;
    sub_B2C2F8((BattleServantConfConponent_o *)(v68 + 16), current, v71, v72, v73, v74, v75, v76);
    if ( !*(_QWORD *)(v68 + 16) )
      sub_B2C434(v79, v80);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(v79, v80);
    QuestEntity = QuestMaster__getQuestEntity(
                    MasterData_WarQuestSelectionMaster,
                    *(_DWORD *)(*(_QWORD *)(v68 + 16) + 32LL),
                    0LL);
    if ( QuestEntity )
    {
      v82 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v82,
        (Il2CppObject *)v68,
        Method_UserQuestMaster___c__DisplayClass10_0__GetMainScenarioLatestClear_b__1__,
        (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)materialLatestClearList,
             (System_Func_T__bool__o *)v82,
             (const MethodInfo_1726368 *)Method_BasicHelper_Any_int___) )
      {
        goto LABEL_62;
      }
      TypeFlag = QuestEntity__GetTypeFlag(QuestEntity, 0LL);
      if ( (_DWORD)TypeFlag == 2 )
      {
        if ( QuestEntity->fields.chapterId )
          goto LABEL_61;
        if ( !*(_QWORD *)v78 )
          sub_B2C434(TypeFlag, v84);
        if ( *(_DWORD *)(*(_QWORD *)v78 + 32LL) <= v93 )
        {
LABEL_61:
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          v85 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v78 )
            sub_B2C434(v85, v86);
          if ( !v85 )
            sub_B2C434(0LL, v86);
          WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v85, *(_DWORD *)(*(_QWORD *)v78 + 32LL), 0LL);
          v88 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v88 = BalanceConfig_TypeInfo;
          }
          if ( WarID_ByQuestID < v88->static_fields->PowerUpQuestWarId )
          {
LABEL_62:
            v89 = 323;
            goto LABEL_64;
          }
        }
      }
    }
  }
  QuestEntity = 0LL;
  v89 = 321;
LABEL_64:
  v96[0] = v89;
  v90 = ++v97;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v98,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserQuestEntity__Dispose__);
  if ( !v90 )
    return 0LL;
  v91 = v96[v90 - 1];
  if ( v91 == 321 )
  {
    QuestEntity = 0LL;
    goto LABEL_69;
  }
  if ( v91 == 323 )
  {
LABEL_69:
    v97 = v90 - 1;
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
    sub_B2C434(this, userId);
  v4 = *(_QWORD *)&questIds->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v7 = this;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v4 )
    {
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
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

  if ( (byte_4185DFE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__, entity);
    sub_B2C35C(&UserQuestEntity_TypeInfo, v9);
    byte_4185DFE = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__TryGetEntity__);
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
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v23; // x19
  unsigned __int64 v24; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x9
  UserQuestMaster_o *v29; // x0
  int64_t v30; // x1
  System_Int32_array *v31; // x2
  const MethodInfo *v32; // x3
  int32_t *v33; // [xsp+0h] [xbp-30h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-24h] BYREF
  int64_t v35; // [xsp+18h] [xbp-18h] BYREF

  v35 = userId;
  v34 = questId;
  if ( (byte_4185E00 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B2C35C(&UserQuestEntity_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v7);
    byte_4185E00 = 1;
  }
  v33 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v35, 0LL);
    v9 = System_String__Concat_44305532(v8, (System_String_o *)StringLiteral_1225/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_B2C2F8(
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
  v17 = System_Int32__ToString((int32_t)&v34, 0LL);
  v18 = System_String__Concat_44305532(userIdString, v17, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_19;
  klass = lookup->klass;
  v23 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v24;
      p_offset += 2;
      if ( v24 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AC5258(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v21);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v23,
          v18,
          &v33,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v33;
  if ( !v33 )
LABEL_19:
    sub_B2C434(lookup, v20);
  v27 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 300LL) >= (unsigned int)v27
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * v27 - 8) == UserQuestEntity_TypeInfo )
  {
    return v33[14];
  }
  v29 = (UserQuestMaster_o *)sub_B2C728(v33);
  return UserQuestMaster__getChallengeCountsFromIds(v29, v30, v31, v32);
}


int32_t __fastcall UserQuestMaster__getChallengeCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x21
  __int64 v14; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w22
  int32_t v19; // w24
  _DWORD *v20; // x25
  __int64 v21; // x10

  if ( (byte_4185E01 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&UserQuestEntity_TypeInfo, v12);
    byte_4185E01 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v19,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v20 = list;
      v21 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v21
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_21;
      if ( !v13 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v13,
              *((_DWORD *)list + 8),
              (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v18 += v20[14], v13->fields._size) )
      {
LABEL_21:
        if ( ++v19 < v17 )
          continue;
      }
      return v18;
    }
LABEL_18:
    sub_B2C434(list, v14);
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
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v23; // x19
  unsigned __int64 v24; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x9
  UserQuestMaster_o *v29; // x0
  int64_t v30; // x1
  System_Int32_array *v31; // x2
  const MethodInfo *v32; // x3
  int32_t *v33; // [xsp+0h] [xbp-30h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-24h] BYREF
  int64_t v35; // [xsp+18h] [xbp-18h] BYREF

  v35 = userId;
  v34 = questId;
  if ( (byte_4185E02 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B2C35C(&UserQuestEntity_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v7);
    byte_4185E02 = 1;
  }
  v33 = 0LL;
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v35, 0LL);
    v9 = System_String__Concat_44305532(v8, (System_String_o *)StringLiteral_1225/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_B2C2F8(
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
  v17 = System_Int32__ToString((int32_t)&v34, 0LL);
  v18 = System_String__Concat_44305532(userIdString, v17, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_19;
  klass = lookup->klass;
  v23 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v24;
      p_offset += 2;
      if ( v24 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AC5258(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v21);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, int32_t **, _QWORD))p_method)(
          v23,
          v18,
          &v33,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)v33;
  if ( !v33 )
LABEL_19:
    sub_B2C434(lookup, v20);
  v27 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 300LL) >= (unsigned int)v27
    && *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * v27 - 8) == UserQuestEntity_TypeInfo )
  {
    return v33[10];
  }
  v29 = (UserQuestMaster_o *)sub_B2C728(v33);
  return UserQuestMaster__getClearCountsFromIds(v29, v30, v31, v32);
}


int32_t __fastcall UserQuestMaster__getClearCountsFromIds(
        UserQuestMaster_o *this,
        int64_t userId,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x21
  __int64 v14; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w22
  int32_t v19; // w24
  _DWORD *v20; // x25
  __int64 v21; // x10

  if ( (byte_4185E03 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&UserQuestEntity_TypeInfo, v12);
    byte_4185E03 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)questIds,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  list = this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v19,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v20 = list;
      v21 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v21
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) != UserQuestEntity_TypeInfo )
      {
        break;
      }
      if ( *((_QWORD *)list + 3) != userId )
        goto LABEL_21;
      if ( !v13 )
        break;
      if ( !System_Collections_Generic_List_int___Remove(
              v13,
              *((_DWORD *)list + 8),
              (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__)
        || (v18 += v20[10], v13->fields._size) )
      {
LABEL_21:
        if ( ++v19 < v17 )
          continue;
      }
      return v18;
    }
LABEL_18:
    sub_B2C434(list, v14);
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
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v23; // x21
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v28; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v29; // x19
  unsigned __int64 v30; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v31; // x11
  __int64 v32; // x0
  UserQuestEntity_o *result; // x0
  __int64 v34; // x10
  int32_t v35; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v36; // [xsp+8h] [xbp-28h] BYREF

  v36 = userId;
  v35 = questId;
  if ( (byte_4185DFF & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B2C35C(&UserQuestEntity_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v7);
    byte_4185DFF = 1;
  }
  if ( this->fields.oldId != userId )
  {
    this->fields.oldId = userId;
    v8 = System_Int64__ToString((int64_t)&v36, 0LL);
    v9 = System_String__Concat_44305532(v8, (System_String_o *)StringLiteral_1225/*":"*/, 0LL);
    this->fields.userIdString = v9;
    sub_B2C2F8(
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
  v17 = System_Int32__ToString((int32_t)&v35, 0LL);
  v18 = System_String__Concat_44305532(userIdString, v17, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_27;
  klass = lookup->klass;
  v23 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AC5258(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v21);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v23,
          v18,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_27:
    sub_B2C434(lookup, v20);
  v28 = lookup->klass;
  v29 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v28->_1.interfaceOffsets->offset;
    while ( *(v31 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v30;
      v31 += 2;
      if ( v30 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v32 = (__int64)&v28->vtable[*(_DWORD *)v31 + 2].method;
  }
  else
  {
LABEL_18:
    v32 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v27);
  }
  result = (UserQuestEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v32)(
                                  v29,
                                  v18,
                                  *(_QWORD *)(v32 + 8));
  if ( result )
  {
    v34 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v34 )
      return 0LL;
    if ( (UserQuestEntity_c *)result->klass->_2.typeHierarchy[v34 - 1] != UserQuestEntity_TypeInfo )
      return 0LL;
  }
  return result;
}


void __fastcall UserQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserQuestMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41856D2 & 1) == 0 )
  {
    sub_B2C35C(&UserQuestMaster___c_TypeInfo, v1);
    byte_41856D2 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserQuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserQuestMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserQuestMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
  return usrEnt->fields.questId == a;
}