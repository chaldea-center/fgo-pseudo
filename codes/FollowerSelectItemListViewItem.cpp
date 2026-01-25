void FollowerSelectItemListViewItem___ctor(
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
        bool isGrandServantRestriction,
        const MethodInfo *method)
{
  bool v22; // w22
  IconLabelInfo_o *v23; // x27
  IconLabelInfo_o *v24; // x27
  System_Collections_Generic_Dictionary_int__int__o *v25; // x22
  const MethodInfo *v26; // x2

  v22 = isRecommended;
  if ( (byte_4CE905F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int___ctor___78691600);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C7BAE8(&IconLabelInfo_TypeInfo);
    byte_4CE905F = 1;
  }
  v23 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0);
  this->fields.iconLabelInfo1 = v23;
  sub_1C7BA8C(&this->fields.iconLabelInfo1, v23);
  v24 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo2 = v24;
  sub_1C7BA8C(&this->fields.iconLabelInfo2, v24);
  *(_QWORD *)&this->fields.openClassBoardNum = -1;
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  this->fields.followerInfo = followerInfo;
  this->fields.classIndex = index2;
  sub_1C7BA8C(&this->fields.followerInfo, followerInfo);
  this->fields._Option_k__BackingField = option;
  sub_1C7BA8C(&this->fields._Option_k__BackingField, option);
  this->fields.isRecommended = v22;
  this->fields._IsRecommendFollower_k__BackingField = isRecommendFollower;
  this->fields._isRecommendedUser_k__BackingField = isRecommendedUser;
  this->fields.supportDeckId = supportDeckId;
  this->fields.deckPriority = deckPriority;
  if ( classBoardMaxNumDictionary )
  {
    v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_55042932(
      v25,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_347E374 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___78691600);
  }
  else
  {
    v25 = 0;
  }
  this->fields.classBoardMaxNumDictionary = v25;
  sub_1C7BA8C(&this->fields.classBoardMaxNumDictionary, v25);
  this->fields._GrandGraphId_k__BackingField = grandGraphId;
  this->fields._IsReleasedClassBoard_k__BackingField = isReleasedClassBoard;
  this->fields._IsGrandSupport_k__BackingField = isGrandSupport;
  this->fields._IsGrandServantRestrictionSupport_k__BackingField = isGrandServantRestriction;
  FollowerSelectItemListViewItem__AnalyzeEntity(this, followerClassId, v26);
}


void FollowerSelectItemListViewItem__AnalyzeEntity(
        FollowerSelectItemListViewItem_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  struct ServantEntity_o **p_servantEntity; // x22
  __int64 SvtId; // x0
  const MethodInfo *v7; // x1
  FollowerInfo_o *followerInfo; // x25
  int32_t DisplayServantType; // w0
  int32_t Index; // w0
  FollowerInfo_o *v11; // x25
  int32_t v12; // w23
  const MethodInfo *v13; // x1
  struct FollowerInfo_o *v14; // x8
  int32_t v15; // w23
  const MethodInfo *v16; // x1
  struct EventCampaignEntity_o *EnableFriendPointCampaign; // x0
  Il2CppObject *v18; // x0
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v19; // x8
  FollowerInfo_o *v20; // x24
  QuestRestrictionInfo_o *v21; // x25
  int32_t followerIndex; // w26
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v23; // x8
  FollowerInfo_o *v24; // x24
  QuestRestrictionInfo_o *v25; // x25
  int32_t v26; // w26
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v27; // x8
  FollowerInfo_o *v28; // x24
  QuestRestrictionInfo_o *v29; // x25
  int32_t v30; // w26
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v31; // x8
  FollowerInfo_o *v32; // x24
  QuestRestrictionInfo_o *v33; // x25
  int32_t v34; // w26
  char IsSlotClassRestriction; // w8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v36; // x8
  struct QuestRestrictionInfo_o *v37; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v40; // x8
  FollowerInfo_o *v41; // x24
  QuestRestrictionInfo_o *v42; // x25
  int32_t v43; // w26
  const MethodInfo *v44; // x1
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v45; // x8
  struct QuestRestrictionInfo_o *v46; // x8
  Il2CppObject *Master_object; // x24
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v48; // x8
  struct QuestRestrictionInfo_o *v49; // x8
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // x23
  struct FollowerInfo_o *v51; // x9
  int32_t classId; // w24
  ClassBoardInfo_array *userClassBoardInfo; // x22
  _BOOL4 IsGrandSupport_k__BackingField; // w28
  FollowerInfo_o *v55; // x20
  int32_t v56; // w21
  struct FollowerInfo_o *v57; // x8
  TblFriendMaster_o *v58; // x20
  int32_t type; // w9
  int32_t v60; // w1
  UserEventDataLostEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CE9060 & 1) == 0 )
  {
    sub_1C7BAE8(&ClassBoardUtility_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE9060 = 1;
  }
  entity = 0;
  this->fields.isNpc = 0;
  this->fields.followerClassId = followerClassId;
  this->fields.servantEntity = 0;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C7BA8C(&this->fields.servantEntity, 0);
  *(_WORD *)&this->fields.isUniqueSvtRestriction = 0;
  *(_WORD *)&this->fields.isServantEventUpVal = 0;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValItemList = 0;
  sub_1C7BA8C(&this->fields.eventUpValItemList, 0);
  this->fields.friendPointCampaignEntity = 0;
  SvtId = sub_1C7BA8C(&this->fields.friendPointCampaignEntity, 0);
  *(_QWORD *)&this->fields.openClassBoardNum = -1;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields.isMaxOpenClassBoard = 0;
  followerInfo = this->fields.followerInfo;
  this->fields._IsSlotRestriction_k__BackingField = 0;
  this->fields._IsGrandSvt_k__BackingField = 0;
  this->fields._IsClassRestriction_k__BackingField = 0;
  if ( followerInfo )
  {
    DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, v7);
    Index = FollowerInfo__getIndex(
              followerInfo,
              followerClassId,
              DisplayServantType,
              this->fields.supportDeckId,
              this->fields._GrandGraphId_k__BackingField,
              0);
    v11 = this->fields.followerInfo;
    v12 = Index;
    this->fields.followerIndex = Index;
    SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v13);
    if ( !v11 )
      goto LABEL_75;
    SvtId = FollowerInfo__getSvtId(v11, v12, SvtId, 0);
    if ( (int)SvtId < 1 )
    {
      Option_k__BackingField = this->fields._Option_k__BackingField;
      if ( !Option_k__BackingField )
        goto LABEL_75;
      questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        LOBYTE(questRestrictionInfo) = questRestrictionInfo->fields.isRestriction;
      this->fields.isQuestRestriction = (char)questRestrictionInfo;
    }
    else
    {
      v14 = this->fields.followerInfo;
      if ( !v14 )
        goto LABEL_75;
      v15 = SvtId;
      this->fields.isNpc = Follower__IsNpc(v14->fields.type, 0);
      EnableFriendPointCampaign = FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(this, v16);
      this->fields.friendPointCampaignEntity = EnableFriendPointCampaign;
      sub_1C7BA8C(&this->fields.friendPointCampaignEntity, EnableFriendPointCampaign);
      SvtId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SvtId )
        goto LABEL_75;
      SvtId = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)SvtId,
                         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !SvtId )
        goto LABEL_75;
      v18 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)SvtId,
              v15,
              (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.servantEntity = (struct ServantEntity_o *)v18;
      SvtId = sub_1C7BA8C(&this->fields.servantEntity, v18);
      v19 = this->fields._Option_k__BackingField;
      if ( !v19 )
        goto LABEL_75;
      v20 = this->fields.followerInfo;
      v21 = v19->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v7);
      if ( !v20 )
        goto LABEL_75;
      SvtId = FollowerInfo__GetQuestRestriction(v20, v21, followerIndex, SvtId, 0);
      v23 = this->fields._Option_k__BackingField;
      this->fields.isQuestRestriction = SvtId & 1;
      if ( !v23 )
        goto LABEL_75;
      v24 = this->fields.followerInfo;
      v25 = v23->fields.questRestrictionInfo;
      v26 = this->fields.followerIndex;
      SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v7);
      if ( !v24 )
        goto LABEL_75;
      SvtId = FollowerInfo__getUniqueSvtRestriction(v24, v25, v26, SvtId, 0);
      v27 = this->fields._Option_k__BackingField;
      this->fields.isUniqueSvtRestriction = SvtId & 1;
      if ( !v27 )
        goto LABEL_75;
      v28 = this->fields.followerInfo;
      v29 = v27->fields.questRestrictionInfo;
      v30 = this->fields.followerIndex;
      SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v7);
      if ( !v28 )
        goto LABEL_75;
      SvtId = FollowerInfo__IsUniqueIndividualityRestriction(v28, v29, v30, SvtId, 0);
      v31 = this->fields._Option_k__BackingField;
      this->fields.isUniqueIndividualityRestriction = SvtId & 1;
      if ( !v31 )
        goto LABEL_75;
      v32 = this->fields.followerInfo;
      v33 = v31->fields.questRestrictionInfo;
      v34 = this->fields.followerIndex;
      SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v7);
      if ( !v32 )
        goto LABEL_75;
      SvtId = FollowerInfo__IsClassRestriction(v32, v33, v34, SvtId, 0);
      if ( (SvtId & 1) != 0 )
      {
        IsSlotClassRestriction = 1;
      }
      else
      {
        v40 = this->fields._Option_k__BackingField;
        if ( !v40 )
          goto LABEL_75;
        v41 = this->fields.followerInfo;
        v42 = v40->fields.questRestrictionInfo;
        v43 = this->fields.followerIndex;
        SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v7);
        if ( !v41 )
          goto LABEL_75;
        IsSlotClassRestriction = FollowerInfo__IsSlotClassRestriction(v41, v42, v43, SvtId, 0);
      }
      this->fields._IsClassRestriction_k__BackingField = IsSlotClassRestriction;
      this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v7);
      FollowerSelectItemListViewItem__SetEventUpInfo(this, v44);
      v45 = this->fields._Option_k__BackingField;
      if ( !v45 )
        goto LABEL_75;
      v46 = v45->fields.questRestrictionInfo;
      if ( v46 && v46->fields.isDataLostBattle )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CE827C )
        {
          sub_1C7BAE8(&NetworkManager_TypeInfo);
          byte_4CE827C = 1;
        }
        SvtId = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          SvtId = (__int64)NetworkManager_TypeInfo;
        }
        v48 = this->fields._Option_k__BackingField;
        if ( !v48 )
          goto LABEL_75;
        v49 = v48->fields.questRestrictionInfo;
        if ( !v49 || !Master_object )
          goto LABEL_75;
        SvtId = UserEventDataLostMaster__TryGetEntity(
                  (UserEventDataLostMaster_o *)Master_object,
                  &entity,
                  *(_QWORD *)(*(_QWORD *)(SvtId + 184) + 64LL),
                  v49->fields.dataLostBattleId,
                  0);
        if ( (SvtId & 1) != 0 )
        {
          SvtId = (__int64)entity;
          if ( !entity )
            goto LABEL_75;
          SvtId = UserEventDataLostEntity__IsRestart(entity, v15, 0);
          if ( !entity )
            goto LABEL_75;
          if ( (SvtId & 1) != 0 )
          {
            SvtId = UserEventDataLostEntity__GetTimesToRestart(entity, v15, 0);
            this->fields._TimesToRestart_k__BackingField = SvtId;
          }
          else
          {
            SvtId = UserEventDataLostEntity__IsDataLost(entity, v15, 0);
            if ( (SvtId & 1) != 0 )
              this->fields._IsDataLost_k__BackingField = 1;
          }
        }
      }
      classBoardMaxNumDictionary = this->fields.classBoardMaxNumDictionary;
      if ( classBoardMaxNumDictionary )
      {
        if ( !*p_servantEntity )
          goto LABEL_75;
        v51 = this->fields.followerInfo;
        if ( !v51 )
          goto LABEL_75;
        classId = (*p_servantEntity)->fields.classId;
        userClassBoardInfo = v51->fields.userClassBoardInfo;
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
          0);
      }
      else
      {
        *(_QWORD *)&this->fields.openClassBoardNum = -1;
        *(_WORD *)&this->fields.isMaxOpenClassBoard = 0;
      }
      v55 = this->fields.followerInfo;
      v56 = this->fields.followerIndex;
      SvtId = FollowerSelectItemListViewItem__get_DisplayServantType(this, v7);
      if ( !v55 )
        goto LABEL_75;
      SvtId = (__int64)FollowerInfo__getServantLeaderInfo(v55, v56, SvtId, 0);
      if ( !SvtId )
        goto LABEL_75;
      *(_QWORD *)&this->fields.hp = *(_QWORD *)(SvtId + 76);
      this->fields._IsGrandSvt_k__BackingField = ServantLeaderInfo__get_IsGrandSvt((ServantLeaderInfo_o *)SvtId, 0);
    }
    SvtId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SvtId )
    {
      SvtId = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)SvtId,
                         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      v57 = this->fields.followerInfo;
      if ( v57 )
      {
        v58 = (TblFriendMaster_o *)SvtId;
        if ( v57->fields.type == 5
          || SvtId
          && (SvtId = TblFriendMaster__isMessageDisp((TblFriendMaster_o *)SvtId, 3, v57->fields.userId, 0),
              v57 = this->fields.followerInfo,
              this->fields.isMessageDisp = SvtId & 1,
              v57) )
        {
          type = v57->fields.type;
          if ( (type | 4) == 5 )
          {
            if ( !v58 )
              goto LABEL_75;
            if ( type == 5 )
              v60 = 9;
            else
              v60 = 3;
            this->fields.isLockUser = TblFriendMaster__IsLockUser(v58, v60, v57->fields.userId, 0);
          }
          SvtId = (__int64)this->fields.iconLabelInfo1;
          if ( SvtId )
          {
            IconLabelInfo__Clear((IconLabelInfo_o *)SvtId, 0);
            SvtId = (__int64)this->fields.iconLabelInfo2;
            if ( SvtId )
            {
              IconLabelInfo__Clear((IconLabelInfo_o *)SvtId, 0);
              return;
            }
          }
        }
      }
    }
