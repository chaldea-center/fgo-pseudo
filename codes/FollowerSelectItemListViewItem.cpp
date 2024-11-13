// local variable allocation has failed, the output may be wrong!
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
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  IconLabelInfo_o *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  IconLabelInfo_o *v32; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_Dictionary_int__int__o *v36; // x22
  const MethodInfo *v37; // x2

  if ( (byte_4B11370 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__int___ctor___76739608,
      *(_QWORD *)&index,
      *(_QWORD *)&index2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v24, v25);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v26, v27);
    byte_4B11370 = 1;
  }
  v28 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&index, *(_QWORD *)&index2, followerInfo);
  IconLabelInfo___ctor(v28, 0LL);
  this->fields.iconLabelInfo1 = v28;
  sub_1BCA784(&this->fields.iconLabelInfo1, v28);
  v32 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v29, v30, v31);
  IconLabelInfo___ctor(v32, 0LL);
  this->fields.iconLabelInfo2 = v32;
  sub_1BCA784(&this->fields.iconLabelInfo2, v32);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.friendPointUpVal = friendPointUpVal;
  this->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1BCA784(&this->fields.friendPointCampaignEntityList, friendPointCampaignEntityList);
  this->fields.isBonusFilterEnable = isBonusFilterEnable;
  this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
  this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
  this->fields.isRecommended = isRecommended;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.followerInfo = followerInfo;
  sub_1BCA784(&this->fields.followerInfo, followerInfo);
  this->fields._isRecommendedUser_k__BackingField = isRecommendedUser;
  this->fields.classIndex = index2;
  this->fields.supportDeckId = supportDeckId;
  this->fields.deckPriority = deckPriority;
  if ( classBoardMaxNumDictionary )
  {
    v36 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v33,
                                                                 v34,
                                                                 v35);
    System_Collections_Generic_Dictionary_int__int____ctor_52414864(
      v36,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_31FC990 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___76739608);
  }
  else
  {
    v36 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v36;
  sub_1BCA784(&this->fields.classBoardMaxNumDictionary, v36);
  this->fields._IsReleasedClassBoard_k__BackingField = isReleasedClassBoard;
  this->fields._IsRecommendFollower_k__BackingField = isRecommendFollower;
  FollowerSelectItemListViewItem__AnalyzeEntity(this, followerClassId, v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItem__AnalyzeEntity(
        FollowerSelectItemListViewItem_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *v28; // x8
  __int64 Index; // x0
  __int64 v30; // x1
  struct QuestRestrictionInfo_o *v31; // x8
  FollowerInfo_o *v32; // x23
  int32_t v33; // w20
  int32_t v34; // w2
  struct FollowerInfo_o *v35; // x8
  int32_t v36; // w20
  const MethodInfo *v37; // x1
  struct EventCampaignEntity_o *EnableFriendPointCampaign; // x0
  Il2CppObject *v39; // x0
  FollowerInfo_o *v40; // x22
  struct QuestRestrictionInfo_o *v41; // x21
  int32_t followerIndex; // w23
  int32_t v43; // w3
  struct QuestRestrictionInfo_o *v44; // x8
  FollowerInfo_o *v45; // x22
  struct QuestRestrictionInfo_o *v46; // x21
  int32_t v47; // w23
  int32_t v48; // w3
  FollowerInfo_o *v49; // x22
  struct QuestRestrictionInfo_o *v50; // x21
  int32_t v51; // w23
  int32_t v52; // w3
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  struct QuestRestrictionInfo_o *v55; // x8
  __int64 v56; // x1
  Il2CppObject *Master_object; // x21
  struct QuestRestrictionInfo_o *v58; // x8
  int32_t v59; // w20
  struct FollowerInfo_o *v60; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v63; // w21
  unsigned int v64; // w25
  ClassBoardInfo_o *v65; // x22
  int32_t v66; // w8
  struct FollowerInfo_o *v67; // x8
  TblFriendMaster_o *v68; // x20
  int32_t type; // w9
  int32_t v70; // w1
  struct System_Int32_array *squareIds; // x8
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B11371 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&followerClassId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B11371 = 1;
  }
  entity = 0LL;
  this->fields.isNpc = 0;
  this->fields.followerClassId = followerClassId;
  this->fields.servantEntity = 0LL;
  sub_1BCA784(&this->fields.servantEntity, 0LL);
  *(_WORD *)&this->fields.isUniqueSvtRestriction = 0;
  *(_WORD *)&this->fields.isServantEventUpVal = 0;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValItemList = 0LL;
  sub_1BCA784(&this->fields.eventUpValItemList, 0LL);
  this->fields.friendPointCampaignEntity = 0LL;
  sub_1BCA784(&this->fields.friendPointCampaignEntity, 0LL);
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
    v31 = this->fields.questRestrictionInfo;
    v32 = this->fields.followerInfo;
    v33 = Index;
    this->fields.followerIndex = Index;
    if ( v31 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v31->fields.questId, 0LL);
      v34 = Index;
      if ( !v32 )
        goto LABEL_84;
    }
    else
    {
      v34 = 0;
      if ( !v32 )
        goto LABEL_84;
    }
    Index = FollowerInfo__getSvtId(v32, v33, v34, 0LL);
    if ( (int)Index < 1 )
    {
      v44 = this->fields.questRestrictionInfo;
      if ( v44 )
        LOBYTE(v44) = v44->fields.isRestriction;
      this->fields.isQuestRestriction = (char)v44;
    }
    else
    {
      v35 = this->fields.followerInfo;
      if ( !v35 )
        goto LABEL_84;
      v36 = Index;
      this->fields.isNpc = Follower__IsNpc(v35->fields.type, 0LL);
      EnableFriendPointCampaign = FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(this, v37);
      this->fields.friendPointCampaignEntity = EnableFriendPointCampaign;
      sub_1BCA784(&this->fields.friendPointCampaignEntity, EnableFriendPointCampaign);
      Index = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Index )
        goto LABEL_84;
      Index = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)Index,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Index )
        goto LABEL_84;
      v39 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Index,
              v36,
              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.servantEntity = (struct ServantEntity_o *)v39;
      Index = sub_1BCA784(&this->fields.servantEntity, v39);
      v40 = this->fields.followerInfo;
      v41 = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( v41 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v41->fields.questId, 0LL);
        v43 = Index;
        if ( !v40 )
          goto LABEL_84;
      }
      else
      {
        v43 = 0;
        if ( !v40 )
          goto LABEL_84;
      }
      Index = FollowerInfo__getQuestRestriction(v40, v41, followerIndex, v43, 0LL);
      v45 = this->fields.followerInfo;
      v46 = this->fields.questRestrictionInfo;
      v47 = this->fields.followerIndex;
      this->fields.isQuestRestriction = Index & 1;
      if ( v46 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v46->fields.questId, 0LL);
        v48 = Index;
        if ( !v45 )
          goto LABEL_84;
      }
      else
      {
        v48 = 0;
        if ( !v45 )
          goto LABEL_84;
      }
      Index = FollowerInfo__getUniqueSvtRestriction(v45, v46, v47, v48, 0LL);
      v49 = this->fields.followerInfo;
      v50 = this->fields.questRestrictionInfo;
      v51 = this->fields.followerIndex;
      this->fields.isUniqueSvtRestriction = Index & 1;
      if ( v50 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v50->fields.questId, 0LL);
        v52 = Index;
        if ( !v49 )
          goto LABEL_84;
      }
      else
      {
        v52 = 0;
        if ( !v49 )
          goto LABEL_84;
      }
      this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                        v49,
                                                        v50,
                                                        v51,
                                                        v52,
                                                        0LL);
      this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v53);
      FollowerSelectItemListViewItem__SetEventUpInfo(this, v54);
      v55 = this->fields.questRestrictionInfo;
      if ( v55 && v55->fields.isDataLostBattle )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v56);
        Index = NetworkManager__get_UserId(0LL);
        v58 = this->fields.questRestrictionInfo;
        if ( !v58 || !Master_object )
          goto LABEL_84;
        if ( UserEventDataLostMaster__TryGetEntity(
               (UserEventDataLostMaster_o *)Master_object,
               &entity,
               Index,
               v58->fields.dataLostBattleId,
               0LL) )
        {
          Index = (__int64)entity;
          if ( !entity )
            goto LABEL_84;
          Index = UserEventDataLostEntity__IsRestart(entity, v36, 0LL);
          if ( !entity )
            goto LABEL_84;
          if ( (Index & 1) != 0 )
          {
            this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(entity, v36, 0LL);
          }
          else if ( UserEventDataLostEntity__IsDataLost(entity, v36, 0LL) )
          {
            this->fields._IsDataLost_k__BackingField = 1;
          }
        }
      }
      if ( this->fields.classBoardMaxNumDictionary )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
        Index = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !Index )
          goto LABEL_84;
        Index = (__int64)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Index,
                           v36,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Index )
          goto LABEL_84;
        v59 = *(_DWORD *)(Index + 80);
        Index = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        if ( !Index )
          goto LABEL_84;
        Index = ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Index, v59, 0LL);
        v60 = this->fields.followerInfo;
        if ( !v60 )
          goto LABEL_84;
        userClassBoardInfo = v60->fields.userClassBoardInfo;
        if ( !userClassBoardInfo )
          goto LABEL_84;
        max_length = userClassBoardInfo->max_length;
        if ( max_length < 1 )
        {
LABEL_65:
          v66 = 0;
          LODWORD(Index) = -1;
        }
        else
        {
          v63 = Index;
          v64 = 0;
          while ( 1 )
          {
            if ( v64 >= max_length )
              sub_1BCAA44(Index, v30);
            v65 = userClassBoardInfo->m_Items[v64];
            if ( !v65 )
              goto LABEL_84;
            if ( v65->fields.classBoardBaseId == v63 )
            {
              Index = (__int64)this->fields.classBoardMaxNumDictionary;
              if ( !Index )
                goto LABEL_84;
              Index = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                        (System_Collections_Generic_Dictionary_int__int__o *)Index,
                        v63,
                        (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
              if ( (Index & 1) != 0 )
              {
                Index = ClassBoardInfo__IsReleasedClassId(v65, v59, 0LL);
                if ( (Index & 1) != 0 )
                  break;
              }
            }
            max_length = userClassBoardInfo->max_length;
            if ( (int)++v64 >= max_length )
              goto LABEL_65;
          }
          Index = (__int64)this->fields.classBoardMaxNumDictionary;
          if ( !Index )
            goto LABEL_84;
          Index = System_Collections_Generic_Dictionary_int__int___get_Item(
                    (System_Collections_Generic_Dictionary_int__int__o *)Index,
                    v63,
                    (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          squareIds = v65->fields.squareIds;
          if ( !squareIds )
            goto LABEL_84;
          v66 = squareIds->max_length;
        }
        this->fields._OpenClassBoardNum_k__BackingField = v66;
        this->fields._IsMaxOpenClassBoard_k__BackingField = (int)Index > 0 && v66 >= (int)Index;
      }
    }
    Index = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Index )
    {
      Index = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)Index,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      v67 = this->fields.followerInfo;
      if ( v67 )
      {
        v68 = (TblFriendMaster_o *)Index;
        if ( v67->fields.type == 5
          || Index
          && (Index = TblFriendMaster__isMessageDisp((TblFriendMaster_o *)Index, 3, v67->fields.userId, 0LL),
              v67 = this->fields.followerInfo,
              this->fields.isMessageDisp = Index & 1,
              v67) )
        {
          type = v67->fields.type;
          if ( (type | 4) == 5 )
          {
            if ( !v68 )
              goto LABEL_84;
            if ( type == 5 )
              v70 = 9;
            else
              v70 = 3;
            this->fields.isLockUser = TblFriendMaster__IsLockUser(v68, v70, v67->fields.userId, 0LL);
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
    sub_1BCAA3C(Index, v30);
  }
  v28 = this->fields.questRestrictionInfo;
  this->fields.followerIndex = 0;
  if ( v28 )
    LOBYTE(v28) = v28->fields.isRestriction;
  this->fields.isQuestRestriction = (char)v28;
}


bool __fastcall FollowerSelectItemListViewItem__CheckSlotRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  FollowerSelectItemListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  FollowerInfo_o *followerInfo; // x21
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t followerIndex; // w22
  int32_t v9; // w3
  bool v10; // w8
  int sortValue1; // w21
  int32_t sortValue1_high; // w20
  FollowerInfo_o *v14; // x21
  struct QuestRestrictionInfo_o *v15; // x8
  int32_t v16; // w22
  int32_t v17; // w2
  ServantLeaderInfo_o *v18; // x21
  QuestRestrictionInfo_o *v19; // x19
  struct System_String_o *sortStr1; // x22
  int64_t v21; // x23
  int32_t v22; // w0
  int32_t limitCount; // w22
  int32_t v24; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v3 = this;
  if ( (byte_4B11372 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    this = (FollowerSelectItemListViewItem_o *)sub_1BCA7E0(
                                                 &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                                 v4,
                                                 v5);
    byte_4B11372 = 1;
  }
  followerInfo = v3->fields.followerInfo;
  questRestrictionInfo = v3->fields.questRestrictionInfo;
  followerIndex = v3->fields.followerIndex;
  if ( questRestrictionInfo )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                 questRestrictionInfo->fields.questId,
                                                 0LL);
    v9 = (int)this;
    if ( !followerInfo )
      goto LABEL_28;
  }
  else
  {
    v9 = 0;
    if ( !followerInfo )
      goto LABEL_28;
  }
  if ( FollowerInfo__IsSlotRestriction(followerInfo, questRestrictionInfo, followerIndex, v9, 0LL) )
    return 1;
  this = (FollowerSelectItemListViewItem_o *)v3->fields.questRestrictionInfo;
  if ( !this )
    goto LABEL_28;
  if ( QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)this, 0LL) )
    return 0;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_28;
  sortValue1 = this->fields.sortValue1;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_28;
  v10 = 0;
  if ( sortValue1 < 1 || v3->fields.isNpc )
    return v10;
  if ( !v3->fields.questRestrictionInfo )
    goto LABEL_28;
  sortValue1_high = HIDWORD(this->fields.sortValue1);
  this = (FollowerSelectItemListViewItem_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(
                                               v3->fields.questRestrictionInfo,
                                               sortValue1_high,
                                               0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v14 = v3->fields.followerInfo;
  v15 = v3->fields.questRestrictionInfo;
  v16 = v3->fields.followerIndex;
  if ( v15 )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v15->fields.questId, 0LL);
    v17 = (int)this;
  }
  else
  {
    v17 = 0;
  }
  if ( !v14 )
    goto LABEL_28;
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getServantLeaderInfo(v14, v16, v17, 0LL);
  if ( !this )
    goto LABEL_28;
  v18 = (ServantLeaderInfo_o *)this;
  v19 = v3->fields.questRestrictionInfo;
  v21 = this->fields.sortValue1;
  sortStr1 = this->fields.sortStr1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v25.fields.currentCryptoKey = v21;
  *(_QWORD *)&v25.fields.fakeValue = sortStr1;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  limitCount = v18->fields.limitCount;
  v24 = v22;
  this = (FollowerSelectItemListViewItem_o *)ServantLeaderInfo__getDispLimitCount(v18, 0LL);
  if ( !v19 )
