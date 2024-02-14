void __fastcall NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4211FEE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__, method);
    byte_4211FEE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    93,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
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

  if ( (byte_4211FEC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__, id);
    byte_4211FEC = 1;
  }
  PK = NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_266A024 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_array *__fastcall NpcFollowerMaster__GetEntityArray(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
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
  int64_t Instance; // x0
  NpcFollowerReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  int64_t v25; // x24
  int32_t Count; // w0
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t v29; // w25
  int32_t v30; // w26
  const MethodInfo *v31; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x27
  __int64 v33; // x10
  __int64 v34; // x8
  __int64 v35; // x8
  const MethodInfo *v36; // x1
  NpcFollowerMaster___c_c *v37; // x0
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x19
  Il2CppObject *v40; // x20
  struct NpcFollowerMaster___c_StaticFields *v41; // x0
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4211FEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_StableSort_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___, v8);
    sub_B0D8A4(&Method_System_Func_NpcFollowerEntity__int___ctor__, v9);
    sub_B0D8A4(&System_Func_NpcFollowerEntity__int__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&NpcFollowerEntity_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, v18);
    sub_B0D8A4(&NpcFollowerMaster___c_TypeInfo, v19);
    byte_4211FEF = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (NpcFollowerReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_NpcFollowerEntity__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v25 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
    v30 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v30,
                            (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v33 = *(&NpcFollowerEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v33
          && *(NpcFollowerEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v33 - 8) == NpcFollowerEntity_TypeInfo )
        {
          v34 = *(_QWORD *)(Instance + 72);
          if ( v34 < 1 || v25 >= v34 )
          {
            v35 = *(_QWORD *)(Instance + 80);
            if ( (v35 < 1 || v35 >= v25)
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
                           v31);
              if ( (Instance & 1) == 0 )
                goto LABEL_24;
              Instance = (int64_t)entity;
              if ( !entity )
                break;
              Instance = NpcFollowerReleaseEntity__IsEnable(entity, v36);
              if ( (Instance & 1) != 0 )
              {
LABEL_24:
                if ( !v24 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v24,
                  v32,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v30 >= v29 )
        goto LABEL_27;
    }
LABEL_37:
    sub_B0D97C(Instance);
  }
LABEL_27:
  v37 = NpcFollowerMaster___c_TypeInfo;
  if ( (BYTE3(NpcFollowerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NpcFollowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo);
    v37 = NpcFollowerMaster___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_NpcFollowerEntity__int__TypeInfo,
                                                                                v27,
                                                                                v28);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v40,
      Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__,
      (const MethodInfo_2619564 *)Method_System_Func_NpcFollowerEntity__int___ctor__);
    v41 = NpcFollowerMaster___c_TypeInfo->static_fields;
    v41->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_B0D840(&v41->__9__3_0, _9__3_0);
  }
  Instance = (int64_t)BasicHelper__StableSort_QuestScriptMaterialOverwriteEntity_(
                        (System_Collections_Generic_List_T__o *)v24,
                        (System_Func_T__int__o *)_9__3_0,
                        1,
                        (const MethodInfo_1709E04 *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !Instance )
    goto LABEL_37;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity_19793912(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t leaderSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  NpcFollowerMaster___c__DisplayClass6_0_o *v15; // x23
  __int64 v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x20

  if ( (byte_4211FF2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__, v10);
    sub_B0D8A4(&Method_System_Predicate_NpcFollowerEntity___ctor__, v11);
    sub_B0D8A4(&System_Predicate_NpcFollowerEntity__TypeInfo, v12);
    sub_B0D8A4(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__, v13);
    sub_B0D8A4(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo, v14);
    byte_4211FF2 = 1;
  }
  v15 = (NpcFollowerMaster___c__DisplayClass6_0_o *)sub_B0D974(
                                                      NpcFollowerMaster___c__DisplayClass6_0_TypeInfo,
                                                      *(_QWORD *)&questId,
                                                      *(_QWORD *)&questPhase);
  NpcFollowerMaster___c__DisplayClass6_0___ctor(v15, 0LL);
  if ( !v15
    || (v15->fields.questId = questId,
        v15->fields.questPhase = questPhase,
        v15->fields.leaderSvtId = leaderSvtId,
        v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_ServantAnimationOverwriteEntity_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.list,
                                                                     (const MethodInfo_171B5E8 *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___),
        v18 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                        v17,
                                                                                        (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___),
        v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_NpcFollowerEntity__TypeInfo,
                                                                         v19,
                                                                         v20),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v21,
          (Il2CppObject *)v15,
          Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_NpcFollowerEntity___ctor__),
        !v18) )
  {
    sub_B0D97C(v16);
  }
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v18,
                                  (System_Predicate_T__o *)v21,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
FollowerInfo_o *__fastcall NpcFollowerMaster__GetFollower(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t followerId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  bool v15; // w0
  UserServantEntity_o *v16; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  int64_t id; // x22
  const MethodInfo *v20; // x1
  int32_t flag; // w25
  int32_t v22; // w23
  int32_t ImageSvtId; // w0
  struct System_Int64_array *svtEquipIds; // x8
  struct System_Int64_array *v25; // x8
  UserServantEntity_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t fakeValue; // w20
  int32_t hiddenValue_high; // w23
  int32_t hiddenValue; // w22
  EquipTargetInfo_o *v32; // x19
  __int64 v34; // x0
  const MethodInfo *v35; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4211FF1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v11);
    sub_B0D8A4(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v12);
    sub_B0D8A4(&EquipTargetInfo_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4211FF1 = 1;
  }
  entity = 0LL;
  v15 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v16 = 0LL;
  if ( v15 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !Instance )
      goto LABEL_22;
    v16 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
            entity->fields.leaderSvtId,
            (const MethodInfo_2669DFC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    if ( v16 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_22;
      id = entity->fields.id;
      Instance = (DataManager_o *)NpcFollowerEntity__GetDispLimitCnt(entity, v18);
      if ( !entity )
        goto LABEL_22;
      flag = entity->fields.flag;
      v22 = (int)Instance;
      ImageSvtId = NpcFollowerEntity__GetImageSvtId(entity, v20);
      Instance = (DataManager_o *)NpcServantFollowerEntity__getFollowerInfo(
                                    (NpcServantFollowerEntity_o *)v16,
                                    id,
                                    questId,
                                    questPhase,
                                    v22,
                                    (flag & 2) != 0,
                                    0,
                                    ImageSvtId,
                                    v35);
      if ( !entity )
        goto LABEL_22;
      svtEquipIds = entity->fields.svtEquipIds;
      if ( !svtEquipIds )
        goto LABEL_22;
      v16 = (UserServantEntity_o *)Instance;
      if ( *(_QWORD *)&svtEquipIds->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_22;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_22;
        v25 = entity->fields.svtEquipIds;
        if ( !v25 )
          goto LABEL_22;
        if ( !v25->max_length )
        {
          v34 = sub_B0D9A8(Instance);
          sub_B0D948(v34, 0LL);
        }
        if ( !Instance )
          goto LABEL_22;
        v26 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                v25->m_Items[0],
                (const MethodInfo_2669DFC *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v26 )
        {
          hiddenValue_high = HIDWORD(v26->fields.id.fields.hiddenValue);
          fakeValue = v26->fields.id.fields.fakeValue;
          hiddenValue = v26->fields.id.fields.hiddenValue;
          v32 = (EquipTargetInfo_o *)sub_B0D974(EquipTargetInfo_TypeInfo, v27, v28);
          EquipTargetInfo___ctor_28810548(v32, hiddenValue, fakeValue, hiddenValue_high, 1, 0LL);
          if ( v16 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v16, v32, 0LL);
            return (FollowerInfo_o *)v16;
          }
LABEL_22:
          sub_B0D97C(Instance);
        }
      }
    }
  }
  return (FollowerInfo_o *)v16;
}


