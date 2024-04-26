void __fastcall PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationListViewItem_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4355B57 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem___TypeInfo);
    byte_4355B57 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationListViewItem_array *)sub_B706AC(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberList = v4;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall PartyListViewItem___ctor_32580180(
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  PartyOrganizationListViewItem_o *v30; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x19
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v36; // x8
  int32_t DeckMainMemberMax; // w28
  UserServantEntity_array *v38; // x21
  struct PartyOrganizationListViewItem_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UserServantEntity_array *v46; // x20
  int32_t v47; // w21
  struct DeckServant_o *v48; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v51; // x8
  int32_t initPos; // w25
  int v53; // w9
  struct PartyOrganizationListViewItem_array *v54; // x19
  PartyOrganizationListViewItem_o *v55; // x0
  System_Int32_array **v56; // x24
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  Il2CppClass **v63; // x0
  UserServantEntity_o *v64; // x19
  struct PartyOrganizationListViewItem_array *v65; // x28
  UserServantEntity_array *v66; // x27
  PartyListViewItem_o *v67; // x20
  FollowerInfo_o *v68; // x22
  UserDeckEntity_o *v69; // x26
  System_Int64_array *EquipList; // x23
  PartyOrganizationListViewItem_o *v71; // x24
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  Il2CppClass **v78; // x0
  PartyOrganizationListViewItem_o *v79; // x24
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  Il2CppClass **v86; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v89; // x0
  __int64 v90; // x0
  int32_t v93; // [xsp+34h] [xbp-7Ch]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+40h] [xbp-70h]
  int32_t v96; // [xsp+5Ch] [xbp-54h]

  if ( (byte_4355B58 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem___TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_4355B58 = 1;
  }
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !deck )
    goto LABEL_68;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v32);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_68;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0LL);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0LL);
  v36 = BalanceConfig_TypeInfo;
  if ( FollowerIndex <= 0 )
  {
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v36 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v36->static_fields->DeckMainMemberMax;
  }
  else
  {
    DeckMainMemberMax = FollowerIndex;
  }
  if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
  {
    v38 = UserServantList;
    j_il2cpp_runtime_class_init_0(v36);
    v36 = BalanceConfig_TypeInfo;
  }
  else
  {
    v38 = UserServantList;
  }
  v39 = (struct PartyOrganizationListViewItem_array *)sub_B706AC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v36->static_fields->DeckMemberMax);
  this->fields.memberList = v39;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v30 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v30 )
    goto LABEL_68;
  if ( !*(_QWORD *)&v30->fields.sortIndex )
  {
    v46 = v38;
    goto LABEL_27;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v30 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v30
    || (follower = *(FollowerInfo_o **)&v30->fields.sortIndex,
        (v30 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || (v46 = v38,
        followerClassId = v30->fields.sortValue0,
        (v30 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_68:
    sub_B7076C(v30, v31);
  }
  followerDeckId = HIDWORD(v30->fields.sortValue0);
LABEL_27:
  v47 = 0;
  v93 = DeckMainMemberMax;
  while ( 1 )
  {
    v30 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v47 >= *(_DWORD *)(*(_QWORD *)&v30->fields.classId + 156LL) )
      break;
    v48 = deck->fields.deckInfo;
    if ( !v48 )
      goto LABEL_68;
    svts = v48->fields.svts;
    if ( !svts )
      goto LABEL_68;
    max_length = svts->max_length;
    if ( v47 >= max_length )
    {
      v53 = v47 + 1;
      initPos = v47 + 1;
    }
    else
    {
      if ( v47 >= (unsigned int)max_length )
        goto LABEL_69;
      v51 = svts->m_Items[v47];
      if ( !v51 )
        goto LABEL_68;
      initPos = v51->fields.initPos;
      v53 = v47 + 1;
    }
    v96 = v53;
    if ( v53 == DeckMainMemberMax )
    {
      v54 = *p_memberList;
      v55 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      v56 = (System_Int32_array **)v55;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_38389696(
          v55,
          v47,
          follower,
          followerClassId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0LL);
        if ( !v54 )
          goto LABEL_68;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_38392504(v55, v47, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v54 )
          goto LABEL_68;
      }
      if ( v56 )
      {
        v30 = (PartyOrganizationListViewItem_o *)sub_B70754(v56, v54->obj.klass->_1.element_class);
        if ( !v30 )
          goto LABEL_70;
      }
      if ( v47 >= v54->max_length )
        goto LABEL_69;
      v63 = &v54->obj.klass + v47;
      v63[4] = (Il2CppClass *)v56;
      sub_B70630((BattleServantConfConponent_o *)(v63 + 4), v56, v57, v58, v59, v60, v61, v62);
    }
    else
    {
      if ( !v46 )
        goto LABEL_68;
      if ( v47 >= v46->max_length )
        goto LABEL_69;
      v64 = v46->m_Items[v47];
      v65 = *p_memberList;
      if ( v64 )
      {
        v66 = v46;
        v67 = this;
        v68 = follower;
        v69 = deck;
        EquipList = UserDeckEntity__GetEquipList(deck, v47, 0LL);
        v71 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_38380420(
          v71,
          v47,
          v64,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v65 )
          goto LABEL_68;
        if ( v71 )
        {
          v30 = (PartyOrganizationListViewItem_o *)sub_B70754(v71, v65->obj.klass->_1.element_class);
          if ( !v30 )
            goto LABEL_70;
        }
        if ( v47 >= v65->max_length )
          goto LABEL_69;
        deck = v69;
        v78 = &v65->obj.klass + v47;
        v78[4] = (Il2CppClass *)v71;
        sub_B70630((BattleServantConfConponent_o *)(v78 + 4), (System_Int32_array **)v71, v72, v73, v74, v75, v76, v77);
        follower = v68;
        this = v67;
        v46 = v66;
      }
      else
      {
        v79 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_38392504(v79, v47, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v65 )
          goto LABEL_68;
        if ( v79 )
        {
          v30 = (PartyOrganizationListViewItem_o *)sub_B70754(v79, v65->obj.klass->_1.element_class);
          if ( !v30 )
          {
LABEL_70:
            v90 = sub_B7078C(v30);
            sub_B70738(v90, 0LL);
          }
        }
        if ( v47 >= v65->max_length )
          goto LABEL_69;
        v86 = &v65->obj.klass + v47;
        v86[4] = (Il2CppClass *)v79;
        sub_B70630((BattleServantConfConponent_o *)(v86 + 4), (System_Int32_array **)v79, v80, v81, v82, v83, v84, v85);
      }
      DeckMainMemberMax = v93;
    }
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_68;
    if ( v47 >= memberList->max_length )
    {
LABEL_69:
      v89 = sub_B70798(v30);
      sub_B70738(v89, 0LL);
    }
    v30 = memberList->m_Items[v47];
    if ( !v30 )
      goto LABEL_68;
    cost = this->fields.cost;
    v47 = v96;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v30, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v31);
}


void __fastcall PartyListViewItem___ctor_32583092(
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  struct System_String_o *DefaultDeckName; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 Member; // x0
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x2
  UserEventDeckEntity_o *v42; // x20
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v44; // x3
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v46; // x0
  PartyListViewItem_o *v47; // x9
  int v48; // w27
  const MethodInfo *v49; // x2
  int32_t v50; // w23
  BalanceConfig_c *v51; // x0
  struct PartyOrganizationListViewItem_array *v52; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int32_t v60; // w8
  const MethodInfo *v61; // x2
  unsigned int v62; // w24
  int32_t *p_initPos; // x8
  struct DeckServant_o *v64; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v66; // x8
  int32_t initPos; // w25
  const MethodInfo *v68; // x6
  int v69; // w23
  struct DeckServant_o *v70; // x8
  struct DeckServantData_array *v71; // x8
  DeckServantData_o *v72; // x8
  _BOOL4 v73; // w19
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v75; // x27
  int32_t v76; // w23
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v78; // x20
  int32_t v79; // w26
  PartyOrganizationListViewItem_o *v80; // x19
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  Il2CppClass **v87; // x0
  FollowerInfo_o *v88; // x23
  struct PartyOrganizationListViewItem_array *v89; // x26
  int32_t v90; // w27
  PartyOrganizationListViewItem_o *v91; // x19
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  Il2CppClass **v98; // x0
  BattleServantConfConponent_o *v99; // x0
  System_Int32_array **v100; // x1
  UserServantEntity_array *v101; // x20
  Il2CppClass **v102; // x23
  Il2CppClass *v103; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v104; // x23
  Il2CppClass *v105; // t1
  Il2CppClass *parent; // x19
  Il2CppClass *declaringType; // x27
  int32_t v108; // w19
  int32_t v109; // w27
  int32_t DispLimitCount; // w0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  UserServantEntity_o *v117; // x23
  struct PartyOrganizationListViewItem_array *v118; // x20
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v120; // x0
  System_Int32_array **v121; // x23
  Il2CppClass **v122; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v125; // x1
  __int64 v126; // x0
  __int64 v127; // x0
  bool *v128; // [xsp+20h] [xbp-C0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+30h] [xbp-B0h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-A8h]
  int v132; // [xsp+40h] [xbp-A0h]
  int v133; // [xsp+44h] [xbp-9Ch]
  PartyListViewItem_o *v134; // [xsp+48h] [xbp-98h]
  int32_t v136; // [xsp+64h] [xbp-7Ch]
  bool v138; // [xsp+74h] [xbp-6Ch]
  int32_t followerClassIda; // [xsp+84h] [xbp-5Ch] BYREF
  FollowerInfo_o *followera; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16

  if ( (byte_4355B59 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem___TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_4355B59 = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v31);
  this->fields.deckName = DefaultDeckName;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.deckName,
    (System_Int32_array **)DefaultDeckName,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v42 = deck;
  if ( !deck )
    goto LABEL_139;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_139;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v41) )
  {
    Member = (__int64)deck->fields.deckInfo;
    if ( !Member )
      goto LABEL_139;
    DeckServant__ResetInitPos((DeckServant_o *)Member, 0LL);
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v44);
  if ( FollowerIndex <= 0 )
  {
    v46 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v46 = BalanceConfig_TypeInfo;
    }
    v42 = deck;
    FollowerIndex = v46->static_fields->DeckMainMemberMax;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_139;
  if ( *(int *)(Member + 48) < 1 )
  {
    v138 = 0;
    v134 = 0LL;
    v48 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_139;
    v47 = *(PartyListViewItem_o **)(Member + 72);
    v48 = 0;
    v138 = v47 != 0LL;
    v134 = v47;
    if ( follower && v47 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_139;
      if ( !v134 )
        goto LABEL_139;
      v48 = *(_DWORD *)(Member + 48);
      Member = (__int64)PartyListViewItem__GetMember(v134, v48 - 1, v49);
      if ( !Member )
        goto LABEL_139;
      v50 = *(_DWORD *)(Member + 348);
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_139;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v50, follower, 0LL);
      v138 = 1;
    }
  }
  v128 = isBaseModify;
  v51 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v51 = BalanceConfig_TypeInfo;
  }
  v52 = (struct PartyOrganizationListViewItem_array *)sub_B706AC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v51->static_fields->DeckMemberMax);
  this->fields.memberList = v52;
  p_memberList = &this->fields.memberList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v52,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_139;
  if ( !*(_QWORD *)(Member + 24) )
  {
    v60 = followerDeckId;
    goto LABEL_49;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member
    || (follower = *(FollowerInfo_o **)(Member + 24),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (followerClassId = *(_DWORD *)(Member + 32),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_139:
    sub_B7076C(Member, v40);
  }
  v60 = *(_DWORD *)(Member + 36);
LABEL_49:
  v136 = v60;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !Member )
    goto LABEL_139;
  v133 = v48 - 1;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Member,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v62 = 0;
  v132 = FollowerIndex - 1;
  while ( 1 )
  {
    Member = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v62 >= *(_DWORD *)(*(_QWORD *)(Member + 184) + 156LL) )
      break;
    if ( v138 )
    {
      Member = (__int64)v134;
      if ( !v134 )
        goto LABEL_139;
      Member = (__int64)PartyListViewItem__GetMember(v134, v62, v61);
      if ( !Member )
        goto LABEL_139;
      p_initPos = (int32_t *)(Member + 348);
    }
    else
    {
      v64 = v42->fields.deckInfo;
      if ( !v64 )
        goto LABEL_139;
      svts = v64->fields.svts;
      if ( !svts )
        goto LABEL_139;
      if ( v62 >= svts->max_length )
        goto LABEL_143;
      v66 = svts->m_Items[v62];
      if ( !v66 )
        goto LABEL_139;
      p_initPos = &v66->fields.initPos;
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_139;
    Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34234816(questRestrictionInfo, initPos, 0LL);
    v69 = Member;
    if ( (Member & 1) != 0 )
    {
      v70 = v42->fields.deckInfo;
      if ( !v70 )
        goto LABEL_139;
      v71 = v70->fields.svts;
      if ( !v71 )
        goto LABEL_139;
      if ( v62 >= v71->max_length )
        goto LABEL_143;
      v72 = v71->m_Items[v62];
      if ( !v72 )
        goto LABEL_139;
      v73 = 0;
      if ( v133 != v62 )
      {
        npcFollowerSvtId = v72->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v73 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v68);
      }
    }
    else
    {
      v73 = 0;
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_139;
    Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, initPos, 0LL);
    if ( Member && ((v69 ^ 1) & 1) == 0 )
    {
      v75 = (FollowerInfo_o *)Member;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL) )
        v76 = 0;
      else
        v76 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v75, 0LL);
      v78 = *p_memberList;
      if ( IsNpc )
        v79 = 0;
      else
        v79 = v136;
      v80 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_38389696(
        v80,
        v62,
        v75,
        v76,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v79,
        initPos,
        0LL);
      if ( !v78 )
        goto LABEL_139;
      if ( v80 )
      {
        Member = sub_B70754(v80, v78->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v62 >= v78->max_length )
        goto LABEL_143;
      v87 = &v78->obj.klass + (int)v62;
LABEL_124:
      v87[4] = (Il2CppClass *)v80;
      sub_B70630((BattleServantConfConponent_o *)(v87 + 4), (System_Int32_array **)v80, v81, v82, v83, v84, v85, v86);
      v42 = deck;
      goto LABEL_132;
    }
    if ( v132 != v62 && !v73 )
    {
      if ( (v69 & 1) != 0 )
      {
        v101 = UserServantList;
        if ( !UserServantList )
          goto LABEL_139;
        if ( v62 >= UserServantList->max_length )
          goto LABEL_143;
        v102 = &UserServantList->obj.klass + (int)v62;
        v105 = v102[4];
        v104 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v102 + 4);
        v103 = v105;
        if ( v105 )
        {
          declaringType = v103->_1.declaringType;
          parent = v103->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v141.fields.currentCryptoKey = declaringType;
          *(_QWORD *)&v141.fields.fakeValue = parent;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v141, 0LL);
          if ( v62 >= UserServantList->max_length )
            goto LABEL_143;
          if ( !*v104 )
            goto LABEL_139;
          v108 = Member;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*v104)[6], 0LL);
          if ( v62 >= UserServantList->max_length )
            goto LABEL_143;
          v109 = Member;
          Member = (__int64)*v104;
          if ( !*v104 )
            goto LABEL_139;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
          Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                     questRestrictionInfo,
                     v108,
                     v109,
                     DispLimitCount,
                     initPos,
                     0,
                     0LL);
          if ( (Member & 1) != 0 )
          {
            if ( v62 >= UserServantList->max_length )
              goto LABEL_143;
            *v104 = 0LL;
            sub_B70630((BattleServantConfConponent_o *)v104, 0LL, v111, v112, v113, v114, v115, v116);
          }
        }
      }
      else
      {
        v101 = UserServantList;
        if ( !UserServantList )
          goto LABEL_139;
      }
      if ( v62 >= v101->max_length )
        goto LABEL_143;
      v117 = v101->m_Items[v62];
      v118 = *p_memberList;
      if ( v117 )
      {
        EquipList = UserEventDeckEntity__GetEquipList(deck, v62, 0LL);
        v80 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_38380420(
          v80,
          v62,
          v117,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v118 )
          goto LABEL_139;
      }
      else
      {
        v80 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_38392504(v80, v62, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v118 )
          goto LABEL_139;
      }
      if ( v80 )
      {
        Member = sub_B70754(v80, v118->obj.klass->_1.element_class);
        if ( !Member )
        {
LABEL_144:
          v127 = sub_B7078C(Member);
          sub_B70738(v127, 0LL);
        }
      }
      if ( v62 >= v118->max_length )
        goto LABEL_143;
      v87 = &v118->obj.klass + (int)v62;
      goto LABEL_124;
    }
    v88 = followera;
    v89 = *p_memberList;
    if ( followera )
    {
      v90 = followerClassIda;
      v91 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_38389696(
        v91,
        v62,
        v88,
        v90,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v136,
        initPos,
        0LL);
      if ( !v89 )
        goto LABEL_139;
      if ( v91 )
      {
        Member = sub_B70754(v91, v89->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v62 >= v89->max_length )
        goto LABEL_143;
      v98 = &v89->obj.klass + (int)v62;
      v98[4] = (Il2CppClass *)v91;
      v99 = (BattleServantConfConponent_o *)(v98 + 4);
      v100 = (System_Int32_array **)v91;
    }
    else
    {
      v120 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      v121 = (System_Int32_array **)v120;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_38389696(
          v120,
          v62,
          follower,
          followerClassId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v136,
          initPos,
          0LL);
        if ( !v89 )
          goto LABEL_139;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_38392504(v120, v62, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v89 )
          goto LABEL_139;
      }
      if ( v121 )
      {
        Member = sub_B70754(v121, v89->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v62 >= v89->max_length )
        goto LABEL_143;
      v122 = &v89->obj.klass + (int)v62;
      v122[4] = (Il2CppClass *)v121;
      v99 = (BattleServantConfConponent_o *)(v122 + 4);
      v100 = v121;
    }
    sub_B70630(v99, v100, v92, v93, v94, v95, v96, v97);
LABEL_132:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_139;
    if ( v62 >= memberList->max_length )
    {
LABEL_143:
      v126 = sub_B70798(Member);
      sub_B70738(v126, 0LL);
    }
    Member = (__int64)memberList->m_Items[v62];
    if ( !Member )
      goto LABEL_139;
    cost = this->fields.cost;
    ++v62;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Member, 0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v40);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v125) )
    *v128 = 1;
}


void __fastcall PartyListViewItem___ctor_32588476(
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1
  struct System_String_o *DefaultDeckName; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 Member; // x0
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x2
  struct DeckServant_o *deckInfo; // x8
  SingletonTemplate_PartyOrganizationUtility__c **v45; // x26
  PartyListViewItem_o *v46; // x27
  unsigned int v47; // w23
  const MethodInfo *v48; // x2
  int32_t v49; // w19
  int32_t v50; // w8
  BalanceConfig_c *v51; // x0
  struct PartyOrganizationListViewItem_array *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int32_t v59; // w8
  struct QuestRestrictionInfo_o *v60; // x8
  unsigned int *v61; // x24
  FollowerInfo_array *QuestFollowerList; // x0
  const MethodInfo *v63; // x2
  __int64 v64; // x8
  unsigned __int64 v65; // x25
  __int64 v66; // x23
  int32_t *v67; // x8
  struct DeckServant_o *v68; // x8
  struct DeckServantData_array *svts; // x8
  __int64 v70; // x8
  int32_t v71; // w19
  unsigned __int64 max_length; // x8
  __int64 v73; // x9
  __int64 v74; // x20
  __int64 v75; // x23
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x20
  const MethodInfo *v83; // x6
  int v84; // w27
  struct DeckServant_o *v85; // x8
  struct DeckServantData_array *v86; // x8
  __int64 v87; // x8
  _BOOL4 v88; // w20
  int64_t v89; // x4
  SingletonTemplate_PartyOrganizationUtility__c *v90; // x0
  FollowerInfo_o *v91; // x23
  SingletonTemplate_PartyOrganizationUtility__c **v92; // x24
  PartyListViewItem_o *v93; // x26
  UserEventDeckEntity_o *v94; // x21
  int32_t v95; // w27
  bool IsNpc; // w0
  unsigned int *v97; // x19
  int32_t v98; // w28
  PartyOrganizationListViewItem_o *v99; // x20
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  __int64 v106; // x19
  FollowerInfo_o *v107; // x23
  unsigned int *v108; // x19
  int32_t v109; // w27
  PartyOrganizationListViewItem_o *v110; // x20
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  unsigned __int64 v117; // x27
  QuestRestrictionInfo_o *v118; // x25
  unsigned int *v119; // x19
  PartyOrganizationListViewItem_o *v120; // x0
  int32_t v121; // w1
  QuestRestrictionInfo_o *v122; // x4
  System_Int32_array **v123; // x20
  unsigned __int64 v124; // x22
  QuestRestrictionInfo_o *v125; // x27
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  __int64 v132; // x8
  __int64 v133; // x20
  __int64 v134; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v135; // x8
  int32_t v136; // w20
  int32_t v137; // w23
  int32_t DispLimitCount; // w0
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  UserServantEntity_o *v145; // x23
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v147; // x0
  System_Int32_array **v148; // x27
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v157; // x1
  __int64 v158; // x0
  __int64 v159; // x0
  UserServantMaster_o *Master_WarQuestSelectionMaster; // [xsp+20h] [xbp-100h]
  int32_t *v162; // [xsp+30h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+48h] [xbp-D8h]
  UserServantEntity_array *UserServantList; // [xsp+50h] [xbp-D0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+60h] [xbp-C0h]
  UserServantEntity_o **m_Items; // [xsp+70h] [xbp-B0h]
  __int64 v169; // [xsp+78h] [xbp-A8h]
  int32_t v170; // [xsp+84h] [xbp-9Ch]
  __int64 v171; // [xsp+88h] [xbp-98h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+90h] [xbp-90h]
  PartyListViewItem_o *v173; // [xsp+98h] [xbp-88h]
  int32_t initPos; // [xsp+ACh] [xbp-74h]
  __int64 v175; // [xsp+B0h] [xbp-70h]
  int32_t followerClassIda; // [xsp+BCh] [xbp-64h] BYREF
  FollowerInfo_o *followera; // [xsp+C0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16

  v14 = questRestrictionInfo;
  if ( (byte_4355B5A & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem___TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_4355B5A = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v33);
  this->fields.deckName = DefaultDeckName;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.deckName,
    (System_Int32_array **)DefaultDeckName,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !deck )
    goto LABEL_170;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_170;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v43) )
  {
    Member = (__int64)deck->fields.deckInfo;
    if ( !Member )
      goto LABEL_170;
    DeckServant__ResetInitPos((DeckServant_o *)Member, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
  v45 = &SingletonTemplate_PartyOrganizationUtility__TypeInfo;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  if ( *(int *)(Member + 48) < 1 )
  {
    v46 = 0LL;
    if ( !questRestrictionInfo )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  v46 = *(PartyListViewItem_o **)(Member + 72);
  if ( questRestrictionInfo )
LABEL_21:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_22:
  v47 = 0;
  if ( follower && v46 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    v47 = *(_DWORD *)(Member + 48);
    Member = (__int64)PartyListViewItem__GetMember(v46, v47 - 1, v48);
    if ( !Member )
      goto LABEL_170;
    v49 = *(_DWORD *)(Member + 348);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v49, follower, 0LL);
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  if ( *(_QWORD *)(Member + 24) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    follower = *(FollowerInfo_o **)(Member + 24);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    followerClassId = *(_DWORD *)(Member + 32);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    v50 = *(_DWORD *)(Member + 36);
  }
  else
  {
    v50 = followerDeckId;
  }
  v170 = v50;
  v51 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v51 = BalanceConfig_TypeInfo;
  }
  v52 = (struct PartyOrganizationListViewItem_array *)sub_B706AC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v51->static_fields->DeckMemberMax);
  this->fields.memberList = v52;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v59 == 3 )
  {
    Member = (__int64)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_170;
    Member = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Member, 0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_170;
    v169 = Member;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0LL;
    v169 = 0LL;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v60 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo || (v61 = (unsigned int *)UserServantList, !Member) )