LABEL_28:
    sub_1BCAA3C(this, method);
  return QuestRestrictionInfo__IsRestrictionServantIndividuality(
           v19,
           v24,
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
    sub_1BCAA3C(this, 0LL);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall FollowerSelectItemListViewItem__GetAppendSkillInfo(
        FollowerSelectItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w3
  BalanceConfig_c *v13; // x0
  SkillInfo_array *v14; // x0

  if ( (byte_4B1137B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, isNpc);
    sub_1BCA7E0(&SkillInfo___TypeInfo, v7, v8);
    byte_4B1137B = 1;
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
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = (SkillInfo_array *)sub_1BCA888(
                               SkillInfo___TypeInfo,
                               (unsigned int)v13->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v14;
    sub_1BCA784(skillInfoList, v14);
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
    sub_1BCAA3C(SvtId, v4);
  max_length = friendPointCampaignEntityList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v7 == max_length )
        sub_1BCAA44(SvtId, v4);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x0
  __int64 v11; // x1
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  System_String_o *v13; // x19
  Il2CppObject *v14; // x0
  int v16; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B1137A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_6534/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, v8, v9);
    byte_4B1137A = 1;
  }
  if ( !this->fields.friendPointCampaignEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_6534/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, 0LL);
  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( !friendPointCampaignEntity )
    sub_1BCAA3C(v10, v11);
  v13 = v10;
  v16 = friendPointCampaignEntity->fields.value / 1000;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return System_String__Format(v13, v14, 0LL);
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
    sub_1BCAA3C(FriendPointUpVal, v9);
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
  __int64 v3; // x3
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w3
  TreasureDvcInfo_o *v10; // x20

  if ( (byte_4B11379 & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, tdInfo, method);
    byte_4B11379 = 1;
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
    v10 = (TreasureDvcInfo_o *)sub_1BCAA2C(TreasureDvcInfo_TypeInfo, tdInfo, method, v3);
    TreasureDvcInfo___ctor(v10, 0LL);
    *tdInfo = v10;
    sub_1BCA784(tdInfo, v10);
    return 0;
  }
}


