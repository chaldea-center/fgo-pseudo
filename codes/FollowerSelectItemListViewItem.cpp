void __fastcall FollowerSelectItemListViewItem___ctor(
        FollowerSelectItemListViewItem_o *this,
        int32_t index,
        int32_t index2,
        FollowerInfo_o *followerInfo,
        int32_t followerClassId,
        int32_t friendPointUpVal,
        int32_t friendPointUpMaxVal,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        bool isBonusFilterEnable,
        bool isServantBonusFilterEnable,
        bool isServantEquipBonusFilterEnable,
        bool isRecommended,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isRecommendedUser,
        int32_t supportDeckId,
        int32_t deckPriority,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        bool isReleasedClassBoard,
        bool isRecommendFollower,
        const MethodInfo *method)
{
  IconLabelInfo_o *v24; // x19
  IconLabelInfo_o *v25; // x19
  System_Collections_Generic_Dictionary_int__int__o *v26; // x22
  const MethodInfo *v27; // x2

  if ( (byte_4A5644F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor___75989216);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    byte_4A5644F = 1;
  }
  v24 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo1 = v24;
  sub_1B88554(&this->fields.iconLabelInfo1, v24);
  v25 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo2 = v25;
  sub_1B88554(&this->fields.iconLabelInfo2, v25);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.friendPointUpVal = friendPointUpVal;
  this->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B88554(&this->fields.friendPointCampaignEntityList, friendPointCampaignEntityList);
  this->fields.isBonusFilterEnable = isBonusFilterEnable;
  this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
  this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
  this->fields.isRecommended = isRecommended;
  this->fields.setupInfo = setupInfo;
  sub_1B88554(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.followerInfo = followerInfo;
  sub_1B88554(&this->fields.followerInfo, followerInfo);
  this->fields._isRecommendedUser_k__BackingField = isRecommendedUser;
  this->fields.classIndex = index2;
  this->fields.supportDeckId = supportDeckId;
  this->fields.deckPriority = deckPriority;
  if ( classBoardMaxNumDictionary )
  {
    v26 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_51791268(
      v26,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_31645A4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___75989216);
  }
  else
  {
    v26 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v26;
  sub_1B88554(&this->fields.classBoardMaxNumDictionary, v26);
  this->fields._IsReleasedClassBoard_k__BackingField = isReleasedClassBoard;
  this->fields._IsRecommendFollower_k__BackingField = isRecommendFollower;
  FollowerSelectItemListViewItem__AnalyzeEntity(this, followerClassId, v27);
}


void __fastcall FollowerSelectItemListViewItem__AnalyzeEntity(
        FollowerSelectItemListViewItem_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *v8; // x8
  __int64 Index; // x0
  __int64 v10; // x1
  struct QuestRestrictionInfo_o *v11; // x8
  FollowerInfo_o *v12; // x23
  int32_t v13; // w20
  int32_t v14; // w2
  struct FollowerInfo_o *v15; // x8
  int32_t v16; // w20
  const MethodInfo *v17; // x1
  struct EventCampaignEntity_o *EnableFriendPointCampaign; // x0
  Il2CppObject *v19; // x0
  FollowerInfo_o *v20; // x22
  struct QuestRestrictionInfo_o *v21; // x21
  int32_t followerIndex; // w23
  int32_t v23; // w3
  struct QuestRestrictionInfo_o *v24; // x8
  FollowerInfo_o *v25; // x22
  struct QuestRestrictionInfo_o *v26; // x21
  int32_t v27; // w23
  int32_t v28; // w3
  FollowerInfo_o *v29; // x22
  struct QuestRestrictionInfo_o *v30; // x21
  int32_t v31; // w23
  int32_t v32; // w3
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  struct QuestRestrictionInfo_o *v35; // x8
  Il2CppObject *Master_object; // x21
  struct QuestRestrictionInfo_o *v37; // x8
  int32_t v38; // w20
  struct FollowerInfo_o *v39; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v42; // w21
  unsigned int v43; // w25
  ClassBoardInfo_o *v44; // x22
  int32_t v45; // w8
  struct FollowerInfo_o *v46; // x8
  TblFriendMaster_o *v47; // x20
  int32_t type; // w9
  int32_t v49; // w1
  struct System_Int32_array *squareIds; // x8
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A56450 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56450 = 1;
  }
  entity = 0LL;
  this->fields.isNpc = 0;
  this->fields.followerClassId = followerClassId;
  this->fields.servantEntity = 0LL;
  sub_1B88554(&this->fields.servantEntity, 0LL);
  *(_WORD *)&this->fields.isUniqueSvtRestriction = 0;
  *(_WORD *)&this->fields.isServantEventUpVal = 0;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValItemList = 0LL;
  sub_1B88554(&this->fields.eventUpValItemList, 0LL);
  this->fields.friendPointCampaignEntity = 0LL;
  sub_1B88554(&this->fields.friendPointCampaignEntity, 0LL);
  followerInfo = this->fields.followerInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._OpenClassBoardNum_k__BackingField = -1;
  this->fields._IsMaxOpenClassBoard_k__BackingField = 0;
  this->fields._IsSlotRestriction_k__BackingField = 0;
  if ( followerInfo )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
    Index = FollowerInfo__getIndex(followerInfo, followerClassId, ReturnTypeByQuestId, this->fields.supportDeckId, 0LL);
    v11 = this->fields.questRestrictionInfo;
    v12 = this->fields.followerInfo;
    v13 = Index;
    this->fields.followerIndex = Index;
    if ( v11 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v11->fields.questId, 0LL);
      v14 = Index;
      if ( !v12 )
        goto LABEL_84;
    }
    else
    {
      v14 = 0;
      if ( !v12 )
        goto LABEL_84;
    }
    Index = FollowerInfo__getSvtId(v12, v13, v14, 0LL);
    if ( (int)Index < 1 )
    {
      v24 = this->fields.questRestrictionInfo;
      if ( v24 )
        LOBYTE(v24) = v24->fields.isRestriction;
      this->fields.isQuestRestriction = (char)v24;
    }
    else
    {
      v15 = this->fields.followerInfo;
      if ( !v15 )
        goto LABEL_84;
      v16 = Index;
      this->fields.isNpc = Follower__IsNpc(v15->fields.type, 0LL);
      EnableFriendPointCampaign = FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(this, v17);
      this->fields.friendPointCampaignEntity = EnableFriendPointCampaign;
      sub_1B88554(&this->fields.friendPointCampaignEntity, EnableFriendPointCampaign);
      Index = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Index )
        goto LABEL_84;
      Index = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)Index,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Index )
        goto LABEL_84;
      v19 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Index,
              v16,
              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.servantEntity = (struct ServantEntity_o *)v19;
      Index = sub_1B88554(&this->fields.servantEntity, v19);
      v20 = this->fields.followerInfo;
      v21 = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( v21 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v21->fields.questId, 0LL);
        v23 = Index;
        if ( !v20 )
          goto LABEL_84;
      }
      else
      {
        v23 = 0;
        if ( !v20 )
          goto LABEL_84;
      }
      Index = FollowerInfo__getQuestRestriction(v20, v21, followerIndex, v23, 0LL);
      v25 = this->fields.followerInfo;
      v26 = this->fields.questRestrictionInfo;
      v27 = this->fields.followerIndex;
      this->fields.isQuestRestriction = Index & 1;
      if ( v26 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v26->fields.questId, 0LL);
        v28 = Index;
        if ( !v25 )
          goto LABEL_84;
      }
      else
      {
        v28 = 0;
        if ( !v25 )
          goto LABEL_84;
      }
      Index = FollowerInfo__getUniqueSvtRestriction(v25, v26, v27, v28, 0LL);
      v29 = this->fields.followerInfo;
      v30 = this->fields.questRestrictionInfo;
      v31 = this->fields.followerIndex;
      this->fields.isUniqueSvtRestriction = Index & 1;
      if ( v30 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v30->fields.questId, 0LL);
        v32 = Index;
        if ( !v29 )
          goto LABEL_84;
      }
      else
      {
        v32 = 0;
        if ( !v29 )
          goto LABEL_84;
      }
      this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                        v29,
                                                        v30,
                                                        v31,
                                                        v32,
                                                        0LL);
      this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v33);
      FollowerSelectItemListViewItem__SetEventUpInfo(this, v34);
      v35 = this->fields.questRestrictionInfo;
      if ( v35 && v35->fields.isDataLostBattle )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Index = NetworkManager__get_UserId(0LL);
        v37 = this->fields.questRestrictionInfo;
        if ( !v37 || !Master_object )
          goto LABEL_84;
        if ( UserEventDataLostMaster__TryGetEntity(
               (UserEventDataLostMaster_o *)Master_object,
               &entity,
               Index,
               v37->fields.dataLostBattleId,
               0LL) )
        {
          Index = (__int64)entity;
          if ( !entity )
            goto LABEL_84;
          Index = UserEventDataLostEntity__IsRestart(entity, v16, 0LL);
          if ( !entity )
            goto LABEL_84;
          if ( (Index & 1) != 0 )
          {
            this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(entity, v16, 0LL);
          }
          else if ( UserEventDataLostEntity__IsDataLost(entity, v16, 0LL) )
          {
            this->fields._IsDataLost_k__BackingField = 1;
          }
        }
      }
      if ( this->fields.classBoardMaxNumDictionary )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Index = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !Index )
          goto LABEL_84;
        Index = (__int64)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Index,
                           v16,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Index )
          goto LABEL_84;
        v38 = *(_DWORD *)(Index + 80);
        Index = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        if ( !Index )
          goto LABEL_84;
        Index = ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Index, v38, 0LL);
        v39 = this->fields.followerInfo;
        if ( !v39 )
          goto LABEL_84;
        userClassBoardInfo = v39->fields.userClassBoardInfo;
        if ( !userClassBoardInfo )
          goto LABEL_84;
        max_length = userClassBoardInfo->max_length;
        if ( max_length < 1 )
        {
LABEL_65:
          v45 = 0;
          LODWORD(Index) = -1;
        }
        else
        {
          v42 = Index;
          v43 = 0;
          while ( 1 )
          {
            if ( v43 >= max_length )
              sub_1B88814(Index, v10);
            v44 = userClassBoardInfo->m_Items[v43];
            if ( !v44 )
              goto LABEL_84;
            if ( v44->fields.classBoardBaseId == v42 )
            {
              Index = (__int64)this->fields.classBoardMaxNumDictionary;
              if ( !Index )
                goto LABEL_84;
              Index = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                        (System_Collections_Generic_Dictionary_int__int__o *)Index,
                        v42,
                        (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
              if ( (Index & 1) != 0 )
              {
                Index = ClassBoardInfo__IsReleasedClassId(v44, v38, 0LL);
                if ( (Index & 1) != 0 )
                  break;
              }
            }
            max_length = userClassBoardInfo->max_length;
            if ( (int)++v43 >= max_length )
              goto LABEL_65;
          }
          Index = (__int64)this->fields.classBoardMaxNumDictionary;
          if ( !Index )
            goto LABEL_84;
          Index = System_Collections_Generic_Dictionary_int__int___get_Item(
                    (System_Collections_Generic_Dictionary_int__int__o *)Index,
                    v42,
                    (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          squareIds = v44->fields.squareIds;
          if ( !squareIds )
            goto LABEL_84;
          v45 = squareIds->max_length;
        }
        this->fields._OpenClassBoardNum_k__BackingField = v45;
        this->fields._IsMaxOpenClassBoard_k__BackingField = (int)Index > 0 && v45 >= (int)Index;
      }
    }
    Index = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Index )
    {
      Index = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)Index,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      v46 = this->fields.followerInfo;
      if ( v46 )
      {
        v47 = (TblFriendMaster_o *)Index;
        if ( v46->fields.type == 5
          || Index
          && (Index = TblFriendMaster__isMessageDisp((TblFriendMaster_o *)Index, 3, v46->fields.userId, 0LL),
              v46 = this->fields.followerInfo,
              this->fields.isMessageDisp = Index & 1,
              v46) )
        {
          type = v46->fields.type;
          if ( (type | 4) == 5 )
          {
            if ( !v47 )
              goto LABEL_84;
            if ( type == 5 )
              v49 = 9;
            else
              v49 = 3;
            this->fields.isLockUser = TblFriendMaster__IsLockUser(v47, v49, v46->fields.userId, 0LL);
          }
          Index = (__int64)this->fields.iconLabelInfo1;
          if ( Index )
          {
            IconLabelInfo__Clear((IconLabelInfo_o *)Index, 0LL);
            Index = (__int64)this->fields.iconLabelInfo2;
            if ( Index )
            {
              IconLabelInfo__Clear((IconLabelInfo_o *)Index, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_84:
    sub_1B8880C(Index, v10);
  }
  v8 = this->fields.questRestrictionInfo;
  this->fields.followerIndex = 0;
  if ( v8 )
    LOBYTE(v8) = v8->fields.isRestriction;
  this->fields.isQuestRestriction = (char)v8;
}


bool __fastcall FollowerSelectItemListViewItem__CheckSlotRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v2; // x19
  FollowerInfo_o *followerInfo; // x21
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t followerIndex; // w22
  int32_t v6; // w3
  bool v7; // w8
  int sortValue1; // w21
  int32_t sortValue1_high; // w20
  FollowerInfo_o *v11; // x21
  struct QuestRestrictionInfo_o *v12; // x8
  int32_t v13; // w22
  int32_t v14; // w2
  ServantLeaderInfo_o *v15; // x21
  QuestRestrictionInfo_o *v16; // x19
  struct System_String_o *sortStr1; // x22
  int64_t v18; // x23
  int32_t v19; // w0
  int32_t limitCount; // w22
  int32_t v21; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v2 = this;
  if ( (byte_4A56451 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (FollowerSelectItemListViewItem_o *)sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A56451 = 1;
  }
  followerInfo = v2->fields.followerInfo;
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  followerIndex = v2->fields.followerIndex;
  if ( questRestrictionInfo )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                 questRestrictionInfo->fields.questId,
                                                 0LL);
    v6 = (int)this;
    if ( !followerInfo )
      goto LABEL_28;
  }
  else
  {
    v6 = 0;
    if ( !followerInfo )
      goto LABEL_28;
  }
  if ( FollowerInfo__IsSlotRestriction(followerInfo, questRestrictionInfo, followerIndex, v6, 0LL) )
    return 1;
  this = (FollowerSelectItemListViewItem_o *)v2->fields.questRestrictionInfo;
  if ( !this )
    goto LABEL_28;
  if ( QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)this, 0LL) )
    return 0;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_28;
  sortValue1 = this->fields.sortValue1;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_28;
  v7 = 0;
  if ( sortValue1 < 1 || v2->fields.isNpc )
    return v7;
  if ( !v2->fields.questRestrictionInfo )
    goto LABEL_28;
  sortValue1_high = HIDWORD(this->fields.sortValue1);
  this = (FollowerSelectItemListViewItem_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(
                                               v2->fields.questRestrictionInfo,
                                               sortValue1_high,
                                               0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v11 = v2->fields.followerInfo;
  v12 = v2->fields.questRestrictionInfo;
  v13 = v2->fields.followerIndex;
  if ( v12 )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v12->fields.questId, 0LL);
    v14 = (int)this;
  }
  else
  {
    v14 = 0;
  }
  if ( !v11 )
    goto LABEL_28;
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getServantLeaderInfo(v11, v13, v14, 0LL);
  if ( !this )
    goto LABEL_28;
  v15 = (ServantLeaderInfo_o *)this;
  v16 = v2->fields.questRestrictionInfo;
  v18 = this->fields.sortValue1;
  sortStr1 = this->fields.sortStr1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v18;
  *(_QWORD *)&v22.fields.fakeValue = sortStr1;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  limitCount = v15->fields.limitCount;
  v21 = v19;
  this = (FollowerSelectItemListViewItem_o *)ServantLeaderInfo__getDispLimitCount(v15, 0LL);
  if ( !v16 )
