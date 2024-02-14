void __fastcall FollowerInfo___ctor(FollowerInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerInfo__ChangeLimitCountBySpoilerProtection(FollowerInfo_o *this, const MethodInfo *method)
{
  ServantLeaderInfo_o *SpoilerSetting; // x0
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v6; // w21
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v8; // w8
  unsigned int v9; // w20
  __int64 v10; // x0

  if ( (byte_4213286 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4213286 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  SpoilerSetting = (ServantLeaderInfo_o *)OptionManager__GetSpoilerSetting(0LL);
  if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
  {
    userSvtLeaderHash = this->fields.userSvtLeaderHash;
    if ( !userSvtLeaderHash )
      goto LABEL_21;
    max_length = userSvtLeaderHash->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      while ( v6 < max_length )
      {
        SpoilerSetting = userSvtLeaderHash->m_Items[v6];
        if ( !SpoilerSetting )
          goto LABEL_21;
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
        max_length = userSvtLeaderHash->max_length;
        if ( (int)++v6 >= max_length )
          goto LABEL_13;
      }
LABEL_20:
      v10 = sub_B0D9A8(SpoilerSetting);
      sub_B0D948(v10, 0LL);
    }
LABEL_13:
    eventUserSvtLeaderHash = this->fields.eventUserSvtLeaderHash;
    if ( !eventUserSvtLeaderHash )
LABEL_21:
      sub_B0D97C(SpoilerSetting);
    v8 = eventUserSvtLeaderHash->max_length;
    if ( v8 >= 1 )
    {
      v9 = 0;
      while ( v9 < v8 )
      {
        SpoilerSetting = eventUserSvtLeaderHash->m_Items[v9];
        if ( !SpoilerSetting )
          goto LABEL_21;
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
        v8 = eventUserSvtLeaderHash->max_length;
        if ( (int)++v9 >= v8 )
          return;
      }
      goto LABEL_20;
    }
  }
}


void __fastcall FollowerInfo__GetAppendSkillInfo(
        FollowerInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t index,
        int32_t returnSupportServantType,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x0

  v6 = 48LL;
  if ( !returnSupportServantType )
    v6 = 40LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
    goto LABEL_7;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  this = *(FollowerInfo_o **)(v7 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  ServantLeaderInfo__GetAppendPassiveSkillInfo_28164780((ServantLeaderInfo_o *)this, skillInfoList, isNpc, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall FollowerInfo__GetNpcServantIndividuality(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x24
  ServantIndividualityMaster_o *v17; // x23
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v18; // x22
  const MethodInfo *v19; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v20; // x25
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x26
  struct System_Collections_Generic_List_string__o *saveNameList; // x27
  System_Int32_array *LimitAddIndividuality; // x24
  System_Int32_array *Individuality; // x23
  FollowerInfo_o *v25; // x0
  const MethodInfo *v26; // x3
  FollowerInfo_o *UnionIndividuality; // x0
  const MethodInfo *v28; // x3
  System_Int32_array *v29; // x23
  const MethodInfo *v30; // x3
  FollowerInfo_o *ServantBaseIndividuality; // x0
  const MethodInfo *v32; // x3
  System_Int32_array *v33; // x20
  FollowerInfo_o *AddIndividuality; // x0
  const MethodInfo *v35; // x3
  UserServantEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4213282 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantIndividualityMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v11);
    sub_B0D8A4(&int___TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4213282 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  v17 = (ServantIndividualityMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantIndividualityMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  v18 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 Instance,
                                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
  Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, v19);
  if ( !Instance )
    goto LABEL_21;
  v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
  saveNameList = Instance->fields.saveNameList;
  saveDataMapList = Instance->fields.saveDataMapList;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = saveNameList;
  *(_QWORD *)&v38.fields.fakeValue = saveDataMapList;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v38, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  LimitAddIndividuality = ServantLimitAddMaster__GetLimitAddIndividuality(
                            MasterData_WarQuestSelectionMaster,
                            (int32_t)Instance,
                            v20[4].fields.currentCryptoKey,
                            v20[10].fields.hiddenValue,
                            0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v20[3], 0LL);
  if ( !v17 )
    goto LABEL_21;
  Individuality = ServantIndividualityMaster__GetIndividuality(
                    v17,
                    (int32_t)Instance,
                    v20[4].fields.currentCryptoKey,
                    0LL);
  v25 = (FollowerInfo_o *)sub_B0D8BC(int___TypeInfo, 0LL);
  UnionIndividuality = (FollowerInfo_o *)FollowerInfo__GetUnionIndividuality(
                                           v25,
                                           (System_Int32_array *)v25,
                                           LimitAddIndividuality,
                                           v26);
  v29 = FollowerInfo__GetUnionIndividuality(
          UnionIndividuality,
          (System_Int32_array *)UnionIndividuality,
          Individuality,
          v28);
  ServantBaseIndividuality = (FollowerInfo_o *)FollowerInfo__GetServantBaseIndividuality(
                                                 this,
                                                 index,
                                                 returnSupportServantType,
                                                 v30);
  Instance = (DataManager_o *)FollowerInfo__GetUnionIndividuality(
                                ServantBaseIndividuality,
                                v29,
                                (System_Int32_array *)ServantBaseIndividuality,
                                v32);
  if ( !v18 )
    goto LABEL_21;
  v33 = (System_Int32_array *)Instance;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         v18,
         &entity,
         this->fields.npcFollowerSvtId,
         (const MethodInfo_2669E58 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      AddIndividuality = (FollowerInfo_o *)NpcServantFollowerIndividualityEntity__GetAddIndividuality(
                                             (NpcServantFollowerIndividualityEntity_o *)entity,
                                             0LL);
      Instance = (DataManager_o *)FollowerInfo__GetUnionIndividuality(
                                    AddIndividuality,
                                    v33,
                                    (System_Int32_array *)AddIndividuality,
                                    v35);
      if ( entity )
        return NpcServantFollowerIndividualityEntity__GetExcludedIndividuality(
                 (NpcServantFollowerIndividualityEntity_o *)entity,
                 (System_Int32_array *)Instance,
                 0LL);
    }
LABEL_21:
    sub_B0D97C(Instance);
  }
  return v33;
}


int32_t __fastcall FollowerInfo__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  QuestEntity_o *Entity; // x0

  if ( (byte_421327E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421327E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              questId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  return Entity && QuestEntity__IsNeedUseEventQuestSupport(Entity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall FollowerInfo__GetServantBaseIndividuality(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x8
  __int64 v11; // x21
  void *Instance; // x0
  __int64 v13; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x20
  __int64 v15; // x19
  __int64 v16; // x21
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4213280 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4213280 = 1;
  }
  if ( (index & 0x80000000) != 0 )
    return 0LL;
  v10 = 48LL;
  if ( !returnSupportServantType )
    v10 = 40LL;
  v11 = *(__int64 *)((char *)&this->klass + v10);
  if ( !v11 || *(_DWORD *)(v11 + 24) <= index )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( *(_DWORD *)(v11 + 24) <= (unsigned int)index )
  {
    v18 = sub_B0D9A8(Instance);
    sub_B0D948(v18, 0LL);
  }
  v13 = *(_QWORD *)(v11 + 8LL * index + 32);
  if ( !v13 )
    goto LABEL_18;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v16 = *(_QWORD *)(v13 + 48);
  v15 = *(_QWORD *)(v13 + 56);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  *(_QWORD *)&v19.fields.fakeValue = v15;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL);
  if ( !v14
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v14,
                     (int32_t)Instance,
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_18:
    sub_B0D97C(Instance);
  }
  return (System_Int32_array *)*((_QWORD *)Instance + 22);
}


ServantLeaderInfo_array *__fastcall FollowerInfo__GetServantLeaderInfoByReturnType(
        FollowerInfo_o *this,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 48LL;
  if ( !returnSupportServantType )
    v3 = 40LL;
  return *(ServantLeaderInfo_array **)((char *)&this->klass + v3);
}


System_Int32_array *__fastcall FollowerInfo__GetUnionIndividuality(
        FollowerInfo_o *this,
        System_Int32_array *targetIndividualities,
        System_Int32_array *addIndividualities,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0

  if ( (byte_4213281 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, targetIndividualities);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Union_int___, v6);
    byte_4213281 = 1;
  }
  if ( !addIndividualities || !*(_QWORD *)&addIndividualities->max_length )
    return targetIndividualities;
  v7 = System_Linq_Enumerable__Union_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)targetIndividualities,
         (System_Collections_Generic_IEnumerable_TSource__o *)addIndividualities,
         (const MethodInfo_1B5945C *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v7,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall FollowerInfo__IsSlotRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)this, questRestrictionInfo, 0LL);
}


bool __fastcall FollowerInfo__IsUniqueIndividualityRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__IsUniqueIndividualityRestriction((ServantLeaderInfo_o *)this, questRestrictionInfo, 0LL);
}


bool __fastcall FollowerInfo__IsUniqueIndividualityRestriction_21906972(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v10; // x0

  v7 = 48LL;
  if ( !returnSupportServantType )
    v7 = 40LL;
  v8 = *(__int64 *)((char *)&this->klass + v7);
  if ( !v8 )
    goto LABEL_7;
  if ( *(_DWORD *)(v8 + 24) <= (unsigned int)index )
  {
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
  }
  this = *(FollowerInfo_o **)(v8 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__IsUniqueIndividualityRestriction_28152780(
           (ServantLeaderInfo_o *)this,
           questRestrictionInfo,
           partyItem,
           num,
           0LL);
}


void __fastcall FollowerInfo__SetEquipInfoForNpc(
        FollowerInfo_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  FollowerInfo_o *v9; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x8
  __int64 v18; // x0

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_8;
  if ( !userSvtLeaderHash->max_length )
    goto LABEL_9;
  v9 = this;
  this = (FollowerInfo_o *)userSvtLeaderHash->m_Items[0];
  if ( !this
    || (this[1].fields.userId = (int64_t)equipTargetInfo,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this[1].fields,
          (System_Int32_array **)equipTargetInfo,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0LL) )
  {
LABEL_8:
    sub_B0D97C(this);
  }
  if ( !eventUserSvtLeaderHash->max_length )
  {
LABEL_9:
    v18 = sub_B0D9A8(this);
    sub_B0D948(v18, 0LL);
  }
  this = (FollowerInfo_o *)eventUserSvtLeaderHash->m_Items[0];
  if ( !this )
    goto LABEL_8;
  this[1].fields.userId = (int64_t)equipTargetInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this[1].fields,
    (System_Int32_array **)equipTargetInfo,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


int32_t __fastcall FollowerInfo__getAdjustAtk(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B0D97C(this);
  return *(_DWORD *)(v6 + 84);
}


int32_t __fastcall FollowerInfo__getAdjustHp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B0D97C(this);
  return *(_DWORD *)(v6 + 88);
}


int32_t __fastcall FollowerInfo__getAtk(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B0D97C(this);
  return *(_DWORD *)(v6 + 80);
}


int32_t __fastcall FollowerInfo__getCardImageLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getCardImageLimitCount(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


int32_t __fastcall FollowerInfo__getCommandCardLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getCommandCardLimitCount(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


System_Int32_array *__fastcall FollowerInfo__getCommandCodeIdList(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0

  result = (System_Int32_array *)FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( result )
    return ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)result, 0LL);
  return result;
}


int32_t __fastcall FollowerInfo__getDispLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


int32_t __fastcall FollowerInfo__getEquipAtk(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int32_t v6; // w9
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v10; // x0

  if ( (index & 0x80000000) != 0 )
    return 0;
  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 <= index )
    return 0;
  if ( v6 <= (unsigned int)index )
  {
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
  }
  v7 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( v7 && (v8 = *(_QWORD *)(v7 + 144)) != 0 )
    return *(_DWORD *)(v8 + 88);
  else
    return 0;
}


bool __fastcall FollowerInfo__getEquipEventUpVal(
        FollowerInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getEquipEventUpVal((ServantLeaderInfo_o *)this, setupInfo, 0LL);
}


int32_t __fastcall FollowerInfo__getEquipHp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int32_t v6; // w9
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v10; // x0

  if ( (index & 0x80000000) != 0 )
    return 0;
  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 <= index )
    return 0;
  if ( v6 <= (unsigned int)index )
  {
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
  }
  v7 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( v7 && (v8 = *(_QWORD *)(v7 + 144)) != 0 )
    return *(_DWORD *)(v8 + 84);
  else
    return 0;
}


