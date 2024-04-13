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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  IconLabelInfo_o *v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
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
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_Dictionary_int__int__o *v74; // x19
  const MethodInfo *v75; // x2

  if ( (byte_42EBBC3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor___68674872, index, index2, followerInfo);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v27, v28, v29);
    byte_42EBBC3 = 1;
  }
  v30 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v30, 0LL);
  this->fields.iconLabelInfo1 = v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo2 = v37;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.friendPointUpVal = friendPointUpVal;
  this->fields.friendPointUpMaxVal = friendPointUpMaxVal;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.followerInfo = followerInfo;
  sub_B5D560(
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
    v74 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor_49325128(
      v74,
      (System_Collections_Generic_IDictionary_TKey__TValue__o *)classBoardMaxNumDictionary,
      (const MethodInfo_2F0A448 *)Method_System_Collections_Generic_Dictionary_int__int___ctor___68674872);
  }
  else
  {
    v74 = 0LL;
  }
  this->fields.classBoardMaxNumDictionary = v74;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.classBoardMaxNumDictionary,
    (System_Int32_array **)v74,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields._IsReleasedClassBoard_k__BackingField = isReleasedClassBoard;
  FollowerSelectItemListViewItem__AnalyzeEntity(this, followerClassId, v75);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
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
  FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *v55; // x8
  int64_t Index; // x0
  __int64 v57; // x1
  struct QuestRestrictionInfo_o *v58; // x8
  FollowerInfo_o *v59; // x23
  int32_t v60; // w20
  int32_t v61; // w2
  struct FollowerInfo_o *v62; // x8
  int32_t v63; // w20
  const MethodInfo *v64; // x1
  struct EventCampaignEntity_o *EnableFriendPointCampaign; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct ServantEntity_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  FollowerInfo_o *v79; // x22
  struct QuestRestrictionInfo_o *v80; // x21
  int32_t followerIndex; // w23
  int32_t v82; // w3
  struct QuestRestrictionInfo_o *v83; // x8
  FollowerInfo_o *v84; // x22
  struct QuestRestrictionInfo_o *v85; // x21
  int32_t v86; // w23
  int32_t v87; // w3
  FollowerInfo_o *v88; // x22
  struct QuestRestrictionInfo_o *v89; // x21
  int32_t v90; // w23
  int32_t v91; // w3
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x1
  struct QuestRestrictionInfo_o *v94; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  struct QuestRestrictionInfo_o *v96; // x8
  int32_t v97; // w20
  struct FollowerInfo_o *v98; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v101; // w21
  unsigned int v102; // w24
  ClassBoardInfo_o *v103; // x22
  int32_t v104; // w8
  struct FollowerInfo_o *v105; // x8
  TblFriendMaster_o *v106; // x20
  int32_t type; // w9
  int32_t v108; // w1
  struct System_Int32_array *squareIds; // x8
  __int64 v110; // x0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EBBC4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, followerClassId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v31, v32, v33);
    sub_B5D5C4(&NetworkManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    byte_42EBBC4 = 1;
  }
  entity = 0LL;
  this->fields.isNpc = 0;
  this->fields.followerClassId = followerClassId;
  this->fields.servantEntity = 0LL;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventUpValItemList, 0LL, v40, v41, v42, v43, v44, v45);
  this->fields.friendPointCampaignEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntity, 0LL, v46, v47, v48, v49, v50, v51);
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
    v58 = this->fields.questRestrictionInfo;
    v59 = this->fields.followerInfo;
    v60 = Index;
    this->fields.followerIndex = Index;
    if ( v58 )
    {
      Index = FollowerInfo__GetReturnTypeByQuestId(v58->fields.questId, 0LL);
      v61 = Index;
      if ( !v59 )
        goto LABEL_88;
    }
    else
    {
      v61 = 0;
      if ( !v59 )
        goto LABEL_88;
    }
    Index = FollowerInfo__getSvtId(v59, v60, v61, 0LL);
    if ( (int)Index < 1 )
    {
      v83 = this->fields.questRestrictionInfo;
      if ( v83 )
        LOBYTE(v83) = v83->fields.isRestriction;
      this->fields.isQuestRestriction = (char)v83;
    }
    else
    {
      v62 = this->fields.followerInfo;
      if ( !v62 )
        goto LABEL_88;
      v63 = Index;
      this->fields.isNpc = Follower__IsNpc(v62->fields.type, 0LL);
      EnableFriendPointCampaign = FollowerSelectItemListViewItem__GetEnableFriendPointCampaign(this, v64);
      this->fields.friendPointCampaignEntity = EnableFriendPointCampaign;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntity,
        (System_Int32_array **)EnableFriendPointCampaign,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      Index = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Index )
        goto LABEL_88;
      Index = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Index,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Index )
        goto LABEL_88;
      v72 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Index,
                                        v63,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.servantEntity = v72;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.servantEntity,
        (System_Int32_array **)v72,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
      v79 = this->fields.followerInfo;
      v80 = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( v80 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v80->fields.questId, 0LL);
        v82 = Index;
        if ( !v79 )
          goto LABEL_88;
      }
      else
      {
        v82 = 0;
        if ( !v79 )
          goto LABEL_88;
      }
      Index = FollowerInfo__getQuestRestriction(v79, v80, followerIndex, v82, 0LL);
      v84 = this->fields.followerInfo;
      v85 = this->fields.questRestrictionInfo;
      v86 = this->fields.followerIndex;
      this->fields.isQuestRestriction = Index & 1;
      if ( v85 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v85->fields.questId, 0LL);
        v87 = Index;
        if ( !v84 )
          goto LABEL_88;
      }
      else
      {
        v87 = 0;
        if ( !v84 )
          goto LABEL_88;
      }
      Index = FollowerInfo__getUniqueSvtRestriction(v84, v85, v86, v87, 0LL);
      v88 = this->fields.followerInfo;
      v89 = this->fields.questRestrictionInfo;
      v90 = this->fields.followerIndex;
      this->fields.isUniqueSvtRestriction = Index & 1;
      if ( v89 )
      {
        Index = FollowerInfo__GetReturnTypeByQuestId(v89->fields.questId, 0LL);
        v91 = Index;
        if ( !v88 )
          goto LABEL_88;
      }
      else
      {
        v91 = 0;
        if ( !v88 )
          goto LABEL_88;
      }
      this->fields.isUniqueIndividualityRestriction = FollowerInfo__IsUniqueIndividualityRestriction(
                                                        v88,
                                                        v89,
                                                        v90,
                                                        v91,
                                                        0LL);
      this->fields._IsSlotRestriction_k__BackingField = FollowerSelectItemListViewItem__CheckSlotRestriction(this, v92);
      FollowerSelectItemListViewItem__SetEventUpInfo(this, v93);
      v94 = this->fields.questRestrictionInfo;
      if ( v94 && v94->fields.isDataLostBattle )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Index = NetworkManager__get_UserId(0LL);
        v96 = this->fields.questRestrictionInfo;
        if ( !v96 || !Master_WarQuestSelectionMaster )
          goto LABEL_88;
        if ( UserEventDataLostMaster__TryGetEntity(
               (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
               &entity,
               Index,
               v96->fields.dataLostBattleId,
               0LL) )
        {
          Index = (int64_t)entity;
          if ( !entity )
            goto LABEL_88;
          Index = UserEventDataLostEntity__IsRestart(entity, v63, 0LL);
          if ( !entity )
            goto LABEL_88;
          if ( (Index & 1) != 0 )
          {
            this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(entity, v63, 0LL);
          }
          else if ( UserEventDataLostEntity__IsDataLost(entity, v63, 0LL) )
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
        Index = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
        if ( !Index )
          goto LABEL_88;
        Index = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Index,
                           v63,
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Index )
          goto LABEL_88;
        v97 = *(_DWORD *)(Index + 80);
        Index = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
        if ( !Index )
          goto LABEL_88;
        Index = ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Index, v97, 0LL);
        v98 = this->fields.followerInfo;
        if ( !v98 )
          goto LABEL_88;
        userClassBoardInfo = v98->fields.userClassBoardInfo;
        if ( !userClassBoardInfo )
          goto LABEL_88;
        max_length = userClassBoardInfo->max_length;
        if ( max_length < 1 )
        {
LABEL_68:
          this->fields._OpenClassBoardNum_k__BackingField = 0;
          if ( !this )
            goto LABEL_88;
          v104 = 0;
          LODWORD(Index) = -1;
        }
        else
        {
          v101 = Index;
          v102 = 0;
          while ( 1 )
          {
            if ( v102 >= max_length )
            {
              v110 = sub_B5D6C8(Index);
              sub_B5D668(v110, 0LL);
            }
            v103 = userClassBoardInfo->m_Items[v102];
            if ( !v103 )
              goto LABEL_88;
            if ( v103->fields.classBoardBaseId == v101 )
            {
              Index = (int64_t)this->fields.classBoardMaxNumDictionary;
              if ( !Index )
                goto LABEL_88;
              Index = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                        (System_Collections_Generic_Dictionary_int__int__o *)Index,
                        v101,
                        (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
              if ( (Index & 1) != 0 )
              {
                Index = ClassBoardInfo__IsReleasedClassId(v103, v97, 0LL);
                if ( (Index & 1) != 0 )
                  break;
              }
            }
            max_length = userClassBoardInfo->max_length;
            if ( (int)++v102 >= max_length )
              goto LABEL_68;
          }
          Index = (int64_t)this->fields.classBoardMaxNumDictionary;
          if ( !Index )
            goto LABEL_88;
          Index = System_Collections_Generic_Dictionary_int__int___get_Item(
                    (System_Collections_Generic_Dictionary_int__int__o *)Index,
                    v101,
                    (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          squareIds = v103->fields.squareIds;
          if ( !squareIds )
            goto LABEL_88;
          v104 = squareIds->max_length;
          this->fields._OpenClassBoardNum_k__BackingField = v104;
        }
        this->fields._IsMaxOpenClassBoard_k__BackingField = v104 >= (int)Index && (int)Index > 0;
      }
    }
    Index = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Index )
    {
      Index = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Index,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___);
      v105 = this->fields.followerInfo;
      if ( v105 )
      {
        v106 = (TblFriendMaster_o *)Index;
        if ( v105->fields.type == 5
          || Index
          && (Index = TblFriendMaster__isMessageDisp((TblFriendMaster_o *)Index, 3, v105->fields.userId, 0LL),
              v105 = this->fields.followerInfo,
              this->fields.isMessageDisp = Index & 1,
              v105) )
        {
          type = v105->fields.type;
          if ( (type | 4) == 5 )
          {
            if ( !v106 )
              goto LABEL_88;
            if ( type == 5 )
              v108 = 9;
            else
              v108 = 3;
            this->fields.isLockUser = TblFriendMaster__IsLockUser(v106, v108, v105->fields.userId, 0LL);
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
    sub_B5D69C(Index, v57);
  }
  v55 = this->fields.questRestrictionInfo;
  this->fields.followerIndex = 0;
  if ( v55 )
    LOBYTE(v55) = v55->fields.isRestriction;
  this->fields.isQuestRestriction = (char)v55;
}


bool __fastcall FollowerSelectItemListViewItem__CheckSlotRestriction(
        FollowerSelectItemListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FollowerSelectItemListViewItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FollowerInfo_o *followerInfo; // x21
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t followerIndex; // w22
  int32_t v14; // w3
  bool v15; // w8
  int sortValue1; // w21
  int32_t sortValue1_high; // w20
  FollowerInfo_o *v19; // x21
  struct QuestRestrictionInfo_o *v20; // x8
  int32_t v21; // w22
  int32_t v22; // w2
  ServantLeaderInfo_o *v23; // x21
  QuestRestrictionInfo_o *v24; // x19
  struct System_String_o *sortStr1; // x22
  int64_t v26; // x23
  int32_t v27; // w0
  int32_t limitCount; // w22
  int32_t v29; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  v4 = this;
  if ( (byte_42EBBC5 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5, v6, v7);
    this = (FollowerSelectItemListViewItem_o *)sub_B5D5C4(
                                                 &SingletonTemplate_PartyOrganizationUtility__TypeInfo,
                                                 v8,
                                                 v9,
                                                 v10);
    byte_42EBBC5 = 1;
  }
  followerInfo = v4->fields.followerInfo;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  followerIndex = v4->fields.followerIndex;
  if ( questRestrictionInfo )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                 questRestrictionInfo->fields.questId,
                                                 0LL);
    v14 = (int)this;
    if ( !followerInfo )
      goto LABEL_32;
  }
  else
  {
    v14 = 0;
    if ( !followerInfo )
      goto LABEL_32;
  }
  if ( FollowerInfo__IsSlotRestriction(followerInfo, questRestrictionInfo, followerIndex, v14, 0LL) )
    return 1;
  this = (FollowerSelectItemListViewItem_o *)v4->fields.questRestrictionInfo;
  if ( !this )
    goto LABEL_32;
  if ( QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)this, 0LL) )
    return 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_32;
  sortValue1 = this->fields.sortValue1;
  this = (FollowerSelectItemListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_32;
  v15 = 0;
  if ( sortValue1 < 1 || v4->fields.isNpc )
    return v15;
  if ( !v4->fields.questRestrictionInfo )
    goto LABEL_32;
  sortValue1_high = HIDWORD(this->fields.sortValue1);
  this = (FollowerSelectItemListViewItem_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(
                                               v4->fields.questRestrictionInfo,
                                               sortValue1_high,
                                               0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v19 = v4->fields.followerInfo;
  v20 = v4->fields.questRestrictionInfo;
  v21 = v4->fields.followerIndex;
  if ( v20 )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v20->fields.questId, 0LL);
    v22 = (int)this;
    if ( !v19 )
      goto LABEL_32;
  }
  else
  {
    v22 = 0;
    if ( !v19 )
      goto LABEL_32;
  }
  this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getServantLeaderInfo(v19, v21, v22, 0LL);
  if ( !this )
    goto LABEL_32;
  v23 = (ServantLeaderInfo_o *)this;
  v24 = v4->fields.questRestrictionInfo;
  v26 = this->fields.sortValue1;
  sortStr1 = this->fields.sortStr1;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v26;
  *(_QWORD *)&v30.fields.fakeValue = sortStr1;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
  limitCount = v23->fields.limitCount;
  v29 = v27;
  this = (FollowerSelectItemListViewItem_o *)ServantLeaderInfo__getDispLimitCount(v23, 0LL);
  if ( !v24 )
LABEL_32:
    sub_B5D69C(this, method);
  return QuestRestrictionInfo__IsRestrictionServantIndividuality(
           v24,
           v29,
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
    sub_B5D69C(this, 0LL);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  FollowerInfo_o *followerInfo; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w3
  BalanceConfig_c *v14; // x0
  SkillInfo_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42EBBCE & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, isNpc, method);
    sub_B5D5C4(&SkillInfo___TypeInfo, v7, v8, v9);
    byte_42EBBCE = 1;
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
    v14 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    v15 = (SkillInfo_array *)sub_B5D5DC(
                               SkillInfo___TypeInfo,
                               (unsigned int)v14->static_fields->SvtAppendPassiveSkillListMax);
    *skillInfoList = v15;
    sub_B5D560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
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
    sub_B5D69C(SvtId, v4);
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
        v16 = sub_B5D6C8(SvtId);
        sub_B5D668(v16, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *v14; // x0
  __int64 v15; // x1
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  System_String_o *v17; // x19
  Il2CppObject *v18; // x0
  int v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EBBCD & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6461/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, v11, v12, v13);
    byte_42EBBCD = 1;
  }
  if ( !this->fields.friendPointCampaignEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_6461/*"FOLLOWER_SELECT_FRIEND_POINT_CAMPAIGN"*/, 0LL);
  friendPointCampaignEntity = this->fields.friendPointCampaignEntity;
  if ( !friendPointCampaignEntity )
    sub_B5D69C(v14, v15);
  v17 = v14;
  v20 = friendPointCampaignEntity->fields.value / 1000;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  return System_String__Format(v17, v18, 0LL);
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
    sub_B5D69C(FriendPointUpVal, v9);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42EBBCC & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, (_DWORD)tdInfo, (_DWORD)method, v3);
    byte_42EBBCC = 1;
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
    v10 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v10, 0LL);
    *tdInfo = v10;
    sub_B5D560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    return 0;
  }
}


