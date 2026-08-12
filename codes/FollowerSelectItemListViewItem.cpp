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
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  IconLabelInfo_o *v30; // x27
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_Dictionary_int__int__o *v55; // x22
  const MethodInfo *v56; // x2

  v22 = isRecommended;
  if ( (byte_596AF7B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor___91598536);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    byte_596AF7B = 1;
  }
  v23 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0);
  this->fields.iconLabelInfo1 = v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v30, 0);
  this->fields.iconLabelInfo2 = v30;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  *(_QWORD *)&this->fields.openClassBoardNum = -1;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.followerInfo = followerInfo;
  this->fields.classIndex = index2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.followerInfo,
    (int32_t)followerInfo,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields._Option_k__BackingField = option;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Option_k__BackingField,
    (int32_t)option,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.isRecommended = v22;
  this->fields.supportDeckId = supportDeckId;
  this->fields.deckPriority = deckPriority;
  this->fields._isRecommendedUser_k__BackingField = isRecommendedUser;
  this->fields._IsRecommendFollower_k__BackingField = isRecommendFollower;
  if ( classBoardMaxNumDictionary )
  {
    v55 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_66659160(
      v55,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_3F92358 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___91598536);
  }
  else
  {
    v55 = 0;
  }
  this->fields.classBoardMaxNumDictionary = v55;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardMaxNumDictionary,
    (int32_t)v55,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields._IsReleasedClassBoard_k__BackingField = isReleasedClassBoard;
  this->fields._IsGrandSupport_k__BackingField = isGrandSupport;
  this->fields._GrandGraphId_k__BackingField = grandGraphId;
  this->fields._IsGrandServantRestrictionSupport_k__BackingField = isGrandServantRestriction;
  FollowerSelectItemListViewItem__AnalyzeEntity(this, followerClassId, v56);
}