LABEL_170:
    sub_B7076C(Member, v42);
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Member,
                        v60->fields.questId,
                        v60->fields.questPhase,
                        0LL);
  v64 = 8LL * v47;
  v65 = 0LL;
  v66 = 0LL;
  v162 = &svtIdForceBattleList->m_Items[1];
  npcFollowerInfoList = QuestFollowerList;
  m_Items = UserServantList->m_Items;
  v171 = v64 - 8;
  v173 = v46;
  while ( 1 )
  {
    Member = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v65 >= *(int *)(*(_QWORD *)(Member + 184) + 156LL) )
      break;
    if ( v46 )
    {
      Member = (__int64)PartyListViewItem__GetMember(v46, v65, v63);
      if ( !Member )
        goto LABEL_170;
      v67 = (int32_t *)(Member + 348);
    }
    else
    {
      v68 = deck->fields.deckInfo;
      if ( !v68 )
        goto LABEL_170;
      svts = v68->fields.svts;
      if ( !svts )
        goto LABEL_170;
      if ( v65 >= svts->max_length )
        goto LABEL_171;
      v70 = *(__int64 *)((char *)svts->m_Items + v66);
      if ( !v70 )
        goto LABEL_170;
      v67 = (int32_t *)(v70 + 76);
    }
    v71 = *v67;
    v175 = v66;
    initPos = *v67;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v169 )
        goto LABEL_170;
      if ( (__int64)v65 >= *(int *)(v169 + 24) )
      {
        v117 = v65;
        v118 = v14;
        v119 = (unsigned int *)*p_memberList;
        v120 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
        v121 = v117;
        v122 = v14;
        v123 = (System_Int32_array **)v120;
        v124 = v117;
        v125 = v118;
        PartyOrganizationListViewItem___ctor_38392504(v120, v121, 0, setupInfo, v122, 1, initPos, 0LL);
        if ( !v119 )
          goto LABEL_170;
        if ( v123 )
        {
          Member = sub_B70754(v123, *(_QWORD *)(*(_QWORD *)v119 + 64LL));
          if ( !Member )
          {
LABEL_172:
            v159 = sub_B7078C(Member);
            sub_B70738(v159, 0LL);
          }
        }
        if ( v124 >= v119[6] )
          goto LABEL_171;
        *(_QWORD *)((char *)v119 + v66 + 32) = v123;
        v65 = v124;
        v14 = v125;
        sub_B70630((BattleServantConfConponent_o *)((char *)v119 + v66 + 32), v123, v126, v127, v128, v129, v130, v131);
        v46 = v173;
        goto LABEL_160;
      }
      if ( svtIdForceBattleList )
      {
        if ( v171 != v66 && isFirstEnforceChange )
        {
          max_length = svtIdForceBattleList->max_length;
          if ( (__int64)v65 < (int)max_length )
          {
            if ( v65 >= max_length )
              goto LABEL_171;
            v42 = (const MethodInfo *)(unsigned int)v162[v65];
            if ( (int)v42 >= 1 )
            {
              if ( !v61 )
                goto LABEL_170;
              if ( v65 >= v61[6] )
                goto LABEL_171;
              v73 = *(__int64 *)((char *)m_Items + v66);
              if ( !v73 )
                goto LABEL_88;
              v75 = *(_QWORD *)(v73 + 80);
              v74 = *(_QWORD *)(v73 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v178.fields.currentCryptoKey = v75;
              *(_QWORD *)&v178.fields.fakeValue = v74;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v178, 0LL);
              max_length = svtIdForceBattleList->max_length;
              if ( v65 >= max_length )
                goto LABEL_171;
              v66 = v175;
              v42 = (const MethodInfo *)(unsigned int)v162[v65];
              if ( (_DWORD)Member != (_DWORD)v42 )
              {
LABEL_88:
                if ( v65 >= max_length )
                  goto LABEL_171;
                Member = (__int64)Master_WarQuestSelectionMaster;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_170;
                Member = (__int64)UserServantMaster__getSvtIdBattle(Master_WarQuestSelectionMaster, (int32_t)v42, 0LL);
                v82 = (System_Int32_array **)Member;
                if ( Member )
                {
                  Member = sub_B70754(Member, *(_QWORD *)(*(_QWORD *)v61 + 64LL));
                  if ( !Member )
                    goto LABEL_172;
                }
                if ( v65 >= v61[6] )
                  goto LABEL_171;
                *(UserServantEntity_o **)((char *)m_Items + v66) = (UserServantEntity_o *)v82;
                sub_B70630((BattleServantConfConponent_o *)((char *)m_Items + v66), v82, v76, v77, v78, v79, v80, v81);
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
    Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34234816(v14, v71, 0LL);
    v84 = Member;
    if ( (Member & 1) != 0 )
    {
      v85 = deck->fields.deckInfo;
      if ( !v85 )
        goto LABEL_170;
      v86 = v85->fields.svts;
      if ( !v86 )
        goto LABEL_170;
      if ( v65 >= v86->max_length )
        goto LABEL_171;
      v87 = *(__int64 *)((char *)v86->m_Items + v66);
      if ( !v87 )
        goto LABEL_170;
      v88 = 0;
      if ( v171 != v66 )
      {
        v89 = *(_QWORD *)(v87 + 64);
        if ( v89 >= 1 )
          v88 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  v89,
                  v71,
                  v83);
      }
    }
    else
    {
      v88 = 0;
    }
    v90 = *v45;
    if ( (BYTE3((*v45)->vtable._0_Equals.methodPtr) & 4) != 0 && !v90->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v90);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v71, 0LL);
    if ( Member && ((v84 ^ 1) & 1) == 0 )
    {
      v91 = (FollowerInfo_o *)Member;
      v92 = v45;
      v93 = this;
      v94 = deck;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL) )
        v95 = 0;
      else
        v95 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v91, 0LL);
      v97 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v98 = 0;
      else
        v98 = v170;
      v99 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_38389696(
        v99,
        v65,
        v91,
        v95,
        setupInfo,
        v14,
        friendPointCampaignEntityList,
        0,
        v98,
        initPos,
        0LL);
      if ( !v97 )
        goto LABEL_170;
      v46 = v173;
      if ( v99 )
      {
        Member = sub_B70754(v99, *(_QWORD *)(*(_QWORD *)v97 + 64LL));
        if ( !Member )
          goto LABEL_172;
      }
      if ( v65 >= v97[6] )
        goto LABEL_171;
      deck = v94;
      *(_QWORD *)((char *)v97 + v175 + 32) = v99;
      sub_B70630(
        (BattleServantConfConponent_o *)((char *)v97 + v175 + 32),
        (System_Int32_array **)v99,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      v66 = v175;
      this = v93;
      v45 = v92;
      v61 = (unsigned int *)UserServantList;
      goto LABEL_156;
    }
    v106 = v175;
    if ( v171 != v175 && !v88 )
    {
      if ( (v84 & 1) != 0 )
      {
        if ( !v61 )
          goto LABEL_170;
        if ( v65 >= v61[6] )
          goto LABEL_171;
        v132 = *(__int64 *)((char *)m_Items + v175);
        if ( v132 )
        {
          v134 = *(_QWORD *)(v132 + 80);
          v133 = *(_QWORD *)(v132 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v179.fields.currentCryptoKey = v134;
          *(_QWORD *)&v179.fields.fakeValue = v133;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v179, 0LL);
          if ( v65 >= v61[6] )
            goto LABEL_171;
          v135 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)m_Items + v175);
          if ( !v135 )
            goto LABEL_170;
          v136 = Member;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v135[6], 0LL);
          if ( v65 >= v61[6] )
            goto LABEL_171;
          v137 = Member;
          Member = *(__int64 *)((char *)m_Items + v175);
          if ( !Member )
            goto LABEL_170;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
          Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                     v14,
                     v136,
                     v137,
                     DispLimitCount,
                     initPos,
                     0,
                     0LL);
          v106 = v175;
          if ( (Member & 1) != 0 )
          {
            if ( v65 >= v61[6] )
              goto LABEL_171;
            *(UserServantEntity_o **)((char *)m_Items + v175) = 0LL;
            sub_B70630(
              (BattleServantConfConponent_o *)((char *)m_Items + v175),
              0LL,
              v139,
              v140,
              v141,
              v142,
              v143,
              v144);
          }
        }
      }
      else if ( !v61 )
      {
        goto LABEL_170;
      }
      if ( v65 >= v61[6] )
        goto LABEL_171;
      v145 = *(UserServantEntity_o **)((char *)m_Items + v106);
      v108 = (unsigned int *)*p_memberList;
      if ( !v145 )
      {
        v110 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_38392504(v110, v65, 0, setupInfo, v14, 1, initPos, 0LL);
        v46 = v173;
        if ( !v108 )
          goto LABEL_170;
        goto LABEL_152;
      }
      EquipList = UserEventDeckEntity__GetEquipList(deck, v65, 0LL);
      v110 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_38380420(
        v110,
        v65,
        v145,
        EquipList,
        setupInfo,
        v14,
        0LL,
        initPos,
        0LL,
        0,
        0LL);
      if ( !v108 )
        goto LABEL_170;
    }
    else
    {
      v107 = followera;
      v108 = (unsigned int *)*p_memberList;
      if ( !followera )
      {
        v147 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
        v148 = (System_Int32_array **)v147;
        if ( follower )
          PartyOrganizationListViewItem___ctor_38389696(
            v147,
            v65,
            follower,
            followerClassId,
            setupInfo,
            v14,
            friendPointCampaignEntityList,
            0,
            v170,
            initPos,
            0LL);
        else
          PartyOrganizationListViewItem___ctor_38392504(v147, v65, 1, setupInfo, v14, 1, initPos, 0LL);
        v66 = v175;
        if ( !v108 )
          goto LABEL_170;
        if ( v148 )
        {
          Member = sub_B70754(v148, *(_QWORD *)(*(_QWORD *)v108 + 64LL));
          if ( !Member )
            goto LABEL_172;
        }
        if ( v65 >= v108[6] )
          goto LABEL_171;
        *(_QWORD *)((char *)v108 + v175 + 32) = v148;
        sub_B70630((BattleServantConfConponent_o *)((char *)v108 + v175 + 32), v148, v149, v150, v151, v152, v153, v154);
        v46 = v173;
        goto LABEL_156;
      }
      v109 = followerClassIda;
      v110 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_38389696(v110, v65, v107, v109, setupInfo, v14, 0LL, 0, v170, initPos, 0LL);
      if ( !v108 )
        goto LABEL_170;
    }
    v46 = v173;
LABEL_152:
    v66 = v175;
    if ( v110 )
    {
      Member = sub_B70754(v110, *(_QWORD *)(*(_QWORD *)v108 + 64LL));
      if ( !Member )
        goto LABEL_172;
    }
    if ( v65 >= v108[6] )
      goto LABEL_171;
    *(_QWORD *)((char *)v108 + v175 + 32) = v110;
    sub_B70630(
      (BattleServantConfConponent_o *)((char *)v108 + v175 + 32),
      (System_Int32_array **)v110,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
LABEL_156:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_170;
    if ( v65 >= memberList->max_length )
    {
LABEL_171:
      v158 = sub_B70798(Member);
      sub_B70738(v158, 0LL);
    }
    Member = *(__int64 *)((char *)memberList->m_Items + v66);
    if ( !Member )
      goto LABEL_170;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Member, 0LL)
                      + cost;
LABEL_160:
    ++v65;
    v66 += 8LL;
  }
  PartyListViewItem__CheckRestriction(this, v42);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v157) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_32591620(
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
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BalanceConfig_c *v39; // x0
  struct PartyOrganizationListViewItem_array *v40; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  clsQuestCheck_o *v48; // x0
  __int64 v49; // x1
  int32_t klass; // w23
  struct PartyOrganizationListViewItem_array *v51; // x26
  PartyOrganizationListViewItem_o *v52; // x0
  System_Int32_array **v53; // x27
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v62; // x1
  int32_t i; // w23
  struct PartyOrganizationListViewItem_array *v64; // x26
  PartyOrganizationListViewItem_o *v65; // x24
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  Il2CppClass **v72; // x0
  struct PartyOrganizationListViewItem_array *v73; // x8
  int32_t v74; // w24
  BalanceConfig_c *v75; // x0
  __int64 v76; // x0
  __int64 v77; // x0

  if ( (byte_4355B5B & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem___TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4355B5B = 1;
  }
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.isDeckNameDefault = 0;
  v32 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.deckName, v32, v33, v34, v35, v36, v37, v38);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v39 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  v40 = (struct PartyOrganizationListViewItem_array *)sub_B706AC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v39->static_fields->DeckMemberMax);
  this->fields.memberList = v40;
  p_memberList = &this->fields.memberList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v48 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v48 )
    goto LABEL_41;
  if ( v48->fields.cQuestReleaseListP )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v48 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v48 )
      goto LABEL_41;
    follower = (FollowerInfo_o *)v48->fields.cQuestReleaseListP;
    v48 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v48 )
      goto LABEL_41;
    klass = (int32_t)v48[1].klass;
    v48 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v48 )
      goto LABEL_41;
    followerClassId = klass;
    followerDeckId = HIDWORD(v48[1].klass);
  }
  v51 = *p_memberList;
  v52 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
  v53 = (System_Int32_array **)v52;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_38389696(
      v52,
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
    if ( !v51 )
      goto LABEL_41;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_38392504(v52, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v51 )
      goto LABEL_41;
  }
  if ( v53 )
  {
    v48 = (clsQuestCheck_o *)sub_B70754(v53, v51->obj.klass->_1.element_class);
    if ( !v48 )
    {
LABEL_43:
      v77 = sub_B7078C(v48);
      sub_B70738(v77, 0LL);
    }
  }
  if ( !v51->max_length )
    goto LABEL_42;
  v51->m_Items[0] = (PartyOrganizationListViewItem_o *)v53;
  sub_B70630((BattleServantConfConponent_o *)v51->m_Items, v53, v54, v55, v56, v57, v58, v59);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_41;
  if ( !memberList->max_length )
  {
LABEL_42:
    v76 = sub_B70798(v48);
    sub_B70738(v76, 0LL);
  }
  v48 = (clsQuestCheck_o *)memberList->m_Items[0];
  if ( !v48 )
LABEL_41:
    sub_B7076C(v48, v49);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v48, 0LL) + cost;
  for ( i = 1; ; ++i )
  {
    v75 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v75 = BalanceConfig_TypeInfo;
    }
    if ( i >= v75->static_fields->DeckMemberMax )
      break;
    v64 = *p_memberList;
    v65 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_38392504(v65, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v64 )
      goto LABEL_41;
    if ( v65 )
    {
      v48 = (clsQuestCheck_o *)sub_B70754(v65, v64->obj.klass->_1.element_class);
      if ( !v48 )
        goto LABEL_43;
    }
    if ( i >= v64->max_length )
      goto LABEL_42;
    v72 = &v64->obj.klass + i;
    v72[4] = (Il2CppClass *)v65;
    sub_B70630((BattleServantConfConponent_o *)(v72 + 4), (System_Int32_array **)v65, v66, v67, v68, v69, v70, v71);
    v73 = this->fields.memberList;
    if ( !v73 )
      goto LABEL_41;
    if ( i >= v73->max_length )
      goto LABEL_42;
    v48 = (clsQuestCheck_o *)v73->m_Items[i];
    if ( !v48 )
      goto LABEL_41;
    v74 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v48, 0LL) + v74;
  }
  PartyListViewItem__CheckRestriction(this, v62);
}


void __fastcall PartyListViewItem___ctor_32592596(
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 IsNeedDeckPosReset; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w25
  const MethodInfo *v37; // x3
  PartyListViewItem_o *v38; // x9
  int v39; // w28
  const MethodInfo *v40; // x2
  int32_t v41; // w23
  int32_t FollowerIndex; // w26
  BalanceConfig_c *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x9
  __int64 v51; // x27
  __int64 v52; // x21
  unsigned __int64 v53; // x8
  __int64 v54; // x23
  signed __int64 v55; // x24
  BalanceConfig_c *v56; // x0
  struct PartyOrganizationListViewItem_array *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct QuestRestrictionInfo_o *v64; // x8
  UserEventDeckEntity_o *v65; // x28
  __int64 v66; // x19
  const MethodInfo *v67; // x2
  int32_t *p_initPos; // x8
  struct DeckServant_o *v69; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v71; // x8
  int32_t initPos; // w26
  const MethodInfo *v73; // x6
  int v74; // w23
  _BOOL4 v75; // w25
  struct DeckServant_o *v76; // x8
  struct DeckServantData_array *v77; // x8
  DeckServantData_o *v78; // x8
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v80; // x24
  int32_t v81; // w25
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v83; // x21
  int32_t v84; // w28
  PartyOrganizationListViewItem_o *v85; // x23
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  unsigned int max_length; // w8
  FollowerInfo_o *v93; // x24
  int32_t v94; // w25
  __int64 v95; // x21
  __int64 v96; // x23
  __int64 v97; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v98; // x23
  __int64 v99; // t1
  __int64 v100; // x24
  __int64 v101; // x25
  int32_t v102; // w24
  int32_t v103; // w25
  int32_t DispLimitCount; // w0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  UserServantEntity_o *v111; // x24
  struct PartyOrganizationListViewItem_array *v112; // x28
  System_Int64_array *EquipList; // x25
  PartyOrganizationListViewItem_o *v114; // x23
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  Il2CppClass **v121; // x0
  PartyOrganizationListViewItem_o *v122; // x0
  Il2CppClass **v123; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v126; // x1
  __int64 v127; // x0
  __int64 v128; // x0
  FollowerInfo_array *npcFollowerInfoList; // [xsp+20h] [xbp-C0h]
  int v132; // [xsp+30h] [xbp-B0h]
  int v133; // [xsp+38h] [xbp-A8h]
  int v134; // [xsp+38h] [xbp-A8h]
  PartyListViewItem_o *v135; // [xsp+40h] [xbp-A0h]
  int32_t v136; // [xsp+4Ch] [xbp-94h]
  int32_t v137; // [xsp+5Ch] [xbp-84h]
  UserEventDeckEntity_o *v138; // [xsp+60h] [xbp-80h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+68h] [xbp-78h]
  bool v140; // [xsp+74h] [xbp-6Ch]
  int32_t v141; // [xsp+84h] [xbp-5Ch] BYREF
  FollowerInfo_o *followera; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16

  if ( (byte_4355B5C & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem___TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_4355B5C = 1;
  }
  followera = 0LL;
  v141 = 0;
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !deck )
    goto LABEL_149;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_149;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v34);
  if ( (IsNeedDeckPosReset & 1) != 0 )
  {
    IsNeedDeckPosReset = (__int64)deck->fields.deckInfo;
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    DeckServant__ResetInitPos((DeckServant_o *)IsNeedDeckPosReset, 0LL);
  }
  if ( !questRestrictionInfo )
    goto LABEL_149;
  servantNumMax = questRestrictionInfo->fields.servantNumMax;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  if ( *(int *)(IsNeedDeckPosReset + 48) < 1 )
  {
    v140 = 0;
    v135 = 0LL;
    v39 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v38 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 72);
    v39 = 0;
    v140 = v38 != 0LL;
    v135 = v38;
    if ( follower && v38 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      if ( !v135 )
        goto LABEL_149;
      v39 = *(_DWORD *)(IsNeedDeckPosReset + 48);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v135, v39 - 1, v40);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      v41 = *(_DWORD *)(IsNeedDeckPosReset + 348);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)IsNeedDeckPosReset, v41, follower, 0LL);
      v140 = 1;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v37);
  if ( FollowerIndex > 0 || questRestrictionInfo->fields.isNotTransitionSupportList )
  {
    if ( FollowerIndex > servantNumMax )
    {
LABEL_32:
      *isBaseModify = 1;
      v43 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v43 = BalanceConfig_TypeInfo;
      }
      FollowerIndex = servantNumMax;
      if ( servantNumMax > v43->static_fields->DeckMainMemberMax )
      {
        if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          FollowerIndex = v43->static_fields->DeckMainMemberMax;
          if ( !v43->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v43);
            FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
          }
        }
        else
        {
          FollowerIndex = v43->static_fields->DeckMainMemberMax;
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    follower = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v136 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v137 = *(_DWORD *)(IsNeedDeckPosReset + 36);
  }
  else
  {
    v137 = followerDeckId;
    v136 = followerClassId;
  }
  v133 = v39;
  v138 = deck;
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  v50 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v51 = IsNeedDeckPosReset;
  if ( (int)v50 >= 1 )
  {
    v52 = 0LL;
    v53 = 0LL;
    v54 = IsNeedDeckPosReset + 32;
    do
    {
      if ( v53 >= (unsigned int)v50 )
      {
LABEL_153:
        v127 = sub_B70798(IsNeedDeckPosReset);
        sub_B70738(v127, 0LL);
      }
      v55 = v53 + 1;
      if ( servantNumMax < (int)v53 + 1 && *(_QWORD *)(v54 + 8 * v53) )
      {
        *isBaseModify = 1;
        if ( v53 >= *(unsigned int *)(v51 + 24) )
          goto LABEL_153;
        *(_QWORD *)(v54 + 8 * v53) = 0LL;
        sub_B70630((BattleServantConfConponent_o *)(v54 + v52), 0LL, v44, v45, v46, v47, v48, v49);
      }
      LODWORD(v50) = *(_DWORD *)(v51 + 24);
      v52 += 8LL;
      v53 = v55;
    }
    while ( v55 < (int)v50 );
  }
  v56 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v56 = BalanceConfig_TypeInfo;
  }
  v57 = (struct PartyOrganizationListViewItem_array *)sub_B706AC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v56->static_fields->DeckMemberMax);
  this->fields.memberList = v57;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v64 = *p_questRestrictionInfo;
  v65 = v138;
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_149:
    sub_B7076C(IsNeedDeckPosReset, v33);
  v66 = 0LL;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          v64->fields.questId,
                          v64->fields.questPhase,
                          0LL);
  v134 = v133 - 1;
  v132 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (int)v66 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 156LL) )
      break;
    if ( v140 )
    {
      IsNeedDeckPosReset = (__int64)v135;
      if ( !v135 )
        goto LABEL_149;
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v135, v66, v67);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 348);
    }
    else
    {
      v69 = v65->fields.deckInfo;
      if ( !v69 )
        goto LABEL_149;
      svts = v69->fields.svts;
      if ( !svts )
        goto LABEL_149;
      if ( (unsigned int)v66 >= svts->max_length )
        goto LABEL_153;
      v71 = svts->m_Items[(int)v66];
      if ( !v71 )
        goto LABEL_149;
      p_initPos = &v71->fields.initPos;
    }
    initPos = *p_initPos;
    followera = 0LL;
    v141 = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34234816(questRestrictionInfo, initPos, 0LL);
    v74 = IsNeedDeckPosReset;
    v75 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v76 = v65->fields.deckInfo;
      if ( !v76 )
        goto LABEL_149;
      v77 = v76->fields.svts;
      if ( !v77 )
        goto LABEL_149;
      if ( (unsigned int)v66 >= v77->max_length )
        goto LABEL_153;
      v78 = v77->m_Items[(int)v66];
      if ( !v78 )
        goto LABEL_149;
      v75 = 0;
      if ( v134 != (_DWORD)v66 )
      {
        npcFollowerSvtId = v78->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v75 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &v141,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v73);
      }
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    IsNeedDeckPosReset = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                                    (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                                    initPos,
                                    0LL);
    if ( IsNeedDeckPosReset && ((v74 ^ 1) & 1) == 0 )
    {
      v80 = (FollowerInfo_o *)IsNeedDeckPosReset;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsNeedDeckPosReset, 0LL) )
        v81 = 0;
      else
        v81 = v136;
      IsNpc = FollowerInfo__get_IsNpc(v80, 0LL);
      v83 = *p_memberList;
      if ( IsNpc )
        v84 = 0;
      else
        v84 = v137;
      v85 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_38389696(
        v85,
        v66,
        v80,
        v81,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v84,
        initPos,
        0LL);
      if ( !v83 )
        goto LABEL_149;
      if ( v85 )
      {
        IsNeedDeckPosReset = sub_B70754(v85, v83->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_154;
      }
      max_length = v83->max_length;
      v65 = v138;
      goto LABEL_140;
    }
    if ( v132 == (_DWORD)v66 || v75 )
    {
      v93 = followera;
      v83 = *p_memberList;
      if ( followera )
      {
        v94 = v141;
        v85 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_38389696(
          v85,
          v66,
          v93,
          v94,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v137,
          initPos,
          0LL);
LABEL_136:
        if ( !v83 )
          goto LABEL_149;
      }
      else
      {
        v122 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
        v85 = v122;
        if ( follower )
        {
          PartyOrganizationListViewItem___ctor_38389696(
            v122,
            v66,
            follower,
            v136,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v137,
            initPos,
            0LL);
          goto LABEL_136;
        }
        PartyOrganizationListViewItem___ctor_38392504(v122, v66, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v83 )
          goto LABEL_149;
      }
      if ( v85 )
      {
        IsNeedDeckPosReset = sub_B70754(v85, v83->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_154;
      }
      max_length = v83->max_length;
LABEL_140:
      if ( (unsigned int)v66 >= max_length )
        goto LABEL_153;
      v123 = &v83->obj.klass + (int)v66;
      v123[4] = (Il2CppClass *)v85;
      sub_B70630((BattleServantConfConponent_o *)(v123 + 4), (System_Int32_array **)v85, v86, v87, v88, v89, v90, v91);
      goto LABEL_142;
    }
    v95 = v66;
    if ( (v74 & 1) != 0 )
    {
      if ( (unsigned int)v66 >= *(_DWORD *)(v51 + 24) )
        goto LABEL_153;
      v96 = v51 + 8LL * (int)v66;
      v99 = *(_QWORD *)(v96 + 32);
      v98 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v96 + 32);
      v97 = v99;
      v95 = (int)v66;
      if ( v99 )
      {
        v101 = *(_QWORD *)(v97 + 80);
        v100 = *(_QWORD *)(v97 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v143.fields.currentCryptoKey = v101;
        *(_QWORD *)&v143.fields.fakeValue = v100;
        IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v143, 0LL);
        if ( (unsigned int)v66 >= *(_DWORD *)(v51 + 24) )
          goto LABEL_153;
        if ( !*v98 )
          goto LABEL_149;
        v102 = IsNeedDeckPosReset;
        IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*v98)[6], 0LL);
        if ( (unsigned int)v66 >= *(_DWORD *)(v51 + 24) )
          goto LABEL_153;
        v103 = IsNeedDeckPosReset;
        IsNeedDeckPosReset = (__int64)*v98;
        if ( !*v98 )
          goto LABEL_149;
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0LL);
        IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                               questRestrictionInfo,
                               v102,
                               v103,
                               DispLimitCount,
                               initPos,
                               0,
                               0LL);
        if ( (IsNeedDeckPosReset & 1) != 0 )
        {
          if ( (unsigned int)v66 >= *(_DWORD *)(v51 + 24) )
            goto LABEL_153;
          *v98 = 0LL;
          sub_B70630((BattleServantConfConponent_o *)v98, 0LL, v105, v106, v107, v108, v109, v110);
        }
      }
    }
    if ( (unsigned int)v66 >= *(_DWORD *)(v51 + 24) )
      goto LABEL_153;
    v111 = *(UserServantEntity_o **)(v51 + 8 * v95 + 32);
    v112 = *p_memberList;
    if ( v111 )
    {
      EquipList = UserEventDeckEntity__GetEquipList(v138, v66, 0LL);
      v114 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_38380420(
        v114,
        v66,
        v111,
        EquipList,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        0LL,
        0,
        0LL);
      if ( !v112 )
        goto LABEL_149;
    }
    else
    {
      v114 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_38392504(v114, v66, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v112 )
        goto LABEL_149;
    }
    if ( v114 )
    {
      IsNeedDeckPosReset = sub_B70754(v114, v112->obj.klass->_1.element_class);
      if ( !IsNeedDeckPosReset )
      {
LABEL_154:
        v128 = sub_B7078C(IsNeedDeckPosReset);
        sub_B70738(v128, 0LL);
      }
    }
    if ( (unsigned int)v66 >= v112->max_length )
      goto LABEL_153;
    v121 = &v112->obj.klass + v95;
    v121[4] = (Il2CppClass *)v114;
    sub_B70630(
      (BattleServantConfConponent_o *)(v121 + 4),
      (System_Int32_array **)v114,
      v115,
      v116,
      v117,
      v118,
      v119,
      v120);
    v65 = v138;
