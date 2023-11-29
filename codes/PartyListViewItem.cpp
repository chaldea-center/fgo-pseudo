void __fastcall PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationListViewItem_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FDD7C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationListViewItem___TypeInfo, v3);
    byte_40FDD7C = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct PartyOrganizationListViewItem_array *)sub_B17014(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v5->static_fields->DeckMemberMax,
                                                       v4);
  this->fields.memberList = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32443448(
        PartyListViewItem_o *this,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserDeckEntity_o *deck,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x27
  int32_t FollowerIndex; // w0
  __int64 v38; // x2
  BalanceConfig_c *v39; // x8
  int32_t DeckMainMemberMax; // w28
  struct PartyOrganizationListViewItem_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  clsQuestCheck_o *v48; // x0
  const MethodInfo *v49; // x1
  System_String_array **v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  clsQuestCheck_o *v53; // x0
  clsQuestCheck_o *v54; // x0
  clsQuestCheck_o *v55; // x0
  int32_t v56; // w21
  struct DeckServant_o *v57; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v60; // x8
  int32_t initPos; // w25
  int v62; // w9
  struct PartyOrganizationListViewItem_array *v63; // x19
  PartyOrganizationListViewItem_o *v64; // x0
  System_Int32_array **v65; // x24
  BalanceConfig_c *v66; // x0
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  Il2CppClass **v72; // x0
  UserServantEntity_o *v73; // x19
  struct PartyOrganizationListViewItem_array *v74; // x28
  UserServantEntity_array *v75; // x20
  PartyListViewItem_o *v76; // x27
  FollowerInfo_o *v77; // x22
  UserDeckEntity_o *v78; // x26
  System_Int64_array *EquipList; // x23
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  PartyOrganizationListViewItem_o *v84; // x24
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  Il2CppClass **v90; // x0
  PartyOrganizationListViewItem_o *v91; // x24
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  Il2CppClass **v97; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v99; // x0
  int32_t cost; // w19
  int32_t v103; // [xsp+34h] [xbp-7Ch]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+40h] [xbp-70h]
  int32_t v106; // [xsp+5Ch] [xbp-54h]

  if ( (byte_40FDD7D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_B16FFC(&PartyOrganizationListViewItem___TypeInfo, v18);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v21);
    byte_40FDD7D = 1;
  }
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !deck )
    goto LABEL_66;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v34);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_66;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0LL);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0LL);
  v39 = BalanceConfig_TypeInfo;
  if ( FollowerIndex <= 0 )
  {
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v39->static_fields->DeckMainMemberMax;
  }
  else
  {
    DeckMainMemberMax = FollowerIndex;
  }
  if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v39);
    v39 = BalanceConfig_TypeInfo;
  }
  v41 = (struct PartyOrganizationListViewItem_array *)sub_B17014(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v39->static_fields->DeckMemberMax,
                                                        v38);
  this->fields.memberList = v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v48 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v48 )
    goto LABEL_66;
  if ( v48->fields.cQuestReleaseListP )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v53 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( v53 )
    {
      follower = (FollowerInfo_o *)v53->fields.cQuestReleaseListP;
      v54 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( v54 )
      {
        followerClassId = (int32_t)v54[1].klass;
        v55 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( v55 )
        {
          followerDeckId = HIDWORD(v55[1].klass);
          goto LABEL_26;
        }
      }
    }
LABEL_66:
    sub_B170D4();
  }
LABEL_26:
  v56 = 0;
  v103 = DeckMainMemberMax;
  while ( 1 )
  {
    v66 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v66 = BalanceConfig_TypeInfo;
    }
    if ( v56 >= v66->static_fields->DeckMemberMax )
      break;
    v57 = deck->fields.deckInfo;
    if ( !v57 )
      goto LABEL_66;
    svts = v57->fields.svts;
    if ( !svts )
      goto LABEL_66;
    max_length = svts->max_length;
    if ( v56 >= max_length )
    {
      v62 = v56 + 1;
      initPos = v56 + 1;
    }
    else
    {
      if ( v56 >= (unsigned int)max_length )
        goto LABEL_67;
      v60 = svts->m_Items[v56];
      if ( !v60 )
        goto LABEL_66;
      initPos = v60->fields.initPos;
      v62 = v56 + 1;
    }
    v106 = v62;
    if ( v62 == DeckMainMemberMax )
    {
      v63 = *p_memberList;
      v64 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v49, v50, v51, v52);
      v65 = (System_Int32_array **)v64;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_32282080(
          v64,
          v56,
          follower,
          followerClassId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0LL);
        if ( !v63 )
          goto LABEL_66;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_32311272(v64, v56, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v63 )
          goto LABEL_66;
      }
      if ( v65 )
      {
        v66 = (BalanceConfig_c *)sub_B170BC(v65, v63->obj.klass->_1.element_class);
        if ( !v66 )
          goto LABEL_68;
      }
      if ( v56 >= v63->max_length )
        goto LABEL_67;
      v72 = &v63->obj.klass + v56;
      v72[4] = (Il2CppClass *)v65;
      sub_B16F98((BattleServantConfConponent_o *)(v72 + 4), v65, v50, v67, v68, v69, v70, v71);
    }
    else
    {
      if ( !UserServantList )
        goto LABEL_66;
      if ( v56 >= UserServantList->max_length )
        goto LABEL_67;
      v73 = UserServantList->m_Items[v56];
      v74 = *p_memberList;
      if ( v73 )
      {
        v75 = UserServantList;
        v76 = this;
        v77 = follower;
        v78 = deck;
        EquipList = UserDeckEntity__GetEquipList(deck, v56, 0LL);
        v84 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v80, v81, v82, v83);
        PartyOrganizationListViewItem___ctor_32304716(
          v84,
          v56,
          v73,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL);
        if ( !v74 )
          goto LABEL_66;
        if ( v84 )
        {
          v66 = (BalanceConfig_c *)sub_B170BC(v84, v74->obj.klass->_1.element_class);
          if ( !v66 )
            goto LABEL_68;
        }
        if ( v56 >= v74->max_length )
          goto LABEL_67;
        deck = v78;
        v90 = &v74->obj.klass + v56;
        v90[4] = (Il2CppClass *)v84;
        sub_B16F98((BattleServantConfConponent_o *)(v90 + 4), (System_Int32_array **)v84, v50, v85, v86, v87, v88, v89);
        follower = v77;
        this = v76;
        UserServantList = v75;
      }
      else
      {
        v91 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v49, v50, v51, v52);
        PartyOrganizationListViewItem___ctor_32311272(v91, v56, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v74 )
          goto LABEL_66;
        if ( v91 )
        {
          v66 = (BalanceConfig_c *)sub_B170BC(v91, v74->obj.klass->_1.element_class);
          if ( !v66 )
          {
LABEL_68:
            sub_B170F4(v66);
            sub_B170A0();
          }
        }
        if ( v56 >= v74->max_length )
          goto LABEL_67;
        v97 = &v74->obj.klass + v56;
        v97[4] = (Il2CppClass *)v91;
        sub_B16F98((BattleServantConfConponent_o *)(v97 + 4), (System_Int32_array **)v91, v50, v92, v93, v94, v95, v96);
      }
      DeckMainMemberMax = v103;
    }
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_66;
    if ( v56 >= memberList->max_length )
    {
LABEL_67:
      sub_B17100(v66, v49, v50);
      sub_B170A0();
    }
    v99 = memberList->m_Items[v56];
    if ( !v99 )
      goto LABEL_66;
    cost = this->fields.cost;
    v56 = v106;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v99, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v49);
}


void __fastcall PartyListViewItem___ctor_32446348(
        PartyListViewItem_o *this,
        bool *isBaseModify,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1
  struct System_String_o *DefaultDeckName; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x2
  UserEventDeckEntity_o *v47; // x20
  struct DeckServant_o *deckInfo; // x8
  DeckServant_o *v49; // x0
  const MethodInfo *v50; // x3
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v52; // x0
  clsQuestCheck_o *v53; // x0
  __int64 v54; // x2
  clsQuestCheck_o *v55; // x0
  PartyListViewItem_o *monitor; // x9
  int qrs; // w27
  clsQuestCheck_o *v58; // x0
  const MethodInfo *v59; // x2
  PartyOrganizationListViewItem_o *Member; // x0
  int32_t InitPos_k__BackingField; // w23
  PartyOrganizationUtility_o *v62; // x0
  BalanceConfig_c *v63; // x0
  struct PartyOrganizationListViewItem_array *v64; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  clsQuestCheck_o *v72; // x0
  clsQuestCheck_o *v73; // x0
  clsQuestCheck_o *v74; // x0
  clsQuestCheck_o *v75; // x0
  int32_t klass_high; // w8
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v78; // x1
  MethodInfo *v79; // x2
  unsigned int v80; // w24
  __int64 IsMyServantOrNpcRestriction_31258540; // x0
  PartyOrganizationListViewItem_o *v82; // x0
  int32_t *p_InitPos_k__BackingField; // x8
  struct DeckServant_o *v84; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v86; // x8
  int32_t initPos; // w25
  const MethodInfo *v88; // x6
  int v89; // w23
  struct DeckServant_o *v90; // x8
  struct DeckServantData_array *v91; // x8
  DeckServantData_o *v92; // x8
  _BOOL4 v93; // w19
  int64_t npcFollowerSvtId; // x4
  PartyOrganizationUtility_o *v95; // x0
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  FollowerInfo_o *v98; // x27
  int32_t v99; // w23
  bool IsNpc; // w0
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  struct PartyOrganizationListViewItem_array *v105; // x20
  int32_t v106; // w26
  PartyOrganizationListViewItem_o *v107; // x19
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  Il2CppClass **v113; // x0
  FollowerInfo_o *v114; // x23
  struct PartyOrganizationListViewItem_array *v115; // x26
  int32_t v116; // w27
  PartyOrganizationListViewItem_o *v117; // x19
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  Il2CppClass **v123; // x0
  BattleServantConfConponent_o *v124; // x0
  System_Int32_array **v125; // x1
  UserServantEntity_array *v126; // x20
  Il2CppClass **v127; // x23
  Il2CppClass *v128; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v129; // x23
  Il2CppClass *v130; // t1
  Il2CppClass *parent; // x19
  Il2CppClass *declaringType; // x27
  int32_t v133; // w19
  int32_t v134; // w27
  int32_t DispLimitCount; // w0
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  UserServantEntity_o *v139; // x23
  struct PartyOrganizationListViewItem_array *v140; // x20
  System_Int64_array *EquipList; // x27
  __int64 v142; // x1
  __int64 v143; // x2
  __int64 v144; // x3
  __int64 v145; // x4
  PartyOrganizationListViewItem_o *v146; // x0
  System_Int32_array **v147; // x23
  Il2CppClass **v148; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v150; // x0
  int32_t cost; // w19
  const MethodInfo *v152; // x1
  bool *v153; // [xsp+20h] [xbp-C0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+30h] [xbp-B0h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-A8h]
  int v157; // [xsp+40h] [xbp-A0h]
  int v158; // [xsp+44h] [xbp-9Ch]
  PartyListViewItem_o *v159; // [xsp+48h] [xbp-98h]
  int32_t v161; // [xsp+64h] [xbp-7Ch]
  bool v163; // [xsp+74h] [xbp-6Ch]
  int32_t followerClassIda; // [xsp+84h] [xbp-5Ch] BYREF
  FollowerInfo_o *followera; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  if ( (byte_40FDD7E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, isBaseModify);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcFollowerMaster___, v18);
    sub_B16FFC(&DataManager_TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&PartyOrganizationListViewItem___TypeInfo, v21);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v24);
    byte_40FDD7E = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v38);
  this->fields.deckName = DefaultDeckName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.deckName,
    (System_Int32_array **)DefaultDeckName,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v47 = deck;
  if ( !deck )
    goto LABEL_139;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_139;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v46) )
  {
    v49 = deck->fields.deckInfo;
    if ( !v49 )
      goto LABEL_139;
    DeckServant__ResetInitPos(v49, 0LL);
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v50);
  if ( FollowerIndex <= 0 )
  {
    v52 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v52 = BalanceConfig_TypeInfo;
    }
    v47 = deck;
    FollowerIndex = v52->static_fields->DeckMainMemberMax;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v53 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v53 )
    goto LABEL_139;
  if ( SLODWORD(v53[1].fields.qrs) < 1 )
  {
    v163 = 0;
    v159 = 0LL;
    qrs = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v55 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v55 )
      goto LABEL_139;
    monitor = (PartyListViewItem_o *)v55[2].monitor;
    qrs = 0;
    v163 = monitor != 0LL;
    v159 = monitor;
    if ( follower && monitor )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v58 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v58 )
        goto LABEL_139;
      if ( !v159 )
        goto LABEL_139;
      qrs = (int)v58[1].fields.qrs;
      Member = PartyListViewItem__GetMember(v159, qrs - 1, v59);
      if ( !Member )
        goto LABEL_139;
      InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
      v62 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v62 )
        goto LABEL_139;
      PartyOrganizationUtility__SetNpcFollowerInfo(v62, InitPos_k__BackingField, follower, 0LL);
      v163 = 1;
    }
  }
  v153 = isBaseModify;
  v63 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v63 = BalanceConfig_TypeInfo;
  }
  v64 = (struct PartyOrganizationListViewItem_array *)sub_B17014(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v63->static_fields->DeckMemberMax,
                                                        v54);
  this->fields.memberList = v64;
  p_memberList = &this->fields.memberList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v64,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v72 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v72 )
    goto LABEL_139;
  if ( !v72->fields.cQuestReleaseListP )
  {
    klass_high = followerDeckId;
    goto LABEL_49;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v73 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v73
    || (follower = (FollowerInfo_o *)v73->fields.cQuestReleaseListP,
        (v74 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || (followerClassId = (int32_t)v74[1].klass,
        (v75 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_139:
    sub_B170D4();
  }
  klass_high = HIDWORD(v75[1].klass);
LABEL_49:
  v161 = klass_high;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
    goto LABEL_139;
  v158 = qrs - 1;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          Master_WarQuestSelectionMaster,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v80 = 0;
  v157 = FollowerIndex - 1;
  while ( 1 )
  {
    IsMyServantOrNpcRestriction_31258540 = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsMyServantOrNpcRestriction_31258540 = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v80 >= *(_DWORD *)(*(_QWORD *)(IsMyServantOrNpcRestriction_31258540 + 184) + 156LL) )
      break;
    if ( v163 )
    {
      if ( !v159 )
        goto LABEL_139;
      v82 = PartyListViewItem__GetMember(v159, v80, v79);
      if ( !v82 )
        goto LABEL_139;
      p_InitPos_k__BackingField = &v82->fields._InitPos_k__BackingField;
    }
    else
    {
      v84 = v47->fields.deckInfo;
      if ( !v84 )
        goto LABEL_139;
      svts = v84->fields.svts;
      if ( !svts )
        goto LABEL_139;
      if ( v80 >= svts->max_length )
        goto LABEL_143;
      v86 = svts->m_Items[v80];
      if ( !v86 )
        goto LABEL_139;
      p_InitPos_k__BackingField = &v86->fields.initPos;
    }
    initPos = *p_InitPos_k__BackingField;
    followera = 0LL;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_139;
    IsMyServantOrNpcRestriction_31258540 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(
                                             questRestrictionInfo,
                                             initPos,
                                             0LL);
    v89 = IsMyServantOrNpcRestriction_31258540;
    if ( (IsMyServantOrNpcRestriction_31258540 & 1) != 0 )
    {
      v90 = v47->fields.deckInfo;
      if ( !v90 )
        goto LABEL_139;
      v91 = v90->fields.svts;
      if ( !v91 )
        goto LABEL_139;
      if ( v80 >= v91->max_length )
        goto LABEL_143;
      v92 = v91->m_Items[v80];
      if ( !v92 )
        goto LABEL_139;
      v93 = 0;
      if ( v158 != v80 )
      {
        npcFollowerSvtId = v92->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v93 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v88);
      }
    }
    else
    {
      v93 = 0;
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v95 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v95 )
      goto LABEL_139;
    IsMyServantOrNpcRestriction_31258540 = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(v95, initPos, 0LL);
    if ( IsMyServantOrNpcRestriction_31258540 && ((v89 ^ 1) & 1) == 0 )
    {
      v98 = (FollowerInfo_o *)IsMyServantOrNpcRestriction_31258540;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsMyServantOrNpcRestriction_31258540, 0LL) )
        v99 = 0;
      else
        v99 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v98, 0LL);
      v105 = *p_memberList;
      if ( IsNpc )
        v106 = 0;
      else
        v106 = v161;
      v107 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                  PartyOrganizationListViewItem_TypeInfo,
                                                  v101,
                                                  v102,
                                                  v103,
                                                  v104);
      PartyOrganizationListViewItem___ctor_32282080(
        v107,
        v80,
        v98,
        v99,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v106,
        initPos,
        0LL);
      if ( !v105 )
        goto LABEL_139;
      if ( v107 )
      {
        IsMyServantOrNpcRestriction_31258540 = sub_B170BC(v107, v105->obj.klass->_1.element_class);
        if ( !IsMyServantOrNpcRestriction_31258540 )
          goto LABEL_144;
      }
      if ( v80 >= v105->max_length )
        goto LABEL_143;
      v113 = &v105->obj.klass + (int)v80;
LABEL_124:
      v113[4] = (Il2CppClass *)v107;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v113 + 4),
        (System_Int32_array **)v107,
        (System_String_array **)v79,
        v108,
        v109,
        v110,
        v111,
        v112);
      v47 = deck;
      goto LABEL_132;
    }
    if ( v157 != v80 && !v93 )
    {
      if ( (v89 & 1) != 0 )
      {
        v126 = UserServantList;
        if ( !UserServantList )
          goto LABEL_139;
        if ( v80 >= UserServantList->max_length )
          goto LABEL_143;
        v127 = &UserServantList->obj.klass + (int)v80;
        v130 = v127[4];
        v129 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v127 + 4);
        v128 = v130;
        if ( v130 )
        {
          declaringType = v128->_1.declaringType;
          parent = v128->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v166.fields.currentCryptoKey = declaringType;
          *(_QWORD *)&v166.fields.fakeValue = parent;
          IsMyServantOrNpcRestriction_31258540 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                   v166,
                                                   0LL);
          if ( v80 >= UserServantList->max_length )
            goto LABEL_143;
          if ( !*v129 )
            goto LABEL_139;
          v133 = IsMyServantOrNpcRestriction_31258540;
          IsMyServantOrNpcRestriction_31258540 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                   (*v129)[6],
                                                   0LL);
          if ( v80 >= UserServantList->max_length )
            goto LABEL_143;
          v134 = IsMyServantOrNpcRestriction_31258540;
          if ( !*v129 )
            goto LABEL_139;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*v129, 0, 0LL);
          IsMyServantOrNpcRestriction_31258540 = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                   questRestrictionInfo,
                                                   v133,
                                                   v134,
                                                   DispLimitCount,
                                                   initPos,
                                                   0,
                                                   0LL);
          if ( (IsMyServantOrNpcRestriction_31258540 & 1) != 0 )
          {
            if ( v80 >= UserServantList->max_length )
              goto LABEL_143;
            *v129 = 0LL;
            sub_B16F98(
              (BattleServantConfConponent_o *)v129,
              0LL,
              (System_String_array **)v79,
              v96,
              v97,
              v136,
              v137,
              v138);
          }
        }
      }
      else
      {
        v126 = UserServantList;
        if ( !UserServantList )
          goto LABEL_139;
      }
      if ( v80 >= v126->max_length )
        goto LABEL_143;
      v139 = v126->m_Items[v80];
      v140 = *p_memberList;
      if ( v139 )
      {
        EquipList = UserEventDeckEntity__GetEquipList(deck, v80, 0LL);
        v107 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                    PartyOrganizationListViewItem_TypeInfo,
                                                    v142,
                                                    v143,
                                                    v144,
                                                    v145);
        PartyOrganizationListViewItem___ctor_32304716(
          v107,
          v80,
          v139,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL);
        if ( !v140 )
          goto LABEL_139;
      }
      else
      {
        v107 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v78, v79, v96, v97);
        PartyOrganizationListViewItem___ctor_32311272(v107, v80, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v140 )
          goto LABEL_139;
      }
      if ( v107 )
      {
        IsMyServantOrNpcRestriction_31258540 = sub_B170BC(v107, v140->obj.klass->_1.element_class);
        if ( !IsMyServantOrNpcRestriction_31258540 )
        {
LABEL_144:
          sub_B170F4(IsMyServantOrNpcRestriction_31258540);
          sub_B170A0();
        }
      }
      if ( v80 >= v140->max_length )
        goto LABEL_143;
      v113 = &v140->obj.klass + (int)v80;
      goto LABEL_124;
    }
    v114 = followera;
    v115 = *p_memberList;
    if ( followera )
    {
      v116 = followerClassIda;
      v117 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v78, v79, v96, v97);
      PartyOrganizationListViewItem___ctor_32282080(
        v117,
        v80,
        v114,
        v116,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v161,
        initPos,
        0LL);
      if ( !v115 )
        goto LABEL_139;
      if ( v117 )
      {
        IsMyServantOrNpcRestriction_31258540 = sub_B170BC(v117, v115->obj.klass->_1.element_class);
        if ( !IsMyServantOrNpcRestriction_31258540 )
          goto LABEL_144;
      }
      if ( v80 >= v115->max_length )
        goto LABEL_143;
      v123 = &v115->obj.klass + (int)v80;
      v123[4] = (Il2CppClass *)v117;
      v124 = (BattleServantConfConponent_o *)(v123 + 4);
      v125 = (System_Int32_array **)v117;
    }
    else
    {
      v146 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v78, v79, v96, v97);
      v147 = (System_Int32_array **)v146;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_32282080(
          v146,
          v80,
          follower,
          followerClassId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v161,
          initPos,
          0LL);
        if ( !v115 )
          goto LABEL_139;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_32311272(v146, v80, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v115 )
          goto LABEL_139;
      }
      if ( v147 )
      {
        IsMyServantOrNpcRestriction_31258540 = sub_B170BC(v147, v115->obj.klass->_1.element_class);
        if ( !IsMyServantOrNpcRestriction_31258540 )
          goto LABEL_144;
      }
      if ( v80 >= v115->max_length )
        goto LABEL_143;
      v148 = &v115->obj.klass + (int)v80;
      v148[4] = (Il2CppClass *)v147;
      v124 = (BattleServantConfConponent_o *)(v148 + 4);
      v125 = v147;
    }
    sub_B16F98(v124, v125, (System_String_array **)v79, v118, v119, v120, v121, v122);
LABEL_132:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_139;
    if ( v80 >= memberList->max_length )
    {
LABEL_143:
      sub_B17100(IsMyServantOrNpcRestriction_31258540, v78, v79);
      sub_B170A0();
    }
    v150 = memberList->m_Items[v80];
    if ( !v150 )
      goto LABEL_139;
    cost = this->fields.cost;
    ++v80;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v150, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v78);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v152) )
    *v153 = 1;
}


