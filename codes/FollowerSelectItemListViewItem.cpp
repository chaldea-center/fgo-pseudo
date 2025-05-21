// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItem___ctor(
        FollowerSelectItemListViewItem_o *this,
        int32_t index,
        int32_t index2,
        FollowerInfo_o *followerInfo,
        int32_t followerClassId,
        bool isRecommended,
        FollowerSelectItemListViewManager_FollowerSelectItemOption_o *option,
        bool isRecommendedUser,
        int32_t supportDeckId,
        int32_t deckPriority,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        bool isReleasedClassBoard,
        bool isRecommendFollower,
        bool isGrandSupport,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  bool v21; // w22
  __int64 v22; // x1
  __int64 v23; // x1
  IconLabelInfo_o *v24; // x27
  IconLabelInfo_o *v25; // x27
  System_Collections_Generic_Dictionary_int__int__o *v26; // x22
  const MethodInfo *v27; // x2

  v21 = isRecommended;
  if ( (byte_4B3F612 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int___ctor___76975248, *(_QWORD *)&index);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v22);
    sub_1BDB878(&IconLabelInfo_TypeInfo, v23);
    byte_4B3F612 = 1;
  }
  v24 = (IconLabelInfo_o *)sub_1BDBAC4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo1 = v24;
  sub_1BDB81C(&this->fields.iconLabelInfo1);
  v25 = (IconLabelInfo_o *)sub_1BDBAC4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo2 = v25;
  sub_1BDB81C(&this->fields.iconLabelInfo2);
  *(_QWORD *)&this->fields.openClassBoardNum = -1LL;
  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
  this->fields.classIndex = index2;
  this->fields.followerInfo = followerInfo;
  sub_1BDB81C(&this->fields.followerInfo);
  this->fields._Option_k__BackingField = option;
  sub_1BDB81C(&this->fields._Option_k__BackingField);
  this->fields.isRecommended = v21;
  this->fields.supportDeckId = supportDeckId;
  this->fields.deckPriority = deckPriority;
  this->fields._isRecommendedUser_k__BackingField = isRecommendedUser;
  this->fields._IsRecommendFollower_k__BackingField = isRecommendFollower;
  if ( classBoardMaxNumDictionary )
  {
    v26 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_53682052(
      v26,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_3331F84 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___76975248);
  }
  else
  {
    v26 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v26;
  sub_1BDB81C(&this->fields.classBoardMaxNumDictionary);
  this->fields._IsReleasedClassBoard_k__BackingField = isReleasedClassBoard;
  this->fields._IsGrandSupport_k__BackingField = isGrandSupport;
  this->fields._GrandGraphId_k__BackingField = grandGraphId;
  FollowerSelectItemListViewItem__AnalyzeEntity(this, followerClassId, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItem__AnalyzeEntity(
        FollowerSelectItemListViewItem_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct ServantEntity_o **p_servantEntity; // x22
  __int64 SvtId; // x0
  const MethodInfo *v14; // x1
  FollowerInfo_o *followerInfo; // x25
  int32_t DisplayServantType; // w0
  int32_t Index; // w0
  FollowerInfo_o *v18; // x25
  int32_t v19; // w23
  const MethodInfo *v20; // x1
  struct FollowerInfo_o *v21; // x8
  int32_t v22; // w23
  const MethodInfo *v23; // x1
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v24; // x8
  FollowerInfo_o *v25; // x24
  QuestRestrictionInfo_o *v26; // x25
  int32_t followerIndex; // w26
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v28; // x8
  FollowerInfo_o *v29; // x24
  QuestRestrictionInfo_o *v30; // x25
  int32_t v31; // w26
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v32; // x8
  FollowerInfo_o *v33; // x24
  QuestRestrictionInfo_o *v34; // x25
  int32_t v35; // w26
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v36; // x8
  FollowerInfo_o *v37; // x24
  QuestRestrictionInfo_o *v38; // x25
  int32_t v39; // w26
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v42; // x8
  struct QuestRestrictionInfo_o *v43; // x8
  Il2CppObject *Master_object; // x24
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v45; // x8
  struct QuestRestrictionInfo_o *v46; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v47; // x8
  struct QuestRestrictionInfo_o *v48; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // x23
  struct FollowerInfo_o *v52; // x9
  int32_t classId; // w24
  ClassBoardInfo_array *userClassBoardInfo; // x22
  _BOOL4 IsGrandSupport_k__BackingField; // w28
  FollowerInfo_o *v56; // x20
  int32_t v57; // w21
  struct FollowerInfo_o *v58; // x8
  TblFriendMaster_o *v59; // x20
  int32_t type; // w9
  int32_t v61; // w1
  UserEventDataLostEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B3F613 & 1) == 0 )
  {
    sub_1BDB878(&ClassBoardUtility_TypeInfo, *(_QWORD *)&followerClassId);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_TblFriendMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B3F613 = 1;
  }
  entity = 0LL;
  this->fields.isNpc = 0;
  this->fields.followerClassId = followerClassId;
  this->fields.servantEntity = 0LL;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BDB81C(&this->fields.servantEntity);
  *(_WORD *)&this->fields.isUniqueSvtRestriction = 0;
  *(_WORD *)&this->fields.isServantEventUpVal = 0;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValItemList = 0LL;
  sub_1BDB81C(&this->fields.eventUpValItemList);
  this->fields.friendPointCampaignEntity = 0LL;
  SvtId = sub_1BDB81C(&this->fields.friendPointCampaignEntity);
  *(_QWORD *)&this->fields.openClassBoardNum = -1LL;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields.isMaxOpenClassBoard = 0;
  followerInfo = this->fields.followerInfo;
  this->fields._IsSlotRestriction_k__BackingField = 0;
  this->fields._IsGrandSvt_k__BackingField = 0;
  this->fields._IsClassRestriction_k__BackingField = 0;
  if ( followerInfo )
  {
    DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, v14);
    Index = FollowerInfo__getIndex(
              followerInfo,
              followerClassId,
              DisplayServantType,
              this->fields.supportDeckId,
              this->fields._GrandGraphId_k__BackingField,
              0LL);
    v18 = this->fields.followerInfo;
    v19 = Index;
    this->fields.followerIndex = Index;
    SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v20);
    if ( !v18 )
      goto LABEL_70;
    SvtId = FollowerInfo__getSvtId(v18, v19, SvtId, 0LL);
    if ( (int)SvtId < 1 )
    {
      Option_k__BackingField = this->fields._Option_k__BackingField;
      if ( !Option_k__BackingField )
        goto LABEL_70;
      questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        LOBYTE(questRestrictionInfo) = questRestrictionInfo->fields.isRestriction;
      this->fields.isQuestRestriction = (char)questRestrictionInfo;
    }
    else
    {
      v21 = this->fields.followerInfo;
      if ( !v21 )
        goto LABEL_70;
      v22 = SvtId;
      this->fields.isNpc = Follower__IsNpc(v21->fields.type, 0LL);
      this->fields.friendPointCampaignEntity = FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(this, v23);
      sub_1BDB81C(&this->fields.friendPointCampaignEntity);
      SvtId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SvtId )
        goto LABEL_70;
      SvtId = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)SvtId,
                         (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !SvtId )
        goto LABEL_70;
      this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)SvtId,
                                                               v22,
                                                               (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      SvtId = sub_1BDB81C(&this->fields.servantEntity);
      v24 = this->fields._Option_k__BackingField;
      if ( !v24 )
        goto LABEL_70;
      v25 = this->fields.followerInfo;
      v26 = v24->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v14);
      if ( !v25 )
        goto LABEL_70;
      SvtId = FollowerInfo__GetQuestRestriction(v25, v26, followerIndex, SvtId, 0LL);
      v28 = this->fields._Option_k__BackingField;
      this->fields.isQuestRestriction = SvtId & 1;
      if ( !v28 )
        goto LABEL_70;
      v29 = this->fields.followerInfo;
      v30 = v28->fields.questRestrictionInfo;
      v31 = this->fields.followerIndex;
      SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v14);
      if ( !v29 )
        goto LABEL_70;
      SvtId = FollowerInfo__getUniqueSvtRestriction(v29, v30, v31, SvtId, 0LL);
      v32 = this->fields._Option_k__BackingField;
      this->fields.isUniqueSvtRestriction = SvtId & 1;
      if ( !v32 )
        goto LABEL_70;
      v33 = this->fields.followerInfo;
      v34 = v32->fields.questRestrictionInfo;
      v35 = this->fields.followerIndex;
      SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v14);
      if ( !v33 )
        goto LABEL_70;
      SvtId = FollowerInfo__IsUniqueIndividualityRestriction(v33, v34, v35, SvtId, 0LL);
      v36 = this->fields._Option_k__BackingField;
      this->fields.isUniqueIndividualityRestriction = SvtId & 1;
      if ( !v36 )
        goto LABEL_70;
      v37 = this->fields.followerInfo;
      v38 = v36->fields.questRestrictionInfo;
      v39 = this->fields.followerIndex;
      SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v14);
      if ( !v37 )
        goto LABEL_70;
      this->fields._IsClassRestriction_k__BackingField = FollowerInfo__IsClassRestriction(v37, v38, v39, SvtId, 0LL);
      this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v40);
      FollowerSelectItemListViewItem__SetEventUpInfo(this, v41);
      v42 = this->fields._Option_k__BackingField;
      if ( !v42 )
        goto LABEL_70;
      v43 = v42->fields.questRestrictionInfo;
      if ( v43 && v43->fields.isDataLostBattle )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B3ED56 )
        {
          sub_1BDB878(&NetworkManager_TypeInfo, v14);
          byte_4B3ED56 = 1;
        }
        SvtId = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          SvtId = (__int64)NetworkManager_TypeInfo;
        }
        v45 = this->fields._Option_k__BackingField;
        if ( !v45 )
          goto LABEL_70;
        v46 = v45->fields.questRestrictionInfo;
        if ( !v46 || !Master_object )
          goto LABEL_70;
        SvtId = UserEventDataLostMaster__TryGetEntity(
                  (UserEventDataLostMaster_o *)Master_object,
                  &entity,
                  *(_QWORD *)(*(_QWORD *)(SvtId + 184) + 64LL),
                  v46->fields.dataLostBattleId,
                  0LL);
        if ( (SvtId & 1) != 0 )
        {
          SvtId = (__int64)entity;
          if ( !entity )
            goto LABEL_70;
          SvtId = UserEventDataLostEntity__IsRestart(entity, v22, 0LL);
          if ( !entity )
            goto LABEL_70;
          if ( (SvtId & 1) != 0 )
          {
            SvtId = UserEventDataLostEntity__GetTimesToRestart(entity, v22, 0LL);
            this->fields._TimesToRestart_k__BackingField = SvtId;
          }
          else
          {
            SvtId = UserEventDataLostEntity__IsDataLost(entity, v22, 0LL);
            if ( (SvtId & 1) != 0 )
              this->fields._IsDataLost_k__BackingField = 1;
          }
        }
      }
      classBoardMaxNumDictionary = this->fields.classBoardMaxNumDictionary;
      if ( classBoardMaxNumDictionary )
      {
        if ( !*p_servantEntity )
          goto LABEL_70;
        v52 = this->fields.followerInfo;
        if ( !v52 )
          goto LABEL_70;
        classId = (*p_servantEntity)->fields.classId;
        userClassBoardInfo = v52->fields.userClassBoardInfo;
        IsGrandSupport_k__BackingField = this->fields._IsGrandSupport_k__BackingField;
        if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
        ClassBoardUtility__SetOpenClassScoreNum(
          &this->fields.openClassBoardNum,
          &this->fields.openGrandClassBoardNum,
          &this->fields.isMaxOpenClassBoard,
          &this->fields.isMaxOpenGrandClassBoard,
          classId,
          userClassBoardInfo,
          classBoardMaxNumDictionary,
          IsGrandSupport_k__BackingField,
          0LL);
      }
      else
      {
        *(_QWORD *)&this->fields.openClassBoardNum = -1LL;
        *(_WORD *)&this->fields.isMaxOpenClassBoard = 0;
      }
      v56 = this->fields.followerInfo;
      v57 = this->fields.followerIndex;
      SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v14);
      if ( !v56 )
        goto LABEL_70;
      SvtId = (__int64)FollowerInfo__getServantLeaderInfo(v56, v57, SvtId, 0LL);
      if ( !SvtId )
        goto LABEL_70;
      *(_QWORD *)&this->fields.hp = *(_QWORD *)(SvtId + 76);
      this->fields._IsGrandSvt_k__BackingField = ServantLeaderInfo__get_IsGrandSvt((ServantLeaderInfo_o *)SvtId, 0LL);
    }
    SvtId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SvtId )
    {
      SvtId = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)SvtId,
                         (const MethodInfo_303395C *)Method_DataManager_GetMasterData_TblFriendMaster___);
      v58 = this->fields.followerInfo;
      if ( v58 )
      {
        v59 = (TblFriendMaster_o *)SvtId;
        if ( v58->fields.type == 5
          || SvtId
          && (SvtId = TblFriendMaster__isMessageDisp((TblFriendMaster_o *)SvtId, 3, v58->fields.userId, 0LL),
              v58 = this->fields.followerInfo,
              this->fields.isMessageDisp = SvtId & 1,
              v58) )
        {
          type = v58->fields.type;
          if ( (type | 4) == 5 )
          {
            if ( !v59 )
              goto LABEL_70;
            if ( type == 5 )
              v61 = 9;
            else
              v61 = 3;
            this->fields.isLockUser = TblFriendMaster__IsLockUser(v59, v61, v58->fields.userId, 0LL);
          }
          SvtId = (__int64)this->fields.iconLabelInfo1;
          if ( SvtId )
          {
            IconLabelInfo__Clear((IconLabelInfo_o *)SvtId, 0LL);
            SvtId = (__int64)this->fields.iconLabelInfo2;
            if ( SvtId )
            {
              IconLabelInfo__Clear((IconLabelInfo_o *)SvtId, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_70:
    sub_1BDBAD4(SvtId, v14);
  }
  v47 = this->fields._Option_k__BackingField;
  this->fields.followerIndex = 0;
  if ( !v47 )
    goto LABEL_70;
  v48 = v47->fields.questRestrictionInfo;
  if ( v48 )
    LOBYTE(v48) = v48->fields.isRestriction;
  this->fields.isQuestRestriction = (char)v48;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall FollowerSelectItemListViewItem__CalculatePriorityKindSortValue(
        FollowerSelectItemListViewItem_o *this,
        int32_t priorityKind,
        EquipTargetInfo_o *equipInfo,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x22
  const MethodInfo *v14; // x3
  int32_t v15; // w8
  int64_t result; // x0
  System_Collections_Generic_Dictionary_object__int__o *v17; // x20
  __int64 v18; // x22
  __int64 *v19; // x21
  int32_t Item; // w8
  BalanceConfig_c *v21; // x0
  int32_t limitCount; // w20
  __int64 v23; // x19
  __int64 v24; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B3F617 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&priorityKind);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_1339/*"2"*/, v9);
    sub_1BDB878(&StringLiteral_1194/*"1"*/, v10);
    sub_1BDB878(&StringLiteral_1142/*"0"*/, v11);
    byte_4B3F617 = 1;
  }
  if ( !equipInfo )
    return 0LL;
  v13 = *(_QWORD *)&equipInfo->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&equipInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v13;
  *(_QWORD *)&v25.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v25, 0LL);
  result = 0LL;
  if ( priorityKind )
  {
    if ( v15 >= 1 )
    {
      result = (int64_t)FollowerSelectItemListViewItem__GetValuesDictionary(0LL, priorityKind, equipInfo, v14);
      if ( result )
      {
        v17 = (System_Collections_Generic_Dictionary_object__int__o *)result;
        if ( (unsigned int)(priorityKind - 2) < 4 )
        {
          if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)result,
                 (Il2CppObject *)StringLiteral_1142/*"0"*/,
                 (const MethodInfo_3397484 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
            && System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 v17,
                 (Il2CppObject *)StringLiteral_1194/*"1"*/,
                 (const MethodInfo_3397484 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                   v17,
                   (Il2CppObject *)StringLiteral_1142/*"0"*/,
                   (const MethodInfo_3397210 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
            {
              v18 = 100000LL;
            }
            else
            {
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v17,
                     (Il2CppObject *)StringLiteral_1142/*"0"*/,
                     (const MethodInfo_3397210 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
              {
                v24 = 0LL;
LABEL_28:
                limitCount = equipInfo->fields.limitCount;
                v21 = BalanceConfig_TypeInfo;
                v23 = v24 + 10LL * (equipInfo->fields.atk + equipInfo->fields.hp);
                if ( BalanceConfig_TypeInfo->_2.cctor_finished )
                  return v23 | (limitCount >= v21->static_fields->ServantLimitMax);
                goto LABEL_20;
              }
              v18 = 100000000LL;
            }
            v24 = v18
                * System_Collections_Generic_Dictionary_object__int___get_Item(
                    v17,
                    (Il2CppObject *)StringLiteral_1194/*"1"*/,
                    (const MethodInfo_3397210 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            goto LABEL_28;
          }
          return 0LL;
        }
        if ( priorityKind == 6 )
        {
          v19 = &StringLiteral_1339/*"2"*/;
LABEL_18:
          if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)result,
                 (Il2CppObject *)*v19,
                 (const MethodInfo_3397484 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     v17,
                     (Il2CppObject *)*v19,
                     (const MethodInfo_3397210 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v21 = BalanceConfig_TypeInfo;
            limitCount = equipInfo->fields.limitCount;
            v23 = 100000LL * Item + 10LL * (equipInfo->fields.atk + equipInfo->fields.hp);
            if ( BalanceConfig_TypeInfo->_2.cctor_finished )
              return v23 | (limitCount >= v21->static_fields->ServantLimitMax);
LABEL_20:
            j_il2cpp_runtime_class_init_0(v21);
            v21 = BalanceConfig_TypeInfo;
            return v23 | (limitCount >= v21->static_fields->ServantLimitMax);
          }
          return 0LL;
        }
        if ( priorityKind == 1 )
        {
          v19 = &StringLiteral_1142/*"0"*/;
          goto LABEL_18;
        }
        return 0LL;
      }
    }
  }
  return result;
}


bool __fastcall FollowerSelectItemListViewItem__CheckSlotRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v2; // x19
  __int64 v3; // x1
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  FollowerInfo_o *followerInfo; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  int32_t followerIndex; // w22
  bool v8; // w8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v9; // x8
  int sortStr1; // w21
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v12; // x8
  QuestRestrictionInfo_o *v13; // x8
  int32_t sortStr1_high; // w20
  const MethodInfo *v15; // x1
  FollowerInfo_o *v16; // x21
  int32_t v17; // w22
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v18; // x8
  ServantLeaderInfo_o *v19; // x21
  QuestRestrictionInfo_o *v20; // x19
  struct System_String_o *v21; // x22
  int64_t sortValue1; // x23
  int32_t v23; // w0
  int32_t limitCount; // w22
  int32_t v25; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v2 = this;
  if ( (byte_4B3F614 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (FollowerSelectItemListViewItem_o *)sub_1BDB878(
                                                 &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                                 v3);
    byte_4B3F614 = 1;
  }
  Option_k__BackingField = v2->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    goto LABEL_26;
  followerInfo = v2->fields.followerInfo;
  questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
  followerIndex = v2->fields.followerIndex;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v2, method);
  if ( !followerInfo )
    goto LABEL_26;
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__IsSlotRestriction(
                                               followerInfo,
                                               questRestrictionInfo,
                                               followerIndex,
                                               (int32_t)this,
                                               0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  v9 = v2->fields._Option_k__BackingField;
  if ( !v9 )
    goto LABEL_26;
  this = (FollowerSelectItemListViewItem_o *)v9->fields.questRestrictionInfo;
  if ( !this )
    goto LABEL_26;
  if ( QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)this, 0LL) )
    return 0;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_26;
  sortStr1 = (int)this->fields.sortStr1;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_26;
  v8 = 0;
  if ( sortStr1 < 1 || v2->fields.isNpc )
    return v8;
  v12 = v2->fields._Option_k__BackingField;
  if ( !v12 )
    goto LABEL_26;
  v13 = v12->fields.questRestrictionInfo;
  if ( !v13 )
    goto LABEL_26;
  sortStr1_high = HIDWORD(this->fields.sortStr1);
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_42377380(v13, sortStr1_high, 0LL) )
    return 0;
  v16 = v2->fields.followerInfo;
  v17 = v2->fields.followerIndex;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v2, v15);
  if ( !v16 )
    goto LABEL_26;
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getServantLeaderInfo(v16, v17, (int32_t)this, 0LL);
  v18 = v2->fields._Option_k__BackingField;
  if ( !v18 )
    goto LABEL_26;
  v19 = (ServantLeaderInfo_o *)this;
  if ( !this )
    goto LABEL_26;
  v20 = v18->fields.questRestrictionInfo;
  sortValue1 = this->fields.sortValue1;
  v21 = this->fields.sortStr1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = sortValue1;
  *(_QWORD *)&v26.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v26, 0LL);
  limitCount = v19->fields.limitCount;
  v25 = v23;
  this = (FollowerSelectItemListViewItem_o *)ServantLeaderInfo__getDispLimitCount(v19, 0LL);
  if ( !v20 )
