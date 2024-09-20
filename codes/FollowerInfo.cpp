void __fastcall FollowerInfo___ctor(FollowerInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerInfo__ChangeLimitCountBySpoilerProtection(FollowerInfo_o *this, const MethodInfo *method)
{
  ServantLeaderInfo_o *SpoilerSetting; // x0
  __int64 v4; // x1
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v7; // w21
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v9; // w8
  unsigned int v10; // w20

  if ( (byte_4A5AD4E & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5AD4E = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  SpoilerSetting = (ServantLeaderInfo_o *)OptionManager__GetSpoilerSetting(0LL);
  if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
  {
    userSvtLeaderHash = this->fields.userSvtLeaderHash;
    if ( !userSvtLeaderHash )
      goto LABEL_20;
    max_length = userSvtLeaderHash->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( v7 < max_length )
      {
        SpoilerSetting = userSvtLeaderHash->m_Items[v7];
        if ( !SpoilerSetting )
          goto LABEL_20;
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
        max_length = userSvtLeaderHash->max_length;
        if ( (int)++v7 >= max_length )
          goto LABEL_12;
      }
LABEL_19:
      sub_1B88814(SpoilerSetting, v4);
    }
LABEL_12:
    eventUserSvtLeaderHash = this->fields.eventUserSvtLeaderHash;
    if ( !eventUserSvtLeaderHash )
LABEL_20:
      sub_1B8880C(SpoilerSetting, v4);
    v9 = eventUserSvtLeaderHash->max_length;
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( v10 < v9 )
      {
        SpoilerSetting = eventUserSvtLeaderHash->m_Items[v10];
        if ( !SpoilerSetting )
          goto LABEL_20;
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
        v9 = eventUserSvtLeaderHash->max_length;
        if ( (int)++v10 >= v9 )
          return;
      }
      goto LABEL_19;
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

  v6 = 48LL;
  if ( !returnSupportServantType )
    v6 = 40LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
    goto LABEL_7;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
    sub_1B88814(this, skillInfoList);
  this = *(FollowerInfo_o **)(v7 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, skillInfoList);
  ServantLeaderInfo__GetAppendPassiveSkillInfo_40506644((ServantLeaderInfo_o *)this, skillInfoList, isNpc, 0LL);
}


System_Int32_array *__fastcall FollowerInfo__GetNpcServantIndividuality(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v10; // x23
  Il2CppObject *v11; // x22
  const MethodInfo *v12; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v13; // x25
  struct System_Byte_array *masterDataBytes; // x26
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x27
  System_Int32_array *LimitAddIndividuality; // x24
  System_Int32_array *Individuality; // x23
  FollowerInfo_o *v18; // x0
  const MethodInfo *v19; // x3
  FollowerInfo_o *UnionIndividuality; // x0
  const MethodInfo *v21; // x3
  System_Int32_array *v22; // x23
  const MethodInfo *v23; // x3
  FollowerInfo_o *ServantBaseIndividuality; // x0
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x20
  FollowerInfo_o *AddIndividuality; // x0
  const MethodInfo *v28; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4A5AD4A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantIndividualityMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD4A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v10 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantIndividualityMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v11 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
  Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo(this, index, returnSupportServantType, v12);
  if ( !Instance )
    goto LABEL_19;
  v13 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
  lookup = Instance->fields.lookup;
  masterDataBytes = Instance->fields.masterDataBytes;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = lookup;
  *(_QWORD *)&v31.fields.fakeValue = masterDataBytes;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v31, 0LL);
  if ( !MasterData_object )
    goto LABEL_19;
  LimitAddIndividuality = ServantLimitAddMaster__GetLimitAddIndividuality(
                            (ServantLimitAddMaster_o *)MasterData_object,
                            (int32_t)Instance,
                            v13[4].fields.currentCryptoKey,
                            v13[10].fields.hiddenValue,
                            0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13[3], 0LL);
  if ( !v10 )
    goto LABEL_19;
  Individuality = ServantIndividualityMaster__GetIndividuality(
                    (ServantIndividualityMaster_o *)v10,
                    (int32_t)Instance,
                    v13[4].fields.currentCryptoKey,
                    0LL);
  v18 = (FollowerInfo_o *)sub_1B88658(int___TypeInfo, 0LL);
  UnionIndividuality = (FollowerInfo_o *)FollowerInfo__GetUnionIndividuality(
                                           v18,
                                           (System_Int32_array *)v18,
                                           LimitAddIndividuality,
                                           v19);
  v22 = FollowerInfo__GetUnionIndividuality(
          UnionIndividuality,
          (System_Int32_array *)UnionIndividuality,
          Individuality,
          v21);
  ServantBaseIndividuality = (FollowerInfo_o *)FollowerInfo__GetServantBaseIndividuality(
                                                 this,
                                                 index,
                                                 returnSupportServantType,
                                                 v23);
  Instance = (DataManager_o *)FollowerInfo__GetUnionIndividuality(
                                ServantBaseIndividuality,
                                v22,
                                (System_Int32_array *)ServantBaseIndividuality,
                                v25);
  if ( !v11 )
    goto LABEL_19;
  v26 = (System_Int32_array *)Instance;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
         &entity,
         this->fields.npcFollowerSvtId,
         (const MethodInfo_311DB34 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      AddIndividuality = (FollowerInfo_o *)NpcServantFollowerIndividualityEntity__GetAddIndividuality(
                                             (NpcServantFollowerIndividualityEntity_o *)entity,
                                             0LL);
      Instance = (DataManager_o *)FollowerInfo__GetUnionIndividuality(
                                    AddIndividuality,
                                    v26,
                                    (System_Int32_array *)AddIndividuality,
                                    v28);
      if ( entity )
        return NpcServantFollowerIndividualityEntity__GetExcludedIndividuality(
                 (NpcServantFollowerIndividualityEntity_o *)entity,
                 (System_Int32_array *)Instance,
                 0LL);
    }
LABEL_19:
    sub_1B8880C(Instance, v8);
  }
  return v26;
}


int32_t __fastcall FollowerInfo__GetReturnTypeByQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A5AD46 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD46 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  return Entity && QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0LL);
}