void __fastcall PartyListViewItem___ctor_32451496(
        PartyListViewItem_o *this,
        bool *isBaseModify,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isFirstEnforceChange,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v14; // x22
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x1
  struct System_String_o *DefaultDeckName; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  const MethodInfo *v49; // x2
  struct DeckServant_o *deckInfo; // x8
  DeckServant_o *v51; // x0
  SingletonTemplate_PartyOrganizationUtility__c **v52; // x26
  clsQuestCheck_o *v53; // x0
  clsQuestCheck_o *v54; // x0
  PartyListViewItem_o *monitor; // x27
  unsigned int qrs; // w23
  clsQuestCheck_o *v57; // x0
  const MethodInfo *v58; // x2
  PartyOrganizationListViewItem_o *Member; // x0
  int32_t InitPos_k__BackingField; // w19
  PartyOrganizationUtility_o *v61; // x0
  clsQuestCheck_o *v62; // x0
  __int64 v63; // x2
  clsQuestCheck_o *v64; // x0
  clsQuestCheck_o *v65; // x0
  clsQuestCheck_o *v66; // x0
  int32_t klass_high; // w8
  BalanceConfig_c *v68; // x0
  struct PartyOrganizationListViewItem_array *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  int32_t v76; // w8
  System_Int32_array *FixedMyServantSingleSvtIdList; // x0
  NpcFollowerMaster_o *v78; // x0
  QuestRestrictionInfo_o *v79; // x8
  unsigned int *v80; // x24
  FollowerInfo_array *QuestFollowerList; // x0
  const MethodInfo *v82; // x1
  MethodInfo *v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  __int64 v86; // x8
  unsigned __int64 v87; // x25
  __int64 v88; // x23
  int32_t *v89; // x8
  struct DeckServant_o *v90; // x8
  struct DeckServantData_array *svts; // x8
  __int64 v92; // x8
  int32_t v93; // w19
  unsigned __int64 max_length; // x8
  __int64 v95; // x9
  __int64 v96; // x20
  __int64 v97; // x23
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x20
  const MethodInfo *v104; // x6
  int v105; // w27
  struct DeckServant_o *v106; // x8
  struct DeckServantData_array *v107; // x8
  __int64 v108; // x8
  _BOOL4 v109; // w20
  int64_t v110; // x4
  SingletonTemplate_PartyOrganizationUtility__c *v111; // x0
  PartyOrganizationUtility_o *v112; // x0
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  FollowerInfo_o *v115; // x23
  SingletonTemplate_PartyOrganizationUtility__c **v116; // x24
  PartyListViewItem_o *v117; // x26
  UserEventDeckEntity_o *v118; // x21
  int32_t v119; // w27
  bool IsNpc; // w0
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  unsigned int *v125; // x19
  int32_t v126; // w28
  PartyOrganizationListViewItem_o *v127; // x20
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  __int64 v133; // x19
  FollowerInfo_o *v134; // x23
  unsigned int *v135; // x19
  int32_t v136; // w27
  PartyOrganizationListViewItem_o *v137; // x20
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  unsigned __int64 v143; // x27
  QuestRestrictionInfo_o *v144; // x25
  unsigned int *v145; // x19
  PartyOrganizationListViewItem_o *v146; // x0
  int32_t v147; // w1
  QuestRestrictionInfo_o *v148; // x4
  System_Int32_array **v149; // x20
  unsigned __int64 v150; // x22
  QuestRestrictionInfo_o *v151; // x27
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  __int64 v157; // x8
  __int64 v158; // x20
  __int64 v159; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v160; // x8
  int32_t v161; // w20
  int32_t v162; // w23
  UserServantEntity_o *v163; // x0
  int32_t DispLimitCount; // w0
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  UserServantEntity_o *v168; // x23
  System_Int64_array *EquipList; // x27
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x3
  __int64 v173; // x4
  PartyOrganizationListViewItem_o *v174; // x0
  System_Int32_array **v175; // x27
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v182; // x0
  int32_t cost; // w19
  const MethodInfo *v184; // x1
  __int64 SvtIdBattle; // x0
  UserServantMaster_o *Master_WarQuestSelectionMaster; // [xsp+20h] [xbp-100h]
  int32_t *v188; // [xsp+30h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+48h] [xbp-D8h]
  UserServantEntity_array *UserServantList; // [xsp+50h] [xbp-D0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+60h] [xbp-C0h]
  UserServantEntity_o **m_Items; // [xsp+70h] [xbp-B0h]
  System_Int32_array *v195; // [xsp+78h] [xbp-A8h]
  int32_t v196; // [xsp+84h] [xbp-9Ch]
  __int64 v197; // [xsp+88h] [xbp-98h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+90h] [xbp-90h]
  PartyListViewItem_o *v199; // [xsp+98h] [xbp-88h]
  int32_t initPos; // [xsp+ACh] [xbp-74h]
  __int64 v201; // [xsp+B0h] [xbp-70h]
  int32_t followerClassIda; // [xsp+BCh] [xbp-64h] BYREF
  FollowerInfo_o *followera; // [xsp+C0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v204; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // 0:x0.16

  v14 = questRestrictionInfo;
  if ( (byte_40FDD7F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, isBaseModify);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcFollowerMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v21);
    sub_B16FFC(&DataManager_TypeInfo, v22);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B16FFC(&PartyOrganizationListViewItem___TypeInfo, v24);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v25);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v26);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v27);
    byte_40FDD7F = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v41);
  this->fields.deckName = DefaultDeckName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.deckName,
    (System_Int32_array **)DefaultDeckName,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( !deck )
    goto LABEL_170;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_170;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v49) )
  {
    v51 = deck->fields.deckInfo;
    if ( !v51 )
      goto LABEL_170;
    DeckServant__ResetInitPos(v51, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  v52 = &SingletonTemplate_PartyOrganizationUtility__TypeInfo;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v53 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v53 )
    goto LABEL_170;
  if ( SLODWORD(v53[1].fields.qrs) < 1 )
  {
    monitor = 0LL;
    if ( !questRestrictionInfo )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v54 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v54 )
    goto LABEL_170;
  monitor = (PartyListViewItem_o *)v54[2].monitor;
  if ( questRestrictionInfo )
LABEL_21:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_22:
  qrs = 0;
  if ( follower && monitor )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v57 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v57 )
      goto LABEL_170;
    qrs = (unsigned int)v57[1].fields.qrs;
    Member = PartyListViewItem__GetMember(monitor, qrs - 1, v58);
    if ( !Member )
      goto LABEL_170;
    InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
    v61 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v61 )
      goto LABEL_170;
    PartyOrganizationUtility__SetNpcFollowerInfo(v61, InitPos_k__BackingField, follower, 0LL);
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v62 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v62 )
    goto LABEL_170;
  if ( v62->fields.cQuestReleaseListP )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v64 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v64 )
      goto LABEL_170;
    follower = (FollowerInfo_o *)v64->fields.cQuestReleaseListP;
    v65 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v65 )
      goto LABEL_170;
    followerClassId = (int32_t)v65[1].klass;
    v66 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v66 )
      goto LABEL_170;
    klass_high = HIDWORD(v66[1].klass);
  }
  else
  {
    klass_high = followerDeckId;
  }
  v196 = klass_high;
  v68 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v68 = BalanceConfig_TypeInfo;
  }
  v69 = (struct PartyOrganizationListViewItem_array *)sub_B17014(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v68->static_fields->DeckMemberMax,
                                                        v63);
  this->fields.memberList = v69;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v76 == 3 )
  {
    if ( !*p_questRestrictionInfo )
      goto LABEL_170;
    FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(*p_questRestrictionInfo, 0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_170;
    v195 = FixedMyServantSingleSvtIdList;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0LL;
    v195 = 0LL;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v78 = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v79 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo || (v80 = (unsigned int *)UserServantList, !v78) )
LABEL_170:
    sub_B170D4();
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(v78, v79->fields.questId, v79->fields.questPhase, 0LL);
  v86 = 8LL * qrs;
  v87 = 0LL;
  v88 = 0LL;
  v188 = &svtIdForceBattleList->m_Items[1];
  npcFollowerInfoList = QuestFollowerList;
  m_Items = UserServantList->m_Items;
  v197 = v86 - 8;
  v199 = monitor;
  while ( 1 )
  {
    SvtIdBattle = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtIdBattle = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v87 >= *(int *)(*(_QWORD *)(SvtIdBattle + 184) + 156LL) )
      break;
    if ( monitor )
    {
      SvtIdBattle = (__int64)PartyListViewItem__GetMember(monitor, v87, v83);
      if ( !SvtIdBattle )
        goto LABEL_170;
      v89 = (int32_t *)(SvtIdBattle + 332);
    }
    else
    {
      v90 = deck->fields.deckInfo;
      if ( !v90 )
        goto LABEL_170;
      svts = v90->fields.svts;
      if ( !svts )
        goto LABEL_170;
      if ( v87 >= svts->max_length )
        goto LABEL_171;
      v92 = *(__int64 *)((char *)svts->m_Items + v88);
      if ( !v92 )
        goto LABEL_170;
      v89 = (int32_t *)(v92 + 60);
    }
    v93 = *v89;
    v201 = v88;
    initPos = *v89;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v195 )
        goto LABEL_170;
      if ( (__int64)v87 >= (int)v195->max_length )
      {
        v143 = v87;
        v144 = v14;
        v145 = (unsigned int *)*p_memberList;
        v146 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v82, v83, v84, v85);
        v147 = v143;
        v148 = v14;
        v149 = (System_Int32_array **)v146;
        v150 = v143;
        v151 = v144;
        PartyOrganizationListViewItem___ctor_32311272(v146, v147, 0, setupInfo, v148, 1, initPos, 0LL);
        if ( !v145 )
          goto LABEL_170;
        if ( v149 )
        {
          SvtIdBattle = sub_B170BC(v149, *(_QWORD *)(*(_QWORD *)v145 + 64LL));
          if ( !SvtIdBattle )
          {
LABEL_172:
            sub_B170F4(SvtIdBattle);
            sub_B170A0();
          }
        }
        if ( v150 >= v145[6] )
          goto LABEL_171;
        *(_QWORD *)((char *)v145 + v88 + 32) = v149;
        v87 = v150;
        v14 = v151;
        sub_B16F98(
          (BattleServantConfConponent_o *)((char *)v145 + v88 + 32),
          v149,
          (System_String_array **)v83,
          v152,
          v153,
          v154,
          v155,
          v156);
        monitor = v199;
        goto LABEL_160;
      }
      if ( svtIdForceBattleList )
      {
        if ( v197 != v88 && isFirstEnforceChange )
        {
          max_length = svtIdForceBattleList->max_length;
          if ( (__int64)v87 < (int)max_length )
          {
            if ( v87 >= max_length )
              goto LABEL_171;
            v82 = (const MethodInfo *)(unsigned int)v188[v87];
            if ( (int)v82 >= 1 )
            {
              if ( !v80 )
                goto LABEL_170;
              if ( v87 >= v80[6] )
                goto LABEL_171;
              v95 = *(__int64 *)((char *)m_Items + v88);
              if ( !v95 )
                goto LABEL_88;
              v97 = *(_QWORD *)(v95 + 80);
              v96 = *(_QWORD *)(v95 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v204.fields.currentCryptoKey = v97;
              *(_QWORD *)&v204.fields.fakeValue = v96;
              SvtIdBattle = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v204, 0LL);
              max_length = svtIdForceBattleList->max_length;
              if ( v87 >= max_length )
                goto LABEL_171;
              v88 = v201;
              v82 = (const MethodInfo *)(unsigned int)v188[v87];
              if ( (_DWORD)SvtIdBattle != (_DWORD)v82 )
              {
LABEL_88:
                if ( v87 >= max_length )
                  goto LABEL_171;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_170;
                SvtIdBattle = (__int64)UserServantMaster__getSvtIdBattle(
                                         Master_WarQuestSelectionMaster,
                                         (int32_t)v82,
                                         0LL);
                v103 = (System_Int32_array **)SvtIdBattle;
                if ( SvtIdBattle )
                {
                  SvtIdBattle = sub_B170BC(SvtIdBattle, *(_QWORD *)(*(_QWORD *)v80 + 64LL));
                  if ( !SvtIdBattle )
                    goto LABEL_172;
                }
                if ( v87 >= v80[6] )
                  goto LABEL_171;
                *(UserServantEntity_o **)((char *)m_Items + v88) = (UserServantEntity_o *)v103;
                sub_B16F98(
                  (BattleServantConfConponent_o *)((char *)m_Items + v88),
                  v103,
                  (System_String_array **)v83,
                  v98,
                  v99,
                  v100,
                  v101,
                  v102);
                *isBaseModify = 1;
              }
            }
          }
        }
      }
    }
    followera = 0LL;
    followerClassIda = 0;
    if ( !v14 )
      goto LABEL_170;
    SvtIdBattle = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(v14, v93, 0LL);
    v105 = SvtIdBattle;
    if ( (SvtIdBattle & 1) != 0 )
    {
      v106 = deck->fields.deckInfo;
      if ( !v106 )
        goto LABEL_170;
      v107 = v106->fields.svts;
      if ( !v107 )
        goto LABEL_170;
      if ( v87 >= v107->max_length )
        goto LABEL_171;
      v108 = *(__int64 *)((char *)v107->m_Items + v88);
      if ( !v108 )
        goto LABEL_170;
      v109 = 0;
      if ( v197 != v88 )
      {
        v110 = *(_QWORD *)(v108 + 48);
        if ( v110 >= 1 )
          v109 = PartyListViewItem__SetNpcFollowerInfo(
                   this,
                   &followera,
                   &followerClassIda,
                   npcFollowerInfoList,
                   v110,
                   v93,
                   v104);
      }
    }
    else
    {
      v109 = 0;
    }
    v111 = *v52;
    if ( (BYTE3((*v52)->vtable._0_Equals.methodPtr) & 4) != 0 && !v111->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v111);
    v112 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v112 )
      goto LABEL_170;
    SvtIdBattle = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(v112, v93, 0LL);
    if ( SvtIdBattle && ((v105 ^ 1) & 1) == 0 )
    {
      v115 = (FollowerInfo_o *)SvtIdBattle;
      v116 = v52;
      v117 = this;
      v118 = deck;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)SvtIdBattle, 0LL) )
        v119 = 0;
      else
        v119 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v115, 0LL);
      v125 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v126 = 0;
      else
        v126 = v196;
      v127 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                  PartyOrganizationListViewItem_TypeInfo,
                                                  v121,
                                                  v122,
                                                  v123,
                                                  v124);
      PartyOrganizationListViewItem___ctor_32282080(
        v127,
        v87,
        v115,
        v119,
        setupInfo,
        v14,
        friendPointCampaignEntityList,
        0,
        v126,
        initPos,
        0LL);
      if ( !v125 )
        goto LABEL_170;
      monitor = v199;
      if ( v127 )
      {
        SvtIdBattle = sub_B170BC(v127, *(_QWORD *)(*(_QWORD *)v125 + 64LL));
        if ( !SvtIdBattle )
          goto LABEL_172;
      }
      if ( v87 >= v125[6] )
        goto LABEL_171;
      deck = v118;
      *(_QWORD *)((char *)v125 + v201 + 32) = v127;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)v125 + v201 + 32),
        (System_Int32_array **)v127,
        (System_String_array **)v83,
        v128,
        v129,
        v130,
        v131,
        v132);
      v88 = v201;
      this = v117;
      v52 = v116;
      v80 = (unsigned int *)UserServantList;
      goto LABEL_156;
    }
    v133 = v201;
    if ( v197 != v201 && !v109 )
    {
      if ( (v105 & 1) != 0 )
      {
        if ( !v80 )
          goto LABEL_170;
        if ( v87 >= v80[6] )
          goto LABEL_171;
        v157 = *(__int64 *)((char *)m_Items + v201);
        if ( v157 )
        {
          v159 = *(_QWORD *)(v157 + 80);
          v158 = *(_QWORD *)(v157 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v205.fields.currentCryptoKey = v159;
          *(_QWORD *)&v205.fields.fakeValue = v158;
          SvtIdBattle = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v205, 0LL);
          if ( v87 >= v80[6] )
            goto LABEL_171;
          v160 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)m_Items + v201);
          if ( !v160 )
            goto LABEL_170;
          v161 = SvtIdBattle;
          SvtIdBattle = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v160[6], 0LL);
          if ( v87 >= v80[6] )
            goto LABEL_171;
          v162 = SvtIdBattle;
          v163 = *(UserServantEntity_o **)((char *)m_Items + v201);
          if ( !v163 )
            goto LABEL_170;
          DispLimitCount = UserServantEntity__getDispLimitCount(v163, 0, 0LL);
          SvtIdBattle = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                          v14,
                          v161,
                          v162,
                          DispLimitCount,
                          initPos,
                          0,
                          0LL);
          v133 = v201;
          if ( (SvtIdBattle & 1) != 0 )
          {
            if ( v87 >= v80[6] )
              goto LABEL_171;
            *(UserServantEntity_o **)((char *)m_Items + v201) = 0LL;
            sub_B16F98(
              (BattleServantConfConponent_o *)((char *)m_Items + v201),
              0LL,
              (System_String_array **)v83,
              v113,
              v114,
              v165,
              v166,
              v167);
          }
        }
      }
      else if ( !v80 )
      {
        goto LABEL_170;
      }
      if ( v87 >= v80[6] )
        goto LABEL_171;
      v168 = *(UserServantEntity_o **)((char *)m_Items + v133);
      v135 = (unsigned int *)*p_memberList;
      if ( !v168 )
      {
        v137 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                    PartyOrganizationListViewItem_TypeInfo,
                                                    v82,
                                                    v83,
                                                    v113,
                                                    v114);
        PartyOrganizationListViewItem___ctor_32311272(v137, v87, 0, setupInfo, v14, 1, initPos, 0LL);
        monitor = v199;
        if ( !v135 )
          goto LABEL_170;
        goto LABEL_152;
      }
      EquipList = UserEventDeckEntity__GetEquipList(deck, v87, 0LL);
      v137 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                  PartyOrganizationListViewItem_TypeInfo,
                                                  v170,
                                                  v171,
                                                  v172,
                                                  v173);
      PartyOrganizationListViewItem___ctor_32304716(v137, v87, v168, EquipList, setupInfo, v14, 0LL, initPos, 0LL);
      if ( !v135 )
        goto LABEL_170;
    }
    else
    {
      v134 = followera;
      v135 = (unsigned int *)*p_memberList;
      if ( !followera )
      {
        v174 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                    PartyOrganizationListViewItem_TypeInfo,
                                                    v82,
                                                    v83,
                                                    v113,
                                                    v114);
        v175 = (System_Int32_array **)v174;
        if ( follower )
          PartyOrganizationListViewItem___ctor_32282080(
            v174,
            v87,
            follower,
            followerClassId,
            setupInfo,
            v14,
            friendPointCampaignEntityList,
            0,
            v196,
            initPos,
            0LL);
        else
          PartyOrganizationListViewItem___ctor_32311272(v174, v87, 1, setupInfo, v14, 1, initPos, 0LL);
        v88 = v201;
        if ( !v135 )
          goto LABEL_170;
        if ( v175 )
        {
          SvtIdBattle = sub_B170BC(v175, *(_QWORD *)(*(_QWORD *)v135 + 64LL));
          if ( !SvtIdBattle )
            goto LABEL_172;
        }
        if ( v87 >= v135[6] )
          goto LABEL_171;
        *(_QWORD *)((char *)v135 + v201 + 32) = v175;
        sub_B16F98(
          (BattleServantConfConponent_o *)((char *)v135 + v201 + 32),
          v175,
          (System_String_array **)v83,
          v176,
          v177,
          v178,
          v179,
          v180);
        monitor = v199;
        goto LABEL_156;
      }
      v136 = followerClassIda;
      v137 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v82, v83, v113, v114);
      PartyOrganizationListViewItem___ctor_32282080(v137, v87, v134, v136, setupInfo, v14, 0LL, 0, v196, initPos, 0LL);
      if ( !v135 )
        goto LABEL_170;
    }
    monitor = v199;
LABEL_152:
    v88 = v201;
    if ( v137 )
    {
      SvtIdBattle = sub_B170BC(v137, *(_QWORD *)(*(_QWORD *)v135 + 64LL));
      if ( !SvtIdBattle )
        goto LABEL_172;
    }
    if ( v87 >= v135[6] )
      goto LABEL_171;
    *(_QWORD *)((char *)v135 + v201 + 32) = v137;
    sub_B16F98(
      (BattleServantConfConponent_o *)((char *)v135 + v201 + 32),
      (System_Int32_array **)v137,
      (System_String_array **)v83,
      v138,
      v139,
      v140,
      v141,
      v142);
LABEL_156:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_170;
    if ( v87 >= memberList->max_length )
    {
LABEL_171:
      sub_B17100(SvtIdBattle, v82, v83);
      sub_B170A0();
    }
    v182 = *(PartyOrganizationListViewItem_o **)((char *)memberList->m_Items + v88);
    if ( !v182 )
      goto LABEL_170;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v182, 0LL) + cost;
LABEL_160:
    ++v87;
    v88 += 8LL;
  }
  PartyListViewItem__CheckRestriction(this, v82);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v184) )
    *isBaseModify = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32454628(
        PartyListViewItem_o *this,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        int64_t userEquipId,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x2
  BalanceConfig_c *v45; // x0
  struct PartyOrganizationListViewItem_array *v46; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  clsQuestCheck_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  clsQuestCheck_o *v59; // x0
  clsQuestCheck_o *v60; // x0
  int32_t klass; // w23
  clsQuestCheck_o *v62; // x0
  struct PartyOrganizationListViewItem_array *v63; // x26
  PartyOrganizationListViewItem_o *v64; // x0
  System_Int32_array **v65; // x27
  __int64 v66; // x0
  __int64 v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v75; // x0
  int32_t cost; // w23
  const MethodInfo *v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  int32_t i; // w23
  struct PartyOrganizationListViewItem_array *v82; // x26
  PartyOrganizationListViewItem_o *v83; // x24
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  Il2CppClass **v89; // x0
  struct PartyOrganizationListViewItem_array *v90; // x8
  PartyOrganizationListViewItem_o *v91; // x0
  int32_t v92; // w24
  BalanceConfig_c *v93; // x0

  if ( (byte_40FDD80 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_B16FFC(&PartyOrganizationListViewItem___TypeInfo, v20);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v22);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v23);
    sub_B16FFC(&StringLiteral_1, v24);
    byte_40FDD80 = 1;
  }
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.isDeckNameDefault = 0;
  v37 = (System_Int32_array **)StringLiteral_1;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.deckName, v37, v38, v39, v40, v41, v42, v43);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v45 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v45 = BalanceConfig_TypeInfo;
  }
  v46 = (struct PartyOrganizationListViewItem_array *)sub_B17014(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v45->static_fields->DeckMemberMax,
                                                        v44);
  this->fields.memberList = v46;
  p_memberList = &this->fields.memberList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v54 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v54 )
    goto LABEL_41;
  if ( v54->fields.cQuestReleaseListP )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v59 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v59 )
      goto LABEL_41;
    follower = (FollowerInfo_o *)v59->fields.cQuestReleaseListP;
    v60 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v60 )
      goto LABEL_41;
    klass = (int32_t)v60[1].klass;
    v62 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v62 )
      goto LABEL_41;
    followerClassId = klass;
    followerDeckId = HIDWORD(v62[1].klass);
  }
  v63 = *p_memberList;
  v64 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v55, v56, v57, v58);
  v65 = (System_Int32_array **)v64;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_32282080(
      v64,
      0,
      follower,
      followerClassId,
      setupInfo,
      questRestrictionInfo,
      friendPointCampaignEntityList,
      0,
      followerDeckId,
      0,
      0LL);
    if ( !v63 )
      goto LABEL_41;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_32311272(v64, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v63 )
      goto LABEL_41;
  }
  if ( v65 )
  {
    v66 = sub_B170BC(v65, v63->obj.klass->_1.element_class);
    if ( !v66 )
    {
LABEL_43:
      sub_B170F4(v66);
      sub_B170A0();
    }
  }
  if ( !v63->max_length )
    goto LABEL_42;
  v63->m_Items[0] = (PartyOrganizationListViewItem_o *)v65;
  sub_B16F98((BattleServantConfConponent_o *)v63->m_Items, v65, v68, v69, v70, v71, v72, v73);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_41;
  if ( !memberList->max_length )
  {
LABEL_42:
    sub_B17100(v66, v67, v68);
    sub_B170A0();
  }
  v75 = memberList->m_Items[0];
  if ( !v75 )
LABEL_41:
    sub_B170D4();
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v75, 0LL) + cost;
  for ( i = 1; ; ++i )
  {
    v93 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v93 = BalanceConfig_TypeInfo;
    }
    if ( i >= v93->static_fields->DeckMemberMax )
      break;
    v82 = *p_memberList;
    v83 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v77, v78, v79, v80);
    PartyOrganizationListViewItem___ctor_32311272(v83, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v82 )
      goto LABEL_41;
    if ( v83 )
    {
      v66 = sub_B170BC(v83, v82->obj.klass->_1.element_class);
      if ( !v66 )
        goto LABEL_43;
    }
    if ( i >= v82->max_length )
      goto LABEL_42;
    v89 = &v82->obj.klass + i;
    v89[4] = (Il2CppClass *)v83;
    sub_B16F98((BattleServantConfConponent_o *)(v89 + 4), (System_Int32_array **)v83, v68, v84, v85, v86, v87, v88);
    v90 = this->fields.memberList;
    if ( !v90 )
      goto LABEL_41;
    if ( i >= v90->max_length )
      goto LABEL_42;
    v91 = v90->m_Items[i];
    if ( !v91 )
      goto LABEL_41;
    v92 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v91, 0LL) + v92;
  }
  PartyListViewItem__CheckRestriction(this, v77);
}


void __fastcall PartyListViewItem___ctor_32455604(
        PartyListViewItem_o *this,
        bool *isBaseModify,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        QuestRestrictionInfo_o *questRestrictionInfo,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        EventUpValSetupInfo_o *setupInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x2
  struct DeckServant_o *deckInfo; // x8
  DeckServant_o *v41; // x0
  int32_t servantNumMax; // w25
  clsQuestCheck_o *v43; // x0
  const MethodInfo *v44; // x3
  clsQuestCheck_o *v45; // x0
  PartyListViewItem_o *monitor; // x9
  int qrs; // w28
  clsQuestCheck_o *v48; // x0
  const MethodInfo *v49; // x2
  PartyOrganizationListViewItem_o *Member; // x0
  int32_t InitPos_k__BackingField; // w23
  PartyOrganizationUtility_o *v52; // x0
  int32_t FollowerIndex; // w26
  BalanceConfig_c *v54; // x0
  clsQuestCheck_o *v55; // x0
  clsQuestCheck_o *v56; // x0
  clsQuestCheck_o *v57; // x0
  clsQuestCheck_o *v58; // x0
  __int64 UserServantList; // x0
  const MethodInfo *v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct System_String_o *v67; // x9
  __int64 v68; // x27
  __int64 v69; // x21
  unsigned __int64 v70; // x8
  int32_t *v71; // x23
  signed __int64 v72; // x24
  BalanceConfig_c *v73; // x0
  struct PartyOrganizationListViewItem_array *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *v82; // x8
  UserEventDeckEntity_o *v83; // x28
  __int64 v84; // x19
  PartyOrganizationListViewItem_o *v85; // x0
  int32_t *p_InitPos_k__BackingField; // x8
  struct DeckServant_o *v87; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v89; // x8
  int32_t initPos; // w26
  const MethodInfo *v91; // x6
  int v92; // w23
  _BOOL4 v93; // w25
  struct DeckServant_o *v94; // x8
  struct DeckServantData_array *v95; // x8
  DeckServantData_o *v96; // x8
  int64_t npcFollowerSvtId; // x4
  PartyOrganizationUtility_o *v98; // x0
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  FollowerInfo_o *v101; // x24
  int32_t v102; // w25
  bool IsNpc; // w0
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  struct PartyOrganizationListViewItem_array *v108; // x21
  int32_t v109; // w28
  PartyOrganizationListViewItem_o *v110; // x23
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  unsigned int max_length; // w8
  FollowerInfo_o *v117; // x24
  int32_t v118; // w25
  __int64 v119; // x21
  __int64 v120; // x23
  __int64 v121; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v122; // x23
  __int64 v123; // t1
  __int64 v124; // x24
  __int64 v125; // x25
  int32_t v126; // w24
  int32_t v127; // w25
  int32_t DispLimitCount; // w0
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  UserServantEntity_o *v132; // x24
  struct PartyOrganizationListViewItem_array *v133; // x28
  System_Int64_array *EquipList; // x25
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x3
  __int64 v138; // x4
  PartyOrganizationListViewItem_o *v139; // x23
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  Il2CppClass **v145; // x0
  PartyOrganizationListViewItem_o *v146; // x0
  Il2CppClass **v147; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v149; // x0
  int32_t cost; // w21
  const MethodInfo *v151; // x1
  FollowerInfo_array *npcFollowerInfoList; // [xsp+20h] [xbp-C0h]
  int v155; // [xsp+30h] [xbp-B0h]
  int v156; // [xsp+38h] [xbp-A8h]
  int v157; // [xsp+38h] [xbp-A8h]
  PartyListViewItem_o *v158; // [xsp+40h] [xbp-A0h]
  int32_t klass; // [xsp+4Ch] [xbp-94h]
  int32_t klass_high; // [xsp+5Ch] [xbp-84h]
  UserEventDeckEntity_o *v161; // [xsp+60h] [xbp-80h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+68h] [xbp-78h]
  bool v163; // [xsp+74h] [xbp-6Ch]
  int32_t v164; // [xsp+84h] [xbp-5Ch] BYREF
  FollowerInfo_o *followera; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  if ( (byte_40FDD81 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, isBaseModify);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_B16FFC(&DataManager_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&PartyOrganizationListViewItem___TypeInfo, v22);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v25);
    byte_40FDD81 = 1;
  }
  followera = 0LL;
  v164 = 0;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !deck )
    goto LABEL_149;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_149;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v39) )
  {
    v41 = deck->fields.deckInfo;
    if ( !v41 )
      goto LABEL_149;
    DeckServant__ResetInitPos(v41, 0LL);
  }
  if ( !questRestrictionInfo )
    goto LABEL_149;
  servantNumMax = questRestrictionInfo->fields.servantNumMax;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v43 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v43 )
    goto LABEL_149;
  if ( SLODWORD(v43[1].fields.qrs) < 1 )
  {
    v163 = 0;
    v158 = 0LL;
    qrs = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v45 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v45 )
      goto LABEL_149;
    monitor = (PartyListViewItem_o *)v45[2].monitor;
    qrs = 0;
    v163 = monitor != 0LL;
    v158 = monitor;
    if ( follower && monitor )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v48 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v48 )
        goto LABEL_149;
      if ( !v158 )
        goto LABEL_149;
      qrs = (int)v48[1].fields.qrs;
      Member = PartyListViewItem__GetMember(v158, qrs - 1, v49);
      if ( !Member )
        goto LABEL_149;
      InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
      v52 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v52 )
        goto LABEL_149;
      PartyOrganizationUtility__SetNpcFollowerInfo(v52, InitPos_k__BackingField, follower, 0LL);
      v163 = 1;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v44);
  if ( FollowerIndex > 0 || questRestrictionInfo->fields.isNotTransitionSupportList )
  {
    if ( FollowerIndex > servantNumMax )
    {
LABEL_32:
      *isBaseModify = 1;
      v54 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v54 = BalanceConfig_TypeInfo;
      }
      FollowerIndex = servantNumMax;
      if ( servantNumMax > v54->static_fields->DeckMainMemberMax )
      {
        if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          FollowerIndex = v54->static_fields->DeckMainMemberMax;
          if ( !v54->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v54);
            FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
          }
        }
        else
        {
          FollowerIndex = v54->static_fields->DeckMainMemberMax;
        }
      }
    }
  }
  else if ( FollowerIndex > servantNumMax || !questRestrictionInfo->fields.isNoSupportBattle )
  {
    goto LABEL_32;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v55 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v55 )
    goto LABEL_149;
  if ( v55->fields.cQuestReleaseListP )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v56 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v56 )
      goto LABEL_149;
    follower = (FollowerInfo_o *)v56->fields.cQuestReleaseListP;
    v57 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v57 )
      goto LABEL_149;
    klass = (int32_t)v57[1].klass;
    v58 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v58 )
      goto LABEL_149;
    klass_high = HIDWORD(v58[1].klass);
  }
  else
  {
    klass_high = followerDeckId;
    klass = followerClassId;
  }
  v156 = qrs;
  v161 = deck;
  UserServantList = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
  if ( !UserServantList )
    goto LABEL_149;
  v67 = *(struct System_String_o **)(UserServantList + 24);
  v68 = UserServantList;
  if ( (int)v67 >= 1 )
  {
    v69 = 0LL;
    v70 = 0LL;
    v71 = (int32_t *)(UserServantList + 32);
    do
    {
      if ( v70 >= (unsigned int)v67 )
      {
LABEL_153:
        sub_B17100(UserServantList, v60, v61);
        sub_B170A0();
      }
      v72 = v70 + 1;
      if ( servantNumMax < (int)v70 + 1 && *(_QWORD *)&v71[2 * v70] )
      {
        *isBaseModify = 1;
        if ( v70 >= *(unsigned int *)(v68 + 24) )
          goto LABEL_153;
        *(_QWORD *)&v71[2 * v70] = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&v71[v69], 0LL, v61, v62, v63, v64, v65, v66);
      }
      LODWORD(v67) = *(_DWORD *)(v68 + 24);
      v69 += 2LL;
      v70 = v72;
    }
    while ( v72 < (int)v67 );
  }
  v73 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v73 = BalanceConfig_TypeInfo;
  }
  v74 = (struct PartyOrganizationListViewItem_array *)sub_B17014(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v73->static_fields->DeckMemberMax,
                                                        v61);
  this->fields.memberList = v74;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v82 = *p_questRestrictionInfo;
  v83 = v161;
  if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
