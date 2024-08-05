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
  __int64 v25; // x1
  IconLabelInfo_o *v26; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  IconLabelInfo_o *v29; // x19
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_Dictionary_int__int__o *v42; // x22
  const MethodInfo *v43; // x2

  if ( (byte_4A02886 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int___ctor___75618408, *(_QWORD *)&index);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v24);
    sub_1B64870(&IconLabelInfo_TypeInfo, v25);
    byte_4A02886 = 1;
  }
  v26 = (IconLabelInfo_o *)sub_1B64ABC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v26, v27, v28);
  v29 = (IconLabelInfo_o *)sub_1B64ABC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v29, 0LL);
  this->fields.iconLabelInfo2 = v29;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v29, v30, v31);
  ListViewItem___ctor_40375592((ListViewItem_o *)this, index, 0LL);
  this->fields.friendPointUpVal = friendPointUpVal;
  this->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v32,
    v33);
  this->fields.isBonusFilterEnable = isBonusFilterEnable;
  this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
  this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
  this->fields.isRecommended = isRecommended;
  this->fields.setupInfo = setupInfo;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v34, v35);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v36,
    v37);
  this->fields.followerInfo = followerInfo;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v38, v39);
  this->fields._isRecommendedUser_k__BackingField = isRecommendedUser;
  this->fields.classIndex = index2;
  this->fields.supportDeckId = supportDeckId;
  this->fields.deckPriority = deckPriority;
  if ( classBoardMaxNumDictionary )
  {
    v42 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_51497132(
      v42,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_311C8AC *)Method_System_Collections_Generic_Dictionary_int__int___ctor___75618408);
  }
  else
  {
    v42 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v42;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.classBoardMaxNumDictionary, (int32_t)v42, v40, v41);
  this->fields._IsReleasedClassBoard_k__BackingField = isReleasedClassBoard;
  this->fields._IsRecommendFollower_k__BackingField = isRecommendFollower;
  FollowerSelectItemListViewItem__AnalyzeEntity(this, followerClassId, v43);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItem__AnalyzeEntity(
        FollowerSelectItemListViewItem_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  int32_t v3; // w3
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *v23; // x8
  int64_t Index; // x0
  __int64 v25; // x1
  struct QuestRestrictionInfo_o *v26; // x8
  FollowerInfo_o *v27; // x23
  int32_t v28; // w20
  int32_t v29; // w2
  struct FollowerInfo_o *v30; // x8
  int32_t v31; // w20
  const MethodInfo *v32; // x1
  struct EventCampaignEntity_o *EnableFriendPointCampaign; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  FollowerInfo_o *v39; // x22
  struct QuestRestrictionInfo_o *v40; // x21
  int32_t followerIndex; // w23
  int32_t v42; // w3
  struct QuestRestrictionInfo_o *v43; // x8
  FollowerInfo_o *v44; // x22
  struct QuestRestrictionInfo_o *v45; // x21
  int32_t v46; // w23
  int32_t v47; // w3
  FollowerInfo_o *v48; // x22
  struct QuestRestrictionInfo_o *v49; // x21
  int32_t v50; // w23
  int32_t v51; // w3
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x1
  struct QuestRestrictionInfo_o *v54; // x8
  Il2CppObject *Master_object; // x21
  struct QuestRestrictionInfo_o *v56; // x8
  int32_t v57; // w20
  struct FollowerInfo_o *v58; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v61; // w21
  unsigned int v62; // w25
  ClassBoardInfo_o *v63; // x22
  int32_t v64; // w8
  struct FollowerInfo_o *v65; // x8
  TblFriendMaster_o *v66; // x20
  int32_t type; // w9
  int32_t v68; // w1
  struct System_Int32_array *squareIds; // x8
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A02887 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&followerClassId);
    sub_1B64870(&Method_DataManager_GetMasterData_TblFriendMaster___, v6);
    sub_1B64870(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_1B64870(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B64870(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v9);
    sub_1B64870(&DataManager_TypeInfo, v10);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v12);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v13);
    sub_1B64870(&NetworkManager_TypeInfo, v14);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A02887 = 1;
  }
  entity = 0LL;
  this->fields.isNpc = 0;
  this->fields.followerClassId = followerClassId;
  this->fields.servantEntity = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, (int32_t)method, v3);
  *(_WORD *)&this->fields.isUniqueSvtRestriction = 0;
  *(_WORD *)&this->fields.isServantEventUpVal = 0;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValItemList = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValItemList, 0, v16, v17);
  this->fields.friendPointCampaignEntity = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntity, 0, v18, v19);
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
    v26 = this->fields.questRestrictionInfo;
    v27 = this->fields.followerInfo;
    v28 = Index;
    this->fields.followerIndex = Index;
    if ( v26 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v26->fields.questId, 0LL);
      v29 = Index;
      if ( !v27 )
        goto LABEL_84;
    }
    else
    {
      v29 = 0;
      if ( !v27 )
        goto LABEL_84;
    }
    Index = FollowerInfo__getSvtId(v27, v28, v29, 0LL);
    if ( (int)Index < 1 )
    {
      v43 = this->fields.questRestrictionInfo;
      if ( v43 )
        LOBYTE(v43) = v43->fields.isRestriction;
      this->fields.isQuestRestriction = (char)v43;
    }
    else
    {
      v30 = this->fields.followerInfo;
      if ( !v30 )
        goto LABEL_84;
      v31 = Index;
      this->fields.isNpc = Follower__IsNpc(v30->fields.type, 0LL);
      EnableFriendPointCampaign = FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(this, v32);
      this->fields.friendPointCampaignEntity = EnableFriendPointCampaign;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntity,
        (int32_t)EnableFriendPointCampaign,
        v34,
        v35);
      Index = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Index )
        goto LABEL_84;
      Index = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)Index,
                         (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Index )
        goto LABEL_84;
      v36 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Index,
              v31,
              (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.servantEntity = (struct ServantEntity_o *)v36;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v36, v37, v38);
      v39 = this->fields.followerInfo;
      v40 = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( v40 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v40->fields.questId, 0LL);
        v42 = Index;
        if ( !v39 )
          goto LABEL_84;
      }
      else
      {
        v42 = 0;
        if ( !v39 )
          goto LABEL_84;
      }
      Index = FollowerInfo__getQuestRestriction(v39, v40, followerIndex, v42, 0LL);
      v44 = this->fields.followerInfo;
      v45 = this->fields.questRestrictionInfo;
      v46 = this->fields.followerIndex;
      this->fields.isQuestRestriction = Index & 1;
      if ( v45 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v45->fields.questId, 0LL);
        v47 = Index;
        if ( !v44 )
          goto LABEL_84;
      }
      else
      {
        v47 = 0;
        if ( !v44 )
          goto LABEL_84;
      }
      Index = FollowerInfo__getUniqueSvtRestriction(v44, v45, v46, v47, 0LL);
      v48 = this->fields.followerInfo;
      v49 = this->fields.questRestrictionInfo;
      v50 = this->fields.followerIndex;
      this->fields.isUniqueSvtRestriction = Index & 1;
      if ( v49 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v49->fields.questId, 0LL);
        v51 = Index;
        if ( !v48 )
          goto LABEL_84;
      }
      else
      {
        v51 = 0;
        if ( !v48 )
          goto LABEL_84;
      }
      this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                        v48,
                                                        v49,
                                                        v50,
                                                        v51,
                                                        0LL);
      this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v52);
      FollowerSelectItemListViewItem__SetEventUpInfo(this, v53);
      v54 = this->fields.questRestrictionInfo;
      if ( v54 && v54->fields.isDataLostBattle )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Index = NetworkManager__get_UserId(0LL);
        v56 = this->fields.questRestrictionInfo;
        if ( !v56 || !Master_object )
          goto LABEL_84;
        if ( UserEventDataLostMaster__TryGetEntity(
               (UserEventDataLostMaster_o *)Master_object,
               &entity,
               Index,
               v56->fields.dataLostBattleId,
               0LL) )
        {
          Index = (int64_t)entity;
          if ( !entity )
            goto LABEL_84;
          Index = UserEventDataLostEntity__IsRestart(entity, v31, 0LL);
          if ( !entity )
            goto LABEL_84;
          if ( (Index & 1) != 0 )
          {
            this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(entity, v31, 0LL);
          }
          else if ( UserEventDataLostEntity__IsDataLost(entity, v31, 0LL) )
          {
            this->fields._IsDataLost_k__BackingField = 1;
          }
        }
      }
      if ( this->fields.classBoardMaxNumDictionary )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Index = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !Index )
          goto LABEL_84;
        Index = (int64_t)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Index,
                           v31,
                           (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Index )
          goto LABEL_84;
        v57 = *(_DWORD *)(Index + 80);
        Index = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        if ( !Index )
          goto LABEL_84;
        Index = ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Index, v57, 0LL);
        v58 = this->fields.followerInfo;
        if ( !v58 )
          goto LABEL_84;
        userClassBoardInfo = v58->fields.userClassBoardInfo;
        if ( !userClassBoardInfo )
          goto LABEL_84;
        max_length = userClassBoardInfo->max_length;
        if ( max_length < 1 )
        {
LABEL_65:
          v64 = 0;
          LODWORD(Index) = -1;
        }
        else
        {
          v61 = Index;
          v62 = 0;
          while ( 1 )
          {
            if ( v62 >= max_length )
              sub_1B64AD4(Index, v25);
            v63 = userClassBoardInfo->m_Items[v62];
            if ( !v63 )
              goto LABEL_84;
            if ( v63->fields.classBoardBaseId == v61 )
            {
              Index = (int64_t)this->fields.classBoardMaxNumDictionary;
              if ( !Index )
                goto LABEL_84;
              Index = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                        (System_Collections_Generic_Dictionary_int__int__o *)Index,
                        v61,
                        (const MethodInfo_311D37C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
              if ( (Index & 1) != 0 )
              {
                Index = ClassBoardInfo__IsReleasedClassId(v63, v57, 0LL);
                if ( (Index & 1) != 0 )
                  break;
              }
            }
            max_length = userClassBoardInfo->max_length;
            if ( (int)++v62 >= max_length )
              goto LABEL_65;
          }
          Index = (int64_t)this->fields.classBoardMaxNumDictionary;
          if ( !Index )
            goto LABEL_84;
          Index = System_Collections_Generic_Dictionary_int__int___get_Item(
                    (System_Collections_Generic_Dictionary_int__int__o *)Index,
                    v61,
                    (const MethodInfo_311D0F4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          squareIds = v63->fields.squareIds;
          if ( !squareIds )
            goto LABEL_84;
          v64 = squareIds->max_length;
        }
        this->fields._OpenClassBoardNum_k__BackingField = v64;
        this->fields._IsMaxOpenClassBoard_k__BackingField = (int)Index > 0 && v64 >= (int)Index;
      }
    }
    Index = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Index )
    {
      Index = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)Index,
                         (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      v65 = this->fields.followerInfo;
      if ( v65 )
      {
        v66 = (TblFriendMaster_o *)Index;
        if ( v65->fields.type == 5
          || Index
          && (Index = TblFriendMaster__isMessageDisp((TblFriendMaster_o *)Index, 3, v65->fields.userId, 0LL),
              v65 = this->fields.followerInfo,
              this->fields.isMessageDisp = Index & 1,
              v65) )
        {
          type = v65->fields.type;
          if ( (type | 4) == 5 )
          {
            if ( !v66 )
              goto LABEL_84;
            if ( type == 5 )
              v68 = 9;
            else
              v68 = 3;
            this->fields.isLockUser = TblFriendMaster__IsLockUser(v66, v68, v65->fields.userId, 0LL);
          }
          Index = (int64_t)this->fields.iconLabelInfo1;
          if ( Index )
          {
            IconLabelInfo__Clear((IconLabelInfo_o *)Index, 0LL);
            Index = (int64_t)this->fields.iconLabelInfo2;
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
    sub_1B64ACC(Index, v25);
  }
  v23 = this->fields.questRestrictionInfo;
  this->fields.followerIndex = 0;
  if ( v23 )
    LOBYTE(v23) = v23->fields.isRestriction;
  this->fields.isQuestRestriction = (char)v23;
}


bool __fastcall FollowerSelectItemListViewItem__CheckSlotRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v2; // x19
  __int64 v3; // x1
  FollowerInfo_o *followerInfo; // x21
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t followerIndex; // w22
  int32_t v7; // w3
  bool v8; // w8
  int sortValue1; // w21
  int32_t sortValue1_high; // w20
  FollowerInfo_o *v12; // x21
  struct QuestRestrictionInfo_o *v13; // x8
  int32_t v14; // w22
  int32_t v15; // w2
  ServantLeaderInfo_o *v16; // x21
  QuestRestrictionInfo_o *v17; // x19
  struct System_String_o *sortStr1; // x22
  int64_t v19; // x23
  int32_t v20; // w0
  int32_t limitCount; // w22
  int32_t v22; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  v2 = this;
  if ( (byte_4A02888 & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (FollowerSelectItemListViewItem_o *)sub_1B64870(
                                                 &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                                 v3);
    byte_4A02888 = 1;
  }
  followerInfo = v2->fields.followerInfo;
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  followerIndex = v2->fields.followerIndex;
  if ( questRestrictionInfo )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                 questRestrictionInfo->fields.questId,
                                                 0LL);
    v7 = (int)this;
    if ( !followerInfo )
      goto LABEL_28;
  }
  else
  {
    v7 = 0;
    if ( !followerInfo )
      goto LABEL_28;
  }
  if ( FollowerInfo__IsSlotRestriction(followerInfo, questRestrictionInfo, followerIndex, v7, 0LL) )
    return 1;
  this = (FollowerSelectItemListViewItem_o *)v2->fields.questRestrictionInfo;
  if ( !this )
    goto LABEL_28;
  if ( QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)this, 0LL) )
    return 0;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_28;
  sortValue1 = this->fields.sortValue1;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_28;
  v8 = 0;
  if ( sortValue1 < 1 || v2->fields.isNpc )
    return v8;
  if ( !v2->fields.questRestrictionInfo )
    goto LABEL_28;
  sortValue1_high = HIDWORD(this->fields.sortValue1);
  this = (FollowerSelectItemListViewItem_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_40123220(
                                               v2->fields.questRestrictionInfo,
                                               sortValue1_high,
                                               0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v12 = v2->fields.followerInfo;
  v13 = v2->fields.questRestrictionInfo;
  v14 = v2->fields.followerIndex;
  if ( v13 )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v13->fields.questId, 0LL);
    v15 = (int)this;
  }
  else
  {
    v15 = 0;
  }
  if ( !v12 )
    goto LABEL_28;
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getServantLeaderInfo(v12, v14, v15, 0LL);
  if ( !this )
    goto LABEL_28;
  v16 = (ServantLeaderInfo_o *)this;
  v17 = v2->fields.questRestrictionInfo;
  v19 = this->fields.sortValue1;
  sortStr1 = this->fields.sortStr1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v19;
  *(_QWORD *)&v23.fields.fakeValue = sortStr1;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v23, 0LL);
  limitCount = v16->fields.limitCount;
  v22 = v20;
  this = (FollowerSelectItemListViewItem_o *)ServantLeaderInfo__getDispLimitCount(v16, 0LL);
  if ( !v17 )