bool __fastcall FollowerSelectItemListViewItem__GetSkillInfo(
        FollowerSelectItemListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w3
  BalanceConfig_c *v13; // x0
  SkillInfo_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42EBBCB & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, (_DWORD)method, v3);
    sub_B5D5C4(&SkillInfo___TypeInfo, v6, v7, v8);
    byte_42EBBCB = 1;
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
    v13 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = (SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)v13->static_fields->SvtSkillListMax);
    *skillInfoList = v14;
    sub_B5D560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_Dictionary_string__int__o *result; // x0
  const MethodInfo *v31; // x1
  __int64 v32; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *values; // x19
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *keys; // x20
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x19
  const MethodInfo *v36; // x1
  struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v37; // x20
  struct System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v38; // x21
  ServantSkillEntity_array *ServantSkillList; // x19
  SkillLvMaster_o *v40; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x21
  const MethodInfo *v42; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_string__int__o *v44; // x22
  unsigned __int64 v45; // x24
  int v46; // w26
  int max_length; // w8
  int32_t v48; // w2
  unsigned int v49; // w9
  ServantSkillEntity_o *v50; // x10
  SkillLvEntity_o *v51; // x8
  unsigned __int64 v52; // x28
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v54; // x9
  int age; // w8
  unsigned __int64 v56; // x8
  unsigned __int64 entries_low; // x8
  System_Collections_Generic_Dictionary_string__int__c **v58; // x8
  System_Collections_Generic_Dictionary_string__int__o *v59; // x23
  __int64 v60; // x0
  WarEntity_o *v61; // [xsp+0h] [xbp-60h] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_42EBBC7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantSkillMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1174/*"3"*/, v27, v28, v29);
    byte_42EBBC7 = 1;
  }
  v61 = 0LL;
  entity = 0LL;
  result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                     this,
                                                                     *(const MethodInfo **)&kind);
  if ( result )
  {
    result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                       this,
                                                                       v31);
    if ( !result )
      goto LABEL_77;
    keys = result->fields.keys;
    values = result->fields.values;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v63.fields.currentCryptoKey = keys;
    *(_QWORD *)&v63.fields.fakeValue = values;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v63, 0LL) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantSkillMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v36);
      if ( !result )
        goto LABEL_77;
      v38 = result->fields.keys;
      v37 = result->fields.values;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v64.fields.currentCryptoKey = v38;
      *(_QWORD *)&v64.fields.fakeValue = v37;
      result = (System_Collections_Generic_Dictionary_string__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                         v64,
                                                                         0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      ServantSkillList = ServantSkillMaster__getServantSkillList(Master_WarQuestSelectionMaster, (int32_t)result, 0LL);
      v40 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
      v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
      result = (System_Collections_Generic_Dictionary_string__int__o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                                         this,
                                                                         v42);
      if ( !result )
        goto LABEL_77;
      result = (System_Collections_Generic_Dictionary_string__int__o *)EquipTargetInfo__getSkillIdList(
                                                                         (EquipTargetInfo_o *)result,
                                                                         0LL);
      if ( !result )
        goto LABEL_77;
      entries = result->fields.entries;
      v44 = result;
      if ( (int)entries >= 1 )
      {
        v45 = 0LL;
        v46 = kind - 1;
        while ( 1 )
        {
          if ( v45 >= (unsigned int)entries )
            goto LABEL_78;
          if ( !ServantSkillList )
            goto LABEL_77;
          max_length = ServantSkillList->max_length;
          v48 = *(&v44->fields.count + v45);
          if ( max_length >= 1 )
          {
            v49 = 0;
            while ( v49 < max_length )
            {
              v50 = ServantSkillList->m_Items[v49];
              if ( !v50 )
                goto LABEL_77;
              if ( v50->fields.skillId == v48 && v50->fields.eventId > 0 )
                goto LABEL_74;
              if ( (int)++v49 >= max_length )
                goto LABEL_30;
            }
LABEL_78:
            v60 = sub_B5D6C8(result);
            sub_B5D668(v60, 0LL);
          }
LABEL_30:
          if ( !v40 )
            goto LABEL_77;
          result = (System_Collections_Generic_Dictionary_string__int__o *)SkillLvMaster__TryGetEntity(
                                                                             v40,
                                                                             &entity,
                                                                             v48,
                                                                             1,
                                                                             0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
LABEL_74:
          LODWORD(entries) = v44->fields.entries;
          if ( (__int64)++v45 >= (int)entries )
            return 0LL;
        }
        v51 = entity;
        if ( entity )
        {
          v52 = 0LL;
          while ( 1 )
          {
            funcId = v51->fields.funcId;
            if ( !funcId )
              break;
            v54 = funcId->max_length;
            if ( (__int64)v52 >= (int)v54 )
              goto LABEL_74;
            if ( v52 >= v54 )
              goto LABEL_78;
            if ( v41 )
            {
              result = (System_Collections_Generic_Dictionary_string__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                 v41,
                                                                                 &v61,
                                                                                 funcId->m_Items[v52 + 1],
                                                                                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)result & 1) != 0 )
              {
                switch ( v46 )
                {
                  case 0:
                    if ( !v61 )
                      goto LABEL_77;
                    age = (int)v61->fields.age;
                    if ( age != 104 && age != 123 )
                      break;
                    goto LABEL_55;
                  case 1:
                    if ( !v61 )
                      goto LABEL_77;
                    if ( LODWORD(v61->fields.age) != 101 )
                      break;
                    goto LABEL_55;
                  case 2:
                    if ( !v61 )
                      goto LABEL_77;
                    if ( LODWORD(v61->fields.age) != 112 )
                      break;
                    goto LABEL_55;
                  case 3:
                    if ( !v61 )
                      goto LABEL_77;
                    if ( LODWORD(v61->fields.age) == 111 )
                      goto LABEL_55;
                    break;
                  case 4:
                    if ( !v61 )
                      goto LABEL_77;
                    if ( (LODWORD(v61->fields.age) | 8) != 110 )
                      break;
                    goto LABEL_55;
                  case 5:
                    if ( !v61 )
                      goto LABEL_77;
                    if ( LODWORD(v61->fields.age) != 106 )
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
                    if ( (__int64)v52 > (int)entries_low )
                      break;
                    if ( v52 >= entries_low )
                      goto LABEL_78;
                    v58 = &result->klass + v52;
                    v59 = (System_Collections_Generic_Dictionary_string__int__o *)v58[4];
                    if ( !v59 )
                      break;
                    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v58[4],
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_1174/*"3"*/,
                           (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
                    {
                      result = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                         v59,
                                                                                         (System_String_o *)StringLiteral_1174/*"3"*/,
                                                                                         (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
                    v56 = LODWORD(result->fields.entries);
                    if ( (__int64)v52 >= (int)v56 )
                      break;
                    if ( v52 >= v56 )
                      goto LABEL_78;
                    result = (System_Collections_Generic_Dictionary_string__int__o *)*((_QWORD *)&result->fields.count
                                                                                     + v52);
                    if ( result )
                      return result;
                    break;
                  default:
                    goto LABEL_55;
                }
              }
              v51 = entity;
              ++v52;
              if ( entity )
                continue;
            }
            break;
          }
        }
LABEL_77:
        sub_B5D69C(result, v32);
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
        sub_B5D69C(this, *(_QWORD *)&friendPointUpVal);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  FollowerInfo_o *followerInfo; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventUpValSetupInfo_o *v67; // x23
  int32_t followerIndex; // w24
  int32_t v69; // w6
  bool *p_isEquipEventUpVal; // x21
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x1
  struct IconLabelInfo_o *iconLabelInfo2; // x8
  PartyOrganizationUtility_o *v74; // x22
  const MethodInfo *v75; // x1
  struct System_String_o *sortStr1; // x23
  int64_t sortValue1; // x24
  int32_t v78; // w23
  const MethodInfo *v79; // x1
  int32_t Rarity; // w24
  const MethodInfo *v81; // x1
  struct IconLabelInfo_o *v82; // x8
  bool v83; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  FollowerSelectItemListViewItem___c_c *v87; // x0
  struct FollowerSelectItemListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__68_0; // x23
  Il2CppObject *v90; // x24
  struct FollowerSelectItemListViewItem___c_StaticFields *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x0
  int32_t sortIndex; // w9
  FollowerSelectItemListViewItem_o *v101; // x22
  DataManager_c **v102; // x27
  int32_t v103; // w8
  DataManager_c *v104; // x0
  EventServantPointRankMaster_o *v105; // x24
  int32_t eventUpValItemList; // w25
  DataManager_c **v107; // x28
  struct System_String_o *v108; // x26
  int64_t v109; // x27
  int32_t v110; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v112; // w24
  EventMargeItemUpValInfo_o *v113; // x25
  const MethodInfo *v114; // x1
  ServantEntity_o *servantEntity; // x25
  int32_t v116; // w23
  EventPersonalMargeUpValInfo_o *v117; // x24
  __int64 v118; // x8
  FollowerSelectItemListViewItem_o *v119; // x24
  unsigned __int64 v120; // x25
  System_Int32_array **v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  __int64 v128; // x0
  BattleServantConfConponent_o *p_eventUpValItemList; // [xsp+8h] [xbp-68h]
  int32_t actMaxRarity; // [xsp+14h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16

  v8 = this;
  if ( (byte_42EBBC6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v18, v19, v20);
    sub_B5D5C4(&EventMargeItemUpValInfo_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&EventPersonalMargeUpValInfo_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_EventDropUpValInfo__int___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_EventDropUpValInfo__int__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v51, v52, v53);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__68_0__, v57, v58, v59);
    this = (FollowerSelectItemListViewItem_o *)sub_B5D5C4(&FollowerSelectItemListViewItem___c_TypeInfo, v60, v61, v62);
    byte_42EBBC6 = 1;
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
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields.eventUpValItemList, 0LL, v2, v3, v4, v5, v6, v7);
      followerInfo = v8->fields.followerInfo;
      v67 = v8->fields.setupInfo;
      questRestrictionInfo = v8->fields.questRestrictionInfo;
      followerIndex = v8->fields.followerIndex;
      if ( questRestrictionInfo )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                     questRestrictionInfo->fields.questId,
                                                     0LL);
        v69 = (int)this;
        if ( !followerInfo )
          goto LABEL_76;
      }
      else
      {
        v69 = 0;
        if ( !followerInfo )
          goto LABEL_76;
      }
      p_isEquipEventUpVal = &v8->fields.isEquipEventUpVal;
      FollowerInfo__getEventUpVal_21689028(
        followerInfo,
        &v8->fields.eventUpValInfo,
        &v8->fields.isServantEventUpVal,
        &v8->fields.isEquipEventUpVal,
        v67,
        followerIndex,
        v69,
        0LL);
      if ( !v8->fields.isServantBonusFilterEnable )
        v8->fields.isServantEventUpVal = 0;
      if ( FollowerSelectItemListViewItem__get_ServantLeader(v8, v71) )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v72);
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
          v74 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v75);
          if ( !this )
            goto LABEL_76;
          sortValue1 = this->fields.sortValue1;
          sortStr1 = this->fields.sortStr1;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v132.fields.currentCryptoKey = sortValue1;
          *(_QWORD *)&v132.fields.fakeValue = sortStr1;
          v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v132, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v79);
          if ( !this )
            goto LABEL_76;
          Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
          this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, v81);
          if ( !this )
            goto LABEL_76;
          v82 = this->fields.iconLabelInfo2;
          if ( !v82 )
            goto LABEL_76;
          this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                       *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v82[1].monitor,
                                                       0LL);
          if ( !v74 )
            goto LABEL_76;
          LODWORD(iconLabelInfo2) = PartyOrganizationUtility__IsRarityRestriction(
                                      v74,
                                      &skillName,
                                      &actMaxRarity,
                                      v78,
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
        v83 = 0;
        *p_isEquipEventUpVal = 0;
      }
      else
      {
        v83 = *p_isEquipEventUpVal;
      }
      v8->fields.isEventUpVal = v83 || v8->fields.isServantEventUpVal;
      v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v84,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = v8->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v87 = FollowerSelectItemListViewItem___c_TypeInfo;
        if ( (BYTE3(FollowerSelectItemListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerSelectItemListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItem___c_TypeInfo);
          v87 = FollowerSelectItemListViewItem___c_TypeInfo;
        }
        static_fields = v87->static_fields;
        p_eventUpValItemList = (BattleServantConfConponent_o *)&v8->fields.eventUpValItemList;
        _9__68_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__68_0;
        if ( !_9__68_0 )
        {
          if ( (BYTE3(v87->vtable._0_Equals.methodPtr) & 4) != 0 && !v87->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v87);
            static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
          }
          v90 = (Il2CppObject *)static_fields->__9;
          _9__68_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__68_0,
            v90,
            Method_FollowerSelectItemListViewItem___c__SetEventUpInfo_b__68_0__,
            (const MethodInfo_2C2F87C *)Method_System_Func_EventDropUpValInfo__int___ctor__);
          v91 = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
          v91->__9__68_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__68_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v91->__9__68_0,
            (System_Int32_array **)_9__68_0,
            v92,
            v93,
            v94,
            v95,
            v96,
            v97);
        }
        v98 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                     dropList,
                                                                     (System_Func_TSource__TResult__o *)_9__68_0,
                                                                     (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v99 = System_Linq_Enumerable__Distinct_int_(
                v98,
                (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
        this = (FollowerSelectItemListViewItem_o *)System_Linq_Enumerable__ToArray_int_(
                                                     v99,
                                                     (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
        actMaxRarity = 0;
        if ( this )
        {
          sortIndex = this->fields.sortIndex;
          v101 = this;
          if ( sortIndex >= 1 )
          {
            v102 = &DataManager_TypeInfo;
            v103 = 0;
            while ( 1 )
            {
              if ( v103 >= (unsigned int)sortIndex )
                goto LABEL_77;
              servantEntity = v8->fields.servantEntity;
              v116 = *((_DWORD *)&v101->fields.sortValue0 + v103);
              v117 = (EventPersonalMargeUpValInfo_o *)sub_B5D694(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v117, v116, servantEntity, 0LL);
              this = (FollowerSelectItemListViewItem_o *)v8->fields.eventUpValInfo;
              if ( !this )
                goto LABEL_76;
              this = (FollowerSelectItemListViewItem_o *)EventUpValInfo__GetDropItemList(
                                                           (EventUpValInfo_o *)this,
                                                           0,
                                                           0LL);
              if ( !v117 )
                goto LABEL_76;
              EventPersonalMargeUpValInfo__Add(v117, (EventDropItemUpValInfo_array *)this, 0LL);
              this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__IsEmpty(v117, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (FollowerSelectItemListViewItem_o *)EventPersonalMargeUpValInfo__GetList(v117, 0LL);
                if ( !this )
                  goto LABEL_76;
                v118 = *(_QWORD *)&this->fields.sortIndex;
                v119 = this;
                if ( (int)v118 >= 1 )
                  break;
              }
LABEL_71:
              if ( !v8->fields.isNpc )
              {
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(v8, method);
                if ( this )
                {
                  v104 = *v102;
                  if ( (BYTE3((*v102)->vtable._0_Equals.methodPtr) & 4) != 0 && !v104->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v104);
                  this = (FollowerSelectItemListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
                  if ( !this )
                    goto LABEL_76;
                  v105 = (EventServantPointRankMaster_o *)this;
                  this = (FollowerSelectItemListViewItem_o *)EventServantPointRankMaster__IsEnableEvent(
                                                               (EventServantPointRankMaster_o *)this,
                                                               v116,
                                                               0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v8,
                                                                 method);
                    if ( !this )
                      goto LABEL_76;
                    eventUpValItemList = (int32_t)this->fields.eventUpValItemList;
                    v107 = v102;
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v8,
                                                                 method);
                    if ( !this )
                      goto LABEL_76;
                    v109 = this->fields.sortValue1;
                    v108 = this->fields.sortStr1;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    *(_QWORD *)&v133.fields.currentCryptoKey = v109;
                    *(_QWORD *)&v133.fields.fakeValue = v108;
                    v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v133, 0LL);
                    EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                                     v105,
                                     v116,
                                     eventUpValItemList,
                                     v110,
                                     0LL);
                    v112 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
                    v102 = v107;
                    v113 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
                    EventMargeItemUpValInfo___ctor_27133428(v113, v116, 0LL);
                    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                                 v8,
                                                                 v114);
                    if ( !this )
                      goto LABEL_76;
                    if ( !v113 )
                      goto LABEL_76;
                    EventMargeItemUpValInfo__SetServantPointInfo(
                      v113,
                      (int32_t)this->fields.eventUpValItemList,
                      v112,
                      1,
                      0LL);
                    if ( !v84 )
                      goto LABEL_76;
                    System_Collections_Generic_List_XWeaponTrail_Element___Insert(
                      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v84,
                      0,
                      (XWeaponTrail_Element_o *)v113,
                      (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                  }
                }
              }
              v103 = actMaxRarity + 1;
              actMaxRarity = v103;
              sortIndex = v101->fields.sortIndex;
              if ( v103 >= sortIndex )
                goto LABEL_73;
            }
            v120 = 0LL;
            while ( v120 < (unsigned int)v118 )
            {
              if ( !v84 )
                goto LABEL_76;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v84,
                *((EventMissionProgressRequest_Argument_ProgressData_o **)&v119->fields.sortValue0 + v120),
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
              LODWORD(v118) = v119->fields.sortIndex;
              if ( (__int64)++v120 >= (int)v118 )
                goto LABEL_71;
            }
LABEL_77:
            v128 = sub_B5D6C8(this);
            sub_B5D668(v128, 0LL);
          }
LABEL_73:
          if ( v84 )
          {
            v121 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v84,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
            p_eventUpValItemList->klass = (BattleServantConfConponent_c *)v121;
            sub_B5D560(p_eventUpValItemList, v121, v122, v123, v124, v125, v126, v127);
            return;
          }
        }
      }
LABEL_76:
      sub_B5D69C(this, method);
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
  __int64 v3; // x3
  FollowerSelectItemListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  FollowerInfo_o *followerInfo; // x21
  int32_t type; // w27
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w22
  int32_t ReturnTypeByQuestId; // w2
  int32_t SvtId; // w21
  const MethodInfo *v45; // x2
  __int64 *p_sortValue0; // x26
  int32_t priorityKind; // w23
  System_Collections_Generic_Dictionary_string__int__o *ValuesDictionary; // x22
  const MethodInfo *v49; // x1
  int64_t v50; // x24
  struct System_String_o *v51; // x25
  int32_t Item; // w0
  const MethodInfo *v53; // x1
  int v54; // w8
  signed int sortValue2; // w22
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x2
  int64_t sortValue1B; // x22
  struct System_String_o *sortStr1; // x23
  System_String_o *v60; // x22
  System_String_o *v61; // x23
  int32_t MaxIndividualFilter; // w0
  int v63; // w25
  int32_t v64; // w24
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  int32_t Int_35647620; // w26
  const MethodInfo *v70; // x1
  int64_t v71; // x27
  struct System_String_o *v72; // x28
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  int32_t v77; // w26
  const MethodInfo *v78; // x1
  int64_t v79; // x27
  struct System_String_o *v80; // x28
  int32_t v81; // w3
  __int64 *v83; // x23
  __int64 v84; // x22
  const MethodInfo *v85; // x1
  int sortValue2B_high; // w23
  int64_t v87; // x22
  int32_t v88; // w23
  __int64 v89; // x8
  __int64 v90; // x22
  int v91; // w23
  int64_t v92; // x22
  int32_t v93; // w23
  int32_t sortKind; // w8
  IconLabelInfo_o *iconLabelInfo1; // x20
  FollowerInfo_o *v96; // x21
  struct QuestRestrictionInfo_o *v97; // x8
  int32_t v98; // w22
  int32_t v99; // w2
  FollowerInfo_o *v100; // x20
  struct QuestRestrictionInfo_o *v101; // x8
  int32_t v102; // w21
  int32_t v103; // w2
  int32_t index; // w8
  FollowerInfo_o *v105; // x22
  struct QuestRestrictionInfo_o *v106; // x8
  int32_t v107; // w23
  int32_t v108; // w21
  int32_t v109; // w2
  int64_t classIndex; // x8
  int64_t deckPriority; // x9
  __int64 v112; // x8
  FollowerInfo_o *v113; // x20
  struct QuestRestrictionInfo_o *v114; // x8
  int32_t v115; // w21
  int32_t v116; // w2
  FollowerInfo_o *v117; // x20
  struct QuestRestrictionInfo_o *v118; // x8
  int32_t v119; // w21
  int32_t v120; // w2
  int64_t v121; // x9
  IconLabelInfo_o *iconLabelInfo2; // x20
  FollowerInfo_o *v123; // x21
  struct QuestRestrictionInfo_o *v124; // x8
  int32_t v125; // w22
  __int64 v126; // x8
  int32_t v127; // w2
  FollowerInfo_o *v128; // x20
  struct QuestRestrictionInfo_o *v129; // x8
  int32_t v130; // w22
  int v131; // w21
  int32_t v132; // w2
  FollowerInfo_o *v133; // x20
  struct QuestRestrictionInfo_o *v134; // x8
  int32_t v135; // w22
  int v136; // w21
  int32_t v137; // w2
  IconLabelInfo_o *v138; // x20
  FollowerInfo_o *v139; // x22
  struct QuestRestrictionInfo_o *v140; // x8
  int32_t v141; // w23
  int32_t v142; // w2
  FollowerInfo_o *v143; // x22
  struct QuestRestrictionInfo_o *v144; // x8
  int32_t v145; // w23
  int32_t v146; // w2
  FollowerInfo_o *v147; // x22
  struct QuestRestrictionInfo_o *v148; // x8
  int32_t v149; // w23
  int32_t v150; // w21
  int32_t v151; // w2
  FollowerInfo_o *v152; // x22
  struct QuestRestrictionInfo_o *v153; // x8
  int32_t v154; // w23
  int32_t v155; // w2
  FollowerInfo_o *v156; // x23
  struct QuestRestrictionInfo_o *v157; // x8
  int32_t v158; // w24
  int32_t v159; // w22
  int32_t v160; // w2
  FollowerInfo_o *v161; // x23
  struct QuestRestrictionInfo_o *v162; // x8
  int32_t v163; // w24
  int32_t v164; // w2
  int32_t v165; // w4
  int32_t v166; // w1
  FollowerInfo_o *v167; // x22
  struct QuestRestrictionInfo_o *v168; // x8
  int32_t v169; // w23
  int32_t v170; // w21
  int32_t v171; // w2
  int64_t servantEntity; // x8
  _BOOL4 isQuestRestriction; // w9
  __int64 v174; // x10
  __int64 v175; // x11
  __int64 v176; // x9
  EventBonusFilterGroupMemberMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-68h]
  EventBonusFilterGroupMemberEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int v179; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16

  v5 = this;
  if ( (byte_42EBBC8 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantBonusFilterSelectMenu_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1124/*"2"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_2892/*"BonusFilterEquipId"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_2894/*"BonusFilterGroupId"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1026/*"1"*/, v33, v34, v35);
    this = (FollowerSelectItemListViewItem_o *)sub_B5D5C4(&StringLiteral_973/*"0"*/, v36, v37, v38);
    byte_42EBBC8 = 1;
  }
  v179 = 0;
  entity = 0LL;
  followerInfo = v5->fields.followerInfo;
  *(_WORD *)&v5->fields.isTermination = 0;
  v5->fields.sortValue1 = 0LL;
  if ( !followerInfo )
    goto LABEL_198;
  type = followerInfo->fields.type;
  questRestrictionInfo = v5->fields.questRestrictionInfo;
  followerIndex = v5->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  SvtId = FollowerInfo__getSvtId(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
  if ( v5->fields.isBonusFilterEnable && !v5->fields.isNpc )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                 v5,
                                                 (const MethodInfo *)sort);
    if ( this )
    {
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                   v5,
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
      if ( !FollowerSelectItemListViewItem__get_EquipInfo(v5, (const MethodInfo *)sort) )
        goto LABEL_59;
      this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v5, v56);
      if ( !this )
        goto LABEL_198;
      sortStr1 = this->fields.sortStr1;
      sortValue1B = this->fields.sortValue1B;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v181.fields.currentCryptoKey = sortStr1;
      *(_QWORD *)&v181.fields.fakeValue = sortValue1B;
      this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                   v181,
                                                   0LL);
      if ( (int)this < 1 )
        goto LABEL_59;
      if ( !sort )
        goto LABEL_198;
      if ( ListViewSort__GetFilter(sort, 41, 0LL) )
        goto LABEL_59;
      v60 = (System_String_o *)StringLiteral_2892/*"BonusFilterEquipId"*/;
      v61 = (System_String_o *)StringLiteral_2894/*"BonusFilterGroupId"*/;
      this = (FollowerSelectItemListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_198;
      MasterData_WarQuestSelectionMaster = (EventBonusFilterGroupMemberMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    (DataManager_o *)this,
                                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      }
      MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v179 = 0;
      if ( MaxIndividualFilter < 1 )
      {
LABEL_59:
        if ( FollowerSelectItemListViewItem__ChkWholeFilter(v5, sort, v57) )
          goto LABEL_9;
      }
      else
      {
        v63 = MaxIndividualFilter;
        v64 = type;
        while ( 1 )
        {
          v65 = System_Int32__ToString((int32_t)&v179, 0LL);
          v66 = System_String__Concat_44577788(v60, v65, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v66, 0LL) )
          {
            v67 = System_Int32__ToString((int32_t)&v179, 0LL);
            v68 = System_String__Concat_44577788(v60, v67, 0LL);
            Int_35647620 = UnityEngine_PlayerPrefs__GetInt_35647620(v68, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v5, v70);
            if ( !this )
              goto LABEL_198;
            v72 = this->fields.sortStr1;
            v71 = this->fields.sortValue1B;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v182.fields.currentCryptoKey = v72;
            *(_QWORD *)&v182.fields.fakeValue = v71;
            type = v64;
            if ( Int_35647620 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v182, 0LL) )
              break;
          }
          v73 = System_Int32__ToString((int32_t)&v179, 0LL);
          v74 = System_String__Concat_44577788(v61, v73, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v74, 0LL) )
          {
            v75 = System_Int32__ToString((int32_t)&v179, 0LL);
            v76 = System_String__Concat_44577788(v61, v75, 0LL);
            v77 = UnityEngine_PlayerPrefs__GetInt_35647620(v76, 0LL);
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v5, v78);
            if ( !this )
              goto LABEL_198;
            v80 = this->fields.sortStr1;
            v79 = this->fields.sortValue1B;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v183.fields.currentCryptoKey = v80;
            *(_QWORD *)&v183.fields.fakeValue = v79;
            v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v183, 0LL);
            this = (FollowerSelectItemListViewItem_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_198;
            type = v64;
            if ( EventBonusFilterGroupMemberMaster__TryGetEntity(
                   MasterData_WarQuestSelectionMaster,
                   &entity,
                   v77,
                   v81,
                   0LL) )
            {
              return 0;
            }
          }
          if ( ++v179 >= v63 )
            goto LABEL_59;
        }
      }
    }
    return 0;
  }
