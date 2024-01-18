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
  IconLabelInfo_o *v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_Dictionary_int__int__o *v70; // x19
  const MethodInfo *v71; // x2

  if ( (byte_418AA21 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor___67247544, *(_QWORD *)&index);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v24);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v25);
    byte_418AA21 = 1;
  }
  v26 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v33, 0LL);
  this->fields.iconLabelInfo2 = v33;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.friendPointUpVal = friendPointUpVal;
  this->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.isBonusFilterEnable = isBonusFilterEnable;
  this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
  this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
  this->fields.isRecommended = isRecommended;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields.followerInfo = followerInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)followerInfo,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.classIndex = index2;
  this->fields._isRecommendedUser_k__BackingField = isRecommendedUser;
  this->fields.supportDeckId = supportDeckId;
  this->fields.deckPriority = deckPriority;
  if ( classBoardMaxNumDictionary )
  {
    v70 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_48380720(
      v70,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2E23B30 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___67247544);
  }
  else
  {
    v70 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v70;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v70,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields._IsReleasedClassBoard_k__BackingField = isReleasedClassBoard;
  FollowerSelectItemListViewItem__AnalyzeEntity(this, followerClassId, v71);
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
  __int64 v37; // x1
  struct QuestRestrictionInfo_o *v38; // x8
  FollowerInfo_o *v39; // x23
  int32_t v40; // w20
  int32_t v41; // w2
  struct FollowerInfo_o *v42; // x8
  int32_t v43; // w20
  const MethodInfo *v44; // x1
  struct EventCampaignEntity_o *EnableFriendPointCampaign; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct ServantEntity_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  FollowerInfo_o *v59; // x22
  struct QuestRestrictionInfo_o *v60; // x21
  int32_t followerIndex; // w23
  int32_t v62; // w3
  struct QuestRestrictionInfo_o *v63; // x8
  FollowerInfo_o *v64; // x22
  struct QuestRestrictionInfo_o *v65; // x21
  int32_t v66; // w23
  int32_t v67; // w3
  FollowerInfo_o *v68; // x22
  struct QuestRestrictionInfo_o *v69; // x21
  int32_t v70; // w23
  int32_t v71; // w3
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x1
  struct QuestRestrictionInfo_o *v74; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  struct QuestRestrictionInfo_o *v76; // x8
  int32_t v77; // w21
  int32_t ClassBoardBaseId; // w20
  int32_t v79; // w8
  struct FollowerInfo_o *v80; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x21
  int max_length; // w8
  unsigned int v83; // w22
  ClassBoardInfo_o *v84; // x24
  struct FollowerInfo_o *v85; // x8
  TblFriendMaster_o *v86; // x20
  int32_t type; // w9
  int32_t v88; // w1
  struct System_Int32_array *squareIds; // x8
  __int64 v90; // x0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418AA22 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&followerClassId);
    sub_B2C35C(&Method_DataManager_GetMasterData_TblFriendMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_418AA22 = 1;
  }
  entity = 0LL;
  this->fields.isNpc = 0;
  this->fields.followerClassId = followerClassId;
  this->fields.servantEntity = 0LL;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventUpValItemList, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.friendPointCampaignEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntity, 0LL, v26, v27, v28, v29, v30, v31);
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
    v38 = this->fields.questRestrictionInfo;
    v39 = this->fields.followerInfo;
    v40 = Index;
    this->fields.followerIndex = Index;
    if ( v38 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v38->fields.questId, 0LL);
      v41 = Index;
      if ( !v39 )
        goto LABEL_91;
    }
    else
    {
      v41 = 0;
      if ( !v39 )
        goto LABEL_91;
    }
    Index = FollowerInfo__getSvtId(v39, v40, v41, 0LL);
    if ( (int)Index < 1 )
    {
      v63 = this->fields.questRestrictionInfo;
      if ( v63 )
        LOBYTE(v63) = v63->fields.isRestriction;
      this->fields.isQuestRestriction = (char)v63;
      goto LABEL_74;
    }
    v42 = this->fields.followerInfo;
    if ( !v42 )
      goto LABEL_91;
    v43 = Index;
    this->fields.isNpc = Follower__IsNpc(v42->fields.type, 0LL);
    EnableFriendPointCampaign = FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(this, v44);
    this->fields.friendPointCampaignEntity = EnableFriendPointCampaign;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntity,
      (System_Int32_array **)EnableFriendPointCampaign,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    Index = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Index )
      goto LABEL_91;
    Index = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Index,
                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Index )
      goto LABEL_91;
    v52 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Index,
                                      v43,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = v52;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.servantEntity,
      (System_Int32_array **)v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    v59 = this->fields.followerInfo;
    v60 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( v60 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v60->fields.questId, 0LL);
      v62 = Index;
      if ( !v59 )
        goto LABEL_91;
    }
    else
    {
      v62 = 0;
      if ( !v59 )
        goto LABEL_91;
    }
    Index = FollowerInfo__getQuestRestriction(v59, v60, followerIndex, v62, 0LL);
    v64 = this->fields.followerInfo;
    v65 = this->fields.questRestrictionInfo;
    v66 = this->fields.followerIndex;
    this->fields.isQuestRestriction = Index & 1;
    if ( v65 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v65->fields.questId, 0LL);
      v67 = Index;
      if ( !v64 )
        goto LABEL_91;
    }
    else
    {
      v67 = 0;
      if ( !v64 )
        goto LABEL_91;
    }
    Index = FollowerInfo__getUniqueSvtRestriction(v64, v65, v66, v67, 0LL);
    v68 = this->fields.followerInfo;
    v69 = this->fields.questRestrictionInfo;
    v70 = this->fields.followerIndex;
    this->fields.isUniqueSvtRestriction = Index & 1;
    if ( v69 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v69->fields.questId, 0LL);
      v71 = Index;
      if ( !v68 )
        goto LABEL_91;
    }
    else
    {
      v71 = 0;
      if ( !v68 )
        goto LABEL_91;
    }
    this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                      v68,
                                                      v69,
                                                      v70,
                                                      v71,
                                                      0LL);
    this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v72);
    FollowerSelectItemListViewItem__SetEventUpInfo(this, v73);
    v74 = this->fields.questRestrictionInfo;
    if ( v74 && v74->fields.isDataLostBattle )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Index = NetworkManager__get_UserId(0LL);
      v76 = this->fields.questRestrictionInfo;
      if ( !v76 || !Master_WarQuestSelectionMaster )
        goto LABEL_91;
      if ( UserEventDataLostMaster__TryGetEntity(
             (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
             &entity,
             Index,
             v76->fields.dataLostBattleId,
             0LL) )
      {
        Index = (int64_t)entity;
        if ( !entity )
          goto LABEL_91;
        Index = UserEventDataLostEntity__IsRestart(entity, v43, 0LL);
        if ( !entity )
          goto LABEL_91;
        if ( (Index & 1) != 0 )
        {
          this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(entity, v43, 0LL);
        }
        else if ( UserEventDataLostEntity__IsDataLost(entity, v43, 0LL) )
        {
          this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    if ( !this->fields.classBoardMaxNumDictionary )
      goto LABEL_74;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Index = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Index )
      goto LABEL_91;
    Index = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Index,
                       v43,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Index )
      goto LABEL_91;
    v77 = *(_DWORD *)(Index + 80);
    Index = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !Index )
      goto LABEL_91;
    ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Index, v77, 0LL);
    Index = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !Index )
      goto LABEL_91;
    Index = ClassBoardClassMaster__IsInvalidClass((ClassBoardClassMaster_o *)Index, v77, 0LL);
    if ( (Index & 1) != 0 )
    {
      v79 = 0;
      LODWORD(Index) = -1;
    }
    else
    {
      v80 = this->fields.followerInfo;
      if ( !v80 )
        goto LABEL_91;
      userClassBoardInfo = v80->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_91;
      max_length = userClassBoardInfo->max_length;
      if ( max_length < 1 )
      {
LABEL_71:
        this->fields._OpenClassBoardNum_k__BackingField = 0;
        if ( !this )
          goto LABEL_91;
        v79 = 0;
        LODWORD(Index) = -1;
        goto LABEL_73;
      }
      v83 = 0;
      while ( 1 )
      {
        if ( v83 >= max_length )
        {
          v90 = sub_B2C460(Index);
          sub_B2C400(v90, 0LL);
        }
        v84 = userClassBoardInfo->m_Items[v83];
        if ( !v84 )
          goto LABEL_91;
        if ( v84->fields.classBoardBaseId == ClassBoardBaseId )
        {
          Index = (int64_t)this->fields.classBoardMaxNumDictionary;
          if ( !Index )
            goto LABEL_91;
          Index = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_int__int__o *)Index,
                    ClassBoardBaseId,
                    (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
          if ( (Index & 1) != 0 )
            break;
        }
        max_length = userClassBoardInfo->max_length;
        if ( (int)++v83 >= max_length )
          goto LABEL_71;
      }
      Index = (int64_t)this->fields.classBoardMaxNumDictionary;
      if ( !Index )
        goto LABEL_91;
      Index = System_Collections_Generic_Dictionary_int__int___get_Item(
                (System_Collections_Generic_Dictionary_int__int__o *)Index,
                ClassBoardBaseId,
                (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      squareIds = v84->fields.squareIds;
      if ( !squareIds )
        goto LABEL_91;
      v79 = squareIds->max_length;
    }
    this->fields._OpenClassBoardNum_k__BackingField = v79;
LABEL_73:
    this->fields._IsMaxOpenClassBoard_k__BackingField = v79 >= (int)Index && (int)Index > 0;
LABEL_74:
    Index = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Index )
    {
      Index = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Index,
                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
      v85 = this->fields.followerInfo;
      if ( v85 )
      {
        v86 = (TblFriendMaster_o *)Index;
        if ( v85->fields.type == 5
          || Index
          && (Index = TblFriendMaster__isMessageDisp((TblFriendMaster_o *)Index, 3, v85->fields.userId, 0LL),
              v85 = this->fields.followerInfo,
              this->fields.isMessageDisp = Index & 1,
              v85) )
        {
          type = v85->fields.type;
          if ( (type | 4) == 5 )
          {
            if ( !v86 )
              goto LABEL_91;
            if ( type == 5 )
              v88 = 9;
            else
              v88 = 3;
            this->fields.isLockUser = TblFriendMaster__IsLockUser(v86, v88, v85->fields.userId, 0LL);
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
    sub_B2C434(Index, v37);
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
  if ( (byte_418AA23 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    this = (FollowerSelectItemListViewItem_o *)sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v4);
    byte_418AA23 = 1;
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
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_32;
  sortValue1 = this->fields.sortValue1;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_32;
  v9 = 0;
  if ( sortValue1 < 1 || v2->fields.isNpc )
    return v9;
  if ( !v2->fields.questRestrictionInfo )
    goto LABEL_32;
  sortValue1_high = HIDWORD(this->fields.sortValue1);
  this = (FollowerSelectItemListViewItem_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
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
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
  limitCount = v17->fields.limitCount;
  v23 = v21;
  this = (FollowerSelectItemListViewItem_o *)ServantLeaderInfo__getDispLimitCount(v17, 0LL);
  if ( !v18 )
LABEL_32:
    sub_B2C434(this, method);
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
    sub_B2C434(this, 0LL);
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

  if ( (byte_418AA2C & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&SkillInfo___TypeInfo, v7);
    byte_418AA2C = 1;
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
    v13 = (SkillInfo_array *)sub_B2C374(
                               SkillInfo___TypeInfo,
                               (unsigned int)v12->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v13;
    sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
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
    sub_B2C434(SvtId, v4);
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
        v16 = sub_B2C460(SvtId);
        sub_B2C400(v16, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x0
  __int64 v7; // x1
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  System_String_o *v9; // x19
  Il2CppObject *v10; // x0
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418AA2B & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    sub_B2C35C(&StringLiteral_6382/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, v5);
    byte_418AA2B = 1;
  }
  if ( !this->fields.friendPointCampaignEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_6382/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, 0LL);
  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( !friendPointCampaignEntity )
    sub_B2C434(v6, v7);
  v9 = v6;
  v12 = friendPointCampaignEntity->fields.value / 1000;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
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
    sub_B2C434(FriendPointUpVal, v9);
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

  if ( (byte_418AA2A & 1) == 0 )
  {
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_418AA2A = 1;
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
    v9 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_B2C2F8((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_418AA29 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&SkillInfo___TypeInfo, v5);
    byte_418AA29 = 1;
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
    v11 = (SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtSkillListMax);
    *skillInfoList = v11;
    sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
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
  __int64 v15; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *values; // x19
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *keys; // x20
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x19
  const MethodInfo *v19; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v20; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v21; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  SkillLvMaster_o *v23; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x21
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v27; // x22
  unsigned __int64 v28; // x24
  int v29; // w26
  int max_length; // w8
  int32_t v31; // w2
  unsigned int v32; // w9
  ServantSkillEntity_o *v33; // x10
  SkillLvEntity_o *v34; // x8
  unsigned __int64 v35; // x28
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v37; // x9
  int age; // w8
  unsigned __int64 v39; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_string__int__c **v41; // x8
  System_Collections_Generic_Dictionary_string__int__o *v42; // x23
  __int64 v43; // x0
  WarEntity_o *v44; // [xsp+0h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_418AA25 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantSkillMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_1154/*"3"*/, v12);
    byte_418AA25 = 1;
  }
  v44 = 0LL;
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
    *(_QWORD *)&v46.fields.currentCryptoKey = keys;
    *(_QWORD *)&v46.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v46, 0LL) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v19);
      if ( !result )
        goto LABEL_77;
      v21 = result->fields.keys;
      v20 = result->fields.values;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v47.fields.currentCryptoKey = v21;
      *(_QWORD *)&v47.fields.fakeValue = v20;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                         v47,
                                                                         0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      ServantSkillList = ServantSkillMaster__getServantSkillList(Master_WarQuestSelectionMaster, (int32_t)result, 0LL);
      v23 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
      v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v25);
      if ( !result )
        goto LABEL_77;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_77;
      entries = result->fields.entries;
      v27 = result;
      if ( (int)entries >= 1 )
      {
        v28 = 0LL;
        v29 = kind - 1;
        while ( 1 )
        {
          if ( v28 >= (unsigned int)entries )
            goto LABEL_78;
          if ( !ServantSkillList )
            goto LABEL_77;
          max_length = ServantSkillList->max_length;
          v31 = *(&v27->fields.count + v28);
          if ( max_length >= 1 )
          {
            v32 = 0;
            while ( v32 < max_length )
            {
              v33 = ServantSkillList->m_Items[v32];
              if ( !v33 )
                goto LABEL_77;
              if ( v33->fields.skillId == v31 && v33->fields.eventId > 0 )
                goto LABEL_74;
              if ( (int)++v32 >= max_length )
                goto LABEL_30;
            }
LABEL_78:
            v43 = sub_B2C460(result);
            sub_B2C400(v43, 0LL);
          }
LABEL_30:
          if ( !v23 )
            goto LABEL_77;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             v23,
                                                                             &entity,
                                                                             v31,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_74:
          LODWORD(entries) = v27->fields.entries;
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
              goto LABEL_74;
            if ( v35 >= v37 )
              goto LABEL_78;
            if ( v24 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                 v24,
                                                                                 &v44,
                                                                                 funcId->m_Items[v35 + 1],
                                                                                 (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v29 )
                {
                  case 0:
                    if ( !v44 )
                      goto LABEL_77;
                    age = (int)v44->fields.age;
                    if ( age != 104 && age != 123 )
                      break;
                    goto LABEL_55;
                  case 1:
                    if ( !v44 )
                      goto LABEL_77;
                    if ( LODWORD(v44->fields.age) != 101 )
                      break;
                    goto LABEL_55;
                  case 2:
                    if ( !v44 )
                      goto LABEL_77;
                    if ( LODWORD(v44->fields.age) != 112 )
                      break;
                    goto LABEL_55;
                  case 3:
                    if ( !v44 )
                      goto LABEL_77;
                    if ( LODWORD(v44->fields.age) == 111 )
                      goto LABEL_55;
                    break;
                  case 4:
                    if ( !v44 )
                      goto LABEL_77;
                    if ( (LODWORD(v44->fields.age) | 8) != 110 )
                      break;
                    goto LABEL_55;
                  case 5:
                    if ( !v44 )
                      goto LABEL_77;
                    if ( LODWORD(v44->fields.age) != 106 )
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
                    if ( (__int64)v35 > (int)entries_low )
                      break;
                    if ( v35 >= entries_low )
                      goto LABEL_78;
                    v41 = &result->klass + v35;
                    v42 = (System_Collections_Generic_Dictionary_string__int__o *)v41[4];
                    if ( !v42 )
                      break;
                    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v41[4],
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_1154/*"3"*/,
                           (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                         v42,
                                                                                         (System_String_o *)StringLiteral_1154/*"3"*/,
                                                                                         (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                    v39 = LODWORD(result->fields.entries);
                    if ( (__int64)v35 >= (int)v39 )
                      break;
                    if ( v35 >= v39 )
                      goto LABEL_78;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields.count
                                                                                     + v35);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_55;
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
LABEL_77:
        sub_B2C434(result, v15);
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
        sub_B2C434(this, *(_QWORD *)&friendPointUpVal);
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
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  System_Collections_Generic_IEnumerable_T__o **p_eventUpValItemList; // x20
  FollowerInfo_o *followerInfo; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventUpValSetupInfo_o *v25; // x23
  int32_t followerIndex; // w24
  int32_t v27; // w6
  bool *p_isEquipEventUpVal; // x21
  const MethodInfo *v29; // x1
  PartyOrganizationUtility_o *v30; // x22
  const MethodInfo *v31; // x1
  struct System_String_o *sortStr1; // x23
  int64_t sortValue1; // x24
  int32_t v34; // w23
  const MethodInfo *v35; // x1
  int32_t Rarity; // w24
  const MethodInfo *v37; // x1
  struct IconLabelInfo_o *iconLabelInfo2; // x8
  bool v39; // w8
  struct EventUpValSetupInfo_o *v40; // x9
  struct System_Int32_array *v41; // x8
  int32_t v42; // w21
  ServantEntity_o *servantEntity; // x23
  EventPersonalMargeUpValInfo_o *v44; // x22
  const MethodInfo *v45; // x1
  System_Int32_array **List; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  EventServantPointRankMaster_o *v53; // x23
  System_Collections_Generic_IEnumerable_T__o *v54; // x24
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v55; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *v56; // x22
  const MethodInfo *v57; // x1
  int32_t eventUpValItemList; // w24
  struct System_String_o *v59; // x25
  int64_t v60; // x26
  int32_t v61; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v63; // w23
  EventMargeItemUpValInfo_o *v64; // x24
  const MethodInfo *v65; // x1
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x0
  int32_t actMaxRarity; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  v8 = this;
  if ( (byte_418AA24 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&EventMargeItemUpValInfo_TypeInfo, v10);
    sub_B2C35C(&EventPersonalMargeUpValInfo_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67306184, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v15);
    sub_B2C35C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    this = (FollowerSelectItemListViewItem_o *)sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v19);
    byte_418AA24 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  setupInfo = v8->fields.setupInfo;
  if ( !setupInfo )
    return;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_62;
  if ( !*(_QWORD *)&eventIdList->max_length )
    return;
  *(_WORD *)&v8->fields.isServantEventUpVal = 0;
  v8->fields.isEventUpVal = 0;
  v8->fields.eventUpValItemList = 0LL;
  p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&v8->fields.eventUpValItemList;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.eventUpValItemList, 0LL, v2, v3, v4, v5, v6, v7);
  followerInfo = v8->fields.followerInfo;
  v25 = v8->fields.setupInfo;
  questRestrictionInfo = v8->fields.questRestrictionInfo;
  followerIndex = v8->fields.followerIndex;
  if ( questRestrictionInfo )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                 questRestrictionInfo->fields.questId,
                                                 0LL);
    v27 = (int)this;
    if ( !followerInfo )
      goto LABEL_62;
  }
  else
  {
    v27 = 0;
    if ( !followerInfo )
      goto LABEL_62;
  }
  p_isEquipEventUpVal = &v8->fields.isEquipEventUpVal;
  FollowerInfo__getEventUpVal_23153896(
    followerInfo,
    &v8->fields.eventUpValInfo,
    &v8->fields.isServantEventUpVal,
    &v8->fields.isEquipEventUpVal,
    v25,
    followerIndex,
    v27,
    0LL);
  if ( !v8->fields.isServantBonusFilterEnable )
    v8->fields.isServantEventUpVal = 0;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v29);
  if ( !this )
  {
LABEL_27:
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_31;
    goto LABEL_28;
  }
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, method);
  if ( !this )
    goto LABEL_62;
  if ( this->fields.iconLabelInfo2 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v30 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v31);
    if ( !this )
      goto LABEL_62;
    sortValue1 = this->fields.sortValue1;
    sortStr1 = this->fields.sortStr1;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v76.fields.currentCryptoKey = sortValue1;
    *(_QWORD *)&v76.fields.fakeValue = sortStr1;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v76, 0LL);
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v35);
    if ( !this )
      goto LABEL_62;
    Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v37);
    if ( !this )
      goto LABEL_62;
    iconLabelInfo2 = this->fields.iconLabelInfo2;
    if ( !iconLabelInfo2 )
      goto LABEL_62;
    this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&iconLabelInfo2[1].monitor,
                                                 0LL);
    if ( !v30 )
      goto LABEL_62;
    this = (FollowerSelectItemListViewItem_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                 v30,
                                                 &skillName,
                                                 &actMaxRarity,
                                                 v34,
                                                 Rarity,
                                                 (int32_t)this,
                                                 -1,
                                                 0LL);
    goto LABEL_27;
  }
  this = 0LL;
LABEL_28:
  if ( v8->fields.isServantEquipBonusFilterEnable )
  {
    v39 = *p_isEquipEventUpVal;
    goto LABEL_32;
  }
LABEL_31:
  v39 = 0;
  *p_isEquipEventUpVal = 0;
LABEL_32:
  v40 = v8->fields.setupInfo;
  v8->fields.isEventUpVal = v39 || v8->fields.isServantEventUpVal;
  if ( !v40 )
    goto LABEL_62;
  v41 = v40->fields.eventIdList;
  if ( !v41 )
    goto LABEL_62;
  if ( !v41->max_length )
  {
    v73 = sub_B2C460(this);
    sub_B2C400(v73, 0LL);
  }
  v42 = v41->m_Items[1];
  servantEntity = v8->fields.servantEntity;
  v44 = (EventPersonalMargeUpValInfo_o *)sub_B2C42C(EventPersonalMargeUpValInfo_TypeInfo);
  EventPersonalMargeUpValInfo___ctor(v44, v42, servantEntity, 0LL);
  this = (FollowerSelectItemListViewItem_o *)v8->fields.eventUpValInfo;
  if ( !this )
    goto LABEL_62;
  this = (FollowerSelectItemListViewItem_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)this, 0, 0LL);
  if ( !v44 )
    goto LABEL_62;
  EventPersonalMargeUpValInfo__Add(v44, (EventDropItemUpValInfo_array *)this, 0LL);
  if ( !EventPersonalMargeUpValInfo__IsEmpty(v44, 0LL) )
  {
    List = (System_Int32_array **)EventPersonalMargeUpValInfo__GetList(v44, 0LL);
    *p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)List;
    sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.eventUpValItemList, List, v47, v48, v49, v50, v51, v52);
  }
  if ( !v8->fields.isNpc && FollowerSelectItemListViewItem__get_ServantLeader(v8, v45) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (FollowerSelectItemListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !this )
      goto LABEL_62;
    v53 = (EventServantPointRankMaster_o *)this;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)this, v42, 0LL) )
    {
      v54 = *p_eventUpValItemList;
      v55 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      v56 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v55;
      if ( v54 )
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v55,
          v54,
          (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67306184);
      else
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v57);
      if ( this )
      {
        eventUpValItemList = (int32_t)this->fields.eventUpValItemList;
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, method);
        if ( this )
        {
          v60 = this->fields.sortValue1;
          v59 = this->fields.sortStr1;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v77.fields.currentCryptoKey = v60;
          *(_QWORD *)&v77.fields.fakeValue = v59;
          v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v77, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v53, v42, eventUpValItemList, v61, 0LL);
          v63 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
          v64 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_27173872(v64, v42, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v65);
          if ( this )
          {
            if ( v64 )
            {
              EventMargeItemUpValInfo__SetServantPointInfo(v64, (int32_t)this->fields.eventUpValItemList, v63, 1, 0LL);
              if ( v56 )
              {
                System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                  v56,
                  0,
                  (XWeaponTrail_Element_o *)v64,
                  (const MethodInfo_2EF5674 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                v66 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v56,
                                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                *p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)v66;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&v8->fields.eventUpValItemList,
                  v66,
                  v67,
                  v68,
                  v69,
                  v70,
                  v71,
                  v72);
                return;
              }
            }
          }
        }
      }
