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
  __int64 v29; // x1
  __int64 v30; // x2
  IconLabelInfo_o *v31; // x19
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
  __int64 v42; // x1
  __int64 v43; // x2
  int32_t v44; // w3
  System_Collections_Generic_Dictionary_int__int__o *v45; // x22
  const MethodInfo *v46; // x2

  if ( (byte_4A00784 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor___75610000, *(_QWORD *)&index);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v24);
    sub_1B640C8(&IconLabelInfo_TypeInfo, v25);
    byte_4A00784 = 1;
  }
  v26 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, *(_QWORD *)&index, *(_QWORD *)&index2);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v26, v27, v28);
  v31 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, v29, v30);
  IconLabelInfo___ctor(v31, 0LL);
  this->fields.iconLabelInfo2 = v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v31, v32, v33);
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.friendPointUpVal = friendPointUpVal;
  this->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v34,
    v35);
  this->fields.isBonusFilterEnable = isBonusFilterEnable;
  this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
  this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
  this->fields.isRecommended = isRecommended;
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v36, v37);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v38,
    v39);
  this->fields.followerInfo = followerInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v40, v41);
  this->fields._isRecommendedUser_k__BackingField = isRecommendedUser;
  this->fields.classIndex = index2;
  this->fields.supportDeckId = supportDeckId;
  this->fields.deckPriority = deckPriority;
  if ( classBoardMaxNumDictionary )
  {
    v45 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v42,
                                                                 v43);
    System_Collections_Generic_Dictionary_int__int____ctor_51488208(
      v45,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_311A5D0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___75610000);
  }
  else
  {
    v45 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v45;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.classBoardMaxNumDictionary, (int32_t)v45, v43, v44);
  this->fields._IsReleasedClassBoard_k__BackingField = isReleasedClassBoard;
  this->fields._IsRecommendFollower_k__BackingField = isRecommendFollower;
  FollowerSelectItemListViewItem__AnalyzeEntity(this, followerClassId, v46);
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
  struct QuestRestrictionInfo_o *v25; // x8
  FollowerInfo_o *v26; // x23
  int32_t v27; // w20
  int32_t v28; // w2
  struct FollowerInfo_o *v29; // x8
  int32_t v30; // w20
  const MethodInfo *v31; // x1
  struct EventCampaignEntity_o *EnableFriendPointCampaign; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  FollowerInfo_o *v38; // x22
  struct QuestRestrictionInfo_o *v39; // x21
  int32_t followerIndex; // w23
  int32_t v41; // w3
  struct QuestRestrictionInfo_o *v42; // x8
  FollowerInfo_o *v43; // x22
  struct QuestRestrictionInfo_o *v44; // x21
  int32_t v45; // w23
  int32_t v46; // w3
  FollowerInfo_o *v47; // x22
  struct QuestRestrictionInfo_o *v48; // x21
  int32_t v49; // w23
  int32_t v50; // w3
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  struct QuestRestrictionInfo_o *v53; // x8
  Il2CppObject *Master_object; // x21
  struct QuestRestrictionInfo_o *v55; // x8
  int32_t v56; // w20
  __int64 v57; // x1
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

  if ( (byte_4A00785 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&followerClassId);
    sub_1B640C8(&Method_DataManager_GetMasterData_TblFriendMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A00785 = 1;
  }
  entity = 0LL;
  this->fields.isNpc = 0;
  this->fields.followerClassId = followerClassId;
  this->fields.servantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, (int32_t)method, v3);
  *(_WORD *)&this->fields.isUniqueSvtRestriction = 0;
  *(_WORD *)&this->fields.isServantEventUpVal = 0;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValItemList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValItemList, 0, v16, v17);
  this->fields.friendPointCampaignEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntity, 0, v18, v19);
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
    v25 = this->fields.questRestrictionInfo;
    v26 = this->fields.followerInfo;
    v27 = Index;
    this->fields.followerIndex = Index;
    if ( v25 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v25->fields.questId, 0LL);
      v28 = Index;
      if ( !v26 )
        goto LABEL_84;
    }
    else
    {
      v28 = 0;
      if ( !v26 )
        goto LABEL_84;
    }
    Index = FollowerInfo__getSvtId(v26, v27, v28, 0LL);
    if ( (int)Index < 1 )
    {
      v42 = this->fields.questRestrictionInfo;
      if ( v42 )
        LOBYTE(v42) = v42->fields.isRestriction;
      this->fields.isQuestRestriction = (char)v42;
    }
    else
    {
      v29 = this->fields.followerInfo;
      if ( !v29 )
        goto LABEL_84;
      v30 = Index;
      this->fields.isNpc = Follower__IsNpc(v29->fields.type, 0LL);
      EnableFriendPointCampaign = FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(this, v31);
      this->fields.friendPointCampaignEntity = EnableFriendPointCampaign;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntity,
        (int32_t)EnableFriendPointCampaign,
        v33,
        v34);
      Index = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Index )
        goto LABEL_84;
      Index = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)Index,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Index )
        goto LABEL_84;
      v35 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Index,
              v30,
              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.servantEntity = (struct ServantEntity_o *)v35;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v35, v36, v37);
      v38 = this->fields.followerInfo;
      v39 = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( v39 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v39->fields.questId, 0LL);
        v41 = Index;
        if ( !v38 )
          goto LABEL_84;
      }
      else
      {
        v41 = 0;
        if ( !v38 )
          goto LABEL_84;
      }
      Index = FollowerInfo__getQuestRestriction(v38, v39, followerIndex, v41, 0LL);
      v43 = this->fields.followerInfo;
      v44 = this->fields.questRestrictionInfo;
      v45 = this->fields.followerIndex;
      this->fields.isQuestRestriction = Index & 1;
      if ( v44 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v44->fields.questId, 0LL);
        v46 = Index;
        if ( !v43 )
          goto LABEL_84;
      }
      else
      {
        v46 = 0;
        if ( !v43 )
          goto LABEL_84;
      }
      Index = FollowerInfo__getUniqueSvtRestriction(v43, v44, v45, v46, 0LL);
      v47 = this->fields.followerInfo;
      v48 = this->fields.questRestrictionInfo;
      v49 = this->fields.followerIndex;
      this->fields.isUniqueSvtRestriction = Index & 1;
      if ( v48 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v48->fields.questId, 0LL);
        v50 = Index;
        if ( !v47 )
          goto LABEL_84;
      }
      else
      {
        v50 = 0;
        if ( !v47 )
          goto LABEL_84;
      }
      this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                        v47,
                                                        v48,
                                                        v49,
                                                        v50,
                                                        0LL);
      this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v51);
      FollowerSelectItemListViewItem__SetEventUpInfo(this, v52);
      v53 = this->fields.questRestrictionInfo;
      if ( v53 && v53->fields.isDataLostBattle )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Index = NetworkManager__get_UserId(0LL);
        v55 = this->fields.questRestrictionInfo;
        if ( !v55 || !Master_object )
          goto LABEL_84;
        if ( UserEventDataLostMaster__TryGetEntity(
               (UserEventDataLostMaster_o *)Master_object,
               &entity,
               Index,
               v55->fields.dataLostBattleId,
               0LL) )
        {
          Index = (int64_t)entity;
          if ( !entity )
            goto LABEL_84;
          Index = UserEventDataLostEntity__IsRestart(entity, v30, 0LL);
          if ( !entity )
            goto LABEL_84;
          if ( (Index & 1) != 0 )
          {
            this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(entity, v30, 0LL);
          }
          else if ( UserEventDataLostEntity__IsDataLost(entity, v30, 0LL) )
          {
            this->fields._IsDataLost_k__BackingField = 1;
          }
        }
      }
      if ( this->fields.classBoardMaxNumDictionary )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Index = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !Index )
          goto LABEL_84;
        Index = (int64_t)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Index,
                           v30,
                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Index )
          goto LABEL_84;
        v56 = *(_DWORD *)(Index + 80);
        Index = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        if ( !Index )
          goto LABEL_84;
        Index = ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Index, v56, 0LL);
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
              sub_1B6432C(Index, v57);
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
                        (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
              if ( (Index & 1) != 0 )
              {
                Index = ClassBoardInfo__IsReleasedClassId(v63, v56, 0LL);
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
                    (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          squareIds = v63->fields.squareIds;
          if ( !squareIds )
            goto LABEL_84;
          v64 = squareIds->max_length;
        }
        this->fields._OpenClassBoardNum_k__BackingField = v64;
        this->fields._IsMaxOpenClassBoard_k__BackingField = (int)Index > 0 && v64 >= (int)Index;
      }
    }
    Index = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Index )
    {
      Index = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)Index,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    sub_1B64324(Index);
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
  if ( (byte_4A00786 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (FollowerSelectItemListViewItem_o *)sub_1B640C8(
                                                 &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                                 v3);
    byte_4A00786 = 1;
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
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_28;
  sortValue1 = this->fields.sortValue1;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_28;
  v8 = 0;
  if ( sortValue1 < 1 || v2->fields.isNpc )
    return v8;
  if ( !v2->fields.questRestrictionInfo )
    goto LABEL_28;
  sortValue1_high = HIDWORD(this->fields.sortValue1);
  this = (FollowerSelectItemListViewItem_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(
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
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
  limitCount = v16->fields.limitCount;
  v22 = v20;
  this = (FollowerSelectItemListViewItem_o *)ServantLeaderInfo__getDispLimitCount(v16, 0LL);
  if ( !v17 )
LABEL_28:
    sub_1B64324(this);
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
    sub_1B64324(this);
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

  if ( (byte_4A0078F & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B640C8(&SkillInfo___TypeInfo, v7);
    byte_4A0078F = 1;
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
    v13 = (SkillInfo_array *)sub_1B64170(
                               SkillInfo___TypeInfo,
                               (unsigned int)v12->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v13, v14, v15);
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
    sub_1B64324(SvtId);
  max_length = friendPointCampaignEntityList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v7 == max_length )
        sub_1B6432C(SvtId, v4);
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
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  System_String_o *v8; // x19
  Il2CppObject *v9; // x0
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4A0078E & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    sub_1B640C8(&StringLiteral_6387/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, v5);
    byte_4A0078E = 1;
  }
  if ( !this->fields.friendPointCampaignEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_6387/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, 0LL);
  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( !friendPointCampaignEntity )
    sub_1B64324(v6);
  v8 = v6;
  v11 = friendPointCampaignEntity->fields.value / 1000;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return System_String__Format(v8, v9, 0LL);
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
  FollowerInfo_o *v9; // x21
  struct QuestRestrictionInfo_o *v10; // x8
  int32_t v11; // w22
  int v12; // w20
  int32_t v13; // w2
  int32_t friendPointUpMaxVal; // w8
  bool v15; // vf
  int v16; // w8

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
  v9 = this->fields.followerInfo;
  v10 = this->fields.questRestrictionInfo;
  v11 = this->fields.followerIndex;
  v12 = FriendPointUpVal;
  if ( !v10 )
  {
    v13 = 0;
    if ( v9 )
      goto LABEL_8;
LABEL_15:
    sub_1B64324(FriendPointUpVal);
  }
  FriendPointUpVal = FollowerInfo__GetReturnTypeByQuestId(v10->fields.questId, 0LL);
  v13 = FriendPointUpVal;
  if ( !v9 )
    goto LABEL_15;
LABEL_8:
  if ( FollowerInfo__getFriendPointUpType(v9, v11, v13, 0LL) != 104 )
    return this->fields.friendPointUpVal + v12;
  friendPointUpMaxVal = this->fields.friendPointUpMaxVal;
  if ( friendPointUpMaxVal < 1 )
    return this->fields.friendPointUpVal + v12;
  result = this->fields.friendPointUpVal;
  v15 = __OFSUB__(v12, friendPointUpMaxVal);
  v16 = v12 - friendPointUpMaxVal;
  if ( !((v16 < 0) ^ v15 | (v16 == 0)) )
    result += v16;
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

  if ( (byte_4A0078D & 1) == 0 )
  {
    sub_1B640C8(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4A0078D = 1;
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
    v9 = (TreasureDvcInfo_o *)sub_1B64314(TreasureDvcInfo_TypeInfo, tdInfo, method);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v9, v10, v11);
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

  if ( (byte_4A0078C & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B640C8(&SkillInfo___TypeInfo, v5);
    byte_4A0078C = 1;
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
    v11 = (SkillInfo_array *)sub_1B64170(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtSkillListMax);
    *skillInfoList = v11;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v11, v12, v13);
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
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *values; // x19
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *keys; // x20
  Il2CppObject *Master_object; // x19
  const MethodInfo *v18; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v19; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v20; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  Il2CppObject *v22; // x20
  Il2CppObject *v23; // x21
  const MethodInfo *v24; // x1
  __int64 v25; // x1
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

  if ( (byte_4A00788 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantSkillMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_1476/*"3"*/, v12);
    byte_4A00788 = 1;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v18);
      if ( !result )
        goto LABEL_74;
      v20 = result->fields._keys;
      v19 = result->fields._values;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v45.fields.currentCryptoKey = v20;
      *(_QWORD *)&v45.fields.fakeValue = v19;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                         v45,
                                                                         0LL);
      if ( !Master_object )
        goto LABEL_74;
      ServantSkillList = ServantSkillMaster__getServantSkillList(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)result,
                           0LL);
      v22 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v23 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v24);
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
            sub_1B6432C(result, v25);
          }
LABEL_27:
          if ( !v22 )
            goto LABEL_74;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             (SkillLvMaster_o *)v22,
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
            if ( v23 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v23,
                                                                                 &v42,
                                                                                 funcId->m_Items[v35 + 1],
                                                                                 (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
                           (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v41,
                                                                                         (Il2CppObject *)StringLiteral_1476/*"3"*/,
                                                                                         (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
        sub_1B64324(result);
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
        sub_1B64324(this);
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
  __int64 v31; // x2
  struct IconLabelInfo_o *iconLabelInfo2; // x8
  Il2CppObject *Instance; // x22
  const MethodInfo *v34; // x1
  struct System_String_o *sortStr1; // x23
  int64_t sortValue1; // x24
  int32_t v37; // w23
  const MethodInfo *v38; // x1
  int32_t Rarity; // w24
  const MethodInfo *v40; // x1
  struct IconLabelInfo_o *v41; // x8
  bool v42; // w8
  System_Collections_Generic_List_object__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  FollowerSelectItemListViewItem___c_c *v48; // x0
  System_Func_object__int__o *_9__72_0; // x23
  Il2CppObject *v50; // x24
  struct FollowerSelectItemListViewItem___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  const MethodInfo *v56; // x1
  __int64 v57; // x2
  int32_t sortIndex; // w9
  FollowerSelectItemListViewItem_o *v59; // x22
  EventPersonalMargeUpValInfo_c **v60; // x28
  int32_t v61; // w8
  ServantEntity_o *servantEntity; // x25
  int32_t v63; // w23
  EventPersonalMargeUpValInfo_o *v64; // x24
  int32_t v65; // w3
  __int64 v66; // x8
  FollowerSelectItemListViewItem_o *v67; // x24
  unsigned __int64 v68; // x25
  Il2CppObject *v69; // x1
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  EventServantPointRankMaster_o *v74; // x24
  const MethodInfo *v75; // x1
  int32_t eventUpValItemList; // w25
  FollowerSelectItemListViewItem_o *v77; // x0
  EventPersonalMargeUpValInfo_c **v78; // x19
  struct System_String_o *v79; // x26
  int64_t v80; // x28
  int32_t v81; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  int32_t v85; // w24
  EventMargeItemUpValInfo_o *v86; // x25
  const MethodInfo *v87; // x1
  System_Object_array *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  ServantStatusBattleListViewItem_o *p_eventUpValItemList; // [xsp+0h] [xbp-80h]
  FollowerSelectItemListViewItem_o *v92; // [xsp+8h] [xbp-78h]
  int32_t actMaxRarity; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  v4 = this;
  if ( (byte_4A00787 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B640C8(&EventMargeItemUpValInfo_TypeInfo, v9);
    sub_1B640C8(&EventPersonalMargeUpValInfo_TypeInfo, v10);
    sub_1B640C8(&System_Func_EventDropUpValInfo__int__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_1B640C8(&Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__72_0__, v19);
    this = (FollowerSelectItemListViewItem_o *)sub_1B640C8(&FollowerSelectItemListViewItem___c_TypeInfo, v20);
    byte_4A00787 = 1;
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.eventUpValItemList, 0, v2, v3);
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
      FollowerInfo__getEventUpVal_38601924(
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
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v4, v34);
          if ( !this )
            goto LABEL_73;
          sortValue1 = this->fields.sortValue1;
          sortStr1 = this->fields.sortStr1;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v95.fields.currentCryptoKey = sortValue1;
          *(_QWORD *)&v95.fields.fakeValue = sortStr1;
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v95, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v4, v38);
          if ( !this )
            goto LABEL_73;
          Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v4, v40);
          if ( !this )
            goto LABEL_73;
          v41 = this->fields.iconLabelInfo2;
          if ( !v41 )
            goto LABEL_73;
          this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                       *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v41[1].monitor,
                                                       0LL);
          if ( !Instance )
            goto LABEL_73;
          LODWORD(iconLabelInfo2) = PartyOrganizationUtility__IsRarityRestriction(
                                      (PartyOrganizationUtility_o *)Instance,
                                      &skillName,
                                      &actMaxRarity,
                                      v37,
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
        v42 = 0;
        *p_isEquipEventUpVal = 0;
      }
      else
      {
        v42 = *p_isEquipEventUpVal;
      }
      v4->fields.isEventUpVal = v42 || v4->fields.isServantEventUpVal;
      v43 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                           v30,
                                                           v31);
      System_Collections_Generic_List_object____ctor(
        v43,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = v4->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v48 = FollowerSelectItemListViewItem___c_TypeInfo;
        if ( !FollowerSelectItemListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItem___c_TypeInfo);
          v48 = FollowerSelectItemListViewItem___c_TypeInfo;
        }
        p_eventUpValItemList = (ServantStatusBattleListViewItem_o *)&v4->fields.eventUpValItemList;
        _9__72_0 = (System_Func_object__int__o *)v48->static_fields->__9__72_0;
        if ( !_9__72_0 )
        {
          if ( !v48->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v48);
            v48 = FollowerSelectItemListViewItem___c_TypeInfo;
          }
          v50 = (Il2CppObject *)v48->static_fields->__9;
          _9__72_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventDropUpValInfo__int__TypeInfo, v44, v45);
          System_Func_object__int____ctor(
            _9__72_0,
            v50,
            Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__72_0__,
            0LL);
          static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
          static_fields->__9__72_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__72_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__72_0, (int32_t)_9__72_0, v52, v53);
        }
        v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     dropList,
                                                                     (System_Func_TSource__TResult__o *)_9__72_0,
                                                                     (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v55 = System_Linq_Enumerable__Distinct_int_(
                v54,
                (const MethodInfo_2E57DA0 *)Method_System_Linq_Enumerable_Distinct_int___);
        this = (FollowerSelectItemListViewItem_o *)System_Linq_Enumerable__ToArray_int_(
                                                     v55,
                                                     (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
        actMaxRarity = 0;
        if ( this )
        {
          sortIndex = this->fields.sortIndex;
          v59 = this;
          if ( sortIndex >= 1 )
          {
            v60 = &EventPersonalMargeUpValInfo_TypeInfo;
            v61 = 0;
            v92 = v4;
            while ( 1 )
            {
              if ( v61 >= (unsigned int)sortIndex )
                goto LABEL_74;
              servantEntity = v4->fields.servantEntity;
              v63 = *((_DWORD *)&v59->fields.sortValue0 + v61);
              v64 = (EventPersonalMargeUpValInfo_o *)sub_1B64314(*v60, v56, v57);
              EventPersonalMargeUpValInfo___ctor(v64, v63, servantEntity, 0LL);
              this = (FollowerSelectItemListViewItem_o *)v4->fields.eventUpValInfo;
              if ( !this )
                goto LABEL_73;
              this = (FollowerSelectItemListViewItem_o *)EventUpValInfo__GetDropItemList(
                                                           (EventUpValInfo_o *)this,
                                                           0,
                                                           0LL);
              if ( !v64 )
                goto LABEL_73;
              EventPersonalMargeUpValInfo__Add(v64, (EventDropItemUpValInfo_array *)this, 0LL);
              this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__IsEmpty(v64, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__GetList(v64, 0LL);
                if ( !this )
                  goto LABEL_73;
                v66 = *(_QWORD *)&this->fields.sortIndex;
                v67 = this;
                if ( (int)v66 >= 1 )
                  break;
              }
LABEL_51:
              if ( !v4->fields.isNpc )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v4, v56);
                if ( this )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  this = (FollowerSelectItemListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
                  if ( !this )
                    goto LABEL_73;
                  v74 = (EventServantPointRankMaster_o *)this;
                  this = (FollowerSelectItemListViewItem_o *)EventServantPointRankMaster__IsEnableEvent(
                                                               (EventServantPointRankMaster_o *)this,
                                                               v63,
                                                               0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v4,
                                                                 v56);
                    if ( !this )
                      goto LABEL_73;
                    eventUpValItemList = (int32_t)this->fields.eventUpValItemList;
                    v77 = v4;
                    v78 = v60;
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v77,
                                                                 v75);
                    if ( !this )
                      goto LABEL_73;
                    v80 = this->fields.sortValue1;
                    v79 = this->fields.sortStr1;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v96.fields.currentCryptoKey = v80;
                    *(_QWORD *)&v96.fields.fakeValue = v79;
                    v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v96, 0LL);
                    EnableEntity = EventServantPointRankMaster__GetEnableEntity(v74, v63, eventUpValItemList, v81, 0LL);
                    v85 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
                    v60 = v78;
                    v86 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v83, v84);
                    EventMargeItemUpValInfo___ctor_38573000(v86, v63, 0LL);
                    v4 = v92;
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v92,
                                                                 v87);
                    if ( !this )
                      goto LABEL_73;
                    if ( !v86 )
                      goto LABEL_73;
                    EventMargeItemUpValInfo__SetServantPointInfo(
                      v86,
                      (int32_t)this->fields.eventUpValItemList,
                      v85,
                      1,
                      0LL);
                    if ( !v43 )
                      goto LABEL_73;
                    System_Collections_Generic_List_object___Insert(
                      v43,
                      0,
                      (Il2CppObject *)v86,
                      (const MethodInfo_34AE524 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                  }
                }
              }
              v61 = actMaxRarity + 1;
              actMaxRarity = v61;
              sortIndex = v59->fields.sortIndex;
              if ( v61 >= sortIndex )
                goto LABEL_70;
            }
            v68 = 0LL;
            while ( v68 < (unsigned int)v66 )
            {
              if ( !v43 )
                goto LABEL_73;
              v69 = (Il2CppObject *)*(&v67->fields.sortValue0 + v68);
              items = v43->fields._items;
              v71 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v43->fields._version;
              if ( !items )
                goto LABEL_73;
              size = v43->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v43,
                  v69,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
              }
              else
              {
                v73 = &items->obj.klass + size;
                v43->fields._size = size + 1;
                v73[4] = (Il2CppClass *)v69;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v73 + 4), (int32_t)v69, v57, v65);
              }
              LODWORD(v66) = v67->fields.sortIndex;
              if ( (__int64)++v68 >= (int)v66 )
                goto LABEL_51;
            }