int32_t __fastcall FollowerInfo__getEquipLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v9; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_8;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 144)) == 0 )
LABEL_8:
    sub_B0D97C(this);
  return *(_DWORD *)(v7 + 72);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getEquipSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  int32_t v9; // w9
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x19
  __int64 v13; // x20
  __int64 v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v6 = this;
  if ( (byte_4213285 & 1) == 0 )
  {
    this = (FollowerInfo_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index);
    byte_4213285 = 1;
  }
  if ( (index & 0x80000000) != 0 )
    return 0;
  v7 = 48LL;
  if ( !returnSupportServantType )
    v7 = 40LL;
  v8 = *(__int64 *)((char *)&v6->klass + v7);
  if ( !v8 )
    return 0;
  v9 = *(_DWORD *)(v8 + 24);
  if ( v9 <= index )
    return 0;
  if ( v9 <= (unsigned int)index )
  {
    v15 = sub_B0D9A8(this);
    sub_B0D948(v15, 0LL);
  }
  v10 = *(_QWORD *)(v8 + 8LL * index + 32);
  if ( !v10 )
    return 0;
  v11 = *(_QWORD *)(v10 + 144);
  if ( !v11 )
    return 0;
  v13 = *(_QWORD *)(v11 + 56);
  v12 = *(_QWORD *)(v11 + 64);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v13;
  *(_QWORD *)&v16.fields.fakeValue = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v16, 0LL);
}