LABEL_28:
    sub_1B8880C(this, method);
  return QuestRestrictionInfo__IsRestrictionServantIndividuality(
           v16,
           v21,
           limitCount,
           (int32_t)this,
           sortValue1_high,
           1,
           0LL);
}


bool __fastcall FollowerSelectItemListViewItem__ChkWholeFilter(
        FollowerSelectItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  if ( !sort )
    sub_1B8880C(this, 0LL);
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
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w3
  BalanceConfig_c *v11; // x0
  SkillInfo_array *v12; // x0

  if ( (byte_4A5645A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&SkillInfo___TypeInfo);
    byte_4A5645A = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
    FollowerInfo__GetAppendSkillInfo(followerInfo, skillInfoList, followerIndex, ReturnTypeByQuestId, isNpc, 0LL);
  }
  else
  {
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    v12 = (SkillInfo_array *)sub_1B88658(
                               SkillInfo___TypeInfo,
                               (unsigned int)v11->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v12;
    sub_1B88554(skillInfoList, v12);
  }
  return followerInfo != 0LL;
}


EventCampaignEntity_o *__fastcall FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 SvtId; // x0
  __int64 v4; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x8
  int max_length; // w9
  int v7; // w11
  EventCampaignEntity_o *v8; // x10
  EventCampaignEntity_o *v9; // x13
  EventCampaignEntity_o *v10; // x12
  struct System_Int32_array *targetIds; // x14
  __int64 v12; // x15
  int v13; // w16

  if ( !this->fields.friendPointCampaignEntityList )
    return 0LL;
  SvtId = FollowerSelectItemListViewItem__get_SvtId(this, method);
  if ( (int)SvtId < 1 )
    return 0LL;
  friendPointCampaignEntityList = this->fields.friendPointCampaignEntityList;
  if ( !friendPointCampaignEntityList )
LABEL_30:
    sub_1B8880C(SvtId, v4);
  max_length = friendPointCampaignEntityList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v7 == max_length )
        sub_1B88814(SvtId, v4);
      v10 = friendPointCampaignEntityList->m_Items[v7];
      if ( !v10 )
        goto LABEL_30;
      targetIds = v10->fields.targetIds;
      if ( targetIds && (v12 = *(_QWORD *)&targetIds->max_length) != 0 )
      {
        if ( !this->fields.isNpc && (!v8 || v10->fields.idx > v8->fields.idx) && (int)v12 >= 1 )
        {
          v13 = 0;
          while ( targetIds->m_Items[v13 + 1] != (_DWORD)SvtId )
          {
            if ( (_DWORD)v12 == ++v13 )
              goto LABEL_20;
          }
          v8 = friendPointCampaignEntityList->m_Items[v7];
        }
      }
      else if ( !v9 || v10->fields.idx > v9->fields.idx )
      {
        goto LABEL_21;
      }
