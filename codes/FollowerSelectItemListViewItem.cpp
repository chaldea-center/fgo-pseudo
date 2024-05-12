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
        const MethodInfo *method)
{
  IconLabelInfo_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  IconLabelInfo_o *v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_Dictionary_int__int__o *v68; // x19
  const MethodInfo *v69; // x2

  if ( (byte_438E9D2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor___69331720);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B775C4(&IconLabelInfo_TypeInfo);
    byte_438E9D2 = 1;
  }
  v24 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo1 = v24;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v31, 0LL);
  this->fields.iconLabelInfo2 = v31;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  ListViewItem___ctor_24167012((ListViewItem_o *)this, index, 0LL);
  this->fields.friendPointUpVal = friendPointUpVal;
  this->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.isBonusFilterEnable = isBonusFilterEnable;
  this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
  this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
  this->fields.isRecommended = isRecommended;
  this->fields.setupInfo = setupInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.followerInfo = followerInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)followerInfo,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.classIndex = index2;
  this->fields._isRecommendedUser_k__BackingField = isRecommendedUser;
  this->fields.supportDeckId = supportDeckId;
  this->fields.deckPriority = deckPriority;
  if ( classBoardMaxNumDictionary )
  {
    v68 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_50234208(
      v68,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2FE8360 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___69331720);
  }
  else
  {
    v68 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v68;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v68,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields._IsReleasedClassBoard_k__BackingField = isReleasedClassBoard;
  FollowerSelectItemListViewItem__AnalyzeEntity(this, followerClassId, v69);
}