LABEL_149:
    sub_B170D4();
  v84 = 0LL;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          Master_WarQuestSelectionMaster,
                          v82->fields.questId,
                          v82->fields.questPhase,
                          0LL);
  v157 = v156 - 1;
  v155 = FollowerIndex - 1;
  while ( 1 )
  {
    UserServantList = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      UserServantList = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (int)v84 >= *(_DWORD *)(*(_QWORD *)(UserServantList + 184) + 156LL) )
      break;
    if ( v163 )
    {
      if ( !v158 )
        goto LABEL_149;
      v85 = PartyListViewItem__GetMember(v158, v84, (const MethodInfo *)v61);
      if ( !v85 )
        goto LABEL_149;
      p_InitPos_k__BackingField = &v85->fields._InitPos_k__BackingField;
    }
    else
    {
      v87 = v83->fields.deckInfo;
      if ( !v87 )
        goto LABEL_149;
      svts = v87->fields.svts;
      if ( !svts )
        goto LABEL_149;
      if ( (unsigned int)v84 >= svts->max_length )
        goto LABEL_153;
      v89 = svts->m_Items[(int)v84];
      if ( !v89 )
        goto LABEL_149;
      p_InitPos_k__BackingField = &v89->fields.initPos;
    }
    initPos = *p_InitPos_k__BackingField;
    followera = 0LL;
    v164 = 0;
    UserServantList = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(questRestrictionInfo, initPos, 0LL);
    v92 = UserServantList;
    v93 = 0;
    if ( (UserServantList & 1) != 0 )
    {
      v94 = v83->fields.deckInfo;
      if ( !v94 )
        goto LABEL_149;
      v95 = v94->fields.svts;
      if ( !v95 )
        goto LABEL_149;
      if ( (unsigned int)v84 >= v95->max_length )
        goto LABEL_153;
      v96 = v95->m_Items[(int)v84];
      if ( !v96 )
        goto LABEL_149;
      v93 = 0;
      if ( v157 != (_DWORD)v84 )
      {
        npcFollowerSvtId = v96->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v93 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &v164,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v91);
      }
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v98 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v98 )
      goto LABEL_149;
    UserServantList = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(v98, initPos, 0LL);
    if ( UserServantList && ((v92 ^ 1) & 1) == 0 )
    {
      v101 = (FollowerInfo_o *)UserServantList;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)UserServantList, 0LL) )
        v102 = 0;
      else
        v102 = klass;
      IsNpc = FollowerInfo__get_IsNpc(v101, 0LL);
      v108 = *p_memberList;
      if ( IsNpc )
        v109 = 0;
      else
        v109 = klass_high;
      v110 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                  PartyOrganizationListViewItem_TypeInfo,
                                                  v104,
                                                  v105,
                                                  v106,
                                                  v107);
      PartyOrganizationListViewItem___ctor_32282080(
        v110,
        v84,
        v101,
        v102,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v109,
        initPos,
        0LL);
      if ( !v108 )
        goto LABEL_149;
      if ( v110 )
      {
        UserServantList = sub_B170BC(v110, v108->obj.klass->_1.element_class);
        if ( !UserServantList )
          goto LABEL_154;
      }
      max_length = v108->max_length;
      v83 = v161;
      goto LABEL_140;
    }
    if ( v155 == (_DWORD)v84 || v93 )
    {
      v117 = followera;
      v108 = *p_memberList;
      if ( followera )
      {
        v118 = v164;
        v110 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                    PartyOrganizationListViewItem_TypeInfo,
                                                    v60,
                                                    v61,
                                                    v99,
                                                    v100);
        PartyOrganizationListViewItem___ctor_32282080(
          v110,
          v84,
          v117,
          v118,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          klass_high,
          initPos,
          0LL);
LABEL_136:
        if ( !v108 )
          goto LABEL_149;
      }
      else
      {
        v146 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                    PartyOrganizationListViewItem_TypeInfo,
                                                    v60,
                                                    v61,
                                                    v99,
                                                    v100);
        v110 = v146;
        if ( follower )
        {
          PartyOrganizationListViewItem___ctor_32282080(
            v146,
            v84,
            follower,
            klass,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            klass_high,
            initPos,
            0LL);
          goto LABEL_136;
        }
        PartyOrganizationListViewItem___ctor_32311272(v146, v84, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v108 )
          goto LABEL_149;
      }
      if ( v110 )
      {
        UserServantList = sub_B170BC(v110, v108->obj.klass->_1.element_class);
        if ( !UserServantList )
          goto LABEL_154;
      }
      max_length = v108->max_length;
LABEL_140:
      if ( (unsigned int)v84 >= max_length )
        goto LABEL_153;
      v147 = &v108->obj.klass + (int)v84;
      v147[4] = (Il2CppClass *)v110;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v147 + 4),
        (System_Int32_array **)v110,
        v61,
        v111,
        v112,
        v113,
        v114,
        v115);
      goto LABEL_142;
    }
    v119 = v84;
    if ( (v92 & 1) != 0 )
    {
      if ( (unsigned int)v84 >= *(_DWORD *)(v68 + 24) )
        goto LABEL_153;
      v120 = v68 + 8LL * (int)v84;
      v123 = *(_QWORD *)(v120 + 32);
      v122 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v120 + 32);
      v121 = v123;
      v119 = (int)v84;
      if ( v123 )
      {
        v125 = *(_QWORD *)(v121 + 80);
        v124 = *(_QWORD *)(v121 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v166.fields.currentCryptoKey = v125;
        *(_QWORD *)&v166.fields.fakeValue = v124;
        UserServantList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v166, 0LL);
        if ( (unsigned int)v84 >= *(_DWORD *)(v68 + 24) )
          goto LABEL_153;
        if ( !*v122 )
          goto LABEL_149;
        v126 = UserServantList;
        UserServantList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*v122)[6], 0LL);
        if ( (unsigned int)v84 >= *(_DWORD *)(v68 + 24) )
          goto LABEL_153;
        v127 = UserServantList;
        if ( !*v122 )
          goto LABEL_149;
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*v122, 0, 0LL);
        UserServantList = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                            questRestrictionInfo,
                            v126,
                            v127,
                            DispLimitCount,
                            initPos,
                            0,
                            0LL);
        if ( (UserServantList & 1) != 0 )
        {
          if ( (unsigned int)v84 >= *(_DWORD *)(v68 + 24) )
            goto LABEL_153;
          *v122 = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)v122, 0LL, v61, v99, v100, v129, v130, v131);
        }
      }
    }
    if ( (unsigned int)v84 >= *(_DWORD *)(v68 + 24) )
      goto LABEL_153;
    v132 = *(UserServantEntity_o **)(v68 + 8 * v119 + 32);
    v133 = *p_memberList;
    if ( v132 )
    {
      EquipList = UserEventDeckEntity__GetEquipList(v161, v84, 0LL);
      v139 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                  PartyOrganizationListViewItem_TypeInfo,
                                                  v135,
                                                  v136,
                                                  v137,
                                                  v138);
      PartyOrganizationListViewItem___ctor_32304716(
        v139,
        v84,
        v132,
        EquipList,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        0LL);
      if ( !v133 )
        goto LABEL_149;
    }
    else
    {
      v139 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v60, v61, v99, v100);
      PartyOrganizationListViewItem___ctor_32311272(v139, v84, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v133 )
        goto LABEL_149;
    }
    if ( v139 )
    {
      UserServantList = sub_B170BC(v139, v133->obj.klass->_1.element_class);
      if ( !UserServantList )
      {
LABEL_154:
        sub_B170F4(UserServantList);
        sub_B170A0();
      }
    }
    if ( (unsigned int)v84 >= v133->max_length )
      goto LABEL_153;
    v145 = &v133->obj.klass + v119;
    v145[4] = (Il2CppClass *)v139;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v145 + 4),
      (System_Int32_array **)v139,
      v61,
      v140,
      v141,
      v142,
      v143,
      v144);
    v83 = v161;
LABEL_142:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_149;
    if ( (unsigned int)v84 >= memberList->max_length )
      goto LABEL_153;
    v149 = memberList->m_Items[(int)v84];
    if ( !v149 )
      goto LABEL_149;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v149, 0LL) + cost;
    ++v84;
  }
  PartyListViewItem__CheckRestriction(this, v60);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v151) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_32458288(
        PartyListViewItem_o *this,
        bool *isBaseModify,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventUpValSetupInfo_o *setupInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        bool isNew,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  bool *v18; // x23
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  const MethodInfo *v68; // x2
  struct DeckServant_o *deckInfo; // x8
  DeckServant_o *v70; // x0
  System_Int64_array *NpcServantFollowerIds; // x28
  clsQuestCheck_o *v72; // x0
  clsQuestCheck_o *v73; // x0
  PartyListViewItem_o *monitor; // x9
  clsQuestCheck_o *v75; // x0
  const MethodInfo *v76; // x2
  PartyOrganizationListViewItem_o *Member; // x0
  int32_t InitPos_k__BackingField; // w21
  PartyOrganizationUtility_o *v79; // x0
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // x0
  FollowerInfo_array *QuestFollowerList; // x19
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  __int64 IsUseOldMaster; // x0
  FollowerInfo_o *v87; // x1
  System_String_array **v88; // x2
  const MethodInfo *v89; // x3
  int max_length; // w8
  FollowerInfo_array *v91; // x9
  unsigned int v92; // w19
  __int64 v93; // x3
  __int64 v94; // x4
  int32_t size; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v97; // w9
  unsigned int v98; // w10
  QuestRestrictionInfo_SlotInfo_o *v99; // x11
  struct DeckServant_o *v100; // x8
  int v101; // w26
  int v102; // w27
  __int64 v103; // x28
  struct DeckServantData_array *svts; // x8
  unsigned int v105; // w20
  PartyListViewItem___c__DisplayClass19_0_o *v106; // x19
  struct DeckServant_o *v107; // x8
  struct DeckServantData_array *v108; // x8
  __int64 v109; // x8
  __int64 v110; // x21
  struct DeckServant_o *v111; // x8
  struct DeckServantData_array *v112; // x8
  __int64 v113; // x8
  bool IsMyServantOrNpcRestriction_31258540; // w0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v115; // x21
  BalanceConfig_c *v116; // x0
  Il2CppClass *v117; // x20
  __int64 klass_low; // x8
  Il2CppClass **v119; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  _BOOL8 v123; // x0
  __int64 v124; // x1
  const MethodInfo *v125; // x2
  __int64 v126; // x2
  BalanceConfig_c *v127; // x0
  const MethodInfo *v128; // x3
  int32_t i; // w19
  struct DeckServant_o *v130; // x8
  struct DeckServantData_array *v131; // x8
  DeckServantData_o *v132; // x8
  int32_t UserServantDeployIndex; // w0
  unsigned int v134; // w21
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_Int32_array **v140; // x22
  Il2CppClass **v141; // x0
  bool v142; // w20
  clsQuestCheck_o *v143; // x0
  __int64 v144; // x2
  clsQuestCheck_o *v145; // x0
  clsQuestCheck_o *v146; // x0
  clsQuestCheck_o *v147; // x0
  BalanceConfig_c *v148; // x0
  struct PartyOrganizationListViewItem_array *v149; // x0
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  unsigned __int64 v158; // x28
  bool *p_isNpcEditablePos; // x21
  __int64 j; // x22
  unsigned int *v161; // x20
  PartyOrganizationListViewItem_o *v162; // x24
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  BalanceConfig_c *v168; // x0
  PartyListViewItem___c__DisplayClass19_1_o *v169; // x24
  __int64 v170; // x3
  __int64 v171; // x4
  PartyOrganizationListViewItem_o *v172; // x0
  int32_t *p_InitPos_k__BackingField; // x8
  struct DeckServant_o *v174; // x8
  struct DeckServantData_array *v175; // x8
  __int64 v176; // x8
  int32_t v177; // w19
  const MethodInfo *v178; // x6
  bool v179; // w8
  int64_t v180; // x4
  bool *v181; // x25
  bool v182; // w21
  bool v183; // w20
  PartyOrganizationUtility_o *v184; // x0
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  FollowerInfo_o *v187; // x27
  bool IsNpc; // w0
  int32_t v189; // w8
  bool v190; // w0
  __int64 v191; // x1
  __int64 v192; // x2
  __int64 v193; // x3
  __int64 v194; // x4
  unsigned int *v195; // x20
  int32_t v196; // w21
  PartyOrganizationListViewItem_o *v197; // x24
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  unsigned __int64 v203; // x25
  FollowerInfo_o *v204; // x27
  bool *v205; // x20
  unsigned int *v206; // x21
  int32_t v207; // w25
  PartyOrganizationListViewItem_o *v208; // x24
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  PartyOrganizationListViewItem_o *v214; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v215; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v216; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v217; // x27
  __int64 v218; // x3
  __int64 v219; // x4
  FollowerInfo_o *v220; // x24
  unsigned int v221; // w21
  unsigned int *v222; // x26
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v224; // x8
  int32_t classId; // w20
  PartyOrganizationListViewItem_o *v226; // x27
  System_String_array **v227; // x3
  System_Boolean_array **v228; // x4
  System_Int32_array **v229; // x5
  System_Int32_array *v230; // x6
  System_Int32_array *v231; // x7
  __int64 v232; // x3
  __int64 v233; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v234; // x21
  __int64 v235; // x20
  FollowerInfo_o *v236; // x24
  unsigned int *v237; // x21
  PartyOrganizationListViewItem_o *v238; // x24
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v245; // x0
  int32_t cost; // w19
  int v247; // w8
  PartyOrganizationListViewItem_o *v248; // x24
  System_String_array **v249; // x3
  System_Boolean_array **v250; // x4
  System_Int32_array **v251; // x5
  System_Int32_array *v252; // x6
  System_Int32_array *v253; // x7
  UserServantEntity_array *v254; // x20
  __int64 v255; // x8
  __int64 v256; // x24
  __int64 v257; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v258; // x8
  int32_t v259; // w27
  int32_t v260; // w24
  UserServantEntity_o *v261; // x0
  int32_t DispLimitCount; // w0
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  unsigned int *v266; // x21
  UserServantEntity_o *v267; // x24
  unsigned int *v268; // x20
  __int64 v269; // x1
  __int64 v270; // x2
  __int64 v271; // x3
  __int64 v272; // x4
  PartyOrganizationListViewItem_o *v273; // x27
  System_String_array **v274; // x3
  System_Boolean_array **v275; // x4
  System_Int32_array **v276; // x5
  System_Int32_array *v277; // x6
  System_Int32_array *v278; // x7
  PartyOrganizationListViewItem_o *v279; // x24
  System_String_array **v280; // x3
  System_Boolean_array **v281; // x4
  System_Int32_array **v282; // x5
  System_Int32_array *v283; // x6
  System_Int32_array *v284; // x7
  struct ServantLeaderInfo_array *v285; // x8
  ServantLeaderInfo_o *v286; // x8
  int32_t v287; // w20
  PartyOrganizationListViewItem_o *v288; // x27
  System_String_array **v289; // x3
  System_Boolean_array **v290; // x4
  System_Int32_array **v291; // x5
  System_Int32_array *v292; // x6
  System_Int32_array *v293; // x7
  __int64 v294; // x21
  int v295; // w26
  unsigned __int64 v296; // x28
  UserServantEntity_o **m_Items; // x27
  PartyListViewItem___c__DisplayClass19_2_o *v298; // x19
  __int64 v299; // x3
  __int64 v300; // x4
  signed __int64 v301; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v302; // x22
  System_Int32_array **v303; // x5
  System_Int32_array *v304; // x6
  System_Int32_array *v305; // x7
  unsigned __int64 v306; // x8
  unsigned __int64 v307; // x20
  signed __int64 v308; // x21
  const MethodInfo *v309; // x6
  int v310; // w27
  struct DeckServant_o *v311; // x8
  struct DeckServantData_array *v312; // x8
  __int64 v313; // x8
  int64_t v314; // x4
  PartyOrganizationUtility_o *v315; // x0
  FollowerInfo_o *NpcFollowerInfo; // x0
  __int64 v317; // x1
  __int64 v318; // x2
  __int64 v319; // x3
  __int64 v320; // x4
  FollowerInfo_o *v321; // x22
  bool *v322; // x25
  int32_t v323; // w28
  bool v324; // w0
  __int64 v325; // x1
  __int64 v326; // x2
  __int64 v327; // x3
  __int64 v328; // x4
  unsigned int *v329; // x20
  int32_t v330; // w23
  PartyOrganizationListViewItem_o *v331; // x27
  System_String_array **v332; // x3
  System_Boolean_array **v333; // x4
  System_Int32_array **v334; // x5
  System_Int32_array *v335; // x6
  System_Int32_array *v336; // x7
  struct PartyOrganizationListViewItem_array *v337; // x8
  struct DeckServant_o *v338; // x9
  struct DeckServantData_array *v339; // x9
  __int64 v340; // x9
  __int64 v341; // x8
  FollowerInfo_o *v342; // x22
  unsigned int *v343; // x28
  int32_t v344; // w28
  unsigned int *v345; // x19
  PartyOrganizationListViewItem_o *v346; // x27
  __int64 IsRestrictionServantIndividuality; // x0
  System_String_array **v348; // x3
  System_Boolean_array **v349; // x4
  System_Int32_array **v350; // x5
  System_Int32_array *v351; // x6
  System_Int32_array *v352; // x7
  BattleServantConfConponent_o *v353; // x0
  PartyOrganizationListViewItem_o *v354; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v355; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v356; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v357; // x22
  System_String_array **v358; // x3
  System_Boolean_array **v359; // x4
  il2cpp_array_size_t *v360; // x20
  __int64 v361; // x8
  __int64 v362; // x22
  __int64 v363; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v364; // x8
  int32_t v365; // w22
  int32_t v366; // w27
  UserServantEntity_o *v367; // x0
  int32_t v368; // w0
  System_Int32_array **v369; // x5
  System_Int32_array *v370; // x6
  System_Int32_array *v371; // x7
  __int64 v372; // x3
  __int64 v373; // x4
  FollowerInfo_o *v374; // x27
  struct PartyOrganizationListViewItem_array *v375; // x8
  struct DeckServant_o *v376; // x9
  struct DeckServantData_array *v377; // x9
  __int64 v378; // x9
  __int64 v379; // x8
  int32_t v380; // w8
  unsigned int v381; // w20
  unsigned int *v382; // x22
  struct ServantLeaderInfo_array *v383; // x8
  ServantLeaderInfo_o *v384; // x8
  PartyOrganizationListViewItem_o *v385; // x28
  System_String_array **v386; // x3
  System_Boolean_array **v387; // x4
  System_Int32_array **v388; // x5
  System_Int32_array *v389; // x6
  System_Int32_array *v390; // x7
  UserServantEntity_o *v391; // x27
  unsigned int *v392; // x20
  System_Int64_array *EquipList; // x28
  __int64 v394; // x1
  __int64 v395; // x2
  __int64 v396; // x3
  __int64 v397; // x4
  PartyOrganizationListViewItem_o *v398; // x22
  System_String_array **v399; // x3
  System_Boolean_array **v400; // x4
  System_Int32_array **v401; // x5
  System_Int32_array *v402; // x6
  System_Int32_array *v403; // x7
  unsigned int *v404; // x28
  PartyOrganizationListViewItem_o *v405; // x22
  System_String_array **v406; // x3
  System_Boolean_array **v407; // x4
  System_Int32_array **v408; // x5
  System_Int32_array *v409; // x6
  System_Int32_array *v410; // x7
  struct PartyOrganizationListViewItem_array *v411; // x8
  PartyOrganizationListViewItem_o *v412; // x0
  int32_t v413; // w19
  __int64 v414; // x26
  unsigned __int64 k; // x24
  unsigned int *v416; // x20
  PartyOrganizationListViewItem_o *v417; // x27
  System_String_array **v418; // x3
  System_Boolean_array **v419; // x4
  System_Int32_array **v420; // x5
  System_Int32_array *v421; // x6
  System_Int32_array *v422; // x7
  BalanceConfig_c *v423; // x0
  PartyListViewItem___c__DisplayClass19_3_o *v424; // x28
  __int64 v425; // x3
  __int64 v426; // x4
  PartyOrganizationListViewItem_o *v427; // x0
  int32_t *v428; // x8
  struct DeckServant_o *v429; // x8
  struct DeckServantData_array *v430; // x8
  __int64 v431; // x8
  int32_t v432; // w19
  const MethodInfo *v433; // x1
  int32_t initPos; // [xsp+8h] [xbp-168h]
  bool *v435; // [xsp+18h] [xbp-158h]
  int32_t v436; // [xsp+20h] [xbp-150h]
  int v437; // [xsp+2Ch] [xbp-144h]
  _BOOL4 v438; // [xsp+2Ch] [xbp-144h]
  int32_t klass; // [xsp+3Ch] [xbp-134h]
  int qrs; // [xsp+40h] [xbp-130h]
  int32_t klass_high; // [xsp+44h] [xbp-12Ch]
  int v442; // [xsp+48h] [xbp-128h]
  bool *v443; // [xsp+48h] [xbp-128h]
  int v444; // [xsp+48h] [xbp-128h]
  int32_t FollowerIndex; // [xsp+54h] [xbp-11Ch]
  PartyListViewItem_o *v446; // [xsp+58h] [xbp-118h]
  System_Int64_array *equipIdLista; // [xsp+60h] [xbp-110h]
  int equipIdList; // [xsp+60h] [xbp-110h]
  FollowerInfo_o *followerInfo; // [xsp+68h] [xbp-108h]
  UserServantEntity_array *userServantList; // [xsp+70h] [xbp-100h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+78h] [xbp-F8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v452; // [xsp+80h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+88h] [xbp-E8h]
  System_Int64_array *v454; // [xsp+90h] [xbp-E0h]
  System_Int64_array *v455; // [xsp+90h] [xbp-E0h]
  il2cpp_array_size_t *p_max_length; // [xsp+90h] [xbp-E0h]
  PartyListViewItem_o *v457; // [xsp+98h] [xbp-D8h]
  int32_t DeckMemberMax; // [xsp+A8h] [xbp-C8h]
  bool v460; // [xsp+A8h] [xbp-C8h]
  int32_t v461; // [xsp+A8h] [xbp-C8h]
  bool v462; // [xsp+B4h] [xbp-BCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+B8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v465; // [xsp+C8h] [xbp-A8h] BYREF
  int32_t v466; // [xsp+E4h] [xbp-8Ch] BYREF
  FollowerInfo_o *v467; // [xsp+E8h] [xbp-88h] BYREF
  int32_t v468; // [xsp+F4h] [xbp-7Ch] BYREF
  FollowerInfo_o *v469; // [xsp+F8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v470; // [xsp+100h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v471; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v472; // 0:x0.16

  v18 = isBaseModify;
  if ( (byte_40FDD82 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, isBaseModify);
    sub_B16FFC(&Method_BasicHelper_Any_FollowerInfo___, v20);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcFollowerMaster___, v21);
    sub_B16FFC(&DataManager_TypeInfo, v22);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v23);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_FollowerInfo___, v24);
    sub_B16FFC(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___, v25);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___, v26);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__, v30);
    sub_B16FFC(&FollowerInfo___TypeInfo, v31);
    sub_B16FFC(&Method_System_Func_FollowerInfo__bool___ctor__, v32);
    sub_B16FFC(&System_Func_FollowerInfo__bool__TypeInfo, v33);
    sub_B16FFC(&long___TypeInfo, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v37);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__, v38);
    sub_B16FFC(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__, v39);
    sub_B16FFC(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v40);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
    sub_B16FFC(&PartyOrganizationListViewItem___TypeInfo, v42);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v43);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v44);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v45);
    sub_B16FFC(&Method_PartyListViewItem___c__DisplayClass19_0___ctor_b__0__, v46);
    sub_B16FFC(&PartyListViewItem___c__DisplayClass19_0_TypeInfo, v47);
    sub_B16FFC(&Method_PartyListViewItem___c__DisplayClass19_1___ctor_b__1__, v48);
    sub_B16FFC(&PartyListViewItem___c__DisplayClass19_1_TypeInfo, v49);
    sub_B16FFC(&Method_PartyListViewItem___c__DisplayClass19_2___ctor_b__2__, v50);
    sub_B16FFC(&PartyListViewItem___c__DisplayClass19_2_TypeInfo, v51);
    sub_B16FFC(&Method_PartyListViewItem___c__DisplayClass19_3___ctor_b__3__, v52);
    sub_B16FFC(&PartyListViewItem___c__DisplayClass19_3_TypeInfo, v53);
    sub_B16FFC(&UserServantEntity___TypeInfo, v54);
    byte_40FDD82 = 1;
  }
  memset(&v470, 0, sizeof(v470));
  v469 = 0LL;
  v468 = 0;
  v467 = 0LL;
  v466 = 0;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  if ( !deck )
    goto LABEL_465;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_465;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v68) )
  {
    v70 = deck->fields.deckInfo;
    if ( !v70 )
      goto LABEL_465;
    DeckServant__ResetInitPos(v70, 0LL);
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(deck, 0LL);
  userServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v72 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v72 )
    goto LABEL_465;
  followerInfo = follower;
  if ( SLODWORD(v72[1].fields.qrs) < 1 )
  {
    v462 = 0;
    v457 = 0LL;
    qrs = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v73 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v73 )
      goto LABEL_465;
    monitor = (PartyListViewItem_o *)v73[2].monitor;
    qrs = 0;
    v462 = monitor != 0LL;
    v457 = monitor;
    if ( follower && monitor )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v75 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v75 )
        goto LABEL_465;
      if ( !v457 )
        goto LABEL_465;
      qrs = (int)v75[1].fields.qrs;
      Member = PartyListViewItem__GetMember(v457, qrs - 1, v76);
      if ( !Member )
        goto LABEL_465;
      InitPos_k__BackingField = Member->fields._InitPos_k__BackingField;
      v79 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v79 )
        goto LABEL_465;
      PartyOrganizationUtility__SetNpcFollowerInfo(v79, InitPos_k__BackingField, follower, 0LL);
      v462 = 1;
    }
  }
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !questRestrictionInfo )
    goto LABEL_465;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_465;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_465;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        Master_WarQuestSelectionMaster,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0LL);
  v452 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_FollowerInfo__TypeInfo,
                                                                                                   v82,
                                                                                                   v83,
                                                                                                   v84,
                                                                                                   v85);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v452,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  if ( !QuestFollowerList )
    goto LABEL_465;
  max_length = QuestFollowerList->max_length;
  v91 = QuestFollowerList;
  npcFollowerInfoList = QuestFollowerList;
  if ( max_length >= 1 )
  {
    v92 = 0;
    while ( v92 < max_length )
    {
      v87 = v91->m_Items[v92];
      if ( !v87 )
        goto LABEL_465;
      if ( !v87->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v87->fields.isFixedNpc) )
      {
        if ( !v452 )
          goto LABEL_465;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v452,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v87,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FollowerInfo__Add__);
        v91 = npcFollowerInfoList;
      }
      max_length = v91->max_length;
      if ( (int)++v92 >= max_length )
        goto LABEL_52;
    }
LABEL_472:
    sub_B17100(IsUseOldMaster, v87, v88);
    sub_B170A0();
  }
LABEL_52:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v452,
                    v89);
  questRestrictionInfoa = questRestrictionInfo;
  v446 = this;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
  {
LABEL_132:
    v142 = isNew;
    goto LABEL_133;
  }
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (IsUseOldMaster & 1) != 0 )
  {
    if ( !v452 )
      goto LABEL_465;
    size = v452->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_465;
    v97 = slotInfos->max_length;
    if ( v97 >= 1 )
    {
      size = 0;
      v98 = 0;
      while ( v98 < v97 )
      {
        v99 = slotInfos->m_Items[v98];
        if ( !v99 )
          goto LABEL_465;
        if ( v99->fields.slotType == 1 )
          size += v99->fields.isMoved;
        if ( (int)++v98 >= v97 )
          goto LABEL_67;
      }
      goto LABEL_472;
    }
    size = 0;
  }
