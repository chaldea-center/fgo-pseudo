void __fastcall NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F7F21 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__, method);
    byte_40F7F21 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    93,
    (const MethodInfo_266F73C *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
}


NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity(
        NpcFollowerMaster_o *this,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F7F1F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__, id);
    byte_40F7F1F = 1;
  }
  PK = NpcFollowerEntity__CreatePK(id, questId, questPhase, 0LL);
  return (NpcFollowerEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_266F7D8 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
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
  WebViewManager_o *Instance; // x0
  NpcFollowerReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  int64_t Time; // x0
  int64_t v28; // x24
  int32_t Count; // w0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int32_t v34; // w25
  int32_t v35; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v38; // x5
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x27
  __int64 v40; // x10
  __int64 monitor; // x8
  __int64 klass; // x8
  const MethodInfo *v43; // x1
  NpcFollowerMaster___c_c *v44; // x0
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x19
  Il2CppObject *v47; // x20
  struct NpcFollowerMaster___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_T__o *v55; // x0
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F7F22 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_StableSort_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___, v8);
    sub_B16FFC(&Method_System_Func_NpcFollowerEntity__int___ctor__, v9);
    sub_B16FFC(&System_Func_NpcFollowerEntity__int__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&NpcFollowerEntity_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, v18);
    sub_B16FFC(&NpcFollowerMaster___c_TypeInfo, v19);
    byte_40F7F22 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (NpcFollowerReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_NpcFollowerEntity__TypeInfo,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v28 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v34 = Count;
    v35 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v35,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v40 = *(&NpcFollowerEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v40
          && (NpcFollowerEntity_c *)Item->klass->_2.typeHierarchy[v40 - 1] == NpcFollowerEntity_TypeInfo )
        {
          monitor = (__int64)Item[4].monitor;
          if ( monitor < 1 || v28 >= monitor )
          {
            klass = (__int64)Item[5].klass;
            if ( (klass < 1 || klass >= v28)
              && LODWORD(Item[1].monitor) == questId
              && HIDWORD(Item[1].monitor) == questPhase )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              if ( !NpcFollowerReleaseMaster__TryGetEntity(
                      MasterData_WarQuestSelectionMaster,
                      &entity,
                      (int64_t)Item[1].klass,
                      questId,
                      questPhase,
                      v38) )
                goto LABEL_24;
              if ( !entity )
                break;
              if ( NpcFollowerReleaseEntity__IsEnable(entity, v43) )
              {
LABEL_24:
                if ( !v26 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v26,
                  v39,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v35 >= v34 )
        goto LABEL_27;
    }
LABEL_37:
    sub_B170D4();
  }
LABEL_27:
  v44 = NpcFollowerMaster___c_TypeInfo;
  if ( (BYTE3(NpcFollowerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NpcFollowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo);
    v44 = NpcFollowerMaster___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_NpcFollowerEntity__int__TypeInfo,
                                                                                v30,
                                                                                v31,
                                                                                v32,
                                                                                v33);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v47,
      Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_NpcFollowerEntity__int___ctor__);
    v48 = NpcFollowerMaster___c_TypeInfo->static_fields;
    v48->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v48->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  v55 = BasicHelper__StableSort_QuestScriptMaterialOverwriteEntity_(
          (System_Collections_Generic_List_T__o *)v26,
          (System_Func_T__int__o *)_9__3_0,
          1,
          (const MethodInfo_18B8BF0 *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !v55 )
    goto LABEL_37;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v55,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity_21217012(
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
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_40F7F25 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__, v10);
    sub_B16FFC(&Method_System_Predicate_NpcFollowerEntity___ctor__, v11);
    sub_B16FFC(&System_Predicate_NpcFollowerEntity__TypeInfo, v12);
    sub_B16FFC(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__, v13);
    sub_B16FFC(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo, v14);
    byte_40F7F25 = 1;
  }
  v15 = (NpcFollowerMaster___c__DisplayClass6_0_o *)sub_B170CC(
                                                      NpcFollowerMaster___c__DisplayClass6_0_TypeInfo,
                                                      *(_QWORD *)&questId,
                                                      *(_QWORD *)&questPhase,
                                                      leaderSvtId,
                                                      method);
  NpcFollowerMaster___c__DisplayClass6_0___ctor(v15, 0LL);
  if ( !v15
    || (v15->fields.questId = questId,
        v15->fields.questPhase = questPhase,
        v15->fields.leaderSvtId = leaderSvtId,
        v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_ServantAnimationOverwriteEntity_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.list,
                                                                     (const MethodInfo_18C9F90 *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___),
        v17 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                        v16,
                                                                                        (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___),
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_NpcFollowerEntity__TypeInfo,
                                                                         v18,
                                                                         v19,
                                                                         v20,
                                                                         v21),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v15,
          Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_NpcFollowerEntity___ctor__),
        !v17) )
  {
    sub_B170D4();
  }
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v17,
                                  (System_Predicate_T__o *)v22,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  int64_t id; // x22
  int32_t DispLimitCnt; // w0
  int32_t v21; // w23
  bool IsMyServantOrNpc; // w0
  bool v23; // w24
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x0
  struct System_Int64_array *svtEquipIds; // x8
  WebViewManager_o *v27; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  struct System_Int64_array *v31; // x8
  UserServantEntity_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int32_t fakeValue; // w20
  int32_t hiddenValue_high; // w23
  int32_t hiddenValue; // w22
  EquipTargetInfo_o *v40; // x19
  const MethodInfo *v42; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40F7F24 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v11);
    sub_B16FFC(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v12);
    sub_B16FFC(&EquipTargetInfo_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F7F24 = 1;
  }
  entity = 0LL;
  v15 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v16 = 0LL;
  if ( v15 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !MasterData_WarQuestSelectionMaster )
      goto LABEL_23;
    v16 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            MasterData_WarQuestSelectionMaster,
            entity->fields.leaderSvtId,
            (const MethodInfo_266F5B0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    if ( v16 )
    {
      if ( !entity )
        goto LABEL_23;
      id = entity->fields.id;
      DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(entity, 0LL);
      if ( !entity )
        goto LABEL_23;
      v21 = DispLimitCnt;
      IsMyServantOrNpc = NpcFollowerEntity__IsMyServantOrNpc(entity, 0LL);
      if ( !entity )
        goto LABEL_23;
      v23 = IsMyServantOrNpc;
      ImageSvtId = NpcFollowerEntity__GetImageSvtId(entity, 0LL);
      FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                       (NpcServantFollowerEntity_o *)v16,
                       id,
                       questId,
                       questPhase,
                       v21,
                       v23,
                       0,
                       ImageSvtId,
                       v42);
      if ( !entity )
        goto LABEL_23;
      svtEquipIds = entity->fields.svtEquipIds;
      if ( !svtEquipIds )
        goto LABEL_23;
      v16 = (UserServantEntity_o *)FollowerInfo;
      if ( *(_QWORD *)&svtEquipIds->max_length )
      {
        v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v27 )
          goto LABEL_23;
        v28 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)v27,
                                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_23;
        v31 = entity->fields.svtEquipIds;
        if ( !v31 )
          goto LABEL_23;
        if ( !v31->max_length )
        {
          sub_B17100(v28, v29, v30);
          sub_B170A0();
        }
        if ( !v28 )
          goto LABEL_23;
        v32 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                v28,
                v31->m_Items[0],
                (const MethodInfo_266F5B0 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v32 )
        {
          hiddenValue_high = HIDWORD(v32->fields.id.fields.hiddenValue);
          fakeValue = v32->fields.id.fields.fakeValue;
          hiddenValue = v32->fields.id.fields.hiddenValue;
          v40 = (EquipTargetInfo_o *)sub_B170CC(EquipTargetInfo_TypeInfo, v33, v34, v35, v36);
          EquipTargetInfo___ctor_29330048(v40, hiddenValue, fakeValue, hiddenValue_high, 1, 0LL);
          if ( v16 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v16, v40, 0LL);
            return (FollowerInfo_o *)v16;
          }