void FollowerSelectItemListViewItem__AnalyzeEntity(
        FollowerSelectItemListViewItem_o *this,
        int32_t followerClassId,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  void *SvtId; // x0
  const MethodInfo *v24; // x1
  FollowerInfo_o *followerInfo; // x25
  int32_t DisplayServantType; // w0
  int32_t Index; // w23
  FollowerInfo_o *v28; // x25
  const MethodInfo *v29; // x1
  struct FollowerInfo_o *v30; // x8
  int32_t v31; // w23
  const MethodInfo *v32; // x1
  struct EventCampaignEntity_o *EnableFriendPointCampaign; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v47; // x8
  FollowerInfo_o *v48; // x24
  QuestRestrictionInfo_o *v49; // x25
  int32_t followerIndex; // w26
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v51; // x8
  FollowerInfo_o *v52; // x24
  QuestRestrictionInfo_o *v53; // x25
  int32_t v54; // w26
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v55; // x8
  FollowerInfo_o *v56; // x24
  QuestRestrictionInfo_o *v57; // x25
  int32_t v58; // w26
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v59; // x8
  FollowerInfo_o *v60; // x24
  QuestRestrictionInfo_o *v61; // x25
  int32_t v62; // w26
  bool IsSlotClassRestriction; // w0
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v64; // x8
  struct QuestRestrictionInfo_o *v65; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v68; // x8
  FollowerInfo_o *v69; // x24
  QuestRestrictionInfo_o *v70; // x25
  int32_t v71; // w26
  const MethodInfo *v72; // x1
  __int64 v73; // x2
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v74; // x8
  struct QuestRestrictionInfo_o *v75; // x8
  __int64 v76; // x2
  Il2CppObject *Master_object; // x24
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v78; // x8
  struct QuestRestrictionInfo_o *v79; // x8
  bool IsRestart; // w8
  System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary; // x23
  struct FollowerInfo_o *v82; // x9
  int32_t classId; // w22
  ClassBoardInfo_array *userClassBoardInfo; // x24
  _BOOL4 IsGrandSupport_k__BackingField; // w25
  FollowerInfo_o *v86; // x20
  int32_t v87; // w21
  struct FollowerInfo_o *v88; // x8
  TblFriendMaster_o *v89; // x20
  int32_t type; // w9
  int32_t v91; // w1
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596AF7C & 1) == 0 )
  {
    sub_2213A60(&ClassBoardUtility_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AF7C = 1;
  }
  entity = 0;
  this->fields.servantEntity = 0;
  p_servantEntity = &this->fields.servantEntity;
  this->fields.isNpc = 0;
  this->fields.followerClassId = followerClassId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&this->fields.isUniqueSvtRestriction = 0;
  *(_WORD *)&this->fields.isServantEventUpVal = 0;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValItemList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUpValItemList, 0, v11, v12, v13, v14, v15, v16);
  this->fields.friendPointCampaignEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.friendPointCampaignEntity,
    0,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_QWORD *)&this->fields.openClassBoardNum = -1;
  followerInfo = this->fields.followerInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsSlotRestriction_k__BackingField = 0;
  this->fields.isMaxOpenClassBoard = 0;
  this->fields._IsGrandSvt_k__BackingField = 0;
  this->fields._IsClassRestriction_k__BackingField = 0;
  if ( followerInfo )
  {
    DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(this, v24);
    Index = FollowerInfo__getIndex(
              followerInfo,
              followerClassId,
              DisplayServantType,
              this->fields.supportDeckId,
              this->fields._GrandGraphId_k__BackingField,
              0);
    v28 = this->fields.followerInfo;
    this->fields.followerIndex = Index;
    SvtId = (void *)FollowerSelectItemListViewItem__get_DisplayServantType(this, v29);
    if ( !v28 )
      goto LABEL_77;
    SvtId = (void *)FollowerInfo__getSvtId(v28, Index, (int32_t)SvtId, 0);
    if ( (int)SvtId < 1 )
    {
      Option_k__BackingField = this->fields._Option_k__BackingField;
      if ( !Option_k__BackingField )
        goto LABEL_77;
      questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        LOBYTE(questRestrictionInfo) = questRestrictionInfo->fields.isRestriction;
      this->fields.isQuestRestriction = (char)questRestrictionInfo;
    }
    else
    {
      v30 = this->fields.followerInfo;
      if ( !v30 )
        goto LABEL_77;
      v31 = (int)SvtId;
      this->fields.isNpc = Follower__IsNpc(v30->fields.type, 0);
      EnableFriendPointCampaign = FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(this, v32);
      this->fields.friendPointCampaignEntity = EnableFriendPointCampaign;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.friendPointCampaignEntity,
        (int32_t)EnableFriendPointCampaign,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      SvtId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SvtId )
        goto LABEL_77;
      SvtId = DataManager__GetMasterData_object_(
                (DataManager_o *)SvtId,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !SvtId )
        goto LABEL_77;
      v40 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)SvtId,
              v31,
              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.servantEntity = (struct ServantEntity_o *)v40;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
        (int32_t)v40,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      v47 = this->fields._Option_k__BackingField;
      if ( !v47 )
        goto LABEL_77;
      v48 = this->fields.followerInfo;
      v49 = v47->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      SvtId = (void *)FollowerSelectItemListViewItem__get_DisplayServantType(this, v24);
      if ( !v48 )
        goto LABEL_77;
      SvtId = (void *)FollowerInfo__GetQuestRestriction(v48, v49, followerIndex, (int32_t)SvtId, 0);
      v51 = this->fields._Option_k__BackingField;
      this->fields.isQuestRestriction = (unsigned __int8)SvtId & 1;
      if ( !v51 )
        goto LABEL_77;
      v52 = this->fields.followerInfo;
      v53 = v51->fields.questRestrictionInfo;
      v54 = this->fields.followerIndex;
      SvtId = (void *)FollowerSelectItemListViewItem__get_DisplayServantType(this, v24);
      if ( !v52 )
        goto LABEL_77;
      SvtId = (void *)FollowerInfo__getUniqueSvtRestriction(v52, v53, v54, (int32_t)SvtId, 0);
      v55 = this->fields._Option_k__BackingField;
      this->fields.isUniqueSvtRestriction = (unsigned __int8)SvtId & 1;
      if ( !v55 )
        goto LABEL_77;
      v56 = this->fields.followerInfo;
      v57 = v55->fields.questRestrictionInfo;
      v58 = this->fields.followerIndex;
      SvtId = (void *)FollowerSelectItemListViewItem__get_DisplayServantType(this, v24);
      if ( !v56 )
        goto LABEL_77;
      SvtId = (void *)FollowerInfo__IsUniqueIndividualityRestriction(v56, v57, v58, (int32_t)SvtId, 0);
      v59 = this->fields._Option_k__BackingField;
      this->fields.isUniqueIndividualityRestriction = (unsigned __int8)SvtId & 1;
      if ( !v59 )
        goto LABEL_77;
      v60 = this->fields.followerInfo;
      v61 = v59->fields.questRestrictionInfo;
      v62 = this->fields.followerIndex;
      SvtId = (void *)FollowerSelectItemListViewItem__get_DisplayServantType(this, v24);
      if ( !v60 )
        goto LABEL_77;
      SvtId = (void *)FollowerInfo__IsClassRestriction(v60, v61, v62, (int32_t)SvtId, 0);
      if ( ((unsigned __int8)SvtId & 1) != 0 )
      {
        IsSlotClassRestriction = 1;
      }
      else
      {
        v68 = this->fields._Option_k__BackingField;
        if ( !v68 )
          goto LABEL_77;
        v69 = this->fields.followerInfo;
        v70 = v68->fields.questRestrictionInfo;
        v71 = this->fields.followerIndex;
        SvtId = (void *)FollowerSelectItemListViewItem__get_DisplayServantType(this, v24);
        if ( !v69 )
          goto LABEL_77;
        IsSlotClassRestriction = FollowerInfo__IsSlotClassRestriction(v69, v70, v71, (int32_t)SvtId, 0);
      }
      this->fields._IsClassRestriction_k__BackingField = IsSlotClassRestriction;
      this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v24);
      FollowerSelectItemListViewItem__SetEventUpInfo(this, v72);
      v74 = this->fields._Option_k__BackingField;
      if ( !v74 )
        goto LABEL_77;
      v75 = v74->fields.questRestrictionInfo;
      if ( v75 && v75->fields.isDataLostBattle )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24, v73);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24, v76);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        SvtId = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24, v76);
          SvtId = NetworkManager_TypeInfo;
        }
        v78 = this->fields._Option_k__BackingField;
        if ( !v78 )
          goto LABEL_77;
        v79 = v78->fields.questRestrictionInfo;
        if ( !v79 || !Master_object )
          goto LABEL_77;
        SvtId = (void *)UserEventDataLostMaster__TryGetEntity(
                          (UserEventDataLostMaster_o *)Master_object,
                          &entity,
                          *(_QWORD *)(*((_QWORD *)SvtId + 23) + 64LL),
                          v79->fields.dataLostBattleId,
                          0);
        if ( ((unsigned __int8)SvtId & 1) != 0 )
        {
          SvtId = entity;
          if ( !entity )
            goto LABEL_77;
          IsRestart = UserEventDataLostEntity__IsRestart(entity, v31, 0);
          SvtId = entity;
          if ( IsRestart )
          {
            if ( !entity )
              goto LABEL_77;
            SvtId = (void *)UserEventDataLostEntity__GetTimesToRestart(entity, v31, 0);
            this->fields._TimesToRestart_k__BackingField = (int)SvtId;
          }
          else
          {
            if ( !entity )
              goto LABEL_77;
            SvtId = (void *)UserEventDataLostEntity__IsDataLost(entity, v31, 0);
            if ( ((unsigned __int8)SvtId & 1) != 0 )
              this->fields._IsDataLost_k__BackingField = 1;
          }
        }
      }
      classBoardMaxNumDictionary = this->fields.classBoardMaxNumDictionary;
      if ( classBoardMaxNumDictionary )
      {
        if ( !*p_servantEntity )
          goto LABEL_77;
        v82 = this->fields.followerInfo;
        if ( !v82 )
          goto LABEL_77;
        classId = (*p_servantEntity)->fields.classId;
        userClassBoardInfo = v82->fields.userClassBoardInfo;
        IsGrandSupport_k__BackingField = this->fields._IsGrandSupport_k__BackingField;
        if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v24, v73);
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
        *(_WORD *)&this->fields.isMaxOpenClassBoard = 0;
        *(_QWORD *)&this->fields.openClassBoardNum = -1;
      }
      v86 = this->fields.followerInfo;
      v87 = this->fields.followerIndex;
      SvtId = (void *)FollowerSelectItemListViewItem__get_DisplayServantType(this, v24);
      if ( !v86 )
        goto LABEL_77;
      SvtId = FollowerInfo__getServantLeaderInfo(v86, v87, (int32_t)SvtId, 0);
      if ( !SvtId )
        goto LABEL_77;
      *(_QWORD *)&this->fields.hp = *(_QWORD *)((char *)SvtId + 76);
      this->fields._IsGrandSvt_k__BackingField = ServantLeaderInfo__get_IsGrandSvt((ServantLeaderInfo_o *)SvtId, 0);
    }
    SvtId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SvtId )
    {
      SvtId = DataManager__GetMasterData_object_(
                (DataManager_o *)SvtId,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TblFriendMaster___);
      v88 = this->fields.followerInfo;
      if ( v88 )
      {
        v89 = (TblFriendMaster_o *)SvtId;
        if ( v88->fields.type == 5
          || SvtId
          && (SvtId = (void *)TblFriendMaster__isMessageDisp((TblFriendMaster_o *)SvtId, 3, v88->fields.userId, 0),
              v88 = this->fields.followerInfo,
              this->fields.isMessageDisp = (unsigned __int8)SvtId & 1,
              v88) )
        {
          type = v88->fields.type;
          if ( (type | 4) == 5 )
          {
            if ( !v89 )
              goto LABEL_77;
            if ( type == 5 )
              v91 = 9;
            else
              v91 = 3;
            this->fields.isLockUser = TblFriendMaster__IsLockUser(v89, v91, v88->fields.userId, 0);
          }
          SvtId = this->fields.iconLabelInfo1;
          if ( SvtId )
          {
            IconLabelInfo__Clear((IconLabelInfo_o *)SvtId, 0);
            SvtId = this->fields.iconLabelInfo2;
            if ( SvtId )
            {
              IconLabelInfo__Clear((IconLabelInfo_o *)SvtId, 0);
              return;
            }
          }
        }
      }
    }