LABEL_20:
      v10 = v9;
LABEL_21:
      ++v7;
      v9 = v10;
      if ( v7 == max_length )
        goto LABEL_26;
    }
  }
  v10 = 0LL;
  v8 = 0LL;
LABEL_26:
  if ( v8 )
    return v8;
  else
    return v10;
}


System_String_o *__fastcall FollowerSelectItemListViewItem__GetFriendPointCampaignName(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  System_String_o *v9; // x19
  Il2CppObject *v10; // x0
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4A56459 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_6415/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/);
    byte_4A56459 = 1;
  }
  if ( !this->fields.friendPointCampaignEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_6415/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, 0LL);
  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( !friendPointCampaignEntity )
    sub_1B8880C(v3, v4);
  v9 = v3;
  v12 = friendPointCampaignEntity->fields.value / 1000;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v5, v6, v7);
  return System_String__Format(v9, v10, 0LL);
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
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  int32_t result; // w0
  __int64 FriendPointUpVal; // x0
  __int64 v9; // x1
  FollowerInfo_o *v10; // x21
  struct QuestRestrictionInfo_o *v11; // x8
  int32_t v12; // w22
  int v13; // w20
  int32_t v14; // w2
  int32_t friendPointUpMaxVal; // w8
  bool v16; // vf
  int v17; // w8

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  FriendPointUpVal = FollowerInfo__getFriendPointUpVal(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
  v10 = this->fields.followerInfo;
  v11 = this->fields.questRestrictionInfo;
  v12 = this->fields.followerIndex;
  v13 = FriendPointUpVal;
  if ( !v11 )
  {
    v14 = 0;
    if ( v10 )
      goto LABEL_8;
LABEL_15:
    sub_1B8880C(FriendPointUpVal, v9);
  }
  FriendPointUpVal = FollowerInfo__GetReturnTypeByQuestId(v11->fields.questId, 0LL);
  v14 = FriendPointUpVal;
  if ( !v10 )
    goto LABEL_15;
LABEL_8:
  if ( FollowerInfo__getFriendPointUpType(v10, v12, v14, 0LL) != 104 )
    return this->fields.friendPointUpVal + v13;
  friendPointUpMaxVal = this->fields.friendPointUpMaxVal;
  if ( friendPointUpMaxVal < 1 )
    return this->fields.friendPointUpVal + v13;
  result = this->fields.friendPointUpVal;
  v16 = __OFSUB__(v13, friendPointUpMaxVal);
  v17 = v13 - friendPointUpMaxVal;
  if ( !((v17 < 0) ^ v16 | (v17 == 0)) )
    result += v17;
  return result;
}


bool __fastcall FollowerSelectItemListViewItem__GetNpInfo(
        FollowerSelectItemListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w3
  TreasureDvcInfo_o *v9; // x20

  if ( (byte_4A56458 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A56458 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
    return FollowerInfo__getTreasureDeviceInfo(followerInfo, tdInfo, followerIndex, ReturnTypeByQuestId, 0LL);
  }
  else
  {
    v9 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_1B88554(tdInfo, v9);
    return 0;
  }
}


bool __fastcall FollowerSelectItemListViewItem__GetSkillInfo(
        FollowerSelectItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w3
  BalanceConfig_c *v9; // x0
  SkillInfo_array *v10; // x0

  if ( (byte_4A56457 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&SkillInfo___TypeInfo);
    byte_4A56457 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
    FollowerInfo__getSkillInfo(followerInfo, skillInfoList, followerIndex, ReturnTypeByQuestId, 0LL);
  }
  else
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = (SkillInfo_array *)sub_1B88658(SkillInfo___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
    *skillInfoList = v10;
    sub_1B88554(skillInfoList, v10);
  }
  return followerInfo != 0LL;
}


int32_t __fastcall FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  return FollowerInfo__getTreasureDeviceLevelIcon(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_string__int__o *__fastcall FollowerSelectItemListViewItem__GetValuesDictionary(
        FollowerSelectItemListViewItem_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *values; // x19
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *keys; // x20
  Il2CppObject *Master_object; // x19
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v12; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v13; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  Il2CppObject *v15; // x20
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v19; // x22
  unsigned __int64 v20; // x24
  int v21; // w26
  int max_length; // w8
  int32_t v23; // w2
  int v24; // w9
  ServantSkillEntity_o *v25; // x10
  SkillLvEntity_o *v26; // x8
  unsigned __int64 v27; // x29
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v29; // x9
  int monitor; // w8
  unsigned __int64 v31; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v33; // x23
  Il2CppObject *v34; // [xsp+0h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4A56453 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_1475/*"3"*/);
    byte_4A56453 = 1;
  }
  v34 = 0LL;
  entity = 0LL;
  result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                     this,
                                                                     *(const MethodInfo **)&kind);
  if ( result )
  {
    result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                       this,
                                                                       v6);
    if ( !result )
      goto LABEL_74;
    keys = result->fields._keys;
    values = result->fields._values;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v36.fields.currentCryptoKey = keys;
    *(_QWORD *)&v36.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v36, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v11);
      if ( !result )
        goto LABEL_74;
      v13 = result->fields._keys;
      v12 = result->fields._values;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v37.fields.currentCryptoKey = v13;
      *(_QWORD *)&v37.fields.fakeValue = v12;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                         v37,
                                                                         0LL);
      if ( !Master_object )
        goto LABEL_74;
      ServantSkillList = ServantSkillMaster__getServantSkillList(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)result,
                           0LL);
      v15 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v16 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v17);
      if ( !result )
        goto LABEL_74;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_74;
      entries = result->fields._entries;
      v19 = result;
      if ( (int)entries >= 1 )
      {
        v20 = 0LL;
        v21 = kind - 1;
        while ( 1 )
        {
          if ( v20 >= (unsigned int)entries )
            goto LABEL_75;
          if ( !ServantSkillList )
            goto LABEL_74;
          max_length = ServantSkillList->max_length;
          v23 = *(&v19->fields._count + v20);
          if ( max_length >= 1 )
          {
            v24 = 0;
            while ( max_length != v24 )
            {
              v25 = ServantSkillList->m_Items[v24];
              if ( !v25 )
                goto LABEL_74;
              if ( v25->fields.skillId == v23 && v25->fields.eventId > 0 )
                goto LABEL_71;
              if ( max_length == ++v24 )
                goto LABEL_27;
            }
LABEL_75:
            sub_1B88814(result, v7);
          }
LABEL_27:
          if ( !v15 )
            goto LABEL_74;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             (SkillLvMaster_o *)v15,
                                                                             &entity,
                                                                             v23,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_71:
          LODWORD(entries) = v19->fields._entries;
          if ( (__int64)++v20 >= (int)entries )
            return 0LL;
        }
        v26 = entity;
        if ( entity )
        {
          v27 = 0LL;
          while ( 1 )
          {
            funcId = v26->fields.funcId;
            if ( !funcId )
              break;
            v29 = funcId->max_length;
            if ( (__int64)v27 >= (int)v29 )
              goto LABEL_71;
            if ( v27 >= v29 )
              goto LABEL_75;
            if ( v16 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
                                                                                 &v34,
                                                                                 funcId->m_Items[v27 + 1],
                                                                                 (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v21 )
                {
                  case 0:
                    if ( !v34 )
                      goto LABEL_74;
                    monitor = (int)v34[1].monitor;
                    if ( monitor != 104 && monitor != 123 )
                      break;
                    goto LABEL_52;
                  case 1:
                    if ( !v34 )
                      goto LABEL_74;
                    if ( LODWORD(v34[1].monitor) != 101 )
                      break;
                    goto LABEL_52;
                  case 2:
                    if ( !v34 )
                      goto LABEL_74;
                    if ( LODWORD(v34[1].monitor) != 112 )
                      break;
                    goto LABEL_52;
                  case 3:
                    if ( !v34 )
                      goto LABEL_74;
                    if ( LODWORD(v34[1].monitor) != 111 )
                      break;
                    goto LABEL_52;
                  case 4:
                    if ( !v34 )
                      goto LABEL_74;
                    if ( (LODWORD(v34[1].monitor) | 8) == 110 )
                      goto LABEL_52;
                    break;
                  case 5:
                    if ( !v34 )
                      goto LABEL_74;
                    if ( LODWORD(v34[1].monitor) != 106 )
                      break;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_74;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_74;
                    entries_low = LODWORD(result->fields._entries);
                    if ( (__int64)v27 > (int)entries_low )
                      break;
                    if ( v27 >= entries_low )
                      goto LABEL_75;
                    v33 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&result->fields._count
                                                                                  + v27);
                    if ( !v33 )
                      break;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v33,
                           (Il2CppObject *)StringLiteral_1475/*"3"*/,
                           (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v33,
                                                                                         (Il2CppObject *)StringLiteral_1475/*"3"*/,
                                                                                         (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( (_DWORD)result )
                        break;
                    }
LABEL_52:
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_74;
                    result = SkillLvEntity__GetFollowerValsDictionary(entity, 0LL);
                    if ( result )
                      return result;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_74;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_74;
                    v31 = LODWORD(result->fields._entries);
                    if ( (__int64)v27 >= (int)v31 )
                      break;
                    if ( v27 >= v31 )
                      goto LABEL_75;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields._count
                                                                                     + v27);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_52;
                }
              }
              v26 = entity;
              ++v27;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_74:
        sub_1B8880C(result, v7);
      }
    }
    return 0LL;
  }
  return result;
}