System_Int32_array *__fastcall FollowerInfo__GetServantBaseIndividuality(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v7; // x8
  __int64 v8; // x21
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  __int64 v13; // x19
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5AD48 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD48 = 1;
  }
  if ( (index & 0x80000000) != 0 )
    return 0LL;
  v7 = 48LL;
  if ( !returnSupportServantType )
    v7 = 40LL;
  v8 = *(__int64 *)((char *)&this->klass + v7);
  if ( !v8 || *(_DWORD *)(v8 + 24) <= index )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( *(_DWORD *)(v8 + 24) <= (unsigned int)index )
    sub_1B88814(Instance, v10);
  v11 = *(_QWORD *)(v8 + 8LL * (unsigned int)index + 32);
  if ( !v11 )
    goto LABEL_17;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = *(_QWORD *)(v11 + 48);
  v13 = *(_QWORD *)(v11 + 56);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v14;
  *(_QWORD *)&v16.fields.fakeValue = v13;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v12
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v12,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_17:
    sub_1B8880C(Instance, v10);
  }
  return (System_Int32_array *)Instance[11].klass;
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
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4A5AD49 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Union_int___);
    byte_4A5AD49 = 1;
  }
  if ( !addIndividualities || !*(_QWORD *)&addIndividualities->max_length )
    return targetIndividualities;
  v6 = System_Linq_Enumerable__Union_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)targetIndividualities,
         (System_Collections_Generic_IEnumerable_TSource__o *)addIndividualities,
         (const MethodInfo_2EBC408 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v6,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall FollowerInfo__GetUseStatus(FollowerInfo_o *this, const MethodInfo *method)
{
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  __int64 v3; // x9
  UserRecommendSupportInfo_o *v4; // x8

  userRecommendSupportHash = this->fields.userRecommendSupportHash;
  if ( !userRecommendSupportHash )
    return 0;
  v3 = *(_QWORD *)&userRecommendSupportHash->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B88814(this, method);
  v4 = userRecommendSupportHash->m_Items[0];
  if ( v4 )
    return v4->fields.useStatus;
  else
    return 0;
}


UserRecommendSupportInfo_array *__fastcall FollowerInfo__GetUserRecommendSupportInfo(
        FollowerInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.userRecommendSupportHash;
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

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
    sub_1B88814(this, questRestrictionInfo);
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, questRestrictionInfo);
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

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
    sub_1B88814(this, questRestrictionInfo);
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, questRestrictionInfo);
  return ServantLeaderInfo__IsUniqueIndividualityRestriction((ServantLeaderInfo_o *)this, questRestrictionInfo, 0LL);
}