LABEL_26:
    sub_1BDBAD4(this, method);
  return QuestRestrictionInfo__IsRestrictionServantIndividuality(
           v20,
           v25,
           limitCount,
           (int32_t)this,
           sortStr1_high,
           1,
           0LL);
}


bool __fastcall FollowerSelectItemListViewItem__ChkWholeFilter(
        FollowerSelectItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  if ( !sort )
    sub_1BDBAD4(this, 0LL);
  if ( !ListViewSort__GetFilter(sort, 19, 0LL) && !ListViewSort__GetFilter(sort, 18, 0LL)
    || this->fields.isEquipEventUpVal && ListViewSort__GetFilter(sort, 19, 0LL) )
  {
    return 1;
  }
  if ( this->fields.isServantEventUpVal )
    return ListViewSort__GetFilter(sort, 18, 0LL);
  return 0;
}


void __fastcall FollowerSelectItemListViewItem__Finalize(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall FollowerSelectItemListViewItem__GetAppendSkillInfo(
        FollowerSelectItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w23
  int32_t DisplayServantType; // w0
  BalanceConfig_c *v11; // x0

  if ( (byte_4B3F61F & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BDB878(&SkillInfo___TypeInfo, v7);
    byte_4B3F61F = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    followerIndex = this->fields.followerIndex;
    DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, (const MethodInfo *)skillInfoList);
    FollowerInfo__GetAppendSkillInfo(followerInfo, skillInfoList, followerIndex, DisplayServantType, isNpc, 0LL);
  }
  else
  {
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    *skillInfoList = (SkillInfo_array *)sub_1BDB920(
                                          SkillInfo___TypeInfo,
                                          (unsigned int)v11->static_fields->SvtAppendPassiveSkillListMax);
    sub_1BDB81C(skillInfoList);
  }
  return followerInfo != 0LL;
}


EventCampaignEntity_o *__fastcall FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  FollowerSelectItemListViewItem_o *v3; // x19
  __int64 v4; // x2
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v5; // x8
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x8
  int max_length; // w9
  int v8; // w11
  EventCampaignEntity_o *v9; // x10
  EventCampaignEntity_o *v10; // x13
  EventCampaignEntity_o *v11; // x12
  struct System_Int32_array *targetIds; // x14
  __int64 v13; // x15
  int v14; // w16

  Option_k__BackingField = this->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    goto LABEL_31;
  if ( !Option_k__BackingField->fields.friendPointCampaignEntityList )
    return 0LL;
  v3 = this;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_SvtId(this, method);
  if ( (int)this < 1 )
    return 0LL;
  v5 = v3->fields._Option_k__BackingField;
  if ( !v5 || (friendPointCampaignEntityList = v5->fields.friendPointCampaignEntityList) == 0LL )
LABEL_31:
    sub_1BDBAD4(this, method);
  max_length = friendPointCampaignEntityList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = 0LL;
    v10 = 0LL;
    while ( 1 )
    {
      if ( v8 == max_length )
        sub_1BDBADC(this, method, v4);
      v11 = friendPointCampaignEntityList->m_Items[v8];
      if ( !v11 )
        goto LABEL_31;
      targetIds = v11->fields.targetIds;
      if ( targetIds && (v13 = *(_QWORD *)&targetIds->max_length) != 0 )
      {
        if ( !v3->fields.isNpc && (!v9 || v11->fields.idx > v9->fields.idx) && (int)v13 >= 1 )
        {
          v14 = 0;
          while ( targetIds->m_Items[v14 + 1] != (_DWORD)this )
          {
            if ( (_DWORD)v13 == ++v14 )
              goto LABEL_22;
          }
          v9 = friendPointCampaignEntityList->m_Items[v8];
        }
      }
      else if ( !v10 || v11->fields.idx > v10->fields.idx )
      {
        goto LABEL_23;
      }
LABEL_22:
      v11 = v10;
LABEL_23:
      ++v8;
      v10 = v11;
      if ( v8 == max_length )
        goto LABEL_28;
    }
  }
  v11 = 0LL;
  v9 = 0LL;
