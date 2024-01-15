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
  __int64 v35; // x3
  __int64 v36; // x4
  IconLabelInfo_o *v37; // x22
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
  __int64 v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_Dictionary_int__int__o *v75; // x19
  const MethodInfo *v76; // x2

  if ( (byte_40F8F04 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor___66674144, *(_QWORD *)&index);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v24);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v25);
    byte_40F8F04 = 1;
  }
  v26 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             *(_QWORD *)&index2,
                             followerInfo,
                             *(_QWORD *)&followerClassId);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v37 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v33, v34, v35, v36);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo2 = v37;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.friendPointUpVal = friendPointUpVal;
  this->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.isBonusFilterEnable = isBonusFilterEnable;
  this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
  this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
  this->fields.isRecommended = isRecommended;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.followerInfo = followerInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)followerInfo,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.classIndex = index2;
  this->fields._isRecommendedUser_k__BackingField = isRecommendedUser;
  this->fields.supportDeckId = supportDeckId;
  this->fields.deckPriority = deckPriority;
  if ( classBoardMaxNumDictionary )
  {
    v75 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v68,
                                                                 v69,
                                                                 v70,
                                                                 v71);
    System_Collections_Generic_Dictionary_int__int____ctor_48088484(
      v75,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2DDC5A4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___66674144);
  }
  else
  {
    v75 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v75;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v75,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields._IsReleasedClassBoard_k__BackingField = isReleasedClassBoard;
  FollowerSelectItemListViewItem__AnalyzeEntity(this, followerClassId, v76);
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
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x4
  FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *v37; // x8
  int32_t Index; // w0
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x3
  struct QuestRestrictionInfo_o *v41; // x8
  FollowerInfo_o *v42; // x23
  int32_t v43; // w20
  int32_t v44; // w2
  int32_t SvtId; // w0
  const MethodInfo *v46; // x1
  struct FollowerInfo_o *v47; // x8
  int32_t v48; // w20
  struct EventCampaignEntity_o *EnableFriendPointCampaign; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x4
  FollowerInfo_o *v67; // x22
  struct QuestRestrictionInfo_o *v68; // x21
  int32_t followerIndex; // w23
  int32_t v70; // w3
  struct QuestRestrictionInfo_o *v71; // x8
  bool QuestRestriction; // w0
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x4
  FollowerInfo_o *v75; // x22
  struct QuestRestrictionInfo_o *v76; // x21
  int32_t v77; // w23
  int32_t v78; // w3
  bool UniqueSvtRestriction; // w0
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x4
  FollowerInfo_o *v82; // x22
  struct QuestRestrictionInfo_o *v83; // x21
  int32_t v84; // w23
  int32_t v85; // w3
  const MethodInfo *v86; // x1
  const MethodInfo *v87; // x1
  struct QuestRestrictionInfo_o *v88; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  struct QuestRestrictionInfo_o *v91; // x8
  bool IsRestart; // w0
  DataMasterBase_WarMaster__WarEntity__int__o *v93; // x0
  WarEntity_o *v94; // x0
  int32_t startType; // w21
  ClassBoardClassMaster_o *v96; // x0
  int32_t ClassBoardBaseId; // w20
  ClassBoardClassMaster_o *v98; // x0
  _BOOL8 IsInvalidClass; // x0
  __int64 v100; // x1
  __int64 v101; // x2
  int32_t v102; // w8
  int32_t Item; // w0
  struct FollowerInfo_o *v104; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x21
  int max_length; // w8
  unsigned int v107; // w22
  ClassBoardInfo_o *v108; // x24
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // x0
  WebViewManager_o *v110; // x0
  TblFriendMaster_o *v111; // x0
  struct FollowerInfo_o *v112; // x8
  TblFriendMaster_o *v113; // x20
  bool isMessageDisp; // w0
  int32_t type; // w9
  int32_t v116; // w1
  IconLabelInfo_o *iconLabelInfo1; // x0
  IconLabelInfo_o *iconLabelInfo2; // x0
  System_Collections_Generic_Dictionary_int__int__o *v119; // x0
  struct System_Int32_array *squareIds; // x8
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8F05 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&followerClassId);
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40F8F05 = 1;
  }
  entity = 0LL;
  this->fields.isNpc = 0;
  this->fields.followerClassId = followerClassId;
  this->fields.servantEntity = 0LL;
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventUpValItemList, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.friendPointCampaignEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntity, 0LL, v26, v27, v28, v29, v30, v31);
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
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, v32);
    else
      ReturnTypeByQuestId = 0;
    Index = FollowerInfo__getIndex(followerInfo, followerClassId, ReturnTypeByQuestId, this->fields.supportDeckId, v33);
    v41 = this->fields.questRestrictionInfo;
    v42 = this->fields.followerInfo;
    v43 = Index;
    this->fields.followerIndex = Index;
    if ( v41 )
    {
      v44 = FollowerInfo__GetReturnTypeByQuestId(v41->fields.questId, v39);
      if ( !v42 )
        goto LABEL_91;
    }
    else
    {
      v44 = 0;
      if ( !v42 )
        goto LABEL_91;
    }
    SvtId = FollowerInfo__getSvtId(v42, v43, v44, v40);
    if ( SvtId < 1 )
    {
      v71 = this->fields.questRestrictionInfo;
      if ( v71 )
        LOBYTE(v71) = v71->fields.isRestriction;
      this->fields.isQuestRestriction = (char)v71;
      goto LABEL_74;
    }
    v47 = this->fields.followerInfo;
    if ( !v47 )
      goto LABEL_91;
    v48 = SvtId;
    this->fields.isNpc = (unsigned int)(v47->fields.type - 3) < 2;
    EnableFriendPointCampaign = FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(this, v46);
    this->fields.friendPointCampaignEntity = EnableFriendPointCampaign;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntity,
      (System_Int32_array **)EnableFriendPointCampaign,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_91;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_91;
    v58 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v48,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields.servantEntity = v58;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.servantEntity,
      (System_Int32_array **)v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
    v67 = this->fields.followerInfo;
    v68 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( v68 )
    {
      v70 = FollowerInfo__GetReturnTypeByQuestId(v68->fields.questId, v65);
      if ( !v67 )
        goto LABEL_91;
    }
    else
    {
      v70 = 0;
      if ( !v67 )
        goto LABEL_91;
    }
    QuestRestriction = FollowerInfo__getQuestRestriction(v67, v68, followerIndex, v70, v66);
    v75 = this->fields.followerInfo;
    v76 = this->fields.questRestrictionInfo;
    v77 = this->fields.followerIndex;
    this->fields.isQuestRestriction = QuestRestriction;
    if ( v76 )
    {
      v78 = FollowerInfo__GetReturnTypeByQuestId(v76->fields.questId, v73);
      if ( !v75 )
        goto LABEL_91;
    }
    else
    {
      v78 = 0;
      if ( !v75 )
        goto LABEL_91;
    }
    UniqueSvtRestriction = FollowerInfo__getUniqueSvtRestriction(v75, v76, v77, v78, v74);
    v82 = this->fields.followerInfo;
    v83 = this->fields.questRestrictionInfo;
    v84 = this->fields.followerIndex;
    this->fields.isUniqueSvtRestriction = UniqueSvtRestriction;
    if ( v83 )
    {
      v85 = FollowerInfo__GetReturnTypeByQuestId(v83->fields.questId, v80);
      if ( !v82 )
        goto LABEL_91;
    }
    else
    {
      v85 = 0;
      if ( !v82 )
        goto LABEL_91;
    }
    this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                      v82,
                                                      v83,
                                                      v84,
                                                      v85,
                                                      v81);
    this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v86);
    FollowerSelectItemListViewItem__SetEventUpInfo(this, v87);
    v88 = this->fields.questRestrictionInfo;
    if ( v88 && v88->fields.isDataLostBattle )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v91 = this->fields.questRestrictionInfo;
      if ( !v91 || !Master_WarQuestSelectionMaster )
        goto LABEL_91;
      if ( UserEventDataLostMaster__TryGetEntity(
             (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
             &entity,
             UserId,
             v91->fields.dataLostBattleId,
             0LL) )
      {
        if ( !entity )
          goto LABEL_91;
        IsRestart = UserEventDataLostEntity__IsRestart(entity, v48, 0LL);
        if ( !entity )
          goto LABEL_91;
        if ( IsRestart )
        {
          this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(entity, v48, 0LL);
        }
        else if ( UserEventDataLostEntity__IsDataLost(entity, v48, 0LL) )
        {
          this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    if ( !this->fields.classBoardMaxNumDictionary )
      goto LABEL_74;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v93 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v93 )
      goto LABEL_91;
    v94 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            v93,
            v48,
            (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v94 )
      goto LABEL_91;
    startType = v94->fields.startType;
    v96 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !v96 )
      goto LABEL_91;
    ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(v96, startType, 0LL);
    v98 = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !v98 )
      goto LABEL_91;
    IsInvalidClass = ClassBoardClassMaster__IsInvalidClass(v98, startType, 0LL);
    if ( IsInvalidClass )
    {
      v102 = 0;
      Item = -1;
    }
    else
    {
      v104 = this->fields.followerInfo;
      if ( !v104 )
        goto LABEL_91;
      userClassBoardInfo = v104->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_91;
      max_length = userClassBoardInfo->max_length;
      if ( max_length < 1 )
      {
LABEL_71:
        this->fields._OpenClassBoardNum_k__BackingField = 0;
        if ( !this )
          goto LABEL_91;
        v102 = 0;
        Item = -1;
        goto LABEL_73;
      }
      v107 = 0;
      while ( 1 )
      {
        if ( v107 >= max_length )
        {
          sub_B17100(IsInvalidClass, v100, v101);
          sub_B170A0();
        }
        v108 = userClassBoardInfo->m_Items[v107];
        if ( !v108 )
          goto LABEL_91;
        if ( v108->fields.classBoardBaseId == ClassBoardBaseId )
        {
          classBoardMaxNumDictionary = this->fields.classBoardMaxNumDictionary;
          if ( !classBoardMaxNumDictionary )
            goto LABEL_91;
          IsInvalidClass = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                             classBoardMaxNumDictionary,
                             ClassBoardBaseId,
                             (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
          if ( IsInvalidClass )
            break;
        }
        max_length = userClassBoardInfo->max_length;
        if ( (int)++v107 >= max_length )
          goto LABEL_71;
      }
      v119 = this->fields.classBoardMaxNumDictionary;
      if ( !v119 )
        goto LABEL_91;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               v119,
               ClassBoardBaseId,
               (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      squareIds = v108->fields.squareIds;
      if ( !squareIds )
        goto LABEL_91;
      v102 = squareIds->max_length;
    }
    this->fields._OpenClassBoardNum_k__BackingField = v102;
LABEL_73:
    this->fields._IsMaxOpenClassBoard_k__BackingField = v102 >= Item && Item > 0;
LABEL_74:
    v110 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v110 )
    {
      v111 = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v110,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      v112 = this->fields.followerInfo;
      if ( v112 )
      {
        v113 = v111;
        if ( v112->fields.type == 5
          || v111
          && (isMessageDisp = TblFriendMaster__isMessageDisp(v111, 3, v112->fields.userId, 0LL),
              v112 = this->fields.followerInfo,
              this->fields.isMessageDisp = isMessageDisp,
              v112) )
        {
          type = v112->fields.type;
          if ( (type | 4) == 5 )
          {
            if ( !v113 )
              goto LABEL_91;
            if ( type == 5 )
              v116 = 9;
            else
              v116 = 3;
            this->fields.isLockUser = TblFriendMaster__IsLockUser(v113, v116, v112->fields.userId, 0LL);
          }
          iconLabelInfo1 = this->fields.iconLabelInfo1;
          if ( iconLabelInfo1 )
          {
            IconLabelInfo__Clear(iconLabelInfo1, 0LL);
            iconLabelInfo2 = this->fields.iconLabelInfo2;
            if ( iconLabelInfo2 )
            {
              IconLabelInfo__Clear(iconLabelInfo2, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_91:
    sub_B170D4();
  }
  v37 = this->fields.questRestrictionInfo;
  this->fields.followerIndex = 0;
  if ( v37 )
    LOBYTE(v37) = v37->fields.isRestriction;
  this->fields.isQuestRestriction = (char)v37;
}


bool __fastcall FollowerSelectItemListViewItem__CheckSlotRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  FollowerInfo_o *followerInfo; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w3
  bool v10; // w8
  QuestRestrictionInfo_o *v11; // x0
  clsQuestCheck_o *v13; // x0
  int qrs; // w21
  clsQuestCheck_o *v15; // x0
  int32_t qrs_high; // w20
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  FollowerInfo_o *v19; // x21
  struct QuestRestrictionInfo_o *v20; // x8
  int32_t v21; // w22
  int32_t v22; // w2
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v24; // x21
  QuestRestrictionInfo_o *v25; // x19
  __int64 v26; // x22
  __int64 v27; // x23
  int32_t v28; // w0
  int32_t limitCount; // w22
  int32_t v30; // w23
  int32_t DispLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_40F8F06 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5);
    byte_40F8F06 = 1;
  }
  followerInfo = this->fields.followerInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, method);
    if ( !followerInfo )
      goto LABEL_32;
  }
  else
  {
    ReturnTypeByQuestId = 0;
    if ( !followerInfo )
      goto LABEL_32;
  }
  if ( FollowerInfo__IsSlotRestriction(followerInfo, questRestrictionInfo, followerIndex, ReturnTypeByQuestId, v2) )
    return 1;
  v11 = this->fields.questRestrictionInfo;
  if ( !v11 )
    goto LABEL_32;
  if ( QuestRestrictionInfo__IsUseOldMaster(v11, 0LL) )
    return 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v13 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v13 )
    goto LABEL_32;
  qrs = (int)v13[1].fields.qrs;
  v15 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v15 )
    goto LABEL_32;
  v10 = 0;
  if ( qrs < 1 || this->fields.isNpc )
    return v10;
  if ( !this->fields.questRestrictionInfo )
    goto LABEL_32;
  qrs_high = HIDWORD(v15[1].fields.qrs);
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(this->fields.questRestrictionInfo, qrs_high, 0LL) )
    return 0;
  v19 = this->fields.followerInfo;
  v20 = this->fields.questRestrictionInfo;
  v21 = this->fields.followerIndex;
  if ( v20 )
  {
    v22 = FollowerInfo__GetReturnTypeByQuestId(v20->fields.questId, v17);
    if ( !v19 )
      goto LABEL_32;
  }
  else
  {
    v22 = 0;
    if ( !v19 )
      goto LABEL_32;
  }
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v19, v21, v22, v18);
  if ( !ServantLeaderInfo )
    goto LABEL_32;
  v24 = ServantLeaderInfo;
  v25 = this->fields.questRestrictionInfo;
  v27 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v27;
  *(_QWORD *)&v32.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
  limitCount = v24->fields.limitCount;
  v30 = v28;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(v24, 0LL);
  if ( !v25 )