LABEL_75:
    sub_1C7BD40(SvtId, v7);
  }
  v36 = this->fields._Option_k__BackingField;
  this->fields.followerIndex = 0;
  if ( !v36 )
    goto LABEL_75;
  v37 = v36->fields.questRestrictionInfo;
  if ( v37 )
    LOBYTE(v37) = v37->fields.isRestriction;
  this->fields.isQuestRestriction = (char)v37;
}


int64_t FollowerSelectItemListViewItem__CalculatePriorityKindSortValue(
        FollowerSelectItemListViewItem_o *this,
        int32_t priorityKind,
        EquipTargetInfo_o *equipInfo,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x22
  const MethodInfo *v8; // x3
  int32_t v9; // w8
  int64_t result; // x0
  System_Collections_Generic_Dictionary_object__int__o *v11; // x20
  __int64 v12; // x22
  __int64 *v13; // x21
  int32_t Item; // w8
  BalanceConfig_c *v15; // x0
  int32_t limitCount; // w20
  __int64 v17; // x19
  __int64 v18; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4CE9064 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1311/*"2"*/);
    sub_1C7BAE8(&StringLiteral_1166/*"1"*/);
    sub_1C7BAE8(&StringLiteral_1116/*"0"*/);
    byte_4CE9064 = 1;
  }
  if ( !equipInfo )
    return 0;
  v7 = *(_QWORD *)&equipInfo->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&equipInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v7;
  *(_QWORD *)&v19.fields.fakeValue = v6;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v19, 0);
  result = 0;
  if ( priorityKind )
  {
    if ( v9 >= 1 )
    {
      result = (int64_t)FollowerSelectItemListViewItem__GetValuesDictionary(0, priorityKind, equipInfo, v8);
      if ( result )
      {
        v11 = (System_Collections_Generic_Dictionary_object__int__o *)result;
        if ( (unsigned int)(priorityKind - 2) < 4 )
        {
          if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)result,
                 (Il2CppObject *)StringLiteral_1116/*"0"*/,
                 (const MethodInfo_34E9950 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
            && System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 v11,
                 (Il2CppObject *)StringLiteral_1166/*"1"*/,
                 (const MethodInfo_34E9950 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                   v11,
                   (Il2CppObject *)StringLiteral_1116/*"0"*/,
                   (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
            {
              v12 = 100000;
            }
            else
            {
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     v11,
                     (Il2CppObject *)StringLiteral_1116/*"0"*/,
                     (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
              {
                v18 = 0;
LABEL_28:
                limitCount = equipInfo->fields.limitCount;
                v15 = BalanceConfig_TypeInfo;
                v17 = v18 + 10LL * (equipInfo->fields.atk + equipInfo->fields.hp);
                if ( BalanceConfig_TypeInfo->_2.cctor_finished )
                  return v17 | (limitCount >= v15->static_fields->ServantLimitMax);
                goto LABEL_20;
              }
              v12 = 100000000;
            }
            v18 = v12
                * System_Collections_Generic_Dictionary_object__int___get_Item(
                    v11,
                    (Il2CppObject *)StringLiteral_1166/*"1"*/,
                    (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            goto LABEL_28;
          }
          return 0;
        }
        if ( priorityKind == 6 )
        {
          v13 = &StringLiteral_1311/*"2"*/;
LABEL_18:
          if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)result,
                 (Il2CppObject *)*v13,
                 (const MethodInfo_34E9950 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     v11,
                     (Il2CppObject *)*v13,
                     (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v15 = BalanceConfig_TypeInfo;
            limitCount = equipInfo->fields.limitCount;
            v17 = 100000LL * Item + 10LL * (equipInfo->fields.atk + equipInfo->fields.hp);
            if ( BalanceConfig_TypeInfo->_2.cctor_finished )
              return v17 | (limitCount >= v15->static_fields->ServantLimitMax);
LABEL_20:
            j_il2cpp_runtime_class_init_0(v15);
            v15 = BalanceConfig_TypeInfo;
            return v17 | (limitCount >= v15->static_fields->ServantLimitMax);
          }
          return 0;
        }
        if ( priorityKind == 1 )
        {
          v13 = &StringLiteral_1116/*"0"*/;
          goto LABEL_18;
        }
        return 0;
      }
    }
  }
  return result;
}


bool FollowerSelectItemListViewItem__CheckSlotRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v2; // x19
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  FollowerInfo_o *followerInfo; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  int32_t followerIndex; // w22
  bool v7; // w8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v8; // x8
  int sortValue2B; // w21
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v11; // x8
  QuestRestrictionInfo_o *v12; // x8
  int32_t sortValue2B_high; // w20
  const MethodInfo *v14; // x1
  FollowerInfo_o *v15; // x21
  int32_t v16; // w22
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v17; // x8
  ServantLeaderInfo_o *v18; // x21
  QuestRestrictionInfo_o *v19; // x19
  struct System_String_o *sortStr1; // x22
  int64_t sortValue1; // x23
  int32_t v22; // w0
  int32_t limitCount; // w22
  int32_t v24; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v2 = this;
  if ( (byte_4CE9061 & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (FollowerSelectItemListViewItem_o *)sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CE9061 = 1;
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
                                               0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  v8 = v2->fields._Option_k__BackingField;
  if ( !v8 )
    goto LABEL_26;
  this = (FollowerSelectItemListViewItem_o *)v8->fields.questRestrictionInfo;
  if ( !this )
    goto LABEL_26;
  if ( QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)this, 0) )
    return 0;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_26;
  sortValue2B = this->fields.sortValue2B;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_26;
  v7 = 0;
  if ( sortValue2B < 1 || v2->fields.isNpc )
    return v7;
  v11 = v2->fields._Option_k__BackingField;
  if ( !v11 )
    goto LABEL_26;
  v12 = v11->fields.questRestrictionInfo;
  if ( !v12 )
    goto LABEL_26;
  sortValue2B_high = HIDWORD(this->fields.sortValue2B);
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43975148(v12, sortValue2B_high, 0) )
    return 0;
  v15 = v2->fields.followerInfo;
  v16 = v2->fields.followerIndex;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v2, v14);
  if ( !v15 )
    goto LABEL_26;
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getServantLeaderInfo(v15, v16, (int32_t)this, 0);
  v17 = v2->fields._Option_k__BackingField;
  if ( !v17 )
    goto LABEL_26;
  v18 = (ServantLeaderInfo_o *)this;
  if ( !this )
    goto LABEL_26;
  v19 = v17->fields.questRestrictionInfo;
  sortValue1 = this->fields.sortValue1;
  sortStr1 = this->fields.sortStr1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = sortValue1;
  *(_QWORD *)&v25.fields.fakeValue = sortStr1;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v25, 0);
  limitCount = v18->fields.limitCount;
  v24 = v22;
  this = (FollowerSelectItemListViewItem_o *)ServantLeaderInfo__getDispLimitCount(v18, 0);
  if ( !v19 )
