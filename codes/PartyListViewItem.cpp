void __fastcall PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42181D9 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&PartyOrganizationListViewItem___TypeInfo, v3);
    byte_42181D9 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationListViewItem_array *)sub_B0D8BC(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.memberList = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_31331196(
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
  PartyOrganizationListViewItem_o *v34; // x0
  const MethodInfo *v35; // x2
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x27
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v39; // x8
  int32_t DeckMainMemberMax; // w28
  struct PartyOrganizationListViewItem_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x1
  __int64 v49; // x2
  int32_t v50; // w21
  struct DeckServant_o *v51; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v54; // x8
  int32_t initPos; // w25
  int v56; // w9
  struct PartyOrganizationListViewItem_array *v57; // x19
  PartyOrganizationListViewItem_o *v58; // x0
  System_Int32_array **v59; // x24
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  Il2CppClass **v66; // x0
  UserServantEntity_o *v67; // x19
  struct PartyOrganizationListViewItem_array *v68; // x28
  UserServantEntity_array *v69; // x20
  PartyListViewItem_o *v70; // x27
  FollowerInfo_o *v71; // x22
  UserDeckEntity_o *v72; // x26
  System_Int64_array *EquipList; // x23
  __int64 v74; // x1
  __int64 v75; // x2
  PartyOrganizationListViewItem_o *v76; // x24
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  Il2CppClass **v83; // x0
  PartyOrganizationListViewItem_o *v84; // x24
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  Il2CppClass **v91; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v94; // x0
  __int64 v95; // x0
  int32_t v98; // [xsp+34h] [xbp-7Ch]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+40h] [xbp-70h]
  int32_t v101; // [xsp+5Ch] [xbp-54h]

  if ( (byte_42181DA & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_B0D8A4(&PartyOrganizationListViewItem___TypeInfo, v18);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v21);
    byte_42181DA = 1;
  }
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B0D840(
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
  PartyListViewItem__SetDeckName(this, deck->fields.name, v35);
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
  v41 = (struct PartyOrganizationListViewItem_array *)sub_B0D8BC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v39->static_fields->DeckMemberMax);
  this->fields.memberList = v41;
  sub_B0D840(
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
  v34 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v34 )
    goto LABEL_66;
  if ( *(_QWORD *)&v34->fields.sortIndex )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v34 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( v34 )
    {
      follower = *(FollowerInfo_o **)&v34->fields.sortIndex;
      v34 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( v34 )
      {
        followerClassId = v34->fields.sortValue0;
        v34 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( v34 )
        {
          followerDeckId = HIDWORD(v34->fields.sortValue0);
          goto LABEL_26;
        }
      }
    }
LABEL_66:
    sub_B0D97C(v34);
  }
LABEL_26:
  v50 = 0;
  v98 = DeckMainMemberMax;
  while ( 1 )
  {
    v34 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v50 >= *(_DWORD *)(*(_QWORD *)&v34->fields.frameType + 156LL) )
      break;
    v51 = deck->fields.deckInfo;
    if ( !v51 )
      goto LABEL_66;
    svts = v51->fields.svts;
    if ( !svts )
      goto LABEL_66;
    max_length = svts->max_length;
    if ( v50 >= max_length )
    {
      v56 = v50 + 1;
      initPos = v50 + 1;
    }
    else
    {
      if ( v50 >= (unsigned int)max_length )
        goto LABEL_67;
      v54 = svts->m_Items[v50];
      if ( !v54 )
        goto LABEL_66;
      initPos = v54->fields.initPos;
      v56 = v50 + 1;
    }
    v101 = v56;
    if ( v56 == DeckMainMemberMax )
    {
      v57 = *p_memberList;
      v58 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v48, v49);
      v59 = (System_Int32_array **)v58;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_30704360(
          v58,
          v50,
          follower,
          followerClassId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0LL);
        if ( !v57 )
          goto LABEL_66;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_30738796(v58, v50, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v57 )
          goto LABEL_66;
      }
      if ( v59 )
      {
        v34 = (PartyOrganizationListViewItem_o *)sub_B0D964(v59, v57->obj.klass->_1.element_class);
        if ( !v34 )
          goto LABEL_68;
      }
      if ( v50 >= v57->max_length )
        goto LABEL_67;
      v66 = &v57->obj.klass + v50;
      v66[4] = (Il2CppClass *)v59;
      sub_B0D840((BattleServantConfConponent_o *)(v66 + 4), v59, v60, v61, v62, v63, v64, v65);
    }
    else
    {
      if ( !UserServantList )
        goto LABEL_66;
      if ( v50 >= UserServantList->max_length )
        goto LABEL_67;
      v67 = UserServantList->m_Items[v50];
      v68 = *p_memberList;
      if ( v67 )
      {
        v69 = UserServantList;
        v70 = this;
        v71 = follower;
        v72 = deck;
        EquipList = UserDeckEntity__GetEquipList(deck, v50, 0LL);
        v76 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v74, v75);
        PartyOrganizationListViewItem___ctor_30730744(
          v76,
          v50,
          v67,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL);
        if ( !v68 )
          goto LABEL_66;
        if ( v76 )
        {
          v34 = (PartyOrganizationListViewItem_o *)sub_B0D964(v76, v68->obj.klass->_1.element_class);
          if ( !v34 )
            goto LABEL_68;
        }
        if ( v50 >= v68->max_length )
          goto LABEL_67;
        deck = v72;
        v83 = &v68->obj.klass + v50;
        v83[4] = (Il2CppClass *)v76;
        sub_B0D840((BattleServantConfConponent_o *)(v83 + 4), (System_Int32_array **)v76, v77, v78, v79, v80, v81, v82);
        follower = v71;
        this = v70;
        UserServantList = v69;
      }
      else
      {
        v84 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v48, v49);
        PartyOrganizationListViewItem___ctor_30738796(v84, v50, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v68 )
          goto LABEL_66;
        if ( v84 )
        {
          v34 = (PartyOrganizationListViewItem_o *)sub_B0D964(v84, v68->obj.klass->_1.element_class);
          if ( !v34 )
          {
LABEL_68:
            v95 = sub_B0D99C(v34);
            sub_B0D948(v95, 0LL);
          }
        }
        if ( v50 >= v68->max_length )
          goto LABEL_67;
        v91 = &v68->obj.klass + v50;
        v91[4] = (Il2CppClass *)v84;
        sub_B0D840((BattleServantConfConponent_o *)(v91 + 4), (System_Int32_array **)v84, v85, v86, v87, v88, v89, v90);
      }
      DeckMainMemberMax = v98;
    }
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_66;
    if ( v50 >= memberList->max_length )
    {
LABEL_67:
      v94 = sub_B0D9A8(v34);
      sub_B0D948(v94, 0LL);
    }
    v34 = memberList->m_Items[v50];
    if ( !v34 )
      goto LABEL_66;
    cost = this->fields.cost;
    v50 = v101;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v34, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v48);
}


void __fastcall PartyListViewItem___ctor_31334096(
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
  __int64 Member; // x0
  const MethodInfo *v47; // x2
  UserEventDeckEntity_o *v48; // x20
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v50; // x3
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v52; // x0
  PartyListViewItem_o *v53; // x9
  int v54; // w27
  const MethodInfo *v55; // x2
  int32_t v56; // w23
  BalanceConfig_c *v57; // x0
  struct PartyOrganizationListViewItem_array *v58; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  int32_t v66; // w8
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x2
  unsigned int v69; // w24
  int32_t *p_initPos; // x8
  struct DeckServant_o *v71; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v73; // x8
  int32_t initPos; // w25
  const MethodInfo *v75; // x6
  int v76; // w23
  struct DeckServant_o *v77; // x8
  struct DeckServantData_array *v78; // x8
  DeckServantData_o *v79; // x8
  _BOOL4 v80; // w19
  int64_t npcFollowerSvtId; // x4
  __int64 v82; // x1
  System_String_array **v83; // x2
  FollowerInfo_o *v84; // x27
  int32_t v85; // w23
  bool IsNpc; // w0
  __int64 v87; // x1
  __int64 v88; // x2
  struct PartyOrganizationListViewItem_array *v89; // x20
  int32_t v90; // w26
  PartyOrganizationListViewItem_o *v91; // x19
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  Il2CppClass **v98; // x0
  FollowerInfo_o *v99; // x23
  struct PartyOrganizationListViewItem_array *v100; // x26
  int32_t v101; // w27
  PartyOrganizationListViewItem_o *v102; // x19
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  Il2CppClass **v109; // x0
  BattleServantConfConponent_o *v110; // x0
  System_Int32_array **v111; // x1
  UserServantEntity_array *v112; // x20
  Il2CppClass **v113; // x23
  Il2CppClass *v114; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v115; // x23
  Il2CppClass *v116; // t1
  Il2CppClass *parent; // x19
  Il2CppClass *declaringType; // x27
  int32_t v119; // w19
  int32_t v120; // w27
  int32_t DispLimitCount; // w0
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  UserServantEntity_o *v127; // x23
  struct PartyOrganizationListViewItem_array *v128; // x20
  System_Int64_array *EquipList; // x27
  __int64 v130; // x1
  __int64 v131; // x2
  PartyOrganizationListViewItem_o *v132; // x0
  System_Int32_array **v133; // x23
  Il2CppClass **v134; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v137; // x1
  __int64 v138; // x0
  __int64 v139; // x0
  bool *v140; // [xsp+20h] [xbp-C0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+30h] [xbp-B0h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-A8h]
  int v144; // [xsp+40h] [xbp-A0h]
  int v145; // [xsp+44h] [xbp-9Ch]
  PartyListViewItem_o *v146; // [xsp+48h] [xbp-98h]
  int32_t v148; // [xsp+64h] [xbp-7Ch]
  bool v150; // [xsp+74h] [xbp-6Ch]
  int32_t followerClassIda; // [xsp+84h] [xbp-5Ch] BYREF
  FollowerInfo_o *followera; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16

  if ( (byte_42181DB & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, isBaseModify);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v18);
    sub_B0D8A4(&DataManager_TypeInfo, v19);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B0D8A4(&PartyOrganizationListViewItem___TypeInfo, v21);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v24);
    byte_42181DB = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.deckName,
    (System_Int32_array **)DefaultDeckName,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v48 = deck;
  if ( !deck )
    goto LABEL_139;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_139;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v47) )
  {
    Member = (__int64)deck->fields.deckInfo;
    if ( !Member )
      goto LABEL_139;
    DeckServant__ResetInitPos((DeckServant_o *)Member, 0LL);
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
    v48 = deck;
    FollowerIndex = v52->static_fields->DeckMainMemberMax;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_139;
  if ( *(int *)(Member + 48) < 1 )
  {
    v150 = 0;
    v146 = 0LL;
    v54 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_139;
    v53 = *(PartyListViewItem_o **)(Member + 72);
    v54 = 0;
    v150 = v53 != 0LL;
    v146 = v53;
    if ( follower && v53 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_139;
      if ( !v146 )
        goto LABEL_139;
      v54 = *(_DWORD *)(Member + 48);
      Member = (__int64)PartyListViewItem__GetMember(v146, v54 - 1, v55);
      if ( !Member )
        goto LABEL_139;
      v56 = *(_DWORD *)(Member + 340);
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_139;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v56, follower, 0LL);
      v150 = 1;
    }
  }
  v140 = isBaseModify;
  v57 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v57 = BalanceConfig_TypeInfo;
  }
  v58 = (struct PartyOrganizationListViewItem_array *)sub_B0D8BC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v57->static_fields->DeckMemberMax);
  this->fields.memberList = v58;
  p_memberList = &this->fields.memberList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v58,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_139;
  if ( !*(_QWORD *)(Member + 24) )
  {
    v66 = followerDeckId;
    goto LABEL_49;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member
    || (follower = *(FollowerInfo_o **)(Member + 24),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (followerClassId = *(_DWORD *)(Member + 32),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_139:
    sub_B0D97C(Member);
  }
  v66 = *(_DWORD *)(Member + 36);
LABEL_49:
  v148 = v66;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !Member )
    goto LABEL_139;
  v145 = v54 - 1;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Member,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v69 = 0;
  v144 = FollowerIndex - 1;
  while ( 1 )
  {
    Member = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v69 >= *(_DWORD *)(*(_QWORD *)(Member + 184) + 156LL) )
      break;
    if ( v150 )
    {
      Member = (__int64)v146;
      if ( !v146 )
        goto LABEL_139;
      Member = (__int64)PartyListViewItem__GetMember(v146, v69, v68);
      if ( !Member )
        goto LABEL_139;
      p_initPos = (int32_t *)(Member + 340);
    }
    else
    {
      v71 = v48->fields.deckInfo;
      if ( !v71 )
        goto LABEL_139;
      svts = v71->fields.svts;
      if ( !svts )
        goto LABEL_139;
      if ( v69 >= svts->max_length )
        goto LABEL_143;
      v73 = svts->m_Items[v69];
      if ( !v73 )
        goto LABEL_139;
      p_initPos = &v73->fields.initPos;
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_139;
    Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(questRestrictionInfo, initPos, 0LL);
    v76 = Member;
    if ( (Member & 1) != 0 )
    {
      v77 = v48->fields.deckInfo;
      if ( !v77 )
        goto LABEL_139;
      v78 = v77->fields.svts;
      if ( !v78 )
        goto LABEL_139;
      if ( v69 >= v78->max_length )
        goto LABEL_143;
      v79 = v78->m_Items[v69];
      if ( !v79 )
        goto LABEL_139;
      v80 = 0;
      if ( v145 != v69 )
      {
        npcFollowerSvtId = v79->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v80 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v75);
      }
    }
    else
    {
      v80 = 0;
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_139;
    Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, initPos, 0LL);
    if ( Member && ((v76 ^ 1) & 1) == 0 )
    {
      v84 = (FollowerInfo_o *)Member;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL) )
        v85 = 0;
      else
        v85 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v84, 0LL);
      v89 = *p_memberList;
      if ( IsNpc )
        v90 = 0;
      else
        v90 = v148;
      v91 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v87, v88);
      PartyOrganizationListViewItem___ctor_30704360(
        v91,
        v69,
        v84,
        v85,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v90,
        initPos,
        0LL);
      if ( !v89 )
        goto LABEL_139;
      if ( v91 )
      {
        Member = sub_B0D964(v91, v89->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v69 >= v89->max_length )
        goto LABEL_143;
      v98 = &v89->obj.klass + (int)v69;
LABEL_124:
      v98[4] = (Il2CppClass *)v91;
      sub_B0D840((BattleServantConfConponent_o *)(v98 + 4), (System_Int32_array **)v91, v92, v93, v94, v95, v96, v97);
      v48 = deck;
      goto LABEL_132;
    }
    if ( v144 != v69 && !v80 )
    {
      if ( (v76 & 1) != 0 )
      {
        v112 = UserServantList;
        if ( !UserServantList )
          goto LABEL_139;
        if ( v69 >= UserServantList->max_length )
          goto LABEL_143;
        v113 = &UserServantList->obj.klass + (int)v69;
        v116 = v113[4];
        v115 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v113 + 4);
        v114 = v116;
        if ( v116 )
        {
          declaringType = v114->_1.declaringType;
          parent = v114->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v153.fields.currentCryptoKey = declaringType;
          *(_QWORD *)&v153.fields.fakeValue = parent;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v153, 0LL);
          if ( v69 >= UserServantList->max_length )
            goto LABEL_143;
          if ( !*v115 )
            goto LABEL_139;
          v119 = Member;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*v115)[6], 0LL);
          if ( v69 >= UserServantList->max_length )
            goto LABEL_143;
          v120 = Member;
          Member = (__int64)*v115;
          if ( !*v115 )
            goto LABEL_139;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
          Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                     questRestrictionInfo,
                     v119,
                     v120,
                     DispLimitCount,
                     initPos,
                     0,
                     0LL);
          if ( (Member & 1) != 0 )
          {
            if ( v69 >= UserServantList->max_length )
              goto LABEL_143;
            *v115 = 0LL;
            sub_B0D840((BattleServantConfConponent_o *)v115, 0LL, v83, v122, v123, v124, v125, v126);
          }
        }
      }
      else
      {
        v112 = UserServantList;
        if ( !UserServantList )
          goto LABEL_139;
      }
      if ( v69 >= v112->max_length )
        goto LABEL_143;
      v127 = v112->m_Items[v69];
      v128 = *p_memberList;
      if ( v127 )
      {
        EquipList = UserEventDeckEntity__GetEquipList(deck, v69, 0LL);
        v91 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v130, v131);
        PartyOrganizationListViewItem___ctor_30730744(
          v91,
          v69,
          v127,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL);
        if ( !v128 )
          goto LABEL_139;
      }
      else
      {
        v91 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v82, v83);
        PartyOrganizationListViewItem___ctor_30738796(v91, v69, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v128 )
          goto LABEL_139;
      }
      if ( v91 )
      {
        Member = sub_B0D964(v91, v128->obj.klass->_1.element_class);
        if ( !Member )
        {
LABEL_144:
          v139 = sub_B0D99C(Member);
          sub_B0D948(v139, 0LL);
        }
      }
      if ( v69 >= v128->max_length )
        goto LABEL_143;
      v98 = &v128->obj.klass + (int)v69;
      goto LABEL_124;
    }
    v99 = followera;
    v100 = *p_memberList;
    if ( followera )
    {
      v101 = followerClassIda;
      v102 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v82, v83);
      PartyOrganizationListViewItem___ctor_30704360(
        v102,
        v69,
        v99,
        v101,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v148,
        initPos,
        0LL);
      if ( !v100 )
        goto LABEL_139;
      if ( v102 )
      {
        Member = sub_B0D964(v102, v100->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v69 >= v100->max_length )
        goto LABEL_143;
      v109 = &v100->obj.klass + (int)v69;
      v109[4] = (Il2CppClass *)v102;
      v110 = (BattleServantConfConponent_o *)(v109 + 4);
      v111 = (System_Int32_array **)v102;
    }
    else
    {
      v132 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v82, v83);
      v133 = (System_Int32_array **)v132;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_30704360(
          v132,
          v69,
          follower,
          followerClassId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v148,
          initPos,
          0LL);
        if ( !v100 )
          goto LABEL_139;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_30738796(v132, v69, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v100 )
          goto LABEL_139;
      }
      if ( v133 )
      {
        Member = sub_B0D964(v133, v100->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v69 >= v100->max_length )
        goto LABEL_143;
      v134 = &v100->obj.klass + (int)v69;
      v134[4] = (Il2CppClass *)v133;
      v110 = (BattleServantConfConponent_o *)(v134 + 4);
      v111 = v133;
    }
    sub_B0D840(v110, v111, v103, v104, v105, v106, v107, v108);
LABEL_132:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_139;
    if ( v69 >= memberList->max_length )
    {
LABEL_143:
      v138 = sub_B0D9A8(Member);
      sub_B0D948(v138, 0LL);
    }
    Member = (__int64)memberList->m_Items[v69];
    if ( !Member )
      goto LABEL_139;
    cost = this->fields.cost;
    ++v69;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Member, 0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v67);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v137) )
    *v140 = 1;
}


void __fastcall PartyListViewItem___ctor_31339244(
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
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
  __int64 Member; // x0
  const MethodInfo *v50; // x2
  struct DeckServant_o *deckInfo; // x8
  SingletonTemplate_PartyOrganizationUtility__c **v52; // x26
  PartyListViewItem_o *v53; // x27
  unsigned int v54; // w23
  const MethodInfo *v55; // x2
  int32_t v56; // w19
  int32_t v57; // w8
  BalanceConfig_c *v58; // x0
  struct PartyOrganizationListViewItem_array *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  int32_t v66; // w8
  struct QuestRestrictionInfo_o *v67; // x8
  unsigned int *v68; // x24
  FollowerInfo_array *QuestFollowerList; // x0
  const MethodInfo *v70; // x1
  const MethodInfo *v71; // x2
  __int64 v72; // x8
  unsigned __int64 v73; // x25
  __int64 v74; // x23
  int32_t *v75; // x8
  struct DeckServant_o *v76; // x8
  struct DeckServantData_array *svts; // x8
  __int64 v78; // x8
  int32_t v79; // w19
  unsigned __int64 max_length; // x8
  int32_t v81; // w1
  __int64 v82; // x9
  __int64 v83; // x20
  __int64 v84; // x23
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x20
  const MethodInfo *v92; // x6
  int v93; // w27
  struct DeckServant_o *v94; // x8
  struct DeckServantData_array *v95; // x8
  __int64 v96; // x8
  _BOOL4 v97; // w20
  int64_t v98; // x4
  SingletonTemplate_PartyOrganizationUtility__c *v99; // x0
  __int64 v100; // x1
  System_String_array **v101; // x2
  FollowerInfo_o *v102; // x23
  SingletonTemplate_PartyOrganizationUtility__c **v103; // x24
  PartyListViewItem_o *v104; // x26
  UserEventDeckEntity_o *v105; // x21
  int32_t v106; // w27
  bool IsNpc; // w0
  __int64 v108; // x1
  __int64 v109; // x2
  unsigned int *v110; // x19
  int32_t v111; // w28
  PartyOrganizationListViewItem_o *v112; // x20
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  __int64 v119; // x19
  FollowerInfo_o *v120; // x23
  unsigned int *v121; // x19
  int32_t v122; // w27
  PartyOrganizationListViewItem_o *v123; // x20
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  unsigned __int64 v130; // x27
  QuestRestrictionInfo_o *v131; // x25
  unsigned int *v132; // x19
  PartyOrganizationListViewItem_o *v133; // x0
  int32_t v134; // w1
  QuestRestrictionInfo_o *v135; // x4
  System_Int32_array **v136; // x20
  unsigned __int64 v137; // x22
  QuestRestrictionInfo_o *v138; // x27
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  __int64 v145; // x8
  __int64 v146; // x20
  __int64 v147; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v148; // x8
  int32_t v149; // w20
  int32_t v150; // w23
  int32_t DispLimitCount; // w0
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  UserServantEntity_o *v157; // x23
  System_Int64_array *EquipList; // x27
  __int64 v159; // x1
  __int64 v160; // x2
  PartyOrganizationListViewItem_o *v161; // x0
  System_Int32_array **v162; // x27
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v171; // x1
  __int64 v172; // x0
  __int64 v173; // x0
  UserServantMaster_o *Master_WarQuestSelectionMaster; // [xsp+20h] [xbp-100h]
  int32_t *v176; // [xsp+30h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+48h] [xbp-D8h]
  UserServantEntity_array *UserServantList; // [xsp+50h] [xbp-D0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+60h] [xbp-C0h]
  UserServantEntity_o **m_Items; // [xsp+70h] [xbp-B0h]
  __int64 v183; // [xsp+78h] [xbp-A8h]
  int32_t v184; // [xsp+84h] [xbp-9Ch]
  __int64 v185; // [xsp+88h] [xbp-98h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+90h] [xbp-90h]
  PartyListViewItem_o *v187; // [xsp+98h] [xbp-88h]
  int32_t initPos; // [xsp+ACh] [xbp-74h]
  __int64 v189; // [xsp+B0h] [xbp-70h]
  int32_t followerClassIda; // [xsp+BCh] [xbp-64h] BYREF
  FollowerInfo_o *followera; // [xsp+C0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16

  v14 = questRestrictionInfo;
  if ( (byte_42181DC & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, isBaseModify);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v21);
    sub_B0D8A4(&DataManager_TypeInfo, v22);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B0D8A4(&PartyOrganizationListViewItem___TypeInfo, v24);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v25);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v26);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v27);
    byte_42181DC = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v50) )
  {
    Member = (__int64)deck->fields.deckInfo;
    if ( !Member )
      goto LABEL_170;
    DeckServant__ResetInitPos((DeckServant_o *)Member, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  v52 = &SingletonTemplate_PartyOrganizationUtility__TypeInfo;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  if ( *(int *)(Member + 48) < 1 )
  {
    v53 = 0LL;
    if ( !questRestrictionInfo )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  v53 = *(PartyListViewItem_o **)(Member + 72);
  if ( questRestrictionInfo )
LABEL_21:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_22:
  v54 = 0;
  if ( follower && v53 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    v54 = *(_DWORD *)(Member + 48);
    Member = (__int64)PartyListViewItem__GetMember(v53, v54 - 1, v55);
    if ( !Member )
      goto LABEL_170;
    v56 = *(_DWORD *)(Member + 340);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v56, follower, 0LL);
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  if ( *(_QWORD *)(Member + 24) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    follower = *(FollowerInfo_o **)(Member + 24);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    followerClassId = *(_DWORD *)(Member + 32);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    v57 = *(_DWORD *)(Member + 36);
  }
  else
  {
    v57 = followerDeckId;
  }
  v184 = v57;
  v58 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v58 = BalanceConfig_TypeInfo;
  }
  v59 = (struct PartyOrganizationListViewItem_array *)sub_B0D8BC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v58->static_fields->DeckMemberMax);
  this->fields.memberList = v59;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v66 == 3 )
  {
    Member = (__int64)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_170;
    Member = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Member, 0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_170;
    v183 = Member;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0LL;
    v183 = 0LL;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v67 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo || (v68 = (unsigned int *)UserServantList, !Member) )