bool __fastcall FollowerInfo__IsUniqueIndividualityRestriction_38919672(
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

  v7 = 48LL;
  if ( !returnSupportServantType )
    v7 = 40LL;
  v8 = *(__int64 *)((char *)&this->klass + v7);
  if ( !v8 )
    goto LABEL_7;
  if ( *(_DWORD *)(v8 + 24) <= (unsigned int)index )
    sub_1B88814(this, questRestrictionInfo);
  this = *(FollowerInfo_o **)(v8 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, questRestrictionInfo);
  return ServantLeaderInfo__IsUniqueIndividualityRestriction_40496588(
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
  int32_t v3; // w3
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  FollowerInfo_o *v5; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x8

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    goto LABEL_8;
  if ( !userSvtLeaderHash->max_length )
    goto LABEL_9;
  v5 = this;
  this = (FollowerInfo_o *)userSvtLeaderHash->m_Items[0];
  if ( !this
    || (this[1].monitor = equipTargetInfo,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this[1].monitor,
          (int32_t)equipTargetInfo,
          (int32_t)method,
          v3),
        (eventUserSvtLeaderHash = v5->fields.eventUserSvtLeaderHash) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(this, equipTargetInfo);
  }
  if ( !eventUserSvtLeaderHash->max_length )
LABEL_9:
    sub_1B88814(this, equipTargetInfo);
  this = (FollowerInfo_o *)eventUserSvtLeaderHash->m_Items[0];
  if ( !this )
    goto LABEL_8;
  this[1].monitor = equipTargetInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this[1].monitor, (int32_t)equipTargetInfo, v7, v8);
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

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
    sub_1B88814(this, index);
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_1B8880C(this, index);
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

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
    sub_1B88814(this, index);
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_1B8880C(this, index);
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

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
    sub_1B88814(this, index);
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_1B8880C(this, index);
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
    sub_1B88814(this, index);
  v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)index + 32);
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

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
    sub_1B88814(this, setupInfo);
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, setupInfo);
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
    sub_1B88814(this, index);
  v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)index + 32);
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

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_8;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
    sub_1B88814(this, index);
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 144)) == 0 )
LABEL_8:
    sub_1B8880C(this, index);
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
  if ( (byte_4A5AD4D & 1) == 0 )
  {
    this = (FollowerInfo_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5AD4D = 1;
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
    sub_1B88814(this, *(_QWORD *)&index);
  v10 = *(_QWORD *)(v8 + 8LL * (unsigned int)index + 32);
  if ( !v10 )
    return 0;
  v11 = *(_QWORD *)(v10 + 144);
  if ( !v11 )
    return 0;
  v13 = *(_QWORD *)(v11 + 56);
  v12 = *(_QWORD *)(v11 + 64);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v13;
  *(_QWORD *)&v15.fields.fakeValue = v12;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
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
    sub_1B88814(this, index);
  v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)index + 32);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_4A5AD4C & 1) == 0 )
  {
    this = (FollowerInfo_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5AD4C = 1;
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
    sub_1B88814(this, *(_QWORD *)&index);
  v10 = *(_QWORD *)(v8 + 8LL * (unsigned int)index + 32);
  if ( !v10 )
    return 0LL;
  v11 = *(_QWORD *)(v10 + 144);
  if ( !v11 )
    return 0LL;
  v12 = *(_OWORD *)(v11 + 40);
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)(v11 + 24);
  *(_OWORD *)&v15.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v14, 0LL);
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

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
    sub_1B88814(this, setupInfo);
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, setupInfo);
  return ServantLeaderInfo__getEventUpVal((ServantLeaderInfo_o *)this, setupInfo, 0LL);
}


bool __fastcall FollowerInfo__getEventUpVal_38919160(
        FollowerInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8

  v6 = 48LL;
  if ( !returnSupportServantType )
    v6 = 40LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
    goto LABEL_7;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
    sub_1B88814(this, eventUpVallInfo);
  this = *(FollowerInfo_o **)(v7 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, eventUpVallInfo);
  return ServantLeaderInfo__getEventUpVal_40494464((ServantLeaderInfo_o *)this, eventUpVallInfo, setupInfo, 0LL);
}


bool __fastcall FollowerInfo__getEventUpVal_38919232(
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

  v8 = 48LL;
  if ( !returnSupportServantType )
    v8 = 40LL;
  v9 = *(__int64 *)((char *)&this->klass + v8);
  if ( !v9 )
    goto LABEL_7;
  if ( *(_DWORD *)(v9 + 24) <= (unsigned int)index )
    sub_1B88814(this, eventUpVallInfo);
  this = *(FollowerInfo_o **)(v9 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, eventUpVallInfo);
  return ServantLeaderInfo__getEventUpVal_40495452(
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
    sub_1B88814(this, index);
  v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)index + 32);
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

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
    sub_1B88814(this, index);
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_1B8880C(this, index);
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

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
    sub_1B88814(this, index);
  this = *(FollowerInfo_o **)(v5 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, index);
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

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
    sub_1B88814(this, index);
  this = *(FollowerInfo_o **)(v5 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, index);
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

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
    sub_1B88814(this, index);
  v6 = *(_QWORD *)(v5 + 8LL * index + 32);
  if ( !v6 )
