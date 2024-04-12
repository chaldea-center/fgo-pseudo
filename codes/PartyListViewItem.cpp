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

  if ( (byte_42B3C92 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem___TypeInfo);
    byte_42B3C92 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationListViewItem_array *)sub_B5299C(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberList = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall PartyListViewItem___ctor_32236212(
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
  UserServantEntity_array *UserServantList; // x27
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v36; // x8
  int32_t DeckMainMemberMax; // w28
  struct PartyOrganizationListViewItem_array *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t v45; // w21
  struct DeckServant_o *v46; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v49; // x8
  int32_t initPos; // w25
  int v51; // w9
  struct PartyOrganizationListViewItem_array *v52; // x19
  PartyOrganizationListViewItem_o *v53; // x0
  System_Int32_array **v54; // x24
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  Il2CppClass **v61; // x0
  UserServantEntity_o *v62; // x19
  struct PartyOrganizationListViewItem_array *v63; // x28
  UserServantEntity_array *v64; // x20
  PartyListViewItem_o *v65; // x27
  FollowerInfo_o *v66; // x22
  UserDeckEntity_o *v67; // x26
  System_Int64_array *EquipList; // x23
  PartyOrganizationListViewItem_o *v69; // x24
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
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v87; // x0
  __int64 v88; // x0
  int32_t v91; // [xsp+34h] [xbp-7Ch]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+40h] [xbp-70h]
  int32_t v94; // [xsp+5Ch] [xbp-54h]

  if ( (byte_42B3C93 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem___TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42B3C93 = 1;
  }
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !deck )
    goto LABEL_66;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v32);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_66;
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
    j_il2cpp_runtime_class_init_0(v36);
    v36 = BalanceConfig_TypeInfo;
  }
  v38 = (struct PartyOrganizationListViewItem_array *)sub_B5299C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v36->static_fields->DeckMemberMax);
  this->fields.memberList = v38;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v30 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v30 )
    goto LABEL_66;
  if ( *(_QWORD *)&v30->fields.sortIndex )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v30 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( v30 )
    {
      follower = *(FollowerInfo_o **)&v30->fields.sortIndex;
      v30 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( v30 )
      {
        followerClassId = v30->fields.sortValue0;
        v30 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( v30 )
        {
          followerDeckId = HIDWORD(v30->fields.sortValue0);
          goto LABEL_26;
        }
      }
    }
LABEL_66:
    sub_B52A5C(v30, v31);
  }
LABEL_26:
  v45 = 0;
  v91 = DeckMainMemberMax;
  while ( 1 )
  {
    v30 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v45 >= *(_DWORD *)(*(_QWORD *)&v30->fields.frameType + 156LL) )
      break;
    v46 = deck->fields.deckInfo;
    if ( !v46 )
      goto LABEL_66;
    svts = v46->fields.svts;
    if ( !svts )
      goto LABEL_66;
    max_length = svts->max_length;
    if ( v45 >= max_length )
    {
      v51 = v45 + 1;
      initPos = v45 + 1;
    }
    else
    {
      if ( v45 >= (unsigned int)max_length )
        goto LABEL_67;
      v49 = svts->m_Items[v45];
      if ( !v49 )
        goto LABEL_66;
      initPos = v49->fields.initPos;
      v51 = v45 + 1;
    }
    v94 = v51;
    if ( v51 == DeckMainMemberMax )
    {
      v52 = *p_memberList;
      v53 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      v54 = (System_Int32_array **)v53;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_31237364(
          v53,
          v45,
          follower,
          followerClassId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0LL);
        if ( !v52 )
          goto LABEL_66;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_31272016(v53, v45, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v52 )
          goto LABEL_66;
      }
      if ( v54 )
      {
        v30 = (PartyOrganizationListViewItem_o *)sub_B52A44(v54, v52->obj.klass->_1.element_class);
        if ( !v30 )
          goto LABEL_68;
      }
      if ( v45 >= v52->max_length )
        goto LABEL_67;
      v61 = &v52->obj.klass + v45;
      v61[4] = (Il2CppClass *)v54;
      sub_B52920((BattleServantConfConponent_o *)(v61 + 4), v54, v55, v56, v57, v58, v59, v60);
    }
    else
    {
      if ( !UserServantList )
        goto LABEL_66;
      if ( v45 >= UserServantList->max_length )
        goto LABEL_67;
      v62 = UserServantList->m_Items[v45];
      v63 = *p_memberList;
      if ( v62 )
      {
        v64 = UserServantList;
        v65 = this;
        v66 = follower;
        v67 = deck;
        EquipList = UserDeckEntity__GetEquipList(deck, v45, 0LL);
        v69 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_31263776(
          v69,
          v45,
          v62,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL);
        if ( !v63 )
          goto LABEL_66;
        if ( v69 )
        {
          v30 = (PartyOrganizationListViewItem_o *)sub_B52A44(v69, v63->obj.klass->_1.element_class);
          if ( !v30 )
            goto LABEL_68;
        }
        if ( v45 >= v63->max_length )
          goto LABEL_67;
        deck = v67;
        v76 = &v63->obj.klass + v45;
        v76[4] = (Il2CppClass *)v69;
        sub_B52920((BattleServantConfConponent_o *)(v76 + 4), (System_Int32_array **)v69, v70, v71, v72, v73, v74, v75);
        follower = v66;
        this = v65;
        UserServantList = v64;
      }
      else
      {
        v77 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_31272016(v77, v45, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v63 )
          goto LABEL_66;
        if ( v77 )
        {
          v30 = (PartyOrganizationListViewItem_o *)sub_B52A44(v77, v63->obj.klass->_1.element_class);
          if ( !v30 )
          {
LABEL_68:
            v88 = sub_B52A7C(v30);
            sub_B52A28(v88, 0LL);
          }
        }
        if ( v45 >= v63->max_length )
          goto LABEL_67;
        v84 = &v63->obj.klass + v45;
        v84[4] = (Il2CppClass *)v77;
        sub_B52920((BattleServantConfConponent_o *)(v84 + 4), (System_Int32_array **)v77, v78, v79, v80, v81, v82, v83);
      }
      DeckMainMemberMax = v91;
    }
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_66;
    if ( v45 >= memberList->max_length )
    {
LABEL_67:
      v87 = sub_B52A88(v30);
      sub_B52A28(v87, 0LL);
    }
    v30 = memberList->m_Items[v45];
    if ( !v30 )
      goto LABEL_66;
    cost = this->fields.cost;
    v45 = v94;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v30, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v31);
}


void __fastcall PartyListViewItem___ctor_32239112(
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

  if ( (byte_42B3C94 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem___TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42B3C94 = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
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
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_139;
      if ( !v134 )
        goto LABEL_139;
      v48 = *(_DWORD *)(Member + 48);
      Member = (__int64)PartyListViewItem__GetMember(v134, v48 - 1, v49);
      if ( !Member )
        goto LABEL_139;
      v50 = *(_DWORD *)(Member + 340);
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  v52 = (struct PartyOrganizationListViewItem_array *)sub_B5299C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v51->static_fields->DeckMemberMax);
  this->fields.memberList = v52;
  p_memberList = &this->fields.memberList;
  sub_B52920(
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
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member
    || (follower = *(FollowerInfo_o **)(Member + 24),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (followerClassId = *(_DWORD *)(Member + 32),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_139:
    sub_B52A5C(Member, v40);
  }
  v60 = *(_DWORD *)(Member + 36);
LABEL_49:
  v136 = v60;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
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
      p_initPos = (int32_t *)(Member + 340);
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
    Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(questRestrictionInfo, initPos, 0LL);
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
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      v80 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_31237364(
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
        Member = sub_B52A44(v80, v78->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v62 >= v78->max_length )
        goto LABEL_143;
      v87 = &v78->obj.klass + (int)v62;
LABEL_124:
      v87[4] = (Il2CppClass *)v80;
      sub_B52920((BattleServantConfConponent_o *)(v87 + 4), (System_Int32_array **)v80, v81, v82, v83, v84, v85, v86);
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
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v141, 0LL);
          if ( v62 >= UserServantList->max_length )
            goto LABEL_143;
          if ( !*v104 )
            goto LABEL_139;
          v108 = Member;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*v104)[6], 0LL);
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
            sub_B52920((BattleServantConfConponent_o *)v104, 0LL, v111, v112, v113, v114, v115, v116);
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
        v80 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_31263776(
          v80,
          v62,
          v117,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL);
        if ( !v118 )
          goto LABEL_139;
      }
      else
      {
        v80 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_31272016(v80, v62, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v118 )
          goto LABEL_139;
      }
      if ( v80 )
      {
        Member = sub_B52A44(v80, v118->obj.klass->_1.element_class);
        if ( !Member )
        {
LABEL_144:
          v127 = sub_B52A7C(Member);
          sub_B52A28(v127, 0LL);
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
      v91 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_31237364(
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
        Member = sub_B52A44(v91, v89->obj.klass->_1.element_class);
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
      v120 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      v121 = (System_Int32_array **)v120;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_31237364(
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
        PartyOrganizationListViewItem___ctor_31272016(v120, v62, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v89 )
          goto LABEL_139;
      }
      if ( v121 )
      {
        Member = sub_B52A44(v121, v89->obj.klass->_1.element_class);
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
    sub_B52920(v99, v100, v92, v93, v94, v95, v96, v97);
LABEL_132:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_139;
    if ( v62 >= memberList->max_length )
    {
LABEL_143:
      v126 = sub_B52A88(Member);
      sub_B52A28(v126, 0LL);
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


void __fastcall PartyListViewItem___ctor_32244260(
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
  if ( (byte_42B3C95 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem___TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42B3C95 = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  v45 = &SingletonTemplate_PartyOrganizationUtility__TypeInfo;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    v47 = *(_DWORD *)(Member + 48);
    Member = (__int64)PartyListViewItem__GetMember(v46, v47 - 1, v48);
    if ( !Member )
      goto LABEL_170;
    v49 = *(_DWORD *)(Member + 340);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v49, follower, 0LL);
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  if ( *(_QWORD *)(Member + 24) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    follower = *(FollowerInfo_o **)(Member + 24);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    followerClassId = *(_DWORD *)(Member + 32);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  v52 = (struct PartyOrganizationListViewItem_array *)sub_B5299C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v51->static_fields->DeckMemberMax);
  this->fields.memberList = v52;
  sub_B52920(
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
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v60 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo || (v61 = (unsigned int *)UserServantList, !Member) )
LABEL_170:
    sub_B52A5C(Member, v42);
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
      v67 = (int32_t *)(Member + 340);
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
      v67 = (int32_t *)(v70 + 60);
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
        v120 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
        v121 = v117;
        v122 = v14;
        v123 = (System_Int32_array **)v120;
        v124 = v117;
        v125 = v118;
        PartyOrganizationListViewItem___ctor_31272016(v120, v121, 0, setupInfo, v122, 1, initPos, 0LL);
        if ( !v119 )
          goto LABEL_170;
        if ( v123 )
        {
          Member = sub_B52A44(v123, *(_QWORD *)(*(_QWORD *)v119 + 64LL));
          if ( !Member )
          {
LABEL_172:
            v159 = sub_B52A7C(Member);
            sub_B52A28(v159, 0LL);
          }
        }
        if ( v124 >= v119[6] )
          goto LABEL_171;
        *(_QWORD *)((char *)v119 + v66 + 32) = v123;
        v65 = v124;
        v14 = v125;
        sub_B52920((BattleServantConfConponent_o *)((char *)v119 + v66 + 32), v123, v126, v127, v128, v129, v130, v131);
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
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v178, 0LL);
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
                  Member = sub_B52A44(Member, *(_QWORD *)(*(_QWORD *)v61 + 64LL));
                  if ( !Member )
                    goto LABEL_172;
                }
                if ( v65 >= v61[6] )
                  goto LABEL_171;
                *(UserServantEntity_o **)((char *)m_Items + v66) = (UserServantEntity_o *)v82;
                sub_B52920((BattleServantConfConponent_o *)((char *)m_Items + v66), v82, v76, v77, v78, v79, v80, v81);
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
    Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(v14, v71, 0LL);
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
        v89 = *(_QWORD *)(v87 + 48);
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
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      v99 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_31237364(
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
        Member = sub_B52A44(v99, *(_QWORD *)(*(_QWORD *)v97 + 64LL));
        if ( !Member )
          goto LABEL_172;
      }
      if ( v65 >= v97[6] )
        goto LABEL_171;
      deck = v94;
      *(_QWORD *)((char *)v97 + v175 + 32) = v99;
      sub_B52920(
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
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v179, 0LL);
          if ( v65 >= v61[6] )
            goto LABEL_171;
          v135 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)m_Items + v175);
          if ( !v135 )
            goto LABEL_170;
          v136 = Member;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v135[6], 0LL);
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
            sub_B52920(
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
        v110 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_31272016(v110, v65, 0, setupInfo, v14, 1, initPos, 0LL);
        v46 = v173;
        if ( !v108 )
          goto LABEL_170;
        goto LABEL_152;
      }
      EquipList = UserEventDeckEntity__GetEquipList(deck, v65, 0LL);
      v110 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_31263776(v110, v65, v145, EquipList, setupInfo, v14, 0LL, initPos, 0LL);
      if ( !v108 )
        goto LABEL_170;
    }
    else
    {
      v107 = followera;
      v108 = (unsigned int *)*p_memberList;
      if ( !followera )
      {
        v147 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
        v148 = (System_Int32_array **)v147;
        if ( follower )
          PartyOrganizationListViewItem___ctor_31237364(
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
          PartyOrganizationListViewItem___ctor_31272016(v147, v65, 1, setupInfo, v14, 1, initPos, 0LL);
        v66 = v175;
        if ( !v108 )
          goto LABEL_170;
        if ( v148 )
        {
          Member = sub_B52A44(v148, *(_QWORD *)(*(_QWORD *)v108 + 64LL));
          if ( !Member )
            goto LABEL_172;
        }
        if ( v65 >= v108[6] )
          goto LABEL_171;
        *(_QWORD *)((char *)v108 + v175 + 32) = v148;
        sub_B52920((BattleServantConfConponent_o *)((char *)v108 + v175 + 32), v148, v149, v150, v151, v152, v153, v154);
        v46 = v173;
        goto LABEL_156;
      }
      v109 = followerClassIda;
      v110 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_31237364(v110, v65, v107, v109, setupInfo, v14, 0LL, 0, v170, initPos, 0LL);
      if ( !v108 )
        goto LABEL_170;
    }
    v46 = v173;
LABEL_152:
    v66 = v175;
    if ( v110 )
    {
      Member = sub_B52A44(v110, *(_QWORD *)(*(_QWORD *)v108 + 64LL));
      if ( !Member )
        goto LABEL_172;
    }
    if ( v65 >= v108[6] )
      goto LABEL_171;
    *(_QWORD *)((char *)v108 + v175 + 32) = v110;
    sub_B52920(
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
      v158 = sub_B52A88(Member);
      sub_B52A28(v158, 0LL);
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


void __fastcall PartyListViewItem___ctor_32247392(
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

  if ( (byte_42B3C96 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem___TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B3C96 = 1;
  }
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.deckName, v32, v33, v34, v35, v36, v37, v38);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v39 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  v40 = (struct PartyOrganizationListViewItem_array *)sub_B5299C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v39->static_fields->DeckMemberMax);
  this->fields.memberList = v40;
  p_memberList = &this->fields.memberList;
  sub_B52920(
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
  v48 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v48 )
    goto LABEL_41;
  if ( v48->fields.cQuestReleaseListP )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v48 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v48 )
      goto LABEL_41;
    follower = (FollowerInfo_o *)v48->fields.cQuestReleaseListP;
    v48 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v48 )
      goto LABEL_41;
    klass = (int32_t)v48[1].klass;
    v48 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v48 )
      goto LABEL_41;
    followerClassId = klass;
    followerDeckId = HIDWORD(v48[1].klass);
  }
  v51 = *p_memberList;
  v52 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
  v53 = (System_Int32_array **)v52;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_31237364(
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
    PartyOrganizationListViewItem___ctor_31272016(v52, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v51 )
      goto LABEL_41;
  }
  if ( v53 )
  {
    v48 = (clsQuestCheck_o *)sub_B52A44(v53, v51->obj.klass->_1.element_class);
    if ( !v48 )
    {
LABEL_43:
      v77 = sub_B52A7C(v48);
      sub_B52A28(v77, 0LL);
    }
  }
  if ( !v51->max_length )
    goto LABEL_42;
  v51->m_Items[0] = (PartyOrganizationListViewItem_o *)v53;
  sub_B52920((BattleServantConfConponent_o *)v51->m_Items, v53, v54, v55, v56, v57, v58, v59);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_41;
  if ( !memberList->max_length )
  {
LABEL_42:
    v76 = sub_B52A88(v48);
    sub_B52A28(v76, 0LL);
  }
  v48 = (clsQuestCheck_o *)memberList->m_Items[0];
  if ( !v48 )