LABEL_62:
      sub_B2C434(this, method);
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
  int32_t Int_35342280; // w26
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
  int32_t sortKind; // w8
  IconLabelInfo_o *iconLabelInfo1; // x20
  FollowerInfo_o *v73; // x21
  struct QuestRestrictionInfo_o *v74; // x8
  int32_t v75; // w22
  int32_t v76; // w2
  FollowerInfo_o *v77; // x20
  struct QuestRestrictionInfo_o *v78; // x8
  int32_t v79; // w21
  int32_t v80; // w2
  int32_t index; // w8
  FollowerInfo_o *v82; // x22
  struct QuestRestrictionInfo_o *v83; // x8
  int32_t v84; // w23
  int32_t v85; // w21
  int32_t v86; // w2
  int64_t classIndex; // x8
  int64_t deckPriority; // x9
  __int64 v89; // x8
  FollowerInfo_o *v90; // x20
  struct QuestRestrictionInfo_o *v91; // x8
  int32_t v92; // w21
  int32_t v93; // w2
  FollowerInfo_o *v94; // x20
  struct QuestRestrictionInfo_o *v95; // x8
  int32_t v96; // w21
  int32_t v97; // w2
  int64_t v98; // x9
  IconLabelInfo_o *iconLabelInfo2; // x20
  FollowerInfo_o *v100; // x21
  struct QuestRestrictionInfo_o *v101; // x8
  int32_t v102; // w22
  __int64 v103; // x8
  int32_t v104; // w2
  FollowerInfo_o *v105; // x20
  struct QuestRestrictionInfo_o *v106; // x8
  int32_t v107; // w22
  int v108; // w21
  int32_t v109; // w2
  FollowerInfo_o *v110; // x20
  struct QuestRestrictionInfo_o *v111; // x8
  int32_t v112; // w22
  int v113; // w21
  int32_t v114; // w2
  IconLabelInfo_o *v115; // x20
  FollowerInfo_o *v116; // x22
  struct QuestRestrictionInfo_o *v117; // x8
  int32_t v118; // w23
  int32_t v119; // w2
  FollowerInfo_o *v120; // x22
  struct QuestRestrictionInfo_o *v121; // x8
  int32_t v122; // w23
  int32_t v123; // w2
  FollowerInfo_o *v124; // x22
  struct QuestRestrictionInfo_o *v125; // x8
  int32_t v126; // w23
  int32_t v127; // w21
  int32_t v128; // w2
  FollowerInfo_o *v129; // x22
  struct QuestRestrictionInfo_o *v130; // x8
  int32_t v131; // w23
  int32_t v132; // w2
  FollowerInfo_o *v133; // x23
  struct QuestRestrictionInfo_o *v134; // x8
  int32_t v135; // w24
  int32_t v136; // w22
  int32_t v137; // w2
  FollowerInfo_o *v138; // x23
  struct QuestRestrictionInfo_o *v139; // x8
  int32_t v140; // w24
  int32_t v141; // w2
  int32_t v142; // w4
  int32_t v143; // w1
  FollowerInfo_o *v144; // x22
  struct QuestRestrictionInfo_o *v145; // x8
  int32_t v146; // w23
  int32_t v147; // w21
  int32_t v148; // w2
  int64_t servantEntity; // x8
  _BOOL4 isQuestRestriction; // w9
  __int64 v151; // x10
  __int64 v152; // x11
  __int64 v153; // x9
  EventBonusFilterGroupMemberMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-68h]
  EventBonusFilterGroupMemberEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int v156; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16

  v4 = this;
  if ( (byte_418AA26 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, sort);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&ServantBonusFilterSelectMenu_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_1104/*"2"*/, v11);
    sub_B2C35C(&StringLiteral_2837/*"BonusFilterEquipId"*/, v12);
    sub_B2C35C(&StringLiteral_2839/*"BonusFilterGroupId"*/, v13);
    sub_B2C35C(&StringLiteral_1006/*"1"*/, v14);
    this = (FollowerSelectItemListViewItem_o *)sub_B2C35C(&StringLiteral_953/*"0"*/, v15);
    byte_418AA26 = 1;
  }
  v156 = 0;
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
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v33);
      if ( !this )
        goto LABEL_198;
      sortStr1 = this->fields.sortStr1;
      sortValue1B = this->fields.sortValue1B;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v158.fields.currentCryptoKey = sortStr1;
      *(_QWORD *)&v158.fields.fakeValue = sortValue1B;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                   v158,
                                                   0LL);
      if ( (int)this < 1 )
        goto LABEL_59;
      if ( !sort )
        goto LABEL_198;
      if ( ListViewSort__GetFilter(sort, 41, 0LL) )
        goto LABEL_59;
      v37 = (System_String_o *)StringLiteral_2837/*"BonusFilterEquipId"*/;
      v38 = (System_String_o *)StringLiteral_2839/*"BonusFilterGroupId"*/;
      this = (FollowerSelectItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_198;
      MasterData_WarQuestSelectionMaster = (EventBonusFilterGroupMemberMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    (DataManager_o *)this,
                                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      }
      MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v156 = 0;
      if ( MaxIndividualFilter < 1 )
      {
LABEL_59:
        if ( FollowerSelectItemListViewItem__ChkWholeFilter(v4, sort, v34) )
          goto LABEL_9;
      }
      else
      {
        v40 = MaxIndividualFilter;
        v41 = type;
        while ( 1 )
        {
          v42 = System_Int32__ToString((int32_t)&v156, 0LL);
          v43 = System_String__Concat_44305532(v37, v42, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v43, 0LL) )
          {
            v44 = System_Int32__ToString((int32_t)&v156, 0LL);
            v45 = System_String__Concat_44305532(v37, v44, 0LL);
            Int_35342280 = UnityEngine_PlayerPrefs__GetInt_35342280(v45, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v47);
            if ( !this )
              goto LABEL_198;
            v49 = this->fields.sortStr1;
            v48 = this->fields.sortValue1B;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v159.fields.currentCryptoKey = v49;
            *(_QWORD *)&v159.fields.fakeValue = v48;
            type = v41;
            if ( Int_35342280 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v159, 0LL) )
              break;
          }
          v50 = System_Int32__ToString((int32_t)&v156, 0LL);
          v51 = System_String__Concat_44305532(v38, v50, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v51, 0LL) )
          {
            v52 = System_Int32__ToString((int32_t)&v156, 0LL);
            v53 = System_String__Concat_44305532(v38, v52, 0LL);
            v54 = UnityEngine_PlayerPrefs__GetInt_35342280(v53, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v55);
            if ( !this )
              goto LABEL_198;
            v57 = this->fields.sortStr1;
            v56 = this->fields.sortValue1B;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v160.fields.currentCryptoKey = v57;
            *(_QWORD *)&v160.fields.fakeValue = v56;
            v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v160, 0LL);
            this = (FollowerSelectItemListViewItem_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_198;
            type = v41;
            if ( EventBonusFilterGroupMemberMaster__TryGetEntity(
                   MasterData_WarQuestSelectionMaster,
                   &entity,
                   v54,
                   v58,
                   0LL) )
            {
              return 0;
            }
          }
          if ( ++v156 >= v40 )
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
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v157.fields.currentCryptoKey = v28;
    *(_QWORD *)&v157.fields.fakeValue = v27;
    this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                 v157,
                                                 0LL);
    if ( ValuesDictionary )
    {
      if ( (int)this >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v60 = &StringLiteral_1104/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_87;
            v60 = &StringLiteral_953/*"0"*/;
          }
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                                                       (System_Xml_XmlQualifiedName_o *)*v60,
                                                       (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v61 = 100000LL
                * System_Collections_Generic_Dictionary_string__int___get_Item(
                    ValuesDictionary,
                    (System_String_o *)*v60,
                    (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v4->fields.sortValue0 = v61;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v62);
            if ( this )
            {
              sortValue2B_high = HIDWORD(this->fields.sortValue2B);
              this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                           v4,
                                                           (const MethodInfo *)sort);
              if ( this )
              {
                v64 = v61 + 10LL * (*(_DWORD *)&this->fields.isTermination + sortValue2B_high);
                v4->fields.sortValue0 = v64;
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                             v4,
                                                             (const MethodInfo *)sort);
                if ( this )
                {
                  v65 = this->fields.sortValue2;
                  this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  v66 = v64 | (v65 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_86;
                }
              }
            }
LABEL_198:
            sub_B2C434(this, sort);
          }
        }
        else
        {
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                                                       (System_Xml_XmlQualifiedName_o *)StringLiteral_953/*"0"*/,
                                                       (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_1006/*"1"*/,
                                                         (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_953/*"0"*/,
                     (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                         ValuesDictionary,
                         (System_String_o *)StringLiteral_1006/*"1"*/,
                         (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v31 = 100000;
              }
              else
              {
                if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                       ValuesDictionary,
                       (System_String_o *)StringLiteral_953/*"0"*/,
                       (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
                {
                  v67 = *p_sortValue0;
                  goto LABEL_77;
                }
                Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                         ValuesDictionary,
                         (System_String_o *)StringLiteral_1006/*"1"*/,
                         (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v31 = 100000000;
              }
              v67 = Item * (__int64)v31;
              *p_sortValue0 = v67;
LABEL_77:
              this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v30);
              if ( this )
              {
                v68 = HIDWORD(this->fields.sortValue2B);
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                             v4,
                                                             (const MethodInfo *)sort);
                if ( this )
                {
                  v69 = v67 + 10LL * (*(_DWORD *)&this->fields.isTermination + v68);
                  v4->fields.sortValue0 = v69;
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                               v4,
                                                               (const MethodInfo *)sort);
                  if ( this )
                  {
                    v70 = this->fields.sortValue2;
                    this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    }
                    if ( v70 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                      v66 = v69;
                    else
                      v66 = v69 + 1;
LABEL_86:
                    *p_sortValue0 = v66;
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
      v73 = v4->fields.followerInfo;
      v74 = v4->fields.questRestrictionInfo;
      v75 = v4->fields.followerIndex;
      v4->fields.sortValue2 = v4->fields.deckPriority;
      v4->fields.sortValue2B = 1LL;
      if ( v74 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v74->fields.questId, 0LL);
        v76 = (int)this;
        if ( !v73 )
          goto LABEL_198;
      }
      else
      {
        v76 = 0;
        if ( !v73 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v73, v75, v76, 0LL);
      v82 = v4->fields.followerInfo;
      v83 = v4->fields.questRestrictionInfo;
      v84 = v4->fields.followerIndex;
      v85 = (int)this;
      if ( v83 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v83->fields.questId, 0LL);
        v86 = (int)this;
        if ( !v82 )
          goto LABEL_198;
      }
      else
      {
        v86 = 0;
        if ( !v82 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v82, v84, v86, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_198;
      IconLabelInfo__Set_27362128(iconLabelInfo1, 2, v85, (int32_t)this, 0, 0, 0, 0, 0LL);
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
        v89 = 5LL;
        goto LABEL_117;
      case 2:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v89 = 4LL;
        goto LABEL_117;
      case 3:
      case 4:
        goto LABEL_185;
      case 5:
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v89 = 6LL;
LABEL_117:
        v4->fields.sortValue0B = v89;
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
      v90 = v4->fields.followerInfo;
      v91 = v4->fields.questRestrictionInfo;
      v92 = v4->fields.followerIndex;
      if ( v91 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v91->fields.questId, 0LL);
        v93 = (int)this;
        if ( !v90 )
          goto LABEL_198;
      }
      else
      {
        v93 = 0;
        if ( !v90 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v90, v92, v93, 0LL);
      v105 = v4->fields.followerInfo;
      v106 = v4->fields.questRestrictionInfo;
      v107 = v4->fields.followerIndex;
      v108 = (int)this;
      if ( v106 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v106->fields.questId, 0LL);
        v109 = (int)this;
        if ( !v105 )
          goto LABEL_198;
      }
      else
      {
        v109 = 0;
        if ( !v105 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v105, v107, v109, 0LL);
      v115 = v4->fields.iconLabelInfo1;
      v116 = v4->fields.followerInfo;
      v117 = v4->fields.questRestrictionInfo;
      v118 = v4->fields.followerIndex;
      v4->fields.sortValue1 = (int)this + v108;
      if ( v117 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v117->fields.questId, 0LL);
        v119 = (int)this;
        if ( !v116 )
          goto LABEL_198;
      }
      else
      {
        v119 = 0;
        if ( !v116 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v116, v118, v119, 0LL);
      v124 = v4->fields.followerInfo;
      v125 = v4->fields.questRestrictionInfo;
      v126 = v4->fields.followerIndex;
      v127 = (int)this;
      if ( v125 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v125->fields.questId, 0LL);
        v128 = (int)this;
        if ( !v124 )
          goto LABEL_198;
      }
      else
      {
        v128 = 0;
        if ( !v124 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustAtk(v124, v126, v128, 0LL);
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
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v133, v135, v137, 0LL);
      if ( !v115 )
        goto LABEL_198;
      v142 = (int)this;
      v143 = 5;
    }
    else
    {
      if ( sortKind != 5 )
      {
        if ( sortKind == 3 )
        {
          v77 = v4->fields.followerInfo;
          v78 = v4->fields.questRestrictionInfo;
          v79 = v4->fields.followerIndex;
          if ( v78 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v78->fields.questId, 0LL);
            v80 = (int)this;
            if ( !v77 )
              goto LABEL_198;
          }
          else
          {
            v80 = 0;
            if ( !v77 )
              goto LABEL_198;
          }
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v77, v79, v80, 0LL);
          iconLabelInfo2 = v4->fields.iconLabelInfo1;
          v100 = v4->fields.followerInfo;
          v101 = v4->fields.questRestrictionInfo;
          v102 = v4->fields.followerIndex;
          v98 = (int)this;
        }
        else
        {
          v98 = v4->fields.sortValue2;
          iconLabelInfo2 = v4->fields.iconLabelInfo1;
          v100 = v4->fields.followerInfo;
          v101 = v4->fields.questRestrictionInfo;
          v102 = v4->fields.followerIndex;
        }
        v4->fields.sortValue1 = v98;
        if ( v101 )
        {
LABEL_134:
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v101->fields.questId, 0LL);
          v104 = (int)this;
          if ( !v100 )
            goto LABEL_198;
LABEL_176:
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v100, v102, v104, 0LL);
          v144 = v4->fields.followerInfo;
          v145 = v4->fields.questRestrictionInfo;
          v146 = v4->fields.followerIndex;
          v147 = (int)this;
          if ( v145 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v145->fields.questId, 0LL);
            v148 = (int)this;
            if ( !v144 )
              goto LABEL_198;
          }
          else
          {
            v148 = 0;
            if ( !v144 )
              goto LABEL_198;
          }
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v144, v146, v148, 0LL);
          if ( !iconLabelInfo2 )
            goto LABEL_198;
          IconLabelInfo__Set_27362128(iconLabelInfo2, 2, v147, (int32_t)this, 0, 0, 0, 0, 0LL);
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
              v151 = 3LL;
              v152 = 6LL;
              goto LABEL_190;
            case 2:
              isQuestRestriction = v4->fields.isQuestRestriction;
              v151 = 2LL;
              v152 = 5LL;
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
              v151 = 4LL;
              v152 = 7LL;
LABEL_190:
              servantEntity = (int)servantEntity;
              if ( isQuestRestriction )
                v153 = v151;
              else
                v153 = v152;
              v4->fields.sortValue0B = v153;
              goto LABEL_194;
            default:
              goto LABEL_195;
          }
        }
LABEL_175:
        v104 = 0;
        if ( !v100 )
          goto LABEL_198;
        goto LABEL_176;
      }
      v94 = v4->fields.followerInfo;
      v95 = v4->fields.questRestrictionInfo;
      v96 = v4->fields.followerIndex;
      if ( v95 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v95->fields.questId, 0LL);
        v97 = (int)this;
        if ( !v94 )
          goto LABEL_198;
      }
      else
      {
        v97 = 0;
        if ( !v94 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v94, v96, v97, 0LL);
      v110 = v4->fields.followerInfo;
      v111 = v4->fields.questRestrictionInfo;
      v112 = v4->fields.followerIndex;
      v113 = (int)this;
      if ( v111 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v111->fields.questId, 0LL);
        v114 = (int)this;
        if ( !v110 )
          goto LABEL_198;
      }
      else
      {
        v114 = 0;
        if ( !v110 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v110, v112, v114, 0LL);
      v115 = v4->fields.iconLabelInfo1;
      v120 = v4->fields.followerInfo;
      v121 = v4->fields.questRestrictionInfo;
      v122 = v4->fields.followerIndex;
      v4->fields.sortValue1 = (int)this + v113;
      if ( v121 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v121->fields.questId, 0LL);
        v123 = (int)this;
        if ( !v120 )
          goto LABEL_198;
      }
      else
      {
        v123 = 0;
        if ( !v120 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v120, v122, v123, 0LL);
      v129 = v4->fields.followerInfo;
      v130 = v4->fields.questRestrictionInfo;
      v131 = v4->fields.followerIndex;
      v127 = (int)this;
      if ( v130 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v130->fields.questId, 0LL);
        v132 = (int)this;
        if ( !v129 )
          goto LABEL_198;
      }
      else
      {
        v132 = 0;
        if ( !v129 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustHp(v129, v131, v132, 0LL);
      v138 = v4->fields.followerInfo;
      v139 = v4->fields.questRestrictionInfo;
      v140 = v4->fields.followerIndex;
      v136 = (int)this;
      if ( v139 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v139->fields.questId, 0LL);
        v141 = (int)this;
        if ( !v138 )
          goto LABEL_198;
      }
      else
      {
        v141 = 0;
        if ( !v138 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v138, v140, v141, 0LL);
      if ( !v115 )
        goto LABEL_198;
      v142 = (int)this;
      v143 = 3;
    }
    IconLabelInfo__Set_27362128(v115, v143, v127, v136, v142, 0, 0, 0, 0LL);
    iconLabelInfo2 = v4->fields.iconLabelInfo2;
    v100 = v4->fields.followerInfo;
    v101 = v4->fields.questRestrictionInfo;
    v102 = v4->fields.followerIndex;
    if ( v101 )
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
      v103 = 2LL;
      goto LABEL_129;
    case 2:
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v103 = 1LL;
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
      v103 = 3LL;
LABEL_129:
      v4->fields.sortValue0B = v103;
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
            sub_B2C434(QuestRestriction, v8);
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
    sub_B2C434(this, method);
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

  if ( (byte_418AA27 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18395/*"error"*/, method);
    byte_418AA27 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    p_userName = &followerInfo->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18395/*"error"*/;
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

  if ( (byte_418AA28 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    byte_418AA28 = 1;
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
    sub_B2C434(servantEntity, v5);
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