LABEL_26:
    sub_1C7BD40(this, method);
  return QuestRestrictionInfo__IsRestrictionServantIndividuality(
           v19,
           v24,
           limitCount,
           (int32_t)this,
           sortValue2B_high,
           1,
           0);
}


bool FollowerSelectItemListViewItem__ChkWholeFilter(
        FollowerSelectItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  if ( !sort )
    sub_1C7BD40(this, 0);
  if ( !ListViewSort__GetFilter(sort, 19, 0) && !ListViewSort__GetFilter(sort, 18, 0)
    || this->fields.isEquipEventUpVal && ListViewSort__GetFilter(sort, 19, 0) )
  {
    return 1;
  }
  if ( this->fields.isServantEventUpVal )
    return ListViewSort__GetFilter(sort, 18, 0);
  return 0;
}


bool FollowerSelectItemListViewItem__DisplaySupportInfoButton(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return !this->fields._IsRecommendFollower_k__BackingField;
}


void FollowerSelectItemListViewItem__Finalize(FollowerSelectItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool FollowerSelectItemListViewItem__GetAppendSkillInfo(
        FollowerSelectItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w23
  int32_t DisplayServantType; // w0
  BalanceConfig_c *v10; // x0
  SkillInfo_array *v11; // x0

  if ( (byte_4CE906C & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&SkillInfo___TypeInfo);
    byte_4CE906C = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    followerIndex = this->fields.followerIndex;
    DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, (const MethodInfo *)skillInfoList);
    FollowerInfo__GetAppendSkillInfo(followerInfo, skillInfoList, followerIndex, DisplayServantType, isNpc, 0);
  }
  else
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    v11 = (SkillInfo_array *)sub_1C7BB90(
                               SkillInfo___TypeInfo,
                               (unsigned int)v10->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v11;
    sub_1C7BA8C(skillInfoList, v11);
  }
  return followerInfo != 0;
}


EventCampaignEntity_o *FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  FollowerSelectItemListViewItem_o *v3; // x19
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v4; // x8
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x8
  int max_length; // w9
  int v7; // w11
  EventCampaignEntity_o *v8; // x10
  EventCampaignEntity_o *v9; // x13
  EventCampaignEntity_o *v10; // x12
  struct System_Int32_array *targetIds; // x14
  il2cpp_array_size_t v12; // x15
  int v13; // w16

  Option_k__BackingField = this->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    goto LABEL_31;
  if ( !Option_k__BackingField->fields.friendPointCampaignEntityList )
    return 0;
  v3 = this;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_SvtId(this, method);
  if ( (int)this < 1 )
    return 0;
  v4 = v3->fields._Option_k__BackingField;
  if ( !v4 || (friendPointCampaignEntityList = v4->fields.friendPointCampaignEntityList) == 0 )
LABEL_31:
    sub_1C7BD40(this, method);
  max_length = friendPointCampaignEntityList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v7 == max_length )
        sub_1C7BD48(this);
      v10 = friendPointCampaignEntityList->m_Items[v7];
      if ( !v10 )
        goto LABEL_31;
      targetIds = v10->fields.targetIds;
      if ( targetIds && (v12 = targetIds->max_length) != 0 )
      {
        if ( !v3->fields.isNpc && (!v8 || v10->fields.idx > v8->fields.idx) && (int)v12 >= 1 )
        {
          v13 = 0;
          while ( targetIds->m_Items[v13] != (_DWORD)this )
          {
            if ( (_DWORD)v12 == ++v13 )
              goto LABEL_22;
          }
          v8 = friendPointCampaignEntityList->m_Items[v7];
        }
      }
      else if ( !v9 || v10->fields.idx > v9->fields.idx )
      {
        goto LABEL_23;
      }
LABEL_22:
      v10 = v9;
LABEL_23:
      ++v7;
      v9 = v10;
      if ( v7 == max_length )
        goto LABEL_28;
    }
  }
  v10 = 0;
  v8 = 0;
LABEL_28:
  if ( v8 )
    return v8;
  else
    return v10;
}


System_String_o *FollowerSelectItemListViewItem__GetFriendPointCampaignName(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  System_String_o *v6; // x19
  Il2CppObject *v7; // x0
  int v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4CE906B & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_6455/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/);
    byte_4CE906B = 1;
  }
  if ( !this->fields.friendPointCampaignEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_6455/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, 0);
  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( !friendPointCampaignEntity )
    sub_1C7BD40(v3, v4);
  v6 = v3;
  v9 = friendPointCampaignEntity->fields.value / 1000;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format(v6, v7, 0);
}