LABEL_7:
    sub_1B8880C(this, index);
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


int32_t __fastcall FollowerInfo__getIndex(
        FollowerInfo_o *this,
        int32_t classId,
        int32_t returnSupportServantType,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v9; // x8
  __int64 v10; // x22
  _BOOL8 IsNpc; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  __int64 v15; // x21
  __int64 v16; // x10
  __int64 v17; // x19
  __int64 v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A5AD47 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5AD47 = 1;
  }
  v9 = 48LL;
  if ( !returnSupportServantType )
    v9 = 40LL;
  v10 = *(__int64 *)((char *)&this->klass + v9);
  if ( !v10 )
    return -1;
  IsNpc = Follower__IsNpc(this->fields.type, 0LL);
  v13 = *(_QWORD *)(v10 + 24);
  if ( IsNpc )
  {
    if ( v13 )
      return 0;
    return -1;
  }
  if ( (int)v13 < 1 )
    return -1;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v10 + 32 + 8 * v15);
    if ( supportDeckId < 1 )
    {
      if ( !v16 )
LABEL_24:
        sub_1B8880C(IsNpc, v12);
    }
    else
    {
      if ( !v16 )
        goto LABEL_24;
      if ( *(_DWORD *)(v16 + 16) != supportDeckId )
        goto LABEL_17;
    }
    if ( *(_DWORD *)(v16 + 32) == classId )
      break;
LABEL_17:
    if ( (unsigned int)*(_QWORD *)(v10 + 24) == ++v15 )
      return -1;
  }
  v18 = *(_QWORD *)(v16 + 48);
  v17 = *(_QWORD *)(v16 + 56);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v18;
  *(_QWORD *)&v19.fields.fakeValue = v17;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL) < 1 )
    return -1;
  else
    return v15;
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
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x10

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( v6 && (int)*(_QWORD *)(v6 + 24) >= 1 )
  {
    v7 = 0LL;
    v8 = (unsigned int)*(_QWORD *)(v6 + 24);
    v9 = v6 + 32;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 8 * v7);
      if ( supportDeckId < 1 )
        break;
      if ( !v10 )
        goto LABEL_15;
      if ( *(_DWORD *)(v10 + 16) == supportDeckId )
        goto LABEL_11;
LABEL_12:
      if ( v8 == ++v7 )
        goto LABEL_13;
    }
    if ( !v10 )
LABEL_15:
      sub_1B8880C(v7, classId);
LABEL_11:
    if ( *(_DWORD *)(v10 + 32) == classId )
      return v7;
    goto LABEL_12;
  }
LABEL_13:
  LODWORD(v7) = -1;
  return v7;
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
    sub_1B88814(this, index);
  v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)index + 32);
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
    sub_1B88814(this, index);
  v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)index + 32);
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
  __int64 v5; // x20
  int32_t v6; // w8
  __int64 v8; // x21
  ServantLeaderInfo_o **v9; // x21
  __int64 v10; // t1

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
    goto LABEL_13;
  v8 = v5 + 8LL * (unsigned int)index;
  v10 = *(_QWORD *)(v8 + 32);
  v9 = (ServantLeaderInfo_o **)(v8 + 32);
  if ( !v10 )
    return 0;
  this = (FollowerInfo_o *)Follower__IsNpc(this->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
LABEL_13:
    sub_1B88814(this, *(_QWORD *)&index);
  if ( !*v9 )
    sub_1B8880C(0LL, *(_QWORD *)&index);
  return ServantLeaderInfo__getLevelMax(*v9, 0LL);
}


bool __fastcall FollowerInfo__getQuestRestriction(
        FollowerInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *IsNpc; // x0
  __int64 v10; // x1
  __int64 v12; // x8
  __int64 v13; // x8

  IsNpc = (ServantLeaderInfo_o *)Follower__IsNpc(this->fields.type, 0LL);
  if ( ((unsigned __int8)IsNpc & 1) != 0 )
    return 0;
  v12 = 48LL;
  if ( !returnSupportServantType )
    v12 = 40LL;
  v13 = *(__int64 *)((char *)&this->klass + v12);
  if ( !v13 )
    goto LABEL_9;
  if ( *(_DWORD *)(v13 + 24) <= (unsigned int)index )
    sub_1B88814(IsNpc, v10);
  IsNpc = *(ServantLeaderInfo_o **)(v13 + 8LL * index + 32);
  if ( !IsNpc )
LABEL_9:
    sub_1B8880C(IsNpc, v10);
  return ServantLeaderInfo__getQuestRestriction(IsNpc, questRestrictionInfo, 0LL);
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

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
    sub_1B88814(this, setupInfo);
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, setupInfo);
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
    sub_1B88814(this, index);
  return *(ServantLeaderInfo_o **)(v5 + 8LL * (unsigned int)index + 32);
}