EquipTargetInfo_o *__fastcall FollowerInfo__getEquipTarget1(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int32_t v6; // w9
  __int64 v7; // x8
  __int64 v9; // x0

  if ( (index & 0x80000000) != 0 )
    return 0LL;
  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    return 0LL;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 <= index )
    return 0LL;
  if ( v6 <= (unsigned int)index )
  {
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  v7 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( v7 )
    return *(EquipTargetInfo_o **)(v7 + 144);
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall FollowerInfo__getEquipUserSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  int32_t v9; // w9
  __int64 v10; // x8
  __int64 v11; // x8
  __int128 v12; // q1
  __int64 v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  v6 = this;
  if ( (byte_4213284 & 1) == 0 )
  {
    this = (FollowerInfo_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&index);
    byte_4213284 = 1;
  }
  if ( (index & 0x80000000) != 0 )
    return 0LL;
  v7 = 48LL;
  if ( !returnSupportServantType )
    v7 = 40LL;
  v8 = *(__int64 *)((char *)&v6->klass + v7);
  if ( !v8 )
    return 0LL;
  v9 = *(_DWORD *)(v8 + 24);
  if ( v9 <= index )
    return 0LL;
  if ( v9 <= (unsigned int)index )
  {
    v14 = sub_B0D9A8(this);
    sub_B0D948(v14, 0LL);
  }
  v10 = *(_QWORD *)(v8 + 8LL * index + 32);
  if ( !v10 )
    return 0LL;
  v11 = *(_QWORD *)(v10 + 144);
  if ( !v11 )
    return 0LL;
  v12 = *(_OWORD *)(v11 + 40);
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)(v11 + 24);
  *(_OWORD *)&v16.fields.fakeValue = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v15 = v16;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v15, 0LL);
}