LABEL_28:
  if ( v9 )
    return v9;
  else
    return v11;
}


System_String_o *__fastcall FollowerSelectItemListViewItem__GetFriendPointCampaignName(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  System_String_o *v12; // x19
  Il2CppObject *v13; // x0
  int v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B3F61E & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    sub_1BDB878(&StringLiteral_6459/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, v5);
    byte_4B3F61E = 1;
  }
  if ( !this->fields.friendPointCampaignEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_6459/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, 0LL);
  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( !friendPointCampaignEntity )
    sub_1BDBAD4(v6, v7);
  v12 = v6;
  v15 = friendPointCampaignEntity->fields.value / 1000;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v8, v9, v10);
  return System_String__Format(v12, v13, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewItem__GetFriendPointCampaignValue(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8

  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( friendPointCampaignEntity )
    return friendPointCampaignEntity->fields.value;
  else
    return 0;
}


int32_t __fastcall FollowerSelectItemListViewItem__GetFriendPointUpVal(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  int32_t DisplayServantType; // w0
  System_Collections_Generic_List_T__o *FriendPointUpTypeVals; // x0
  __int64 v10; // x1
  int v11; // w22
  int current_high; // w23
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  int32_t friendPointUpVal; // w8
  int friendPointUpMaxVal; // w9
  FollowerSelectItemListViewManager_FollowerSelectItemOption_Fields *p_fields; // t2
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B3F61D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__, v5);
    byte_4B3F61D = 1;
  }
  memset(&v18, 0, sizeof(v18));
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, method);
  FriendPointUpTypeVals = (System_Collections_Generic_List_T__o *)FollowerInfo__GetFriendPointUpTypeVals(
                                                                    followerInfo,
                                                                    followerIndex,
                                                                    DisplayServantType,
                                                                    0LL);
  if ( !FriendPointUpTypeVals )
    goto LABEL_19;
  System_Collections_Generic_List_ValueTuple_Int32Enum__int____GetEnumerator(
    &v18,
    FriendPointUpTypeVals,
    (const MethodInfo_3683798 *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
  v11 = 0;
  current_high = 0;
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____MoveNext(
            &v18,
            (const MethodInfo_3449954 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__) )
  {
    if ( LODWORD(v18.fields._current) == 123 )
    {
      v11 += HIDWORD(v18.fields._current);
    }
    else if ( LODWORD(v18.fields._current) == 104 && current_high < SHIDWORD(v18.fields._current) )
    {
      current_high = HIDWORD(v18.fields._current);
    }
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____Dispose(
    &v18,
    (const MethodInfo_3449950 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
  Option_k__BackingField = this->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
LABEL_19:
    sub_1BDBAD4(FriendPointUpTypeVals, v10);
  p_fields = &Option_k__BackingField->fields;
  friendPointUpVal = Option_k__BackingField->fields.friendPointUpVal;
  friendPointUpMaxVal = p_fields->friendPointUpMaxVal;
  if ( friendPointUpMaxVal >= current_high )
    return friendPointUpVal + v11;
  else
    return current_high + v11 - friendPointUpMaxVal + friendPointUpVal;
}


bool __fastcall FollowerSelectItemListViewItem__GetNpInfo(
        FollowerSelectItemListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x21
  int32_t followerIndex; // w22
  int32_t DisplayServantType; // w3
  TreasureDvcInfo_o *v9; // x20

  if ( (byte_4B3F61C & 1) == 0 )
  {
    sub_1BDB878(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4B3F61C = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    followerIndex = this->fields.followerIndex;
    DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, (const MethodInfo *)tdInfo);
    return FollowerInfo__getTreasureDeviceInfo(followerInfo, tdInfo, followerIndex, DisplayServantType, 0LL);
  }
  else
  {
    v9 = (TreasureDvcInfo_o *)sub_1BDBAC4(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_1BDB81C(tdInfo);
    return 0;
  }
}


bool __fastcall FollowerSelectItemListViewItem__GetSkillInfo(
        FollowerSelectItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w22
  int32_t DisplayServantType; // w0
  BalanceConfig_c *v9; // x0

  if ( (byte_4B3F61B & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BDB878(&SkillInfo___TypeInfo, v5);
    byte_4B3F61B = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    followerIndex = this->fields.followerIndex;
    DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, (const MethodInfo *)skillInfoList);
    FollowerInfo__getSkillInfo(followerInfo, skillInfoList, followerIndex, DisplayServantType, 0LL);
  }
  else
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    *skillInfoList = (SkillInfo_array *)sub_1BDB920(
                                          SkillInfo___TypeInfo,
                                          (unsigned int)v9->static_fields->SvtSkillListMax);
    sub_1BDB81C(skillInfoList);
  }
  return followerInfo != 0LL;
}


int32_t __fastcall FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t DisplayServantType; // w2

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, method);
  return FollowerInfo__getTreasureDeviceLevelIcon(followerInfo, followerIndex, DisplayServantType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_string__int__o *__fastcall FollowerSelectItemListViewItem__GetValuesDictionary(
        FollowerSelectItemListViewItem_o *this,
        int32_t kind,
        EquipTargetInfo_o *equipInfo,
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
  __int64 v14; // x19
  __int64 v15; // x20
  Il2CppObject *Master_object; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  ServantSkillMaster_o *v19; // x19
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  __int64 v21; // x1
  ServantSkillEntity_array *ServantSkillList; // x19
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x21
  __int64 v25; // x2
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v27; // x22
  unsigned __int64 v28; // x24
  int v29; // w26
  int max_length; // w8
  int v31; // w9
  ServantSkillEntity_o *v32; // x10
  SkillLvEntity_o *v33; // x8
  unsigned __int64 v34; // x29
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v36; // x9
  int monitor; // w8
  unsigned __int64 v38; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v40; // x23
  Il2CppObject *v41; // [xsp+0h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B3F616 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&kind);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantSkillMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_SkillLvMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v11);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_1400/*"3"*/, v13);
    byte_4B3F616 = 1;
  }
  v41 = 0LL;
  entity = 0LL;
  if ( equipInfo )
  {
    v15 = *(_QWORD *)&equipInfo->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&equipInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v15;
    *(_QWORD *)&v43.fields.fakeValue = v14;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v43, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      v18 = *(_QWORD *)&equipInfo->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&equipInfo->fields.svtId.fields.fakeValue;
      v19 = (ServantSkillMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v44.fields.currentCryptoKey = v18;
      *(_QWORD *)&v44.fields.fakeValue = v17;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                         v44,
                                                                         0LL);
      if ( !v19 )
        goto LABEL_71;
      ServantSkillList = ServantSkillMaster__getServantSkillList(v19, (int32_t)result, 0LL);
      v23 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v24 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(equipInfo, 0LL);
      if ( !result )
        goto LABEL_71;
      entries = result->fields._entries;
      v27 = result;
      if ( (int)entries >= 1 )
      {
        v28 = 0LL;
        v29 = kind - 1;
        while ( 1 )
        {
          if ( v28 >= (unsigned int)entries )
            goto LABEL_72;
          if ( !ServantSkillList )
            goto LABEL_71;
          max_length = ServantSkillList->max_length;
          v25 = *((unsigned int *)&v27->fields._count + v28);
          if ( max_length >= 1 )
          {
            v31 = 0;
            while ( max_length != v31 )
            {
              v32 = ServantSkillList->m_Items[v31];
              if ( !v32 )
                goto LABEL_71;
              if ( v32->fields.skillId == (_DWORD)v25 && v32->fields.eventId > 0 )
                goto LABEL_68;
              if ( max_length == ++v31 )
                goto LABEL_24;
            }
LABEL_72:
            sub_1BDBADC(result, v21, v25);
          }
LABEL_24:
          if ( !v23 )
            goto LABEL_71;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             (SkillLvMaster_o *)v23,
                                                                             &entity,
                                                                             v25,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_68:
          LODWORD(entries) = v27->fields._entries;
          if ( (__int64)++v28 >= (int)entries )
            return 0LL;
        }
        v33 = entity;
        if ( entity )
        {
          v34 = 0LL;
          while ( 1 )
          {
            funcId = v33->fields.funcId;
            if ( !funcId )
              break;
            v36 = funcId->max_length;
            if ( (__int64)v34 >= (int)v36 )
              goto LABEL_68;
            if ( v34 >= v36 )
              goto LABEL_72;
            if ( v24 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                                                                                 &v41,
                                                                                 funcId->m_Items[v34 + 1],
                                                                                 (const MethodInfo_32E1E88 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v29 )
                {
                  case 0:
                    if ( !v41 )
                      goto LABEL_71;
                    monitor = (int)v41[1].monitor;
                    if ( monitor != 104 && monitor != 123 )
                      break;
                    goto LABEL_49;
                  case 1:
                    if ( !v41 )
                      goto LABEL_71;
                    if ( LODWORD(v41[1].monitor) != 101 )
                      break;
                    goto LABEL_49;
                  case 2:
                    if ( !v41 )
                      goto LABEL_71;
                    if ( LODWORD(v41[1].monitor) != 112 )
                      break;
                    goto LABEL_49;
                  case 3:
                    if ( !v41 )
                      goto LABEL_71;
                    if ( LODWORD(v41[1].monitor) != 111 )
                      break;
                    goto LABEL_49;
                  case 4:
                    if ( !v41 )
                      goto LABEL_71;
                    if ( (LODWORD(v41[1].monitor) | 8) == 110 )
                      goto LABEL_49;
                    break;
                  case 5:
                    if ( !v41 )
                      goto LABEL_71;
                    if ( LODWORD(v41[1].monitor) != 106 )
                      break;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_71;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_71;
                    entries_low = LODWORD(result->fields._entries);
                    if ( (__int64)v34 > (int)entries_low )
                      break;
                    if ( v34 >= entries_low )
                      goto LABEL_72;
                    v40 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&result->fields._count
                                                                                  + v34);
                    if ( !v40 )
                      break;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v40,
                           (Il2CppObject *)StringLiteral_1400/*"3"*/,
                           (const MethodInfo_3397484 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v40,
                                                                                         (Il2CppObject *)StringLiteral_1400/*"3"*/,
                                                                                         (const MethodInfo_3397210 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( (_DWORD)result )
                        break;
                    }
LABEL_49:
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_71;
                    result = SkillLvEntity__GetFollowerValsDictionary(entity, 0LL);
                    if ( result )
                      return result;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_71;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_71;
                    v38 = LODWORD(result->fields._entries);
                    if ( (__int64)v34 >= (int)v38 )
                      break;
                    if ( v34 >= v38 )
                      goto LABEL_72;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields._count
                                                                                     + v34);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_49;
                }
              }
              v33 = entity;
              ++v34;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_71:
        sub_1BDBAD4(result, v21);
      }
    }
  }
  return 0LL;
}


bool __fastcall FollowerSelectItemListViewItem__IsFriendPointCampaign(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.friendPointCampaignEntity != 0LL;
}


void __fastcall FollowerSelectItemListViewItem__Modify(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  __int64 DisplayServantType; // x0
  const MethodInfo *v6; // x1
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  FollowerInfo_o *v8; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  int32_t v10; // w22
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v11; // x8
  FollowerInfo_o *v12; // x20
  QuestRestrictionInfo_o *v13; // x21
  int32_t v14; // w22
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  followerInfo = this->fields.followerInfo;
  followerIndex = this->fields.followerIndex;
  DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, method);
  if ( !followerInfo )
    goto LABEL_9;
  DisplayServantType = FollowerInfo__getSvtId(followerInfo, followerIndex, DisplayServantType, 0LL);
  if ( (int)DisplayServantType >= 1 )
  {
    Option_k__BackingField = this->fields._Option_k__BackingField;
    if ( Option_k__BackingField )
    {
      v8 = this->fields.followerInfo;
      questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
      v10 = this->fields.followerIndex;
      DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, v6);
      if ( v8 )
      {
        DisplayServantType = FollowerInfo__getUniqueSvtRestriction(
                               v8,
                               questRestrictionInfo,
                               v10,
                               DisplayServantType,
                               0LL);
        v11 = this->fields._Option_k__BackingField;
        this->fields.isUniqueSvtRestriction = DisplayServantType & 1;
        if ( v11 )
        {
          v12 = this->fields.followerInfo;
          v13 = v11->fields.questRestrictionInfo;
          v14 = this->fields.followerIndex;
          DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, v6);
          if ( v12 )
          {
            this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                              v12,
                                                              v13,
                                                              v14,
                                                              DisplayServantType,
                                                              0LL);
            this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(
                                                                this,
                                                                v15);
            FollowerSelectItemListViewItem__SetEventUpInfo(this, v16);
            return;
          }
        }
      }
    }
LABEL_9:
    sub_1BDBAD4(DisplayServantType, v6);
  }
  *(_WORD *)&this->fields.isUniqueSvtRestriction = 0;
  this->fields._IsSlotRestriction_k__BackingField = 0;
}