LABEL_67:
  v100 = deck->fields.deckInfo;
  v454 = NpcServantFollowerIds;
  if ( !v100 )
    goto LABEL_465;
  v101 = 0;
  v102 = 0;
  v103 = 4LL;
  while ( 1 )
  {
    svts = v100->fields.svts;
    if ( !svts )
      goto LABEL_465;
    v105 = v103 - 4;
    if ( (int)v103 - 4 >= (signed int)svts->max_length )
      break;
    v106 = (PartyListViewItem___c__DisplayClass19_0_o *)sub_B170CC(
                                                          PartyListViewItem___c__DisplayClass19_0_TypeInfo,
                                                          v87,
                                                          v88,
                                                          v93,
                                                          v94);
    PartyListViewItem___c__DisplayClass19_0___ctor(v106, 0LL);
    v107 = deck->fields.deckInfo;
    if ( v107 )
    {
      v108 = v107->fields.svts;
      if ( v108 )
      {
        if ( v105 >= v108->max_length )
          goto LABEL_472;
        v109 = *((_QWORD *)&v108->obj.klass + v103);
        if ( v109 )
        {
          if ( v106 )
          {
            v110 = *(_QWORD *)(v109 + 24);
            v106->fields.npcSvtId = *(_QWORD *)(v109 + 48);
            v111 = deck->fields.deckInfo;
            if ( v111 )
            {
              v112 = v111->fields.svts;
              if ( v112 )
              {
                if ( v105 >= v112->max_length )
                  goto LABEL_472;
                v113 = *((_QWORD *)&v112->obj.klass + v103);
                if ( v113 )
                {
                  IsMyServantOrNpcRestriction_31258540 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(
                                                           questRestrictionInfo,
                                                           *(_DWORD *)(v113 + 60),
                                                           0LL);
                  if ( (int)v105 >= DeckMemberMax && (v110 || v106->fields.npcSvtId) )
                    v101 = 1;
                  if ( !IsMyServantOrNpcRestriction_31258540 && v106->fields.npcSvtId != 0 )
                  {
                    v115 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                                System_Func_FollowerInfo__bool__TypeInfo,
                                                                                                v87,
                                                                                                v88,
                                                                                                v93,
                                                                                                v94);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      v115,
                      (Il2CppObject *)v106,
                      Method_PartyListViewItem___c__DisplayClass19_0___ctor_b__0__,
                      (const MethodInfo_2B6AB40 *)Method_System_Func_FollowerInfo__bool___ctor__);
                    v102 += BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                              (System_Collections_Generic_List_T__o *)v452,
                              (System_Func_T__bool__o *)v115,
                              (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_FollowerInfo___);
                  }
                  v100 = deck->fields.deckInfo;
                  ++v103;
                  if ( v100 )
                    continue;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_465;
  }
  if ( ((v102 == size) & ~v101) != 0 )
  {
    this = v446;
    NpcServantFollowerIds = v454;
    goto LABEL_132;
  }
  this = v446;
  v116 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v116 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_B17014(
                                                  long___TypeInfo,
                                                  (unsigned int)v116->static_fields->DeckMemberMax,
                                                  v88);
  if ( !v452 )
    goto LABEL_465;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v465,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v452,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v470 = v465;
  while ( 1 )
  {
    v123 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v470,
             (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v123 )
      break;
    if ( !v470.fields.current )
      sub_B170D4();
    v117 = (Il2CppClass *)v470.fields.current[4].monitor;
    if ( v117 )
    {
      klass_low = SLODWORD(v470.fields.current[5].klass);
      if ( (int)klass_low >= 1 )
      {
        if ( !NpcServantFollowerIds )
          sub_B170D4();
        if ( (unsigned int)klass_low >= NpcServantFollowerIds->max_length )
        {
          sub_B17100(v123, v124, v125);
          sub_B170A0();
        }
        v119 = &NpcServantFollowerIds->obj.klass + klass_low;
        goto LABEL_104;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(v446, NpcServantFollowerIds, v125);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_B170D4();
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
        {
          sub_B17100(NpcDeployIdx, v121, v122);
          sub_B170A0();
        }
        v119 = &NpcServantFollowerIds->obj.klass + (int)NpcDeployIdx;
LABEL_104:
        v119[4] = v117;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v470,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v127 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v127 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_B17014(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v127->static_fields->DeckMemberMax,
                                                 v126);
  for ( i = 0; ; ++i )
  {
    IsUseOldMaster = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsUseOldMaster = (__int64)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)(IsUseOldMaster + 184) + 156LL) )
      break;
    v130 = deck->fields.deckInfo;
    if ( !v130 )
      goto LABEL_465;
    v131 = v130->fields.svts;
    if ( !v131 )
      goto LABEL_465;
    if ( i >= v131->max_length )
      goto LABEL_472;
    v132 = v131->m_Items[i];
    if ( !v132 )
      goto LABEL_465;
    if ( v132->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)IsUseOldMaster,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v128);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v134 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          IsUseOldMaster = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0LL);
          if ( !userServantList )
            goto LABEL_465;
          v140 = (System_Int32_array **)IsUseOldMaster;
          if ( IsUseOldMaster )
          {
            IsUseOldMaster = sub_B170BC(IsUseOldMaster, userServantList->obj.klass->_1.element_class);
            if ( !IsUseOldMaster )
            {
LABEL_473:
              sub_B170F4(IsUseOldMaster);
              sub_B170A0();
            }
          }
          if ( v134 >= userServantList->max_length )
            goto LABEL_472;
          v141 = &userServantList->obj.klass + (int)v134;
          v141[4] = (Il2CppClass *)v140;
          sub_B16F98((BattleServantConfConponent_o *)(v141 + 4), v140, v88, v135, v136, v137, v138, v139);
        }
      }
    }
  }
  if ( FollowerIndex < 1 )
    goto LABEL_132;
  v142 = isNew;
  if ( !questRestrictionInfo->fields.isNotTransitionSupportList && !questRestrictionInfo->fields.isNpcOnlyBattle )
    FollowerIndex = PartyListViewItem__GetSupportInitIndex(
                      v446,
                      (System_Collections_Generic_List_FollowerInfo__o *)v452,
                      (const MethodInfo *)v88);
LABEL_133:
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v143 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v143 )
    goto LABEL_465;
  if ( !v143->fields.cQuestReleaseListP )
  {
    klass_high = followerDeckId;
    klass = followerClassId;
    goto LABEL_146;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v145 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v145
    || (followerInfo = (FollowerInfo_o *)v145->fields.cQuestReleaseListP,
        (v146 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || (klass = (int32_t)v146[1].klass,
        (v147 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_465:
    sub_B170D4();
  }
  klass_high = HIDWORD(v147[1].klass);
LABEL_146:
  v148 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v148 = BalanceConfig_TypeInfo;
  }
  v149 = (struct PartyOrganizationListViewItem_array *)sub_B17014(
                                                         PartyOrganizationListViewItem___TypeInfo,
                                                         (unsigned int)v148->static_fields->DeckMemberMax,
                                                         v144);
  this->fields.memberList = v149;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v149,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( !v142 && questRestrictionInfo->fields.isNpcEditablePos )
  {
    v455 = NpcServantFollowerIds;
    v158 = 0LL;
    p_isNpcEditablePos = &questRestrictionInfo->fields.isNpcEditablePos;
    v437 = -1;
    while ( 1 )
    {
      for ( j = 8 * v158 + 32; ; j += 8LL )
      {
        v168 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v168 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v158 >= v168->static_fields->DeckMemberMax )
          goto LABEL_467;
        v169 = (PartyListViewItem___c__DisplayClass19_1_o *)sub_B170CC(
                                                              PartyListViewItem___c__DisplayClass19_1_TypeInfo,
                                                              v87,
                                                              v88,
                                                              v156,
                                                              v157);
        PartyListViewItem___c__DisplayClass19_1___ctor(v169, 0LL);
        if ( v462 )
        {
          if ( !v457 )
            goto LABEL_465;
          v172 = PartyListViewItem__GetMember(v457, v158, (const MethodInfo *)v88);
          if ( !v172 )
            goto LABEL_465;
          p_InitPos_k__BackingField = &v172->fields._InitPos_k__BackingField;
        }
        else
        {
          v174 = deck->fields.deckInfo;
          if ( !v174 )
            goto LABEL_465;
          v175 = v174->fields.svts;
          if ( !v175 )
            goto LABEL_465;
          if ( v158 >= v175->max_length )
            goto LABEL_472;
          v176 = *(__int64 *)((char *)&v175->obj.klass + j);
          if ( !v176 )
            goto LABEL_465;
          p_InitPos_k__BackingField = (int32_t *)(v176 + 60);
        }
        v177 = *p_InitPos_k__BackingField;
        if ( (__int64)v158 < DeckMemberMax )
          break;
        v161 = (unsigned int *)*p_memberList;
        v162 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                    PartyOrganizationListViewItem_TypeInfo,
                                                    v87,
                                                    v88,
                                                    v170,
                                                    v171);
        PartyOrganizationListViewItem___ctor_32311272(v162, v158, 0, setupInfo, questRestrictionInfo, 1, v177, 0LL);
        if ( !v161 )
          goto LABEL_465;
        if ( v162 )
        {
          IsUseOldMaster = sub_B170BC(v162, *(_QWORD *)(*(_QWORD *)v161 + 64LL));
          if ( !IsUseOldMaster )
            goto LABEL_473;
        }
        if ( v158 >= v161[6] )
          goto LABEL_472;
        *(_QWORD *)((char *)v161 + j) = v162;
        sub_B16F98(
          (BattleServantConfConponent_o *)((char *)v161 + j),
          (System_Int32_array **)v162,
          v88,
          v163,
          v164,
          v165,
          v166,
          v167);
        ++v158;
      }
      if ( !v169 )
        goto LABEL_465;
      v169->fields.chkIdx = v158 + 1;
      v469 = 0LL;
      v468 = 0;
      IsUseOldMaster = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(questRestrictionInfoa, v177, 0LL);
      v179 = 0;
      v442 = IsUseOldMaster;
      if ( (IsUseOldMaster & 1) != 0 )
      {
        if ( !v455 )
          goto LABEL_465;
        if ( v158 >= v455->max_length )
          goto LABEL_472;
        v180 = *(int64_t *)((char *)&v455->obj.klass + j);
        v179 = v180 >= 1
            && v169->fields.chkIdx != qrs
            && PartyListViewItem__SetNpcFollowerInfo(this, &v469, &v468, npcFollowerInfoList, v180, v177, v178);
      }
      v181 = p_isNpcEditablePos;
      v182 = v179;
      v183 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfoa, 0LL)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfoa, v177, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v184 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v184 )
        goto LABEL_465;
      IsUseOldMaster = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(v184, v177, 0LL);
      if ( !IsUseOldMaster || ((v442 ^ 1) & 1) != 0 )
      {
        if ( v182 || v169->fields.chkIdx == FollowerIndex )
        {
          v204 = v469;
          v205 = v181;
          v206 = (unsigned int *)*p_memberList;
          if ( v469 )
          {
            v207 = v468;
            v208 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                        PartyOrganizationListViewItem_TypeInfo,
                                                        v87,
                                                        v88,
                                                        v185,
                                                        v186);
            PartyOrganizationListViewItem___ctor_32282080(
              v208,
              v158,
              v204,
              v207,
              setupInfo,
              questRestrictionInfoa,
              0LL,
              0,
              klass_high,
              v177,
              0LL);
            v203 = v158 + 1;
            if ( !v206 )
              goto LABEL_465;
          }
          else
          {
            v214 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                        PartyOrganizationListViewItem_TypeInfo,
                                                        v87,
                                                        v88,
                                                        v185,
                                                        v186);
            v203 = v158 + 1;
            v208 = v214;
            if ( followerInfo )
              PartyOrganizationListViewItem___ctor_32282080(
                v214,
                v158,
                followerInfo,
                klass,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                0,
                klass_high,
                v177,
                0LL);
            else
              PartyOrganizationListViewItem___ctor_32311272(
                v214,
                v158,
                1,
                setupInfo,
                questRestrictionInfoa,
                1,
                v177,
                0LL);
            if ( !v206 )
              goto LABEL_465;
          }
          if ( v208 )
          {
            IsUseOldMaster = sub_B170BC(v208, *(_QWORD *)(*(_QWORD *)v206 + 64LL));
            if ( !IsUseOldMaster )
              goto LABEL_473;
          }
          if ( v158 >= v206[6] )
            goto LABEL_472;
          *(_QWORD *)((char *)v206 + j) = v208;
          sub_B16F98(
            (BattleServantConfConponent_o *)((char *)v206 + j),
            (System_Int32_array **)v208,
            v88,
            v209,
            v210,
            v211,
            v212,
            v213);
          p_isNpcEditablePos = v205;
        }
        else if ( v183 )
        {
          v215 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_FollowerInfo__bool__TypeInfo,
                                                                                      v87,
                                                                                      v88,
                                                                                      v185,
                                                                                      v186);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v215,
            (Il2CppObject *)v169,
            Method_PartyListViewItem___c__DisplayClass19_1___ctor_b__1__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_FollowerInfo__bool___ctor__);
          v216 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v452,
                   (System_Func_TSource__bool__o *)v215,
                   (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v217 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B170BC(v216, FollowerInfo___TypeInfo);
          if ( !v217 )
            v217 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                          v216,
                                                                          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          IsUseOldMaster = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                             v217,
                             (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          v435 = v181;
          if ( (IsUseOldMaster & 1) != 0 )
          {
            IsUseOldMaster = (__int64)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                        v217,
                                        0,
                                        (const MethodInfo_18D5DD4 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v203 = v158 + 1;
            v220 = (FollowerInfo_o *)IsUseOldMaster;
            v221 = v437;
            v222 = (unsigned int *)*p_memberList;
            if ( IsUseOldMaster )
              goto LABEL_211;
          }
          else
          {
            if ( !v452 )
              goto LABEL_465;
            v247 = v452->fields._size;
            if ( v247 >= 1 )
            {
              v221 = 0;
              while ( 1 )
              {
                if ( v247 <= v221 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                v220 = (FollowerInfo_o *)v452->fields._items->m_Items[v221];
                if ( !v220 || !v455 )
                  goto LABEL_465;
                if ( v158 >= v455->max_length )
                  goto LABEL_472;
                if ( (Il2CppClass *)v220->fields.npcFollowerSvtId != *(Il2CppClass **)((char *)&v455->obj.klass + j) )
                {
                  if ( v452->fields._size <= v221 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  if ( v437 < (int)v221 && v220->fields.npcInitIdx <= 0 )
                    break;
                }
                ++v221;
                v247 = v452->fields._size;
                if ( (int)v221 >= v247 )
                  goto LABEL_260;
              }
              v203 = v158 + 1;
              if ( v452->fields._size <= v221 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v222 = (unsigned int *)*p_memberList;
LABEL_211:
              userSvtLeaderHash = v220->fields.userSvtLeaderHash;
              if ( !userSvtLeaderHash )
                goto LABEL_465;
              if ( !userSvtLeaderHash->max_length )
                goto LABEL_472;
              v224 = userSvtLeaderHash->m_Items[0];
              if ( !v224 )
                goto LABEL_465;
              classId = v224->fields.classId;
              v226 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                          PartyOrganizationListViewItem_TypeInfo,
                                                          v87,
                                                          v88,
                                                          v218,
                                                          v219);
              PartyOrganizationListViewItem___ctor_32282080(
                v226,
                v158,
                v220,
                classId,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                1,
                klass_high,
                v177,
                0LL);
              if ( !v222 )
                goto LABEL_465;
              if ( v226 )
              {
                IsUseOldMaster = sub_B170BC(v226, *(_QWORD *)(*(_QWORD *)v222 + 64LL));
                if ( !IsUseOldMaster )
                  goto LABEL_473;
              }
              if ( v158 >= v222[6] )
                goto LABEL_472;
              *(_QWORD *)((char *)v222 + j) = v226;
              sub_B16F98(
                (BattleServantConfConponent_o *)((char *)v222 + j),
                (System_Int32_array **)v226,
                v88,
                v227,
                v228,
                v229,
                v230,
                v231);
              this = v446;
              v437 = v221;
LABEL_306:
              p_isNpcEditablePos = v435;
              goto LABEL_242;
            }
LABEL_260:
            v203 = v158 + 1;
            v222 = (unsigned int *)*p_memberList;
          }
          v248 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      v87,
                                                      v88,
                                                      v218,
                                                      v219);
          PartyOrganizationListViewItem___ctor_32311272(v248, v158, 0, setupInfo, questRestrictionInfoa, 0, v177, 0LL);
          if ( !v222 )
            goto LABEL_465;
          p_isNpcEditablePos = v435;
          if ( v248 )
          {
            IsUseOldMaster = sub_B170BC(v248, *(_QWORD *)(*(_QWORD *)v222 + 64LL));
            if ( !IsUseOldMaster )
              goto LABEL_473;
          }
          if ( v158 >= v222[6] )
            goto LABEL_472;
          *(_QWORD *)((char *)v222 + j) = v248;
          sub_B16F98(
            (BattleServantConfConponent_o *)((char *)v222 + j),
            (System_Int32_array **)v248,
            v88,
            v249,
            v250,
            v251,
            v252,
            v253);
          this = v446;
        }
        else
        {
          if ( !v455 )
            goto LABEL_465;
          if ( v158 >= v455->max_length )
            goto LABEL_472;
          p_isNpcEditablePos = v181;
          if ( *(Il2CppClass **)((char *)&v455->obj.klass + j) )
          {
            v435 = v181;
            IsUseOldMaster = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v452,
                               (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
            v203 = v158 + 1;
            if ( (int)IsUseOldMaster < 1 )
            {
LABEL_231:
              v237 = (unsigned int *)*p_memberList;
              v238 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                          PartyOrganizationListViewItem_TypeInfo,
                                                          v87,
                                                          v88,
                                                          v232,
                                                          v233);
              PartyOrganizationListViewItem___ctor_32311272(
                v238,
                v158,
                0,
                setupInfo,
                questRestrictionInfoa,
                1,
                v177,
                0LL);
              if ( !v237 )
                goto LABEL_465;
              if ( v238 )
              {
                IsUseOldMaster = sub_B170BC(v238, *(_QWORD *)(*(_QWORD *)v237 + 64LL));
                if ( !IsUseOldMaster )
                  goto LABEL_473;
              }
              if ( v158 >= v237[6] )
                goto LABEL_472;
              *(_QWORD *)((char *)v237 + j) = v238;
              sub_B16F98(
                (BattleServantConfConponent_o *)((char *)v237 + j),
                (System_Int32_array **)v238,
                v88,
                v239,
                v240,
                v241,
                v242,
                v243);
            }
            else
            {
              if ( !v452 )
                goto LABEL_465;
              v234 = v452;
              v235 = 4LL;
              while ( 1 )
              {
                if ( v234->fields._size <= (unsigned int)(v235 - 4) )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                v236 = (FollowerInfo_o *)*((_QWORD *)&v452->fields._items->obj.klass + v235);
                if ( !v236 )
                  goto LABEL_465;
                if ( v158 >= v455->max_length )
                  goto LABEL_472;
                if ( (Il2CppClass *)v236->fields.npcFollowerSvtId == *(Il2CppClass **)((char *)&v455->obj.klass + j) )
                  break;
                v234 = v452;
                IsUseOldMaster = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)v452,
                                   (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
                if ( (int)++v235 - 4 >= (int)IsUseOldMaster )
                  goto LABEL_231;
              }
              if ( v452->fields._size <= (unsigned int)(v235 - 4) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v266 = (unsigned int *)*p_memberList;
              v285 = v236->fields.userSvtLeaderHash;
              if ( !v285 )
                goto LABEL_465;
              if ( !v285->max_length )
                goto LABEL_472;
              v286 = v285->m_Items[0];
              if ( !v286 )
                goto LABEL_465;
              v287 = v286->fields.classId;
              v288 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                          PartyOrganizationListViewItem_TypeInfo,
                                                          v87,
                                                          v88,
                                                          v232,
                                                          v233);
              PartyOrganizationListViewItem___ctor_32282080(
                v288,
                v158,
                v236,
                v287,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                1,
                klass_high,
                v177,
                0LL);
              if ( !v266 )
                goto LABEL_465;
              if ( v288 )
              {
                IsUseOldMaster = sub_B170BC(v288, *(_QWORD *)(*(_QWORD *)v266 + 64LL));
                if ( !IsUseOldMaster )
                  goto LABEL_473;
              }
              if ( v158 >= v266[6] )
                goto LABEL_472;
              *(_QWORD *)((char *)v266 + j) = v288;
              sub_B16F98(
                (BattleServantConfConponent_o *)((char *)v266 + j),
                (System_Int32_array **)v288,
                v88,
                v289,
                v290,
                v291,
                v292,
                v293);
            }
            goto LABEL_306;
          }
          if ( (v442 & 1) != 0 )
          {
            v254 = userServantList;
            if ( !userServantList )
              goto LABEL_465;
            v203 = v158 + 1;
            if ( v158 >= userServantList->max_length )
              goto LABEL_472;
            v255 = *(__int64 *)((char *)&userServantList->obj.klass + j);
            if ( v255 )
            {
              v256 = *(_QWORD *)(v255 + 80);
              v257 = *(_QWORD *)(v255 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v471.fields.currentCryptoKey = v256;
              *(_QWORD *)&v471.fields.fakeValue = v257;
              IsUseOldMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v471, 0LL);
              if ( v158 >= userServantList->max_length )
                goto LABEL_472;
              v258 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + j);
              if ( !v258 )
                goto LABEL_465;
              v259 = IsUseOldMaster;
              IsUseOldMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v258[6], 0LL);
              if ( v158 >= userServantList->max_length )
                goto LABEL_472;
              v260 = IsUseOldMaster;
              v261 = *(UserServantEntity_o **)((char *)&userServantList->obj.klass + j);
              if ( !v261 )
                goto LABEL_465;
              DispLimitCount = UserServantEntity__getDispLimitCount(v261, 0, 0LL);
              IsUseOldMaster = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                 questRestrictionInfoa,
                                 v259,
                                 v260,
                                 DispLimitCount,
                                 v177,
                                 0,
                                 0LL);
              v254 = userServantList;
              if ( (IsUseOldMaster & 1) != 0 )
              {
                if ( v158 >= userServantList->max_length )
                  goto LABEL_472;
                *(Il2CppClass **)((char *)&userServantList->obj.klass + j) = 0LL;
                sub_B16F98(
                  (BattleServantConfConponent_o *)((char *)userServantList + j),
                  0LL,
                  v88,
                  v185,
                  v186,
                  v263,
                  v264,
                  v265);
              }
            }
          }
          else
          {
            v254 = userServantList;
            v203 = v158 + 1;
            if ( !userServantList )
              goto LABEL_465;
          }
          if ( v158 >= v254->max_length )
            goto LABEL_472;
          v267 = *(UserServantEntity_o **)((char *)&v254->obj.klass + j);
          v268 = (unsigned int *)*p_memberList;
          if ( v267 )
          {
            equipIdLista = UserEventDeckEntity__GetEquipList(deck, v158, 0LL);
            v273 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                        PartyOrganizationListViewItem_TypeInfo,
                                                        v269,
                                                        v270,
                                                        v271,
                                                        v272);
            PartyOrganizationListViewItem___ctor_32304716(
              v273,
              v158,
              v267,
              equipIdLista,
              setupInfo,
              questRestrictionInfoa,
              0LL,
              v177,
              0LL);
            if ( !v268 )
              goto LABEL_465;
            if ( v273 )
            {
              IsUseOldMaster = sub_B170BC(v273, *(_QWORD *)(*(_QWORD *)v268 + 64LL));
              if ( !IsUseOldMaster )
                goto LABEL_473;
            }
            if ( v158 >= v268[6] )
              goto LABEL_472;
            *(_QWORD *)((char *)v268 + j) = v273;
            sub_B16F98(
              (BattleServantConfConponent_o *)((char *)v268 + j),
              (System_Int32_array **)v273,
              v88,
              v274,
              v275,
              v276,
              v277,
              v278);
          }
          else
          {
            v279 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                        PartyOrganizationListViewItem_TypeInfo,
                                                        v87,
                                                        v88,
                                                        v185,
                                                        v186);
            PartyOrganizationListViewItem___ctor_32311272(v279, v158, 0, setupInfo, questRestrictionInfoa, 1, v177, 0LL);
            if ( !v268 )
              goto LABEL_465;
            if ( v279 )
            {
              IsUseOldMaster = sub_B170BC(v279, *(_QWORD *)(*(_QWORD *)v268 + 64LL));
              if ( !IsUseOldMaster )
                goto LABEL_473;
            }
            if ( v158 >= v268[6] )
              goto LABEL_472;
            *(_QWORD *)((char *)v268 + j) = v279;
            sub_B16F98(
              (BattleServantConfConponent_o *)((char *)v268 + j),
              (System_Int32_array **)v279,
              v88,
              v280,
              v281,
              v282,
              v283,
              v284);
          }
        }
      }
      else
      {
        v187 = (FollowerInfo_o *)IsUseOldMaster;
        IsNpc = FollowerInfo__get_IsNpc((FollowerInfo_o *)IsUseOldMaster, 0LL);
        v189 = klass;
        if ( IsNpc )
          v189 = 0;
        v436 = v189;
        v190 = FollowerInfo__get_IsNpc(v187, 0LL);
        v195 = (unsigned int *)*p_memberList;
        if ( v190 )
          v196 = 0;
        else
          v196 = klass_high;
        v197 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                    PartyOrganizationListViewItem_TypeInfo,
                                                    v191,
                                                    v192,
                                                    v193,
                                                    v194);
        PartyOrganizationListViewItem___ctor_32282080(
          v197,
          v158,
          v187,
          v436,
          setupInfo,
          questRestrictionInfoa,
          friendPointCampaignEntityList,
          0,
          v196,
          v177,
          0LL);
        if ( !v195 )
          goto LABEL_465;
        p_isNpcEditablePos = v181;
        if ( v197 )
        {
          IsUseOldMaster = sub_B170BC(v197, *(_QWORD *)(*(_QWORD *)v195 + 64LL));
          if ( !IsUseOldMaster )
            goto LABEL_473;
        }
        if ( v158 >= v195[6] )
          goto LABEL_472;
        v203 = v158 + 1;
        *(_QWORD *)((char *)v195 + j) = v197;
        sub_B16F98(
          (BattleServantConfConponent_o *)((char *)v195 + j),
          (System_Int32_array **)v197,
          v88,
          v198,
          v199,
          v200,
          v201,
          v202);
      }
LABEL_242:
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_465;
      if ( v158 >= memberList->max_length )
        goto LABEL_472;
      v245 = *(PartyOrganizationListViewItem_o **)((char *)&memberList->obj.klass + j);
      if ( !v245 )
        goto LABEL_465;
      cost = this->fields.cost;
      v158 = v203;
      questRestrictionInfo = questRestrictionInfoa;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v245, 0LL) + cost;
    }
  }
  equipIdList = questRestrictionInfo->fields.myServantNumMax
              + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( v142 )
  {
    p_max_length = &userServantList->max_length;
    goto LABEL_327;
  }
  if ( !userServantList )
    goto LABEL_465;
  p_max_length = &userServantList->max_length;
  if ( (int)userServantList->max_length >= 1 )
  {
    v443 = v18;
    v294 = 0LL;
    v295 = 0;
    v296 = 0LL;
    m_Items = userServantList->m_Items;
    while ( 1 )
    {
      v298 = (PartyListViewItem___c__DisplayClass19_2_o *)sub_B170CC(
                                                            PartyListViewItem___c__DisplayClass19_2_TypeInfo,
                                                            v87,
                                                            v88,
                                                            v156,
                                                            v157);
      PartyListViewItem___c__DisplayClass19_2___ctor(v298, 0LL);
      if ( !v298 )
        goto LABEL_465;
      v301 = v296 + 1;
      v298->fields.chkIdx = v296 + 1;
      if ( v296 >= *p_max_length )
        goto LABEL_472;
      if ( m_Items[v296] )
        ++v295;
      v302 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                  System_Func_FollowerInfo__bool__TypeInfo,
                                                                                  v87,
                                                                                  v88,
                                                                                  v299,
                                                                                  v300);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v302,
        (Il2CppObject *)v298,
        Method_PartyListViewItem___c__DisplayClass19_2___ctor_b__2__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_FollowerInfo__bool___ctor__);
      IsUseOldMaster = (__int64)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                                  (System_Func_TSource__bool__o *)v302,
                                  (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v306 = *p_max_length;
      if ( v296 >= v306 )
        goto LABEL_472;
      if ( !m_Items[v296] )
        goto LABEL_325;
      if ( v298->fields.chkIdx > DeckMemberMax )
        goto LABEL_323;
      IsUseOldMaster = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)IsUseOldMaster,
                         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v295 > equipIdList || (IsUseOldMaster & 1) != 0 )
        break;
LABEL_325:
      ++v294;
      ++v296;
      if ( v301 >= (int)*p_max_length )
      {
        v18 = v443;
        goto LABEL_327;
      }
    }
    v306 = *p_max_length;
LABEL_323:
    if ( v296 >= v306 )
      goto LABEL_472;
    m_Items[v296] = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&m_Items[v294], 0LL, v88, v156, v157, v303, v304, v305);
    goto LABEL_325;
  }
LABEL_327:
  v307 = 0LL;
  v444 = 0;
  v308 = DeckMemberMax;