LABEL_77:
    sub_2213CDC(SvtId, v24);
  }
  v64 = this->fields._Option_k__BackingField;
  this->fields.followerIndex = 0;
  if ( !v64 )
    goto LABEL_77;
  v65 = v64->fields.questRestrictionInfo;
  if ( v65 )
    LOBYTE(v65) = v65->fields.isRestriction;
  this->fields.isQuestRestriction = (char)v65;
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v12; // w0
  const MethodInfo_3FF401C *v13; // x2
  int v14; // w22
  __int64 *v15; // x21
  int32_t Item; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t hp; // w10
  int32_t atk; // w11
  __int64 v21; // x8
  BalanceConfig_c *v22; // x0
  int32_t limitCount; // w19
  __int64 v24; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_596AF80 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_1393/*"2"*/);
    sub_2213A60(&StringLiteral_1248/*"1"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596AF80 = 1;
  }
  if ( !equipInfo )
    return 0;
  v6 = *(_QWORD *)&equipInfo->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&equipInfo->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&priorityKind,
      equipInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v6;
  *(_QWORD *)&v25.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v25, 0);
  result = 0;
  if ( priorityKind )
  {
    if ( v9 >= 1 )
    {
      result = (int64_t)FollowerSelectItemListViewItem__GetValuesDictionary(0, priorityKind, equipInfo, v8);
      if ( result )
      {
        v11 = (System_Collections_Generic_Dictionary_object__int__o *)result;
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v15 = &StringLiteral_1393/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              return 0;
            v15 = &StringLiteral_1198/*"0"*/;
          }
          if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)result,
                 (Il2CppObject *)*v15,
                 (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
          {
            Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                     v11,
                     (Il2CppObject *)*v15,
                     (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            hp = equipInfo->fields.hp;
            atk = equipInfo->fields.atk;
            v21 = 100000LL * Item;
LABEL_27:
            v22 = BalanceConfig_TypeInfo;
            limitCount = equipInfo->fields.limitCount;
            v24 = v21 + 10LL * (atk + hp);
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17, v18);
              v22 = BalanceConfig_TypeInfo;
            }
            return v24 | (limitCount >= v22->static_fields->ServantLimitMax);
          }
        }
        else if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__int__o *)result,
                    (Il2CppObject *)StringLiteral_1198/*"0"*/,
                    (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__)
               && System_Collections_Generic_Dictionary_object__int___ContainsKey(
                    v11,
                    (Il2CppObject *)StringLiteral_1248/*"1"*/,
                    (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
        {
          v12 = System_Collections_Generic_Dictionary_object__int___get_Item(
                  v11,
                  (Il2CppObject *)StringLiteral_1198/*"0"*/,
                  (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
          v13 = (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
          if ( v12 == 1 )
          {
            v14 = 100000;
          }
          else
          {
            if ( System_Collections_Generic_Dictionary_object__int___get_Item(
                   v11,
                   (Il2CppObject *)StringLiteral_1198/*"0"*/,
                   (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
            {
              v21 = 0;
              goto LABEL_26;
            }
            v13 = (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__;
            v14 = 100000000;
          }
          v21 = v14
              * (__int64)System_Collections_Generic_Dictionary_object__int___get_Item(
                           v11,
                           (Il2CppObject *)StringLiteral_1248/*"1"*/,
                           v13);
LABEL_26:
          hp = equipInfo->fields.hp;
          atk = equipInfo->fields.atk;
          goto LABEL_27;
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
  int sortValue2B; // w20
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v11; // x8
  QuestRestrictionInfo_o *v12; // x8
  int32_t sortValue2B_high; // w20
  const MethodInfo *v14; // x1
  FollowerInfo_o *v15; // x21
  int32_t v16; // w22
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v17; // x8
  ServantLeaderInfo_o *v18; // x21
  QuestRestrictionInfo_o *v19; // x19
  int32_t ServantId; // w0
  int32_t limitCount; // w22
  int32_t v22; // w23

  v2 = this;
  if ( (byte_596AF7D & 1) == 0 )
  {
    this = (FollowerSelectItemListViewItem_o *)sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596AF7D = 1;
  }
  Option_k__BackingField = v2->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    goto LABEL_24;
  followerInfo = v2->fields.followerInfo;
  questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
  followerIndex = v2->fields.followerIndex;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v2, method);
  if ( !followerInfo )
    goto LABEL_24;
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
    goto LABEL_24;
  this = (FollowerSelectItemListViewItem_o *)v8->fields.questRestrictionInfo;
  if ( !this )
    goto LABEL_24;
  if ( QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)this, 0) )
    return 0;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_24;
  sortValue2B = this->fields.sortValue2B;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_24;
  v7 = 0;
  if ( v2->fields.isNpc || sortValue2B < 1 )
    return v7;
  v11 = v2->fields._Option_k__BackingField;
  if ( !v11 )
    goto LABEL_24;
  v12 = v11->fields.questRestrictionInfo;
  if ( !v12 )
    goto LABEL_24;
  sortValue2B_high = HIDWORD(this->fields.sortValue2B);
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(v12, sortValue2B_high, 0) )
    return 0;
  v15 = v2->fields.followerInfo;
  v16 = v2->fields.followerIndex;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v2, v14);
  if ( !v15 )
    goto LABEL_24;
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getServantLeaderInfo(v15, v16, (int32_t)this, 0);
  v17 = v2->fields._Option_k__BackingField;
  if ( !v17
    || (v18 = (ServantLeaderInfo_o *)this) == 0
    || (v19 = v17->fields.questRestrictionInfo,
        ServantId = ServantLeaderInfo__GetServantId((ServantLeaderInfo_o *)this, -1, 0),
        limitCount = v18->fields.limitCount,
        v22 = ServantId,
        this = (FollowerSelectItemListViewItem_o *)ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(
                                                     v18,
                                                     -1,
                                                     0),
        !v19) )
  {
LABEL_24:
    sub_2213CDC(this, method);
  }
  return QuestRestrictionInfo__IsRestrictionServantIndividuality(
           v19,
           v22,
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
    sub_2213CDC(this, 0);
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


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596AF86 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&SkillInfo___TypeInfo);
    byte_596AF86 = 1;
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
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList, isNpc);
      v10 = BalanceConfig_TypeInfo;
    }
    v11 = (SkillInfo_array *)sub_2213B20(
                               SkillInfo___TypeInfo,
                               (unsigned int)v10->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
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
  EventCampaignEntity_o *v9; // x14
  EventCampaignEntity_o *v10; // x13
  struct System_Int32_array *targetIds; // x16
  il2cpp_array_size_t v12; // x15
  int32_t *m_Items; // x16
  int v14; // t1

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
    sub_2213CDC(this, method);
  max_length = friendPointCampaignEntityList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v7 == max_length )
        sub_2213CE4(this);
      v10 = friendPointCampaignEntityList->m_Items[v7];
      if ( !v10 )
        goto LABEL_31;
      targetIds = v10->fields.targetIds;
      if ( targetIds && (v12 = targetIds->max_length) != 0 )
      {
        if ( !v3->fields.isNpc )
        {
          if ( !v8 || (method = (const MethodInfo *)(unsigned int)v8->fields.idx, v10->fields.idx > (int)method) )
          {
            if ( (int)v12 >= 1 )
            {
              m_Items = targetIds->m_Items;
              while ( 1 )
              {
                v14 = *m_Items++;
                if ( v14 == (_DWORD)this )
                  break;
                LODWORD(v12) = v12 - 1;
                if ( !(_DWORD)v12 )
                  goto LABEL_22;
              }
              v8 = friendPointCampaignEntityList->m_Items[v7];
            }
          }
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
      if ( v7 == (max_length & ~(max_length >> 31)) )
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
  __int64 v2; // x2
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  System_String_o *v7; // x19
  Il2CppObject *v8; // x0
  int v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_596AF85 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_6732/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/);
    byte_596AF85 = 1;
  }
  if ( !this->fields.friendPointCampaignEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_6732/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, 0);
  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( !friendPointCampaignEntity )
    sub_2213CDC(v4, v5);
  v7 = v4;
  v10 = friendPointCampaignEntity->fields.value / 1000;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v10);
  return System_String__Format(v7, v8, 0);
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
  int v8; // w21
  int current_high; // w22
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  int32_t friendPointUpVal; // w8
  int friendPointUpMaxVal; // w9
  FollowerSelectItemListViewManager_FollowerSelectItemOption_Fields *p_fields; // t2
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596AF84 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
    byte_596AF84 = 1;
  }
  followerInfo = this->fields.followerInfo;
  memset(&v15, 0, sizeof(v15));
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
    goto LABEL_17;
  System_Collections_Generic_List_ValueTuple_Int32Enum__int____GetEnumerator(
    &v15,
    FriendPointUpTypeVals,
    (const MethodInfo_43FA9A8 *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
  v8 = 0;
  current_high = 0;
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____MoveNext(
            &v15,
            (const MethodInfo_40E9C54 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__) )
  {
    if ( LODWORD(v15.fields._current) == 123 )
    {
      v8 += HIDWORD(v15.fields._current);
    }
    else if ( LODWORD(v15.fields._current) == 104 && current_high <= SHIDWORD(v15.fields._current) )
    {
      current_high = HIDWORD(v15.fields._current);
    }
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____Dispose(
    &v15,
    (const MethodInfo_40E9C50 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
  Option_k__BackingField = this->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
LABEL_17:
    sub_2213CDC(FriendPointUpTypeVals, v7);
  p_fields = &Option_k__BackingField->fields;
  friendPointUpVal = Option_k__BackingField->fields.friendPointUpVal;
  friendPointUpMaxVal = p_fields->friendPointUpMaxVal;
  if ( friendPointUpMaxVal >= current_high )
    return friendPointUpVal + v8;
  else
    return current_high + v8 - friendPointUpMaxVal + friendPointUpVal;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596AF83 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&SkillInfo___TypeInfo);
    byte_596AF83 = 1;
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
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList, method);
      v8 = BalanceConfig_TypeInfo;
    }
    v9 = (SkillInfo_array *)sub_2213B20(SkillInfo___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
    *skillInfoList = v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
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


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_string__int__o *FollowerSelectItemListViewItem__GetValuesDictionary(
        FollowerSelectItemListViewItem_o *this,
        int32_t kind,
        EquipTargetInfo_o *equipInfo,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x21
  __int64 v14; // x22
  ServantSkillMaster_o *v15; // x20
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  __int64 v17; // x1
  ServantSkillEntity_array *ServantSkillList; // x20
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x22
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v22; // x23
  unsigned __int64 v23; // x25
  int max_length; // w8
  int32_t v25; // w2
  int v26; // w10
  ServantSkillEntity_o *v27; // x11
  SkillLvEntity_o *v28; // x8
  unsigned __int64 v29; // x29
  struct System_Int32_array *funcId; // x8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_string__int__c **v33; // x8
  System_Collections_Generic_Dictionary_object__int__o *v34; // x24
  int monitor; // w8
  unsigned __int64 v36; // x8
  Il2CppObject *v37; // [xsp+0h] [xbp-70h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_596AF7F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_1455/*"3"*/);
    byte_596AF7F = 1;
  }
  v37 = 0;
  entity = 0;
  if ( equipInfo )
  {
    v6 = *(_QWORD *)&equipInfo->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&equipInfo->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&kind, equipInfo);
    *(_QWORD *)&v39.fields.currentCryptoKey = v6;
    *(_QWORD *)&v39.fields.fakeValue = v7;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v39, 0) >= 1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___);
      v13 = *(_QWORD *)&equipInfo->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&equipInfo->fields.svtId.fields.fakeValue;
      v15 = (ServantSkillMaster_o *)Master_object;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
      *(_QWORD *)&v40.fields.currentCryptoKey = v13;
      *(_QWORD *)&v40.fields.fakeValue = v14;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                         v40,
                                                                         0);
      if ( !v15 )
        goto LABEL_77;
      ServantSkillList = ServantSkillMaster__getServantSkillList(v15, (int32_t)result, 0);
      v19 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
      v20 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(equipInfo, 0);
      if ( !result )
        goto LABEL_77;
      entries = result->fields._entries;
      v22 = result;
      if ( (int)entries >= 1 )
      {
        v23 = 0;
        while ( 1 )
        {
          if ( v23 >= (unsigned int)entries )
            goto LABEL_78;
          if ( !ServantSkillList )
            goto LABEL_77;
          max_length = ServantSkillList->max_length;
          v25 = *(&v22->fields._count + v23);
          if ( max_length >= 1 )
          {
            v26 = 0;
            while ( max_length != v26 )
            {
              v27 = ServantSkillList->m_Items[v26];
              if ( !v27 )
                goto LABEL_77;
              if ( v27->fields.skillId == v25 && v27->fields.eventId > 0 )
                goto LABEL_74;
              if ( (max_length & ~(max_length >> 31)) == ++v26 )
                goto LABEL_24;
            }
LABEL_78:
            sub_2213CE4(result);
          }
LABEL_24:
          if ( !v19 )
            goto LABEL_77;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             (SkillLvMaster_o *)v19,
                                                                             &entity,
                                                                             v25,
                                                                             1,
                                                                             0);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_74:
          LODWORD(entries) = v22->fields._entries;
          if ( (__int64)++v23 >= (int)entries )
            return 0;
        }
        v28 = entity;
        if ( entity )
        {
          v29 = 0;
          do
          {
            funcId = v28->fields.funcId;
            if ( !funcId )
              break;
            max_length_low = LODWORD(funcId->max_length);
            if ( (__int64)v29 >= (int)max_length_low )
              goto LABEL_74;
            if ( v29 >= max_length_low )
              goto LABEL_78;
            if ( !v20 )
              break;
            result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                                                                               &v37,
                                                                               funcId->m_Items[v29],
                                                                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)result & 1) != 0 )
            {
              if ( kind > 3 )
              {
                switch ( kind )
                {
                  case 4:
                    if ( !v37 )
                      goto LABEL_77;
                    if ( LODWORD(v37[1].monitor) != 111 )
                      goto LABEL_72;
                    break;
                  case 5:
                    if ( !v37 )
                      goto LABEL_77;
                    if ( (LODWORD(v37[1].monitor) | 8) != 0x6E )
                      goto LABEL_72;
                    break;
                  case 6:
                    if ( !v37 )
                      goto LABEL_77;
                    if ( LODWORD(v37[1].monitor) != 106 )
                      goto LABEL_72;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
                    if ( !entity )
                      goto LABEL_77;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(entity, 0);
                    if ( !result )
                      goto LABEL_77;
                    entries_low = LODWORD(result->fields._entries);
                    if ( (__int64)v29 > (int)entries_low )
                      goto LABEL_72;
                    if ( v29 >= entries_low )
                      goto LABEL_78;
                    v33 = &result->klass + v29;
                    v34 = (System_Collections_Generic_Dictionary_object__int__o *)v33[4];
                    if ( !v34 )
                      goto LABEL_72;
                    if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__int__o *)v33[4],
                           (Il2CppObject *)StringLiteral_1455/*"3"*/,
                           (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                         v34,
                                                                                         (Il2CppObject *)StringLiteral_1455/*"3"*/,
                                                                                         (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                      if ( (_DWORD)result )
                        goto LABEL_72;
                    }
                    break;
                }
              }
              else
              {
                switch ( kind )
                {
                  case 1:
                    if ( !v37 )
                      goto LABEL_77;
                    monitor = (int)v37[1].monitor;
                    if ( monitor != 104 && monitor != 123 )
                      goto LABEL_72;
                    break;
                  case 2:
                    if ( !v37 )
                      goto LABEL_77;
                    if ( LODWORD(v37[1].monitor) != 101 )
                      goto LABEL_72;
                    break;
                  case 3:
                    if ( !v37 )
                      goto LABEL_77;
                    if ( LODWORD(v37[1].monitor) != 112 )
                      goto LABEL_72;
                    break;
                }
              }
              result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
              if ( !entity )
                break;
              result = SkillLvEntity__GetFollowerValsDictionary(entity, 0);
              if ( result )
                return result;
              result = (System_Collections_Generic_Dictionary_string__int__o *)entity;
              if ( !entity )
                break;
              result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvEntity__getValues(entity, 0);
              if ( !result )
                break;
              v36 = LODWORD(result->fields._entries);
              if ( (__int64)v29 < (int)v36 )
              {
                if ( v29 >= v36 )
                  goto LABEL_78;
                result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields._count + v29);
                if ( result )
                  return result;
              }
            }