int32_t FollowerSelectItemListViewItem__GetFriendPointCampaignValue(
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


int32_t FollowerSelectItemListViewItem__GetFriendPointUpVal(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  int32_t DisplayServantType; // w0
  System_Collections_Generic_List_T__o *FriendPointUpTypeVals; // x0
  __int64 v7; // x1
  int v8; // w22
  int current_high; // w23
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  int32_t friendPointUpVal; // w8
  int friendPointUpMaxVal; // w9
  FollowerSelectItemListViewManager_FollowerSelectItemOption_Fields *p_fields; // t2
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CE906A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
    byte_4CE906A = 1;
  }
  memset(&v15, 0, sizeof(v15));
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, method);
  FriendPointUpTypeVals = (System_Collections_Generic_List_T__o *)FollowerInfo__GetFriendPointUpTypeVals(
                                                                    followerInfo,
                                                                    followerIndex,
                                                                    DisplayServantType,
                                                                    0);
  if ( !FriendPointUpTypeVals )
    goto LABEL_19;
  System_Collections_Generic_List_ValueTuple_Int32Enum__int____GetEnumerator(
    &v15,
    FriendPointUpTypeVals,
    (const MethodInfo_37E70E4 *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
  v8 = 0;
  current_high = 0;
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____MoveNext(
            &v15,
            (const MethodInfo_35B4A3C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__) )
  {
    if ( LODWORD(v15.fields._current) == 123 )
    {
      v8 += HIDWORD(v15.fields._current);
    }
    else if ( LODWORD(v15.fields._current) == 104 && current_high < SHIDWORD(v15.fields._current) )
    {
      current_high = HIDWORD(v15.fields._current);
    }
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____Dispose(
    &v15,
    (const MethodInfo_35B4A38 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
  Option_k__BackingField = this->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
LABEL_19:
    sub_1C7BD40(FriendPointUpTypeVals, v7);
  p_fields = &Option_k__BackingField->fields;
  friendPointUpVal = Option_k__BackingField->fields.friendPointUpVal;
  friendPointUpMaxVal = p_fields->friendPointUpMaxVal;
  if ( friendPointUpMaxVal >= current_high )
    return friendPointUpVal + v8;
  else
    return current_high + v8 - friendPointUpMaxVal + friendPointUpVal;
}


bool FollowerSelectItemListViewItem__GetNpInfo(
        FollowerSelectItemListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x21
  int32_t followerIndex; // w22
  int32_t DisplayServantType; // w3
  TreasureDvcInfo_o *v9; // x20

  if ( (byte_4CE9069 & 1) == 0 )
  {
    sub_1C7BAE8(&TreasureDvcInfo_TypeInfo);
    byte_4CE9069 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    followerIndex = this->fields.followerIndex;
    DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, (const MethodInfo *)tdInfo);
    return FollowerInfo__getTreasureDeviceInfo(followerInfo, tdInfo, followerIndex, DisplayServantType, 0);
  }
  else
  {
    v9 = (TreasureDvcInfo_o *)sub_1C7BD34(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0);
    *tdInfo = v9;
    sub_1C7BA8C(tdInfo, v9);
    return 0;
  }
}


bool FollowerSelectItemListViewItem__GetSkillInfo(
        FollowerSelectItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w22
  int32_t DisplayServantType; // w0
  BalanceConfig_c *v8; // x0
  SkillInfo_array *v9; // x0

  if ( (byte_4CE9068 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&SkillInfo___TypeInfo);
    byte_4CE9068 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    followerIndex = this->fields.followerIndex;
    DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, (const MethodInfo *)skillInfoList);
    FollowerInfo__getSkillInfo(followerInfo, skillInfoList, followerIndex, DisplayServantType, 0);
  }
  else
  {
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    v9 = (SkillInfo_array *)sub_1C7BB90(SkillInfo___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
    *skillInfoList = v9;
    sub_1C7BA8C(skillInfoList, v9);
  }
  return followerInfo != 0;
}


int32_t FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(
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
  return FollowerInfo__getTreasureDeviceLevelIcon(followerInfo, followerIndex, DisplayServantType, 0);
}


System_Collections_Generic_Dictionary_string__int__o *FollowerSelectItemListViewItem__GetValuesDictionary(
        FollowerSelectItemListViewItem_o *this,
        int32_t kind,
        EquipTargetInfo_o *equipInfo,
        const MethodInfo *method)
{
  __int64 v6; // x19
  __int64 v7; // x20
  Il2CppObject *Master_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  ServantSkillMaster_o *v11; // x19
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  __int64 v13; // x1
  ServantSkillEntity_array *ServantSkillList; // x19
  Il2CppObject *v15; // x20
  Il2CppObject *v16; // x21
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v18; // x22
  unsigned __int64 v19; // x24
  int v20; // w26
  int max_length; // w8
  int32_t v22; // w2
  int v23; // w9
  ServantSkillEntity_o *v24; // x10
  SkillLvEntity_o *v25; // x8
  unsigned __int64 v26; // x29
  struct System_Int32_array *funcId; // x8
  unsigned __int64 max_length_low; // x9
  int monitor; // w8
  unsigned __int64 v30; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v32; // x23
  Il2CppObject *v33; // [xsp+0h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4CE9063 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1372/*"3"*/);
    byte_4CE9063 = 1;
  }
  v33 = 0;
  entity = 0;
  if ( equipInfo )
  {
    v7 = *(_QWORD *)&equipInfo->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&equipInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v35.fields.currentCryptoKey = v7;
    *(_QWORD *)&v35.fields.fakeValue = v6;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v35, 0) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      v10 = *(_QWORD *)&equipInfo->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&equipInfo->fields.svtId.fields.fakeValue;
      v11 = (ServantSkillMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v36.fields.currentCryptoKey = v10;
      *(_QWORD *)&v36.fields.fakeValue = v9;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                         v36,
                                                                         0);
      if ( !v11 )
        goto LABEL_71;
      ServantSkillList = ServantSkillMaster__getServantSkillList(v11, (int32_t)result, 0);
      v15 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v16 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(equipInfo, 0);
      if ( !result )
        goto LABEL_71;
      entries = result->fields._entries;
      v18 = result;
      if ( (int)entries >= 1 )
      {
        v19 = 0;
        v20 = kind - 1;
        while ( 1 )
        {
          if ( v19 >= (unsigned int)entries )
            goto LABEL_72;
          if ( !ServantSkillList )
            goto LABEL_71;
          max_length = ServantSkillList->max_length;
          v22 = *(&v18->fields._count + v19);
          if ( max_length >= 1 )
          {
            v23 = 0;
            while ( max_length != v23 )
            {
              v24 = ServantSkillList->m_Items[v23];
              if ( !v24 )
                goto LABEL_71;
              if ( v24->fields.skillId == v22 && v24->fields.eventId > 0 )
                goto LABEL_68;
              if ( max_length == ++v23 )
                goto LABEL_24;
            }
LABEL_72:
            sub_1C7BD48(result);
          }
LABEL_24:
          if ( !v15 )
            goto LABEL_71;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             (SkillLvMaster_o *)v15,
                                                                             &entity,
                                                                             v22,
                                                                             1,
                                                                             0);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_68:
          LODWORD(entries) = v18->fields._entries;
          if ( (__int64)++v19 >= (int)entries )
            return 0;
        }
        v25 = entity;
        if ( entity )
        {
          v26 = 0;
          while ( 1 )
          {
            funcId = v25->fields.funcId;
            if ( !funcId )
              break;
            max_length_low = LODWORD(funcId->max_length);
            if ( (__int64)v26 >= (int)max_length_low )
              goto LABEL_68;
            if ( v26 >= max_length_low )
              goto LABEL_72;
            if ( v16 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
                                                                                 &v33,
                                                                                 funcId->m_Items[v26],
                                                                                 (const MethodInfo_342E348 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v20 )
                {
                  case 0:
                    if ( !v33 )
                      goto LABEL_71;
                    monitor = (int)v33[1].monitor;
                    if ( monitor != 104 && monitor != 123 )
                      break;
                    goto LABEL_49;
                  case 1:
                    if ( !v33 )
                      goto LABEL_71;
                    if ( LODWORD(v33[1].monitor) != 101 )
                      break;
                    goto LABEL_49;
                  case 2:
                    if ( !v33 )
                      goto LABEL_71;
                    if ( LODWORD(v33[1].monitor) != 112 )
                      break;
                    goto LABEL_49;
                  case 3:
                    if ( !v33 )
                      goto LABEL_71;
                    if ( LODWORD(v33[1].monitor) != 111 )
                      break;
                    goto LABEL_49;
                  case 4:
                    if ( !v33 )
                      goto LABEL_71;
                    if ( (LODWORD(v33[1].monitor) | 8) == 0x6E )
                      goto LABEL_49;
                    break;
                  case 5:
                    if ( !v33 )
                      goto LABEL_71;
                    if ( LODWORD(v33[1].monitor) != 106 )
                      break;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_71;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(entity, 0);
                    if ( !result )
                      goto LABEL_71;
                    entries_low = LODWORD(result->fields._entries);
                    if ( (__int64)v26 > (int)entries_low )
                      break;
                    if ( v26 >= entries_low )
                      goto LABEL_72;
                    v32 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&result->fields._count
                                                                                  + v26);
                    if ( !v32 )
                      break;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v32,
                           (Il2CppObject *)StringLiteral_1372/*"3"*/,
                           (const MethodInfo_34E9950 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v32,
                                                                                         (Il2CppObject *)StringLiteral_1372/*"3"*/,
                                                                                         (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( (_DWORD)result )
                        break;
                    }
LABEL_49:
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_71;
                    result = SkillLvEntity__GetFollowerValsDictionary(entity, 0);
                    if ( result )
                      return result;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_71;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(entity, 0);
                    if ( !result )
                      goto LABEL_71;
                    v30 = LODWORD(result->fields._entries);
                    if ( (__int64)v26 >= (int)v30 )
                      break;
                    if ( v26 >= v30 )
                      goto LABEL_72;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields._count
                                                                                     + v26);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_49;
                }
              }
              v25 = entity;
              ++v26;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_71:
        sub_1C7BD40(result, v13);
      }
    }
  }
  return 0;
}


bool FollowerSelectItemListViewItem__IsFriendPointCampaign(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.friendPointCampaignEntity != 0;
}


void FollowerSelectItemListViewItem__Modify(FollowerSelectItemListViewItem_o *this, const MethodInfo *method)
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
  DisplayServantType = FollowerInfo__getSvtId(followerInfo, followerIndex, DisplayServantType, 0);
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
        DisplayServantType = FollowerInfo__getUniqueSvtRestriction(v8, questRestrictionInfo, v10, DisplayServantType, 0);
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
                                                              0);
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
    sub_1C7BD40(DisplayServantType, v6);
  }
  *(_WORD *)&this->fields.isUniqueSvtRestriction = 0;
  this->fields._IsSlotRestriction_k__BackingField = 0;
}