LABEL_444:
  v414 = 8 * v307 + 32;
  for ( k = v307; ; ++k )
  {
    v423 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v423 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v423->static_fields->DeckMemberMax )
      break;
    v424 = (PartyListViewItem___c__DisplayClass19_3_o *)sub_B170CC(
                                                          PartyListViewItem___c__DisplayClass19_3_TypeInfo,
                                                          v87,
                                                          v88,
                                                          v156,
                                                          v157);
    PartyListViewItem___c__DisplayClass19_3___ctor(v424, 0LL);
    if ( v462 )
    {
      if ( !v457 )
        goto LABEL_465;
      v427 = PartyListViewItem__GetMember(v457, k, (const MethodInfo *)v88);
      if ( !v427 )
        goto LABEL_465;
      v428 = &v427->fields._InitPos_k__BackingField;
    }
    else
    {
      v429 = deck->fields.deckInfo;
      if ( !v429 )
        goto LABEL_465;
      v430 = v429->fields.svts;
      if ( !v430 )
        goto LABEL_465;
      if ( k >= v430->max_length )
        goto LABEL_472;
      v431 = *(__int64 *)((char *)&v430->obj.klass + v414);
      if ( !v431 )
        goto LABEL_465;
      v428 = (int32_t *)(v431 + 60);
    }
    v432 = *v428;
    if ( (__int64)k < v308 )
    {
      if ( !v424 )
        goto LABEL_465;
      v307 = k + 1;
      v424->fields.chkIdx = k + 1;
      v467 = 0LL;
      v466 = 0;
      IsUseOldMaster = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(questRestrictionInfo, v432, 0LL);
      v310 = IsUseOldMaster;
      if ( (IsUseOldMaster & 1) == 0 )
        goto LABEL_336;
      v311 = deck->fields.deckInfo;
      if ( !v311 )
        goto LABEL_465;
      v312 = v311->fields.svts;
      if ( !v312 )
        goto LABEL_465;
      if ( k >= v312->max_length )
        goto LABEL_472;
      v313 = *(__int64 *)((char *)&v312->obj.klass + v414);
      if ( !v313 )
        goto LABEL_465;
      v314 = *(_QWORD *)(v313 + 48);
      if ( v314 >= 1 )
      {
        if ( v424->fields.chkIdx == qrs )
        {
          v438 = 0;
          v460 = 1;
        }
        else
        {
          v460 = PartyListViewItem__SetNpcFollowerInfo(v446, &v467, &v466, npcFollowerInfoList, v314, v432, v309);
          v438 = 0;
        }
        goto LABEL_341;
      }
LABEL_336:
      if ( followerInfo && !questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v460 = 0;
        v438 = v424->fields.chkIdx == FollowerIndex;
      }
      else
      {
        v438 = 0;
        v460 = 0;
      }
LABEL_341:
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v315 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v315 )
        goto LABEL_465;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo(v315, v432, 0LL);
      if ( NpcFollowerInfo && ((v310 ^ 1) & 1) == 0 )
      {
        v321 = NpcFollowerInfo;
        v322 = v18;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v323 = 0;
        else
          v323 = klass;
        v324 = FollowerInfo__get_IsNpc(v321, 0LL);
        v329 = (unsigned int *)*p_memberList;
        if ( v324 )
          v330 = 0;
        else
          v330 = klass_high;
        v331 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                    PartyOrganizationListViewItem_TypeInfo,
                                                    v325,
                                                    v326,
                                                    v327,
                                                    v328);
        PartyOrganizationListViewItem___ctor_32282080(
          v331,
          k,
          v321,
          v323,
          setupInfo,
          questRestrictionInfoa,
          friendPointCampaignEntityList,
          0,
          v330,
          v432,
          0LL);
        if ( !v329 )
          goto LABEL_465;
        if ( v331 )
        {
          IsUseOldMaster = sub_B170BC(v331, *(_QWORD *)(*(_QWORD *)v329 + 64LL));
          if ( !IsUseOldMaster )
            goto LABEL_473;
        }
        if ( k >= v329[6] )
          goto LABEL_472;
        v18 = v322;
        *(_QWORD *)((char *)v329 + v414) = v331;
        sub_B16F98(
          (BattleServantConfConponent_o *)((char *)v329 + v414),
          (System_Int32_array **)v331,
          v88,
          v332,
          v333,
          v334,
          v335,
          v336);
        questRestrictionInfo = questRestrictionInfoa;
        v337 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_465;
        v307 = k + 1;
        if ( k >= v337->max_length )
          goto LABEL_472;
        v338 = deck->fields.deckInfo;
        if ( !v338 )
          goto LABEL_465;
        v339 = v338->fields.svts;
        if ( !v339 )
          goto LABEL_465;
        if ( k >= v339->max_length )
          goto LABEL_472;
        v340 = *(__int64 *)((char *)&v339->obj.klass + v414);
        if ( !v340 )
          goto LABEL_465;
        v341 = *(__int64 *)((char *)&v337->obj.klass + v414);
        if ( !v341 )
          goto LABEL_465;
        *(_DWORD *)(v341 + 332) = *(_DWORD *)(v340 + 60);
        ++v444;
        goto LABEL_444;
      }
      if ( v460 || v424->fields.chkIdx == FollowerIndex )
      {
        v342 = v467;
        v343 = (unsigned int *)*p_memberList;
        if ( v467 )
        {
          v344 = v466;
          initPos = v432;
          v345 = (unsigned int *)*p_memberList;
          v346 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      v317,
                                                      v318,
                                                      v319,
                                                      v320);
          PartyOrganizationListViewItem___ctor_32282080(
            v346,
            k,
            v342,
            v344,
            setupInfo,
            questRestrictionInfo,
            0LL,
            !v438,
            klass_high,
            initPos,
            0LL);
          if ( !v345 )
            goto LABEL_479;
          if ( v346 )
          {
            IsRestrictionServantIndividuality = sub_B170BC(v346, *(_QWORD *)(*(_QWORD *)v345 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_477;
          }
          if ( k >= v345[6] )
            goto LABEL_478;
          v353 = (BattleServantConfConponent_o *)((char *)v345 + v414);
        }
        else
        {
          v354 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      v317,
                                                      v318,
                                                      v319,
                                                      v320);
          v346 = v354;
          if ( followerInfo )
            PartyOrganizationListViewItem___ctor_32282080(
              v354,
              k,
              followerInfo,
              klass,
              setupInfo,
              questRestrictionInfo,
              0LL,
              !v438,
              klass_high,
              v432,
              0LL);
          else
            PartyOrganizationListViewItem___ctor_32311272(v354, k, 1, setupInfo, questRestrictionInfo, 1, v432, 0LL);
          if ( !v343 )
            goto LABEL_479;
          if ( v346 )
          {
            IsRestrictionServantIndividuality = sub_B170BC(v346, *(_QWORD *)(*(_QWORD *)v343 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_477;
          }
          if ( k >= v343[6] )
            goto LABEL_478;
          v353 = (BattleServantConfConponent_o *)((char *)v343 + v414);
        }
        v353->klass = (BattleServantConfConponent_c *)v346;
        sub_B16F98(v353, (System_Int32_array **)v346, v88, v348, v349, v350, v351, v352);
        v375 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_479;
        if ( k >= v375->max_length )
        {
LABEL_478:
          sub_B17100(IsRestrictionServantIndividuality, v87, v88);
          sub_B170A0();
        }
        v376 = deck->fields.deckInfo;
        if ( !v376 )
          goto LABEL_479;
        v377 = v376->fields.svts;
        if ( !v377 )
          goto LABEL_479;
        if ( k >= v377->max_length )
          goto LABEL_478;
        v378 = *(__int64 *)((char *)&v377->obj.klass + v414);
        if ( !v378 || (v379 = *(__int64 *)((char *)&v375->obj.klass + v414)) == 0 )
LABEL_479:
          sub_B170D4();
        *(_DWORD *)(v379 + 332) = *(_DWORD *)(v378 + 60);
        v444 += v438 || v460;
        goto LABEL_444;
      }
      v355 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                  System_Func_FollowerInfo__bool__TypeInfo,
                                                                                  v317,
                                                                                  v318,
                                                                                  v319,
                                                                                  v320);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v355,
        (Il2CppObject *)v424,
        Method_PartyListViewItem___c__DisplayClass19_3___ctor_b__3__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_FollowerInfo__bool___ctor__);
      v356 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v452,
               (System_Func_TSource__bool__o *)v355,
               (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v357 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B170BC(v356, FollowerInfo___TypeInfo);
      if ( !v357 )
        v357 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                      v356,
                                                                      (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      IsRestrictionServantIndividuality = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                            v357,
                                            (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v444 < equipIdList && (IsRestrictionServantIndividuality & 1) == 0 )
      {
        if ( (v310 & 1) != 0 )
        {
          if ( !userServantList )
            goto LABEL_479;
          v360 = p_max_length;
          if ( k >= *p_max_length )
            goto LABEL_478;
          v361 = *(__int64 *)((char *)&userServantList->obj.klass + v414);
          if ( v361 )
          {
            v363 = *(_QWORD *)(v361 + 80);
            v362 = *(_QWORD *)(v361 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v472.fields.currentCryptoKey = v363;
            *(_QWORD *)&v472.fields.fakeValue = v362;
            IsRestrictionServantIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                  v472,
                                                  0LL);
            if ( k >= *p_max_length )
              goto LABEL_478;
            v364 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + v414);
            if ( !v364 )
              goto LABEL_479;
            v365 = IsRestrictionServantIndividuality;
            IsRestrictionServantIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                  v364[6],
                                                  0LL);
            if ( k >= *p_max_length )
              goto LABEL_478;
            v366 = IsRestrictionServantIndividuality;
            v367 = *(UserServantEntity_o **)((char *)&userServantList->obj.klass + v414);
            if ( !v367 )
              goto LABEL_479;
            v368 = UserServantEntity__getDispLimitCount(v367, 0, 0LL);
            IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                  questRestrictionInfo,
                                                  v365,
                                                  v366,
                                                  v368,
                                                  v432,
                                                  0,
                                                  0LL);
            v360 = p_max_length;
            if ( (IsRestrictionServantIndividuality & 1) != 0 )
            {
              if ( k >= *p_max_length )
                goto LABEL_478;
              *(Il2CppClass **)((char *)&userServantList->obj.klass + v414) = 0LL;
              sub_B16F98(
                (BattleServantConfConponent_o *)((char *)userServantList + v414),
                0LL,
                v88,
                v358,
                v359,
                v369,
                v370,
                v371);
            }
          }
        }
        else
        {
          v360 = p_max_length;
          if ( !userServantList )
            goto LABEL_479;
        }
        if ( k >= *v360 )
          goto LABEL_478;
        v391 = *(UserServantEntity_o **)((char *)&userServantList->obj.klass + v414);
        v392 = (unsigned int *)*p_memberList;
        if ( v391 )
        {
          EquipList = UserEventDeckEntity__GetEquipList(deck, k, 0LL);
          v398 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      v394,
                                                      v395,
                                                      v396,
                                                      v397);
          PartyOrganizationListViewItem___ctor_32304716(
            v398,
            k,
            v391,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            v432,
            0LL);
          if ( !v392 )
            goto LABEL_479;
        }
        else
        {
          v398 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      v87,
                                                      v88,
                                                      v358,
                                                      v359);
          PartyOrganizationListViewItem___ctor_32311272(v398, k, 0, setupInfo, questRestrictionInfo, 1, v432, 0LL);
          if ( !v392 )
            goto LABEL_479;
        }
        if ( v398 )
        {
          IsRestrictionServantIndividuality = sub_B170BC(v398, *(_QWORD *)(*(_QWORD *)v392 + 64LL));
          if ( !IsRestrictionServantIndividuality )
          {
LABEL_477:
            sub_B170F4(IsRestrictionServantIndividuality);
            sub_B170A0();
          }
        }
        if ( k >= v392[6] )
          goto LABEL_478;
        *(_QWORD *)((char *)v392 + v414) = v398;
        sub_B16F98(
          (BattleServantConfConponent_o *)((char *)v392 + v414),
          (System_Int32_array **)v398,
          v88,
          v399,
          v400,
          v401,
          v402,
          v403);
        ++v444;
        v307 = k + 1;
        goto LABEL_440;
      }
      IsRestrictionServantIndividuality = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                            v357,
                                            (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( (IsRestrictionServantIndividuality & 1) != 0 )
      {
        IsRestrictionServantIndividuality = (__int64)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                                       v357,
                                                       0,
                                                       (const MethodInfo_18D5DD4 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        v374 = (FollowerInfo_o *)IsRestrictionServantIndividuality;
        goto LABEL_414;
      }
      if ( !v452 )
        goto LABEL_479;
      v380 = v452->fields._size;
      v381 = k - v444;
      if ( v380 <= (int)k - v444 )
      {
        v307 = k + 1;
        v404 = (unsigned int *)*p_memberList;
      }
      else
      {
        if ( v380 <= v381 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v374 = (FollowerInfo_o *)v452->fields._items->m_Items[v381];
        v307 = k + 1;
LABEL_414:
        v382 = (unsigned int *)*p_memberList;
        if ( v374 )
        {
          v383 = v374->fields.userSvtLeaderHash;
          if ( !v383 )
            goto LABEL_479;
          if ( !v383->max_length )
            goto LABEL_478;
          v384 = v383->m_Items[0];
          if ( !v384 )
            goto LABEL_479;
          v461 = v384->fields.classId;
          v385 = (PartyOrganizationListViewItem_o *)sub_B170CC(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      v87,
                                                      v88,
                                                      v372,
                                                      v373);
          PartyOrganizationListViewItem___ctor_32282080(
            v385,
            k,
            v374,
            v461,
            setupInfo,
            questRestrictionInfo,
            0LL,
            1,
            klass_high,
            v432,
            0LL);
          if ( !v382 )
            goto LABEL_479;
          if ( v385 )
          {
            IsRestrictionServantIndividuality = sub_B170BC(v385, *(_QWORD *)(*(_QWORD *)v382 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_477;
          }
          if ( k >= v382[6] )
            goto LABEL_478;
          *(_QWORD *)((char *)v382 + v414) = v385;
          sub_B16F98(
            (BattleServantConfConponent_o *)((char *)v382 + v414),
            (System_Int32_array **)v385,
            v88,
            v386,
            v387,
            v388,
            v389,
            v390);
LABEL_440:
          v411 = v446->fields.memberList;
          if ( !v411 )
            goto LABEL_479;
          if ( k >= v411->max_length )
            goto LABEL_478;
          v412 = *(PartyOrganizationListViewItem_o **)((char *)&v411->obj.klass + v414);
          if ( !v412 )
            goto LABEL_479;
          v413 = v446->fields.cost;
          v446->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v412, 0LL) + v413;
          goto LABEL_444;
        }
        v404 = (unsigned int *)*p_memberList;
      }
      v405 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v87, v88, v372, v373);
      PartyOrganizationListViewItem___ctor_32311272(v405, k, 0, setupInfo, questRestrictionInfo, 0, v432, 0LL);
      if ( !v404 )
        goto LABEL_479;
      if ( v405 )
      {
        IsRestrictionServantIndividuality = sub_B170BC(v405, *(_QWORD *)(*(_QWORD *)v404 + 64LL));
        if ( !IsRestrictionServantIndividuality )
          goto LABEL_477;
      }
      if ( k >= v404[6] )
        goto LABEL_478;
      *(_QWORD *)((char *)v404 + v414) = v405;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)v404 + v414),
        (System_Int32_array **)v405,
        v88,
        v406,
        v407,
        v408,
        v409,
        v410);
      goto LABEL_440;
    }
    v416 = (unsigned int *)*p_memberList;
    v417 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v87, v88, v425, v426);
    PartyOrganizationListViewItem___ctor_32311272(v417, k, 0, setupInfo, questRestrictionInfo, 1, v432, 0LL);
    if ( !v416 )
      goto LABEL_465;
    if ( v417 )
    {
      IsUseOldMaster = sub_B170BC(v417, *(_QWORD *)(*(_QWORD *)v416 + 64LL));
      if ( !IsUseOldMaster )
        goto LABEL_473;
    }
    if ( k >= v416[6] )
      goto LABEL_472;
    *(_QWORD *)((char *)v416 + v414) = v417;
    sub_B16F98(
      (BattleServantConfConponent_o *)((char *)v416 + v414),
      (System_Int32_array **)v417,
      v88,
      v418,
      v419,
      v420,
      v421,
      v422);
    v414 += 8LL;
  }
  this = v446;
  p_isNpcEditablePos = &questRestrictionInfo->fields.isNpcEditablePos;
LABEL_467:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v87);
  if ( (*p_isNpcEditablePos || !questRestrictionInfo->fields.isNpcOnlyBattle)
    && !PartyListViewItem__GetStartDeckCondition(this, v433) )
  {
    *v18 = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32468168(
        PartyListViewItem_o *this,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x28
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct DeckServant_o *deckInfo; // x8
  __int64 v36; // x2
  UserServantEntity_array *UserServantList; // x23
  BalanceConfig_c *v38; // x8
  struct PartyOrganizationListViewItem_array *v39; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x24
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_int__o *v51; // x27
  ViewWaveEnemyMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 EntityListFromQuestId; // x0
  __int64 v54; // x1
  System_String_array **v55; // x2
  int v56; // w8
  __int64 v57; // x28
  unsigned int v58; // w19
  __int64 v59; // x25
  struct System_Int32_array *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x3
  __int64 v68; // x4
  UserEventDeckEntity_o *v69; // x28
  int32_t v70; // w26
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct DeckServant_o *v72; // x8
  struct DeckServantData_array *svts; // x8
  __int64 v74; // x8
  int32_t v75; // w25
  UserServantEntity_o *v76; // x27
  struct PartyOrganizationListViewItem_array *v77; // x21
  __int128 v78; // q0
  int64_t v79; // x0
  System_Int64_array *EquipList_26566936; // x19
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  PartyOrganizationListViewItem_o *v85; // x28
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  Il2CppClass **v91; // x0
  PartyOrganizationListViewItem_o *v92; // x27
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  Il2CppClass **v98; // x0
  struct PartyOrganizationListViewItem_array *v99; // x8
  PartyOrganizationListViewItem_o *v100; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v102; // x0
  int32_t cost; // w19
  int v104; // [xsp+14h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+50h] [xbp-70h]

  if ( (byte_40FDD83 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_B16FFC(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_B16FFC(&PartyOrganizationListViewItem___TypeInfo, v20);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v21);
    byte_40FDD83 = 1;
  }
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !deck )
    goto LABEL_66;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_66;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, 0LL);
  v38 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  v39 = (struct PartyOrganizationListViewItem_array *)sub_B17014(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v38->static_fields->DeckMemberMax,
                                                        v36);
  this->fields.memberList = v39;
  p_memberList = &this->fields.memberList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.cost = 0;
  v51 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v47,
                                                    v48,
                                                    v49,
                                                    v50);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_66;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_66;
  EntityListFromQuestId = (__int64)ViewWaveEnemyMaster__GetEntityListFromQuestId(
                                     Master_WarQuestSelectionMaster,
                                     (*p_questRestrictionInfo)->fields.questId,
                                     0LL);
  if ( !EntityListFromQuestId )
    goto LABEL_66;
  v56 = *(_DWORD *)(EntityListFromQuestId + 24);
  v57 = EntityListFromQuestId;
  if ( v56 >= 1 )
  {
    v58 = 0;
    while ( 1 )
    {
      if ( v58 >= v56 )
      {
LABEL_67:
        sub_B17100(EntityListFromQuestId, v54, v55);
        sub_B170A0();
      }
      v59 = *(_QWORD *)(v57 + 8LL * (int)v58 + 32);
      if ( !v59 )
        break;
      if ( *(_DWORD *)(v59 + 56) == index + 1 )
      {
        if ( !v51 )
          break;
        EntityListFromQuestId = System_Collections_Generic_List_int___Contains(
                                  v51,
                                  *(_DWORD *)(v59 + 32),
                                  (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (EntityListFromQuestId & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v51,
            *(_DWORD *)(v59 + 32),
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v56 = *(_DWORD *)(v57 + 24);
      if ( (int)++v58 >= v56 )
        goto LABEL_23;
    }
LABEL_66:
    sub_B170D4();
  }
LABEL_23:
  if ( !v51 )
    goto LABEL_66;
  v60 = System_Collections_Generic_List_int___ToArray(
          v51,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v60;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.waveBattleEnemyClassIds,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v69 = deck;
  EntityListFromQuestId = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    EntityListFromQuestId = (__int64)BalanceConfig_TypeInfo;
  }
  v70 = 0;
  v104 = *(_DWORD *)(*(_QWORD *)(EntityListFromQuestId + 184) + 160LL) * index;
  while ( 1 )
  {
    if ( (*(_BYTE *)(EntityListFromQuestId + 307) & 4) != 0 && !*(_DWORD *)(EntityListFromQuestId + 224) )
    {
      j_il2cpp_runtime_class_init_0(EntityListFromQuestId);
      EntityListFromQuestId = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(EntityListFromQuestId + 184);
    if ( v70 >= static_fields->DeckMemberMax )
      break;
    if ( (*(_BYTE *)(EntityListFromQuestId + 307) & 4) != 0 && !*(_DWORD *)(EntityListFromQuestId + 224) )
    {
      j_il2cpp_runtime_class_init_0(EntityListFromQuestId);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    if ( v70 >= static_fields->DeckMainMemberMax )
    {
      v75 = v70 + 1;
      if ( !UserServantList )
        goto LABEL_66;
    }
    else
    {
      v72 = v69->fields.deckInfo;
      if ( !v72 )
        goto LABEL_66;
      svts = v72->fields.svts;
      if ( !svts )
        goto LABEL_66;
      if ( v104 + v70 >= svts->max_length )
        goto LABEL_67;
      v74 = *((_QWORD *)&svts->m_Items[v104] + v70);
      if ( !v74 )
        goto LABEL_66;
      v75 = *(_DWORD *)(v74 + 60);
      if ( !UserServantList )
        goto LABEL_66;
    }
    if ( v70 >= UserServantList->max_length )
      goto LABEL_67;
    v76 = UserServantList->m_Items[v70];
    v77 = *p_memberList;
    if ( v76 )
    {
      v78 = *(_OWORD *)&v76->fields.id.fields.fakeValue;
      *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v76->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v109.fields.fakeValue = v78;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v108 = v109;
      v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v108, 0LL);
      EquipList_26566936 = UserEventDeckEntity__GetEquipList_26566936(v69, v79, 0LL);
      v85 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v81, v82, v83, v84);
      PartyOrganizationListViewItem___ctor_32304716(
        v85,
        v70,
        v76,
        EquipList_26566936,
        setupInfo,
        questRestrictionInfo,
        0LL,
        v75,
        0LL);
      if ( !v77 )
        goto LABEL_66;
      if ( v85 )
      {
        EntityListFromQuestId = sub_B170BC(v85, v77->obj.klass->_1.element_class);
        if ( !EntityListFromQuestId )
          goto LABEL_68;
      }
      if ( v70 >= v77->max_length )
        goto LABEL_67;
      v91 = &v77->obj.klass + v70;
      v91[4] = (Il2CppClass *)v85;
      sub_B16F98((BattleServantConfConponent_o *)(v91 + 4), (System_Int32_array **)v85, v55, v86, v87, v88, v89, v90);
      v69 = deck;
    }
    else
    {
      v92 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v54, v55, v67, v68);
      PartyOrganizationListViewItem___ctor_32311272(v92, v70, 0, setupInfo, questRestrictionInfo, 1, v75, 0LL);
      if ( !v77 )
        goto LABEL_66;
      if ( v92 )
      {
        EntityListFromQuestId = sub_B170BC(v92, v77->obj.klass->_1.element_class);
        if ( !EntityListFromQuestId )
        {
LABEL_68:
          sub_B170F4(EntityListFromQuestId);
          sub_B170A0();
        }
      }
      if ( v70 >= v77->max_length )
        goto LABEL_67;
      v98 = &v77->obj.klass + v70;
      v98[4] = (Il2CppClass *)v92;
      sub_B16F98((BattleServantConfConponent_o *)(v98 + 4), (System_Int32_array **)v92, v55, v93, v94, v95, v96, v97);
    }
    v99 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_66;
    if ( v70 >= v99->max_length )
      goto LABEL_67;
    v100 = v99->m_Items[v70];
    if ( !v100 )
      goto LABEL_66;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v100, this->fields.waveBattleEnemyClassIds, 0LL);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_66;
    if ( v70 >= memberList->max_length )
      goto LABEL_67;
    v102 = memberList->m_Items[v70];
    if ( !v102 )
      goto LABEL_66;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v102, 0LL) + cost;
    ++v70;
    EntityListFromQuestId = (__int64)BalanceConfig_TypeInfo;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyListViewItem__CheckDeckConditionServantNum(
        PartyListViewItem_o *this,
        int32_t deckMemberCount,
        int32_t mainMemberCount,
        bool isFollowerMainMember,
        int32_t mainFollowerNum,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t v12; // w8
  int32_t v13; // w21
  int32_t servantNumMax; // w22
  int32_t ServantNumRangeType; // w0
  BalanceConfig_c *v17; // x0
  BalanceConfig_c *v18; // x0
  int32_t DeckMainMemberMax; // w8
  struct QuestRestrictionInfo_o *v20; // x9
  int32_t servantNumMin; // w20
  int32_t v22; // w8

  if ( (byte_40FDD95 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_40FDD95 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_31;
  if ( isFollowerMainMember )
    v12 = mainFollowerNum;
  else
    v12 = 0;
  v13 = v12 + mainMemberCount;
  if ( !(v12 + mainMemberCount) )
    return 0;
  servantNumMax = questRestrictionInfo->fields.servantNumMax;
  ServantNumRangeType = QuestRestrictionInfo__GetServantNumRangeType(questRestrictionInfo, 0LL);
  if ( ServantNumRangeType != 5 )
  {
    if ( ServantNumRangeType != 4 )
    {
      if ( ServantNumRangeType == 1 )
        return servantNumMax == deckMemberCount;
      return 0;
    }
    if ( servantNumMax >= deckMemberCount )
    {
      v17 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v17 = BalanceConfig_TypeInfo;
      }
      return v13 >= v17->static_fields->DeckMainMemberMax;
    }
    return 0;
  }
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  DeckMainMemberMax = v18->static_fields->DeckMainMemberMax;
  if ( deckMemberCount - v13 >= 1 && v13 < DeckMainMemberMax )
    return 0;
  v20 = this->fields.questRestrictionInfo;
  if ( !v20 )
LABEL_31:
    sub_B170D4();
  servantNumMin = v20->fields.servantNumMin;
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  if ( servantNumMin <= DeckMainMemberMax )
    v22 = v13;
  else
    v22 = deckMemberCount;
  return servantNumMax >= deckMemberCount && servantNumMin <= v22;
}


void __fastcall PartyListViewItem__CheckRestriction(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w20
  int v7; // w23
  int v8; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v10; // x0
  BalanceConfig_c *v11; // x0
  struct PartyOrganizationListViewItem_array *v12; // x8
  PartyOrganizationListViewItem_o *v13; // x8
  struct PartyOrganizationListViewItem_array *v14; // x8
  PartyOrganizationListViewItem_o *v15; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  bool IsUseOldMaster; // w0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v19; // w21
  char i; // w25
  struct PartyOrganizationListViewItem_array *v21; // x8
  PartyOrganizationListViewItem_o *v22; // x8
  struct PartyOrganizationListViewItem_array *v23; // x20
  int max_length; // w8
  unsigned int v25; // w21
  PartyOrganizationListViewItem_o *v26; // x0
  int32_t FixedMyServantPositionCount; // w0
  int v28; // w21
  int32_t FixedPositionCount; // w20
  int v30; // w27
  char v31; // w25
  int v32; // w26
  struct PartyOrganizationListViewItem_array *v33; // x8
  PartyOrganizationListViewItem_o *v34; // x8
  _BOOL4 isRestrictionNeedStarting; // w10
  int isRestrictionMyServantPos; // w9
  int isRestrictionServantPos; // w8
  bool v38; // zf
  struct PartyOrganizationListViewItem_array *v39; // x21
  int v40; // w8
  unsigned int v41; // w27
  PartyOrganizationListViewItem_o *v42; // x0
  int j; // w21
  struct PartyOrganizationListViewItem_array *v44; // x8
  PartyOrganizationListViewItem_o *v45; // x0
  struct PartyOrganizationListViewItem_array *v46; // x20
  int v47; // w8
  unsigned int v48; // w21
  PartyOrganizationListViewItem_o *v49; // x0
  struct QuestRestrictionInfo_o *v50; // x8
  clsQuestCheck_o *v51; // x0
  _QWORD *monitor; // x20
  clsQuestCheck_o *v53; // x0
  __int64 qrs_low; // x21
  __int64 v55; // x25
  __int64 v56; // x8
  __int64 v57; // x8
  struct QuestRestrictionInfo_o *v58; // x8
  il2cpp_array_size_t k; // w20
  struct PartyOrganizationListViewItem_array *v60; // x8
  PartyOrganizationListViewItem_o *v61; // x8

  if ( (byte_40FDD8A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5);
    byte_40FDD8A = 1;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v11 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    if ( v6 >= v11->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_115;
    if ( v6 >= memberList->max_length )
      goto LABEL_116;
    v10 = memberList->m_Items[v6];
    if ( !v10 )
      goto LABEL_115;
    PartyOrganizationListViewItem__CheckRestriction(v10, this, v6, 0LL);
    v12 = this->fields.memberList;
    if ( !v12 )
      goto LABEL_115;
    if ( v6 >= v12->max_length )
      goto LABEL_116;
    v13 = v12->m_Items[v6];
    if ( !v13 )
      goto LABEL_115;
    v13->fields._IsNotSupportSingle_k__BackingField = 0;
    v14 = this->fields.memberList;
    if ( !v14 )
      goto LABEL_115;
    if ( v6 >= v14->max_length )
      goto LABEL_116;
    v15 = v14->m_Items[v6];
    if ( !v15 )
      goto LABEL_115;
    ++v6;
    v7 += v15->fields.isFollower;
    if ( v15->fields.userServantEntity )
      ++v8;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_115;
    if ( IsUseOldMaster )
    {
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(
                                    this->fields.questRestrictionInfo,
                                    0LL);
      v11 = BalanceConfig_TypeInfo;
      v19 = 0;
      for ( i = 0; ; i |= v22->fields.isFixedSupportPositionRestriction )
      {
        if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = BalanceConfig_TypeInfo;
        }
        if ( (signed int)v19 >= v11->static_fields->DeckMemberMax )
          break;
        v21 = this->fields.memberList;
        if ( !v21 )
          goto LABEL_115;
        if ( v19 >= v21->max_length )
          goto LABEL_116;
        v22 = v21->m_Items[v19];
        if ( !v22 )
          goto LABEL_115;
        ++v19;
        FixedServantPositionCount -= v22->fields.isFixedServantPositionAgreement;
      }
      if ( !(i & 1 | (FixedServantPositionCount > 0)) )
      {
        v23 = this->fields.memberList;
        if ( !v23 )
          goto LABEL_115;
        max_length = v23->max_length;
        if ( max_length >= 1 )
        {
          v25 = 0;
          while ( v25 < max_length )
          {
            v26 = v23->m_Items[v25];
            if ( !v26 )
              goto LABEL_115;
            PartyOrganizationListViewItem__ResetPositionRestriction(v26, 0LL);
            max_length = v23->max_length;
            if ( (int)++v25 >= max_length )
              goto LABEL_80;
          }
          goto LABEL_116;
        }
      }
      goto LABEL_80;
    }
    FixedMyServantPositionCount = QuestRestrictionInfo__GetFixedMyServantPositionCount(
                                    this->fields.questRestrictionInfo,
                                    0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_115;
    v28 = FixedMyServantPositionCount;
    FixedPositionCount = QuestRestrictionInfo__GetFixedPositionCount(this->fields.questRestrictionInfo, 0LL);
    v11 = BalanceConfig_TypeInfo;
    v30 = 0;
    v31 = 0;
    v32 = -1;
    while ( 1 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BalanceConfig_TypeInfo;
      }
      if ( v30 >= v11->static_fields->DeckMemberMax )
        break;
      v33 = this->fields.memberList;
      if ( !v33 )
        goto LABEL_115;
      if ( v30 >= v33->max_length )
        goto LABEL_116;
      v34 = v33->m_Items[v30];
      if ( !v34 )
        goto LABEL_115;
      v31 |= v34->fields.isFixedSupportPositionRestriction;
      if ( v34->fields.isFixedServantPositionAgreement )
      {
        isRestrictionNeedStarting = v34->fields.isRestrictionNeedStarting;
        isRestrictionMyServantPos = v34->fields.isRestrictionMyServantPos;
        isRestrictionServantPos = v34->fields.isRestrictionServantPos;
        v38 = isRestrictionNeedStarting && v32 == -1;
        v28 -= isRestrictionMyServantPos;
        if ( v38 )
          v32 = v30;
        FixedPositionCount -= isRestrictionServantPos;
      }
      ++v30;
    }
    if ( v28 > 0 )
      goto LABEL_63;
    v39 = this->fields.memberList;
    if ( !v39 )
      goto LABEL_115;
    v40 = v39->max_length;
    if ( v40 < 1 )
    {
LABEL_63:
      if ( !((v32 < 0) | v31 & 1) )
      {
        for ( j = v32 + 1; ; ++j )
        {
          v11 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v11 = BalanceConfig_TypeInfo;
          }
          if ( j >= v11->static_fields->DeckMemberMax )
            break;
          v44 = this->fields.memberList;
          if ( !v44 )
            goto LABEL_115;
          if ( j >= v44->max_length )
            goto LABEL_116;
          v45 = v44->m_Items[j];
          if ( !v45 )
            goto LABEL_115;
          PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(v45, 0LL);
        }
      }
      if ( (FixedPositionCount > 0) | v31 & 1 )
        goto LABEL_80;
      v46 = this->fields.memberList;
      if ( !v46 )
        goto LABEL_115;
      v47 = v46->max_length;
      if ( v47 < 1 )
      {
LABEL_80:
        v50 = this->fields.questRestrictionInfo;
        if ( !v50 || v50->fields.servantNumMin != 1 )
          return;
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        v51 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( v51 )
        {
          monitor = v51[2].monitor;
          v53 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( v53 )
          {
            if ( monitor )
            {
              qrs_low = LODWORD(v53[1].fields.qrs);
              if ( (int)qrs_low >= 1 )
              {
                v11 = BalanceConfig_TypeInfo;
                v55 = 0LL;
                v8 = 0;
                while ( 1 )
                {
                  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v11);
                    v11 = BalanceConfig_TypeInfo;
                  }
                  if ( v55 >= v11->static_fields->DeckMemberMax )
                    break;
                  if ( qrs_low != ++v55 )
                  {
                    v56 = monitor[15];
                    if ( !v56 )
                      goto LABEL_115;
                    if ( v55 - 1 >= (unsigned __int64)*(unsigned int *)(v56 + 24) )
                      goto LABEL_116;
                    v57 = *(_QWORD *)(v56 + 8 * v55 + 24);
                    if ( !v57 )
                      goto LABEL_115;
                    if ( *(_QWORD *)(v57 + 112) )
                      ++v8;
                  }
                }
              }
            }
            v58 = this->fields.questRestrictionInfo;
            if ( v58 )
            {
              if ( !v8 && v7 == 1 && v58->fields.isNotSingleSupportOnly )
              {
                v11 = BalanceConfig_TypeInfo;
                for ( k = 0; ; ++k )
                {
                  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v11);
                    v11 = BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)k >= v11->static_fields->DeckMemberMax )
                    break;
                  v60 = this->fields.memberList;
                  if ( !v60 )
                    goto LABEL_115;
                  if ( k >= v60->max_length )
                    goto LABEL_116;
                  v61 = v60->m_Items[k];
                  if ( !v61 )
                    goto LABEL_115;
                  if ( v61->fields.isFollower )
                  {
                    v61->fields._IsNotSupportSingle_k__BackingField = 1;
                    return;
                  }
                }
              }
              return;
            }
          }
        }
LABEL_115:
        sub_B170D4();
      }
      v48 = 0;
      while ( v48 < v47 )
      {
        v49 = v46->m_Items[v48];
        if ( !v49 )
          goto LABEL_115;
        PartyOrganizationListViewItem__ResetPositionRestrictionServant(v49, 0LL);
        v47 = v46->max_length;
        if ( (int)++v48 >= v47 )
          goto LABEL_80;
      }
    }
    else
    {
      v41 = 0;
      while ( v41 < v40 )
      {
        v42 = v39->m_Items[v41];
        if ( !v42 )
          goto LABEL_115;
        PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(v42, 0LL);
        v40 = v39->max_length;
        if ( (int)++v41 >= v40 )
          goto LABEL_63;
      }
    }