LABEL_72:
            v28 = entity;
            ++v29;
          }
          while ( entity );
        }
LABEL_77:
        sub_2213CDC(result, v17);
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
    sub_2213CDC(DisplayServantType, v6);
  }
  *(_WORD *)&this->fields.isUniqueSvtRestriction = 0;
  this->fields._IsSlotRestriction_k__BackingField = 0;
}


void FollowerSelectItemListViewItem__SetEventUpInfo(FollowerSelectItemListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  FollowerSelectItemListViewItem_o *v8; // x19
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v12; // x8
  FollowerInfo_o *followerInfo; // x22
  EventUpValSetupInfo_o *v14; // x23
  int32_t followerIndex; // w24
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v16; // x8
  Il2CppObject *Instance; // x22
  const MethodInfo *v18; // x1
  __int64 v19; // x2
  int64_t sortValue1; // x23
  struct System_String_o *sortStr1; // x24
  int32_t v22; // w23
  const MethodInfo *v23; // x1
  int32_t Rarity; // w24
  const MethodInfo *v25; // x1
  struct IconLabelInfo_o *iconLabelInfo1; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *v27; // x8
  bool isEquipEventUpVal; // w8
  System_Collections_Generic_List_EventMargeItemUpValInfo__c *v29; // x0
  System_Collections_Generic_List_object__o *v30; // x21
  __int64 v31; // x2
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  FollowerSelectItemListViewItem___c_c *v34; // x0
  struct FollowerSelectItemListViewItem___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__96_0; // x23
  Il2CppObject *v37; // x24
  struct FollowerSelectItemListViewItem___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  int sortIndex; // w8
  FollowerSelectItemListViewItem_o *v48; // x22
  EventPersonalMargeUpValInfo_c **v49; // x28
  int32_t v50; // w9
  ServantEntity_o *servantEntity; // x25
  int32_t v52; // w23
  EventPersonalMargeUpValInfo_o *v53; // x24
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x8
  FollowerSelectItemListViewItem_o *v61; // x24
  unsigned __int64 v62; // x25
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  EventServantPointRankMaster_o *v69; // x24
  const MethodInfo *v70; // x1
  FollowerSelectItemListViewItem_o *v71; // x8
  int32_t v72; // w25
  EventPersonalMargeUpValInfo_c **v73; // x19
  __int64 v74; // x2
  int64_t v75; // x26
  struct System_String_o *v76; // x28
  int32_t v77; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v79; // w25
  EventMargeItemUpValInfo_o *v80; // x24
  const MethodInfo *v81; // x1
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *AdjustUpValInfoArray; // x19
  EventMargeItemUpValInfo_array *AddUpValInfos; // x0
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  MissionNaviTransitionBoardItem_o *p_eventUpValItemList; // [xsp+0h] [xbp-80h]
  FollowerSelectItemListViewItem_o *v91; // [xsp+8h] [xbp-78h]
  bool isDuplicate; // [xsp+10h] [xbp-70h] BYREF
  int32_t actMaxRarity; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  v8 = this;
  if ( (byte_596AF7E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&EventMargeItemUpValInfo_TypeInfo);
    sub_2213A60(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_2213A60(&System_Func_EventDropUpValInfo__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__96_0__);
    this = (FollowerSelectItemListViewItem_o *)sub_2213A60(&FollowerSelectItemListViewItem___c_TypeInfo);
    byte_596AF7E = 1;
  }
  Option_k__BackingField = v8->fields._Option_k__BackingField;
  skillName = 0;
  actMaxRarity = 0;
  isDuplicate = 0;
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
  *(_WORD *)&v8->fields.isServantEventUpVal = 0;
  v8->fields.eventUpValItemList = 0;
  v8->fields.isEventUpVal = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.eventUpValItemList, 0, v2, v3, v4, v5, v6, v7);
  v12 = v8->fields._Option_k__BackingField;
  if ( !v12 )
    goto LABEL_75;
  followerInfo = v8->fields.followerInfo;
  v14 = v12->fields.setupInfo;
  followerIndex = v8->fields.followerIndex;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v8, method);
  if ( !followerInfo )
    goto LABEL_75;
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEventUpVal_48751972(
                                               followerInfo,
                                               &v8->fields.eventUpValInfo,
                                               &v8->fields.isServantEventUpVal,
                                               &v8->fields.isEquipEventUpVal,
                                               v14,
                                               followerIndex,
                                               (int32_t)this,
                                               0);
  v16 = v8->fields._Option_k__BackingField;
  if ( !v16 )
    goto LABEL_75;
  if ( !v16->fields.isServantBonusFilterEnable )
    v8->fields.isServantEventUpVal = 0;
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, method);
  if ( this )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, method);
    if ( !this )
      goto LABEL_75;
    if ( this->fields.iconLabelInfo1 )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v18);
      if ( !this )
        goto LABEL_75;
      sortValue1 = this->fields.sortValue1;
      sortStr1 = this->fields.sortStr1;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v19);
      *(_QWORD *)&v95.fields.currentCryptoKey = sortValue1;
      *(_QWORD *)&v95.fields.fakeValue = sortStr1;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v95, 0);
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v23);
      if ( !this )
        goto LABEL_75;
      Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0);
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v25);
      if ( !this )
        goto LABEL_75;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      if ( !iconLabelInfo1 )
        goto LABEL_75;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                   *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&iconLabelInfo1[1].klass,
                                                   0);
      if ( !Instance )
        goto LABEL_75;
      this = (FollowerSelectItemListViewItem_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                   (PartyOrganizationUtility_o *)Instance,
                                                   &skillName,
                                                   &actMaxRarity,
                                                   v22,
                                                   Rarity,
                                                   (int32_t)this,
                                                   -1,
                                                   0);
    }
    else
    {
      this = 0;
    }
  }
  v27 = v8->fields._Option_k__BackingField;
  if ( !v27 )
    goto LABEL_75;
  if ( !v27->fields.isServantEquipBonusFilterEnable | (unsigned __int8)this & 1 )
  {
    isEquipEventUpVal = 0;
    v8->fields.isEquipEventUpVal = 0;
  }
  else
  {
    isEquipEventUpVal = v8->fields.isEquipEventUpVal;
  }
  v29 = System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo;
  v8->fields.isEventUpVal = isEquipEventUpVal || v8->fields.isServantEventUpVal;
  v30 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v29);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  eventUpValInfo = v8->fields.eventUpValInfo;
  if ( !eventUpValInfo )
    goto LABEL_75;
  dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
  v34 = FollowerSelectItemListViewItem___c_TypeInfo;
  if ( !*(&FollowerSelectItemListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItem___c_TypeInfo, method, v31);
    v34 = FollowerSelectItemListViewItem___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  p_eventUpValItemList = (MissionNaviTransitionBoardItem_o *)&v8->fields.eventUpValItemList;
  _9__96_0 = (System_Func_object__int__o *)static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( !*(&v34->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v34, method, v31);
      static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__96_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventDropUpValInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__96_0,
      v37,
      Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__96_0__,
      0);
    v38 = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
    v38->__9__96_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__96_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v38->__9__96_0, (int32_t)_9__96_0, v39, v40, v41, v42, v43, v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               dropList,
                                                               (System_Func_TSource__TResult__o *)_9__96_0,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
  v46 = System_Linq_Enumerable__Distinct_int_(
          v45,
          (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
  this = (FollowerSelectItemListViewItem_o *)System_Linq_Enumerable__ToArray_int_(
                                               v46,
                                               (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  actMaxRarity = 0;
  if ( !this )
    goto LABEL_75;
  sortIndex = this->fields.sortIndex;
  v48 = this;
  if ( sortIndex >= 1 )
  {
    v49 = &EventPersonalMargeUpValInfo_TypeInfo;
    v50 = 0;
    v91 = v8;
    while ( 1 )
    {
      if ( v50 >= (unsigned int)sortIndex )
        goto LABEL_76;
      servantEntity = v8->fields.servantEntity;
      v52 = *((_DWORD *)&v48->fields.sortValue0 + v50);
      v53 = (EventPersonalMargeUpValInfo_o *)sub_2213CCC(*v49);
      EventPersonalMargeUpValInfo___ctor(v53, v52, servantEntity, 0);
      this = (FollowerSelectItemListViewItem_o *)v8->fields.eventUpValInfo;
      if ( !this )
        goto LABEL_75;
      this = (FollowerSelectItemListViewItem_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)this, 0, 0);
      if ( !v53 )
        goto LABEL_75;
      EventPersonalMargeUpValInfo__Add(v53, (EventDropItemUpValInfo_array *)this, 0);
      this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__IsEmpty(v53, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__GetList(v53, 0);
        if ( !this )
          goto LABEL_75;
        v60 = *(_QWORD *)&this->fields.sortIndex;
        v61 = this;
        if ( (int)v60 >= 1 )
          break;
      }
LABEL_52:
      if ( !v8->fields.isNpc )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, method);
        if ( this )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v67, v68);
          this = (FollowerSelectItemListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
          if ( !this )
            goto LABEL_75;
          v69 = (EventServantPointRankMaster_o *)this;
          this = (FollowerSelectItemListViewItem_o *)EventServantPointRankMaster__IsEnableEvent(
                                                       (EventServantPointRankMaster_o *)this,
                                                       v52,
                                                       0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v70);
            if ( !this )
              goto LABEL_75;
            v71 = v8;
            v72 = *(_DWORD *)&this->fields.isMaxOpenClassBoard;
            v73 = v49;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v71, method);
            if ( !this )
              goto LABEL_75;
            v75 = this->fields.sortValue1;
            v76 = this->fields.sortStr1;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v74);
            *(_QWORD *)&v96.fields.currentCryptoKey = v75;
            *(_QWORD *)&v96.fields.fakeValue = v76;
            v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v96, 0);
            EnableEntity = EventServantPointRankMaster__GetEnableEntity(v69, v52, v72, v77, 0);
            v79 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
            v49 = v73;
            v80 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
            EventMargeItemUpValInfo___ctor_48723060(v80, v52, 0);
            v8 = v91;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v91, v81);
            if ( !this )
              goto LABEL_75;
            if ( !v80 )
              goto LABEL_75;
            EventMargeItemUpValInfo__SetServantPointInfo(v80, *(_DWORD *)&this->fields.isMaxOpenClassBoard, v79, 1, 0);
            if ( !v30 )
              goto LABEL_75;
            System_Collections_Generic_List_object___Insert(
              v30,
              0,
              (Il2CppObject *)v80,
              (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
          }
        }
      }
      sortIndex = v48->fields.sortIndex;
      v50 = ++actMaxRarity;
      if ( actMaxRarity >= sortIndex )
        goto LABEL_71;
    }
    v62 = 0;
    while ( v62 < (unsigned int)v60 )
    {
      if ( !v30 )
        goto LABEL_75;
      items = v30->fields._items;
      method = (const MethodInfo *)*(&v61->fields.sortValue0 + v62);
      v64 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v30->fields._version;
      if ( !items )
        goto LABEL_75;
      size = v30->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)method,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = &items->obj.klass + size;
        v30->fields._size = size + 1;
        v66[4] = (Il2CppClass *)method;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 4), (int32_t)method, v54, v55, v56, v57, v58, v59);
      }
      LODWORD(v60) = v61->fields.sortIndex;
      if ( (__int64)++v62 >= (int)v60 )
        goto LABEL_52;
    }