bool __fastcall FollowerSelectItemListViewItem__GetSkillInfo(
        FollowerSelectItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w3
  BalanceConfig_c *v11; // x0
  SkillInfo_array *v12; // x0

  if ( (byte_4B11378 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, method);
    sub_1BCA7E0(&SkillInfo___TypeInfo, v5, v6);
    byte_4B11378 = 1;
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
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList);
      v11 = BalanceConfig_TypeInfo;
    }
    v12 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)v11->static_fields->SvtSkillListMax);
    *skillInfoList = v12;
    sub_1BCA784(skillInfoList, v12);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *values; // x19
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *keys; // x20
  __int64 v26; // x1
  Il2CppObject *Master_object; // x19
  const MethodInfo *v28; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v29; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v30; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  Il2CppObject *v32; // x20
  Il2CppObject *v33; // x21
  const MethodInfo *v34; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v36; // x22
  unsigned __int64 v37; // x24
  int v38; // w26
  int max_length; // w8
  int32_t v40; // w2
  int v41; // w9
  ServantSkillEntity_o *v42; // x10
  SkillLvEntity_o *v43; // x8
  unsigned __int64 v44; // x29
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v46; // x9
  int monitor; // w8
  unsigned __int64 v48; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v50; // x23
  Il2CppObject *v51; // [xsp+0h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4B11374 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantSkillMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_1471/*"3"*/, v19, v20);
    byte_4B11374 = 1;
  }
  v51 = 0LL;
  entity = 0LL;
  result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                     this,
                                                                     *(const MethodInfo **)&kind);
  if ( result )
  {
    result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                       this,
                                                                       v22);
    if ( !result )
      goto LABEL_74;
    keys = result->fields._keys;
    values = result->fields._values;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    *(_QWORD *)&v53.fields.currentCryptoKey = keys;
    *(_QWORD *)&v53.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v28);
      if ( !result )
        goto LABEL_74;
      v30 = result->fields._keys;
      v29 = result->fields._values;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
      *(_QWORD *)&v54.fields.currentCryptoKey = v30;
      *(_QWORD *)&v54.fields.fakeValue = v29;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                         v54,
                                                                         0LL);
      if ( !Master_object )
        goto LABEL_74;
      ServantSkillList = ServantSkillMaster__getServantSkillList(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)result,
                           0LL);
      v32 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
      v33 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v34);
      if ( !result )
        goto LABEL_74;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_74;
      entries = result->fields._entries;
      v36 = result;
      if ( (int)entries >= 1 )
      {
        v37 = 0LL;
        v38 = kind - 1;
        while ( 1 )
        {
          if ( v37 >= (unsigned int)entries )
            goto LABEL_75;
          if ( !ServantSkillList )
            goto LABEL_74;
          max_length = ServantSkillList->max_length;
          v40 = *(&v36->fields._count + v37);
          if ( max_length >= 1 )
          {
            v41 = 0;
            while ( max_length != v41 )
            {
              v42 = ServantSkillList->m_Items[v41];
              if ( !v42 )
                goto LABEL_74;
              if ( v42->fields.skillId == v40 && v42->fields.eventId > 0 )
                goto LABEL_71;
              if ( max_length == ++v41 )
                goto LABEL_27;
            }
LABEL_75:
            sub_1BCAA44(result, v23);
          }
LABEL_27:
          if ( !v32 )
            goto LABEL_74;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             (SkillLvMaster_o *)v32,
                                                                             &entity,
                                                                             v40,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_71:
          LODWORD(entries) = v36->fields._entries;
          if ( (__int64)++v37 >= (int)entries )
            return 0LL;
        }
        v43 = entity;
        if ( entity )
        {
          v44 = 0LL;
          while ( 1 )
          {
            funcId = v43->fields.funcId;
            if ( !funcId )
              break;
            v46 = funcId->max_length;
            if ( (__int64)v44 >= (int)v46 )
              goto LABEL_71;
            if ( v44 >= v46 )
              goto LABEL_75;
            if ( v33 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                                                                                 &v51,
                                                                                 funcId->m_Items[v44 + 1],
                                                                                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v38 )
                {
                  case 0:
                    if ( !v51 )
                      goto LABEL_74;
                    monitor = (int)v51[1].monitor;
                    if ( monitor != 104 && monitor != 123 )
                      break;
                    goto LABEL_52;
                  case 1:
                    if ( !v51 )
                      goto LABEL_74;
                    if ( LODWORD(v51[1].monitor) != 101 )
                      break;
                    goto LABEL_52;
                  case 2:
                    if ( !v51 )
                      goto LABEL_74;
                    if ( LODWORD(v51[1].monitor) != 112 )
                      break;
                    goto LABEL_52;
                  case 3:
                    if ( !v51 )
                      goto LABEL_74;
                    if ( LODWORD(v51[1].monitor) != 111 )
                      break;
                    goto LABEL_52;
                  case 4:
                    if ( !v51 )
                      goto LABEL_74;
                    if ( (LODWORD(v51[1].monitor) | 8) == 110 )
                      goto LABEL_52;
                    break;
                  case 5:
                    if ( !v51 )
                      goto LABEL_74;
                    if ( LODWORD(v51[1].monitor) != 106 )
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
                    if ( (__int64)v44 > (int)entries_low )
                      break;
                    if ( v44 >= entries_low )
                      goto LABEL_75;
                    v50 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&result->fields._count
                                                                                  + v44);
                    if ( !v50 )
                      break;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v50,
                           (Il2CppObject *)StringLiteral_1471/*"3"*/,
                           (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v50,
                                                                                         (Il2CppObject *)StringLiteral_1471/*"3"*/,
                                                                                         (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                    v48 = LODWORD(result->fields._entries);
                    if ( (__int64)v44 >= (int)v48 )
                      break;
                    if ( v44 >= v48 )
                      goto LABEL_75;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields._count
                                                                                     + v44);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_52;
                }
              }
              v43 = entity;
              ++v44;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_74:
        sub_1BCAA3C(result, v23);
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
        sub_1BCAA3C(this, *(_QWORD *)&friendPointUpVal);
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
  __int64 v2; // x2
  FollowerSelectItemListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  FollowerInfo_o *followerInfo; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventUpValSetupInfo_o *v40; // x23
  int32_t followerIndex; // w24
  int32_t v42; // w6
  bool *p_isEquipEventUpVal; // x21
  const MethodInfo *v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  struct IconLabelInfo_o *iconLabelInfo2; // x8
  Il2CppObject *Instance; // x22
  const MethodInfo *v49; // x1
  struct System_String_o *sortStr1; // x23
  int64_t sortValue1; // x24
  int32_t v52; // w23
  const MethodInfo *v53; // x1
  int32_t Rarity; // w24
  const MethodInfo *v55; // x1
  struct IconLabelInfo_o *v56; // x8
  bool v57; // w8
  System_Collections_Generic_List_object__o *v58; // x21
  __int64 v59; // x2
  __int64 v60; // x3
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  FollowerSelectItemListViewItem___c_c *v63; // x0
  System_Func_object__int__o *_9__72_0; // x23
  Il2CppObject *v65; // x24
  struct FollowerSelectItemListViewItem___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  __int64 v69; // x2
  __int64 v70; // x3
  int32_t sortIndex; // w9
  FollowerSelectItemListViewItem_o *v72; // x22
  EventPersonalMargeUpValInfo_c **v73; // x28
  int32_t v74; // w8
  ServantEntity_o *servantEntity; // x25
  int32_t v76; // w23
  EventPersonalMargeUpValInfo_o *v77; // x24
  __int64 v78; // x8
  FollowerSelectItemListViewItem_o *v79; // x24
  unsigned __int64 v80; // x25
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  Il2CppClass **v84; // x0
  EventServantPointRankMaster_o *v85; // x24
  int32_t eventUpValItemList; // w25
  FollowerSelectItemListViewItem_o *v87; // x0
  EventPersonalMargeUpValInfo_c **v88; // x19
  struct System_String_o *v89; // x26
  int64_t v90; // x28
  int32_t v91; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  int32_t v96; // w24
  EventMargeItemUpValInfo_o *v97; // x25
  const MethodInfo *v98; // x1
  System_Object_array *v99; // x0
  _QWORD *p_eventUpValItemList; // [xsp+0h] [xbp-80h]
  FollowerSelectItemListViewItem_o *v101; // [xsp+8h] [xbp-78h]
  int32_t actMaxRarity; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  v3 = this;
  if ( (byte_4B11373 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantPointRankMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11);
    sub_1BCA7E0(&EventMargeItemUpValInfo_TypeInfo, v12, v13);
    sub_1BCA7E0(&EventPersonalMargeUpValInfo_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Func_EventDropUpValInfo__int__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v30, v31);
    sub_1BCA7E0(&Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__72_0__, v32, v33);
    this = (FollowerSelectItemListViewItem_o *)sub_1BCA7E0(&FollowerSelectItemListViewItem___c_TypeInfo, v34, v35);
    byte_4B11373 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  setupInfo = v3->fields.setupInfo;
  if ( setupInfo )
  {
    eventIdList = setupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_73;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      *(_WORD *)&v3->fields.isServantEventUpVal = 0;
      v3->fields.isEventUpVal = 0;
      v3->fields.eventUpValItemList = 0LL;
      this = (FollowerSelectItemListViewItem_o *)sub_1BCA784(&v3->fields.eventUpValItemList, 0LL);
      followerInfo = v3->fields.followerInfo;
      v40 = v3->fields.setupInfo;
      questRestrictionInfo = v3->fields.questRestrictionInfo;
      followerIndex = v3->fields.followerIndex;
      if ( questRestrictionInfo )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                     questRestrictionInfo->fields.questId,
                                                     0LL);
        v42 = (int)this;
        if ( !followerInfo )
          goto LABEL_73;
      }
      else
      {
        v42 = 0;
        if ( !followerInfo )
          goto LABEL_73;
      }
      p_isEquipEventUpVal = &v3->fields.isEquipEventUpVal;
      FollowerInfo__getEventUpVal_39638824(
        followerInfo,
        &v3->fields.eventUpValInfo,
        &v3->fields.isServantEventUpVal,
        &v3->fields.isEquipEventUpVal,
        v40,
        followerIndex,
        v42,
        0LL);
      if ( !v3->fields.isServantBonusFilterEnable )
        v3->fields.isServantEventUpVal = 0;
      if ( FollowerSelectItemListViewItem__get_ServantLeader(v3, v44) )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v3, method);
        if ( !this )
          goto LABEL_73;
        iconLabelInfo2 = this->fields.iconLabelInfo2;
        if ( iconLabelInfo2 )
        {
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v3, v49);
          if ( !this )
            goto LABEL_73;
          sortValue1 = this->fields.sortValue1;
          sortStr1 = this->fields.sortStr1;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
          *(_QWORD *)&v104.fields.currentCryptoKey = sortValue1;
          *(_QWORD *)&v104.fields.fakeValue = sortStr1;
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v104, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v3, v53);
          if ( !this )
            goto LABEL_73;
          Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v3, v55);
          if ( !this )
            goto LABEL_73;
          v56 = this->fields.iconLabelInfo2;
          if ( !v56 )
            goto LABEL_73;
          this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                       *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v56[1].monitor,
                                                       0LL);
          if ( !Instance )
            goto LABEL_73;
          LODWORD(iconLabelInfo2) = PartyOrganizationUtility__IsRarityRestriction(
                                      (PartyOrganizationUtility_o *)Instance,
                                      &skillName,
                                      &actMaxRarity,
                                      v52,
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
      if ( (unsigned int)iconLabelInfo2 | !v3->fields.isServantEquipBonusFilterEnable )
      {
        v57 = 0;
        *p_isEquipEventUpVal = 0;
      }
      else
      {
        v57 = *p_isEquipEventUpVal;
      }
      v3->fields.isEventUpVal = v57 || v3->fields.isServantEventUpVal;
      v58 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                           method,
                                                           v45,
                                                           v46);
      System_Collections_Generic_List_object____ctor(
        v58,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = v3->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v63 = FollowerSelectItemListViewItem___c_TypeInfo;
        if ( !FollowerSelectItemListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItem___c_TypeInfo, method);
          v63 = FollowerSelectItemListViewItem___c_TypeInfo;
        }
        p_eventUpValItemList = &v3->fields.eventUpValItemList;
        _9__72_0 = (System_Func_object__int__o *)v63->static_fields->__9__72_0;
        if ( !_9__72_0 )
        {
          if ( !v63->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v63, method);
            v63 = FollowerSelectItemListViewItem___c_TypeInfo;
          }
          v65 = (Il2CppObject *)v63->static_fields->__9;
          _9__72_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                     System_Func_EventDropUpValInfo__int__TypeInfo,
                                                     method,
                                                     v59,
                                                     v60);
          System_Func_object__int____ctor(
            _9__72_0,
            v65,
            Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__72_0__,
            0LL);
          static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
          static_fields->__9__72_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__72_0;
          sub_1BCA784(&static_fields->__9__72_0, _9__72_0);
        }
        v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     dropList,
                                                                     (System_Func_TSource__TResult__o *)_9__72_0,
                                                                     (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v68 = System_Linq_Enumerable__Distinct_int_(
                v67,
                (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
        this = (FollowerSelectItemListViewItem_o *)System_Linq_Enumerable__ToArray_int_(
                                                     v68,
                                                     (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
        actMaxRarity = 0;
        if ( this )
        {
          sortIndex = this->fields.sortIndex;
          v72 = this;
          if ( sortIndex >= 1 )
          {
            v73 = &EventPersonalMargeUpValInfo_TypeInfo;
            v74 = 0;
            v101 = v3;
            while ( 1 )
            {
              if ( v74 >= (unsigned int)sortIndex )
                goto LABEL_74;
              servantEntity = v3->fields.servantEntity;
              v76 = *((_DWORD *)&v72->fields.sortValue0 + v74);
              v77 = (EventPersonalMargeUpValInfo_o *)sub_1BCAA2C(*v73, method, v69, v70);
              EventPersonalMargeUpValInfo___ctor(v77, v76, servantEntity, 0LL);
              this = (FollowerSelectItemListViewItem_o *)v3->fields.eventUpValInfo;
              if ( !this )
                goto LABEL_73;
              this = (FollowerSelectItemListViewItem_o *)EventUpValInfo__GetDropItemList(
                                                           (EventUpValInfo_o *)this,
                                                           0,
                                                           0LL);
              if ( !v77 )
                goto LABEL_73;
              EventPersonalMargeUpValInfo__Add(v77, (EventDropItemUpValInfo_array *)this, 0LL);
              this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__IsEmpty(v77, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__GetList(v77, 0LL);
                if ( !this )
                  goto LABEL_73;
                v78 = *(_QWORD *)&this->fields.sortIndex;
                v79 = this;
                if ( (int)v78 >= 1 )
                  break;
              }
LABEL_51:
              if ( !v3->fields.isNpc )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v3, method);
                if ( this )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
                  this = (FollowerSelectItemListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
                  if ( !this )
                    goto LABEL_73;
                  v85 = (EventServantPointRankMaster_o *)this;
                  this = (FollowerSelectItemListViewItem_o *)EventServantPointRankMaster__IsEnableEvent(
                                                               (EventServantPointRankMaster_o *)this,
                                                               v76,
                                                               0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v3,
                                                                 method);
                    if ( !this )
                      goto LABEL_73;
                    eventUpValItemList = (int32_t)this->fields.eventUpValItemList;
                    v87 = v3;
                    v88 = v73;
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v87,
                                                                 method);
                    if ( !this )
                      goto LABEL_73;
                    v90 = this->fields.sortValue1;
                    v89 = this->fields.sortStr1;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
                    *(_QWORD *)&v105.fields.currentCryptoKey = v90;
                    *(_QWORD *)&v105.fields.fakeValue = v89;
                    v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v105, 0LL);
                    EnableEntity = EventServantPointRankMaster__GetEnableEntity(v85, v76, eventUpValItemList, v91, 0LL);
                    v96 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
                    v73 = v88;
                    v97 = (EventMargeItemUpValInfo_o *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, v93, v94, v95);
                    EventMargeItemUpValInfo___ctor_39609732(v97, v76, 0LL);
                    v3 = v101;
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v101,
                                                                 v98);
                    if ( !this )
                      goto LABEL_73;
                    if ( !v97 )
                      goto LABEL_73;
                    EventMargeItemUpValInfo__SetServantPointInfo(
                      v97,
                      (int32_t)this->fields.eventUpValItemList,
                      v96,
                      1,
                      0LL);
                    if ( !v58 )
                      goto LABEL_73;
                    System_Collections_Generic_List_object___Insert(
                      v58,
                      0,
                      (Il2CppObject *)v97,
                      (const MethodInfo_35A2A0C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                  }
                }
              }
              v74 = actMaxRarity + 1;
              actMaxRarity = v74;
              sortIndex = v72->fields.sortIndex;
              if ( v74 >= sortIndex )
                goto LABEL_70;
            }
            v80 = 0LL;
            while ( v80 < (unsigned int)v78 )
            {
              if ( !v58 )
                goto LABEL_73;
              method = (const MethodInfo *)*(&v79->fields.sortValue0 + v80);
              items = v58->fields._items;
              v82 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v58->fields._version;
              if ( !items )
                goto LABEL_73;
              size = v58->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v58,
                  (Il2CppObject *)method,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
              }
              else
              {
                v84 = &items->obj.klass + size;
                v58->fields._size = size + 1;
                v84[4] = (Il2CppClass *)method;
                this = (FollowerSelectItemListViewItem_o *)sub_1BCA784(v84 + 4, method);
              }
              LODWORD(v78) = v79->fields.sortIndex;
              if ( (__int64)++v80 >= (int)v78 )
                goto LABEL_51;
            }
LABEL_74:
            sub_1BCAA44(this, method);
          }
LABEL_70:
          if ( v58 )
          {
            v99 = System_Collections_Generic_List_object___ToArray(
                    v58,
                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
            *p_eventUpValItemList = v99;
            sub_1BCA784(p_eventUpValItemList, v99);
            return;
          }
        }
      }