LABEL_170:
    sub_B0D97C(Member);
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Member,
                        v67->fields.questId,
                        v67->fields.questPhase,
                        0LL);
  v72 = 8LL * v54;
  v73 = 0LL;
  v74 = 0LL;
  v176 = &svtIdForceBattleList->m_Items[1];
  npcFollowerInfoList = QuestFollowerList;
  m_Items = UserServantList->m_Items;
  v185 = v72 - 8;
  v187 = v53;
  while ( 1 )
  {
    Member = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v73 >= *(int *)(*(_QWORD *)(Member + 184) + 156LL) )
      break;
    if ( v53 )
    {
      Member = (__int64)PartyListViewItem__GetMember(v53, v73, v71);
      if ( !Member )
        goto LABEL_170;
      v75 = (int32_t *)(Member + 340);
    }
    else
    {
      v76 = deck->fields.deckInfo;
      if ( !v76 )
        goto LABEL_170;
      svts = v76->fields.svts;
      if ( !svts )
        goto LABEL_170;
      if ( v73 >= svts->max_length )
        goto LABEL_171;
      v78 = *(__int64 *)((char *)svts->m_Items + v74);
      if ( !v78 )
        goto LABEL_170;
      v75 = (int32_t *)(v78 + 60);
    }
    v79 = *v75;
    v189 = v74;
    initPos = *v75;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v183 )
        goto LABEL_170;
      if ( (__int64)v73 >= *(int *)(v183 + 24) )
      {
        v130 = v73;
        v131 = v14;
        v132 = (unsigned int *)*p_memberList;
        v133 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v70, v71);
        v134 = v130;
        v135 = v14;
        v136 = (System_Int32_array **)v133;
        v137 = v130;
        v138 = v131;
        PartyOrganizationListViewItem___ctor_30738796(v133, v134, 0, setupInfo, v135, 1, initPos, 0LL);
        if ( !v132 )
          goto LABEL_170;
        if ( v136 )
        {
          Member = sub_B0D964(v136, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
          if ( !Member )
          {
LABEL_172:
            v173 = sub_B0D99C(Member);
            sub_B0D948(v173, 0LL);
          }
        }
        if ( v137 >= v132[6] )
          goto LABEL_171;
        *(_QWORD *)((char *)v132 + v74 + 32) = v136;
        v73 = v137;
        v14 = v138;
        sub_B0D840((BattleServantConfConponent_o *)((char *)v132 + v74 + 32), v136, v139, v140, v141, v142, v143, v144);
        v53 = v187;
        goto LABEL_160;
      }
      if ( svtIdForceBattleList )
      {
        if ( v185 != v74 && isFirstEnforceChange )
        {
          max_length = svtIdForceBattleList->max_length;
          if ( (__int64)v73 < (int)max_length )
          {
            if ( v73 >= max_length )
              goto LABEL_171;
            v81 = v176[v73];
            if ( v81 >= 1 )
            {
              if ( !v68 )
                goto LABEL_170;
              if ( v73 >= v68[6] )
                goto LABEL_171;
              v82 = *(__int64 *)((char *)m_Items + v74);
              if ( !v82 )
                goto LABEL_88;
              v84 = *(_QWORD *)(v82 + 80);
              v83 = *(_QWORD *)(v82 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v192.fields.currentCryptoKey = v84;
              *(_QWORD *)&v192.fields.fakeValue = v83;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v192, 0LL);
              max_length = svtIdForceBattleList->max_length;
              if ( v73 >= max_length )
                goto LABEL_171;
              v74 = v189;
              v81 = v176[v73];
              if ( (_DWORD)Member != v81 )
              {
LABEL_88:
                if ( v73 >= max_length )
                  goto LABEL_171;
                Member = (__int64)Master_WarQuestSelectionMaster;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_170;
                Member = (__int64)UserServantMaster__getSvtIdBattle(Master_WarQuestSelectionMaster, v81, 0LL);
                v91 = (System_Int32_array **)Member;
                if ( Member )
                {
                  Member = sub_B0D964(Member, *(_QWORD *)(*(_QWORD *)v68 + 64LL));
                  if ( !Member )
                    goto LABEL_172;
                }
                if ( v73 >= v68[6] )
                  goto LABEL_171;
                *(UserServantEntity_o **)((char *)m_Items + v74) = (UserServantEntity_o *)v91;
                sub_B0D840((BattleServantConfConponent_o *)((char *)m_Items + v74), v91, v85, v86, v87, v88, v89, v90);
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
    Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(v14, v79, 0LL);
    v93 = Member;
    if ( (Member & 1) != 0 )
    {
      v94 = deck->fields.deckInfo;
      if ( !v94 )
        goto LABEL_170;
      v95 = v94->fields.svts;
      if ( !v95 )
        goto LABEL_170;
      if ( v73 >= v95->max_length )
        goto LABEL_171;
      v96 = *(__int64 *)((char *)v95->m_Items + v74);
      if ( !v96 )
        goto LABEL_170;
      v97 = 0;
      if ( v185 != v74 )
      {
        v98 = *(_QWORD *)(v96 + 48);
        if ( v98 >= 1 )
          v97 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  v98,
                  v79,
                  v92);
      }
    }
    else
    {
      v97 = 0;
    }
    v99 = *v52;
    if ( (BYTE3((*v52)->vtable._0_Equals.methodPtr) & 4) != 0 && !v99->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v99);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v79, 0LL);
    if ( Member && ((v93 ^ 1) & 1) == 0 )
    {
      v102 = (FollowerInfo_o *)Member;
      v103 = v52;
      v104 = this;
      v105 = deck;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL) )
        v106 = 0;
      else
        v106 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v102, 0LL);
      v110 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v111 = 0;
      else
        v111 = v184;
      v112 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v108, v109);
      PartyOrganizationListViewItem___ctor_30704360(
        v112,
        v73,
        v102,
        v106,
        setupInfo,
        v14,
        friendPointCampaignEntityList,
        0,
        v111,
        initPos,
        0LL);
      if ( !v110 )
        goto LABEL_170;
      v53 = v187;
      if ( v112 )
      {
        Member = sub_B0D964(v112, *(_QWORD *)(*(_QWORD *)v110 + 64LL));
        if ( !Member )
          goto LABEL_172;
      }
      if ( v73 >= v110[6] )
        goto LABEL_171;
      deck = v105;
      *(_QWORD *)((char *)v110 + v189 + 32) = v112;
      sub_B0D840(
        (BattleServantConfConponent_o *)((char *)v110 + v189 + 32),
        (System_Int32_array **)v112,
        v113,
        v114,
        v115,
        v116,
        v117,
        v118);
      v74 = v189;
      this = v104;
      v52 = v103;
      v68 = (unsigned int *)UserServantList;
      goto LABEL_156;
    }
    v119 = v189;
    if ( v185 != v189 && !v97 )
    {
      if ( (v93 & 1) != 0 )
      {
        if ( !v68 )
          goto LABEL_170;
        if ( v73 >= v68[6] )
          goto LABEL_171;
        v145 = *(__int64 *)((char *)m_Items + v189);
        if ( v145 )
        {
          v147 = *(_QWORD *)(v145 + 80);
          v146 = *(_QWORD *)(v145 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v193.fields.currentCryptoKey = v147;
          *(_QWORD *)&v193.fields.fakeValue = v146;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v193, 0LL);
          if ( v73 >= v68[6] )
            goto LABEL_171;
          v148 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)m_Items + v189);
          if ( !v148 )
            goto LABEL_170;
          v149 = Member;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v148[6], 0LL);
          if ( v73 >= v68[6] )
            goto LABEL_171;
          v150 = Member;
          Member = *(__int64 *)((char *)m_Items + v189);
          if ( !Member )
            goto LABEL_170;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
          Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                     v14,
                     v149,
                     v150,
                     DispLimitCount,
                     initPos,
                     0,
                     0LL);
          v119 = v189;
          if ( (Member & 1) != 0 )
          {
            if ( v73 >= v68[6] )
              goto LABEL_171;
            *(UserServantEntity_o **)((char *)m_Items + v189) = 0LL;
            sub_B0D840(
              (BattleServantConfConponent_o *)((char *)m_Items + v189),
              0LL,
              v101,
              v152,
              v153,
              v154,
              v155,
              v156);
          }
        }
      }
      else if ( !v68 )
      {
        goto LABEL_170;
      }
      if ( v73 >= v68[6] )
        goto LABEL_171;
      v157 = *(UserServantEntity_o **)((char *)m_Items + v119);
      v121 = (unsigned int *)*p_memberList;
      if ( !v157 )
      {
        v123 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v100, v101);
        PartyOrganizationListViewItem___ctor_30738796(v123, v73, 0, setupInfo, v14, 1, initPos, 0LL);
        v53 = v187;
        if ( !v121 )
          goto LABEL_170;
        goto LABEL_152;
      }
      EquipList = UserEventDeckEntity__GetEquipList(deck, v73, 0LL);
      v123 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v159, v160);
      PartyOrganizationListViewItem___ctor_30730744(v123, v73, v157, EquipList, setupInfo, v14, 0LL, initPos, 0LL);
      if ( !v121 )
        goto LABEL_170;
    }
    else
    {
      v120 = followera;
      v121 = (unsigned int *)*p_memberList;
      if ( !followera )
      {
        v161 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v100, v101);
        v162 = (System_Int32_array **)v161;
        if ( follower )
          PartyOrganizationListViewItem___ctor_30704360(
            v161,
            v73,
            follower,
            followerClassId,
            setupInfo,
            v14,
            friendPointCampaignEntityList,
            0,
            v184,
            initPos,
            0LL);
        else
          PartyOrganizationListViewItem___ctor_30738796(v161, v73, 1, setupInfo, v14, 1, initPos, 0LL);
        v74 = v189;
        if ( !v121 )
          goto LABEL_170;
        if ( v162 )
        {
          Member = sub_B0D964(v162, *(_QWORD *)(*(_QWORD *)v121 + 64LL));
          if ( !Member )
            goto LABEL_172;
        }
        if ( v73 >= v121[6] )
          goto LABEL_171;
        *(_QWORD *)((char *)v121 + v189 + 32) = v162;
        sub_B0D840((BattleServantConfConponent_o *)((char *)v121 + v189 + 32), v162, v163, v164, v165, v166, v167, v168);
        v53 = v187;
        goto LABEL_156;
      }
      v122 = followerClassIda;
      v123 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v100, v101);
      PartyOrganizationListViewItem___ctor_30704360(v123, v73, v120, v122, setupInfo, v14, 0LL, 0, v184, initPos, 0LL);
      if ( !v121 )
        goto LABEL_170;
    }
    v53 = v187;
LABEL_152:
    v74 = v189;
    if ( v123 )
    {
      Member = sub_B0D964(v123, *(_QWORD *)(*(_QWORD *)v121 + 64LL));
      if ( !Member )
        goto LABEL_172;
    }
    if ( v73 >= v121[6] )
      goto LABEL_171;
    *(_QWORD *)((char *)v121 + v189 + 32) = v123;
    sub_B0D840(
      (BattleServantConfConponent_o *)((char *)v121 + v189 + 32),
      (System_Int32_array **)v123,
      v124,
      v125,
      v126,
      v127,
      v128,
      v129);
LABEL_156:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_170;
    if ( v73 >= memberList->max_length )
    {
LABEL_171:
      v172 = sub_B0D9A8(Member);
      sub_B0D948(v172, 0LL);
    }
    Member = *(__int64 *)((char *)memberList->m_Items + v74);
    if ( !Member )
      goto LABEL_170;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Member, 0LL)
                      + cost;
LABEL_160:
    ++v73;
    v74 += 8LL;
  }
  PartyListViewItem__CheckRestriction(this, v70);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v171) )
    *isBaseModify = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_31342376(
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
  BalanceConfig_c *v44; // x0
  struct PartyOrganizationListViewItem_array *v45; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  clsQuestCheck_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  int32_t klass; // w23
  struct PartyOrganizationListViewItem_array *v57; // x26
  PartyOrganizationListViewItem_o *v58; // x0
  System_Int32_array **v59; // x27
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v68; // x1
  __int64 v69; // x2
  int32_t i; // w23
  struct PartyOrganizationListViewItem_array *v71; // x26
  PartyOrganizationListViewItem_o *v72; // x24
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  Il2CppClass **v79; // x0
  struct PartyOrganizationListViewItem_array *v80; // x8
  int32_t v81; // w24
  BalanceConfig_c *v82; // x0
  __int64 v83; // x0
  __int64 v84; // x0

  if ( (byte_42181DD & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_B0D8A4(&PartyOrganizationListViewItem___TypeInfo, v20);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v22);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v23);
    sub_B0D8A4(&StringLiteral_1/*""*/, v24);
    byte_42181DD = 1;
  }
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.isDeckNameDefault = 0;
  v37 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.deckName, v37, v38, v39, v40, v41, v42, v43);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v44 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  v45 = (struct PartyOrganizationListViewItem_array *)sub_B0D8BC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v44->static_fields->DeckMemberMax);
  this->fields.memberList = v45;
  p_memberList = &this->fields.memberList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v53 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v53 )
    goto LABEL_41;
  if ( v53->fields.cQuestReleaseListP )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v53 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v53 )
      goto LABEL_41;
    follower = (FollowerInfo_o *)v53->fields.cQuestReleaseListP;
    v53 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v53 )
      goto LABEL_41;
    klass = (int32_t)v53[1].klass;
    v53 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v53 )
      goto LABEL_41;
    followerClassId = klass;
    followerDeckId = HIDWORD(v53[1].klass);
  }
  v57 = *p_memberList;
  v58 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v54, v55);
  v59 = (System_Int32_array **)v58;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_30704360(
      v58,
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
    if ( !v57 )
      goto LABEL_41;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_30738796(v58, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v57 )
      goto LABEL_41;
  }
  if ( v59 )
  {
    v53 = (clsQuestCheck_o *)sub_B0D964(v59, v57->obj.klass->_1.element_class);
    if ( !v53 )
    {
LABEL_43:
      v84 = sub_B0D99C(v53);
      sub_B0D948(v84, 0LL);
    }
  }
  if ( !v57->max_length )
    goto LABEL_42;
  v57->m_Items[0] = (PartyOrganizationListViewItem_o *)v59;
  sub_B0D840((BattleServantConfConponent_o *)v57->m_Items, v59, v60, v61, v62, v63, v64, v65);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_41;
  if ( !memberList->max_length )
  {
LABEL_42:
    v83 = sub_B0D9A8(v53);
    sub_B0D948(v83, 0LL);
  }
  v53 = (clsQuestCheck_o *)memberList->m_Items[0];
  if ( !v53 )
LABEL_41:
    sub_B0D97C(v53);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v53, 0LL) + cost;
  for ( i = 1; ; ++i )
  {
    v82 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v82 = BalanceConfig_TypeInfo;
    }
    if ( i >= v82->static_fields->DeckMemberMax )
      break;
    v71 = *p_memberList;
    v72 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v68, v69);
    PartyOrganizationListViewItem___ctor_30738796(v72, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v71 )
      goto LABEL_41;
    if ( v72 )
    {
      v53 = (clsQuestCheck_o *)sub_B0D964(v72, v71->obj.klass->_1.element_class);
      if ( !v53 )
        goto LABEL_43;
    }
    if ( i >= v71->max_length )
      goto LABEL_42;
    v79 = &v71->obj.klass + i;
    v79[4] = (Il2CppClass *)v72;
    sub_B0D840((BattleServantConfConponent_o *)(v79 + 4), (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
    v80 = this->fields.memberList;
    if ( !v80 )
      goto LABEL_41;
    if ( i >= v80->max_length )
      goto LABEL_42;
    v53 = (clsQuestCheck_o *)v80->m_Items[i];
    if ( !v53 )
      goto LABEL_41;
    v81 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v53, 0LL) + v81;
  }
  PartyListViewItem__CheckRestriction(this, v68);
}