bool __fastcall FollowerInfo__getEventUpVal(
        FollowerInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getEventUpVal((ServantLeaderInfo_o *)this, setupInfo, 0LL);
}


bool __fastcall FollowerInfo__getEventUpVal_21906432(
        FollowerInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v9; // x0

  v6 = 48LL;
  if ( !returnSupportServantType )
    v6 = 40LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
    goto LABEL_7;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
  {
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  this = *(FollowerInfo_o **)(v7 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getEventUpVal_28150548((ServantLeaderInfo_o *)this, eventUpVallInfo, setupInfo, 0LL);
}


bool __fastcall FollowerInfo__getEventUpVal_21906516(
        FollowerInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool *isServantEventUpVal,
        bool *isEquipEventUpVal,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v11; // x0

  v8 = 48LL;
  if ( !returnSupportServantType )
    v8 = 40LL;
  v9 = *(__int64 *)((char *)&this->klass + v8);
  if ( !v9 )
    goto LABEL_7;
  if ( *(_DWORD *)(v9 + 24) <= (unsigned int)index )
  {
    v11 = sub_B0D9A8(this);
    sub_B0D948(v11, 0LL);
  }
  this = *(FollowerInfo_o **)(v9 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getEventUpVal_28151592(
           (ServantLeaderInfo_o *)this,
           eventUpVallInfo,
           isServantEventUpVal,
           isEquipEventUpVal,
           setupInfo,
           0LL);
}


int32_t __fastcall FollowerInfo__getExceedCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int32_t v6; // w9
  __int64 v7; // x8
  __int64 v9; // x0

  if ( (index & 0x80000000) != 0 )
    return 0;
  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 <= index )
    return 0;
  if ( v6 <= (unsigned int)index )
  {
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  v7 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( v7 )
    return *(_DWORD *)(v7 + 136);
  else
    return 0;
}


int32_t __fastcall FollowerInfo__getExp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B0D97C(this);
  return *(_DWORD *)(v6 + 72);
}


int32_t __fastcall FollowerInfo__getFrameType(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getFrameType(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


int32_t __fastcall FollowerInfo__getFriendPointUpType(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v7; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  this = *(FollowerInfo_o **)(v5 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getFriendPointUpType((ServantLeaderInfo_o *)this, 0LL);
}


int32_t __fastcall FollowerInfo__getFriendPointUpVal(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v7; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  this = *(FollowerInfo_o **)(v5 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getFriendPointUpVal((ServantLeaderInfo_o *)this, 0LL);
}


int32_t __fastcall FollowerInfo__getHp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B0D97C(this);
  return *(_DWORD *)(v6 + 76);
}


int32_t __fastcall FollowerInfo__getIconImageLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getIconLimitCount(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getIndex(
        FollowerInfo_o *this,
        int32_t classId,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  FollowerInfo_o *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 v13; // x21
  __int64 v14; // x9
  __int64 v15; // x10
  __int64 v16; // x19
  __int64 v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v8 = this;
  if ( (byte_421327F & 1) == 0 )
  {
    this = (FollowerInfo_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classId);
    byte_421327F = 1;
  }
  v9 = 48LL;
  if ( !returnSupportServantType )
    v9 = 40LL;
  v10 = *(__int64 *)((char *)&v8->klass + v9);
  if ( !v10 )
    return -1;
  v11 = *(_QWORD *)(v10 + 24);
  if ( (unsigned int)(v8->fields.type - 3) <= 1 )
  {
    if ( v11 )
      return 0;
    return -1;
  }
  if ( (int)v11 < 1 )
    return -1;
  v13 = 0LL;
  v14 = v10 + 32;
  while ( 1 )
  {
    v15 = *(_QWORD *)(v14 + 8 * v13);
    if ( supportDeckId < 1 )
    {
      if ( !v15 )
LABEL_25:
        sub_B0D97C(this);
    }
    else
    {
      if ( !v15 )
        goto LABEL_25;
      if ( *(_DWORD *)(v15 + 16) != supportDeckId )
        goto LABEL_17;
    }
    if ( *(_DWORD *)(v15 + 32) == classId )
      break;
LABEL_17:
    if ( ++v13 >= (int)v11 )
      return -1;
  }
  v17 = *(_QWORD *)(v15 + 48);
  v16 = *(_QWORD *)(v15 + 56);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v17;
  *(_QWORD *)&v18.fields.fakeValue = v16;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL) < 1 )
    return -1;
  else
    return v13;
}


int32_t __fastcall FollowerInfo__getIndexForSupport(
        FollowerInfo_o *this,
        int32_t classId,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x9
  __int64 v10; // x10

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 24);
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      v9 = v6 + 32;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v9 + 8 * v8);
        if ( supportDeckId < 1 )
          break;
        if ( !v10 )
          goto LABEL_15;
        if ( *(_DWORD *)(v10 + 16) == supportDeckId )
          goto LABEL_11;
LABEL_12:
        if ( ++v8 >= (int)v7 )
          goto LABEL_13;
      }
      if ( !v10 )
LABEL_15:
        sub_B0D97C(v8);
LABEL_11:
      if ( *(_DWORD *)(v10 + 32) == classId )
        return v8;
      goto LABEL_12;
    }
  }