void __fastcall FollowerSelectItemListViewItem__SetEventUpInfo(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v21; // x8
  FollowerInfo_o *followerInfo; // x25
  EventUpValSetupInfo_o *v23; // x23
  int32_t followerIndex; // w24
  bool *p_isEquipEventUpVal; // x21
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v26; // x8
  struct IconLabelInfo_o *iconLabelInfo2; // x8
  Il2CppObject *Instance; // x22
  const MethodInfo *v29; // x1
  struct System_String_o *sortStr1; // x23
  int64_t sortValue1; // x24
  int32_t v32; // w23
  const MethodInfo *v33; // x1
  int32_t Rarity; // w24
  const MethodInfo *v35; // x1
  struct IconLabelInfo_o *v36; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v37; // x9
  bool v38; // w8
  System_Collections_Generic_List_object__o *v39; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  FollowerSelectItemListViewItem___c_c *v42; // x0
  System_Func_object__int__o *_9__92_0; // x23
  Il2CppObject *v44; // x24
  struct FollowerSelectItemListViewItem___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  __int64 v48; // x2
  int32_t sortIndex; // w9
  FollowerSelectItemListViewItem_o *v50; // x22
  EventPersonalMargeUpValInfo_c **v51; // x28
  int32_t v52; // w8
  ServantEntity_o *servantEntity; // x25
  int32_t v54; // w23
  EventPersonalMargeUpValInfo_o *v55; // x24
  __int64 v56; // x8
  FollowerSelectItemListViewItem_o *v57; // x24
  unsigned __int64 v58; // x25
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  EventServantPointRankMaster_o *v63; // x24
  int32_t GrandGraphId_k__BackingField; // w25
  FollowerSelectItemListViewItem_o *v65; // x0
  EventPersonalMargeUpValInfo_c **v66; // x19
  struct System_String_o *v67; // x26
  int64_t v68; // x28
  int32_t v69; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v71; // w24
  EventMargeItemUpValInfo_o *v72; // x25
  const MethodInfo *v73; // x1
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *AdjustUpValInfoArray; // x19
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // [xsp+0h] [xbp-80h]
  FollowerSelectItemListViewItem_o *v76; // [xsp+8h] [xbp-78h]
  bool isDuplicate; // [xsp+10h] [xbp-70h] BYREF
  int32_t actMaxRarity; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  v2 = this;
  if ( (byte_4B3F615 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_EventServantPointRankMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&Method_System_Linq_Enumerable_Distinct_int___, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1BDB878(&EventMargeItemUpValInfo_TypeInfo, v7);
    sub_1BDB878(&EventPersonalMargeUpValInfo_TypeInfo, v8);
    sub_1BDB878(&System_Func_EventDropUpValInfo__int__TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v13);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v15);
    sub_1BDB878(&Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__92_0__, v16);
    this = (FollowerSelectItemListViewItem_o *)sub_1BDB878(&FollowerSelectItemListViewItem___c_TypeInfo, v17);
    byte_4B3F615 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  isDuplicate = 0;
  Option_k__BackingField = v2->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    goto LABEL_75;
  setupInfo = Option_k__BackingField->fields.setupInfo;
  if ( !setupInfo )
    return;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_75;
  if ( !*(_QWORD *)&eventIdList->max_length )
    return;
  *(_WORD *)&v2->fields.isServantEventUpVal = 0;
  v2->fields.isEventUpVal = 0;
  v2->fields.eventUpValItemList = 0LL;
  this = (FollowerSelectItemListViewItem_o *)sub_1BDB81C(&v2->fields.eventUpValItemList);
  v21 = v2->fields._Option_k__BackingField;
  if ( !v21 )
    goto LABEL_75;
  followerInfo = v2->fields.followerInfo;
  v23 = v21->fields.setupInfo;
  followerIndex = v2->fields.followerIndex;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v2, method);
  if ( !followerInfo )
    goto LABEL_75;
  p_isEquipEventUpVal = &v2->fields.isEquipEventUpVal;
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEventUpVal_40748828(
                                               followerInfo,
                                               &v2->fields.eventUpValInfo,
                                               &v2->fields.isServantEventUpVal,
                                               &v2->fields.isEquipEventUpVal,
                                               v23,
                                               followerIndex,
                                               (int32_t)this,
                                               0LL);
  v26 = v2->fields._Option_k__BackingField;
  if ( !v26 )
    goto LABEL_75;
  if ( !v26->fields.isServantBonusFilterEnable )
    v2->fields.isServantEventUpVal = 0;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, method);
  if ( this )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, method);
    if ( !this )
      goto LABEL_75;
    iconLabelInfo2 = this->fields.iconLabelInfo2;
    if ( iconLabelInfo2 )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, v29);
      if ( !this )
        goto LABEL_75;
      sortValue1 = this->fields.sortValue1;
      sortStr1 = this->fields.sortStr1;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v80.fields.currentCryptoKey = sortValue1;
      *(_QWORD *)&v80.fields.fakeValue = sortStr1;
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v80, 0LL);
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, v33);
      if ( !this )
        goto LABEL_75;
      Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, v35);
      if ( !this )
        goto LABEL_75;
      v36 = this->fields.iconLabelInfo2;
      if ( !v36 )
        goto LABEL_75;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                   *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v36[1].klass,
                                                   0LL);
      if ( !Instance )
        goto LABEL_75;
      this = (FollowerSelectItemListViewItem_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                   (PartyOrganizationUtility_o *)Instance,
                                                   &skillName,
                                                   &actMaxRarity,
                                                   v32,
                                                   Rarity,
                                                   (int32_t)this,
                                                   -1,
                                                   0LL);
      LODWORD(iconLabelInfo2) = (unsigned __int8)this & 1;
    }
  }
  else
  {
    LODWORD(iconLabelInfo2) = 0;
  }
  v37 = v2->fields._Option_k__BackingField;
  if ( !v37 )
    goto LABEL_75;
  if ( (unsigned int)iconLabelInfo2 | !v37->fields.isServantEquipBonusFilterEnable )
  {
    v38 = 0;
    *p_isEquipEventUpVal = 0;
  }
  else
  {
    v38 = *p_isEquipEventUpVal;
  }
  v2->fields.isEventUpVal = v38 || v2->fields.isServantEventUpVal;
  v39 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  eventUpValInfo = v2->fields.eventUpValInfo;
  if ( !eventUpValInfo )
    goto LABEL_75;
  dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
  v42 = FollowerSelectItemListViewItem___c_TypeInfo;
  if ( !FollowerSelectItemListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItem___c_TypeInfo);
    v42 = FollowerSelectItemListViewItem___c_TypeInfo;
  }
  p_eventUpValItemList = &v2->fields.eventUpValItemList;
  _9__92_0 = (System_Func_object__int__o *)v42->static_fields->__9__92_0;
  if ( !_9__92_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = FollowerSelectItemListViewItem___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__92_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_EventDropUpValInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__92_0,
      v44,
      Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__92_0__,
      0LL);
    static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__92_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__92_0;
    sub_1BDB81C(&static_fields->__9__92_0);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               dropList,
                                                               (System_Func_TSource__TResult__o *)_9__92_0,
                                                               (const MethodInfo_3067BA8 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
  v47 = System_Linq_Enumerable__Distinct_int_(
          v46,
          (const MethodInfo_3052C8C *)Method_System_Linq_Enumerable_Distinct_int___);
  this = (FollowerSelectItemListViewItem_o *)System_Linq_Enumerable__ToArray_int_(
                                               v47,
                                               (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
  actMaxRarity = 0;
  if ( !this )
    goto LABEL_75;
  sortIndex = this->fields.sortIndex;
  v50 = this;
  if ( sortIndex >= 1 )
  {
    v51 = &EventPersonalMargeUpValInfo_TypeInfo;
    v52 = 0;
    v76 = v2;
    while ( 1 )
    {
      if ( v52 >= (unsigned int)sortIndex )
        goto LABEL_76;
      servantEntity = v2->fields.servantEntity;
      v54 = *((_DWORD *)&v50->fields.sortValue0 + v52);
      v55 = (EventPersonalMargeUpValInfo_o *)sub_1BDBAC4(*v51);
      EventPersonalMargeUpValInfo___ctor(v55, v54, servantEntity, 0LL);
      this = (FollowerSelectItemListViewItem_o *)v2->fields.eventUpValInfo;
      if ( !this )
        goto LABEL_75;
      this = (FollowerSelectItemListViewItem_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)this, 0, 0LL);
      if ( !v55 )
        goto LABEL_75;
      EventPersonalMargeUpValInfo__Add(v55, (EventDropItemUpValInfo_array *)this, 0LL);
      this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__IsEmpty(v55, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__GetList(v55, 0LL);
        if ( !this )
          goto LABEL_75;
        v56 = *(_QWORD *)&this->fields.sortIndex;
        v57 = this;
        if ( (int)v56 >= 1 )
          break;
      }
LABEL_52:
      if ( !v2->fields.isNpc )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, method);
        if ( this )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (FollowerSelectItemListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
          if ( !this )
            goto LABEL_75;
          v63 = (EventServantPointRankMaster_o *)this;
          this = (FollowerSelectItemListViewItem_o *)EventServantPointRankMaster__IsEnableEvent(
                                                       (EventServantPointRankMaster_o *)this,
                                                       v54,
                                                       0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, method);
            if ( !this )
              goto LABEL_75;
            GrandGraphId_k__BackingField = this->fields._GrandGraphId_k__BackingField;
            v65 = v2;
            v66 = v51;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v65, method);
            if ( !this )
              goto LABEL_75;
            v68 = this->fields.sortValue1;
            v67 = this->fields.sortStr1;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v81.fields.currentCryptoKey = v68;
            *(_QWORD *)&v81.fields.fakeValue = v67;
            v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v81, 0LL);
            EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                             v63,
                             v54,
                             GrandGraphId_k__BackingField,
                             v69,
                             0LL);
            v71 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
            v51 = v66;
            v72 = (EventMargeItemUpValInfo_o *)sub_1BDBAC4(EventMargeItemUpValInfo_TypeInfo);
            EventMargeItemUpValInfo___ctor_40717544(v72, v54, 0LL);
            v2 = v76;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v76, v73);
            if ( !this )
              goto LABEL_75;
            if ( !v72 )
              goto LABEL_75;
            EventMargeItemUpValInfo__SetServantPointInfo(v72, this->fields._GrandGraphId_k__BackingField, v71, 1, 0LL);
            if ( !v39 )
              goto LABEL_75;
            System_Collections_Generic_List_object___Insert(
              v39,
              0,
              (Il2CppObject *)v72,
              (const MethodInfo_36D6B74 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
          }
        }
      }
      v52 = actMaxRarity + 1;
      actMaxRarity = v52;
      sortIndex = v50->fields.sortIndex;
      if ( v52 >= sortIndex )
        goto LABEL_71;
    }
    v58 = 0LL;
    while ( v58 < (unsigned int)v56 )
    {
      if ( !v39 )
        goto LABEL_75;
      method = (const MethodInfo *)*(&v57->fields.sortValue0 + v58);
      items = v39->fields._items;
      v60 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v39->fields._version;
      if ( !items )
        goto LABEL_75;
      size = v39->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v39,
          (Il2CppObject *)method,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = &items->obj.klass + size;
        v39->fields._size = size + 1;
        v62[4] = (Il2CppClass *)method;
        this = (FollowerSelectItemListViewItem_o *)sub_1BDB81C(v62 + 4);
      }
      LODWORD(v56) = v57->fields.sortIndex;
      if ( (__int64)++v58 >= (int)v56 )
        goto LABEL_52;
    }
