void __fastcall NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E628B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E628B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    94,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity(
        NpcFollowerMaster_o *this,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E6289 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__,
      id,
      questId,
      *(_QWORD *)&questPhase);
    byte_42E6289 = 1;
  }
  PK = NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_23FB260 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
}


NpcFollowerEntity_array *__fastcall NpcFollowerMaster__GetEntityArray(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
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
  int64_t Instance; // x0
  const MethodInfo *v49; // x1
  NpcFollowerReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x22
  int64_t v52; // x24
  int32_t Count; // w0
  int32_t v54; // w25
  int32_t v55; // w26
  const MethodInfo *v56; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x27
  __int64 v58; // x10
  __int64 v59; // x8
  __int64 v60; // x8
  NpcFollowerMaster___c_c *v61; // x0
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x19
  Il2CppObject *v64; // x20
  struct NpcFollowerMaster___c_StaticFields *v65; // x0
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E628C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_StableSort_NpcFollowerEntity___, questId, questPhase, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_NpcFollowerEntity__int___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_NpcFollowerEntity__int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&NetworkManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&NpcFollowerEntity_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, v42, v43, v44);
    sub_B5D5C4(&NpcFollowerMaster___c_TypeInfo, v45, v46, v47);
    byte_42E628C = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (NpcFollowerReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v52 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v54 = Count;
    v55 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v55,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v57 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v58 = *(&NpcFollowerEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v58
          && *(NpcFollowerEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v58 - 8) == NpcFollowerEntity_TypeInfo )
        {
          v59 = *(_QWORD *)(Instance + 72);
          if ( v59 < 1 || v52 >= v59 )
          {
            v60 = *(_QWORD *)(Instance + 80);
            if ( (v60 < 1 || v60 >= v52)
              && *(_DWORD *)(Instance + 24) == questId
              && *(_DWORD *)(Instance + 28) == questPhase )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              Instance = NpcFollowerReleaseMaster__TryGetEntity(
                           MasterData_WarQuestSelectionMaster,
                           &entity,
                           *(_QWORD *)(Instance + 16),
                           questId,
                           questPhase,
                           v56);
              if ( (Instance & 1) == 0 )
                goto LABEL_24;
              Instance = (int64_t)entity;
              if ( !entity )
                break;
              Instance = NpcFollowerReleaseEntity__IsEnable(entity, v49);
              if ( (Instance & 1) != 0 )
              {
LABEL_24:
                if ( !v51 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v51,
                  v57,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v55 >= v54 )
        goto LABEL_27;
    }
LABEL_37:
    sub_B5D69C(Instance, v49);
  }
LABEL_27:
  v61 = NpcFollowerMaster___c_TypeInfo;
  if ( (BYTE3(NpcFollowerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NpcFollowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo);
    v61 = NpcFollowerMaster___c_TypeInfo;
  }
  static_fields = v61->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    }
    v64 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_NpcFollowerEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v64,
      Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_NpcFollowerEntity__int___ctor__);
    v65 = NpcFollowerMaster___c_TypeInfo->static_fields;
    v65->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_B5D560(&v65->__9__3_0);
  }
  Instance = (int64_t)BasicHelper__StableSort_QuestScriptMaterialOverwriteEntity_(
                        (System_Collections_Generic_List_T__o *)v51,
                        (System_Func_T__int__o *)_9__3_0,
                        1,
                        (const MethodInfo_1AD9A00 *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !Instance )
    goto LABEL_37;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity_20688452(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t leaderSvtId,
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
  NpcFollowerMaster___c__DisplayClass6_0_o *v27; // x23
  __int64 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v31; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v32; // x20

  if ( (byte_42E628F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___, questId, questPhase, leaderSvtId);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Predicate_NpcFollowerEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Predicate_NpcFollowerEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__, v21, v22, v23);
    sub_B5D5C4(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo, v24, v25, v26);
    byte_42E628F = 1;
  }
  v27 = (NpcFollowerMaster___c__DisplayClass6_0_o *)sub_B5D694(NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
  NpcFollowerMaster___c__DisplayClass6_0___ctor(v27, 0LL);
  if ( !v27
    || (v27->fields.questId = questId,
        v27->fields.questPhase = questPhase,
        v27->fields.leaderSvtId = leaderSvtId,
        v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_ServantAnimationOverwriteEntity_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.list,
                                                                     (const MethodInfo_1C9AD2C *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___),
        v31 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                        v30,
                                                                                        (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___),
        v32 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_NpcFollowerEntity__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v32,
          (Il2CppObject *)v27,
          Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_NpcFollowerEntity___ctor__),
        !v31) )
  {
    sub_B5D69C(v28, v29);
  }
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v31,
                                  (System_Predicate_T__o *)v32,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
}