void FollowerSelectItemListViewItem__SetEventUpInfo(FollowerSelectItemListViewItem_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v2; // x19
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v6; // x8
  FollowerInfo_o *followerInfo; // x25
  EventUpValSetupInfo_o *v8; // x23
  int32_t followerIndex; // w24
  bool *p_isEquipEventUpVal; // x21
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v11; // x8
  struct IconLabelInfo_o *iconLabelInfo1; // x8
  Il2CppObject *Instance; // x22
  const MethodInfo *v14; // x1
  struct System_String_o *sortStr1; // x23
  int64_t sortValue1; // x24
  int32_t v17; // w23
  const MethodInfo *v18; // x1
  int32_t Rarity; // w24
  const MethodInfo *v20; // x1
  struct IconLabelInfo_o *v21; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v22; // x9
  bool v23; // w8
  System_Collections_Generic_List_object__o *v24; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  FollowerSelectItemListViewItem___c_c *v27; // x0
  System_Func_object__int__o *_9__96_0; // x23
  Il2CppObject *v29; // x24
  struct FollowerSelectItemListViewItem___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t sortIndex; // w9
  FollowerSelectItemListViewItem_o *v34; // x22
  EventPersonalMargeUpValInfo_c **v35; // x28
  int32_t v36; // w8
  ServantEntity_o *servantEntity; // x25
  int32_t v38; // w23
  EventPersonalMargeUpValInfo_o *v39; // x24
  __int64 v40; // x8
  FollowerSelectItemListViewItem_o *v41; // x24
  unsigned __int64 v42; // x25
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  EventServantPointRankMaster_o *v47; // x24
  const MethodInfo *v48; // x1
  int32_t v49; // w25
  FollowerSelectItemListViewItem_o *v50; // x0
  EventPersonalMargeUpValInfo_c **v51; // x19
  struct System_String_o *v52; // x26
  int64_t v53; // x28
  int32_t v54; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v56; // w24
  EventMargeItemUpValInfo_o *v57; // x25
  const MethodInfo *v58; // x1
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *AdjustUpValInfoArray; // x19
  EventMargeItemUpValInfo_array *AddUpValInfos; // x0
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // [xsp+0h] [xbp-80h]
  FollowerSelectItemListViewItem_o *v62; // [xsp+8h] [xbp-78h]
  bool isDuplicate; // [xsp+10h] [xbp-70h] BYREF
  int32_t actMaxRarity; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  v2 = this;
  if ( (byte_4CE9062 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C7BAE8(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C7BAE8(&System_Func_EventDropUpValInfo__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C7BAE8(&Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__96_0__);
    this = (FollowerSelectItemListViewItem_o *)sub_1C7BAE8(&FollowerSelectItemListViewItem___c_TypeInfo);
    byte_4CE9062 = 1;
  }
  skillName = 0;
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
  if ( !eventIdList->max_length )
    return;
  *(_WORD *)&v2->fields.isServantEventUpVal = 0;
  v2->fields.isEventUpVal = 0;
  v2->fields.eventUpValItemList = 0;
  this = (FollowerSelectItemListViewItem_o *)sub_1C7BA8C(&v2->fields.eventUpValItemList, 0);
  v6 = v2->fields._Option_k__BackingField;
  if ( !v6 )
    goto LABEL_75;
  followerInfo = v2->fields.followerInfo;
  v8 = v6->fields.setupInfo;
  followerIndex = v2->fields.followerIndex;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v2, method);
  if ( !followerInfo )
    goto LABEL_75;
  p_isEquipEventUpVal = &v2->fields.isEquipEventUpVal;
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEventUpVal_42322604(
                                               followerInfo,
                                               &v2->fields.eventUpValInfo,
                                               &v2->fields.isServantEventUpVal,
                                               &v2->fields.isEquipEventUpVal,
                                               v8,
                                               followerIndex,
                                               (int32_t)this,
                                               0);
  v11 = v2->fields._Option_k__BackingField;
  if ( !v11 )
    goto LABEL_75;
  if ( !v11->fields.isServantBonusFilterEnable )
    v2->fields.isServantEventUpVal = 0;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, method);
  if ( this )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, method);
    if ( !this )
      goto LABEL_75;
    iconLabelInfo1 = this->fields.iconLabelInfo1;
    if ( iconLabelInfo1 )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, v14);
      if ( !this )
        goto LABEL_75;
      sortValue1 = this->fields.sortValue1;
      sortStr1 = this->fields.sortStr1;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v66.fields.currentCryptoKey = sortValue1;
      *(_QWORD *)&v66.fields.fakeValue = sortStr1;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v66, 0);
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, v18);
      if ( !this )
        goto LABEL_75;
      Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0);
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, v20);
      if ( !this )
        goto LABEL_75;
      v21 = this->fields.iconLabelInfo1;
      if ( !v21 )
        goto LABEL_75;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                   *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v21[1].klass,
                                                   0);
      if ( !Instance )
        goto LABEL_75;
      this = (FollowerSelectItemListViewItem_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                   (PartyOrganizationUtility_o *)Instance,
                                                   &skillName,
                                                   &actMaxRarity,
                                                   v17,
                                                   Rarity,
                                                   (int32_t)this,
                                                   -1,
                                                   0);
      LODWORD(iconLabelInfo1) = (unsigned __int8)this & 1;
    }
  }
  else
  {
    LODWORD(iconLabelInfo1) = 0;
  }
  v22 = v2->fields._Option_k__BackingField;
  if ( !v22 )
    goto LABEL_75;
  if ( (unsigned int)iconLabelInfo1 | !v22->fields.isServantEquipBonusFilterEnable )
  {
    v23 = 0;
    *p_isEquipEventUpVal = 0;
  }
  else
  {
    v23 = *p_isEquipEventUpVal;
  }
  v2->fields.isEventUpVal = v23 || v2->fields.isServantEventUpVal;
  v24 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  eventUpValInfo = v2->fields.eventUpValInfo;
  if ( !eventUpValInfo )
    goto LABEL_75;
  dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
  v27 = FollowerSelectItemListViewItem___c_TypeInfo;
  if ( !FollowerSelectItemListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItem___c_TypeInfo);
    v27 = FollowerSelectItemListViewItem___c_TypeInfo;
  }
  p_eventUpValItemList = &v2->fields.eventUpValItemList;
  _9__96_0 = (System_Func_object__int__o *)v27->static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = FollowerSelectItemListViewItem___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__96_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_EventDropUpValInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__96_0,
      v29,
      Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__96_0__,
      0);
    static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__96_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__96_0;
    sub_1C7BA8C(&static_fields->__9__96_0, _9__96_0);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               dropList,
                                                               (System_Func_TSource__TResult__o *)_9__96_0,
                                                               (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
  v32 = System_Linq_Enumerable__Distinct_int_(
          v31,
          (const MethodInfo_3192930 *)Method_System_Linq_Enumerable_Distinct_int___);
  this = (FollowerSelectItemListViewItem_o *)System_Linq_Enumerable__ToArray_int_(
                                               v32,
                                               (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
  actMaxRarity = 0;
  if ( !this )
    goto LABEL_75;
  sortIndex = this->fields.sortIndex;
  v34 = this;
  if ( sortIndex >= 1 )
  {
    v35 = &EventPersonalMargeUpValInfo_TypeInfo;
    v36 = 0;
    v62 = v2;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)sortIndex )
        goto LABEL_76;
      servantEntity = v2->fields.servantEntity;
      v38 = *((_DWORD *)&v34->fields.sortValue0 + v36);
      v39 = (EventPersonalMargeUpValInfo_o *)sub_1C7BD34(*v35);
      EventPersonalMargeUpValInfo___ctor(v39, v38, servantEntity, 0);
      this = (FollowerSelectItemListViewItem_o *)v2->fields.eventUpValInfo;
      if ( !this )
        goto LABEL_75;
      this = (FollowerSelectItemListViewItem_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)this, 0, 0);
      if ( !v39 )
        goto LABEL_75;
      EventPersonalMargeUpValInfo__Add(v39, (EventDropItemUpValInfo_array *)this, 0);
      this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__IsEmpty(v39, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__GetList(v39, 0);
        if ( !this )
          goto LABEL_75;
        v40 = *(_QWORD *)&this->fields.sortIndex;
        v41 = this;
        if ( (int)v40 >= 1 )
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
          this = (FollowerSelectItemListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
          if ( !this )
            goto LABEL_75;
          v47 = (EventServantPointRankMaster_o *)this;
          this = (FollowerSelectItemListViewItem_o *)EventServantPointRankMaster__IsEnableEvent(
                                                       (EventServantPointRankMaster_o *)this,
                                                       v38,
                                                       0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, v48);
            if ( !this )
              goto LABEL_75;
            v49 = *(_DWORD *)&this->fields.isMaxOpenClassBoard;
            v50 = v2;
            v51 = v35;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v50, method);
            if ( !this )
              goto LABEL_75;
            v53 = this->fields.sortValue1;
            v52 = this->fields.sortStr1;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v67.fields.currentCryptoKey = v53;
            *(_QWORD *)&v67.fields.fakeValue = v52;
            v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v67, 0);
            EnableEntity = EventServantPointRankMaster__GetEnableEntity(v47, v38, v49, v54, 0);
            v56 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
            v35 = v51;
            v57 = (EventMargeItemUpValInfo_o *)sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
            EventMargeItemUpValInfo___ctor_42292896(v57, v38, 0);
            v2 = v62;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v62, v58);
            if ( !this )
              goto LABEL_75;
            if ( !v57 )
              goto LABEL_75;
            EventMargeItemUpValInfo__SetServantPointInfo(v57, *(_DWORD *)&this->fields.isMaxOpenClassBoard, v56, 1, 0);
            if ( !v24 )
              goto LABEL_75;
            System_Collections_Generic_List_object___Insert(
              v24,
              0,
              (Il2CppObject *)v57,
              (const MethodInfo_383FBAC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
          }
        }
      }
      v36 = actMaxRarity + 1;
      actMaxRarity = v36;
      sortIndex = v34->fields.sortIndex;
      if ( v36 >= sortIndex )
        goto LABEL_71;
    }
    v42 = 0;
    while ( v42 < (unsigned int)v40 )
    {
      if ( !v24 )
        goto LABEL_75;
      method = (const MethodInfo *)*(&v41->fields.sortValue0 + v42);
      items = v24->fields._items;
      v44 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v24->fields._version;
      if ( !items )
        goto LABEL_75;
      size = v24->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)method,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v46[4] = (Il2CppClass *)method;
        this = (FollowerSelectItemListViewItem_o *)sub_1C7BA8C(v46 + 4, method);
      }
      LODWORD(v40) = v41->fields.sortIndex;
      if ( (__int64)++v42 >= (int)v40 )
        goto LABEL_52;
    }
LABEL_76:
    sub_1C7BD48(this);
  }
LABEL_71:
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this
    || (AdjustUpValInfoArray = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray((PartyOrganizationUtility_o *)this, &isDuplicate, (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v24, 0),
        (this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_75:
    sub_1C7BD40(this, method);
  }
  AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                    (PartyOrganizationUtility_o *)this,
                    AdjustUpValInfoArray,
                    0);
  *p_eventUpValItemList = AddUpValInfos;
  sub_1C7BA8C(p_eventUpValItemList, AddUpValInfos);
}


void FollowerSelectItemListViewItem__SetIndex(
        FollowerSelectItemListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.index = index;
}


void FollowerSelectItemListViewItem__SetSkillChangeInfo(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeader; // x0

  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, method);
  if ( ServantLeader )
    ServantLeaderInfo__SetSkillChangeInfo(ServantLeader, 0);
}