void __fastcall PartyListViewItem___ctor_31343352(
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
  __int64 IsNeedDeckPosReset; // x0
  const MethodInfo *v40; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w25
  const MethodInfo *v43; // x3
  PartyListViewItem_o *v44; // x9
  int v45; // w28
  const MethodInfo *v46; // x2
  int32_t v47; // w23
  int32_t FollowerIndex; // w26
  BalanceConfig_c *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x9
  __int64 v57; // x27
  __int64 v58; // x21
  unsigned __int64 v59; // x8
  __int64 v60; // x23
  signed __int64 v61; // x24
  BalanceConfig_c *v62; // x0
  struct PartyOrganizationListViewItem_array *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct QuestRestrictionInfo_o *v70; // x8
  UserEventDeckEntity_o *v71; // x28
  __int64 v72; // x19
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x2
  int32_t *p_initPos; // x8
  struct DeckServant_o *v76; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v78; // x8
  int32_t initPos; // w26
  const MethodInfo *v80; // x6
  int v81; // w23
  _BOOL4 v82; // w25
  struct DeckServant_o *v83; // x8
  struct DeckServantData_array *v84; // x8
  DeckServantData_o *v85; // x8
  int64_t npcFollowerSvtId; // x4
  __int64 v87; // x1
  System_String_array **v88; // x2
  FollowerInfo_o *v89; // x24
  int32_t v90; // w25
  bool IsNpc; // w0
  __int64 v92; // x1
  __int64 v93; // x2
  struct PartyOrganizationListViewItem_array *v94; // x21
  int32_t v95; // w28
  PartyOrganizationListViewItem_o *v96; // x23
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  unsigned int max_length; // w8
  FollowerInfo_o *v104; // x24
  int32_t v105; // w25
  __int64 v106; // x21
  __int64 v107; // x23
  __int64 v108; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v109; // x23
  __int64 v110; // t1
  __int64 v111; // x24
  __int64 v112; // x25
  int32_t v113; // w24
  int32_t v114; // w25
  int32_t DispLimitCount; // w0
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  UserServantEntity_o *v121; // x24
  struct PartyOrganizationListViewItem_array *v122; // x28
  System_Int64_array *EquipList; // x25
  __int64 v124; // x1
  __int64 v125; // x2
  PartyOrganizationListViewItem_o *v126; // x23
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  Il2CppClass **v133; // x0
  PartyOrganizationListViewItem_o *v134; // x0
  Il2CppClass **v135; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v138; // x1
  __int64 v139; // x0
  __int64 v140; // x0
  FollowerInfo_array *npcFollowerInfoList; // [xsp+20h] [xbp-C0h]
  int v144; // [xsp+30h] [xbp-B0h]
  int v145; // [xsp+38h] [xbp-A8h]
  int v146; // [xsp+38h] [xbp-A8h]
  PartyListViewItem_o *v147; // [xsp+40h] [xbp-A0h]
  int32_t v148; // [xsp+4Ch] [xbp-94h]
  int32_t v149; // [xsp+5Ch] [xbp-84h]
  UserEventDeckEntity_o *v150; // [xsp+60h] [xbp-80h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+68h] [xbp-78h]
  bool v152; // [xsp+74h] [xbp-6Ch]
  int32_t v153; // [xsp+84h] [xbp-5Ch] BYREF
  FollowerInfo_o *followera; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16

  if ( (byte_42181DE & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, isBaseModify);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_B0D8A4(&DataManager_TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B0D8A4(&PartyOrganizationListViewItem___TypeInfo, v22);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v25);
    byte_42181DE = 1;
  }
  followera = 0LL;
  v153 = 0;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
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
  sub_B0D840(
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
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v40);
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  if ( *(int *)(IsNeedDeckPosReset + 48) < 1 )
  {
    v152 = 0;
    v147 = 0LL;
    v45 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v44 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 72);
    v45 = 0;
    v152 = v44 != 0LL;
    v147 = v44;
    if ( follower && v44 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      if ( !v147 )
        goto LABEL_149;
      v45 = *(_DWORD *)(IsNeedDeckPosReset + 48);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v147, v45 - 1, v46);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      v47 = *(_DWORD *)(IsNeedDeckPosReset + 340);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)IsNeedDeckPosReset, v47, follower, 0LL);
      v152 = 1;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v43);
  if ( FollowerIndex > 0 || questRestrictionInfo->fields.isNotTransitionSupportList )
  {
    if ( FollowerIndex > servantNumMax )
    {
LABEL_32:
      *isBaseModify = 1;
      v49 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v49 = BalanceConfig_TypeInfo;
      }
      FollowerIndex = servantNumMax;
      if ( servantNumMax > v49->static_fields->DeckMainMemberMax )
      {
        if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          FollowerIndex = v49->static_fields->DeckMainMemberMax;
          if ( !v49->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v49);
            FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
          }
        }
        else
        {
          FollowerIndex = v49->static_fields->DeckMainMemberMax;
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    follower = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v148 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v149 = *(_DWORD *)(IsNeedDeckPosReset + 36);
  }
  else
  {
    v149 = followerDeckId;
    v148 = followerClassId;
  }
  v145 = v45;
  v150 = deck;
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  v56 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v57 = IsNeedDeckPosReset;
  if ( (int)v56 >= 1 )
  {
    v58 = 0LL;
    v59 = 0LL;
    v60 = IsNeedDeckPosReset + 32;
    do
    {
      if ( v59 >= (unsigned int)v56 )
      {
LABEL_153:
        v139 = sub_B0D9A8(IsNeedDeckPosReset);
        sub_B0D948(v139, 0LL);
      }
      v61 = v59 + 1;
      if ( servantNumMax < (int)v59 + 1 && *(_QWORD *)(v60 + 8 * v59) )
      {
        *isBaseModify = 1;
        if ( v59 >= *(unsigned int *)(v57 + 24) )
          goto LABEL_153;
        *(_QWORD *)(v60 + 8 * v59) = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)(v60 + v58), 0LL, v50, v51, v52, v53, v54, v55);
      }
      LODWORD(v56) = *(_DWORD *)(v57 + 24);
      v58 += 8LL;
      v59 = v61;
    }
    while ( v61 < (int)v56 );
  }
  v62 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v62 = BalanceConfig_TypeInfo;
  }
  v63 = (struct PartyOrganizationListViewItem_array *)sub_B0D8BC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v62->static_fields->DeckMemberMax);
  this->fields.memberList = v63;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v70 = *p_questRestrictionInfo;
  v71 = v150;
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_149:
    sub_B0D97C(IsNeedDeckPosReset);
  v72 = 0LL;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          v70->fields.questId,
                          v70->fields.questPhase,
                          0LL);
  v146 = v145 - 1;
  v144 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (int)v72 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 156LL) )
      break;
    if ( v152 )
    {
      IsNeedDeckPosReset = (__int64)v147;
      if ( !v147 )
        goto LABEL_149;
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v147, v72, v74);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 340);
    }
    else
    {
      v76 = v71->fields.deckInfo;
      if ( !v76 )
        goto LABEL_149;
      svts = v76->fields.svts;
      if ( !svts )
        goto LABEL_149;
      if ( (unsigned int)v72 >= svts->max_length )
        goto LABEL_153;
      v78 = svts->m_Items[(int)v72];
      if ( !v78 )
        goto LABEL_149;
      p_initPos = &v78->fields.initPos;
    }
    initPos = *p_initPos;
    followera = 0LL;
    v153 = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(questRestrictionInfo, initPos, 0LL);
    v81 = IsNeedDeckPosReset;
    v82 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v83 = v71->fields.deckInfo;
      if ( !v83 )
        goto LABEL_149;
      v84 = v83->fields.svts;
      if ( !v84 )
        goto LABEL_149;
      if ( (unsigned int)v72 >= v84->max_length )
        goto LABEL_153;
      v85 = v84->m_Items[(int)v72];
      if ( !v85 )
        goto LABEL_149;
      v82 = 0;
      if ( v146 != (_DWORD)v72 )
      {
        npcFollowerSvtId = v85->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v82 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &v153,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v80);
      }
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    IsNeedDeckPosReset = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                                    (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                                    initPos,
                                    0LL);
    if ( IsNeedDeckPosReset && ((v81 ^ 1) & 1) == 0 )
    {
      v89 = (FollowerInfo_o *)IsNeedDeckPosReset;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsNeedDeckPosReset, 0LL) )
        v90 = 0;
      else
        v90 = v148;
      IsNpc = FollowerInfo__get_IsNpc(v89, 0LL);
      v94 = *p_memberList;
      if ( IsNpc )
        v95 = 0;
      else
        v95 = v149;
      v96 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v92, v93);
      PartyOrganizationListViewItem___ctor_30704360(
        v96,
        v72,
        v89,
        v90,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v95,
        initPos,
        0LL);
      if ( !v94 )
        goto LABEL_149;
      if ( v96 )
      {
        IsNeedDeckPosReset = sub_B0D964(v96, v94->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_154;
      }
      max_length = v94->max_length;
      v71 = v150;
      goto LABEL_140;
    }
    if ( v144 == (_DWORD)v72 || v82 )
    {
      v104 = followera;
      v94 = *p_memberList;
      if ( followera )
      {
        v105 = v153;
        v96 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v87, v88);
        PartyOrganizationListViewItem___ctor_30704360(
          v96,
          v72,
          v104,
          v105,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v149,
          initPos,
          0LL);
LABEL_136:
        if ( !v94 )
          goto LABEL_149;
      }
      else
      {
        v134 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v87, v88);
        v96 = v134;
        if ( follower )
        {
          PartyOrganizationListViewItem___ctor_30704360(
            v134,
            v72,
            follower,
            v148,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v149,
            initPos,
            0LL);
          goto LABEL_136;
        }
        PartyOrganizationListViewItem___ctor_30738796(v134, v72, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v94 )
          goto LABEL_149;
      }
      if ( v96 )
      {
        IsNeedDeckPosReset = sub_B0D964(v96, v94->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_154;
      }
      max_length = v94->max_length;
LABEL_140:
      if ( (unsigned int)v72 >= max_length )
        goto LABEL_153;
      v135 = &v94->obj.klass + (int)v72;
      v135[4] = (Il2CppClass *)v96;
      sub_B0D840(
        (BattleServantConfConponent_o *)(v135 + 4),
        (System_Int32_array **)v96,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
      goto LABEL_142;
    }
    v106 = v72;
    if ( (v81 & 1) != 0 )
    {
      if ( (unsigned int)v72 >= *(_DWORD *)(v57 + 24) )
        goto LABEL_153;
      v107 = v57 + 8LL * (int)v72;
      v110 = *(_QWORD *)(v107 + 32);
      v109 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v107 + 32);
      v108 = v110;
      v106 = (int)v72;
      if ( v110 )
      {
        v112 = *(_QWORD *)(v108 + 80);
        v111 = *(_QWORD *)(v108 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v155.fields.currentCryptoKey = v112;
        *(_QWORD *)&v155.fields.fakeValue = v111;
        IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v155, 0LL);
        if ( (unsigned int)v72 >= *(_DWORD *)(v57 + 24) )
          goto LABEL_153;
        if ( !*v109 )
          goto LABEL_149;
        v113 = IsNeedDeckPosReset;
        IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*v109)[6], 0LL);
        if ( (unsigned int)v72 >= *(_DWORD *)(v57 + 24) )
          goto LABEL_153;
        v114 = IsNeedDeckPosReset;
        IsNeedDeckPosReset = (__int64)*v109;
        if ( !*v109 )
          goto LABEL_149;
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0LL);
        IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                               questRestrictionInfo,
                               v113,
                               v114,
                               DispLimitCount,
                               initPos,
                               0,
                               0LL);
        if ( (IsNeedDeckPosReset & 1) != 0 )
        {
          if ( (unsigned int)v72 >= *(_DWORD *)(v57 + 24) )
            goto LABEL_153;
          *v109 = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)v109, 0LL, v88, v116, v117, v118, v119, v120);
        }
      }
    }
    if ( (unsigned int)v72 >= *(_DWORD *)(v57 + 24) )
      goto LABEL_153;
    v121 = *(UserServantEntity_o **)(v57 + 8 * v106 + 32);
    v122 = *p_memberList;
    if ( v121 )
    {
      EquipList = UserEventDeckEntity__GetEquipList(v150, v72, 0LL);
      v126 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v124, v125);
      PartyOrganizationListViewItem___ctor_30730744(
        v126,
        v72,
        v121,
        EquipList,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        0LL);
      if ( !v122 )
        goto LABEL_149;
    }
    else
    {
      v126 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v87, v88);
      PartyOrganizationListViewItem___ctor_30738796(v126, v72, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v122 )
        goto LABEL_149;
    }
    if ( v126 )
    {
      IsNeedDeckPosReset = sub_B0D964(v126, v122->obj.klass->_1.element_class);
      if ( !IsNeedDeckPosReset )
      {
LABEL_154:
        v140 = sub_B0D99C(IsNeedDeckPosReset);
        sub_B0D948(v140, 0LL);
      }
    }
    if ( (unsigned int)v72 >= v122->max_length )
      goto LABEL_153;
    v133 = &v122->obj.klass + v106;
    v133[4] = (Il2CppClass *)v126;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v133 + 4),
      (System_Int32_array **)v126,
      v127,
      v128,
      v129,
      v130,
      v131,
      v132);
    v71 = v150;
LABEL_142:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_149;
    if ( (unsigned int)v72 >= memberList->max_length )
      goto LABEL_153;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[(int)v72];
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0LL)
                      + cost;
    ++v72;
  }
  PartyListViewItem__CheckRestriction(this, v73);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v138) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_31346036(
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
  __int64 Member; // x0
  const MethodInfo *v69; // x2
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x28
  PartyListViewItem_o *v72; // x9
  const MethodInfo *v73; // x2
  int32_t v74; // w21
  FollowerInfo_array *QuestFollowerList; // x19
  __int64 v76; // x1
  __int64 v77; // x2
  const MethodInfo *v78; // x3
  int max_length; // w8
  FollowerInfo_array *v80; // x9
  unsigned int v81; // w19
  FollowerInfo_o *v82; // x1
  __int64 v83; // x1
  __int64 v84; // x2
  int32_t size; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v87; // w9
  unsigned int v88; // w10
  QuestRestrictionInfo_SlotInfo_o *v89; // x11
  struct DeckServant_o *v90; // x8
  int v91; // w26
  int v92; // w27
  __int64 v93; // x28
  struct DeckServantData_array *svts; // x8
  unsigned int v95; // w20
  PartyListViewItem___c__DisplayClass19_0_o *v96; // x19
  struct DeckServant_o *v97; // x8
  struct DeckServantData_array *v98; // x8
  __int64 v99; // x8
  __int64 v100; // x21
  struct DeckServant_o *v101; // x8
  struct DeckServantData_array *v102; // x8
  __int64 v103; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v104; // x21
  BalanceConfig_c *v105; // x0
  Il2CppClass *monitor; // x20
  __int64 klass_low; // x8
  Il2CppClass **v108; // x8
  __int64 NpcDeployIdx; // x0
  _BOOL8 v110; // x0
  const MethodInfo *v111; // x2
  BalanceConfig_c *v112; // x0
  const MethodInfo *v113; // x2
  const MethodInfo *v114; // x3
  int32_t i; // w19
  struct DeckServant_o *v116; // x8
  struct DeckServantData_array *v117; // x8
  DeckServantData_o *v118; // x8
  int32_t UserServantDeployIndex; // w0
  unsigned int v120; // w21
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x22
  Il2CppClass **v128; // x0
  bool v129; // w20
  BalanceConfig_c *v130; // x0
  struct PartyOrganizationListViewItem_array *v131; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  const MethodInfo *v138; // x1
  System_String_array **v139; // x2
  unsigned __int64 v140; // x28
  bool *p_isNpcEditablePos; // x21
  __int64 j; // x22
  unsigned int *v143; // x20
  PartyOrganizationListViewItem_o *v144; // x24
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  BalanceConfig_c *v151; // x0
  PartyListViewItem___c__DisplayClass19_1_o *v152; // x24
  __int64 v153; // x1
  const MethodInfo *v154; // x2
  int32_t *v155; // x8
  struct DeckServant_o *v156; // x8
  struct DeckServantData_array *v157; // x8
  __int64 v158; // x8
  int32_t v159; // w19
  const MethodInfo *v160; // x6
  bool v161; // w8
  int64_t v162; // x4
  bool *v163; // x25
  bool v164; // w21
  bool v165; // w20
  __int64 v166; // x1
  System_String_array **v167; // x2
  FollowerInfo_o *v168; // x27
  bool IsNpc; // w0
  int32_t v170; // w8
  bool v171; // w0
  __int64 v172; // x1
  __int64 v173; // x2
  unsigned int *v174; // x20
  int32_t v175; // w21
  PartyOrganizationListViewItem_o *v176; // x24
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  unsigned __int64 v183; // x25
  FollowerInfo_o *v184; // x27
  bool *v185; // x20
  unsigned int *v186; // x21
  int32_t v187; // w25
  PartyOrganizationListViewItem_o *v188; // x24
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  PartyOrganizationListViewItem_o *v195; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v196; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v197; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v198; // x27
  __int64 v199; // x1
  __int64 v200; // x2
  FollowerInfo_o *v201; // x24
  unsigned int v202; // w21
  unsigned int *v203; // x26
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v205; // x8
  int32_t classId; // w20
  PartyOrganizationListViewItem_o *v207; // x27
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  __int64 v214; // x1
  __int64 v215; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v216; // x21
  __int64 v217; // x20
  FollowerInfo_o *v218; // x24
  unsigned int *v219; // x21
  PartyOrganizationListViewItem_o *v220; // x24
  System_String_array **v221; // x2
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  int v229; // w8
  PartyOrganizationListViewItem_o *v230; // x24
  System_String_array **v231; // x2
  System_String_array **v232; // x3
  System_Boolean_array **v233; // x4
  System_Int32_array **v234; // x5
  System_Int32_array *v235; // x6
  System_Int32_array *v236; // x7
  UserServantEntity_array *v237; // x20
  __int64 v238; // x8
  __int64 v239; // x24
  __int64 v240; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v241; // x8
  int32_t v242; // w27
  int32_t v243; // w24
  int32_t DispLimitCount; // w0
  System_String_array **v245; // x3
  System_Boolean_array **v246; // x4
  System_Int32_array **v247; // x5
  System_Int32_array *v248; // x6
  System_Int32_array *v249; // x7
  unsigned int *v250; // x21
  UserServantEntity_o *v251; // x24
  unsigned int *v252; // x20
  __int64 v253; // x1
  __int64 v254; // x2
  PartyOrganizationListViewItem_o *v255; // x27
  System_String_array **v256; // x2
  System_String_array **v257; // x3
  System_Boolean_array **v258; // x4
  System_Int32_array **v259; // x5
  System_Int32_array *v260; // x6
  System_Int32_array *v261; // x7
  PartyOrganizationListViewItem_o *v262; // x24
  System_String_array **v263; // x2
  System_String_array **v264; // x3
  System_Boolean_array **v265; // x4
  System_Int32_array **v266; // x5
  System_Int32_array *v267; // x6
  System_Int32_array *v268; // x7
  struct ServantLeaderInfo_array *v269; // x8
  ServantLeaderInfo_o *v270; // x8
  int32_t v271; // w20
  PartyOrganizationListViewItem_o *v272; // x27
  System_String_array **v273; // x2
  System_String_array **v274; // x3
  System_Boolean_array **v275; // x4
  System_Int32_array **v276; // x5
  System_Int32_array *v277; // x6
  System_Int32_array *v278; // x7
  __int64 v279; // x21
  int v280; // w26
  unsigned __int64 v281; // x28
  UserServantEntity_o **m_Items; // x27
  PartyListViewItem___c__DisplayClass19_2_o *v283; // x19
  __int64 v284; // x1
  __int64 v285; // x2
  signed __int64 v286; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v287; // x22
  System_String_array **v288; // x3
  System_Boolean_array **v289; // x4
  System_Int32_array **v290; // x5
  System_Int32_array *v291; // x6
  System_Int32_array *v292; // x7
  unsigned __int64 v293; // x8
  unsigned __int64 v294; // x20
  signed __int64 v295; // x21
  const MethodInfo *v296; // x6
  int v297; // w27
  struct DeckServant_o *v298; // x8
  struct DeckServantData_array *v299; // x8
  __int64 v300; // x8
  int64_t v301; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  __int64 v303; // x1
  __int64 v304; // x2
  FollowerInfo_o *v305; // x22
  bool *v306; // x25
  int32_t v307; // w28
  bool v308; // w0
  __int64 v309; // x1
  __int64 v310; // x2
  unsigned int *v311; // x20
  int32_t v312; // w23
  PartyOrganizationListViewItem_o *v313; // x27
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  struct PartyOrganizationListViewItem_array *v320; // x8
  struct DeckServant_o *v321; // x9
  struct DeckServantData_array *v322; // x9
  __int64 v323; // x9
  __int64 v324; // x8
  FollowerInfo_o *v325; // x22
  unsigned int *v326; // x28
  int32_t v327; // w28
  unsigned int *v328; // x19
  PartyOrganizationListViewItem_o *v329; // x27
  __int64 IsRestrictionServantIndividuality; // x0
  System_String_array **v331; // x2
  System_String_array **v332; // x3
  System_Boolean_array **v333; // x4
  System_Int32_array **v334; // x5
  System_Int32_array *v335; // x6
  System_Int32_array *v336; // x7
  BattleServantConfConponent_o *v337; // x0
  PartyOrganizationListViewItem_o *v338; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v339; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v340; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v341; // x22
  __int64 v342; // x1
  System_String_array **v343; // x2
  il2cpp_array_size_t *v344; // x20
  __int64 v345; // x8
  __int64 v346; // x22
  __int64 v347; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v348; // x8
  int32_t v349; // w22
  int32_t v350; // w27
  int32_t v351; // w0
  System_String_array **v352; // x3
  System_Boolean_array **v353; // x4
  System_Int32_array **v354; // x5
  System_Int32_array *v355; // x6
  System_Int32_array *v356; // x7
  __int64 v357; // x1
  __int64 v358; // x2
  FollowerInfo_o *v359; // x27
  struct PartyOrganizationListViewItem_array *v360; // x8
  struct DeckServant_o *v361; // x9
  struct DeckServantData_array *v362; // x9
  __int64 v363; // x9
  __int64 v364; // x8
  int32_t v365; // w8
  unsigned int v366; // w20
  unsigned int *v367; // x22
  struct ServantLeaderInfo_array *v368; // x8
  ServantLeaderInfo_o *v369; // x8
  PartyOrganizationListViewItem_o *v370; // x28
  System_String_array **v371; // x2
  System_String_array **v372; // x3
  System_Boolean_array **v373; // x4
  System_Int32_array **v374; // x5
  System_Int32_array *v375; // x6
  System_Int32_array *v376; // x7
  UserServantEntity_o *v377; // x27
  unsigned int *v378; // x20
  System_Int64_array *EquipList; // x28
  __int64 v380; // x1
  __int64 v381; // x2
  PartyOrganizationListViewItem_o *v382; // x22
  System_String_array **v383; // x2
  System_String_array **v384; // x3
  System_Boolean_array **v385; // x4
  System_Int32_array **v386; // x5
  System_Int32_array *v387; // x6
  System_Int32_array *v388; // x7
  unsigned int *v389; // x28
  PartyOrganizationListViewItem_o *v390; // x22
  System_String_array **v391; // x2
  System_String_array **v392; // x3
  System_Boolean_array **v393; // x4
  System_Int32_array **v394; // x5
  System_Int32_array *v395; // x6
  System_Int32_array *v396; // x7
  struct PartyOrganizationListViewItem_array *v397; // x8
  int32_t v398; // w19
  __int64 v399; // x26
  unsigned __int64 k; // x24
  unsigned int *v401; // x20
  PartyOrganizationListViewItem_o *v402; // x27
  System_String_array **v403; // x2
  System_String_array **v404; // x3
  System_Boolean_array **v405; // x4
  System_Int32_array **v406; // x5
  System_Int32_array *v407; // x6
  System_Int32_array *v408; // x7
  BalanceConfig_c *v409; // x0
  PartyListViewItem___c__DisplayClass19_3_o *v410; // x28
  __int64 v411; // x1
  const MethodInfo *v412; // x2
  int32_t *v413; // x8
  struct DeckServant_o *v414; // x8
  struct DeckServantData_array *v415; // x8
  __int64 v416; // x8
  int32_t v417; // w19
  const MethodInfo *v418; // x1
  __int64 v419; // x0
  __int64 v420; // x0
  __int64 v421; // x0
  __int64 v422; // x0
  __int64 v423; // x0
  __int64 v424; // x0
  int32_t initPos; // [xsp+8h] [xbp-168h]
  bool *v426; // [xsp+18h] [xbp-158h]
  int32_t v427; // [xsp+20h] [xbp-150h]
  int v428; // [xsp+2Ch] [xbp-144h]
  _BOOL4 v429; // [xsp+2Ch] [xbp-144h]
  int32_t v430; // [xsp+3Ch] [xbp-134h]
  int v431; // [xsp+40h] [xbp-130h]
  int32_t v432; // [xsp+44h] [xbp-12Ch]
  int v433; // [xsp+48h] [xbp-128h]
  bool *v434; // [xsp+48h] [xbp-128h]
  int v435; // [xsp+48h] [xbp-128h]
  int32_t FollowerIndex; // [xsp+54h] [xbp-11Ch]
  PartyListViewItem_o *v437; // [xsp+58h] [xbp-118h]
  System_Int64_array *equipIdLista; // [xsp+60h] [xbp-110h]
  int equipIdList; // [xsp+60h] [xbp-110h]
  FollowerInfo_o *followerInfo; // [xsp+68h] [xbp-108h]
  UserServantEntity_array *userServantList; // [xsp+70h] [xbp-100h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+78h] [xbp-F8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v443; // [xsp+80h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+88h] [xbp-E8h]
  System_Int64_array *v445; // [xsp+90h] [xbp-E0h]
  System_Int64_array *v446; // [xsp+90h] [xbp-E0h]
  il2cpp_array_size_t *p_max_length; // [xsp+90h] [xbp-E0h]
  PartyListViewItem_o *v448; // [xsp+98h] [xbp-D8h]
  int32_t DeckMemberMax; // [xsp+A8h] [xbp-C8h]
  bool v451; // [xsp+A8h] [xbp-C8h]
  int32_t v452; // [xsp+A8h] [xbp-C8h]
  bool v453; // [xsp+B4h] [xbp-BCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+B8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v456; // [xsp+C8h] [xbp-A8h] BYREF
  int32_t v457; // [xsp+E4h] [xbp-8Ch] BYREF
  FollowerInfo_o *v458; // [xsp+E8h] [xbp-88h] BYREF
  int32_t v459; // [xsp+F4h] [xbp-7Ch] BYREF
  FollowerInfo_o *v460; // [xsp+F8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v461; // [xsp+100h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v462; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v463; // 0:x0.16

  v18 = isBaseModify;
  if ( (byte_42181DF & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, isBaseModify);
    sub_B0D8A4(&Method_BasicHelper_Any_FollowerInfo___, v20);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v21);
    sub_B0D8A4(&DataManager_TypeInfo, v22);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v23);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_FollowerInfo___, v24);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___, v25);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___, v26);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__, v30);
    sub_B0D8A4(&FollowerInfo___TypeInfo, v31);
    sub_B0D8A4(&Method_System_Func_FollowerInfo__bool___ctor__, v32);
    sub_B0D8A4(&System_Func_FollowerInfo__bool__TypeInfo, v33);
    sub_B0D8A4(&long___TypeInfo, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v37);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__, v38);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__, v39);
    sub_B0D8A4(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v40);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
    sub_B0D8A4(&PartyOrganizationListViewItem___TypeInfo, v42);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v43);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v44);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v45);
    sub_B0D8A4(&Method_PartyListViewItem___c__DisplayClass19_0___ctor_b__0__, v46);
    sub_B0D8A4(&PartyListViewItem___c__DisplayClass19_0_TypeInfo, v47);
    sub_B0D8A4(&Method_PartyListViewItem___c__DisplayClass19_1___ctor_b__1__, v48);
    sub_B0D8A4(&PartyListViewItem___c__DisplayClass19_1_TypeInfo, v49);
    sub_B0D8A4(&Method_PartyListViewItem___c__DisplayClass19_2___ctor_b__2__, v50);
    sub_B0D8A4(&PartyListViewItem___c__DisplayClass19_2_TypeInfo, v51);
    sub_B0D8A4(&Method_PartyListViewItem___c__DisplayClass19_3___ctor_b__3__, v52);
    sub_B0D8A4(&PartyListViewItem___c__DisplayClass19_3_TypeInfo, v53);
    sub_B0D8A4(&UserServantEntity___TypeInfo, v54);
    byte_42181DF = 1;
  }
  memset(&v461, 0, sizeof(v461));
  v460 = 0LL;
  v459 = 0;
  v458 = 0LL;
  v457 = 0;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
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
  sub_B0D840(
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
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v69) )
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
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_465;
  followerInfo = follower;
  if ( *(int *)(Member + 48) < 1 )
  {
    v453 = 0;
    v448 = 0LL;
    v431 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_465;
    v72 = *(PartyListViewItem_o **)(Member + 72);
    v431 = 0;
    v453 = v72 != 0LL;
    v448 = v72;
    if ( follower && v72 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_465;
      if ( !v448 )
        goto LABEL_465;
      v431 = *(_DWORD *)(Member + 48);
      Member = (__int64)PartyListViewItem__GetMember(v448, v431 - 1, v73);
      if ( !Member )
        goto LABEL_465;
      v74 = *(_DWORD *)(Member + 340);
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_465;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v74, follower, 0LL);
      v453 = 1;
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
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_465;
  if ( !Member )
    goto LABEL_465;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Member,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0LL);
  v443 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_FollowerInfo__TypeInfo,
                                                                                                   v76,
                                                                                                   v77);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v443,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  if ( !QuestFollowerList )
    goto LABEL_465;
  max_length = QuestFollowerList->max_length;
  v80 = QuestFollowerList;
  npcFollowerInfoList = QuestFollowerList;
  if ( max_length >= 1 )
  {
    v81 = 0;
    while ( v81 < max_length )
    {
      v82 = v80->m_Items[v81];
      if ( !v82 )
        goto LABEL_465;
      if ( !v82->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v82->fields.isFixedNpc) )
      {
        Member = (__int64)v443;
        if ( !v443 )
          goto LABEL_465;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v443,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v82,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_FollowerInfo__Add__);
        v80 = npcFollowerInfoList;
      }
      max_length = v80->max_length;
      if ( (int)++v81 >= max_length )
        goto LABEL_52;
    }