LABEL_74:
            sub_1B6432C(this, v56);
          }
LABEL_70:
          if ( v43 )
          {
            v88 = System_Collections_Generic_List_object___ToArray(
                    v43,
                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
            p_eventUpValItemList->klass = (ServantStatusBattleListViewItem_c *)v88;
            sub_1B6406C(p_eventUpValItemList, (int32_t)v88, v89, v90);
            return;
          }
        }
      }
LABEL_73:
      sub_1B64324(this);
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
  const MethodInfo *v21; // x1
  int32_t SvtId; // w21
  const MethodInfo *v23; // x2
  __int64 *p_sortValue0; // x26
  int32_t priorityKind; // w23
  System_Collections_Generic_Dictionary_string__int__o *ValuesDictionary; // x22
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  int64_t v29; // x24
  struct System_String_o *v30; // x25
  int32_t Item; // w0
  const MethodInfo *v32; // x1
  int v33; // w8
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  signed int sortValue2; // w22
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  int64_t sortValue1B; // x22
  struct System_String_o *sortStr1; // x23
  System_String_o *v41; // x22
  System_String_o *v42; // x23
  int32_t MaxIndividualFilter; // w0
  int v44; // w25
  int32_t v45; // w24
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  int32_t Int_69085444; // w26
  const MethodInfo *v51; // x1
  int64_t v52; // x27
  struct System_String_o *v53; // x28
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  int32_t v58; // w26
  const MethodInfo *v59; // x1
  int64_t v60; // x27
  struct System_String_o *v61; // x28
  int32_t v62; // w3
  __int64 *v64; // x23
  __int64 v65; // x22
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  int sortValue2B_high; // w23
  const MethodInfo *v69; // x1
  int64_t v70; // x22
  int32_t v71; // w23
  __int64 v72; // x8
  __int64 v73; // x22
  const MethodInfo *v74; // x1
  int v75; // w23
  const MethodInfo *v76; // x1
  int64_t v77; // x22
  int32_t v78; // w23
  __int64 v79; // x8
  int v80; // w8
  IconLabelInfo_o *iconLabelInfo1; // x20
  FollowerInfo_o *v82; // x21
  struct QuestRestrictionInfo_o *v83; // x8
  int32_t v84; // w22
  int32_t v85; // w2
  FollowerInfo_o *v86; // x20
  struct QuestRestrictionInfo_o *v87; // x8
  int32_t v88; // w21
  int32_t v89; // w2
  int32_t index; // w8
  FollowerInfo_o *v91; // x22
  struct QuestRestrictionInfo_o *v92; // x8
  int32_t v93; // w23
  int32_t v94; // w21
  int32_t v95; // w2
  int64_t classIndex; // x8
  int64_t deckPriority; // x9
  __int64 v98; // x8
  FollowerInfo_o *v99; // x20
  struct QuestRestrictionInfo_o *v100; // x8
  int32_t v101; // w21
  int32_t v102; // w2
  FollowerInfo_o *v103; // x20
  struct QuestRestrictionInfo_o *v104; // x8
  int32_t v105; // w21
  int32_t v106; // w2
  int64_t v107; // x9
  IconLabelInfo_o *iconLabelInfo2; // x20
  FollowerInfo_o *v109; // x21
  struct QuestRestrictionInfo_o *v110; // x8
  int32_t v111; // w22
  __int64 v112; // x8
  FollowerInfo_o *v113; // x20
  struct QuestRestrictionInfo_o *v114; // x8
  int32_t v115; // w22
  int v116; // w21
  int32_t v117; // w2
  int32_t v118; // w2
  FollowerInfo_o *v119; // x20
  struct QuestRestrictionInfo_o *v120; // x8
  int32_t v121; // w22
  int v122; // w21
  int32_t v123; // w2
  IconLabelInfo_o *v124; // x20
  FollowerInfo_o *v125; // x22
  struct QuestRestrictionInfo_o *v126; // x8
  int32_t v127; // w23
  int32_t v128; // w2
  FollowerInfo_o *v129; // x22
  struct QuestRestrictionInfo_o *v130; // x8
  int32_t v131; // w23
  int32_t v132; // w2
  FollowerInfo_o *v133; // x22
  struct QuestRestrictionInfo_o *v134; // x8
  int32_t v135; // w23
  int32_t v136; // w21
  int32_t v137; // w2
  FollowerInfo_o *v138; // x22
  struct QuestRestrictionInfo_o *v139; // x8
  int32_t v140; // w23
  int32_t v141; // w2
  FollowerInfo_o *v142; // x23
  struct QuestRestrictionInfo_o *v143; // x8
  int32_t v144; // w24
  int32_t v145; // w22
  int32_t v146; // w2
  FollowerInfo_o *v147; // x23
  struct QuestRestrictionInfo_o *v148; // x8
  int32_t v149; // w24
  int32_t v150; // w2
  int32_t v151; // w4
  int32_t v152; // w1
  FollowerInfo_o *v153; // x22
  struct QuestRestrictionInfo_o *v154; // x8
  int32_t v155; // w23
  int32_t v156; // w21
  int32_t v157; // w2
  int64_t servantEntity; // x8
  _BOOL4 isQuestRestriction; // w9
  __int64 v160; // x10
  __int64 v161; // x11
  __int64 v162; // x9
  Il2CppObject *MasterData_object; // [xsp+8h] [xbp-78h]
  EventBonusFilterGroupMemberEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  int v165; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // 0:x0.16

  v4 = this;
  if ( (byte_4A00789 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, sort);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&ServantBonusFilterSelectMenu_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_1414/*"2"*/, v11);
    sub_1B640C8(&StringLiteral_3288/*"BonusFilterEquipId"*/, v12);
    sub_1B640C8(&StringLiteral_3290/*"BonusFilterGroupId"*/, v13);
    sub_1B640C8(&StringLiteral_1267/*"1"*/, v14);
    this = (FollowerSelectItemListViewItem_o *)sub_1B640C8(&StringLiteral_1213/*"0"*/, v15);
    byte_4A00789 = 1;
  }
  v165 = 0;
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
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v21);
    if ( this )
    {
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v34);
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
      if ( !FollowerSelectItemListViewItem__get_EquipInfo(v4, v35) )
        goto LABEL_53;
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v37);
      if ( !this )
        goto LABEL_198;
      sortStr1 = this->fields.sortStr1;
      sortValue1B = this->fields.sortValue1B;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v167.fields.currentCryptoKey = sortStr1;
      *(_QWORD *)&v167.fields.fakeValue = sortValue1B;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                   v167,
                                                   0LL);
      if ( (int)this < 1 )
        goto LABEL_53;
      if ( !sort )
        goto LABEL_198;
      if ( ListViewSort__GetFilter(sort, 41, 0LL) )
        goto LABEL_53;
      v41 = (System_String_o *)StringLiteral_3288/*"BonusFilterEquipId"*/;
      v42 = (System_String_o *)StringLiteral_3290/*"BonusFilterGroupId"*/;
      this = (FollowerSelectItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_198;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v165 = 0;
      if ( MaxIndividualFilter < 1 )
      {
LABEL_53:
        if ( FollowerSelectItemListViewItem__ChkWholeFilter(v4, sort, v38) )
          goto LABEL_9;
      }
      else
      {
        v44 = MaxIndividualFilter;
        v45 = type;
        while ( 1 )
        {
          v46 = System_Int32__ToString((int32_t)&v165, 0LL);
          v47 = System_String__Concat_61375396(v41, v46, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v47, 0LL) )
          {
            v48 = System_Int32__ToString((int32_t)&v165, 0LL);
            v49 = System_String__Concat_61375396(v41, v48, 0LL);
            Int_69085444 = UnityEngine_PlayerPrefs__GetInt_69085444(v49, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v51);
            if ( !this )
              goto LABEL_198;
            v53 = this->fields.sortStr1;
            v52 = this->fields.sortValue1B;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v168.fields.currentCryptoKey = v53;
            *(_QWORD *)&v168.fields.fakeValue = v52;
            type = v45;
            if ( Int_69085444 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v168, 0LL) )
              break;
          }
          v54 = System_Int32__ToString((int32_t)&v165, 0LL);
          v55 = System_String__Concat_61375396(v42, v54, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v55, 0LL) )
          {
            v56 = System_Int32__ToString((int32_t)&v165, 0LL);
            v57 = System_String__Concat_61375396(v42, v56, 0LL);
            v58 = UnityEngine_PlayerPrefs__GetInt_69085444(v57, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v59);
            if ( !this )
              goto LABEL_198;
            v61 = this->fields.sortStr1;
            v60 = this->fields.sortValue1B;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v169.fields.currentCryptoKey = v61;
            *(_QWORD *)&v169.fields.fakeValue = v60;
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v169, 0LL);
            this = (FollowerSelectItemListViewItem_o *)MasterData_object;
            if ( !MasterData_object )
              goto LABEL_198;
            type = v45;
            if ( EventBonusFilterGroupMemberMaster__TryGetEntity(
                   (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                   &entity,
                   v58,
                   v62,
                   0LL) )
            {
              return 0;
            }
          }
          if ( ++v165 >= v44 )
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
  ValuesDictionary = FollowerSelectItemListViewItem__GetValuesDictionary(v4, priorityKind, v23);
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v27);
  if ( this )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v28);
    if ( !this )
      goto LABEL_198;
    v30 = this->fields.sortStr1;
    v29 = this->fields.sortValue1B;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v166.fields.currentCryptoKey = v30;
    *(_QWORD *)&v166.fields.fakeValue = v29;
    this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                 v166,
                                                 0LL);
    if ( ValuesDictionary )
    {
      if ( (int)this >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v64 = &StringLiteral_1414/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_79;
            v64 = &StringLiteral_1213/*"0"*/;
          }
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                                                       (Il2CppObject *)*v64,
                                                       (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v65 = 100000LL
                * System_Collections_Generic_Dictionary_object__int___get_Item(
                    (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                    (Il2CppObject *)*v64,
                    (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v4->fields.sortValue0 = v65;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v66);
            if ( !this )
              goto LABEL_198;
            sortValue2B_high = HIDWORD(this->fields.sortValue2B);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v67);
            if ( !this )
              goto LABEL_198;
            v70 = v65 + 10LL * (*(_DWORD *)&this->fields.isTermination + sortValue2B_high);
            v4->fields.sortValue0 = v70;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v69);
            if ( !this )
              goto LABEL_198;
            v71 = this->fields.sortValue2;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v72 = v70 | (v71 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
            goto LABEL_78;
          }
        }
        else
        {
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                                                       (Il2CppObject *)StringLiteral_1213/*"0"*/,
                                                       (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                                                         (Il2CppObject *)StringLiteral_1267/*"1"*/,
                                                         (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                     (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                     (Il2CppObject *)StringLiteral_1213/*"0"*/,
                     (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                         (Il2CppObject *)StringLiteral_1267/*"1"*/,
                         (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v33 = 100000;
              }
              else
              {
                if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                       (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                       (Il2CppObject *)StringLiteral_1213/*"0"*/,
                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
                {
                  v73 = *p_sortValue0;
LABEL_70:
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v32);
                  if ( !this )
                    goto LABEL_198;
                  v75 = HIDWORD(this->fields.sortValue2B);
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v74);
                  if ( !this )
                    goto LABEL_198;
                  v77 = v73 + 10LL * (*(_DWORD *)&this->fields.isTermination + v75);
                  v4->fields.sortValue0 = v77;
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v76);
                  if ( !this )
                    goto LABEL_198;
                  v78 = this->fields.sortValue2;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( v78 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                    v72 = v77;
                  else
                    v72 = v77 + 1;
LABEL_78:
                  *p_sortValue0 = v72;
                  goto LABEL_79;
                }
                Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)ValuesDictionary,
                         (Il2CppObject *)StringLiteral_1267/*"1"*/,
                         (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v33 = 100000000;
              }
              v73 = Item * (__int64)v33;
              *p_sortValue0 = v73;
              goto LABEL_70;
            }
          }
        }
      }
    }
  }