bool FollowerSelectItemListViewItem__SetSortValue(
        FollowerSelectItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v4; // x19
  FollowerInfo_o *followerInfo; // x21
  int32_t type; // w29
  int32_t followerIndex; // w22
  int32_t DisplayServantType; // w0
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  int v10; // w21
  int64_t *p_sortValue0; // x25
  _BOOL4 isNpc; // w8
  __int64 v13; // x8
  int v14; // w8
  IconLabelInfo_o *v15; // x20
  FollowerInfo_o *v16; // x21
  int32_t v17; // w22
  int32_t v18; // w0
  FollowerInfo_o *v19; // x22
  int32_t v20; // w23
  int32_t v21; // w21
  const MethodInfo *v22; // x1
  FollowerInfo_o *v23; // x20
  int32_t v24; // w21
  int32_t EquipHp; // w0
  int32_t hp; // w21
  IconLabelInfo_o *v27; // x22
  FollowerInfo_o *v28; // x23
  int32_t v29; // w24
  int32_t v30; // w20
  const MethodInfo *v31; // x1
  int32_t priorityKind; // w22
  int32_t i; // w24
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v35; // x3
  EquipTargetInfo_o *v36; // x2
  int64_t v37; // x0
  int32_t sortValue2; // w22
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x2
  int64_t sortValue1B; // x22
  struct System_String_o *sortStr1; // x23
  System_String_o *v43; // x22
  System_String_o *v44; // x23
  Il2CppObject *MasterData_object; // x24
  int32_t MaxIndividualFilter; // w0
  int32_t v47; // w25
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  int32_t Int_71827884; // w26
  const MethodInfo *v53; // x1
  int64_t v54; // x27
  struct System_String_o *v55; // x28
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  int32_t v60; // w26
  const MethodInfo *v61; // x1
  int64_t v62; // x27
  struct System_String_o *v63; // x28
  int64_t classIndex; // x8
  int64_t deckPriority; // x9
  int v67; // w8
  int64_t v68; // x8
  int32_t index; // w8
  int32_t UseStatus; // w0
  EquipTargetInfo_o *EquipInfo; // x0
  const MethodInfo *v72; // x3
  FollowerInfo_o *v73; // x20
  int32_t v74; // w21
  IconLabelInfo_o *iconLabelInfo2; // x20
  FollowerInfo_o *v76; // x21
  int32_t v77; // w22
  int64_t v78; // x8
  FollowerInfo_o *v79; // x20
  int32_t v80; // w21
  int32_t EquipAtk; // w0
  int32_t atk; // w21
  IconLabelInfo_o *iconLabelInfo1; // x22
  FollowerInfo_o *v84; // x23
  int32_t v85; // w24
  int32_t v86; // w20
  const MethodInfo *v87; // x1
  int32_t Lv; // w0
  FollowerInfo_o *v89; // x22
  int32_t v90; // w23
  int32_t v91; // w21
  const MethodInfo *v92; // x1
  int64_t servantEntity; // x8
  int v94; // w10
  int v95; // w9
  int v96; // w10
  int64_t v97; // x9
  __int64 v98; // x8
  EventBonusFilterGroupMemberEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  int v100; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  v4 = this;
  if ( (byte_4CE9065 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_3196/*"BonusFilterEquipId"*/);
    this = (FollowerSelectItemListViewItem_o *)sub_1C7BAE8(&StringLiteral_3198/*"BonusFilterGroupId"*/);
    byte_4CE9065 = 1;
  }
  v100 = 0;
  entity = 0;
  followerInfo = v4->fields.followerInfo;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = 0;
  if ( !followerInfo )
    goto LABEL_131;
  type = followerInfo->fields.type;
  followerIndex = v4->fields.followerIndex;
  DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(v4, (const MethodInfo *)sort);
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getSvtId(followerInfo, followerIndex, DisplayServantType, 0);
  Option_k__BackingField = v4->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    goto LABEL_131;
  v10 = (int)this;
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
        goto LABEL_131;
      sortValue2 = this->fields.sortValue2;
      this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( sortValue2 >= this->fields.eventUpValInfo->fields.equipSvtId )
        goto LABEL_134;
    }
    if ( !sort )
      goto LABEL_131;
    if ( ListViewSort__GetFilter(sort, 40, 0) )
    {
LABEL_134:
      if ( !FollowerSelectItemListViewItem__get_EquipInfo(v4, (const MethodInfo *)sort) )
        goto LABEL_69;
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v39);
      if ( !this )
        goto LABEL_131;
      sortStr1 = this->fields.sortStr1;
      sortValue1B = this->fields.sortValue1B;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v101.fields.currentCryptoKey = sortStr1;
      *(_QWORD *)&v101.fields.fakeValue = sortValue1B;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                   v101,
                                                   0);
      if ( (int)this < 1 )
        goto LABEL_69;
      if ( !sort )
        goto LABEL_131;
      if ( ListViewSort__GetFilter(sort, 41, 0) )
        goto LABEL_69;
      v43 = (System_String_o *)StringLiteral_3196/*"BonusFilterEquipId"*/;
      v44 = (System_String_o *)StringLiteral_3198/*"BonusFilterGroupId"*/;
      this = (FollowerSelectItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_131;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0);
      v100 = 0;
      if ( MaxIndividualFilter < 1 )
      {
LABEL_69:
        if ( FollowerSelectItemListViewItem__ChkWholeFilter(v4, sort, v40) )
          goto LABEL_7;
      }
      else
      {
        v47 = MaxIndividualFilter;
        while ( 1 )
        {
          v48 = System_Int32__ToString((int32_t)&v100, 0);
          v49 = System_String__Concat_64176912(v43, v48, 0);
          if ( UnityEngine_PlayerPrefs__HasKey(v49, 0) )
          {
            v50 = System_Int32__ToString((int32_t)&v100, 0);
            v51 = System_String__Concat_64176912(v43, v50, 0);
            Int_71827884 = UnityEngine_PlayerPrefs__GetInt_71827884(v51, 0);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v53);
            if ( !this )
              goto LABEL_131;
            v55 = this->fields.sortStr1;
            v54 = this->fields.sortValue1B;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v102.fields.currentCryptoKey = v55;
            *(_QWORD *)&v102.fields.fakeValue = v54;
            if ( Int_71827884 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v102, 0) )
              break;
          }
          v56 = System_Int32__ToString((int32_t)&v100, 0);
          v57 = System_String__Concat_64176912(v44, v56, 0);
          if ( UnityEngine_PlayerPrefs__HasKey(v57, 0) )
          {
            v58 = System_Int32__ToString((int32_t)&v100, 0);
            v59 = System_String__Concat_64176912(v44, v58, 0);
            v60 = UnityEngine_PlayerPrefs__GetInt_71827884(v59, 0);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v61);
            if ( !this )
              goto LABEL_131;
            v63 = this->fields.sortStr1;
            v62 = this->fields.sortValue1B;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v103.fields.currentCryptoKey = v63;
            *(_QWORD *)&v103.fields.fakeValue = v62;
            this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                         v103,
                                                         0);
            if ( !MasterData_object )
              goto LABEL_131;
            if ( EventBonusFilterGroupMemberMaster__TryGetEntity(
                   (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                   &entity,
                   v60,
                   (int32_t)this,
                   0) )
            {
              return 0;
            }
          }
          if ( ++v100 >= v47 )
            goto LABEL_69;
        }
      }
    }
    return 0;
  }
LABEL_7:
  this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_131;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  v4->fields.sortValue0 = 0;
  p_sortValue0 = &v4->fields.sortValue0;
  isNpc = v4->fields.isNpc;
  v4->fields.sortValue0B = 0;
  if ( !isNpc )
  {
    if ( !sort )
      goto LABEL_131;
    priorityKind = sort->fields.priorityKind;
    if ( !v4->fields._IsGrandSupport_k__BackingField )
    {
      EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v4, (const MethodInfo *)sort);
      v4->fields.sortValue0 = FollowerSelectItemListViewItem__CalculatePriorityKindSortValue(
                                (FollowerSelectItemListViewItem_o *)EquipInfo,
                                priorityKind,
                                EquipInfo,
                                v72);
      goto LABEL_10;
    }
    for ( i = 0; ; ++i )
    {
      this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= SHIDWORD(this->fields.eventUpValInfo->fields.dropList) )
        break;
      ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v4, (const MethodInfo *)sort);
      if ( ServantLeader )
      {
        ServantLeader = (ServantLeaderInfo_o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(ServantLeader, i, 0);
        v36 = (EquipTargetInfo_o *)ServantLeader;
      }
      else
      {
        v36 = 0;
      }
      v37 = FollowerSelectItemListViewItem__CalculatePriorityKindSortValue(
              (FollowerSelectItemListViewItem_o *)ServantLeader,
              priorityKind,
              v36,
              v35);
      if ( v37 > *p_sortValue0 )
        *p_sortValue0 = v37;
    }
  }
  if ( !sort )
    goto LABEL_131;