LABEL_472:
    v419 = sub_B0D9A8(Member);
    sub_B0D948(v419, 0LL);
  }
LABEL_52:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v443,
                    v78);
  questRestrictionInfoa = questRestrictionInfo;
  v437 = this;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
  {
LABEL_132:
    v129 = isNew;
    goto LABEL_133;
  }
  Member = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (Member & 1) != 0 )
  {
    if ( !v443 )
      goto LABEL_465;
    size = v443->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_465;
    v87 = slotInfos->max_length;
    if ( v87 >= 1 )
    {
      size = 0;
      v88 = 0;
      while ( v88 < v87 )
      {
        v89 = slotInfos->m_Items[v88];
        if ( !v89 )
          goto LABEL_465;
        if ( v89->fields.slotType == 1 )
          size += v89->fields.isMoved;
        if ( (int)++v88 >= v87 )
          goto LABEL_67;
      }
      goto LABEL_472;
    }
    size = 0;
  }
LABEL_67:
  v90 = deck->fields.deckInfo;
  v445 = NpcServantFollowerIds;
  if ( !v90 )
    goto LABEL_465;
  v91 = 0;
  v92 = 0;
  v93 = 4LL;
  while ( 1 )
  {
    svts = v90->fields.svts;
    if ( !svts )
      goto LABEL_465;
    v95 = v93 - 4;
    if ( (int)v93 - 4 >= (signed int)svts->max_length )
      break;
    v96 = (PartyListViewItem___c__DisplayClass19_0_o *)sub_B0D974(
                                                         PartyListViewItem___c__DisplayClass19_0_TypeInfo,
                                                         v83,
                                                         v84);
    PartyListViewItem___c__DisplayClass19_0___ctor(v96, 0LL);
    v97 = deck->fields.deckInfo;
    if ( v97 )
    {
      v98 = v97->fields.svts;
      if ( v98 )
      {
        if ( v95 >= v98->max_length )
          goto LABEL_472;
        v99 = *((_QWORD *)&v98->obj.klass + v93);
        if ( v99 )
        {
          if ( v96 )
          {
            v100 = *(_QWORD *)(v99 + 24);
            v96->fields.npcSvtId = *(_QWORD *)(v99 + 48);
            v101 = deck->fields.deckInfo;
            if ( v101 )
            {
              v102 = v101->fields.svts;
              if ( v102 )
              {
                if ( v95 >= v102->max_length )
                  goto LABEL_472;
                v103 = *((_QWORD *)&v102->obj.klass + v93);
                if ( v103 )
                {
                  Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(
                             questRestrictionInfo,
                             *(_DWORD *)(v103 + 60),
                             0LL);
                  if ( (int)v95 >= DeckMemberMax && (v100 || v96->fields.npcSvtId) )
                    v91 = 1;
                  if ( !(Member & 1 | (v96->fields.npcSvtId == 0)) )
                  {
                    v104 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                                System_Func_FollowerInfo__bool__TypeInfo,
                                                                                                v83,
                                                                                                v84);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      v104,
                      (Il2CppObject *)v96,
                      Method_PartyListViewItem___c__DisplayClass19_0___ctor_b__0__,
                      (const MethodInfo_26189B8 *)Method_System_Func_FollowerInfo__bool___ctor__);
                    Member = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                               (System_Collections_Generic_List_T__o *)v443,
                               (System_Func_T__bool__o *)v104,
                               (const MethodInfo_1707138 *)Method_BasicHelper_Any_FollowerInfo___);
                    v92 += Member & 1;
                  }
                  v90 = deck->fields.deckInfo;
                  ++v93;
                  if ( v90 )
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
  if ( ((v92 == size) & ~v91) != 0 )
  {
    this = v437;
    NpcServantFollowerIds = v445;
    goto LABEL_132;
  }
  this = v437;
  v105 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v105 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_B0D8BC(
                                                  long___TypeInfo,
                                                  (unsigned int)v105->static_fields->DeckMemberMax);
  Member = (__int64)v443;
  if ( !v443 )
    goto LABEL_465;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v456,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v443,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v461 = v456;
  while ( 1 )
  {
    v110 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v461,
             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v110 )
      break;
    if ( !v461.fields.current )
      sub_B0D97C(v110);
    monitor = (Il2CppClass *)v461.fields.current[4].monitor;
    if ( monitor )
    {
      klass_low = SLODWORD(v461.fields.current[5].klass);
      if ( (int)klass_low >= 1 )
      {
        if ( !NpcServantFollowerIds )
          sub_B0D97C(v110);
        if ( (unsigned int)klass_low >= NpcServantFollowerIds->max_length )
        {
          v421 = sub_B0D9A8(v110);
          sub_B0D948(v421, 0LL);
        }
        v108 = &NpcServantFollowerIds->obj.klass + klass_low;
        goto LABEL_104;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(v437, NpcServantFollowerIds, v111);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_B0D97C(NpcDeployIdx);
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
        {
          v424 = sub_B0D9A8(NpcDeployIdx);
          sub_B0D948(v424, 0LL);
        }
        v108 = &NpcServantFollowerIds->obj.klass + (int)NpcDeployIdx;
LABEL_104:
        v108[4] = monitor;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v461,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v112 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v112 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_B0D8BC(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v112->static_fields->DeckMemberMax);
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
    v116 = deck->fields.deckInfo;
    if ( !v116 )
      goto LABEL_465;
    v117 = v116->fields.svts;
    if ( !v117 )
      goto LABEL_465;
    if ( i >= v117->max_length )
      goto LABEL_472;
    v118 = v117->m_Items[i];
    if ( !v118 )
      goto LABEL_465;
    if ( v118->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Member,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v114);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v120 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Member = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0LL);
          if ( !userServantList )
            goto LABEL_465;
          v127 = (System_Int32_array **)Member;
          if ( Member )
          {
            Member = sub_B0D964(Member, userServantList->obj.klass->_1.element_class);
            if ( !Member )
            {
LABEL_473:
              v420 = sub_B0D99C(Member);
              sub_B0D948(v420, 0LL);
            }
          }
          if ( v120 >= userServantList->max_length )
            goto LABEL_472;
          v128 = &userServantList->obj.klass + (int)v120;
          v128[4] = (Il2CppClass *)v127;
          sub_B0D840((BattleServantConfConponent_o *)(v128 + 4), v127, v121, v122, v123, v124, v125, v126);
        }
      }
    }
  }
  if ( FollowerIndex < 1 )
    goto LABEL_132;
  v129 = isNew;
  if ( !questRestrictionInfo->fields.isNotTransitionSupportList && !questRestrictionInfo->fields.isNpcOnlyBattle )
    FollowerIndex = PartyListViewItem__GetSupportInitIndex(
                      v437,
                      (System_Collections_Generic_List_FollowerInfo__o *)v443,
                      v113);
LABEL_133:
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_465;
  if ( !*(_QWORD *)(Member + 24) )
  {
    v432 = followerDeckId;
    v430 = followerClassId;
    goto LABEL_146;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member
    || (followerInfo = *(FollowerInfo_o **)(Member + 24),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (v430 = *(_DWORD *)(Member + 32),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_465:
    sub_B0D97C(Member);
  }
  v432 = *(_DWORD *)(Member + 36);
LABEL_146:
  v130 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v130 = BalanceConfig_TypeInfo;
  }
  v131 = (struct PartyOrganizationListViewItem_array *)sub_B0D8BC(
                                                         PartyOrganizationListViewItem___TypeInfo,
                                                         (unsigned int)v130->static_fields->DeckMemberMax);
  this->fields.memberList = v131;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v131,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( !v129 && questRestrictionInfo->fields.isNpcEditablePos )
  {
    v446 = NpcServantFollowerIds;
    v140 = 0LL;
    p_isNpcEditablePos = &questRestrictionInfo->fields.isNpcEditablePos;
    v428 = -1;
    while ( 1 )
    {
      for ( j = 8 * v140 + 32; ; j += 8LL )
      {
        v151 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v151 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v140 >= v151->static_fields->DeckMemberMax )
          goto LABEL_467;
        v152 = (PartyListViewItem___c__DisplayClass19_1_o *)sub_B0D974(
                                                              PartyListViewItem___c__DisplayClass19_1_TypeInfo,
                                                              v138,
                                                              v139);
        PartyListViewItem___c__DisplayClass19_1___ctor(v152, 0LL);
        if ( v453 )
        {
          Member = (__int64)v448;
          if ( !v448 )
            goto LABEL_465;
          Member = (__int64)PartyListViewItem__GetMember(v448, v140, v154);
          if ( !Member )
            goto LABEL_465;
          v155 = (int32_t *)(Member + 340);
        }
        else
        {
          v156 = deck->fields.deckInfo;
          if ( !v156 )
            goto LABEL_465;
          v157 = v156->fields.svts;
          if ( !v157 )
            goto LABEL_465;
          if ( v140 >= v157->max_length )
            goto LABEL_472;
          v158 = *(__int64 *)((char *)&v157->obj.klass + j);
          if ( !v158 )
            goto LABEL_465;
          v155 = (int32_t *)(v158 + 60);
        }
        v159 = *v155;
        if ( (__int64)v140 < DeckMemberMax )
          break;
        v143 = (unsigned int *)*p_memberList;
        v144 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v153, v154);
        PartyOrganizationListViewItem___ctor_30738796(v144, v140, 0, setupInfo, questRestrictionInfo, 1, v159, 0LL);
        if ( !v143 )
          goto LABEL_465;
        if ( v144 )
        {
          Member = sub_B0D964(v144, *(_QWORD *)(*(_QWORD *)v143 + 64LL));
          if ( !Member )
            goto LABEL_473;
        }
        if ( v140 >= v143[6] )
          goto LABEL_472;
        *(_QWORD *)((char *)v143 + j) = v144;
        sub_B0D840(
          (BattleServantConfConponent_o *)((char *)v143 + j),
          (System_Int32_array **)v144,
          v145,
          v146,
          v147,
          v148,
          v149,
          v150);
        ++v140;
      }
      if ( !v152 )
        goto LABEL_465;
      v152->fields.chkIdx = v140 + 1;
      v460 = 0LL;
      v459 = 0;
      Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(questRestrictionInfoa, v159, 0LL);
      v161 = 0;
      v433 = Member;
      if ( (Member & 1) != 0 )
      {
        if ( !v446 )
          goto LABEL_465;
        if ( v140 >= v446->max_length )
          goto LABEL_472;
        v162 = *(int64_t *)((char *)&v446->obj.klass + j);
        v161 = v162 >= 1
            && v152->fields.chkIdx != v431
            && PartyListViewItem__SetNpcFollowerInfo(this, &v460, &v459, npcFollowerInfoList, v162, v159, v160);
      }
      v163 = p_isNpcEditablePos;
      v164 = v161;
      v165 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfoa, 0LL)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfoa, v159, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_465;
      Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v159, 0LL);
      if ( !Member || ((v433 ^ 1) & 1) != 0 )
      {
        if ( v164 || v152->fields.chkIdx == FollowerIndex )
        {
          v184 = v460;
          v185 = v163;
          v186 = (unsigned int *)*p_memberList;
          if ( v460 )
          {
            v187 = v459;
            v188 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v166, v167);
            PartyOrganizationListViewItem___ctor_30704360(
              v188,
              v140,
              v184,
              v187,
              setupInfo,
              questRestrictionInfoa,
              0LL,
              0,
              v432,
              v159,
              0LL);
            v183 = v140 + 1;
            if ( !v186 )
              goto LABEL_465;
          }
          else
          {
            v195 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v166, v167);
            v183 = v140 + 1;
            v188 = v195;
            if ( followerInfo )
              PartyOrganizationListViewItem___ctor_30704360(
                v195,
                v140,
                followerInfo,
                v430,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                0,
                v432,
                v159,
                0LL);
            else
              PartyOrganizationListViewItem___ctor_30738796(
                v195,
                v140,
                1,
                setupInfo,
                questRestrictionInfoa,
                1,
                v159,
                0LL);
            if ( !v186 )
              goto LABEL_465;
          }
          if ( v188 )
          {
            Member = sub_B0D964(v188, *(_QWORD *)(*(_QWORD *)v186 + 64LL));
            if ( !Member )
              goto LABEL_473;
          }
          if ( v140 >= v186[6] )
            goto LABEL_472;
          *(_QWORD *)((char *)v186 + j) = v188;
          sub_B0D840(
            (BattleServantConfConponent_o *)((char *)v186 + j),
            (System_Int32_array **)v188,
            v189,
            v190,
            v191,
            v192,
            v193,
            v194);
          p_isNpcEditablePos = v185;
        }
        else if ( v165 )
        {
          v196 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_FollowerInfo__bool__TypeInfo,
                                                                                      v166,
                                                                                      v167);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v196,
            (Il2CppObject *)v152,
            Method_PartyListViewItem___c__DisplayClass19_1___ctor_b__1__,
            (const MethodInfo_26189B8 *)Method_System_Func_FollowerInfo__bool___ctor__);
          v197 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v443,
                   (System_Func_TSource__bool__o *)v196,
                   (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v198 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B0D964(v197, FollowerInfo___TypeInfo);
          if ( !v198 )
            v198 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                          v197,
                                                                          (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          Member = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     v198,
                     (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          v426 = v163;
          if ( (Member & 1) != 0 )
          {
            Member = (__int64)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                v198,
                                0,
                                (const MethodInfo_1B49958 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v183 = v140 + 1;
            v201 = (FollowerInfo_o *)Member;
            v202 = v428;
            v203 = (unsigned int *)*p_memberList;
            if ( Member )
              goto LABEL_211;
          }
          else
          {
            if ( !v443 )
              goto LABEL_465;
            v229 = v443->fields._size;
            if ( v229 >= 1 )
            {
              v202 = 0;
              while ( 1 )
              {
                if ( v229 <= v202 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                v201 = (FollowerInfo_o *)v443->fields._items->m_Items[v202];
                if ( !v201 || !v446 )
                  goto LABEL_465;
                if ( v140 >= v446->max_length )
                  goto LABEL_472;
                if ( (Il2CppClass *)v201->fields.npcFollowerSvtId != *(Il2CppClass **)((char *)&v446->obj.klass + j) )
                {
                  if ( v443->fields._size <= v202 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                  if ( v428 < (int)v202 && v201->fields.npcInitIdx <= 0 )
                    break;
                }
                ++v202;
                v229 = v443->fields._size;
                if ( (int)v202 >= v229 )
                  goto LABEL_260;
              }
              v183 = v140 + 1;
              if ( v443->fields._size <= v202 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v203 = (unsigned int *)*p_memberList;
LABEL_211:
              userSvtLeaderHash = v201->fields.userSvtLeaderHash;
              if ( !userSvtLeaderHash )
                goto LABEL_465;
              if ( !userSvtLeaderHash->max_length )
                goto LABEL_472;
              v205 = userSvtLeaderHash->m_Items[0];
              if ( !v205 )
                goto LABEL_465;
              classId = v205->fields.classId;
              v207 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v199, v200);
              PartyOrganizationListViewItem___ctor_30704360(
                v207,
                v140,
                v201,
                classId,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                1,
                v432,
                v159,
                0LL);
              if ( !v203 )
                goto LABEL_465;
              if ( v207 )
              {
                Member = sub_B0D964(v207, *(_QWORD *)(*(_QWORD *)v203 + 64LL));
                if ( !Member )
                  goto LABEL_473;
              }
              if ( v140 >= v203[6] )
                goto LABEL_472;
              *(_QWORD *)((char *)v203 + j) = v207;
              sub_B0D840(
                (BattleServantConfConponent_o *)((char *)v203 + j),
                (System_Int32_array **)v207,
                v208,
                v209,
                v210,
                v211,
                v212,
                v213);
              this = v437;
              v428 = v202;
LABEL_306:
              p_isNpcEditablePos = v426;
              goto LABEL_242;
            }
LABEL_260:
            v183 = v140 + 1;
            v203 = (unsigned int *)*p_memberList;
          }
          v230 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v199, v200);
          PartyOrganizationListViewItem___ctor_30738796(v230, v140, 0, setupInfo, questRestrictionInfoa, 0, v159, 0LL);
          if ( !v203 )
            goto LABEL_465;
          p_isNpcEditablePos = v426;
          if ( v230 )
          {
            Member = sub_B0D964(v230, *(_QWORD *)(*(_QWORD *)v203 + 64LL));
            if ( !Member )
              goto LABEL_473;
          }
          if ( v140 >= v203[6] )
            goto LABEL_472;
          *(_QWORD *)((char *)v203 + j) = v230;
          sub_B0D840(
            (BattleServantConfConponent_o *)((char *)v203 + j),
            (System_Int32_array **)v230,
            v231,
            v232,
            v233,
            v234,
            v235,
            v236);
          this = v437;
        }
        else
        {
          if ( !v446 )
            goto LABEL_465;
          if ( v140 >= v446->max_length )
            goto LABEL_472;
          p_isNpcEditablePos = v163;
          if ( *(Il2CppClass **)((char *)&v446->obj.klass + j) )
          {
            v426 = v163;
            Member = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v443,
                       (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
            v183 = v140 + 1;
            if ( (int)Member < 1 )
            {
LABEL_231:
              v219 = (unsigned int *)*p_memberList;
              v220 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v214, v215);
              PartyOrganizationListViewItem___ctor_30738796(
                v220,
                v140,
                0,
                setupInfo,
                questRestrictionInfoa,
                1,
                v159,
                0LL);
              if ( !v219 )
                goto LABEL_465;
              if ( v220 )
              {
                Member = sub_B0D964(v220, *(_QWORD *)(*(_QWORD *)v219 + 64LL));
                if ( !Member )
                  goto LABEL_473;
              }
              if ( v140 >= v219[6] )
                goto LABEL_472;
              *(_QWORD *)((char *)v219 + j) = v220;
              sub_B0D840(
                (BattleServantConfConponent_o *)((char *)v219 + j),
                (System_Int32_array **)v220,
                v221,
                v222,
                v223,
                v224,
                v225,
                v226);
            }
            else
            {
              if ( !v443 )
                goto LABEL_465;
              v216 = v443;
              v217 = 4LL;
              while ( 1 )
              {
                if ( v216->fields._size <= (unsigned int)(v217 - 4) )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                v218 = (FollowerInfo_o *)*((_QWORD *)&v443->fields._items->obj.klass + v217);
                if ( !v218 )
                  goto LABEL_465;
                if ( v140 >= v446->max_length )
                  goto LABEL_472;
                if ( (Il2CppClass *)v218->fields.npcFollowerSvtId == *(Il2CppClass **)((char *)&v446->obj.klass + j) )
                  break;
                v216 = v443;
                Member = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v443,
                           (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
                if ( (int)++v217 - 4 >= (int)Member )
                  goto LABEL_231;
              }
              if ( v443->fields._size <= (unsigned int)(v217 - 4) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v250 = (unsigned int *)*p_memberList;
              v269 = v218->fields.userSvtLeaderHash;
              if ( !v269 )
                goto LABEL_465;
              if ( !v269->max_length )
                goto LABEL_472;
              v270 = v269->m_Items[0];
              if ( !v270 )
                goto LABEL_465;
              v271 = v270->fields.classId;
              v272 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v214, v215);
              PartyOrganizationListViewItem___ctor_30704360(
                v272,
                v140,
                v218,
                v271,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                1,
                v432,
                v159,
                0LL);
              if ( !v250 )
                goto LABEL_465;
              if ( v272 )
              {
                Member = sub_B0D964(v272, *(_QWORD *)(*(_QWORD *)v250 + 64LL));
                if ( !Member )
                  goto LABEL_473;
              }
              if ( v140 >= v250[6] )
                goto LABEL_472;
              *(_QWORD *)((char *)v250 + j) = v272;
              sub_B0D840(
                (BattleServantConfConponent_o *)((char *)v250 + j),
                (System_Int32_array **)v272,
                v273,
                v274,
                v275,
                v276,
                v277,
                v278);
            }
            goto LABEL_306;
          }
          if ( (v433 & 1) != 0 )
          {
            v237 = userServantList;
            if ( !userServantList )
              goto LABEL_465;
            v183 = v140 + 1;
            if ( v140 >= userServantList->max_length )
              goto LABEL_472;
            v238 = *(__int64 *)((char *)&userServantList->obj.klass + j);
            if ( v238 )
            {
              v239 = *(_QWORD *)(v238 + 80);
              v240 = *(_QWORD *)(v238 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v462.fields.currentCryptoKey = v239;
              *(_QWORD *)&v462.fields.fakeValue = v240;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v462, 0LL);
              if ( v140 >= userServantList->max_length )
                goto LABEL_472;
              v241 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + j);
              if ( !v241 )
                goto LABEL_465;
              v242 = Member;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v241[6], 0LL);
              if ( v140 >= userServantList->max_length )
                goto LABEL_472;
              v243 = Member;
              Member = *(__int64 *)((char *)&userServantList->obj.klass + j);
              if ( !Member )
                goto LABEL_465;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
              Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         questRestrictionInfoa,
                         v242,
                         v243,
                         DispLimitCount,
                         v159,
                         0,
                         0LL);
              v237 = userServantList;
              if ( (Member & 1) != 0 )
              {
                if ( v140 >= userServantList->max_length )
                  goto LABEL_472;
                *(Il2CppClass **)((char *)&userServantList->obj.klass + j) = 0LL;
                sub_B0D840(
                  (BattleServantConfConponent_o *)((char *)userServantList + j),
                  0LL,
                  v167,
                  v245,
                  v246,
                  v247,
                  v248,
                  v249);
              }
            }
          }
          else
          {
            v237 = userServantList;
            v183 = v140 + 1;
            if ( !userServantList )
              goto LABEL_465;
          }
          if ( v140 >= v237->max_length )
            goto LABEL_472;
          v251 = *(UserServantEntity_o **)((char *)&v237->obj.klass + j);
          v252 = (unsigned int *)*p_memberList;
          if ( v251 )
          {
            equipIdLista = UserEventDeckEntity__GetEquipList(deck, v140, 0LL);
            v255 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v253, v254);
            PartyOrganizationListViewItem___ctor_30730744(
              v255,
              v140,
              v251,
              equipIdLista,
              setupInfo,
              questRestrictionInfoa,
              0LL,
              v159,
              0LL);
            if ( !v252 )
              goto LABEL_465;
            if ( v255 )
            {
              Member = sub_B0D964(v255, *(_QWORD *)(*(_QWORD *)v252 + 64LL));
              if ( !Member )
                goto LABEL_473;
            }
            if ( v140 >= v252[6] )
              goto LABEL_472;
            *(_QWORD *)((char *)v252 + j) = v255;
            sub_B0D840(
              (BattleServantConfConponent_o *)((char *)v252 + j),
              (System_Int32_array **)v255,
              v256,
              v257,
              v258,
              v259,
              v260,
              v261);
          }
          else
          {
            v262 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v166, v167);
            PartyOrganizationListViewItem___ctor_30738796(v262, v140, 0, setupInfo, questRestrictionInfoa, 1, v159, 0LL);
            if ( !v252 )
              goto LABEL_465;
            if ( v262 )
            {
              Member = sub_B0D964(v262, *(_QWORD *)(*(_QWORD *)v252 + 64LL));
              if ( !Member )
                goto LABEL_473;
            }
            if ( v140 >= v252[6] )
              goto LABEL_472;
            *(_QWORD *)((char *)v252 + j) = v262;
            sub_B0D840(
              (BattleServantConfConponent_o *)((char *)v252 + j),
              (System_Int32_array **)v262,
              v263,
              v264,
              v265,
              v266,
              v267,
              v268);
          }
        }
      }
      else
      {
        v168 = (FollowerInfo_o *)Member;
        IsNpc = FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL);
        v170 = v430;
        if ( IsNpc )
          v170 = 0;
        v427 = v170;
        v171 = FollowerInfo__get_IsNpc(v168, 0LL);
        v174 = (unsigned int *)*p_memberList;
        if ( v171 )
          v175 = 0;
        else
          v175 = v432;
        v176 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v172, v173);
        PartyOrganizationListViewItem___ctor_30704360(
          v176,
          v140,
          v168,
          v427,
          setupInfo,
          questRestrictionInfoa,
          friendPointCampaignEntityList,
          0,
          v175,
          v159,
          0LL);
        if ( !v174 )
          goto LABEL_465;
        p_isNpcEditablePos = v163;
        if ( v176 )
        {
          Member = sub_B0D964(v176, *(_QWORD *)(*(_QWORD *)v174 + 64LL));
          if ( !Member )
            goto LABEL_473;
        }
        if ( v140 >= v174[6] )
          goto LABEL_472;
        v183 = v140 + 1;
        *(_QWORD *)((char *)v174 + j) = v176;
        sub_B0D840(
          (BattleServantConfConponent_o *)((char *)v174 + j),
          (System_Int32_array **)v176,
          v177,
          v178,
          v179,
          v180,
          v181,
          v182);
      }
