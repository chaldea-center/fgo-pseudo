void __fastcall FollowerInfo___ctor(FollowerInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerInfo__ChangeLimitCountBySpoilerProtection(FollowerInfo_o *this, const MethodInfo *method)
{
  _BOOL8 SpoilerSetting; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v8; // w21
  ServantLeaderInfo_o *v9; // x0
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v11; // w8
  unsigned int v12; // w20
  ServantLeaderInfo_o *v13; // x0

  if ( (byte_40F8ECD & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40F8ECD = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  SpoilerSetting = OptionManager__GetSpoilerSetting(0LL);
  if ( !SpoilerSetting )
  {
    userSvtLeaderHash = this->fields.userSvtLeaderHash;
    if ( !userSvtLeaderHash )
      goto LABEL_21;
    max_length = userSvtLeaderHash->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( v8 < max_length )
      {
        v9 = userSvtLeaderHash->m_Items[v8];
        if ( !v9 )
          goto LABEL_21;
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v9, 0LL);
        max_length = userSvtLeaderHash->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_13;
      }
LABEL_20:
      sub_B17100(SpoilerSetting, v4, v5);
      sub_B170A0();
    }
LABEL_13:
    eventUserSvtLeaderHash = this->fields.eventUserSvtLeaderHash;
    if ( !eventUserSvtLeaderHash )
LABEL_21:
      sub_B170D4();
    v11 = eventUserSvtLeaderHash->max_length;
    if ( v11 >= 1 )
    {
      v12 = 0;
      while ( v12 < v11 )
      {
        v13 = eventUserSvtLeaderHash->m_Items[v12];
        if ( !v13 )
          goto LABEL_21;
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v13, 0LL);
        v11 = eventUserSvtLeaderHash->max_length;
        if ( (int)++v12 >= v11 )
          return;
      }
      goto LABEL_20;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  ServantLeaderInfo_o *v8; // x0

  v6 = 48LL;
  if ( !returnSupportServantType )
    v6 = 40LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
    goto LABEL_7;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, skillInfoList, *(_QWORD *)&index);
    sub_B170A0();
  }
  v8 = *(ServantLeaderInfo_o **)(v7 + 8LL * index + 32);
  if ( !v8 )
LABEL_7:
    sub_B170D4();
  ServantLeaderInfo__GetAppendPassiveSkillInfo_29632824(v8, skillInfoList, isNpc, 0LL);
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
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x24
  WebViewManager_o *v17; // x0
  ServantIndividualityMaster_o *v18; // x23
  WebViewManager_o *v19; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v20; // x22
  const MethodInfo *v21; // x3
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v23; // x25
  __int64 v24; // x26
  __int64 v25; // x27
  int32_t v26; // w0
  System_Int32_array *LimitAddIndividuality; // x24
  int32_t v28; // w0
  System_Int32_array *Individuality; // x23
  __int64 v30; // x2
  FollowerInfo_o *v31; // x0
  const MethodInfo *v32; // x3
  FollowerInfo_o *UnionIndividuality; // x0
  const MethodInfo *v34; // x3
  System_Int32_array *v35; // x23
  const MethodInfo *v36; // x3
  FollowerInfo_o *ServantBaseIndividuality; // x0
  const MethodInfo *v38; // x3
  System_Int32_array *v39; // x0
  System_Int32_array *v40; // x20
  FollowerInfo_o *AddIndividuality; // x0
  const MethodInfo *v42; // x3
  System_Int32_array *v43; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_40F8EC9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantIndividualityMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v11);
    sub_B16FFC(&int___TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F8EC9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_21;
  v18 = (ServantIndividualityMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v17,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantIndividualityMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_21;
  v20 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)v19,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, v21);
  if ( !ServantLeaderInfo )
    goto LABEL_21;
  v23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)ServantLeaderInfo;
  v25 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v25;
  *(_QWORD *)&v46.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  LimitAddIndividuality = ServantLimitAddMaster__GetLimitAddIndividuality(
                            MasterData_WarQuestSelectionMaster,
                            v26,
                            v23[4].fields.currentCryptoKey,
                            v23[10].fields.hiddenValue,
                            0LL);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23[3], 0LL);
  if ( !v18 )
    goto LABEL_21;
  Individuality = ServantIndividualityMaster__GetIndividuality(v18, v28, v23[4].fields.currentCryptoKey, 0LL);
  v31 = (FollowerInfo_o *)sub_B17014(int___TypeInfo, 0LL, v30);
  UnionIndividuality = (FollowerInfo_o *)FollowerInfo__GetUnionIndividuality(
                                           v31,
                                           (System_Int32_array *)v31,
                                           LimitAddIndividuality,
                                           v32);
  v35 = FollowerInfo__GetUnionIndividuality(
          UnionIndividuality,
          (System_Int32_array *)UnionIndividuality,
          Individuality,
          v34);
  ServantBaseIndividuality = (FollowerInfo_o *)FollowerInfo__GetServantBaseIndividuality(
                                                 this,
                                                 index,
                                                 returnSupportServantType,
                                                 v36);
  v39 = FollowerInfo__GetUnionIndividuality(
          ServantBaseIndividuality,
          v35,
          (System_Int32_array *)ServantBaseIndividuality,
          v38);
  if ( !v20 )
    goto LABEL_21;
  v40 = v39;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         v20,
         &entity,
         this->fields.npcFollowerSvtId,
         (const MethodInfo_266F60C *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    if ( entity )
    {
      AddIndividuality = (FollowerInfo_o *)NpcServantFollowerIndividualityEntity__GetAddIndividuality(
                                             (NpcServantFollowerIndividualityEntity_o *)entity,
                                             0LL);
      v43 = FollowerInfo__GetUnionIndividuality(AddIndividuality, v40, (System_Int32_array *)AddIndividuality, v42);
      if ( entity )
        return NpcServantFollowerIndividualityEntity__GetExcludedIndividuality(
                 (NpcServantFollowerIndividualityEntity_o *)entity,
                 v43,
                 0LL);
    }
LABEL_21:
    sub_B170D4();
  }
  return v40;
}