LABEL_13:
  LODWORD(v8) = -1;
  return v8;
}


int32_t __fastcall FollowerInfo__getLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int32_t v6; // w9
  __int64 v7; // x8
  __int64 v9; // x0

  if ( (index & 0x80000000) != 0 )
    return 0;
  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 <= index )
    return 0;
  if ( v6 <= (unsigned int)index )
  {
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  v7 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( v7 )
    return *(_DWORD *)(v7 + 64);
  else
    return 0;
}


int32_t __fastcall FollowerInfo__getLv(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int32_t v6; // w9
  __int64 v7; // x8
  __int64 v9; // x0

  if ( (index & 0x80000000) != 0 )
    return 0;
  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 <= index )
    return 0;
  if ( v6 <= (unsigned int)index )
  {
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  v7 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( v7 )
    return *(_DWORD *)(v7 + 68);
  else
    return 0;
}


int32_t __fastcall FollowerInfo__getMaxCardImageLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getMaxCardImageLimitCount(ServantLeaderInfo, 0, 0LL);
  return (int)ServantLeaderInfo;
}


int32_t __fastcall FollowerInfo__getMaxCommandCardLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getMaxCommandCardLimitCount(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


int32_t __fastcall FollowerInfo__getMaxDispLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getMaxDispLimitCount(ServantLeaderInfo, 0LL);
  return (int)ServantLeaderInfo;
}