bool __fastcall FollowerSelectItemListViewItem__IsFriendPointCampaign(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.friendPointCampaignEntity != 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItem__Modify(
        FollowerSelectItemListViewItem_o *this,
        int32_t friendPointUpVal,
        int32_t friendPointUpMaxVal,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  FollowerSelectItemListViewItem_o *v7; // x19
  int32_t v8; // w2
  FollowerInfo_o *v9; // x21
  QuestRestrictionInfo_o *v10; // x20
  int32_t v11; // w22
  int32_t v12; // w3
  FollowerInfo_o *v13; // x21
  QuestRestrictionInfo_o *v14; // x20
  int32_t v15; // w22
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  followerInfo = this->fields.followerInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  v7 = this;
  this->fields.friendPointUpVal = friendPointUpVal;
  this->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  if ( questRestrictionInfo )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                 questRestrictionInfo->fields.questId,
                                                 0LL);
    v8 = (int)this;
    if ( !followerInfo )
      goto LABEL_15;
  }
  else
  {
    v8 = 0;
    if ( !followerInfo )
      goto LABEL_15;
  }
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getSvtId(followerInfo, followerIndex, v8, 0LL);
  if ( (int)this < 1 )
  {
    *(_WORD *)&v7->fields.isUniqueSvtRestriction = 0;
    v7->fields._IsSlotRestriction_k__BackingField = 0;
  }
  else
  {
    v9 = v7->fields.followerInfo;
    v10 = v7->fields.questRestrictionInfo;
    v11 = v7->fields.followerIndex;
    if ( v10 )
    {
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v10->fields.questId, 0LL);
      v12 = (int)this;
      if ( !v9 )
LABEL_15:
        sub_1B8880C(this, *(_QWORD *)&friendPointUpVal);
    }
    else
    {
      v12 = 0;
      if ( !v9 )
        goto LABEL_15;
    }
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getUniqueSvtRestriction(v9, v10, v11, v12, 0LL);
    v13 = v7->fields.followerInfo;
    v14 = v7->fields.questRestrictionInfo;
    v15 = v7->fields.followerIndex;
    v7->fields.isUniqueSvtRestriction = (unsigned __int8)this & 1;
    if ( v14 )
    {
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v14->fields.questId, 0LL);
      v16 = (int)this;
      if ( !v13 )
        goto LABEL_15;
    }
    else
    {
      v16 = 0;
      if ( !v13 )
        goto LABEL_15;
    }
    v7->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                    v13,
                                                    v14,
                                                    v15,
                                                    v16,
                                                    0LL);
    v7->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(v7, v17);
    FollowerSelectItemListViewItem__SetEventUpInfo(v7, v18);
  }
}


void __fastcall FollowerSelectItemListViewItem__SetEventUpInfo(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v2; // x19
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  FollowerInfo_o *followerInfo; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventUpValSetupInfo_o *v7; // x23
  int32_t followerIndex; // w24
  int32_t v9; // w6
  bool *p_isEquipEventUpVal; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  struct IconLabelInfo_o *iconLabelInfo2; // x8
  Il2CppObject *Instance; // x22
  const MethodInfo *v15; // x1
  struct System_String_o *sortStr1; // x23
  int64_t sortValue1; // x24
  int32_t v18; // w23
  const MethodInfo *v19; // x1
  int32_t Rarity; // w24
  const MethodInfo *v21; // x1
  struct IconLabelInfo_o *v22; // x8
  bool v23; // w8
  System_Collections_Generic_List_object__o *v24; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  FollowerSelectItemListViewItem___c_c *v27; // x0
  System_Func_object__int__o *_9__72_0; // x23
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
  int32_t eventUpValItemList; // w25
  FollowerSelectItemListViewItem_o *v49; // x0
  EventPersonalMargeUpValInfo_c **v50; // x19
  struct System_String_o *v51; // x26
  int64_t v52; // x28
  int32_t v53; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v55; // w24
  EventMargeItemUpValInfo_o *v56; // x25
  const MethodInfo *v57; // x1
  System_Object_array *v58; // x0
  _QWORD *p_eventUpValItemList; // [xsp+0h] [xbp-80h]
  FollowerSelectItemListViewItem_o *v60; // [xsp+8h] [xbp-78h]
  int32_t actMaxRarity; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v2 = this;
  if ( (byte_4A56452 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1B885B0(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1B885B0(&System_Func_EventDropUpValInfo__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__72_0__);
    this = (FollowerSelectItemListViewItem_o *)sub_1B885B0(&FollowerSelectItemListViewItem___c_TypeInfo);
    byte_4A56452 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  setupInfo = v2->fields.setupInfo;
  if ( setupInfo )
  {
    eventIdList = setupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_73;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      *(_WORD *)&v2->fields.isServantEventUpVal = 0;
      v2->fields.isEventUpVal = 0;
      v2->fields.eventUpValItemList = 0LL;
      this = (FollowerSelectItemListViewItem_o *)sub_1B88554(&v2->fields.eventUpValItemList, 0LL);
      followerInfo = v2->fields.followerInfo;
      v7 = v2->fields.setupInfo;
      questRestrictionInfo = v2->fields.questRestrictionInfo;
      followerIndex = v2->fields.followerIndex;
      if ( questRestrictionInfo )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                     questRestrictionInfo->fields.questId,
                                                     0LL);
        v9 = (int)this;
        if ( !followerInfo )
          goto LABEL_73;
      }
      else
      {
        v9 = 0;
        if ( !followerInfo )
          goto LABEL_73;
      }
      p_isEquipEventUpVal = &v2->fields.isEquipEventUpVal;
      FollowerInfo__getEventUpVal_38919232(
        followerInfo,
        &v2->fields.eventUpValInfo,
        &v2->fields.isServantEventUpVal,
        &v2->fields.isEquipEventUpVal,
        v7,
        followerIndex,
        v9,
        0LL);
      if ( !v2->fields.isServantBonusFilterEnable )
        v2->fields.isServantEventUpVal = 0;
      if ( FollowerSelectItemListViewItem__get_ServantLeader(v2, v11) )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, v12);
        if ( !this )
          goto LABEL_73;
        iconLabelInfo2 = this->fields.iconLabelInfo2;
        if ( iconLabelInfo2 )
        {
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, v15);
          if ( !this )
            goto LABEL_73;
          sortValue1 = this->fields.sortValue1;
          sortStr1 = this->fields.sortStr1;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v63.fields.currentCryptoKey = sortValue1;
          *(_QWORD *)&v63.fields.fakeValue = sortStr1;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v63, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, v19);
          if ( !this )
            goto LABEL_73;
          Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, v21);
          if ( !this )
            goto LABEL_73;
          v22 = this->fields.iconLabelInfo2;
          if ( !v22 )
            goto LABEL_73;
          this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                       *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v22[1].monitor,
                                                       0LL);
          if ( !Instance )
            goto LABEL_73;
          LODWORD(iconLabelInfo2) = PartyOrganizationUtility__IsRarityRestriction(
                                      (PartyOrganizationUtility_o *)Instance,
                                      &skillName,
                                      &actMaxRarity,
                                      v18,
                                      Rarity,
                                      (int32_t)this,
                                      -1,
                                      0LL);
        }
      }
      else
      {
        LODWORD(iconLabelInfo2) = 0;
      }
      if ( (unsigned int)iconLabelInfo2 | !v2->fields.isServantEquipBonusFilterEnable )
      {
        v23 = 0;
        *p_isEquipEventUpVal = 0;
      }
      else
      {
        v23 = *p_isEquipEventUpVal;
      }
      v2->fields.isEventUpVal = v23 || v2->fields.isServantEventUpVal;
      v24 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v24,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = v2->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v27 = FollowerSelectItemListViewItem___c_TypeInfo;
        if ( !FollowerSelectItemListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItem___c_TypeInfo);
          v27 = FollowerSelectItemListViewItem___c_TypeInfo;
        }
        p_eventUpValItemList = &v2->fields.eventUpValItemList;
        _9__72_0 = (System_Func_object__int__o *)v27->static_fields->__9__72_0;
        if ( !_9__72_0 )
        {
          if ( !v27->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v27);
            v27 = FollowerSelectItemListViewItem___c_TypeInfo;
          }
          v29 = (Il2CppObject *)v27->static_fields->__9;
          _9__72_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__72_0,
            v29,
            Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__72_0__,
            0LL);
          static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
          static_fields->__9__72_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__72_0;
          sub_1B88554(&static_fields->__9__72_0, _9__72_0);
        }
        v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     dropList,
                                                                     (System_Func_TSource__TResult__o *)_9__72_0,
                                                                     (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v32 = System_Linq_Enumerable__Distinct_int_(
                v31,
                (const MethodInfo_2E9EB0C *)Method_System_Linq_Enumerable_Distinct_int___);
        this = (FollowerSelectItemListViewItem_o *)System_Linq_Enumerable__ToArray_int_(
                                                     v32,
                                                     (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
        actMaxRarity = 0;
        if ( this )
        {
          sortIndex = this->fields.sortIndex;
          v34 = this;
          if ( sortIndex >= 1 )
          {
            v35 = &EventPersonalMargeUpValInfo_TypeInfo;
            v36 = 0;
            v60 = v2;
            while ( 1 )
            {
              if ( v36 >= (unsigned int)sortIndex )
                goto LABEL_74;
              servantEntity = v2->fields.servantEntity;
              v38 = *((_DWORD *)&v34->fields.sortValue0 + v36);
              v39 = (EventPersonalMargeUpValInfo_o *)sub_1B887FC(*v35);
              EventPersonalMargeUpValInfo___ctor(v39, v38, servantEntity, 0LL);
              this = (FollowerSelectItemListViewItem_o *)v2->fields.eventUpValInfo;
              if ( !this )
                goto LABEL_73;
              this = (FollowerSelectItemListViewItem_o *)EventUpValInfo__GetDropItemList(
                                                           (EventUpValInfo_o *)this,
                                                           0,
                                                           0LL);
              if ( !v39 )
                goto LABEL_73;
              EventPersonalMargeUpValInfo__Add(v39, (EventDropItemUpValInfo_array *)this, 0LL);
              this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__IsEmpty(v39, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__GetList(v39, 0LL);
                if ( !this )
                  goto LABEL_73;
                v40 = *(_QWORD *)&this->fields.sortIndex;
                v41 = this;
                if ( (int)v40 >= 1 )
                  break;
              }
LABEL_51:
              if ( !v2->fields.isNpc )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v2, method);
                if ( this )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  this = (FollowerSelectItemListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
                  if ( !this )
                    goto LABEL_73;
                  v47 = (EventServantPointRankMaster_o *)this;
                  this = (FollowerSelectItemListViewItem_o *)EventServantPointRankMaster__IsEnableEvent(
                                                               (EventServantPointRankMaster_o *)this,
                                                               v38,
                                                               0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v2,
                                                                 method);
                    if ( !this )
                      goto LABEL_73;
                    eventUpValItemList = (int32_t)this->fields.eventUpValItemList;
                    v49 = v2;
                    v50 = v35;
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v49,
                                                                 method);
                    if ( !this )
                      goto LABEL_73;
                    v52 = this->fields.sortValue1;
                    v51 = this->fields.sortStr1;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v64.fields.currentCryptoKey = v52;
                    *(_QWORD *)&v64.fields.fakeValue = v51;
                    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v64, 0LL);
                    EnableEntity = EventServantPointRankMaster__GetEnableEntity(v47, v38, eventUpValItemList, v53, 0LL);
                    v55 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
                    v35 = v50;
                    v56 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_38890232(v56, v38, 0LL);
                    v2 = v60;
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v60,
                                                                 v57);
                    if ( !this )
                      goto LABEL_73;
                    if ( !v56 )
                      goto LABEL_73;
                    EventMargeItemUpValInfo__SetServantPointInfo(
                      v56,
                      (int32_t)this->fields.eventUpValItemList,
                      v55,
                      1,
                      0LL);
                    if ( !v24 )
                      goto LABEL_73;
                    System_Collections_Generic_List_object___Insert(
                      v24,
                      0,
                      (Il2CppObject *)v56,
                      (const MethodInfo_34FE5E4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                  }
                }
              }
              v36 = actMaxRarity + 1;
              actMaxRarity = v36;
              sortIndex = v34->fields.sortIndex;
              if ( v36 >= sortIndex )
                goto LABEL_70;
            }
            v42 = 0LL;
            while ( v42 < (unsigned int)v40 )
            {
              if ( !v24 )
                goto LABEL_73;
              method = (const MethodInfo *)*(&v41->fields.sortValue0 + v42);
              items = v24->fields._items;
              v44 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v24->fields._version;
              if ( !items )
                goto LABEL_73;
              size = v24->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v24,
                  (Il2CppObject *)method,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
              }
              else
              {
                v46 = &items->obj.klass + size;
                v24->fields._size = size + 1;
                v46[4] = (Il2CppClass *)method;
                this = (FollowerSelectItemListViewItem_o *)sub_1B88554(v46 + 4, method);
              }
              LODWORD(v40) = v41->fields.sortIndex;
              if ( (__int64)++v42 >= (int)v40 )
                goto LABEL_51;
            }
