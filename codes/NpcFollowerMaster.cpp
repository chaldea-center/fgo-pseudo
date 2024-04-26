void __fastcall NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4350B87 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
    byte_4350B87 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    94,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
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

  if ( (byte_4350B85 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
    byte_4350B85 = 1;
  }
  PK = NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_21C0890 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
}


NpcFollowerEntity_array *__fastcall NpcFollowerMaster__GetEntityArray(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v7; // x1
  NpcFollowerReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  int64_t v10; // x24
  int32_t Count; // w0
  int32_t v12; // w25
  int32_t v13; // w26
  const MethodInfo *v14; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x27
  __int64 v16; // x10
  __int64 v17; // x8
  __int64 v18; // x8
  NpcFollowerMaster___c_c *v19; // x0
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x19
  Il2CppObject *v22; // x20
  struct NpcFollowerMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4350B88 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_StableSort_NpcFollowerEntity___);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
    sub_B70694(&Method_System_Func_NpcFollowerEntity__int___ctor__);
    sub_B70694(&System_Func_NpcFollowerEntity__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NpcFollowerEntity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__);
    sub_B70694(&NpcFollowerMaster___c_TypeInfo);
    byte_4350B88 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (NpcFollowerReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v10 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v13,
                            (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v16 = *(&NpcFollowerEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v16
          && *(NpcFollowerEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v16 - 8) == NpcFollowerEntity_TypeInfo )
        {
          v17 = *(_QWORD *)(Instance + 72);
          if ( v17 < 1 || v10 >= v17 )
          {
            v18 = *(_QWORD *)(Instance + 80);
            if ( (v18 < 1 || v18 >= v10)
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
                           v14);
              if ( (Instance & 1) == 0 )
                goto LABEL_24;
              Instance = (int64_t)entity;
              if ( !entity )
                break;
              Instance = NpcFollowerReleaseEntity__IsEnable(entity, v7);
              if ( (Instance & 1) != 0 )
              {
LABEL_24:
                if ( !v9 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v9,
                  v15,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v13 >= v12 )
        goto LABEL_27;
    }
LABEL_37:
    sub_B7076C(Instance, v7);
  }
LABEL_27:
  v19 = NpcFollowerMaster___c_TypeInfo;
  if ( (BYTE3(NpcFollowerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NpcFollowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo);
    v19 = NpcFollowerMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_NpcFollowerEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v22,
      Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__,
      (const MethodInfo_29AD124 *)Method_System_Func_NpcFollowerEntity__int___ctor__);
    v23 = NpcFollowerMaster___c_TypeInfo->static_fields;
    v23->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v23->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  Instance = (int64_t)BasicHelper__StableSort_QuestScriptMaterialOverwriteEntity_(
                        (System_Collections_Generic_List_T__o *)v9,
                        (System_Func_T__int__o *)_9__3_0,
                        1,
                        (const MethodInfo_1BDF754 *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !Instance )
    goto LABEL_37;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                      (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity_23275836(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t leaderSvtId,
        const MethodInfo *method)
{
  NpcFollowerMaster___c__DisplayClass6_0_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v13; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4350B8B & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
    sub_B70694(&Method_System_Predicate_NpcFollowerEntity___ctor__);
    sub_B70694(&System_Predicate_NpcFollowerEntity__TypeInfo);
    sub_B70694(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__);
    sub_B70694(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
    byte_4350B8B = 1;
  }
  v9 = (NpcFollowerMaster___c__DisplayClass6_0_o *)sub_B70764(NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
  NpcFollowerMaster___c__DisplayClass6_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.questId = questId,
        v9->fields.questPhase = questPhase,
        v9->fields.leaderSvtId = leaderSvtId,
        v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_ServantAnimationOverwriteEntity_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.list,
                                                                     (const MethodInfo_1CAAC48 *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___),
        v13 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                        v12,
                                                                                        (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___),
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_NpcFollowerEntity__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_NpcFollowerEntity___ctor__),
        !v13) )
  {
    sub_B7076C(v10, v11);
  }
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v13,
                                  (System_Predicate_T__o *)v14,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
}


FollowerInfo_o *__fastcall NpcFollowerMaster__GetFollower(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t followerId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool v10; // w0
  UserServantEntity_o *v11; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  int64_t id; // x22
  int32_t flag; // w25
  int32_t v16; // w23
  int32_t ImageSvtId; // w0
  struct System_Int64_array *svtEquipIds; // x8
  struct System_Int64_array *v19; // x8
  UserServantEntity_o *v20; // x0
  int32_t fakeValue; // w20
  int32_t hiddenValue_high; // w23
  int32_t hiddenValue; // w22
  EquipTargetInfo_o *v24; // x19
  __int64 v26; // x0
  const MethodInfo *v27; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4350B8A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_B70694(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_B70694(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_B70694(&EquipTargetInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350B8A = 1;
  }
  entity = 0LL;
  v10 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v11 = 0LL;
  if ( v10 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !Instance )
      goto LABEL_22;
    v11 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
            entity->fields.leaderSvtId,
            (const MethodInfo_21C0668 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    if ( v11 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_22;
      id = entity->fields.id;
      Instance = (DataManager_o *)NpcFollowerEntity__GetDispLimitCnt(entity, v13);
      if ( !entity )
        goto LABEL_22;
      flag = entity->fields.flag;
      v16 = (int)Instance;
      ImageSvtId = NpcFollowerEntity__GetImageSvtId(entity, v13);
      Instance = (DataManager_o *)NpcServantFollowerEntity__getFollowerInfo(
                                    (NpcServantFollowerEntity_o *)v11,
                                    id,
                                    questId,
                                    questPhase,
                                    v16,
                                    (flag & 2) != 0,
                                    0,
                                    ImageSvtId,
                                    v27);
      if ( !entity )
        goto LABEL_22;
      svtEquipIds = entity->fields.svtEquipIds;
      if ( !svtEquipIds )
        goto LABEL_22;
      v11 = (UserServantEntity_o *)Instance;
      if ( *(_QWORD *)&svtEquipIds->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_22;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_22;
        v19 = entity->fields.svtEquipIds;
        if ( !v19 )
          goto LABEL_22;
        if ( !v19->max_length )
        {
          v26 = sub_B70798(Instance);
          sub_B70738(v26, 0LL);
        }
        if ( !Instance )
          goto LABEL_22;
        v20 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                v19->m_Items[0],
                (const MethodInfo_21C0668 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v20 )
        {
          hiddenValue_high = HIDWORD(v20->fields.id.fields.hiddenValue);
          fakeValue = v20->fields.id.fields.fakeValue;
          hiddenValue = v20->fields.id.fields.hiddenValue;
          v24 = (EquipTargetInfo_o *)sub_B70764(EquipTargetInfo_TypeInfo);
          EquipTargetInfo___ctor_31357804(v24, hiddenValue, fakeValue, hiddenValue_high, 1, 0LL);
          if ( v11 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v11, v24, 0LL);
            return (FollowerInfo_o *)v11;
          }
LABEL_22:
          sub_B7076C(Instance, v13);
        }
      }
    }
  }
  return (FollowerInfo_o *)v11;
}


FollowerInfo_array *__fastcall NpcFollowerMaster__GetQuestFollowerList(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v6; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v8; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  const MethodInfo *v10; // x3
  int v11; // w8
  void *v12; // x24
  unsigned int v13; // w20
  NpcFollowerEntity_o *v14; // x26
  int64_t id; // x27
  NpcServantFollowerEntity_o *v16; // x25
  int32_t DispLimitCnt; // w0
  int32_t flag; // w19
  int32_t v19; // w28
  const MethodInfo *v20; // x1
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  const MethodInfo *v23; // x1
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v25; // x9
  int32_t v26; // w26
  int32_t v27; // w28
  int32_t v28; // w27
  EquipTargetInfo_o *v29; // x19
  __int64 v31; // x0
  const MethodInfo *v32; // [xsp+0h] [xbp-60h]

  if ( (byte_4350B89 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_B70694(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_B70694(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_B70694(&EquipTargetInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350B89 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v8 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  Instance = NpcFollowerMaster__GetEntityArray(this, questId, questPhase, v10);
  if ( !Instance )
    goto LABEL_24;
  v11 = *((_DWORD *)Instance + 6);
  v12 = Instance;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
      {
LABEL_25:
        v31 = sub_B70798(Instance);
        sub_B70738(v31, 0LL);
      }
      v14 = (NpcFollowerEntity_o *)*((_QWORD *)v12 + (int)v13 + 4);
      if ( !v14 || !MasterData_WarQuestSelectionMaster )
        break;
      Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v14->fields.leaderSvtId,
                   (const MethodInfo_21C0668 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( Instance )
      {
        id = v14->fields.id;
        v16 = (NpcServantFollowerEntity_o *)Instance;
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v14, v6);
        flag = v14->fields.flag;
        v19 = DispLimitCnt;
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v14, v20);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v16,
                         id,
                         questId,
                         questPhase,
                         v19,
                         (flag & 2) != 0,
                         (flag & 4) != 0,
                         ImageSvtId,
                         v32);
        Instance = (void *)NpcFollowerEntity__GetEventDeckIndex(v14, v23);
        if ( !FollowerInfo )
          break;
        FollowerInfo->fields.npcInitIdx = (int)Instance;
        svtEquipIds = v14->fields.svtEquipIds;
        if ( !svtEquipIds )
          break;
        v25 = *(_QWORD *)&svtEquipIds->max_length;
        if ( v25 )
        {
          if ( !(_DWORD)v25 )
            goto LABEL_25;
          if ( !v8 )
            break;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       v8,
                       svtEquipIds->m_Items[0],
                       (const MethodInfo_21C0668 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Instance )
          {
            v27 = *((_DWORD *)Instance + 7);
            v26 = *((_DWORD *)Instance + 8);
            v28 = *((_DWORD *)Instance + 6);
            v29 = (EquipTargetInfo_o *)sub_B70764(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_31357804(v29, v28, v26, v27, 1, 0LL);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v29, 0LL);
          }
        }
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)FollowerInfo,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_FollowerInfo__Add__);
      }
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
        goto LABEL_22;
    }
LABEL_24:
    sub_B7076C(Instance, v6);
  }
LABEL_22:
  if ( !v9 )
    goto LABEL_24;
  return (FollowerInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                 (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
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

  if ( (byte_4350B86 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
    byte_4350B86 = 1;
  }
  PK = NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void __fastcall NpcFollowerMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4350F0A & 1) == 0 )
  {
    sub_B70694(&NpcFollowerMaster___c_TypeInfo);
    byte_4350F0A = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(NpcFollowerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)NpcFollowerMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, 0LL);
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
    sub_B7076C(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}