LABEL_76:
    sub_2213CE4(this);
  }
LABEL_71:
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this
    || (AdjustUpValInfoArray = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray((PartyOrganizationUtility_o *)this, &isDuplicate, (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v30, 0),
        (this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_75:
    sub_2213CDC(this, method);
  }
  AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                    (PartyOrganizationUtility_o *)this,
                    AdjustUpValInfoArray,
                    0);
  p_eventUpValItemList->klass = (MissionNaviTransitionBoardItem_c *)AddUpValInfos;
  sub_2213A04(p_eventUpValItemList, (int32_t)AddUpValInfos, v84, v85, v86, v87, v88, v89);
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
  int type; // w29
  int32_t followerIndex; // w22
  int32_t DisplayServantType; // w0
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  int v10; // w21
  __int64 v11; // x2
  int64_t *p_sortValue0; // x25
  _BOOL4 isNpc; // w8
  int32_t *p_otherSortKind; // x8
  int32_t priorityKind; // w22
  int32_t i; // w23
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v18; // x3
  EquipTargetInfo_o *v19; // x2
  int64_t v20; // x0
  int v21; // w8
  IconLabelInfo_o *v22; // x20
  FollowerInfo_o *v23; // x21
  int32_t v24; // w22
  int32_t v25; // w0
  FollowerInfo_o *v26; // x22
  int32_t v27; // w23
  int32_t v28; // w21
  const MethodInfo *v29; // x1
  FollowerInfo_o *v30; // x20
  int32_t v31; // w21
  int32_t EquipHp; // w0
  int32_t hp; // w21
  int32_t v34; // w20
  IconLabelInfo_o *v35; // x22
  FollowerInfo_o *v36; // x23
  int32_t v37; // w24
  const MethodInfo *v38; // x1
  __int64 v39; // x2
  int32_t sortValue2; // w22
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  __int64 v43; // x2
  struct System_String_o *sortStr1; // x22
  int64_t sortValue1B; // x23
  System_String_o *v46; // x22
  System_String_o *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  Il2CppObject *MasterData_object; // x24
  int32_t MaxIndividualFilter; // w0
  int32_t v52; // w25
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  int32_t Int_83396820; // w26
  const MethodInfo *v58; // x1
  __int64 v59; // x2
  struct System_String_o *v60; // x27
  int64_t v61; // x28
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  int32_t v66; // w26
  const MethodInfo *v67; // x1
  __int64 v68; // x2
  struct System_String_o *v69; // x27
  int64_t v70; // x28
  int64_t classIndex; // x8
  int64_t deckPriority; // x9
  int v74; // w8
  int64_t v75; // x8
  int32_t index; // w8
  int32_t UseStatus; // w0
  EquipTargetInfo_o *EquipInfo; // x0
  const MethodInfo *v79; // x3
  __int64 v80; // x8
  int64_t v81; // x8
  FollowerInfo_o *v82; // x20
  int32_t v83; // w21
  IconLabelInfo_o *iconLabelInfo2; // x20
  FollowerInfo_o *v85; // x21
  int32_t v86; // w22
  FollowerInfo_o *v87; // x20
  int32_t v88; // w21
  int32_t EquipAtk; // w0
  int32_t atk; // w21
  int32_t v91; // w20
  IconLabelInfo_o *iconLabelInfo1; // x22
  FollowerInfo_o *v93; // x23
  int32_t v94; // w24
  const MethodInfo *v95; // x1
  int32_t Lv; // w0
  FollowerInfo_o *v97; // x22
  int32_t v98; // w23
  int32_t v99; // w21
  const MethodInfo *v100; // x1
  int64_t servantEntity; // x8
  int v102; // w10
  int v103; // w9
  int v104; // w10
  int64_t v105; // x9
  EventBonusFilterGroupMemberEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  int v107; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  v4 = this;
  if ( (byte_596AF81 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3323/*"BonusFilterEquipId"*/);
    this = (FollowerSelectItemListViewItem_o *)sub_2213A60(&StringLiteral_3325/*"BonusFilterGroupId"*/);
    byte_596AF81 = 1;
  }
  followerInfo = v4->fields.followerInfo;
  v107 = 0;
  entity = 0;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = 0;
  if ( !followerInfo )
    goto LABEL_146;
  type = followerInfo->fields.type;
  followerIndex = v4->fields.followerIndex;
  DisplayServantType = FollowerSelectItemListViewItem__get_DisplayServantType(v4, (const MethodInfo *)sort);
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getSvtId(followerInfo, followerIndex, DisplayServantType, 0);
  Option_k__BackingField = v4->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    goto LABEL_146;
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
        goto LABEL_146;
      sortValue2 = this->fields.sortValue2;
      this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, sort, v39);
        this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( sortValue2 >= this->fields.eventUpValInfo->fields.equipSvtId )
        goto LABEL_149;
    }
    if ( !sort )
      goto LABEL_146;
    if ( ListViewSort__GetFilter(sort, 40, 0) )
    {
LABEL_149:
      if ( !FollowerSelectItemListViewItem__get_EquipInfo(v4, (const MethodInfo *)sort) )
        goto LABEL_71;
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v41);
      if ( !this )
        goto LABEL_146;
      sortStr1 = this->fields.sortStr1;
      sortValue1B = this->fields.sortValue1B;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v43);
      *(_QWORD *)&v108.fields.currentCryptoKey = sortStr1;
      *(_QWORD *)&v108.fields.fakeValue = sortValue1B;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                   v108,
                                                   0);
      if ( (int)this < 1 )
        goto LABEL_71;
      if ( !sort )
        goto LABEL_146;
      if ( ListViewSort__GetFilter(sort, 41, 0) )
        goto LABEL_71;
      v46 = (System_String_o *)StringLiteral_3323/*"BonusFilterEquipId"*/;
      v47 = (System_String_o *)StringLiteral_3325/*"BonusFilterGroupId"*/;
      this = (FollowerSelectItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_146;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !*(&ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo, v48, v49);
      MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0);
      v107 = 0;
      if ( MaxIndividualFilter < 1 )
      {
LABEL_71:
        if ( FollowerSelectItemListViewItem__ChkWholeFilter(v4, sort, v42) )
          goto LABEL_7;
      }
      else
      {
        v52 = MaxIndividualFilter;
        while ( 1 )
        {
          v53 = System_Int32__ToString((int32_t)&v107, 0);
          v54 = System_String__Concat_75651716(v46, v53, 0);
          if ( UnityEngine_PlayerPrefs__HasKey(v54, 0) )
          {
            v55 = System_Int32__ToString((int32_t)&v107, 0);
            v56 = System_String__Concat_75651716(v46, v55, 0);
            Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820(v56, 0);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v58);
            if ( !this )
              goto LABEL_146;
            v60 = this->fields.sortStr1;
            v61 = this->fields.sortValue1B;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v59);
            *(_QWORD *)&v109.fields.currentCryptoKey = v60;
            *(_QWORD *)&v109.fields.fakeValue = v61;
            if ( Int_83396820 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v109, 0) )
              break;
          }
          v62 = System_Int32__ToString((int32_t)&v107, 0);
          v63 = System_String__Concat_75651716(v47, v62, 0);
          if ( UnityEngine_PlayerPrefs__HasKey(v63, 0) )
          {
            v64 = System_Int32__ToString((int32_t)&v107, 0);
            v65 = System_String__Concat_75651716(v47, v64, 0);
            v66 = UnityEngine_PlayerPrefs__GetInt_83396820(v65, 0);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v4, v67);
            if ( !this )
              goto LABEL_146;
            v69 = this->fields.sortStr1;
            v70 = this->fields.sortValue1B;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v68);
            *(_QWORD *)&v110.fields.currentCryptoKey = v69;
            *(_QWORD *)&v110.fields.fakeValue = v70;
            this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                         v110,
                                                         0);
            if ( !MasterData_object )
              goto LABEL_146;
            if ( EventBonusFilterGroupMemberMaster__TryGetEntity(
                   (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                   &entity,
                   v66,
                   (int32_t)this,
                   0) )
            {
              return 0;
            }
          }
          if ( ++v107 >= v52 )
            goto LABEL_71;
        }
      }
    }
    return 0;
  }