LABEL_76:
    sub_1BDBADC(this, method, v48);
  }
LABEL_71:
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this
    || (AdjustUpValInfoArray = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray((PartyOrganizationUtility_o *)this, &isDuplicate, (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v39, 0LL),
        (this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_75:
    sub_1BDBAD4(this, method);
  }
  *p_eventUpValItemList = PartyOrganizationUtility__GetAddUpValInfos(
                            (PartyOrganizationUtility_o *)this,
                            AdjustUpValInfoArray,
                            0LL);
  sub_1BDB81C(p_eventUpValItemList);
}


void __fastcall FollowerSelectItemListViewItem__SetIndex(
        FollowerSelectItemListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.index = index;
}


bool __fastcall FollowerSelectItemListViewItem__SetSortValue(
        FollowerSelectItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  FollowerInfo_o *followerInfo; // x21
  int32_t type; // w29
  int32_t followerIndex; // w22
  int32_t DisplayServantType; // w0
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  int v16; // w21
  int64_t *p_sortValue0; // x25
  _BOOL4 isNpc; // w8
  __int64 v19; // x8
  int v20; // w8
  IconLabelInfo_o *v21; // x20
  FollowerInfo_o *v22; // x21
  int32_t v23; // w22
  int32_t v24; // w0
  FollowerInfo_o *v25; // x22
  int32_t v26; // w23
  int32_t v27; // w21
  const MethodInfo *v28; // x1
  FollowerInfo_o *v29; // x20
  int32_t v30; // w21
  int32_t EquipHp; // w0
  int32_t hp; // w21
  IconLabelInfo_o *v33; // x22
  FollowerInfo_o *v34; // x23
  int32_t v35; // w24
  int32_t v36; // w20
  const MethodInfo *v37; // x1
  int32_t priorityKind; // w22
  ServantLeaderInfo_o *v39; // x23
  int32_t i; // w24
  const MethodInfo *v41; // x3
  EquipTargetInfo_o *v42; // x2
  int64_t v43; // x0
  int sortValue2; // w22
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x2
  int64_t sortValue1B; // x22
  struct System_String_o *sortStr1; // x23
  System_String_o *v49; // x22
  System_String_o *v50; // x23
  Il2CppObject *MasterData_object; // x24
  int32_t MaxIndividualFilter; // w0
  int v53; // w25
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  int32_t Int_70242328; // w26
  const MethodInfo *v59; // x1
  int64_t v60; // x27
  struct System_String_o *v61; // x28
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  int32_t v66; // w26
  const MethodInfo *v67; // x1
  int64_t v68; // x27
  struct System_String_o *v69; // x28
  int64_t classIndex; // x8
  int64_t deckPriority; // x9
  int v73; // w8
  int64_t v74; // x8
  int32_t index; // w8
  int32_t UseStatus; // w0
  EquipTargetInfo_o *EquipInfo; // x0
  const MethodInfo *v78; // x3
  FollowerInfo_o *v79; // x20
  int32_t v80; // w21
  IconLabelInfo_o *iconLabelInfo2; // x20
  FollowerInfo_o *v82; // x21
  int32_t v83; // w22
  int64_t v84; // x8
  FollowerInfo_o *v85; // x20
  int32_t v86; // w21
  int32_t EquipAtk; // w0
  int32_t atk; // w21
  IconLabelInfo_o *iconLabelInfo1; // x22
  FollowerInfo_o *v90; // x23
  int32_t v91; // w24
  int32_t v92; // w20
  const MethodInfo *v93; // x1
  int32_t Lv; // w0
  FollowerInfo_o *v95; // x22
  int32_t v96; // w23
  int32_t v97; // w21
  const MethodInfo *v98; // x1
  int64_t servantEntity; // x8
  int v100; // w10
  int v101; // w9
  int v102; // w10
  int64_t v103; // x9
  __int64 v104; // x8
  EventBonusFilterGroupMemberEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  int v106; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  v4 = this;
  if ( (byte_4B3F618 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, sort);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v5);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BDB878(&ServantBonusFilterSelectMenu_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BDB878(&StringLiteral_3235/*"BonusFilterEquipId"*/, v9);
    this = (FollowerSelectItemListViewItem_o *)sub_1BDB878(&StringLiteral_3237/*"BonusFilterGroupId"*/, v10);
    byte_4B3F618 = 1;
  }
  v106 = 0;
  entity = 0LL;
  followerInfo = v4->fields.followerInfo;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = 0LL;
  if ( !followerInfo )
    goto LABEL_135;
  type = followerInfo->fields.type;
  followerIndex = v4->fields.followerIndex;
  DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(v4, (const MethodInfo *)sort);
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getSvtId(
                                               followerInfo,
                                               followerIndex,
                                               DisplayServantType,
                                               0LL);
  Option_k__BackingField = v4->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    goto LABEL_135;
  v16 = (int)this;
  if ( Option_k__BackingField->fields.isBonusFilterEnable && !v4->fields.isNpc )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                 v4,
                                                 (const MethodInfo *)sort);
    if ( this )
    {
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                   v4,
                                                   (const MethodInfo *)sort);
      if ( !this )
        goto LABEL_135;
      sortValue2 = this->fields.sortValue2;
      this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( sortValue2 >= SHIDWORD(this->fields.eventUpValItemList->m_Items[0]) )
        goto LABEL_138;
    }
    if ( !sort )
      goto LABEL_135;
    if ( ListViewSort__GetFilter(sort, 40, 0LL) )
    {
LABEL_138:
      if ( !FollowerSelectItemListViewItem__get_EquipInfo(v4, (const MethodInfo *)sort) )
        goto LABEL_72;
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v45);
      if ( !this )
        goto LABEL_135;
      sortStr1 = this->fields.sortStr1;
      sortValue1B = this->fields.sortValue1B;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v107.fields.currentCryptoKey = sortStr1;
      *(_QWORD *)&v107.fields.fakeValue = sortValue1B;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                   v107,
                                                   0LL);
      if ( (int)this < 1 )
        goto LABEL_72;
      if ( !sort )
        goto LABEL_135;
      if ( ListViewSort__GetFilter(sort, 41, 0LL) )
        goto LABEL_72;
      v49 = (System_String_o *)StringLiteral_3235/*"BonusFilterEquipId"*/;
      v50 = (System_String_o *)StringLiteral_3237/*"BonusFilterGroupId"*/;
      this = (FollowerSelectItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_135;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v106 = 0;
      if ( MaxIndividualFilter < 1 )
      {
LABEL_72:
        if ( FollowerSelectItemListViewItem__ChkWholeFilter(v4, sort, v46) )
          goto LABEL_7;
      }
      else
      {
        v53 = MaxIndividualFilter;
        while ( 1 )
        {
          v54 = System_Int32__ToString((int32_t)&v106, 0LL);
          v55 = System_String__Concat_62572260(v49, v54, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v55, 0LL) )
          {
            v56 = System_Int32__ToString((int32_t)&v106, 0LL);
            v57 = System_String__Concat_62572260(v49, v56, 0LL);
            Int_70242328 = UnityEngine_PlayerPrefs__GetInt_70242328(v57, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v59);
            if ( !this )
              goto LABEL_135;
            v61 = this->fields.sortStr1;
            v60 = this->fields.sortValue1B;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v108.fields.currentCryptoKey = v61;
            *(_QWORD *)&v108.fields.fakeValue = v60;
            if ( Int_70242328 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v108, 0LL) )
              break;
          }
          v62 = System_Int32__ToString((int32_t)&v106, 0LL);
          v63 = System_String__Concat_62572260(v50, v62, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v63, 0LL) )
          {
            v64 = System_Int32__ToString((int32_t)&v106, 0LL);
            v65 = System_String__Concat_62572260(v50, v64, 0LL);
            v66 = UnityEngine_PlayerPrefs__GetInt_70242328(v65, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v67);
            if ( !this )
              goto LABEL_135;
            v69 = this->fields.sortStr1;
            v68 = this->fields.sortValue1B;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v109.fields.currentCryptoKey = v69;
            *(_QWORD *)&v109.fields.fakeValue = v68;
            this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                         v109,
                                                         0LL);
            if ( !MasterData_object )
              goto LABEL_135;
            if ( EventBonusFilterGroupMemberMaster__TryGetEntity(
                   (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                   &entity,
                   v66,
                   (int32_t)this,
                   0LL) )
            {
              return 0;
            }
          }
          if ( ++v106 >= v53 )
            goto LABEL_72;
        }
      }
    }
    return 0;
  }