LABEL_28:
    sub_1B64ACC(this, method);
  return QuestRestrictionInfo__IsRestrictionServantIndividuality(
           v17,
           v22,
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
    sub_1B64ACC(this, 0LL);
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w3
  BalanceConfig_c *v12; // x0
  SkillInfo_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A02891 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B64870(&SkillInfo___TypeInfo, v7);
    byte_4A02891 = 1;
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
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    v13 = (SkillInfo_array *)sub_1B64918(
                               SkillInfo___TypeInfo,
                               (unsigned int)v12->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v13;
    sub_1B64814((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v13, v14, v15);
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
    sub_1B64ACC(SvtId, v4);
  max_length = friendPointCampaignEntityList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v7 == max_length )
        sub_1B64AD4(SvtId, v4);
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

  if ( (byte_4A02890 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, method);
    sub_1B64870(&LocalizationManager_TypeInfo, v3);
    sub_1B64870(&StringLiteral_1/*""*/, v4);
    sub_1B64870(&StringLiteral_6387/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, v5);
    byte_4A02890 = 1;
  }
  if ( !this->fields.friendPointCampaignEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_6387/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, 0LL);
  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( !friendPointCampaignEntity )
    sub_1B64ACC(v6, v7);
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
    sub_1B64ACC(FriendPointUpVal, v9);
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
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A0288F & 1) == 0 )
  {
    sub_1B64870(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4A0288F = 1;
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
    v9 = (TreasureDvcInfo_o *)sub_1B64ABC(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_1B64814((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v9, v10, v11);
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w3
  BalanceConfig_c *v10; // x0
  SkillInfo_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A0288E & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B64870(&SkillInfo___TypeInfo, v5);
    byte_4A0288E = 1;
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
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    v11 = (SkillInfo_array *)sub_1B64918(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtSkillListMax);
    *skillInfoList = v11;
    sub_1B64814((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v11, v12, v13);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *values; // x19
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *keys; // x20
  Il2CppObject *Master_object; // x19
  const MethodInfo *v19; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v20; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v21; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x21
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v27; // x22
  unsigned __int64 v28; // x24
  int v29; // w26
  int max_length; // w8
  int32_t v31; // w2
  int v32; // w9
  ServantSkillEntity_o *v33; // x10
  SkillLvEntity_o *v34; // x8
  unsigned __int64 v35; // x29
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v37; // x9
  int monitor; // w8
  unsigned __int64 v39; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_object__int__o *v41; // x23
  Il2CppObject *v42; // [xsp+0h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4A0288A & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&kind);
    sub_1B64870(&Method_DataManager_GetMaster_ServantSkillMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_1B64870(&DataManager_TypeInfo, v7);
    sub_1B64870(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v9);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64870(&StringLiteral_1476/*"3"*/, v12);
    byte_4A0288A = 1;
  }
  v42 = 0LL;
  entity = 0LL;
  result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                     this,
                                                                     *(const MethodInfo **)&kind);
  if ( result )
  {
    result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                       this,
                                                                       v14);
    if ( !result )
      goto LABEL_74;
    keys = result->fields._keys;
    values = result->fields._values;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v44.fields.currentCryptoKey = keys;
    *(_QWORD *)&v44.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v44, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v19);
      if ( !result )
        goto LABEL_74;
      v21 = result->fields._keys;
      v20 = result->fields._values;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v45.fields.currentCryptoKey = v21;
      *(_QWORD *)&v45.fields.fakeValue = v20;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                         v45,
                                                                         0LL);
      if ( !Master_object )
        goto LABEL_74;
      ServantSkillList = ServantSkillMaster__getServantSkillList(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)result,
                           0LL);
      v23 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v24 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v25);
      if ( !result )
        goto LABEL_74;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_74;
      entries = result->fields._entries;
      v27 = result;
      if ( (int)entries >= 1 )
      {
        v28 = 0LL;
        v29 = kind - 1;
        while ( 1 )
        {
          if ( v28 >= (unsigned int)entries )
            goto LABEL_75;
          if ( !ServantSkillList )
            goto LABEL_74;
          max_length = ServantSkillList->max_length;
          v31 = *(&v27->fields._count + v28);
          if ( max_length >= 1 )
          {
            v32 = 0;
            while ( max_length != v32 )
            {
              v33 = ServantSkillList->m_Items[v32];
              if ( !v33 )
                goto LABEL_74;
              if ( v33->fields.skillId == v31 && v33->fields.eventId > 0 )
                goto LABEL_71;
              if ( max_length == ++v32 )
                goto LABEL_27;
            }
LABEL_75:
            sub_1B64AD4(result, v15);
          }
LABEL_27:
          if ( !v23 )
            goto LABEL_74;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             (SkillLvMaster_o *)v23,
                                                                             &entity,
                                                                             v31,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_71:
          LODWORD(entries) = v27->fields._entries;
          if ( (__int64)++v28 >= (int)entries )
            return 0LL;
        }
        v34 = entity;
        if ( entity )
        {
          v35 = 0LL;
          while ( 1 )
          {
            funcId = v34->fields.funcId;
            if ( !funcId )
              break;
            v37 = funcId->max_length;
            if ( (__int64)v35 >= (int)v37 )
              goto LABEL_71;
            if ( v35 >= v37 )
              goto LABEL_75;
            if ( v24 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                                                                                 &v42,
                                                                                 funcId->m_Items[v35 + 1],
                                                                                 (const MethodInfo_30D61D4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v29 )
                {
                  case 0:
                    if ( !v42 )
                      goto LABEL_74;
                    monitor = (int)v42[1].monitor;
                    if ( monitor != 104 && monitor != 123 )
                      break;
                    goto LABEL_52;
                  case 1:
                    if ( !v42 )
                      goto LABEL_74;
                    if ( LODWORD(v42[1].monitor) != 101 )
                      break;
                    goto LABEL_52;
                  case 2:
                    if ( !v42 )
                      goto LABEL_74;
                    if ( LODWORD(v42[1].monitor) != 112 )
                      break;
                    goto LABEL_52;
                  case 3:
                    if ( !v42 )
                      goto LABEL_74;
                    if ( LODWORD(v42[1].monitor) != 111 )
                      break;
                    goto LABEL_52;
                  case 4:
                    if ( !v42 )
                      goto LABEL_74;
                    if ( (LODWORD(v42[1].monitor) | 8) == 110 )
                      goto LABEL_52;
                    break;
                  case 5:
                    if ( !v42 )
                      goto LABEL_74;
                    if ( LODWORD(v42[1].monitor) != 106 )
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
                    if ( (__int64)v35 > (int)entries_low )
                      break;
                    if ( v35 >= entries_low )
                      goto LABEL_75;
                    v41 = (System_Collections_Generic_Dictionary_object__int__o *)*((_QWORD *)&result->fields._count
                                                                                  + v35);
                    if ( !v41 )
                      break;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           v41,
                           (Il2CppObject *)StringLiteral_1476/*"3"*/,
                           (const MethodInfo_3172B80 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v41,
                                                                                         (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                                                         (const MethodInfo_317290C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                    v39 = LODWORD(result->fields._entries);
                    if ( (__int64)v35 >= (int)v39 )
                      break;
                    if ( v35 >= v39 )
                      goto LABEL_75;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields._count
                                                                                     + v35);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_52;
                }
              }
              v34 = entity;
              ++v35;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_74:
        sub_1B64ACC(result, v15);
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
        sub_1B64ACC(this, *(_QWORD *)&friendPointUpVal);
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
  int32_t v2; // w2
  int32_t v3; // w3
  FollowerSelectItemListViewItem_o *v4; // x19
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  FollowerInfo_o *followerInfo; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventUpValSetupInfo_o *v25; // x23
  int32_t followerIndex; // w24
  int32_t v27; // w6
  bool *p_isEquipEventUpVal; // x21
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  struct IconLabelInfo_o *iconLabelInfo2; // x8
  Il2CppObject *Instance; // x22
  const MethodInfo *v33; // x1
  struct System_String_o *sortStr1; // x23
  int64_t sortValue1; // x24
  int32_t v36; // w23
  const MethodInfo *v37; // x1
  int32_t Rarity; // w24
  const MethodInfo *v39; // x1
  struct IconLabelInfo_o *v40; // x8
  bool v41; // w8
  System_Collections_Generic_List_object__o *v42; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  FollowerSelectItemListViewItem___c_c *v45; // x0
  System_Func_object__int__o *_9__72_0; // x23
  Il2CppObject *v47; // x24
  struct FollowerSelectItemListViewItem___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  int32_t sortIndex; // w9
  FollowerSelectItemListViewItem_o *v54; // x22
  EventPersonalMargeUpValInfo_c **v55; // x28
  int32_t v56; // w8
  ServantEntity_o *servantEntity; // x25
  int32_t v58; // w23
  EventPersonalMargeUpValInfo_o *v59; // x24
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v62; // x8
  FollowerSelectItemListViewItem_o *v63; // x24
  unsigned __int64 v64; // x25
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  EventServantPointRankMaster_o *v69; // x24
  int32_t eventUpValItemList; // w25
  FollowerSelectItemListViewItem_o *v71; // x0
  EventPersonalMargeUpValInfo_c **v72; // x19
  struct System_String_o *v73; // x26
  int64_t v74; // x28
  int32_t v75; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v77; // w24
  EventMargeItemUpValInfo_o *v78; // x25
  const MethodInfo *v79; // x1
  System_Object_array *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  ServantStatusBattleListViewItem_o *p_eventUpValItemList; // [xsp+0h] [xbp-80h]
  FollowerSelectItemListViewItem_o *v84; // [xsp+8h] [xbp-78h]
  int32_t actMaxRarity; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v4 = this;
  if ( (byte_4A02889 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_EventServantPointRankMaster___, method);
    sub_1B64870(&DataManager_TypeInfo, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B64870(&EventMargeItemUpValInfo_TypeInfo, v9);
    sub_1B64870(&EventPersonalMargeUpValInfo_TypeInfo, v10);
    sub_1B64870(&System_Func_EventDropUpValInfo__int__TypeInfo, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v15);
    sub_1B64870(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v16);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B64870(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_1B64870(&Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__72_0__, v19);
    this = (FollowerSelectItemListViewItem_o *)sub_1B64870(&FollowerSelectItemListViewItem___c_TypeInfo, v20);
    byte_4A02889 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  setupInfo = v4->fields.setupInfo;
  if ( setupInfo )
  {
    eventIdList = setupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_73;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      *(_WORD *)&v4->fields.isServantEventUpVal = 0;
      v4->fields.isEventUpVal = 0;
      v4->fields.eventUpValItemList = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.eventUpValItemList, 0, v2, v3);
      followerInfo = v4->fields.followerInfo;
      v25 = v4->fields.setupInfo;
      questRestrictionInfo = v4->fields.questRestrictionInfo;
      followerIndex = v4->fields.followerIndex;
      if ( questRestrictionInfo )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                     questRestrictionInfo->fields.questId,
                                                     0LL);
        v27 = (int)this;
        if ( !followerInfo )
          goto LABEL_73;
      }
      else
      {
        v27 = 0;
        if ( !followerInfo )
          goto LABEL_73;
      }
      p_isEquipEventUpVal = &v4->fields.isEquipEventUpVal;
      FollowerInfo__getEventUpVal_38606288(
        followerInfo,
        &v4->fields.eventUpValInfo,
        &v4->fields.isServantEventUpVal,
        &v4->fields.isEquipEventUpVal,
        v25,
        followerIndex,
        v27,
        0LL);
      if ( !v4->fields.isServantBonusFilterEnable )
        v4->fields.isServantEventUpVal = 0;
      if ( FollowerSelectItemListViewItem__get_ServantLeader(v4, v29) )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v4, v30);
        if ( !this )
          goto LABEL_73;
        iconLabelInfo2 = this->fields.iconLabelInfo2;
        if ( iconLabelInfo2 )
        {
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v4, v33);
          if ( !this )
            goto LABEL_73;
          sortValue1 = this->fields.sortValue1;
          sortStr1 = this->fields.sortStr1;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v87.fields.currentCryptoKey = sortValue1;
          *(_QWORD *)&v87.fields.fakeValue = sortStr1;
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v87, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v4, v37);
          if ( !this )
            goto LABEL_73;
          Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v4, v39);
          if ( !this )
            goto LABEL_73;
          v40 = this->fields.iconLabelInfo2;
          if ( !v40 )
            goto LABEL_73;
          this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                       *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v40[1].monitor,
                                                       0LL);
          if ( !Instance )
            goto LABEL_73;
          LODWORD(iconLabelInfo2) = PartyOrganizationUtility__IsRarityRestriction(
                                      (PartyOrganizationUtility_o *)Instance,
                                      &skillName,
                                      &actMaxRarity,
                                      v36,
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
      if ( (unsigned int)iconLabelInfo2 | !v4->fields.isServantEquipBonusFilterEnable )
      {
        v41 = 0;
        *p_isEquipEventUpVal = 0;
      }
      else
      {
        v41 = *p_isEquipEventUpVal;
      }
      v4->fields.isEventUpVal = v41 || v4->fields.isServantEventUpVal;
      v42 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v42,
        (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = v4->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v45 = FollowerSelectItemListViewItem___c_TypeInfo;
        if ( !FollowerSelectItemListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItem___c_TypeInfo);
          v45 = FollowerSelectItemListViewItem___c_TypeInfo;
        }
        p_eventUpValItemList = (ServantStatusBattleListViewItem_o *)&v4->fields.eventUpValItemList;
        _9__72_0 = (System_Func_object__int__o *)v45->static_fields->__9__72_0;
        if ( !_9__72_0 )
        {
          if ( !v45->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v45);
            v45 = FollowerSelectItemListViewItem___c_TypeInfo;
          }
          v47 = (Il2CppObject *)v45->static_fields->__9;
          _9__72_0 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__72_0,
            v47,
            Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__72_0__,
            0LL);
          static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
          static_fields->__9__72_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__72_0;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__72_0, (int32_t)_9__72_0, v49, v50);
        }
        v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     dropList,
                                                                     (System_Func_TSource__TResult__o *)_9__72_0,
                                                                     (const MethodInfo_2E6ADAC *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v52 = System_Linq_Enumerable__Distinct_int_(
                v51,
                (const MethodInfo_2E5A07C *)Method_System_Linq_Enumerable_Distinct_int___);
        this = (FollowerSelectItemListViewItem_o *)System_Linq_Enumerable__ToArray_int_(
                                                     v52,
                                                     (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
        actMaxRarity = 0;
        if ( this )
        {
          sortIndex = this->fields.sortIndex;
          v54 = this;
          if ( sortIndex >= 1 )
          {
            v55 = &EventPersonalMargeUpValInfo_TypeInfo;
            v56 = 0;
            v84 = v4;
            while ( 1 )
            {
              if ( v56 >= (unsigned int)sortIndex )
                goto LABEL_74;
              servantEntity = v4->fields.servantEntity;
              v58 = *((_DWORD *)&v54->fields.sortValue0 + v56);
              v59 = (EventPersonalMargeUpValInfo_o *)sub_1B64ABC(*v55);
              EventPersonalMargeUpValInfo___ctor(v59, v58, servantEntity, 0LL);
              this = (FollowerSelectItemListViewItem_o *)v4->fields.eventUpValInfo;
              if ( !this )
                goto LABEL_73;
              this = (FollowerSelectItemListViewItem_o *)EventUpValInfo__GetDropItemList(
                                                           (EventUpValInfo_o *)this,
                                                           0,
                                                           0LL);
              if ( !v59 )
                goto LABEL_73;
              EventPersonalMargeUpValInfo__Add(v59, (EventDropItemUpValInfo_array *)this, 0LL);
              this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__IsEmpty(v59, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__GetList(v59, 0LL);
                if ( !this )
                  goto LABEL_73;
                v62 = *(_QWORD *)&this->fields.sortIndex;
                v63 = this;
                if ( (int)v62 >= 1 )
                  break;
              }
LABEL_51:
              if ( !v4->fields.isNpc )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v4, method);
                if ( this )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  this = (FollowerSelectItemListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
                  if ( !this )
                    goto LABEL_73;
                  v69 = (EventServantPointRankMaster_o *)this;
                  this = (FollowerSelectItemListViewItem_o *)EventServantPointRankMaster__IsEnableEvent(
                                                               (EventServantPointRankMaster_o *)this,
                                                               v58,
                                                               0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v4,
                                                                 method);
                    if ( !this )
                      goto LABEL_73;
                    eventUpValItemList = (int32_t)this->fields.eventUpValItemList;
                    v71 = v4;
                    v72 = v55;
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v71,
                                                                 method);
                    if ( !this )
                      goto LABEL_73;
                    v74 = this->fields.sortValue1;
                    v73 = this->fields.sortStr1;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v88.fields.currentCryptoKey = v74;
                    *(_QWORD *)&v88.fields.fakeValue = v73;
                    v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v88, 0LL);
                    EnableEntity = EventServantPointRankMaster__GetEnableEntity(v69, v58, eventUpValItemList, v75, 0LL);
                    v77 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
                    v55 = v72;
                    v78 = (EventMargeItemUpValInfo_o *)sub_1B64ABC(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_38577364(v78, v58, 0LL);
                    v4 = v84;
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v84,
                                                                 v79);
                    if ( !this )
                      goto LABEL_73;
                    if ( !v78 )
                      goto LABEL_73;
                    EventMargeItemUpValInfo__SetServantPointInfo(
                      v78,
                      (int32_t)this->fields.eventUpValItemList,
                      v77,
                      1,
                      0LL);
                    if ( !v42 )
                      goto LABEL_73;
                    System_Collections_Generic_List_object___Insert(
                      v42,
                      0,
                      (Il2CppObject *)v78,
                      (const MethodInfo_34B0800 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                  }
                }
              }
              v56 = actMaxRarity + 1;
              actMaxRarity = v56;
              sortIndex = v54->fields.sortIndex;
              if ( v56 >= sortIndex )
                goto LABEL_70;
            }
            v64 = 0LL;
            while ( v64 < (unsigned int)v62 )
            {
              if ( !v42 )
                goto LABEL_73;
              method = (const MethodInfo *)*(&v63->fields.sortValue0 + v64);
              items = v42->fields._items;
              v66 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v42->fields._version;
              if ( !items )
                goto LABEL_73;
              size = v42->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v42,
                  (Il2CppObject *)method,
                  *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
              }
              else
              {
                v68 = &items->obj.klass + size;
                v42->fields._size = size + 1;
                v68[4] = (Il2CppClass *)method;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)method, v60, v61);
              }
              LODWORD(v62) = v63->fields.sortIndex;
              if ( (__int64)++v64 >= (int)v62 )
                goto LABEL_51;
            }