LABEL_7:
  this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_146;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  v4->fields.sortValue0 = 0;
  p_sortValue0 = &v4->fields.sortValue0;
  isNpc = v4->fields.isNpc;
  v4->fields.sortValue0B = 0;
  if ( !isNpc )
  {
    if ( !sort )
      goto LABEL_146;
    priorityKind = sort->fields.priorityKind;
    if ( v4->fields._IsGrandSupport_k__BackingField )
    {
      for ( i = 0; ; ++i )
      {
        this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, sort, v11);
          this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( i >= SHIDWORD(this->fields.eventUpValInfo->fields.dropList) )
          break;
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v4, (const MethodInfo *)sort);
        if ( ServantLeader )
        {
          ServantLeader = (ServantLeaderInfo_o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(ServantLeader, i, 0);
          v19 = (EquipTargetInfo_o *)ServantLeader;
        }
        else
        {
          v19 = 0;
        }
        v20 = FollowerSelectItemListViewItem__CalculatePriorityKindSortValue(
                (FollowerSelectItemListViewItem_o *)ServantLeader,
                priorityKind,
                v19,
                v18);
        if ( v20 > *p_sortValue0 )
          *p_sortValue0 = v20;
      }
    }
    else
    {
      EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v4, (const MethodInfo *)sort);
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__CalculatePriorityKindSortValue(
                                                   (FollowerSelectItemListViewItem_o *)EquipInfo,
                                                   priorityKind,
                                                   EquipInfo,
                                                   v79);
      v4->fields.sortValue0 = (int64_t)this;
    }
  }
  if ( v4->fields._IsRecommendFollower_k__BackingField )
  {
    if ( !sort )
      goto LABEL_146;
    p_otherSortKind = &sort->fields.otherSortKind;
  }
  else
  {
    if ( !sort )
      goto LABEL_146;
    p_otherSortKind = &sort->fields.sortKind;
  }
  v21 = *p_otherSortKind;
  if ( v21 != 11 )
  {
    if ( v10 < 1 )
    {
      this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_146;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
      if ( type <= 2 )
      {
        if ( type == 1 )
        {
          this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
          v80 = 2;
        }
        else
        {
          if ( type != 2 )
            goto LABEL_137;
          this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
          v80 = 1;
        }
      }
      else
      {
        if ( (unsigned int)(type - 3) < 2 )
        {
          index = v4->fields.index;
LABEL_127:
          servantEntity = -index;
          v4->fields.sortValue0 = 1000000000000LL;
LABEL_136:
          v4->fields.sortValue2 = servantEntity;
          goto LABEL_137;
        }
        if ( type != 5 )
          goto LABEL_137;
        this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
        v80 = 3;
      }
      v4->fields.sortValue0B = v80;
      if ( this )
      {
        v4->fields.sortValue2 = FollowerInfo__getUpdatedAt((FollowerInfo_o *)this, 0);
        goto LABEL_137;
      }
      goto LABEL_146;
    }
    if ( v21 > 5 )
    {
      if ( v21 == 6 )
      {
        v87 = v4->fields.followerInfo;
        v88 = v4->fields.followerIndex;
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                     v4,
                                                     (const MethodInfo *)sort);
        if ( !v87 )
          goto LABEL_146;
        EquipAtk = FollowerInfo__getEquipAtk(v87, v88, (int32_t)this, 0);
        atk = v4->fields.atk;
        v91 = EquipAtk;
        iconLabelInfo1 = v4->fields.iconLabelInfo1;
        v93 = v4->fields.followerInfo;
        v94 = v4->fields.followerIndex;
        v4->fields.sortValue1 = atk + EquipAtk;
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v4, v95);
        if ( !v93 )
          goto LABEL_146;
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetAtkBoostValue(v93, v94, (int32_t)this, 0);
        if ( !iconLabelInfo1 )
          goto LABEL_146;
        IconLabelInfo__Set_47880948(iconLabelInfo1, 5, atk, (int32_t)this, v91, 0, 0, 0, 0, 0);
        goto LABEL_111;
      }
      if ( v21 != 29 )
        goto LABEL_102;
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      if ( !this )
        goto LABEL_146;
      UseStatus = FollowerInfo__GetUseStatus((FollowerInfo_o *)this, 0);
    }
    else
    {
      if ( v21 != 3 )
      {
        if ( v21 == 5 )
        {
          v30 = v4->fields.followerInfo;
          v31 = v4->fields.followerIndex;
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                       v4,
                                                       (const MethodInfo *)sort);
          if ( !v30 )
            goto LABEL_146;
          EquipHp = FollowerInfo__getEquipHp(v30, v31, (int32_t)this, 0);
          hp = v4->fields.hp;
          v34 = EquipHp;
          v35 = v4->fields.iconLabelInfo1;
          v36 = v4->fields.followerInfo;
          v37 = v4->fields.followerIndex;
          v4->fields.sortValue1 = hp + EquipHp;
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v4, v38);
          if ( !v36 )
            goto LABEL_146;
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetHpBoostValue(v36, v37, (int32_t)this, 0);
          if ( !v35 )
            goto LABEL_146;
          IconLabelInfo__Set_47880948(v35, 3, hp, (int32_t)this, v34, 0, 0, 0, 0, 0);
LABEL_111:
          iconLabelInfo2 = v4->fields.iconLabelInfo2;
          v85 = v4->fields.followerInfo;
          v86 = v4->fields.followerIndex;
          goto LABEL_112;
        }