LABEL_73:
      sub_1BCAA3C(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  FollowerInfo_o *followerInfo; // x21
  int32_t type; // w27
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w2
  int32_t SvtId; // w21
  const MethodInfo *v33; // x2
  __int64 *p_sortValue0; // x26
  int32_t priorityKind; // w23
  System_Collections_Generic_Dictionary_string__int__o *ValuesDictionary; // x22
  const MethodInfo *v37; // x1
  int64_t v38; // x24
  struct System_String_o *v39; // x25
  int32_t Item; // w0
  const MethodInfo *v41; // x1
  int v42; // w8
  signed int sortValue2; // w22
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x2
  int64_t sortValue1B; // x22
  struct System_String_o *sortStr1; // x23
  System_String_o *v48; // x22
  System_String_o *v49; // x23
  __int64 v50; // x1
  int32_t MaxIndividualFilter; // w0
  int v52; // w25
  int32_t v53; // w24
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  int32_t Int_70111952; // w26
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
  int32_t v70; // w3
  __int64 *v72; // x23
  __int64 v73; // x22
  const MethodInfo *v74; // x1
  int sortValue2B_high; // w23
  int64_t v76; // x22
  int32_t v77; // w23
  __int64 v78; // x8
  __int64 v79; // x22
  int v80; // w23
  int64_t v81; // x22
  int32_t v82; // w23
  __int64 v83; // x8
  int v84; // w8
  IconLabelInfo_o *iconLabelInfo1; // x20
  FollowerInfo_o *v86; // x21
  struct QuestRestrictionInfo_o *v87; // x8
  int32_t v88; // w22
  int32_t v89; // w2
  FollowerInfo_o *v90; // x20
  struct QuestRestrictionInfo_o *v91; // x8
  int32_t v92; // w21
  int32_t v93; // w2
  int32_t index; // w8
  FollowerInfo_o *v95; // x22
  struct QuestRestrictionInfo_o *v96; // x8
  int32_t v97; // w23
  int32_t v98; // w21
  int32_t v99; // w2
  int64_t classIndex; // x8
  int64_t deckPriority; // x9
  __int64 v102; // x8
  FollowerInfo_o *v103; // x20
  struct QuestRestrictionInfo_o *v104; // x8
  int32_t v105; // w21
  int32_t v106; // w2
  FollowerInfo_o *v107; // x20
  struct QuestRestrictionInfo_o *v108; // x8
  int32_t v109; // w21
  int32_t v110; // w2
  int64_t v111; // x9
  IconLabelInfo_o *iconLabelInfo2; // x20
  FollowerInfo_o *v113; // x21
  struct QuestRestrictionInfo_o *v114; // x8
  int32_t v115; // w22
  __int64 v116; // x8
  FollowerInfo_o *v117; // x20
  struct QuestRestrictionInfo_o *v118; // x8
  int32_t v119; // w22
  int v120; // w21
  int32_t v121; // w2
  int32_t v122; // w2
  FollowerInfo_o *v123; // x20
  struct QuestRestrictionInfo_o *v124; // x8
  int32_t v125; // w22
  int v126; // w21
  int32_t v127; // w2
  IconLabelInfo_o *v128; // x20
  FollowerInfo_o *v129; // x22
  struct QuestRestrictionInfo_o *v130; // x8
  int32_t v131; // w23
  int32_t v132; // w2
  FollowerInfo_o *v133; // x22
  struct QuestRestrictionInfo_o *v134; // x8
  int32_t v135; // w23
  int32_t v136; // w2
  FollowerInfo_o *v137; // x22
  struct QuestRestrictionInfo_o *v138; // x8
  int32_t v139; // w23
  int32_t v140; // w21
  int32_t v141; // w2
  FollowerInfo_o *v142; // x22
  struct QuestRestrictionInfo_o *v143; // x8
  int32_t v144; // w23
  int32_t v145; // w2
  FollowerInfo_o *v146; // x23
  struct QuestRestrictionInfo_o *v147; // x8
  int32_t v148; // w24
  int32_t v149; // w22
  int32_t v150; // w2
  FollowerInfo_o *v151; // x23
  struct QuestRestrictionInfo_o *v152; // x8
  int32_t v153; // w24
  int32_t v154; // w2
  int32_t v155; // w4
  int32_t v156; // w1
  FollowerInfo_o *v157; // x22
  struct QuestRestrictionInfo_o *v158; // x8
  int32_t v159; // w23
  int32_t v160; // w21
  int32_t v161; // w2
  int64_t servantEntity; // x8
  _BOOL4 isQuestRestriction; // w9
  __int64 v164; // x10
  __int64 v165; // x11
  __int64 v166; // x9
  Il2CppObject *MasterData_object; // [xsp+8h] [xbp-78h]
  EventBonusFilterGroupMemberEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  int v169; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v170; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16

  v4 = this;
  if ( (byte_4B11375 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, sort, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantBonusFilterSelectMenu_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_1409/*"2"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3334/*"BonusFilterEquipId"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3336/*"BonusFilterGroupId"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v23, v24);
    this = (FollowerSelectItemListViewItem_o *)sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v25, v26);
    byte_4B11375 = 1;
  }
  v169 = 0;
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
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, sort);
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
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v44);
      if ( !this )
        goto LABEL_198;
      sortStr1 = this->fields.sortStr1;
      sortValue1B = this->fields.sortValue1B;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
      *(_QWORD *)&v171.fields.currentCryptoKey = sortStr1;
      *(_QWORD *)&v171.fields.fakeValue = sortValue1B;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                   v171,
                                                   0LL);
      if ( (int)this < 1 )
        goto LABEL_53;
      if ( !sort )
        goto LABEL_198;
      if ( ListViewSort__GetFilter(sort, 41, 0LL) )
        goto LABEL_53;
      v48 = (System_String_o *)StringLiteral_3334/*"BonusFilterEquipId"*/;
      v49 = (System_String_o *)StringLiteral_3336/*"BonusFilterGroupId"*/;
      this = (FollowerSelectItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_198;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo, v50);
      MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v169 = 0;
      if ( MaxIndividualFilter < 1 )
      {
LABEL_53:
        if ( FollowerSelectItemListViewItem__ChkWholeFilter(v4, sort, v45) )
          goto LABEL_9;
      }
      else
      {
        v52 = MaxIndividualFilter;
        v53 = type;
        while ( 1 )
        {
          v54 = System_Int32__ToString((int32_t)&v169, 0LL);
          v55 = System_String__Concat_62401220(v48, v54, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v55, 0LL) )
          {
            v56 = System_Int32__ToString((int32_t)&v169, 0LL);
            v57 = System_String__Concat_62401220(v48, v56, 0LL);
            Int_70111952 = UnityEngine_PlayerPrefs__GetInt_70111952(v57, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v59);
            if ( !this )
              goto LABEL_198;
            v61 = this->fields.sortStr1;
            v60 = this->fields.sortValue1B;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
            *(_QWORD *)&v172.fields.currentCryptoKey = v61;
            *(_QWORD *)&v172.fields.fakeValue = v60;
            type = v53;
            if ( Int_70111952 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v172, 0LL) )
              break;
          }
          v62 = System_Int32__ToString((int32_t)&v169, 0LL);
          v63 = System_String__Concat_62401220(v49, v62, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v63, 0LL) )
          {
            v64 = System_Int32__ToString((int32_t)&v169, 0LL);
            v65 = System_String__Concat_62401220(v49, v64, 0LL);
            v66 = UnityEngine_PlayerPrefs__GetInt_70111952(v65, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v67);
            if ( !this )
              goto LABEL_198;
            v69 = this->fields.sortStr1;
            v68 = this->fields.sortValue1B;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
            *(_QWORD *)&v173.fields.currentCryptoKey = v69;
            *(_QWORD *)&v173.fields.fakeValue = v68;
            v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v173, 0LL);
            this = (FollowerSelectItemListViewItem_o *)MasterData_object;
            if ( !MasterData_object )
              goto LABEL_198;
            type = v53;
            if ( EventBonusFilterGroupMemberMaster__TryGetEntity(
                   (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                   &entity,
                   v66,
                   v70,
                   0LL) )
            {
              return 0;
            }
          }
          if ( ++v169 >= v52 )
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
  ValuesDictionary = FollowerSelectItemListViewItem__GetValuesDictionary(v4, priorityKind, v33);
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v37);
  if ( this )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                 v4,
                                                 (const MethodInfo *)sort);
    if ( !this )
      goto LABEL_198;
    v39 = this->fields.sortStr1;
    v38 = this->fields.sortValue1B;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    *(_QWORD *)&v170.fields.currentCryptoKey = v39;
    *(_QWORD *)&v170.fields.fakeValue = v38;
    this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                 v170,
                                                 0LL);
    if ( ValuesDictionary )
    {
      if ( (int)this >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v72 = &StringLiteral_1409/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_79;
            v72 = &StringLiteral_1209/*"0"*/;
          }
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                                                       (Il2CppObject *)*v72,
                                                       (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v73 = 100000LL
                * System_Collections_Generic_Dictionary_object__int___get_Item(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)*v72,
                    (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v4->fields.sortValue0 = v73;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v74);
            if ( !this )
              goto LABEL_198;
            sortValue2B_high = HIDWORD(this->fields.sortValue2B);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                         v4,
                                                         (const MethodInfo *)sort);
            if ( !this )
              goto LABEL_198;
            v76 = v73 + 10LL * (*(_DWORD *)&this->fields.isTermination + sortValue2B_high);
            v4->fields.sortValue0 = v76;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                         v4,
                                                         (const MethodInfo *)sort);
            if ( !this )
              goto LABEL_198;
            v77 = this->fields.sortValue2;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, sort);
            v78 = v76 | (v77 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
            goto LABEL_78;
          }
        }
        else
        {
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                                                       (Il2CppObject *)StringLiteral_1209/*"0"*/,
                                                       (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                                                         (Il2CppObject *)StringLiteral_1262/*"1"*/,
                                                         (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1209/*"0"*/,
                     (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                         (Il2CppObject *)StringLiteral_1262/*"1"*/,
                         (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v42 = 100000;
              }
              else
              {
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                       (Il2CppObject *)StringLiteral_1209/*"0"*/,
                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
                {
                  v79 = *p_sortValue0;
LABEL_70:
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v41);
                  if ( !this )
                    goto LABEL_198;
                  v80 = HIDWORD(this->fields.sortValue2B);
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                               v4,
                                                               (const MethodInfo *)sort);
                  if ( !this )
                    goto LABEL_198;
                  v81 = v79 + 10LL * (*(_DWORD *)&this->fields.isTermination + v80);
                  v4->fields.sortValue0 = v81;
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                               v4,
                                                               (const MethodInfo *)sort);
                  if ( !this )
                    goto LABEL_198;
                  v82 = this->fields.sortValue2;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, sort);
                  if ( v82 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                    v78 = v81;
                  else
                    v78 = v81 + 1;
LABEL_78:
                  *p_sortValue0 = v78;
                  goto LABEL_79;
                }
                Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                         (Il2CppObject *)StringLiteral_1262/*"1"*/,
                         (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v42 = 100000000;
              }
              v79 = Item * (__int64)v42;
              *p_sortValue0 = v79;
              goto LABEL_70;
            }
          }
        }
      }
    }
  }
