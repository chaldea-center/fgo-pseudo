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
        const MethodInfo *method)
{
  __int64 v24; // x1
  __int64 v25; // x1
  IconLabelInfo_o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  IconLabelInfo_o *v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_Dictionary_int__int__o *v73; // x19
  const MethodInfo *v74; // x2

  if ( (byte_421755E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor___67820832, *(_QWORD *)&index);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v24);
    sub_B0D8A4(&IconLabelInfo_TypeInfo, v25);
    byte_421755E = 1;
  }
  v26 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, *(_QWORD *)&index, *(_QWORD *)&index2);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v35 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v33, v34);
  IconLabelInfo___ctor(v35, 0LL);
  this->fields.iconLabelInfo2 = v35;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.friendPointUpVal = friendPointUpVal;
  this->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.isBonusFilterEnable = isBonusFilterEnable;
  this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
  this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
  this->fields.isRecommended = isRecommended;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.followerInfo = followerInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)followerInfo,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.classIndex = index2;
  this->fields._isRecommendedUser_k__BackingField = isRecommendedUser;
  this->fields.supportDeckId = supportDeckId;
  this->fields.deckPriority = deckPriority;
  if ( classBoardMaxNumDictionary )
  {
    v73 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v66,
                                                                 v67);
    System_Collections_Generic_Dictionary_int__int____ctor_48664132(
      v73,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2E68E44 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___67820832);
  }
  else
  {
    v73 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v73;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v73,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  this->fields._IsReleasedClassBoard_k__BackingField = isReleasedClassBoard;
  FollowerSelectItemListViewItem__AnalyzeEntity(this, followerClassId, v74);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *v35; // x8
  int64_t Index; // x0
  struct QuestRestrictionInfo_o *v37; // x8
  FollowerInfo_o *v38; // x23
  int32_t v39; // w20
  int32_t v40; // w2
  struct FollowerInfo_o *v41; // x8
  int32_t v42; // w20
  const MethodInfo *v43; // x1
  struct EventCampaignEntity_o *EnableFriendPointCampaign; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct ServantEntity_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  FollowerInfo_o *v58; // x22
  struct QuestRestrictionInfo_o *v59; // x21
  int32_t followerIndex; // w23
  int32_t v61; // w3
  struct QuestRestrictionInfo_o *v62; // x8
  FollowerInfo_o *v63; // x22
  struct QuestRestrictionInfo_o *v64; // x21
  int32_t v65; // w23
  int32_t v66; // w3
  FollowerInfo_o *v67; // x22
  struct QuestRestrictionInfo_o *v68; // x21
  int32_t v69; // w23
  int32_t v70; // w3
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x1
  struct QuestRestrictionInfo_o *v73; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  struct QuestRestrictionInfo_o *v75; // x8
  int32_t v76; // w21
  int32_t ClassBoardBaseId; // w20
  int32_t v78; // w8
  struct FollowerInfo_o *v79; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x21
  int max_length; // w8
  unsigned int v82; // w22
  ClassBoardInfo_o *v83; // x24
  struct FollowerInfo_o *v84; // x8
  TblFriendMaster_o *v85; // x20
  int32_t type; // w9
  int32_t v87; // w1
  struct System_Int32_array *squareIds; // x8
  __int64 v89; // x0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421755F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&followerClassId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblFriendMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v17);
    sub_B0D8A4(&NetworkManager_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_421755F = 1;
  }
  entity = 0LL;
  this->fields.isNpc = 0;
  this->fields.followerClassId = followerClassId;
  this->fields.servantEntity = 0LL;
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.eventUpValItemList, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.friendPointCampaignEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntity, 0LL, v26, v27, v28, v29, v30, v31);
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
    v37 = this->fields.questRestrictionInfo;
    v38 = this->fields.followerInfo;
    v39 = Index;
    this->fields.followerIndex = Index;
    if ( v37 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v37->fields.questId, 0LL);
      v40 = Index;
      if ( !v38 )
        goto LABEL_91;
    }
    else
    {
      v40 = 0;
      if ( !v38 )
        goto LABEL_91;
    }
    Index = FollowerInfo__getSvtId(v38, v39, v40, 0LL);
    if ( (int)Index < 1 )
    {
      v62 = this->fields.questRestrictionInfo;
      if ( v62 )
        LOBYTE(v62) = v62->fields.isRestriction;
      this->fields.isQuestRestriction = (char)v62;
      goto LABEL_74;
    }
    v41 = this->fields.followerInfo;
    if ( !v41 )
      goto LABEL_91;
    v42 = Index;
    this->fields.isNpc = Follower__IsNpc(v41->fields.type, 0LL);
    EnableFriendPointCampaign = FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(this, v43);
    this->fields.friendPointCampaignEntity = EnableFriendPointCampaign;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntity,
      (System_Int32_array **)EnableFriendPointCampaign,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    Index = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Index )
      goto LABEL_91;
    Index = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Index,
                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Index )
      goto LABEL_91;
    v51 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Index,
                                      v42,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = v51;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.servantEntity,
      (System_Int32_array **)v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    v58 = this->fields.followerInfo;
    v59 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( v59 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v59->fields.questId, 0LL);
      v61 = Index;
      if ( !v58 )
        goto LABEL_91;
    }
    else
    {
      v61 = 0;
      if ( !v58 )
        goto LABEL_91;
    }
    Index = FollowerInfo__getQuestRestriction(v58, v59, followerIndex, v61, 0LL);
    v63 = this->fields.followerInfo;
    v64 = this->fields.questRestrictionInfo;
    v65 = this->fields.followerIndex;
    this->fields.isQuestRestriction = Index & 1;
    if ( v64 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v64->fields.questId, 0LL);
      v66 = Index;
      if ( !v63 )
        goto LABEL_91;
    }
    else
    {
      v66 = 0;
      if ( !v63 )
        goto LABEL_91;
    }
    Index = FollowerInfo__getUniqueSvtRestriction(v63, v64, v65, v66, 0LL);
    v67 = this->fields.followerInfo;
    v68 = this->fields.questRestrictionInfo;
    v69 = this->fields.followerIndex;
    this->fields.isUniqueSvtRestriction = Index & 1;
    if ( v68 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v68->fields.questId, 0LL);
      v70 = Index;
      if ( !v67 )
        goto LABEL_91;
    }
    else
    {
      v70 = 0;
      if ( !v67 )
        goto LABEL_91;
    }
    this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                      v67,
                                                      v68,
                                                      v69,
                                                      v70,
                                                      0LL);
    this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v71);
    FollowerSelectItemListViewItem__SetEventUpInfo(this, v72);
    v73 = this->fields.questRestrictionInfo;
    if ( v73 && v73->fields.isDataLostBattle )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Index = NetworkManager__get_UserId(0LL);
      v75 = this->fields.questRestrictionInfo;
      if ( !v75 || !Master_WarQuestSelectionMaster )
        goto LABEL_91;
      if ( UserEventDataLostMaster__TryGetEntity(
             (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
             &entity,
             Index,
             v75->fields.dataLostBattleId,
             0LL) )
      {
        Index = (int64_t)entity;
        if ( !entity )
          goto LABEL_91;
        Index = UserEventDataLostEntity__IsRestart(entity, v42, 0LL);
        if ( !entity )
          goto LABEL_91;
        if ( (Index & 1) != 0 )
        {
          this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(entity, v42, 0LL);
        }
        else if ( UserEventDataLostEntity__IsDataLost(entity, v42, 0LL) )
        {
          this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    if ( !this->fields.classBoardMaxNumDictionary )
      goto LABEL_74;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Index = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Index )
      goto LABEL_91;
    Index = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Index,
                       v42,
                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Index )
      goto LABEL_91;
    v76 = *(_DWORD *)(Index + 80);
    Index = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !Index )
      goto LABEL_91;
    ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Index, v76, 0LL);
    Index = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !Index )
      goto LABEL_91;
    Index = ClassBoardClassMaster__IsInvalidClass((ClassBoardClassMaster_o *)Index, v76, 0LL);
    if ( (Index & 1) != 0 )
    {
      v78 = 0;
      LODWORD(Index) = -1;
    }
    else
    {
      v79 = this->fields.followerInfo;
      if ( !v79 )
        goto LABEL_91;
      userClassBoardInfo = v79->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_91;
      max_length = userClassBoardInfo->max_length;
      if ( max_length < 1 )
      {
LABEL_71:
        this->fields._OpenClassBoardNum_k__BackingField = 0;
        if ( !this )
          goto LABEL_91;
        v78 = 0;
        LODWORD(Index) = -1;
        goto LABEL_73;
      }
      v82 = 0;
      while ( 1 )
      {
        if ( v82 >= max_length )
        {
          v89 = sub_B0D9A8(Index);
          sub_B0D948(v89, 0LL);
        }
        v83 = userClassBoardInfo->m_Items[v82];
        if ( !v83 )
          goto LABEL_91;
        if ( v83->fields.classBoardBaseId == ClassBoardBaseId )
        {
          Index = (int64_t)this->fields.classBoardMaxNumDictionary;
          if ( !Index )
            goto LABEL_91;
          Index = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_int__int__o *)Index,
                    ClassBoardBaseId,
                    (const MethodInfo_2E69AB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
          if ( (Index & 1) != 0 )
            break;
        }
        max_length = userClassBoardInfo->max_length;
        if ( (int)++v82 >= max_length )
          goto LABEL_71;
      }
      Index = (int64_t)this->fields.classBoardMaxNumDictionary;
      if ( !Index )
        goto LABEL_91;
      Index = System_Collections_Generic_Dictionary_int__int___get_Item(
                (System_Collections_Generic_Dictionary_int__int__o *)Index,
                ClassBoardBaseId,
                (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      squareIds = v83->fields.squareIds;
      if ( !squareIds )
        goto LABEL_91;
      v78 = squareIds->max_length;
    }
    this->fields._OpenClassBoardNum_k__BackingField = v78;
LABEL_73:
    this->fields._IsMaxOpenClassBoard_k__BackingField = v78 >= (int)Index && (int)Index > 0;
LABEL_74:
    Index = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Index )
    {
      Index = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Index,
                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      v84 = this->fields.followerInfo;
      if ( v84 )
      {
        v85 = (TblFriendMaster_o *)Index;
        if ( v84->fields.type == 5
          || Index
          && (Index = TblFriendMaster__isMessageDisp((TblFriendMaster_o *)Index, 3, v84->fields.userId, 0LL),
              v84 = this->fields.followerInfo,
              this->fields.isMessageDisp = Index & 1,
              v84) )
        {
          type = v84->fields.type;
          if ( (type | 4) == 5 )
          {
            if ( !v85 )
              goto LABEL_91;
            if ( type == 5 )
              v87 = 9;
            else
              v87 = 3;
            this->fields.isLockUser = TblFriendMaster__IsLockUser(v85, v87, v84->fields.userId, 0LL);
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
LABEL_91:
    sub_B0D97C(Index);
  }
  v35 = this->fields.questRestrictionInfo;
  this->fields.followerIndex = 0;
  if ( v35 )
    LOBYTE(v35) = v35->fields.isRestriction;
  this->fields.isQuestRestriction = (char)v35;
}


bool __fastcall FollowerSelectItemListViewItem__CheckSlotRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerInfo_o *followerInfo; // x21
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t followerIndex; // w22
  int32_t v8; // w3
  bool v9; // w8
  int sortValue1; // w21
  int32_t sortValue1_high; // w20
  FollowerInfo_o *v13; // x21
  struct QuestRestrictionInfo_o *v14; // x8
  int32_t v15; // w22
  int32_t v16; // w2
  ServantLeaderInfo_o *v17; // x21
  QuestRestrictionInfo_o *v18; // x19
  struct System_String_o *sortStr1; // x22
  int64_t v20; // x23
  int32_t v21; // w0
  int32_t limitCount; // w22
  int32_t v23; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v2 = this;
  if ( (byte_4217560 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    this = (FollowerSelectItemListViewItem_o *)sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v4);
    byte_4217560 = 1;
  }
  followerInfo = v2->fields.followerInfo;
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  followerIndex = v2->fields.followerIndex;
  if ( questRestrictionInfo )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                 questRestrictionInfo->fields.questId,
                                                 0LL);
    v8 = (int)this;
    if ( !followerInfo )
      goto LABEL_32;
  }
  else
  {
    v8 = 0;
    if ( !followerInfo )
      goto LABEL_32;
  }
  if ( FollowerInfo__IsSlotRestriction(followerInfo, questRestrictionInfo, followerIndex, v8, 0LL) )
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
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_32;
  sortValue1 = this->fields.sortValue1;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_32;
  v9 = 0;
  if ( sortValue1 < 1 || v2->fields.isNpc )
    return v9;
  if ( !v2->fields.questRestrictionInfo )
    goto LABEL_32;
  sortValue1_high = HIDWORD(this->fields.sortValue1);
  this = (FollowerSelectItemListViewItem_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(
                                               v2->fields.questRestrictionInfo,
                                               sortValue1_high,
                                               0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v13 = v2->fields.followerInfo;
  v14 = v2->fields.questRestrictionInfo;
  v15 = v2->fields.followerIndex;
  if ( v14 )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v14->fields.questId, 0LL);
    v16 = (int)this;
    if ( !v13 )
      goto LABEL_32;
  }
  else
  {
    v16 = 0;
    if ( !v13 )
      goto LABEL_32;
  }
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getServantLeaderInfo(v13, v15, v16, 0LL);
  if ( !this )
    goto LABEL_32;
  v17 = (ServantLeaderInfo_o *)this;
  v18 = v2->fields.questRestrictionInfo;
  v20 = this->fields.sortValue1;
  sortStr1 = this->fields.sortStr1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v20;
  *(_QWORD *)&v24.fields.fakeValue = sortStr1;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v24, 0LL);
  limitCount = v17->fields.limitCount;
  v23 = v21;
  this = (FollowerSelectItemListViewItem_o *)ServantLeaderInfo__getDispLimitCount(v17, 0LL);
  if ( !v18 )