LABEL_74:
            sub_1B64AD4(this, method);
          }
LABEL_70:
          if ( v42 )
          {
            v80 = System_Collections_Generic_List_object___ToArray(
                    v42,
                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
            p_eventUpValItemList->klass = (ServantStatusBattleListViewItem_c *)v80;
            sub_1B64814(p_eventUpValItemList, (int32_t)v80, v81, v82);
            return;
          }
        }
      }
LABEL_73:
      sub_1B64ACC(this, method);
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
  FollowerInfo_o *followerInfo; // x21
  int32_t type; // w27
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w2
  int32_t SvtId; // w21
  const MethodInfo *v22; // x2
  __int64 *p_sortValue0; // x26
  int32_t priorityKind; // w23
  System_Collections_Generic_Dictionary_string__int__o *ValuesDictionary; // x22
  const MethodInfo *v26; // x1
  int64_t v27; // x24
  struct System_String_o *v28; // x25
  int32_t Item; // w0
  const MethodInfo *v30; // x1
  int v31; // w8
  signed int sortValue2; // w22
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  int64_t sortValue1B; // x22
  struct System_String_o *sortStr1; // x23
  System_String_o *v37; // x22
  System_String_o *v38; // x23
  int32_t MaxIndividualFilter; // w0
  int v40; // w25
  int32_t v41; // w24
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  int32_t Int_69093624; // w26
  const MethodInfo *v47; // x1
  int64_t v48; // x27
  struct System_String_o *v49; // x28
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  int32_t v54; // w26
  const MethodInfo *v55; // x1
  int64_t v56; // x27
  struct System_String_o *v57; // x28
  int32_t v58; // w3
  __int64 *v60; // x23
  __int64 v61; // x22
  const MethodInfo *v62; // x1
  int sortValue2B_high; // w23
  int64_t v64; // x22
  int32_t v65; // w23
  __int64 v66; // x8
  __int64 v67; // x22
  int v68; // w23
  int64_t v69; // x22
  int32_t v70; // w23
  __int64 v71; // x8
  int v72; // w8
  IconLabelInfo_o *iconLabelInfo1; // x20
  FollowerInfo_o *v74; // x21
  struct QuestRestrictionInfo_o *v75; // x8
  int32_t v76; // w22
  int32_t v77; // w2
  FollowerInfo_o *v78; // x20
  struct QuestRestrictionInfo_o *v79; // x8
  int32_t v80; // w21
  int32_t v81; // w2
  int32_t index; // w8
  FollowerInfo_o *v83; // x22
  struct QuestRestrictionInfo_o *v84; // x8
  int32_t v85; // w23
  int32_t v86; // w21
  int32_t v87; // w2
  int64_t classIndex; // x8
  int64_t deckPriority; // x9
  __int64 v90; // x8
  FollowerInfo_o *v91; // x20
  struct QuestRestrictionInfo_o *v92; // x8
  int32_t v93; // w21
  int32_t v94; // w2
  FollowerInfo_o *v95; // x20
  struct QuestRestrictionInfo_o *v96; // x8
  int32_t v97; // w21
  int32_t v98; // w2
  int64_t v99; // x9
  IconLabelInfo_o *iconLabelInfo2; // x20
  FollowerInfo_o *v101; // x21
  struct QuestRestrictionInfo_o *v102; // x8
  int32_t v103; // w22
  __int64 v104; // x8
  FollowerInfo_o *v105; // x20
  struct QuestRestrictionInfo_o *v106; // x8
  int32_t v107; // w22
  int v108; // w21
  int32_t v109; // w2
  int32_t v110; // w2
  FollowerInfo_o *v111; // x20
  struct QuestRestrictionInfo_o *v112; // x8
  int32_t v113; // w22
  int v114; // w21
  int32_t v115; // w2
  IconLabelInfo_o *v116; // x20
  FollowerInfo_o *v117; // x22
  struct QuestRestrictionInfo_o *v118; // x8
  int32_t v119; // w23
  int32_t v120; // w2
  FollowerInfo_o *v121; // x22
  struct QuestRestrictionInfo_o *v122; // x8
  int32_t v123; // w23
  int32_t v124; // w2
  FollowerInfo_o *v125; // x22
  struct QuestRestrictionInfo_o *v126; // x8
  int32_t v127; // w23
  int32_t v128; // w21
  int32_t v129; // w2
  FollowerInfo_o *v130; // x22
  struct QuestRestrictionInfo_o *v131; // x8
  int32_t v132; // w23
  int32_t v133; // w2
  FollowerInfo_o *v134; // x23
  struct QuestRestrictionInfo_o *v135; // x8
  int32_t v136; // w24
  int32_t v137; // w22
  int32_t v138; // w2
  FollowerInfo_o *v139; // x23
  struct QuestRestrictionInfo_o *v140; // x8
  int32_t v141; // w24
  int32_t v142; // w2
  int32_t v143; // w4
  int32_t v144; // w1
  FollowerInfo_o *v145; // x22
  struct QuestRestrictionInfo_o *v146; // x8
  int32_t v147; // w23
  int32_t v148; // w21
  int32_t v149; // w2
  int64_t servantEntity; // x8
  _BOOL4 isQuestRestriction; // w9
  __int64 v152; // x10
  __int64 v153; // x11
  __int64 v154; // x9
  Il2CppObject *MasterData_object; // [xsp+8h] [xbp-78h]
  EventBonusFilterGroupMemberEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  int v157; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  v4 = this;
  if ( (byte_4A0288B & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, sort);
    sub_1B64870(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v5);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v6);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B64870(&ServantBonusFilterSelectMenu_TypeInfo, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B64870(&StringLiteral_1414/*"2"*/, v11);
    sub_1B64870(&StringLiteral_3287/*"BonusFilterEquipId"*/, v12);
    sub_1B64870(&StringLiteral_3289/*"BonusFilterGroupId"*/, v13);
    sub_1B64870(&StringLiteral_1267/*"1"*/, v14);
    this = (FollowerSelectItemListViewItem_o *)sub_1B64870(&StringLiteral_1213/*"0"*/, v15);
    byte_4A0288B = 1;
  }
  v157 = 0;
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
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v33);
      if ( !this )
        goto LABEL_198;
      sortStr1 = this->fields.sortStr1;
      sortValue1B = this->fields.sortValue1B;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v159.fields.currentCryptoKey = sortStr1;
      *(_QWORD *)&v159.fields.fakeValue = sortValue1B;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                   v159,
                                                   0LL);
      if ( (int)this < 1 )
        goto LABEL_53;
      if ( !sort )
        goto LABEL_198;
      if ( ListViewSort__GetFilter(sort, 41, 0LL) )
        goto LABEL_53;
      v37 = (System_String_o *)StringLiteral_3287/*"BonusFilterEquipId"*/;
      v38 = (System_String_o *)StringLiteral_3289/*"BonusFilterGroupId"*/;
      this = (FollowerSelectItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_198;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v157 = 0;
      if ( MaxIndividualFilter < 1 )
      {
LABEL_53:
        if ( FollowerSelectItemListViewItem__ChkWholeFilter(v4, sort, v34) )
          goto LABEL_9;
      }
      else
      {
        v40 = MaxIndividualFilter;
        v41 = type;
        while ( 1 )
        {
          v42 = System_Int32__ToString((int32_t)&v157, 0LL);
          v43 = System_String__Concat_61383576(v37, v42, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v43, 0LL) )
          {
            v44 = System_Int32__ToString((int32_t)&v157, 0LL);
            v45 = System_String__Concat_61383576(v37, v44, 0LL);
            Int_69093624 = UnityEngine_PlayerPrefs__GetInt_69093624(v45, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v47);
            if ( !this )
              goto LABEL_198;
            v49 = this->fields.sortStr1;
            v48 = this->fields.sortValue1B;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v160.fields.currentCryptoKey = v49;
            *(_QWORD *)&v160.fields.fakeValue = v48;
            type = v41;
            if ( Int_69093624 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v160, 0LL) )
              break;
          }
          v50 = System_Int32__ToString((int32_t)&v157, 0LL);
          v51 = System_String__Concat_61383576(v38, v50, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v51, 0LL) )
          {
            v52 = System_Int32__ToString((int32_t)&v157, 0LL);
            v53 = System_String__Concat_61383576(v38, v52, 0LL);
            v54 = UnityEngine_PlayerPrefs__GetInt_69093624(v53, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v55);
            if ( !this )
              goto LABEL_198;
            v57 = this->fields.sortStr1;
            v56 = this->fields.sortValue1B;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v161.fields.currentCryptoKey = v57;
            *(_QWORD *)&v161.fields.fakeValue = v56;
            v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v161, 0LL);
            this = (FollowerSelectItemListViewItem_o *)MasterData_object;
            if ( !MasterData_object )
              goto LABEL_198;
            type = v41;
            if ( EventBonusFilterGroupMemberMaster__TryGetEntity(
                   (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                   &entity,
                   v54,
                   v58,
                   0LL) )
            {
              return 0;
            }
          }
          if ( ++v157 >= v40 )
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
  ValuesDictionary = FollowerSelectItemListViewItem__GetValuesDictionary(v4, priorityKind, v22);
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v26);
  if ( this )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                 v4,
                                                 (const MethodInfo *)sort);
    if ( !this )
      goto LABEL_198;
    v28 = this->fields.sortStr1;
    v27 = this->fields.sortValue1B;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v158.fields.currentCryptoKey = v28;
    *(_QWORD *)&v158.fields.fakeValue = v27;
    this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                 v158,
                                                 0LL);
    if ( ValuesDictionary )
    {
      if ( (int)this >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v60 = &StringLiteral_1414/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_79;
            v60 = &StringLiteral_1213/*"0"*/;
          }
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                                                       (Il2CppObject *)*v60,
                                                       (const MethodInfo_3172B80 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v61 = 100000LL
                * System_Collections_Generic_Dictionary_object__int___get_Item(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)*v60,
                    (const MethodInfo_317290C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v4->fields.sortValue0 = v61;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v62);
            if ( !this )
              goto LABEL_198;
            sortValue2B_high = HIDWORD(this->fields.sortValue2B);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                         v4,
                                                         (const MethodInfo *)sort);
            if ( !this )
              goto LABEL_198;
            v64 = v61 + 10LL * (*(_DWORD *)&this->fields.isTermination + sortValue2B_high);
            v4->fields.sortValue0 = v64;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                         v4,
                                                         (const MethodInfo *)sort);
            if ( !this )
              goto LABEL_198;
            v65 = this->fields.sortValue2;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v66 = v64 | (v65 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
            goto LABEL_78;
          }
        }
        else
        {
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                                                       (Il2CppObject *)StringLiteral_1213/*"0"*/,
                                                       (const MethodInfo_3172B80 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                                                         (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                         (const MethodInfo_3172B80 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1213/*"0"*/,
                     (const MethodInfo_317290C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                         (Il2CppObject *)StringLiteral_1267/*"1"*/,
                         (const MethodInfo_317290C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v31 = 100000;
              }
              else
              {
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                       (Il2CppObject *)StringLiteral_1213/*"0"*/,
                       (const MethodInfo_317290C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
                {
                  v67 = *p_sortValue0;
LABEL_70:
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v30);
                  if ( !this )
                    goto LABEL_198;
                  v68 = HIDWORD(this->fields.sortValue2B);
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                               v4,
                                                               (const MethodInfo *)sort);
                  if ( !this )
                    goto LABEL_198;
                  v69 = v67 + 10LL * (*(_DWORD *)&this->fields.isTermination + v68);
                  v4->fields.sortValue0 = v69;
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                               v4,
                                                               (const MethodInfo *)sort);
                  if ( !this )
                    goto LABEL_198;
                  v70 = this->fields.sortValue2;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v70 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                    v66 = v69;
                  else
                    v66 = v69 + 1;
LABEL_78:
                  *p_sortValue0 = v66;
                  goto LABEL_79;
                }
                Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                         (Il2CppObject *)StringLiteral_1267/*"1"*/,
                         (const MethodInfo_317290C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v31 = 100000000;
              }
              v67 = Item * (__int64)v31;
              *p_sortValue0 = v67;
              goto LABEL_70;
            }
          }
        }
      }
    }
  }