LABEL_23:
          sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x23
  const MethodInfo *v22; // x3
  NpcServantFollowerEntity_o *EntityArray; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  int svtId; // w8
  NpcServantFollowerEntity_o *v27; // x24
  unsigned int v28; // w22
  NpcFollowerEntity_o *v29; // x26
  int64_t id; // x27
  NpcServantFollowerEntity_o *v31; // x25
  int32_t DispLimitCnt; // w28
  bool IsMyServantOrNpc; // w19
  bool IsFixedNpc; // w20
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v38; // x9
  UserServantEntity_o *Entity; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  int32_t fakeValue; // w19
  int32_t hiddenValue_high; // w26
  int32_t hiddenValue; // w20
  EquipTargetInfo_o *v47; // x27
  const MethodInfo *v49; // [xsp+0h] [xbp-70h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v50; // [xsp+10h] [xbp-60h]

  if ( (byte_40F7F23 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v7);
    sub_B16FFC(&EquipTargetInfo_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F7F23 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v16 )
    goto LABEL_24;
  v50 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)v16,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_FollowerInfo__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  EntityArray = (NpcServantFollowerEntity_o *)NpcFollowerMaster__GetEntityArray(this, questId, questPhase, v22);
  if ( !EntityArray )
    goto LABEL_24;
  svtId = EntityArray->fields.svtId;
  v27 = EntityArray;
  if ( svtId >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= svtId )
      {
LABEL_25:
        sub_B17100(EntityArray, v24, v25);
        sub_B170A0();
      }
      v29 = (NpcFollowerEntity_o *)*((_QWORD *)&v27->fields.name + (int)v28);
      if ( !v29 || !MasterData_WarQuestSelectionMaster )
        break;
      EntityArray = (NpcServantFollowerEntity_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                    MasterData_WarQuestSelectionMaster,
                                                    v29->fields.leaderSvtId,
                                                    (const MethodInfo_266F5B0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( EntityArray )
      {
        id = v29->fields.id;
        v31 = EntityArray;
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v29, 0LL);
        IsMyServantOrNpc = NpcFollowerEntity__IsMyServantOrNpc(v29, 0LL);
        IsFixedNpc = NpcFollowerEntity__IsFixedNpc(v29, 0LL);
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v29, 0LL);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v31,
                         id,
                         questId,
                         questPhase,
                         DispLimitCnt,
                         IsMyServantOrNpc,
                         IsFixedNpc,
                         ImageSvtId,
                         v49);
        EntityArray = (NpcServantFollowerEntity_o *)NpcFollowerEntity__GetEventDeckIndex(v29, 0LL);
        if ( !FollowerInfo )
          break;
        FollowerInfo->fields.npcInitIdx = (int)EntityArray;
        svtEquipIds = v29->fields.svtEquipIds;
        if ( !svtEquipIds )
          break;
        v38 = *(_QWORD *)&svtEquipIds->max_length;
        if ( v38 )
        {
          if ( !(_DWORD)v38 )
            goto LABEL_25;
          if ( !v50 )
            break;
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     v50,
                     svtEquipIds->m_Items[0],
                     (const MethodInfo_266F5B0 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Entity )
          {
            hiddenValue_high = HIDWORD(Entity->fields.id.fields.hiddenValue);
            fakeValue = Entity->fields.id.fields.fakeValue;
            hiddenValue = Entity->fields.id.fields.hiddenValue;
            v47 = (EquipTargetInfo_o *)sub_B170CC(EquipTargetInfo_TypeInfo, v40, v41, v42, v43);
            EquipTargetInfo___ctor_29330048(v47, hiddenValue, fakeValue, hiddenValue_high, 1, 0LL);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v47, 0LL);
          }
        }
        if ( !v21 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)FollowerInfo,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FollowerInfo__Add__);
      }
      svtId = v27->fields.svtId;
      if ( (int)++v28 >= svtId )
        goto LABEL_22;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_22:
  if ( !v21 )
    goto LABEL_24;
  return (FollowerInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
}


bool __fastcall NpcFollowerMaster__TryGetEntity(
        NpcFollowerMaster_o *this,
        NpcFollowerEntity_o **entity,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F7F20 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__, entity);
    byte_40F7F20 = 1;
  }
  PK = NpcFollowerEntity__CreatePK(id, questId, questPhase, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void __fastcall NpcFollowerMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F835F & 1) == 0 )
  {
    sub_B16FFC(&NpcFollowerMaster___c_TypeInfo, v1);
    byte_40F835F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(NpcFollowerMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)NpcFollowerMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}