LABEL_32:
    sub_B0D97C(this);
  return QuestRestrictionInfo__IsRestrictionServantIndividuality(
           v18,
           v23,
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
    sub_B0D97C(this);
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
  FollowerInfo_o *followerInfo; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w3
  BalanceConfig_c *v12; // x0
  SkillInfo_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4217569 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B0D8A4(&SkillInfo___TypeInfo, v7);
    byte_4217569 = 1;
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
    v12 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    v13 = (SkillInfo_array *)sub_B0D8BC(
                               SkillInfo___TypeInfo,
                               (unsigned int)v12->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v13;
    sub_B0D840((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
    return 0;
  }
}


EventCampaignEntity_o *__fastcall FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 SvtId; // x0
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x8
  int max_length; // w9
  int v6; // w11
  EventCampaignEntity_o *v7; // x10
  EventCampaignEntity_o *v8; // x13
  EventCampaignEntity_o *v10; // x12
  struct System_Int32_array *targetIds; // x15
  __int64 v12; // x14
  __int64 v13; // x16
  int32_t *v14; // x15
  __int64 v15; // x0

  if ( !this->fields.friendPointCampaignEntityList )
    return 0LL;
  SvtId = FollowerSelectItemListViewItem__get_SvtId(this, method);
  if ( (int)SvtId < 1 )
    return 0LL;
  friendPointCampaignEntityList = this->fields.friendPointCampaignEntityList;
  if ( !friendPointCampaignEntityList )
LABEL_29:
    sub_B0D97C(SvtId);
  max_length = friendPointCampaignEntityList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 0LL;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)max_length )
      {
        v15 = sub_B0D9A8(SvtId);
        sub_B0D948(v15, 0LL);
      }
      v10 = friendPointCampaignEntityList->m_Items[v6];
      if ( !v10 )
        goto LABEL_29;
      targetIds = v10->fields.targetIds;
      if ( targetIds && (v12 = *(_QWORD *)&targetIds->max_length) != 0 )
      {
        if ( !this->fields.isNpc && (!v7 || v10->fields.idx > v7->fields.idx) && (int)v12 >= 1 )
        {
          v13 = 0LL;
          v14 = &targetIds->m_Items[1];
          while ( v14[v13] != (_DWORD)SvtId )
          {
            if ( (int)++v13 >= (int)v12 )
              goto LABEL_22;
          }
          v7 = friendPointCampaignEntityList->m_Items[v6];
        }
      }
      else if ( !v8 || v10->fields.idx > v8->fields.idx )
      {
        goto LABEL_23;
      }