LABEL_9:
  this = (FollowerSelectItemListViewItem_o *)v5->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_198;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  v5->fields.sortValue0 = 0LL;
  p_sortValue0 = &v5->fields.sortValue0;
  v5->fields.sortValue0B = 0LL;
  if ( !sort )
    goto LABEL_198;
  priorityKind = sort->fields.priorityKind;
  ValuesDictionary = FollowerSelectItemListViewItem__GetValuesDictionary(v5, priorityKind, v45);
  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v5, v49);
  if ( this )
  {
    this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                 v5,
                                                 (const MethodInfo *)sort);
    if ( !this )
      goto LABEL_198;
    v51 = this->fields.sortStr1;
    v50 = this->fields.sortValue1B;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v180.fields.currentCryptoKey = v51;
    *(_QWORD *)&v180.fields.fakeValue = v50;
    this = (FollowerSelectItemListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                 v180,
                                                 0LL);
    if ( ValuesDictionary )
    {
      if ( (int)this >= 1 )
      {
        if ( (unsigned int)(priorityKind - 2) >= 4 )
        {
          if ( priorityKind == 6 )
          {
            v83 = &StringLiteral_1124/*"2"*/;
          }
          else
          {
            if ( priorityKind != 1 )
              goto LABEL_87;
            v83 = &StringLiteral_973/*"0"*/;
          }
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                                                       (System_Xml_XmlQualifiedName_o *)*v83,
                                                       (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v84 = 100000LL
                * System_Collections_Generic_Dictionary_string__int___get_Item(
                    ValuesDictionary,
                    (System_String_o *)*v83,
                    (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            v5->fields.sortValue0 = v84;
            this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v5, v85);
            if ( this )
            {
              sortValue2B_high = HIDWORD(this->fields.sortValue2B);
              this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                           v5,
                                                           (const MethodInfo *)sort);
              if ( this )
              {
                v87 = v84 + 10LL * (*(_DWORD *)&this->fields.isTermination + sortValue2B_high);
                v5->fields.sortValue0 = v87;
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                             v5,
                                                             (const MethodInfo *)sort);
                if ( this )
                {
                  v88 = this->fields.sortValue2;
                  this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  v89 = v87 | (v88 >= BalanceConfig_TypeInfo->static_fields->ServantLimitMax);
                  goto LABEL_86;
                }
              }
            }
LABEL_198:
            sub_B5D69C(this, sort);
          }
        }
        else
        {
          this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                       (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                                                       (System_Xml_XmlQualifiedName_o *)StringLiteral_973/*"0"*/,
                                                       (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItem_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)ValuesDictionary,
                                                         (System_Xml_XmlQualifiedName_o *)StringLiteral_1026/*"1"*/,
                                                         (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                     ValuesDictionary,
                     (System_String_o *)StringLiteral_973/*"0"*/,
                     (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) == 1 )
              {
                Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                         ValuesDictionary,
                         (System_String_o *)StringLiteral_1026/*"1"*/,
                         (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v54 = 100000;
              }
              else
              {
                if ( System_Collections_Generic_Dictionary_string__int___get_Item(
                       ValuesDictionary,
                       (System_String_o *)StringLiteral_973/*"0"*/,
                       (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) != 2 )
                {
                  v90 = *p_sortValue0;
                  goto LABEL_77;
                }
                Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                         ValuesDictionary,
                         (System_String_o *)StringLiteral_1026/*"1"*/,
                         (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
                v54 = 100000000;
              }
              v90 = Item * (__int64)v54;
              *p_sortValue0 = v90;
LABEL_77:
              this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(v5, v53);
              if ( this )
              {
                v91 = HIDWORD(this->fields.sortValue2B);
                this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                             v5,
                                                             (const MethodInfo *)sort);
                if ( this )
                {
                  v92 = v90 + 10LL * (*(_DWORD *)&this->fields.isTermination + v91);
                  v5->fields.sortValue0 = v92;
                  this = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                               v5,
                                                               (const MethodInfo *)sort);
                  if ( this )
                  {
                    v93 = this->fields.sortValue2;
                    this = (FollowerSelectItemListViewItem_o *)BalanceConfig_TypeInfo;
                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    }
                    if ( v93 < BalanceConfig_TypeInfo->static_fields->ServantLimitMax )
                      v89 = v92;
                    else
                      v89 = v92 + 1;
LABEL_86:
                    *p_sortValue0 = v89;
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
      this = (FollowerSelectItemListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue2 = 0LL;
      v5->fields.sortValue2B = 0LL;
      if ( !this )
        goto LABEL_198;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
    }
    else
    {
      iconLabelInfo1 = v5->fields.iconLabelInfo1;
      v96 = v5->fields.followerInfo;
      v97 = v5->fields.questRestrictionInfo;
      v98 = v5->fields.followerIndex;
      v5->fields.sortValue2 = v5->fields.deckPriority;
      v5->fields.sortValue2B = 1LL;
      if ( v97 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v97->fields.questId, 0LL);
        v99 = (int)this;
        if ( !v96 )
          goto LABEL_198;
      }
      else
      {
        v99 = 0;
        if ( !v96 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v96, v98, v99, 0LL);
      v105 = v5->fields.followerInfo;
      v106 = v5->fields.questRestrictionInfo;
      v107 = v5->fields.followerIndex;
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
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v105, v107, v109, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_198;
      IconLabelInfo__Set_28463004(iconLabelInfo1, 2, v108, (int32_t)this, 0, 0, 0, 0, 0LL);
    }
    classIndex = v5->fields.classIndex;
    if ( (int)classIndex >= 1 )
    {
      deckPriority = v5->fields.deckPriority;
      v5->fields.sortValue2 = classIndex;
      v5->fields.sortValue2B = deckPriority;
    }
    switch ( type )
    {
      case 1:
        this = (FollowerSelectItemListViewItem_o *)v5->fields.followerInfo;
        v112 = 5LL;
        goto LABEL_117;
      case 2:
        this = (FollowerSelectItemListViewItem_o *)v5->fields.followerInfo;
        v112 = 4LL;
        goto LABEL_117;
      case 3:
      case 4:
        goto LABEL_185;
      case 5:
        this = (FollowerSelectItemListViewItem_o *)v5->fields.followerInfo;
        v112 = 6LL;
LABEL_117:
        v5->fields.sortValue0B = v112;
        if ( !this )
          goto LABEL_198;
        v5->fields.sortValue1 = FollowerInfo__getUpdatedAt((FollowerInfo_o *)this, 0LL);
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
      v113 = v5->fields.followerInfo;
      v114 = v5->fields.questRestrictionInfo;
      v115 = v5->fields.followerIndex;
      if ( v114 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v114->fields.questId, 0LL);
        v116 = (int)this;
        if ( !v113 )
          goto LABEL_198;
      }
      else
      {
        v116 = 0;
        if ( !v113 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v113, v115, v116, 0LL);
      v128 = v5->fields.followerInfo;
      v129 = v5->fields.questRestrictionInfo;
      v130 = v5->fields.followerIndex;
      v131 = (int)this;
      if ( v129 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v129->fields.questId, 0LL);
        v132 = (int)this;
        if ( !v128 )
          goto LABEL_198;
      }
      else
      {
        v132 = 0;
        if ( !v128 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v128, v130, v132, 0LL);
      v138 = v5->fields.iconLabelInfo1;
      v139 = v5->fields.followerInfo;
      v140 = v5->fields.questRestrictionInfo;
      v141 = v5->fields.followerIndex;
      v5->fields.sortValue1 = (int)this + v131;
      if ( v140 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v140->fields.questId, 0LL);
        v142 = (int)this;
        if ( !v139 )
          goto LABEL_198;
      }
      else
      {
        v142 = 0;
        if ( !v139 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAtk(v139, v141, v142, 0LL);
      v147 = v5->fields.followerInfo;
      v148 = v5->fields.questRestrictionInfo;
      v149 = v5->fields.followerIndex;
      v150 = (int)this;
      if ( v148 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v148->fields.questId, 0LL);
        v151 = (int)this;
        if ( !v147 )
          goto LABEL_198;
      }
      else
      {
        v151 = 0;
        if ( !v147 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustAtk(v147, v149, v151, 0LL);
      v156 = v5->fields.followerInfo;
      v157 = v5->fields.questRestrictionInfo;
      v158 = v5->fields.followerIndex;
      v159 = (int)this;
      if ( v157 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v157->fields.questId, 0LL);
        v160 = (int)this;
        if ( !v156 )
          goto LABEL_198;
      }
      else
      {
        v160 = 0;
        if ( !v156 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipAtk(v156, v158, v160, 0LL);
      if ( !v138 )
        goto LABEL_198;
      v165 = (int)this;
      v166 = 5;
    }
    else
    {
      if ( sortKind != 5 )
      {
        if ( sortKind == 3 )
        {
          v100 = v5->fields.followerInfo;
          v101 = v5->fields.questRestrictionInfo;
          v102 = v5->fields.followerIndex;
          if ( v101 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v101->fields.questId, 0LL);
            v103 = (int)this;
            if ( !v100 )
              goto LABEL_198;
          }
          else
          {
            v103 = 0;
            if ( !v100 )
              goto LABEL_198;
          }
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v100, v102, v103, 0LL);
          iconLabelInfo2 = v5->fields.iconLabelInfo1;
          v123 = v5->fields.followerInfo;
          v124 = v5->fields.questRestrictionInfo;
          v125 = v5->fields.followerIndex;
          v121 = (int)this;
        }
        else
        {
          v121 = v5->fields.sortValue2;
          iconLabelInfo2 = v5->fields.iconLabelInfo1;
          v123 = v5->fields.followerInfo;
          v124 = v5->fields.questRestrictionInfo;
          v125 = v5->fields.followerIndex;
        }
        v5->fields.sortValue1 = v121;
        if ( v124 )
        {
LABEL_134:
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v124->fields.questId, 0LL);
          v127 = (int)this;
          if ( !v123 )
            goto LABEL_198;
LABEL_176:
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getLv(v123, v125, v127, 0LL);
          v167 = v5->fields.followerInfo;
          v168 = v5->fields.questRestrictionInfo;
          v169 = v5->fields.followerIndex;
          v170 = (int)this;
          if ( v168 )
          {
            this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v168->fields.questId, 0LL);
            v171 = (int)this;
            if ( !v167 )
              goto LABEL_198;
          }
          else
          {
            v171 = 0;
            if ( !v167 )
              goto LABEL_198;
          }
          this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getMaxLv(v167, v169, v171, 0LL);
          if ( !iconLabelInfo2 )
            goto LABEL_198;
          IconLabelInfo__Set_28463004(iconLabelInfo2, 2, v170, (int32_t)this, 0, 0, 0, 0, 0LL);
          LODWORD(servantEntity) = v5->fields.classIndex;
          if ( (int)servantEntity <= 0 )
          {
            servantEntity = (int64_t)v5->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_198;
            LODWORD(servantEntity) = *(_DWORD *)(servantEntity + 208);
          }
          switch ( type )
          {
            case 1:
              isQuestRestriction = v5->fields.isQuestRestriction;
              v174 = 3LL;
              v175 = 6LL;
              goto LABEL_190;
            case 2:
              isQuestRestriction = v5->fields.isQuestRestriction;
              v174 = 2LL;
              v175 = 5LL;
              goto LABEL_190;
            case 3:
            case 4:
LABEL_185:
              index = v5->fields.index;
              v5->fields.sortValue0 = 1000000000000LL;
              v5->fields.sortValue1 = 0LL;
              goto LABEL_186;
            case 5:
              isQuestRestriction = v5->fields.isQuestRestriction;
              v174 = 4LL;
              v175 = 7LL;
LABEL_190:
              servantEntity = (int)servantEntity;
              if ( isQuestRestriction )
                v176 = v174;
              else
                v176 = v175;
              v5->fields.sortValue0B = v176;
              goto LABEL_194;
            default:
              goto LABEL_195;
          }
        }
LABEL_175:
        v127 = 0;
        if ( !v123 )
          goto LABEL_198;
        goto LABEL_176;
      }
      v117 = v5->fields.followerInfo;
      v118 = v5->fields.questRestrictionInfo;
      v119 = v5->fields.followerIndex;
      if ( v118 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v118->fields.questId, 0LL);
        v120 = (int)this;
        if ( !v117 )
          goto LABEL_198;
      }
      else
      {
        v120 = 0;
        if ( !v117 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v117, v119, v120, 0LL);
      v133 = v5->fields.followerInfo;
      v134 = v5->fields.questRestrictionInfo;
      v135 = v5->fields.followerIndex;
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
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v133, v135, v137, 0LL);
      v138 = v5->fields.iconLabelInfo1;
      v143 = v5->fields.followerInfo;
      v144 = v5->fields.questRestrictionInfo;
      v145 = v5->fields.followerIndex;
      v5->fields.sortValue1 = (int)this + v136;
      if ( v144 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v144->fields.questId, 0LL);
        v146 = (int)this;
        if ( !v143 )
          goto LABEL_198;
      }
      else
      {
        v146 = 0;
        if ( !v143 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getHp(v143, v145, v146, 0LL);
      v152 = v5->fields.followerInfo;
      v153 = v5->fields.questRestrictionInfo;
      v154 = v5->fields.followerIndex;
      v150 = (int)this;
      if ( v153 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v153->fields.questId, 0LL);
        v155 = (int)this;
        if ( !v152 )
          goto LABEL_198;
      }
      else
      {
        v155 = 0;
        if ( !v152 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getAdjustHp(v152, v154, v155, 0LL);
      v161 = v5->fields.followerInfo;
      v162 = v5->fields.questRestrictionInfo;
      v163 = v5->fields.followerIndex;
      v159 = (int)this;
      if ( v162 )
      {
        this = (FollowerSelectItemListViewItem_o *)FollowerInfo__GetReturnTypeByQuestId(v162->fields.questId, 0LL);
        v164 = (int)this;
        if ( !v161 )
          goto LABEL_198;
      }
      else
      {
        v164 = 0;
        if ( !v161 )
          goto LABEL_198;
      }
      this = (FollowerSelectItemListViewItem_o *)FollowerInfo__getEquipHp(v161, v163, v164, 0LL);
      if ( !v138 )
        goto LABEL_198;
      v165 = (int)this;
      v166 = 3;
    }
    IconLabelInfo__Set_28463004(v138, v166, v150, v159, v165, 0, 0, 0, 0LL);
    iconLabelInfo2 = v5->fields.iconLabelInfo2;
    v123 = v5->fields.followerInfo;
    v124 = v5->fields.questRestrictionInfo;
    v125 = v5->fields.followerIndex;
    if ( v124 )
      goto LABEL_134;
    goto LABEL_175;
  }
  this = (FollowerSelectItemListViewItem_o *)v5->fields.iconLabelInfo1;
  if ( !this )
    goto LABEL_198;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  switch ( type )
  {
    case 1:
      this = (FollowerSelectItemListViewItem_o *)v5->fields.followerInfo;
      v126 = 2LL;
      goto LABEL_129;
    case 2:
      this = (FollowerSelectItemListViewItem_o *)v5->fields.followerInfo;
      v126 = 1LL;
      goto LABEL_129;
    case 3:
    case 4:
      index = v5->fields.index;
      v5->fields.sortValue0 = 1000000000000LL;
LABEL_186:
      servantEntity = -index;
LABEL_194:
      v5->fields.sortValue2 = servantEntity;
      break;
    case 5:
      this = (FollowerSelectItemListViewItem_o *)v5->fields.followerInfo;
      v126 = 3LL;
LABEL_129:
      v5->fields.sortValue0B = v126;
      if ( !this )
        goto LABEL_198;
      v5->fields.sortValue2 = FollowerInfo__getUpdatedAt((FollowerInfo_o *)this, 0LL);
      break;
    default:
      break;
  }
LABEL_195:
  if ( v5->fields._isRecommendedUser_k__BackingField )
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
            sub_B5D69C(QuestRestriction, v8);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o **p_userName; // x8

  if ( (byte_42EBBC9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)method, v2, v3);
    byte_42EBBC9 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
    p_userName = &followerInfo->fields.userName;
  else
    p_userName = (System_String_o **)&StringLiteral_18624/*"error"*/;
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
  int v2; // w2
  __int64 v3; // x3
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *v6; // x20
  const MethodInfo *v7; // x1
  void *servantEntity; // x0
  const MethodInfo *v9; // x1
  int32_t DispLimitCount; // w20
  const MethodInfo *v11; // x1
  int32_t v12; // w21
  int32_t v13; // w1

  if ( (byte_42EBBCA & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBBCA = 1;
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
      v13 = -1;
      return ServantEntity__getName((ServantEntity_o *)servantEntity, v13, -1, 0LL);
    }
LABEL_22:
    sub_B5D69C(servantEntity, v7);
  }
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v7);
  if ( !servantEntity )
    goto LABEL_22;
  v6 = (System_String_o *)*((_QWORD *)servantEntity + 30);
  if ( !System_String__IsNullOrEmpty(v6, 0LL) )
    return v6;
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v9);
  if ( !servantEntity )
    goto LABEL_22;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)servantEntity, 0LL);
  servantEntity = FollowerSelectItemListViewItem__get_ServantLeader(this, v11);
  if ( !servantEntity )
    goto LABEL_22;
  v12 = *((_DWORD *)servantEntity + 16);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  servantEntity = (void *)ImageLimitCount__GetLimitCountByDispLimit(DispLimitCount, v12, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_22;
  v13 = (int)servantEntity;
  servantEntity = this->fields.servantEntity;
  return ServantEntity__getName((ServantEntity_o *)servantEntity, v13, -1, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct FollowerSelectItemListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42E56D4 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem___c_TypeInfo, v1, v2, v3);
    byte_42E56D4 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(FollowerSelectItemListViewItem___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = FollowerSelectItemListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FollowerSelectItemListViewItem___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return drop->fields.eventId;
}