LABEL_10:
  v13 = 56;
  if ( v4->fields._IsRecommendFollower_k__BackingField )
    v13 = 152;
  v14 = *(_DWORD *)((char *)&sort->klass + v13);
  if ( v14 != 11 )
  {
    if ( v10 < 1 )
    {
      this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( this )
      {
        IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
        switch ( type )
        {
          case 1:
            this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
            v98 = 2;
            goto LABEL_129;
          case 2:
            this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
            v98 = 1;
            goto LABEL_129;
          case 3:
          case 4:
            index = v4->fields.index;
            v4->fields.sortValue0 = 1000000000000LL;
LABEL_116:
            servantEntity = -index;
LABEL_122:
            v4->fields.sortValue2 = servantEntity;
            goto LABEL_123;
          case 5:
            this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
            v98 = 3;
LABEL_129:
            v4->fields.sortValue0B = v98;
            if ( !this )
              goto LABEL_131;
            v4->fields.sortValue2 = FollowerInfo__getUpdatedAt((FollowerInfo_o *)this, 0);
            break;
          default:
            goto LABEL_123;
        }
        goto LABEL_123;
      }
      goto LABEL_131;
    }
    if ( v14 > 5 )
    {
      if ( v14 == 6 )
      {
        v79 = v4->fields.followerInfo;
        v80 = v4->fields.followerIndex;
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                     v4,
                                                     (const MethodInfo *)sort);
        if ( !v79 )
          goto LABEL_131;
        EquipAtk = FollowerInfo__getEquipAtk(v79, v80, (int32_t)this, 0);
        atk = v4->fields.atk;
        iconLabelInfo1 = v4->fields.iconLabelInfo1;
        v84 = v4->fields.followerInfo;
        v85 = v4->fields.followerIndex;
        v86 = EquipAtk;
        v4->fields.sortValue1 = atk + EquipAtk;
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v4, v87);
        if ( !v84 )
          goto LABEL_131;
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetAtkBoostValue(v84, v85, (int32_t)this, 0);
        if ( !iconLabelInfo1 )
          goto LABEL_131;
        IconLabelInfo__Set_41483756(iconLabelInfo1, 5, atk, (int32_t)this, v86, 0, 0, 0, 0, 0);
        goto LABEL_99;
      }
      if ( v14 != 29 )
        goto LABEL_100;
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      if ( !this )
        goto LABEL_131;
      UseStatus = FollowerInfo__GetUseStatus((FollowerInfo_o *)this, 0);
    }
    else
    {
      if ( v14 != 3 )
      {
        if ( v14 == 5 )
        {
          v23 = v4->fields.followerInfo;
          v24 = v4->fields.followerIndex;
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                       v4,
                                                       (const MethodInfo *)sort);
          if ( !v23 )
            goto LABEL_131;
          EquipHp = FollowerInfo__getEquipHp(v23, v24, (int32_t)this, 0);
          hp = v4->fields.hp;
          v27 = v4->fields.iconLabelInfo1;
          v28 = v4->fields.followerInfo;
          v29 = v4->fields.followerIndex;
          v30 = EquipHp;
          v4->fields.sortValue1 = hp + EquipHp;
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v4, v31);
          if ( !v28 )
            goto LABEL_131;
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetHpBoostValue(v28, v29, (int32_t)this, 0);
          if ( !v27 )
            goto LABEL_131;
          IconLabelInfo__Set_41483756(v27, 3, hp, (int32_t)this, v30, 0, 0, 0, 0, 0);
LABEL_99:
          iconLabelInfo2 = v4->fields.iconLabelInfo2;
          v76 = v4->fields.followerInfo;
          v77 = v4->fields.followerIndex;
LABEL_102:
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                       v4,
                                                       (const MethodInfo *)sort);
          if ( v76 )
          {
            Lv = FollowerInfo__getLv(v76, v77, (int32_t)this, 0);
            v89 = v4->fields.followerInfo;
            v90 = v4->fields.followerIndex;
            v91 = Lv;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v4, v92);
            if ( v89 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v89, v90, (int32_t)this, 0);
              if ( iconLabelInfo2 )
              {
                IconLabelInfo__Set_41483756(iconLabelInfo2, 2, v91, (int32_t)this, 0, 0, 0, 0, 0, 0);
                LODWORD(servantEntity) = v4->fields.classIndex;
                if ( (int)servantEntity <= 0 )
                {
                  servantEntity = (int64_t)v4->fields.servantEntity;
                  if ( !servantEntity )
                    goto LABEL_131;
                  LODWORD(servantEntity) = *(_DWORD *)(servantEntity + 208);
                }
                if ( v4->fields.isQuestRestriction )
                  v94 = 0;
                else
                  v94 = 100;
                if ( v4->fields._IsGrandSupport_k__BackingField )
                  v95 = 10;
                else
                  v95 = 0;
                switch ( type )
                {
                  case 1:
                    v96 = v94 | 3;
                    goto LABEL_119;
                  case 2:
                    v96 = v94 | 2;
LABEL_119:
                    v97 = (unsigned int)(v96 + v95);
                    servantEntity = (int)servantEntity;
                    goto LABEL_121;
                  case 3:
                  case 4:
LABEL_115:
                    index = v4->fields.index;
                    v4->fields.sortValue0 = 1000000000000LL;
                    v4->fields.sortValue1 = 0;
                    goto LABEL_116;
                  case 5:
                    servantEntity = (int)servantEntity;
                    v97 = (unsigned int)(v94 + v95 + 4);
LABEL_121:
                    v4->fields.sortValue0B = v97;
                    goto LABEL_122;
                  default:
                    goto LABEL_123;
                }
              }
            }
          }
LABEL_131:
          sub_1C7BD40(this, sort);
        }
LABEL_100:
        v78 = v4->fields.sortValue2;
        iconLabelInfo2 = v4->fields.iconLabelInfo1;
        v76 = v4->fields.followerInfo;
        v77 = v4->fields.followerIndex;
        goto LABEL_101;
      }
      v73 = v4->fields.followerInfo;
      v74 = v4->fields.followerIndex;
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                   v4,
                                                   (const MethodInfo *)sort);
      if ( !v73 )
        goto LABEL_131;
      UseStatus = FollowerInfo__getLv(v73, v74, (int32_t)this, 0);
    }
    iconLabelInfo2 = v4->fields.iconLabelInfo1;
    v76 = v4->fields.followerInfo;
    v77 = v4->fields.followerIndex;
    v78 = UseStatus;
LABEL_101:
    v4->fields.sortValue1 = v78;
    goto LABEL_102;
  }
  if ( v10 < 1 )
  {
    this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo1;
    v4->fields.sortValue2 = 0;
    v4->fields.sortValue2B = 0;
    if ( this )
    {
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
      goto LABEL_73;
    }
    goto LABEL_131;
  }
  v15 = v4->fields.iconLabelInfo1;
  v16 = v4->fields.followerInfo;
  v17 = v4->fields.followerIndex;
  v4->fields.sortValue2 = v4->fields.deckPriority;
  v4->fields.sortValue2B = 1;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                               v4,
                                               (const MethodInfo *)sort);
  if ( !v16 )
    goto LABEL_131;
  v18 = FollowerInfo__getLv(v16, v17, (int32_t)this, 0);
  v19 = v4->fields.followerInfo;
  v20 = v4->fields.followerIndex;
  v21 = v18;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v4, v22);
  if ( !v19 )
    goto LABEL_131;
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v19, v20, (int32_t)this, 0);
  if ( !v15 )
    goto LABEL_131;
  IconLabelInfo__Set_41483756(v15, 2, v21, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_73:
  classIndex = (unsigned int)v4->fields.classIndex;
  if ( (int)classIndex >= 1 )
  {
    deckPriority = v4->fields.deckPriority;
    v4->fields.sortValue2 = classIndex;
    v4->fields.sortValue2B = deckPriority;
  }
  if ( v4->fields._IsGrandSupport_k__BackingField )
    v67 = 10;
  else
    v67 = 0;
  switch ( type )
  {
    case 1:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v68 = v67 | 5u;
      goto LABEL_90;
    case 2:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v68 = v67 | 4u;
      goto LABEL_90;
    case 3:
    case 4:
      goto LABEL_115;
    case 5:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v68 = (unsigned int)(v67 + 6);
LABEL_90:
      v4->fields.sortValue0B = v68;
      if ( !this )
        goto LABEL_131;
      v4->fields.sortValue1 = FollowerInfo__getUpdatedAt((FollowerInfo_o *)this, 0);
      break;
    default:
      break;
  }
LABEL_123:
  if ( v4->fields._isRecommendedUser_k__BackingField )
    *p_sortValue0 += 10000000000000LL;
  return 1;
}


void FollowerSelectItemListViewItem__UpdateRestriction(
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
                                                     0);
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
                                                           0),
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
          sub_1C7BD40(this, method);
        }
        v3->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                        v13,
                                                        v14,
                                                        v15,
                                                        (int32_t)this,
                                                        0);
        v3->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(v3, v16);
        FollowerSelectItemListViewItem__SetEventUpInfo(v3, v17);
      }
    }
  }
}


int32_t FollowerSelectItemListViewItem__get_DispLimitCount(
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
  return FollowerInfo__getDispLimitCount(followerInfo, followerIndex, DisplayServantType, 0);
}


int32_t FollowerSelectItemListViewItem__get_DisplayServantType(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( this->fields._IsGrandSupport_k__BackingField )
    return 2;
  Option_k__BackingField = this->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    sub_1C7BD40(this, method);
  questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
  else
    return 0;
}


EquipTargetInfo_o *FollowerSelectItemListViewItem__get_EquipInfo(
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
    sub_1C7BD40(DisplayServantType, v6);
  IndexForSupport = FollowerInfo__getIndexForSupport(
                      followerInfo,
                      followerClassId,
                      DisplayServantType,
                      this->fields.supportDeckId,
                      0);
  v9 = FollowerSelectItemListViewItem__get_DisplayServantType(this, v8);
  return FollowerInfo__getEquipTarget1(followerInfo, IndexForSupport, v9, 0);
}


EventMargeItemUpValInfo_array *FollowerSelectItemListViewItem__get_EventUpValItemList(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventUpValItemList;
}


FollowerInfo_o *FollowerSelectItemListViewItem__get_FollowerData(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.followerInfo;
}