LABEL_41:
    sub_B52A5C(v48, v49);
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
    v65 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_31272016(v65, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v64 )
      goto LABEL_41;
    if ( v65 )
    {
      v48 = (clsQuestCheck_o *)sub_B52A44(v65, v64->obj.klass->_1.element_class);
      if ( !v48 )
        goto LABEL_43;
    }
    if ( i >= v64->max_length )
      goto LABEL_42;
    v72 = &v64->obj.klass + i;
    v72[4] = (Il2CppClass *)v65;
    sub_B52920((BattleServantConfConponent_o *)(v72 + 4), (System_Int32_array **)v65, v66, v67, v68, v69, v70, v71);
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


void __fastcall PartyListViewItem___ctor_32248368(
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

  if ( (byte_42B3C97 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem___TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42B3C97 = 1;
  }
  followera = 0LL;
  v141 = 0;
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
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
  sub_B52920(
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      if ( !v135 )
        goto LABEL_149;
      v39 = *(_DWORD *)(IsNeedDeckPosReset + 48);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v135, v39 - 1, v40);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      v41 = *(_DWORD *)(IsNeedDeckPosReset + 340);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    follower = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v136 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
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
        v127 = sub_B52A88(IsNeedDeckPosReset);
        sub_B52A28(v127, 0LL);
      }
      v55 = v53 + 1;
      if ( servantNumMax < (int)v53 + 1 && *(_QWORD *)(v54 + 8 * v53) )
      {
        *isBaseModify = 1;
        if ( v53 >= *(unsigned int *)(v51 + 24) )
          goto LABEL_153;
        *(_QWORD *)(v54 + 8 * v53) = 0LL;
        sub_B52920((BattleServantConfConponent_o *)(v54 + v52), 0LL, v44, v45, v46, v47, v48, v49);
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
  v57 = (struct PartyOrganizationListViewItem_array *)sub_B5299C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v56->static_fields->DeckMemberMax);
  this->fields.memberList = v57;
  sub_B52920(
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
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v64 = *p_questRestrictionInfo;
  v65 = v138;
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_149:
    sub_B52A5C(IsNeedDeckPosReset, v33);
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
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 340);
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
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(questRestrictionInfo, initPos, 0LL);
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
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      v85 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_31237364(
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
        IsNeedDeckPosReset = sub_B52A44(v85, v83->obj.klass->_1.element_class);
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
        v85 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_31237364(
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
        v122 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
        v85 = v122;
        if ( follower )
        {
          PartyOrganizationListViewItem___ctor_31237364(
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
        PartyOrganizationListViewItem___ctor_31272016(v122, v66, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v83 )
          goto LABEL_149;
      }
      if ( v85 )
      {
        IsNeedDeckPosReset = sub_B52A44(v85, v83->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_154;
      }
      max_length = v83->max_length;
LABEL_140:
      if ( (unsigned int)v66 >= max_length )
        goto LABEL_153;
      v123 = &v83->obj.klass + (int)v66;
      v123[4] = (Il2CppClass *)v85;
      sub_B52920((BattleServantConfConponent_o *)(v123 + 4), (System_Int32_array **)v85, v86, v87, v88, v89, v90, v91);
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
        IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v143, 0LL);
        if ( (unsigned int)v66 >= *(_DWORD *)(v51 + 24) )
          goto LABEL_153;
        if ( !*v98 )
          goto LABEL_149;
        v102 = IsNeedDeckPosReset;
        IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*v98)[6], 0LL);
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
          sub_B52920((BattleServantConfConponent_o *)v98, 0LL, v105, v106, v107, v108, v109, v110);
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
      v114 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_31263776(
        v114,
        v66,
        v111,
        EquipList,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        0LL);
      if ( !v112 )
        goto LABEL_149;
    }
    else
    {
      v114 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_31272016(v114, v66, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v112 )
        goto LABEL_149;
    }
    if ( v114 )
    {
      IsNeedDeckPosReset = sub_B52A44(v114, v112->obj.klass->_1.element_class);
      if ( !IsNeedDeckPosReset )
      {
LABEL_154:
        v128 = sub_B52A7C(IsNeedDeckPosReset);
        sub_B52A28(v128, 0LL);
      }
    }
    if ( (unsigned int)v66 >= v112->max_length )
      goto LABEL_153;
    v121 = &v112->obj.klass + v95;
    v121[4] = (Il2CppClass *)v114;
    sub_B52920(
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


void __fastcall PartyListViewItem___ctor_32251052(
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
  PartyListViewItem___c__DisplayClass19_0_o *v57; // x19
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
  __int64 klass_low; // x8
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
  PartyListViewItem___c__DisplayClass19_1_o *v113; // x24
  const MethodInfo *v114; // x2
  int32_t *v115; // x8
  struct DeckServant_o *v116; // x8
  struct DeckServantData_array *v117; // x8
  __int64 v118; // x8
  int32_t v119; // w19
  const MethodInfo *v120; // x6
  bool v121; // w8
  int64_t v122; // x4
  bool *v123; // x25
  bool v124; // w21
  bool v125; // w20
  FollowerInfo_o *v126; // x27
  bool IsNpc; // w0
  int32_t v128; // w8
  bool v129; // w0
  unsigned int *v130; // x20
  int32_t v131; // w21
  PartyOrganizationListViewItem_o *v132; // x24
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  unsigned __int64 v139; // x25
  FollowerInfo_o *v140; // x27
  bool *v141; // x20
  unsigned int *v142; // x21
  int32_t v143; // w25
  PartyOrganizationListViewItem_o *v144; // x24
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  PartyOrganizationListViewItem_o *v151; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v152; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v153; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v154; // x27
  FollowerInfo_o *v155; // x24
  unsigned int v156; // w21
  unsigned int *v157; // x26
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v159; // x8
  int32_t classId; // w20
  PartyOrganizationListViewItem_o *v161; // x27
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
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
  UserServantEntity_o *v204; // x24
  unsigned int *v205; // x20
  PartyOrganizationListViewItem_o *v206; // x27
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  PartyOrganizationListViewItem_o *v213; // x24
  System_String_array **v214; // x2
  System_String_array **v215; // x3
  System_Boolean_array **v216; // x4
  System_Int32_array **v217; // x5
  System_Int32_array *v218; // x6
  System_Int32_array *v219; // x7
  struct ServantLeaderInfo_array *v220; // x8
  ServantLeaderInfo_o *v221; // x8
  int32_t v222; // w20
  PartyOrganizationListViewItem_o *v223; // x27
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  __int64 v230; // x21
  int v231; // w26
  unsigned __int64 v232; // x28
  UserServantEntity_o **m_Items; // x27
  PartyListViewItem___c__DisplayClass19_2_o *v234; // x19
  signed __int64 v235; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v236; // x22
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  unsigned __int64 v243; // x8
  unsigned __int64 v244; // x20
  signed __int64 v245; // x21
  const MethodInfo *v246; // x6
  int v247; // w27
  struct DeckServant_o *v248; // x8
  struct DeckServantData_array *v249; // x8
  __int64 v250; // x8
  int64_t v251; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v253; // x22
  bool *v254; // x25
  int32_t v255; // w28
  bool v256; // w0
  unsigned int *v257; // x20
  int32_t v258; // w23
  PartyOrganizationListViewItem_o *v259; // x27
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  struct PartyOrganizationListViewItem_array *v266; // x8
  struct DeckServant_o *v267; // x9
  struct DeckServantData_array *v268; // x9
  __int64 v269; // x9
  __int64 v270; // x8
  FollowerInfo_o *v271; // x22
  unsigned int *v272; // x28
  int32_t v273; // w28
  unsigned int *v274; // x19
  PartyOrganizationListViewItem_o *v275; // x27
  __int64 IsRestrictionServantIndividuality; // x0
  System_String_array **v277; // x2
  System_String_array **v278; // x3
  System_Boolean_array **v279; // x4
  System_Int32_array **v280; // x5
  System_Int32_array *v281; // x6
  System_Int32_array *v282; // x7
  BattleServantConfConponent_o *v283; // x0
  PartyOrganizationListViewItem_o *v284; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v285; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v286; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v287; // x22
  il2cpp_array_size_t *v288; // x20
  __int64 v289; // x8
  __int64 v290; // x22
  __int64 v291; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v292; // x8
  int32_t v293; // w22
  int32_t v294; // w27
  int32_t v295; // w0
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  FollowerInfo_o *v302; // x27
  struct PartyOrganizationListViewItem_array *v303; // x8
  struct DeckServant_o *v304; // x9
  struct DeckServantData_array *v305; // x9
  __int64 v306; // x9
  __int64 v307; // x8
  int32_t v308; // w8
  unsigned int v309; // w20
  unsigned int *v310; // x22
  struct ServantLeaderInfo_array *v311; // x8
  ServantLeaderInfo_o *v312; // x8
  PartyOrganizationListViewItem_o *v313; // x28
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  UserServantEntity_o *v320; // x27
  unsigned int *v321; // x20
  System_Int64_array *EquipList; // x28
  PartyOrganizationListViewItem_o *v323; // x22
  System_String_array **v324; // x2
  System_String_array **v325; // x3
  System_Boolean_array **v326; // x4
  System_Int32_array **v327; // x5
  System_Int32_array *v328; // x6
  System_Int32_array *v329; // x7
  unsigned int *v330; // x28
  PartyOrganizationListViewItem_o *v331; // x22
  System_String_array **v332; // x2
  System_String_array **v333; // x3
  System_Boolean_array **v334; // x4
  System_Int32_array **v335; // x5
  System_Int32_array *v336; // x6
  System_Int32_array *v337; // x7
  struct PartyOrganizationListViewItem_array *v338; // x8
  int32_t v339; // w19
  __int64 v340; // x26
  unsigned __int64 k; // x24
  unsigned int *v342; // x20
  PartyOrganizationListViewItem_o *v343; // x27
  System_String_array **v344; // x2
  System_String_array **v345; // x3
  System_Boolean_array **v346; // x4
  System_Int32_array **v347; // x5
  System_Int32_array *v348; // x6
  System_Int32_array *v349; // x7
  BalanceConfig_c *v350; // x0
  PartyListViewItem___c__DisplayClass19_3_o *v351; // x28
  const MethodInfo *v352; // x2
  int32_t *v353; // x8
  struct DeckServant_o *v354; // x8
  struct DeckServantData_array *v355; // x8
  __int64 v356; // x8
  int32_t v357; // w19
  const MethodInfo *v358; // x1
  __int64 v359; // x0
  __int64 v360; // x0
  __int64 v361; // x0
  __int64 v362; // x0
  __int64 v363; // x0
  __int64 v364; // x0
  int32_t initPos; // [xsp+8h] [xbp-168h]
  bool *v366; // [xsp+18h] [xbp-158h]
  int32_t v367; // [xsp+20h] [xbp-150h]
  int v368; // [xsp+2Ch] [xbp-144h]
  _BOOL4 v369; // [xsp+2Ch] [xbp-144h]
  int32_t v370; // [xsp+3Ch] [xbp-134h]
  int v371; // [xsp+40h] [xbp-130h]
  int32_t v372; // [xsp+44h] [xbp-12Ch]
  int v373; // [xsp+48h] [xbp-128h]
  bool *v374; // [xsp+48h] [xbp-128h]
  int v375; // [xsp+48h] [xbp-128h]
  int32_t FollowerIndex; // [xsp+54h] [xbp-11Ch]
  PartyListViewItem_o *v377; // [xsp+58h] [xbp-118h]
  System_Int64_array *equipIdLista; // [xsp+60h] [xbp-110h]
  int equipIdList; // [xsp+60h] [xbp-110h]
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

  if ( (byte_42B3C98 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_BasicHelper_Any_FollowerInfo___);
    sub_B52984(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_FollowerInfo___);
    sub_B52984(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__);
    sub_B52984(&FollowerInfo___TypeInfo);
    sub_B52984(&Method_System_Func_FollowerInfo__bool___ctor__);
    sub_B52984(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
    sub_B52984(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem___TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&Method_PartyListViewItem___c__DisplayClass19_0___ctor_b__0__);
    sub_B52984(&PartyListViewItem___c__DisplayClass19_0_TypeInfo);
    sub_B52984(&Method_PartyListViewItem___c__DisplayClass19_1___ctor_b__1__);
    sub_B52984(&PartyListViewItem___c__DisplayClass19_1_TypeInfo);
    sub_B52984(&Method_PartyListViewItem___c__DisplayClass19_2___ctor_b__2__);
    sub_B52984(&PartyListViewItem___c__DisplayClass19_2_TypeInfo);
    sub_B52984(&Method_PartyListViewItem___c__DisplayClass19_3___ctor_b__3__);
    sub_B52984(&PartyListViewItem___c__DisplayClass19_3_TypeInfo);
    sub_B52984(&UserServantEntity___TypeInfo);
    byte_42B3C98 = 1;
  }
  memset(&v401, 0, sizeof(v401));
  v400 = 0LL;
  v399 = 0;
  v398 = 0LL;
  v397 = 0;
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !deck )
    goto LABEL_465;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_465;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v35) )
  {
    Member = (__int64)deck->fields.deckInfo;
    if ( !Member )
      goto LABEL_465;
    DeckServant__ResetInitPos((DeckServant_o *)Member, 0LL);
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(deck, 0LL);
  userServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_465;
  followerInfo = follower;
  if ( *(int *)(Member + 48) < 1 )
  {
    v393 = 0;
    v388 = 0LL;
    v371 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_465;
    v38 = *(PartyListViewItem_o **)(Member + 72);
    v371 = 0;
    v393 = v38 != 0LL;
    v388 = v38;
    if ( follower && v38 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_465;
      if ( !v388 )
        goto LABEL_465;
      v371 = *(_DWORD *)(Member + 48);
      Member = (__int64)PartyListViewItem__GetMember(v388, v371 - 1, v39);
      if ( !Member )
        goto LABEL_465;
      v40 = *(_DWORD *)(Member + 340);
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_465;
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
    goto LABEL_465;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_465;
  if ( !Member )
    goto LABEL_465;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Member,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0LL);
  v383 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v383,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  if ( !QuestFollowerList )
    goto LABEL_465;
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
        goto LABEL_465;
      if ( !v34->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v34->fields.isFixedNpc) )
      {
        Member = (__int64)v383;
        if ( !v383 )
          goto LABEL_465;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v383,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_FollowerInfo__Add__);
        v44 = npcFollowerInfoList;
      }
      max_length = v44->max_length;
      if ( (int)++v45 >= max_length )
        goto LABEL_52;
    }