LABEL_79:
  v83 = 56LL;
  if ( v4->fields._IsRecommendFollower_k__BackingField )
    v83 = 152LL;
  v84 = *(_DWORD *)((char *)&sort->klass + v83);
  if ( v84 == 11 )
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
      v86 = v4->fields.followerInfo;
      v87 = v4->fields.questRestrictionInfo;
      v88 = v4->fields.followerIndex;
      v4->fields.sortValue2 = v4->fields.deckPriority;
      v4->fields.sortValue2B = 1LL;
      if ( v87 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v87->fields.questId, 0LL);
        v89 = (int)this;
        if ( !v86 )
          goto LABEL_198;
      }
      else
      {
        v89 = 0;
        if ( !v86 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v86, v88, v89, 0LL);
      v95 = v4->fields.followerInfo;
      v96 = v4->fields.questRestrictionInfo;
      v97 = v4->fields.followerIndex;
      v98 = (int)this;
      if ( v96 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v96->fields.questId, 0LL);
        v99 = (int)this;
        if ( !v95 )
          goto LABEL_198;
      }
      else
      {
        v99 = 0;
        if ( !v95 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v95, v97, v99, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_198;
      IconLabelInfo__Set_38850420(iconLabelInfo1, 2, v98, (int32_t)this, 0, 0, 0, 0, 0LL);
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
        v102 = 5LL;
        goto LABEL_114;
      case 2:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v102 = 4LL;
        goto LABEL_114;
      case 3:
      case 4:
        goto LABEL_184;
      case 5:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v102 = 6LL;
LABEL_114:
        v4->fields.sortValue0B = v102;
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
    if ( v84 > 5 )
    {
      if ( v84 == 6 )
      {
        v107 = v4->fields.followerInfo;
        v108 = v4->fields.questRestrictionInfo;
        v109 = v4->fields.followerIndex;
        if ( v108 )
        {
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v108->fields.questId, 0LL);
          v110 = (int)this;
        }
        else
        {
          v110 = 0;
        }
        if ( v107 )
        {
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v107, v109, v110, 0LL);
          v123 = v4->fields.followerInfo;
          v124 = v4->fields.questRestrictionInfo;
          v125 = v4->fields.followerIndex;
          v126 = (int)this;
          if ( v124 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v124->fields.questId, 0LL);
            v127 = (int)this;
          }
          else
          {
            v127 = 0;
          }
          if ( v123 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v123, v125, v127, 0LL);
            v128 = v4->fields.iconLabelInfo1;
            v133 = v4->fields.followerInfo;
            v134 = v4->fields.questRestrictionInfo;
            v135 = v4->fields.followerIndex;
            v4->fields.sortValue1 = (int)this + v126;
            if ( v134 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v134->fields.questId, 0LL);
              v136 = (int)this;
            }
            else
            {
              v136 = 0;
            }
            if ( v133 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v133, v135, v136, 0LL);
              v142 = v4->fields.followerInfo;
              v143 = v4->fields.questRestrictionInfo;
              v144 = v4->fields.followerIndex;
              v140 = (int)this;
              if ( v143 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                             v143->fields.questId,
                                                             0LL);
                v145 = (int)this;
              }
              else
              {
                v145 = 0;
              }
              if ( v142 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustAtk(v142, v144, v145, 0LL);
                v151 = v4->fields.followerInfo;
                v152 = v4->fields.questRestrictionInfo;
                v153 = v4->fields.followerIndex;
                v149 = (int)this;
                if ( v152 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                               v152->fields.questId,
                                                               0LL);
                  v154 = (int)this;
                }
                else
                {
                  v154 = 0;
                }
                if ( v151 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v151, v153, v154, 0LL);
                  if ( v128 )
                  {
                    v155 = (int)this;
                    v156 = 5;
LABEL_173:
                    IconLabelInfo__Set_38850420(v128, v156, v140, v149, v155, 0, 0, 0, 0LL);
                    iconLabelInfo2 = v4->fields.iconLabelInfo2;
                    v113 = v4->fields.followerInfo;
                    v114 = v4->fields.questRestrictionInfo;
                    v115 = v4->fields.followerIndex;
                    if ( !v114 )
                    {
LABEL_174:
                      v122 = 0;
                      if ( !v113 )
                        goto LABEL_198;
                      goto LABEL_175;
                    }
LABEL_135:
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                 v114->fields.questId,
                                                                 0LL);
                    v122 = (int)this;
                    if ( !v113 )
                      goto LABEL_198;