LABEL_102:
        v81 = v4->fields.sortValue2;
LABEL_106:
        iconLabelInfo2 = v4->fields.iconLabelInfo1;
        v85 = v4->fields.followerInfo;
        v86 = v4->fields.followerIndex;
        v4->fields.sortValue1 = v81;
LABEL_112:
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                     v4,
                                                     (const MethodInfo *)sort);
        if ( !v85 )
          goto LABEL_146;
        Lv = FollowerInfo__getLv(v85, v86, (int32_t)this, 0);
        v97 = v4->fields.followerInfo;
        v98 = v4->fields.followerIndex;
        v99 = Lv;
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v4, v100);
        if ( !v97 )
          goto LABEL_146;
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v97, v98, (int32_t)this, 0);
        if ( !iconLabelInfo2 )
          goto LABEL_146;
        IconLabelInfo__Set_47880948(iconLabelInfo2, 2, v99, (int32_t)this, 0, 0, 0, 0, 0, 0);
        LODWORD(servantEntity) = v4->fields.classIndex;
        if ( (int)servantEntity <= 0 )
        {
          servantEntity = (int64_t)v4->fields.servantEntity;
          if ( !servantEntity )
            goto LABEL_146;
          LODWORD(servantEntity) = *(_DWORD *)(servantEntity + 208);
        }
        if ( v4->fields.isQuestRestriction )
          v102 = 0;
        else
          v102 = 100;
        if ( v4->fields._IsGrandSupport_k__BackingField )
          v103 = 10;
        else
          v103 = 0;
        if ( type <= 2 )
        {
          if ( type == 1 )
          {
            v104 = v102 | 3;
          }
          else
          {
            if ( type != 2 )
              goto LABEL_137;
            v104 = v102 | 2;
          }
          v105 = (unsigned int)(v104 + v103);
          servantEntity = (int)servantEntity;
        }
        else
        {
          if ( (unsigned int)(type - 3) < 2 )
          {
LABEL_126:
            index = v4->fields.index;
            v4->fields.sortValue1 = 0;
            goto LABEL_127;
          }
          if ( type != 5 )
            goto LABEL_137;
          servantEntity = (int)servantEntity;
          v105 = (unsigned int)(v102 + v103 + 4);
        }
        v4->fields.sortValue0B = v105;
        goto LABEL_136;
      }
      v82 = v4->fields.followerInfo;
      v83 = v4->fields.followerIndex;
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                   v4,
                                                   (const MethodInfo *)sort);
      if ( !v82 )
        goto LABEL_146;
      UseStatus = FollowerInfo__getLv(v82, v83, (int32_t)this, 0);
    }
    v81 = UseStatus;
    goto LABEL_106;
  }
  if ( v10 < 1 )
  {
    this = (FollowerSelectItemListViewItem_o *)v4->fields.iconLabelInfo1;
    v4->fields.sortValue2 = 0;
    v4->fields.sortValue2B = 0;
    if ( !this )
      goto LABEL_146;
    IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  }
  else
  {
    v22 = v4->fields.iconLabelInfo1;
    v23 = v4->fields.followerInfo;
    v24 = v4->fields.followerIndex;
    v4->fields.sortValue2 = v4->fields.deckPriority;
    v4->fields.sortValue2B = 1;
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(
                                                 v4,
                                                 (const MethodInfo *)sort);
    if ( !v23 )
      goto LABEL_146;
    v25 = FollowerInfo__getLv(v23, v24, (int32_t)this, 0);
    v26 = v4->fields.followerInfo;
    v27 = v4->fields.followerIndex;
    v28 = v25;
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_DisplayServantType(v4, v29);
    if ( !v26 )
      goto LABEL_146;
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v26, v27, (int32_t)this, 0);
    if ( !v22 )
      goto LABEL_146;
    IconLabelInfo__Set_47880948(v22, 2, v28, (int32_t)this, 0, 0, 0, 0, 0, 0);
  }
  classIndex = (unsigned int)v4->fields.classIndex;
  if ( (int)classIndex >= 1 )
  {
    deckPriority = v4->fields.deckPriority;
    v4->fields.sortValue2 = classIndex;
    v4->fields.sortValue2B = deckPriority;
  }
  if ( v4->fields._IsGrandSupport_k__BackingField )
    v74 = 10;
  else
    v74 = 0;
  if ( type <= 2 )
  {
    if ( type == 1 )
    {
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v75 = v74 | 5u;
    }
    else
    {
      if ( type != 2 )
        goto LABEL_137;
      this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
      v75 = v74 | 4u;
    }
LABEL_97:
    v4->fields.sortValue0B = v75;
    if ( this )
    {
      v4->fields.sortValue1 = FollowerInfo__getUpdatedAt((FollowerInfo_o *)this, 0);
      goto LABEL_137;
    }
LABEL_146:
    sub_2213CDC(this, sort);
  }
  if ( (unsigned int)(type - 3) < 2 )
    goto LABEL_126;
  if ( type == 5 )
  {
    this = (FollowerSelectItemListViewItem_o *)v4->fields.followerInfo;
    v75 = (unsigned int)(v74 + 6);
    goto LABEL_97;
  }