void __fastcall FollowerSelectItemListViewItem__AnalyzeEntity(
        FollowerSelectItemListViewItem_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *v25; // x8
  int64_t Index; // x0
  __int64 v27; // x1
  struct QuestRestrictionInfo_o *v28; // x8
  FollowerInfo_o *v29; // x23
  int32_t v30; // w20
  int32_t v31; // w2
  struct FollowerInfo_o *v32; // x8
  int32_t v33; // w20
  const MethodInfo *v34; // x1
  struct EventCampaignEntity_o *EnableFriendPointCampaign; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ServantEntity_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  FollowerInfo_o *v49; // x22
  struct QuestRestrictionInfo_o *v50; // x21
  int32_t followerIndex; // w23
  int32_t v52; // w3
  struct QuestRestrictionInfo_o *v53; // x8
  FollowerInfo_o *v54; // x22
  struct QuestRestrictionInfo_o *v55; // x21
  int32_t v56; // w23
  int32_t v57; // w3
  FollowerInfo_o *v58; // x22
  struct QuestRestrictionInfo_o *v59; // x21
  int32_t v60; // w23
  int32_t v61; // w3
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x1
  struct QuestRestrictionInfo_o *v64; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  struct QuestRestrictionInfo_o *v66; // x8
  int32_t v67; // w20
  struct FollowerInfo_o *v68; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v71; // w21
  unsigned int v72; // w24
  ClassBoardInfo_o *v73; // x22
  int32_t v74; // w8
  struct FollowerInfo_o *v75; // x8
  TblFriendMaster_o *v76; // x20
  int32_t type; // w9
  int32_t v78; // w1
  struct System_Int32_array *squareIds; // x8
  __int64 v80; // x0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438E9D3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E9D3 = 1;
  }
  entity = 0LL;
  this->fields.isNpc = 0;
  this->fields.followerClassId = followerClassId;
  this->fields.servantEntity = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&this->fields.isUniqueSvtRestriction = 0;
  *(_WORD *)&this->fields.isServantEventUpVal = 0;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValItemList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.eventUpValItemList, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.friendPointCampaignEntity = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntity, 0LL, v16, v17, v18, v19, v20, v21);
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
    v28 = this->fields.questRestrictionInfo;
    v29 = this->fields.followerInfo;
    v30 = Index;
    this->fields.followerIndex = Index;
    if ( v28 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v28->fields.questId, 0LL);
      v31 = Index;
      if ( !v29 )
        goto LABEL_88;
    }
    else
    {
      v31 = 0;
      if ( !v29 )
        goto LABEL_88;
    }
    Index = FollowerInfo__getSvtId(v29, v30, v31, 0LL);
    if ( (int)Index < 1 )
    {
      v53 = this->fields.questRestrictionInfo;
      if ( v53 )
        LOBYTE(v53) = v53->fields.isRestriction;
      this->fields.isQuestRestriction = (char)v53;
    }
    else
    {
      v32 = this->fields.followerInfo;
      if ( !v32 )
        goto LABEL_88;
      v33 = Index;
      this->fields.isNpc = Follower__IsNpc(v32->fields.type, 0LL);
      EnableFriendPointCampaign = FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(this, v34);
      this->fields.friendPointCampaignEntity = EnableFriendPointCampaign;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntity,
        (System_Int32_array **)EnableFriendPointCampaign,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      Index = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Index )
        goto LABEL_88;
      Index = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Index,
                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Index )
        goto LABEL_88;
      v42 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Index,
                                        v33,
                                        (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.servantEntity = v42;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.servantEntity,
        (System_Int32_array **)v42,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      v49 = this->fields.followerInfo;
      v50 = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( v50 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v50->fields.questId, 0LL);
        v52 = Index;
        if ( !v49 )
          goto LABEL_88;
      }
      else
      {
        v52 = 0;
        if ( !v49 )
          goto LABEL_88;
      }
      Index = FollowerInfo__getQuestRestriction(v49, v50, followerIndex, v52, 0LL);
      v54 = this->fields.followerInfo;
      v55 = this->fields.questRestrictionInfo;
      v56 = this->fields.followerIndex;
      this->fields.isQuestRestriction = Index & 1;
      if ( v55 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v55->fields.questId, 0LL);
        v57 = Index;
        if ( !v54 )
          goto LABEL_88;
      }
      else
      {
        v57 = 0;
        if ( !v54 )
          goto LABEL_88;
      }
      Index = FollowerInfo__getUniqueSvtRestriction(v54, v55, v56, v57, 0LL);
      v58 = this->fields.followerInfo;
      v59 = this->fields.questRestrictionInfo;
      v60 = this->fields.followerIndex;
      this->fields.isUniqueSvtRestriction = Index & 1;
      if ( v59 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v59->fields.questId, 0LL);
        v61 = Index;
        if ( !v58 )
          goto LABEL_88;
      }
      else
      {
        v61 = 0;
        if ( !v58 )
          goto LABEL_88;
      }
      this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                        v58,
                                                        v59,
                                                        v60,
                                                        v61,
                                                        0LL);
      this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v62);
      FollowerSelectItemListViewItem__SetEventUpInfo(this, v63);
      v64 = this->fields.questRestrictionInfo;
      if ( v64 && v64->fields.isDataLostBattle )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Index = NetworkManager__get_UserId(0LL);
        v66 = this->fields.questRestrictionInfo;
        if ( !v66 || !Master_WarQuestSelectionMaster )
          goto LABEL_88;
        if ( UserEventDataLostMaster__TryGetEntity(
               (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
               &entity,
               Index,
               v66->fields.dataLostBattleId,
               0LL) )
        {
          Index = (int64_t)entity;
          if ( !entity )
            goto LABEL_88;
          Index = UserEventDataLostEntity__IsRestart(entity, v33, 0LL);
          if ( !entity )
            goto LABEL_88;
          if ( (Index & 1) != 0 )
          {
            this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(entity, v33, 0LL);
          }
          else if ( UserEventDataLostEntity__IsDataLost(entity, v33, 0LL) )
          {
            this->fields._IsDataLost_k__BackingField = 1;
          }
        }
      }
      if ( this->fields.classBoardMaxNumDictionary )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Index = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !Index )
          goto LABEL_88;
        Index = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Index,
                           v33,
                           (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Index )
          goto LABEL_88;
        v67 = *(_DWORD *)(Index + 80);
        Index = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        if ( !Index )
          goto LABEL_88;
        Index = ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Index, v67, 0LL);
        v68 = this->fields.followerInfo;
        if ( !v68 )
          goto LABEL_88;
        userClassBoardInfo = v68->fields.userClassBoardInfo;
        if ( !userClassBoardInfo )
          goto LABEL_88;
        max_length = userClassBoardInfo->max_length;
        if ( max_length < 1 )
        {
LABEL_68:
          this->fields._OpenClassBoardNum_k__BackingField = 0;
          if ( !this )
            goto LABEL_88;
          v74 = 0;
          LODWORD(Index) = -1;
        }
        else
        {
          v71 = Index;
          v72 = 0;
          while ( 1 )
          {
            if ( v72 >= max_length )
            {
              v80 = sub_B776C8(Index);
              sub_B77668(v80, 0LL);
            }
            v73 = userClassBoardInfo->m_Items[v72];
            if ( !v73 )
              goto LABEL_88;
            if ( v73->fields.classBoardBaseId == v71 )
            {
              Index = (int64_t)this->fields.classBoardMaxNumDictionary;
              if ( !Index )
                goto LABEL_88;
              Index = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                        (System_Collections_Generic_Dictionary_int__int__o *)Index,
                        v71,
                        (const MethodInfo_2FE8FD4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
              if ( (Index & 1) != 0 )
              {
                Index = ClassBoardInfo__IsReleasedClassId(v73, v67, 0LL);
                if ( (Index & 1) != 0 )
                  break;
              }
            }
            max_length = userClassBoardInfo->max_length;
            if ( (int)++v72 >= max_length )
              goto LABEL_68;
          }
          Index = (int64_t)this->fields.classBoardMaxNumDictionary;
          if ( !Index )
            goto LABEL_88;
          Index = System_Collections_Generic_Dictionary_int__int___get_Item(
                    (System_Collections_Generic_Dictionary_int__int__o *)Index,
                    v71,
                    (const MethodInfo_2FE8CB0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          squareIds = v73->fields.squareIds;
          if ( !squareIds )
            goto LABEL_88;
          v74 = squareIds->max_length;
          this->fields._OpenClassBoardNum_k__BackingField = v74;
        }
        this->fields._IsMaxOpenClassBoard_k__BackingField = v74 >= (int)Index && (int)Index > 0;
      }
    }
    Index = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Index )
    {
      Index = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Index,
                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      v75 = this->fields.followerInfo;
      if ( v75 )
      {
        v76 = (TblFriendMaster_o *)Index;
        if ( v75->fields.type == 5
          || Index
          && (Index = TblFriendMaster__isMessageDisp((TblFriendMaster_o *)Index, 3, v75->fields.userId, 0LL),
              v75 = this->fields.followerInfo,
              this->fields.isMessageDisp = Index & 1,
              v75) )
        {
          type = v75->fields.type;
          if ( (type | 4) == 5 )
          {
            if ( !v76 )
              goto LABEL_88;
            if ( type == 5 )
              v78 = 9;
            else
              v78 = 3;
            this->fields.isLockUser = TblFriendMaster__IsLockUser(v76, v78, v75->fields.userId, 0LL);
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
LABEL_88:
    sub_B7769C(Index, v27);
  }
  v25 = this->fields.questRestrictionInfo;
  this->fields.followerIndex = 0;
  if ( v25 )
    LOBYTE(v25) = v25->fields.isRestriction;
  this->fields.isQuestRestriction = (char)v25;
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
  if ( (byte_438E9D4 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    this = (FollowerSelectItemListViewItem_o *)sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_438E9D4 = 1;
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
      goto LABEL_32;
  }
  else
  {
    v6 = 0;
    if ( !followerInfo )
      goto LABEL_32;
  }
  if ( FollowerInfo__IsSlotRestriction(followerInfo, questRestrictionInfo, followerIndex, v6, 0LL) )
    return 1;
  this = (FollowerSelectItemListViewItem_o *)v2->fields.questRestrictionInfo;
  if ( !this )
    goto LABEL_32;
  if ( QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)this, 0LL) )
    return 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_32;
  sortValue1 = this->fields.sortValue1;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_32;
  v7 = 0;
  if ( sortValue1 < 1 || v2->fields.isNpc )
    return v7;
  if ( !v2->fields.questRestrictionInfo )
    goto LABEL_32;
  sortValue1_high = HIDWORD(this->fields.sortValue1);
  this = (FollowerSelectItemListViewItem_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_34477588(
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
    if ( !v11 )
      goto LABEL_32;
  }
  else
  {
    v14 = 0;
    if ( !v11 )
      goto LABEL_32;
  }
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getServantLeaderInfo(v11, v13, v14, 0LL);
  if ( !this )
    goto LABEL_32;
  v15 = (ServantLeaderInfo_o *)this;
  v16 = v2->fields.questRestrictionInfo;
  v18 = this->fields.sortValue1;
  sortStr1 = this->fields.sortStr1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v18;
  *(_QWORD *)&v22.fields.fakeValue = sortStr1;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v22, 0LL);
  limitCount = v15->fields.limitCount;
  v21 = v19;
  this = (FollowerSelectItemListViewItem_o *)ServantLeaderInfo__getDispLimitCount(v15, 0LL);
  if ( !v16 )
LABEL_32:
    sub_B7769C(this, method);
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
    sub_B7769C(this, 0LL);
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
  FollowerInfo_o *followerInfo; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w3
  BalanceConfig_c *v11; // x0
  SkillInfo_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438E9DD & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&SkillInfo___TypeInfo);
    byte_438E9DD = 1;
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
    return 1;
  }
  else
  {
    v11 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    v12 = (SkillInfo_array *)sub_B775DC(
                               SkillInfo___TypeInfo,
                               (unsigned int)v11->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v12;
    sub_B77560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
    return 0;
  }
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
  EventCampaignEntity_o *v11; // x12
  struct System_Int32_array *targetIds; // x15
  __int64 v13; // x14
  __int64 v14; // x16
  int32_t *v15; // x15
  __int64 v16; // x0

  if ( !this->fields.friendPointCampaignEntityList )
    return 0LL;
  SvtId = FollowerSelectItemListViewItem__get_SvtId(this, method);
  if ( (int)SvtId < 1 )
    return 0LL;
  friendPointCampaignEntityList = this->fields.friendPointCampaignEntityList;
  if ( !friendPointCampaignEntityList )
LABEL_29:
    sub_B7769C(SvtId, v4);
  max_length = friendPointCampaignEntityList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
      {
        v16 = sub_B776C8(SvtId);
        sub_B77668(v16, 0LL);
      }
      v11 = friendPointCampaignEntityList->m_Items[v7];
      if ( !v11 )
        goto LABEL_29;
      targetIds = v11->fields.targetIds;
      if ( targetIds && (v13 = *(_QWORD *)&targetIds->max_length) != 0 )
      {
        if ( !this->fields.isNpc && (!v8 || v11->fields.idx > v8->fields.idx) && (int)v13 >= 1 )
        {
          v14 = 0LL;
          v15 = &targetIds->m_Items[1];
          while ( v15[v14] != (_DWORD)SvtId )
          {
            if ( (int)++v14 >= (int)v13 )
              goto LABEL_22;
          }
          v8 = friendPointCampaignEntityList->m_Items[v7];
        }
      }
      else if ( !v9 || v11->fields.idx > v9->fields.idx )
      {
        goto LABEL_23;
      }
LABEL_22:
      v11 = v9;
LABEL_23:
      ++v7;
      v9 = v11;
      if ( v7 >= max_length )
        goto LABEL_26;
    }
  }
  v11 = 0LL;
  v8 = 0LL;