LABEL_142:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_149;
    if ( (unsigned int)v66 >= memberList->max_length )
      goto LABEL_153;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[(int)v66];
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0LL)
                      + cost;
    ++v66;
  }
  PartyListViewItem__CheckRestriction(this, v33);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v126) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_32595292(
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 Member; // x0
  FollowerInfo_o *v34; // x1
  const MethodInfo *v35; // x2
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x28
  PartyListViewItem_o *v38; // x9
  const MethodInfo *v39; // x2
  int32_t v40; // w21
  FollowerInfo_array *QuestFollowerList; // x19
  const MethodInfo *v42; // x3
  int max_length; // w8
  FollowerInfo_array *v44; // x9
  unsigned int v45; // w19
  int32_t size; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v48; // w9
  unsigned int v49; // w10
  QuestRestrictionInfo_SlotInfo_o *v50; // x11
  struct DeckServant_o *v51; // x8
  int v52; // w26
  int v53; // w27
  __int64 v54; // x28
  struct DeckServantData_array *svts; // x8
  unsigned int v56; // w20
  PartyListViewItem___c__DisplayClass27_0_o *v57; // x19
  struct DeckServant_o *v58; // x8
  struct DeckServantData_array *v59; // x8
  __int64 v60; // x8
  __int64 v61; // x21
  struct DeckServant_o *v62; // x8
  struct DeckServantData_array *v63; // x8
  __int64 v64; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v65; // x21
  BalanceConfig_c *v66; // x0
  Il2CppClass *monitor; // x20
  int v68; // w8
  Il2CppClass **v69; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v71; // x1
  _BOOL8 v72; // x0
  __int64 v73; // x1
  const MethodInfo *v74; // x2
  BalanceConfig_c *v75; // x0
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x3
  int32_t i; // w19
  struct DeckServant_o *v79; // x8
  struct DeckServantData_array *v80; // x8
  DeckServantData_o *v81; // x8
  int32_t UserServantDeployIndex; // w0
  unsigned int v83; // w21
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x22
  Il2CppClass **v91; // x0
  bool v92; // w20
  BalanceConfig_c *v93; // x0
  struct PartyOrganizationListViewItem_array *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  unsigned __int64 v101; // x28
  bool *p_isNpcEditablePos; // x21
  __int64 j; // x22
  unsigned int *v104; // x20
  PartyOrganizationListViewItem_o *v105; // x24
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  BalanceConfig_c *v112; // x0
  PartyListViewItem___c__DisplayClass27_1_o *v113; // x24
  const MethodInfo *v114; // x2
  int32_t *v115; // x8
  struct DeckServant_o *v116; // x8
  struct DeckServantData_array *v117; // x8
  __int64 v118; // x8
  int32_t v119; // w19
  const MethodInfo *v120; // x6
  bool v121; // w25
  int64_t v122; // x4
  bool v123; // w20
  FollowerInfo_o *v124; // x27
  bool *v125; // x25
  bool IsNpc; // w0
  int32_t v127; // w8
  bool v128; // w0
  unsigned int *v129; // x20
  int32_t v130; // w21
  PartyOrganizationListViewItem_o *v131; // x24
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  unsigned __int64 v138; // x25
  bool *v139; // x20
  FollowerInfo_o *v140; // x27
  unsigned int *v141; // x21
  int32_t v142; // w25
  PartyOrganizationListViewItem_o *v143; // x24
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  PartyOrganizationListViewItem_o *v150; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v151; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v152; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v153; // x27
  FollowerInfo_o *v154; // x24
  unsigned int v155; // w21
  unsigned int *v156; // x26
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v158; // x8
  int32_t classId; // w20
  PartyOrganizationListViewItem_o *v160; // x27
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  UserEventDeckEntity_o *v167; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v168; // x21
  __int64 v169; // x20
  FollowerInfo_o *v170; // x24
  unsigned int *v171; // x21
  PartyOrganizationListViewItem_o *v172; // x24
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  int v181; // w8
  PartyOrganizationListViewItem_o *v182; // x24
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  UserServantEntity_array *v189; // x20
  __int64 v190; // x8
  __int64 v191; // x24
  __int64 v192; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v193; // x8
  int32_t v194; // w27
  int32_t v195; // w24
  int32_t DispLimitCount; // w0
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  unsigned int *v203; // x21
  UserServantEntity_o *v204; // x27
  unsigned int *v205; // x20
  System_Int64_array *EquipList; // x21
  PartyOrganizationListViewItem_o *v207; // x24
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  struct ServantLeaderInfo_array *v214; // x8
  ServantLeaderInfo_o *v215; // x8
  int32_t v216; // w20
  PartyOrganizationListViewItem_o *v217; // x27
  System_String_array **v218; // x2
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  __int64 v224; // x21
  int v225; // w26
  unsigned __int64 v226; // x28
  UserServantEntity_o **m_Items; // x27
  PartyListViewItem___c__DisplayClass27_2_o *v228; // x19
  signed __int64 v229; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v230; // x22
  System_String_array **v231; // x2
  System_String_array **v232; // x3
  System_Boolean_array **v233; // x4
  System_Int32_array **v234; // x5
  System_Int32_array *v235; // x6
  System_Int32_array *v236; // x7
  unsigned __int64 v237; // x8
  unsigned __int64 v238; // x20
  signed __int64 v239; // x21
  const MethodInfo *v240; // x6
  int v241; // w27
  struct DeckServant_o *v242; // x8
  struct DeckServantData_array *v243; // x8
  __int64 v244; // x8
  int64_t v245; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v247; // x22
  bool *v248; // x25
  int32_t v249; // w28
  bool v250; // w0
  unsigned int *v251; // x20
  int32_t v252; // w23
  PartyOrganizationListViewItem_o *v253; // x27
  System_String_array **v254; // x2
  System_String_array **v255; // x3
  System_Boolean_array **v256; // x4
  System_Int32_array **v257; // x5
  System_Int32_array *v258; // x6
  System_Int32_array *v259; // x7
  struct PartyOrganizationListViewItem_array *v260; // x8
  struct DeckServant_o *v261; // x9
  struct DeckServantData_array *v262; // x9
  __int64 v263; // x9
  __int64 v264; // x8
  FollowerInfo_o *v265; // x22
  unsigned int *v266; // x28
  int32_t v267; // w28
  unsigned int *v268; // x19
  PartyOrganizationListViewItem_o *v269; // x27
  __int64 IsRestrictionServantIndividuality; // x0
  System_String_array **v271; // x2
  System_String_array **v272; // x3
  System_Boolean_array **v273; // x4
  System_Int32_array **v274; // x5
  System_Int32_array *v275; // x6
  System_Int32_array *v276; // x7
  BattleServantConfConponent_o *v277; // x0
  PartyOrganizationListViewItem_o *v278; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v279; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v280; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v281; // x22
  il2cpp_array_size_t *v282; // x20
  __int64 v283; // x8
  __int64 v284; // x22
  __int64 v285; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v286; // x8
  int32_t v287; // w22
  int32_t v288; // w27
  int32_t v289; // w0
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  FollowerInfo_o *v296; // x27
  struct PartyOrganizationListViewItem_array *v297; // x8
  struct DeckServant_o *v298; // x9
  struct DeckServantData_array *v299; // x9
  __int64 v300; // x9
  __int64 v301; // x8
  int32_t v302; // w8
  unsigned int v303; // w20
  unsigned int *v304; // x22
  struct ServantLeaderInfo_array *v305; // x8
  ServantLeaderInfo_o *v306; // x8
  PartyOrganizationListViewItem_o *v307; // x28
  System_String_array **v308; // x2
  System_String_array **v309; // x3
  System_Boolean_array **v310; // x4
  System_Int32_array **v311; // x5
  System_Int32_array *v312; // x6
  System_Int32_array *v313; // x7
  UserServantEntity_o *v314; // x22
  unsigned int *v315; // x20
  System_Int64_array *v316; // x28
  PartyOrganizationListViewItem_o *v317; // x27
  System_String_array **v318; // x2
  System_String_array **v319; // x3
  System_Boolean_array **v320; // x4
  System_Int32_array **v321; // x5
  System_Int32_array *v322; // x6
  System_Int32_array *v323; // x7
  PartyOrganizationListViewItem_o *v324; // x22
  System_String_array **v325; // x2
  System_String_array **v326; // x3
  System_Boolean_array **v327; // x4
  System_Int32_array **v328; // x5
  System_Int32_array *v329; // x6
  System_Int32_array *v330; // x7
  unsigned int *v331; // x28
  PartyOrganizationListViewItem_o *v332; // x22
  System_String_array **v333; // x2
  System_String_array **v334; // x3
  System_Boolean_array **v335; // x4
  System_Int32_array **v336; // x5
  System_Int32_array *v337; // x6
  System_Int32_array *v338; // x7
  struct PartyOrganizationListViewItem_array *v339; // x8
  int32_t v340; // w19
  __int64 v341; // x26
  unsigned __int64 k; // x24
  unsigned int *v343; // x20
  PartyOrganizationListViewItem_o *v344; // x27
  System_String_array **v345; // x2
  System_String_array **v346; // x3
  System_Boolean_array **v347; // x4
  System_Int32_array **v348; // x5
  System_Int32_array *v349; // x6
  System_Int32_array *v350; // x7
  BalanceConfig_c *v351; // x0
  PartyListViewItem___c__DisplayClass27_3_o *v352; // x28
  const MethodInfo *v353; // x2
  int32_t *v354; // x8
  struct DeckServant_o *v355; // x8
  struct DeckServantData_array *v356; // x8
  __int64 v357; // x8
  int32_t v358; // w19
  const MethodInfo *v359; // x1
  __int64 v360; // x0
  __int64 v361; // x0
  __int64 v362; // x0
  __int64 v363; // x0
  __int64 v364; // x0
  __int64 v365; // x0
  int32_t initPos; // [xsp+8h] [xbp-168h]
  bool *v367; // [xsp+18h] [xbp-158h]
  int32_t v368; // [xsp+20h] [xbp-150h]
  int v369; // [xsp+2Ch] [xbp-144h]
  _BOOL4 v370; // [xsp+2Ch] [xbp-144h]
  int32_t v371; // [xsp+3Ch] [xbp-134h]
  int v372; // [xsp+40h] [xbp-130h]
  int32_t v373; // [xsp+44h] [xbp-12Ch]
  int v374; // [xsp+48h] [xbp-128h]
  bool *v375; // [xsp+48h] [xbp-128h]
  int v376; // [xsp+48h] [xbp-128h]
  int32_t FollowerIndex; // [xsp+54h] [xbp-11Ch]
  PartyListViewItem_o *v378; // [xsp+58h] [xbp-118h]
  int v379; // [xsp+60h] [xbp-110h]
  FollowerInfo_o *followerInfo; // [xsp+68h] [xbp-108h]
  UserServantEntity_array *userServantList; // [xsp+70h] [xbp-100h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+78h] [xbp-F8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v383; // [xsp+80h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+88h] [xbp-E8h]
  System_Int64_array *v385; // [xsp+90h] [xbp-E0h]
  System_Int64_array *v386; // [xsp+90h] [xbp-E0h]
  il2cpp_array_size_t *p_max_length; // [xsp+90h] [xbp-E0h]
  PartyListViewItem_o *v388; // [xsp+98h] [xbp-D8h]
  int32_t DeckMemberMax; // [xsp+A8h] [xbp-C8h]
  bool v391; // [xsp+A8h] [xbp-C8h]
  int32_t v392; // [xsp+A8h] [xbp-C8h]
  bool v393; // [xsp+B4h] [xbp-BCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+B8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v396; // [xsp+C8h] [xbp-A8h] BYREF
  int32_t v397; // [xsp+E4h] [xbp-8Ch] BYREF
  FollowerInfo_o *v398; // [xsp+E8h] [xbp-88h] BYREF
  int32_t v399; // [xsp+F4h] [xbp-7Ch] BYREF
  FollowerInfo_o *v400; // [xsp+F8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v401; // [xsp+100h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v402; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v403; // 0:x0.16

  if ( (byte_4355B5D & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_BasicHelper_Any_FollowerInfo___);
    sub_B70694(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_B70694(&Method_System_Linq_Enumerable_Count_FollowerInfo___);
    sub_B70694(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__);
    sub_B70694(&FollowerInfo___TypeInfo);
    sub_B70694(&Method_System_Func_FollowerInfo__bool___ctor__);
    sub_B70694(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
    sub_B70694(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem___TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B70694(&Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__);
    sub_B70694(&PartyListViewItem___c__DisplayClass27_0_TypeInfo);
    sub_B70694(&Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__);
    sub_B70694(&PartyListViewItem___c__DisplayClass27_1_TypeInfo);
    sub_B70694(&Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__);
    sub_B70694(&PartyListViewItem___c__DisplayClass27_2_TypeInfo);
    sub_B70694(&Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__);
    sub_B70694(&PartyListViewItem___c__DisplayClass27_3_TypeInfo);
    sub_B70694(&UserServantEntity___TypeInfo);
    byte_4355B5D = 1;
  }
  memset(&v401, 0, sizeof(v401));
  v400 = 0LL;
  v399 = 0;
  v398 = 0LL;
  v397 = 0;
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !deck )
    goto LABEL_466;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_466;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v35) )
  {
    Member = (__int64)deck->fields.deckInfo;
    if ( !Member )
      goto LABEL_466;
    DeckServant__ResetInitPos((DeckServant_o *)Member, 0LL);
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(deck, 0LL);
  userServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_466;
  followerInfo = follower;
  if ( *(int *)(Member + 48) < 1 )
  {
    v393 = 0;
    v388 = 0LL;
    v372 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_466;
    v38 = *(PartyListViewItem_o **)(Member + 72);
    v372 = 0;
    v393 = v38 != 0LL;
    v388 = v38;
    if ( follower && v38 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_466;
      if ( !v388 )
        goto LABEL_466;
      v372 = *(_DWORD *)(Member + 48);
      Member = (__int64)PartyListViewItem__GetMember(v388, v372 - 1, v39);
      if ( !Member )
        goto LABEL_466;
      v40 = *(_DWORD *)(Member + 348);
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_466;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v40, follower, 0LL);
      v393 = 1;
    }
  }
  Member = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !questRestrictionInfo )
    goto LABEL_466;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_466;
  if ( !Member )
    goto LABEL_466;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Member,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0LL);
  v383 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v383,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  if ( !QuestFollowerList )
    goto LABEL_466;
  max_length = QuestFollowerList->max_length;
  v44 = QuestFollowerList;
  npcFollowerInfoList = QuestFollowerList;
  if ( max_length >= 1 )
  {
    v45 = 0;
    while ( v45 < max_length )
    {
      v34 = v44->m_Items[v45];
      if ( !v34 )
        goto LABEL_466;
      if ( !v34->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v34->fields.isFixedNpc) )
      {
        Member = (__int64)v383;
        if ( !v383 )
          goto LABEL_466;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v383,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_FollowerInfo__Add__);
        v44 = npcFollowerInfoList;
      }
      max_length = v44->max_length;
      if ( (int)++v45 >= max_length )
        goto LABEL_52;
    }
LABEL_473:
    v360 = sub_B70798(Member);
    sub_B70738(v360, 0LL);
  }
LABEL_52:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v383,
                    v42);
  questRestrictionInfoa = questRestrictionInfo;
  v378 = this;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
  {
LABEL_132:
    v92 = isNew;
    goto LABEL_133;
  }
  Member = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (Member & 1) != 0 )
  {
    if ( !v383 )
      goto LABEL_466;
    size = v383->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_466;
    v48 = slotInfos->max_length;
    if ( v48 >= 1 )
    {
      size = 0;
      v49 = 0;
      while ( v49 < v48 )
      {
        v50 = slotInfos->m_Items[v49];
        if ( !v50 )
          goto LABEL_466;
        if ( v50->fields.slotType == 1 )
          size += v50->fields.isMoved;
        if ( (int)++v49 >= v48 )
          goto LABEL_67;
      }
      goto LABEL_473;
    }
    size = 0;
  }
LABEL_67:
  v51 = deck->fields.deckInfo;
  v385 = NpcServantFollowerIds;
  if ( !v51 )
    goto LABEL_466;
  v52 = 0;
  v53 = 0;
  v54 = 4LL;
  while ( 1 )
  {
    svts = v51->fields.svts;
    if ( !svts )
      goto LABEL_466;
    v56 = v54 - 4;
    if ( (int)v54 - 4 >= (signed int)svts->max_length )
      break;
    v57 = (PartyListViewItem___c__DisplayClass27_0_o *)sub_B70764(PartyListViewItem___c__DisplayClass27_0_TypeInfo);
    PartyListViewItem___c__DisplayClass27_0___ctor(v57, 0LL);
    v58 = deck->fields.deckInfo;
    if ( v58 )
    {
      v59 = v58->fields.svts;
      if ( v59 )
      {
        if ( v56 >= v59->max_length )
          goto LABEL_473;
        v60 = *((_QWORD *)&v59->obj.klass + v54);
        if ( v60 )
        {
          if ( v57 )
          {
            v61 = *(_QWORD *)(v60 + 24);
            v57->fields.npcSvtId = *(_QWORD *)(v60 + 64);
            v62 = deck->fields.deckInfo;
            if ( v62 )
            {
              v63 = v62->fields.svts;
              if ( v63 )
              {
                if ( v56 >= v63->max_length )
                  goto LABEL_473;
                v64 = *((_QWORD *)&v63->obj.klass + v54);
                if ( v64 )
                {
                  Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34234816(
                             questRestrictionInfo,
                             *(_DWORD *)(v64 + 76),
                             0LL);
                  if ( (int)v56 >= DeckMemberMax && (v61 || v57->fields.npcSvtId) )
                    v52 = 1;
                  if ( !(Member & 1 | (v57->fields.npcSvtId == 0)) )
                  {
                    v65 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_FollowerInfo__bool__TypeInfo);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      v65,
                      (Il2CppObject *)v57,
                      Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__,
                      (const MethodInfo_29AC578 *)Method_System_Func_FollowerInfo__bool___ctor__);
                    Member = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                               (System_Collections_Generic_List_T__o *)v383,
                               (System_Func_T__bool__o *)v65,
                               (const MethodInfo_1BDCA88 *)Method_BasicHelper_Any_FollowerInfo___);
                    v53 += Member & 1;
                  }
                  v51 = deck->fields.deckInfo;
                  ++v54;
                  if ( v51 )
                    continue;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_466;
  }
  if ( ((v53 == size) & ~v52) != 0 )
  {
    this = v378;
    NpcServantFollowerIds = v385;
    goto LABEL_132;
  }
  this = v378;
  v66 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v66 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_B706AC(
                                                  long___TypeInfo,
                                                  (unsigned int)v66->static_fields->DeckMemberMax);
  Member = (__int64)v383;
  if ( !v383 )
    goto LABEL_466;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v396,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v383,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v401 = v396;
  while ( 1 )
  {
    v72 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v401,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v72 )
      break;
    if ( !v401.fields.current )
      sub_B7076C(v72, v73);
    monitor = (Il2CppClass *)v401.fields.current[4].monitor;
    if ( monitor )
    {
      v68 = LODWORD(v401.fields.current[5].klass) - 1;
      if ( v68 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_B7076C(v72, v73);
        if ( v68 >= NpcServantFollowerIds->max_length )
        {
          v362 = sub_B70798(v72);
          sub_B70738(v362, 0LL);
        }
        v69 = &NpcServantFollowerIds->obj.klass + v68;
        goto LABEL_104;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(v378, NpcServantFollowerIds, v74);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_B7076C(NpcDeployIdx, v71);
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
        {
          v365 = sub_B70798(NpcDeployIdx);
          sub_B70738(v365, 0LL);
        }
        v69 = &NpcServantFollowerIds->obj.klass + (int)NpcDeployIdx;
LABEL_104:
        v69[4] = monitor;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v401,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v75 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v75 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_B706AC(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v75->static_fields->DeckMemberMax);
  for ( i = 0; ; ++i )
  {
    Member = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (__int64)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)(Member + 184) + 156LL) )
      break;
    v79 = deck->fields.deckInfo;
    if ( !v79 )
      goto LABEL_466;
    v80 = v79->fields.svts;
    if ( !v80 )
      goto LABEL_466;
    if ( i >= v80->max_length )
      goto LABEL_473;
    v81 = v80->m_Items[i];
    if ( !v81 )
      goto LABEL_466;
    if ( v81->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Member,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v77);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v83 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Member = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0LL);
          if ( !userServantList )
            goto LABEL_466;
          v90 = (System_Int32_array **)Member;
          if ( Member )
          {
            Member = sub_B70754(Member, userServantList->obj.klass->_1.element_class);
            if ( !Member )
            {
LABEL_474:
              v361 = sub_B7078C(Member);
              sub_B70738(v361, 0LL);
            }
          }
          if ( v83 >= userServantList->max_length )
            goto LABEL_473;
          v91 = &userServantList->obj.klass + (int)v83;
          v91[4] = (Il2CppClass *)v90;
          sub_B70630((BattleServantConfConponent_o *)(v91 + 4), v90, v84, v85, v86, v87, v88, v89);
        }
      }
    }
  }
  if ( FollowerIndex < 1 )
    goto LABEL_132;
  v92 = isNew;
  if ( !questRestrictionInfo->fields.isNotTransitionSupportList && !questRestrictionInfo->fields.isNpcOnlyBattle )
    FollowerIndex = PartyListViewItem__GetSupportInitIndex(
                      v378,
                      (System_Collections_Generic_List_FollowerInfo__o *)v383,
                      v76);