LABEL_74:
            sub_1B88814(this, method);
          }
LABEL_70:
          if ( v24 )
          {
            v58 = System_Collections_Generic_List_object___ToArray(
                    v24,
                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
            *p_eventUpValItemList = v58;
            sub_1B88554(p_eventUpValItemList, v58);
            return;
          }
        }
      }
LABEL_73:
      sub_1B8880C(this, method);
    }
  }
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
  FollowerInfo_o *followerInfo; // x21
  int32_t type; // w27
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w2
  int32_t SvtId; // w21
  const MethodInfo *v11; // x2
  __int64 *p_sortValue0; // x26
  int32_t priorityKind; // w23
  System_Collections_Generic_Dictionary_string__int__o *ValuesDictionary; // x22
  const MethodInfo *v15; // x1
  int64_t v16; // x24
  struct System_String_o *v17; // x25
  int32_t Item; // w0
  const MethodInfo *v19; // x1
  int v20; // w8
  signed int sortValue2; // w22
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  int64_t sortValue1B; // x22
  struct System_String_o *sortStr1; // x23
  System_String_o *v26; // x22
  System_String_o *v27; // x23
  int32_t MaxIndividualFilter; // w0
  int v29; // w25
  int32_t v30; // w24
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  int32_t Int_69417088; // w26
  const MethodInfo *v36; // x1
  int64_t v37; // x27
  struct System_String_o *v38; // x28
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  int32_t v43; // w26
  const MethodInfo *v44; // x1
  int64_t v45; // x27
  struct System_String_o *v46; // x28
  int32_t v47; // w3
  __int64 *v49; // x23
  __int64 v50; // x22
  const MethodInfo *v51; // x1
  int sortValue2B_high; // w23
  int64_t v53; // x22
  int32_t v54; // w23
  __int64 v55; // x8
  __int64 v56; // x22
  int v57; // w23
  int64_t v58; // x22
  int32_t v59; // w23
  __int64 v60; // x8
  int v61; // w8
  IconLabelInfo_o *iconLabelInfo1; // x20
  FollowerInfo_o *v63; // x21
  struct QuestRestrictionInfo_o *v64; // x8
  int32_t v65; // w22
  int32_t v66; // w2
  FollowerInfo_o *v67; // x20
  struct QuestRestrictionInfo_o *v68; // x8
  int32_t v69; // w21
  int32_t v70; // w2
  int32_t index; // w8
  FollowerInfo_o *v72; // x22
  struct QuestRestrictionInfo_o *v73; // x8
  int32_t v74; // w23
  int32_t v75; // w21
  int32_t v76; // w2
  int64_t classIndex; // x8
  int64_t deckPriority; // x9
  __int64 v79; // x8
  FollowerInfo_o *v80; // x20
  struct QuestRestrictionInfo_o *v81; // x8
  int32_t v82; // w21
  int32_t v83; // w2
  FollowerInfo_o *v84; // x20
  struct QuestRestrictionInfo_o *v85; // x8
  int32_t v86; // w21
  int32_t v87; // w2
  int64_t v88; // x9
  IconLabelInfo_o *iconLabelInfo2; // x20
  FollowerInfo_o *v90; // x21
  struct QuestRestrictionInfo_o *v91; // x8
  int32_t v92; // w22
  __int64 v93; // x8
  FollowerInfo_o *v94; // x20
  struct QuestRestrictionInfo_o *v95; // x8
  int32_t v96; // w22
  int v97; // w21
  int32_t v98; // w2
  int32_t v99; // w2
  FollowerInfo_o *v100; // x20
  struct QuestRestrictionInfo_o *v101; // x8
  int32_t v102; // w22
  int v103; // w21
  int32_t v104; // w2
  IconLabelInfo_o *v105; // x20
  FollowerInfo_o *v106; // x22
  struct QuestRestrictionInfo_o *v107; // x8
  int32_t v108; // w23
  int32_t v109; // w2
  FollowerInfo_o *v110; // x22
  struct QuestRestrictionInfo_o *v111; // x8
  int32_t v112; // w23
  int32_t v113; // w2
  FollowerInfo_o *v114; // x22
  struct QuestRestrictionInfo_o *v115; // x8
  int32_t v116; // w23
  int32_t v117; // w21
  int32_t v118; // w2
  FollowerInfo_o *v119; // x22
  struct QuestRestrictionInfo_o *v120; // x8
  int32_t v121; // w23
  int32_t v122; // w2
  FollowerInfo_o *v123; // x23
  struct QuestRestrictionInfo_o *v124; // x8
  int32_t v125; // w24
  int32_t v126; // w22
  int32_t v127; // w2
  FollowerInfo_o *v128; // x23
  struct QuestRestrictionInfo_o *v129; // x8
  int32_t v130; // w24
  int32_t v131; // w2
  int32_t v132; // w4
  int32_t v133; // w1
  FollowerInfo_o *v134; // x22
  struct QuestRestrictionInfo_o *v135; // x8
  int32_t v136; // w23
  int32_t v137; // w21
  int32_t v138; // w2
  int64_t servantEntity; // x8
  _BOOL4 isQuestRestriction; // w9
  __int64 v141; // x10
  __int64 v142; // x11
  __int64 v143; // x9
  Il2CppObject *MasterData_object; // [xsp+8h] [xbp-78h]
  EventBonusFilterGroupMemberEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  int v146; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16

  v4 = this;
  if ( (byte_4A56454 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1413/*"2"*/);
    sub_1B885B0(&StringLiteral_3309/*"BonusFilterEquipId"*/);
    sub_1B885B0(&StringLiteral_3311/*"BonusFilterGroupId"*/);
    sub_1B885B0(&StringLiteral_1266/*"1"*/);
    this = (FollowerSelectItemListViewItem_o *)sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A56454 = 1;
  }
  v146 = 0;
  entity = 0LL;
  followerInfo = v4->fields.followerInfo;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = 0LL;
  if ( !followerInfo )
    goto LABEL_198;
  type = followerInfo->fields.type;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  followerIndex = v4->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  SvtId = FollowerInfo__getSvtId(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
  if ( v4->fields.isBonusFilterEnable && !v4->fields.isNpc )
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
        goto LABEL_198;
      sortValue2 = this->fields.sortValue2;
      this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( sortValue2 >= (signed int)*(&this->fields.friendPointCampaignEntityList->max_length + 1) )
        goto LABEL_201;
    }
    if ( !sort )
      goto LABEL_198;
    if ( ListViewSort__GetFilter(sort, 40, 0LL) )
    {
LABEL_201:
      if ( !FollowerSelectItemListViewItem__get_EquipInfo(v4, (const MethodInfo *)sort) )
        goto LABEL_53;
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v22);
      if ( !this )
        goto LABEL_198;
      sortStr1 = this->fields.sortStr1;
      sortValue1B = this->fields.sortValue1B;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v148.fields.currentCryptoKey = sortStr1;
      *(_QWORD *)&v148.fields.fakeValue = sortValue1B;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                   v148,
                                                   0LL);
      if ( (int)this < 1 )
        goto LABEL_53;
      if ( !sort )
        goto LABEL_198;
      if ( ListViewSort__GetFilter(sort, 41, 0LL) )
        goto LABEL_53;
      v26 = (System_String_o *)StringLiteral_3309/*"BonusFilterEquipId"*/;
      v27 = (System_String_o *)StringLiteral_3311/*"BonusFilterGroupId"*/;
      this = (FollowerSelectItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_198;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v146 = 0;
      if ( MaxIndividualFilter < 1 )
      {
LABEL_53:
        if ( FollowerSelectItemListViewItem__ChkWholeFilter(v4, sort, v23) )
          goto LABEL_9;
      }
      else
      {
        v29 = MaxIndividualFilter;
        v30 = type;
        while ( 1 )
        {
          v31 = System_Int32__ToString((int32_t)&v146, 0LL);
          v32 = System_String__Concat_61707032(v26, v31, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v32, 0LL) )
          {
            v33 = System_Int32__ToString((int32_t)&v146, 0LL);
            v34 = System_String__Concat_61707032(v26, v33, 0LL);
            Int_69417088 = UnityEngine_PlayerPrefs__GetInt_69417088(v34, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v36);
            if ( !this )
              goto LABEL_198;
            v38 = this->fields.sortStr1;
            v37 = this->fields.sortValue1B;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v149.fields.currentCryptoKey = v38;
            *(_QWORD *)&v149.fields.fakeValue = v37;
            type = v30;
            if ( Int_69417088 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v149, 0LL) )
              break;
          }
          v39 = System_Int32__ToString((int32_t)&v146, 0LL);
          v40 = System_String__Concat_61707032(v27, v39, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v40, 0LL) )
          {
            v41 = System_Int32__ToString((int32_t)&v146, 0LL);
            v42 = System_String__Concat_61707032(v27, v41, 0LL);
            v43 = UnityEngine_PlayerPrefs__GetInt_69417088(v42, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v44);
            if ( !this )
              goto LABEL_198;
            v46 = this->fields.sortStr1;
            v45 = this->fields.sortValue1B;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v150.fields.currentCryptoKey = v46;
            *(_QWORD *)&v150.fields.fakeValue = v45;
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v150, 0LL);
            this = (FollowerSelectItemListViewItem_o *)MasterData_object;
            if ( !MasterData_object )
              goto LABEL_198;
            type = v30;
            if ( EventBonusFilterGroupMemberMaster__TryGetEntity(
                   (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                   &entity,
                   v43,
                   v47,
                   0LL) )
            {
              return 0;
            }
          }
          if ( ++v146 >= v29 )
            goto LABEL_53;
        }
      }
    }
    return 0;
  }