LABEL_26:
  if ( v8 )
    return v8;
  else
    return v11;
}


System_String_o *__fastcall FollowerSelectItemListViewItem__GetFriendPointCampaignName(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  System_String_o *v7; // x19
  Il2CppObject *v8; // x0
  int v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438E9DC & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_6530/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/);
    byte_438E9DC = 1;
  }
  if ( !this->fields.friendPointCampaignEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_6530/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, 0LL);
  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( !friendPointCampaignEntity )
    sub_B7769C(v3, v4);
  v7 = v3;
  v10 = friendPointCampaignEntity->fields.value / 1000;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v5);
  return System_String__Format(v7, v8, 0LL);
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
    sub_B7769C(FriendPointUpVal, v9);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_438E9DB & 1) == 0 )
  {
    sub_B775C4(&TreasureDvcInfo_TypeInfo);
    byte_438E9DB = 1;
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
    v9 = (TreasureDvcInfo_o *)sub_B77694(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_B77560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438E9DA & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&SkillInfo___TypeInfo);
    byte_438E9DA = 1;
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
    return 1;
  }
  else
  {
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = (SkillInfo_array *)sub_B775DC(SkillInfo___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
    *skillInfoList = v10;
    sub_B77560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    return 0;
  }
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
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x19
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v12; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v13; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  SkillLvMaster_o *v15; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x21
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v19; // x22
  unsigned __int64 v20; // x24
  int v21; // w26
  int max_length; // w8
  int32_t v23; // w2
  unsigned int v24; // w9
  ServantSkillEntity_o *v25; // x10
  SkillLvEntity_o *v26; // x8
  unsigned __int64 v27; // x28
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v29; // x9
  int age; // w8
  unsigned __int64 v31; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_string__int__c **v33; // x8
  System_Collections_Generic_Dictionary_string__int__o *v34; // x23
  __int64 v35; // x0
  WarEntity_o *v36; // [xsp+0h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_438E9D6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&StringLiteral_1180/*"3"*/);
    byte_438E9D6 = 1;
  }
  v36 = 0LL;
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
      goto LABEL_77;
    keys = result->fields.keys;
    values = result->fields.values;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v38.fields.currentCryptoKey = keys;
    *(_QWORD *)&v38.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v38, 0LL) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v11);
      if ( !result )
        goto LABEL_77;
      v13 = result->fields.keys;
      v12 = result->fields.values;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v39.fields.currentCryptoKey = v13;
      *(_QWORD *)&v39.fields.fakeValue = v12;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                         v39,
                                                                         0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      ServantSkillList = ServantSkillMaster__getServantSkillList(Master_WarQuestSelectionMaster, (int32_t)result, 0LL);
      v15 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v17);
      if ( !result )
        goto LABEL_77;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_77;
      entries = result->fields.entries;
      v19 = result;
      if ( (int)entries >= 1 )
      {
        v20 = 0LL;
        v21 = kind - 1;
        while ( 1 )
        {
          if ( v20 >= (unsigned int)entries )
            goto LABEL_78;
          if ( !ServantSkillList )
            goto LABEL_77;
          max_length = ServantSkillList->max_length;
          v23 = *(&v19->fields.count + v20);
          if ( max_length >= 1 )
          {
            v24 = 0;
            while ( v24 < max_length )
            {
              v25 = ServantSkillList->m_Items[v24];
              if ( !v25 )
                goto LABEL_77;
              if ( v25->fields.skillId == v23 && v25->fields.eventId > 0 )
                goto LABEL_74;
              if ( (int)++v24 >= max_length )
                goto LABEL_30;
            }
LABEL_78:
            v35 = sub_B776C8(result);
            sub_B77668(v35, 0LL);
          }
LABEL_30:
          if ( !v15 )
            goto LABEL_77;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             v15,
                                                                             &entity,
                                                                             v23,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_74:
          LODWORD(entries) = v19->fields.entries;
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
              goto LABEL_74;
            if ( v27 >= v29 )
              goto LABEL_78;
            if ( v16 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                 v16,
                                                                                 &v36,
                                                                                 funcId->m_Items[v27 + 1],
                                                                                 (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v21 )
                {
                  case 0:
                    if ( !v36 )
                      goto LABEL_77;
                    age = (int)v36->fields.age;
                    if ( age != 104 && age != 123 )
                      break;
                    goto LABEL_55;
                  case 1:
                    if ( !v36 )
                      goto LABEL_77;
                    if ( LODWORD(v36->fields.age) != 101 )
                      break;
                    goto LABEL_55;
                  case 2:
                    if ( !v36 )
                      goto LABEL_77;
                    if ( LODWORD(v36->fields.age) != 112 )
                      break;
                    goto LABEL_55;
                  case 3:
                    if ( !v36 )
                      goto LABEL_77;
                    if ( LODWORD(v36->fields.age) == 111 )
                      goto LABEL_55;
                    break;
                  case 4:
                    if ( !v36 )
                      goto LABEL_77;
                    if ( (LODWORD(v36->fields.age) | 8) != 110 )
                      break;
                    goto LABEL_55;
                  case 5:
                    if ( !v36 )
                      goto LABEL_77;
                    if ( LODWORD(v36->fields.age) != 106 )
                      break;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_77;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_77;
                    entries_low = LODWORD(result->fields.entries);
                    if ( (__int64)v27 > (int)entries_low )
                      break;
                    if ( v27 >= entries_low )
                      goto LABEL_78;
                    v33 = &result->klass + v27;
                    v34 = (System_Collections_Generic_Dictionary_string__int__o *)v33[4];
                    if ( !v34 )
                      break;
                    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v33[4],
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_1180/*"3"*/,
                           (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                         v34,
                                                                                         (System_String_o *)StringLiteral_1180/*"3"*/,
                                                                                         (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( (_DWORD)result )
                        break;
                    }
LABEL_55:
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_77;
                    result = SkillLvEntity__GetFollowerValsDictionary(entity, 0LL);
                    if ( result )
                      return result;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_77;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_77;
                    v31 = LODWORD(result->fields.entries);
                    if ( (__int64)v27 >= (int)v31 )
                      break;
                    if ( v27 >= v31 )
                      goto LABEL_78;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields.count
                                                                                     + v27);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_55;
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
LABEL_77:
        sub_B7769C(result, v7);
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
        sub_B7769C(this, *(_QWORD *)&friendPointUpVal);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FollowerSelectItemListViewItem_o *v8; // x19
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  FollowerInfo_o *followerInfo; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventUpValSetupInfo_o *v13; // x23
  int32_t followerIndex; // w24
  int32_t v15; // w6
  bool *p_isEquipEventUpVal; // x21
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  struct IconLabelInfo_o *iconLabelInfo2; // x8
  PartyOrganizationUtility_o *v20; // x22
  const MethodInfo *v21; // x1
  struct System_String_o *sortStr1; // x23
  int64_t sortValue1; // x24
  int32_t v24; // w23
  const MethodInfo *v25; // x1
  int32_t Rarity; // w24
  const MethodInfo *v27; // x1
  struct IconLabelInfo_o *v28; // x8
  bool v29; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  FollowerSelectItemListViewItem___c_c *v33; // x0
  struct FollowerSelectItemListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__68_0; // x23
  Il2CppObject *v36; // x24
  struct FollowerSelectItemListViewItem___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  int32_t sortIndex; // w9
  FollowerSelectItemListViewItem_o *v47; // x22
  DataManager_c **v48; // x27
  int32_t v49; // w8
  DataManager_c *v50; // x0
  EventServantPointRankMaster_o *v51; // x24
  int32_t eventUpValItemList; // w25
  DataManager_c **v53; // x28
  struct System_String_o *v54; // x26
  int64_t v55; // x27
  int32_t v56; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v58; // w24
  EventMargeItemUpValInfo_o *v59; // x25
  const MethodInfo *v60; // x1
  ServantEntity_o *servantEntity; // x25
  int32_t v62; // w23
  EventPersonalMargeUpValInfo_o *v63; // x24
  __int64 v64; // x8
  FollowerSelectItemListViewItem_o *v65; // x24
  unsigned __int64 v66; // x25
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x0
  BattleServantConfConponent_o *p_eventUpValItemList; // [xsp+8h] [xbp-68h]
  int32_t actMaxRarity; // [xsp+14h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  v8 = this;
  if ( (byte_438E9D5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&EventMargeItemUpValInfo_TypeInfo);
    sub_B775C4(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_B775C4(&Method_System_Func_EventDropUpValInfo__int___ctor__);
    sub_B775C4(&System_Func_EventDropUpValInfo__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__68_0__);
    this = (FollowerSelectItemListViewItem_o *)sub_B775C4(&FollowerSelectItemListViewItem___c_TypeInfo);
    byte_438E9D5 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  setupInfo = v8->fields.setupInfo;
  if ( setupInfo )
  {
    eventIdList = setupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_76;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      *(_WORD *)&v8->fields.isServantEventUpVal = 0;
      v8->fields.isEventUpVal = 0;
      v8->fields.eventUpValItemList = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&v8->fields.eventUpValItemList, 0LL, v2, v3, v4, v5, v6, v7);
      followerInfo = v8->fields.followerInfo;
      v13 = v8->fields.setupInfo;
      questRestrictionInfo = v8->fields.questRestrictionInfo;
      followerIndex = v8->fields.followerIndex;
      if ( questRestrictionInfo )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                     questRestrictionInfo->fields.questId,
                                                     0LL);
        v15 = (int)this;
        if ( !followerInfo )
          goto LABEL_76;
      }
      else
      {
        v15 = 0;
        if ( !followerInfo )
          goto LABEL_76;
      }
      p_isEquipEventUpVal = &v8->fields.isEquipEventUpVal;
      FollowerInfo__getEventUpVal_22375804(
        followerInfo,
        &v8->fields.eventUpValInfo,
        &v8->fields.isServantEventUpVal,
        &v8->fields.isEquipEventUpVal,
        v13,
        followerIndex,
        v15,
        0LL);
      if ( !v8->fields.isServantBonusFilterEnable )
        v8->fields.isServantEventUpVal = 0;
      if ( FollowerSelectItemListViewItem__get_ServantLeader(v8, v17) )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v18);
        if ( !this )
          goto LABEL_76;
        iconLabelInfo2 = this->fields.iconLabelInfo2;
        if ( iconLabelInfo2 )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          v20 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v21);
          if ( !this )
            goto LABEL_76;
          sortValue1 = this->fields.sortValue1;
          sortStr1 = this->fields.sortStr1;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v78.fields.currentCryptoKey = sortValue1;
          *(_QWORD *)&v78.fields.fakeValue = sortStr1;
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v78, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v25);
          if ( !this )
            goto LABEL_76;
          Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v27);
          if ( !this )
            goto LABEL_76;
          v28 = this->fields.iconLabelInfo2;
          if ( !v28 )
            goto LABEL_76;
          this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                       *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v28[1].monitor,
                                                       0LL);
          if ( !v20 )
            goto LABEL_76;
          LODWORD(iconLabelInfo2) = PartyOrganizationUtility__IsRarityRestriction(
                                      v20,
                                      &skillName,
                                      &actMaxRarity,
                                      v24,
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
      if ( (unsigned int)iconLabelInfo2 | !v8->fields.isServantEquipBonusFilterEnable )
      {
        v29 = 0;
        *p_isEquipEventUpVal = 0;
      }
      else
      {
        v29 = *p_isEquipEventUpVal;
      }
      v8->fields.isEventUpVal = v29 || v8->fields.isServantEventUpVal;
      v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v30,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = v8->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v33 = FollowerSelectItemListViewItem___c_TypeInfo;
        if ( (BYTE3(FollowerSelectItemListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerSelectItemListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItem___c_TypeInfo);
          v33 = FollowerSelectItemListViewItem___c_TypeInfo;
        }
        static_fields = v33->static_fields;
        p_eventUpValItemList = (BattleServantConfConponent_o *)&v8->fields.eventUpValItemList;
        _9__68_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__68_0;
        if ( !_9__68_0 )
        {
          if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v33);
            static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
          }
          v36 = (Il2CppObject *)static_fields->__9;
          _9__68_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__68_0,
            v36,
            Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__68_0__,
            (const MethodInfo_29E9E70 *)Method_System_Func_EventDropUpValInfo__int___ctor__);
          v37 = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
          v37->__9__68_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__68_0;
          sub_B77560(
            (BattleServantConfConponent_o *)&v37->__9__68_0,
            (System_Int32_array **)_9__68_0,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
        }
        v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                     dropList,
                                                                     (System_Func_TSource__TResult__o *)_9__68_0,
                                                                     (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v45 = System_Linq_Enumerable__Distinct_int_(
                v44,
                (const MethodInfo_1D2E540 *)Method_System_Linq_Enumerable_Distinct_int___);
        this = (FollowerSelectItemListViewItem_o *)System_Linq_Enumerable__ToArray_int_(
                                                     v45,
                                                     (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
        actMaxRarity = 0;
        if ( this )
        {
          sortIndex = this->fields.sortIndex;
          v47 = this;
          if ( sortIndex >= 1 )
          {
            v48 = &DataManager_TypeInfo;
            v49 = 0;
            while ( 1 )
            {
              if ( v49 >= (unsigned int)sortIndex )
                goto LABEL_77;
              servantEntity = v8->fields.servantEntity;
              v62 = *((_DWORD *)&v47->fields.sortValue0 + v49);
              v63 = (EventPersonalMargeUpValInfo_o *)sub_B77694(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v63, v62, servantEntity, 0LL);
              this = (FollowerSelectItemListViewItem_o *)v8->fields.eventUpValInfo;
              if ( !this )
                goto LABEL_76;
              this = (FollowerSelectItemListViewItem_o *)EventUpValInfo__GetDropItemList(
                                                           (EventUpValInfo_o *)this,
                                                           0,
                                                           0LL);
              if ( !v63 )
                goto LABEL_76;
              EventPersonalMargeUpValInfo__Add(v63, (EventDropItemUpValInfo_array *)this, 0LL);
              this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__IsEmpty(v63, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__GetList(v63, 0LL);
                if ( !this )
                  goto LABEL_76;
                v64 = *(_QWORD *)&this->fields.sortIndex;
                v65 = this;
                if ( (int)v64 >= 1 )
                  break;
              }
LABEL_71:
              if ( !v8->fields.isNpc )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, method);
                if ( this )
                {
                  v50 = *v48;
                  if ( (BYTE3((*v48)->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v50);
                  this = (FollowerSelectItemListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
                  if ( !this )
                    goto LABEL_76;
                  v51 = (EventServantPointRankMaster_o *)this;
                  this = (FollowerSelectItemListViewItem_o *)EventServantPointRankMaster__IsEnableEvent(
                                                               (EventServantPointRankMaster_o *)this,
                                                               v62,
                                                               0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v8,
                                                                 method);
                    if ( !this )
                      goto LABEL_76;
                    eventUpValItemList = (int32_t)this->fields.eventUpValItemList;
                    v53 = v48;
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v8,
                                                                 method);
                    if ( !this )
                      goto LABEL_76;
                    v55 = this->fields.sortValue1;
                    v54 = this->fields.sortStr1;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    *(_QWORD *)&v79.fields.currentCryptoKey = v55;
                    *(_QWORD *)&v79.fields.fakeValue = v54;
                    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v79, 0LL);
                    EnableEntity = EventServantPointRankMaster__GetEnableEntity(v51, v62, eventUpValItemList, v56, 0LL);
                    v58 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
                    v48 = v53;
                    v59 = (EventMargeItemUpValInfo_o *)sub_B77694(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_27730672(v59, v62, 0LL);
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v8,
                                                                 v60);
                    if ( !this )
                      goto LABEL_76;
                    if ( !v59 )
                      goto LABEL_76;
                    EventMargeItemUpValInfo__SetServantPointInfo(
                      v59,
                      (int32_t)this->fields.eventUpValItemList,
                      v58,
                      1,
                      0LL);
                    if ( !v30 )
                      goto LABEL_76;
                    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v30,
                      0,
                      (XWeaponTrail_Element_o *)v59,
                      (const MethodInfo_30544AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                  }
                }
              }
              v49 = actMaxRarity + 1;
              actMaxRarity = v49;
              sortIndex = v47->fields.sortIndex;
              if ( v49 >= sortIndex )
                goto LABEL_73;
            }
            v66 = 0LL;
            while ( v66 < (unsigned int)v64 )
            {
              if ( !v30 )
                goto LABEL_76;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v30,
                *((EventMissionProgressRequest_Argument_ProgressData_o **)&v65->fields.sortValue0 + v66),
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
              LODWORD(v64) = v65->fields.sortIndex;
              if ( (__int64)++v66 >= (int)v64 )
                goto LABEL_71;
            }
LABEL_77:
            v74 = sub_B776C8(this);
            sub_B77668(v74, 0LL);
          }
LABEL_73:
          if ( v30 )
          {
            v67 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                           (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
            p_eventUpValItemList->klass = (BattleServantConfConponent_c *)v67;
            sub_B77560(p_eventUpValItemList, v67, v68, v69, v70, v71, v72, v73);
            return;
          }
        }
      }
LABEL_76:
      sub_B7769C(this, method);
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
  int32_t Int_36337364; // w26
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
  int32_t sortKind; // w8
  IconLabelInfo_o *iconLabelInfo1; // x20
  FollowerInfo_o *v62; // x21
  struct QuestRestrictionInfo_o *v63; // x8
  int32_t v64; // w22
  int32_t v65; // w2
  FollowerInfo_o *v66; // x20
  struct QuestRestrictionInfo_o *v67; // x8
  int32_t v68; // w21
  int32_t v69; // w2
  int32_t index; // w8
  FollowerInfo_o *v71; // x22
  struct QuestRestrictionInfo_o *v72; // x8
  int32_t v73; // w23
  int32_t v74; // w21
  int32_t v75; // w2
  int64_t classIndex; // x8
  int64_t deckPriority; // x9
  __int64 v78; // x8
  FollowerInfo_o *v79; // x20
  struct QuestRestrictionInfo_o *v80; // x8
  int32_t v81; // w21
  int32_t v82; // w2
  FollowerInfo_o *v83; // x20
  struct QuestRestrictionInfo_o *v84; // x8
  int32_t v85; // w21
  int32_t v86; // w2
  int64_t v87; // x9
  IconLabelInfo_o *iconLabelInfo2; // x20
  FollowerInfo_o *v89; // x21
  struct QuestRestrictionInfo_o *v90; // x8
  int32_t v91; // w22
  __int64 v92; // x8
  int32_t v93; // w2
  FollowerInfo_o *v94; // x20
  struct QuestRestrictionInfo_o *v95; // x8
  int32_t v96; // w22
  int v97; // w21
  int32_t v98; // w2
  FollowerInfo_o *v99; // x20
  struct QuestRestrictionInfo_o *v100; // x8
  int32_t v101; // w22
  int v102; // w21
  int32_t v103; // w2
  IconLabelInfo_o *v104; // x20
  FollowerInfo_o *v105; // x22
  struct QuestRestrictionInfo_o *v106; // x8
  int32_t v107; // w23
  int32_t v108; // w2
  FollowerInfo_o *v109; // x22
  struct QuestRestrictionInfo_o *v110; // x8
  int32_t v111; // w23
  int32_t v112; // w2
  FollowerInfo_o *v113; // x22
  struct QuestRestrictionInfo_o *v114; // x8
  int32_t v115; // w23
  int32_t v116; // w21
  int32_t v117; // w2
  FollowerInfo_o *v118; // x22
  struct QuestRestrictionInfo_o *v119; // x8
  int32_t v120; // w23
  int32_t v121; // w2
  FollowerInfo_o *v122; // x23
  struct QuestRestrictionInfo_o *v123; // x8
  int32_t v124; // w24
  int32_t v125; // w22
  int32_t v126; // w2
  FollowerInfo_o *v127; // x23
  struct QuestRestrictionInfo_o *v128; // x8
  int32_t v129; // w24
  int32_t v130; // w2
  int32_t v131; // w4
  int32_t v132; // w1
  FollowerInfo_o *v133; // x22
  struct QuestRestrictionInfo_o *v134; // x8
  int32_t v135; // w23
  int32_t v136; // w21
  int32_t v137; // w2
  int64_t servantEntity; // x8
  _BOOL4 isQuestRestriction; // w9
  __int64 v140; // x10
  __int64 v141; // x11
  __int64 v142; // x9
  EventBonusFilterGroupMemberMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-68h]
  EventBonusFilterGroupMemberEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int v145; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16

  v4 = this;
  if ( (byte_438E9D7 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1131/*"2"*/);
    sub_B775C4(&StringLiteral_2947/*"BonusFilterEquipId"*/);
    sub_B775C4(&StringLiteral_2949/*"BonusFilterGroupId"*/);
    sub_B775C4(&StringLiteral_1033/*"1"*/);
    this = (FollowerSelectItemListViewItem_o *)sub_B775C4(&StringLiteral_980/*"0"*/);
    byte_438E9D7 = 1;
  }
  v145 = 0;
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
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
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
        goto LABEL_59;
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v22);
      if ( !this )
        goto LABEL_198;
      sortStr1 = this->fields.sortStr1;
      sortValue1B = this->fields.sortValue1B;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v147.fields.currentCryptoKey = sortStr1;
      *(_QWORD *)&v147.fields.fakeValue = sortValue1B;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                   v147,
                                                   0LL);
      if ( (int)this < 1 )
        goto LABEL_59;
      if ( !sort )
        goto LABEL_198;
      if ( ListViewSort__GetFilter(sort, 41, 0LL) )
        goto LABEL_59;
      v26 = (System_String_o *)StringLiteral_2947/*"BonusFilterEquipId"*/;
      v27 = (System_String_o *)StringLiteral_2949/*"BonusFilterGroupId"*/;
      this = (FollowerSelectItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_198;
      MasterData_WarQuestSelectionMaster = (EventBonusFilterGroupMemberMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    (DataManager_o *)this,
                                                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      }
      MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v145 = 0;
      if ( MaxIndividualFilter < 1 )
      {
LABEL_59:
        if ( FollowerSelectItemListViewItem__ChkWholeFilter(v4, sort, v23) )
          goto LABEL_9;
      }
      else
      {
        v29 = MaxIndividualFilter;
        v30 = type;
        while ( 1 )
        {
          v31 = System_Int32__ToString((int32_t)&v145, 0LL);
          v32 = System_String__Concat_44901936(v26, v31, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v32, 0LL) )
          {
            v33 = System_Int32__ToString((int32_t)&v145, 0LL);
            v34 = System_String__Concat_44901936(v26, v33, 0LL);
            Int_36337364 = UnityEngine_PlayerPrefs__GetInt_36337364(v34, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v36);
            if ( !this )
              goto LABEL_198;
            v38 = this->fields.sortStr1;
            v37 = this->fields.sortValue1B;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v148.fields.currentCryptoKey = v38;
            *(_QWORD *)&v148.fields.fakeValue = v37;
            type = v30;
            if ( Int_36337364 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v148, 0LL) )
              break;
          }
          v39 = System_Int32__ToString((int32_t)&v145, 0LL);
          v40 = System_String__Concat_44901936(v27, v39, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v40, 0LL) )
          {
            v41 = System_Int32__ToString((int32_t)&v145, 0LL);
            v42 = System_String__Concat_44901936(v27, v41, 0LL);
            v43 = UnityEngine_PlayerPrefs__GetInt_36337364(v42, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v44);
            if ( !this )
              goto LABEL_198;
            v46 = this->fields.sortStr1;
            v45 = this->fields.sortValue1B;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v149.fields.currentCryptoKey = v46;
            *(_QWORD *)&v149.fields.fakeValue = v45;
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v149, 0LL);
            this = (FollowerSelectItemListViewItem_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_198;
            type = v30;
            if ( EventBonusFilterGroupMemberMaster__TryGetEntity(
                   MasterData_WarQuestSelectionMaster,
                   &entity,
                   v43,
                   v47,
                   0LL) )
            {
              return 0;
            }
          }
          if ( ++v145 >= v29 )
            goto LABEL_59;
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
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v146.fields.currentCryptoKey = v17;
    *(_QWORD *)&v146.fields.fakeValue = v16;
    this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                 v146,
                                                 0LL);
    if ( ValuesDictionary )
    {
      if ( (int)this >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v49 = &StringLiteral_1131/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_87;
            v49 = &StringLiteral_980/*"0"*/;
          }
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                                                       (System_Xml_XmlQualifiedName_o *)*v49,
                                                       (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v50 = 100000LL
                * System_Collections_Generic_Dictionary_string__int___get_Item(
                    ValuesDictionary,
                    (System_String_o *)*v49,
                    (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v4->fields.sortValue0 = v50;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v51);
            if ( this )
            {
              sortValue2B_high = HIDWORD(this->fields.sortValue2B);
              this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                           v4,
                                                           (const MethodInfo *)sort);
              if ( this )
              {
                v53 = v50 + 10LL * (*(_DWORD *)&this->fields.isTermination + sortValue2B_high);
                v4->fields.sortValue0 = v53;
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                             v4,
                                                             (const MethodInfo *)sort);
                if ( this )
                {
                  v54 = this->fields.sortValue2;
                  this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  v55 = v53 | (v54 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_86;
                }
              }
            }
LABEL_198:
            sub_B7769C(this, sort);
          }
        }
        else
        {
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                                                       (System_Xml_XmlQualifiedName_o *)StringLiteral_980/*"0"*/,
                                                       (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_1033/*"1"*/,
                                                         (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_980/*"0"*/,
                     (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                         ValuesDictionary,
                         (System_String_o *)StringLiteral_1033/*"1"*/,
                         (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v20 = 100000;
              }
              else
              {
                if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                       ValuesDictionary,
                       (System_String_o *)StringLiteral_980/*"0"*/,
                       (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
                {
                  v56 = *p_sortValue0;
                  goto LABEL_77;
                }
                Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                         ValuesDictionary,
                         (System_String_o *)StringLiteral_1033/*"1"*/,
                         (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v20 = 100000000;
              }
              v56 = Item * (__int64)v20;
              *p_sortValue0 = v56;
LABEL_77:
              this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v19);
              if ( this )
              {
                v57 = HIDWORD(this->fields.sortValue2B);
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                             v4,
                                                             (const MethodInfo *)sort);
                if ( this )
                {
                  v58 = v56 + 10LL * (*(_DWORD *)&this->fields.isTermination + v57);
                  v4->fields.sortValue0 = v58;
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                               v4,
                                                               (const MethodInfo *)sort);
                  if ( this )
                  {
                    v59 = this->fields.sortValue2;
                    this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    }
                    if ( v59 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                      v55 = v58;
                    else
                      v55 = v58 + 1;
LABEL_86:
                    *p_sortValue0 = v55;
                    goto LABEL_87;
                  }
                }
              }
              goto LABEL_198;
            }
          }
        }
      }
    }
  }