FollowerInfo_o *__fastcall NpcFollowerMaster__GetFollower(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t followerId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
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
  bool v25; // w0
  UserServantEntity_o *v26; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v28; // x1
  int64_t id; // x22
  int32_t flag; // w25
  int32_t v31; // w23
  int32_t ImageSvtId; // w0
  struct System_Int64_array *svtEquipIds; // x8
  struct System_Int64_array *v34; // x8
  UserServantEntity_o *v35; // x0
  int32_t fakeValue; // w20
  int32_t hiddenValue_high; // w23
  int32_t hiddenValue; // w22
  EquipTargetInfo_o *v39; // x19
  __int64 v41; // x0
  const MethodInfo *v42; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42E628E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, questId, questPhase, followerId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v10, v11, v12);
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&EquipTargetInfo_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    byte_42E628E = 1;
  }
  entity = 0LL;
  v25 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v26 = 0LL;
  if ( v25 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !Instance )
      goto LABEL_22;
    v26 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
            entity->fields.leaderSvtId,
            (const MethodInfo_23FB038 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    if ( v26 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_22;
      id = entity->fields.id;
      Instance = (DataManager_o *)NpcFollowerEntity__GetDispLimitCnt(entity, v28);
      if ( !entity )
        goto LABEL_22;
      flag = entity->fields.flag;
      v31 = (int)Instance;
      ImageSvtId = NpcFollowerEntity__GetImageSvtId(entity, v28);
      Instance = (DataManager_o *)NpcServantFollowerEntity__getFollowerInfo(
                                    (NpcServantFollowerEntity_o *)v26,
                                    id,
                                    questId,
                                    questPhase,
                                    v31,
                                    (flag & 2) != 0,
                                    0,
                                    ImageSvtId,
                                    v42);
      if ( !entity )
        goto LABEL_22;
      svtEquipIds = entity->fields.svtEquipIds;
      if ( !svtEquipIds )
        goto LABEL_22;
      v26 = (UserServantEntity_o *)Instance;
      if ( *(_QWORD *)&svtEquipIds->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_22;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_22;
        v34 = entity->fields.svtEquipIds;
        if ( !v34 )
          goto LABEL_22;
        if ( !v34->max_length )
        {
          v41 = sub_B5D6C8(Instance);
          sub_B5D668(v41, 0LL);
        }
        if ( !Instance )
          goto LABEL_22;
        v35 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                v34->m_Items[0],
                (const MethodInfo_23FB038 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v35 )
        {
          hiddenValue_high = HIDWORD(v35->fields.id.fields.hiddenValue);
          fakeValue = v35->fields.id.fields.fakeValue;
          hiddenValue = v35->fields.id.fields.hiddenValue;
          v39 = (EquipTargetInfo_o *)sub_B5D694(EquipTargetInfo_TypeInfo);
          EquipTargetInfo___ctor_30730304(v39, hiddenValue, fakeValue, hiddenValue_high, 1, 0LL);
          if ( v26 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v26, v39, 0LL);
            return (FollowerInfo_o *)v26;
          }
LABEL_22:
          sub_B5D69C(Instance, v28);
        }
      }
    }
  }
  return (FollowerInfo_o *)v26;
}