LABEL_242:
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_465;
      if ( v140 >= memberList->max_length )
        goto LABEL_472;
      Member = *(__int64 *)((char *)&memberList->obj.klass + j);
      if ( !Member )
        goto LABEL_465;
      cost = this->fields.cost;
      v140 = v183;
      questRestrictionInfo = questRestrictionInfoa;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Member, 0LL)
                        + cost;
    }
  }
  equipIdList = questRestrictionInfo->fields.myServantNumMax
              + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( v129 )
  {
    p_max_length = &userServantList->max_length;
    goto LABEL_327;
  }
  if ( !userServantList )
    goto LABEL_465;
  p_max_length = &userServantList->max_length;
  if ( (int)userServantList->max_length >= 1 )
  {
    v434 = v18;
    v279 = 0LL;
    v280 = 0;
    v281 = 0LL;
    m_Items = userServantList->m_Items;
    while ( 1 )
    {
      v283 = (PartyListViewItem___c__DisplayClass19_2_o *)sub_B0D974(
                                                            PartyListViewItem___c__DisplayClass19_2_TypeInfo,
                                                            v138,
                                                            v139);
      PartyListViewItem___c__DisplayClass19_2___ctor(v283, 0LL);
      if ( !v283 )
        goto LABEL_465;
      v286 = v281 + 1;
      v283->fields.chkIdx = v281 + 1;
      if ( v281 >= *p_max_length )
        goto LABEL_472;
      if ( m_Items[v281] )
        ++v280;
      v287 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                  System_Func_FollowerInfo__bool__TypeInfo,
                                                                                  v284,
                                                                                  v285);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v287,
        (Il2CppObject *)v283,
        Method_PartyListViewItem___c__DisplayClass19_2___ctor_b__2__,
        (const MethodInfo_26189B8 *)Method_System_Func_FollowerInfo__bool___ctor__);
      Member = (__int64)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                          (System_Func_TSource__bool__o *)v287,
                          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v293 = *p_max_length;
      if ( v281 >= v293 )
        goto LABEL_472;
      if ( !m_Items[v281] )
        goto LABEL_325;
      if ( v283->fields.chkIdx > DeckMemberMax )
        goto LABEL_323;
      Member = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Member,
                 (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v280 > equipIdList || (Member & 1) != 0 )
        break;
LABEL_325:
      ++v279;
      ++v281;
      if ( v286 >= (int)*p_max_length )
      {
        v18 = v434;
        goto LABEL_327;
      }
    }
    v293 = *p_max_length;
LABEL_323:
    if ( v281 >= v293 )
      goto LABEL_472;
    m_Items[v281] = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&m_Items[v279], 0LL, v139, v288, v289, v290, v291, v292);
    goto LABEL_325;
  }
LABEL_327:
  v294 = 0LL;
  v435 = 0;
  v295 = DeckMemberMax;
LABEL_444:
  v399 = 8 * v294 + 32;
  for ( k = v294; ; ++k )
  {
    v409 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v409 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v409->static_fields->DeckMemberMax )
      break;
    v410 = (PartyListViewItem___c__DisplayClass19_3_o *)sub_B0D974(
                                                          PartyListViewItem___c__DisplayClass19_3_TypeInfo,
                                                          v138,
                                                          v139);
    PartyListViewItem___c__DisplayClass19_3___ctor(v410, 0LL);
    if ( v453 )
    {
      Member = (__int64)v448;
      if ( !v448 )
        goto LABEL_465;
      Member = (__int64)PartyListViewItem__GetMember(v448, k, v412);
      if ( !Member )
        goto LABEL_465;
      v413 = (int32_t *)(Member + 340);
    }
    else
    {
      v414 = deck->fields.deckInfo;
      if ( !v414 )
        goto LABEL_465;
      v415 = v414->fields.svts;
      if ( !v415 )
        goto LABEL_465;
      if ( k >= v415->max_length )
        goto LABEL_472;
      v416 = *(__int64 *)((char *)&v415->obj.klass + v399);
      if ( !v416 )
        goto LABEL_465;
      v413 = (int32_t *)(v416 + 60);
    }
    v417 = *v413;
    if ( (__int64)k < v295 )
    {
      if ( !v410 )
        goto LABEL_465;
      v294 = k + 1;
      v410->fields.chkIdx = k + 1;
      v458 = 0LL;
      v457 = 0;
      Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(questRestrictionInfo, v417, 0LL);
      v297 = Member;
      if ( (Member & 1) == 0 )
        goto LABEL_336;
      v298 = deck->fields.deckInfo;
      if ( !v298 )
        goto LABEL_465;
      v299 = v298->fields.svts;
      if ( !v299 )
        goto LABEL_465;
      if ( k >= v299->max_length )
        goto LABEL_472;
      v300 = *(__int64 *)((char *)&v299->obj.klass + v399);
      if ( !v300 )
        goto LABEL_465;
      v301 = *(_QWORD *)(v300 + 48);
      if ( v301 >= 1 )
      {
        if ( v410->fields.chkIdx == v431 )
        {
          v429 = 0;
          v451 = 1;
        }
        else
        {
          v451 = PartyListViewItem__SetNpcFollowerInfo(v437, &v458, &v457, npcFollowerInfoList, v301, v417, v296);
          v429 = 0;
        }
        goto LABEL_341;
      }
LABEL_336:
      if ( followerInfo && !questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v451 = 0;
        v429 = v410->fields.chkIdx == FollowerIndex;
      }
      else
      {
        v429 = 0;
        v451 = 0;
      }
LABEL_341:
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_465;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v417, 0LL);
      if ( NpcFollowerInfo && ((v297 ^ 1) & 1) == 0 )
      {
        v305 = NpcFollowerInfo;
        v306 = v18;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v307 = 0;
        else
          v307 = v430;
        v308 = FollowerInfo__get_IsNpc(v305, 0LL);
        v311 = (unsigned int *)*p_memberList;
        if ( v308 )
          v312 = 0;
        else
          v312 = v432;
        v313 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v309, v310);
        PartyOrganizationListViewItem___ctor_30704360(
          v313,
          k,
          v305,
          v307,
          setupInfo,
          questRestrictionInfoa,
          friendPointCampaignEntityList,
          0,
          v312,
          v417,
          0LL);
        if ( !v311 )
          goto LABEL_465;
        if ( v313 )
        {
          Member = sub_B0D964(v313, *(_QWORD *)(*(_QWORD *)v311 + 64LL));
          if ( !Member )
            goto LABEL_473;
        }
        if ( k >= v311[6] )
          goto LABEL_472;
        v18 = v306;
        *(_QWORD *)((char *)v311 + v399) = v313;
        sub_B0D840(
          (BattleServantConfConponent_o *)((char *)v311 + v399),
          (System_Int32_array **)v313,
          v314,
          v315,
          v316,
          v317,
          v318,
          v319);
        questRestrictionInfo = questRestrictionInfoa;
        v320 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_465;
        v294 = k + 1;
        if ( k >= v320->max_length )
          goto LABEL_472;
        v321 = deck->fields.deckInfo;
        if ( !v321 )
          goto LABEL_465;
        v322 = v321->fields.svts;
        if ( !v322 )
          goto LABEL_465;
        if ( k >= v322->max_length )
          goto LABEL_472;
        v323 = *(__int64 *)((char *)&v322->obj.klass + v399);
        if ( !v323 )
          goto LABEL_465;
        v324 = *(__int64 *)((char *)&v320->obj.klass + v399);
        if ( !v324 )
          goto LABEL_465;
        *(_DWORD *)(v324 + 340) = *(_DWORD *)(v323 + 60);
        ++v435;
        goto LABEL_444;
      }
      if ( v451 || v410->fields.chkIdx == FollowerIndex )
      {
        v325 = v458;
        v326 = (unsigned int *)*p_memberList;
        if ( v458 )
        {
          v327 = v457;
          initPos = v417;
          v328 = (unsigned int *)*p_memberList;
          v329 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v303, v304);
          PartyOrganizationListViewItem___ctor_30704360(
            v329,
            k,
            v325,
            v327,
            setupInfo,
            questRestrictionInfo,
            0LL,
            !v429,
            v432,
            initPos,
            0LL);
          if ( !v328 )
            goto LABEL_479;
          if ( v329 )
          {
            IsRestrictionServantIndividuality = sub_B0D964(v329, *(_QWORD *)(*(_QWORD *)v328 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_477;
          }
          if ( k >= v328[6] )
            goto LABEL_478;
          v337 = (BattleServantConfConponent_o *)((char *)v328 + v399);
        }
        else
        {
          v338 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v303, v304);
          v329 = v338;
          if ( followerInfo )
            PartyOrganizationListViewItem___ctor_30704360(
              v338,
              k,
              followerInfo,
              v430,
              setupInfo,
              questRestrictionInfo,
              0LL,
              !v429,
              v432,
              v417,
              0LL);
          else
            PartyOrganizationListViewItem___ctor_30738796(v338, k, 1, setupInfo, questRestrictionInfo, 1, v417, 0LL);
          if ( !v326 )
            goto LABEL_479;
          if ( v329 )
          {
            IsRestrictionServantIndividuality = sub_B0D964(v329, *(_QWORD *)(*(_QWORD *)v326 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_477;
          }
          if ( k >= v326[6] )
            goto LABEL_478;
          v337 = (BattleServantConfConponent_o *)((char *)v326 + v399);
        }
        v337->klass = (BattleServantConfConponent_c *)v329;
        sub_B0D840(v337, (System_Int32_array **)v329, v331, v332, v333, v334, v335, v336);
        v360 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_479;
        if ( k >= v360->max_length )
        {
LABEL_478:
          v423 = sub_B0D9A8(IsRestrictionServantIndividuality);
          sub_B0D948(v423, 0LL);
        }
        v361 = deck->fields.deckInfo;
        if ( !v361 )
          goto LABEL_479;
        v362 = v361->fields.svts;
        if ( !v362 )
          goto LABEL_479;
        if ( k >= v362->max_length )
          goto LABEL_478;
        v363 = *(__int64 *)((char *)&v362->obj.klass + v399);
        if ( !v363 || (v364 = *(__int64 *)((char *)&v360->obj.klass + v399)) == 0 )
LABEL_479:
          sub_B0D97C(IsRestrictionServantIndividuality);
        *(_DWORD *)(v364 + 340) = *(_DWORD *)(v363 + 60);
        v435 += v429 || v451;
        goto LABEL_444;
      }
      v339 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                  System_Func_FollowerInfo__bool__TypeInfo,
                                                                                  v303,
                                                                                  v304);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v339,
        (Il2CppObject *)v410,
        Method_PartyListViewItem___c__DisplayClass19_3___ctor_b__3__,
        (const MethodInfo_26189B8 *)Method_System_Func_FollowerInfo__bool___ctor__);
      v340 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v443,
               (System_Func_TSource__bool__o *)v339,
               (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v341 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B0D964(v340, FollowerInfo___TypeInfo);
      if ( !v341 )
        v341 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                      v340,
                                                                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      IsRestrictionServantIndividuality = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                            v341,
                                            (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v435 < equipIdList && (IsRestrictionServantIndividuality & 1) == 0 )
      {
        if ( (v297 & 1) != 0 )
        {
          if ( !userServantList )
            goto LABEL_479;
          v344 = p_max_length;
          if ( k >= *p_max_length )
            goto LABEL_478;
          v345 = *(__int64 *)((char *)&userServantList->obj.klass + v399);
          if ( v345 )
          {
            v347 = *(_QWORD *)(v345 + 80);
            v346 = *(_QWORD *)(v345 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v463.fields.currentCryptoKey = v347;
            *(_QWORD *)&v463.fields.fakeValue = v346;
            IsRestrictionServantIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                  v463,
                                                  0LL);
            if ( k >= *p_max_length )
              goto LABEL_478;
            v348 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + v399);
            if ( !v348 )
              goto LABEL_479;
            v349 = IsRestrictionServantIndividuality;
            IsRestrictionServantIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                  v348[6],
                                                  0LL);
            if ( k >= *p_max_length )
              goto LABEL_478;
            v350 = IsRestrictionServantIndividuality;
            IsRestrictionServantIndividuality = *(__int64 *)((char *)&userServantList->obj.klass + v399);
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_479;
            v351 = UserServantEntity__getDispLimitCount(
                     (UserServantEntity_o *)IsRestrictionServantIndividuality,
                     0,
                     0LL);
            IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                  questRestrictionInfo,
                                                  v349,
                                                  v350,
                                                  v351,
                                                  v417,
                                                  0,
                                                  0LL);
            v344 = p_max_length;
            if ( (IsRestrictionServantIndividuality & 1) != 0 )
            {
              if ( k >= *p_max_length )
                goto LABEL_478;
              *(Il2CppClass **)((char *)&userServantList->obj.klass + v399) = 0LL;
              sub_B0D840(
                (BattleServantConfConponent_o *)((char *)userServantList + v399),
                0LL,
                v343,
                v352,
                v353,
                v354,
                v355,
                v356);
            }
          }
        }
        else
        {
          v344 = p_max_length;
          if ( !userServantList )
            goto LABEL_479;
        }
        if ( k >= *v344 )
          goto LABEL_478;
        v377 = *(UserServantEntity_o **)((char *)&userServantList->obj.klass + v399);
        v378 = (unsigned int *)*p_memberList;
        if ( v377 )
        {
          EquipList = UserEventDeckEntity__GetEquipList(deck, k, 0LL);
          v382 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v380, v381);
          PartyOrganizationListViewItem___ctor_30730744(
            v382,
            k,
            v377,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            v417,
            0LL);
          if ( !v378 )
            goto LABEL_479;
        }
        else
        {
          v382 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v342, v343);
          PartyOrganizationListViewItem___ctor_30738796(v382, k, 0, setupInfo, questRestrictionInfo, 1, v417, 0LL);
          if ( !v378 )
            goto LABEL_479;
        }
        if ( v382 )
        {
          IsRestrictionServantIndividuality = sub_B0D964(v382, *(_QWORD *)(*(_QWORD *)v378 + 64LL));
          if ( !IsRestrictionServantIndividuality )
          {
LABEL_477:
            v422 = sub_B0D99C(IsRestrictionServantIndividuality);
            sub_B0D948(v422, 0LL);
          }
        }
        if ( k >= v378[6] )
          goto LABEL_478;
        *(_QWORD *)((char *)v378 + v399) = v382;
        sub_B0D840(
          (BattleServantConfConponent_o *)((char *)v378 + v399),
          (System_Int32_array **)v382,
          v383,
          v384,
          v385,
          v386,
          v387,
          v388);
        ++v435;
        v294 = k + 1;
        goto LABEL_440;
      }
      IsRestrictionServantIndividuality = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                            v341,
                                            (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( (IsRestrictionServantIndividuality & 1) != 0 )
      {
        IsRestrictionServantIndividuality = (__int64)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                                       v341,
                                                       0,
                                                       (const MethodInfo_1B49958 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        v359 = (FollowerInfo_o *)IsRestrictionServantIndividuality;
        goto LABEL_414;
      }
      if ( !v443 )
        goto LABEL_479;
      v365 = v443->fields._size;
      v366 = k - v435;
      if ( v365 <= (int)k - v435 )
      {
        v294 = k + 1;
        v389 = (unsigned int *)*p_memberList;
      }
      else
      {
        if ( v365 <= v366 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v359 = (FollowerInfo_o *)v443->fields._items->m_Items[v366];
        v294 = k + 1;
LABEL_414:
        v367 = (unsigned int *)*p_memberList;
        if ( v359 )
        {
          v368 = v359->fields.userSvtLeaderHash;
          if ( !v368 )
            goto LABEL_479;
          if ( !v368->max_length )
            goto LABEL_478;
          v369 = v368->m_Items[0];
          if ( !v369 )
            goto LABEL_479;
          v452 = v369->fields.classId;
          v370 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v357, v358);
          PartyOrganizationListViewItem___ctor_30704360(
            v370,
            k,
            v359,
            v452,
            setupInfo,
            questRestrictionInfo,
            0LL,
            1,
            v432,
            v417,
            0LL);
          if ( !v367 )
            goto LABEL_479;
          if ( v370 )
          {
            IsRestrictionServantIndividuality = sub_B0D964(v370, *(_QWORD *)(*(_QWORD *)v367 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_477;
          }
          if ( k >= v367[6] )
            goto LABEL_478;
          *(_QWORD *)((char *)v367 + v399) = v370;
          sub_B0D840(
            (BattleServantConfConponent_o *)((char *)v367 + v399),
            (System_Int32_array **)v370,
            v371,
            v372,
            v373,
            v374,
            v375,
            v376);
LABEL_440:
          v397 = v437->fields.memberList;
          if ( !v397 )
            goto LABEL_479;
          if ( k >= v397->max_length )
            goto LABEL_478;
          IsRestrictionServantIndividuality = *(__int64 *)((char *)&v397->obj.klass + v399);
          if ( !IsRestrictionServantIndividuality )
            goto LABEL_479;
          v398 = v437->fields.cost;
          v437->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                                (PartyOrganizationListViewItem_o *)IsRestrictionServantIndividuality,
                                0LL)
                            + v398;
          goto LABEL_444;
        }
        v389 = (unsigned int *)*p_memberList;
      }
      v390 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v357, v358);
      PartyOrganizationListViewItem___ctor_30738796(v390, k, 0, setupInfo, questRestrictionInfo, 0, v417, 0LL);
      if ( !v389 )
        goto LABEL_479;
      if ( v390 )
      {
        IsRestrictionServantIndividuality = sub_B0D964(v390, *(_QWORD *)(*(_QWORD *)v389 + 64LL));
        if ( !IsRestrictionServantIndividuality )
          goto LABEL_477;
      }
      if ( k >= v389[6] )
        goto LABEL_478;
      *(_QWORD *)((char *)v389 + v399) = v390;
      sub_B0D840(
        (BattleServantConfConponent_o *)((char *)v389 + v399),
        (System_Int32_array **)v390,
        v391,
        v392,
        v393,
        v394,
        v395,
        v396);
      goto LABEL_440;
    }
    v401 = (unsigned int *)*p_memberList;
    v402 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v411, v412);
    PartyOrganizationListViewItem___ctor_30738796(v402, k, 0, setupInfo, questRestrictionInfo, 1, v417, 0LL);
    if ( !v401 )
      goto LABEL_465;
    if ( v402 )
    {
      Member = sub_B0D964(v402, *(_QWORD *)(*(_QWORD *)v401 + 64LL));
      if ( !Member )
        goto LABEL_473;
    }
    if ( k >= v401[6] )
      goto LABEL_472;
    *(_QWORD *)((char *)v401 + v399) = v402;
    sub_B0D840(
      (BattleServantConfConponent_o *)((char *)v401 + v399),
      (System_Int32_array **)v402,
      v403,
      v404,
      v405,
      v406,
      v407,
      v408);
    v399 += 8LL;
  }
  this = v437;
  p_isNpcEditablePos = &questRestrictionInfo->fields.isNpcEditablePos;