LABEL_79:
  v79 = 56LL;
  if ( v4->fields._IsRecommendFollower_k__BackingField )
    v79 = 152LL;
  v80 = *(_DWORD *)((char *)&sort->klass + v79);
  if ( v80 == 11 )
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
      v82 = v4->fields.followerInfo;
      v83 = v4->fields.questRestrictionInfo;
      v84 = v4->fields.followerIndex;
      v4->fields.sortValue2 = v4->fields.deckPriority;
      v4->fields.sortValue2B = 1LL;
      if ( v83 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v83->fields.questId, 0LL);
        v85 = (int)this;
        if ( !v82 )
          goto LABEL_198;
      }
      else
      {
        v85 = 0;
        if ( !v82 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v82, v84, v85, 0LL);
      v91 = v4->fields.followerInfo;
      v92 = v4->fields.questRestrictionInfo;
      v93 = v4->fields.followerIndex;
      v94 = (int)this;
      if ( v92 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v92->fields.questId, 0LL);
        v95 = (int)this;
        if ( !v91 )
          goto LABEL_198;
      }
      else
      {
        v95 = 0;
        if ( !v91 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v91, v93, v95, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_198;
      IconLabelInfo__Set_37825360(iconLabelInfo1, 2, v94, (int32_t)this, 0, 0, 0, 0, 0LL);
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
        v98 = 5LL;
        goto LABEL_114;
      case 2:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v98 = 4LL;
        goto LABEL_114;
      case 3:
      case 4:
        goto LABEL_184;
      case 5:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v98 = 6LL;
LABEL_114:
        v4->fields.sortValue0B = v98;
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
    if ( v80 > 5 )
    {
      if ( v80 == 6 )
      {
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
        if ( v103 )
        {
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v103, v105, v106, 0LL);
          v119 = v4->fields.followerInfo;
          v120 = v4->fields.questRestrictionInfo;
          v121 = v4->fields.followerIndex;
          v122 = (int)this;
          if ( v120 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v120->fields.questId, 0LL);
            v123 = (int)this;
          }
          else
          {
            v123 = 0;
          }
          if ( v119 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v119, v121, v123, 0LL);
            v124 = v4->fields.iconLabelInfo1;
            v129 = v4->fields.followerInfo;
            v130 = v4->fields.questRestrictionInfo;
            v131 = v4->fields.followerIndex;
            v4->fields.sortValue1 = (int)this + v122;
            if ( v130 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v130->fields.questId, 0LL);
              v132 = (int)this;
            }
            else
            {
              v132 = 0;
            }
            if ( v129 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v129, v131, v132, 0LL);
              v138 = v4->fields.followerInfo;
              v139 = v4->fields.questRestrictionInfo;
              v140 = v4->fields.followerIndex;
              v136 = (int)this;
              if ( v139 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                             v139->fields.questId,
                                                             0LL);
                v141 = (int)this;
              }
              else
              {
                v141 = 0;
              }
              if ( v138 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustAtk(v138, v140, v141, 0LL);
                v147 = v4->fields.followerInfo;
                v148 = v4->fields.questRestrictionInfo;
                v149 = v4->fields.followerIndex;
                v145 = (int)this;
                if ( v148 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                               v148->fields.questId,
                                                               0LL);
                  v150 = (int)this;
                }
                else
                {
                  v150 = 0;
                }
                if ( v147 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v147, v149, v150, 0LL);
                  if ( v124 )
                  {
                    v151 = (int)this;
                    v152 = 5;
LABEL_173:
                    IconLabelInfo__Set_37825360(v124, v152, v136, v145, v151, 0, 0, 0, 0LL);
                    iconLabelInfo2 = v4->fields.iconLabelInfo2;
                    v109 = v4->fields.followerInfo;
                    v110 = v4->fields.questRestrictionInfo;
                    v111 = v4->fields.followerIndex;
                    if ( !v110 )
                    {
LABEL_174:
                      v118 = 0;
                      if ( !v109 )
                        goto LABEL_198;
                      goto LABEL_175;
                    }
LABEL_135:
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                 v110->fields.questId,
                                                                 0LL);
                    v118 = (int)this;
                    if ( !v109 )
                      goto LABEL_198;
LABEL_175:
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v109, v111, v118, 0LL);
                    v153 = v4->fields.followerInfo;
                    v154 = v4->fields.questRestrictionInfo;
                    v155 = v4->fields.followerIndex;
                    v156 = (int)this;
                    if ( v154 )
                    {
                      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                   v154->fields.questId,
                                                                   0LL);
                      v157 = (int)this;
                      if ( !v153 )
                        goto LABEL_198;
                    }
                    else
                    {
                      v157 = 0;
                      if ( !v153 )
                        goto LABEL_198;
                    }
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v153, v155, v157, 0LL);
                    if ( !iconLabelInfo2 )
                      goto LABEL_198;
                    IconLabelInfo__Set_37825360(iconLabelInfo2, 2, v156, (int32_t)this, 0, 0, 0, 0, 0LL);
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
                        v160 = 3LL;
                        v161 = 6LL;
                        goto LABEL_190;
                      case 2:
                        isQuestRestriction = v4->fields.isQuestRestriction;
                        v160 = 2LL;
                        v161 = 5LL;
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
                        v160 = 4LL;
                        v161 = 7LL;