LABEL_22:
      v10 = v8;
LABEL_23:
      ++v6;
      v8 = v10;
      if ( v6 >= max_length )
        goto LABEL_26;
    }
  }
  v10 = 0LL;
  v7 = 0LL;
LABEL_26:
  if ( v7 )
    return v7;
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

  if ( (byte_4217568 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    sub_B0D8A4(&StringLiteral_6399/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, v5);
    byte_4217568 = 1;
  }
  if ( !this->fields.friendPointCampaignEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_6399/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, 0LL);
  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( !friendPointCampaignEntity )
    sub_B0D97C(v6);
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
    sub_B0D97C(FriendPointUpVal);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4217567 & 1) == 0 )
  {
    sub_B0D8A4(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4217567 = 1;
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
    v9 = (TreasureDvcInfo_o *)sub_B0D974(TreasureDvcInfo_TypeInfo, tdInfo, method);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_B0D840((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4217566 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B0D8A4(&SkillInfo___TypeInfo, v5);
    byte_4217566 = 1;
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
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    v11 = (SkillInfo_array *)sub_B0D8BC(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtSkillListMax);
    *skillInfoList = v11;
    sub_B0D840((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
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
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x19
  const MethodInfo *v18; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v19; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v20; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  SkillLvMaster_o *v22; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x21
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v26; // x22
  unsigned __int64 v27; // x24
  int v28; // w26
  int max_length; // w8
  int32_t v30; // w2
  unsigned int v31; // w9
  ServantSkillEntity_o *v32; // x10
  SkillLvEntity_o *v33; // x8
  unsigned __int64 v34; // x28
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v36; // x9
  int age; // w8
  unsigned __int64 v38; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_string__int__c **v40; // x8
  System_Collections_Generic_Dictionary_string__int__o *v41; // x23
  __int64 v42; // x0
  WarEntity_o *v43; // [xsp+0h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4217562 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantSkillMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_1160/*"3"*/, v12);
    byte_4217562 = 1;
  }
  v43 = 0LL;
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
      goto LABEL_77;
    keys = result->fields.keys;
    values = result->fields.values;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v45.fields.currentCryptoKey = keys;
    *(_QWORD *)&v45.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v45, 0LL) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v18);
      if ( !result )
        goto LABEL_77;
      v20 = result->fields.keys;
      v19 = result->fields.values;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v46.fields.currentCryptoKey = v20;
      *(_QWORD *)&v46.fields.fakeValue = v19;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                         v46,
                                                                         0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      ServantSkillList = ServantSkillMaster__getServantSkillList(Master_WarQuestSelectionMaster, (int32_t)result, 0LL);
      v22 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v24);
      if ( !result )
        goto LABEL_77;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_77;
      entries = result->fields.entries;
      v26 = result;
      if ( (int)entries >= 1 )
      {
        v27 = 0LL;
        v28 = kind - 1;
        while ( 1 )
        {
          if ( v27 >= (unsigned int)entries )
            goto LABEL_78;
          if ( !ServantSkillList )
            goto LABEL_77;
          max_length = ServantSkillList->max_length;
          v30 = *(&v26->fields.count + v27);
          if ( max_length >= 1 )
          {
            v31 = 0;
            while ( v31 < max_length )
            {
              v32 = ServantSkillList->m_Items[v31];
              if ( !v32 )
                goto LABEL_77;
              if ( v32->fields.skillId == v30 && v32->fields.eventId > 0 )
                goto LABEL_74;
              if ( (int)++v31 >= max_length )
                goto LABEL_30;
            }
LABEL_78:
            v42 = sub_B0D9A8(result);
            sub_B0D948(v42, 0LL);
          }
LABEL_30:
          if ( !v22 )
            goto LABEL_77;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             v22,
                                                                             &entity,
                                                                             v30,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_74:
          LODWORD(entries) = v26->fields.entries;
          if ( (__int64)++v27 >= (int)entries )
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
              goto LABEL_74;
            if ( v34 >= v36 )
              goto LABEL_78;
            if ( v23 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                 v23,
                                                                                 &v43,
                                                                                 funcId->m_Items[v34 + 1],
                                                                                 (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v28 )
                {
                  case 0:
                    if ( !v43 )
                      goto LABEL_77;
                    age = (int)v43->fields.age;
                    if ( age != 104 && age != 123 )
                      break;
                    goto LABEL_55;
                  case 1:
                    if ( !v43 )
                      goto LABEL_77;
                    if ( LODWORD(v43->fields.age) != 101 )
                      break;
                    goto LABEL_55;
                  case 2:
                    if ( !v43 )
                      goto LABEL_77;
                    if ( LODWORD(v43->fields.age) != 112 )
                      break;
                    goto LABEL_55;
                  case 3:
                    if ( !v43 )
                      goto LABEL_77;
                    if ( LODWORD(v43->fields.age) == 111 )
                      goto LABEL_55;
                    break;
                  case 4:
                    if ( !v43 )
                      goto LABEL_77;
                    if ( (LODWORD(v43->fields.age) | 8) != 110 )
                      break;
                    goto LABEL_55;
                  case 5:
                    if ( !v43 )
                      goto LABEL_77;
                    if ( LODWORD(v43->fields.age) != 106 )
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
                    if ( (__int64)v34 > (int)entries_low )
                      break;
                    if ( v34 >= entries_low )
                      goto LABEL_78;
                    v40 = &result->klass + v34;
                    v41 = (System_Collections_Generic_Dictionary_string__int__o *)v40[4];
                    if ( !v41 )
                      break;
                    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v40[4],
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_1160/*"3"*/,
                           (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                         v41,
                                                                                         (System_String_o *)StringLiteral_1160/*"3"*/,
                                                                                         (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                    v38 = LODWORD(result->fields.entries);
                    if ( (__int64)v34 >= (int)v38 )
                      break;
                    if ( v34 >= v38 )
                      goto LABEL_78;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields.count
                                                                                     + v34);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_55;
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
LABEL_77:
        sub_B0D97C(result);
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
        sub_B0D97C(this);
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  FollowerInfo_o *followerInfo; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventUpValSetupInfo_o *v31; // x23
  int32_t followerIndex; // w24
  int32_t v33; // w6
  bool *p_isEquipEventUpVal; // x21
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  __int64 v37; // x2
  struct IconLabelInfo_o *iconLabelInfo2; // x8
  PartyOrganizationUtility_o *v39; // x22
  const MethodInfo *v40; // x1
  struct System_String_o *sortStr1; // x23
  int64_t sortValue1; // x24
  int32_t v43; // w23
  const MethodInfo *v44; // x1
  int32_t Rarity; // w24
  const MethodInfo *v46; // x1
  struct IconLabelInfo_o *v47; // x8
  bool v48; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  FollowerSelectItemListViewItem___c_c *v54; // x0
  struct FollowerSelectItemListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__68_0; // x23
  Il2CppObject *v57; // x24
  struct FollowerSelectItemListViewItem___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  const MethodInfo *v67; // x1
  __int64 v68; // x2
  int32_t sortIndex; // w9
  FollowerSelectItemListViewItem_o *v70; // x22
  DataManager_c **v71; // x27
  int32_t v72; // w8
  DataManager_c *v73; // x0
  EventServantPointRankMaster_o *v74; // x24
  const MethodInfo *v75; // x1
  int32_t eventUpValItemList; // w25
  DataManager_c **v77; // x28
  struct System_String_o *v78; // x26
  int64_t v79; // x27
  int32_t v80; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  int32_t v84; // w24
  EventMargeItemUpValInfo_o *v85; // x25
  const MethodInfo *v86; // x1
  ServantEntity_o *servantEntity; // x25
  int32_t v88; // w23
  EventPersonalMargeUpValInfo_o *v89; // x24
  __int64 v90; // x8
  FollowerSelectItemListViewItem_o *v91; // x24
  unsigned __int64 v92; // x25
  System_Int32_array **v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  __int64 v100; // x0
  BattleServantConfConponent_o *p_eventUpValItemList; // [xsp+8h] [xbp-68h]
  int32_t actMaxRarity; // [xsp+14h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  v8 = this;
  if ( (byte_4217561 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_int___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_B0D8A4(&EventMargeItemUpValInfo_TypeInfo, v13);
    sub_B0D8A4(&EventPersonalMargeUpValInfo_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Func_EventDropUpValInfo__int___ctor__, v15);
    sub_B0D8A4(&System_Func_EventDropUpValInfo__int__TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v21);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v24);
    sub_B0D8A4(&Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__68_0__, v25);
    this = (FollowerSelectItemListViewItem_o *)sub_B0D8A4(&FollowerSelectItemListViewItem___c_TypeInfo, v26);
    byte_4217561 = 1;
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
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields.eventUpValItemList, 0LL, v2, v3, v4, v5, v6, v7);
      followerInfo = v8->fields.followerInfo;
      v31 = v8->fields.setupInfo;
      questRestrictionInfo = v8->fields.questRestrictionInfo;
      followerIndex = v8->fields.followerIndex;
      if ( questRestrictionInfo )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                     questRestrictionInfo->fields.questId,
                                                     0LL);
        v33 = (int)this;
        if ( !followerInfo )
          goto LABEL_76;
      }
      else
      {
        v33 = 0;
        if ( !followerInfo )
          goto LABEL_76;
      }
      p_isEquipEventUpVal = &v8->fields.isEquipEventUpVal;
      FollowerInfo__getEventUpVal_21906516(
        followerInfo,
        &v8->fields.eventUpValInfo,
        &v8->fields.isServantEventUpVal,
        &v8->fields.isEquipEventUpVal,
        v31,
        followerIndex,
        v33,
        0LL);
      if ( !v8->fields.isServantBonusFilterEnable )
        v8->fields.isServantEventUpVal = 0;
      if ( FollowerSelectItemListViewItem__get_ServantLeader(v8, v35) )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v36);
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
          v39 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v40);
          if ( !this )
            goto LABEL_76;
          sortValue1 = this->fields.sortValue1;
          sortStr1 = this->fields.sortStr1;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v104.fields.currentCryptoKey = sortValue1;
          *(_QWORD *)&v104.fields.fakeValue = sortStr1;
          v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v104, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v44);
          if ( !this )
            goto LABEL_76;
          Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v46);
          if ( !this )
            goto LABEL_76;
          v47 = this->fields.iconLabelInfo2;
          if ( !v47 )
            goto LABEL_76;
          this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                       *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v47[1].monitor,
                                                       0LL);
          if ( !v39 )
            goto LABEL_76;
          LODWORD(iconLabelInfo2) = PartyOrganizationUtility__IsRarityRestriction(
                                      v39,
                                      &skillName,
                                      &actMaxRarity,
                                      v43,
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
        v48 = 0;
        *p_isEquipEventUpVal = 0;
      }
      else
      {
        v48 = *p_isEquipEventUpVal;
      }
      v8->fields.isEventUpVal = v48 || v8->fields.isServantEventUpVal;
      v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v36, v37);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v49,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = v8->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v54 = FollowerSelectItemListViewItem___c_TypeInfo;
        if ( (BYTE3(FollowerSelectItemListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerSelectItemListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItem___c_TypeInfo);
          v54 = FollowerSelectItemListViewItem___c_TypeInfo;
        }
        static_fields = v54->static_fields;
        p_eventUpValItemList = (BattleServantConfConponent_o *)&v8->fields.eventUpValItemList;
        _9__68_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__68_0;
        if ( !_9__68_0 )
        {
          if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v54);
            static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
          }
          v57 = (Il2CppObject *)static_fields->__9;
          _9__68_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                       System_Func_EventDropUpValInfo__int__TypeInfo,
                                                                                       v50,
                                                                                       v51);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__68_0,
            v57,
            Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__68_0__,
            (const MethodInfo_2619564 *)Method_System_Func_EventDropUpValInfo__int___ctor__);
          v58 = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
          v58->__9__68_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__68_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v58->__9__68_0,
            (System_Int32_array **)_9__68_0,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
        }
        v65 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                     dropList,
                                                                     (System_Func_TSource__TResult__o *)_9__68_0,
                                                                     (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v66 = System_Linq_Enumerable__Distinct_int_(
                v65,
                (const MethodInfo_1B48964 *)Method_System_Linq_Enumerable_Distinct_int___);
        this = (FollowerSelectItemListViewItem_o *)System_Linq_Enumerable__ToArray_int_(
                                                     v66,
                                                     (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
        actMaxRarity = 0;
        if ( this )
        {
          sortIndex = this->fields.sortIndex;
          v70 = this;
          if ( sortIndex >= 1 )
          {
            v71 = &DataManager_TypeInfo;
            v72 = 0;
            while ( 1 )
            {
              if ( v72 >= (unsigned int)sortIndex )
                goto LABEL_77;
              servantEntity = v8->fields.servantEntity;
              v88 = *((_DWORD *)&v70->fields.sortValue0 + v72);
              v89 = (EventPersonalMargeUpValInfo_o *)sub_B0D974(EventPersonalMargeUpValInfo_TypeInfo, v67, v68);
              EventPersonalMargeUpValInfo___ctor(v89, v88, servantEntity, 0LL);
              this = (FollowerSelectItemListViewItem_o *)v8->fields.eventUpValInfo;
              if ( !this )
                goto LABEL_76;
              this = (FollowerSelectItemListViewItem_o *)EventUpValInfo__GetDropItemList(
                                                           (EventUpValInfo_o *)this,
                                                           0,
                                                           0LL);
              if ( !v89 )
                goto LABEL_76;
              EventPersonalMargeUpValInfo__Add(v89, (EventDropItemUpValInfo_array *)this, 0LL);
              this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__IsEmpty(v89, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__GetList(v89, 0LL);
                if ( !this )
                  goto LABEL_76;
                v90 = *(_QWORD *)&this->fields.sortIndex;
                v91 = this;
                if ( (int)v90 >= 1 )
                  break;
              }
LABEL_71:
              if ( !v8->fields.isNpc )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v67);
                if ( this )
                {
                  v73 = *v71;
                  if ( (BYTE3((*v71)->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v73);
                  this = (FollowerSelectItemListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
                  if ( !this )
                    goto LABEL_76;
                  v74 = (EventServantPointRankMaster_o *)this;
                  this = (FollowerSelectItemListViewItem_o *)EventServantPointRankMaster__IsEnableEvent(
                                                               (EventServantPointRankMaster_o *)this,
                                                               v88,
                                                               0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v8,
                                                                 v67);
                    if ( !this )
                      goto LABEL_76;
                    eventUpValItemList = (int32_t)this->fields.eventUpValItemList;
                    v77 = v71;
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v8,
                                                                 v75);
                    if ( !this )
                      goto LABEL_76;
                    v79 = this->fields.sortValue1;
                    v78 = this->fields.sortStr1;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    *(_QWORD *)&v105.fields.currentCryptoKey = v79;
                    *(_QWORD *)&v105.fields.fakeValue = v78;
                    v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v105, 0LL);
                    EnableEntity = EventServantPointRankMaster__GetEnableEntity(v74, v88, eventUpValItemList, v80, 0LL);
                    v84 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
                    v71 = v77;
                    v85 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v82, v83);
                    EventMargeItemUpValInfo___ctor_26624100(v85, v88, 0LL);
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v8,
                                                                 v86);
                    if ( !this )
                      goto LABEL_76;
                    if ( !v85 )
                      goto LABEL_76;
                    EventMargeItemUpValInfo__SetServantPointInfo(
                      v85,
                      (int32_t)this->fields.eventUpValItemList,
                      v84,
                      1,
                      0LL);
                    if ( !v49 )
                      goto LABEL_76;
                    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v49,
                      0,
                      (XWeaponTrail_Element_o *)v85,
                      (const MethodInfo_2FC68FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                  }
                }
              }
              v72 = actMaxRarity + 1;
              actMaxRarity = v72;
              sortIndex = v70->fields.sortIndex;
              if ( v72 >= sortIndex )
                goto LABEL_73;
            }
            v92 = 0LL;
            while ( v92 < (unsigned int)v90 )
            {
              if ( !v49 )
                goto LABEL_76;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v49,
                *((EventMissionProgressRequest_Argument_ProgressData_o **)&v91->fields.sortValue0 + v92),
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
              LODWORD(v90) = v91->fields.sortIndex;
              if ( (__int64)++v92 >= (int)v90 )
                goto LABEL_71;
            }
LABEL_77:
            v100 = sub_B0D9A8(this);
            sub_B0D948(v100, 0LL);
          }
LABEL_73:
          if ( v49 )
          {
            v93 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v49,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
            p_eventUpValItemList->klass = (BattleServantConfConponent_c *)v93;
            sub_B0D840(p_eventUpValItemList, v93, v94, v95, v96, v97, v98, v99);
            return;
          }
        }
      }