LABEL_32:
    sub_B170D4();
  return QuestRestrictionInfo__IsRestrictionServantIndividuality(v25, v30, limitCount, DispLimitCount, qrs_high, 1, 0LL);
}


bool __fastcall FollowerSelectItemListViewItem__ChkWholeFilter(
        FollowerSelectItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  if ( !sort )
    sub_B170D4();
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
  const MethodInfo *v4; // x5
  __int64 v8; // x1
  FollowerInfo_o *followerInfo; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w3
  BalanceConfig_c *v13; // x0
  SkillInfo_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F8F0F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&SkillInfo___TypeInfo, v8);
    byte_40F8F0F = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                              questRestrictionInfo->fields.questId,
                              (const MethodInfo *)skillInfoList);
    else
      ReturnTypeByQuestId = 0;
    FollowerInfo__GetAppendSkillInfo(followerInfo, skillInfoList, followerIndex, ReturnTypeByQuestId, isNpc, v4);
    return 1;
  }
  else
  {
    v13 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = (SkillInfo_array *)sub_B17014(
                               SkillInfo___TypeInfo,
                               (unsigned int)v13->static_fields->SvtAppendPassiveSkillListMax,
                               isNpc);
    *skillInfoList = v14;
    sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    return 0;
  }
}


EventCampaignEntity_o *__fastcall FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 SvtId; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x8
  int max_length; // w9
  int v8; // w11
  EventCampaignEntity_o *v9; // x10
  EventCampaignEntity_o *v10; // x13
  EventCampaignEntity_o *v12; // x12
  struct System_Int32_array *targetIds; // x15
  __int64 v14; // x14
  __int64 v15; // x16
  int32_t *v16; // x15

  if ( !this->fields.friendPointCampaignEntityList )
    return 0LL;
  SvtId = FollowerSelectItemListViewItem__get_SvtId(this, method);
  if ( (int)SvtId < 1 )
    return 0LL;
  friendPointCampaignEntityList = this->fields.friendPointCampaignEntityList;
  if ( !friendPointCampaignEntityList )
LABEL_29:
    sub_B170D4();
  max_length = friendPointCampaignEntityList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = 0LL;
    v10 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
      {
        sub_B17100(SvtId, v4, v5);
        sub_B170A0();
      }
      v12 = friendPointCampaignEntityList->m_Items[v8];
      if ( !v12 )
        goto LABEL_29;
      targetIds = v12->fields.targetIds;
      if ( targetIds && (v14 = *(_QWORD *)&targetIds->max_length) != 0 )
      {
        if ( !this->fields.isNpc && (!v9 || v12->fields.idx > v9->fields.idx) && (int)v14 >= 1 )
        {
          v15 = 0LL;
          v16 = &targetIds->m_Items[1];
          while ( v16[v15] != (_DWORD)SvtId )
          {
            if ( (int)++v15 >= (int)v14 )
              goto LABEL_22;
          }
          v9 = friendPointCampaignEntityList->m_Items[v8];
        }
      }
      else if ( !v10 || v12->fields.idx > v10->fields.idx )
      {
        goto LABEL_23;
      }
LABEL_22:
      v12 = v10;
LABEL_23:
      ++v8;
      v10 = v12;
      if ( v8 >= max_length )
        goto LABEL_26;
    }
  }
  v12 = 0LL;
  v9 = 0LL;