int32_t __fastcall FollowerInfo__getMaxIconLimitCount(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo; // x0

  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, method);
  if ( ServantLeaderInfo )
    LODWORD(ServantLeaderInfo) = ServantLeaderInfo__getMaxIconLimitCount(ServantLeaderInfo, 0, 0LL);
  return (int)ServantLeaderInfo;
}


int32_t __fastcall FollowerInfo__getMaxLv(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int32_t v6; // w9
  ServantLeaderInfo_o *v7; // x8
  __int64 v9; // x0

  if ( (index & 0x80000000) != 0 )
    return 0;
  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 <= index )
    return 0;
  if ( v6 <= (unsigned int)index )
  {
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  v7 = *(ServantLeaderInfo_o **)(v5 + 8LL * index + 32);
  if ( v7 && (unsigned int)(this->fields.type - 3) >= 2 )
    return ServantLeaderInfo__getLevelMax(v7, 0LL);
  else
    return 0;
}


bool __fastcall FollowerInfo__getQuestRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x0

  if ( (unsigned int)(this->fields.type - 3) < 2 )
    return 0;
  v6 = 48LL;
  if ( !returnSupportServantType )
    v6 = 40LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
    goto LABEL_9;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  this = *(FollowerInfo_o **)(v7 + 8LL * index + 32);
  if ( !this )
LABEL_9:
    sub_B0D97C(this);
  return ServantLeaderInfo__getQuestRestriction((ServantLeaderInfo_o *)this, questRestrictionInfo, 0LL);
}


bool __fastcall FollowerInfo__getServantEventUpVal(
        FollowerInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getServantEventUpVal((ServantLeaderInfo_o *)this, setupInfo, 0LL);
}


ServantLeaderInfo_o *__fastcall FollowerInfo__getServantLeaderInfo(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int32_t v6; // w9
  __int64 v8; // x0

  if ( (index & 0x80000000) != 0 )
    return 0LL;
  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    return 0LL;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 <= index )
    return 0LL;
  if ( v6 <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  return *(ServantLeaderInfo_o **)(v5 + 8LL * index + 32);
}


System_Int32_array *__fastcall FollowerInfo__getSkillIdList(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v7; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  this = *(FollowerInfo_o **)(v5 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getSkillIdList((ServantLeaderInfo_o *)this, 0LL);
}


void __fastcall FollowerInfo__getSkillInfo(
        FollowerInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)this, skillInfoList, 0LL);
}