// local variable allocation has failed, the output may be wrong!
FollowerInfo_array *__fastcall NpcFollowerMaster__GetQuestFollowerList(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x23
  const MethodInfo *v20; // x3
  int v21; // w8
  void *v22; // x24
  unsigned int v23; // w20
  NpcFollowerEntity_o *v24; // x26
  const MethodInfo *v25; // x1
  int64_t id; // x27
  NpcServantFollowerEntity_o *v27; // x25
  int32_t DispLimitCnt; // w0
  int32_t flag; // w19
  int32_t v30; // w28
  const MethodInfo *v31; // x1
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  const MethodInfo *v34; // x1
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v36; // x9
  __int64 v37; // x1
  __int64 v38; // x2
  int32_t v39; // w26
  int32_t v40; // w28
  int32_t v41; // w27
  EquipTargetInfo_o *v42; // x19
  __int64 v44; // x0
  const MethodInfo *v45; // [xsp+0h] [xbp-60h]

  if ( (byte_4211FF0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v6);
    sub_B0D8A4(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v7);
    sub_B0D8A4(&EquipTargetInfo_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4211FF0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v16 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_FollowerInfo__TypeInfo,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  Instance = NpcFollowerMaster__GetEntityArray(this, questId, questPhase, v20);
  if ( !Instance )
    goto LABEL_24;
  v21 = *((_DWORD *)Instance + 6);
  v22 = Instance;
  if ( v21 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= v21 )
      {
LABEL_25:
        v44 = sub_B0D9A8(Instance);
        sub_B0D948(v44, 0LL);
      }
      v24 = (NpcFollowerEntity_o *)*((_QWORD *)v22 + (int)v23 + 4);
      if ( !v24 || !MasterData_WarQuestSelectionMaster )
        break;
      Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v24->fields.leaderSvtId,
                   (const MethodInfo_2669DFC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( Instance )
      {
        id = v24->fields.id;
        v27 = (NpcServantFollowerEntity_o *)Instance;
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v24, v25);
        flag = v24->fields.flag;
        v30 = DispLimitCnt;
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v24, v31);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v27,
                         id,
                         questId,
                         questPhase,
                         v30,
                         (flag & 2) != 0,
                         (flag & 4) != 0,
                         ImageSvtId,
                         v45);
        Instance = (void *)NpcFollowerEntity__GetEventDeckIndex(v24, v34);
        if ( !FollowerInfo )
          break;
        FollowerInfo->fields.npcInitIdx = (int)Instance;
        svtEquipIds = v24->fields.svtEquipIds;
        if ( !svtEquipIds )
          break;
        v36 = *(_QWORD *)&svtEquipIds->max_length;
        if ( v36 )
        {
          if ( !(_DWORD)v36 )
            goto LABEL_25;
          if ( !v16 )
            break;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       v16,
                       svtEquipIds->m_Items[0],
                       (const MethodInfo_2669DFC *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Instance )
          {
            v40 = *((_DWORD *)Instance + 7);
            v39 = *((_DWORD *)Instance + 8);
            v41 = *((_DWORD *)Instance + 6);
            v42 = (EquipTargetInfo_o *)sub_B0D974(EquipTargetInfo_TypeInfo, v37, v38);
            EquipTargetInfo___ctor_28810548(v42, v41, v39, v40, 1, 0LL);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v42, 0LL);
          }
        }
        if ( !v19 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          (EventMissionProgressRequest_Argument_ProgressData_o *)FollowerInfo,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_FollowerInfo__Add__);
      }
      v21 = *((_DWORD *)v22 + 6);
      if ( (int)++v23 >= v21 )
        goto LABEL_22;
    }
LABEL_24:
    sub_B0D97C(Instance);
  }
LABEL_22:
  if ( !v19 )
    goto LABEL_24;
  return (FollowerInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
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

  if ( (byte_4211FED & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__, entity);
    byte_4211FED = 1;
  }
  PK = NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void __fastcall NpcFollowerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4212163 & 1) == 0 )
  {
    sub_B0D8A4(&NpcFollowerMaster___c_TypeInfo, v1);
    byte_4212163 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(NpcFollowerMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct NpcFollowerMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}