LABEL_79:
  v71 = 56LL;
  if ( v4->fields._IsRecommendFollower_k__BackingField )
    v71 = 152LL;
  v72 = *(_DWORD *)((char *)&sort->klass + v71);
  if ( v72 == 11 )
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
      v74 = v4->fields.followerInfo;
      v75 = v4->fields.questRestrictionInfo;
      v76 = v4->fields.followerIndex;
      v4->fields.sortValue2 = v4->fields.deckPriority;
      v4->fields.sortValue2B = 1LL;
      if ( v75 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v75->fields.questId, 0LL);
        v77 = (int)this;
        if ( !v74 )
          goto LABEL_198;
      }
      else
      {
        v77 = 0;
        if ( !v74 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v74, v76, v77, 0LL);
      v83 = v4->fields.followerInfo;
      v84 = v4->fields.questRestrictionInfo;
      v85 = v4->fields.followerIndex;
      v86 = (int)this;
      if ( v84 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v84->fields.questId, 0LL);
        v87 = (int)this;
        if ( !v83 )
          goto LABEL_198;
      }
      else
      {
        v87 = 0;
        if ( !v83 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v83, v85, v87, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_198;
      IconLabelInfo__Set_37829740(iconLabelInfo1, 2, v86, (int32_t)this, 0, 0, 0, 0, 0LL);
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
        v90 = 5LL;
        goto LABEL_114;
      case 2:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v90 = 4LL;
        goto LABEL_114;
      case 3:
      case 4:
        goto LABEL_184;
      case 5:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v90 = 6LL;
LABEL_114:
        v4->fields.sortValue0B = v90;
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
    if ( v72 > 5 )
    {
      if ( v72 == 6 )
      {
        v95 = v4->fields.followerInfo;
        v96 = v4->fields.questRestrictionInfo;
        v97 = v4->fields.followerIndex;
        if ( v96 )
        {
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v96->fields.questId, 0LL);
          v98 = (int)this;
        }
        else
        {
          v98 = 0;
        }
        if ( v95 )
        {
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v95, v97, v98, 0LL);
          v111 = v4->fields.followerInfo;
          v112 = v4->fields.questRestrictionInfo;
          v113 = v4->fields.followerIndex;
          v114 = (int)this;
          if ( v112 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v112->fields.questId, 0LL);
            v115 = (int)this;
          }
          else
          {
            v115 = 0;
          }
          if ( v111 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v111, v113, v115, 0LL);
            v116 = v4->fields.iconLabelInfo1;
            v121 = v4->fields.followerInfo;
            v122 = v4->fields.questRestrictionInfo;
            v123 = v4->fields.followerIndex;
            v4->fields.sortValue1 = (int)this + v114;
            if ( v122 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v122->fields.questId, 0LL);
              v124 = (int)this;
            }
            else
            {
              v124 = 0;
            }
            if ( v121 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v121, v123, v124, 0LL);
              v130 = v4->fields.followerInfo;
              v131 = v4->fields.questRestrictionInfo;
              v132 = v4->fields.followerIndex;
              v128 = (int)this;
              if ( v131 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                             v131->fields.questId,
                                                             0LL);
                v133 = (int)this;
              }
              else
              {
                v133 = 0;
              }
              if ( v130 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustAtk(v130, v132, v133, 0LL);
                v139 = v4->fields.followerInfo;
                v140 = v4->fields.questRestrictionInfo;
                v141 = v4->fields.followerIndex;
                v137 = (int)this;
                if ( v140 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                               v140->fields.questId,
                                                               0LL);
                  v142 = (int)this;
                }
                else
                {
                  v142 = 0;
                }
                if ( v139 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v139, v141, v142, 0LL);
                  if ( v116 )
                  {
                    v143 = (int)this;
                    v144 = 5;
LABEL_173:
                    IconLabelInfo__Set_37829740(v116, v144, v128, v137, v143, 0, 0, 0, 0LL);
                    iconLabelInfo2 = v4->fields.iconLabelInfo2;
                    v101 = v4->fields.followerInfo;
                    v102 = v4->fields.questRestrictionInfo;
                    v103 = v4->fields.followerIndex;
                    if ( !v102 )
                    {
LABEL_174:
                      v110 = 0;
                      if ( !v101 )
                        goto LABEL_198;
                      goto LABEL_175;
                    }
LABEL_135:
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                 v102->fields.questId,
                                                                 0LL);
                    v110 = (int)this;
                    if ( !v101 )
                      goto LABEL_198;