LABEL_7:
  this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_135;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  v4->fields.sortValue0 = 0LL;
  p_sortValue0 = &v4->fields.sortValue0;
  isNpc = v4->fields.isNpc;
  v4->fields.sortValue0B = 0LL;
  if ( !isNpc )
  {
    if ( !sort )
      goto LABEL_135;
    priorityKind = sort->fields.priorityKind;
    if ( !v4->fields._IsGrandSupport_k__BackingField )
    {
      EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v4, (const MethodInfo *)sort);
      v4->fields.sortValue0 = FollowerSelectItemListViewItem__CalculatePriorityKindSortValue(
                                (FollowerSelectItemListViewItem_o *)EquipInfo,
                                priorityKind,
                                EquipInfo,
                                v78);
      goto LABEL_10;
    }
    v39 = 0LL;
    for ( i = 0; ; ++i )
    {
      this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= SHIDWORD(this->fields.eventUpValItemList->m_Items[2]) )
        break;
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                   v4,
                                                   (const MethodInfo *)sort);
      if ( this )
        v39 = (ServantLeaderInfo_o *)this;
      if ( this )
      {
        if ( !v39 )
          goto LABEL_135;
        this = (FollowerSelectItemListViewItem_o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(v39, i, 0LL);
        v42 = (EquipTargetInfo_o *)this;
      }
      else
      {
        v42 = 0LL;
      }
      v43 = FollowerSelectItemListViewItem__CalculatePriorityKindSortValue(this, priorityKind, v42, v41);
      if ( v43 > *p_sortValue0 )
        *p_sortValue0 = v43;
    }
  }
  if ( !sort )
    goto LABEL_135;