LABEL_26:
  if ( v9 )
    return v9;
  else
    return v12;
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

  if ( (byte_40F8F0E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    sub_B16FFC(&StringLiteral_6364/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, v5);
    byte_40F8F0E = 1;
  }
  if ( !this->fields.friendPointCampaignEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_6364/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, 0LL);
  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( !friendPointCampaignEntity )
    sub_B170D4();
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
  const MethodInfo *v2; // x3
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  int32_t result; // w0
  int32_t FriendPointUpVal; // w0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  FollowerInfo_o *v12; // x21
  struct QuestRestrictionInfo_o *v13; // x8
  int32_t v14; // w22
  int32_t v15; // w20
  int32_t v16; // w2
  int32_t friendPointUpMaxVal; // w8
  bool v18; // vf
  int v19; // w8

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, method);
  else
    ReturnTypeByQuestId = 0;
  FriendPointUpVal = FollowerInfo__getFriendPointUpVal(followerInfo, followerIndex, ReturnTypeByQuestId, v2);
  v12 = this->fields.followerInfo;
  v13 = this->fields.questRestrictionInfo;
  v14 = this->fields.followerIndex;
  v15 = FriendPointUpVal;
  if ( !v13 )
  {
    v16 = 0;
    if ( v12 )
      goto LABEL_8;
LABEL_15:
    sub_B170D4();
  }
  v16 = FollowerInfo__GetReturnTypeByQuestId(v13->fields.questId, v10);
  if ( !v12 )
    goto LABEL_15;
LABEL_8:
  if ( FollowerInfo__getFriendPointUpType(v12, v14, v16, v11) != 104 )
    return this->fields.friendPointUpVal + v15;
  friendPointUpMaxVal = this->fields.friendPointUpMaxVal;
  if ( friendPointUpMaxVal < 1 )
    return this->fields.friendPointUpVal + v15;
  result = this->fields.friendPointUpVal;
  v18 = __OFSUB__(v15, friendPointUpMaxVal);
  v19 = v15 - friendPointUpMaxVal;
  if ( !((v19 < 0) ^ v18 | (v19 == 0)) )
    result += v19;
  return result;
}


bool __fastcall FollowerSelectItemListViewItem__GetNpInfo(
        FollowerSelectItemListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w3
  TreasureDvcInfo_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F8F0D & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_40F8F0D = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                              questRestrictionInfo->fields.questId,
                              (const MethodInfo *)tdInfo);
    else
      ReturnTypeByQuestId = 0;
    return FollowerInfo__getTreasureDeviceInfo(followerInfo, tdInfo, followerIndex, ReturnTypeByQuestId, v4);
  }
  else
  {
    v11 = (TreasureDvcInfo_o *)sub_B170CC(TreasureDvcInfo_TypeInfo, tdInfo, method, v3, v4);
    TreasureDvcInfo___ctor(v11, 0LL);
    *tdInfo = v11;
    sub_B16F98((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
    return 0;
  }
}


bool __fastcall FollowerSelectItemListViewItem__GetSkillInfo(
        FollowerSelectItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w3
  BalanceConfig_c *v11; // x0
  SkillInfo_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F8F0C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&SkillInfo___TypeInfo, v6);
    byte_40F8F0C = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                              questRestrictionInfo->fields.questId,
                              (const MethodInfo *)skillInfoList);
    else
      ReturnTypeByQuestId = 0;
    FollowerInfo__getSkillInfo(followerInfo, skillInfoList, followerIndex, ReturnTypeByQuestId, v3);
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
    v12 = (SkillInfo_array *)sub_B17014(SkillInfo___TypeInfo, (unsigned int)v11->static_fields->SvtSkillListMax, method);
    *skillInfoList = v12;
    sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
    return 0;
  }
}