LABEL_87:
  sortKind = sort->fields.sortKind;
  if ( sortKind == 11 )
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
      v62 = v4->fields.followerInfo;
      v63 = v4->fields.questRestrictionInfo;
      v64 = v4->fields.followerIndex;
      v4->fields.sortValue2 = v4->fields.deckPriority;
      v4->fields.sortValue2B = 1LL;
      if ( v63 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v63->fields.questId, 0LL);
        v65 = (int)this;
        if ( !v62 )
          goto LABEL_198;
      }
      else
      {
        v65 = 0;
        if ( !v62 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v62, v64, v65, 0LL);
      v71 = v4->fields.followerInfo;
      v72 = v4->fields.questRestrictionInfo;
      v73 = v4->fields.followerIndex;
      v74 = (int)this;
      if ( v72 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v72->fields.questId, 0LL);
        v75 = (int)this;
        if ( !v71 )
          goto LABEL_198;
      }
      else
      {
        v75 = 0;
        if ( !v71 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v71, v73, v75, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_198;
      IconLabelInfo__Set_28141596(iconLabelInfo1, 2, v74, (int32_t)this, 0, 0, 0, 0, 0LL);
    }
    classIndex = v4->fields.classIndex;
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
        v78 = 5LL;
        goto LABEL_117;
      case 2:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v78 = 4LL;
        goto LABEL_117;
      case 3:
      case 4:
        goto LABEL_185;
      case 5:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v78 = 6LL;
LABEL_117:
        v4->fields.sortValue0B = v78;
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
    if ( sortKind == 6 )
    {
      v79 = v4->fields.followerInfo;
      v80 = v4->fields.questRestrictionInfo;
      v81 = v4->fields.followerIndex;
      if ( v80 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v80->fields.questId, 0LL);
        v82 = (int)this;
        if ( !v79 )
          goto LABEL_198;
      }
      else
      {
        v82 = 0;
        if ( !v79 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v79, v81, v82, 0LL);
      v94 = v4->fields.followerInfo;
      v95 = v4->fields.questRestrictionInfo;
      v96 = v4->fields.followerIndex;
      v97 = (int)this;
      if ( v95 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v95->fields.questId, 0LL);
        v98 = (int)this;
        if ( !v94 )
          goto LABEL_198;
      }
      else
      {
        v98 = 0;
        if ( !v94 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v94, v96, v98, 0LL);
      v104 = v4->fields.iconLabelInfo1;
      v105 = v4->fields.followerInfo;
      v106 = v4->fields.questRestrictionInfo;
      v107 = v4->fields.followerIndex;
      v4->fields.sortValue1 = (int)this + v97;
      if ( v106 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v106->fields.questId, 0LL);
        v108 = (int)this;
        if ( !v105 )
          goto LABEL_198;
      }
      else
      {
        v108 = 0;
        if ( !v105 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v105, v107, v108, 0LL);
      v113 = v4->fields.followerInfo;
      v114 = v4->fields.questRestrictionInfo;
      v115 = v4->fields.followerIndex;
      v116 = (int)this;
      if ( v114 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v114->fields.questId, 0LL);
        v117 = (int)this;
        if ( !v113 )
          goto LABEL_198;
      }
      else
      {
        v117 = 0;
        if ( !v113 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustAtk(v113, v115, v117, 0LL);
      v122 = v4->fields.followerInfo;
      v123 = v4->fields.questRestrictionInfo;
      v124 = v4->fields.followerIndex;
      v125 = (int)this;
      if ( v123 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v123->fields.questId, 0LL);
        v126 = (int)this;
        if ( !v122 )
          goto LABEL_198;
      }
      else
      {
        v126 = 0;
        if ( !v122 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v122, v124, v126, 0LL);
      if ( !v104 )
        goto LABEL_198;
      v131 = (int)this;
      v132 = 5;
    }
    else
    {
      if ( sortKind != 5 )
      {
        if ( sortKind == 3 )
        {
          v66 = v4->fields.followerInfo;
          v67 = v4->fields.questRestrictionInfo;
          v68 = v4->fields.followerIndex;
          if ( v67 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v67->fields.questId, 0LL);
            v69 = (int)this;
            if ( !v66 )
              goto LABEL_198;
          }
          else
          {
            v69 = 0;
            if ( !v66 )
              goto LABEL_198;
          }
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v66, v68, v69, 0LL);
          iconLabelInfo2 = v4->fields.iconLabelInfo1;
          v89 = v4->fields.followerInfo;
          v90 = v4->fields.questRestrictionInfo;
          v91 = v4->fields.followerIndex;
          v87 = (int)this;
        }
        else
        {
          v87 = v4->fields.sortValue2;
          iconLabelInfo2 = v4->fields.iconLabelInfo1;
          v89 = v4->fields.followerInfo;
          v90 = v4->fields.questRestrictionInfo;
          v91 = v4->fields.followerIndex;
        }
        v4->fields.sortValue1 = v87;
        if ( v90 )
        {
LABEL_134:
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v90->fields.questId, 0LL);
          v93 = (int)this;
          if ( !v89 )
            goto LABEL_198;
LABEL_176:
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v89, v91, v93, 0LL);
          v133 = v4->fields.followerInfo;
          v134 = v4->fields.questRestrictionInfo;
          v135 = v4->fields.followerIndex;
          v136 = (int)this;
          if ( v134 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v134->fields.questId, 0LL);
            v137 = (int)this;
            if ( !v133 )
              goto LABEL_198;
          }
          else
          {
            v137 = 0;
            if ( !v133 )
              goto LABEL_198;
          }
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v133, v135, v137, 0LL);
          if ( !iconLabelInfo2 )
            goto LABEL_198;
          IconLabelInfo__Set_28141596(iconLabelInfo2, 2, v136, (int32_t)this, 0, 0, 0, 0, 0LL);
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
              v140 = 3LL;
              v141 = 6LL;
              goto LABEL_190;
            case 2:
              isQuestRestriction = v4->fields.isQuestRestriction;
              v140 = 2LL;
              v141 = 5LL;
              goto LABEL_190;
            case 3:
            case 4:
LABEL_185:
              index = v4->fields.index;
              v4->fields.sortValue0 = 1000000000000LL;
              v4->fields.sortValue1 = 0LL;
              goto LABEL_186;
            case 5:
              isQuestRestriction = v4->fields.isQuestRestriction;
              v140 = 4LL;
              v141 = 7LL;
LABEL_190:
              servantEntity = (int)servantEntity;
              if ( isQuestRestriction )
                v142 = v140;
              else
                v142 = v141;
              v4->fields.sortValue0B = v142;
              goto LABEL_194;
            default:
              goto LABEL_195;
          }
        }
LABEL_175:
        v93 = 0;
        if ( !v89 )
          goto LABEL_198;
        goto LABEL_176;
      }
      v83 = v4->fields.followerInfo;
      v84 = v4->fields.questRestrictionInfo;
      v85 = v4->fields.followerIndex;
      if ( v84 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v84->fields.questId, 0LL);
        v86 = (int)this;
        if ( !v83 )
          goto LABEL_198;
      }
      else
      {
        v86 = 0;
        if ( !v83 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v83, v85, v86, 0LL);
      v99 = v4->fields.followerInfo;
      v100 = v4->fields.questRestrictionInfo;
      v101 = v4->fields.followerIndex;
      v102 = (int)this;
      if ( v100 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v100->fields.questId, 0LL);
        v103 = (int)this;
        if ( !v99 )
          goto LABEL_198;
      }
      else
      {
        v103 = 0;
        if ( !v99 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v99, v101, v103, 0LL);
      v104 = v4->fields.iconLabelInfo1;
      v109 = v4->fields.followerInfo;
      v110 = v4->fields.questRestrictionInfo;
      v111 = v4->fields.followerIndex;
      v4->fields.sortValue1 = (int)this + v102;
      if ( v110 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v110->fields.questId, 0LL);
        v112 = (int)this;
        if ( !v109 )
          goto LABEL_198;
      }
      else
      {
        v112 = 0;
        if ( !v109 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v109, v111, v112, 0LL);
      v118 = v4->fields.followerInfo;
      v119 = v4->fields.questRestrictionInfo;
      v120 = v4->fields.followerIndex;
      v116 = (int)this;
      if ( v119 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v119->fields.questId, 0LL);
        v121 = (int)this;
        if ( !v118 )
          goto LABEL_198;
      }
      else
      {
        v121 = 0;
        if ( !v118 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustHp(v118, v120, v121, 0LL);
      v127 = v4->fields.followerInfo;
      v128 = v4->fields.questRestrictionInfo;
      v129 = v4->fields.followerIndex;
      v125 = (int)this;
      if ( v128 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v128->fields.questId, 0LL);
        v130 = (int)this;
        if ( !v127 )
          goto LABEL_198;
      }
      else
      {
        v130 = 0;
        if ( !v127 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v127, v129, v130, 0LL);
      if ( !v104 )
        goto LABEL_198;
      v131 = (int)this;
      v132 = 3;
    }
    IconLabelInfo__Set_28141596(v104, v132, v116, v125, v131, 0, 0, 0, 0LL);
    iconLabelInfo2 = v4->fields.iconLabelInfo2;
    v89 = v4->fields.followerInfo;
    v90 = v4->fields.questRestrictionInfo;
    v91 = v4->fields.followerIndex;
    if ( v90 )
      goto LABEL_134;
    goto LABEL_175;
  }
  this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo1;
  if ( !this )
    goto LABEL_198;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  switch ( type )
  {
    case 1:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v92 = 2LL;
      goto LABEL_129;
    case 2:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v92 = 1LL;
      goto LABEL_129;
    case 3:
    case 4:
      index = v4->fields.index;
      v4->fields.sortValue0 = 1000000000000LL;
LABEL_186:
      servantEntity = -index;
LABEL_194:
      v4->fields.sortValue2 = servantEntity;
      break;
    case 5:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v92 = 3LL;
LABEL_129:
      v4->fields.sortValue0B = v92;
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
            sub_B7769C(QuestRestriction, v8);
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
    sub_B7769C(this, method);
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

  if ( (byte_438E9D8 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18762/*"error"*/);
    byte_438E9D8 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    p_userName = &followerInfo->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18762/*"error"*/;
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

  if ( (byte_438E9D9 & 1) == 0 )
  {
    sub_B775C4(&ImageLimitCount_TypeInfo);
    byte_438E9D9 = 1;
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
LABEL_22:
    sub_B7769C(servantEntity, v5);
  }
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v5);
  if ( !servantEntity )
    goto LABEL_22;
  v4 = (System_String_o *)*((_QWORD *)servantEntity + 31);
  if ( !System_String__IsNullOrEmpty(v4, 0LL) )
    return v4;
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v7);
  if ( !servantEntity )
    goto LABEL_22;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)servantEntity, 0LL);
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v9);
  if ( !servantEntity )
    goto LABEL_22;
  v10 = *((_DWORD *)servantEntity + 16);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  servantEntity = (void *)ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, v10, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_22;
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
  struct FollowerSelectItemListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_438808D & 1) == 0 )
  {
    sub_B775C4(&FollowerSelectItemListViewItem___c_TypeInfo);
    byte_438808D = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(FollowerSelectItemListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FollowerSelectItemListViewItem___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall FollowerSelectItemListViewItem___c___ctor(
        FollowerSelectItemListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewItem___c___SetEventUpInfo_b__68_0(
        FollowerSelectItemListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_B7769C(this, 0LL);
  return drop->fields.eventId;
}