LABEL_116:
    sub_B17100(v11, method, v2);
    sub_B170A0();
  }
}


void __fastcall PartyListViewItem__ClearDeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, method);
  this->fields.deckName = DefaultDeckName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.deckName,
    (System_Int32_array **)DefaultDeckName,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t i; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v6; // x0
  int32_t cost; // w22
  BalanceConfig_c *v8; // x0

  if ( (byte_40FDD8F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FDD8F = 1;
  }
  for ( i = 0; ; ++i )
  {
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v8->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( i >= memberList->max_length )
    {
      sub_B17100(v8, method, v2);
      sub_B170A0();
    }
    v6 = memberList->m_Items[i];
    if ( !v6 )
LABEL_15:
      sub_B170D4();
    if ( !v6->fields.isFollower )
    {
      cost = this->fields.cost;
      this->fields.cost = cost - PartyOrganizationListViewItem__ClearEquip(v6, 0LL);
    }
  }
  PartyListViewItem__CheckRestriction(this, method);
}


void __fastcall PartyListViewItem__ClearFollower(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t i; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v6; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_40FDD90 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FDD90 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v7->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_13;
    if ( i >= memberList->max_length )
    {
      sub_B17100(v7, method, v2);
      sub_B170A0();
    }
    v6 = memberList->m_Items[i];
    if ( !v6 )
LABEL_13:
      sub_B170D4();
    PartyOrganizationListViewItem__ClearFollower(v6, 0LL);
  }
  PartyListViewItem__CheckRestriction(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__ClearMember(PartyListViewItem_o *this, int32_t num, const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v5; // x19
  PartyOrganizationListViewItem_o *v6; // x0
  int32_t cost; // w22
  struct PartyOrganizationListViewItem_array *v8; // x8
  PartyOrganizationListViewItem_o *v9; // x0
  const MethodInfo *v10; // x1

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_8;
  if ( memberList->max_length <= num )
    goto LABEL_9;
  v5 = this;
  v6 = memberList->m_Items[num];
  if ( !v6
    || (cost = v5->fields.cost,
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(v6, 0LL),
        v8 = v5->fields.memberList,
        v5->fields.cost = cost - (_DWORD)this,
        !v8) )
  {
LABEL_8:
    sub_B170D4();
  }
  if ( v8->max_length <= num )
  {
LABEL_9:
    sub_B17100(this, *(_QWORD *)&num, method);
    sub_B170A0();
  }
  v9 = v8->m_Items[num];
  if ( !v9 )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty(v9, 0LL);
  PartyListViewItem__CheckRestriction(v5, v10);
}


void __fastcall PartyListViewItem__ClearMember_32471312(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t i; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v6; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_40FDD8E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FDD8E = 1;
  }
  for ( i = 0; ; ++i )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v7->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( i >= memberList->max_length )
    {
      sub_B17100(v7, method, v2);
      sub_B170A0();
    }
    v6 = memberList->m_Items[i];
    if ( !v6 )
LABEL_15:
      sub_B170D4();
    if ( !v6->fields.isFollower )
      PartyOrganizationListViewItem__Empty(v6, 0LL);
  }
  this->fields.cost = 0;
  PartyListViewItem__CheckRestriction(this, method);
}


PartyListViewItem_o *__fastcall PartyListViewItem__Clone(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  PartyListViewItem_o *v6; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_40FDD89 & 1) == 0 )
  {
    sub_B16FFC(&PartyListViewItem_TypeInfo, method);
    byte_40FDD89 = 1;
  }
  v6 = (PartyListViewItem_o *)sub_B170CC(PartyListViewItem_TypeInfo, method, v2, v3, v4);
  PartyListViewItem___ctor(v6, v7);
  if ( !v6 )
    sub_B170D4();
  PartyListViewItem__Set(v6, this, v8);
  return v6;
}


bool __fastcall PartyListViewItem__CompMember(
        PartyListViewItem_o *this,
        PartyListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  il2cpp_array_size_t i; // w21
  BalanceConfig_c *v8; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v10; // x9
  PartyOrganizationListViewItem_o *v11; // x0
  PartyOrganizationListViewItem_o *v12; // x1

  if ( (byte_40FDD99 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    byte_40FDD99 = 1;
  }
  if ( !item )
LABEL_18:
    sub_B170D4();
  if ( System_String__op_Inequality(this->fields.deckName, item->fields.deckName, 0LL) )
    return 0;
  for ( i = 0; ; ++i )
  {
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v8->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_18;
    if ( i >= memberList->max_length )
      goto LABEL_19;
    v10 = item->fields.memberList;
    if ( !v10 )
      goto LABEL_18;
    if ( i >= v10->max_length )
    {
LABEL_19:
      sub_B17100(v8, v5, v6);
      sub_B170A0();
    }
    v11 = memberList->m_Items[i];
    if ( !v11 )
      goto LABEL_18;
    v12 = v10->m_Items[i];
    if ( !PartyOrganizationListViewItem__CompMember(v11, v12, 0LL) )
      return 0;
  }
  return 1;
}


void __fastcall PartyListViewItem__Finalize(PartyListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_array *__fastcall PartyListViewItem__GetAssetNameList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v16; // x0
  System_String_o *AssetName; // x0
  BalanceConfig_c *v18; // x0

  if ( (byte_40FDDA5 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v9);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v10);
    byte_40FDDA5 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  for ( i = 0LL; ; ++i )
  {
    v18 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v18->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( i >= memberList->max_length )
    {
      sub_B17100(v18, v12, v13);
      sub_B170A0();
    }
    v16 = memberList->m_Items[i];
    if ( v16 )
    {
      AssetName = PartyOrganizationListViewItem__GetAssetName(v16, 0LL);
      if ( AssetName )
      {
        if ( !v11 )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)AssetName,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  if ( !v11 )
LABEL_19:
    sub_B170D4();
  if ( v11->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall PartyListViewItem__GetCommandCardList(
        PartyListViewItem_o *this,
        int32_t typeMax,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Int32_array *v8; // x21
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v11; // x0
  _QWORD *p_image; // x0
  unsigned __int64 j; // x8
  unsigned __int64 v14; // x10

  if ( (byte_40FDDA4 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&typeMax);
    sub_B16FFC(&int___TypeInfo, v5);
    byte_40FDDA4 = 1;
  }
  v8 = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)typeMax, method);
  for ( i = 0LL; ; ++i )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( (__int64)i >= *(int *)(p_image[23] + 160LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_23:
      sub_B170D4();
    if ( i >= memberList->max_length )
    {
LABEL_22:
      sub_B17100(p_image, v6, v7);
      sub_B170A0();
    }
    v11 = memberList->m_Items[i];
    if ( v11 )
    {
      p_image = PartyOrganizationListViewItem__GetCommandCardList(v11, 0LL);
      if ( p_image )
      {
        if ( typeMax >= 1 )
        {
          for ( j = 0LL; (__int64)j < typeMax; ++j )
          {
            v14 = *((unsigned int *)p_image + 6);
            if ( (__int64)j < (int)v14 )
            {
              if ( !v8 )
                goto LABEL_23;
              if ( j >= v8->max_length || j >= v14 )
                goto LABEL_22;
              v8->m_Items[j + 1] += *((_DWORD *)p_image + j + 8);
            }
          }
        }
      }
    }
  }
  return v8;
}


int32_t __fastcall PartyListViewItem__GetDeckCondition(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x5
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *DeckConditionServantNumAndPosition; // x0
  il2cpp_array_size_t v14; // w26
  int v15; // w25
  char v16; // w28
  int v17; // w27
  int v18; // w21
  int32_t v19; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v21; // x8
  PartyOrganizationListViewItem_o *v22; // x22
  _BOOL4 isFollower; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t DeckMainMemberMax; // w22
  int32_t v26; // w26
  struct PartyOrganizationListViewItem_array *v27; // x8
  Il2CppClass **v28; // x8
  PartyOrganizationListViewItem_o *v29; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // kr10_16
  __int64 v31; // x8
  int32_t v32; // w23
  struct PartyOrganizationListViewItem_array *v33; // x9
  PartyOrganizationListViewItem_o *v34; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  QuestRestrictionInfo_o *v36; // x0
  const MethodInfo *v37; // x5
  QuestRestrictionInfo_o *v38; // x0
  QuestRestrictionInfo_o *v39; // x0
  const MethodInfo *v40; // x5
  QuestRestrictionInfo_o *v41; // x0
  QuestRestrictionInfo_o *v42; // x0
  QuestRestrictionInfo_o *v43; // x0
  struct QuestRestrictionInfo_o *v44; // x8
  _BOOL4 isNotSingleSupportOnly; // w8
  struct PartyOrganizationListViewItem_array *v46; // x26
  int max_length; // w8
  unsigned int v48; // w28
  Il2CppClass **v49; // x8
  PartyOrganizationListViewItem_o *v50; // x20
  PartyOrganizationListViewItem_o *v51; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // kr20_16
  QuestRestrictionInfo_o *v53; // x0
  QuestRestrictionInfo_o *v54; // x0
  System_Collections_Generic_List_int____o *NeedIndividualityList; // x0
  System_Collections_Generic_List_int____o *v56; // x21
  _QWORD *v57; // x22
  signed __int64 size; // x8
  int v59; // w9
  unsigned __int64 v60; // x27
  char v61; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  int32_t DispImageLimitCount; // w0
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  int v68; // w8
  __int64 i; // x23
  struct PartyOrganizationListViewItem_array *v70; // x8
  PartyOrganizationListViewItem_o *v71; // x8
  struct ServantEntity_o *v72; // x8
  __int64 v73; // x20
  __int64 v74; // x21
  int32_t v75; // w20
  unsigned __int64 j; // x24
  struct PartyOrganizationListViewItem_array *v77; // x8
  PartyOrganizationListViewItem_o *v78; // x8
  struct ServantEntity_o *v79; // x8
  __int64 v80; // x21
  __int64 v81; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_40FDD97 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_int___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Intersect_int___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Item__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_40FDD97 = 1;
  }
  if ( this->fields.cost > this->fields.maxCost )
  {
    LODWORD(DeckConditionServantNumAndPosition) = 7;
    return (int)DeckConditionServantNumAndPosition;
  }
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  while ( 1 )
  {
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = *(_DWORD *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 160LL);
    if ( (int)v14 >= DeckMainMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_182;
    if ( v14 >= memberList->max_length )
      goto LABEL_183;
    v21 = &memberList->obj.klass + (int)v14;
    v22 = (PartyOrganizationListViewItem_o *)v21[4];
    if ( !v22 )
      goto LABEL_182;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v21[4], 0LL) )
    {
LABEL_62:
      LODWORD(DeckConditionServantNumAndPosition) = 5;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( (v22->fields.fatigureTime & 0x8000000000000000LL) == 0 )
    {
LABEL_63:
      LODWORD(DeckConditionServantNumAndPosition) = 6;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v22->fields._IsAllOutBattle_k__BackingField )
    {
LABEL_64:
      LODWORD(DeckConditionServantNumAndPosition) = 19;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v22->fields._IsDataLost_k__BackingField )
    {
LABEL_65:
      LODWORD(DeckConditionServantNumAndPosition) = 20;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v22->fields._TimesToRestart_k__BackingField > 0 )
    {
LABEL_66:
      LODWORD(DeckConditionServantNumAndPosition) = 21;
      return (int)DeckConditionServantNumAndPosition;
    }
    isFollower = v22->fields.isFollower;
    if ( v22->fields.isFollower && !v22->fields.isMyServantOrNpcRestriction )
    {
      ++v18;
      ++v17;
      v16 = 1;
    }
    else
    {
      if ( v22->fields.userServantEntity )
        goto LABEL_18;
      if ( v22->fields.isMyServantOrNpcRestriction )
      {
        SvtId = PartyOrganizationListViewItem__get_SvtId(v22, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL) >= 1 )
        {
          isFollower = v22->fields.isFollower;
LABEL_18:
          ++v19;
          v15 |= isFollower;
        }
      }
    }
    ++v14;
  }
  if ( (*((_BYTE *)DeckConditionServantNumAndPosition + 307) & 4) != 0
    && !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
  {
    j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  v26 = v19;
  while ( 1 )
  {
    if ( (*((_BYTE *)DeckConditionServantNumAndPosition + 307) & 4) != 0
      && !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
    {
      j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    v31 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
    if ( DeckMainMemberMax >= *(_DWORD *)(v31 + 156) )
      break;
    v27 = this->fields.memberList;
    if ( !v27 )
      goto LABEL_182;
    if ( DeckMainMemberMax >= v27->max_length )
      goto LABEL_183;
    v28 = &v27->obj.klass + DeckMainMemberMax;
    v29 = (PartyOrganizationListViewItem_o *)v28[4];
    if ( !v29 )
      goto LABEL_182;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v28[4], 0LL) )
      goto LABEL_62;
    if ( (v29->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_63;
    if ( v29->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_64;
    if ( v29->fields._IsDataLost_k__BackingField )
      goto LABEL_65;
    if ( v29->fields._TimesToRestart_k__BackingField > 0 )
      goto LABEL_66;
    if ( v29->fields.isFollower && !v29->fields.isMyServantOrNpcRestriction )
    {
      ++v17;
    }
    else
    {
      if ( v29->fields.userServantEntity )
        goto LABEL_46;
      if ( v29->fields.isMyServantOrNpcRestriction )
      {
        v30 = PartyOrganizationListViewItem__get_SvtId(v29, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL) >= 1 )
LABEL_46:
          ++v26;
      }
    }
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    ++DeckMainMemberMax;
  }
  DeckConditionServantNumAndPosition = 0LL;
  v32 = v17 + v26;
  switch ( this->fields.menuKind )
  {
    case 4:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__CheckDeckConditionServantNum(
                                                     this,
                                                     v32,
                                                     v19,
                                                     v16 & 1,
                                                     1,
                                                     v3);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
        goto LABEL_61;
      goto LABEL_101;
    case 5:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                     this,
                                                     v32,
                                                     v19,
                                                     v16 & 1,
                                                     1,
                                                     v3);
      if ( !(_DWORD)DeckConditionServantNumAndPosition )
        goto LABEL_101;
      return (int)DeckConditionServantNumAndPosition;
    case 6:
      return (int)DeckConditionServantNumAndPosition;
    case 7:
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_182;
      if ( !QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
        goto LABEL_80;
      v36 = this->fields.questRestrictionInfo;
      if ( !v36 )
        goto LABEL_182;
      if ( QuestRestrictionInfo__IsFixedServantPosition(v36, 0LL) )
      {
LABEL_80:
        v38 = this->fields.questRestrictionInfo;
        if ( !v38 )
          goto LABEL_182;
        if ( QuestRestrictionInfo__IsServantNum(v38, 0LL) )
        {
          v39 = this->fields.questRestrictionInfo;
          if ( !v39 )
            goto LABEL_182;
          if ( QuestRestrictionInfo__IsFixedServantPosition(v39, 0LL) )
          {
            LODWORD(DeckConditionServantNumAndPosition) = PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                            this,
                                                            v32,
                                                            v19,
                                                            v16 & 1,
                                                            v18,
                                                            v40);
            if ( (_DWORD)DeckConditionServantNumAndPosition )
              return (int)DeckConditionServantNumAndPosition;
          }
        }
      }
      else if ( !PartyListViewItem__CheckDeckConditionServantNum(this, v32, v19, v16 & 1, v18, v37) )
      {
LABEL_61:
        LODWORD(DeckConditionServantNumAndPosition) = 14;
        return (int)DeckConditionServantNumAndPosition;
      }
      v41 = this->fields.questRestrictionInfo;
      if ( !v41 )
        goto LABEL_182;
      if ( !QuestRestrictionInfo__IsMyServantNum(v41, 0LL) )
        goto LABEL_93;
      v42 = this->fields.questRestrictionInfo;
      if ( !v42 )
        goto LABEL_182;
      if ( !QuestRestrictionInfo__CheckMyServantNumRestriction(v42, v26, 0LL) )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 16;
        return (int)DeckConditionServantNumAndPosition;
      }
LABEL_93:
      v43 = this->fields.questRestrictionInfo;
      if ( !v43 )
        goto LABEL_182;
      DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsServantNum(v43, 0LL);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
      {
        DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        }
        v31 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
LABEL_99:
        if ( v19 + v18 < *(_DWORD *)(v31 + 160) )
        {
          LODWORD(DeckConditionServantNumAndPosition) = 3;
          return (int)DeckConditionServantNumAndPosition;
        }
      }
LABEL_101:
      v44 = this->fields.questRestrictionInfo;
      if ( !v44 )
        goto LABEL_147;
      isNotSingleSupportOnly = v44->fields.isNotSingleSupportOnly;
      if ( v19 == 1 && (v15 & isNotSingleSupportOnly & 1) != 0 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 22;
        return (int)DeckConditionServantNumAndPosition;
      }
      v46 = this->fields.memberList;
      if ( !v46 )
        goto LABEL_182;
      max_length = v46->max_length;
      if ( max_length >= 1 )
      {
        v48 = 0;
        while ( v48 < max_length )
        {
          v49 = &v46->obj.klass + (int)v48;
          v50 = (PartyOrganizationListViewItem_o *)v49[4];
          if ( !v50 )
            goto LABEL_182;
          v51 = (PartyOrganizationListViewItem_o *)v49[4];
          v50->fields._IsErrorNeedIndividuality_k__BackingField = 0;
          v52 = PartyOrganizationListViewItem__get_SvtId(v51, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                         v52,
                                                         0LL);
          if ( !(_DWORD)DeckConditionServantNumAndPosition )
          {
            v53 = this->fields.questRestrictionInfo;
            if ( !v53 )
              goto LABEL_182;
            DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsSetRequired(
                                                           v53,
                                                           v50->fields.index + 1,
                                                           v50->fields._InitPos_k__BackingField,
                                                           0LL);
            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
            {
              LODWORD(DeckConditionServantNumAndPosition) = 18;
              return (int)DeckConditionServantNumAndPosition;
            }
          }
          if ( v50->fields.userServantEntity )
          {
            v54 = this->fields.questRestrictionInfo;
            if ( !v54 )
              goto LABEL_182;
            NeedIndividualityList = QuestRestrictionInfo__GetNeedIndividualityList(
                                      v54,
                                      v50->fields._InitPos_k__BackingField,
                                      0LL);
            if ( !this->fields.questRestrictionInfo )
              goto LABEL_182;
            v56 = NeedIndividualityList;
            DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetRangeTypeList(
                                                   this->fields.questRestrictionInfo,
                                                   v50->fields._InitPos_k__BackingField,
                                                   0LL);
            if ( v56 )
            {
              v57 = DeckConditionServantNumAndPosition;
              if ( DeckConditionServantNumAndPosition )
              {
                LODWORD(size) = v56->fields._size;
                if ( (int)size >= 1 )
                {
                  v59 = *((_DWORD *)DeckConditionServantNumAndPosition + 6);
                  if ( v59 >= 1 && (_DWORD)size == v59 )
                  {
                    v60 = 0LL;
                    v61 = 0;
                    do
                    {
                      if ( v60 >= (unsigned int)size )
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                      v62 = (System_Collections_Generic_IEnumerable_TSource__o *)v56->fields._items->m_Items[v60];
                      if ( v62 )
                      {
                        if ( v60 >= (unsigned int)v56->fields._size )
                          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                        if ( v62[1].monitor )
                        {
                          if ( v60 >= (unsigned int)v56->fields._size )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                          servantEntity = v50->fields.servantEntity;
                          svtLimitCount = v50->fields.svtLimitCount;
                          DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(v50, 0LL);
                          if ( !servantEntity )
                            goto LABEL_182;
                          Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                                 servantEntity,
                                                                                                 svtLimitCount,
                                                                                                 DispImageLimitCount,
                                                                                                 0LL);
                          v67 = System_Linq_Enumerable__Intersect_int_(
                                  v62,
                                  Individuality,
                                  (const MethodInfo_18D894C *)Method_System_Linq_Enumerable_Intersect_int___);
                          DeckConditionServantNumAndPosition = System_Linq_Enumerable__ToArray_int_(
                                                                 v67,
                                                                 (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
                          if ( v60 >= *((unsigned int *)v57 + 6) )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                          v68 = *(_DWORD *)(v57[2] + 4 * v60 + 32);
                          if ( v68 == 1 )
                          {
                            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)DeckConditionServantNumAndPosition,
                                                                           (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___);
                            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
                              goto LABEL_146;
                          }
                          else
                          {
                            if ( v60 >= *((unsigned int *)v57 + 6) )
                              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                            if ( v68 == 2 )
                            {
                              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)DeckConditionServantNumAndPosition,
                                                                             (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___);
                              if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
                                goto LABEL_146;
                            }
                          }
                          v61 = 1;
                        }
                      }
                      size = v56->fields._size;
                      ++v60;
                    }
                    while ( (__int64)v60 < size );
                    if ( (v61 & 1) != 0 )
                    {
                      v50->fields._IsErrorNeedIndividuality_k__BackingField = 1;
                      LODWORD(DeckConditionServantNumAndPosition) = 23;
                      return (int)DeckConditionServantNumAndPosition;
                    }
                  }
                }
              }
            }
          }
LABEL_146:
          max_length = v46->max_length;
          if ( (int)++v48 >= max_length )
            goto LABEL_147;
        }
LABEL_183:
        sub_B17100(DeckConditionServantNumAndPosition, method, v2);
        sub_B170A0();
      }
LABEL_147:
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
      for ( i = 0LL; ; ++i )
      {
        if ( (*((_BYTE *)DeckConditionServantNumAndPosition + 307) & 4) != 0
          && !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
        {
          j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
          DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        }
        if ( (int)i >= *(_DWORD *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 156LL) )
        {
          LODWORD(DeckConditionServantNumAndPosition) = 0;
          return (int)DeckConditionServantNumAndPosition;
        }
        v70 = this->fields.memberList;
        if ( !v70 )
          goto LABEL_182;
        if ( (unsigned int)i >= v70->max_length )
          goto LABEL_183;
        v71 = v70->m_Items[(int)i];
        if ( !v71 )
          goto LABEL_182;
        if ( v71->fields.userServantEntity )
          break;
LABEL_172:
        ;
      }
      v72 = v71->fields.servantEntity;
      if ( !v72 )
LABEL_182:
        sub_B170D4();
      v74 = *(_QWORD *)&v72->fields.baseSvtId.fields.currentCryptoKey;
      v73 = *(_QWORD *)&v72->fields.baseSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v83.fields.currentCryptoKey = v74;
      *(_QWORD *)&v83.fields.fakeValue = v73;
      v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v83, 0LL);
      for ( j = 0LL; ; ++j )
      {
        DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        }
        if ( (__int64)j >= *(int *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 156LL) )
          goto LABEL_172;
        if ( i != j )
        {
          v77 = this->fields.memberList;
          if ( !v77 )
            goto LABEL_182;
          if ( j >= v77->max_length )
            goto LABEL_183;
          v78 = v77->m_Items[j];
          if ( !v78 )
            goto LABEL_182;
          if ( v78->fields.userServantEntity )
          {
            v79 = v78->fields.servantEntity;
            if ( !v79 )
              goto LABEL_182;
            v81 = *(_QWORD *)&v79->fields.baseSvtId.fields.currentCryptoKey;
            v80 = *(_QWORD *)&v79->fields.baseSvtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v84.fields.currentCryptoKey = v81;
            *(_QWORD *)&v84.fields.fakeValue = v80;
            if ( v75 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v84, 0LL) )
              break;
          }
        }
      }
      LODWORD(DeckConditionServantNumAndPosition) = 4;
      return (int)DeckConditionServantNumAndPosition;
    default:
      if ( !v26 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 1;
        return (int)DeckConditionServantNumAndPosition;
      }
      if ( v19 != 1 )
        goto LABEL_86;
      v33 = this->fields.memberList;
      if ( !v33 )
        goto LABEL_182;
      if ( !v33->max_length )
        goto LABEL_183;
      v34 = v33->m_Items[0];
      if ( !v34 )
        goto LABEL_182;
      if ( v34->fields.userServantEntity )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 2;
        return (int)DeckConditionServantNumAndPosition;
      }
LABEL_86:
      v18 = v16 & 1;
      goto LABEL_99;
  }
}