int32_t __fastcall FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
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
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, method);
  else
    ReturnTypeByQuestId = 0;
  return FollowerInfo__getTreasureDeviceLevelIcon(followerInfo, followerIndex, ReturnTypeByQuestId, v2);
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
  EquipTargetInfo_o *EquipInfo; // x0
  __int64 v16; // x19
  __int64 v17; // x20
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x19
  const MethodInfo *v19; // x1
  EquipTargetInfo_o *v20; // x0
  __int64 v21; // x20
  __int64 v22; // x21
  int32_t v23; // w0
  ServantSkillEntity_array *ServantSkillList; // x19
  SkillLvMaster_o *v25; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x21
  const MethodInfo *v27; // x1
  EquipTargetInfo_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v32; // x22
  unsigned __int64 v33; // x24
  int v34; // w26
  int max_length; // w8
  unsigned int v36; // w9
  ServantSkillEntity_o *v37; // x10
  SkillLvEntity_o *v38; // x8
  unsigned __int64 v39; // x28
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v41; // x9
  int age; // w8
  unsigned __int64 v43; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_string__int__c **v45; // x8
  System_Collections_Generic_Dictionary_string__int__o *v46; // x23
  WarEntity_o *v47; // [xsp+0h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_40F8F08 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantSkillMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1151/*"3"*/, v12);
    byte_40F8F08 = 1;
  }
  v47 = 0LL;
  entity = 0LL;
  result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                     this,
                                                                     *(const MethodInfo **)&kind);
  if ( result )
  {
    EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(this, v14);
    if ( !EquipInfo )
      goto LABEL_77;
    v17 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v49.fields.currentCryptoKey = v17;
    *(_QWORD *)&v49.fields.fakeValue = v16;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v49, 0LL) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      v20 = FollowerSelectItemListViewItem__get_EquipInfo(this, v19);
      if ( !v20 )
        goto LABEL_77;
      v22 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v50.fields.currentCryptoKey = v22;
      *(_QWORD *)&v50.fields.fakeValue = v21;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      ServantSkillList = ServantSkillMaster__getServantSkillList(Master_WarQuestSelectionMaster, v23, 0LL);
      v25 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
      v28 = FollowerSelectItemListViewItem__get_EquipInfo(this, v27);
      if ( !v28 )
        goto LABEL_77;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(v28, 0LL);
      if ( !result )
        goto LABEL_77;
      entries = result->fields.entries;
      v32 = result;
      if ( (int)entries >= 1 )
      {
        v33 = 0LL;
        v34 = kind - 1;
        while ( 1 )
        {
          if ( v33 >= (unsigned int)entries )
            goto LABEL_78;
          if ( !ServantSkillList )
            goto LABEL_77;
          max_length = ServantSkillList->max_length;
          v30 = *((unsigned int *)&v32->fields.count + v33);
          if ( max_length >= 1 )
          {
            v36 = 0;
            while ( v36 < max_length )
            {
              v37 = ServantSkillList->m_Items[v36];
              if ( !v37 )
                goto LABEL_77;
              if ( v37->fields.skillId == (_DWORD)v30 && v37->fields.eventId > 0 )
                goto LABEL_74;
              if ( (int)++v36 >= max_length )
                goto LABEL_30;
            }
LABEL_78:
            sub_B17100(result, v29, v30);
            sub_B170A0();
          }
LABEL_30:
          if ( !v25 )
            goto LABEL_77;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             v25,
                                                                             &entity,
                                                                             v30,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_74:
          LODWORD(entries) = v32->fields.entries;
          if ( (__int64)++v33 >= (int)entries )
            return 0LL;
        }
        v38 = entity;
        if ( entity )
        {
          v39 = 0LL;
          while ( 1 )
          {
            funcId = v38->fields.funcId;
            if ( !funcId )
              break;
            v41 = funcId->max_length;
            if ( (__int64)v39 >= (int)v41 )
              goto LABEL_74;
            if ( v39 >= v41 )
              goto LABEL_78;
            if ( v26 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                 v26,
                                                                                 &v47,
                                                                                 funcId->m_Items[v39 + 1],
                                                                                 (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v34 )
                {
                  case 0:
                    if ( !v47 )
                      goto LABEL_77;
                    age = (int)v47->fields.age;
                    if ( age != 104 && age != 123 )
                      break;
                    goto LABEL_55;
                  case 1:
                    if ( !v47 )
                      goto LABEL_77;
                    if ( LODWORD(v47->fields.age) != 101 )
                      break;
                    goto LABEL_55;
                  case 2:
                    if ( !v47 )
                      goto LABEL_77;
                    if ( LODWORD(v47->fields.age) != 112 )
                      break;
                    goto LABEL_55;
                  case 3:
                    if ( !v47 )
                      goto LABEL_77;
                    if ( LODWORD(v47->fields.age) == 111 )
                      goto LABEL_55;
                    break;
                  case 4:
                    if ( !v47 )
                      goto LABEL_77;
                    if ( (LODWORD(v47->fields.age) | 8) != 110 )
                      break;
                    goto LABEL_55;
                  case 5:
                    if ( !v47 )
                      goto LABEL_77;
                    if ( LODWORD(v47->fields.age) != 106 )
                      break;
                    if ( !entity )
                      goto LABEL_77;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_77;
                    entries_low = LODWORD(result->fields.entries);
                    if ( (__int64)v39 > (int)entries_low )
                      break;
                    if ( v39 >= entries_low )
                      goto LABEL_78;
                    v45 = &result->klass + v39;
                    v46 = (System_Collections_Generic_Dictionary_string__int__o *)v45[4];
                    if ( !v46 )
                      break;
                    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v45[4],
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_1151/*"3"*/,
                           (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                         v46,
                                                                                         (System_String_o *)StringLiteral_1151/*"3"*/,
                                                                                         (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( (_DWORD)result )
                        break;
                    }
LABEL_55:
                    if ( !entity )
                      goto LABEL_77;
                    result = SkillLvEntity__GetFollowerValsDictionary(entity, 0LL);
                    if ( result )
                      return result;
                    if ( !entity )
                      goto LABEL_77;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(
                                                                                       entity,
                                                                                       0LL);
                    if ( !result )
                      goto LABEL_77;
                    v43 = LODWORD(result->fields.entries);
                    if ( (__int64)v39 >= (int)v43 )
                      break;
                    if ( v39 >= v43 )
                      goto LABEL_78;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields.count
                                                                                     + v39);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_55;
                }
              }
              v38 = entity;
              ++v39;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_77:
        sub_B170D4();
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
  int32_t ReturnTypeByQuestId; // w2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x4
  FollowerInfo_o *v11; // x21
  struct QuestRestrictionInfo_o *v12; // x20
  int32_t v13; // w22
  int32_t v14; // w3
  bool UniqueSvtRestriction; // w0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x4
  FollowerInfo_o *v18; // x21
  struct QuestRestrictionInfo_o *v19; // x20
  int32_t v20; // w22
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  followerInfo = this->fields.followerInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  this->fields.friendPointUpVal = friendPointUpVal;
  this->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  if ( questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                            questRestrictionInfo->fields.questId,
                            *(const MethodInfo **)&friendPointUpVal);
    if ( !followerInfo )
      goto LABEL_15;
  }
  else
  {
    ReturnTypeByQuestId = 0;
    if ( !followerInfo )
      goto LABEL_15;
  }
  if ( FollowerInfo__getSvtId(followerInfo, followerIndex, ReturnTypeByQuestId, method) < 1 )
  {
    *(_WORD *)&this->fields.isUniqueSvtRestriction = 0;
    this->fields._IsSlotRestriction_k__BackingField = 0;
  }
  else
  {
    v11 = this->fields.followerInfo;
    v12 = this->fields.questRestrictionInfo;
    v13 = this->fields.followerIndex;
    if ( v12 )
    {
      v14 = FollowerInfo__GetReturnTypeByQuestId(v12->fields.questId, v9);
      if ( !v11 )
LABEL_15:
        sub_B170D4();
    }
    else
    {
      v14 = 0;
      if ( !v11 )
        goto LABEL_15;
    }
    UniqueSvtRestriction = FollowerInfo__getUniqueSvtRestriction(v11, v12, v13, v14, v10);
    v18 = this->fields.followerInfo;
    v19 = this->fields.questRestrictionInfo;
    v20 = this->fields.followerIndex;
    this->fields.isUniqueSvtRestriction = UniqueSvtRestriction;
    if ( v19 )
    {
      v21 = FollowerInfo__GetReturnTypeByQuestId(v19->fields.questId, v16);
      if ( !v18 )
        goto LABEL_15;
    }
    else
    {
      v21 = 0;
      if ( !v18 )
        goto LABEL_15;
    }
    this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                      v18,
                                                      v19,
                                                      v20,
                                                      v21,
                                                      v17);
    this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v22);
    FollowerSelectItemListViewItem__SetEventUpInfo(this, v23);
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
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x20
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x7
  FollowerInfo_o *followerInfo; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventUpValSetupInfo_o *v27; // x23
  int32_t followerIndex; // w24
  int32_t ReturnTypeByQuestId; // w6
  bool *p_isEquipEventUpVal; // x21
  const MethodInfo *v31; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  ServantLeaderInfo_o *v37; // x0
  PartyOrganizationUtility_o *v38; // x22
  const MethodInfo *v39; // x1
  ServantLeaderInfo_o *v40; // x0
  __int64 v41; // x23
  __int64 v42; // x24
  int32_t v43; // w23
  const MethodInfo *v44; // x1
  ServantLeaderInfo_o *v45; // x0
  int32_t Rarity; // w24
  const MethodInfo *v47; // x1
  ServantLeaderInfo_o *v48; // x0
  struct EquipTargetInfo_o *equipTarget1; // x8
  int32_t v50; // w0
  bool v51; // w8
  struct EventUpValSetupInfo_o *v52; // x9
  struct System_Int32_array *v53; // x8
  int32_t v54; // w21
  ServantEntity_o *servantEntity; // x23
  EventPersonalMargeUpValInfo_o *v56; // x22
  EventUpValInfo_o *eventUpValInfo; // x0
  EventDropItemUpValInfo_array *DropItemList; // x0
  const MethodInfo *v59; // x1
  System_Int32_array **List; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x0
  EventServantPointRankMaster_o *v68; // x23
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  System_Collections_Generic_IEnumerable_T__o *v73; // x24
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v74; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *v75; // x22
  const MethodInfo *v76; // x1
  ServantLeaderInfo_o *v77; // x0
  const MethodInfo *v78; // x1
  int32_t eventSvtPoint; // w24
  ServantLeaderInfo_o *v80; // x0
  __int64 v81; // x25
  __int64 v82; // x26
  int32_t v83; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int32_t v89; // w23
  EventMargeItemUpValInfo_o *v90; // x24
  const MethodInfo *v91; // x1
  ServantLeaderInfo_o *v92; // x0
  System_Int32_array **v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  int32_t actMaxRarity; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_40F8F07 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&EventMargeItemUpValInfo_TypeInfo, v10);
    sub_B16FFC(&EventPersonalMargeUpValInfo_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___66732000, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v19);
    byte_40F8F07 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  setupInfo = this->fields.setupInfo;
  if ( !setupInfo )
    return;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_62;
  if ( !*(_QWORD *)&eventIdList->max_length )
    return;
  *(_WORD *)&this->fields.isServantEventUpVal = 0;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValItemList = 0LL;
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventUpValItemList, 0LL, v2, v3, v4, v5, v6, v7);
  followerInfo = this->fields.followerInfo;
  v27 = this->fields.setupInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, v23);
    if ( !followerInfo )
      goto LABEL_62;
  }
  else
  {
    ReturnTypeByQuestId = 0;
    if ( !followerInfo )
      goto LABEL_62;
  }
  p_isEquipEventUpVal = &this->fields.isEquipEventUpVal;
  FollowerInfo__getEventUpVal_23237200(
    followerInfo,
    &this->fields.eventUpValInfo,
    &this->fields.isServantEventUpVal,
    &this->fields.isEquipEventUpVal,
    v27,
    followerIndex,
    ReturnTypeByQuestId,
    v24);
  if ( !this->fields.isServantBonusFilterEnable )
    this->fields.isServantEventUpVal = 0;
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v31);
  if ( !ServantLeader )
  {
LABEL_27:
    if ( ((unsigned __int8)ServantLeader & 1) != 0 )
      goto LABEL_31;
    goto LABEL_28;
  }
  v37 = FollowerSelectItemListViewItem__get_ServantLeader(this, v33);
  if ( !v37 )
    goto LABEL_62;
  if ( v37->fields.equipTarget1 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v38 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v40 = FollowerSelectItemListViewItem__get_ServantLeader(this, v39);
    if ( !v40 )
      goto LABEL_62;
    v42 = *(_QWORD *)&v40->fields.svtId.fields.currentCryptoKey;
    v41 = *(_QWORD *)&v40->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v102.fields.currentCryptoKey = v42;
    *(_QWORD *)&v102.fields.fakeValue = v41;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v102, 0LL);
    v45 = FollowerSelectItemListViewItem__get_ServantLeader(this, v44);
    if ( !v45 )
      goto LABEL_62;
    Rarity = ServantLeaderInfo__getRarity(v45, 0LL);
    v48 = FollowerSelectItemListViewItem__get_ServantLeader(this, v47);
    if ( !v48 )
      goto LABEL_62;
    equipTarget1 = v48->fields.equipTarget1;
    if ( !equipTarget1 )
      goto LABEL_62;
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(equipTarget1->fields.svtId, 0LL);
    if ( !v38 )
      goto LABEL_62;
    ServantLeader = (ServantLeaderInfo_o *)PartyOrganizationUtility__IsRarityRestriction(
                                             v38,
                                             &skillName,
                                             &actMaxRarity,
                                             v43,
                                             Rarity,
                                             v50,
                                             -1,
                                             0LL);
    goto LABEL_27;
  }
  ServantLeader = 0LL;
LABEL_28:
  if ( this->fields.isServantEquipBonusFilterEnable )
  {
    v51 = *p_isEquipEventUpVal;
    goto LABEL_32;
  }
LABEL_31:
  v51 = 0;
  *p_isEquipEventUpVal = 0;