LABEL_467:
  PartyListViewItem__CheckRestriction(this, v138);
  if ( (*p_isNpcEditablePos || !questRestrictionInfo->fields.isNpcOnlyBattle)
    && !PartyListViewItem__GetStartDeckCondition(this, v418) )
  {
    *v18 = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_31355916(
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
  __int64 Master_WarQuestSelectionMaster; // x0
  struct DeckServant_o *deckInfo; // x8
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
  System_Collections_Generic_List_int__o *v49; // x27
  int v50; // w8
  __int64 v51; // x28
  unsigned int v52; // w19
  __int64 v53; // x25
  struct System_Int32_array *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  UserEventDeckEntity_o *v63; // x28
  int32_t v64; // w26
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct DeckServant_o *v66; // x8
  struct DeckServantData_array *svts; // x8
  __int64 v68; // x8
  int32_t v69; // w25
  UserServantEntity_o *v70; // x27
  struct PartyOrganizationListViewItem_array *v71; // x21
  __int128 v72; // q0
  int64_t v73; // x0
  System_Int64_array *EquipList_26756376; // x19
  __int64 v75; // x1
  __int64 v76; // x2
  PartyOrganizationListViewItem_o *v77; // x28
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  Il2CppClass **v84; // x0
  PartyOrganizationListViewItem_o *v85; // x27
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  Il2CppClass **v92; // x0
  struct PartyOrganizationListViewItem_array *v93; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v96; // x0
  __int64 v97; // x0
  int v98; // [xsp+14h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+50h] [xbp-70h]

  if ( (byte_42181E0 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_B0D8A4(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_B0D8A4(&PartyOrganizationListViewItem___TypeInfo, v20);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v21);
    byte_42181E0 = 1;
  }
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  Master_WarQuestSelectionMaster = (__int64)deck;
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
  v39 = (struct PartyOrganizationListViewItem_array *)sub_B0D8BC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v38->static_fields->DeckMemberMax);
  this->fields.memberList = v39;
  p_memberList = &this->fields.memberList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.cost = 0;
  v49 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v47, v48);
  System_Collections_Generic_List_int____ctor(
    v49,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
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
  v50 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
  v51 = Master_WarQuestSelectionMaster;
  if ( v50 >= 1 )
  {
    v52 = 0;
    while ( 1 )
    {
      if ( v52 >= v50 )
      {
LABEL_67:
        v96 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v96, 0LL);
      }
      v53 = *(_QWORD *)(v51 + 8LL * (int)v52 + 32);
      if ( !v53 )
        break;
      if ( *(_DWORD *)(v53 + 56) == index + 1 )
      {
        if ( !v49 )
          break;
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v49,
                                           *(_DWORD *)(v53 + 32),
                                           (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v49,
            *(_DWORD *)(v53 + 32),
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v50 = *(_DWORD *)(v51 + 24);
      if ( (int)++v52 >= v50 )
        goto LABEL_23;
    }
LABEL_66:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
LABEL_23:
  if ( !v49 )
    goto LABEL_66;
  v54 = System_Collections_Generic_List_int___ToArray(
          v49,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v54;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.waveBattleEnemyClassIds,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v63 = deck;
  Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
  }
  v64 = 0;
  v98 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 160LL) * index;
  while ( 1 )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_WarQuestSelectionMaster + 184);
    if ( v64 >= static_fields->DeckMemberMax )
      break;
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    if ( v64 >= static_fields->DeckMainMemberMax )
    {
      v69 = v64 + 1;
      if ( !UserServantList )
        goto LABEL_66;
    }
    else
    {
      v66 = v63->fields.deckInfo;
      if ( !v66 )
        goto LABEL_66;
      svts = v66->fields.svts;
      if ( !svts )
        goto LABEL_66;
      if ( v98 + v64 >= svts->max_length )
        goto LABEL_67;
      v68 = *((_QWORD *)&svts->m_Items[v98] + v64);
      if ( !v68 )
        goto LABEL_66;
      v69 = *(_DWORD *)(v68 + 60);
      if ( !UserServantList )
        goto LABEL_66;
    }
    if ( v64 >= UserServantList->max_length )
      goto LABEL_67;
    v70 = UserServantList->m_Items[v64];
    v71 = *p_memberList;
    if ( v70 )
    {
      v72 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
      *(_OWORD *)&v103.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v103.fields.fakeValue = v72;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v102 = v103;
      v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v102, 0LL);
      EquipList_26756376 = UserEventDeckEntity__GetEquipList_26756376(v63, v73, 0LL);
      v77 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v75, v76);
      PartyOrganizationListViewItem___ctor_30730744(
        v77,
        v64,
        v70,
        EquipList_26756376,
        setupInfo,
        questRestrictionInfo,
        0LL,
        v69,
        0LL);
      if ( !v71 )
        goto LABEL_66;
      if ( v77 )
      {
        Master_WarQuestSelectionMaster = sub_B0D964(v77, v71->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_68;
      }
      if ( v64 >= v71->max_length )
        goto LABEL_67;
      v84 = &v71->obj.klass + v64;
      v84[4] = (Il2CppClass *)v77;
      sub_B0D840((BattleServantConfConponent_o *)(v84 + 4), (System_Int32_array **)v77, v78, v79, v80, v81, v82, v83);
      v63 = deck;
    }
    else
    {
      v85 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v61, v62);
      PartyOrganizationListViewItem___ctor_30738796(v85, v64, 0, setupInfo, questRestrictionInfo, 1, v69, 0LL);
      if ( !v71 )
        goto LABEL_66;
      if ( v85 )
      {
        Master_WarQuestSelectionMaster = sub_B0D964(v85, v71->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
        {
LABEL_68:
          v97 = sub_B0D99C(Master_WarQuestSelectionMaster);
          sub_B0D948(v97, 0LL);
        }
      }
      if ( v64 >= v71->max_length )
        goto LABEL_67;
      v92 = &v71->obj.klass + v64;
      v92[4] = (Il2CppClass *)v85;
      sub_B0D840((BattleServantConfConponent_o *)(v92 + 4), (System_Int32_array **)v85, v86, v87, v88, v89, v90, v91);
    }
    v93 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_66;
    if ( v64 >= v93->max_length )
      goto LABEL_67;
    Master_WarQuestSelectionMaster = (__int64)v93->m_Items[v64];
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_66;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_WarQuestSelectionMaster,
      this->fields.waveBattleEnemyClassIds,
      0LL);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_66;
    if ( v64 >= memberList->max_length )
      goto LABEL_67;
    Master_WarQuestSelectionMaster = (__int64)memberList->m_Items[v64];
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_66;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_WarQuestSelectionMaster,
                          0LL)
                      + cost;
    ++v64;
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

  if ( (byte_42181F2 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_42181F2 = 1;
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
    sub_B0D97C(questRestrictionInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t v5; // w20
  int v6; // w23
  int v7; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *IsUseOldMaster; // x0
  struct PartyOrganizationListViewItem_array *v10; // x8
  PartyOrganizationListViewItem_o *v11; // x8
  struct PartyOrganizationListViewItem_array *v12; // x8
  PartyOrganizationListViewItem_o *v13; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v16; // w21
  char i; // w25
  struct PartyOrganizationListViewItem_array *v18; // x8
  PartyOrganizationListViewItem_o *v19; // x8
  struct PartyOrganizationListViewItem_array *v20; // x20
  int max_length; // w8
  unsigned int v22; // w21
  int v23; // w21
  int32_t FixedPositionCount; // w20
  int v25; // w27
  char v26; // w25
  int v27; // w26
  struct PartyOrganizationListViewItem_array *v28; // x8
  PartyOrganizationListViewItem_o *v29; // x8
  _BOOL4 isRestrictionNeedStarting; // w10
  int isRestrictionMyServantPos; // w9
  int isRestrictionServantPos; // w8
  bool v33; // zf
  struct PartyOrganizationListViewItem_array *v34; // x21
  int v35; // w8
  unsigned int v36; // w27
  il2cpp_array_size_t j; // w21
  struct PartyOrganizationListViewItem_array *v38; // x8
  struct PartyOrganizationListViewItem_array *v39; // x20
  int v40; // w8
  unsigned int v41; // w21
  struct QuestRestrictionInfo_o *v42; // x8
  int64_t sortValue2; // x20
  __int64 sortValue1_low; // x21
  __int64 v45; // x25
  __int64 v46; // x8
  __int64 v47; // x8
  struct QuestRestrictionInfo_o *v48; // x8
  il2cpp_array_size_t k; // w20
  struct PartyOrganizationListViewItem_array *v50; // x8
  PartyOrganizationListViewItem_o *v51; // x8
  __int64 v52; // x0

  if ( (byte_42181E7 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v4);
    byte_42181E7 = 1;
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v5 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.frameType + 156LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_115;
    if ( v5 >= memberList->max_length )
      goto LABEL_116;
    IsUseOldMaster = memberList->m_Items[v5];
    if ( !IsUseOldMaster )
      goto LABEL_115;
    PartyOrganizationListViewItem__CheckRestriction(IsUseOldMaster, this, v5, 0LL);
    v10 = this->fields.memberList;
    if ( !v10 )
      goto LABEL_115;
    if ( v5 >= v10->max_length )
      goto LABEL_116;
    v11 = v10->m_Items[v5];
    if ( !v11 )
      goto LABEL_115;
    v11->fields._IsNotSupportSingle_k__BackingField = 0;
    v12 = this->fields.memberList;
    if ( !v12 )
      goto LABEL_115;
    if ( v5 >= v12->max_length )
      goto LABEL_116;
    v13 = v12->m_Items[v5];
    if ( !v13 )
      goto LABEL_115;
    ++v5;
    v6 += v13->fields.isFollower;
    if ( v13->fields.userServantEntity )
      ++v7;
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
      v16 = 0;
      for ( i = 0; ; i |= v19->fields.isFixedSupportPositionRestriction )
      {
        if ( (IsUseOldMaster->fields._SvtPoint_k__BackingField & 0x4000000) != 0
          && !*(_DWORD *)&IsUseOldMaster->fields.isMyServantOrNpcRestriction )
        {
          j_il2cpp_runtime_class_init_0(IsUseOldMaster);
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v16 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.frameType + 156LL) )
          break;
        v18 = this->fields.memberList;
        if ( !v18 )
          goto LABEL_115;
        if ( v16 >= v18->max_length )
          goto LABEL_116;
        v19 = v18->m_Items[v16];
        if ( !v19 )
          goto LABEL_115;
        ++v16;
        FixedServantPositionCount -= v19->fields.isFixedServantPositionAgreement;
      }
      if ( !(i & 1 | (FixedServantPositionCount > 0)) )
      {
        v20 = this->fields.memberList;
        if ( !v20 )
          goto LABEL_115;
        max_length = v20->max_length;
        if ( max_length >= 1 )
        {
          v22 = 0;
          while ( v22 < max_length )
          {
            IsUseOldMaster = v20->m_Items[v22];
            if ( !IsUseOldMaster )
              goto LABEL_115;
            PartyOrganizationListViewItem__ResetPositionRestriction(IsUseOldMaster, 0LL);
            max_length = v20->max_length;
            if ( (int)++v22 >= max_length )
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
    v23 = (int)IsUseOldMaster;
    FixedPositionCount = QuestRestrictionInfo__GetFixedPositionCount(this->fields.questRestrictionInfo, 0LL);
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v25 = 0;
    v26 = 0;
    v27 = -1;
    while ( 1 )
    {
      if ( (IsUseOldMaster->fields._SvtPoint_k__BackingField & 0x4000000) != 0
        && !*(_DWORD *)&IsUseOldMaster->fields.isMyServantOrNpcRestriction )
      {
        j_il2cpp_runtime_class_init_0(IsUseOldMaster);
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( v25 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.frameType + 156LL) )
        break;
      v28 = this->fields.memberList;
      if ( !v28 )
        goto LABEL_115;
      if ( v25 >= v28->max_length )
        goto LABEL_116;
      v29 = v28->m_Items[v25];
      if ( !v29 )
        goto LABEL_115;
      v26 |= v29->fields.isFixedSupportPositionRestriction;
      if ( v29->fields.isFixedServantPositionAgreement )
      {
        isRestrictionNeedStarting = v29->fields.isRestrictionNeedStarting;
        isRestrictionMyServantPos = v29->fields.isRestrictionMyServantPos;
        isRestrictionServantPos = v29->fields.isRestrictionServantPos;
        v33 = isRestrictionNeedStarting && v27 == -1;
        v23 -= isRestrictionMyServantPos;
        if ( v33 )
          v27 = v25;
        FixedPositionCount -= isRestrictionServantPos;
      }
      ++v25;
    }
    if ( v23 > 0 )
      goto LABEL_63;
    v34 = this->fields.memberList;
    if ( !v34 )
      goto LABEL_115;
    v35 = v34->max_length;
    if ( v35 < 1 )
    {
LABEL_63:
      if ( !((v27 < 0) | v26 & 1) )
      {
        for ( j = v27 + 1; ; ++j )
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
          v38 = this->fields.memberList;
          if ( !v38 )
            goto LABEL_115;
          if ( j >= v38->max_length )
            goto LABEL_116;
          IsUseOldMaster = v38->m_Items[j];
          if ( !IsUseOldMaster )
            goto LABEL_115;
          PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(IsUseOldMaster, 0LL);
        }
      }
      if ( (FixedPositionCount > 0) | v26 & 1 )
        goto LABEL_80;
      v39 = this->fields.memberList;
      if ( !v39 )
        goto LABEL_115;
      v40 = v39->max_length;
      if ( v40 < 1 )
      {
LABEL_80:
        v42 = this->fields.questRestrictionInfo;
        if ( !v42 || v42->fields.servantNumMin != 1 )
          return;
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2 = IsUseOldMaster->fields.sortValue2;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( IsUseOldMaster )
          {
            if ( sortValue2 )
            {
              sortValue1_low = LODWORD(IsUseOldMaster->fields.sortValue1);
              if ( (int)sortValue1_low >= 1 )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                v45 = 0LL;
                v7 = 0;
                while ( 1 )
                {
                  if ( (IsUseOldMaster->fields._SvtPoint_k__BackingField & 0x4000000) != 0
                    && !*(_DWORD *)&IsUseOldMaster->fields.isMyServantOrNpcRestriction )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( v45 >= *(int *)(*(_QWORD *)&IsUseOldMaster->fields.frameType + 156LL) )
                    break;
                  if ( sortValue1_low != ++v45 )
                  {
                    v46 = *(_QWORD *)(sortValue2 + 120);
                    if ( !v46 )
                      goto LABEL_115;
                    if ( v45 - 1 >= (unsigned __int64)*(unsigned int *)(v46 + 24) )
                      goto LABEL_116;
                    v47 = *(_QWORD *)(v46 + 8 * v45 + 24);
                    if ( !v47 )
                      goto LABEL_115;
                    if ( *(_QWORD *)(v47 + 112) )
                      ++v7;
                  }
                }
              }
            }
            v48 = this->fields.questRestrictionInfo;
            if ( v48 )
            {
              if ( !v7 && v6 == 1 && v48->fields.isNotSingleSupportOnly )
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
                  v50 = this->fields.memberList;
                  if ( !v50 )
                    goto LABEL_115;
                  if ( k >= v50->max_length )
                    goto LABEL_116;
                  v51 = v50->m_Items[k];
                  if ( !v51 )
                    goto LABEL_115;
                  if ( v51->fields.isFollower )
                  {
                    v51->fields._IsNotSupportSingle_k__BackingField = 1;
                    return;
                  }
                }
              }
              return;
            }
          }
        }
LABEL_115:
        sub_B0D97C(IsUseOldMaster);
      }
      v41 = 0;
      while ( v41 < v40 )
      {
        IsUseOldMaster = v39->m_Items[v41];
        if ( !IsUseOldMaster )
          goto LABEL_115;
        PartyOrganizationListViewItem__ResetPositionRestrictionServant(IsUseOldMaster, 0LL);
        v40 = v39->max_length;
        if ( (int)++v41 >= v40 )
          goto LABEL_80;
      }
    }
    else
    {
      v36 = 0;
      while ( v36 < v35 )
      {
        IsUseOldMaster = v34->m_Items[v36];
        if ( !IsUseOldMaster )
          goto LABEL_115;
        PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(IsUseOldMaster, 0LL);
        v35 = v34->max_length;
        if ( (int)++v36 >= v35 )
          goto LABEL_63;
      }
    }
LABEL_116:
    v52 = sub_B0D9A8(IsUseOldMaster);
    sub_B0D948(v52, 0LL);
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
  sub_B0D840(
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

  if ( (byte_42181EC & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_42181EC = 1;
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
      v7 = sub_B0D9A8(v5);
      sub_B0D948(v7, 0LL);
    }
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_15:
      sub_B0D97C(v5);
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

  if ( (byte_42181ED & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_42181ED = 1;
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
      v6 = sub_B0D9A8(v5);
      sub_B0D948(v6, 0LL);
    }
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_13:
      sub_B0D97C(v5);
    PartyOrganizationListViewItem__ClearFollower((PartyOrganizationListViewItem_o *)v5, 0LL);
  }
  PartyListViewItem__CheckRestriction(this, method);
}


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
    sub_B0D97C(this);
  }
  if ( v7->max_length <= num )
  {
LABEL_9:
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void __fastcall PartyListViewItem__ClearMember_31359060(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  BalanceConfig_c *v5; // x0
  __int64 v6; // x0

  if ( (byte_42181EB & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_42181EB = 1;
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
      v6 = sub_B0D9A8(v5);
      sub_B0D948(v6, 0LL);
    }
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_15:
      sub_B0D97C(v5);
    if ( !LOBYTE(v5->_1.fields) )
      PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)v5, 0LL);
  }
  this->fields.cost = 0;
  PartyListViewItem__CheckRestriction(this, method);
}


