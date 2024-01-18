void __fastcall NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185104 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__, method);
    byte_4185104 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    93,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
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

  if ( (byte_4185102 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__, id);
    byte_4185102 = 1;
  }
  PK = NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_24E4520 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
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
  const MethodInfo *v21; // x1
  NpcFollowerReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x22
  int64_t v24; // x24
  int32_t Count; // w0
  int32_t v26; // w25
  int32_t v27; // w26
  const MethodInfo *v28; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x27
  __int64 v30; // x10
  __int64 v31; // x8
  __int64 v32; // x8
  NpcFollowerMaster___c_c *v33; // x0
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x19
  Il2CppObject *v36; // x20
  struct NpcFollowerMaster___c_StaticFields *v37; // x0
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4185105 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_StableSort_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___, v8);
    sub_B2C35C(&Method_System_Func_NpcFollowerEntity__int___ctor__, v9);
    sub_B2C35C(&System_Func_NpcFollowerEntity__int__TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&NpcFollowerEntity_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, v18);
    sub_B2C35C(&NpcFollowerMaster___c_TypeInfo, v19);
    byte_4185105 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (NpcFollowerReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v24 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v27,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v30 = *(&NpcFollowerEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v30
          && *(NpcFollowerEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v30 - 8) == NpcFollowerEntity_TypeInfo )
        {
          v31 = *(_QWORD *)(Instance + 72);
          if ( v31 < 1 || v24 >= v31 )
          {
            v32 = *(_QWORD *)(Instance + 80);
            if ( (v32 < 1 || v32 >= v24)
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
                           v28);
              if ( (Instance & 1) == 0 )
                goto LABEL_24;
              Instance = (int64_t)entity;
              if ( !entity )
                break;
              Instance = NpcFollowerReleaseEntity__IsEnable(entity, v21);
              if ( (Instance & 1) != 0 )
              {
LABEL_24:
                if ( !v23 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v23,
                  v29,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v27 >= v26 )
        goto LABEL_27;
    }
LABEL_37:
    sub_B2C434(Instance, v21);
  }
LABEL_27:
  v33 = NpcFollowerMaster___c_TypeInfo;
  if ( (BYTE3(NpcFollowerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NpcFollowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo);
    v33 = NpcFollowerMaster___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_NpcFollowerEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v36,
      Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_NpcFollowerEntity__int___ctor__);
    v37 = NpcFollowerMaster___c_TypeInfo->static_fields;
    v37->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_B2C2F8(&v37->__9__3_0, _9__3_0);
  }
  Instance = (int64_t)BasicHelper__StableSort_QuestScriptMaterialOverwriteEntity_(
                        (System_Collections_Generic_List_T__o *)v23,
                        (System_Func_T__int__o *)_9__3_0,
                        1,
                        (const MethodInfo_1729358 *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !Instance )
    goto LABEL_37;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity_20112236(
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
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v19; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x20

  if ( (byte_4185108 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__, v10);
    sub_B2C35C(&Method_System_Predicate_NpcFollowerEntity___ctor__, v11);
    sub_B2C35C(&System_Predicate_NpcFollowerEntity__TypeInfo, v12);
    sub_B2C35C(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__, v13);
    sub_B2C35C(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo, v14);
    byte_4185108 = 1;
  }
  v15 = (NpcFollowerMaster___c__DisplayClass6_0_o *)sub_B2C42C(NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
  NpcFollowerMaster___c__DisplayClass6_0___ctor(v15, 0LL);
  if ( !v15
    || (v15->fields.questId = questId,
        v15->fields.questPhase = questPhase,
        v15->fields.leaderSvtId = leaderSvtId,
        v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_ServantAnimationOverwriteEntity_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.list,
                                                                     (const MethodInfo_173A6F8 *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___),
        v19 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                        v18,
                                                                                        (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___),
        v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_NpcFollowerEntity__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v20,
          (Il2CppObject *)v15,
          Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_NpcFollowerEntity___ctor__),
        !v19) )
  {
    sub_B2C434(v16, v17);
  }
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v19,
                                  (System_Predicate_T__o *)v20,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
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
  int32_t flag; // w25
  int32_t v21; // w23
  int32_t ImageSvtId; // w0
  struct System_Int64_array *svtEquipIds; // x8
  struct System_Int64_array *v24; // x8
  UserServantEntity_o *v25; // x0
  int32_t fakeValue; // w20
  int32_t hiddenValue_high; // w23
  int32_t hiddenValue; // w22
  EquipTargetInfo_o *v29; // x19
  __int64 v31; // x0
  const MethodInfo *v32; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4185107 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v12);
    sub_B2C35C(&EquipTargetInfo_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4185107 = 1;
  }
  entity = 0LL;
  v15 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v16 = 0LL;
  if ( v15 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !Instance )
      goto LABEL_22;
    v16 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
            entity->fields.leaderSvtId,
            (const MethodInfo_24E42F8 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
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
      v21 = (int)Instance;
      ImageSvtId = NpcFollowerEntity__GetImageSvtId(entity, v18);
      Instance = (DataManager_o *)NpcServantFollowerEntity__getFollowerInfo(
                                    (NpcServantFollowerEntity_o *)v16,
                                    id,
                                    questId,
                                    questPhase,
                                    v21,
                                    (flag & 2) != 0,
                                    0,
                                    ImageSvtId,
                                    v32);
      if ( !entity )
        goto LABEL_22;
      svtEquipIds = entity->fields.svtEquipIds;
      if ( !svtEquipIds )
        goto LABEL_22;
      v16 = (UserServantEntity_o *)Instance;
      if ( *(_QWORD *)&svtEquipIds->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_22;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_22;
        v24 = entity->fields.svtEquipIds;
        if ( !v24 )
          goto LABEL_22;
        if ( !v24->max_length )
        {
          v31 = sub_B2C460(Instance);
          sub_B2C400(v31, 0LL);
        }
        if ( !Instance )
          goto LABEL_22;
        v25 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                v24->m_Items[0],
                (const MethodInfo_24E42F8 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v25 )
        {
          hiddenValue_high = HIDWORD(v25->fields.id.fields.hiddenValue);
          fakeValue = v25->fields.id.fields.fakeValue;
          hiddenValue = v25->fields.id.fields.hiddenValue;
          v29 = (EquipTargetInfo_o *)sub_B2C42C(EquipTargetInfo_TypeInfo);
          EquipTargetInfo___ctor_29550540(v29, hiddenValue, fakeValue, hiddenValue_high, 1, 0LL);
          if ( v16 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v16, v29, 0LL);
            return (FollowerInfo_o *)v16;
          }
LABEL_22:
          sub_B2C434(Instance, v18);
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
  const MethodInfo *v15; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v17; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x23
  const MethodInfo *v19; // x3
  int v20; // w8
  void *v21; // x24
  unsigned int v22; // w20
  NpcFollowerEntity_o *v23; // x26
  int64_t id; // x27
  NpcServantFollowerEntity_o *v25; // x25
  int32_t DispLimitCnt; // w0
  int32_t flag; // w19
  int32_t v28; // w28
  const MethodInfo *v29; // x1
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  const MethodInfo *v32; // x1
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v34; // x9
  int32_t v35; // w26
  int32_t v36; // w28
  int32_t v37; // w27
  EquipTargetInfo_o *v38; // x19
  __int64 v40; // x0
  const MethodInfo *v41; // [xsp+0h] [xbp-60h]

  if ( (byte_4185106 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v7);
    sub_B2C35C(&EquipTargetInfo_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4185106 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  v17 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  Instance = NpcFollowerMaster__GetEntityArray(this, questId, questPhase, v19);
  if ( !Instance )
    goto LABEL_24;
  v20 = *((_DWORD *)Instance + 6);
  v21 = Instance;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= v20 )
      {
LABEL_25:
        v40 = sub_B2C460(Instance);
        sub_B2C400(v40, 0LL);
      }
      v23 = (NpcFollowerEntity_o *)*((_QWORD *)v21 + (int)v22 + 4);
      if ( !v23 || !MasterData_WarQuestSelectionMaster )
        break;
      Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v23->fields.leaderSvtId,
                   (const MethodInfo_24E42F8 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( Instance )
      {
        id = v23->fields.id;
        v25 = (NpcServantFollowerEntity_o *)Instance;
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v23, v15);
        flag = v23->fields.flag;
        v28 = DispLimitCnt;
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v23, v29);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v25,
                         id,
                         questId,
                         questPhase,
                         v28,
                         (flag & 2) != 0,
                         (flag & 4) != 0,
                         ImageSvtId,
                         v41);
        Instance = (void *)NpcFollowerEntity__GetEventDeckIndex(v23, v32);
        if ( !FollowerInfo )
          break;
        FollowerInfo->fields.npcInitIdx = (int)Instance;
        svtEquipIds = v23->fields.svtEquipIds;
        if ( !svtEquipIds )
          break;
        v34 = *(_QWORD *)&svtEquipIds->max_length;
        if ( v34 )
        {
          if ( !(_DWORD)v34 )
            goto LABEL_25;
          if ( !v17 )
            break;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       v17,
                       svtEquipIds->m_Items[0],
                       (const MethodInfo_24E42F8 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Instance )
          {
            v36 = *((_DWORD *)Instance + 7);
            v35 = *((_DWORD *)Instance + 8);
            v37 = *((_DWORD *)Instance + 6);
            v38 = (EquipTargetInfo_o *)sub_B2C42C(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_29550540(v38, v37, v35, v36, 1, 0LL);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v38, 0LL);
          }
        }
        if ( !v18 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)FollowerInfo,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_FollowerInfo__Add__);
      }
      v20 = *((_DWORD *)v21 + 6);
      if ( (int)++v22 >= v20 )
        goto LABEL_22;
    }
LABEL_24:
    sub_B2C434(Instance, v15);
  }
LABEL_22:
  if ( !v18 )
    goto LABEL_24;
  return (FollowerInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
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

  if ( (byte_4185103 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__, entity);
    byte_4185103 = 1;
  }
  PK = NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void __fastcall NpcFollowerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185275 & 1) == 0 )
  {
    sub_B2C35C(&NpcFollowerMaster___c_TypeInfo, v1);
    byte_4185275 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(NpcFollowerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct NpcFollowerMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}