LABEL_9:
  this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_198;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  v4->fields.sortValue0 = 0LL;
  p_sortValue0 = &v4->fields.sortValue0;
  v4->fields.sortValue0B = 0LL;
  if ( !sort )
    goto LABEL_198;
  priorityKind = sort->fields.priorityKind;
  ValuesDictionary = FollowerSelectItemListViewItem__GetValuesDictionary(v4, priorityKind, v11);
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v15);
  if ( this )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                 v4,
                                                 (const MethodInfo *)sort);
    if ( !this )
      goto LABEL_198;
    v17 = this->fields.sortStr1;
    v16 = this->fields.sortValue1B;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v147.fields.currentCryptoKey = v17;
    *(_QWORD *)&v147.fields.fakeValue = v16;
    this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                 v147,
                                                 0LL);
    if ( ValuesDictionary )
    {
      if ( (int)this >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v49 = &StringLiteral_1413/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_79;
            v49 = &StringLiteral_1212/*"0"*/;
          }
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                                                       (Il2CppObject *)*v49,
                                                       (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v50 = 100000LL
                * System_Collections_Generic_Dictionary_object__int___get_Item(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)*v49,
                    (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v4->fields.sortValue0 = v50;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v51);
            if ( !this )
              goto LABEL_198;
            sortValue2B_high = HIDWORD(this->fields.sortValue2B);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                         v4,
                                                         (const MethodInfo *)sort);
            if ( !this )
              goto LABEL_198;
            v53 = v50 + 10LL * (*(_DWORD *)&this->fields.isTermination + sortValue2B_high);
            v4->fields.sortValue0 = v53;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                         v4,
                                                         (const MethodInfo *)sort);
            if ( !this )
              goto LABEL_198;
            v54 = this->fields.sortValue2;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              this = (FollowerSelectItemListViewItem_o *)j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v55 = v53 | (v54 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
            goto LABEL_78;
          }
        }
        else
        {
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                                                       (Il2CppObject *)StringLiteral_1212/*"0"*/,
                                                       (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                                                         (Il2CppObject *)StringLiteral_1266/*"1"*/,
                                                         (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1212/*"0"*/,
                     (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                         (Il2CppObject *)StringLiteral_1266/*"1"*/,
                         (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v20 = 100000;
              }
              else
              {
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                       (Il2CppObject *)StringLiteral_1212/*"0"*/,
                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
                {
                  v56 = *p_sortValue0;
LABEL_70:
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v19);
                  if ( !this )
                    goto LABEL_198;
                  v57 = HIDWORD(this->fields.sortValue2B);
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                               v4,
                                                               (const MethodInfo *)sort);
                  if ( !this )
                    goto LABEL_198;
                  v58 = v56 + 10LL * (*(_DWORD *)&this->fields.isTermination + v57);
                  v4->fields.sortValue0 = v58;
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                               v4,
                                                               (const MethodInfo *)sort);
                  if ( !this )
                    goto LABEL_198;
                  v59 = this->fields.sortValue2;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    this = (FollowerSelectItemListViewItem_o *)j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v59 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                    v55 = v58;
                  else
                    v55 = v58 + 1;
LABEL_78:
                  *p_sortValue0 = v55;
                  goto LABEL_79;
                }
                Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                         (Il2CppObject *)StringLiteral_1266/*"1"*/,
                         (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v20 = 100000000;
              }
              v56 = Item * (__int64)v20;
              *p_sortValue0 = v56;
              goto LABEL_70;
            }
          }
        }
      }
    }
  }