System_Int32_array *__fastcall FollowerInfo__getSkillLevelList(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v7; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  this = *(FollowerInfo_o **)(v5 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getSkillLevelList((ServantLeaderInfo_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  int32_t v9; // w9
  __int64 v10; // x8
  __int64 v11; // x19
  __int64 v12; // x20
  __int64 v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v6 = this;
  if ( (byte_4213283 & 1) == 0 )
  {
    this = (FollowerInfo_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index);
    byte_4213283 = 1;
  }
  if ( (index & 0x80000000) != 0 )
    return 0;
  v7 = 48LL;
  if ( !returnSupportServantType )
    v7 = 40LL;
  v8 = *(__int64 *)((char *)&v6->klass + v7);
  if ( !v8 )
    return 0;
  v9 = *(_DWORD *)(v8 + 24);
  if ( v9 <= index )
    return 0;
  if ( v9 <= (unsigned int)index )
  {
    v14 = sub_B0D9A8(this);
    sub_B0D948(v14, 0LL);
  }
  v10 = *(_QWORD *)(v8 + 8LL * index + 32);
  if ( !v10 )
    return 0;
  v12 = *(_QWORD *)(v10 + 48);
  v11 = *(_QWORD *)(v10 + 56);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v15, 0LL);
}


bool __fastcall FollowerInfo__getTreasureDeviceInfo(
        FollowerInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)this, tdInfo, 0LL);
}


bool __fastcall FollowerInfo__getTreasureDeviceInfo_21907148(
        FollowerInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v9; // x0

  v6 = 48LL;
  if ( !returnSupportServantType )
    v6 = 40LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
    goto LABEL_7;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
  {
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  this = *(FollowerInfo_o **)(v7 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getTreasureDeviceInfo_28153448((ServantLeaderInfo_o *)this, tdLv, tdMaxLv, 0LL);
}


int32_t __fastcall FollowerInfo__getTreasureDeviceLevelIcon(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v7; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  this = *(FollowerInfo_o **)(v5 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getTreasureDeviceLevelIcon((ServantLeaderInfo_o *)this, 0LL);
}


bool __fastcall FollowerInfo__getUniqueSvtRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getUniqueSvtRestriction((ServantLeaderInfo_o *)this, questRestrictionInfo, 0LL);
}


bool __fastcall FollowerInfo__getUniqueSvtRestriction_21906796(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v10; // x0

  v7 = 48LL;
  if ( !returnSupportServantType )
    v7 = 40LL;
  v8 = *(__int64 *)((char *)&this->klass + v7);
  if ( !v8 )
    goto LABEL_7;
  if ( *(_DWORD *)(v8 + 24) <= (unsigned int)index )
  {
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
  }
  this = *(FollowerInfo_o **)(v8 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  return ServantLeaderInfo__getUniqueSvtRestriction_28152404(
           (ServantLeaderInfo_o *)this,
           questRestrictionInfo,
           partyItem,
           num,
           0LL);
}


int64_t __fastcall FollowerInfo__getUpdatedAt(FollowerInfo_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  __int64 v3; // x9
  ServantLeaderInfo_o *v4; // x8
  __int64 v6; // x0

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    return 0LL;
  v3 = *(_QWORD *)&userSvtLeaderHash->max_length;
  if ( !v3 )
    return 0LL;
  if ( !(_DWORD)v3 )
  {
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  v4 = userSvtLeaderHash->m_Items[0];
  if ( v4 )
    return v4->fields.updatedAt;
  else
    return 0LL;
}


int64_t __fastcall FollowerInfo__getUserSvtId(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int32_t v6; // w9
  __int64 v7; // x8
  __int64 v9; // x0

  if ( (index & 0x80000000) != 0 )
    return 0LL;
  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    return 0LL;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 <= index )
    return 0LL;
  if ( v6 <= (unsigned int)index )
  {
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  v7 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( v7 )
    return *(_QWORD *)(v7 + 40);
  else
    return 0LL;
}


int32_t __fastcall FollowerInfo__get_FollowerType(FollowerInfo_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


bool __fastcall FollowerInfo__get_IsNpc(FollowerInfo_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.type - 3) < 2;
}