LABEL_175:
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v113, v115, v122, 0LL);
                    v157 = v4->fields.followerInfo;
                    v158 = v4->fields.questRestrictionInfo;
                    v159 = v4->fields.followerIndex;
                    v160 = (int)this;
                    if ( v158 )
                    {
                      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                   v158->fields.questId,
                                                                   0LL);
                      v161 = (int)this;
                      if ( !v157 )
                        goto LABEL_198;
                    }
                    else
                    {
                      v161 = 0;
                      if ( !v157 )
                        goto LABEL_198;
                    }
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v157, v159, v161, 0LL);
                    if ( !iconLabelInfo2 )
                      goto LABEL_198;
                    IconLabelInfo__Set_38850420(iconLabelInfo2, 2, v160, (int32_t)this, 0, 0, 0, 0, 0LL);
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
                        v164 = 3LL;
                        v165 = 6LL;
                        goto LABEL_190;
                      case 2:
                        isQuestRestriction = v4->fields.isQuestRestriction;
                        v164 = 2LL;
                        v165 = 5LL;
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
                        v164 = 4LL;
                        v165 = 7LL;
LABEL_190:
                        servantEntity = (int)servantEntity;
                        if ( isQuestRestriction )
                          v166 = v164;
                        else
                          v166 = v165;
                        v4->fields.sortValue0B = v166;
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
        sub_1BCAA3C(this, sort);
      }
      if ( v84 != 29 )
        goto LABEL_120;
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      if ( !this )
        goto LABEL_198;
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetUseStatus((FollowerInfo_o *)this, 0LL);
    }
    else
    {
      if ( v84 != 3 )
      {
        if ( v84 == 5 )
        {
          v90 = v4->fields.followerInfo;
          v91 = v4->fields.questRestrictionInfo;
          v92 = v4->fields.followerIndex;
          if ( v91 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v91->fields.questId, 0LL);
            v93 = (int)this;
          }
          else
          {
            v93 = 0;
          }
          if ( v90 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v90, v92, v93, 0LL);
            v117 = v4->fields.followerInfo;
            v118 = v4->fields.questRestrictionInfo;
            v119 = v4->fields.followerIndex;
            v120 = (int)this;
            if ( v118 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v118->fields.questId, 0LL);
              v121 = (int)this;
            }
            else
            {
              v121 = 0;
            }
            if ( v117 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v117, v119, v121, 0LL);
              v128 = v4->fields.iconLabelInfo1;
              v129 = v4->fields.followerInfo;
              v130 = v4->fields.questRestrictionInfo;
              v131 = v4->fields.followerIndex;
              v4->fields.sortValue1 = (int)this + v120;
              if ( v130 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                             v130->fields.questId,
                                                             0LL);
                v132 = (int)this;
              }
              else
              {
                v132 = 0;
              }
              if ( v129 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v129, v131, v132, 0LL);
                v137 = v4->fields.followerInfo;
                v138 = v4->fields.questRestrictionInfo;
                v139 = v4->fields.followerIndex;
                v140 = (int)this;
                if ( v138 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                               v138->fields.questId,
                                                               0LL);
                  v141 = (int)this;
                }
                else
                {
                  v141 = 0;
                }
                if ( v137 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustHp(v137, v139, v141, 0LL);
                  v146 = v4->fields.followerInfo;
                  v147 = v4->fields.questRestrictionInfo;
                  v148 = v4->fields.followerIndex;
                  v149 = (int)this;
                  if ( v147 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                 v147->fields.questId,
                                                                 0LL);
                    v150 = (int)this;
                  }
                  else
                  {
                    v150 = 0;
                  }
                  if ( v146 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v146, v148, v150, 0LL);
                    if ( v128 )
                    {
                      v155 = (int)this;
                      v156 = 3;
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
        v111 = v4->fields.sortValue2;
        iconLabelInfo2 = v4->fields.iconLabelInfo1;
        v113 = v4->fields.followerInfo;
        v114 = v4->fields.questRestrictionInfo;
        v115 = v4->fields.followerIndex;
        goto LABEL_134;
      }
      v103 = v4->fields.followerInfo;
      v104 = v4->fields.questRestrictionInfo;
      v105 = v4->fields.followerIndex;
      if ( v104 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v104->fields.questId, 0LL);
        v106 = (int)this;
      }
      else
      {
        v106 = 0;
      }
      if ( !v103 )
        goto LABEL_198;
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v103, v105, v106, 0LL);
    }
    iconLabelInfo2 = v4->fields.iconLabelInfo1;
    v113 = v4->fields.followerInfo;
    v114 = v4->fields.questRestrictionInfo;
    v115 = v4->fields.followerIndex;
    v111 = (int)this;