int64_t FollowerSelectItemListViewItem__get_FollowerId(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerInfo_o *followerInfo; // x8

  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    return followerInfo->fields.userId;
  else
    return 0;
}


int32_t FollowerSelectItemListViewItem__get_FollowerType(
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


int32_t FollowerSelectItemListViewItem__get_GrandFollowerClassId(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4CE906D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CE906D = 1;
  }
  result = this->fields.grandFollowerClassId;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Master_object )
      sub_1C7BD40(0, v5);
    result = ServantClassMaster__GetSupportGroupByGrandGraphId(
               (ServantClassMaster_o *)Master_object,
               this->fields._GrandGraphId_k__BackingField,
               0);
    this->fields.grandFollowerClassId = result;
  }
  return result;
}


int32_t FollowerSelectItemListViewItem__get_GrandGraphId(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandGraphId_k__BackingField;
}


IconLabelInfo_o *FollowerSelectItemListViewItem__get_IconInfo1(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *FollowerSelectItemListViewItem__get_IconInfo2(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool FollowerSelectItemListViewItem__get_IsClassRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsClassRestriction_k__BackingField;
}


bool FollowerSelectItemListViewItem__get_IsDataLost(FollowerSelectItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsDataLost_k__BackingField;
}


bool FollowerSelectItemListViewItem__get_IsGrandServantRestrictionSupport(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsGrandServantRestrictionSupport_k__BackingField;
}


bool FollowerSelectItemListViewItem__get_IsGrandSupport(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsGrandSupport_k__BackingField;
}


bool FollowerSelectItemListViewItem__get_IsGrandSvt(FollowerSelectItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsGrandSvt_k__BackingField;
}


bool FollowerSelectItemListViewItem__get_IsLockUser(FollowerSelectItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLockUser;
}


bool FollowerSelectItemListViewItem__get_IsMaxOpenClassBoard(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMaxOpenClassBoard;
}


bool FollowerSelectItemListViewItem__get_IsMaxOpenGrandClassBoard(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMaxOpenGrandClassBoard;
}


bool FollowerSelectItemListViewItem__get_IsMessageDisp(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMessageDisp;
}


bool FollowerSelectItemListViewItem__get_IsNoneSupportFriendPoint(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8

  Option_k__BackingField = this->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    sub_1C7BD40(this, method);
  return Option_k__BackingField->fields.isNoneSupportFriendPoint;
}


bool FollowerSelectItemListViewItem__get_IsNpc(FollowerSelectItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNpc;
}


bool FollowerSelectItemListViewItem__get_IsQuestRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isQuestRestriction;
}


bool FollowerSelectItemListViewItem__get_IsRecommendFollower(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsRecommendFollower_k__BackingField;
}


bool FollowerSelectItemListViewItem__get_IsRecommended(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRecommended;
}


bool FollowerSelectItemListViewItem__get_IsReleasedClassBoard(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsReleasedClassBoard_k__BackingField;
}


bool FollowerSelectItemListViewItem__get_IsSlotRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSlotRestriction_k__BackingField;
}


bool FollowerSelectItemListViewItem__get_IsUniqueIndividualityRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUniqueIndividualityRestriction;
}


bool FollowerSelectItemListViewItem__get_IsUniqueSvtRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUniqueSvtRestriction;
}


int32_t FollowerSelectItemListViewItem__get_LimitCount(
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
  return FollowerInfo__getLimitCount(followerInfo, followerIndex, DisplayServantType, 0);
}


int64_t FollowerSelectItemListViewItem__get_LoginTime(FollowerSelectItemListViewItem_o *this, const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.followerInfo;
  if ( result )
    return FollowerInfo__getUpdatedAt((FollowerInfo_o *)result, 0);
  return result;
}


int32_t FollowerSelectItemListViewItem__get_OpenClassBoardNum(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.openClassBoardNum;
}


int32_t FollowerSelectItemListViewItem__get_OpenGrandClassBoardNum(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.openGrandClassBoardNum;
}


FollowerSelectItemListViewManager_FollowerSelectItemOption_o *FollowerSelectItemListViewItem__get_Option(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Option_k__BackingField;
}


int32_t FollowerSelectItemListViewItem__get_PlayerLevel(
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


System_String_o *FollowerSelectItemListViewItem__get_PlayerNameText(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o **p_userName; // x8

  if ( (byte_4CE9066 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19209/*"error"*/);
    byte_4CE9066 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    p_userName = &followerInfo->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19209/*"error"*/;
  return *p_userName;
}


QuestRestrictionInfo_o *FollowerSelectItemListViewItem__get_QuestRestrictionInfo(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8

  Option_k__BackingField = this->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    sub_1C7BD40(this, method);
  return Option_k__BackingField->fields.questRestrictionInfo;
}


int32_t FollowerSelectItemListViewItem__get_SelectClassId(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.followerIndex )
    return this->fields.followerClassId;
  else
    return 0;
}


ServantLeaderInfo_o *FollowerSelectItemListViewItem__get_ServantLeader(
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
  return FollowerInfo__getServantLeaderInfo(followerInfo, followerIndex, DisplayServantType, 0);
}


int32_t FollowerSelectItemListViewItem__get_SupportDeckId(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.supportDeckId;
}


int32_t FollowerSelectItemListViewItem__get_SvtId(FollowerSelectItemListViewItem_o *this, const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t DisplayServantType; // w2

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, method);
  return FollowerInfo__getSvtId(followerInfo, followerIndex, DisplayServantType, 0);
}


System_String_o *FollowerSelectItemListViewItem__get_SvtNameText(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *overwriteServantName; // x20
  const MethodInfo *v5; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v7; // x1
  int32_t DispLimitCount; // w20
  const MethodInfo *v9; // x1
  int32_t limitCount; // w21
  int32_t LimitCountByDispLimit; // w20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v13; // x1
  __int64 v14; // x19
  __int64 v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CE9067 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CE9067 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && this->fields.isNpc )
    return followerInfo->fields.userName;
  if ( !this->fields.servantEntity )
    return 0;
  if ( FollowerSelectItemListViewItem__get_ServantLeader(this, method) )
  {
    ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v5);
    if ( ServantLeader )
    {
      overwriteServantName = ServantLeader->fields.overwriteServantName;
      if ( !System_String__IsNullOrEmpty(overwriteServantName, 0) )
        return overwriteServantName;
      ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v7);
      if ( ServantLeader )
      {
        DispLimitCount = ServantLeaderInfo__getDispLimitCount(ServantLeader, 0);
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v9);
        if ( ServantLeader )
        {
          limitCount = ServantLeader->fields.limitCount;
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, limitCount, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v13);
          if ( ServantLeader )
          {
            v15 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
            v14 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v17.fields.currentCryptoKey = v15;
            *(_QWORD *)&v17.fields.fakeValue = v14;
            ServantLeader = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                     v17,
                                                     0);
            if ( Master_object )
              return ServantLimitImageMaster__GetLimitCountSealedServantName(
                       (ServantLimitImageMaster_o *)Master_object,
                       (int32_t)ServantLeader,
                       LimitCountByDispLimit,
                       0,
                       0);
          }
        }
      }
    }
LABEL_25:
    sub_1C7BD40(ServantLeader, v5);
  }
  ServantLeader = (ServantLeaderInfo_o *)this->fields.servantEntity;
  if ( !ServantLeader )
    goto LABEL_25;
  return ServantEntity__getName((ServantEntity_o *)ServantLeader, -1, -1, 0, 0);
}


int32_t FollowerSelectItemListViewItem__get_TimesToRestart(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TimesToRestart_k__BackingField;
}


bool FollowerSelectItemListViewItem__get_isRecommendedUser(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._isRecommendedUser_k__BackingField;
}


void FollowerSelectItemListViewItem__set_GrandGraphId(
        FollowerSelectItemListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GrandGraphId_k__BackingField = value;
}


void FollowerSelectItemListViewItem__set_IsClassRestriction(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsClassRestriction_k__BackingField = value;
}


void FollowerSelectItemListViewItem__set_IsDataLost(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDataLost_k__BackingField = value;
}


void FollowerSelectItemListViewItem__set_IsGrandServantRestrictionSupport(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandServantRestrictionSupport_k__BackingField = value;
}


void FollowerSelectItemListViewItem__set_IsGrandSupport(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandSupport_k__BackingField = value;
}


void FollowerSelectItemListViewItem__set_IsGrandSvt(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandSvt_k__BackingField = value;
}


void FollowerSelectItemListViewItem__set_IsRecommendFollower(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsRecommendFollower_k__BackingField = value;
}


void FollowerSelectItemListViewItem__set_IsReleasedClassBoard(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsReleasedClassBoard_k__BackingField = value;
}


void FollowerSelectItemListViewItem__set_IsSlotRestriction(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSlotRestriction_k__BackingField = value;
}


void FollowerSelectItemListViewItem__set_TimesToRestart(
        FollowerSelectItemListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TimesToRestart_k__BackingField = value;
}


void FollowerSelectItemListViewItem__set_isRecommendedUser(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isRecommendedUser_k__BackingField = value;
}


void FollowerSelectItemListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CE906E & 1) == 0 )
  {
    sub_1C7BAE8(&FollowerSelectItemListViewItem___c_TypeInfo);
    byte_4CE906E = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(FollowerSelectItemListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerSelectItemListViewItem___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewItem___c_o *)v1;
  sub_1C7BA8C(FollowerSelectItemListViewItem___c_TypeInfo->static_fields, v1);
}


void FollowerSelectItemListViewItem___c___ctor(FollowerSelectItemListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t FollowerSelectItemListViewItem___c___SetEventUpInfo_b__96_0(
        FollowerSelectItemListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1C7BD40(this, 0);
  return drop->fields.eventId;
}