LABEL_190:
                        servantEntity = (int)servantEntity;
                        if ( isQuestRestriction )
                          v162 = v160;
                        else
                          v162 = v161;
                        v4->fields.sortValue0B = v162;
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
        sub_1B64324(this);
      }
      if ( v80 != 29 )
        goto LABEL_120;
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      if ( !this )
        goto LABEL_198;
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetUseStatus((FollowerInfo_o *)this, 0LL);
    }
    else
    {
      if ( v80 != 3 )
      {
        if ( v80 == 5 )
        {
          v86 = v4->fields.followerInfo;
          v87 = v4->fields.questRestrictionInfo;
          v88 = v4->fields.followerIndex;
          if ( v87 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v87->fields.questId, 0LL);
            v89 = (int)this;
          }
          else
          {
            v89 = 0;
          }
          if ( v86 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v86, v88, v89, 0LL);
            v113 = v4->fields.followerInfo;
            v114 = v4->fields.questRestrictionInfo;
            v115 = v4->fields.followerIndex;
            v116 = (int)this;
            if ( v114 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v114->fields.questId, 0LL);
              v117 = (int)this;
            }
            else
            {
              v117 = 0;
            }
            if ( v113 )
            {
              this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v113, v115, v117, 0LL);
              v124 = v4->fields.iconLabelInfo1;
              v125 = v4->fields.followerInfo;
              v126 = v4->fields.questRestrictionInfo;
              v127 = v4->fields.followerIndex;
              v4->fields.sortValue1 = (int)this + v116;
              if ( v126 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                             v126->fields.questId,
                                                             0LL);
                v128 = (int)this;
              }
              else
              {
                v128 = 0;
              }
              if ( v125 )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v125, v127, v128, 0LL);
                v133 = v4->fields.followerInfo;
                v134 = v4->fields.questRestrictionInfo;
                v135 = v4->fields.followerIndex;
                v136 = (int)this;
                if ( v134 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                               v134->fields.questId,
                                                               0LL);
                  v137 = (int)this;
                }
                else
                {
                  v137 = 0;
                }
                if ( v133 )
                {
                  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustHp(v133, v135, v137, 0LL);
                  v142 = v4->fields.followerInfo;
                  v143 = v4->fields.questRestrictionInfo;
                  v144 = v4->fields.followerIndex;
                  v145 = (int)this;
                  if ( v143 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                                 v143->fields.questId,
                                                                 0LL);
                    v146 = (int)this;
                  }
                  else
                  {
                    v146 = 0;
                  }
                  if ( v142 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v142, v144, v146, 0LL);
                    if ( v124 )
                    {
                      v151 = (int)this;
                      v152 = 3;
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
        v107 = v4->fields.sortValue2;
        iconLabelInfo2 = v4->fields.iconLabelInfo1;
        v109 = v4->fields.followerInfo;
        v110 = v4->fields.questRestrictionInfo;
        v111 = v4->fields.followerIndex;
        goto LABEL_134;
      }
      v99 = v4->fields.followerInfo;
      v100 = v4->fields.questRestrictionInfo;
      v101 = v4->fields.followerIndex;
      if ( v100 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v100->fields.questId, 0LL);
        v102 = (int)this;
      }
      else
      {
        v102 = 0;
      }
      if ( !v99 )
        goto LABEL_198;
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v99, v101, v102, 0LL);
    }
    iconLabelInfo2 = v4->fields.iconLabelInfo1;
    v109 = v4->fields.followerInfo;
    v110 = v4->fields.questRestrictionInfo;
    v111 = v4->fields.followerIndex;
    v107 = (int)this;