PartyListViewItem_o *__fastcall PartyListViewItem__Clone(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyListViewItem_o *v4; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42181E6 & 1) == 0 )
  {
    sub_B0D8A4(&PartyListViewItem_TypeInfo, method);
    byte_42181E6 = 1;
  }
  v4 = (PartyListViewItem_o *)sub_B0D974(PartyListViewItem_TypeInfo, method, v2);
  PartyListViewItem___ctor(v4, v5);
  if ( !v4 )
    sub_B0D97C(v6);
  PartyListViewItem__Set(v4, this, v7);
  return v4;
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
  if ( (byte_42181F6 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_B0D8A4(&BalanceConfig_TypeInfo, item);
    byte_42181F6 = 1;
  }
  if ( !item )
LABEL_18:
    sub_B0D97C(this);
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
      v10 = sub_B0D9A8(this);
      sub_B0D948(v10, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v12; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *AssetName; // x0
  __int64 v15; // x0

  if ( (byte_4218202 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v8);
    byte_4218202 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
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
      v15 = sub_B0D9A8(AssetName);
      sub_B0D948(v15, 0LL);
    }
    v12 = memberList->m_Items[i];
    if ( v12 )
    {
      AssetName = (EventMissionProgressRequest_Argument_ProgressData_o *)PartyOrganizationListViewItem__GetAssetName(
                                                                           v12,
                                                                           0LL);
      if ( AssetName )
      {
        if ( !v9 )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          AssetName,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  if ( !v9 )
LABEL_19:
    sub_B0D97C(AssetName);
  if ( v9->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4218201 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&typeMax);
    sub_B0D8A4(&int___TypeInfo, v5);
    byte_4218201 = 1;
  }
  v6 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)typeMax);
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
      sub_B0D97C(p_image);
    if ( i >= memberList->max_length )
    {
LABEL_22:
      v14 = sub_B0D9A8(p_image);
      sub_B0D948(v14, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *DeckConditionServantNumAndPosition; // x0
  il2cpp_array_size_t v13; // w26
  int v14; // w25
  char v15; // w28
  int v16; // w27
  int v17; // w21
  int32_t v18; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v20; // x8
  PartyOrganizationListViewItem_o *v21; // x22
  _BOOL4 isFollower; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t DeckMainMemberMax; // w22
  int32_t v25; // w26
  struct PartyOrganizationListViewItem_array *v26; // x8
  Il2CppClass **v27; // x8
  PartyOrganizationListViewItem_o *v28; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr10_16
  __int64 v30; // x8
  int32_t v31; // w23
  struct PartyOrganizationListViewItem_array *v32; // x9
  PartyOrganizationListViewItem_o *v33; // x9
  const MethodInfo *v34; // x5
  const MethodInfo *v35; // x5
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  _BOOL4 isNotSingleSupportOnly; // w8
  struct PartyOrganizationListViewItem_array *v38; // x26
  int max_length; // w8
  unsigned int v40; // w28
  Il2CppClass **v41; // x8
  PartyOrganizationListViewItem_o *v42; // x20
  PartyOrganizationListViewItem_o *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // kr20_16
  _DWORD *v45; // x21
  _QWORD *v46; // x22
  signed __int64 v47; // x8
  int v48; // w9
  unsigned __int64 v49; // x27
  char v50; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  int v56; // w8
  __int64 i; // x23
  struct PartyOrganizationListViewItem_array *v58; // x8
  PartyOrganizationListViewItem_o *v59; // x8
  struct ServantEntity_o *v60; // x8
  __int64 v61; // x20
  __int64 v62; // x21
  int32_t v63; // w20
  unsigned __int64 j; // x24
  struct PartyOrganizationListViewItem_array *v65; // x8
  PartyOrganizationListViewItem_o *v66; // x8
  struct ServantEntity_o *v67; // x8
  __int64 v68; // x21
  __int64 v69; // x22
  __int64 v70; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_42181F4 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Intersect_int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Item__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_42181F4 = 1;
  }
  if ( this->fields.cost > this->fields.maxCost )
  {
    LODWORD(DeckConditionServantNumAndPosition) = 7;
    return (int)DeckConditionServantNumAndPosition;
  }
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
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
    if ( (int)v13 >= DeckMainMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_182;
    if ( v13 >= memberList->max_length )
      goto LABEL_183;
    v20 = &memberList->obj.klass + (int)v13;
    v21 = (PartyOrganizationListViewItem_o *)v20[4];
    if ( !v21 )
      goto LABEL_182;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v20[4], 0LL) )
    {
LABEL_62:
      LODWORD(DeckConditionServantNumAndPosition) = 5;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( (v21->fields.fatigureTime & 0x8000000000000000LL) == 0 )
    {
LABEL_63:
      LODWORD(DeckConditionServantNumAndPosition) = 6;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v21->fields._IsAllOutBattle_k__BackingField )
    {
LABEL_64:
      LODWORD(DeckConditionServantNumAndPosition) = 19;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v21->fields._IsDataLost_k__BackingField )
    {
LABEL_65:
      LODWORD(DeckConditionServantNumAndPosition) = 20;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v21->fields._TimesToRestart_k__BackingField > 0 )
    {
LABEL_66:
      LODWORD(DeckConditionServantNumAndPosition) = 21;
      return (int)DeckConditionServantNumAndPosition;
    }
    isFollower = v21->fields.isFollower;
    if ( v21->fields.isFollower && !v21->fields.isMyServantOrNpcRestriction )
    {
      ++v17;
      ++v16;
      v15 = 1;
    }
    else
    {
      if ( v21->fields.userServantEntity )
        goto LABEL_18;
      if ( v21->fields.isMyServantOrNpcRestriction )
      {
        SvtId = PartyOrganizationListViewItem__get_SvtId(v21, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(SvtId, 0LL) >= 1 )
        {
          isFollower = v21->fields.isFollower;
LABEL_18:
          ++v18;
          v14 |= isFollower;
        }
      }
    }
    ++v13;
  }
  if ( (*((_BYTE *)DeckConditionServantNumAndPosition + 307) & 4) != 0
    && !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
  {
    j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  v25 = v18;
  while ( 1 )
  {
    if ( (*((_BYTE *)DeckConditionServantNumAndPosition + 307) & 4) != 0
      && !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
    {
      j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    v30 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
    if ( DeckMainMemberMax >= *(_DWORD *)(v30 + 156) )
      break;
    v26 = this->fields.memberList;
    if ( !v26 )
      goto LABEL_182;
    if ( DeckMainMemberMax >= v26->max_length )
      goto LABEL_183;
    v27 = &v26->obj.klass + DeckMainMemberMax;
    v28 = (PartyOrganizationListViewItem_o *)v27[4];
    if ( !v28 )
      goto LABEL_182;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v27[4], 0LL) )
      goto LABEL_62;
    if ( (v28->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_63;
    if ( v28->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_64;
    if ( v28->fields._IsDataLost_k__BackingField )
      goto LABEL_65;
    if ( v28->fields._TimesToRestart_k__BackingField > 0 )
      goto LABEL_66;
    if ( v28->fields.isFollower && !v28->fields.isMyServantOrNpcRestriction )
    {
      ++v16;
    }
    else
    {
      if ( v28->fields.userServantEntity )
        goto LABEL_46;
      if ( v28->fields.isMyServantOrNpcRestriction )
      {
        v29 = PartyOrganizationListViewItem__get_SvtId(v28, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v29, 0LL) >= 1 )
LABEL_46:
          ++v25;
      }
    }
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    ++DeckMainMemberMax;
  }
  DeckConditionServantNumAndPosition = 0LL;
  v31 = v16 + v25;
  switch ( this->fields.menuKind )
  {
    case 4:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__CheckDeckConditionServantNum(
                                                     this,
                                                     v31,
                                                     v18,
                                                     v15 & 1,
                                                     1,
                                                     v2);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
        goto LABEL_61;
      goto LABEL_101;
    case 5:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                     this,
                                                     v31,
                                                     v18,
                                                     v15 & 1,
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
                                                            v31,
                                                            v18,
                                                            v15 & 1,
                                                            v17,
                                                            v35);
            if ( (_DWORD)DeckConditionServantNumAndPosition )
              return (int)DeckConditionServantNumAndPosition;
          }
        }
      }
      else if ( !PartyListViewItem__CheckDeckConditionServantNum(this, v31, v18, v15 & 1, v17, v34) )
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
              v25,
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
        v30 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
LABEL_99:
        if ( v18 + v17 < *(_DWORD *)(v30 + 160) )
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
      if ( v18 == 1 && (v14 & isNotSingleSupportOnly & 1) != 0 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 22;
        return (int)DeckConditionServantNumAndPosition;
      }
      v38 = this->fields.memberList;
      if ( !v38 )
        goto LABEL_182;
      max_length = v38->max_length;
      if ( max_length >= 1 )
      {
        v40 = 0;
        while ( v40 < max_length )
        {
          v41 = &v38->obj.klass + (int)v40;
          v42 = (PartyOrganizationListViewItem_o *)v41[4];
          if ( !v42 )
            goto LABEL_182;
          v43 = (PartyOrganizationListViewItem_o *)v41[4];
          v42->fields._IsErrorNeedIndividuality_k__BackingField = 0;
          v44 = PartyOrganizationListViewItem__get_SvtId(v43, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                         v44,
                                                         0LL);
          if ( !(_DWORD)DeckConditionServantNumAndPosition )
          {
            DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
            if ( !DeckConditionServantNumAndPosition )
              goto LABEL_182;
            DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsSetRequired(
                                                           (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                           v42->fields.index + 1,
                                                           v42->fields._InitPos_k__BackingField,
                                                           0LL);
            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
            {
              LODWORD(DeckConditionServantNumAndPosition) = 18;
              return (int)DeckConditionServantNumAndPosition;
            }
          }
          if ( v42->fields.userServantEntity )
          {
            DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
            if ( !DeckConditionServantNumAndPosition )
              goto LABEL_182;
            DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetNeedIndividualityList(
                                                   (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                   v42->fields._InitPos_k__BackingField,
                                                   0LL);
            if ( !this->fields.questRestrictionInfo )
              goto LABEL_182;
            v45 = DeckConditionServantNumAndPosition;
            DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetRangeTypeList(
                                                   this->fields.questRestrictionInfo,
                                                   v42->fields._InitPos_k__BackingField,
                                                   0LL);
            if ( v45 )
            {
              v46 = DeckConditionServantNumAndPosition;
              if ( DeckConditionServantNumAndPosition )
              {
                LODWORD(v47) = v45[6];
                if ( (int)v47 >= 1 )
                {
                  v48 = *((_DWORD *)DeckConditionServantNumAndPosition + 6);
                  if ( v48 >= 1 && (_DWORD)v47 == v48 )
                  {
                    v49 = 0LL;
                    v50 = 0;
                    do
                    {
                      if ( v49 >= (unsigned int)v47 )
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                      v51 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*((_QWORD *)v45 + 2) + 8 * v49 + 32);
                      if ( v51 )
                      {
                        if ( v49 >= (unsigned int)v45[6] )
                          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                        if ( v51[1].monitor )
                        {
                          if ( v49 >= (unsigned int)v45[6] )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                          servantEntity = v42->fields.servantEntity;
                          svtLimitCount = v42->fields.svtLimitCount;
                          DeckConditionServantNumAndPosition = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(
                                                                         v42,
                                                                         0LL);
                          if ( !servantEntity )
                            goto LABEL_182;
                          Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                                 servantEntity,
                                                                                                 svtLimitCount,
                                                                                                 (int32_t)DeckConditionServantNumAndPosition,
                                                                                                 0LL);
                          v55 = System_Linq_Enumerable__Intersect_int_(
                                  v51,
                                  Individuality,
                                  (const MethodInfo_1B4C904 *)Method_System_Linq_Enumerable_Intersect_int___);
                          DeckConditionServantNumAndPosition = System_Linq_Enumerable__ToArray_int_(
                                                                 v55,
                                                                 (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
                          if ( v49 >= *((unsigned int *)v46 + 6) )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                          v56 = *(_DWORD *)(v46[2] + 4 * v49 + 32);
                          if ( v56 == 1 )
                          {
                            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)DeckConditionServantNumAndPosition,
                                                                           (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
                            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
                              goto LABEL_146;
                          }
                          else
                          {
                            if ( v49 >= *((unsigned int *)v46 + 6) )
                              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                            if ( v56 == 2 )
                            {
                              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)DeckConditionServantNumAndPosition,
                                                                             (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
                              if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
                                goto LABEL_146;
                            }
                          }
                          v50 = 1;
                        }
                      }
                      v47 = (int)v45[6];
                      ++v49;
                    }
                    while ( (__int64)v49 < v47 );
                    if ( (v50 & 1) != 0 )
                    {
                      v42->fields._IsErrorNeedIndividuality_k__BackingField = 1;
                      LODWORD(DeckConditionServantNumAndPosition) = 23;
                      return (int)DeckConditionServantNumAndPosition;
                    }
                  }
                }
              }
            }
          }
LABEL_146:
          max_length = v38->max_length;
          if ( (int)++v40 >= max_length )
            goto LABEL_147;
        }
LABEL_183:
        v70 = sub_B0D9A8(DeckConditionServantNumAndPosition);
        sub_B0D948(v70, 0LL);
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
        v58 = this->fields.memberList;
        if ( !v58 )
          goto LABEL_182;
        if ( (unsigned int)i >= v58->max_length )
          goto LABEL_183;
        v59 = v58->m_Items[(int)i];
        if ( !v59 )
          goto LABEL_182;
        if ( v59->fields.userServantEntity )
          break;
LABEL_172:
        ;
      }
      v60 = v59->fields.servantEntity;
      if ( !v60 )
LABEL_182:
        sub_B0D97C(DeckConditionServantNumAndPosition);
      v62 = *(_QWORD *)&v60->fields.baseSvtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&v60->fields.baseSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v72.fields.currentCryptoKey = v62;
      *(_QWORD *)&v72.fields.fakeValue = v61;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v72, 0LL);
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
          v65 = this->fields.memberList;
          if ( !v65 )
            goto LABEL_182;
          if ( j >= v65->max_length )
            goto LABEL_183;
          v66 = v65->m_Items[j];
          if ( !v66 )
            goto LABEL_182;
          if ( v66->fields.userServantEntity )
          {
            v67 = v66->fields.servantEntity;
            if ( !v67 )
              goto LABEL_182;
            v69 = *(_QWORD *)&v67->fields.baseSvtId.fields.currentCryptoKey;
            v68 = *(_QWORD *)&v67->fields.baseSvtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v73.fields.currentCryptoKey = v69;
            *(_QWORD *)&v73.fields.fakeValue = v68;
            if ( v63 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v73, 0LL) )
              break;
          }
        }
      }
      LODWORD(DeckConditionServantNumAndPosition) = 4;
      return (int)DeckConditionServantNumAndPosition;
    default:
      if ( !v25 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 1;
        return (int)DeckConditionServantNumAndPosition;
      }
      if ( v18 != 1 )
        goto LABEL_86;
      v32 = this->fields.memberList;
      if ( !v32 )
        goto LABEL_182;
      if ( !v32->max_length )
        goto LABEL_183;
      v33 = v32->m_Items[0];
      if ( !v33 )
        goto LABEL_182;
      if ( v33->fields.userServantEntity )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 2;
        return (int)DeckConditionServantNumAndPosition;
      }
LABEL_86:
      v17 = v15 & 1;
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
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v14; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v16; // x8
  __int64 v17; // x0

  if ( (byte_42181F3 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_42181F3 = 1;
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
    sub_B0D97C(questRestrictionInfo);
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(questRestrictionInfo, 0LL);
  v14 = 0;
  questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(questRestrictionInfo->fields.fixedSupportIndividualitiesList) & 4) != 0
      && !LODWORD(questRestrictionInfo->fields.fixedServantPositionRestrictionEntity) )
    {
      j_il2cpp_runtime_class_init_0(questRestrictionInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v14 >= SHIDWORD(questRestrictionInfo->fields.fixedSupportPositionRestrictionEntity[2].fields.name) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_18;
    if ( v14 >= memberList->max_length )
    {
      v17 = sub_B0D9A8(questRestrictionInfo);
      sub_B0D948(v17, 0LL);
    }
    v16 = memberList->m_Items[v14];
    if ( !v16 )
      goto LABEL_18;
    ++v14;
    FixedServantPositionCount -= v16->fields.isFixedServantPositionAgreement;
  }
  if ( FixedServantPositionCount < 1 )
    return 14;
  else
    return 15;
}


System_Int64_array *__fastcall PartyListViewItem__GetEquipList(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_long__o *v7; // x20
  __int64 EquipUserSvtId; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v10; // x22
  int max_length; // w9
  Il2CppClass **v12; // x8
  PartyOrganizationListViewItem_o *v13; // x21
  __int64 v15; // x0

  if ( (byte_42181F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v6);
    byte_42181F9 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, method, v2);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_12;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
    {
      v15 = sub_B0D9A8(EquipUserSvtId);
      sub_B0D948(v15, 0LL);
    }
    v12 = &memberList->obj.klass + v10;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( v13 )
    {
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v12[4], 0LL);
      if ( EquipUserSvtId >= 1 )
      {
        EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v13, 0LL);
        if ( !v7 )
          goto LABEL_12;
        System_Collections_Generic_List_long___Add(
          v7,
          EquipUserSvtId,
          (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      }
      memberList = this->fields.memberList;
      ++v10;
      if ( memberList )
        continue;
    }
    goto LABEL_12;
  }
  if ( !v7 )
LABEL_12:
    sub_B0D97C(EquipUserSvtId);
  return System_Collections_Generic_List_long___ToArray(
           v7,
           (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
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
  __int64 v9; // x9
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
  __int64 v22; // x0

  v6 = this;
  if ( (byte_4218200 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, eventId);
    this = (PartyListViewItem_o *)sub_B0D8A4(&EventUpValInfo___TypeInfo, v7);
    byte_4218200 = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_25:
      sub_B0D97C(this);
    v9 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v9 )
    {
      if ( !(_DWORD)v9 )
      {
LABEL_26:
        v22 = sub_B0D9A8(this);
        sub_B0D948(v22, 0LL);
      }
      LODWORD(setupInfo) = setupInfo->fields.eventIdList;
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
  v11 = (EventUpValInfo_array *)sub_B0D8BC(EventUpValInfo___TypeInfo, (unsigned int)v10->static_fields->DeckMemberMax);
  *eventUpValList = v11;
  sub_B0D840((BattleServantConfConponent_o *)eventUpValList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
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
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  _BOOL8 v11; // x0
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  int32_t FollowerIndex; // w22
  DeckServantData_o *v15; // x8
  QuestRestrictionInfo_o *v16; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x0
  struct QuestRestrictionInfo_o *v19; // x8
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42181E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, deck);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    byte_42181E3 = 1;
  }
  memset(&v22, 0, sizeof(v22));
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
      v19 = this->fields.questRestrictionInfo;
      if ( v19 )
      {
        if ( fixNpcFollowerInfoList )
          return PartyListViewItem__GetSupportInitIndex(this, fixNpcFollowerInfoList, v17);
        else
          return v19->fields.supportInitIndex;
      }
      return 0;
    }
LABEL_35:
    sub_B0D97C(questRestrictionInfo);
  }
  if ( !deck )
    goto LABEL_35;
  questRestrictionInfo = (QuestRestrictionInfo_o *)UserEventDeckEntity__GetFollowerIndexList(deck, 0LL);
  if ( !questRestrictionInfo )
    goto LABEL_35;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_int__o *)questRestrictionInfo,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v11 )
      break;
    deckInfo = deck->fields.deckInfo;
    if ( !deckInfo )
      sub_B0D97C(v11);
    svts = deckInfo->fields.svts;
    if ( !svts )
      sub_B0D97C(v11);
    FollowerIndex = v22.fields.current;
    if ( v22.fields.current - 1 >= svts->max_length )
    {
      v18 = sub_B0D9A8(v11);
      sub_B0D948(v18, 0LL);
    }
    v15 = svts->m_Items[v22.fields.current - 1];
    if ( !v15 )
      sub_B0D97C(v11);
    v16 = this->fields.questRestrictionInfo;
    if ( !v16 )
      sub_B0D97C(0LL);
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(v16, v15->fields.initPos, 0LL) )
      goto LABEL_20;
  }
  FollowerIndex = 0;
LABEL_20:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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

  if ( (byte_42181FF & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_42181FF = 1;
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
      sub_B0D97C(v8);
    if ( v3 >= memberList->max_length )
    {
      v10 = sub_B0D9A8(v8);
      sub_B0D948(v10, 0LL);
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
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  System_Boolean_array *v5; // x20
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v8; // x8
  BalanceConfig_c *v9; // x0
  __int64 v11; // x0

  if ( (byte_42181FE & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&bool___TypeInfo, v3);
    byte_42181FE = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (System_Boolean_array *)sub_B0D8BC(bool___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
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
        sub_B0D97C(v9);
      if ( i >= v5->max_length )
      {
LABEL_20:
        v11 = sub_B0D9A8(v9);
        sub_B0D948(v11, 0LL);
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
    sub_B0D97C(this);
  if ( memberList->max_length <= num )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
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
    sub_B0D97C(this);
  myServantNumMax = (unsigned int)questRestrictionInfo->fields.myServantNumMax;
  max_length = npcSvtIds->max_length;
  while ( (int)myServantNumMax < (int)max_length )
  {
    if ( (unsigned int)myServantNumMax >= max_length )
    {
      v6 = sub_B0D9A8(myServantNumMax);
      sub_B0D948(v6, 0LL);
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
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int dialogMessageInfoDictionary; // w23
  PartyOrganizationListViewItem_o *v7; // x20
  __int64 v8; // x24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int TotalCostRestriction; // w0
  QuestRestrictionInfo_o *v12; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v14; // w25
  char v15; // w24
  char v16; // w22
  char v17; // w23
  struct PartyOrganizationListViewItem_array *v18; // x8
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x21
  bool v21; // w10
  int v22; // w8
  char v23; // w9
  char v24; // w10
  __int64 v25; // x0

  if ( (byte_42181F5 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_42181F5 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_49:
      sub_B0D97C(questRestrictionInfo);
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
                                                       questRestrictionInfo,
                                                       0LL);
    if ( questRestrictionInfo )
    {
      dialogMessageInfoDictionary = (int)questRestrictionInfo->fields.dialogMessageInfoDictionary;
      v7 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
      if ( dialogMessageInfoDictionary < 1 )
      {
LABEL_4:
        LODWORD(questRestrictionInfo) = 0;
        return (int)questRestrictionInfo;
      }
      v8 = 0LL;
      while ( 1 )
      {
        memberList = this->fields.memberList;
        if ( !memberList )
          goto LABEL_49;
        if ( (unsigned int)v8 >= memberList->max_length )
          goto LABEL_50;
        questRestrictionInfo = (QuestRestrictionInfo_o *)memberList->m_Items[v8];
        if ( !questRestrictionInfo )
          goto LABEL_49;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)questRestrictionInfo, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                           SvtId,
                                                           0LL);
        if ( (unsigned int)v8 >= v7->fields.sortIndex )
          goto LABEL_50;
        if ( (_DWORD)questRestrictionInfo != *((_DWORD *)&v7->fields.sortValue0 + v8) )
          break;
        if ( (int)++v8 >= dialogMessageInfoDictionary )
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
      v12 = this->fields.questRestrictionInfo;
      if ( !v12 )
        goto LABEL_4;
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(v12, 0LL);
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v14 >= SHIDWORD(questRestrictionInfo->fields.fixedSupportPositionRestrictionEntity[2].fields.name) )
          break;
        v18 = this->fields.memberList;
        if ( !v18 )
          goto LABEL_49;
        if ( v14 >= v18->max_length )
        {
LABEL_50:
          v25 = sub_B0D9A8(questRestrictionInfo);
          sub_B0D948(v25, 0LL);
        }
        v19 = &v18->obj.klass + (int)v14;
        v20 = v19[4];
        if ( !v20 )
          goto LABEL_49;
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction((PartyOrganizationListViewItem_o *)v19[4], 0LL) )
        {
          LODWORD(questRestrictionInfo) = 18;
          return (int)questRestrictionInfo;
        }
        ++v14;
        v17 |= BYTE2(v20->_2.typeHierarchy) != 0;
        v16 |= BYTE3(v20->_2.typeHierarchy) != 0;
        FixedServantPositionCount -= BYTE6(v20->_2.typeHierarchy) & 1;
        v15 |= BYTE4(v20->_2.typeHierarchy) != 0;
      }
      if ( (v15 & 1) != 0 )
      {
        LODWORD(questRestrictionInfo) = 9;
        return (int)questRestrictionInfo;
      }
      v21 = FixedServantPositionCount > 0;
      v22 = FixedServantPositionCount <= 0 ? 12 : 10;
      v23 = v21 | v17;
      v24 = v16 | v21 | v17;
      LODWORD(questRestrictionInfo) = (v23 & 1) != 0 ? v22 : 13;
      if ( (v24 & 1) == 0 )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t result; // w0
  int32_t v13; // w23
  PartyListViewItem___c__DisplayClass25_0_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  BalanceConfig_c *v19; // x0
  int32_t supportInitIndex; // [xsp+8h] [xbp-58h]
  int myServantNumMax; // [xsp+Ch] [xbp-54h]

  v4 = this;
  if ( (byte_42181E4 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, fixNpcFollowerInfoList);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v6);
    sub_B0D8A4(&Method_System_Func_FollowerInfo__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_FollowerInfo__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_PartyListViewItem___c__DisplayClass25_0__GetSupportInitIndex_b__0__, v9);
    this = (PartyListViewItem_o *)sub_B0D8A4(&PartyListViewItem___c__DisplayClass25_0_TypeInfo, v10);
    byte_42181E4 = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_17:
    sub_B0D97C(this);
  result = questRestrictionInfo->fields.supportInitIndex;
  if ( result <= 0 )
  {
    supportInitIndex = questRestrictionInfo->fields.supportInitIndex;
    myServantNumMax = questRestrictionInfo->fields.myServantNumMax;
    v13 = 0;
    while ( 1 )
    {
      do
      {
        v19 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v19 = BalanceConfig_TypeInfo;
        }
        if ( v13 >= v19->static_fields->DeckMemberMax )
          return supportInitIndex;
        v14 = (PartyListViewItem___c__DisplayClass25_0_o *)sub_B0D974(
                                                             PartyListViewItem___c__DisplayClass25_0_TypeInfo,
                                                             fixNpcFollowerInfoList,
                                                             method);
        PartyListViewItem___c__DisplayClass25_0___ctor(v14, 0LL);
        if ( !v14 )
          goto LABEL_17;
        v14->fields.chkIdx = ++v13;
        v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_FollowerInfo__bool__TypeInfo,
                                                                                   v15,
                                                                                   v16);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v17,
          (Il2CppObject *)v14,
          Method_PartyListViewItem___c__DisplayClass25_0__GetSupportInitIndex_b__0__,
          (const MethodInfo_26189B8 *)Method_System_Func_FollowerInfo__bool___ctor__);
        v18 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
                (System_Func_TSource__bool__o *)v17,
                (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      }
      while ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                v18,
                (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) );
      if ( myServantNumMax < 1 )
        return v14->fields.chkIdx;
      --myServantNumMax;
    }
  }
  return result;
}


ServantEntity_array *__fastcall PartyListViewItem__GetSvtEntityList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
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

  if ( (byte_42181FC & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&ServantEntity___TypeInfo, v3);
    byte_42181FC = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v11 = (ServantEntity_array *)sub_B0D8BC(ServantEntity___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
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
        sub_B0D97C(v17);
      servantEntity = (System_Int32_array **)v15->fields.servantEntity;
      if ( servantEntity )
      {
        v17 = (BalanceConfig_c *)sub_B0D964(servantEntity, v11->obj.klass->_1.element_class);
        if ( !v17 )
        {
          v20 = sub_B0D99C(0LL);
          sub_B0D948(v20, 0LL);
        }
      }
      if ( v12 >= v11->max_length )
      {
LABEL_22:
        v19 = sub_B0D9A8(v17);
        sub_B0D948(v19, 0LL);
      }
      i->klass = (BattleServantConfConponent_c *)servantEntity;
      sub_B0D840(i, servantEntity, v5, v6, v7, v8, v9, v10);
    }
    ++v12;
  }
  return v11;
}


System_String_array *__fastcall PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
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

  if ( (byte_42181FD & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&string___TypeInfo, v3);
    byte_42181FD = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (System_String_array *)sub_B0D8BC(string___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
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
        sub_B0D97C(SvtNameText);
      v17 = SvtNameText;
      if ( SvtNameText )
      {
        SvtNameText = (System_Int32_array **)sub_B0D964(SvtNameText, v5->obj.klass->_1.element_class);
        if ( !SvtNameText )
        {
          v20 = sub_B0D99C(0LL);
          sub_B0D948(v20, 0LL);
        }
      }
      if ( v6 >= v5->max_length )
      {
LABEL_22:
        v19 = sub_B0D9A8(SvtNameText);
        sub_B0D948(v19, 0LL);
      }
      i->klass = (BattleServantConfConponent_c *)v17;
      sub_B0D840(i, v17, v11, v12, v13, v14, v15, v16);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x23
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **deckName; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t max_length; // w22
  PartyListViewItem_o *v21; // x19
  int64_t userEquipId; // x20
  DeckServant_o *v23; // x21
  __int64 v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  struct PartyOrganizationListViewItem_array *v33; // x24
  __int64 v34; // x25
  unsigned int v35; // w27
  __int64 v36; // x26
  PartyOrganizationListViewItem_o *v37; // x22
  __int64 v38; // x21
  int v39; // w19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v41; // q0
  __int128 v42; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  _DWORD *v50; // x22
  __int64 v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x0
  __int64 v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62[2]; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_42181F7 & 1) == 0 )
  {
    sub_B0D8A4(&DeckServantData_TypeInfo, baseItem);
    sub_B0D8A4(&DeckServant_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B0D8A4(&UserDeckEntity_TypeInfo, v7);
    byte_42181F7 = 1;
  }
  memset(&v62[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v8 = sub_B0D974(UserDeckEntity_TypeInfo, baseItem, method);
  UserDeckEntity___ctor((UserDeckEntity_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_30;
  *(_QWORD *)(v8 + 16) = this->fields.id;
  *(_DWORD *)(v8 + 32) = this->fields.index + 1;
  deckName = (System_Int32_array **)this->fields.deckName;
  *(_QWORD *)(v8 + 40) = deckName;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 40), deckName, v10, v11, v12, v13, v14, v15);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_30;
  max_length = memberList->max_length;
  v21 = baseItem ? baseItem : this;
  userEquipId = v21->fields.userEquipId;
  v23 = (DeckServant_o *)sub_B0D974(DeckServant_TypeInfo, v17, v18);
  DeckServant___ctor_16121028(v23, max_length, userEquipId, 0LL);
  *(_QWORD *)(v8 + 48) = v23;
  v24 = v8 + 48;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)v23, v25, v26, v27, v28, v29, v30);
  v33 = v21->fields.memberList;
  if ( !v33 )
    goto LABEL_30;
  v34 = *(_QWORD *)&v33->max_length;
  if ( (int)v34 >= 1 )
  {
    v35 = 0;
    v36 = 8LL;
    while ( 1 )
    {
      v37 = *(PartyOrganizationListViewItem_o **)((char *)&v33->obj.klass + v36 * 4);
      v38 = sub_B0D974(DeckServantData_TypeInfo, v31, v32);
      DeckServantData___ctor((DeckServantData_o *)v38, 0LL);
      if ( !v38 )
        break;
      v39 = v35 + 1;
      *(_DWORD *)(v38 + 16) = v35 + 1;
      if ( !v37 )
        break;
      userServantEntity = v37->fields.userServantEntity;
      if ( userServantEntity )
      {
        v42 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v41 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v62, 0LL, 0LL);
        v42 = *(_OWORD *)&v62[0].fields.currentCryptoKey;
        v41 = *(_OWORD *)&v62[0].fields.fakeValue;
      }
      *(_OWORD *)&v62[1].fields.currentCryptoKey = v42;
      *(_OWORD *)&v62[1].fields.fakeValue = v41;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v61 = v62[1];
      *(_QWORD *)(v38 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v61, 0LL);
      *(_BYTE *)(v38 + 40) = v37->fields.isFollower;
      EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(v37, 0LL);
      *(_QWORD *)(v38 + 32) = EquipList;
      sub_B0D840((BattleServantConfConponent_o *)(v38 + 32), EquipList, v44, v45, v46, v47, v48, v49);
      *(_DWORD *)(v38 + 60) = v37->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v24 )
        break;
      v50 = *(_DWORD **)(*(_QWORD *)v24 + 16LL);
      if ( !v50 )
        break;
      v51 = sub_B0D964(v38, *(_QWORD *)(*(_QWORD *)v50 + 64LL));
      if ( !v51 )
      {
        v60 = sub_B0D99C(0LL);
        sub_B0D948(v60, 0LL);
      }
      if ( v35 < v50[6] )
      {
        *(_QWORD *)&v50[v36] = v38;
        sub_B0D840((BattleServantConfConponent_o *)&v50[v36], (System_Int32_array **)v38, v52, v53, v54, v55, v56, v57);
        if ( v39 >= (int)v34 )
          return (UserDeckEntity_o *)v8;
        v36 += 2LL;
        ++v35;
        if ( v39 < v33->max_length )
          continue;
      }
      v58 = sub_B0D9A8(v51);
      sub_B0D948(v58, 0LL);
    }
LABEL_30:
    sub_B0D97C(v9);
  }
  return (UserDeckEntity_o *)v8;
}