System_Int32_array *__fastcall FollowerInfo__getSkillIdList(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
    sub_1B88814(this, index);
  this = *(FollowerInfo_o **)(v5 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, index);
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

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
    sub_1B88814(this, skillInfoList);
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, skillInfoList);
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

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
    sub_1B88814(this, index);
  this = *(FollowerInfo_o **)(v5 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, index);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v6 = this;
  if ( (byte_4A5AD4B & 1) == 0 )
  {
    this = (FollowerInfo_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5AD4B = 1;
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
    sub_1B88814(this, *(_QWORD *)&index);
  v10 = *(_QWORD *)(v8 + 8LL * (unsigned int)index + 32);
  if ( !v10 )
    return 0;
  v12 = *(_QWORD *)(v10 + 48);
  v11 = *(_QWORD *)(v10 + 56);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v12;
  *(_QWORD *)&v14.fields.fakeValue = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
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

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
    sub_1B88814(this, tdInfo);
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, tdInfo);
  return ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)this, tdInfo, 0LL);
}


bool __fastcall FollowerInfo__getTreasureDeviceInfo_38919824(
        FollowerInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v6; // x8
  __int64 v7; // x8

  v6 = 48LL;
  if ( !returnSupportServantType )
    v6 = 40LL;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  if ( !v7 )
    goto LABEL_7;
  if ( *(_DWORD *)(v7 + 24) <= (unsigned int)index )
    sub_1B88814(this, tdLv);
  this = *(FollowerInfo_o **)(v7 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, tdLv);
  return ServantLeaderInfo__getTreasureDeviceInfo_40497284((ServantLeaderInfo_o *)this, tdLv, tdMaxLv, 0LL);
}


int32_t __fastcall FollowerInfo__getTreasureDeviceLevelIcon(
        FollowerInfo_o *this,
        int32_t index,
        int32_t returnSupportServantType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v5; // x8

  v4 = 48LL;
  if ( !returnSupportServantType )
    v4 = 40LL;
  v5 = *(__int64 *)((char *)&this->klass + v4);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(v5 + 24) <= (unsigned int)index )
    sub_1B88814(this, index);
  this = *(FollowerInfo_o **)(v5 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, index);
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

  v5 = 48LL;
  if ( !returnSupportServantType )
    v5 = 40LL;
  v6 = *(__int64 *)((char *)&this->klass + v5);
  if ( !v6 )
    goto LABEL_7;
  if ( *(_DWORD *)(v6 + 24) <= (unsigned int)index )
    sub_1B88814(this, questRestrictionInfo);
  this = *(FollowerInfo_o **)(v6 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, questRestrictionInfo);
  return ServantLeaderInfo__getUniqueSvtRestriction((ServantLeaderInfo_o *)this, questRestrictionInfo, 0LL);
}


bool __fastcall FollowerInfo__getUniqueSvtRestriction_38919520(
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

  v7 = 48LL;
  if ( !returnSupportServantType )
    v7 = 40LL;
  v8 = *(__int64 *)((char *)&this->klass + v7);
  if ( !v8 )
    goto LABEL_7;
  if ( *(_DWORD *)(v8 + 24) <= (unsigned int)index )
    sub_1B88814(this, questRestrictionInfo);
  this = *(FollowerInfo_o **)(v8 + 8LL * index + 32);
  if ( !this )
LABEL_7:
    sub_1B8880C(this, questRestrictionInfo);
  return ServantLeaderInfo__getUniqueSvtRestriction_40496256(
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

  userSvtLeaderHash = this->fields.userSvtLeaderHash;
  if ( !userSvtLeaderHash )
    return 0LL;
  v3 = *(_QWORD *)&userSvtLeaderHash->max_length;
  if ( !v3 )
    return 0LL;
  if ( !(_DWORD)v3 )
    sub_1B88814(this, method);
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
    sub_1B88814(this, index);
  v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)index + 32);
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
  return Follower__IsNpc(this->fields.type, 0LL);
}