LABEL_133:
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_466;
  if ( !*(_QWORD *)(Member + 24) )
  {
    v373 = followerDeckId;
    v371 = followerClassId;
    goto LABEL_146;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member
    || (followerInfo = *(FollowerInfo_o **)(Member + 24),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (v371 = *(_DWORD *)(Member + 32),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_466:
    sub_B7076C(Member, v34);
  }
  v373 = *(_DWORD *)(Member + 36);
LABEL_146:
  v93 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v93 = BalanceConfig_TypeInfo;
  }
  v94 = (struct PartyOrganizationListViewItem_array *)sub_B706AC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v93->static_fields->DeckMemberMax);
  this->fields.memberList = v94;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v94,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( !v92 && questRestrictionInfo->fields.isNpcEditablePos )
  {
    v386 = NpcServantFollowerIds;
    v101 = 0LL;
    p_isNpcEditablePos = &questRestrictionInfo->fields.isNpcEditablePos;
    v369 = -1;
    while ( 1 )
    {
      for ( j = 8 * v101 + 32; ; j += 8LL )
      {
        v112 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v112 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v101 >= v112->static_fields->DeckMemberMax )
          goto LABEL_468;
        v113 = (PartyListViewItem___c__DisplayClass27_1_o *)sub_B70764(PartyListViewItem___c__DisplayClass27_1_TypeInfo);
        PartyListViewItem___c__DisplayClass27_1___ctor(v113, 0LL);
        if ( v393 )
        {
          Member = (__int64)v388;
          if ( !v388 )
            goto LABEL_466;
          Member = (__int64)PartyListViewItem__GetMember(v388, v101, v114);
          if ( !Member )
            goto LABEL_466;
          v115 = (int32_t *)(Member + 348);
        }
        else
        {
          v116 = deck->fields.deckInfo;
          if ( !v116 )
            goto LABEL_466;
          v117 = v116->fields.svts;
          if ( !v117 )
            goto LABEL_466;
          if ( v101 >= v117->max_length )
            goto LABEL_473;
          v118 = *(__int64 *)((char *)&v117->obj.klass + j);
          if ( !v118 )
            goto LABEL_466;
          v115 = (int32_t *)(v118 + 76);
        }
        v119 = *v115;
        if ( (__int64)v101 < DeckMemberMax )
          break;
        v104 = (unsigned int *)*p_memberList;
        v105 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_38392504(v105, v101, 0, setupInfo, questRestrictionInfo, 1, v119, 0LL);
        if ( !v104 )
          goto LABEL_466;
        if ( v105 )
        {
          Member = sub_B70754(v105, *(_QWORD *)(*(_QWORD *)v104 + 64LL));
          if ( !Member )
            goto LABEL_474;
        }
        if ( v101 >= v104[6] )
          goto LABEL_473;
        *(_QWORD *)((char *)v104 + j) = v105;
        sub_B70630(
          (BattleServantConfConponent_o *)((char *)v104 + j),
          (System_Int32_array **)v105,
          v106,
          v107,
          v108,
          v109,
          v110,
          v111);
        ++v101;
      }
      if ( !v113 )
        goto LABEL_466;
      v113->fields.chkIdx = v101 + 1;
      v400 = 0LL;
      v399 = 0;
      Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34234816(questRestrictionInfoa, v119, 0LL);
      v121 = 0;
      v374 = Member;
      if ( (Member & 1) != 0 )
      {
        if ( !v386 )
          goto LABEL_466;
        if ( v101 >= v386->max_length )
          goto LABEL_473;
        v122 = *(int64_t *)((char *)&v386->obj.klass + j);
        v121 = v122 >= 1
            && v113->fields.chkIdx != v372
            && PartyListViewItem__SetNpcFollowerInfo(this, &v400, &v399, npcFollowerInfoList, v122, v119, v120);
      }
      v123 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfoa, 0LL)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfoa, v119, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_466;
      Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v119, 0LL);
      if ( !Member || ((v374 ^ 1) & 1) != 0 )
      {
        if ( v121 || v113->fields.chkIdx == FollowerIndex )
        {
          v139 = p_isNpcEditablePos;
          v140 = v400;
          v141 = (unsigned int *)*p_memberList;
          if ( v400 )
          {
            v142 = v399;
            v143 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_38389696(
              v143,
              v101,
              v140,
              v142,
              setupInfo,
              questRestrictionInfoa,
              0LL,
              0,
              v373,
              v119,
              0LL);
            v138 = v101 + 1;
            if ( !v141 )
              goto LABEL_466;
          }
          else
          {
            v150 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
            v138 = v101 + 1;
            v143 = v150;
            if ( followerInfo )
              PartyOrganizationListViewItem___ctor_38389696(
                v150,
                v101,
                followerInfo,
                v371,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                0,
                v373,
                v119,
                0LL);
            else
              PartyOrganizationListViewItem___ctor_38392504(
                v150,
                v101,
                1,
                setupInfo,
                questRestrictionInfoa,
                1,
                v119,
                0LL);
            if ( !v141 )
              goto LABEL_466;
          }
          if ( v143 )
          {
            Member = sub_B70754(v143, *(_QWORD *)(*(_QWORD *)v141 + 64LL));
            if ( !Member )
              goto LABEL_474;
          }
          if ( v101 >= v141[6] )
            goto LABEL_473;
          *(_QWORD *)((char *)v141 + j) = v143;
          sub_B70630(
            (BattleServantConfConponent_o *)((char *)v141 + j),
            (System_Int32_array **)v143,
            v144,
            v145,
            v146,
            v147,
            v148,
            v149);
          p_isNpcEditablePos = v139;
        }
        else
        {
          v367 = p_isNpcEditablePos;
          if ( v123 )
          {
            v151 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_FollowerInfo__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v151,
              (Il2CppObject *)v113,
              Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__,
              (const MethodInfo_29AC578 *)Method_System_Func_FollowerInfo__bool___ctor__);
            v152 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v383,
                     (System_Func_TSource__bool__o *)v151,
                     (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
            v153 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B70754(v152, FollowerInfo___TypeInfo);
            if ( !v153 )
              v153 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                            v152,
                                                                            (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
            Member = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                       v153,
                       (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
            if ( (Member & 1) != 0 )
            {
              Member = (__int64)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                  v153,
                                  0,
                                  (const MethodInfo_1CBA6E4 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
              v138 = v101 + 1;
              v154 = (FollowerInfo_o *)Member;
              v155 = v369;
              v156 = (unsigned int *)*p_memberList;
              if ( Member )
                goto LABEL_211;
            }
            else
            {
              if ( !v383 )
                goto LABEL_466;
              v181 = v383->fields._size;
              if ( v181 >= 1 )
              {
                v155 = 0;
                while ( 1 )
                {
                  if ( v181 <= v155 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                  v154 = (FollowerInfo_o *)v383->fields._items->m_Items[v155];
                  if ( !v154 || !v386 )
                    goto LABEL_466;
                  if ( v101 >= v386->max_length )
                    goto LABEL_473;
                  if ( (Il2CppClass *)v154->fields.npcFollowerSvtId != *(Il2CppClass **)((char *)&v386->obj.klass + j) )
                  {
                    if ( v383->fields._size <= v155 )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                    if ( v369 < (int)v155 && v154->fields.npcInitIdx <= 0 )
                      break;
                  }
                  ++v155;
                  v181 = v383->fields._size;
                  if ( (int)v155 >= v181 )
                    goto LABEL_260;
                }
                v138 = v101 + 1;
                if ( v383->fields._size <= v155 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                v156 = (unsigned int *)*p_memberList;
LABEL_211:
                userSvtLeaderHash = v154->fields.userSvtLeaderHash;
                if ( !userSvtLeaderHash )
                  goto LABEL_466;
                if ( !userSvtLeaderHash->max_length )
                  goto LABEL_473;
                v158 = userSvtLeaderHash->m_Items[0];
                if ( !v158 )
                  goto LABEL_466;
                classId = v158->fields.classId;
                v160 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_38389696(
                  v160,
                  v101,
                  v154,
                  classId,
                  setupInfo,
                  questRestrictionInfoa,
                  0LL,
                  1,
                  v373,
                  v119,
                  0LL);
                if ( !v156 )
                  goto LABEL_466;
                if ( v160 )
                {
                  Member = sub_B70754(v160, *(_QWORD *)(*(_QWORD *)v156 + 64LL));
                  if ( !Member )
                    goto LABEL_474;
                }
                if ( v101 >= v156[6] )
                  goto LABEL_473;
                *(_QWORD *)((char *)v156 + j) = v160;
                sub_B70630(
                  (BattleServantConfConponent_o *)((char *)v156 + j),
                  (System_Int32_array **)v160,
                  v161,
                  v162,
                  v163,
                  v164,
                  v165,
                  v166);
                this = v378;
                v369 = v155;
LABEL_303:
                p_isNpcEditablePos = v367;
                goto LABEL_242;
              }
LABEL_260:
              v138 = v101 + 1;
              v156 = (unsigned int *)*p_memberList;
            }
            v182 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_38392504(v182, v101, 0, setupInfo, questRestrictionInfoa, 0, v119, 0LL);
            if ( !v156 )
              goto LABEL_466;
            p_isNpcEditablePos = v367;
            if ( v182 )
            {
              Member = sub_B70754(v182, *(_QWORD *)(*(_QWORD *)v156 + 64LL));
              if ( !Member )
                goto LABEL_474;
            }
            if ( v101 >= v156[6] )
              goto LABEL_473;
            *(_QWORD *)((char *)v156 + j) = v182;
            sub_B70630(
              (BattleServantConfConponent_o *)((char *)v156 + j),
              (System_Int32_array **)v182,
              v183,
              v184,
              v185,
              v186,
              v187,
              v188);
            this = v378;
          }
          else
          {
            if ( !v386 )
              goto LABEL_466;
            v167 = deck;
            if ( v101 >= v386->max_length )
              goto LABEL_473;
            if ( *(Il2CppClass **)((char *)&v386->obj.klass + j) )
            {
              Member = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v383,
                         (const MethodInfo_1CB85E8 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
              v138 = v101 + 1;
              if ( (int)Member < 1 )
              {
LABEL_231:
                v171 = (unsigned int *)*p_memberList;
                v172 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_38392504(
                  v172,
                  v101,
                  0,
                  setupInfo,
                  questRestrictionInfoa,
                  1,
                  v119,
                  0LL);
                if ( !v171 )
                  goto LABEL_466;
                if ( v172 )
                {
                  Member = sub_B70754(v172, *(_QWORD *)(*(_QWORD *)v171 + 64LL));
                  if ( !Member )
                    goto LABEL_474;
                }
                if ( v101 >= v171[6] )
                  goto LABEL_473;
                *(_QWORD *)((char *)v171 + j) = v172;
                sub_B70630(
                  (BattleServantConfConponent_o *)((char *)v171 + j),
                  (System_Int32_array **)v172,
                  v173,
                  v174,
                  v175,
                  v176,
                  v177,
                  v178);
              }
              else
              {
                if ( !v383 )
                  goto LABEL_466;
                v168 = v383;
                v169 = 4LL;
                while ( 1 )
                {
                  if ( v168->fields._size <= (unsigned int)(v169 - 4) )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                  v170 = (FollowerInfo_o *)*((_QWORD *)&v383->fields._items->obj.klass + v169);
                  if ( !v170 )
                    goto LABEL_466;
                  if ( v101 >= v386->max_length )
                    goto LABEL_473;
                  if ( (Il2CppClass *)v170->fields.npcFollowerSvtId == *(Il2CppClass **)((char *)&v386->obj.klass + j) )
                    break;
                  v168 = v383;
                  Member = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v383,
                             (const MethodInfo_1CB85E8 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
                  if ( (int)++v169 - 4 >= (int)Member )
                    goto LABEL_231;
                }
                if ( v383->fields._size <= (unsigned int)(v169 - 4) )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                v203 = (unsigned int *)*p_memberList;
                v214 = v170->fields.userSvtLeaderHash;
                if ( !v214 )
                  goto LABEL_466;
                if ( !v214->max_length )
                  goto LABEL_473;
                v215 = v214->m_Items[0];
                if ( !v215 )
                  goto LABEL_466;
                v216 = v215->fields.classId;
                v217 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_38389696(
                  v217,
                  v101,
                  v170,
                  v216,
                  setupInfo,
                  questRestrictionInfoa,
                  0LL,
                  1,
                  v373,
                  v119,
                  0LL);
                if ( !v203 )
                  goto LABEL_466;
                if ( v217 )
                {
                  Member = sub_B70754(v217, *(_QWORD *)(*(_QWORD *)v203 + 64LL));
                  if ( !Member )
                    goto LABEL_474;
                }
                if ( v101 >= v203[6] )
                  goto LABEL_473;
                *(_QWORD *)((char *)v203 + j) = v217;
                sub_B70630(
                  (BattleServantConfConponent_o *)((char *)v203 + j),
                  (System_Int32_array **)v217,
                  v218,
                  v219,
                  v220,
                  v221,
                  v222,
                  v223);
              }
              goto LABEL_303;
            }
            if ( (v374 & 1) != 0 )
            {
              v189 = userServantList;
              if ( !userServantList )
                goto LABEL_466;
              v138 = v101 + 1;
              if ( v101 >= userServantList->max_length )
                goto LABEL_473;
              v190 = *(__int64 *)((char *)&userServantList->obj.klass + j);
              if ( v190 )
              {
                v191 = *(_QWORD *)(v190 + 80);
                v192 = *(_QWORD *)(v190 + 88);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v402.fields.currentCryptoKey = v191;
                *(_QWORD *)&v402.fields.fakeValue = v192;
                Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v402, 0LL);
                if ( v101 >= userServantList->max_length )
                  goto LABEL_473;
                v193 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + j);
                if ( !v193 )
                  goto LABEL_466;
                v194 = Member;
                Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v193[6], 0LL);
                if ( v101 >= userServantList->max_length )
                  goto LABEL_473;
                v195 = Member;
                Member = *(__int64 *)((char *)&userServantList->obj.klass + j);
                if ( !Member )
                  goto LABEL_466;
                DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
                Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfoa,
                           v194,
                           v195,
                           DispLimitCount,
                           v119,
                           0,
                           0LL);
                v167 = deck;
                v189 = userServantList;
                if ( (Member & 1) != 0 )
                {
                  if ( v101 >= userServantList->max_length )
                    goto LABEL_473;
                  *(Il2CppClass **)((char *)&userServantList->obj.klass + j) = 0LL;
                  sub_B70630(
                    (BattleServantConfConponent_o *)((char *)userServantList + j),
                    0LL,
                    v197,
                    v198,
                    v199,
                    v200,
                    v201,
                    v202);
                }
              }
            }
            else
            {
              v189 = userServantList;
              v138 = v101 + 1;
              if ( !userServantList )
                goto LABEL_466;
            }
            if ( v101 >= v189->max_length )
              goto LABEL_473;
            v204 = *(UserServantEntity_o **)((char *)&v189->obj.klass + j);
            v205 = (unsigned int *)*p_memberList;
            if ( v204 )
            {
              EquipList = UserEventDeckEntity__GetEquipList(v167, v101, 0LL);
              v207 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_38380420(
                v207,
                v101,
                v204,
                EquipList,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                v119,
                0LL,
                0,
                0LL);
              if ( !v205 )
                goto LABEL_466;
              p_isNpcEditablePos = v367;
            }
            else
            {
              v207 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_38392504(
                v207,
                v101,
                0,
                setupInfo,
                questRestrictionInfoa,
                1,
                v119,
                0LL);
              p_isNpcEditablePos = v367;
              if ( !v205 )
                goto LABEL_466;
            }
            if ( v207 )
            {
              Member = sub_B70754(v207, *(_QWORD *)(*(_QWORD *)v205 + 64LL));
              if ( !Member )
                goto LABEL_474;
            }
            if ( v101 >= v205[6] )
              goto LABEL_473;
            *(_QWORD *)((char *)v205 + j) = v207;
            sub_B70630(
              (BattleServantConfConponent_o *)((char *)v205 + j),
              (System_Int32_array **)v207,
              v208,
              v209,
              v210,
              v211,
              v212,
              v213);
          }
        }
      }
      else
      {
        v124 = (FollowerInfo_o *)Member;
        v125 = p_isNpcEditablePos;
        IsNpc = FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL);
        v127 = v371;
        if ( IsNpc )
          v127 = 0;
        v368 = v127;
        v128 = FollowerInfo__get_IsNpc(v124, 0LL);
        v129 = (unsigned int *)*p_memberList;
        if ( v128 )
          v130 = 0;
        else
          v130 = v373;
        v131 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_38389696(
          v131,
          v101,
          v124,
          v368,
          setupInfo,
          questRestrictionInfoa,
          friendPointCampaignEntityList,
          0,
          v130,
          v119,
          0LL);
        if ( !v129 )
          goto LABEL_466;
        p_isNpcEditablePos = v125;
        if ( v131 )
        {
          Member = sub_B70754(v131, *(_QWORD *)(*(_QWORD *)v129 + 64LL));
          if ( !Member )
            goto LABEL_474;
        }
        if ( v101 >= v129[6] )
          goto LABEL_473;
        v138 = v101 + 1;
        *(_QWORD *)((char *)v129 + j) = v131;
        sub_B70630(
          (BattleServantConfConponent_o *)((char *)v129 + j),
          (System_Int32_array **)v131,
          v132,
          v133,
          v134,
          v135,
          v136,
          v137);
      }
LABEL_242:
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_466;
      if ( v101 >= memberList->max_length )
        goto LABEL_473;
      Member = *(__int64 *)((char *)&memberList->obj.klass + j);
      if ( !Member )
        goto LABEL_466;
      cost = this->fields.cost;
      v101 = v138;
      questRestrictionInfo = questRestrictionInfoa;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Member, 0LL)
                        + cost;
    }
  }
  v379 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( v92 )
  {
    p_max_length = &userServantList->max_length;
    goto LABEL_324;
  }
  if ( !userServantList )
    goto LABEL_466;
  p_max_length = &userServantList->max_length;
  if ( (int)userServantList->max_length >= 1 )
  {
    v375 = isBaseModify;
    v224 = 0LL;
    v225 = 0;
    v226 = 0LL;
    m_Items = userServantList->m_Items;
    while ( 1 )
    {
      v228 = (PartyListViewItem___c__DisplayClass27_2_o *)sub_B70764(PartyListViewItem___c__DisplayClass27_2_TypeInfo);
      PartyListViewItem___c__DisplayClass27_2___ctor(v228, 0LL);
      if ( !v228 )
        goto LABEL_466;
      v229 = v226 + 1;
      v228->fields.chkIdx = v226 + 1;
      if ( v226 >= *p_max_length )
        goto LABEL_473;
      if ( m_Items[v226] )
        ++v225;
      v230 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v230,
        (Il2CppObject *)v228,
        Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__,
        (const MethodInfo_29AC578 *)Method_System_Func_FollowerInfo__bool___ctor__);
      Member = (__int64)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                          (System_Func_TSource__bool__o *)v230,
                          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v237 = *p_max_length;
      if ( v226 >= v237 )
        goto LABEL_473;
      if ( !m_Items[v226] )
        goto LABEL_322;
      if ( v228->fields.chkIdx > DeckMemberMax )
        goto LABEL_320;
      Member = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Member,
                 (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v225 > v379 || (Member & 1) != 0 )
        break;
LABEL_322:
      ++v224;
      ++v226;
      if ( v229 >= (int)*p_max_length )
      {
        isBaseModify = v375;
        goto LABEL_324;
      }
    }
    v237 = *p_max_length;
LABEL_320:
    if ( v226 >= v237 )
      goto LABEL_473;
    m_Items[v226] = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&m_Items[v224], 0LL, v231, v232, v233, v234, v235, v236);
    goto LABEL_322;
  }
LABEL_324:
  v238 = 0LL;
  v376 = 0;
  v239 = DeckMemberMax;