FollowerInfo_array *__fastcall NpcFollowerMaster__GetQuestFollowerList(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  void *Instance; // x0
  const MethodInfo *v33; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v35; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x23
  const MethodInfo *v37; // x3
  int v38; // w8
  void *v39; // x24
  unsigned int v40; // w20
  NpcFollowerEntity_o *v41; // x26
  int64_t id; // x27
  NpcServantFollowerEntity_o *v43; // x25
  int32_t DispLimitCnt; // w0
  int32_t flag; // w19
  int32_t v46; // w28
  const MethodInfo *v47; // x1
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  const MethodInfo *v50; // x1
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v52; // x9
  int32_t v53; // w26
  int32_t v54; // w28
  int32_t v55; // w27
  EquipTargetInfo_o *v56; // x19
  __int64 v58; // x0
  const MethodInfo *v59; // [xsp+0h] [xbp-60h]

  if ( (byte_42E628D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, questId, questPhase, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v5, v6, v7);
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&EquipTargetInfo_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42E628D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v35 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  Instance = NpcFollowerMaster__GetEntityArray(this, questId, questPhase, v37);
  if ( !Instance )
    goto LABEL_24;
  v38 = *((_DWORD *)Instance + 6);
  v39 = Instance;
  if ( v38 >= 1 )
  {
    v40 = 0;
    while ( 1 )
    {
      if ( v40 >= v38 )
      {
LABEL_25:
        v58 = sub_B5D6C8(Instance);
        sub_B5D668(v58, 0LL);
      }
      v41 = (NpcFollowerEntity_o *)*((_QWORD *)v39 + (int)v40 + 4);
      if ( !v41 || !MasterData_WarQuestSelectionMaster )
        break;
      Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v41->fields.leaderSvtId,
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( Instance )
      {
        id = v41->fields.id;
        v43 = (NpcServantFollowerEntity_o *)Instance;
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v41, v33);
        flag = v41->fields.flag;
        v46 = DispLimitCnt;
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v41, v47);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v43,
                         id,
                         questId,
                         questPhase,
                         v46,
                         (flag & 2) != 0,
                         (flag & 4) != 0,
                         ImageSvtId,
                         v59);
        Instance = (void *)NpcFollowerEntity__GetEventDeckIndex(v41, v50);
        if ( !FollowerInfo )
          break;
        FollowerInfo->fields.npcInitIdx = (int)Instance;
        svtEquipIds = v41->fields.svtEquipIds;
        if ( !svtEquipIds )
          break;
        v52 = *(_QWORD *)&svtEquipIds->max_length;
        if ( v52 )
        {
          if ( !(_DWORD)v52 )
            goto LABEL_25;
          if ( !v35 )
            break;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       v35,
                       svtEquipIds->m_Items[0],
                       (const MethodInfo_23FB038 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Instance )
          {
            v54 = *((_DWORD *)Instance + 7);
            v53 = *((_DWORD *)Instance + 8);
            v55 = *((_DWORD *)Instance + 6);
            v56 = (EquipTargetInfo_o *)sub_B5D694(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_30730304(v56, v55, v53, v54, 1, 0LL);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v56, 0LL);
          }
        }
        if ( !v36 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v36,
          (EventMissionProgressRequest_Argument_ProgressData_o *)FollowerInfo,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_FollowerInfo__Add__);
      }
      v38 = *((_DWORD *)v39 + 6);
      if ( (int)++v40 >= v38 )
        goto LABEL_22;
    }
LABEL_24:
    sub_B5D69C(Instance, v33);
  }
LABEL_22:
  if ( !v36 )
    goto LABEL_24;
  return (FollowerInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v36,
                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall NpcFollowerMaster__TryGetEntity(
        NpcFollowerMaster_o *this,
        NpcFollowerEntity_o **entity,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E628A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&questId);
    byte_42E628A = 1;
  }
  PK = NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void __fastcall NpcFollowerMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5A68 & 1) == 0 )
  {
    sub_B5D5C4(&NpcFollowerMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5A68 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(NpcFollowerMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct NpcFollowerMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall NpcFollowerMaster___c___ctor(NpcFollowerMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall NpcFollowerMaster___c___GetEntityArray_b__3_0(
        NpcFollowerMaster___c_o *this,
        NpcFollowerEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_B5D69C(this, 0LL);
  return e->fields.priority;
}


void __fastcall NpcFollowerMaster___c__DisplayClass6_0___ctor(
        NpcFollowerMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall NpcFollowerMaster___c__DisplayClass6_0___GetEntity_b__0(
        NpcFollowerMaster___c__DisplayClass6_0_o *this,
        NpcFollowerEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}