LABEL_134:
    v4->fields.sortValue1 = v111;
    if ( !v114 )
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
      v116 = 2LL;
      goto LABEL_124;
    case 2:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v116 = 1LL;
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
      v116 = 3LL;
LABEL_124:
      v4->fields.sortValue0B = v116;
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
            sub_1BCAA3C(QuestRestriction, v8);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o **p_userName; // x8

  if ( (byte_4B11376 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, method, v2);
    byte_4B11376 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    p_userName = &followerInfo->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19249/*"error"*/;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *overwriteServantName; // x20
  const MethodInfo *v12; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v14; // x1
  int32_t DispLimitCount; // w20
  const MethodInfo *v16; // x1
  int32_t limitCount; // w21
  __int64 v18; // x1
  int32_t LimitCountByDispLimit; // w20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v21; // x1
  __int64 v22; // x19
  __int64 v23; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B11377 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    byte_4B11377 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && this->fields.isNpc )
    return followerInfo->fields.userName;
  if ( !this->fields.servantEntity )
    return 0LL;
  if ( FollowerSelectItemListViewItem__get_ServantLeader(this, method) )
  {
    ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v12);
    if ( ServantLeader )
    {
      overwriteServantName = ServantLeader->fields.overwriteServantName;
      if ( !System_String__IsNullOrEmpty(overwriteServantName, 0LL) )
        return overwriteServantName;
      ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v14);
      if ( ServantLeader )
      {
        DispLimitCount = ServantLeaderInfo__getDispLimitCount(ServantLeader, 0LL);
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v16);
        if ( ServantLeader )
        {
          limitCount = ServantLeader->fields.limitCount;
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v12);
          LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, limitCount, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v21);
          if ( ServantLeader )
          {
            v23 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
            v22 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
            *(_QWORD *)&v25.fields.currentCryptoKey = v23;
            *(_QWORD *)&v25.fields.fakeValue = v22;
            ServantLeader = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                     v25,
                                                     0LL);
            if ( Master_object )
              return ServantLimitImageMaster__GetLimitCountSealedServantName(
                       (ServantLimitImageMaster_o *)Master_object,
                       (int32_t)ServantLeader,
                       LimitCountByDispLimit,
                       0LL);
          }
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(ServantLeader, v12);
  }
  ServantLeader = (ServantLeaderInfo_o *)this->fields.servantEntity;
  if ( !ServantLeader )
    goto LABEL_25;
  return ServantEntity__getName((ServantEntity_o *)ServantLeader, -1, -1, 0LL);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B1137D & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewItem___c_TypeInfo, v1, v2);
    byte_4B1137D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(FollowerSelectItemListViewItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  FollowerSelectItemListViewItem___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewItem___c_o *)v4;
  sub_1BCA784(FollowerSelectItemListViewItem___c_TypeInfo->static_fields, v4);
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
    sub_1BCAA3C(this, 0LL);
  return drop->fields.eventId;
}