LABEL_175:
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v101, v103, v110, 0LL);
                    v145 = v4->fields.followerInfo;
                    v146 = v4->fields.questRestrictionInfo;
                    v147 = v4->fields.followerIndex;
                    v148 = (int)this;
                    if ( v146 )
                    {
                      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                   v146->fields.questId,
                                                                   0LL);
                      v149 = (int)this;
                      if ( !v145 )
                        goto LABEL_198;
                    }
                    else
                    {
                      v149 = 0;
                      if ( !v145 )
                        goto LABEL_198;
                    }
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v145, v147, v149, 0LL);
                    if ( !iconLabelInfo2 )
                      goto LABEL_198;
                    IconLabelInfo__Set_37829740(iconLabelInfo2, 2, v148, (int32_t)this, 0, 0, 0, 0, 0LL);
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
                        v152 = 3LL;
                        v153 = 6LL;
                        goto LABEL_190;
                      case 2:
                        isQuestRestriction = v4->fields.isQuestRestriction;
                        v152 = 2LL;
                        v153 = 5LL;
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
                        v152 = 4LL;
                        v153 = 7LL;
LABEL_190:
                        servantEntity = (int)servantEntity;
                        if ( isQuestRestriction )
                          v154 = v152;
                        else
                          v154 = v153;
                        v4->fields.sortValue0B = v154;
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
        sub_1B64ACC(this, sort);
      }
      if ( v72 != 29 )
        goto LABEL_120;
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      if ( !this )
        goto LABEL_198;
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetUseStatus((FollowerInfo_o *)this, 0LL);
    }
    else
    {
      if ( v72 != 3 )
      {
        if ( v72 == 5 )
        {
          v78 = v4->fields.followerInfo;
          v79 = v4->fields.questRestrictionInfo;
          v80 = v4->fields.followerIndex;
          if ( v79 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v79->fields.questId, 0LL);
            v81 = (int)this;
          }
          else
          {
            v81 = 0;
          }
          if ( v78 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v78, v80, v81, 0LL);
            v105 = v4->fields.followerInfo;
            v106 = v4->fields.questRestrictionInfo;
            v107 = v4->fields.followerIndex;
            v108 = (int)this;
            if ( v106 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v106->fields.questId, 0LL);
              v109 = (int)this;
            }
            else
            {
              v109 = 0;
            }
            if ( v105 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v105, v107, v109, 0LL);
              v116 = v4->fields.iconLabelInfo1;
              v117 = v4->fields.followerInfo;
              v118 = v4->fields.questRestrictionInfo;
              v119 = v4->fields.followerIndex;
              v4->fields.sortValue1 = (int)this + v108;
              if ( v118 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                             v118->fields.questId,
                                                             0LL);
                v120 = (int)this;
              }
              else
              {
                v120 = 0;
              }
              if ( v117 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v117, v119, v120, 0LL);
                v125 = v4->fields.followerInfo;
                v126 = v4->fields.questRestrictionInfo;
                v127 = v4->fields.followerIndex;
                v128 = (int)this;
                if ( v126 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                               v126->fields.questId,
                                                               0LL);
                  v129 = (int)this;
                }
                else
                {
                  v129 = 0;
                }
                if ( v125 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustHp(v125, v127, v129, 0LL);
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
                  }
                  else
                  {
                    v138 = 0;
                  }
                  if ( v134 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v134, v136, v138, 0LL);
                    if ( v116 )
                    {
                      v143 = (int)this;
                      v144 = 3;
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
        v99 = v4->fields.sortValue2;
        iconLabelInfo2 = v4->fields.iconLabelInfo1;
        v101 = v4->fields.followerInfo;
        v102 = v4->fields.questRestrictionInfo;
        v103 = v4->fields.followerIndex;
        goto LABEL_134;
      }
      v91 = v4->fields.followerInfo;
      v92 = v4->fields.questRestrictionInfo;
      v93 = v4->fields.followerIndex;
      if ( v92 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v92->fields.questId, 0LL);
        v94 = (int)this;
      }
      else
      {
        v94 = 0;
      }
      if ( !v91 )
        goto LABEL_198;
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v91, v93, v94, 0LL);
    }
    iconLabelInfo2 = v4->fields.iconLabelInfo1;
    v101 = v4->fields.followerInfo;
    v102 = v4->fields.questRestrictionInfo;
    v103 = v4->fields.followerIndex;
    v99 = (int)this;