LABEL_79:
  v60 = 56LL;
  if ( v4->fields._IsRecommendFollower_k__BackingField )
    v60 = 152LL;
  v61 = *(_DWORD *)((char *)&sort->klass + v60);
  if ( v61 == 11 )
  {
    if ( SvtId < 1 )
    {
      this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue2 = 0LL;
      v4->fields.sortValue2B = 0LL;
      if ( !this )
        goto LABEL_198;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
    }
    else
    {
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v63 = v4->fields.followerInfo;
      v64 = v4->fields.questRestrictionInfo;
      v65 = v4->fields.followerIndex;
      v4->fields.sortValue2 = v4->fields.deckPriority;
      v4->fields.sortValue2B = 1LL;
      if ( v64 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v64->fields.questId, 0LL);
        v66 = (int)this;
        if ( !v63 )
          goto LABEL_198;
      }
      else
      {
        v66 = 0;
        if ( !v63 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v63, v65, v66, 0LL);
      v72 = v4->fields.followerInfo;
      v73 = v4->fields.questRestrictionInfo;
      v74 = v4->fields.followerIndex;
      v75 = (int)this;
      if ( v73 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v73->fields.questId, 0LL);
        v76 = (int)this;
        if ( !v72 )
          goto LABEL_198;
      }
      else
      {
        v76 = 0;
        if ( !v72 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v72, v74, v76, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_198;
      IconLabelInfo__Set_38140136(iconLabelInfo1, 2, v75, (int32_t)this, 0, 0, 0, 0, 0LL);
    }
    classIndex = (unsigned int)v4->fields.classIndex;
    if ( (int)classIndex >= 1 )
    {
      deckPriority = v4->fields.deckPriority;
      v4->fields.sortValue2 = classIndex;
      v4->fields.sortValue2B = deckPriority;
    }
    switch ( type )
    {
      case 1:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v79 = 5LL;
        goto LABEL_114;
      case 2:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v79 = 4LL;
        goto LABEL_114;
      case 3:
      case 4:
        goto LABEL_184;
      case 5:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v79 = 6LL;
LABEL_114:
        v4->fields.sortValue0B = v79;
        if ( !this )
          goto LABEL_198;
        v4->fields.sortValue1 = FollowerInfo__getUpdatedAt((FollowerInfo_o *)this, 0LL);
        break;
      default:
        goto LABEL_195;
    }
    goto LABEL_195;
  }
  if ( SvtId >= 1 )
  {
    if ( v61 > 5 )
    {
      if ( v61 == 6 )
      {
        v84 = v4->fields.followerInfo;
        v85 = v4->fields.questRestrictionInfo;
        v86 = v4->fields.followerIndex;
        if ( v85 )
        {
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v85->fields.questId, 0LL);
          v87 = (int)this;
        }
        else
        {
          v87 = 0;
        }
        if ( v84 )
        {
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v84, v86, v87, 0LL);
          v100 = v4->fields.followerInfo;
          v101 = v4->fields.questRestrictionInfo;
          v102 = v4->fields.followerIndex;
          v103 = (int)this;
          if ( v101 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v101->fields.questId, 0LL);
            v104 = (int)this;
          }
          else
          {
            v104 = 0;
          }
          if ( v100 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v100, v102, v104, 0LL);
            v105 = v4->fields.iconLabelInfo1;
            v110 = v4->fields.followerInfo;
            v111 = v4->fields.questRestrictionInfo;
            v112 = v4->fields.followerIndex;
            v4->fields.sortValue1 = (int)this + v103;
            if ( v111 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v111->fields.questId, 0LL);
              v113 = (int)this;
            }
            else
            {
              v113 = 0;
            }
            if ( v110 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v110, v112, v113, 0LL);
              v119 = v4->fields.followerInfo;
              v120 = v4->fields.questRestrictionInfo;
              v121 = v4->fields.followerIndex;
              v117 = (int)this;
              if ( v120 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                             v120->fields.questId,
                                                             0LL);
                v122 = (int)this;
              }
              else
              {
                v122 = 0;
              }
              if ( v119 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustAtk(v119, v121, v122, 0LL);
                v128 = v4->fields.followerInfo;
                v129 = v4->fields.questRestrictionInfo;
                v130 = v4->fields.followerIndex;
                v126 = (int)this;
                if ( v129 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                               v129->fields.questId,
                                                               0LL);
                  v131 = (int)this;
                }
                else
                {
                  v131 = 0;
                }
                if ( v128 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v128, v130, v131, 0LL);
                  if ( v105 )
                  {
                    v132 = (int)this;
                    v133 = 5;
LABEL_173:
                    IconLabelInfo__Set_38140136(v105, v133, v117, v126, v132, 0, 0, 0, 0LL);
                    iconLabelInfo2 = v4->fields.iconLabelInfo2;
                    v90 = v4->fields.followerInfo;
                    v91 = v4->fields.questRestrictionInfo;
                    v92 = v4->fields.followerIndex;
                    if ( !v91 )
                    {
LABEL_174:
                      v99 = 0;
                      if ( !v90 )
                        goto LABEL_198;
                      goto LABEL_175;
                    }
LABEL_135:
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                 v91->fields.questId,
                                                                 0LL);
                    v99 = (int)this;
                    if ( !v90 )
                      goto LABEL_198;
LABEL_175:
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v90, v92, v99, 0LL);
                    v134 = v4->fields.followerInfo;
                    v135 = v4->fields.questRestrictionInfo;
                    v136 = v4->fields.followerIndex;
                    v137 = (int)this;
                    if ( v135 )
                    {
                      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                   v135->fields.questId,
                                                                   0LL);
                      v138 = (int)this;
                      if ( !v134 )
                        goto LABEL_198;
                    }
                    else
                    {
                      v138 = 0;
                      if ( !v134 )
                        goto LABEL_198;
                    }
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v134, v136, v138, 0LL);
                    if ( !iconLabelInfo2 )
                      goto LABEL_198;
                    IconLabelInfo__Set_38140136(iconLabelInfo2, 2, v137, (int32_t)this, 0, 0, 0, 0, 0LL);
                    LODWORD(servantEntity) = v4->fields.classIndex;
                    if ( (int)servantEntity <= 0 )
                    {
                      servantEntity = (int64_t)v4->fields.servantEntity;
                      if ( !servantEntity )
                        goto LABEL_198;
                      LODWORD(servantEntity) = *(_DWORD *)(servantEntity + 208);
                    }
                    switch ( type )
                    {
                      case 1:
                        isQuestRestriction = v4->fields.isQuestRestriction;
                        v141 = 3LL;
                        v142 = 6LL;
                        goto LABEL_190;
                      case 2:
                        isQuestRestriction = v4->fields.isQuestRestriction;
                        v141 = 2LL;
                        v142 = 5LL;
                        goto LABEL_190;
                      case 3:
                      case 4:
LABEL_184:
                        index = v4->fields.index;
                        v4->fields.sortValue0 = 1000000000000LL;
                        v4->fields.sortValue1 = 0LL;
                        goto LABEL_185;
                      case 5:
                        isQuestRestriction = v4->fields.isQuestRestriction;
                        v141 = 4LL;
                        v142 = 7LL;
LABEL_190:
                        servantEntity = (int)servantEntity;
                        if ( isQuestRestriction )
                          v143 = v141;
                        else
                          v143 = v142;
                        v4->fields.sortValue0B = v143;
                        goto LABEL_194;
                      default:
                        goto LABEL_195;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_198:
        sub_1B8880C(this, sort);
      }
      if ( v61 != 29 )
        goto LABEL_120;
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      if ( !this )
        goto LABEL_198;
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetUseStatus((FollowerInfo_o *)this, 0LL);
    }
    else
    {
      if ( v61 != 3 )
      {
        if ( v61 == 5 )
        {
          v67 = v4->fields.followerInfo;
          v68 = v4->fields.questRestrictionInfo;
          v69 = v4->fields.followerIndex;
          if ( v68 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v68->fields.questId, 0LL);
            v70 = (int)this;
          }
          else
          {
            v70 = 0;
          }
          if ( v67 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v67, v69, v70, 0LL);
            v94 = v4->fields.followerInfo;
            v95 = v4->fields.questRestrictionInfo;
            v96 = v4->fields.followerIndex;
            v97 = (int)this;
            if ( v95 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v95->fields.questId, 0LL);
              v98 = (int)this;
            }
            else
            {
              v98 = 0;
            }
            if ( v94 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v94, v96, v98, 0LL);
              v105 = v4->fields.iconLabelInfo1;
              v106 = v4->fields.followerInfo;
              v107 = v4->fields.questRestrictionInfo;
              v108 = v4->fields.followerIndex;
              v4->fields.sortValue1 = (int)this + v97;
              if ( v107 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                             v107->fields.questId,
                                                             0LL);
                v109 = (int)this;
              }
              else
              {
                v109 = 0;
              }
              if ( v106 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v106, v108, v109, 0LL);
                v114 = v4->fields.followerInfo;
                v115 = v4->fields.questRestrictionInfo;
                v116 = v4->fields.followerIndex;
                v117 = (int)this;
                if ( v115 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                               v115->fields.questId,
                                                               0LL);
                  v118 = (int)this;
                }
                else
                {
                  v118 = 0;
                }
                if ( v114 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustHp(v114, v116, v118, 0LL);
                  v123 = v4->fields.followerInfo;
                  v124 = v4->fields.questRestrictionInfo;
                  v125 = v4->fields.followerIndex;
                  v126 = (int)this;
                  if ( v124 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                 v124->fields.questId,
                                                                 0LL);
                    v127 = (int)this;
                  }
                  else
                  {
                    v127 = 0;
                  }
                  if ( v123 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v123, v125, v127, 0LL);
                    if ( v105 )
                    {
                      v132 = (int)this;
                      v133 = 3;
                      goto LABEL_173;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_198;
        }