int32_t __fastcall PartyListViewItem__GetDeckConditionServantNum(
        PartyListViewItem_o *this,
        int32_t deckMemberCount,
        int32_t mainMemberCount,
        bool isFollowerMainMember,
        int32_t mainFollowerNum,
        const MethodInfo *method)
{
  if ( PartyListViewItem__CheckDeckConditionServantNum(
         this,
         deckMemberCount,
         mainMemberCount,
         isFollowerMainMember,
         mainFollowerNum,
         method) )
  {
    return 0;
  }
  else
  {
    return 14;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PartyListViewItem__GetDeckConditionServantNumAndPosition(
        PartyListViewItem_o *this,
        int32_t deckMemberCount,
        int32_t mainMemberCount,
        bool isFollowerMainMember,
        int32_t mainFollowerNum,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v16; // w22
  BalanceConfig_c *v17; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v19; // x8

  if ( (byte_40FDD96 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_40FDD96 = 1;
  }
  if ( PartyListViewItem__CheckDeckConditionServantNum(
         this,
         deckMemberCount,
         mainMemberCount,
         isFollowerMainMember,
         mainFollowerNum,
         method) )
  {
    return 0;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_18:
    sub_B170D4();
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(questRestrictionInfo, 0LL);
  v16 = 0;
  v17 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v16 >= v17->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_18;
    if ( v16 >= memberList->max_length )
    {
      sub_B17100(v17, v13, v14);
      sub_B170A0();
    }
    v19 = memberList->m_Items[v16];
    if ( !v19 )
      goto LABEL_18;
    ++v16;
    FixedServantPositionCount -= v19->fields.isFixedServantPositionAgreement;
  }
  if ( FixedServantPositionCount < 1 )
    return 14;
  else
    return 15;
}


System_Int64_array *__fastcall PartyListViewItem__GetEquipList(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_long__o *v9; // x20
  int64_t EquipUserSvtId; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v14; // x22
  int max_length; // w9
  Il2CppClass **v16; // x8
  PartyOrganizationListViewItem_o *v17; // x21
  int64_t v18; // x0

  if ( (byte_40FDD9C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v8);
    byte_40FDD9C = 1;
  }
  v9 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_12;
  v14 = 0LL;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v14 >= max_length )
      break;
    if ( (unsigned int)v14 >= max_length )
    {
      sub_B17100(EquipUserSvtId, v11, v12);
      sub_B170A0();
    }
    v16 = &memberList->obj.klass + v14;
    v17 = (PartyOrganizationListViewItem_o *)v16[4];
    if ( v17 )
    {
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v16[4], 0LL);
      if ( EquipUserSvtId >= 1 )
      {
        v18 = PartyOrganizationListViewItem__get_EquipUserSvtId(v17, 0LL);
        if ( !v9 )
          goto LABEL_12;
        System_Collections_Generic_List_long___Add(
          v9,
          v18,
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      }
      memberList = this->fields.memberList;
      ++v14;
      if ( memberList )
        continue;
    }
    goto LABEL_12;
  }
  if ( !v9 )
LABEL_12:
    sub_B170D4();
  return System_Collections_Generic_List_long___ToArray(
           v9,
           (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
}


bool __fastcall PartyListViewItem__GetEventUpVal(
        PartyListViewItem_o *this,
        int32_t *eventId,
        EventUpValInfo_array **eventUpValList,
        const MethodInfo *method)
{
  PartyListViewItem_o *v6; // x20
  __int64 v7; // x1
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x9
  BalanceConfig_c *v10; // x0
  EventUpValInfo_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  EventUpValInfo_array *v20; // x8

  v6 = this;
  if ( (byte_40FDDA3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, eventId);
    this = (PartyListViewItem_o *)sub_B16FFC(&EventUpValInfo___TypeInfo, v7);
    byte_40FDDA3 = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_25:
      sub_B170D4();
    eventIdList = setupInfo->fields.eventIdList;
    if ( eventIdList )
    {
      if ( !(_DWORD)eventIdList )
      {
LABEL_26:
        sub_B17100(this, eventId, eventUpValList);
        sub_B170A0();
      }
      LODWORD(setupInfo) = setupInfo->fields.servantFilterEventIdList;
    }
    else
    {
      LODWORD(setupInfo) = 0;
    }
  }
  *eventId = (int)setupInfo;
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (EventUpValInfo_array *)sub_B17014(
                                  EventUpValInfo___TypeInfo,
                                  (unsigned int)v10->static_fields->DeckMemberMax,
                                  eventUpValList);
  *eventUpValList = v11;
  sub_B16F98((BattleServantConfConponent_o *)eventUpValList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  for ( i = 0LL; ; ++i )
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= SHIDWORD(this[1].klass->_1.methods) )
      break;
    memberList = v6->fields.memberList;
    if ( !memberList )
      goto LABEL_25;
    if ( i >= memberList->max_length )
      goto LABEL_26;
    this = (PartyListViewItem_o *)memberList->m_Items[i];
    if ( this )
    {
      v20 = *eventUpValList;
      if ( !*eventUpValList )
        goto LABEL_25;
      if ( i >= v20->max_length )
        goto LABEL_26;
      PartyOrganizationListViewItem__GetEventUpVal((PartyOrganizationListViewItem_o *)this, &v20->m_Items[i], 0LL);
    }
  }
  return 1;
}


int32_t __fastcall PartyListViewItem__GetFollowerIndex(
        PartyListViewItem_o *this,
        UserEventDeckEntity_o *deck,
        System_Collections_Generic_List_FollowerInfo__o *fixNpcFollowerInfoList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x0
  System_Collections_Generic_List_int__o *FollowerIndexList; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  int32_t FollowerIndex; // w22
  DeckServantData_o *v18; // x8
  QuestRestrictionInfo_o *v19; // x0
  const MethodInfo *v20; // x2
  struct QuestRestrictionInfo_o *v21; // x8
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FDD86 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, deck);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    byte_40FDD86 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_27;
  if ( questRestrictionInfo->fields.isNotTransitionSupportList
    || questRestrictionInfo->fields.isNpcOnlyBattle
    || questRestrictionInfo->fields.isNoSupportBattle )
  {
    return 0;
  }
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL) )
  {
LABEL_27:
    if ( deck )
    {
      FollowerIndex = UserEventDeckEntity__GetFollowerIndex(deck, 0LL);
      if ( FollowerIndex )
        return FollowerIndex;
LABEL_29:
      v21 = this->fields.questRestrictionInfo;
      if ( v21 )
      {
        if ( fixNpcFollowerInfoList )
          return PartyListViewItem__GetSupportInitIndex(this, fixNpcFollowerInfoList, v20);
        else
          return v21->fields.supportInitIndex;
      }
      return 0;
    }
LABEL_35:
    sub_B170D4();
  }
  if ( !deck )
    goto LABEL_35;
  FollowerIndexList = UserEventDeckEntity__GetFollowerIndexList(deck, 0LL);
  if ( !FollowerIndexList )
    goto LABEL_35;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    FollowerIndexList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v24,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v12 )
      break;
    deckInfo = deck->fields.deckInfo;
    if ( !deckInfo )
      sub_B170D4();
    svts = deckInfo->fields.svts;
    if ( !svts )
      sub_B170D4();
    FollowerIndex = v24.fields.current;
    if ( v24.fields.current - 1 >= svts->max_length )
    {
      sub_B17100(v12, v13, v14);
      sub_B170A0();
    }
    v18 = svts->m_Items[v24.fields.current - 1];
    if ( !v18 )
      sub_B170D4();
    v19 = this->fields.questRestrictionInfo;
    if ( !v19 )
      sub_B170D4();
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(v19, v18->fields.initPos, 0LL) )
      goto LABEL_20;
  }
  FollowerIndex = 0;
LABEL_20:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v24,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !FollowerIndex )
    goto LABEL_29;
  return FollowerIndex;
}


int32_t __fastcall PartyListViewItem__GetFriendPointUpVal(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned __int64 v4; // x21
  int32_t v5; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v7; // x0
  int32_t FriendPointUpVal; // w0
  BalanceConfig_c *v9; // x0

  if ( (byte_40FDDA2 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FDDA2 = 1;
  }
  v4 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v4 >= v9->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      sub_B170D4();
    if ( v4 >= memberList->max_length )
    {
      sub_B17100(v9, method, v2);
      sub_B170A0();
    }
    v7 = memberList->m_Items[v4];
    if ( v7 )
    {
      FriendPointUpVal = PartyOrganizationListViewItem__GetFriendPointUpVal(v7, 0LL);
      if ( FriendPointUpVal > v5 )
        v5 = FriendPointUpVal;
    }
    ++v4;
  }
  return v5;
}


System_Boolean_array *__fastcall PartyListViewItem__GetIsFollowerList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Boolean_array *v8; // x20
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v11; // x8
  BalanceConfig_c *v12; // x0

  if ( (byte_40FDDA1 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&bool___TypeInfo, v4);
    byte_40FDDA1 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v8 = (System_Boolean_array *)sub_B17014(bool___TypeInfo, (unsigned int)v5->static_fields->DeckMemberMax, v2);
  for ( i = 0LL; ; ++i )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v12->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( i >= memberList->max_length )
      goto LABEL_20;
    v11 = memberList->m_Items[i];
    if ( v11 )
    {
      if ( !v8 )
LABEL_19:
        sub_B170D4();
      if ( i >= v8->max_length )
      {
LABEL_20:
        sub_B17100(v12, v6, v7);
        sub_B170A0();
      }
      v8->m_Items[i + 4] = v11->fields.isFollower;
    }
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *__fastcall PartyListViewItem__GetMember(
        PartyListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8

  memberList = this->fields.memberList;
  if ( !memberList )
    sub_B170D4();
  if ( memberList->max_length <= num )
  {
    sub_B17100(this, *(_QWORD *)&num, method);
    sub_B170A0();
  }
  return memberList->m_Items[num];
}


int32_t __fastcall PartyListViewItem__GetMenuKind(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.menuKind;
}


int32_t __fastcall PartyListViewItem__GetNpcDeployIdx(
        PartyListViewItem_o *this,
        System_Int64_array *npcSvtIds,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 myServantNumMax; // x0
  il2cpp_array_size_t max_length; // w8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !npcSvtIds )
    sub_B170D4();
  myServantNumMax = (unsigned int)questRestrictionInfo->fields.myServantNumMax;
  max_length = npcSvtIds->max_length;
  while ( (int)myServantNumMax < (int)max_length )
  {
    if ( (unsigned int)myServantNumMax >= max_length )
    {
      sub_B17100(myServantNumMax, npcSvtIds, method);
      sub_B170A0();
    }
    if ( !npcSvtIds->m_Items[(int)myServantNumMax] )
      return myServantNumMax;
    myServantNumMax = (unsigned int)(myServantNumMax + 1);
  }
  LODWORD(myServantNumMax) = -1;
  return myServantNumMax;
}


QuestRestrictionInfo_o *__fastcall PartyListViewItem__GetQuestRestriction(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t __fastcall PartyListViewItem__GetStartDeckCondition(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t menuKind; // w8
  void *FixedMyServantSingleSvtIdList; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int v9; // w23
  _DWORD *v10; // x20
  __int64 v11; // x24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int TotalCostRestriction; // w0
  QuestRestrictionInfo_o *v16; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v18; // w25
  char v19; // w24
  char v20; // w22
  char v21; // w23
  struct PartyOrganizationListViewItem_array *v22; // x8
  Il2CppClass **v23; // x8
  Il2CppClass *v24; // x21
  bool v25; // w10
  int v26; // w8
  char v27; // w9
  char v28; // w10

  if ( (byte_40FDD98 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_40FDD98 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_49:
      sub_B170D4();
    FixedMyServantSingleSvtIdList = QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(questRestrictionInfo, 0LL);
    if ( FixedMyServantSingleSvtIdList )
    {
      v9 = *((_DWORD *)FixedMyServantSingleSvtIdList + 6);
      v10 = FixedMyServantSingleSvtIdList;
      if ( v9 < 1 )
      {
LABEL_4:
        LODWORD(FixedMyServantSingleSvtIdList) = 0;
        return (int)FixedMyServantSingleSvtIdList;
      }
      v11 = 0LL;
      while ( 1 )
      {
        memberList = this->fields.memberList;
        if ( !memberList )
          goto LABEL_49;
        if ( (unsigned int)v11 >= memberList->max_length )
          goto LABEL_50;
        v13 = memberList->m_Items[v11];
        if ( !v13 )
          goto LABEL_49;
        SvtId = PartyOrganizationListViewItem__get_SvtId(v13, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        FixedMyServantSingleSvtIdList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                  SvtId,
                                                  0LL);
        if ( (unsigned int)v11 >= v10[6] )
          goto LABEL_50;
        if ( (_DWORD)FixedMyServantSingleSvtIdList != v10[v11 + 8] )
          break;
        if ( (int)++v11 >= v9 )
          goto LABEL_4;
      }
      LODWORD(FixedMyServantSingleSvtIdList) = 11;
    }
  }
  else if ( questRestrictionInfo
         && (TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL),
             TotalCostRestriction >= 1)
         && this->fields.cost > TotalCostRestriction )
  {
    LODWORD(FixedMyServantSingleSvtIdList) = 8;
  }
  else
  {
    LODWORD(FixedMyServantSingleSvtIdList) = PartyListViewItem__GetDeckCondition(this, method);
    if ( !(_DWORD)FixedMyServantSingleSvtIdList )
    {
      v16 = this->fields.questRestrictionInfo;
      if ( !v16 )
        goto LABEL_4;
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(v16, 0LL);
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      while ( 1 )
      {
        FixedMyServantSingleSvtIdList = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          FixedMyServantSingleSvtIdList = BalanceConfig_TypeInfo;
        }
        if ( (signed int)v18 >= *(_DWORD *)(*((_QWORD *)FixedMyServantSingleSvtIdList + 23) + 156LL) )
          break;
        v22 = this->fields.memberList;
        if ( !v22 )
          goto LABEL_49;
        if ( v18 >= v22->max_length )
        {
LABEL_50:
          sub_B17100(FixedMyServantSingleSvtIdList, v7, v8);
          sub_B170A0();
        }
        v23 = &v22->obj.klass + (int)v18;
        v24 = v23[4];
        if ( !v24 )
          goto LABEL_49;
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction((PartyOrganizationListViewItem_o *)v23[4], 0LL) )
        {
          LODWORD(FixedMyServantSingleSvtIdList) = 18;
          return (int)FixedMyServantSingleSvtIdList;
        }
        ++v18;
        v21 |= BYTE2(v24->_2.typeHierarchy) != 0;
        v20 |= BYTE3(v24->_2.typeHierarchy) != 0;
        FixedServantPositionCount -= BYTE6(v24->_2.typeHierarchy) & 1;
        v19 |= BYTE4(v24->_2.typeHierarchy) != 0;
      }
      if ( (v19 & 1) != 0 )
      {
        LODWORD(FixedMyServantSingleSvtIdList) = 9;
        return (int)FixedMyServantSingleSvtIdList;
      }
      v25 = FixedServantPositionCount > 0;
      v26 = FixedServantPositionCount <= 0 ? 12 : 10;
      v27 = v25 | v21;
      v28 = v20 | v25 | v21;
      LODWORD(FixedMyServantSingleSvtIdList) = (v27 & 1) != 0 ? v26 : 13;
      if ( (v28 & 1) == 0 )
        goto LABEL_4;
    }
  }
  return (int)FixedMyServantSingleSvtIdList;
}


int32_t __fastcall PartyListViewItem__GetSupportInitIndex(
        PartyListViewItem_o *this,
        System_Collections_Generic_List_FollowerInfo__o *fixNpcFollowerInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t result; // w0
  int32_t v15; // w23
  PartyListViewItem___c__DisplayClass25_0_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  BalanceConfig_c *v23; // x0
  int32_t supportInitIndex; // [xsp+8h] [xbp-58h]
  int myServantNumMax; // [xsp+Ch] [xbp-54h]

  if ( (byte_40FDD87 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, fixNpcFollowerInfoList);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v8);
    sub_B16FFC(&Method_System_Func_FollowerInfo__bool___ctor__, v9);
    sub_B16FFC(&System_Func_FollowerInfo__bool__TypeInfo, v10);
    sub_B16FFC(&Method_PartyListViewItem___c__DisplayClass25_0__GetSupportInitIndex_b__0__, v11);
    sub_B16FFC(&PartyListViewItem___c__DisplayClass25_0_TypeInfo, v12);
    byte_40FDD87 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_17:
    sub_B170D4();
  result = questRestrictionInfo->fields.supportInitIndex;
  if ( result <= 0 )
  {
    supportInitIndex = questRestrictionInfo->fields.supportInitIndex;
    myServantNumMax = questRestrictionInfo->fields.myServantNumMax;
    v15 = 0;
    while ( 1 )
    {
      do
      {
        v23 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v23 = BalanceConfig_TypeInfo;
        }
        if ( v15 >= v23->static_fields->DeckMemberMax )
          return supportInitIndex;
        v16 = (PartyListViewItem___c__DisplayClass25_0_o *)sub_B170CC(
                                                             PartyListViewItem___c__DisplayClass25_0_TypeInfo,
                                                             fixNpcFollowerInfoList,
                                                             method,
                                                             v3,
                                                             v4);
        PartyListViewItem___c__DisplayClass25_0___ctor(v16, 0LL);
        if ( !v16 )
          goto LABEL_17;
        v16->fields.chkIdx = ++v15;
        v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_FollowerInfo__bool__TypeInfo,
                                                                                   v17,
                                                                                   v18,
                                                                                   v19,
                                                                                   v20);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v21,
          (Il2CppObject *)v16,
          Method_PartyListViewItem___c__DisplayClass25_0__GetSupportInitIndex_b__0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_FollowerInfo__bool___ctor__);
        v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
                (System_Func_TSource__bool__o *)v21,
                (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      }
      while ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                v22,
                (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) );
      if ( myServantNumMax < 1 )
        return v16->fields.chkIdx;
      --myServantNumMax;
    }
  }
  return result;
}


ServantEntity_array *__fastcall PartyListViewItem__GetSvtEntityList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  ServantEntity_array *v13; // x20
  unsigned __int64 v14; // x24
  BattleServantConfConponent_o *i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v17; // x8
  System_Int32_array **servantEntity; // x22
  BalanceConfig_c *v19; // x0

  if ( (byte_40FDD9F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&ServantEntity___TypeInfo, v4);
    byte_40FDD9F = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v13 = (ServantEntity_array *)sub_B17014(ServantEntity___TypeInfo, (unsigned int)v5->static_fields->DeckMemberMax, v2);
  v14 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v13->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v14 >= v19->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( v14 >= memberList->max_length )
      goto LABEL_22;
    v17 = memberList->m_Items[v14];
    if ( v17 )
    {
      if ( !v13 )
LABEL_21:
        sub_B170D4();
      servantEntity = (System_Int32_array **)v17->fields.servantEntity;
      if ( servantEntity )
      {
        v19 = (BalanceConfig_c *)sub_B170BC(servantEntity, v13->obj.klass->_1.element_class);
        if ( !v19 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v14 >= v13->max_length )
      {
LABEL_22:
        sub_B17100(v19, v6, v7);
        sub_B170A0();
      }
      i->klass = (BattleServantConfConponent_c *)servantEntity;
      sub_B16F98(i, servantEntity, v7, v8, v9, v10, v11, v12);
    }
    ++v14;
  }
  return v13;
}


System_String_array *__fastcall PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array *v8; // x20
  unsigned __int64 v9; // x24
  BattleServantConfConponent_o *i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v12; // x0
  System_Int32_array **SvtNameText; // x0
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x22

  if ( (byte_40FDDA0 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&string___TypeInfo, v4);
    byte_40FDDA0 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v8 = (System_String_array *)sub_B17014(string___TypeInfo, (unsigned int)v5->static_fields->DeckMemberMax, v2);
  v9 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v8->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    SvtNameText = (System_Int32_array **)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (System_Int32_array **)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v9 >= SvtNameText[23]->m_Items[32] )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( v9 >= memberList->max_length )
      goto LABEL_22;
    v12 = memberList->m_Items[v9];
    if ( v12 )
    {
      SvtNameText = (System_Int32_array **)PartyOrganizationListViewItem__get_SvtNameText(v12, 0LL);
      if ( !v8 )
LABEL_21:
        sub_B170D4();
      v19 = SvtNameText;
      if ( SvtNameText )
      {
        SvtNameText = (System_Int32_array **)sub_B170BC(SvtNameText, v8->obj.klass->_1.element_class);
        if ( !SvtNameText )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v9 >= v8->max_length )
      {
LABEL_22:
        sub_B17100(SvtNameText, v6, v7);
        sub_B170A0();
      }
      i->klass = (BattleServantConfConponent_c *)v19;
      sub_B16F98(i, v19, v7, v14, v15, v16, v17, v18);
    }
    ++v9;
  }
  return v8;
}


UserDeckEntity_o *__fastcall PartyListViewItem__GetUserDeck(
        PartyListViewItem_o *this,
        PartyListViewItem_o *baseItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **deckName; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t max_length; // w22
  PartyListViewItem_o *v24; // x19
  int64_t userEquipId; // x20
  DeckServant_o *v26; // x21
  __int64 v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  System_String_array **v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  struct PartyOrganizationListViewItem_array *v38; // x24
  __int64 v39; // x25
  unsigned int v40; // w27
  __int64 v41; // x26
  PartyOrganizationListViewItem_o *v42; // x22
  __int64 v43; // x21
  int v44; // w19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v46; // q0
  __int128 v47; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  _DWORD *v55; // x22
  __int64 v56; // x0
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64[2]; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_40FDD9A & 1) == 0 )
  {
    sub_B16FFC(&DeckServantData_TypeInfo, baseItem);
    sub_B16FFC(&DeckServant_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&UserDeckEntity_TypeInfo, v9);
    byte_40FDD9A = 1;
  }
  memset(&v64[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v10 = sub_B170CC(UserDeckEntity_TypeInfo, baseItem, method, v3, v4);
  UserDeckEntity___ctor((UserDeckEntity_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_30;
  *(_QWORD *)(v10 + 16) = this->fields.id;
  *(_DWORD *)(v10 + 32) = this->fields.index + 1;
  deckName = (System_Int32_array **)this->fields.deckName;
  *(_QWORD *)(v10 + 40) = deckName;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 40), deckName, v11, v12, v13, v14, v15, v16);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_30;
  max_length = memberList->max_length;
  v24 = baseItem ? baseItem : this;
  userEquipId = v24->fields.userEquipId;
  v26 = (DeckServant_o *)sub_B170CC(DeckServant_TypeInfo, v18, v19, v20, v21);
  DeckServant___ctor_16648360(v26, max_length, userEquipId, 0LL);
  *(_QWORD *)(v10 + 48) = v26;
  v27 = v10 + 48;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 48), (System_Int32_array **)v26, v28, v29, v30, v31, v32, v33);
  v38 = v24->fields.memberList;
  if ( !v38 )
    goto LABEL_30;
  v39 = *(_QWORD *)&v38->max_length;
  if ( (int)v39 >= 1 )
  {
    v40 = 0;
    v41 = 8LL;
    while ( 1 )
    {
      v42 = *(PartyOrganizationListViewItem_o **)((char *)&v38->obj.klass + v41 * 4);
      v43 = sub_B170CC(DeckServantData_TypeInfo, v34, v35, v36, v37);
      DeckServantData___ctor((DeckServantData_o *)v43, 0LL);
      if ( !v43 )
        break;
      v44 = v40 + 1;
      *(_DWORD *)(v43 + 16) = v40 + 1;
      if ( !v42 )
        break;
      userServantEntity = v42->fields.userServantEntity;
      if ( userServantEntity )
      {
        v47 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v46 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v64, 0LL, 0LL);
        v47 = *(_OWORD *)&v64[0].fields.currentCryptoKey;
        v46 = *(_OWORD *)&v64[0].fields.fakeValue;
      }
      *(_OWORD *)&v64[1].fields.currentCryptoKey = v47;
      *(_OWORD *)&v64[1].fields.fakeValue = v46;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v63 = v64[1];
      *(_QWORD *)(v43 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
      *(_BYTE *)(v43 + 40) = v42->fields.isFollower;
      EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(v42, 0LL);
      *(_QWORD *)(v43 + 32) = EquipList;
      sub_B16F98((BattleServantConfConponent_o *)(v43 + 32), EquipList, v49, v50, v51, v52, v53, v54);
      *(_DWORD *)(v43 + 60) = v42->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v27 )
        break;
      v55 = *(_DWORD **)(*(_QWORD *)v27 + 16LL);
      if ( !v55 )
        break;
      v56 = sub_B170BC(v43, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
      if ( !v56 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      if ( v40 < v55[6] )
      {
        *(_QWORD *)&v55[v41] = v43;
        sub_B16F98((BattleServantConfConponent_o *)&v55[v41], (System_Int32_array **)v43, v35, v57, v58, v59, v60, v61);
        if ( v44 >= (int)v39 )
          return (UserDeckEntity_o *)v10;
        v41 += 2LL;
        ++v40;
        if ( v44 < v38->max_length )
          continue;
      }
      sub_B17100(v56, v34, v35);
      sub_B170A0();
    }
LABEL_30:
    sub_B170D4();
  }
  return (UserDeckEntity_o *)v10;
}


UserEventDeckEntity_o *__fastcall PartyListViewItem__GetUserEventDeck(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x23
  int64_t UserId; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct PartyOrganizationListViewItem_array *memberList; // x20
  int64_t userEquipId; // x21
  DeckServant_o *v18; // x22
  __int64 v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 IsNpcMulitipleOrOnly; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  struct PartyOrganizationListViewItem_array *v31; // x8
  unsigned __int64 v32; // x20
  unsigned __int64 max_length; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v35; // x22
  bool IsUseOldMaster; // w0
  struct QuestRestrictionInfo_o *v37; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  __int64 v40; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v42; // q0
  __int128 v43; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int32_t InitPos_k__BackingField; // w8
  __int64 v52; // x9
  int v53; // w8
  unsigned int *v54; // x22
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  unsigned int *v60; // x0
  UserEventDeckEntity_o *v62; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64[2]; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_40FDD9B & 1) == 0 )
  {
    sub_B16FFC(&DeckServantData_TypeInfo, method);
    sub_B16FFC(&DeckServant_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&UserEventDeckEntity_TypeInfo, v9);
    byte_40FDD9B = 1;
  }
  memset(&v64[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v10 = sub_B170CC(UserEventDeckEntity_TypeInfo, method, v2, v3, v4);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v10, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v10 )
    goto LABEL_54;
  *(_QWORD *)(v10 + 16) = UserId;
  *(_DWORD *)(v10 + 24) = this->fields.id;
  *(_DWORD *)(v10 + 28) = this->fields.index + 1;
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_54;
  userEquipId = this->fields.userEquipId;
  v18 = (DeckServant_o *)sub_B170CC(DeckServant_TypeInfo, v12, v13, v14, v15);
  DeckServant___ctor_16648360(v18, memberList->max_length, userEquipId, 0LL);
  *(_QWORD *)(v10 + 32) = v18;
  v19 = v10 + 32;
  v62 = (UserEventDeckEntity_o *)v10;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
  v31 = this->fields.memberList;
  if ( !v31 )
LABEL_54:
    sub_B170D4();
  v32 = 0LL;
  while ( 1 )
  {
    max_length = v31->max_length;
    if ( (__int64)v32 >= (int)max_length )
      return v62;
    if ( v32 >= max_length )
      goto LABEL_55;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v35 = v31->m_Items[v32];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_25;
    }
    IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    v37 = this->fields.questRestrictionInfo;
    if ( IsUseOldMaster )
    {
      if ( !v37 )
        goto LABEL_54;
      isNpcEditablePos = v37->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v35 || !v37 )
        goto LABEL_54;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v35->fields._InitPos_k__BackingField,
                        0LL);
      v37 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v37 )
        goto LABEL_25;
    }
    IsNpcMulitipleOrOnly = QuestRestrictionInfo__IsNpcMulitipleOrOnly(v37, 0LL);
    if ( (IsNpcMulitipleOrOnly & 1) != 0 )
    {
      if ( !v35 )
        goto LABEL_54;
      if ( v35->fields.isFixNpc
        && v35->fields.isFollower
        && !isNpcEditablePos
        && !v35->fields.isMyServantOrNpcRestriction )
      {
        ++v32;
        goto LABEL_50;
      }
    }