LABEL_445:
  v341 = 8 * v238 + 32;
  for ( k = v238; ; ++k )
  {
    v351 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v351 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v351->static_fields->DeckMemberMax )
      break;
    v352 = (PartyListViewItem___c__DisplayClass27_3_o *)sub_B70764(PartyListViewItem___c__DisplayClass27_3_TypeInfo);
    PartyListViewItem___c__DisplayClass27_3___ctor(v352, 0LL);
    if ( v393 )
    {
      Member = (__int64)v388;
      if ( !v388 )
        goto LABEL_466;
      Member = (__int64)PartyListViewItem__GetMember(v388, k, v353);
      if ( !Member )
        goto LABEL_466;
      v354 = (int32_t *)(Member + 348);
    }
    else
    {
      v355 = deck->fields.deckInfo;
      if ( !v355 )
        goto LABEL_466;
      v356 = v355->fields.svts;
      if ( !v356 )
        goto LABEL_466;
      if ( k >= v356->max_length )
        goto LABEL_473;
      v357 = *(__int64 *)((char *)&v356->obj.klass + v341);
      if ( !v357 )
        goto LABEL_466;
      v354 = (int32_t *)(v357 + 76);
    }
    v358 = *v354;
    if ( (__int64)k < v239 )
    {
      if ( !v352 )
        goto LABEL_466;
      v238 = k + 1;
      v352->fields.chkIdx = k + 1;
      v398 = 0LL;
      v397 = 0;
      Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34234816(questRestrictionInfo, v358, 0LL);
      v241 = Member;
      if ( (Member & 1) == 0 )
        goto LABEL_333;
      v242 = deck->fields.deckInfo;
      if ( !v242 )
        goto LABEL_466;
      v243 = v242->fields.svts;
      if ( !v243 )
        goto LABEL_466;
      if ( k >= v243->max_length )
        goto LABEL_473;
      v244 = *(__int64 *)((char *)&v243->obj.klass + v341);
      if ( !v244 )
        goto LABEL_466;
      v245 = *(_QWORD *)(v244 + 64);
      if ( v245 >= 1 )
      {
        if ( v352->fields.chkIdx == v372 )
        {
          v370 = 0;
          v391 = 1;
        }
        else
        {
          v391 = PartyListViewItem__SetNpcFollowerInfo(v378, &v398, &v397, npcFollowerInfoList, v245, v358, v240);
          v370 = 0;
        }
        goto LABEL_338;
      }
LABEL_333:
      if ( followerInfo && !questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v391 = 0;
        v370 = v352->fields.chkIdx == FollowerIndex;
      }
      else
      {
        v370 = 0;
        v391 = 0;
      }
LABEL_338:
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_466;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v358, 0LL);
      if ( NpcFollowerInfo && ((v241 ^ 1) & 1) == 0 )
      {
        v247 = NpcFollowerInfo;
        v248 = isBaseModify;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v249 = 0;
        else
          v249 = v371;
        v250 = FollowerInfo__get_IsNpc(v247, 0LL);
        v251 = (unsigned int *)*p_memberList;
        if ( v250 )
          v252 = 0;
        else
          v252 = v373;
        v253 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_38389696(
          v253,
          k,
          v247,
          v249,
          setupInfo,
          questRestrictionInfoa,
          friendPointCampaignEntityList,
          0,
          v252,
          v358,
          0LL);
        if ( !v251 )
          goto LABEL_466;
        if ( v253 )
        {
          Member = sub_B70754(v253, *(_QWORD *)(*(_QWORD *)v251 + 64LL));
          if ( !Member )
            goto LABEL_474;
        }
        if ( k >= v251[6] )
          goto LABEL_473;
        isBaseModify = v248;
        *(_QWORD *)((char *)v251 + v341) = v253;
        sub_B70630(
          (BattleServantConfConponent_o *)((char *)v251 + v341),
          (System_Int32_array **)v253,
          v254,
          v255,
          v256,
          v257,
          v258,
          v259);
        questRestrictionInfo = questRestrictionInfoa;
        v260 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_466;
        v238 = k + 1;
        if ( k >= v260->max_length )
          goto LABEL_473;
        v261 = deck->fields.deckInfo;
        if ( !v261 )
          goto LABEL_466;
        v262 = v261->fields.svts;
        if ( !v262 )
          goto LABEL_466;
        if ( k >= v262->max_length )
          goto LABEL_473;
        v263 = *(__int64 *)((char *)&v262->obj.klass + v341);
        if ( !v263 )
          goto LABEL_466;
        v264 = *(__int64 *)((char *)&v260->obj.klass + v341);
        if ( !v264 )
          goto LABEL_466;
        *(_DWORD *)(v264 + 348) = *(_DWORD *)(v263 + 76);
        ++v376;
        goto LABEL_445;
      }
      if ( v391 || v352->fields.chkIdx == FollowerIndex )
      {
        v265 = v398;
        v266 = (unsigned int *)*p_memberList;
        if ( v398 )
        {
          v267 = v397;
          initPos = v358;
          v268 = (unsigned int *)*p_memberList;
          v269 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_38389696(
            v269,
            k,
            v265,
            v267,
            setupInfo,
            questRestrictionInfo,
            0LL,
            !v370,
            v373,
            initPos,
            0LL);
          if ( !v268 )
            goto LABEL_480;
          if ( v269 )
          {
            IsRestrictionServantIndividuality = sub_B70754(v269, *(_QWORD *)(*(_QWORD *)v268 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_478;
          }
          if ( k >= v268[6] )
            goto LABEL_479;
          v277 = (BattleServantConfConponent_o *)((char *)v268 + v341);
        }
        else
        {
          v278 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
          v269 = v278;
          if ( followerInfo )
            PartyOrganizationListViewItem___ctor_38389696(
              v278,
              k,
              followerInfo,
              v371,
              setupInfo,
              questRestrictionInfo,
              0LL,
              !v370,
              v373,
              v358,
              0LL);
          else
            PartyOrganizationListViewItem___ctor_38392504(v278, k, 1, setupInfo, questRestrictionInfo, 1, v358, 0LL);
          if ( !v266 )
            goto LABEL_480;
          if ( v269 )
          {
            IsRestrictionServantIndividuality = sub_B70754(v269, *(_QWORD *)(*(_QWORD *)v266 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_478;
          }
          if ( k >= v266[6] )
            goto LABEL_479;
          v277 = (BattleServantConfConponent_o *)((char *)v266 + v341);
        }
        v277->klass = (BattleServantConfConponent_c *)v269;
        sub_B70630(v277, (System_Int32_array **)v269, v271, v272, v273, v274, v275, v276);
        v297 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_480;
        if ( k >= v297->max_length )
        {
LABEL_479:
          v364 = sub_B70798(IsRestrictionServantIndividuality);
          sub_B70738(v364, 0LL);
        }
        v298 = deck->fields.deckInfo;
        if ( !v298 )
          goto LABEL_480;
        v299 = v298->fields.svts;
        if ( !v299 )
          goto LABEL_480;
        if ( k >= v299->max_length )
          goto LABEL_479;
        v300 = *(__int64 *)((char *)&v299->obj.klass + v341);
        if ( !v300 || (v301 = *(__int64 *)((char *)&v297->obj.klass + v341)) == 0 )
LABEL_480:
          sub_B7076C(IsRestrictionServantIndividuality, v34);
        *(_DWORD *)(v301 + 348) = *(_DWORD *)(v300 + 76);
        v376 += v370 || v391;
        goto LABEL_445;
      }
      v279 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v279,
        (Il2CppObject *)v352,
        Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__,
        (const MethodInfo_29AC578 *)Method_System_Func_FollowerInfo__bool___ctor__);
      v280 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v383,
               (System_Func_TSource__bool__o *)v279,
               (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v281 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B70754(v280, FollowerInfo___TypeInfo);
      if ( !v281 )
        v281 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                      v280,
                                                                      (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      IsRestrictionServantIndividuality = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                            v281,
                                            (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v376 < v379 && (IsRestrictionServantIndividuality & 1) == 0 )
      {
        if ( (v241 & 1) != 0 )
        {
          if ( !userServantList )
            goto LABEL_480;
          v282 = p_max_length;
          if ( k >= *p_max_length )
            goto LABEL_479;
          v283 = *(__int64 *)((char *)&userServantList->obj.klass + v341);
          if ( v283 )
          {
            v285 = *(_QWORD *)(v283 + 80);
            v284 = *(_QWORD *)(v283 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v403.fields.currentCryptoKey = v285;
            *(_QWORD *)&v403.fields.fakeValue = v284;
            IsRestrictionServantIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                  v403,
                                                  0LL);
            if ( k >= *p_max_length )
              goto LABEL_479;
            v286 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + v341);
            if ( !v286 )
              goto LABEL_480;
            v287 = IsRestrictionServantIndividuality;
            IsRestrictionServantIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                  v286[6],
                                                  0LL);
            if ( k >= *p_max_length )
              goto LABEL_479;
            v288 = IsRestrictionServantIndividuality;
            IsRestrictionServantIndividuality = *(__int64 *)((char *)&userServantList->obj.klass + v341);
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_480;
            v289 = UserServantEntity__getDispLimitCount(
                     (UserServantEntity_o *)IsRestrictionServantIndividuality,
                     0,
                     0LL);
            IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                  questRestrictionInfo,
                                                  v287,
                                                  v288,
                                                  v289,
                                                  v358,
                                                  0,
                                                  0LL);
            v282 = p_max_length;
            if ( (IsRestrictionServantIndividuality & 1) != 0 )
            {
              if ( k >= *p_max_length )
                goto LABEL_479;
              *(Il2CppClass **)((char *)&userServantList->obj.klass + v341) = 0LL;
              sub_B70630(
                (BattleServantConfConponent_o *)((char *)userServantList + v341),
                0LL,
                v290,
                v291,
                v292,
                v293,
                v294,
                v295);
            }
          }
        }
        else
        {
          v282 = p_max_length;
          if ( !userServantList )
            goto LABEL_480;
        }
        if ( k >= *v282 )
          goto LABEL_479;
        v314 = *(UserServantEntity_o **)((char *)&userServantList->obj.klass + v341);
        v315 = (unsigned int *)*p_memberList;
        if ( v314 )
        {
          v316 = UserEventDeckEntity__GetEquipList(deck, k, 0LL);
          v317 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_38380420(
            v317,
            k,
            v314,
            v316,
            setupInfo,
            questRestrictionInfo,
            0LL,
            v358,
            0LL,
            0,
            0LL);
          if ( !v315 )
            goto LABEL_480;
          if ( v317 )
          {
            IsRestrictionServantIndividuality = sub_B70754(v317, *(_QWORD *)(*(_QWORD *)v315 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_478;
          }
          if ( k >= v315[6] )
            goto LABEL_479;
          *(_QWORD *)((char *)v315 + v341) = v317;
          sub_B70630(
            (BattleServantConfConponent_o *)((char *)v315 + v341),
            (System_Int32_array **)v317,
            v318,
            v319,
            v320,
            v321,
            v322,
            v323);
        }
        else
        {
          v324 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_38392504(v324, k, 0, setupInfo, questRestrictionInfo, 1, v358, 0LL);
          if ( !v315 )
            goto LABEL_480;
          if ( v324 )
          {
            IsRestrictionServantIndividuality = sub_B70754(v324, *(_QWORD *)(*(_QWORD *)v315 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_478;
          }
          if ( k >= v315[6] )
            goto LABEL_479;
          *(_QWORD *)((char *)v315 + v341) = v324;
          sub_B70630(
            (BattleServantConfConponent_o *)((char *)v315 + v341),
            (System_Int32_array **)v324,
            v325,
            v326,
            v327,
            v328,
            v329,
            v330);
        }
        v238 = k + 1;
        ++v376;
        goto LABEL_441;
      }
      IsRestrictionServantIndividuality = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                            v281,
                                            (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( (IsRestrictionServantIndividuality & 1) != 0 )
      {
        IsRestrictionServantIndividuality = (__int64)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                                       v281,
                                                       0,
                                                       (const MethodInfo_1CBA6E4 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        v296 = (FollowerInfo_o *)IsRestrictionServantIndividuality;
        goto LABEL_411;
      }
      if ( !v383 )
        goto LABEL_480;
      v302 = v383->fields._size;
      v303 = k - v376;
      if ( v302 <= (int)k - v376 )
      {
        v238 = k + 1;
        v331 = (unsigned int *)*p_memberList;
      }
      else
      {
        if ( v302 <= v303 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v296 = (FollowerInfo_o *)v383->fields._items->m_Items[v303];
        v238 = k + 1;
LABEL_411:
        v304 = (unsigned int *)*p_memberList;
        if ( v296 )
        {
          v305 = v296->fields.userSvtLeaderHash;
          if ( !v305 )
            goto LABEL_480;
          if ( !v305->max_length )
            goto LABEL_479;
          v306 = v305->m_Items[0];
          if ( !v306 )
            goto LABEL_480;
          v392 = v306->fields.classId;
          v307 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_38389696(
            v307,
            k,
            v296,
            v392,
            setupInfo,
            questRestrictionInfo,
            0LL,
            1,
            v373,
            v358,
            0LL);
          if ( !v304 )
            goto LABEL_480;
          if ( v307 )
          {
            IsRestrictionServantIndividuality = sub_B70754(v307, *(_QWORD *)(*(_QWORD *)v304 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_478;
          }
          if ( k >= v304[6] )
            goto LABEL_479;
          *(_QWORD *)((char *)v304 + v341) = v307;
          sub_B70630(
            (BattleServantConfConponent_o *)((char *)v304 + v341),
            (System_Int32_array **)v307,
            v308,
            v309,
            v310,
            v311,
            v312,
            v313);
LABEL_441:
          v339 = v378->fields.memberList;
          if ( !v339 )
            goto LABEL_480;
          if ( k >= v339->max_length )
            goto LABEL_479;
          IsRestrictionServantIndividuality = *(__int64 *)((char *)&v339->obj.klass + v341);
          if ( !IsRestrictionServantIndividuality )
            goto LABEL_480;
          v340 = v378->fields.cost;
          v378->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                                (PartyOrganizationListViewItem_o *)IsRestrictionServantIndividuality,
                                0LL)
                            + v340;
          goto LABEL_445;
        }
        v331 = (unsigned int *)*p_memberList;
      }
      v332 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_38392504(v332, k, 0, setupInfo, questRestrictionInfo, 0, v358, 0LL);
      if ( !v331 )
        goto LABEL_480;
      if ( v332 )
      {
        IsRestrictionServantIndividuality = sub_B70754(v332, *(_QWORD *)(*(_QWORD *)v331 + 64LL));
        if ( !IsRestrictionServantIndividuality )
        {
LABEL_478:
          v363 = sub_B7078C(IsRestrictionServantIndividuality);
          sub_B70738(v363, 0LL);
        }
      }
      if ( k >= v331[6] )
        goto LABEL_479;
      *(_QWORD *)((char *)v331 + v341) = v332;
      sub_B70630(
        (BattleServantConfConponent_o *)((char *)v331 + v341),
        (System_Int32_array **)v332,
        v333,
        v334,
        v335,
        v336,
        v337,
        v338);
      goto LABEL_441;
    }
    v343 = (unsigned int *)*p_memberList;
    v344 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_38392504(v344, k, 0, setupInfo, questRestrictionInfo, 1, v358, 0LL);
    if ( !v343 )
      goto LABEL_466;
    if ( v344 )
    {
      Member = sub_B70754(v344, *(_QWORD *)(*(_QWORD *)v343 + 64LL));
      if ( !Member )
        goto LABEL_474;
    }
    if ( k >= v343[6] )
      goto LABEL_473;
    *(_QWORD *)((char *)v343 + v341) = v344;
    sub_B70630(
      (BattleServantConfConponent_o *)((char *)v343 + v341),
      (System_Int32_array **)v344,
      v345,
      v346,
      v347,
      v348,
      v349,
      v350);
    v341 += 8LL;
  }
  this = v378;
  p_isNpcEditablePos = &questRestrictionInfo->fields.isNpcEditablePos;
LABEL_468:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v34);
  if ( (*p_isNpcEditablePos || !questRestrictionInfo->fields.isNpcOnlyBattle)
    && !PartyListViewItem__GetStartDeckCondition(this, v359) )
  {
    *isBaseModify = 1;
  }
}


void __fastcall PartyListViewItem___ctor_32605204(
        PartyListViewItem_o *this,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventUpValSetupInfo_o *setupInfo,
        int32_t restartWave,
        const MethodInfo *method)
{
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x28
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v29; // x1
  struct DeckServant_o *deckInfo; // x8
  int64_t eventId; // x8
  BalanceConfig_c *v32; // x8
  struct PartyOrganizationListViewItem_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_int__o *v40; // x27
  int v41; // w8
  __int64 v42; // x20
  unsigned int v43; // w19
  __int64 v44; // x24
  struct System_Int32_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t v52; // w27
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v54; // w24
  struct DeckServant_o *v55; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v57; // x8
  UserServantEntity_array *v58; // x9
  int32_t initPos; // w28
  UserServantEntity_o *v60; // x20
  struct PartyOrganizationListViewItem_array *v61; // x19
  __int128 v62; // q0
  int64_t v63; // x0
  System_Int64_array *v64; // x21
  struct DeckServant_o *v65; // x8
  struct DeckServantData_array *v66; // x8
  DeckServantData_o *v67; // x8
  System_Int32_array *equipSvtIdList; // x26
  PartyOrganizationListViewItem_o *v69; // x20
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  Il2CppClass **v76; // x0
  PartyOrganizationListViewItem_o *v77; // x24
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  Il2CppClass **v84; // x0
  struct PartyOrganizationListViewItem_array *v85; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v88; // x0
  __int64 v89; // x0
  PartyListViewItem_o *v90; // [xsp+20h] [xbp-E0h]
  UserEventDeckEntity_o *v91; // [xsp+28h] [xbp-D8h]
  UserServantEntity_array *UserServantList; // [xsp+30h] [xbp-D0h]
  int v93; // [xsp+3Ch] [xbp-C4h]
  int32_t v96; // [xsp+54h] [xbp-ACh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+58h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+80h] [xbp-80h]

  if ( (byte_4355B5E & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem___TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem_TypeInfo);
    byte_4355B5E = 1;
  }
  ListViewItem___ctor_23967088((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !deck )
    goto LABEL_73;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_73;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  eventId = deck->fields.eventId;
  this->fields._IsWaveBattleRestart_k__BackingField = restartWave > 0;
  this->fields.id = eventId;
  v96 = index + 1;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, restartWave > 0, 0LL);
  v32 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  v33 = (struct PartyOrganizationListViewItem_array *)sub_B706AC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v32->static_fields->DeckMemberMax);
  this->fields.memberList = v33;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v40 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_73;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_73;
  Master_WarQuestSelectionMaster = (__int64)ViewWaveEnemyMaster__GetEntityListFromQuestId(
                                              (ViewWaveEnemyMaster_o *)Master_WarQuestSelectionMaster,
                                              (*p_questRestrictionInfo)->fields.questId,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_73;
  v41 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
  v42 = Master_WarQuestSelectionMaster;
  if ( v41 >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= v41 )
      {
LABEL_74:
        v88 = sub_B70798(Master_WarQuestSelectionMaster);
        sub_B70738(v88, 0LL);
      }
      v44 = *(_QWORD *)(v42 + 8LL * (int)v43 + 32);
      if ( !v44 )
        break;
      if ( *(_DWORD *)(v44 + 56) == v96 )
      {
        if ( !v40 )
          break;
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v40,
                                           *(_DWORD *)(v44 + 32),
                                           (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v40,
            *(_DWORD *)(v44 + 32),
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v41 = *(_DWORD *)(v42 + 24);
      if ( (int)++v43 >= v41 )
        goto LABEL_23;
    }
LABEL_73:
    sub_B7076C(Master_WarQuestSelectionMaster, v29);
  }
LABEL_23:
  if ( !v40 )
    goto LABEL_73;
  v45 = System_Collections_Generic_List_int___ToArray(
          v40,
          (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v45;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.waveBattleEnemyClassIds,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields._IsClearedWave_k__BackingField = v96 < restartWave;
  Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
  }
  v52 = 0;
  v90 = this;
  v91 = deck;
  v93 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 160LL) * index;
  while ( 1 )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_WarQuestSelectionMaster + 184);
    if ( v52 >= static_fields->DeckMemberMax )
      break;
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v54 = v93 + v52;
    if ( v52 >= static_fields->DeckMainMemberMax )
    {
      v58 = UserServantList;
      initPos = v52 + 1;
      if ( !UserServantList )
        goto LABEL_73;
    }
    else
    {
      v55 = deck->fields.deckInfo;
      if ( !v55 )
        goto LABEL_73;
      svts = v55->fields.svts;
      if ( !svts )
        goto LABEL_73;
      if ( v54 >= svts->max_length )
        goto LABEL_74;
      v57 = svts->m_Items[v54];
      v58 = UserServantList;
      if ( !v57 )
        goto LABEL_73;
      initPos = v57->fields.initPos;
      if ( !UserServantList )
        goto LABEL_73;
    }
    if ( v52 >= v58->max_length )
      goto LABEL_74;
    v60 = v58->m_Items[v52];
    v61 = *p_memberList;
    if ( v60 )
    {
      v62 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
      *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v99.fields.fakeValue = v62;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v98 = v99;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v98, 0LL);
      Master_WarQuestSelectionMaster = (__int64)UserEventDeckEntity__GetEquipList_27944920(
                                                  deck,
                                                  v63,
                                                  restartWave > 0,
                                                  0LL);
      v64 = (System_Int64_array *)Master_WarQuestSelectionMaster;
      if ( restartWave < 1 )
      {
        equipSvtIdList = 0LL;
      }
      else
      {
        v65 = deck->fields.deckInfo;
        if ( !v65 )
          goto LABEL_73;
        v66 = v65->fields.svts;
        if ( !v66 )
          goto LABEL_73;
        if ( v54 >= v66->max_length )
          goto LABEL_74;
        v67 = v66->m_Items[v54];
        if ( !v67 )
          goto LABEL_73;
        equipSvtIdList = v67->fields.svtEquipIds;
      }
      v77 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_38380420(
        v77,
        v52,
        v60,
        v64,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        equipSvtIdList,
        v96 < restartWave,
        0LL);
      if ( !v61 )
        goto LABEL_73;
      this = v90;
      if ( v77 )
      {
        Master_WarQuestSelectionMaster = sub_B70754(v77, v61->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
        {
LABEL_75:
          v89 = sub_B7078C(Master_WarQuestSelectionMaster);
          sub_B70738(v89, 0LL);
        }
      }
      if ( v52 >= v61->max_length )
        goto LABEL_74;
      v84 = &v61->obj.klass + v52;
      v84[4] = (Il2CppClass *)v77;
      sub_B70630((BattleServantConfConponent_o *)(v84 + 4), (System_Int32_array **)v77, v78, v79, v80, v81, v82, v83);
      deck = v91;
    }
    else
    {
      v69 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_38392504(v69, v52, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v61 )
        goto LABEL_73;
      if ( v69 )
      {
        Master_WarQuestSelectionMaster = sub_B70754(v69, v61->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_75;
      }
      if ( v52 >= v61->max_length )
        goto LABEL_74;
      v76 = &v61->obj.klass + v52;
      v76[4] = (Il2CppClass *)v69;
      sub_B70630((BattleServantConfConponent_o *)(v76 + 4), (System_Int32_array **)v69, v70, v71, v72, v73, v74, v75);
    }
    v85 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_73;
    if ( v52 >= v85->max_length )
      goto LABEL_74;
    Master_WarQuestSelectionMaster = (__int64)v85->m_Items[v52];
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_73;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_WarQuestSelectionMaster,
      this->fields.waveBattleEnemyClassIds,
      0LL);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_73;
    if ( v52 >= memberList->max_length )
      goto LABEL_74;
    Master_WarQuestSelectionMaster = (__int64)memberList->m_Items[v52];
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_73;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_WarQuestSelectionMaster,
                          0LL)
                      + cost;
    Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
    ++v52;
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
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t v12; // w8
  int32_t v13; // w21
  int32_t servantNumMax; // w22
  int32_t ServantNumRangeType; // w0
  BalanceConfig_c *v17; // x0
  int32_t type; // w8
  struct QuestRestrictionInfo_o *v19; // x9
  int32_t servantNumMin; // w20
  int32_t v21; // w8

  if ( (byte_4355B70 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B70 = 1;
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
  questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
  }
  type = questRestrictionInfo->fields.fixedSupportPositionRestrictionEntity[2].fields.type;
  if ( deckMemberCount - v13 >= 1 && v13 < type )
    return 0;
  v19 = this->fields.questRestrictionInfo;
  if ( !v19 )
LABEL_31:
    sub_B7076C(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
  servantNumMin = v19->fields.servantNumMin;
  if ( (BYTE3(questRestrictionInfo->fields.fixedSupportIndividualitiesList) & 4) != 0
    && !LODWORD(questRestrictionInfo->fields.fixedServantPositionRestrictionEntity) )
  {
    j_il2cpp_runtime_class_init_0(questRestrictionInfo);
    type = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  if ( servantNumMin <= type )
    v21 = v13;
  else
    v21 = deckMemberCount;
  return servantNumMax >= deckMemberCount && servantNumMin <= v21;
}


void __fastcall PartyListViewItem__CheckRestriction(PartyListViewItem_o *this, const MethodInfo *method)
{
  int32_t v3; // w20
  int v4; // w23
  int v5; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *IsUseOldMaster; // x0
  struct PartyOrganizationListViewItem_array *v8; // x8
  PartyOrganizationListViewItem_o *v9; // x8
  struct PartyOrganizationListViewItem_array *v10; // x8
  PartyOrganizationListViewItem_o *v11; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v14; // w21
  char i; // w25
  struct PartyOrganizationListViewItem_array *v16; // x8
  PartyOrganizationListViewItem_o *v17; // x8
  struct PartyOrganizationListViewItem_array *v18; // x20
  int max_length; // w8
  unsigned int v20; // w21
  int v21; // w21
  int32_t FixedPositionCount; // w20
  int v23; // w27
  char v24; // w25
  int v25; // w26
  struct PartyOrganizationListViewItem_array *v26; // x8
  PartyOrganizationListViewItem_o *v27; // x8
  _BOOL4 isRestrictionNeedStarting; // w10
  int isRestrictionMyServantPos; // w9
  int isRestrictionServantPos; // w8
  bool v31; // zf
  struct PartyOrganizationListViewItem_array *v32; // x21
  int v33; // w8
  unsigned int v34; // w27
  il2cpp_array_size_t j; // w21
  struct PartyOrganizationListViewItem_array *v36; // x8
  struct PartyOrganizationListViewItem_array *v37; // x20
  int v38; // w8
  unsigned int v39; // w21
  struct QuestRestrictionInfo_o *v40; // x8
  int64_t sortValue2; // x20
  __int64 sortValue1_low; // x21
  __int64 v43; // x25
  __int64 v44; // x8
  __int64 v45; // x8
  struct QuestRestrictionInfo_o *v46; // x8
  il2cpp_array_size_t k; // w20
  struct PartyOrganizationListViewItem_array *v48; // x8
  PartyOrganizationListViewItem_o *v49; // x8
  __int64 v50; // x0

  if ( (byte_4355B65 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_4355B65 = 1;
  }
  v3 = 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v3 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_115;
    if ( v3 >= memberList->max_length )
      goto LABEL_116;
    IsUseOldMaster = memberList->m_Items[v3];
    if ( !IsUseOldMaster )
      goto LABEL_115;
    PartyOrganizationListViewItem__CheckRestriction(IsUseOldMaster, this, v3, 0LL);
    v8 = this->fields.memberList;
    if ( !v8 )
      goto LABEL_115;
    if ( v3 >= v8->max_length )
      goto LABEL_116;
    v9 = v8->m_Items[v3];
    if ( !v9 )
      goto LABEL_115;
    v9->fields._IsNotSupportSingle_k__BackingField = 0;
    v10 = this->fields.memberList;
    if ( !v10 )
      goto LABEL_115;
    if ( v3 >= v10->max_length )
      goto LABEL_116;
    v11 = v10->m_Items[v3];
    if ( !v11 )
      goto LABEL_115;
    ++v3;
    v4 += v11->fields.isFollower;
    if ( v11->fields.userServantEntity )
      ++v5;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_115;
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(
                                    this->fields.questRestrictionInfo,
                                    0LL);
      IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      v14 = 0;
      for ( i = 0; ; i |= v17->fields.isFixedSupportPositionRestriction )
      {
        if ( (IsUseOldMaster->fields.nameLimitCount & 0x4000000) != 0
          && !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
        {
          j_il2cpp_runtime_class_init_0(IsUseOldMaster);
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v14 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
          break;
        v16 = this->fields.memberList;
        if ( !v16 )
          goto LABEL_115;
        if ( v14 >= v16->max_length )
          goto LABEL_116;
        v17 = v16->m_Items[v14];
        if ( !v17 )
          goto LABEL_115;
        ++v14;
        FixedServantPositionCount -= v17->fields.isFixedServantPositionAgreement;
      }
      if ( !(i & 1 | (FixedServantPositionCount > 0)) )
      {
        v18 = this->fields.memberList;
        if ( !v18 )
          goto LABEL_115;
        max_length = v18->max_length;
        if ( max_length >= 1 )
        {
          v20 = 0;
          while ( v20 < max_length )
          {
            IsUseOldMaster = v18->m_Items[v20];
            if ( !IsUseOldMaster )
              goto LABEL_115;
            PartyOrganizationListViewItem__ResetPositionRestriction(IsUseOldMaster, 0LL);
            max_length = v18->max_length;
            if ( (int)++v20 >= max_length )
              goto LABEL_80;
          }
          goto LABEL_116;
        }
      }
      goto LABEL_80;
    }
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__GetFixedMyServantPositionCount(
                                                          this->fields.questRestrictionInfo,
                                                          0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_115;
    v21 = (int)IsUseOldMaster;
    FixedPositionCount = QuestRestrictionInfo__GetFixedPositionCount(this->fields.questRestrictionInfo, 0LL);
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v23 = 0;
    v24 = 0;
    v25 = -1;
    while ( 1 )
    {
      if ( (IsUseOldMaster->fields.nameLimitCount & 0x4000000) != 0 && !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
      {
        j_il2cpp_runtime_class_init_0(IsUseOldMaster);
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( v23 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
        break;
      v26 = this->fields.memberList;
      if ( !v26 )
        goto LABEL_115;
      if ( v23 >= v26->max_length )
        goto LABEL_116;
      v27 = v26->m_Items[v23];
      if ( !v27 )
        goto LABEL_115;
      v24 |= v27->fields.isFixedSupportPositionRestriction;
      if ( v27->fields.isFixedServantPositionAgreement )
      {
        isRestrictionNeedStarting = v27->fields.isRestrictionNeedStarting;
        isRestrictionMyServantPos = v27->fields.isRestrictionMyServantPos;
        isRestrictionServantPos = v27->fields.isRestrictionServantPos;
        v31 = isRestrictionNeedStarting && v25 == -1;
        v21 -= isRestrictionMyServantPos;
        if ( v31 )
          v25 = v23;
        FixedPositionCount -= isRestrictionServantPos;
      }
      ++v23;
    }
    if ( v21 > 0 )
      goto LABEL_63;
    v32 = this->fields.memberList;
    if ( !v32 )
      goto LABEL_115;
    v33 = v32->max_length;
    if ( v33 < 1 )
    {
LABEL_63:
      if ( !((v25 < 0) | v24 & 1) )
      {
        for ( j = v25 + 1; ; ++j )
        {
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
          }
          if ( (signed int)j >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
            break;
          v36 = this->fields.memberList;
          if ( !v36 )
            goto LABEL_115;
          if ( j >= v36->max_length )
            goto LABEL_116;
          IsUseOldMaster = v36->m_Items[j];
          if ( !IsUseOldMaster )
            goto LABEL_115;
          PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(IsUseOldMaster, 0LL);
        }
      }
      if ( (FixedPositionCount > 0) | v24 & 1 )
        goto LABEL_80;
      v37 = this->fields.memberList;
      if ( !v37 )
        goto LABEL_115;
      v38 = v37->max_length;
      if ( v38 < 1 )
      {
LABEL_80:
        v40 = this->fields.questRestrictionInfo;
        if ( !v40 || v40->fields.servantNumMin != 1 )
          return;
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2 = IsUseOldMaster->fields.sortValue2;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( IsUseOldMaster )
          {
            if ( sortValue2 )
            {
              sortValue1_low = LODWORD(IsUseOldMaster->fields.sortValue1);
              if ( (int)sortValue1_low >= 1 )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                v43 = 0LL;
                v5 = 0;
                while ( 1 )
                {
                  if ( (IsUseOldMaster->fields.nameLimitCount & 0x4000000) != 0
                    && !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( v43 >= *(int *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
                    break;
                  if ( sortValue1_low != ++v43 )
                  {
                    v44 = *(_QWORD *)(sortValue2 + 120);
                    if ( !v44 )
                      goto LABEL_115;
                    if ( v43 - 1 >= (unsigned __int64)*(unsigned int *)(v44 + 24) )
                      goto LABEL_116;
                    v45 = *(_QWORD *)(v44 + 8 * v43 + 24);
                    if ( !v45 )
                      goto LABEL_115;
                    if ( *(_QWORD *)(v45 + 112) )
                      ++v5;
                  }
                }
              }
            }
            v46 = this->fields.questRestrictionInfo;
            if ( v46 )
            {
              if ( !v5 && v4 == 1 && v46->fields.isNotSingleSupportOnly )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                for ( k = 0; ; ++k )
                {
                  if ( (IsUseOldMaster->fields.nameLimitCount & 0x4000000) != 0
                    && !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)k >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
                    break;
                  v48 = this->fields.memberList;
                  if ( !v48 )
                    goto LABEL_115;
                  if ( k >= v48->max_length )
                    goto LABEL_116;
                  v49 = v48->m_Items[k];
                  if ( !v49 )
                    goto LABEL_115;
                  if ( v49->fields.isFollower )
                  {
                    v49->fields._IsNotSupportSingle_k__BackingField = 1;
                    return;
                  }
                }
              }
              return;
            }
          }
        }
LABEL_115:
        sub_B7076C(IsUseOldMaster, method);
      }
      v39 = 0;
      while ( v39 < v38 )
      {
        IsUseOldMaster = v37->m_Items[v39];
        if ( !IsUseOldMaster )
          goto LABEL_115;
        PartyOrganizationListViewItem__ResetPositionRestrictionServant(IsUseOldMaster, 0LL);
        v38 = v37->max_length;
        if ( (int)++v39 >= v38 )
          goto LABEL_80;
      }
    }
    else
    {
      v34 = 0;
      while ( v34 < v33 )
      {
        IsUseOldMaster = v32->m_Items[v34];
        if ( !IsUseOldMaster )
          goto LABEL_115;
        PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(IsUseOldMaster, 0LL);
        v33 = v32->max_length;
        if ( (int)++v34 >= v33 )
          goto LABEL_63;
      }
    }
LABEL_116:
    v50 = sub_B70798(IsUseOldMaster);
    sub_B70738(v50, 0LL);
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
  sub_B70630(
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
  il2cpp_array_size_t i; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  BalanceConfig_c *v5; // x0
  int32_t cost; // w22
  __int64 v7; // x0

  if ( (byte_4355B6A & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B6A = 1;
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
      goto LABEL_15;
    if ( i >= memberList->max_length )
    {
      v7 = sub_B70798(v5);
      sub_B70738(v7, 0LL);
    }
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_15:
      sub_B7076C(v5, method);
    if ( !LOBYTE(v5->_1.fields) )
    {
      cost = this->fields.cost;
      this->fields.cost = cost - PartyOrganizationListViewItem__ClearEquip((PartyOrganizationListViewItem_o *)v5, 0LL);
    }
  }
  PartyListViewItem__CheckRestriction(this, method);
}


void __fastcall PartyListViewItem__ClearFollower(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  BalanceConfig_c *v5; // x0
  __int64 v6; // x0

  if ( (byte_4355B6B & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B6B = 1;
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
      goto LABEL_13;
    if ( i >= memberList->max_length )
    {
      v6 = sub_B70798(v5);
      sub_B70738(v6, 0LL);
    }
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_13:
      sub_B7076C(v5, method);
    PartyOrganizationListViewItem__ClearFollower((PartyOrganizationListViewItem_o *)v5, 0LL);
  }
  PartyListViewItem__CheckRestriction(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__ClearMember(PartyListViewItem_o *this, int32_t num, const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v5; // x19
  int32_t cost; // w22
  struct PartyOrganizationListViewItem_array *v7; // x8
  const MethodInfo *v8; // x1
  __int64 v9; // x0

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_8;
  if ( memberList->max_length <= num )
    goto LABEL_9;
  v5 = this;
  this = (PartyListViewItem_o *)memberList->m_Items[num];
  if ( !this
    || (cost = v5->fields.cost,
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                        (PartyOrganizationListViewItem_o *)this,
                                        0LL),
        v7 = v5->fields.memberList,
        v5->fields.cost = cost - (_DWORD)this,
        !v7) )
  {
LABEL_8:
    sub_B7076C(this, *(_QWORD *)&num);
  }
  if ( v7->max_length <= num )
  {
LABEL_9:
    v9 = sub_B70798(this);
    sub_B70738(v9, 0LL);
  }
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void __fastcall PartyListViewItem__ClearMember_32608492(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  BalanceConfig_c *v5; // x0
  __int64 v6; // x0

  if ( (byte_4355B69 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B69 = 1;
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
      goto LABEL_15;
    if ( i >= memberList->max_length )
    {
      v6 = sub_B70798(v5);
      sub_B70738(v6, 0LL);
    }
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_15:
      sub_B7076C(v5, method);
    if ( !LOBYTE(v5->_1.fields) )
      PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)v5, 0LL);
  }
  this->fields.cost = 0;
  PartyListViewItem__CheckRestriction(this, method);
}


PartyListViewItem_o *__fastcall PartyListViewItem__Clone(PartyListViewItem_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4355B64 & 1) == 0 )
  {
    sub_B70694(&PartyListViewItem_TypeInfo);
    byte_4355B64 = 1;
  }
  v3 = (PartyListViewItem_o *)sub_B70764(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_B7076C(v5, v6);
  PartyListViewItem__Set(v3, this, v7);
  return v3;
}


bool __fastcall PartyListViewItem__CompMember(
        PartyListViewItem_o *this,
        PartyListViewItem_o *item,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  il2cpp_array_size_t i; // w21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v7; // x9
  PartyOrganizationListViewItem_o *v8; // x1
  __int64 v10; // x0

  v4 = this;
  if ( (byte_4355B74 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B74 = 1;
  }
  if ( !item )
LABEL_18:
    sub_B7076C(this, item);
  if ( System_String__op_Inequality(v4->fields.deckName, item->fields.deckName, 0LL) )
    return 0;
  for ( i = 0; ; ++i )
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)&this->fields._IsWaveBattleRestart_k__BackingField + 156LL) )
      break;
    memberList = v4->fields.memberList;
    if ( !memberList )
      goto LABEL_18;
    if ( i >= memberList->max_length )
      goto LABEL_19;
    v7 = item->fields.memberList;
    if ( !v7 )
      goto LABEL_18;
    if ( i >= v7->max_length )
    {
LABEL_19:
      v10 = sub_B70798(this);
      sub_B70738(v10, 0LL);
    }
    this = (PartyListViewItem_o *)memberList->m_Items[i];
    if ( !this )
      goto LABEL_18;
    v8 = v7->m_Items[i];
    if ( !PartyOrganizationListViewItem__CompMember((PartyOrganizationListViewItem_o *)this, v8, 0LL) )
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v7; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *AssetName; // x0
  __int64 v10; // x0

  if ( (byte_4355B80 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    byte_4355B80 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  for ( i = 0LL; ; ++i )
  {
    AssetName = (EventMissionProgressRequest_Argument_ProgressData_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      AssetName = (EventMissionProgressRequest_Argument_ProgressData_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&AssetName[4].fields.targetId + 156LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( i >= memberList->max_length )
    {
      v10 = sub_B70798(AssetName);
      sub_B70738(v10, 0LL);
    }
    v7 = memberList->m_Items[i];
    if ( v7 )
    {
      AssetName = (EventMissionProgressRequest_Argument_ProgressData_o *)PartyOrganizationListViewItem__GetAssetName(
                                                                           v7,
                                                                           0LL);
      if ( AssetName )
      {
        if ( !v3 )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          AssetName,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  if ( !v3 )
LABEL_19:
    sub_B7076C(AssetName, v4);
  if ( v3->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_Int32_array *__fastcall PartyListViewItem__GetCommandCardList(
        PartyListViewItem_o *this,
        int32_t typeMax,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Int32_array *v6; // x21
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v9; // x0
  _QWORD *p_image; // x0
  unsigned __int64 j; // x8
  unsigned __int64 v12; // x10
  __int64 v14; // x0

  if ( (byte_4355B7F & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&int___TypeInfo);
    byte_4355B7F = 1;
  }
  v6 = (System_Int32_array *)sub_B706AC(int___TypeInfo, (unsigned int)typeMax);
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
      sub_B7076C(p_image, v5);
    if ( i >= memberList->max_length )
    {
LABEL_22:
      v14 = sub_B70798(p_image);
      sub_B70738(v14, 0LL);
    }
    v9 = memberList->m_Items[i];
    if ( v9 )
    {
      p_image = PartyOrganizationListViewItem__GetCommandCardList(v9, 0LL);
      if ( p_image )
      {
        if ( typeMax >= 1 )
        {
          for ( j = 0LL; (__int64)j < typeMax; ++j )
          {
            v12 = *((unsigned int *)p_image + 6);
            if ( (__int64)j < (int)v12 )
            {
              if ( !v6 )
                goto LABEL_23;
              if ( j >= v6->max_length || j >= v12 )
                goto LABEL_22;
              v6->m_Items[j + 1] += *((_DWORD *)p_image + j + 8);
            }
          }
        }
      }
    }
  }
  return v6;
}


int32_t __fastcall PartyListViewItem__GetDeckCondition(PartyListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  void *DeckConditionServantNumAndPosition; // x0
  il2cpp_array_size_t v5; // w26
  int v6; // w25
  char v7; // w28
  int v8; // w27
  int v9; // w21
  int32_t v10; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v12; // x8
  PartyOrganizationListViewItem_o *v13; // x22
  _BOOL4 isFollower; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t DeckMainMemberMax; // w22
  int32_t v17; // w26
  struct PartyOrganizationListViewItem_array *v18; // x8
  Il2CppClass **v19; // x8
  PartyOrganizationListViewItem_o *v20; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // kr10_16
  __int64 v22; // x8
  int32_t v23; // w23
  struct PartyOrganizationListViewItem_array *v24; // x9
  PartyOrganizationListViewItem_o *v25; // x9
  const MethodInfo *v26; // x5
  const MethodInfo *v27; // x5
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  _BOOL4 isNotSingleSupportOnly; // w8
  struct PartyOrganizationListViewItem_array *v30; // x26
  int max_length; // w8
  unsigned int v32; // w28
  Il2CppClass **v33; // x8
  PartyOrganizationListViewItem_o *v34; // x20
  PartyOrganizationListViewItem_o *v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // kr20_16
  _DWORD *v37; // x21
  _QWORD *v38; // x22
  signed __int64 v39; // x8
  int v40; // w9
  unsigned __int64 v41; // x27
  char v42; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  int v48; // w8
  __int64 i; // x23
  struct PartyOrganizationListViewItem_array *v50; // x8
  PartyOrganizationListViewItem_o *v51; // x8
  struct ServantEntity_o *v52; // x8
  __int64 v53; // x20
  __int64 v54; // x21
  int32_t v55; // w20
  unsigned __int64 j; // x24
  struct PartyOrganizationListViewItem_array *v57; // x8
  PartyOrganizationListViewItem_o *v58; // x8
  struct ServantEntity_o *v59; // x8
  __int64 v60; // x21
  __int64 v61; // x22
  __int64 v62; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4355B72 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Any_int___);
    sub_B70694(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4355B72 = 1;
  }
  if ( this->fields.cost > this->fields.maxCost )
  {
    LODWORD(DeckConditionServantNumAndPosition) = 7;
    return (int)DeckConditionServantNumAndPosition;
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
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
    if ( (int)v5 >= DeckMainMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_182;
    if ( v5 >= memberList->max_length )
      goto LABEL_183;
    v12 = &memberList->obj.klass + (int)v5;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
      goto LABEL_182;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v12[4], 0LL) )
    {
LABEL_62:
      LODWORD(DeckConditionServantNumAndPosition) = 5;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( (v13->fields.fatigureTime & 0x8000000000000000LL) == 0 )
    {
LABEL_63:
      LODWORD(DeckConditionServantNumAndPosition) = 6;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v13->fields._IsAllOutBattle_k__BackingField )
    {
LABEL_64:
      LODWORD(DeckConditionServantNumAndPosition) = 19;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v13->fields._IsDataLost_k__BackingField )
    {
LABEL_65:
      LODWORD(DeckConditionServantNumAndPosition) = 20;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v13->fields._TimesToRestart_k__BackingField > 0 )
    {
LABEL_66:
      LODWORD(DeckConditionServantNumAndPosition) = 21;
      return (int)DeckConditionServantNumAndPosition;
    }
    isFollower = v13->fields.isFollower;
    if ( v13->fields.isFollower && !v13->fields.isMyServantOrNpcRestriction )
    {
      ++v9;
      ++v8;
      v7 = 1;
    }
    else
    {
      if ( v13->fields.userServantEntity )
        goto LABEL_18;
      if ( v13->fields.isMyServantOrNpcRestriction )
      {
        SvtId = PartyOrganizationListViewItem__get_SvtId(v13, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(SvtId, 0LL) >= 1 )
        {
          isFollower = v13->fields.isFollower;
LABEL_18:
          ++v10;
          v6 |= isFollower;
        }
      }
    }
    ++v5;
  }
  if ( (*((_BYTE *)DeckConditionServantNumAndPosition + 307) & 4) != 0
    && !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
  {
    j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  v17 = v10;
  while ( 1 )
  {
    if ( (*((_BYTE *)DeckConditionServantNumAndPosition + 307) & 4) != 0
      && !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
    {
      j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    v22 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
    if ( DeckMainMemberMax >= *(_DWORD *)(v22 + 156) )
      break;
    v18 = this->fields.memberList;
    if ( !v18 )
      goto LABEL_182;
    if ( DeckMainMemberMax >= v18->max_length )
      goto LABEL_183;
    v19 = &v18->obj.klass + DeckMainMemberMax;
    v20 = (PartyOrganizationListViewItem_o *)v19[4];
    if ( !v20 )
      goto LABEL_182;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v19[4], 0LL) )
      goto LABEL_62;
    if ( (v20->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_63;
    if ( v20->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_64;
    if ( v20->fields._IsDataLost_k__BackingField )
      goto LABEL_65;
    if ( v20->fields._TimesToRestart_k__BackingField > 0 )
      goto LABEL_66;
    if ( v20->fields.isFollower && !v20->fields.isMyServantOrNpcRestriction )
    {
      ++v8;
    }
    else
    {
      if ( v20->fields.userServantEntity )
        goto LABEL_46;
      if ( v20->fields.isMyServantOrNpcRestriction )
      {
        v21 = PartyOrganizationListViewItem__get_SvtId(v20, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v21, 0LL) >= 1 )
LABEL_46:
          ++v17;
      }
    }
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    ++DeckMainMemberMax;
  }
  DeckConditionServantNumAndPosition = 0LL;
  v23 = v8 + v17;
  switch ( this->fields.menuKind )
  {
    case 4:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__CheckDeckConditionServantNum(
                                                     this,
                                                     v23,
                                                     v10,
                                                     v7 & 1,
                                                     1,
                                                     v2);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
        goto LABEL_61;
      goto LABEL_101;
    case 5:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                     this,
                                                     v23,
                                                     v10,
                                                     v7 & 1,
                                                     1,
                                                     v2);
      if ( !(_DWORD)DeckConditionServantNumAndPosition )
        goto LABEL_101;
      return (int)DeckConditionServantNumAndPosition;
    case 6:
      return (int)DeckConditionServantNumAndPosition;
    case 7:
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_182;
      if ( !QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0LL) )
        goto LABEL_80;
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_182;
      if ( QuestRestrictionInfo__IsFixedServantPosition(
             (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
             0LL) )
      {
LABEL_80:
        DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
        if ( !DeckConditionServantNumAndPosition )
          goto LABEL_182;
        if ( QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0LL) )
        {
          DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
          if ( !DeckConditionServantNumAndPosition )
            goto LABEL_182;
          if ( QuestRestrictionInfo__IsFixedServantPosition(
                 (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                 0LL) )
          {
            LODWORD(DeckConditionServantNumAndPosition) = PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                            this,
                                                            v23,
                                                            v10,
                                                            v7 & 1,
                                                            v9,
                                                            v27);
            if ( (_DWORD)DeckConditionServantNumAndPosition )
              return (int)DeckConditionServantNumAndPosition;
          }
        }
      }
      else if ( !PartyListViewItem__CheckDeckConditionServantNum(this, v23, v10, v7 & 1, v9, v26) )
      {
LABEL_61:
        LODWORD(DeckConditionServantNumAndPosition) = 14;
        return (int)DeckConditionServantNumAndPosition;
      }
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_182;
      if ( !QuestRestrictionInfo__IsMyServantNum((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0LL) )
        goto LABEL_93;
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_182;
      if ( !QuestRestrictionInfo__CheckMyServantNumRestriction(
              (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
              v17,
              0LL) )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 16;
        return (int)DeckConditionServantNumAndPosition;
      }
LABEL_93:
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_182;
      DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsServantNum(
                                                     (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                     0LL);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
      {
        DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        }
        v22 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
LABEL_99:
        if ( v10 + v9 < *(_DWORD *)(v22 + 160) )
        {
          LODWORD(DeckConditionServantNumAndPosition) = 3;
          return (int)DeckConditionServantNumAndPosition;
        }
      }
LABEL_101:
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_147;
      isNotSingleSupportOnly = questRestrictionInfo->fields.isNotSingleSupportOnly;
      if ( v10 == 1 && (v6 & isNotSingleSupportOnly & 1) != 0 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 22;
        return (int)DeckConditionServantNumAndPosition;
      }
      v30 = this->fields.memberList;
      if ( !v30 )
        goto LABEL_182;
      max_length = v30->max_length;
      if ( max_length >= 1 )
      {
        v32 = 0;
        while ( v32 < max_length )
        {
          v33 = &v30->obj.klass + (int)v32;
          v34 = (PartyOrganizationListViewItem_o *)v33[4];
          if ( !v34 )
            goto LABEL_182;
          v35 = (PartyOrganizationListViewItem_o *)v33[4];
          v34->fields._IsErrorNeedIndividuality_k__BackingField = 0;
          v36 = PartyOrganizationListViewItem__get_SvtId(v35, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                         v36,
                                                         0LL);
          if ( !(_DWORD)DeckConditionServantNumAndPosition )
          {
            DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
            if ( !DeckConditionServantNumAndPosition )
              goto LABEL_182;
            DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsSetRequired(
                                                           (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                           v34->fields.index + 1,
                                                           v34->fields._InitPos_k__BackingField,
                                                           0LL);
            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
            {
              LODWORD(DeckConditionServantNumAndPosition) = 18;
              return (int)DeckConditionServantNumAndPosition;
            }
          }
          if ( v34->fields.userServantEntity )
          {
            DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
            if ( !DeckConditionServantNumAndPosition )
              goto LABEL_182;
            DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetNeedIndividualityList(
                                                   (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                   v34->fields._InitPos_k__BackingField,
                                                   0LL);
            if ( !this->fields.questRestrictionInfo )
              goto LABEL_182;
            v37 = DeckConditionServantNumAndPosition;
            DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetRangeTypeList(
                                                   this->fields.questRestrictionInfo,
                                                   v34->fields._InitPos_k__BackingField,
                                                   0LL);
            if ( v37 )
            {
              v38 = DeckConditionServantNumAndPosition;
              if ( DeckConditionServantNumAndPosition )
              {
                LODWORD(v39) = v37[6];
                if ( (int)v39 >= 1 )
                {
                  v40 = *((_DWORD *)DeckConditionServantNumAndPosition + 6);
                  if ( v40 >= 1 && (_DWORD)v39 == v40 )
                  {
                    v41 = 0LL;
                    v42 = 0;
                    do
                    {
                      if ( v41 >= (unsigned int)v39 )
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                      v43 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*((_QWORD *)v37 + 2) + 8 * v41 + 32);
                      if ( v43 )
                      {
                        if ( v41 >= (unsigned int)v37[6] )
                          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                        if ( v43[1].monitor )
                        {
                          if ( v41 >= (unsigned int)v37[6] )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                          servantEntity = v34->fields.servantEntity;
                          svtLimitCount = v34->fields.svtLimitCount;
                          DeckConditionServantNumAndPosition = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(
                                                                         v34,
                                                                         0LL);
                          if ( !servantEntity )
                            goto LABEL_182;
                          Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                                 servantEntity,
                                                                                                 svtLimitCount,
                                                                                                 (int32_t)DeckConditionServantNumAndPosition,
                                                                                                 0LL);
                          v47 = System_Linq_Enumerable__Intersect_int_(
                                  v43,
                                  Individuality,
                                  (const MethodInfo_1CBD690 *)Method_System_Linq_Enumerable_Intersect_int___);
                          DeckConditionServantNumAndPosition = System_Linq_Enumerable__ToArray_int_(
                                                                 v47,
                                                                 (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
                          if ( v41 >= *((unsigned int *)v38 + 6) )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                          v48 = *(_DWORD *)(v38[2] + 4 * v41 + 32);
                          if ( v48 == 1 )
                          {
                            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)DeckConditionServantNumAndPosition,
                                                                           (const MethodInfo_1CA887C *)Method_System_Linq_Enumerable_Any_int___);
                            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
                              goto LABEL_146;
                          }
                          else
                          {
                            if ( v41 >= *((unsigned int *)v38 + 6) )
                              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                            if ( v48 == 2 )
                            {
                              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)DeckConditionServantNumAndPosition,
                                                                             (const MethodInfo_1CA887C *)Method_System_Linq_Enumerable_Any_int___);
                              if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
                                goto LABEL_146;
                            }
                          }
                          v42 = 1;
                        }
                      }
                      v39 = (int)v37[6];
                      ++v41;
                    }
                    while ( (__int64)v41 < v39 );
                    if ( (v42 & 1) != 0 )
                    {
                      v34->fields._IsErrorNeedIndividuality_k__BackingField = 1;
                      LODWORD(DeckConditionServantNumAndPosition) = 23;
                      return (int)DeckConditionServantNumAndPosition;
                    }
                  }
                }
              }
            }
          }
LABEL_146:
          max_length = v30->max_length;
          if ( (int)++v32 >= max_length )
            goto LABEL_147;
        }
LABEL_183:
        v62 = sub_B70798(DeckConditionServantNumAndPosition);
        sub_B70738(v62, 0LL);
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
        v50 = this->fields.memberList;
        if ( !v50 )
          goto LABEL_182;
        if ( (unsigned int)i >= v50->max_length )
          goto LABEL_183;
        v51 = v50->m_Items[(int)i];
        if ( !v51 )
          goto LABEL_182;
        if ( v51->fields.userServantEntity )
          break;
LABEL_172:
        ;
      }
      v52 = v51->fields.servantEntity;
      if ( !v52 )
LABEL_182:
        sub_B7076C(DeckConditionServantNumAndPosition, method);
      v54 = *(_QWORD *)&v52->fields.baseSvtId.fields.currentCryptoKey;
      v53 = *(_QWORD *)&v52->fields.baseSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v64.fields.currentCryptoKey = v54;
      *(_QWORD *)&v64.fields.fakeValue = v53;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v64, 0LL);
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
          v57 = this->fields.memberList;
          if ( !v57 )
            goto LABEL_182;
          if ( j >= v57->max_length )
            goto LABEL_183;
          v58 = v57->m_Items[j];
          if ( !v58 )
            goto LABEL_182;
          if ( v58->fields.userServantEntity )
          {
            v59 = v58->fields.servantEntity;
            if ( !v59 )
              goto LABEL_182;
            v61 = *(_QWORD *)&v59->fields.baseSvtId.fields.currentCryptoKey;
            v60 = *(_QWORD *)&v59->fields.baseSvtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v65.fields.currentCryptoKey = v61;
            *(_QWORD *)&v65.fields.fakeValue = v60;
            if ( v55 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v65, 0LL) )
              break;
          }
        }
      }
      LODWORD(DeckConditionServantNumAndPosition) = 4;
      return (int)DeckConditionServantNumAndPosition;
    default:
      if ( !v17 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 1;
        return (int)DeckConditionServantNumAndPosition;
      }
      if ( v10 != 1 )
        goto LABEL_86;
      v24 = this->fields.memberList;
      if ( !v24 )
        goto LABEL_182;
      if ( !v24->max_length )
        goto LABEL_183;
      v25 = v24->m_Items[0];
      if ( !v25 )
        goto LABEL_182;
      if ( v25->fields.userServantEntity )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 2;
        return (int)DeckConditionServantNumAndPosition;
      }
LABEL_86:
      v9 = v7 & 1;
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


int32_t __fastcall PartyListViewItem__GetDeckConditionServantNumAndPosition(
        PartyListViewItem_o *this,
        int32_t deckMemberCount,
        int32_t mainMemberCount,
        bool isFollowerMainMember,
        int32_t mainFollowerNum,
        const MethodInfo *method)
{
  __int64 v11; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v15; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v17; // x8
  __int64 v18; // x0

  if ( (byte_4355B71 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B71 = 1;
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
    sub_B7076C(questRestrictionInfo, v11);
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(questRestrictionInfo, 0LL);
  v15 = 0;
  questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(questRestrictionInfo->fields.fixedSupportIndividualitiesList) & 4) != 0
      && !LODWORD(questRestrictionInfo->fields.fixedServantPositionRestrictionEntity) )
    {
      j_il2cpp_runtime_class_init_0(questRestrictionInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v15 >= SHIDWORD(questRestrictionInfo->fields.fixedSupportPositionRestrictionEntity[2].fields.name) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_18;
    if ( v15 >= memberList->max_length )
    {
      v18 = sub_B70798(questRestrictionInfo);
      sub_B70738(v18, 0LL);
    }
    v17 = memberList->m_Items[v15];
    if ( !v17 )
      goto LABEL_18;
    ++v15;
    FixedServantPositionCount -= v17->fields.isFixedServantPositionAgreement;
  }
  if ( FixedServantPositionCount < 1 )
    return 14;
  else
    return 15;
}


System_Int64_array *__fastcall PartyListViewItem__GetEquipList(PartyListViewItem_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  __int64 EquipUserSvtId; // x0
  __int64 v5; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v7; // x22
  int max_length; // w9
  Il2CppClass **v9; // x8
  PartyOrganizationListViewItem_o *v10; // x21
  __int64 v12; // x0

  if ( (byte_4355B77 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    byte_4355B77 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_12;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v12 = sub_B70798(EquipUserSvtId);
      sub_B70738(v12, 0LL);
    }
    v9 = &memberList->obj.klass + v7;
    v10 = (PartyOrganizationListViewItem_o *)v9[4];
    if ( v10 )
    {
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v9[4], 0LL);
      if ( EquipUserSvtId >= 1 )
      {
        EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v10, 0LL);
        if ( !v3 )
          goto LABEL_12;
        System_Collections_Generic_List_long___Add(
          v3,
          EquipUserSvtId,
          (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
      }
      memberList = this->fields.memberList;
      ++v7;
      if ( memberList )
        continue;
    }
    goto LABEL_12;
  }
  if ( !v3 )
LABEL_12:
    sub_B7076C(EquipUserSvtId, v5);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
}


bool __fastcall PartyListViewItem__GetEventUpVal(
        PartyListViewItem_o *this,
        int32_t *eventId,
        EventUpValInfo_array **eventUpValList,
        const MethodInfo *method)
{
  PartyListViewItem_o *v6; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  __int64 v8; // x9
  BalanceConfig_c *v9; // x0
  EventUpValInfo_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  EventUpValInfo_array *v19; // x8
  __int64 v21; // x0

  v6 = this;
  if ( (byte_4355B7E & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    this = (PartyListViewItem_o *)sub_B70694(&EventUpValInfo___TypeInfo);
    byte_4355B7E = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_25:
      sub_B7076C(this, eventId);
    v8 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v8 )
    {
      if ( !(_DWORD)v8 )
      {
LABEL_26:
        v21 = sub_B70798(this);
        sub_B70738(v21, 0LL);
      }
      LODWORD(setupInfo) = setupInfo->fields.eventIdList;
    }
    else
    {
      LODWORD(setupInfo) = 0;
    }
  }
  *eventId = (int)setupInfo;
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v10 = (EventUpValInfo_array *)sub_B706AC(EventUpValInfo___TypeInfo, (unsigned int)v9->static_fields->DeckMemberMax);
  *eventUpValList = v10;
  sub_B70630((BattleServantConfConponent_o *)eventUpValList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
  for ( i = 0LL; ; ++i )
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&this->fields._IsWaveBattleRestart_k__BackingField + 156LL) )
      break;
    memberList = v6->fields.memberList;
    if ( !memberList )
      goto LABEL_25;
    if ( i >= memberList->max_length )
      goto LABEL_26;
    this = (PartyListViewItem_o *)memberList->m_Items[i];
    if ( this )
    {
      v19 = *eventUpValList;
      if ( !*eventUpValList )
        goto LABEL_25;
      if ( i >= v19->max_length )
        goto LABEL_26;
      PartyOrganizationListViewItem__GetEventUpVal((PartyOrganizationListViewItem_o *)this, &v19->m_Items[i], 0LL);
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
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  int current; // w22
  DeckServantData_o *v13; // x8
  QuestRestrictionInfo_o *v14; // x0
  const MethodInfo *v15; // x2
  __int64 v16; // x0
  struct QuestRestrictionInfo_o *v17; // x8
  int servantNumMax; // w9
  PartyListViewItem___c__DisplayClass32_0_o *v19; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x23
  struct QuestRestrictionInfo_o *v21; // x8
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4355B61 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_FollowerInfo___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Func_FollowerInfo__bool___ctor__);
    sub_B70694(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__);
    sub_B70694(&PartyListViewItem___c__DisplayClass32_0_TypeInfo);
    byte_4355B61 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_26;
  if ( questRestrictionInfo->fields.isNotTransitionSupportList
    || questRestrictionInfo->fields.isNpcOnlyBattle
    || questRestrictionInfo->fields.isNoSupportBattle )
  {
    return 0;
  }
  questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction(
                                                     questRestrictionInfo,
                                                     0LL);
  if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
  {
    if ( !deck )
      goto LABEL_44;
    questRestrictionInfo = (QuestRestrictionInfo_o *)UserEventDeckEntity__GetFollowerIndexList(deck, 0LL);
    if ( !questRestrictionInfo )
      goto LABEL_44;
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_int__o *)questRestrictionInfo,
      (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v24 = v23;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v24,
             (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v8 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_B7076C(v8, v9);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_B7076C(v8, v9);
      current = v24.fields.current;
      if ( v24.fields.current - 1 >= svts->max_length )
      {
        v16 = sub_B70798(v8);
        sub_B70738(v16, 0LL);
      }
      v13 = svts->m_Items[v24.fields.current - 1];
      if ( !v13 )
        sub_B7076C(v8, v9);
      v14 = this->fields.questRestrictionInfo;
      if ( !v14 )
        sub_B7076C(0LL, v9);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_34234816(v14, v13->fields.initPos, 0LL) )
        goto LABEL_20;
    }
    current = 0;
LABEL_20:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v24,
      (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  }
  else
  {
LABEL_26:
    if ( !deck )
      goto LABEL_44;
    current = UserEventDeckEntity__GetFollowerIndex(deck, 0LL);
  }
  if ( current < 1 )
  {
    if ( current )
      return current;
    goto LABEL_38;
  }
  v17 = this->fields.questRestrictionInfo;
  if ( !v17 )
    return current;
  servantNumMax = v17->fields.servantNumMax;
  if ( servantNumMax >= 1 && servantNumMax < current )
  {
LABEL_38:
    v21 = this->fields.questRestrictionInfo;
    if ( v21 )
    {
      if ( fixNpcFollowerInfoList )
        return PartyListViewItem__GetSupportInitIndex(this, fixNpcFollowerInfoList, v15);
      else
        return v21->fields.supportInitIndex;
    }
    return 0;
  }
  if ( fixNpcFollowerInfoList && !v17->fields.isNpcEditablePos )
  {
    v19 = (PartyListViewItem___c__DisplayClass32_0_o *)sub_B70764(PartyListViewItem___c__DisplayClass32_0_TypeInfo);
    PartyListViewItem___c__DisplayClass32_0___ctor(v19, 0LL);
    if ( v19 )
    {
      v19->fields.chkIndex = current;
      v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v20,
        (Il2CppObject *)v19,
        Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__,
        (const MethodInfo_29AC578 *)Method_System_Func_FollowerInfo__bool___ctor__);
      if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v20,
              (const MethodInfo_1BDCA88 *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_38;
    }
LABEL_44:
    sub_B7076C(questRestrictionInfo, deck);
  }
  return current;
}


int32_t __fastcall PartyListViewItem__GetFriendPointUpVal(PartyListViewItem_o *this, const MethodInfo *method)
{
  unsigned __int64 v3; // x21
  int32_t v4; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v6; // x0
  int32_t FriendPointUpVal; // w0
  BalanceConfig_c *v8; // x0
  __int64 v10; // x0

  if ( (byte_4355B7D & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B7D = 1;
  }
  v3 = 0LL;
  v4 = 0;
  while ( 1 )
  {
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v3 >= v8->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      sub_B7076C(v8, method);
    if ( v3 >= memberList->max_length )
    {
      v10 = sub_B70798(v8);
      sub_B70738(v10, 0LL);
    }
    v6 = memberList->m_Items[v3];
    if ( v6 )
    {
      FriendPointUpVal = PartyOrganizationListViewItem__GetFriendPointUpVal(v6, 0LL);
      if ( FriendPointUpVal > v4 )
        v4 = FriendPointUpVal;
    }
    ++v3;
  }
  return v4;
}


System_Boolean_array *__fastcall PartyListViewItem__GetIsFollowerList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  System_Boolean_array *v5; // x20
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v8; // x8
  BalanceConfig_c *v9; // x0
  __int64 v11; // x0

  if ( (byte_4355B7C & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&bool___TypeInfo);
    byte_4355B7C = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = (System_Boolean_array *)sub_B706AC(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  for ( i = 0LL; ; ++i )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v9->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( i >= memberList->max_length )
      goto LABEL_20;
    v8 = memberList->m_Items[i];
    if ( v8 )
    {
      if ( !v5 )
LABEL_19:
        sub_B7076C(v9, v4);
      if ( i >= v5->max_length )
      {
LABEL_20:
        v11 = sub_B70798(v9);
        sub_B70738(v11, 0LL);
      }
      v5->m_Items[i + 4] = v8->fields.isFollower;
    }
  }
  return v5;
}


PartyOrganizationListViewItem_o *__fastcall PartyListViewItem__GetMember(
        PartyListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v5; // x0

  memberList = this->fields.memberList;
  if ( !memberList )
    sub_B7076C(this, num);
  if ( memberList->max_length <= num )
  {
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
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
  __int64 v6; // x0

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !npcSvtIds )
    sub_B7076C(this, npcSvtIds);
  myServantNumMax = (unsigned int)questRestrictionInfo->fields.myServantNumMax;
  max_length = npcSvtIds->max_length;
  while ( (int)myServantNumMax < (int)max_length )
  {
    if ( (unsigned int)myServantNumMax >= max_length )
    {
      v6 = sub_B70798(myServantNumMax);
      sub_B70738(v6, 0LL);
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
  int32_t menuKind; // w8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int dialogMessageInfoDictionary; // w23
  PartyOrganizationListViewItem_o *v6; // x20
  __int64 v7; // x24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int TotalCostRestriction; // w0
  QuestRestrictionInfo_o *v11; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v13; // w25
  char v14; // w24
  char v15; // w22
  char v16; // w23
  struct PartyOrganizationListViewItem_array *v17; // x8
  Il2CppClass **v18; // x8
  Il2CppClass *v19; // x21
  bool v20; // w10
  int v21; // w8
  char v22; // w9
  char v23; // w10
  __int64 v24; // x0

  if ( (byte_4355B73 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4355B73 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_49:
      sub_B7076C(questRestrictionInfo, method);
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
                                                       questRestrictionInfo,
                                                       0LL);
    if ( questRestrictionInfo )
    {
      dialogMessageInfoDictionary = (int)questRestrictionInfo->fields.dialogMessageInfoDictionary;
      v6 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
      if ( dialogMessageInfoDictionary < 1 )
      {
LABEL_4:
        LODWORD(questRestrictionInfo) = 0;
        return (int)questRestrictionInfo;
      }
      v7 = 0LL;
      while ( 1 )
      {
        memberList = this->fields.memberList;
        if ( !memberList )
          goto LABEL_49;
        if ( (unsigned int)v7 >= memberList->max_length )
          goto LABEL_50;
        questRestrictionInfo = (QuestRestrictionInfo_o *)memberList->m_Items[v7];
        if ( !questRestrictionInfo )
          goto LABEL_49;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)questRestrictionInfo, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                           SvtId,
                                                           0LL);
        if ( (unsigned int)v7 >= v6->fields.sortIndex )
          goto LABEL_50;
        if ( (_DWORD)questRestrictionInfo != *((_DWORD *)&v6->fields.sortValue0 + v7) )
          break;
        if ( (int)++v7 >= dialogMessageInfoDictionary )
          goto LABEL_4;
      }
      LODWORD(questRestrictionInfo) = 11;
    }
  }
  else if ( questRestrictionInfo
         && (TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL),
             TotalCostRestriction >= 1)
         && this->fields.cost > TotalCostRestriction )
  {
    LODWORD(questRestrictionInfo) = 8;
  }
  else
  {
    LODWORD(questRestrictionInfo) = PartyListViewItem__GetDeckCondition(this, method);
    if ( !(_DWORD)questRestrictionInfo )
    {
      v11 = this->fields.questRestrictionInfo;
      if ( !v11 )
        goto LABEL_4;
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(v11, 0LL);
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v13 >= SHIDWORD(questRestrictionInfo->fields.fixedSupportPositionRestrictionEntity[2].fields.name) )
          break;
        v17 = this->fields.memberList;
        if ( !v17 )
          goto LABEL_49;
        if ( v13 >= v17->max_length )
        {
LABEL_50:
          v24 = sub_B70798(questRestrictionInfo);
          sub_B70738(v24, 0LL);
        }
        v18 = &v17->obj.klass + (int)v13;
        v19 = v18[4];
        if ( !v19 )
          goto LABEL_49;
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction((PartyOrganizationListViewItem_o *)v18[4], 0LL) )
        {
          LODWORD(questRestrictionInfo) = 18;
          return (int)questRestrictionInfo;
        }
        ++v13;
        v16 |= BYTE2(v19->_2.unity_user_data) != 0;
        v15 |= BYTE3(v19->_2.unity_user_data) != 0;
        FixedServantPositionCount -= BYTE6(v19->_2.unity_user_data) & 1;
        v14 |= BYTE4(v19->_2.unity_user_data) != 0;
      }
      if ( (v14 & 1) != 0 )
      {
        LODWORD(questRestrictionInfo) = 9;
        return (int)questRestrictionInfo;
      }
      v20 = FixedServantPositionCount > 0;
      v21 = FixedServantPositionCount <= 0 ? 12 : 10;
      v22 = v20 | v16;
      v23 = v15 | v20 | v16;
      LODWORD(questRestrictionInfo) = (v22 & 1) != 0 ? v21 : 13;
      if ( (v23 & 1) == 0 )
        goto LABEL_4;
    }
  }
  return (int)questRestrictionInfo;
}


int32_t __fastcall PartyListViewItem__GetSupportInitIndex(
        PartyListViewItem_o *this,
        System_Collections_Generic_List_FollowerInfo__o *fixNpcFollowerInfoList,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t result; // w0
  int32_t v7; // w23
  PartyListViewItem___c__DisplayClass33_0_o *v8; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  BalanceConfig_c *v11; // x0
  int32_t supportInitIndex; // [xsp+8h] [xbp-58h]
  int myServantNumMax; // [xsp+Ch] [xbp-54h]

  v4 = this;
  if ( (byte_4355B62 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_B70694(&Method_System_Func_FollowerInfo__bool___ctor__);
    sub_B70694(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_B70694(&Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__);
    this = (PartyListViewItem_o *)sub_B70694(&PartyListViewItem___c__DisplayClass33_0_TypeInfo);
    byte_4355B62 = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_17:
    sub_B7076C(this, fixNpcFollowerInfoList);
  result = questRestrictionInfo->fields.supportInitIndex;
  if ( result <= 0 )
  {
    supportInitIndex = questRestrictionInfo->fields.supportInitIndex;
    myServantNumMax = questRestrictionInfo->fields.myServantNumMax;
    v7 = 0;
    while ( 1 )
    {
      do
      {
        v11 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v11 = BalanceConfig_TypeInfo;
        }
        if ( v7 >= v11->static_fields->DeckMemberMax )
          return supportInitIndex;
        v8 = (PartyListViewItem___c__DisplayClass33_0_o *)sub_B70764(PartyListViewItem___c__DisplayClass33_0_TypeInfo);
        PartyListViewItem___c__DisplayClass33_0___ctor(v8, 0LL);
        if ( !v8 )
          goto LABEL_17;
        v8->fields.chkIdx = ++v7;
        v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v9,
          (Il2CppObject *)v8,
          Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__,
          (const MethodInfo_29AC578 *)Method_System_Func_FollowerInfo__bool___ctor__);
        v10 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
                (System_Func_TSource__bool__o *)v9,
                (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      }
      while ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                v10,
                (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) );
      if ( myServantNumMax < 1 )
        return v8->fields.chkIdx;
      --myServantNumMax;
    }
  }
  return result;
}


ServantEntity_array *__fastcall PartyListViewItem__GetSvtEntityList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  ServantEntity_array *v11; // x20
  unsigned __int64 v12; // x24
  BattleServantConfConponent_o *i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v15; // x8
  System_Int32_array **servantEntity; // x22
  BalanceConfig_c *v17; // x0
  __int64 v19; // x0
  __int64 v20; // x0

  if ( (byte_4355B7A & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&ServantEntity___TypeInfo);
    byte_4355B7A = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v11 = (ServantEntity_array *)sub_B706AC(ServantEntity___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v12 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v11->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v17 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= v17->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( v12 >= memberList->max_length )
      goto LABEL_22;
    v15 = memberList->m_Items[v12];
    if ( v15 )
    {
      if ( !v11 )
LABEL_21:
        sub_B7076C(v17, v4);
      servantEntity = (System_Int32_array **)v15->fields.servantEntity;
      if ( servantEntity )
      {
        v17 = (BalanceConfig_c *)sub_B70754(servantEntity, v11->obj.klass->_1.element_class);
        if ( !v17 )
        {
          v20 = sub_B7078C(0LL);
          sub_B70738(v20, 0LL);
        }
      }
      if ( v12 >= v11->max_length )
      {
LABEL_22:
        v19 = sub_B70798(v17);
        sub_B70738(v19, 0LL);
      }
      i->klass = (BattleServantConfConponent_c *)servantEntity;
      sub_B70630(i, servantEntity, v5, v6, v7, v8, v9, v10);
    }
    ++v12;
  }
  return v11;
}


System_String_array *__fastcall PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  System_String_array *v5; // x20
  unsigned __int64 v6; // x24
  BattleServantConfConponent_o *i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v9; // x0
  System_Int32_array **SvtNameText; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x22
  __int64 v19; // x0
  __int64 v20; // x0

  if ( (byte_4355B7B & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&string___TypeInfo);
    byte_4355B7B = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = (System_String_array *)sub_B706AC(string___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v6 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v5->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    SvtNameText = (System_Int32_array **)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (System_Int32_array **)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v6 >= SvtNameText[23]->m_Items[32] )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( v6 >= memberList->max_length )
      goto LABEL_22;
    v9 = memberList->m_Items[v6];
    if ( v9 )
    {
      SvtNameText = (System_Int32_array **)PartyOrganizationListViewItem__get_SvtNameText(v9, 0LL);
      if ( !v5 )
LABEL_21:
        sub_B7076C(SvtNameText, v4);
      v17 = SvtNameText;
      if ( SvtNameText )
      {
        SvtNameText = (System_Int32_array **)sub_B70754(SvtNameText, v5->obj.klass->_1.element_class);
        if ( !SvtNameText )
        {
          v20 = sub_B7078C(0LL);
          sub_B70738(v20, 0LL);
        }
      }
      if ( v6 >= v5->max_length )
      {
LABEL_22:
        v19 = sub_B70798(SvtNameText);
        sub_B70738(v19, 0LL);
      }
      i->klass = (BattleServantConfConponent_c *)v17;
      sub_B70630(i, v17, v11, v12, v13, v14, v15, v16);
    }
    ++v6;
  }
  return v5;
}


UserDeckEntity_o *__fastcall PartyListViewItem__GetUserDeck(
        PartyListViewItem_o *this,
        PartyListViewItem_o *baseItem,
        const MethodInfo *method)
{
  __int64 v5; // x23
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **deckName; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t max_length; // w22
  PartyListViewItem_o *v17; // x19
  int64_t userEquipId; // x20
  DeckServant_o *v19; // x21
  __int64 v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct PartyOrganizationListViewItem_array *v27; // x23
  __int64 v28; // x24
  unsigned int v29; // w19
  __int64 v30; // x25
  PartyOrganizationListViewItem_o *v31; // x22
  __int64 v32; // x21
  int v33; // w28
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v35; // q0
  __int128 v36; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  _DWORD *v44; // x22
  __int64 v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0
  __int64 v54; // x0
  UserDeckEntity_o *v55; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57[2]; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4355B75 & 1) == 0 )
  {
    sub_B70694(&DeckServantData_TypeInfo);
    sub_B70694(&DeckServant_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&UserDeckEntity_TypeInfo);
    byte_4355B75 = 1;
  }
  memset(&v57[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v5 = sub_B70764(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor((UserDeckEntity_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_30;
  *(_QWORD *)(v5 + 16) = this->fields.id;
  *(_DWORD *)(v5 + 32) = this->fields.index + 1;
  deckName = (System_Int32_array **)this->fields.deckName;
  *(_QWORD *)(v5 + 40) = deckName;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), deckName, v8, v9, v10, v11, v12, v13);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_30;
  max_length = memberList->max_length;
  v17 = baseItem ? baseItem : this;
  userEquipId = v17->fields.userEquipId;
  v19 = (DeckServant_o *)sub_B70764(DeckServant_TypeInfo);
  DeckServant___ctor_16957836(v19, max_length, userEquipId, 0LL);
  *(_QWORD *)(v5 + 48) = v19;
  v20 = v5 + 48;
  v55 = (UserDeckEntity_o *)v5;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 48), (System_Int32_array **)v19, v21, v22, v23, v24, v25, v26);
  v27 = v17->fields.memberList;
  if ( !v27 )
    goto LABEL_30;
  v28 = *(_QWORD *)&v27->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0;
    v30 = 8LL;
    while ( 1 )
    {
      v31 = *(PartyOrganizationListViewItem_o **)((char *)&v27->obj.klass + v30 * 4);
      v32 = sub_B70764(DeckServantData_TypeInfo);
      DeckServantData___ctor((DeckServantData_o *)v32, 0LL);
      if ( !v32 )
        break;
      v33 = v29 + 1;
      *(_DWORD *)(v32 + 16) = v29 + 1;
      if ( !v31 )
        break;
      userServantEntity = v31->fields.userServantEntity;
      if ( userServantEntity )
      {
        v36 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v35 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v57, 0LL, 0LL);
        v36 = *(_OWORD *)&v57[0].fields.currentCryptoKey;
        v35 = *(_OWORD *)&v57[0].fields.fakeValue;
      }
      *(_OWORD *)&v57[1].fields.currentCryptoKey = v36;
      *(_OWORD *)&v57[1].fields.fakeValue = v35;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v56 = v57[1];
      *(_QWORD *)(v32 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v56, 0LL);
      *(_BYTE *)(v32 + 56) = v31->fields.isFollower;
      EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(v31, 0LL);
      *(_QWORD *)(v32 + 40) = EquipList;
      sub_B70630((BattleServantConfConponent_o *)(v32 + 40), EquipList, v38, v39, v40, v41, v42, v43);
      *(_DWORD *)(v32 + 76) = v31->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v20 )
        break;
      v44 = *(_DWORD **)(*(_QWORD *)v20 + 16LL);
      if ( !v44 )
        break;
      v45 = sub_B70754(v32, *(_QWORD *)(*(_QWORD *)v44 + 64LL));
      if ( !v45 )
      {
        v54 = sub_B7078C(0LL);
        sub_B70738(v54, 0LL);
      }
      if ( v29 < v44[6] )
      {
        *(_QWORD *)&v44[v30] = v32;
        sub_B70630((BattleServantConfConponent_o *)&v44[v30], (System_Int32_array **)v32, v46, v47, v48, v49, v50, v51);
        if ( v33 >= (int)v28 )
          return v55;
        v30 += 2LL;
        ++v29;
        if ( v33 < v27->max_length )
          continue;
      }
      v52 = sub_B70798(v45);
      sub_B70738(v52, 0LL);
    }
LABEL_30:
    sub_B7076C(v6, v7);
  }
  return v55;
}


UserEventDeckEntity_o *__fastcall PartyListViewItem__GetUserEventDeck(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 UserId; // x0
  __int64 v5; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int64_t userEquipId; // x21
  DeckServant_o *v8; // x0
  int32_t max_length; // w1
  System_Int32_array **v10; // x22
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct PartyOrganizationListViewItem_array *v18; // x8
  unsigned __int64 v19; // x27
  unsigned __int64 v20; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v22; // x22
  struct QuestRestrictionInfo_o *v23; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  __int64 v26; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v28; // q0
  __int128 v29; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int32_t InitPos_k__BackingField; // w8
  __int64 v38; // x9
  int v39; // w8
  unsigned int *v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  unsigned int *v47; // x0
  __int64 v49; // x0
  __int64 v50; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52[2]; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4355B76 & 1) == 0 )
  {
    sub_B70694(&DeckServantData_TypeInfo);
    sub_B70694(&DeckServant_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&UserEventDeckEntity_TypeInfo);
    byte_4355B76 = 1;
  }
  memset(&v52[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v3 = sub_B70764(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v3, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v3 )
    goto LABEL_54;
  *(_QWORD *)(v3 + 16) = UserId;
  *(_DWORD *)(v3 + 24) = this->fields.id;
  *(_DWORD *)(v3 + 28) = this->fields.index + 1;
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_54;
  userEquipId = this->fields.userEquipId;
  v8 = (DeckServant_o *)sub_B70764(DeckServant_TypeInfo);
  max_length = memberList->max_length;
  v10 = (System_Int32_array **)v8;
  DeckServant___ctor_16957836(v8, max_length, userEquipId, 0LL);
  *(_QWORD *)(v3 + 32) = v10;
  v11 = v3 + 32;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), v10, v12, v13, v14, v15, v16, v17);
  v18 = this->fields.memberList;
  if ( !v18 )
LABEL_54:
    sub_B7076C(UserId, v5);
  v19 = 0LL;
  while ( 1 )
  {
    v20 = v18->max_length;
    if ( (__int64)v19 >= (int)v20 )
      return (UserEventDeckEntity_o *)v3;
    if ( v19 >= v20 )
      goto LABEL_55;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v22 = v18->m_Items[v19];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_25;
    }
    UserId = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    v23 = this->fields.questRestrictionInfo;
    if ( (UserId & 1) != 0 )
    {
      if ( !v23 )
        goto LABEL_54;
      isNpcEditablePos = v23->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v22 || !v23 )
        goto LABEL_54;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v22->fields._InitPos_k__BackingField,
                        0LL);
      v23 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v23 )
        goto LABEL_25;
    }
    UserId = QuestRestrictionInfo__IsNpcMulitipleOrOnly(v23, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_54;
      if ( v22->fields.isFixNpc
        && v22->fields.isFollower
        && !isNpcEditablePos
        && !v22->fields.isMyServantOrNpcRestriction )
      {
        ++v19;
        goto LABEL_50;
      }
    }
LABEL_25:
    v26 = sub_B70764(DeckServantData_TypeInfo);
    DeckServantData___ctor((DeckServantData_o *)v26, 0LL);
    if ( !v26 )
      goto LABEL_54;
    *(_DWORD *)(v26 + 16) = v19 + 1;
    if ( !v22 )
      goto LABEL_54;
    userServantEntity = v22->fields.userServantEntity;
    if ( userServantEntity )
    {
      v29 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      v28 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    }
    else
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v52, 0LL, 0LL);
      v29 = *(_OWORD *)&v52[0].fields.currentCryptoKey;
      v28 = *(_OWORD *)&v52[0].fields.fakeValue;
    }
    *(_OWORD *)&v52[1].fields.currentCryptoKey = v29;
    *(_OWORD *)&v52[1].fields.fakeValue = v28;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v51 = v52[1];
    *(_QWORD *)(v26 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v51, 0LL);
    *(_BYTE *)(v26 + 56) = v22->fields.isFollower;
    EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(v22, 0LL);
    *(_QWORD *)(v26 + 40) = EquipList;
    sub_B70630((BattleServantConfConponent_o *)(v26 + 40), EquipList, v31, v32, v33, v34, v35, v36);
    InitPos_k__BackingField = v22->fields._InitPos_k__BackingField;
    v38 = *(_QWORD *)(v26 + 24);
    *(_QWORD *)(v26 + 64) = 0LL;
    *(_DWORD *)(v26 + 76) = InitPos_k__BackingField;
    if ( v38 )
    {
      v39 = 0;
LABEL_42:
      if ( (v39 & isNpcEditablePos & 1) != 0 )
      {
        *(_QWORD *)(v26 + 64) = v22->fields.npcFollowerSvtId;
        if ( v22->fields.isFixNpc )
          *(_BYTE *)(v26 + 56) = 0;
      }
      goto LABEL_45;
    }
    if ( !v22->fields.isMyServantOrNpcRestriction || !v22->fields.isFollower )
    {
      v39 = !v22->fields.isMyServantOrNpcRestriction;
      goto LABEL_42;
    }
    *(_QWORD *)(v26 + 64) = v22->fields.npcFollowerSvtId;
LABEL_45:
    if ( !*(_QWORD *)v11 )
      goto LABEL_54;
    v40 = *(unsigned int **)(*(_QWORD *)v11 + 16LL);
    if ( !v40 )
      goto LABEL_54;
    UserId = sub_B70754(v26, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
    if ( !UserId )
    {
      v50 = sub_B7078C(0LL);
      sub_B70738(v50, 0LL);
    }
    if ( v19 >= v40[6] )
    {
LABEL_55:
      v49 = sub_B70798(UserId);
      sub_B70738(v49, 0LL);
    }
    v47 = &v40[2 * v19];
    *((_QWORD *)v47 + 4) = v26;
    sub_B70630((BattleServantConfConponent_o *)(v47 + 8), (System_Int32_array **)v26, v41, v42, v43, v44, v45, v46);
    ++v19;
LABEL_50:
    v18 = this->fields.memberList;
    if ( !v18 )
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
  __int64 v9; // x0

  if ( (byte_4355B60 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B60 = 1;
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
        sub_B7076C(v7, userServantList);
      if ( v6 >= npcSvtIds->max_length )
      {
LABEL_18:
        v9 = sub_B70798(v7);
        sub_B70738(v9, 0LL);
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
  __int64 v9; // x0

  if ( userSvtId >= 1 )
  {
    memberList = this->fields.memberList;
    v4 = this;
    if ( !memberList )
LABEL_9:
      sub_B7076C(this, userSvtId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        v9 = sub_B70798(this);
        sub_B70738(v9, 0LL);
      }
      this = (PartyListViewItem_o *)memberList->m_Items[v6];
      if ( this )
      {
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(
                                        (PartyOrganizationListViewItem_o *)this,
                                        0LL);
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
  il2cpp_array_size_t v3; // w21
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v6; // x8
  __int64 v8; // x0

  if ( (byte_4355B6E & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B6E = 1;
  }
  v3 = 0;
  v4 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v3 >= v4->static_fields->DeckMemberMax )
      return 1;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( v3 >= memberList->max_length )
    {
      v8 = sub_B70798(v4);
      sub_B70738(v8, 0LL);
    }
    v6 = memberList->m_Items[v3];
    if ( !v6 )
LABEL_14:
      sub_B7076C(v4, method);
    ++v3;
    if ( v6->fields.userServantEntity )
      return 0;
  }
}


bool __fastcall PartyListViewItem__IsDeckInit(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t v3; // w21
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v6; // x8
  System_String_o *deckName; // x20
  System_String_o *DefaultDeckName; // x1
  __int64 v10; // x0

  if ( (byte_4355B6D & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B6D = 1;
  }
  v3 = 0;
  v4 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v3 >= v4->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_16;
    if ( v3 >= memberList->max_length )
    {
      v10 = sub_B70798(v4);
      sub_B70738(v10, 0LL);
    }
    v6 = memberList->m_Items[v3];
    if ( !v6 )
LABEL_16:
      sub_B7076C(v4, method);
    ++v3;
    if ( v6->fields.userServantEntity )
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
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v7; // x0

  if ( (byte_4355B6F & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B6F = 1;
  }
  for ( i = 0; ; ++i )
  {
    v4 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v4->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( i >= memberList->max_length )
    {
      v7 = sub_B70798(v4);
      sub_B70738(v7, 0LL);
    }
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_B7076C(v4, method);
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v4, 0LL) > 0 )
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  __int64 v10; // x0

  v4 = this;
  if ( (byte_4355B78 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4355B78 = 1;
  }
  if ( svtId < 1 )
    return 0;
  memberList = v4->fields.memberList;
  if ( !memberList )
LABEL_17:
    sub_B7076C(this, *(_QWORD *)&svtId);
  max_length = memberList->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      v10 = sub_B70798(this);
      sub_B70738(v10, 0LL);
    }
    this = (PartyListViewItem_o *)memberList->m_Items[v7];
    if ( !this )
      goto LABEL_17;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(EquipSvtId, 0LL);
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
  bool IsUseOldMaster; // w21
  unsigned __int64 i; // x22
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v10; // x24
  struct QuestRestrictionInfo_o *v11; // x8
  __int64 v13; // x0

  if ( (byte_4355B5F & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B5F = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_31:
    sub_B7076C(questRestrictionInfo, deck);
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  for ( i = 0LL; ; ++i )
  {
    questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= SHIDWORD(questRestrictionInfo->fields.fixedSupportPositionRestrictionEntity[2].fields.name) )
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
      v13 = sub_B70798(questRestrictionInfo);
      sub_B70738(v13, 0LL);
    }
    v10 = svts->m_Items[i];
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( IsUseOldMaster )
      break;
    if ( !v10 || !questRestrictionInfo )
      goto LABEL_31;
    if ( !QuestRestrictionInfo__IsEditablePos(questRestrictionInfo, v10->fields.initPos, 0LL) )
      goto LABEL_23;
LABEL_24:
    ;
  }
  if ( !questRestrictionInfo )
    goto LABEL_31;
  questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(questRestrictionInfo, 0LL);
  v11 = this->fields.questRestrictionInfo;
  if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 )
    goto LABEL_15;
  if ( !v11 )
    goto LABEL_31;
  if ( v11->fields.isNpcEditablePos )
  {
LABEL_15:
    if ( !v10 || !v11 )
      goto LABEL_31;
    if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_34234816(
           this->fields.questRestrictionInfo,
           v10->fields.initPos,
           0LL) )
    {
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  if ( !v10 )
    goto LABEL_31;
LABEL_23:
  if ( v10->fields.initPos == v10->fields.id )
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


bool __fastcall PartyListViewItem__IsSpecificMenuKind_32559480(
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
  int32_t i; // w20
  PartyOrganizationListViewItem_o *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v6; // x9
  const MethodInfo *v7; // x1
  __int64 v8; // x0

  if ( (byte_4355B6C & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B6C = 1;
  }
  for ( i = 1; ; ++i )
  {
    v4 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    v6 = *(_QWORD *)&memberList->max_length;
    if ( i >= BalanceConfig_TypeInfo->static_fields->DeckMemberMax )
      break;
    if ( i >= (unsigned int)v6 )
      goto LABEL_18;
    v4 = memberList->m_Items[i];
    if ( !v4 )
      goto LABEL_17;
    if ( !v4->fields.isFollower )
      PartyOrganizationListViewItem__Empty(v4, 0LL);
  }
  if ( !(_DWORD)v6 )
  {
LABEL_18:
    v8 = sub_B70798(v4);
    sub_B70738(v8, 0LL);
  }
  v4 = memberList->m_Items[0];
  if ( !v4 )
LABEL_17:
    sub_B7076C(v4, method);
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v4, 0LL);
  PartyListViewItem__CheckRestriction(this, v7);
}


void __fastcall PartyListViewItem__Modify(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w21
  struct PartyOrganizationListViewItem_array *memberList; // x9
  PartyOrganizationListViewItem_o *v5; // x9
  struct PartyOrganizationListViewItem_array *v6; // x9
  BalanceConfig_c *v7; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x0

  if ( (byte_4355B66 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B66 = 1;
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
      goto LABEL_16;
    if ( i >= memberList->max_length )
    {
LABEL_17:
      v9 = sub_B70798(v7);
      sub_B70738(v9, 0LL);
    }
    v5 = memberList->m_Items[i];
    if ( !v5 )
      goto LABEL_16;
    v5->fields._NowPos_k__BackingField = i + 1;
    v6 = this->fields.memberList;
    if ( !v6 )
      goto LABEL_16;
    if ( i >= v6->max_length )
      goto LABEL_17;
    v7 = (BalanceConfig_c *)v6->m_Items[i];
    if ( !v7 )
LABEL_16:
      sub_B7076C(v7, method);
    PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)v7, 0LL);
  }
  PartyListViewItem__CheckRestriction(this, method);
  PartyListViewItem__UpdateEventEffect(this, v8);
}


void __fastcall PartyListViewItem__Set(PartyListViewItem_o *this, PartyListViewItem_o *item, const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int v27; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v29; // x26
  System_String_array **v30; // x2
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
  __int64 v49; // x0
  __int64 v50; // x0

  if ( (byte_4355B67 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B67 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_21:
    sub_B7076C(v5, v6);
  this->fields.menuKind = item->fields.menuKind;
  this->fields.maxCost = item->fields.maxCost;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v27 = 1;
  this->fields.id = item->fields.id;
  while ( 1 )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v40 = v27 - 1;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v40 >= *(_DWORD *)(*(_QWORD *)&v5->fields.classId + 156LL) )
      break;
    memberList = item->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( v40 >= memberList->max_length )
      goto LABEL_22;
    v5 = memberList->m_Items[v40];
    if ( !v5 )
      goto LABEL_21;
    v29 = this->fields.memberList;
    v5 = PartyOrganizationListViewItem__Clone(v5, -1, 0LL);
    if ( !v29 )
      goto LABEL_21;
    v36 = (System_Int32_array **)v5;
    if ( v5 )
    {
      v5 = (PartyOrganizationListViewItem_o *)sub_B70754(v5, v29->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v50 = sub_B7078C(0LL);
        sub_B70738(v50, 0LL);
      }
    }
    if ( v40 >= v29->max_length )
      goto LABEL_22;
    v37 = &v29->obj.klass + (int)v40;
    v37[4] = (Il2CppClass *)v36;
    sub_B70630((BattleServantConfConponent_o *)(v37 + 4), v36, v30, v31, v32, v33, v34, v35);
    v38 = this->fields.memberList;
    if ( !v38 )
      goto LABEL_21;
    if ( v40 >= v38->max_length )
    {
LABEL_22:
      v49 = sub_B70798(v5);
      sub_B70738(v49, 0LL);
    }
    v39 = v38->m_Items[v40];
    if ( !v39 )
      goto LABEL_21;
    v39->fields._NowPos_k__BackingField = v27++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.deckName,
    (System_Int32_array **)deckName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.waveBattleEnemyClassIds,
    (System_Int32_array **)waveBattleEnemyClassIds,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields._IsWaveBattleRestart_k__BackingField = item->fields._IsWaveBattleRestart_k__BackingField;
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
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
  sub_B70630(
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
  __int64 v15; // x0

  if ( (byte_4355B68 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_4355B68 = 1;
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
      v15 = sub_B70798(v14);
      sub_B70738(v15, 0LL);
    }
    v9 = &memberList->obj.klass + (int)i;
    v10 = (PartyOrganizationListViewItem_o *)v9[4];
    if ( !v10 )
LABEL_16:
      sub_B7076C(v14, *(_QWORD *)&num);
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
  int32_t cost; // w23
  struct PartyOrganizationListViewItem_array *v9; // x8
  struct PartyOrganizationListViewItem_array *v10; // x8
  int32_t v11; // w20
  const MethodInfo *v12; // x1
  __int64 v13; // x0

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_11;
  if ( memberList->max_length <= num )
    goto LABEL_12;
  v6 = this;
  this = (PartyListViewItem_o *)memberList->m_Items[num];
  if ( !this )
    goto LABEL_11;
  cost = v6->fields.cost;
  this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                  (PartyOrganizationListViewItem_o *)this,
                                  0LL);
  v9 = v6->fields.memberList;
  v6->fields.cost = cost - (_DWORD)this;
  if ( !v9 )
    goto LABEL_11;
  if ( v9->max_length <= num )
    goto LABEL_12;
  this = (PartyListViewItem_o *)v9->m_Items[num];
  if ( !this
    || (PartyOrganizationListViewItem__Modify_38396280((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberList) == 0LL) )
  {
LABEL_11:
    sub_B7076C(this, *(_QWORD *)&num);
  }
  if ( v10->max_length <= num )
  {
LABEL_12:
    v13 = sub_B70798(this);
    sub_B70738(v13, 0LL);
  }
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember_32616700(
        PartyListViewItem_o *this,
        int32_t idx,
        PartyOrganizationListViewItem_o *member,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v6; // x19
  int32_t cost; // w24
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct PartyOrganizationListViewItem_array *v15; // x23
  Il2CppClass **v16; // x0
  struct PartyOrganizationListViewItem_array *v17; // x8
  struct PartyOrganizationListViewItem_array *v18; // x8
  int32_t v19; // w20
  __int64 v20; // x0
  __int64 v21; // x0

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_17;
  if ( memberList->max_length <= idx )
    goto LABEL_18;
  v6 = this;
  this = (PartyListViewItem_o *)memberList->m_Items[idx];
  if ( !this
    || (cost = v6->fields.cost,
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                        (PartyOrganizationListViewItem_o *)this,
                                        0LL),
        v15 = v6->fields.memberList,
        v6->fields.cost = cost - (_DWORD)this,
        !v15) )
  {
LABEL_17:
    sub_B7076C(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_B70754(member, v15->obj.klass->_1.element_class);
    if ( !this )
    {
      v21 = sub_B7078C(0LL);
      sub_B70738(v21, 0LL);
    }
  }
  if ( v15->max_length <= idx )
    goto LABEL_18;
  v16 = &v15->obj.klass + idx;
  v16[4] = (Il2CppClass *)member;
  sub_B70630((BattleServantConfConponent_o *)(v16 + 4), (System_Int32_array **)member, v9, v10, v11, v12, v13, v14);
  if ( v6->fields.menuKind == 9 )
  {
    v17 = v6->fields.memberList;
    if ( !v17 )
      goto LABEL_17;
    if ( v17->max_length <= idx )
      goto LABEL_18;
    this = (PartyListViewItem_o *)v17->m_Items[idx];
    if ( !this )
      goto LABEL_17;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)this,
      v6->fields.waveBattleEnemyClassIds,
      0LL);
  }
  v18 = v6->fields.memberList;
  if ( !v18 )
    goto LABEL_17;
  if ( v18->max_length <= idx )
  {
LABEL_18:
    v20 = sub_B70798(this);
    sub_B70738(v20, 0LL);
  }
  this = (PartyListViewItem_o *)v18->m_Items[idx];
  if ( !this )
    goto LABEL_17;
  v19 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v19;
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v16; // x28
  unsigned int v17; // w20
  FollowerInfo_o *v18; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x27
  struct QuestRestrictionInfo_o *v22; // x8
  int32_t v23; // w0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  QuestRestrictionInfo_o *v30; // x19
  QuestRestrictionInfo_o *v31; // x24
  __int64 v32; // x19
  bool result; // w0
  __int64 v34; // x0
  int32_t *v35; // [xsp+8h] [xbp-78h]
  __int64 value; // [xsp+10h] [xbp-70h]
  PartyListViewItem_o *v37; // [xsp+18h] [xbp-68h]
  UserServantEntity_o *v38; // [xsp+20h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4355B63 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
    sub_B70694(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355B63 = 1;
  }
  v38 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !npcFollowerInfoList )
    goto LABEL_39;
  max_length = npcFollowerInfoList->max_length;
  if ( max_length < 1 )
    return 0;
  v35 = followerClassId;
  v16 = Master_WarQuestSelectionMaster;
  v17 = 0;
  v37 = this;
  while ( 1 )
  {
    if ( v17 >= max_length )
    {
      v34 = sub_B70798(Master_WarQuestSelectionMaster);
      sub_B70738(v34, 0LL);
    }
    v18 = npcFollowerInfoList->m_Items[v17];
    if ( !v18 )
      goto LABEL_39;
    if ( v18->fields.npcFollowerSvtId == npcFollowerSvtId )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_39;
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v18, 0, ReturnTypeByQuestId, 0LL);
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Master_WarQuestSelectionMaster, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(Master_WarQuestSelectionMaster, &entity, npcFollowerSvtId, (const MethodInfo_21C06C4 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v22 = this->fields.questRestrictionInfo;
        if ( !v22 )
          goto LABEL_39;
        v23 = FollowerInfo__GetReturnTypeByQuestId(v22->fields.questId, 0LL);
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)FollowerInfo__GetNpcServantIndividuality(v18, 0, v23, 0LL);
        if ( !this->fields.questRestrictionInfo )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_34237976(this->fields.questRestrictionInfo, (System_Int32_array *)Master_WarQuestSelectionMaster, pos, 0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          break;
        goto LABEL_34;
      }
      if ( !v16 )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(v16, &v38, npcFollowerSvtId, (const MethodInfo_21C06C4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        goto LABEL_27;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v38;
      if ( !v38 )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v38, 0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v38;
        if ( !v38 )
          goto LABEL_39;
        v30 = this->fields.questRestrictionInfo;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)NpcServantFollowerEntity__GetOverwriteIndividuality((NpcServantFollowerEntity_o *)v38, 0LL);
        if ( !v30 )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_34237976(v30, (System_Int32_array *)Master_WarQuestSelectionMaster, pos, 0LL);
      }
      else
      {
LABEL_27:
        if ( !ServantLeaderInfo )
          goto LABEL_39;
        v31 = this->fields.questRestrictionInfo;
        v32 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        *(_QWORD *)&v40.fields.fakeValue = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          value = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v40.fields.fakeValue = value;
        }
        *(_QWORD *)&v40.fields.currentCryptoKey = v32;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v40, 0LL);
        if ( !v31 )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(v31, (int32_t)Master_WarQuestSelectionMaster, ServantLeaderInfo->fields.limitCount, ServantLeaderInfo->fields.dispLimitCount, pos, 0, 0LL);
        this = v37;
      }
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        break;
    }
LABEL_34:
    max_length = npcFollowerInfoList->max_length;
    if ( (int)++v17 >= max_length )
      return 0;
  }
  *follower = v18;
  sub_B70630((BattleServantConfConponent_o *)follower, (System_Int32_array **)v18, v24, v25, v26, v27, v28, v29);
  if ( !ServantLeaderInfo )
LABEL_39:
    sub_B7076C(Master_WarQuestSelectionMaster, v14);
  result = 1;
  *v35 = ServantLeaderInfo->fields.classId;
  return result;
}


void __fastcall PartyListViewItem__SetUserEquip(
        PartyListViewItem_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  this->fields.userEquipId = userEquipId;
}


void __fastcall PartyListViewItem__SwapMember(
        PartyListViewItem_o *this,
        int32_t num1,
        int32_t num2,
        bool notChangeInitPos,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  unsigned int max_length; // w9
  __int64 v7; // x0

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_7;
  max_length = memberList->max_length;
  if ( max_length <= num1 || max_length <= num2 )
  {
    v7 = sub_B70798(this);
    sub_B70738(v7, 0LL);
  }
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_B7076C(this, num1);
  PartyOrganizationListViewItem__Swap(
    (PartyOrganizationListViewItem_o *)this,
    memberList->m_Items[num2],
    notChangeInitPos,
    0LL);
}


void __fastcall PartyListViewItem__UpdateEventEffect(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x19
  int max_length; // w8
  unsigned int v4; // w20
  __int64 v5; // x0

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_9;
  max_length = memberList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
      {
        v5 = sub_B70798(this);
        sub_B70738(v5, 0LL);
      }
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_B7076C(this, method);
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
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4355B79 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_10484/*"PARTY_ORGANIZATION_NAME_BASE"*/);
    byte_4355B79 = 1;
  }
  v6 = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10484/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0LL);
  v6 = this->fields.index + 1;
  v4 = (Il2CppObject *)System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Format(v3, v4, 0LL);
}


bool __fastcall PartyListViewItem__get_IsClearedWave(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsClearedWave_k__BackingField;
}


bool __fastcall PartyListViewItem__get_IsWaveBattleRestart(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsWaveBattleRestart_k__BackingField;
}


int32_t __fastcall PartyListViewItem__get_MaxCost(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxCost;
}


int64_t __fastcall PartyListViewItem__get_UserEquipId(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.userEquipId;
}


void __fastcall PartyListViewItem__set_IsClearedWave(PartyListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsClearedWave_k__BackingField = value;
}


void __fastcall PartyListViewItem__set_IsWaveBattleRestart(
        PartyListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsWaveBattleRestart_k__BackingField = value;
}


void __fastcall PartyListViewItem___c__DisplayClass27_0___ctor(
        PartyListViewItem___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass27_0____ctor_b__0(
        PartyListViewItem___c__DisplayClass27_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.npcFollowerSvtId == this->fields.npcSvtId;
}


void __fastcall PartyListViewItem___c__DisplayClass27_1___ctor(
        PartyListViewItem___c__DisplayClass27_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass27_1____ctor_b__1(
        PartyListViewItem___c__DisplayClass27_1_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass27_2___ctor(
        PartyListViewItem___c__DisplayClass27_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass27_2____ctor_b__2(
        PartyListViewItem___c__DisplayClass27_2_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass27_3___ctor(
        PartyListViewItem___c__DisplayClass27_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass27_3____ctor_b__3(
        PartyListViewItem___c__DisplayClass27_3_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass32_0___ctor(
        PartyListViewItem___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass32_0___GetFollowerIndex_b__0(
        PartyListViewItem___c__DisplayClass32_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIndex;
}


void __fastcall PartyListViewItem___c__DisplayClass33_0___ctor(
        PartyListViewItem___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass33_0___GetSupportInitIndex_b__0(
        PartyListViewItem___c__DisplayClass33_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}