LABEL_134:
    v4->fields.sortValue1 = v99;
    if ( !v102 )
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
      v104 = 2LL;
      goto LABEL_124;
    case 2:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v104 = 1LL;
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
      v104 = 3LL;
LABEL_124:
      v4->fields.sortValue0B = v104;
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
            sub_1B64ACC(QuestRestriction, v8);
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
    sub_1B64ACC(this, method);
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

  if ( (byte_4A0288C & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18981/*"error"*/, method);
    byte_4A0288C = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    p_userName = &followerInfo->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18981/*"error"*/;
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
  int32_t v11; // w1

  if ( (byte_4A0288D & 1) == 0 )
  {
    sub_1B64870(&ImageLimitCount_TypeInfo, method);
    byte_4A0288D = 1;
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
      v11 = -1;
      return ServantEntity__getName((ServantEntity_o *)servantEntity, v11, -1, 0LL);
    }
LABEL_21:
    sub_1B64ACC(servantEntity, v5);
  }
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v5);
  if ( !servantEntity )
    goto LABEL_21;
  v4 = (System_String_o *)*((_QWORD *)servantEntity + 31);
  if ( !System_String__IsNullOrEmpty(v4, 0LL) )
    return v4;
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v7);
  if ( !servantEntity )
    goto LABEL_21;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)servantEntity, 0LL);
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v9);
  if ( !servantEntity )
    goto LABEL_21;
  v10 = *((_DWORD *)servantEntity + 16);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  servantEntity = (void *)ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, v10, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_21;
  v11 = (int)servantEntity;
  servantEntity = this->fields.servantEntity;
  return ServantEntity__getName((ServantEntity_o *)servantEntity, v11, -1, 0LL);
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
  Il2CppObject *v2; // x19

  if ( (byte_49F988F & 1) == 0 )
  {
    sub_1B64870(&FollowerSelectItemListViewItem___c_TypeInfo, v1);
    byte_49F988F = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(FollowerSelectItemListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerSelectItemListViewItem___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewItem___c_o *)v2;
  sub_1B64814(FollowerSelectItemListViewItem___c_TypeInfo->static_fields);
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
    sub_1B64ACC(this, 0LL);
  return drop->fields.eventId;
}