LABEL_134:
    v4->fields.sortValue1 = v107;
    if ( !v110 )
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
      v112 = 2LL;
      goto LABEL_124;
    case 2:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v112 = 1LL;
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
      v112 = 3LL;
LABEL_124:
      v4->fields.sortValue0B = v112;
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
  FollowerInfo_o *v8; // x21
  struct QuestRestrictionInfo_o *v9; // x20
  int32_t v10; // w22
  int32_t v11; // w3
  FollowerInfo_o *v12; // x21
  struct QuestRestrictionInfo_o *v13; // x20
  int32_t v14; // w22
  int32_t v15; // w3
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

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
        v8 = this->fields.followerInfo;
        v9 = this->fields.questRestrictionInfo;
        v10 = this->fields.followerIndex;
        this->fields.isQuestRestriction = QuestRestriction & 1;
        if ( v9 )
        {
          QuestRestriction = FollowerInfo__GetReturnTypeByQuestId(v9->fields.questId, 0LL);
          v11 = QuestRestriction;
          if ( !v8 )
LABEL_16:
            sub_1B64324(QuestRestriction);
        }
        else
        {
          v11 = 0;
          if ( !v8 )
            goto LABEL_16;
        }
        QuestRestriction = FollowerInfo__getUniqueSvtRestriction(v8, v9, v10, v11, 0LL);
        v12 = this->fields.followerInfo;
        v13 = this->fields.questRestrictionInfo;
        v14 = this->fields.followerIndex;
        this->fields.isUniqueSvtRestriction = QuestRestriction & 1;
        if ( v13 )
        {
          QuestRestriction = FollowerInfo__GetReturnTypeByQuestId(v13->fields.questId, 0LL);
          v15 = QuestRestriction;
          if ( !v12 )
            goto LABEL_16;
        }
        else
        {
          v15 = 0;
          if ( !v12 )
            goto LABEL_16;
        }
        this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                          v12,
                                                          v13,
                                                          v14,
                                                          v15,
                                                          0LL);
        this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(
                                                            this,
                                                            v16);
        FollowerSelectItemListViewItem__SetEventUpInfo(this, v17);
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
    sub_1B64324(this);
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

  if ( (byte_4A0078A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18979/*"error"*/, method);
    byte_4A0078A = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    p_userName = &followerInfo->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18979/*"error"*/;
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

  if ( (byte_4A0078B & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    byte_4A0078B = 1;
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
    sub_1B64324(servantEntity);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F779F & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewItem___c_TypeInfo, v1);
    byte_49F779F = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(FollowerSelectItemListViewItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  FollowerSelectItemListViewItem___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewItem___c_o *)v3;
  sub_1B6406C(FollowerSelectItemListViewItem___c_TypeInfo->static_fields);
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
    sub_1B64324(this);
  return drop->fields.eventId;
}