LABEL_120:
        v88 = v4->fields.sortValue2;
        iconLabelInfo2 = v4->fields.iconLabelInfo1;
        v90 = v4->fields.followerInfo;
        v91 = v4->fields.questRestrictionInfo;
        v92 = v4->fields.followerIndex;
        goto LABEL_134;
      }
      v80 = v4->fields.followerInfo;
      v81 = v4->fields.questRestrictionInfo;
      v82 = v4->fields.followerIndex;
      if ( v81 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v81->fields.questId, 0LL);
        v83 = (int)this;
      }
      else
      {
        v83 = 0;
      }
      if ( !v80 )
        goto LABEL_198;
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v80, v82, v83, 0LL);
    }
    iconLabelInfo2 = v4->fields.iconLabelInfo1;
    v90 = v4->fields.followerInfo;
    v91 = v4->fields.questRestrictionInfo;
    v92 = v4->fields.followerIndex;
    v88 = (int)this;
LABEL_134:
    v4->fields.sortValue1 = v88;
    if ( !v91 )
      goto LABEL_174;
    goto LABEL_135;
  }
  this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo1;
  if ( !this )
    goto LABEL_198;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  switch ( type )
  {
    case 1:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v93 = 2LL;
      goto LABEL_124;
    case 2:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v93 = 1LL;
      goto LABEL_124;
    case 3:
    case 4:
      index = v4->fields.index;
      v4->fields.sortValue0 = 1000000000000LL;
LABEL_185:
      servantEntity = -index;
LABEL_194:
      v4->fields.sortValue2 = servantEntity;
      break;
    case 5:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v93 = 3LL;
LABEL_124:
      v4->fields.sortValue0B = v93;
      if ( !this )
        goto LABEL_198;
      v4->fields.sortValue2 = FollowerInfo__getUpdatedAt((FollowerInfo_o *)this, 0LL);
      break;
    default:
      break;
  }
LABEL_195:
  if ( v4->fields._isRecommendedUser_k__BackingField )
    *p_sortValue0 += 10000000000000LL;
  return 1;
}


void __fastcall FollowerSelectItemListViewItem__UpdateRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t ReturnTypeByQuestId; // w3
  __int64 QuestRestriction; // x0
  __int64 v8; // x1
  FollowerInfo_o *v9; // x21
  struct QuestRestrictionInfo_o *v10; // x20
  int32_t v11; // w22
  int32_t v12; // w3
  FollowerInfo_o *v13; // x21
  struct QuestRestrictionInfo_o *v14; // x20
  int32_t v15; // w22
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    if ( this->fields.servantEntity )
    {
      followerIndex = this->fields.followerIndex;
      if ( (followerIndex & 0x80000000) == 0 )
      {
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( questRestrictionInfo )
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
        else
          ReturnTypeByQuestId = 0;
        QuestRestriction = FollowerInfo__getQuestRestriction(
                             followerInfo,
                             questRestrictionInfo,
                             followerIndex,
                             ReturnTypeByQuestId,
                             0LL);
        v9 = this->fields.followerInfo;
        v10 = this->fields.questRestrictionInfo;
        v11 = this->fields.followerIndex;
        this->fields.isQuestRestriction = QuestRestriction & 1;
        if ( v10 )
        {
          QuestRestriction = FollowerInfo__GetReturnTypeByQuestId(v10->fields.questId, 0LL);
          v12 = QuestRestriction;
          if ( !v9 )
LABEL_16:
            sub_1B8880C(QuestRestriction, v8);
        }
        else
        {
          v12 = 0;
          if ( !v9 )
            goto LABEL_16;
        }
        QuestRestriction = FollowerInfo__getUniqueSvtRestriction(v9, v10, v11, v12, 0LL);
        v13 = this->fields.followerInfo;
        v14 = this->fields.questRestrictionInfo;
        v15 = this->fields.followerIndex;
        this->fields.isUniqueSvtRestriction = QuestRestriction & 1;
        if ( v14 )
        {
          QuestRestriction = FollowerInfo__GetReturnTypeByQuestId(v14->fields.questId, 0LL);
          v16 = QuestRestriction;
          if ( !v13 )
            goto LABEL_16;
        }
        else
        {
          v16 = 0;
          if ( !v13 )
            goto LABEL_16;
        }
        this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                          v13,
                                                          v14,
                                                          v15,
                                                          v16,
                                                          0LL);
        this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(
                                                            this,
                                                            v17);
        FollowerSelectItemListViewItem__SetEventUpInfo(this, v18);
      }
    }
  }
}


int32_t __fastcall FollowerSelectItemListViewItem__get_DisplayServantType(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerClassId; // w21
  FollowerSelectItemListViewItem_o *v5; // x20
  int32_t v6; // w2
  int32_t IndexForSupport; // w0
  struct QuestRestrictionInfo_o *v8; // x8
  int32_t v9; // w20
  int32_t ReturnTypeByQuestId; // w2

  followerInfo = this->fields.followerInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerClassId = this->fields.followerClassId;
  v5 = this;
  if ( questRestrictionInfo )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                 questRestrictionInfo->fields.questId,
                                                 0LL);
    v6 = (int)this;
    if ( followerInfo )
      goto LABEL_3;
LABEL_6:
    sub_1B8880C(this, method);
  }
  v6 = 0;
  if ( !followerInfo )
    goto LABEL_6;
LABEL_3:
  IndexForSupport = FollowerInfo__getIndexForSupport(followerInfo, followerClassId, v6, v5->fields.supportDeckId, 0LL);
  v8 = v5->fields.questRestrictionInfo;
  v9 = IndexForSupport;
  if ( v8 )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v8->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  return FollowerInfo__getEquipTarget1(followerInfo, v9, ReturnTypeByQuestId, 0LL);
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
  return this->fields._IsMaxOpenClassBoard_k__BackingField;
}


bool __fastcall FollowerSelectItemListViewItem__get_IsMessageDisp(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMessageDisp;
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
  return this->fields._OpenClassBoardNum_k__BackingField;
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

  if ( (byte_4A56455 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A56455 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    p_userName = &followerInfo->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19052/*"error"*/;
  return *p_userName;
}


QuestRestrictionInfo_o *__fastcall FollowerSelectItemListViewItem__get_QuestRestrictionInfo(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  return FollowerInfo__getServantLeaderInfo(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  return FollowerInfo__getSvtId(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
}


System_String_o *__fastcall FollowerSelectItemListViewItem__get_SvtNameText(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *v4; // x20
  const MethodInfo *v5; // x1
  void *servantEntity; // x0
  const MethodInfo *v7; // x1
  int32_t DispLimitCount; // w20
  const MethodInfo *v9; // x1
  int32_t v10; // w21
  int32_t LimitCountByDispLimit; // w20
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v13; // x1
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A56456 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56456 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && this->fields.isNpc )
    return followerInfo->fields.userName;
  if ( !this->fields.servantEntity )
    return 0LL;
  if ( !FollowerSelectItemListViewItem__get_ServantLeader(this, method) )
  {
    servantEntity = this->fields.servantEntity;
    if ( servantEntity )
    {
      v16 = -1;
      return ServantEntity__getName((ServantEntity_o *)servantEntity, v16, -1, 0LL);
    }
LABEL_26:
    sub_1B8880C(servantEntity, v5);
  }
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v5);
  if ( !servantEntity )
    goto LABEL_26;
  v4 = (System_String_o *)*((_QWORD *)servantEntity + 31);
  if ( !System_String__IsNullOrEmpty(v4, 0LL) )
    return v4;
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v7);
  if ( !servantEntity )
    goto LABEL_26;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)servantEntity, 0LL);
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v9);
  if ( !servantEntity )
    goto LABEL_26;
  v10 = *((_DWORD *)servantEntity + 16);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, v10, 0LL);
  servantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantEntity )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)servantEntity,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v13);
  if ( !servantEntity )
    goto LABEL_26;
  v15 = *((_QWORD *)servantEntity + 6);
  v14 = *((_QWORD *)servantEntity + 7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  servantEntity = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
  if ( !MasterData_object )
    goto LABEL_26;
  servantEntity = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                            (ServantLimitImageMaster_o *)MasterData_object,
                            (int32_t)servantEntity,
                            LimitCountByDispLimit,
                            0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_26;
  v16 = (int)servantEntity;
  servantEntity = this->fields.servantEntity;
  return ServantEntity__getName((ServantEntity_o *)servantEntity, v16, -1, 0LL);
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


void __fastcall FollowerSelectItemListViewItem__set_IsDataLost(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDataLost_k__BackingField = value;
}


void __fastcall FollowerSelectItemListViewItem__set_IsMaxOpenClassBoard(
        FollowerSelectItemListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMaxOpenClassBoard_k__BackingField = value;
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


void __fastcall FollowerSelectItemListViewItem__set_OpenClassBoardNum(
        FollowerSelectItemListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OpenClassBoardNum_k__BackingField = value;
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
  Il2CppObject *v1; // x19

  if ( (byte_4A5645B & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewItem___c_TypeInfo);
    byte_4A5645B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(FollowerSelectItemListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FollowerSelectItemListViewItem___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewItem___c_o *)v1;
  sub_1B88554(FollowerSelectItemListViewItem___c_TypeInfo->static_fields, v1);
}


void __fastcall FollowerSelectItemListViewItem___c___ctor(
        FollowerSelectItemListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewItem___c___SetEventUpInfo_b__72_0(
        FollowerSelectItemListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1B8880C(this, 0LL);
  return drop->fields.eventId;
}