UserEventDeckEntity_o *__fastcall PartyListViewItem__GetUserEventDeck(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x23
  __int64 UserId; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x20
  int64_t userEquipId; // x21
  DeckServant_o *v14; // x22
  __int64 v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  struct PartyOrganizationListViewItem_array *v24; // x8
  unsigned __int64 v25; // x20
  unsigned __int64 max_length; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v28; // x22
  struct QuestRestrictionInfo_o *v29; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  __int64 v32; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v34; // q0
  __int128 v35; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int32_t InitPos_k__BackingField; // w8
  __int64 v44; // x9
  int v45; // w8
  unsigned int *v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  unsigned int *v53; // x0
  __int64 v55; // x0
  __int64 v56; // x0
  UserEventDeckEntity_o *v57; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59[2]; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_42181F8 & 1) == 0 )
  {
    sub_B0D8A4(&DeckServantData_TypeInfo, method);
    sub_B0D8A4(&DeckServant_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B0D8A4(&UserEventDeckEntity_TypeInfo, v7);
    byte_42181F8 = 1;
  }
  memset(&v59[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v8 = sub_B0D974(UserEventDeckEntity_TypeInfo, method, v2);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v8, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v8 )
    goto LABEL_54;
  *(_QWORD *)(v8 + 16) = UserId;
  *(_DWORD *)(v8 + 24) = this->fields.id;
  *(_DWORD *)(v8 + 28) = this->fields.index + 1;
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_54;
  userEquipId = this->fields.userEquipId;
  v14 = (DeckServant_o *)sub_B0D974(DeckServant_TypeInfo, v10, v11);
  DeckServant___ctor_16121028(v14, memberList->max_length, userEquipId, 0LL);
  *(_QWORD *)(v8 + 32) = v14;
  v15 = v8 + 32;
  v57 = (UserEventDeckEntity_o *)v8;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
  v24 = this->fields.memberList;
  if ( !v24 )
LABEL_54:
    sub_B0D97C(UserId);
  v25 = 0LL;
  while ( 1 )
  {
    max_length = v24->max_length;
    if ( (__int64)v25 >= (int)max_length )
      return v57;
    if ( v25 >= max_length )
      goto LABEL_55;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v28 = v24->m_Items[v25];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_25;
    }
    UserId = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    v29 = this->fields.questRestrictionInfo;
    if ( (UserId & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_54;
      isNpcEditablePos = v29->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v28 || !v29 )
        goto LABEL_54;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v28->fields._InitPos_k__BackingField,
                        0LL);
      v29 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v29 )
        goto LABEL_25;
    }
    UserId = QuestRestrictionInfo__IsNpcMulitipleOrOnly(v29, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v28 )
        goto LABEL_54;
      if ( v28->fields.isFixNpc
        && v28->fields.isFollower
        && !isNpcEditablePos
        && !v28->fields.isMyServantOrNpcRestriction )
      {
        ++v25;
        goto LABEL_50;
      }
    }
LABEL_25:
    v32 = sub_B0D974(DeckServantData_TypeInfo, v22, v23);
    DeckServantData___ctor((DeckServantData_o *)v32, 0LL);
    if ( !v32 )
      goto LABEL_54;
    *(_DWORD *)(v32 + 16) = v25 + 1;
    if ( !v28 )
      goto LABEL_54;
    userServantEntity = v28->fields.userServantEntity;
    if ( userServantEntity )
    {
      v35 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      v34 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    }
    else
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v59, 0LL, 0LL);
      v35 = *(_OWORD *)&v59[0].fields.currentCryptoKey;
      v34 = *(_OWORD *)&v59[0].fields.fakeValue;
    }
    *(_OWORD *)&v59[1].fields.currentCryptoKey = v35;
    *(_OWORD *)&v59[1].fields.fakeValue = v34;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v58 = v59[1];
    *(_QWORD *)(v32 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v58, 0LL);
    *(_BYTE *)(v32 + 40) = v28->fields.isFollower;
    EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(v28, 0LL);
    *(_QWORD *)(v32 + 32) = EquipList;
    sub_B0D840((BattleServantConfConponent_o *)(v32 + 32), EquipList, v37, v38, v39, v40, v41, v42);
    InitPos_k__BackingField = v28->fields._InitPos_k__BackingField;
    v44 = *(_QWORD *)(v32 + 24);
    *(_QWORD *)(v32 + 48) = 0LL;
    *(_DWORD *)(v32 + 60) = InitPos_k__BackingField;
    if ( v44 )
    {
      v45 = 0;
LABEL_42:
      if ( (v45 & isNpcEditablePos & 1) != 0 )
      {
        *(_QWORD *)(v32 + 48) = v28->fields.npcFollowerSvtId;
        if ( v28->fields.isFixNpc )
          *(_BYTE *)(v32 + 40) = 0;
      }
      goto LABEL_45;
    }
    if ( !v28->fields.isMyServantOrNpcRestriction || !v28->fields.isFollower )
    {
      v45 = !v28->fields.isMyServantOrNpcRestriction;
      goto LABEL_42;
    }
    *(_QWORD *)(v32 + 48) = v28->fields.npcFollowerSvtId;
LABEL_45:
    if ( !*(_QWORD *)v15 )
      goto LABEL_54;
    v46 = *(unsigned int **)(*(_QWORD *)v15 + 16LL);
    if ( !v46 )
      goto LABEL_54;
    UserId = sub_B0D964(v32, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
    if ( !UserId )
    {
      v56 = sub_B0D99C(0LL);
      sub_B0D948(v56, 0LL);
    }
    if ( v25 >= v46[6] )
    {
LABEL_55:
      v55 = sub_B0D9A8(UserId);
      sub_B0D948(v55, 0LL);
    }
    v53 = &v46[2 * v25];
    *((_QWORD *)v53 + 4) = v32;
    sub_B0D840((BattleServantConfConponent_o *)(v53 + 8), (System_Int32_array **)v32, v47, v48, v49, v50, v51, v52);
    ++v25;
LABEL_50:
    v24 = this->fields.memberList;
    if ( !v24 )
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

  if ( (byte_42181E2 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, userServantList);
    byte_42181E2 = 1;
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
        sub_B0D97C(v7);
      if ( v6 >= npcSvtIds->max_length )
      {
LABEL_18:
        v9 = sub_B0D9A8(v7);
        sub_B0D948(v9, 0LL);
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
      sub_B0D97C(this);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        v9 = sub_B0D9A8(this);
        sub_B0D948(v9, 0LL);
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

  if ( (byte_42181F0 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_42181F0 = 1;
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
      v8 = sub_B0D9A8(v4);
      sub_B0D948(v8, 0LL);
    }
    v6 = memberList->m_Items[v3];
    if ( !v6 )
LABEL_14:
      sub_B0D97C(v4);
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

  if ( (byte_42181EF & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_42181EF = 1;
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
      v10 = sub_B0D9A8(v4);
      sub_B0D948(v10, 0LL);
    }
    v6 = memberList->m_Items[v3];
    if ( !v6 )
LABEL_16:
      sub_B0D97C(v4);
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

  if ( (byte_42181F1 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_42181F1 = 1;
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
      v7 = sub_B0D9A8(v4);
      sub_B0D948(v7, 0LL);
    }
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_B0D97C(v4);
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
  if ( (byte_42181FA & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
    byte_42181FA = 1;
  }
  if ( svtId < 1 )
    return 0;
  memberList = v4->fields.memberList;
  if ( !memberList )
LABEL_17:
    sub_B0D97C(this);
  max_length = memberList->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      v10 = sub_B0D9A8(this);
      sub_B0D948(v10, 0LL);
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
    this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(EquipSvtId, 0LL);
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

  if ( (byte_42181E1 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, deck);
    byte_42181E1 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_31:
    sub_B0D97C(questRestrictionInfo);
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
      v13 = sub_B0D9A8(questRestrictionInfo);
      sub_B0D948(v13, 0LL);
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
    if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(
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


bool __fastcall PartyListViewItem__IsSpecificMenuKind_31367280(
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

  if ( (byte_42181EE & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_42181EE = 1;
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
    v8 = sub_B0D9A8(v4);
    sub_B0D948(v8, 0LL);
  }
  v4 = memberList->m_Items[0];
  if ( !v4 )
LABEL_17:
    sub_B0D97C(v4);
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

  if ( (byte_42181E8 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_42181E8 = 1;
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
      v9 = sub_B0D9A8(v7);
      sub_B0D948(v9, 0LL);
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
      sub_B0D97C(v7);
    PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)v7, 0LL);
  }
  PartyListViewItem__CheckRestriction(this, method);
  PartyListViewItem__UpdateEventEffect(this, v8);
}


void __fastcall PartyListViewItem__Set(PartyListViewItem_o *this, PartyListViewItem_o *item, const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int v26; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v28; // x26
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x21
  Il2CppClass **v36; // x0
  struct PartyOrganizationListViewItem_array *v37; // x8
  PartyOrganizationListViewItem_o *v38; // x8
  il2cpp_array_size_t v39; // w24
  struct System_String_o *deckName; // x1
  struct System_Int32_array *waveBattleEnemyClassIds; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x0
  __int64 v49; // x0

  if ( (byte_42181E9 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, item);
    byte_42181E9 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_21:
    sub_B0D97C(v5);
  this->fields.menuKind = item->fields.menuKind;
  this->fields.maxCost = item->fields.maxCost;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v26 = 1;
  this->fields.id = item->fields.id;
  while ( 1 )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v39 = v26 - 1;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v39 >= *(_DWORD *)(*(_QWORD *)&v5->fields.frameType + 156LL) )
      break;
    memberList = item->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( v39 >= memberList->max_length )
      goto LABEL_22;
    v5 = memberList->m_Items[v39];
    if ( !v5 )
      goto LABEL_21;
    v28 = this->fields.memberList;
    v5 = PartyOrganizationListViewItem__Clone(v5, -1, 0LL);
    if ( !v28 )
      goto LABEL_21;
    v35 = (System_Int32_array **)v5;
    if ( v5 )
    {
      v5 = (PartyOrganizationListViewItem_o *)sub_B0D964(v5, v28->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v49 = sub_B0D99C(0LL);
        sub_B0D948(v49, 0LL);
      }
    }
    if ( v39 >= v28->max_length )
      goto LABEL_22;
    v36 = &v28->obj.klass + (int)v39;
    v36[4] = (Il2CppClass *)v35;
    sub_B0D840((BattleServantConfConponent_o *)(v36 + 4), v35, v29, v30, v31, v32, v33, v34);
    v37 = this->fields.memberList;
    if ( !v37 )
      goto LABEL_21;
    if ( v39 >= v37->max_length )
    {
LABEL_22:
      v48 = sub_B0D9A8(v5);
      sub_B0D948(v48, 0LL);
    }
    v38 = v37->m_Items[v39];
    if ( !v38 )
      goto LABEL_21;
    v38->fields._NowPos_k__BackingField = v26++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_B0D840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.waveBattleEnemyClassIds,
    (System_Int32_array **)waveBattleEnemyClassIds,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
  sub_B0D840(
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

  if ( (byte_42181EA & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&num);
    byte_42181EA = 1;
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
      v15 = sub_B0D9A8(v14);
      sub_B0D948(v15, 0LL);
    }
    v9 = &memberList->obj.klass + (int)i;
    v10 = (PartyOrganizationListViewItem_o *)v9[4];
    if ( !v10 )
LABEL_16:
      sub_B0D97C(v14);
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
    || (PartyOrganizationListViewItem__Modify_30741308((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberList) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(this);
  }
  if ( v10->max_length <= num )
  {
LABEL_12:
    v13 = sub_B0D9A8(this);
    sub_B0D948(v13, 0LL);
  }
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


void __fastcall PartyListViewItem__SetMember_31367304(
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
    sub_B0D97C(this);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_B0D964(member, v15->obj.klass->_1.element_class);
    if ( !this )
    {
      v21 = sub_B0D99C(0LL);
      sub_B0D948(v21, 0LL);
    }
  }
  if ( v15->max_length <= idx )
    goto LABEL_18;
  v16 = &v15->obj.klass + idx;
  v16[4] = (Il2CppClass *)member;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 4), (System_Int32_array **)member, v9, v10, v11, v12, v13, v14);
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
    v20 = sub_B0D9A8(this);
    sub_B0D948(v20, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v21; // x28
  unsigned int v22; // w20
  FollowerInfo_o *v23; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x27
  struct QuestRestrictionInfo_o *v27; // x8
  int32_t v28; // w0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  QuestRestrictionInfo_o *v35; // x19
  QuestRestrictionInfo_o *v36; // x24
  __int64 v37; // x19
  bool result; // w0
  __int64 v39; // x0
  int32_t *v40; // [xsp+8h] [xbp-78h]
  __int64 value; // [xsp+10h] [xbp-70h]
  PartyListViewItem_o *v42; // [xsp+18h] [xbp-68h]
  UserServantEntity_o *v43; // [xsp+20h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_42181E5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, follower);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v15);
    sub_B0D8A4(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_42181E5 = 1;
  }
  v43 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !npcFollowerInfoList )
    goto LABEL_39;
  max_length = npcFollowerInfoList->max_length;
  if ( max_length < 1 )
    return 0;
  v40 = followerClassId;
  v21 = Master_WarQuestSelectionMaster;
  v22 = 0;
  v42 = this;
  while ( 1 )
  {
    if ( v22 >= max_length )
    {
      v39 = sub_B0D9A8(Master_WarQuestSelectionMaster);
      sub_B0D948(v39, 0LL);
    }
    v23 = npcFollowerInfoList->m_Items[v22];
    if ( !v23 )
      goto LABEL_39;
    if ( v23->fields.npcFollowerSvtId == npcFollowerSvtId )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_39;
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v23, 0, ReturnTypeByQuestId, 0LL);
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Master_WarQuestSelectionMaster, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(Master_WarQuestSelectionMaster, &entity, npcFollowerSvtId, (const MethodInfo_2669E58 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v27 = this->fields.questRestrictionInfo;
        if ( !v27 )
          goto LABEL_39;
        v28 = FollowerInfo__GetReturnTypeByQuestId(v27->fields.questId, 0LL);
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)FollowerInfo__GetNpcServantIndividuality(v23, 0, v28, 0LL);
        if ( !this->fields.questRestrictionInfo )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_30628808(this->fields.questRestrictionInfo, (System_Int32_array *)Master_WarQuestSelectionMaster, pos, 0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          break;
        goto LABEL_34;
      }
      if ( !v21 )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(v21, &v43, npcFollowerSvtId, (const MethodInfo_2669E58 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        goto LABEL_27;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v43;
      if ( !v43 )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v43, 0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v43;
        if ( !v43 )
          goto LABEL_39;
        v35 = this->fields.questRestrictionInfo;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)NpcServantFollowerEntity__GetOverwriteIndividuality((NpcServantFollowerEntity_o *)v43, 0LL);
        if ( !v35 )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_30628808(v35, (System_Int32_array *)Master_WarQuestSelectionMaster, pos, 0LL);
      }
      else
      {
LABEL_27:
        if ( !ServantLeaderInfo )
          goto LABEL_39;
        v36 = this->fields.questRestrictionInfo;
        v37 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          value = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v45.fields.fakeValue = value;
        }
        *(_QWORD *)&v45.fields.currentCryptoKey = v37;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v45, 0LL);
        if ( !v36 )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(v36, (int32_t)Master_WarQuestSelectionMaster, ServantLeaderInfo->fields.limitCount, ServantLeaderInfo->fields.dispLimitCount, pos, 0, 0LL);
        this = v42;
      }
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        break;
    }
LABEL_34:
    max_length = npcFollowerInfoList->max_length;
    if ( (int)++v22 >= max_length )
      return 0;
  }
  *follower = v23;
  sub_B0D840((BattleServantConfConponent_o *)follower, (System_Int32_array **)v23, v29, v30, v31, v32, v33, v34);
  if ( !ServantLeaderInfo )
LABEL_39:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  result = 1;
  *v40 = ServantLeaderInfo->fields.classId;
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
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
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
        v5 = sub_B0D9A8(this);
        sub_B0D948(v5, 0LL);
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
    sub_B0D97C(this);
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

  if ( (byte_42181FB & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10381/*"PARTY_ORGANIZATION_NAME_BASE"*/, v3);
    byte_42181FB = 1;
  }
  v7 = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10381/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}