LABEL_76:
      sub_B0D97C(this);
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
  int32_t Int_34962660; // w26
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
  int32_t sortKind; // w8
  IconLabelInfo_o *iconLabelInfo1; // x20
  FollowerInfo_o *v81; // x21
  struct QuestRestrictionInfo_o *v82; // x8
  int32_t v83; // w22
  int32_t v84; // w2
  FollowerInfo_o *v85; // x20
  struct QuestRestrictionInfo_o *v86; // x8
  int32_t v87; // w21
  int32_t v88; // w2
  int32_t index; // w8
  FollowerInfo_o *v90; // x22
  struct QuestRestrictionInfo_o *v91; // x8
  int32_t v92; // w23
  int32_t v93; // w21
  int32_t v94; // w2
  int64_t classIndex; // x8
  int64_t deckPriority; // x9
  __int64 v97; // x8
  FollowerInfo_o *v98; // x20
  struct QuestRestrictionInfo_o *v99; // x8
  int32_t v100; // w21
  int32_t v101; // w2
  FollowerInfo_o *v102; // x20
  struct QuestRestrictionInfo_o *v103; // x8
  int32_t v104; // w21
  int32_t v105; // w2
  int64_t v106; // x9
  IconLabelInfo_o *iconLabelInfo2; // x20
  FollowerInfo_o *v108; // x21
  struct QuestRestrictionInfo_o *v109; // x8
  int32_t v110; // w22
  __int64 v111; // x8
  int32_t v112; // w2
  FollowerInfo_o *v113; // x20
  struct QuestRestrictionInfo_o *v114; // x8
  int32_t v115; // w22
  int v116; // w21
  int32_t v117; // w2
  FollowerInfo_o *v118; // x20
  struct QuestRestrictionInfo_o *v119; // x8
  int32_t v120; // w22
  int v121; // w21
  int32_t v122; // w2
  IconLabelInfo_o *v123; // x20
  FollowerInfo_o *v124; // x22
  struct QuestRestrictionInfo_o *v125; // x8
  int32_t v126; // w23
  int32_t v127; // w2
  FollowerInfo_o *v128; // x22
  struct QuestRestrictionInfo_o *v129; // x8
  int32_t v130; // w23
  int32_t v131; // w2
  FollowerInfo_o *v132; // x22
  struct QuestRestrictionInfo_o *v133; // x8
  int32_t v134; // w23
  int32_t v135; // w21
  int32_t v136; // w2
  FollowerInfo_o *v137; // x22
  struct QuestRestrictionInfo_o *v138; // x8
  int32_t v139; // w23
  int32_t v140; // w2
  FollowerInfo_o *v141; // x23
  struct QuestRestrictionInfo_o *v142; // x8
  int32_t v143; // w24
  int32_t v144; // w22
  int32_t v145; // w2
  FollowerInfo_o *v146; // x23
  struct QuestRestrictionInfo_o *v147; // x8
  int32_t v148; // w24
  int32_t v149; // w2
  int32_t v150; // w4
  int32_t v151; // w1
  FollowerInfo_o *v152; // x22
  struct QuestRestrictionInfo_o *v153; // x8
  int32_t v154; // w23
  int32_t v155; // w21
  int32_t v156; // w2
  int64_t servantEntity; // x8
  _BOOL4 isQuestRestriction; // w9
  __int64 v159; // x10
  __int64 v160; // x11
  __int64 v161; // x9
  EventBonusFilterGroupMemberMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-68h]
  EventBonusFilterGroupMemberEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int v164; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16

  v4 = this;
  if ( (byte_4217563 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, sort);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&ServantBonusFilterSelectMenu_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&StringLiteral_1111/*"2"*/, v11);
    sub_B0D8A4(&StringLiteral_2848/*"BonusFilterEquipId"*/, v12);
    sub_B0D8A4(&StringLiteral_2850/*"BonusFilterGroupId"*/, v13);
    sub_B0D8A4(&StringLiteral_1013/*"1"*/, v14);
    this = (FollowerSelectItemListViewItem_o *)sub_B0D8A4(&StringLiteral_960/*"0"*/, v15);
    byte_4217563 = 1;
  }
  v164 = 0;
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
      if ( !FollowerSelectItemListViewItem__get_EquipInfo(v4, v35) )
        goto LABEL_59;
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v37);
      if ( !this )
        goto LABEL_198;
      sortStr1 = this->fields.sortStr1;
      sortValue1B = this->fields.sortValue1B;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v166.fields.currentCryptoKey = sortStr1;
      *(_QWORD *)&v166.fields.fakeValue = sortValue1B;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                   v166,
                                                   0LL);
      if ( (int)this < 1 )
        goto LABEL_59;
      if ( !sort )
        goto LABEL_198;
      if ( ListViewSort__GetFilter(sort, 41, 0LL) )
        goto LABEL_59;
      v41 = (System_String_o *)StringLiteral_2848/*"BonusFilterEquipId"*/;
      v42 = (System_String_o *)StringLiteral_2850/*"BonusFilterGroupId"*/;
      this = (FollowerSelectItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_198;
      MasterData_WarQuestSelectionMaster = (EventBonusFilterGroupMemberMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    (DataManager_o *)this,
                                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      }
      MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v164 = 0;
      if ( MaxIndividualFilter < 1 )
      {
LABEL_59:
        if ( FollowerSelectItemListViewItem__ChkWholeFilter(v4, sort, v38) )
          goto LABEL_9;
      }
      else
      {
        v44 = MaxIndividualFilter;
        v45 = type;
        while ( 1 )
        {
          v46 = System_Int32__ToString((int32_t)&v164, 0LL);
          v47 = System_String__Concat_43849904(v41, v46, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v47, 0LL) )
          {
            v48 = System_Int32__ToString((int32_t)&v164, 0LL);
            v49 = System_String__Concat_43849904(v41, v48, 0LL);
            Int_34962660 = UnityEngine_PlayerPrefs__GetInt_34962660(v49, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v51);
            if ( !this )
              goto LABEL_198;
            v53 = this->fields.sortStr1;
            v52 = this->fields.sortValue1B;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v167.fields.currentCryptoKey = v53;
            *(_QWORD *)&v167.fields.fakeValue = v52;
            type = v45;
            if ( Int_34962660 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v167, 0LL) )
              break;
          }
          v54 = System_Int32__ToString((int32_t)&v164, 0LL);
          v55 = System_String__Concat_43849904(v42, v54, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v55, 0LL) )
          {
            v56 = System_Int32__ToString((int32_t)&v164, 0LL);
            v57 = System_String__Concat_43849904(v42, v56, 0LL);
            v58 = UnityEngine_PlayerPrefs__GetInt_34962660(v57, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v59);
            if ( !this )
              goto LABEL_198;
            v61 = this->fields.sortStr1;
            v60 = this->fields.sortValue1B;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v168.fields.currentCryptoKey = v61;
            *(_QWORD *)&v168.fields.fakeValue = v60;
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v168, 0LL);
            this = (FollowerSelectItemListViewItem_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_198;
            type = v45;
            if ( EventBonusFilterGroupMemberMaster__TryGetEntity(
                   MasterData_WarQuestSelectionMaster,
                   &entity,
                   v58,
                   v62,
                   0LL) )
            {
              return 0;
            }
          }
          if ( ++v164 >= v44 )
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
  ValuesDictionary = FollowerSelectItemListViewItem__GetValuesDictionary(v4, priorityKind, v23);
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v27);
  if ( this )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v28);
    if ( !this )
      goto LABEL_198;
    v30 = this->fields.sortStr1;
    v29 = this->fields.sortValue1B;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v165.fields.currentCryptoKey = v30;
    *(_QWORD *)&v165.fields.fakeValue = v29;
    this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                 v165,
                                                 0LL);
    if ( ValuesDictionary )
    {
      if ( (int)this >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v64 = &StringLiteral_1111/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_87;
            v64 = &StringLiteral_960/*"0"*/;
          }
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                                                       (System_Xml_XmlQualifiedName_o *)*v64,
                                                       (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v65 = 100000LL
                * System_Collections_Generic_Dictionary_string__int___get_Item(
                    ValuesDictionary,
                    (System_String_o *)*v64,
                    (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v4->fields.sortValue0 = v65;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v66);
            if ( this )
            {
              sortValue2B_high = HIDWORD(this->fields.sortValue2B);
              this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v67);
              if ( this )
              {
                v70 = v65 + 10LL * (*(_DWORD *)&this->fields.isTermination + sortValue2B_high);
                v4->fields.sortValue0 = v70;
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v69);
                if ( this )
                {
                  v71 = this->fields.sortValue2;
                  this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  v72 = v70 | (v71 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_86;
                }
              }
            }
LABEL_198:
            sub_B0D97C(this);
          }
        }
        else
        {
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                                                       (System_Xml_XmlQualifiedName_o *)StringLiteral_960/*"0"*/,
                                                       (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_1013/*"1"*/,
                                                         (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_960/*"0"*/,
                     (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                         ValuesDictionary,
                         (System_String_o *)StringLiteral_1013/*"1"*/,
                         (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v33 = 100000;
              }
              else
              {
                if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                       ValuesDictionary,
                       (System_String_o *)StringLiteral_960/*"0"*/,
                       (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
                {
                  v73 = *p_sortValue0;
                  goto LABEL_77;
                }
                Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                         ValuesDictionary,
                         (System_String_o *)StringLiteral_1013/*"1"*/,
                         (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v33 = 100000000;
              }
              v73 = Item * (__int64)v33;
              *p_sortValue0 = v73;
LABEL_77:
              this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v32);
              if ( this )
              {
                v75 = HIDWORD(this->fields.sortValue2B);
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v74);
                if ( this )
                {
                  v77 = v73 + 10LL * (*(_DWORD *)&this->fields.isTermination + v75);
                  v4->fields.sortValue0 = v77;
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v76);
                  if ( this )
                  {
                    v78 = this->fields.sortValue2;
                    this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    }
                    if ( v78 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                      v72 = v77;
                    else
                      v72 = v77 + 1;
LABEL_86:
                    *p_sortValue0 = v72;
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
      v81 = v4->fields.followerInfo;
      v82 = v4->fields.questRestrictionInfo;
      v83 = v4->fields.followerIndex;
      v4->fields.sortValue2 = v4->fields.deckPriority;
      v4->fields.sortValue2B = 1LL;
      if ( v82 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v82->fields.questId, 0LL);
        v84 = (int)this;
        if ( !v81 )
          goto LABEL_198;
      }
      else
      {
        v84 = 0;
        if ( !v81 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v81, v83, v84, 0LL);
      v90 = v4->fields.followerInfo;
      v91 = v4->fields.questRestrictionInfo;
      v92 = v4->fields.followerIndex;
      v93 = (int)this;
      if ( v91 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v91->fields.questId, 0LL);
        v94 = (int)this;
        if ( !v90 )
          goto LABEL_198;
      }
      else
      {
        v94 = 0;
        if ( !v90 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v90, v92, v94, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_198;
      IconLabelInfo__Set_26821248(iconLabelInfo1, 2, v93, (int32_t)this, 0, 0, 0, 0, 0LL);
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
        v97 = 5LL;
        goto LABEL_117;
      case 2:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v97 = 4LL;
        goto LABEL_117;
      case 3:
      case 4:
        goto LABEL_185;
      case 5:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v97 = 6LL;
LABEL_117:
        v4->fields.sortValue0B = v97;
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
      v98 = v4->fields.followerInfo;
      v99 = v4->fields.questRestrictionInfo;
      v100 = v4->fields.followerIndex;
      if ( v99 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v99->fields.questId, 0LL);
        v101 = (int)this;
        if ( !v98 )
          goto LABEL_198;
      }
      else
      {
        v101 = 0;
        if ( !v98 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v98, v100, v101, 0LL);
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
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v113, v115, v117, 0LL);
      v123 = v4->fields.iconLabelInfo1;
      v124 = v4->fields.followerInfo;
      v125 = v4->fields.questRestrictionInfo;
      v126 = v4->fields.followerIndex;
      v4->fields.sortValue1 = (int)this + v116;
      if ( v125 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v125->fields.questId, 0LL);
        v127 = (int)this;
        if ( !v124 )
          goto LABEL_198;
      }
      else
      {
        v127 = 0;
        if ( !v124 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v124, v126, v127, 0LL);
      v132 = v4->fields.followerInfo;
      v133 = v4->fields.questRestrictionInfo;
      v134 = v4->fields.followerIndex;
      v135 = (int)this;
      if ( v133 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v133->fields.questId, 0LL);
        v136 = (int)this;
        if ( !v132 )
          goto LABEL_198;
      }
      else
      {
        v136 = 0;
        if ( !v132 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustAtk(v132, v134, v136, 0LL);
      v141 = v4->fields.followerInfo;
      v142 = v4->fields.questRestrictionInfo;
      v143 = v4->fields.followerIndex;
      v144 = (int)this;
      if ( v142 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v142->fields.questId, 0LL);
        v145 = (int)this;
        if ( !v141 )
          goto LABEL_198;
      }
      else
      {
        v145 = 0;
        if ( !v141 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v141, v143, v145, 0LL);
      if ( !v123 )
        goto LABEL_198;
      v150 = (int)this;
      v151 = 5;
    }
    else
    {
      if ( sortKind != 5 )
      {
        if ( sortKind == 3 )
        {
          v85 = v4->fields.followerInfo;
          v86 = v4->fields.questRestrictionInfo;
          v87 = v4->fields.followerIndex;
          if ( v86 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v86->fields.questId, 0LL);
            v88 = (int)this;
            if ( !v85 )
              goto LABEL_198;
          }
          else
          {
            v88 = 0;
            if ( !v85 )
              goto LABEL_198;
          }
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v85, v87, v88, 0LL);
          iconLabelInfo2 = v4->fields.iconLabelInfo1;
          v108 = v4->fields.followerInfo;
          v109 = v4->fields.questRestrictionInfo;
          v110 = v4->fields.followerIndex;
          v106 = (int)this;
        }
        else
        {
          v106 = v4->fields.sortValue2;
          iconLabelInfo2 = v4->fields.iconLabelInfo1;
          v108 = v4->fields.followerInfo;
          v109 = v4->fields.questRestrictionInfo;
          v110 = v4->fields.followerIndex;
        }
        v4->fields.sortValue1 = v106;
        if ( v109 )
        {
LABEL_134:
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v109->fields.questId, 0LL);
          v112 = (int)this;
          if ( !v108 )
            goto LABEL_198;
LABEL_176:
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v108, v110, v112, 0LL);
          v152 = v4->fields.followerInfo;
          v153 = v4->fields.questRestrictionInfo;
          v154 = v4->fields.followerIndex;
          v155 = (int)this;
          if ( v153 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v153->fields.questId, 0LL);
            v156 = (int)this;
            if ( !v152 )
              goto LABEL_198;
          }
          else
          {
            v156 = 0;
            if ( !v152 )
              goto LABEL_198;
          }
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v152, v154, v156, 0LL);
          if ( !iconLabelInfo2 )
            goto LABEL_198;
          IconLabelInfo__Set_26821248(iconLabelInfo2, 2, v155, (int32_t)this, 0, 0, 0, 0, 0LL);
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
              v159 = 3LL;
              v160 = 6LL;
              goto LABEL_190;
            case 2:
              isQuestRestriction = v4->fields.isQuestRestriction;
              v159 = 2LL;
              v160 = 5LL;
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
              v159 = 4LL;
              v160 = 7LL;
LABEL_190:
              servantEntity = (int)servantEntity;
              if ( isQuestRestriction )
                v161 = v159;
              else
                v161 = v160;
              v4->fields.sortValue0B = v161;
              goto LABEL_194;
            default:
              goto LABEL_195;
          }
        }
LABEL_175:
        v112 = 0;
        if ( !v108 )
          goto LABEL_198;
        goto LABEL_176;
      }
      v102 = v4->fields.followerInfo;
      v103 = v4->fields.questRestrictionInfo;
      v104 = v4->fields.followerIndex;
      if ( v103 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v103->fields.questId, 0LL);
        v105 = (int)this;
        if ( !v102 )
          goto LABEL_198;
      }
      else
      {
        v105 = 0;
        if ( !v102 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v102, v104, v105, 0LL);
      v118 = v4->fields.followerInfo;
      v119 = v4->fields.questRestrictionInfo;
      v120 = v4->fields.followerIndex;
      v121 = (int)this;
      if ( v119 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v119->fields.questId, 0LL);
        v122 = (int)this;
        if ( !v118 )
          goto LABEL_198;
      }
      else
      {
        v122 = 0;
        if ( !v118 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v118, v120, v122, 0LL);
      v123 = v4->fields.iconLabelInfo1;
      v128 = v4->fields.followerInfo;
      v129 = v4->fields.questRestrictionInfo;
      v130 = v4->fields.followerIndex;
      v4->fields.sortValue1 = (int)this + v121;
      if ( v129 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v129->fields.questId, 0LL);
        v131 = (int)this;
        if ( !v128 )
          goto LABEL_198;
      }
      else
      {
        v131 = 0;
        if ( !v128 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v128, v130, v131, 0LL);
      v137 = v4->fields.followerInfo;
      v138 = v4->fields.questRestrictionInfo;
      v139 = v4->fields.followerIndex;
      v135 = (int)this;
      if ( v138 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v138->fields.questId, 0LL);
        v140 = (int)this;
        if ( !v137 )
          goto LABEL_198;
      }
      else
      {
        v140 = 0;
        if ( !v137 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustHp(v137, v139, v140, 0LL);
      v146 = v4->fields.followerInfo;
      v147 = v4->fields.questRestrictionInfo;
      v148 = v4->fields.followerIndex;
      v144 = (int)this;
      if ( v147 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v147->fields.questId, 0LL);
        v149 = (int)this;
        if ( !v146 )
          goto LABEL_198;
      }
      else
      {
        v149 = 0;
        if ( !v146 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v146, v148, v149, 0LL);
      if ( !v123 )
        goto LABEL_198;
      v150 = (int)this;
      v151 = 3;
    }
    IconLabelInfo__Set_26821248(v123, v151, v135, v144, v150, 0, 0, 0, 0LL);
    iconLabelInfo2 = v4->fields.iconLabelInfo2;
    v108 = v4->fields.followerInfo;
    v109 = v4->fields.questRestrictionInfo;
    v110 = v4->fields.followerIndex;
    if ( v109 )
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
      v111 = 2LL;
      goto LABEL_129;
    case 2:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v111 = 1LL;
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
      v111 = 3LL;
LABEL_129:
      v4->fields.sortValue0B = v111;
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
            sub_B0D97C(QuestRestriction);
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
    sub_B0D97C(this);
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

  if ( (byte_4217564 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18452/*"error"*/, method);
    byte_4217564 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    p_userName = &followerInfo->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18452/*"error"*/;
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

  if ( (byte_4217565 & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, method);
    byte_4217565 = 1;
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
    sub_B0D97C(servantEntity);
  }
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v5);
  if ( !servantEntity )
    goto LABEL_22;
  v4 = (System_String_o *)*((_QWORD *)servantEntity + 30);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct FollowerSelectItemListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_4210F50 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewItem___c_TypeInfo, v1);
    byte_4210F50 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(FollowerSelectItemListViewItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FollowerSelectItemListViewItem___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return drop->fields.eventId;
}