LABEL_10:
  v19 = 56LL;
  if ( v4->fields._IsRecommendFollower_k__BackingField )
    v19 = 152LL;
  v20 = *(_DWORD *)((char *)&sort->klass + v19);
  if ( v20 != 11 )
  {
    if ( v16 < 1 )
    {
      this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( this )
      {
        IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
        switch ( type )
        {
          case 1:
            this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
            v104 = 2LL;
            goto LABEL_133;
          case 2:
            this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
            v104 = 1LL;
            goto LABEL_133;
          case 3:
          case 4:
            index = v4->fields.index;
            v4->fields.sortValue0 = 1000000000000LL;
LABEL_119:
            servantEntity = -index;
LABEL_125:
            v4->fields.sortValue2 = servantEntity;
            goto LABEL_126;
          case 5:
            this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
            v104 = 3LL;
LABEL_133:
            v4->fields.sortValue0B = v104;
            if ( !this )
              goto LABEL_135;
            v4->fields.sortValue2 = FollowerInfo__getUpdatedAt((FollowerInfo_o *)this, 0LL);
            break;
          default:
            goto LABEL_126;
        }
        goto LABEL_126;
      }
      goto LABEL_135;
    }
    if ( v20 > 5 )
    {
      if ( v20 == 6 )
      {
        v85 = v4->fields.followerInfo;
        v86 = v4->fields.followerIndex;
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                     v4,
                                                     (const MethodInfo *)sort);
        if ( !v85 )
          goto LABEL_135;
        EquipAtk = FollowerInfo__getEquipAtk(v85, v86, (int32_t)this, 0LL);
        atk = v4->fields.atk;
        iconLabelInfo1 = v4->fields.iconLabelInfo1;
        v90 = v4->fields.followerInfo;
        v91 = v4->fields.followerIndex;
        v92 = EquipAtk;
        v4->fields.sortValue1 = atk + EquipAtk;
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v4, v93);
        if ( !v90 )
          goto LABEL_135;
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetAtkBoostValue(v90, v91, (int32_t)this, 0LL);
        if ( !iconLabelInfo1 )
          goto LABEL_135;
        IconLabelInfo__Set_39930232(iconLabelInfo1, 5, atk, (int32_t)this, v92, 0, 0, 0, 0, 0LL);
        goto LABEL_102;
      }
      if ( v20 != 29 )
        goto LABEL_103;
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      if ( !this )
        goto LABEL_135;
      UseStatus = FollowerInfo__GetUseStatus((FollowerInfo_o *)this, 0LL);
    }
    else
    {
      if ( v20 != 3 )
      {
        if ( v20 == 5 )
        {
          v29 = v4->fields.followerInfo;
          v30 = v4->fields.followerIndex;
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                       v4,
                                                       (const MethodInfo *)sort);
          if ( !v29 )
            goto LABEL_135;
          EquipHp = FollowerInfo__getEquipHp(v29, v30, (int32_t)this, 0LL);
          hp = v4->fields.hp;
          v33 = v4->fields.iconLabelInfo1;
          v34 = v4->fields.followerInfo;
          v35 = v4->fields.followerIndex;
          v36 = EquipHp;
          v4->fields.sortValue1 = hp + EquipHp;
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v4, v37);
          if ( !v34 )
            goto LABEL_135;
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetHpBoostValue(v34, v35, (int32_t)this, 0LL);
          if ( !v33 )
            goto LABEL_135;
          IconLabelInfo__Set_39930232(v33, 3, hp, (int32_t)this, v36, 0, 0, 0, 0, 0LL);
LABEL_102:
          iconLabelInfo2 = v4->fields.iconLabelInfo2;
          v82 = v4->fields.followerInfo;
          v83 = v4->fields.followerIndex;
LABEL_105:
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                       v4,
                                                       (const MethodInfo *)sort);
          if ( v82 )
          {
            Lv = FollowerInfo__getLv(v82, v83, (int32_t)this, 0LL);
            v95 = v4->fields.followerInfo;
            v96 = v4->fields.followerIndex;
            v97 = Lv;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v4, v98);
            if ( v95 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v95, v96, (int32_t)this, 0LL);
              if ( iconLabelInfo2 )
              {
                IconLabelInfo__Set_39930232(iconLabelInfo2, 2, v97, (int32_t)this, 0, 0, 0, 0, 0, 0LL);
                LODWORD(servantEntity) = v4->fields.classIndex;
                if ( (int)servantEntity <= 0 )
                {
                  servantEntity = (int64_t)v4->fields.servantEntity;
                  if ( !servantEntity )
                    goto LABEL_135;
                  LODWORD(servantEntity) = *(_DWORD *)(servantEntity + 208);
                }
                if ( v4->fields.isQuestRestriction )
                  v100 = 0;
                else
                  v100 = 100;
                if ( v4->fields._IsGrandSupport_k__BackingField )
                  v101 = 10;
                else
                  v101 = 0;
                switch ( type )
                {
                  case 1:
                    v102 = v100 | 3;
                    goto LABEL_122;
                  case 2:
                    v102 = v100 | 2;
LABEL_122:
                    v103 = (unsigned int)(v102 + v101);
                    servantEntity = (int)servantEntity;
                    goto LABEL_124;
                  case 3:
                  case 4:
LABEL_118:
                    index = v4->fields.index;
                    v4->fields.sortValue0 = 1000000000000LL;
                    v4->fields.sortValue1 = 0LL;
                    goto LABEL_119;
                  case 5:
                    servantEntity = (int)servantEntity;
                    v103 = (unsigned int)(v100 + v101 + 4);
LABEL_124:
                    v4->fields.sortValue0B = v103;
                    goto LABEL_125;
                  default:
                    goto LABEL_126;
                }
              }
            }
          }
LABEL_135:
          sub_1BDBAD4(this, sort);
        }
LABEL_103:
        v84 = v4->fields.sortValue2;
        iconLabelInfo2 = v4->fields.iconLabelInfo1;
        v82 = v4->fields.followerInfo;
        v83 = v4->fields.followerIndex;
        goto LABEL_104;
      }
      v79 = v4->fields.followerInfo;
      v80 = v4->fields.followerIndex;
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                   v4,
                                                   (const MethodInfo *)sort);
      if ( !v79 )
        goto LABEL_135;
      UseStatus = FollowerInfo__getLv(v79, v80, (int32_t)this, 0LL);
    }
    iconLabelInfo2 = v4->fields.iconLabelInfo1;
    v82 = v4->fields.followerInfo;
    v83 = v4->fields.followerIndex;
    v84 = UseStatus;
LABEL_104:
    v4->fields.sortValue1 = v84;
    goto LABEL_105;
  }
  if ( v16 < 1 )
  {
    this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo1;
    v4->fields.sortValue2 = 0LL;
    v4->fields.sortValue2B = 0LL;
    if ( this )
    {
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      goto LABEL_76;
    }
    goto LABEL_135;
  }
  v21 = v4->fields.iconLabelInfo1;
  v22 = v4->fields.followerInfo;
  v23 = v4->fields.followerIndex;
  v4->fields.sortValue2 = v4->fields.deckPriority;
  v4->fields.sortValue2B = 1LL;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                               v4,
                                               (const MethodInfo *)sort);
  if ( !v22 )
    goto LABEL_135;
  v24 = FollowerInfo__getLv(v22, v23, (int32_t)this, 0LL);
  v25 = v4->fields.followerInfo;
  v26 = v4->fields.followerIndex;
  v27 = v24;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v4, v28);
  if ( !v25 )
    goto LABEL_135;
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v25, v26, (int32_t)this, 0LL);
  if ( !v21 )
    goto LABEL_135;
  IconLabelInfo__Set_39930232(v21, 2, v27, (int32_t)this, 0, 0, 0, 0, 0, 0LL);
LABEL_76:
  classIndex = (unsigned int)v4->fields.classIndex;
  if ( (int)classIndex >= 1 )
  {
    deckPriority = v4->fields.deckPriority;
    v4->fields.sortValue2 = classIndex;
    v4->fields.sortValue2B = deckPriority;
  }
  if ( v4->fields._IsGrandSupport_k__BackingField )
    v73 = 10;
  else
    v73 = 0;
  switch ( type )
  {
    case 1:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v74 = v73 | 5u;
      goto LABEL_93;
    case 2:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v74 = v73 | 4u;
      goto LABEL_93;
    case 3:
    case 4:
      goto LABEL_118;
    case 5:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v74 = (unsigned int)(v73 + 6);
LABEL_93:
      v4->fields.sortValue0B = v74;
      if ( !this )
        goto LABEL_135;
      v4->fields.sortValue1 = FollowerInfo__getUpdatedAt((FollowerInfo_o *)this, 0LL);
      break;
    default:
      break;
  }
LABEL_126:
  if ( v4->fields._isRecommendedUser_k__BackingField )
    *p_sortValue0 += 10000000000000LL;
  return 1;
}


void __fastcall FollowerSelectItemListViewItem__UpdateRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x20
  FollowerSelectItemListViewItem_o *v3; // x19
  int32_t followerIndex; // w21
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t DisplayServantType; // w0
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v8; // x8
  FollowerInfo_o *v9; // x20
  QuestRestrictionInfo_o *v10; // x21
  int32_t v11; // w22
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v12; // x8
  FollowerInfo_o *v13; // x20
  QuestRestrictionInfo_o *v14; // x21
  int32_t v15; // w22
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    v3 = this;
    if ( this->fields.servantEntity )
    {
      followerIndex = this->fields.followerIndex;
      if ( (followerIndex & 0x80000000) == 0 )
      {
        Option_k__BackingField = this->fields._Option_k__BackingField;
        if ( !Option_k__BackingField )
          goto LABEL_11;
        questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
        DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, method);
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetQuestRestriction(
                                                     followerInfo,
                                                     questRestrictionInfo,
                                                     followerIndex,
                                                     DisplayServantType,
                                                     0LL);
        v8 = v3->fields._Option_k__BackingField;
        v3->fields.isQuestRestriction = (unsigned __int8)this & 1;
        if ( !v8 )
          goto LABEL_11;
        v9 = v3->fields.followerInfo;
        v10 = v8->fields.questRestrictionInfo;
        v11 = v3->fields.followerIndex;
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v3, method);
        if ( !v9
          || (this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getUniqueSvtRestriction(
                                                           v9,
                                                           v10,
                                                           v11,
                                                           (int32_t)this,
                                                           0LL),
              v12 = v3->fields._Option_k__BackingField,
              v3->fields.isUniqueSvtRestriction = (unsigned __int8)this & 1,
              !v12)
          || (v13 = v3->fields.followerInfo,
              v14 = v12->fields.questRestrictionInfo,
              v15 = v3->fields.followerIndex,
              this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                           v3,
                                                           method),
              !v13) )
        {
LABEL_11:
          sub_1BDBAD4(this, method);
        }
        v3->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                        v13,
                                                        v14,
                                                        v15,
                                                        (int32_t)this,
                                                        0LL);
        v3->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(v3, v16);
        FollowerSelectItemListViewItem__SetEventUpInfo(v3, v17);
      }
    }
  }
}


int32_t __fastcall FollowerSelectItemListViewItem__get_DisplayServantType(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( this->fields._IsGrandSupport_k__BackingField )
    return 2;
  Option_k__BackingField = this->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    sub_1BDBAD4(this, method);
  questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    return 0;
}