int32_t __fastcall FollowerInfo__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  QuestEntity_o *Entity; // x0

  if ( (byte_40F8EC5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F8EC5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              questId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x20
  __int64 v18; // x19
  __int64 v19; // x21
  int32_t v20; // w0
  WarEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_40F8EC7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F8EC7 = 1;
  }
  if ( (index & 0x80000000) != 0 )
    return 0LL;
  v10 = 48LL;
  if ( !returnSupportServantType )
    v10 = 40LL;
  v11 = *(__int64 *)((char *)&this->klass + v10);
  if ( !v11 || *(_DWORD *)(v11 + 24) <= index )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( *(_DWORD *)(v11 + 24) <= (unsigned int)index )
  {
    sub_B17100(MasterData_WarQuestSelectionMaster, v14, v15);
    sub_B170A0();
  }
  v16 = *(_QWORD *)(v11 + 8LL * index + 32);
  if ( !v16 )
    goto LABEL_18;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v19 = *(_QWORD *)(v16 + 48);
  v18 = *(_QWORD *)(v16 + 56);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v19;
  *(_QWORD *)&v23.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23, 0LL);
  if ( !v17
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v17,
                   v20,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_18:
    sub_B170D4();
  }
  return *(System_Int32_array **)&Entity[1].fields.bannerId;
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

  if ( (byte_40F8EC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, targetIndividualities);
    sub_B16FFC(&Method_System_Linq_Enumerable_Union_int___, v6);
    byte_40F8EC8 = 1;
  }
  if ( !addIndividualities || !*(_QWORD *)&addIndividualities->max_length )
    return targetIndividualities;
  v7 = System_Linq_Enumerable__Union_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)targetIndividualities,
         (System_Collections_Generic_IEnumerable_TSource__o *)addIndividualities,
         (const MethodInfo_19C7D94 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v7,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__IsSlotRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  ServantLeaderInfo_o *v7; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, questRestrictionInfo, *(_QWORD *)&index);
    sub_B170A0();
  }
  v7 = *(ServantLeaderInfo_o **)(v6 + 8LL * index + 32);
  if ( !v7 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__IsSlotRestriction(v7, questRestrictionInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__IsUniqueIndividualityRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  ServantLeaderInfo_o *v7; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, questRestrictionInfo, *(_QWORD *)&index);
    sub_B170A0();
  }
  v7 = *(ServantLeaderInfo_o **)(v6 + 8LL * index + 32);
  if ( !v7 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__IsUniqueIndividualityRestriction(v7, questRestrictionInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__IsUniqueIndividualityRestriction_23237656(
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
  ServantLeaderInfo_o *v9; // x0

  v7 = 48LL;
  if ( !returnSupportServantType )
    v7 = 40LL;
  v8 = *(__int64 *)((char *)&this->klass + v7);
  if ( !v8 )
    goto LABEL_7;
  if ( *(_DWORD *)(v8 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, questRestrictionInfo, *(_QWORD *)&index);
    sub_B170A0();
  }
  v9 = *(ServantLeaderInfo_o **)(v8 + 8LL * index + 32);
  if ( !v9 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__IsUniqueIndividualityRestriction_29620824(v9, questRestrictionInfo, partyItem, num, 0LL);
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
  ServantLeaderInfo_o *v10; // x0
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x8
  ServantLeaderInfo_o *v18; // x0

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_8;
  if ( !userSvtLeaderHash->max_length )
    goto LABEL_9;
  v10 = userSvtLeaderHash->m_Items[0];
  if ( !v10
    || (v10->fields.equipTarget1 = equipTargetInfo,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v10->fields.equipTarget1,
          (System_Int32_array **)equipTargetInfo,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (eventUserSvtLeaderHash = this->fields.eventUserSvtLeaderHash) == 0LL) )
  {
LABEL_8:
    sub_B170D4();
  }
  if ( !eventUserSvtLeaderHash->max_length )
  {
LABEL_9:
    sub_B17100(this, equipTargetInfo, method);
    sub_B170A0();
  }
  v18 = eventUserSvtLeaderHash->m_Items[0];
  if ( !v18 )
    goto LABEL_8;
  v18->fields.equipTarget1 = equipTargetInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v18->fields.equipTarget1,
    (System_Int32_array **)equipTargetInfo,
    (System_String_array **)method,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getAdjustAtk(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B170D4();
  return *(_DWORD *)(v6 + 84);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getAdjustHp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B170D4();
  return *(_DWORD *)(v6 + 88);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getAtk(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B170D4();
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


// local variable allocation has failed, the output may be wrong!
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
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v7 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( v7 && (v8 = *(_QWORD *)(v7 + 144)) != 0 )
    return *(_DWORD *)(v8 + 88);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getEquipEventUpVal(
        FollowerInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  ServantLeaderInfo_o *v7; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, setupInfo, *(_QWORD *)&index);
    sub_B170A0();
  }
  v7 = *(ServantLeaderInfo_o **)(v6 + 8LL * index + 32);
  if ( !v7 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getEquipEventUpVal(v7, setupInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v7 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( v7 && (v8 = *(_QWORD *)(v7 + 144)) != 0 )
    return *(_DWORD *)(v8 + 84);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
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

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_8;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 144)) == 0 )
LABEL_8:
    sub_B170D4();
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v6 = this;
  if ( (byte_40F8ECC & 1) == 0 )
  {
    this = (FollowerInfo_o *)sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index);
    byte_40F8ECC = 1;
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
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
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
  *(_QWORD *)&v15.fields.currentCryptoKey = v13;
  *(_QWORD *)&v15.fields.fakeValue = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v6 = this;
  if ( (byte_40F8ECB & 1) == 0 )
  {
    this = (FollowerInfo_o *)sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&index);
    byte_40F8ECB = 1;
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
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v10 = *(_QWORD *)(v8 + 8LL * index + 32);
  if ( !v10 )
    return 0LL;
  v11 = *(_QWORD *)(v10 + 144);
  if ( !v11 )
    return 0LL;
  v12 = *(_OWORD *)(v11 + 40);
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)(v11 + 24);
  *(_OWORD *)&v15.fields.fakeValue = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v14 = v15;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getEventUpVal(
        FollowerInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  ServantLeaderInfo_o *v7; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, setupInfo, *(_QWORD *)&index);
    sub_B170A0();
  }
  v7 = *(ServantLeaderInfo_o **)(v6 + 8LL * index + 32);
  if ( !v7 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getEventUpVal(v7, setupInfo, 0LL);
}


bool __fastcall FollowerInfo__getEventUpVal_23237116(
        FollowerInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8
  ServantLeaderInfo_o *v8; // x0

  v6 = 48LL;
  if ( !returnSupportServantType )
    v6 = 40LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
    goto LABEL_7;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, eventUpVallInfo, setupInfo);
    sub_B170A0();
  }
  v8 = *(ServantLeaderInfo_o **)(v7 + 8LL * index + 32);
  if ( !v8 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getEventUpVal_29618592(v8, eventUpVallInfo, setupInfo, 0LL);
}


bool __fastcall FollowerInfo__getEventUpVal_23237200(
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
  ServantLeaderInfo_o *v10; // x0

  v8 = 48LL;
  if ( !returnSupportServantType )
    v8 = 40LL;
  v9 = *(__int64 *)((char *)&this->klass + v8);
  if ( !v9 )
    goto LABEL_7;
  if ( *(_DWORD *)(v9 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, eventUpVallInfo, isServantEventUpVal);
    sub_B170A0();
  }
  v10 = *(ServantLeaderInfo_o **)(v9 + 8LL * index + 32);
  if ( !v10 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getEventUpVal_29619636(
           v10,
           eventUpVallInfo,
           isServantEventUpVal,
           isEquipEventUpVal,
           setupInfo,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v7 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( v7 )
    return *(_DWORD *)(v7 + 136);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getExp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B170D4();
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getFriendPointUpType(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  ServantLeaderInfo_o *v6; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v6 = *(ServantLeaderInfo_o **)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getFriendPointUpType(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getFriendPointUpVal(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  ServantLeaderInfo_o *v6; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v6 = *(ServantLeaderInfo_o **)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getFriendPointUpVal(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getHp(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B170D4();
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
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 v13; // x21
  __int64 v14; // x9
  __int64 v15; // x10
  __int64 v16; // x19
  __int64 v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40F8EC6 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classId);
    byte_40F8EC6 = 1;
  }
  v9 = 48LL;
  if ( !returnSupportServantType )
    v9 = 40LL;
  v10 = *(__int64 *)((char *)&this->klass + v9);
  if ( !v10 )
    return -1;
  v11 = *(_QWORD *)(v10 + 24);
  if ( (unsigned int)(this->fields.type - 3) <= 1 )
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
        sub_B170D4();
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL) < 1 )
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
        sub_B170D4();
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


// local variable allocation has failed, the output may be wrong!
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
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v7 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( v7 )
    return *(_DWORD *)(v7 + 64);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
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


// local variable allocation has failed, the output may be wrong!
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
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v7 = *(ServantLeaderInfo_o **)(v5 + 8LL * index + 32);
  if ( v7 && (unsigned int)(this->fields.type - 3) >= 2 )
    return ServantLeaderInfo__getLevelMax(v7, 0LL);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getQuestRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8
  ServantLeaderInfo_o *v8; // x0

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
    sub_B17100(this, questRestrictionInfo, *(_QWORD *)&index);
    sub_B170A0();
  }
  v8 = *(ServantLeaderInfo_o **)(v7 + 8LL * index + 32);
  if ( !v8 )
LABEL_9:
    sub_B170D4();
  return ServantLeaderInfo__getQuestRestriction(v8, questRestrictionInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getServantEventUpVal(
        FollowerInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  ServantLeaderInfo_o *v7; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, setupInfo, *(_QWORD *)&index);
    sub_B170A0();
  }
  v7 = *(ServantLeaderInfo_o **)(v6 + 8LL * index + 32);
  if ( !v7 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getServantEventUpVal(v7, setupInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantLeaderInfo_o *__fastcall FollowerInfo__getServantLeaderInfo(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  int32_t v6; // w9

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
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  return *(ServantLeaderInfo_o **)(v5 + 8LL * index + 32);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall FollowerInfo__getSkillIdList(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  ServantLeaderInfo_o *v6; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v6 = *(ServantLeaderInfo_o **)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getSkillIdList(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerInfo__getSkillInfo(
        FollowerInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  ServantLeaderInfo_o *v7; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, skillInfoList, *(_QWORD *)&index);
    sub_B170A0();
  }
  v7 = *(ServantLeaderInfo_o **)(v6 + 8LL * index + 32);
  if ( !v7 )
LABEL_7:
    sub_B170D4();
  ServantLeaderInfo__getSkillInfo(v7, skillInfoList, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall FollowerInfo__getSkillLevelList(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  ServantLeaderInfo_o *v6; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v6 = *(ServantLeaderInfo_o **)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getSkillLevelList(v6, 0LL);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v6 = this;
  if ( (byte_40F8ECA & 1) == 0 )
  {
    this = (FollowerInfo_o *)sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index);
    byte_40F8ECA = 1;
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
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
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
  *(_QWORD *)&v14.fields.currentCryptoKey = v12;
  *(_QWORD *)&v14.fields.fakeValue = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getTreasureDeviceInfo(
        FollowerInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  ServantLeaderInfo_o *v7; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, tdInfo, *(_QWORD *)&index);
    sub_B170A0();
  }
  v7 = *(ServantLeaderInfo_o **)(v6 + 8LL * index + 32);
  if ( !v7 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getTreasureDeviceInfo(v7, tdInfo, 0LL);
}


bool __fastcall FollowerInfo__getTreasureDeviceInfo_23237832(
        FollowerInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8
  ServantLeaderInfo_o *v8; // x0

  v6 = 48LL;
  if ( !returnSupportServantType )
    v6 = 40LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
    goto LABEL_7;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, tdLv, tdMaxLv);
    sub_B170A0();
  }
  v8 = *(ServantLeaderInfo_o **)(v7 + 8LL * index + 32);
  if ( !v8 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getTreasureDeviceInfo_29621492(v8, tdLv, tdMaxLv, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FollowerInfo__getTreasureDeviceLevelIcon(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8
  ServantLeaderInfo_o *v6; // x0

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
  }
  v6 = *(ServantLeaderInfo_o **)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getTreasureDeviceLevelIcon(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getUniqueSvtRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x8
  ServantLeaderInfo_o *v7; // x0

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, questRestrictionInfo, *(_QWORD *)&index);
    sub_B170A0();
  }
  v7 = *(ServantLeaderInfo_o **)(v6 + 8LL * index + 32);
  if ( !v7 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getUniqueSvtRestriction(v7, questRestrictionInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerInfo__getUniqueSvtRestriction_23237480(
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
  ServantLeaderInfo_o *v9; // x0

  v7 = 48LL;
  if ( !returnSupportServantType )
    v7 = 40LL;
  v8 = *(__int64 *)((char *)&this->klass + v7);
  if ( !v8 )
    goto LABEL_7;
  if ( *(_DWORD *)(v8 + 24) <= (unsigned int)index )
  {
    sub_B17100(this, questRestrictionInfo, *(_QWORD *)&index);
    sub_B170A0();
  }
  v9 = *(ServantLeaderInfo_o **)(v8 + 8LL * index + 32);
  if ( !v9 )
LABEL_7:
    sub_B170D4();
  return ServantLeaderInfo__getUniqueSvtRestriction_29620448(v9, questRestrictionInfo, partyItem, num, 0LL);
}


int64_t __fastcall FollowerInfo__getUpdatedAt(FollowerInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  __int64 v4; // x9
  ServantLeaderInfo_o *v5; // x8

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    return 0LL;
  v4 = *(_QWORD *)&userSvtLeaderHash->max_length;
  if ( !v4 )
    return 0LL;
  if ( !(_DWORD)v4 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v5 = userSvtLeaderHash->m_Items[0];
  if ( v5 )
    return v5->fields.updatedAt;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B17100(this, *(_QWORD *)&index, *(_QWORD *)&returnSupportServantType);
    sub_B170A0();
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