LABEL_25:
    v40 = sub_B170CC(DeckServantData_TypeInfo, v27, v28, v29, v30);
    DeckServantData___ctor((DeckServantData_o *)v40, 0LL);
    if ( !v40 )
      goto LABEL_54;
    *(_DWORD *)(v40 + 16) = v32 + 1;
    if ( !v35 )
      goto LABEL_54;
    userServantEntity = v35->fields.userServantEntity;
    if ( userServantEntity )
    {
      v43 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      v42 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    }
    else
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v64, 0LL, 0LL);
      v43 = *(_OWORD *)&v64[0].fields.currentCryptoKey;
      v42 = *(_OWORD *)&v64[0].fields.fakeValue;
    }
    *(_OWORD *)&v64[1].fields.currentCryptoKey = v43;
    *(_OWORD *)&v64[1].fields.fakeValue = v42;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v63 = v64[1];
    *(_QWORD *)(v40 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
    *(_BYTE *)(v40 + 40) = v35->fields.isFollower;
    EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(v35, 0LL);
    *(_QWORD *)(v40 + 32) = EquipList;
    sub_B16F98((BattleServantConfConponent_o *)(v40 + 32), EquipList, v45, v46, v47, v48, v49, v50);
    InitPos_k__BackingField = v35->fields._InitPos_k__BackingField;
    v52 = *(_QWORD *)(v40 + 24);
    *(_QWORD *)(v40 + 48) = 0LL;
    *(_DWORD *)(v40 + 60) = InitPos_k__BackingField;
    if ( v52 )
    {
      v53 = 0;
LABEL_42:
      if ( (v53 & isNpcEditablePos & 1) != 0 )
      {
        *(_QWORD *)(v40 + 48) = v35->fields.npcFollowerSvtId;
        if ( v35->fields.isFixNpc )
          *(_BYTE *)(v40 + 40) = 0;
      }
      goto LABEL_45;
    }
    if ( !v35->fields.isMyServantOrNpcRestriction || !v35->fields.isFollower )
    {
      v53 = !v35->fields.isMyServantOrNpcRestriction;
      goto LABEL_42;
    }
    *(_QWORD *)(v40 + 48) = v35->fields.npcFollowerSvtId;
LABEL_45:
    if ( !*(_QWORD *)v19 )
      goto LABEL_54;
    v54 = *(unsigned int **)(*(_QWORD *)v19 + 16LL);
    if ( !v54 )
      goto LABEL_54;
    IsNpcMulitipleOrOnly = sub_B170BC(v40, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !IsNpcMulitipleOrOnly )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    if ( v32 >= v54[6] )
    {
LABEL_55:
      sub_B17100(IsNpcMulitipleOrOnly, v27, v28);
      sub_B170A0();
    }
    v60 = &v54[2 * v32];
    *((_QWORD *)v60 + 4) = v40;
    sub_B16F98((BattleServantConfConponent_o *)(v60 + 8), (System_Int32_array **)v40, v28, v55, v56, v57, v58, v59);
    ++v32;
LABEL_50:
    v31 = this->fields.memberList;
    if ( !v31 )
      goto LABEL_54;
  }
}


int32_t __fastcall PartyListViewItem__GetUserServantDeployIndex(
        PartyListViewItem_o *this,
        UserServantEntity_array *userServantList,
        System_Int64_array *npcSvtIds,
        const MethodInfo *method)
{
  unsigned __int64 v6; // x21
  BalanceConfig_c *v7; // x0

  if ( (byte_40FDD85 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userServantList);
    byte_40FDD85 = 1;
  }
  v6 = 0LL;
  v7 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v6 >= v7->static_fields->DeckMemberMax )
      break;
    if ( !userServantList )
      goto LABEL_17;
    if ( v6 >= userServantList->max_length )
      goto LABEL_18;
    if ( !userServantList->m_Items[v6] )
    {
      if ( !npcSvtIds )
LABEL_17:
        sub_B170D4();
      if ( v6 >= npcSvtIds->max_length )
      {
LABEL_18:
        sub_B17100(v7, userServantList, npcSvtIds);
        sub_B170A0();
      }
      if ( !npcSvtIds->m_Items[v6] )
        return v6;
    }
    ++v6;
  }
  LODWORD(v6) = -1;
  return v6;
}


System_Int32_array *__fastcall PartyListViewItem__GetWaveBattleEnemyClassIds(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.waveBattleEnemyClassIds;
}


int32_t __fastcall PartyListViewItem__GetWeareMember(
        PartyListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v4; // x21
  __int64 v6; // x19
  int max_length; // w9
  PartyOrganizationListViewItem_o *v8; // x0

  if ( userSvtId >= 1 )
  {
    memberList = this->fields.memberList;
    v4 = this;
    if ( !memberList )
LABEL_9:
      sub_B170D4();
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        sub_B17100(this, userSvtId, method);
        sub_B170A0();
      }
      v8 = memberList->m_Items[v6];
      if ( v8 )
      {
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v8, 0LL);
        if ( this == (PartyListViewItem_o *)userSvtId )
          return v6;
        memberList = v4->fields.memberList;
        ++v6;
        if ( memberList )
          continue;
      }
      goto LABEL_9;
    }
  }
  LODWORD(v6) = -1;
  return v6;
}


bool __fastcall PartyListViewItem__IsDeckEmpty(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t v4; // w21
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v7; // x8

  if ( (byte_40FDD93 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FDD93 = 1;
  }
  v4 = 0;
  v5 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v4 >= v5->static_fields->DeckMemberMax )
      return 1;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( v4 >= memberList->max_length )
    {
      sub_B17100(v5, method, v2);
      sub_B170A0();
    }
    v7 = memberList->m_Items[v4];
    if ( !v7 )
LABEL_14:
      sub_B170D4();
    ++v4;
    if ( v7->fields.userServantEntity )
      return 0;
  }
}


bool __fastcall PartyListViewItem__IsDeckInit(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t v4; // w21
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v7; // x8
  System_String_o *deckName; // x20
  System_String_o *DefaultDeckName; // x1

  if ( (byte_40FDD92 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FDD92 = 1;
  }
  v4 = 0;
  v5 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v4 >= v5->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_16;
    if ( v4 >= memberList->max_length )
    {
      sub_B17100(v5, method, v2);
      sub_B170A0();
    }
    v7 = memberList->m_Items[v4];
    if ( !v7 )
LABEL_16:
      sub_B170D4();
    ++v4;
    if ( v7->fields.userServantEntity )
      return 0;
  }
  if ( this->fields.isDeckNameDefault )
    return 1;
  deckName = this->fields.deckName;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, method);
  return System_String__op_Equality(deckName, DefaultDeckName, 0LL);
}


bool __fastcall PartyListViewItem__IsEquipEmpty(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v7; // x0

  if ( (byte_40FDD94 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FDD94 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v5->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( i >= memberList->max_length )
    {
      sub_B17100(v5, method, v2);
      sub_B170A0();
    }
    v7 = memberList->m_Items[i];
    if ( !v7 )
LABEL_14:
      sub_B170D4();
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId(v7, 0LL) > 0 )
      return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyListViewItem__IsIdenticalEquipMember(
        PartyListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int max_length; // w8
  unsigned int v7; // w23
  PartyOrganizationListViewItem_o *v8; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16

  v4 = this;
  if ( (byte_40FDD9D & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
    byte_40FDD9D = 1;
  }
  if ( svtId < 1 )
    return 0;
  memberList = v4->fields.memberList;
  if ( !memberList )
LABEL_17:
    sub_B170D4();
  max_length = memberList->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&svtId, method);
      sub_B170A0();
    }
    v8 = memberList->m_Items[v7];
    if ( !v8 )
      goto LABEL_17;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v8, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(EquipSvtId, 0LL);
    if ( (_DWORD)this == svtId )
      return 1;
    max_length = memberList->max_length;
    if ( (int)++v7 >= max_length )
      return 0;
  }
}


bool __fastcall PartyListViewItem__IsNeedDeckPosReset(
        PartyListViewItem_o *this,
        UserEventDeckEntity_o *deck,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  bool IsUseOldMaster; // w21
  unsigned __int64 i; // x22
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v12; // x24
  QuestRestrictionInfo_o *v13; // x0
  bool IsNpcMulitipleOrOnly; // w0
  struct QuestRestrictionInfo_o *v15; // x8
  BalanceConfig_c *v16; // x0

  if ( (byte_40FDD84 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, deck);
    byte_40FDD84 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_31:
    sub_B170D4();
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  for ( i = 0LL; ; ++i )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v16->static_fields->DeckMemberMax )
      return 0;
    if ( !deck )
      goto LABEL_31;
    deckInfo = deck->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_31;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_31;
    if ( i >= svts->max_length )
    {
      sub_B17100(v16, v6, v7);
      sub_B170A0();
    }
    v12 = svts->m_Items[i];
    v13 = this->fields.questRestrictionInfo;
    if ( IsUseOldMaster )
      break;
    if ( !v12 || !v13 )
      goto LABEL_31;
    if ( !QuestRestrictionInfo__IsEditablePos(v13, v12->fields.initPos, 0LL) )
      goto LABEL_23;
LABEL_24:
    ;
  }
  if ( !v13 )
    goto LABEL_31;
  IsNpcMulitipleOrOnly = QuestRestrictionInfo__IsNpcMulitipleOrOnly(v13, 0LL);
  v15 = this->fields.questRestrictionInfo;
  if ( !IsNpcMulitipleOrOnly )
    goto LABEL_15;
  if ( !v15 )
    goto LABEL_31;
  if ( v15->fields.isNpcEditablePos )
  {
LABEL_15:
    if ( !v12 || !v15 )
      goto LABEL_31;
    if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(
           this->fields.questRestrictionInfo,
           v12->fields.initPos,
           0LL) )
    {
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  if ( !v12 )
    goto LABEL_31;
LABEL_23:
  if ( v12->fields.initPos == v12->fields.id )
    goto LABEL_24;
  return 1;
}


bool __fastcall PartyListViewItem__IsSpecificMenuKind(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    LOBYTE(questRestrictionInfo) = questRestrictionInfo->fields.eventDeckNum > 0;
  return (unsigned __int8)questRestrictionInfo | ((unsigned int)(this->fields.menuKind - 1) < 7);
}


bool __fastcall PartyListViewItem__IsSpecificMenuKind_32479532(
        int32_t menuKind,
        bool isEventDeck,
        const MethodInfo *method)
{
  return (unsigned int)(menuKind - 1) < 7 || isEventDeck;
}


bool __fastcall PartyListViewItem__IsSupportOnly(PartyListViewItem_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL);
  return (char)questRestrictionInfo;
}


void __fastcall PartyListViewItem__LeaderOnly(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t i; // w20
  PartyOrganizationListViewItem_o *v5; // x0
  BalanceConfig_c *v6; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v8; // x9
  PartyOrganizationListViewItem_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FDD91 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FDD91 = 1;
  }
  for ( i = 1; ; ++i )
  {
    v6 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    v8 = *(_QWORD *)&memberList->max_length;
    if ( i >= BalanceConfig_TypeInfo->static_fields->DeckMemberMax )
      break;
    if ( i >= (unsigned int)v8 )
      goto LABEL_18;
    v5 = memberList->m_Items[i];
    if ( !v5 )
      goto LABEL_17;
    if ( !v5->fields.isFollower )
      PartyOrganizationListViewItem__Empty(v5, 0LL);
  }
  if ( !(_DWORD)v8 )
  {
LABEL_18:
    sub_B17100(v6, method, v2);
    sub_B170A0();
  }
  v9 = memberList->m_Items[0];
  if ( !v9 )
LABEL_17:
    sub_B170D4();
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v9, 0LL);
  PartyListViewItem__CheckRestriction(this, v10);
}


void __fastcall PartyListViewItem__Modify(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t i; // w21
  struct PartyOrganizationListViewItem_array *memberList; // x9
  PartyOrganizationListViewItem_o *v6; // x9
  struct PartyOrganizationListViewItem_array *v7; // x9
  PartyOrganizationListViewItem_o *v8; // x0
  BalanceConfig_c *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FDD8B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FDD8B = 1;
  }
  for ( i = 0; ; ++i )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v9->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_16;
    if ( i >= memberList->max_length )
    {
LABEL_17:
      sub_B17100(v9, method, v2);
      sub_B170A0();
    }
    v6 = memberList->m_Items[i];
    if ( !v6 )
      goto LABEL_16;
    v6->fields._NowPos_k__BackingField = i + 1;
    v7 = this->fields.memberList;
    if ( !v7 )
      goto LABEL_16;
    if ( i >= v7->max_length )
      goto LABEL_17;
    v8 = v7->m_Items[i];
    if ( !v8 )
LABEL_16:
      sub_B170D4();
    PartyOrganizationListViewItem__Modify(v8, 0LL);
  }
  PartyListViewItem__CheckRestriction(this, method);
  PartyListViewItem__UpdateEventEffect(this, v10);
}


void __fastcall PartyListViewItem__Set(PartyListViewItem_o *this, PartyListViewItem_o *item, const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int v26; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v28; // x0
  struct PartyOrganizationListViewItem_array *v29; // x26
  System_Int32_array **v30; // x0
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x21
  Il2CppClass **v37; // x0
  struct PartyOrganizationListViewItem_array *v38; // x8
  PartyOrganizationListViewItem_o *v39; // x8
  il2cpp_array_size_t v40; // w24
  struct System_String_o *deckName; // x1
  struct System_Int32_array *waveBattleEnemyClassIds; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_40FDD8C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    byte_40FDD8C = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_21:
    sub_B170D4();
  this->fields.menuKind = item->fields.menuKind;
  this->fields.maxCost = item->fields.maxCost;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v26 = 1;
  this->fields.id = item->fields.id;
  while ( 1 )
  {
    v30 = (System_Int32_array **)BalanceConfig_TypeInfo;
    v40 = v26 - 1;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = (System_Int32_array **)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v40 >= v30[23]->m_Items[32] )
      break;
    memberList = item->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( v40 >= memberList->max_length )
      goto LABEL_22;
    v28 = memberList->m_Items[v40];
    if ( !v28 )
      goto LABEL_21;
    v29 = this->fields.memberList;
    v30 = (System_Int32_array **)PartyOrganizationListViewItem__Clone(v28, -1, 0LL);
    if ( !v29 )
      goto LABEL_21;
    v36 = v30;
    if ( v30 )
    {
      v30 = (System_Int32_array **)sub_B170BC(v30, v29->obj.klass->_1.element_class);
      if ( !v30 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( v40 >= v29->max_length )
      goto LABEL_22;
    v37 = &v29->obj.klass + (int)v40;
    v37[4] = (Il2CppClass *)v36;
    sub_B16F98((BattleServantConfConponent_o *)(v37 + 4), v36, v20, v31, v32, v33, v34, v35);
    v38 = this->fields.memberList;
    if ( !v38 )
      goto LABEL_21;
    if ( v40 >= v38->max_length )
    {
LABEL_22:
      sub_B17100(v30, v19, v20);
      sub_B170A0();
    }
    v39 = v38->m_Items[v40];
    if ( !v39 )
      goto LABEL_21;
    v39->fields._NowPos_k__BackingField = v26++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.deckName,
    (System_Int32_array **)deckName,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.waveBattleEnemyClassIds,
    (System_Int32_array **)waveBattleEnemyClassIds,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
}


void __fastcall PartyListViewItem__SetDeckName(
        PartyListViewItem_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_String_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *DefaultDeckName; // x1
  struct System_String_o **p_deckName; // x0

  if ( System_String__IsNullOrEmpty(name, 0LL)
    || (v6 = PartyListViewItem__get_DefaultDeckName(this, v5), System_String__op_Equality(name, v6, 0LL)) )
  {
    this->fields.isDeckNameDefault = 1;
    DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v5);
    p_deckName = &this->fields.deckName;
    this->fields.deckName = DefaultDeckName;
  }
  else
  {
    this->fields.deckName = name;
    p_deckName = &this->fields.deckName;
    DefaultDeckName = name;
    this->fields.isDeckNameDefault = 0;
  }
  sub_B16F98(
    (BattleServantConfConponent_o *)p_deckName,
    (System_Int32_array **)DefaultDeckName,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetEquip(
        PartyListViewItem_o *this,
        int32_t num,
        int64_t userSvtId,
        const MethodInfo *method)
{
  il2cpp_array_size_t i; // w23
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v9; // x8
  PartyOrganizationListViewItem_o *v10; // x22
  int32_t cost; // w25
  int32_t v12; // w25
  int32_t v13; // w8
  BalanceConfig_c *v14; // x0

  if ( (byte_40FDD8D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&num);
    byte_40FDD8D = 1;
  }
  for ( i = 0; ; ++i )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v14->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_16;
    if ( i >= memberList->max_length )
    {
      sub_B17100(v14, *(_QWORD *)&num, userSvtId);
      sub_B170A0();
    }
    v9 = &memberList->obj.klass + (int)i;
    v10 = (PartyOrganizationListViewItem_o *)v9[4];
    if ( !v10 )
LABEL_16:
      sub_B170D4();
    cost = this->fields.cost;
    if ( num == i )
    {
      this->fields.cost = cost
                        - PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v9[4], 0LL);
      PartyOrganizationListViewItem__SetEquipUserServantId(v10, userSvtId, 0LL);
      v12 = this->fields.cost;
      v13 = PartyOrganizationListViewItem__get_MargeCost(v10, 0LL) + v12;
    }
    else
    {
      v13 = cost
          - PartyOrganizationListViewItem__RemoveEquipUserServantId(
              (PartyOrganizationListViewItem_o *)v9[4],
              userSvtId,
              0LL);
    }
    this->fields.cost = v13;
  }
  PartyListViewItem__CheckRestriction(this, *(const MethodInfo **)&num);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember(
        PartyListViewItem_o *this,
        int32_t num,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v6; // x19
  PartyOrganizationListViewItem_o *v7; // x0
  int32_t cost; // w23
  struct PartyOrganizationListViewItem_array *v10; // x8
  PartyOrganizationListViewItem_o *v11; // x0
  struct PartyOrganizationListViewItem_array *v12; // x8
  PartyOrganizationListViewItem_o *v13; // x0
  int32_t v14; // w20
  const MethodInfo *v15; // x1

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_11;
  if ( memberList->max_length <= num )
    goto LABEL_12;
  v6 = this;
  v7 = memberList->m_Items[num];
  if ( !v7 )
    goto LABEL_11;
  cost = v6->fields.cost;
  this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(v7, 0LL);
  v10 = v6->fields.memberList;
  v6->fields.cost = cost - (_DWORD)this;
  if ( !v10 )
    goto LABEL_11;
  if ( v10->max_length <= num )
    goto LABEL_12;
  v11 = v10->m_Items[num];
  if ( !v11 || (PartyOrganizationListViewItem__Modify_32313760(v11, item, 0LL), (v12 = v6->fields.memberList) == 0LL) )
LABEL_11:
    sub_B170D4();
  if ( v12->max_length <= num )
  {
LABEL_12:
    sub_B17100(this, *(_QWORD *)&num, item);
    sub_B170A0();
  }
  v13 = v12->m_Items[num];
  if ( !v13 )
    goto LABEL_11;
  v14 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v13, 0LL) + v14;
  PartyListViewItem__CheckRestriction(v6, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember_32479556(
        PartyListViewItem_o *this,
        int32_t idx,
        PartyOrganizationListViewItem_o *member,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v6; // x19
  PartyOrganizationListViewItem_o *v7; // x0
  int32_t cost; // w24
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct PartyOrganizationListViewItem_array *v15; // x23
  Il2CppClass **v16; // x0
  struct PartyOrganizationListViewItem_array *v17; // x8
  PartyOrganizationListViewItem_o *v18; // x0
  struct PartyOrganizationListViewItem_array *v19; // x8
  PartyOrganizationListViewItem_o *v20; // x0
  int32_t v21; // w20

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_17;
  if ( memberList->max_length <= idx )
    goto LABEL_18;
  v6 = this;
  v7 = memberList->m_Items[idx];
  if ( !v7
    || (cost = v6->fields.cost,
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(v7, 0LL),
        v15 = v6->fields.memberList,
        v6->fields.cost = cost - (_DWORD)this,
        !v15) )
  {
LABEL_17:
    sub_B170D4();
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_B170BC(member, v15->obj.klass->_1.element_class);
    if ( !this )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( v15->max_length <= idx )
    goto LABEL_18;
  v16 = &v15->obj.klass + idx;
  v16[4] = (Il2CppClass *)member;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v16 + 4),
    (System_Int32_array **)member,
    (System_String_array **)member,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( v6->fields.menuKind == 9 )
  {
    v17 = v6->fields.memberList;
    if ( !v17 )
      goto LABEL_17;
    if ( v17->max_length <= idx )
      goto LABEL_18;
    v18 = v17->m_Items[idx];
    if ( !v18 )
      goto LABEL_17;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v18, v6->fields.waveBattleEnemyClassIds, 0LL);
  }
  v19 = v6->fields.memberList;
  if ( !v19 )
    goto LABEL_17;
  if ( v19->max_length <= idx )
  {
LABEL_18:
    sub_B17100(this, *(_QWORD *)&idx, member);
    sub_B170A0();
  }
  v20 = v19->m_Items[idx];
  if ( !v20 )
    goto LABEL_17;
  v21 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v20, 0LL) + v21;
}


bool __fastcall PartyListViewItem__SetNpcFollowerInfo(
        PartyListViewItem_o *this,
        FollowerInfo_o **follower,
        int32_t *followerClassId,
        FollowerInfo_array *npcFollowerInfoList,
        int64_t npcFollowerSvtId,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v23; // x28
  unsigned int v24; // w20
  FollowerInfo_o *v25; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x27
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *v31; // x8
  int32_t v32; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  QuestRestrictionInfo_o *v39; // x19
  System_Int32_array *OverwriteIndividuality; // x0
  QuestRestrictionInfo_o *v41; // x24
  __int64 v42; // x19
  int32_t v43; // w0
  bool result; // w0
  int32_t *v45; // [xsp+8h] [xbp-78h]
  __int64 value; // [xsp+10h] [xbp-70h]
  PartyListViewItem_o *v47; // [xsp+18h] [xbp-68h]
  UserServantEntity_o *v48; // [xsp+20h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_40FDD88 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, follower);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v15);
    sub_B16FFC(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FDD88 = 1;
  }
  v48 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !npcFollowerInfoList )
    goto LABEL_39;
  max_length = npcFollowerInfoList->max_length;
  if ( max_length < 1 )
    return 0;
  v45 = followerClassId;
  v23 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster;
  v24 = 0;
  v47 = this;
  while ( 1 )
  {
    if ( v24 >= max_length )
    {
      sub_B17100(Master_WarQuestSelectionMaster, v20, v21);
      sub_B170A0();
    }
    v25 = npcFollowerInfoList->m_Items[v24];
    if ( !v25 )
      goto LABEL_39;
    if ( v25->fields.npcFollowerSvtId == npcFollowerSvtId )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_39;
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v25, 0, ReturnTypeByQuestId, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_39;
      if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &entity,
             npcFollowerSvtId,
             (const MethodInfo_266F60C *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
      {
        v31 = this->fields.questRestrictionInfo;
        if ( !v31 )
          goto LABEL_39;
        v32 = FollowerInfo__GetReturnTypeByQuestId(v31->fields.questId, 0LL);
        NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v25, 0, v32, 0LL);
        if ( !this->fields.questRestrictionInfo )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_31261700(
                                                                        this->fields.questRestrictionInfo,
                                                                        NpcServantIndividuality,
                                                                        pos,
                                                                        0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          break;
        goto LABEL_34;
      }
      if ( !v23 )
        goto LABEL_39;
      if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
              v23,
              &v48,
              npcFollowerSvtId,
              (const MethodInfo_266F60C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
        goto LABEL_27;
      if ( !v48 )
        goto LABEL_39;
      if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v48, 0LL) )
      {
        if ( !v48 )
          goto LABEL_39;
        v39 = this->fields.questRestrictionInfo;
        OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                   (NpcServantFollowerEntity_o *)v48,
                                   0LL);
        if ( !v39 )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_31261700(
                                                                        v39,
                                                                        OverwriteIndividuality,
                                                                        pos,
                                                                        0LL);
      }
      else
      {
LABEL_27:
        if ( !ServantLeaderInfo )
          goto LABEL_39;
        v41 = this->fields.questRestrictionInfo;
        v42 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        *(_QWORD *)&v50.fields.fakeValue = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          value = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v50.fields.fakeValue = value;
        }
        *(_QWORD *)&v50.fields.currentCryptoKey = v42;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
        if ( !v41 )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                                        v41,
                                                                        v43,
                                                                        ServantLeaderInfo->fields.limitCount,
                                                                        ServantLeaderInfo->fields.dispLimitCount,
                                                                        pos,
                                                                        0,
                                                                        0LL);
        this = v47;
      }
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        break;
    }
LABEL_34:
    max_length = npcFollowerInfoList->max_length;
    if ( (int)++v24 >= max_length )
      return 0;
  }
  *follower = v25;
  sub_B16F98((BattleServantConfConponent_o *)follower, (System_Int32_array **)v25, v21, v34, v35, v36, v37, v38);
  if ( !ServantLeaderInfo )
LABEL_39:
    sub_B170D4();
  result = 1;
  *v45 = ServantLeaderInfo->fields.classId;
  return result;
}


void __fastcall PartyListViewItem__SetUserEquip(
        PartyListViewItem_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SwapMember(
        PartyListViewItem_o *this,
        int32_t num1,
        int32_t num2,
        bool notChangeInitPos,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  unsigned int max_length; // w9
  PartyOrganizationListViewItem_o *v7; // x0

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_7;
  max_length = memberList->max_length;
  if ( max_length <= num1 || max_length <= num2 )
  {
    sub_B17100(this, *(_QWORD *)&num1, *(_QWORD *)&num2);
    sub_B170A0();
  }
  v7 = memberList->m_Items[num1];
  if ( !v7 )
LABEL_7:
    sub_B170D4();
  PartyOrganizationListViewItem__Swap(v7, memberList->m_Items[num2], notChangeInitPos, 0LL);
}


void __fastcall PartyListViewItem__UpdateEventEffect(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x19
  int max_length; // w8
  unsigned int v5; // w20
  PartyOrganizationListViewItem_o *v6; // x0

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_9;
  max_length = memberList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v6 = memberList->m_Items[v5];
      if ( !v6 )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect(v6, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_B170D4();
  }
}


int32_t __fastcall PartyListViewItem__get_Cost(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.cost;
}


int64_t __fastcall PartyListViewItem__get_DeckId(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall PartyListViewItem__get_DeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.deckName;
}


int32_t __fastcall PartyListViewItem__get_DeckNum(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.index + 1;
}


System_String_o *__fastcall PartyListViewItem__get_DefaultDeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  Il2CppObject *v5; // x0
  int v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FDD9E & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10324, v3);
    byte_40FDD9E = 1;
  }
  v7 = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10324, 0LL);
  v7 = this->fields.index + 1;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Format(v4, v5, 0LL);
}


int32_t __fastcall PartyListViewItem__get_MaxCost(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxCost;
}


int64_t __fastcall PartyListViewItem__get_UserEquipId(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.userEquipId;
}


void __fastcall PartyListViewItem___c__DisplayClass19_0___ctor(
        PartyListViewItem___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass19_0____ctor_b__0(
        PartyListViewItem___c__DisplayClass19_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.npcFollowerSvtId == this->fields.npcSvtId;
}


void __fastcall PartyListViewItem___c__DisplayClass19_1___ctor(
        PartyListViewItem___c__DisplayClass19_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass19_1____ctor_b__1(
        PartyListViewItem___c__DisplayClass19_1_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass19_2___ctor(
        PartyListViewItem___c__DisplayClass19_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass19_2____ctor_b__2(
        PartyListViewItem___c__DisplayClass19_2_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass19_3___ctor(
        PartyListViewItem___c__DisplayClass19_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass19_3____ctor_b__3(
        PartyListViewItem___c__DisplayClass19_3_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass25_0___ctor(
        PartyListViewItem___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass25_0___GetSupportInitIndex_b__0(
        PartyListViewItem___c__DisplayClass25_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.npcInitIdx == this->fields.chkIdx;
}