LABEL_32:
  v52 = this->fields.setupInfo;
  this->fields.isEventUpVal = v51 || this->fields.isServantEventUpVal;
  if ( !v52 )
    goto LABEL_62;
  v53 = v52->fields.eventIdList;
  if ( !v53 )
    goto LABEL_62;
  if ( !v53->max_length )
  {
    sub_B17100(ServantLeader, v33, v34);
    sub_B170A0();
  }
  v54 = v53->m_Items[1];
  servantEntity = this->fields.servantEntity;
  v56 = (EventPersonalMargeUpValInfo_o *)sub_B170CC(EventPersonalMargeUpValInfo_TypeInfo, v33, v34, v35, v36);
  EventPersonalMargeUpValInfo___ctor(v56, v54, servantEntity, 0LL);
  eventUpValInfo = this->fields.eventUpValInfo;
  if ( !eventUpValInfo )
    goto LABEL_62;
  DropItemList = EventUpValInfo__GetDropItemList(eventUpValInfo, 0, 0LL);
  if ( !v56 )
    goto LABEL_62;
  EventPersonalMargeUpValInfo__Add(v56, DropItemList, 0LL);
  if ( !EventPersonalMargeUpValInfo__IsEmpty(v56, 0LL) )
  {
    List = (System_Int32_array **)EventPersonalMargeUpValInfo__GetList(v56, 0LL);
    *p_eventUpValItemList = (struct EventMargeItemUpValInfo_array *)List;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventUpValItemList, List, v61, v62, v63, v64, v65, v66);
  }
  if ( !this->fields.isNpc && FollowerSelectItemListViewItem__get_ServantLeader(this, v59) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_62;
    v68 = Master_WarQuestSelectionMaster;
    if ( EventServantPointRankMaster__IsEnableEvent(Master_WarQuestSelectionMaster, v54, 0LL) )
    {
      v73 = (System_Collections_Generic_IEnumerable_T__o *)*p_eventUpValItemList;
      v74 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                              System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                              v69,
                                                                              v70,
                                                                              v71,
                                                                              v72);
      v75 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v74;
      if ( v73 )
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v74,
          v73,
          (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___66732000);
      else
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v74,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v77 = FollowerSelectItemListViewItem__get_ServantLeader(this, v76);
      if ( v77 )
      {
        eventSvtPoint = v77->fields.eventSvtPoint;
        v80 = FollowerSelectItemListViewItem__get_ServantLeader(this, v78);
        if ( v80 )
        {
          v82 = *(_QWORD *)&v80->fields.svtId.fields.currentCryptoKey;
          v81 = *(_QWORD *)&v80->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v103.fields.currentCryptoKey = v82;
          *(_QWORD *)&v103.fields.fakeValue = v81;
          v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v103, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v68, v54, eventSvtPoint, v83, 0LL);
          v89 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
          v90 = (EventMargeItemUpValInfo_o *)sub_B170CC(EventMargeItemUpValInfo_TypeInfo, v85, v86, v87, v88);
          EventMargeItemUpValInfo___ctor_22495068(v90, v54, 0LL);
          v92 = FollowerSelectItemListViewItem__get_ServantLeader(this, v91);
          if ( v92 )
          {
            if ( v90 )
            {
              EventMargeItemUpValInfo__SetServantPointInfo(v90, v92->fields.eventSvtPoint, v89, 1, 0LL);
              if ( v75 )
              {
                System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                  v75,
                  0,
                  (XWeaponTrail_Element_o *)v90,
                  (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                v93 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v75,
                                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
                *p_eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v93;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields.eventUpValItemList,
                  v93,
                  v94,
                  v95,
                  v96,
                  v97,
                  v98,
                  v99);
                return;
              }
            }
          }
        }
      }
LABEL_62:
      sub_B170D4();
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
  const MethodInfo *v3; // x3
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
  struct FollowerInfo_o *followerInfo; // x21
  int32_t type; // w27
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w2
  const MethodInfo *v22; // x1
  int32_t SvtId; // w21
  IconLabelInfo_o *iconLabelInfo2; // x0
  const MethodInfo *v25; // x2
  int64_t *p_sortValue0; // x26
  int32_t priorityKind; // w23
  System_Collections_Generic_Dictionary_string__int__o *ValuesDictionary; // x22
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x3
  EquipTargetInfo_o *v32; // x0
  __int64 v33; // x24
  __int64 v34; // x25
  int32_t v35; // w0
  int32_t Item; // w0
  const MethodInfo *v37; // x1
  int v38; // w8
  const MethodInfo *v39; // x1
  EquipTargetInfo_o *EquipInfo; // x0
  const MethodInfo *v41; // x1
  int32_t limitCount; // w22
  BalanceConfig_c *v43; // x0
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x2
  EquipTargetInfo_o *v46; // x0
  __int64 v47; // x22
  __int64 v48; // x23
  System_String_o *v49; // x22
  System_String_o *v50; // x23
  WebViewManager_o *Instance; // x0
  int32_t MaxIndividualFilter; // w0
  int v53; // w25
  int32_t v54; // w24
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  int32_t Int_34836848; // w26
  const MethodInfo *v60; // x1
  EquipTargetInfo_o *v61; // x0
  __int64 v62; // x27
  __int64 v63; // x28
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  int32_t v68; // w26
  const MethodInfo *v69; // x1
  EquipTargetInfo_o *v70; // x0
  __int64 v71; // x27
  __int64 v72; // x28
  int32_t v73; // w3
  __int64 *v75; // x23
  int64_t v76; // x22
  const MethodInfo *v77; // x1
  EquipTargetInfo_o *v78; // x0
  const MethodInfo *v79; // x1
  int32_t hp; // w23
  EquipTargetInfo_o *v81; // x0
  const MethodInfo *v82; // x1
  int64_t v83; // x22
  EquipTargetInfo_o *v84; // x0
  int32_t v85; // w23
  int64_t v86; // x8
  __int64 v87; // x22
  EquipTargetInfo_o *v88; // x0
  const MethodInfo *v89; // x1
  int32_t v90; // w23
  EquipTargetInfo_o *v91; // x0
  const MethodInfo *v92; // x1
  int64_t v93; // x22
  EquipTargetInfo_o *v94; // x0
  int32_t v95; // w23
  int32_t sortKind; // w8
  IconLabelInfo_o *v97; // x20
  FollowerInfo_o *v98; // x21
  struct QuestRestrictionInfo_o *v99; // x8
  int32_t v100; // w22
  int32_t v101; // w2
  FollowerInfo_o *v102; // x20
  struct QuestRestrictionInfo_o *v103; // x8
  int32_t v104; // w21
  int32_t v105; // w2
  IconLabelInfo_o *iconLabelInfo1; // x0
  const MethodInfo *v107; // x1
  IconLabelInfo_o *v108; // x0
  const MethodInfo *v109; // x1
  int32_t index; // w8
  int32_t Lv; // w0
  const MethodInfo *v112; // x1
  const MethodInfo *v113; // x3
  FollowerInfo_o *v114; // x22
  struct QuestRestrictionInfo_o *v115; // x8
  int32_t v116; // w23
  int32_t v117; // w21
  int32_t v118; // w2
  int32_t MaxLv; // w0
  int64_t classIndex; // x8
  int64_t deckPriority; // x9
  FollowerInfo_o *v122; // x0
  int64_t v123; // x8
  FollowerInfo_o *v124; // x20
  struct QuestRestrictionInfo_o *v125; // x8
  int32_t v126; // w21
  int32_t v127; // w2
  FollowerInfo_o *v128; // x20
  struct QuestRestrictionInfo_o *v129; // x8
  int32_t v130; // w21
  int32_t v131; // w2
  int64_t sortValue2; // x9
  IconLabelInfo_o *v133; // x20
  FollowerInfo_o *v134; // x21
  struct QuestRestrictionInfo_o *v135; // x8
  int32_t v136; // w22
  FollowerInfo_o *v137; // x0
  int64_t v138; // x8
  int32_t v139; // w0
  int32_t v140; // w2
  int32_t Atk; // w0
  const MethodInfo *v142; // x1
  const MethodInfo *v143; // x3
  FollowerInfo_o *v144; // x20
  struct QuestRestrictionInfo_o *v145; // x8
  int32_t v146; // w22
  int32_t v147; // w21
  int32_t v148; // w2
  int32_t v149; // w0
  const MethodInfo *v150; // x1
  const MethodInfo *v151; // x3
  FollowerInfo_o *v152; // x20
  struct QuestRestrictionInfo_o *v153; // x8
  int32_t v154; // w22
  int32_t v155; // w21
  int32_t v156; // w2
  int32_t EquipAtk; // w0
  const MethodInfo *v158; // x1
  const MethodInfo *v159; // x3
  IconLabelInfo_o *v160; // x20
  FollowerInfo_o *v161; // x22
  struct QuestRestrictionInfo_o *v162; // x8
  int32_t v163; // w23
  int32_t v164; // w2
  int32_t EquipHp; // w0
  const MethodInfo *v166; // x1
  const MethodInfo *v167; // x3
  FollowerInfo_o *v168; // x22
  struct QuestRestrictionInfo_o *v169; // x8
  int32_t v170; // w23
  int32_t v171; // w2
  int32_t v172; // w0
  const MethodInfo *v173; // x1
  const MethodInfo *v174; // x3
  FollowerInfo_o *v175; // x22
  struct QuestRestrictionInfo_o *v176; // x8
  int32_t v177; // w23
  int32_t v178; // w21
  int32_t v179; // w2
  int32_t v180; // w0
  const MethodInfo *v181; // x1
  const MethodInfo *v182; // x3
  FollowerInfo_o *v183; // x22
  struct QuestRestrictionInfo_o *v184; // x8
  int32_t v185; // w23
  int32_t v186; // w2
  int32_t AdjustAtk; // w0
  const MethodInfo *v188; // x1
  const MethodInfo *v189; // x3
  FollowerInfo_o *v190; // x23
  struct QuestRestrictionInfo_o *v191; // x8
  int32_t v192; // w24
  int32_t v193; // w22
  int32_t v194; // w2
  int32_t AdjustHp; // w0
  const MethodInfo *v196; // x1
  const MethodInfo *v197; // x3
  FollowerInfo_o *v198; // x23
  struct QuestRestrictionInfo_o *v199; // x8
  int32_t v200; // w24
  int32_t v201; // w2
  int32_t v202; // w0
  int32_t v203; // w4
  int32_t v204; // w1
  int32_t v205; // w0
  int32_t v206; // w0
  const MethodInfo *v207; // x1
  const MethodInfo *v208; // x3
  FollowerInfo_o *v209; // x22
  struct QuestRestrictionInfo_o *v210; // x8
  int32_t v211; // w23
  int32_t v212; // w21
  int32_t v213; // w2
  int32_t v214; // w0
  int64_t servantEntity; // x8
  _BOOL4 isQuestRestriction; // w9
  __int64 v217; // x10
  __int64 v218; // x11
  int64_t v219; // x9
  EventBonusFilterGroupMemberMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-68h]
  EventBonusFilterGroupMemberEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int v222; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v224; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v225; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v226; // 0:x0.16

  if ( (byte_40F8F09 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, sort);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&ServantBonusFilterSelectMenu_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_1102/*"2"*/, v12);
    sub_B16FFC(&StringLiteral_2825/*"BonusFilterEquipId"*/, v13);
    sub_B16FFC(&StringLiteral_2827/*"BonusFilterGroupId"*/, v14);
    sub_B16FFC(&StringLiteral_1004/*"1"*/, v15);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v16);
    byte_40F8F09 = 1;
  }
  v222 = 0;
  entity = 0LL;
  followerInfo = this->fields.followerInfo;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = 0LL;
  if ( !followerInfo )
    goto LABEL_198;
  type = followerInfo->fields.type;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(
                            questRestrictionInfo->fields.questId,
                            (const MethodInfo *)sort);
  else
    ReturnTypeByQuestId = 0;
  SvtId = FollowerInfo__getSvtId(followerInfo, followerIndex, ReturnTypeByQuestId, v3);
  if ( this->fields.isBonusFilterEnable && !this->fields.isNpc )
  {
    if ( FollowerSelectItemListViewItem__get_EquipInfo(this, v22) )
    {
      EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(this, v39);
      if ( !EquipInfo )
        goto LABEL_198;
      limitCount = EquipInfo->fields.limitCount;
      v43 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v43 = BalanceConfig_TypeInfo;
      }
      if ( limitCount >= v43->static_fields->ServantLimitMax )
        goto LABEL_201;
    }
    if ( !sort )
      goto LABEL_198;
    if ( ListViewSort__GetFilter(sort, 40, 0LL) )
    {
LABEL_201:
      if ( !FollowerSelectItemListViewItem__get_EquipInfo(this, v41) )
        goto LABEL_59;
      v46 = FollowerSelectItemListViewItem__get_EquipInfo(this, v44);
      if ( !v46 )
        goto LABEL_198;
      v48 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v224.fields.currentCryptoKey = v48;
      *(_QWORD *)&v224.fields.fakeValue = v47;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v224, 0LL) < 1 )
        goto LABEL_59;
      if ( !sort )
        goto LABEL_198;
      if ( ListViewSort__GetFilter(sort, 41, 0LL) )
        goto LABEL_59;
      v49 = (System_String_o *)StringLiteral_2825/*"BonusFilterEquipId"*/;
      v50 = (System_String_o *)StringLiteral_2827/*"BonusFilterGroupId"*/;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_198;
      MasterData_WarQuestSelectionMaster = (EventBonusFilterGroupMemberMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    (DataManager_o *)Instance,
                                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      }
      MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v222 = 0;
      if ( MaxIndividualFilter < 1 )
      {
LABEL_59:
        if ( FollowerSelectItemListViewItem__ChkWholeFilter(this, sort, v45) )
          goto LABEL_9;
      }
      else
      {
        v53 = MaxIndividualFilter;
        v54 = type;
        while ( 1 )
        {
          v55 = System_Int32__ToString((int32_t)&v222, 0LL);
          v56 = System_String__Concat_43743732(v49, v55, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v56, 0LL) )
          {
            v57 = System_Int32__ToString((int32_t)&v222, 0LL);
            v58 = System_String__Concat_43743732(v49, v57, 0LL);
            Int_34836848 = UnityEngine_PlayerPrefs__GetInt_34836848(v58, 0LL);
            v61 = FollowerSelectItemListViewItem__get_EquipInfo(this, v60);
            if ( !v61 )
              goto LABEL_198;
            v63 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
            v62 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v225.fields.currentCryptoKey = v63;
            *(_QWORD *)&v225.fields.fakeValue = v62;
            type = v54;
            if ( Int_34836848 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v225, 0LL) )
              break;
          }
          v64 = System_Int32__ToString((int32_t)&v222, 0LL);
          v65 = System_String__Concat_43743732(v50, v64, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v65, 0LL) )
          {
            v66 = System_Int32__ToString((int32_t)&v222, 0LL);
            v67 = System_String__Concat_43743732(v50, v66, 0LL);
            v68 = UnityEngine_PlayerPrefs__GetInt_34836848(v67, 0LL);
            v70 = FollowerSelectItemListViewItem__get_EquipInfo(this, v69);
            if ( !v70 )
              goto LABEL_198;
            v72 = *(_QWORD *)&v70->fields.svtId.fields.currentCryptoKey;
            v71 = *(_QWORD *)&v70->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v226.fields.currentCryptoKey = v72;
            *(_QWORD *)&v226.fields.fakeValue = v71;
            v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v226, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_198;
            type = v54;
            if ( EventBonusFilterGroupMemberMaster__TryGetEntity(
                   MasterData_WarQuestSelectionMaster,
                   &entity,
                   v68,
                   v73,
                   0LL) )
            {
              return 0;
            }
          }
          if ( ++v222 >= v53 )
            goto LABEL_59;
        }
      }
    }
    return 0;
  }