EquipTargetInfo_o *__fastcall FollowerSelectItemListViewItem__get_EquipInfo(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerClassId; // w21
  __int64 DisplayServantType; // x0
  __int64 v6; // x1
  int32_t IndexForSupport; // w21
  const MethodInfo *v8; // x1
  int32_t v9; // w2

  followerInfo = this->fields.followerInfo;
  followerClassId = this->fields.followerClassId;
  DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, method);
  if ( !followerInfo )
    sub_1BDBAD4(DisplayServantType, v6);
  IndexForSupport = FollowerInfo__getIndexForSupport(
                      followerInfo,
                      followerClassId,
                      DisplayServantType,
                      this->fields.supportDeckId,
                      0LL);
  v9 = FollowerSelectItemListViewItem__get_DisplayServantType(this, v8);
  return FollowerInfo__getEquipTarget1(followerInfo, IndexForSupport, v9, 0LL);
}


EventMargeItemUpValInfo_array *__fastcall FollowerSelectItemListViewItem__get_EventUpValItemList(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventUpValItemList;
}


FollowerInfo_o *__fastcall FollowerSelectItemListViewItem__get_FollowerData(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.followerInfo;
}


int64_t __fastcall FollowerSelectItemListViewItem__get_FollowerId(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerInfo_o *followerInfo; // x8

  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    return followerInfo->fields.userId;
  else
    return 0LL;
}


int32_t __fastcall FollowerSelectItemListViewItem__get_FollowerIndex(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.followerIndex;
}


int32_t __fastcall FollowerSelectItemListViewItem__get_FollowerType(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerInfo_o *followerInfo; // x8

  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    return followerInfo->fields.type;
  else
    return 0;
}


int32_t __fastcall FollowerSelectItemListViewItem__get_GrandFollowerClassId(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4B3F620 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantClassMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    byte_4B3F620 = 1;
  }
  result = this->fields.grandFollowerClassId;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Master_object )
      sub_1BDBAD4(0LL, v6);
    result = ServantClassMaster__GetSupportGroupByGrandGraphId(
               (ServantClassMaster_o *)Master_object,
               this->fields._GrandGraphId_k__BackingField,
               0LL);
    this->fields.grandFollowerClassId = result;
  }
  return result;
}


int32_t __fastcall FollowerSelectItemListViewItem__get_GrandGraphId(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandGraphId_k__BackingField;
}


IconLabelInfo_o *__fastcall FollowerSelectItemListViewItem__get_IconInfo1(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall FollowerSelectItemListViewItem__get_IconInfo2(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsClassRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsClassRestriction_k__BackingField;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsDataLost(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDataLost_k__BackingField;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsEventUpVal(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEventUpVal;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsGrandSupport(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsGrandSupport_k__BackingField;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsGrandSvt(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsGrandSvt_k__BackingField;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsLockUser(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLockUser;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsMaxOpenClassBoard(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMaxOpenClassBoard;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsMaxOpenGrandClassBoard(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMaxOpenGrandClassBoard;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsMessageDisp(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMessageDisp;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsNoneSupportFriendPoint(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8

  Option_k__BackingField = this->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    sub_1BDBAD4(this, method);
  return Option_k__BackingField->fields.isNoneSupportFriendPoint;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsNpc(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNpc;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsQuestRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isQuestRestriction;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsRecommendFollower(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsRecommendFollower_k__BackingField;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsRecommended(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRecommended;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsReleasedClassBoard(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsReleasedClassBoard_k__BackingField;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsSlotRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSlotRestriction_k__BackingField;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsUniqueIndividualityRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUniqueIndividualityRestriction;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsUniqueSvtRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUniqueSvtRestriction;
}


int64_t __fastcall FollowerSelectItemListViewItem__get_LoginTime(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.followerInfo;
  if ( result )
    return FollowerInfo__getUpdatedAt((FollowerInfo_o *)result, 0LL);
  return result;
}


int32_t __fastcall FollowerSelectItemListViewItem__get_OpenClassBoardNum(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.openClassBoardNum;
}


int32_t __fastcall FollowerSelectItemListViewItem__get_OpenGrandClassBoardNum(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.openGrandClassBoardNum;
}


FollowerSelectItemListViewManager_FollowerSelectItemOption_o *__fastcall FollowerSelectItemListViewItem__get_Option(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Option_k__BackingField;
}


int32_t __fastcall FollowerSelectItemListViewItem__get_PlayerLevel(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerInfo_o *followerInfo; // x8

  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    return followerInfo->fields.userLv;
  else
    return 1;
}


System_String_o *__fastcall FollowerSelectItemListViewItem__get_PlayerNameText(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o **p_userName; // x8

  if ( (byte_4B3F619 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19073/*"error"*/, method);
    byte_4B3F619 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    p_userName = &followerInfo->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19073/*"error"*/;
  return *p_userName;
}


QuestRestrictionInfo_o *__fastcall FollowerSelectItemListViewItem__get_QuestRestrictionInfo(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8

  Option_k__BackingField = this->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    sub_1BDBAD4(this, method);
  return Option_k__BackingField->fields.questRestrictionInfo;
}


int32_t __fastcall FollowerSelectItemListViewItem__get_SelectClassId(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.followerIndex )
    return this->fields.followerClassId;
  else
    return 0;
}


ServantLeaderInfo_o *__fastcall FollowerSelectItemListViewItem__get_ServantLeader(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t DisplayServantType; // w2

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0LL;
  followerIndex = this->fields.followerIndex;
  DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, method);
  return FollowerInfo__getServantLeaderInfo(followerInfo, followerIndex, DisplayServantType, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewItem__get_SupportDeckId(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.supportDeckId;
}


int32_t __fastcall FollowerSelectItemListViewItem__get_SvtId(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t DisplayServantType; // w2

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, method);
  return FollowerInfo__getSvtId(followerInfo, followerIndex, DisplayServantType, 0LL);
}


System_String_o *__fastcall FollowerSelectItemListViewItem__get_SvtNameText(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *overwriteServantName; // x20
  const MethodInfo *v8; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v10; // x1
  int32_t DispLimitCount; // w20
  const MethodInfo *v12; // x1
  int32_t limitCount; // w21
  int32_t LimitCountByDispLimit; // w20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v16; // x1
  __int64 v17; // x19
  __int64 v18; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B3F61A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&ImageLimitCount_TypeInfo, v4);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4B3F61A = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && this->fields.isNpc )
    return followerInfo->fields.userName;
  if ( !this->fields.servantEntity )
    return 0LL;
  if ( FollowerSelectItemListViewItem__get_ServantLeader(this, method) )
  {
    ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v8);
    if ( ServantLeader )
    {
      overwriteServantName = ServantLeader->fields.overwriteServantName;
      if ( !System_String__IsNullOrEmpty(overwriteServantName, 0LL) )
        return overwriteServantName;
      ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v10);
      if ( ServantLeader )
      {
        DispLimitCount = ServantLeaderInfo__getDispLimitCount(ServantLeader, 0LL);
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v12);
        if ( ServantLeader )
        {
          limitCount = ServantLeader->fields.limitCount;
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, limitCount, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v16);
          if ( ServantLeader )
          {
            v18 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
            v17 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v20.fields.currentCryptoKey = v18;
            *(_QWORD *)&v20.fields.fakeValue = v17;
            ServantLeader = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                     v20,
                                                     0LL);
            if ( Master_object )
              return ServantLimitImageMaster__GetLimitCountSealedServantName(
                       (ServantLimitImageMaster_o *)Master_object,
                       (int32_t)ServantLeader,
                       LimitCountByDispLimit,
                       0,
                       0LL);
          }
        }
      }
    }
LABEL_25:
    sub_1BDBAD4(ServantLeader, v8);
  }
  ServantLeader = (ServantLeaderInfo_o *)this->fields.servantEntity;
  if ( !ServantLeader )
    goto LABEL_25;
  return ServantEntity__getName((ServantEntity_o *)ServantLeader, -1, -1, 0, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewItem__get_TimesToRestart(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TimesToRestart_k__BackingField;
}


bool __fastcall FollowerSelectItemListViewItem__get_isRecommendedUser(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._isRecommendedUser_k__BackingField;
}


void __fastcall FollowerSelectItemListViewItem__set_GrandGraphId(
        FollowerSelectItemListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GrandGraphId_k__BackingField = value;
}


void __fastcall FollowerSelectItemListViewItem__set_IsClassRestriction(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsClassRestriction_k__BackingField = value;
}


void __fastcall FollowerSelectItemListViewItem__set_IsDataLost(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDataLost_k__BackingField = value;
}


void __fastcall FollowerSelectItemListViewItem__set_IsGrandSupport(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandSupport_k__BackingField = value;
}


void __fastcall FollowerSelectItemListViewItem__set_IsGrandSvt(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandSvt_k__BackingField = value;
}


void __fastcall FollowerSelectItemListViewItem__set_IsRecommendFollower(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsRecommendFollower_k__BackingField = value;
}


void __fastcall FollowerSelectItemListViewItem__set_IsReleasedClassBoard(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsReleasedClassBoard_k__BackingField = value;
}


void __fastcall FollowerSelectItemListViewItem__set_IsSlotRestriction(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSlotRestriction_k__BackingField = value;
}


void __fastcall FollowerSelectItemListViewItem__set_TimesToRestart(
        FollowerSelectItemListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TimesToRestart_k__BackingField = value;
}


void __fastcall FollowerSelectItemListViewItem__set_isRecommendedUser(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isRecommendedUser_k__BackingField = value;
}


void __fastcall FollowerSelectItemListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B3F621 & 1) == 0 )
  {
    sub_1BDB878(&FollowerSelectItemListViewItem___c_TypeInfo, v1);
    byte_4B3F621 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(FollowerSelectItemListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerSelectItemListViewItem___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewItem___c_o *)v2;
  sub_1BDB81C(FollowerSelectItemListViewItem___c_TypeInfo->static_fields);
}


void __fastcall FollowerSelectItemListViewItem___c___ctor(
        FollowerSelectItemListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewItem___c___SetEventUpInfo_b__92_0(
        FollowerSelectItemListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1BDBAD4(this, 0LL);
  return drop->fields.eventId;
}