LABEL_472:
    v359 = sub_B52A88(Member);
    sub_B52A28(v359, 0LL);
  }
LABEL_52:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v383,
                    v42);
  questRestrictionInfoa = questRestrictionInfo;
  v377 = this;
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
      goto LABEL_465;
    size = v383->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_465;
    v48 = slotInfos->max_length;
    if ( v48 >= 1 )
    {
      size = 0;
      v49 = 0;
      while ( v49 < v48 )
      {
        v50 = slotInfos->m_Items[v49];
        if ( !v50 )
          goto LABEL_465;
        if ( v50->fields.slotType == 1 )
          size += v50->fields.isMoved;
        if ( (int)++v49 >= v48 )
          goto LABEL_67;
      }
      goto LABEL_472;
    }
    size = 0;
  }
LABEL_67:
  v51 = deck->fields.deckInfo;
  v385 = NpcServantFollowerIds;
  if ( !v51 )
    goto LABEL_465;
  v52 = 0;
  v53 = 0;
  v54 = 4LL;
  while ( 1 )
  {
    svts = v51->fields.svts;
    if ( !svts )
      goto LABEL_465;
    v56 = v54 - 4;
    if ( (int)v54 - 4 >= (signed int)svts->max_length )
      break;
    v57 = (PartyListViewItem___c__DisplayClass19_0_o *)sub_B52A54(PartyListViewItem___c__DisplayClass19_0_TypeInfo);
    PartyListViewItem___c__DisplayClass19_0___ctor(v57, 0LL);
    v58 = deck->fields.deckInfo;
    if ( v58 )
    {
      v59 = v58->fields.svts;
      if ( v59 )
      {
        if ( v56 >= v59->max_length )
          goto LABEL_472;
        v60 = *((_QWORD *)&v59->obj.klass + v54);
        if ( v60 )
        {
          if ( v57 )
          {
            v61 = *(_QWORD *)(v60 + 24);
            v57->fields.npcSvtId = *(_QWORD *)(v60 + 48);
            v62 = deck->fields.deckInfo;
            if ( v62 )
            {
              v63 = v62->fields.svts;
              if ( v63 )
              {
                if ( v56 >= v63->max_length )
                  goto LABEL_472;
                v64 = *((_QWORD *)&v63->obj.klass + v54);
                if ( v64 )
                {
                  Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(
                             questRestrictionInfo,
                             *(_DWORD *)(v64 + 60),
                             0LL);
                  if ( (int)v56 >= DeckMemberMax && (v61 || v57->fields.npcSvtId) )
                    v52 = 1;
                  if ( !(Member & 1 | (v57->fields.npcSvtId == 0)) )
                  {
                    v65 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_FollowerInfo__bool__TypeInfo);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      v65,
                      (Il2CppObject *)v57,
                      Method_PartyListViewItem___c__DisplayClass19_0___ctor_b__0__,
                      (const MethodInfo_2BC90BC *)Method_System_Func_FollowerInfo__bool___ctor__);
                    Member = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                               (System_Collections_Generic_List_T__o *)v383,
                               (System_Func_T__bool__o *)v65,
                               (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_FollowerInfo___);
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
    goto LABEL_465;
  }
  if ( ((v53 == size) & ~v52) != 0 )
  {
    this = v377;
    NpcServantFollowerIds = v385;
    goto LABEL_132;
  }
  this = v377;
  v66 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v66 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_B5299C(
                                                  long___TypeInfo,
                                                  (unsigned int)v66->static_fields->DeckMemberMax);
  Member = (__int64)v383;
  if ( !v383 )
    goto LABEL_465;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v396,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v383,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v401 = v396;
  while ( 1 )
  {
    v72 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v401,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v72 )
      break;
    if ( !v401.fields.current )
      sub_B52A5C(v72, v73);
    monitor = (Il2CppClass *)v401.fields.current[4].monitor;
    if ( monitor )
    {
      klass_low = SLODWORD(v401.fields.current[5].klass);
      if ( (int)klass_low >= 1 )
      {
        if ( !NpcServantFollowerIds )
          sub_B52A5C(v72, v73);
        if ( (unsigned int)klass_low >= NpcServantFollowerIds->max_length )
        {
          v361 = sub_B52A88(v72);
          sub_B52A28(v361, 0LL);
        }
        v69 = &NpcServantFollowerIds->obj.klass + klass_low;
        goto LABEL_104;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(v377, NpcServantFollowerIds, v74);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_B52A5C(NpcDeployIdx, v71);
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
        {
          v364 = sub_B52A88(NpcDeployIdx);
          sub_B52A28(v364, 0LL);
        }
        v69 = &NpcServantFollowerIds->obj.klass + (int)NpcDeployIdx;
LABEL_104:
        v69[4] = monitor;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v401,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v75 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v75 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_B5299C(
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
      goto LABEL_465;
    v80 = v79->fields.svts;
    if ( !v80 )
      goto LABEL_465;
    if ( i >= v80->max_length )
      goto LABEL_472;
    v81 = v80->m_Items[i];
    if ( !v81 )
      goto LABEL_465;
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
            goto LABEL_465;
          v90 = (System_Int32_array **)Member;
          if ( Member )
          {
            Member = sub_B52A44(Member, userServantList->obj.klass->_1.element_class);
            if ( !Member )
            {
LABEL_473:
              v360 = sub_B52A7C(Member);
              sub_B52A28(v360, 0LL);
            }
          }
          if ( v83 >= userServantList->max_length )
            goto LABEL_472;
          v91 = &userServantList->obj.klass + (int)v83;
          v91[4] = (Il2CppClass *)v90;
          sub_B52920((BattleServantConfConponent_o *)(v91 + 4), v90, v84, v85, v86, v87, v88, v89);
        }
      }
    }
  }
  if ( FollowerIndex < 1 )
    goto LABEL_132;
  v92 = isNew;
  if ( !questRestrictionInfo->fields.isNotTransitionSupportList && !questRestrictionInfo->fields.isNpcOnlyBattle )
    FollowerIndex = PartyListViewItem__GetSupportInitIndex(
                      v377,
                      (System_Collections_Generic_List_FollowerInfo__o *)v383,
                      v76);
LABEL_133:
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_465;
  if ( !*(_QWORD *)(Member + 24) )
  {
    v372 = followerDeckId;
    v370 = followerClassId;
    goto LABEL_146;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member
    || (followerInfo = *(FollowerInfo_o **)(Member + 24),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (v370 = *(_DWORD *)(Member + 32),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_465:
    sub_B52A5C(Member, v34);
  }
  v372 = *(_DWORD *)(Member + 36);
LABEL_146:
  v93 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v93 = BalanceConfig_TypeInfo;
  }
  v94 = (struct PartyOrganizationListViewItem_array *)sub_B5299C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v93->static_fields->DeckMemberMax);
  this->fields.memberList = v94;
  sub_B52920(
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
    v368 = -1;
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
          goto LABEL_467;
        v113 = (PartyListViewItem___c__DisplayClass19_1_o *)sub_B52A54(PartyListViewItem___c__DisplayClass19_1_TypeInfo);
        PartyListViewItem___c__DisplayClass19_1___ctor(v113, 0LL);
        if ( v393 )
        {
          Member = (__int64)v388;
          if ( !v388 )
            goto LABEL_465;
          Member = (__int64)PartyListViewItem__GetMember(v388, v101, v114);
          if ( !Member )
            goto LABEL_465;
          v115 = (int32_t *)(Member + 340);
        }
        else
        {
          v116 = deck->fields.deckInfo;
          if ( !v116 )
            goto LABEL_465;
          v117 = v116->fields.svts;
          if ( !v117 )
            goto LABEL_465;
          if ( v101 >= v117->max_length )
            goto LABEL_472;
          v118 = *(__int64 *)((char *)&v117->obj.klass + j);
          if ( !v118 )
            goto LABEL_465;
          v115 = (int32_t *)(v118 + 60);
        }
        v119 = *v115;
        if ( (__int64)v101 < DeckMemberMax )
          break;
        v104 = (unsigned int *)*p_memberList;
        v105 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_31272016(v105, v101, 0, setupInfo, questRestrictionInfo, 1, v119, 0LL);
        if ( !v104 )
          goto LABEL_465;
        if ( v105 )
        {
          Member = sub_B52A44(v105, *(_QWORD *)(*(_QWORD *)v104 + 64LL));
          if ( !Member )
            goto LABEL_473;
        }
        if ( v101 >= v104[6] )
          goto LABEL_472;
        *(_QWORD *)((char *)v104 + j) = v105;
        sub_B52920(
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
        goto LABEL_465;
      v113->fields.chkIdx = v101 + 1;
      v400 = 0LL;
      v399 = 0;
      Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(questRestrictionInfoa, v119, 0LL);
      v121 = 0;
      v373 = Member;
      if ( (Member & 1) != 0 )
      {
        if ( !v386 )
          goto LABEL_465;
        if ( v101 >= v386->max_length )
          goto LABEL_472;
        v122 = *(int64_t *)((char *)&v386->obj.klass + j);
        v121 = v122 >= 1
            && v113->fields.chkIdx != v371
            && PartyListViewItem__SetNpcFollowerInfo(this, &v400, &v399, npcFollowerInfoList, v122, v119, v120);
      }
      v123 = p_isNpcEditablePos;
      v124 = v121;
      v125 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfoa, 0LL)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfoa, v119, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_465;
      Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v119, 0LL);
      if ( !Member || ((v373 ^ 1) & 1) != 0 )
      {
        if ( v124 || v113->fields.chkIdx == FollowerIndex )
        {
          v140 = v400;
          v141 = v123;
          v142 = (unsigned int *)*p_memberList;
          if ( v400 )
          {
            v143 = v399;
            v144 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_31237364(
              v144,
              v101,
              v140,
              v143,
              setupInfo,
              questRestrictionInfoa,
              0LL,
              0,
              v372,
              v119,
              0LL);
            v139 = v101 + 1;
            if ( !v142 )
              goto LABEL_465;
          }
          else
          {
            v151 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
            v139 = v101 + 1;
            v144 = v151;
            if ( followerInfo )
              PartyOrganizationListViewItem___ctor_31237364(
                v151,
                v101,
                followerInfo,
                v370,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                0,
                v372,
                v119,
                0LL);
            else
              PartyOrganizationListViewItem___ctor_31272016(
                v151,
                v101,
                1,
                setupInfo,
                questRestrictionInfoa,
                1,
                v119,
                0LL);
            if ( !v142 )
              goto LABEL_465;
          }
          if ( v144 )
          {
            Member = sub_B52A44(v144, *(_QWORD *)(*(_QWORD *)v142 + 64LL));
            if ( !Member )
              goto LABEL_473;
          }
          if ( v101 >= v142[6] )
            goto LABEL_472;
          *(_QWORD *)((char *)v142 + j) = v144;
          sub_B52920(
            (BattleServantConfConponent_o *)((char *)v142 + j),
            (System_Int32_array **)v144,
            v145,
            v146,
            v147,
            v148,
            v149,
            v150);
          p_isNpcEditablePos = v141;
        }
        else if ( v125 )
        {
          v152 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_FollowerInfo__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v152,
            (Il2CppObject *)v113,
            Method_PartyListViewItem___c__DisplayClass19_1___ctor_b__1__,
            (const MethodInfo_2BC90BC *)Method_System_Func_FollowerInfo__bool___ctor__);
          v153 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v383,
                   (System_Func_TSource__bool__o *)v152,
                   (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v154 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B52A44(v153, FollowerInfo___TypeInfo);
          if ( !v154 )
            v154 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                          v153,
                                                                          (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          Member = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     v154,
                     (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          v366 = v123;
          if ( (Member & 1) != 0 )
          {
            Member = (__int64)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                v154,
                                0,
                                (const MethodInfo_1B60EC8 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v139 = v101 + 1;
            v155 = (FollowerInfo_o *)Member;
            v156 = v368;
            v157 = (unsigned int *)*p_memberList;
            if ( Member )
              goto LABEL_211;
          }
          else
          {
            if ( !v383 )
              goto LABEL_465;
            v181 = v383->fields._size;
            if ( v181 >= 1 )
            {
              v156 = 0;
              while ( 1 )
              {
                if ( v181 <= v156 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                v155 = (FollowerInfo_o *)v383->fields._items->m_Items[v156];
                if ( !v155 || !v386 )
                  goto LABEL_465;
                if ( v101 >= v386->max_length )
                  goto LABEL_472;
                if ( (Il2CppClass *)v155->fields.npcFollowerSvtId != *(Il2CppClass **)((char *)&v386->obj.klass + j) )
                {
                  if ( v383->fields._size <= v156 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                  if ( v368 < (int)v156 && v155->fields.npcInitIdx <= 0 )
                    break;
                }
                ++v156;
                v181 = v383->fields._size;
                if ( (int)v156 >= v181 )
                  goto LABEL_260;
              }
              v139 = v101 + 1;
              if ( v383->fields._size <= v156 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              v157 = (unsigned int *)*p_memberList;
LABEL_211:
              userSvtLeaderHash = v155->fields.userSvtLeaderHash;
              if ( !userSvtLeaderHash )
                goto LABEL_465;
              if ( !userSvtLeaderHash->max_length )
                goto LABEL_472;
              v159 = userSvtLeaderHash->m_Items[0];
              if ( !v159 )
                goto LABEL_465;
              classId = v159->fields.classId;
              v161 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_31237364(
                v161,
                v101,
                v155,
                classId,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                1,
                v372,
                v119,
                0LL);
              if ( !v157 )
                goto LABEL_465;
              if ( v161 )
              {
                Member = sub_B52A44(v161, *(_QWORD *)(*(_QWORD *)v157 + 64LL));
                if ( !Member )
                  goto LABEL_473;
              }
              if ( v101 >= v157[6] )
                goto LABEL_472;
              *(_QWORD *)((char *)v157 + j) = v161;
              sub_B52920(
                (BattleServantConfConponent_o *)((char *)v157 + j),
                (System_Int32_array **)v161,
                v162,
                v163,
                v164,
                v165,
                v166,
                v167);
              this = v377;
              v368 = v156;
LABEL_306:
              p_isNpcEditablePos = v366;
              goto LABEL_242;
            }
LABEL_260:
            v139 = v101 + 1;
            v157 = (unsigned int *)*p_memberList;
          }
          v182 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_31272016(v182, v101, 0, setupInfo, questRestrictionInfoa, 0, v119, 0LL);
          if ( !v157 )
            goto LABEL_465;
          p_isNpcEditablePos = v366;
          if ( v182 )
          {
            Member = sub_B52A44(v182, *(_QWORD *)(*(_QWORD *)v157 + 64LL));
            if ( !Member )
              goto LABEL_473;
          }
          if ( v101 >= v157[6] )
            goto LABEL_472;
          *(_QWORD *)((char *)v157 + j) = v182;
          sub_B52920(
            (BattleServantConfConponent_o *)((char *)v157 + j),
            (System_Int32_array **)v182,
            v183,
            v184,
            v185,
            v186,
            v187,
            v188);
          this = v377;
        }
        else
        {
          if ( !v386 )
            goto LABEL_465;
          if ( v101 >= v386->max_length )
            goto LABEL_472;
          p_isNpcEditablePos = v123;
          if ( *(Il2CppClass **)((char *)&v386->obj.klass + j) )
          {
            v366 = v123;
            Member = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v383,
                       (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
            v139 = v101 + 1;
            if ( (int)Member < 1 )
            {
LABEL_231:
              v171 = (unsigned int *)*p_memberList;
              v172 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_31272016(
                v172,
                v101,
                0,
                setupInfo,
                questRestrictionInfoa,
                1,
                v119,
                0LL);
              if ( !v171 )
                goto LABEL_465;
              if ( v172 )
              {
                Member = sub_B52A44(v172, *(_QWORD *)(*(_QWORD *)v171 + 64LL));
                if ( !Member )
                  goto LABEL_473;
              }
              if ( v101 >= v171[6] )
                goto LABEL_472;
              *(_QWORD *)((char *)v171 + j) = v172;
              sub_B52920(
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
                goto LABEL_465;
              v168 = v383;
              v169 = 4LL;
              while ( 1 )
              {
                if ( v168->fields._size <= (unsigned int)(v169 - 4) )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                v170 = (FollowerInfo_o *)*((_QWORD *)&v383->fields._items->obj.klass + v169);
                if ( !v170 )
                  goto LABEL_465;
                if ( v101 >= v386->max_length )
                  goto LABEL_472;
                if ( (Il2CppClass *)v170->fields.npcFollowerSvtId == *(Il2CppClass **)((char *)&v386->obj.klass + j) )
                  break;
                v168 = v383;
                Member = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v383,
                           (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
                if ( (int)++v169 - 4 >= (int)Member )
                  goto LABEL_231;
              }
              if ( v383->fields._size <= (unsigned int)(v169 - 4) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              v203 = (unsigned int *)*p_memberList;
              v220 = v170->fields.userSvtLeaderHash;
              if ( !v220 )
                goto LABEL_465;
              if ( !v220->max_length )
                goto LABEL_472;
              v221 = v220->m_Items[0];
              if ( !v221 )
                goto LABEL_465;
              v222 = v221->fields.classId;
              v223 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_31237364(
                v223,
                v101,
                v170,
                v222,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                1,
                v372,
                v119,
                0LL);
              if ( !v203 )
                goto LABEL_465;
              if ( v223 )
              {
                Member = sub_B52A44(v223, *(_QWORD *)(*(_QWORD *)v203 + 64LL));
                if ( !Member )
                  goto LABEL_473;
              }
              if ( v101 >= v203[6] )
                goto LABEL_472;
              *(_QWORD *)((char *)v203 + j) = v223;
              sub_B52920(
                (BattleServantConfConponent_o *)((char *)v203 + j),
                (System_Int32_array **)v223,
                v224,
                v225,
                v226,
                v227,
                v228,
                v229);
            }
            goto LABEL_306;
          }
          if ( (v373 & 1) != 0 )
          {
            v189 = userServantList;
            if ( !userServantList )
              goto LABEL_465;
            v139 = v101 + 1;
            if ( v101 >= userServantList->max_length )
              goto LABEL_472;
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
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v402, 0LL);
              if ( v101 >= userServantList->max_length )
                goto LABEL_472;
              v193 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + j);
              if ( !v193 )
                goto LABEL_465;
              v194 = Member;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v193[6], 0LL);
              if ( v101 >= userServantList->max_length )
                goto LABEL_472;
              v195 = Member;
              Member = *(__int64 *)((char *)&userServantList->obj.klass + j);
              if ( !Member )
                goto LABEL_465;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
              Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         questRestrictionInfoa,
                         v194,
                         v195,
                         DispLimitCount,
                         v119,
                         0,
                         0LL);
              v189 = userServantList;
              if ( (Member & 1) != 0 )
              {
                if ( v101 >= userServantList->max_length )
                  goto LABEL_472;
                *(Il2CppClass **)((char *)&userServantList->obj.klass + j) = 0LL;
                sub_B52920(
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
            v139 = v101 + 1;
            if ( !userServantList )
              goto LABEL_465;
          }
          if ( v101 >= v189->max_length )
            goto LABEL_472;
          v204 = *(UserServantEntity_o **)((char *)&v189->obj.klass + j);
          v205 = (unsigned int *)*p_memberList;
          if ( v204 )
          {
            equipIdLista = UserEventDeckEntity__GetEquipList(deck, v101, 0LL);
            v206 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_31263776(
              v206,
              v101,
              v204,
              equipIdLista,
              setupInfo,
              questRestrictionInfoa,
              0LL,
              v119,
              0LL);
            if ( !v205 )
              goto LABEL_465;
            if ( v206 )
            {
              Member = sub_B52A44(v206, *(_QWORD *)(*(_QWORD *)v205 + 64LL));
              if ( !Member )
                goto LABEL_473;
            }
            if ( v101 >= v205[6] )
              goto LABEL_472;
            *(_QWORD *)((char *)v205 + j) = v206;
            sub_B52920(
              (BattleServantConfConponent_o *)((char *)v205 + j),
              (System_Int32_array **)v206,
              v207,
              v208,
              v209,
              v210,
              v211,
              v212);
          }
          else
          {
            v213 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_31272016(v213, v101, 0, setupInfo, questRestrictionInfoa, 1, v119, 0LL);
            if ( !v205 )
              goto LABEL_465;
            if ( v213 )
            {
              Member = sub_B52A44(v213, *(_QWORD *)(*(_QWORD *)v205 + 64LL));
              if ( !Member )
                goto LABEL_473;
            }
            if ( v101 >= v205[6] )
              goto LABEL_472;
            *(_QWORD *)((char *)v205 + j) = v213;
            sub_B52920(
              (BattleServantConfConponent_o *)((char *)v205 + j),
              (System_Int32_array **)v213,
              v214,
              v215,
              v216,
              v217,
              v218,
              v219);
          }
        }
      }
      else
      {
        v126 = (FollowerInfo_o *)Member;
        IsNpc = FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL);
        v128 = v370;
        if ( IsNpc )
          v128 = 0;
        v367 = v128;
        v129 = FollowerInfo__get_IsNpc(v126, 0LL);
        v130 = (unsigned int *)*p_memberList;
        if ( v129 )
          v131 = 0;
        else
          v131 = v372;
        v132 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_31237364(
          v132,
          v101,
          v126,
          v367,
          setupInfo,
          questRestrictionInfoa,
          friendPointCampaignEntityList,
          0,
          v131,
          v119,
          0LL);
        if ( !v130 )
          goto LABEL_465;
        p_isNpcEditablePos = v123;
        if ( v132 )
        {
          Member = sub_B52A44(v132, *(_QWORD *)(*(_QWORD *)v130 + 64LL));
          if ( !Member )
            goto LABEL_473;
        }
        if ( v101 >= v130[6] )
          goto LABEL_472;
        v139 = v101 + 1;
        *(_QWORD *)((char *)v130 + j) = v132;
        sub_B52920(
          (BattleServantConfConponent_o *)((char *)v130 + j),
          (System_Int32_array **)v132,
          v133,
          v134,
          v135,
          v136,
          v137,
          v138);
      }
LABEL_242:
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_465;
      if ( v101 >= memberList->max_length )
        goto LABEL_472;
      Member = *(__int64 *)((char *)&memberList->obj.klass + j);
      if ( !Member )
        goto LABEL_465;
      cost = this->fields.cost;
      v101 = v139;
      questRestrictionInfo = questRestrictionInfoa;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Member, 0LL)
                        + cost;
    }
  }
  equipIdList = questRestrictionInfo->fields.myServantNumMax
              + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( v92 )
  {
    p_max_length = &userServantList->max_length;
    goto LABEL_327;
  }
  if ( !userServantList )
    goto LABEL_465;
  p_max_length = &userServantList->max_length;
  if ( (int)userServantList->max_length >= 1 )
  {
    v374 = isBaseModify;
    v230 = 0LL;
    v231 = 0;
    v232 = 0LL;
    m_Items = userServantList->m_Items;
    while ( 1 )
    {
      v234 = (PartyListViewItem___c__DisplayClass19_2_o *)sub_B52A54(PartyListViewItem___c__DisplayClass19_2_TypeInfo);
      PartyListViewItem___c__DisplayClass19_2___ctor(v234, 0LL);
      if ( !v234 )
        goto LABEL_465;
      v235 = v232 + 1;
      v234->fields.chkIdx = v232 + 1;
      if ( v232 >= *p_max_length )
        goto LABEL_472;
      if ( m_Items[v232] )
        ++v231;
      v236 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v236,
        (Il2CppObject *)v234,
        Method_PartyListViewItem___c__DisplayClass19_2___ctor_b__2__,
        (const MethodInfo_2BC90BC *)Method_System_Func_FollowerInfo__bool___ctor__);
      Member = (__int64)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                          (System_Func_TSource__bool__o *)v236,
                          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v243 = *p_max_length;
      if ( v232 >= v243 )
        goto LABEL_472;
      if ( !m_Items[v232] )
        goto LABEL_325;
      if ( v234->fields.chkIdx > DeckMemberMax )
        goto LABEL_323;
      Member = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Member,
                 (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v231 > equipIdList || (Member & 1) != 0 )
        break;
LABEL_325:
      ++v230;
      ++v232;
      if ( v235 >= (int)*p_max_length )
      {
        isBaseModify = v374;
        goto LABEL_327;
      }
    }
    v243 = *p_max_length;
LABEL_323:
    if ( v232 >= v243 )
      goto LABEL_472;
    m_Items[v232] = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&m_Items[v230], 0LL, v237, v238, v239, v240, v241, v242);
    goto LABEL_325;
  }
LABEL_327:
  v244 = 0LL;
  v375 = 0;
  v245 = DeckMemberMax;
LABEL_444:
  v340 = 8 * v244 + 32;
  for ( k = v244; ; ++k )
  {
    v350 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v350 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v350->static_fields->DeckMemberMax )
      break;
    v351 = (PartyListViewItem___c__DisplayClass19_3_o *)sub_B52A54(PartyListViewItem___c__DisplayClass19_3_TypeInfo);
    PartyListViewItem___c__DisplayClass19_3___ctor(v351, 0LL);
    if ( v393 )
    {
      Member = (__int64)v388;
      if ( !v388 )
        goto LABEL_465;
      Member = (__int64)PartyListViewItem__GetMember(v388, k, v352);
      if ( !Member )
        goto LABEL_465;
      v353 = (int32_t *)(Member + 340);
    }
    else
    {
      v354 = deck->fields.deckInfo;
      if ( !v354 )
        goto LABEL_465;
      v355 = v354->fields.svts;
      if ( !v355 )
        goto LABEL_465;
      if ( k >= v355->max_length )
        goto LABEL_472;
      v356 = *(__int64 *)((char *)&v355->obj.klass + v340);
      if ( !v356 )
        goto LABEL_465;
      v353 = (int32_t *)(v356 + 60);
    }
    v357 = *v353;
    if ( (__int64)k < v245 )
    {
      if ( !v351 )
        goto LABEL_465;
      v244 = k + 1;
      v351->fields.chkIdx = k + 1;
      v398 = 0LL;
      v397 = 0;
      Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(questRestrictionInfo, v357, 0LL);
      v247 = Member;
      if ( (Member & 1) == 0 )
        goto LABEL_336;
      v248 = deck->fields.deckInfo;
      if ( !v248 )
        goto LABEL_465;
      v249 = v248->fields.svts;
      if ( !v249 )
        goto LABEL_465;
      if ( k >= v249->max_length )
        goto LABEL_472;
      v250 = *(__int64 *)((char *)&v249->obj.klass + v340);
      if ( !v250 )
        goto LABEL_465;
      v251 = *(_QWORD *)(v250 + 48);
      if ( v251 >= 1 )
      {
        if ( v351->fields.chkIdx == v371 )
        {
          v369 = 0;
          v391 = 1;
        }
        else
        {
          v391 = PartyListViewItem__SetNpcFollowerInfo(v377, &v398, &v397, npcFollowerInfoList, v251, v357, v246);
          v369 = 0;
        }
        goto LABEL_341;
      }
LABEL_336:
      if ( followerInfo && !questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v391 = 0;
        v369 = v351->fields.chkIdx == FollowerIndex;
      }
      else
      {
        v369 = 0;
        v391 = 0;
      }
LABEL_341:
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_465;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v357, 0LL);
      if ( NpcFollowerInfo && ((v247 ^ 1) & 1) == 0 )
      {
        v253 = NpcFollowerInfo;
        v254 = isBaseModify;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v255 = 0;
        else
          v255 = v370;
        v256 = FollowerInfo__get_IsNpc(v253, 0LL);
        v257 = (unsigned int *)*p_memberList;
        if ( v256 )
          v258 = 0;
        else
          v258 = v372;
        v259 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_31237364(
          v259,
          k,
          v253,
          v255,
          setupInfo,
          questRestrictionInfoa,
          friendPointCampaignEntityList,
          0,
          v258,
          v357,
          0LL);
        if ( !v257 )
          goto LABEL_465;
        if ( v259 )
        {
          Member = sub_B52A44(v259, *(_QWORD *)(*(_QWORD *)v257 + 64LL));
          if ( !Member )
            goto LABEL_473;
        }
        if ( k >= v257[6] )
          goto LABEL_472;
        isBaseModify = v254;
        *(_QWORD *)((char *)v257 + v340) = v259;
        sub_B52920(
          (BattleServantConfConponent_o *)((char *)v257 + v340),
          (System_Int32_array **)v259,
          v260,
          v261,
          v262,
          v263,
          v264,
          v265);
        questRestrictionInfo = questRestrictionInfoa;
        v266 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_465;
        v244 = k + 1;
        if ( k >= v266->max_length )
          goto LABEL_472;
        v267 = deck->fields.deckInfo;
        if ( !v267 )
          goto LABEL_465;
        v268 = v267->fields.svts;
        if ( !v268 )
          goto LABEL_465;
        if ( k >= v268->max_length )
          goto LABEL_472;
        v269 = *(__int64 *)((char *)&v268->obj.klass + v340);
        if ( !v269 )
          goto LABEL_465;
        v270 = *(__int64 *)((char *)&v266->obj.klass + v340);
        if ( !v270 )
          goto LABEL_465;
        *(_DWORD *)(v270 + 340) = *(_DWORD *)(v269 + 60);
        ++v375;
        goto LABEL_444;
      }
      if ( v391 || v351->fields.chkIdx == FollowerIndex )
      {
        v271 = v398;
        v272 = (unsigned int *)*p_memberList;
        if ( v398 )
        {
          v273 = v397;
          initPos = v357;
          v274 = (unsigned int *)*p_memberList;
          v275 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_31237364(
            v275,
            k,
            v271,
            v273,
            setupInfo,
            questRestrictionInfo,
            0LL,
            !v369,
            v372,
            initPos,
            0LL);
          if ( !v274 )
            goto LABEL_479;
          if ( v275 )
          {
            IsRestrictionServantIndividuality = sub_B52A44(v275, *(_QWORD *)(*(_QWORD *)v274 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_477;
          }
          if ( k >= v274[6] )
            goto LABEL_478;
          v283 = (BattleServantConfConponent_o *)((char *)v274 + v340);
        }
        else
        {
          v284 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
          v275 = v284;
          if ( followerInfo )
            PartyOrganizationListViewItem___ctor_31237364(
              v284,
              k,
              followerInfo,
              v370,
              setupInfo,
              questRestrictionInfo,
              0LL,
              !v369,
              v372,
              v357,
              0LL);
          else
            PartyOrganizationListViewItem___ctor_31272016(v284, k, 1, setupInfo, questRestrictionInfo, 1, v357, 0LL);
          if ( !v272 )
            goto LABEL_479;
          if ( v275 )
          {
            IsRestrictionServantIndividuality = sub_B52A44(v275, *(_QWORD *)(*(_QWORD *)v272 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_477;
          }
          if ( k >= v272[6] )
            goto LABEL_478;
          v283 = (BattleServantConfConponent_o *)((char *)v272 + v340);
        }
        v283->klass = (BattleServantConfConponent_c *)v275;
        sub_B52920(v283, (System_Int32_array **)v275, v277, v278, v279, v280, v281, v282);
        v303 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_479;
        if ( k >= v303->max_length )
        {
LABEL_478:
          v363 = sub_B52A88(IsRestrictionServantIndividuality);
          sub_B52A28(v363, 0LL);
        }
        v304 = deck->fields.deckInfo;
        if ( !v304 )
          goto LABEL_479;
        v305 = v304->fields.svts;
        if ( !v305 )
          goto LABEL_479;
        if ( k >= v305->max_length )
          goto LABEL_478;
        v306 = *(__int64 *)((char *)&v305->obj.klass + v340);
        if ( !v306 || (v307 = *(__int64 *)((char *)&v303->obj.klass + v340)) == 0 )
LABEL_479:
          sub_B52A5C(IsRestrictionServantIndividuality, v34);
        *(_DWORD *)(v307 + 340) = *(_DWORD *)(v306 + 60);
        v375 += v369 || v391;
        goto LABEL_444;
      }
      v285 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v285,
        (Il2CppObject *)v351,
        Method_PartyListViewItem___c__DisplayClass19_3___ctor_b__3__,
        (const MethodInfo_2BC90BC *)Method_System_Func_FollowerInfo__bool___ctor__);
      v286 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v383,
               (System_Func_TSource__bool__o *)v285,
               (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v287 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B52A44(v286, FollowerInfo___TypeInfo);
      if ( !v287 )
        v287 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                      v286,
                                                                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      IsRestrictionServantIndividuality = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                            v287,
                                            (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v375 < equipIdList && (IsRestrictionServantIndividuality & 1) == 0 )
      {
        if ( (v247 & 1) != 0 )
        {
          if ( !userServantList )
            goto LABEL_479;
          v288 = p_max_length;
          if ( k >= *p_max_length )
            goto LABEL_478;
          v289 = *(__int64 *)((char *)&userServantList->obj.klass + v340);
          if ( v289 )
          {
            v291 = *(_QWORD *)(v289 + 80);
            v290 = *(_QWORD *)(v289 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v403.fields.currentCryptoKey = v291;
            *(_QWORD *)&v403.fields.fakeValue = v290;
            IsRestrictionServantIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                  v403,
                                                  0LL);
            if ( k >= *p_max_length )
              goto LABEL_478;
            v292 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + v340);
            if ( !v292 )
              goto LABEL_479;
            v293 = IsRestrictionServantIndividuality;
            IsRestrictionServantIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                  v292[6],
                                                  0LL);
            if ( k >= *p_max_length )
              goto LABEL_478;
            v294 = IsRestrictionServantIndividuality;
            IsRestrictionServantIndividuality = *(__int64 *)((char *)&userServantList->obj.klass + v340);
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_479;
            v295 = UserServantEntity__getDispLimitCount(
                     (UserServantEntity_o *)IsRestrictionServantIndividuality,
                     0,
                     0LL);
            IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                  questRestrictionInfo,
                                                  v293,
                                                  v294,
                                                  v295,
                                                  v357,
                                                  0,
                                                  0LL);
            v288 = p_max_length;
            if ( (IsRestrictionServantIndividuality & 1) != 0 )
            {
              if ( k >= *p_max_length )
                goto LABEL_478;
              *(Il2CppClass **)((char *)&userServantList->obj.klass + v340) = 0LL;
              sub_B52920(
                (BattleServantConfConponent_o *)((char *)userServantList + v340),
                0LL,
                v296,
                v297,
                v298,
                v299,
                v300,
                v301);
            }
          }
        }
        else
        {
          v288 = p_max_length;
          if ( !userServantList )
            goto LABEL_479;
        }
        if ( k >= *v288 )
          goto LABEL_478;
        v320 = *(UserServantEntity_o **)((char *)&userServantList->obj.klass + v340);
        v321 = (unsigned int *)*p_memberList;
        if ( v320 )
        {
          EquipList = UserEventDeckEntity__GetEquipList(deck, k, 0LL);
          v323 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_31263776(
            v323,
            k,
            v320,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            v357,
            0LL);
          if ( !v321 )
            goto LABEL_479;
        }
        else
        {
          v323 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_31272016(v323, k, 0, setupInfo, questRestrictionInfo, 1, v357, 0LL);
          if ( !v321 )
            goto LABEL_479;
        }
        if ( v323 )
        {
          IsRestrictionServantIndividuality = sub_B52A44(v323, *(_QWORD *)(*(_QWORD *)v321 + 64LL));
          if ( !IsRestrictionServantIndividuality )
          {
LABEL_477:
            v362 = sub_B52A7C(IsRestrictionServantIndividuality);
            sub_B52A28(v362, 0LL);
          }
        }
        if ( k >= v321[6] )
          goto LABEL_478;
        *(_QWORD *)((char *)v321 + v340) = v323;
        sub_B52920(
          (BattleServantConfConponent_o *)((char *)v321 + v340),
          (System_Int32_array **)v323,
          v324,
          v325,
          v326,
          v327,
          v328,
          v329);
        ++v375;
        v244 = k + 1;
        goto LABEL_440;
      }
      IsRestrictionServantIndividuality = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                            v287,
                                            (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( (IsRestrictionServantIndividuality & 1) != 0 )
      {
        IsRestrictionServantIndividuality = (__int64)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                                       v287,
                                                       0,
                                                       (const MethodInfo_1B60EC8 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        v302 = (FollowerInfo_o *)IsRestrictionServantIndividuality;
        goto LABEL_414;
      }
      if ( !v383 )
        goto LABEL_479;
      v308 = v383->fields._size;
      v309 = k - v375;
      if ( v308 <= (int)k - v375 )
      {
        v244 = k + 1;
        v330 = (unsigned int *)*p_memberList;
      }
      else
      {
        if ( v308 <= v309 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v302 = (FollowerInfo_o *)v383->fields._items->m_Items[v309];
        v244 = k + 1;
LABEL_414:
        v310 = (unsigned int *)*p_memberList;
        if ( v302 )
        {
          v311 = v302->fields.userSvtLeaderHash;
          if ( !v311 )
            goto LABEL_479;
          if ( !v311->max_length )
            goto LABEL_478;
          v312 = v311->m_Items[0];
          if ( !v312 )
            goto LABEL_479;
          v392 = v312->fields.classId;
          v313 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_31237364(
            v313,
            k,
            v302,
            v392,
            setupInfo,
            questRestrictionInfo,
            0LL,
            1,
            v372,
            v357,
            0LL);
          if ( !v310 )
            goto LABEL_479;
          if ( v313 )
          {
            IsRestrictionServantIndividuality = sub_B52A44(v313, *(_QWORD *)(*(_QWORD *)v310 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_477;
          }
          if ( k >= v310[6] )
            goto LABEL_478;
          *(_QWORD *)((char *)v310 + v340) = v313;
          sub_B52920(
            (BattleServantConfConponent_o *)((char *)v310 + v340),
            (System_Int32_array **)v313,
            v314,
            v315,
            v316,
            v317,
            v318,
            v319);
LABEL_440:
          v338 = v377->fields.memberList;
          if ( !v338 )
            goto LABEL_479;
          if ( k >= v338->max_length )
            goto LABEL_478;
          IsRestrictionServantIndividuality = *(__int64 *)((char *)&v338->obj.klass + v340);
          if ( !IsRestrictionServantIndividuality )
            goto LABEL_479;
          v339 = v377->fields.cost;
          v377->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                                (PartyOrganizationListViewItem_o *)IsRestrictionServantIndividuality,
                                0LL)
                            + v339;
          goto LABEL_444;
        }
        v330 = (unsigned int *)*p_memberList;
      }
      v331 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_31272016(v331, k, 0, setupInfo, questRestrictionInfo, 0, v357, 0LL);
      if ( !v330 )
        goto LABEL_479;
      if ( v331 )
      {
        IsRestrictionServantIndividuality = sub_B52A44(v331, *(_QWORD *)(*(_QWORD *)v330 + 64LL));
        if ( !IsRestrictionServantIndividuality )
          goto LABEL_477;
      }
      if ( k >= v330[6] )
        goto LABEL_478;
      *(_QWORD *)((char *)v330 + v340) = v331;
      sub_B52920(
        (BattleServantConfConponent_o *)((char *)v330 + v340),
        (System_Int32_array **)v331,
        v332,
        v333,
        v334,
        v335,
        v336,
        v337);
      goto LABEL_440;
    }
    v342 = (unsigned int *)*p_memberList;
    v343 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_31272016(v343, k, 0, setupInfo, questRestrictionInfo, 1, v357, 0LL);
    if ( !v342 )
      goto LABEL_465;
    if ( v343 )
    {
      Member = sub_B52A44(v343, *(_QWORD *)(*(_QWORD *)v342 + 64LL));
      if ( !Member )
        goto LABEL_473;
    }
    if ( k >= v342[6] )
      goto LABEL_472;
    *(_QWORD *)((char *)v342 + v340) = v343;
    sub_B52920(
      (BattleServantConfConponent_o *)((char *)v342 + v340),
      (System_Int32_array **)v343,
      v344,
      v345,
      v346,
      v347,
      v348,
      v349);
    v340 += 8LL;
  }
  this = v377;
  p_isNpcEditablePos = &questRestrictionInfo->fields.isNpcEditablePos;
LABEL_467:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v34);
  if ( (*p_isNpcEditablePos || !questRestrictionInfo->fields.isNpcOnlyBattle)
    && !PartyListViewItem__GetStartDeckCondition(this, v358) )
  {
    *isBaseModify = 1;
  }
}


void __fastcall PartyListViewItem___ctor_32260932(
        PartyListViewItem_o *this,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x28
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 Master_WarQuestSelectionMaster; // x0
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x23
  BalanceConfig_c *v29; // x8
  struct PartyOrganizationListViewItem_array *v30; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x24
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_int__o *v38; // x27
  int v39; // w8
  __int64 v40; // x28
  unsigned int v41; // w19
  __int64 v42; // x25
  struct System_Int32_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UserEventDeckEntity_o *v50; // x28
  int32_t v51; // w26
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct DeckServant_o *v53; // x8
  struct DeckServantData_array *svts; // x8
  __int64 v55; // x8
  int32_t v56; // w25
  UserServantEntity_o *v57; // x27
  struct PartyOrganizationListViewItem_array *v58; // x21
  __int128 v59; // q0
  int64_t v60; // x0
  System_Int64_array *EquipList_27455704; // x19
  PartyOrganizationListViewItem_o *v62; // x28
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  Il2CppClass **v69; // x0
  PartyOrganizationListViewItem_o *v70; // x27
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  Il2CppClass **v77; // x0
  struct PartyOrganizationListViewItem_array *v78; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v81; // x0
  __int64 v82; // x0
  int v83; // [xsp+14h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+50h] [xbp-70h]

  if ( (byte_42B3C99 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem___TypeInfo);
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    byte_42B3C99 = 1;
  }
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Master_WarQuestSelectionMaster = (__int64)deck;
  if ( !deck )
    goto LABEL_66;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_66;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, 0LL);
  v29 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  v30 = (struct PartyOrganizationListViewItem_array *)sub_B5299C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v29->static_fields->DeckMemberMax);
  this->fields.memberList = v30;
  p_memberList = &this->fields.memberList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.cost = 0;
  v38 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_66;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_66;
  Master_WarQuestSelectionMaster = (__int64)ViewWaveEnemyMaster__GetEntityListFromQuestId(
                                              (ViewWaveEnemyMaster_o *)Master_WarQuestSelectionMaster,
                                              (*p_questRestrictionInfo)->fields.questId,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_66;
  v39 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
  v40 = Master_WarQuestSelectionMaster;
  if ( v39 >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      if ( v41 >= v39 )
      {
LABEL_67:
        v81 = sub_B52A88(Master_WarQuestSelectionMaster);
        sub_B52A28(v81, 0LL);
      }
      v42 = *(_QWORD *)(v40 + 8LL * (int)v41 + 32);
      if ( !v42 )
        break;
      if ( *(_DWORD *)(v42 + 56) == index + 1 )
      {
        if ( !v38 )
          break;
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v38,
                                           *(_DWORD *)(v42 + 32),
                                           (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v38,
            *(_DWORD *)(v42 + 32),
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v39 = *(_DWORD *)(v40 + 24);
      if ( (int)++v41 >= v39 )
        goto LABEL_23;
    }
LABEL_66:
    sub_B52A5C(Master_WarQuestSelectionMaster, v25);
  }
LABEL_23:
  if ( !v38 )
    goto LABEL_66;
  v43 = System_Collections_Generic_List_int___ToArray(
          v38,
          (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v43;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.waveBattleEnemyClassIds,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = deck;
  Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
  }
  v51 = 0;
  v83 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 160LL) * index;
  while ( 1 )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_WarQuestSelectionMaster + 184);
    if ( v51 >= static_fields->DeckMemberMax )
      break;
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    if ( v51 >= static_fields->DeckMainMemberMax )
    {
      v56 = v51 + 1;
      if ( !UserServantList )
        goto LABEL_66;
    }
    else
    {
      v53 = v50->fields.deckInfo;
      if ( !v53 )
        goto LABEL_66;
      svts = v53->fields.svts;
      if ( !svts )
        goto LABEL_66;
      if ( v83 + v51 >= svts->max_length )
        goto LABEL_67;
      v55 = *((_QWORD *)&svts->m_Items[v83] + v51);
      if ( !v55 )
        goto LABEL_66;
      v56 = *(_DWORD *)(v55 + 60);
      if ( !UserServantList )
        goto LABEL_66;
    }
    if ( v51 >= UserServantList->max_length )
      goto LABEL_67;
    v57 = UserServantList->m_Items[v51];
    v58 = *p_memberList;
    if ( v57 )
    {
      v59 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
      *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v88.fields.fakeValue = v59;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v87 = v88;
      v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v87, 0LL);
      EquipList_27455704 = UserEventDeckEntity__GetEquipList_27455704(v50, v60, 0LL);
      v62 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_31263776(
        v62,
        v51,
        v57,
        EquipList_27455704,
        setupInfo,
        questRestrictionInfo,
        0LL,
        v56,
        0LL);
      if ( !v58 )
        goto LABEL_66;
      if ( v62 )
      {
        Master_WarQuestSelectionMaster = sub_B52A44(v62, v58->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_68;
      }
      if ( v51 >= v58->max_length )
        goto LABEL_67;
      v69 = &v58->obj.klass + v51;
      v69[4] = (Il2CppClass *)v62;
      sub_B52920((BattleServantConfConponent_o *)(v69 + 4), (System_Int32_array **)v62, v63, v64, v65, v66, v67, v68);
      v50 = deck;
    }
    else
    {
      v70 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_31272016(v70, v51, 0, setupInfo, questRestrictionInfo, 1, v56, 0LL);
      if ( !v58 )
        goto LABEL_66;
      if ( v70 )
      {
        Master_WarQuestSelectionMaster = sub_B52A44(v70, v58->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
        {
LABEL_68:
          v82 = sub_B52A7C(Master_WarQuestSelectionMaster);
          sub_B52A28(v82, 0LL);
        }
      }
      if ( v51 >= v58->max_length )
        goto LABEL_67;
      v77 = &v58->obj.klass + v51;
      v77[4] = (Il2CppClass *)v70;
      sub_B52920((BattleServantConfConponent_o *)(v77 + 4), (System_Int32_array **)v70, v71, v72, v73, v74, v75, v76);
    }
    v78 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_66;
    if ( v51 >= v78->max_length )
      goto LABEL_67;
    Master_WarQuestSelectionMaster = (__int64)v78->m_Items[v51];
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_66;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_WarQuestSelectionMaster,
      this->fields.waveBattleEnemyClassIds,
      0LL);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_66;
    if ( v51 >= memberList->max_length )
      goto LABEL_67;
    Master_WarQuestSelectionMaster = (__int64)memberList->m_Items[v51];
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_66;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_WarQuestSelectionMaster,
                          0LL)
                      + cost;
    ++v51;
    Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
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

  if ( (byte_42B3CAB & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CAB = 1;
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
    sub_B52A5C(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
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

  if ( (byte_42B3CA0 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42B3CA0 = 1;
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
    if ( v3 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.frameType + 156LL) )
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
        if ( (IsUseOldMaster->fields._SvtPoint_k__BackingField & 0x4000000) != 0
          && !*(_DWORD *)&IsUseOldMaster->fields.isMyServantOrNpcRestriction )
        {
          j_il2cpp_runtime_class_init_0(IsUseOldMaster);
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v14 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.frameType + 156LL) )
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
      if ( (IsUseOldMaster->fields._SvtPoint_k__BackingField & 0x4000000) != 0
        && !*(_DWORD *)&IsUseOldMaster->fields.isMyServantOrNpcRestriction )
      {
        j_il2cpp_runtime_class_init_0(IsUseOldMaster);
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( v23 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.frameType + 156LL) )
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
          if ( (signed int)j >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.frameType + 156LL) )
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
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2 = IsUseOldMaster->fields.sortValue2;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
                  if ( (IsUseOldMaster->fields._SvtPoint_k__BackingField & 0x4000000) != 0
                    && !*(_DWORD *)&IsUseOldMaster->fields.isMyServantOrNpcRestriction )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( v43 >= *(int *)(*(_QWORD *)&IsUseOldMaster->fields.frameType + 156LL) )
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
                  if ( (IsUseOldMaster->fields._SvtPoint_k__BackingField & 0x4000000) != 0
                    && !*(_DWORD *)&IsUseOldMaster->fields.isMyServantOrNpcRestriction )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)k >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.frameType + 156LL) )
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
        sub_B52A5C(IsUseOldMaster, method);
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
    v50 = sub_B52A88(IsUseOldMaster);
    sub_B52A28(v50, 0LL);
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
  sub_B52920(
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

  if ( (byte_42B3CA5 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CA5 = 1;
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
      v7 = sub_B52A88(v5);
      sub_B52A28(v7, 0LL);
    }
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_15:
      sub_B52A5C(v5, method);
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

  if ( (byte_42B3CA6 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CA6 = 1;
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
      v6 = sub_B52A88(v5);
      sub_B52A28(v6, 0LL);
    }
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_13:
      sub_B52A5C(v5, method);
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
    sub_B52A5C(this, *(_QWORD *)&num);
  }
  if ( v7->max_length <= num )
  {
LABEL_9:
    v9 = sub_B52A88(this);
    sub_B52A28(v9, 0LL);
  }
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void __fastcall PartyListViewItem__ClearMember_32264076(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  BalanceConfig_c *v5; // x0
  __int64 v6; // x0

  if ( (byte_42B3CA4 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CA4 = 1;
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
      v6 = sub_B52A88(v5);
      sub_B52A28(v6, 0LL);
    }
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_15:
      sub_B52A5C(v5, method);
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

  if ( (byte_42B3C9F & 1) == 0 )
  {
    sub_B52984(&PartyListViewItem_TypeInfo);
    byte_42B3C9F = 1;
  }
  v3 = (PartyListViewItem_o *)sub_B52A54(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_B52A5C(v5, v6);
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
  if ( (byte_42B3CAF & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CAF = 1;
  }
  if ( !item )
LABEL_18:
    sub_B52A5C(this, item);
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
    if ( (signed int)i >= SHIDWORD(this[1].klass->_1.methods) )
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
      v10 = sub_B52A88(this);
      sub_B52A28(v10, 0LL);
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

  if ( (byte_42B3CBB & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    byte_42B3CBB = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
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
      v10 = sub_B52A88(AssetName);
      sub_B52A28(v10, 0LL);
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
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  if ( !v3 )
LABEL_19:
    sub_B52A5C(AssetName, v4);
  if ( v3->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_42B3CBA & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int___TypeInfo);
    byte_42B3CBA = 1;
  }
  v6 = (System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)typeMax);
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
      sub_B52A5C(p_image, v5);
    if ( i >= memberList->max_length )
    {
LABEL_22:
      v14 = sub_B52A88(p_image);
      sub_B52A28(v14, 0LL);
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

  if ( (byte_42B3CAD & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B3CAD = 1;
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(SvtId, 0LL) >= 1 )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v21, 0LL) >= 1 )
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
          DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
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
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                      v43 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*((_QWORD *)v37 + 2) + 8 * v41 + 32);
                      if ( v43 )
                      {
                        if ( v41 >= (unsigned int)v37[6] )
                          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                        if ( v43[1].monitor )
                        {
                          if ( v41 >= (unsigned int)v37[6] )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
                                  (const MethodInfo_1B63E74 *)Method_System_Linq_Enumerable_Intersect_int___);
                          DeckConditionServantNumAndPosition = System_Linq_Enumerable__ToArray_int_(
                                                                 v47,
                                                                 (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
                          if ( v41 >= *((unsigned int *)v38 + 6) )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                          v48 = *(_DWORD *)(v38[2] + 4 * v41 + 32);
                          if ( v48 == 1 )
                          {
                            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)DeckConditionServantNumAndPosition,
                                                                           (const MethodInfo_1B50578 *)Method_System_Linq_Enumerable_Any_int___);
                            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
                              goto LABEL_146;
                          }
                          else
                          {
                            if ( v41 >= *((unsigned int *)v38 + 6) )
                              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                            if ( v48 == 2 )
                            {
                              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)DeckConditionServantNumAndPosition,
                                                                             (const MethodInfo_1B50578 *)Method_System_Linq_Enumerable_Any_int___);
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
        v62 = sub_B52A88(DeckConditionServantNumAndPosition);
        sub_B52A28(v62, 0LL);
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
        sub_B52A5C(DeckConditionServantNumAndPosition, method);
      v54 = *(_QWORD *)&v52->fields.baseSvtId.fields.currentCryptoKey;
      v53 = *(_QWORD *)&v52->fields.baseSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v64.fields.currentCryptoKey = v54;
      *(_QWORD *)&v64.fields.fakeValue = v53;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v64, 0LL);
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
            if ( v55 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v65, 0LL) )
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

  if ( (byte_42B3CAC & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CAC = 1;
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
    sub_B52A5C(questRestrictionInfo, v11);
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
      v18 = sub_B52A88(questRestrictionInfo);
      sub_B52A28(v18, 0LL);
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

  if ( (byte_42B3CB2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    byte_42B3CB2 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
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
      v12 = sub_B52A88(EquipUserSvtId);
      sub_B52A28(v12, 0LL);
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
          (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
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
    sub_B52A5C(EquipUserSvtId, v5);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  if ( (byte_42B3CB9 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    this = (PartyListViewItem_o *)sub_B52984(&EventUpValInfo___TypeInfo);
    byte_42B3CB9 = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_25:
      sub_B52A5C(this, eventId);
    v8 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v8 )
    {
      if ( !(_DWORD)v8 )
      {
LABEL_26:
        v21 = sub_B52A88(this);
        sub_B52A28(v21, 0LL);
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
  v10 = (EventUpValInfo_array *)sub_B5299C(EventUpValInfo___TypeInfo, (unsigned int)v9->static_fields->DeckMemberMax);
  *eventUpValList = v10;
  sub_B52920((BattleServantConfConponent_o *)eventUpValList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
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
  int32_t FollowerIndex; // w22
  DeckServantData_o *v13; // x8
  QuestRestrictionInfo_o *v14; // x0
  const MethodInfo *v15; // x2
  __int64 v16; // x0
  struct QuestRestrictionInfo_o *v17; // x8
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B3C9C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_42B3C9C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_27;
  if ( questRestrictionInfo->fields.isNotTransitionSupportList
    || questRestrictionInfo->fields.isNpcOnlyBattle
    || questRestrictionInfo->fields.isNoSupportBattle )
  {
    return 0;
  }
  questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction(
                                                     questRestrictionInfo,
                                                     0LL);
  if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 )
  {
LABEL_27:
    if ( deck )
    {
      FollowerIndex = UserEventDeckEntity__GetFollowerIndex(deck, 0LL);
      if ( FollowerIndex )
        return FollowerIndex;
LABEL_29:
      v17 = this->fields.questRestrictionInfo;
      if ( v17 )
      {
        if ( fixNpcFollowerInfoList )
          return PartyListViewItem__GetSupportInitIndex(this, fixNpcFollowerInfoList, v15);
        else
          return v17->fields.supportInitIndex;
      }
      return 0;
    }
LABEL_35:
    sub_B52A5C(questRestrictionInfo, deck);
  }
  if ( !deck )
    goto LABEL_35;
  questRestrictionInfo = (QuestRestrictionInfo_o *)UserEventDeckEntity__GetFollowerIndexList(deck, 0LL);
  if ( !questRestrictionInfo )
    goto LABEL_35;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_int__o *)questRestrictionInfo,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v20,
           (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    deckInfo = deck->fields.deckInfo;
    if ( !deckInfo )
      sub_B52A5C(v8, v9);
    svts = deckInfo->fields.svts;
    if ( !svts )
      sub_B52A5C(v8, v9);
    FollowerIndex = v20.fields.current;
    if ( v20.fields.current - 1 >= svts->max_length )
    {
      v16 = sub_B52A88(v8);
      sub_B52A28(v16, 0LL);
    }
    v13 = svts->m_Items[v20.fields.current - 1];
    if ( !v13 )
      sub_B52A5C(v8, v9);
    v14 = this->fields.questRestrictionInfo;
    if ( !v14 )
      sub_B52A5C(0LL, v9);
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(v14, v13->fields.initPos, 0LL) )
      goto LABEL_20;
  }
  FollowerIndex = 0;
LABEL_20:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !FollowerIndex )
    goto LABEL_29;
  return FollowerIndex;
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

  if ( (byte_42B3CB8 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CB8 = 1;
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
      sub_B52A5C(v8, method);
    if ( v3 >= memberList->max_length )
    {
      v10 = sub_B52A88(v8);
      sub_B52A28(v10, 0LL);
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

  if ( (byte_42B3CB7 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&bool___TypeInfo);
    byte_42B3CB7 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = (System_Boolean_array *)sub_B5299C(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
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
        sub_B52A5C(v9, v4);
      if ( i >= v5->max_length )
      {
LABEL_20:
        v11 = sub_B52A88(v9);
        sub_B52A28(v11, 0LL);
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
    sub_B52A5C(this, num);
  if ( memberList->max_length <= num )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
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
    sub_B52A5C(this, npcSvtIds);
  myServantNumMax = (unsigned int)questRestrictionInfo->fields.myServantNumMax;
  max_length = npcSvtIds->max_length;
  while ( (int)myServantNumMax < (int)max_length )
  {
    if ( (unsigned int)myServantNumMax >= max_length )
    {
      v6 = sub_B52A88(myServantNumMax);
      sub_B52A28(v6, 0LL);
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

  if ( (byte_42B3CAE & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B3CAE = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_49:
      sub_B52A5C(questRestrictionInfo, method);
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
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
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
          v24 = sub_B52A88(questRestrictionInfo);
          sub_B52A28(v24, 0LL);
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
        v16 |= BYTE2(v19->_2.typeHierarchy) != 0;
        v15 |= BYTE3(v19->_2.typeHierarchy) != 0;
        FixedServantPositionCount -= BYTE6(v19->_2.typeHierarchy) & 1;
        v14 |= BYTE4(v19->_2.typeHierarchy) != 0;
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
  PartyListViewItem___c__DisplayClass25_0_o *v8; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  BalanceConfig_c *v11; // x0
  int32_t supportInitIndex; // [xsp+8h] [xbp-58h]
  int myServantNumMax; // [xsp+Ch] [xbp-54h]

  v4 = this;
  if ( (byte_42B3C9D & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_B52984(&Method_System_Func_FollowerInfo__bool___ctor__);
    sub_B52984(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_B52984(&Method_PartyListViewItem___c__DisplayClass25_0__GetSupportInitIndex_b__0__);
    this = (PartyListViewItem_o *)sub_B52984(&PartyListViewItem___c__DisplayClass25_0_TypeInfo);
    byte_42B3C9D = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_17:
    sub_B52A5C(this, fixNpcFollowerInfoList);
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
        v8 = (PartyListViewItem___c__DisplayClass25_0_o *)sub_B52A54(PartyListViewItem___c__DisplayClass25_0_TypeInfo);
        PartyListViewItem___c__DisplayClass25_0___ctor(v8, 0LL);
        if ( !v8 )
          goto LABEL_17;
        v8->fields.chkIdx = ++v7;
        v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v9,
          (Il2CppObject *)v8,
          Method_PartyListViewItem___c__DisplayClass25_0__GetSupportInitIndex_b__0__,
          (const MethodInfo_2BC90BC *)Method_System_Func_FollowerInfo__bool___ctor__);
        v10 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
                (System_Func_TSource__bool__o *)v9,
                (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      }
      while ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                v10,
                (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_FollowerInfo___) );
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

  if ( (byte_42B3CB5 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&ServantEntity___TypeInfo);
    byte_42B3CB5 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v11 = (ServantEntity_array *)sub_B5299C(ServantEntity___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
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
        sub_B52A5C(v17, v4);
      servantEntity = (System_Int32_array **)v15->fields.servantEntity;
      if ( servantEntity )
      {
        v17 = (BalanceConfig_c *)sub_B52A44(servantEntity, v11->obj.klass->_1.element_class);
        if ( !v17 )
        {
          v20 = sub_B52A7C(0LL);
          sub_B52A28(v20, 0LL);
        }
      }
      if ( v12 >= v11->max_length )
      {
LABEL_22:
        v19 = sub_B52A88(v17);
        sub_B52A28(v19, 0LL);
      }
      i->klass = (BattleServantConfConponent_c *)servantEntity;
      sub_B52920(i, servantEntity, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_42B3CB6 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&string___TypeInfo);
    byte_42B3CB6 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = (System_String_array *)sub_B5299C(string___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
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
        sub_B52A5C(SvtNameText, v4);
      v17 = SvtNameText;
      if ( SvtNameText )
      {
        SvtNameText = (System_Int32_array **)sub_B52A44(SvtNameText, v5->obj.klass->_1.element_class);
        if ( !SvtNameText )
        {
          v20 = sub_B52A7C(0LL);
          sub_B52A28(v20, 0LL);
        }
      }
      if ( v6 >= v5->max_length )
      {
LABEL_22:
        v19 = sub_B52A88(SvtNameText);
        sub_B52A28(v19, 0LL);
      }
      i->klass = (BattleServantConfConponent_c *)v17;
      sub_B52920(i, v17, v11, v12, v13, v14, v15, v16);
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
  struct PartyOrganizationListViewItem_array *v27; // x24
  __int64 v28; // x25
  unsigned int v29; // w27
  __int64 v30; // x26
  PartyOrganizationListViewItem_o *v31; // x22
  __int64 v32; // x21
  int v33; // w19
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56[2]; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_42B3CB0 & 1) == 0 )
  {
    sub_B52984(&DeckServantData_TypeInfo);
    sub_B52984(&DeckServant_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserDeckEntity_TypeInfo);
    byte_42B3CB0 = 1;
  }
  memset(&v56[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v5 = sub_B52A54(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor((UserDeckEntity_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_30;
  *(_QWORD *)(v5 + 16) = this->fields.id;
  *(_DWORD *)(v5 + 32) = this->fields.index + 1;
  deckName = (System_Int32_array **)this->fields.deckName;
  *(_QWORD *)(v5 + 40) = deckName;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 40), deckName, v8, v9, v10, v11, v12, v13);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_30;
  max_length = memberList->max_length;
  v17 = baseItem ? baseItem : this;
  userEquipId = v17->fields.userEquipId;
  v19 = (DeckServant_o *)sub_B52A54(DeckServant_TypeInfo);
  DeckServant___ctor_16909640(v19, max_length, userEquipId, 0LL);
  *(_QWORD *)(v5 + 48) = v19;
  v20 = v5 + 48;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 48), (System_Int32_array **)v19, v21, v22, v23, v24, v25, v26);
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
      v32 = sub_B52A54(DeckServantData_TypeInfo);
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
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v56, 0LL, 0LL);
        v36 = *(_OWORD *)&v56[0].fields.currentCryptoKey;
        v35 = *(_OWORD *)&v56[0].fields.fakeValue;
      }
      *(_OWORD *)&v56[1].fields.currentCryptoKey = v36;
      *(_OWORD *)&v56[1].fields.fakeValue = v35;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v55 = v56[1];
      *(_QWORD *)(v32 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v55, 0LL);
      *(_BYTE *)(v32 + 40) = v31->fields.isFollower;
      EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(v31, 0LL);
      *(_QWORD *)(v32 + 32) = EquipList;
      sub_B52920((BattleServantConfConponent_o *)(v32 + 32), EquipList, v38, v39, v40, v41, v42, v43);
      *(_DWORD *)(v32 + 60) = v31->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v20 )
        break;
      v44 = *(_DWORD **)(*(_QWORD *)v20 + 16LL);
      if ( !v44 )
        break;
      v45 = sub_B52A44(v32, *(_QWORD *)(*(_QWORD *)v44 + 64LL));
      if ( !v45 )
      {
        v54 = sub_B52A7C(0LL);
        sub_B52A28(v54, 0LL);
      }
      if ( v29 < v44[6] )
      {
        *(_QWORD *)&v44[v30] = v32;
        sub_B52920((BattleServantConfConponent_o *)&v44[v30], (System_Int32_array **)v32, v46, v47, v48, v49, v50, v51);
        if ( v33 >= (int)v28 )
          return (UserDeckEntity_o *)v5;
        v30 += 2LL;
        ++v29;
        if ( v33 < v27->max_length )
          continue;
      }
      v52 = sub_B52A88(v45);
      sub_B52A28(v52, 0LL);
    }
LABEL_30:
    sub_B52A5C(v6, v7);
  }
  return (UserDeckEntity_o *)v5;
}


UserEventDeckEntity_o *__fastcall PartyListViewItem__GetUserEventDeck(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x23
  __int64 UserId; // x0
  __int64 v5; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x20
  int64_t userEquipId; // x21
  DeckServant_o *v8; // x22
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct PartyOrganizationListViewItem_array *v16; // x8
  unsigned __int64 v17; // x20
  unsigned __int64 max_length; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v20; // x22
  struct QuestRestrictionInfo_o *v21; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  __int64 v24; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q0
  __int128 v27; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int32_t InitPos_k__BackingField; // w8
  __int64 v36; // x9
  int v37; // w8
  unsigned int *v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  unsigned int *v45; // x0
  __int64 v47; // x0
  __int64 v48; // x0
  UserEventDeckEntity_o *v49; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51[2]; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_42B3CB1 & 1) == 0 )
  {
    sub_B52984(&DeckServantData_TypeInfo);
    sub_B52984(&DeckServant_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserEventDeckEntity_TypeInfo);
    byte_42B3CB1 = 1;
  }
  memset(&v51[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v3 = sub_B52A54(UserEventDeckEntity_TypeInfo);
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
  v8 = (DeckServant_o *)sub_B52A54(DeckServant_TypeInfo);
  DeckServant___ctor_16909640(v8, memberList->max_length, userEquipId, 0LL);
  *(_QWORD *)(v3 + 32) = v8;
  v9 = v3 + 32;
  v49 = (UserEventDeckEntity_o *)v3;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  v16 = this->fields.memberList;
  if ( !v16 )
LABEL_54:
    sub_B52A5C(UserId, v5);
  v17 = 0LL;
  while ( 1 )
  {
    max_length = v16->max_length;
    if ( (__int64)v17 >= (int)max_length )
      return v49;
    if ( v17 >= max_length )
      goto LABEL_55;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v20 = v16->m_Items[v17];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_25;
    }
    UserId = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    v21 = this->fields.questRestrictionInfo;
    if ( (UserId & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_54;
      isNpcEditablePos = v21->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v20 || !v21 )
        goto LABEL_54;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v20->fields._InitPos_k__BackingField,
                        0LL);
      v21 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v21 )
        goto LABEL_25;
    }
    UserId = QuestRestrictionInfo__IsNpcMulitipleOrOnly(v21, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_54;
      if ( v20->fields.isFixNpc
        && v20->fields.isFollower
        && !isNpcEditablePos
        && !v20->fields.isMyServantOrNpcRestriction )
      {
        ++v17;
        goto LABEL_50;
      }
    }
LABEL_25:
    v24 = sub_B52A54(DeckServantData_TypeInfo);
    DeckServantData___ctor((DeckServantData_o *)v24, 0LL);
    if ( !v24 )
      goto LABEL_54;
    *(_DWORD *)(v24 + 16) = v17 + 1;
    if ( !v20 )
      goto LABEL_54;
    userServantEntity = v20->fields.userServantEntity;
    if ( userServantEntity )
    {
      v27 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    }
    else
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v51, 0LL, 0LL);
      v27 = *(_OWORD *)&v51[0].fields.currentCryptoKey;
      v26 = *(_OWORD *)&v51[0].fields.fakeValue;
    }
    *(_OWORD *)&v51[1].fields.currentCryptoKey = v27;
    *(_OWORD *)&v51[1].fields.fakeValue = v26;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v50 = v51[1];
    *(_QWORD *)(v24 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v50, 0LL);
    *(_BYTE *)(v24 + 40) = v20->fields.isFollower;
    EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(v20, 0LL);
    *(_QWORD *)(v24 + 32) = EquipList;
    sub_B52920((BattleServantConfConponent_o *)(v24 + 32), EquipList, v29, v30, v31, v32, v33, v34);
    InitPos_k__BackingField = v20->fields._InitPos_k__BackingField;
    v36 = *(_QWORD *)(v24 + 24);
    *(_QWORD *)(v24 + 48) = 0LL;
    *(_DWORD *)(v24 + 60) = InitPos_k__BackingField;
    if ( v36 )
    {
      v37 = 0;
LABEL_42:
      if ( (v37 & isNpcEditablePos & 1) != 0 )
      {
        *(_QWORD *)(v24 + 48) = v20->fields.npcFollowerSvtId;
        if ( v20->fields.isFixNpc )
          *(_BYTE *)(v24 + 40) = 0;
      }
      goto LABEL_45;
    }
    if ( !v20->fields.isMyServantOrNpcRestriction || !v20->fields.isFollower )
    {
      v37 = !v20->fields.isMyServantOrNpcRestriction;
      goto LABEL_42;
    }
    *(_QWORD *)(v24 + 48) = v20->fields.npcFollowerSvtId;
LABEL_45:
    if ( !*(_QWORD *)v9 )
      goto LABEL_54;
    v38 = *(unsigned int **)(*(_QWORD *)v9 + 16LL);
    if ( !v38 )
      goto LABEL_54;
    UserId = sub_B52A44(v24, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
    if ( !UserId )
    {
      v48 = sub_B52A7C(0LL);
      sub_B52A28(v48, 0LL);
    }
    if ( v17 >= v38[6] )
    {
LABEL_55:
      v47 = sub_B52A88(UserId);
      sub_B52A28(v47, 0LL);
    }
    v45 = &v38[2 * v17];
    *((_QWORD *)v45 + 4) = v24;
    sub_B52920((BattleServantConfConponent_o *)(v45 + 8), (System_Int32_array **)v24, v39, v40, v41, v42, v43, v44);
    ++v17;
LABEL_50:
    v16 = this->fields.memberList;
    if ( !v16 )
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

  if ( (byte_42B3C9B & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3C9B = 1;
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
        sub_B52A5C(v7, userServantList);
      if ( v6 >= npcSvtIds->max_length )
      {
LABEL_18:
        v9 = sub_B52A88(v7);
        sub_B52A28(v9, 0LL);
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
      sub_B52A5C(this, userSvtId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        v9 = sub_B52A88(this);
        sub_B52A28(v9, 0LL);
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

  if ( (byte_42B3CA9 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CA9 = 1;
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
      v8 = sub_B52A88(v4);
      sub_B52A28(v8, 0LL);
    }
    v6 = memberList->m_Items[v3];
    if ( !v6 )
LABEL_14:
      sub_B52A5C(v4, method);
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

  if ( (byte_42B3CA8 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CA8 = 1;
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
      v10 = sub_B52A88(v4);
      sub_B52A28(v10, 0LL);
    }
    v6 = memberList->m_Items[v3];
    if ( !v6 )
LABEL_16:
      sub_B52A5C(v4, method);
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

  if ( (byte_42B3CAA & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CAA = 1;
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
      v7 = sub_B52A88(v4);
      sub_B52A28(v7, 0LL);
    }
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_B52A5C(v4, method);
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
  if ( (byte_42B3CB3 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B3CB3 = 1;
  }
  if ( svtId < 1 )
    return 0;
  memberList = v4->fields.memberList;
  if ( !memberList )
LABEL_17:
    sub_B52A5C(this, *(_QWORD *)&svtId);
  max_length = memberList->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      v10 = sub_B52A88(this);
      sub_B52A28(v10, 0LL);
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
    this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(EquipSvtId, 0LL);
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

  if ( (byte_42B3C9A & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3C9A = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_31:
    sub_B52A5C(questRestrictionInfo, deck);
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
      v13 = sub_B52A88(questRestrictionInfo);
      sub_B52A28(v13, 0LL);
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
    if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(
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


bool __fastcall PartyListViewItem__IsSpecificMenuKind_32272296(
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

  if ( (byte_42B3CA7 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CA7 = 1;
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
    v8 = sub_B52A88(v4);
    sub_B52A28(v8, 0LL);
  }
  v4 = memberList->m_Items[0];
  if ( !v4 )
LABEL_17:
    sub_B52A5C(v4, method);
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

  if ( (byte_42B3CA1 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CA1 = 1;
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
      v9 = sub_B52A88(v7);
      sub_B52A28(v9, 0LL);
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
      sub_B52A5C(v7, method);
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

  if ( (byte_42B3CA2 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CA2 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_21:
    sub_B52A5C(v5, v6);
  this->fields.menuKind = item->fields.menuKind;
  this->fields.maxCost = item->fields.maxCost;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
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
  sub_B52920(
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
    if ( (signed int)v40 >= *(_DWORD *)(*(_QWORD *)&v5->fields.frameType + 156LL) )
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
      v5 = (PartyOrganizationListViewItem_o *)sub_B52A44(v5, v29->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v50 = sub_B52A7C(0LL);
        sub_B52A28(v50, 0LL);
      }
    }
    if ( v40 >= v29->max_length )
      goto LABEL_22;
    v37 = &v29->obj.klass + (int)v40;
    v37[4] = (Il2CppClass *)v36;
    sub_B52920((BattleServantConfConponent_o *)(v37 + 4), v36, v30, v31, v32, v33, v34, v35);
    v38 = this->fields.memberList;
    if ( !v38 )
      goto LABEL_21;
    if ( v40 >= v38->max_length )
    {
LABEL_22:
      v49 = sub_B52A88(v5);
      sub_B52A28(v49, 0LL);
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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

  if ( (byte_42B3CA3 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3CA3 = 1;
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
      v15 = sub_B52A88(v14);
      sub_B52A28(v15, 0LL);
    }
    v9 = &memberList->obj.klass + (int)i;
    v10 = (PartyOrganizationListViewItem_o *)v9[4];
    if ( !v10 )
LABEL_16:
      sub_B52A5C(v14, *(_QWORD *)&num);
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
    || (PartyOrganizationListViewItem__Modify_31274528((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberList) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(this, *(_QWORD *)&num);
  }
  if ( v10->max_length <= num )
  {
LABEL_12:
    v13 = sub_B52A88(this);
    sub_B52A28(v13, 0LL);
  }
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember_32272320(
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
    sub_B52A5C(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_B52A44(member, v15->obj.klass->_1.element_class);
    if ( !this )
    {
      v21 = sub_B52A7C(0LL);
      sub_B52A28(v21, 0LL);
    }
  }
  if ( v15->max_length <= idx )
    goto LABEL_18;
  v16 = &v15->obj.klass + idx;
  v16[4] = (Il2CppClass *)member;
  sub_B52920((BattleServantConfConponent_o *)(v16 + 4), (System_Int32_array **)member, v9, v10, v11, v12, v13, v14);
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
    v20 = sub_B52A88(this);
    sub_B52A28(v20, 0LL);
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

  if ( (byte_42B3C9E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
    sub_B52984(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3C9E = 1;
  }
  v38 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
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
      v34 = sub_B52A88(Master_WarQuestSelectionMaster);
      sub_B52A28(v34, 0LL);
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
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Master_WarQuestSelectionMaster, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(Master_WarQuestSelectionMaster, &entity, npcFollowerSvtId, (const MethodInfo_23E255C *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v22 = this->fields.questRestrictionInfo;
        if ( !v22 )
          goto LABEL_39;
        v23 = FollowerInfo__GetReturnTypeByQuestId(v22->fields.questId, 0LL);
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)FollowerInfo__GetNpcServantIndividuality(v18, 0, v23, 0LL);
        if ( !this->fields.questRestrictionInfo )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_34173516(this->fields.questRestrictionInfo, (System_Int32_array *)Master_WarQuestSelectionMaster, pos, 0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          break;
        goto LABEL_34;
      }
      if ( !v16 )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(v16, &v38, npcFollowerSvtId, (const MethodInfo_23E255C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
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
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_34173516(v30, (System_Int32_array *)Master_WarQuestSelectionMaster, pos, 0LL);
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
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v40, 0LL);
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
  sub_B52920((BattleServantConfConponent_o *)follower, (System_Int32_array **)v18, v24, v25, v26, v27, v28, v29);
  if ( !ServantLeaderInfo )
LABEL_39:
    sub_B52A5C(Master_WarQuestSelectionMaster, v14);
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
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
  }
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_B52A5C(this, num1);
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
        v5 = sub_B52A88(this);
        sub_B52A28(v5, 0LL);
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
    sub_B52A5C(this, method);
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

  if ( (byte_42B3CB4 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10421/*"PARTY_ORGANIZATION_NAME_BASE"*/);
    byte_42B3CB4 = 1;
  }
  v6 = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10421/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0LL);
  v6 = this->fields.index + 1;
  v4 = (Il2CppObject *)System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Format(v3, v4, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}