LABEL_9:
  iconLabelInfo2 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_198;
  IconLabelInfo__Clear(iconLabelInfo2, 0LL);
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  this->fields.sortValue0B = 0LL;
  if ( !sort )
    goto LABEL_198;
  priorityKind = sort->fields.priorityKind;
  ValuesDictionary = FollowerSelectItemListViewItem__GetValuesDictionary(this, priorityKind, v25);
  if ( FollowerSelectItemListViewItem__get_EquipInfo(this, v29) )
  {
    v32 = FollowerSelectItemListViewItem__get_EquipInfo(this, v30);
    if ( !v32 )
      goto LABEL_198;
    v34 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v223.fields.currentCryptoKey = v34;
    *(_QWORD *)&v223.fields.fakeValue = v33;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v223, 0LL);
    if ( ValuesDictionary )
    {
      if ( v35 >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v75 = &StringLiteral_1102/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_87;
            v75 = &StringLiteral_951/*"0"*/;
          }
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                 (System_Xml_XmlQualifiedName_o *)*v75,
                 (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            v76 = 100000LL
                * System_Collections_Generic_Dictionary_string__int___get_Item(
                    ValuesDictionary,
                    (System_String_o *)*v75,
                    (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            this->fields.sortValue0 = v76;
            v78 = FollowerSelectItemListViewItem__get_EquipInfo(this, v77);
            if ( v78 )
            {
              hp = v78->fields.hp;
              v81 = FollowerSelectItemListViewItem__get_EquipInfo(this, v79);
              if ( v81 )
              {
                v83 = v76 + 10LL * (v81->fields.atk + hp);
                this->fields.sortValue0 = v83;
                v84 = FollowerSelectItemListViewItem__get_EquipInfo(this, v82);
                if ( v84 )
                {
                  v85 = v84->fields.limitCount;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  v86 = v83 | (v85 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_86;
                }
              }
            }
LABEL_198:
            sub_B170D4();
          }
        }
        else if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                    (System_Xml_XmlQualifiedName_o *)StringLiteral_951/*"0"*/,
                    (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
               && System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                    (System_Xml_XmlQualifiedName_o *)StringLiteral_1004/*"1"*/,
                    (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
        {
          if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                 ValuesDictionary,
                 (System_String_o *)StringLiteral_951/*"0"*/,
                 (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
          {
            Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_1004/*"1"*/,
                     (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v38 = 100000;
          }
          else
          {
            if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                   ValuesDictionary,
                   (System_String_o *)StringLiteral_951/*"0"*/,
                   (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
            {
              v87 = *p_sortValue0;
              goto LABEL_77;
            }
            Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_1004/*"1"*/,
                     (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v38 = 100000000;
          }
          v87 = Item * (__int64)v38;
          *p_sortValue0 = v87;
LABEL_77:
          v88 = FollowerSelectItemListViewItem__get_EquipInfo(this, v37);
          if ( v88 )
          {
            v90 = v88->fields.hp;
            v91 = FollowerSelectItemListViewItem__get_EquipInfo(this, v89);
            if ( v91 )
            {
              v93 = v87 + 10LL * (v91->fields.atk + v90);
              this->fields.sortValue0 = v93;
              v94 = FollowerSelectItemListViewItem__get_EquipInfo(this, v92);
              if ( v94 )
              {
                v95 = v94->fields.limitCount;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                }
                if ( v95 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                  v86 = v93;
                else
                  v86 = v93 + 1;
LABEL_86:
                *p_sortValue0 = v86;
                goto LABEL_87;
              }
            }
          }
          goto LABEL_198;
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
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue2 = 0LL;
      this->fields.sortValue2B = 0LL;
      if ( !iconLabelInfo1 )
        goto LABEL_198;
      IconLabelInfo__Clear(iconLabelInfo1, 0LL);
    }
    else
    {
      v97 = this->fields.iconLabelInfo1;
      v98 = this->fields.followerInfo;
      v99 = this->fields.questRestrictionInfo;
      v100 = this->fields.followerIndex;
      this->fields.sortValue2 = this->fields.deckPriority;
      this->fields.sortValue2B = 1LL;
      if ( v99 )
      {
        v101 = FollowerInfo__GetReturnTypeByQuestId(v99->fields.questId, v30);
        if ( !v98 )
          goto LABEL_198;
      }
      else
      {
        v101 = 0;
        if ( !v98 )
          goto LABEL_198;
      }
      Lv = FollowerInfo__getLv(v98, v100, v101, v31);
      v114 = this->fields.followerInfo;
      v115 = this->fields.questRestrictionInfo;
      v116 = this->fields.followerIndex;
      v117 = Lv;
      if ( v115 )
      {
        v118 = FollowerInfo__GetReturnTypeByQuestId(v115->fields.questId, v112);
        if ( !v114 )
          goto LABEL_198;
      }
      else
      {
        v118 = 0;
        if ( !v114 )
          goto LABEL_198;
      }
      MaxLv = FollowerInfo__getMaxLv(v114, v116, v118, v113);
      if ( !v97 )
        goto LABEL_198;
      IconLabelInfo__Set_28888132(v97, 2, v117, MaxLv, 0, 0, 0, 0, 0LL);
    }
    classIndex = this->fields.classIndex;
    if ( (int)classIndex >= 1 )
    {
      deckPriority = this->fields.deckPriority;
      this->fields.sortValue2 = classIndex;
      this->fields.sortValue2B = deckPriority;
    }
    switch ( type )
    {
      case 1:
        v122 = this->fields.followerInfo;
        v123 = 5LL;
        goto LABEL_117;
      case 2:
        v122 = this->fields.followerInfo;
        v123 = 4LL;
        goto LABEL_117;
      case 3:
      case 4:
        goto LABEL_185;
      case 5:
        v122 = this->fields.followerInfo;
        v123 = 6LL;
LABEL_117:
        this->fields.sortValue0B = v123;
        if ( !v122 )
          goto LABEL_198;
        this->fields.sortValue1 = FollowerInfo__getUpdatedAt(v122, v107);
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
      v124 = this->fields.followerInfo;
      v125 = this->fields.questRestrictionInfo;
      v126 = this->fields.followerIndex;
      if ( v125 )
      {
        v127 = FollowerInfo__GetReturnTypeByQuestId(v125->fields.questId, v30);
        if ( !v124 )
          goto LABEL_198;
      }
      else
      {
        v127 = 0;
        if ( !v124 )
          goto LABEL_198;
      }
      Atk = FollowerInfo__getAtk(v124, v126, v127, v31);
      v144 = this->fields.followerInfo;
      v145 = this->fields.questRestrictionInfo;
      v146 = this->fields.followerIndex;
      v147 = Atk;
      if ( v145 )
      {
        v148 = FollowerInfo__GetReturnTypeByQuestId(v145->fields.questId, v142);
        if ( !v144 )
          goto LABEL_198;
      }
      else
      {
        v148 = 0;
        if ( !v144 )
          goto LABEL_198;
      }
      EquipAtk = FollowerInfo__getEquipAtk(v144, v146, v148, v143);
      v160 = this->fields.iconLabelInfo1;
      v161 = this->fields.followerInfo;
      v162 = this->fields.questRestrictionInfo;
      v163 = this->fields.followerIndex;
      this->fields.sortValue1 = EquipAtk + v147;
      if ( v162 )
      {
        v164 = FollowerInfo__GetReturnTypeByQuestId(v162->fields.questId, v158);
        if ( !v161 )
          goto LABEL_198;
      }
      else
      {
        v164 = 0;
        if ( !v161 )
          goto LABEL_198;
      }
      v172 = FollowerInfo__getAtk(v161, v163, v164, v159);
      v175 = this->fields.followerInfo;
      v176 = this->fields.questRestrictionInfo;
      v177 = this->fields.followerIndex;
      v178 = v172;
      if ( v176 )
      {
        v179 = FollowerInfo__GetReturnTypeByQuestId(v176->fields.questId, v173);
        if ( !v175 )
          goto LABEL_198;
      }
      else
      {
        v179 = 0;
        if ( !v175 )
          goto LABEL_198;
      }
      AdjustAtk = FollowerInfo__getAdjustAtk(v175, v177, v179, v174);
      v190 = this->fields.followerInfo;
      v191 = this->fields.questRestrictionInfo;
      v192 = this->fields.followerIndex;
      v193 = AdjustAtk;
      if ( v191 )
      {
        v194 = FollowerInfo__GetReturnTypeByQuestId(v191->fields.questId, v188);
        if ( !v190 )
          goto LABEL_198;
      }
      else
      {
        v194 = 0;
        if ( !v190 )
          goto LABEL_198;
      }
      v202 = FollowerInfo__getEquipAtk(v190, v192, v194, v189);
      if ( !v160 )
        goto LABEL_198;
      v203 = v202;
      v204 = 5;
    }
    else
    {
      if ( sortKind != 5 )
      {
        if ( sortKind == 3 )
        {
          v102 = this->fields.followerInfo;
          v103 = this->fields.questRestrictionInfo;
          v104 = this->fields.followerIndex;
          if ( v103 )
          {
            v105 = FollowerInfo__GetReturnTypeByQuestId(v103->fields.questId, v30);
            if ( !v102 )
              goto LABEL_198;
          }
          else
          {
            v105 = 0;
            if ( !v102 )
              goto LABEL_198;
          }
          v139 = FollowerInfo__getLv(v102, v104, v105, v31);
          v133 = this->fields.iconLabelInfo1;
          v134 = this->fields.followerInfo;
          v135 = this->fields.questRestrictionInfo;
          v136 = this->fields.followerIndex;
          sortValue2 = v139;
        }
        else
        {
          sortValue2 = this->fields.sortValue2;
          v133 = this->fields.iconLabelInfo1;
          v134 = this->fields.followerInfo;
          v135 = this->fields.questRestrictionInfo;
          v136 = this->fields.followerIndex;
        }
        this->fields.sortValue1 = sortValue2;
        if ( v135 )
        {
LABEL_134:
          v140 = FollowerInfo__GetReturnTypeByQuestId(v135->fields.questId, v30);
          if ( !v134 )
            goto LABEL_198;
LABEL_176:
          v206 = FollowerInfo__getLv(v134, v136, v140, v31);
          v209 = this->fields.followerInfo;
          v210 = this->fields.questRestrictionInfo;
          v211 = this->fields.followerIndex;
          v212 = v206;
          if ( v210 )
          {
            v213 = FollowerInfo__GetReturnTypeByQuestId(v210->fields.questId, v207);
            if ( !v209 )
              goto LABEL_198;
          }
          else
          {
            v213 = 0;
            if ( !v209 )
              goto LABEL_198;
          }
          v214 = FollowerInfo__getMaxLv(v209, v211, v213, v208);
          if ( !v133 )
            goto LABEL_198;
          IconLabelInfo__Set_28888132(v133, 2, v212, v214, 0, 0, 0, 0, 0LL);
          LODWORD(servantEntity) = this->fields.classIndex;
          if ( (int)servantEntity <= 0 )
          {
            servantEntity = (int64_t)this->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_198;
            LODWORD(servantEntity) = *(_DWORD *)(servantEntity + 208);
          }
          switch ( type )
          {
            case 1:
              isQuestRestriction = this->fields.isQuestRestriction;
              v217 = 3LL;
              v218 = 6LL;
              goto LABEL_190;
            case 2:
              isQuestRestriction = this->fields.isQuestRestriction;
              v217 = 2LL;
              v218 = 5LL;
              goto LABEL_190;
            case 3:
            case 4:
LABEL_185:
              index = this->fields.index;
              this->fields.sortValue0 = 1000000000000LL;
              this->fields.sortValue1 = 0LL;
              goto LABEL_186;
            case 5:
              isQuestRestriction = this->fields.isQuestRestriction;
              v217 = 4LL;
              v218 = 7LL;
LABEL_190:
              servantEntity = (int)servantEntity;
              if ( isQuestRestriction )
                v219 = v217;
              else
                v219 = v218;
              this->fields.sortValue0B = v219;
              goto LABEL_194;
            default:
              goto LABEL_195;
          }
        }
LABEL_175:
        v140 = 0;
        if ( !v134 )
          goto LABEL_198;
        goto LABEL_176;
      }
      v128 = this->fields.followerInfo;
      v129 = this->fields.questRestrictionInfo;
      v130 = this->fields.followerIndex;
      if ( v129 )
      {
        v131 = FollowerInfo__GetReturnTypeByQuestId(v129->fields.questId, v30);
        if ( !v128 )
          goto LABEL_198;
      }
      else
      {
        v131 = 0;
        if ( !v128 )
          goto LABEL_198;
      }
      v149 = FollowerInfo__getHp(v128, v130, v131, v31);
      v152 = this->fields.followerInfo;
      v153 = this->fields.questRestrictionInfo;
      v154 = this->fields.followerIndex;
      v155 = v149;
      if ( v153 )
      {
        v156 = FollowerInfo__GetReturnTypeByQuestId(v153->fields.questId, v150);
        if ( !v152 )
          goto LABEL_198;
      }
      else
      {
        v156 = 0;
        if ( !v152 )
          goto LABEL_198;
      }
      EquipHp = FollowerInfo__getEquipHp(v152, v154, v156, v151);
      v160 = this->fields.iconLabelInfo1;
      v168 = this->fields.followerInfo;
      v169 = this->fields.questRestrictionInfo;
      v170 = this->fields.followerIndex;
      this->fields.sortValue1 = EquipHp + v155;
      if ( v169 )
      {
        v171 = FollowerInfo__GetReturnTypeByQuestId(v169->fields.questId, v166);
        if ( !v168 )
          goto LABEL_198;
      }
      else
      {
        v171 = 0;
        if ( !v168 )
          goto LABEL_198;
      }
      v180 = FollowerInfo__getHp(v168, v170, v171, v167);
      v183 = this->fields.followerInfo;
      v184 = this->fields.questRestrictionInfo;
      v185 = this->fields.followerIndex;
      v178 = v180;
      if ( v184 )
      {
        v186 = FollowerInfo__GetReturnTypeByQuestId(v184->fields.questId, v181);
        if ( !v183 )
          goto LABEL_198;
      }
      else
      {
        v186 = 0;
        if ( !v183 )
          goto LABEL_198;
      }
      AdjustHp = FollowerInfo__getAdjustHp(v183, v185, v186, v182);
      v198 = this->fields.followerInfo;
      v199 = this->fields.questRestrictionInfo;
      v200 = this->fields.followerIndex;
      v193 = AdjustHp;
      if ( v199 )
      {
        v201 = FollowerInfo__GetReturnTypeByQuestId(v199->fields.questId, v196);
        if ( !v198 )
          goto LABEL_198;
      }
      else
      {
        v201 = 0;
        if ( !v198 )
          goto LABEL_198;
      }
      v205 = FollowerInfo__getEquipHp(v198, v200, v201, v197);
      if ( !v160 )
        goto LABEL_198;
      v203 = v205;
      v204 = 3;
    }
    IconLabelInfo__Set_28888132(v160, v204, v178, v193, v203, 0, 0, 0, 0LL);
    v133 = this->fields.iconLabelInfo2;
    v134 = this->fields.followerInfo;
    v135 = this->fields.questRestrictionInfo;
    v136 = this->fields.followerIndex;
    if ( v135 )
      goto LABEL_134;
    goto LABEL_175;
  }
  v108 = this->fields.iconLabelInfo1;
  if ( !v108 )
    goto LABEL_198;
  IconLabelInfo__Clear(v108, 0LL);
  switch ( type )
  {
    case 1:
      v137 = this->fields.followerInfo;
      v138 = 2LL;
      goto LABEL_129;
    case 2:
      v137 = this->fields.followerInfo;
      v138 = 1LL;
      goto LABEL_129;
    case 3:
    case 4:
      index = this->fields.index;
      this->fields.sortValue0 = 1000000000000LL;
LABEL_186:
      servantEntity = -index;
LABEL_194:
      this->fields.sortValue2 = servantEntity;
      break;
    case 5:
      v137 = this->fields.followerInfo;
      v138 = 3LL;
LABEL_129:
      this->fields.sortValue0B = v138;
      if ( !v137 )
        goto LABEL_198;
      this->fields.sortValue2 = FollowerInfo__getUpdatedAt(v137, v109);
      break;
    default:
      break;
  }
LABEL_195:
  if ( this->fields._isRecommendedUser_k__BackingField )
    *p_sortValue0 += 10000000000000LL;
  return 1;
}


void __fastcall FollowerSelectItemListViewItem__UpdateRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t ReturnTypeByQuestId; // w3
  bool QuestRestriction; // w0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x4
  FollowerInfo_o *v11; // x21
  struct QuestRestrictionInfo_o *v12; // x20
  int32_t v13; // w22
  int32_t v14; // w3
  bool UniqueSvtRestriction; // w0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x4
  FollowerInfo_o *v18; // x21
  struct QuestRestrictionInfo_o *v19; // x20
  int32_t v20; // w22
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

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
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, method);
        else
          ReturnTypeByQuestId = 0;
        QuestRestriction = FollowerInfo__getQuestRestriction(
                             followerInfo,
                             questRestrictionInfo,
                             followerIndex,
                             ReturnTypeByQuestId,
                             v2);
        v11 = this->fields.followerInfo;
        v12 = this->fields.questRestrictionInfo;
        v13 = this->fields.followerIndex;
        this->fields.isQuestRestriction = QuestRestriction;
        if ( v12 )
        {
          v14 = FollowerInfo__GetReturnTypeByQuestId(v12->fields.questId, v9);
          if ( !v11 )
LABEL_16:
            sub_B170D4();
        }
        else
        {
          v14 = 0;
          if ( !v11 )
            goto LABEL_16;
        }
        UniqueSvtRestriction = FollowerInfo__getUniqueSvtRestriction(v11, v12, v13, v14, v10);
        v18 = this->fields.followerInfo;
        v19 = this->fields.questRestrictionInfo;
        v20 = this->fields.followerIndex;
        this->fields.isUniqueSvtRestriction = UniqueSvtRestriction;
        if ( v19 )
        {
          v21 = FollowerInfo__GetReturnTypeByQuestId(v19->fields.questId, v16);
          if ( !v18 )
            goto LABEL_16;
        }
        else
        {
          v21 = 0;
          if ( !v18 )
            goto LABEL_16;
        }
        this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                          v18,
                                                          v19,
                                                          v20,
                                                          v21,
                                                          v17);
        this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(
                                                            this,
                                                            v22);
        FollowerSelectItemListViewItem__SetEventUpInfo(this, v23);
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
    return FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, method);
  else
    return 0;
}


EquipTargetInfo_o *__fastcall FollowerSelectItemListViewItem__get_EquipInfo(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  FollowerInfo_o *followerInfo; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerClassId; // w21
  int32_t ReturnTypeByQuestId; // w2
  int32_t IndexForSupport; // w0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x3
  struct QuestRestrictionInfo_o *v11; // x8
  int32_t v12; // w20
  int32_t v13; // w2

  followerInfo = this->fields.followerInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerClassId = this->fields.followerClassId;
  if ( questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, method);
    if ( followerInfo )
      goto LABEL_3;
LABEL_6:
    sub_B170D4();
  }
  ReturnTypeByQuestId = 0;
  if ( !followerInfo )
    goto LABEL_6;
LABEL_3:
  IndexForSupport = FollowerInfo__getIndexForSupport(
                      followerInfo,
                      followerClassId,
                      ReturnTypeByQuestId,
                      this->fields.supportDeckId,
                      v2);
  v11 = this->fields.questRestrictionInfo;
  v12 = IndexForSupport;
  if ( v11 )
    v13 = FollowerInfo__GetReturnTypeByQuestId(v11->fields.questId, v9);
  else
    v13 = 0;
  return FollowerInfo__getEquipTarget1(followerInfo, v12, v13, v10);
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
    return FollowerInfo__getUpdatedAt((FollowerInfo_o *)result, method);
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

  if ( (byte_40F8F0A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18326/*"error"*/, method);
    byte_40F8F0A = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    p_userName = &followerInfo->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18326/*"error"*/;
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
  const MethodInfo *v2; // x3
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
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, method);
  else
    ReturnTypeByQuestId = 0;
  return FollowerInfo__getServantLeaderInfo(followerInfo, followerIndex, ReturnTypeByQuestId, v2);
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
  const MethodInfo *v2; // x3
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
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, method);
  else
    ReturnTypeByQuestId = 0;
  return FollowerInfo__getSvtId(followerInfo, followerIndex, ReturnTypeByQuestId, v2);
}


System_String_o *__fastcall FollowerSelectItemListViewItem__get_SvtNameText(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *overwriteServantName; // x20
  const MethodInfo *v5; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v7; // x1
  ServantLeaderInfo_o *v8; // x0
  int32_t DispLimitCount; // w20
  const MethodInfo *v10; // x1
  ServantLeaderInfo_o *v11; // x0
  int32_t limitCount; // w21
  int32_t LimitCountByDispLimit; // w0
  int32_t v14; // w1
  ServantEntity_o *servantEntity; // x0

  if ( (byte_40F8F0B & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    byte_40F8F0B = 1;
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
      v14 = -1;
      return ServantEntity__getName(servantEntity, v14, -1, 0LL);
    }
LABEL_22:
    sub_B170D4();
  }
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v5);
  if ( !ServantLeader )
    goto LABEL_22;
  overwriteServantName = ServantLeader->fields.overwriteServantName;
  if ( !System_String__IsNullOrEmpty(overwriteServantName, 0LL) )
    return overwriteServantName;
  v8 = FollowerSelectItemListViewItem__get_ServantLeader(this, v7);
  if ( !v8 )
    goto LABEL_22;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(v8, 0LL);
  v11 = FollowerSelectItemListViewItem__get_ServantLeader(this, v10);
  if ( !v11 )
    goto LABEL_22;
  limitCount = v11->fields.limitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, limitCount, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_22;
  v14 = LimitCountByDispLimit;
  servantEntity = this->fields.servantEntity;
  return ServantEntity__getName(servantEntity, v14, -1, 0LL);
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