LABEL_137:
  if ( v4->fields._isRecommendedUser_k__BackingField )
    *p_sortValue0 += 10000000000000LL;
  return 1;
}


bool FollowerSelectItemListViewItem__TryGetSupportSelectOverwriteTreasureDeviceName(
        FollowerSelectItemListViewItem_o *this,
        System_String_o **overwriteTDName,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *OverwriteTreasureDeviceName_k__BackingField; // x1

  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    OverwriteTreasureDeviceName_k__BackingField = followerInfo->fields._OverwriteTreasureDeviceName_k__BackingField;
  else
    OverwriteTreasureDeviceName_k__BackingField = 0;
  *overwriteTDName = OverwriteTreasureDeviceName_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)overwriteTDName,
    (int32_t)OverwriteTreasureDeviceName_k__BackingField,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  return !System_String__IsNullOrEmpty(*overwriteTDName, 0);
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
          sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(DisplayServantType, v6);
  IndexForSupport = FollowerInfo__getIndexForSupport(
                      followerInfo,
                      followerClassId,
                      DisplayServantType,
                      this->fields.supportDeckId,
                      this->fields._GrandGraphId_k__BackingField,
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
  __int64 v2; // x2
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_596AF87 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596AF87 = 1;
  }
  result = this->fields.grandFollowerClassId;
  if ( !result )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Master_object )
      sub_2213CDC(0, v6);
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
    sub_2213CDC(this, method);
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

  if ( (byte_596AF82 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19957/*"error"*/);
    byte_596AF82 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    p_userName = &followerInfo->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_19957/*"error"*/;
  return *p_userName;
}


QuestRestrictionInfo_o *FollowerSelectItemListViewItem__get_QuestRestrictionInfo(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8

  Option_k__BackingField = this->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    sub_2213CDC(this, method);
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
  const MethodInfo *v5; // x1
  ServantLeaderInfo_o *ServantLeader; // x0

  followerInfo = this->fields.followerInfo;
  if ( followerInfo && this->fields.isNpc )
    return followerInfo->fields.userName;
  if ( !this->fields.servantEntity )
    return 0;
  if ( FollowerSelectItemListViewItem__get_ServantLeader(this, method) )
  {
    ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(this, v5);
    if ( ServantLeader )
      return ServantLeaderInfo__GetName(ServantLeader, 0);
LABEL_11:
    sub_2213CDC(ServantLeader, v5);
  }
  ServantLeader = (ServantLeaderInfo_o *)this->fields.servantEntity;
  if ( !ServantLeader )
    goto LABEL_11;
  return ServantEntity__getName((ServantEntity_o *)ServantLeader, -1, -1, 0, 0, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596AF88 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItem___c_TypeInfo);
    byte_596AF88 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(FollowerSelectItemListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerSelectItemListViewItem___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewItem___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)FollowerSelectItemListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return drop->fields.eventId;
}