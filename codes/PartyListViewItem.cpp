void __fastcall PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  struct PartyOrganizationListViewItem_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42ECE5B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyOrganizationListViewItem___TypeInfo, v5, v6, v7);
    byte_42ECE5B = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct PartyOrganizationListViewItem_array *)sub_B5D5DC(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v8->static_fields->DeckMemberMax);
  this->fields.memberList = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_33790544(
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
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  PartyOrganizationListViewItem_o *v42; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x2
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x19
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v48; // x8
  int32_t DeckMainMemberMax; // w28
  UserServantEntity_array *v50; // x21
  struct PartyOrganizationListViewItem_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UserServantEntity_array *v58; // x20
  int32_t v59; // w21
  struct DeckServant_o *v60; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v63; // x8
  int32_t initPos; // w25
  int v65; // w9
  struct PartyOrganizationListViewItem_array *v66; // x19
  PartyOrganizationListViewItem_o *v67; // x0
  System_Int32_array **v68; // x24
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  Il2CppClass **v75; // x0
  UserServantEntity_o *v76; // x19
  struct PartyOrganizationListViewItem_array *v77; // x28
  UserServantEntity_array *v78; // x27
  PartyListViewItem_o *v79; // x20
  FollowerInfo_o *v80; // x22
  UserDeckEntity_o *v81; // x26
  System_Int64_array *EquipList; // x23
  PartyOrganizationListViewItem_o *v83; // x24
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  Il2CppClass **v90; // x0
  PartyOrganizationListViewItem_o *v91; // x24
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  Il2CppClass **v98; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v101; // x0
  __int64 v102; // x0
  int32_t v105; // [xsp+34h] [xbp-7Ch]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+40h] [xbp-70h]
  int32_t v108; // [xsp+5Ch] [xbp-54h]

  if ( (byte_42ECE5C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, menuKind, index, *(_QWORD *)&maxCost);
    sub_B5D5C4(&PartyOrganizationListViewItem___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v27, v28, v29);
    byte_42ECE5C = 1;
  }
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !deck )
    goto LABEL_68;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v44);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_68;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0LL);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0LL);
  v48 = BalanceConfig_TypeInfo;
  if ( FollowerIndex <= 0 )
  {
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v48 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v48->static_fields->DeckMainMemberMax;
  }
  else
  {
    DeckMainMemberMax = FollowerIndex;
  }
  if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
  {
    v50 = UserServantList;
    j_il2cpp_runtime_class_init_0(v48);
    v48 = BalanceConfig_TypeInfo;
  }
  else
  {
    v50 = UserServantList;
  }
  v51 = (struct PartyOrganizationListViewItem_array *)sub_B5D5DC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v48->static_fields->DeckMemberMax);
  this->fields.memberList = v51;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v42 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v42 )
    goto LABEL_68;
  if ( !*(_QWORD *)&v42->fields.sortIndex )
  {
    v58 = v50;
    goto LABEL_27;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v42 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v42
    || (follower = *(FollowerInfo_o **)&v42->fields.sortIndex,
        (v42 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL)
    || (v58 = v50,
        followerClassId = v42->fields.sortValue0,
        (v42 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_68:
    sub_B5D69C(v42, v43);
  }
  followerDeckId = HIDWORD(v42->fields.sortValue0);
LABEL_27:
  v59 = 0;
  v105 = DeckMainMemberMax;
  while ( 1 )
  {
    v42 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v42 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v59 >= *(_DWORD *)(*(_QWORD *)&v42->fields.classId + 156LL) )
      break;
    v60 = deck->fields.deckInfo;
    if ( !v60 )
      goto LABEL_68;
    svts = v60->fields.svts;
    if ( !svts )
      goto LABEL_68;
    max_length = svts->max_length;
    if ( v59 >= max_length )
    {
      v65 = v59 + 1;
      initPos = v59 + 1;
    }
    else
    {
      if ( v59 >= (unsigned int)max_length )
        goto LABEL_69;
      v63 = svts->m_Items[v59];
      if ( !v63 )
        goto LABEL_68;
      initPos = v63->fields.initPos;
      v65 = v59 + 1;
    }
    v108 = v65;
    if ( v65 == DeckMainMemberMax )
    {
      v66 = *p_memberList;
      v67 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      v68 = (System_Int32_array **)v67;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_29728604(
          v67,
          v59,
          follower,
          followerClassId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0LL);
        if ( !v66 )
          goto LABEL_68;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_29764096(v67, v59, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v66 )
          goto LABEL_68;
      }
      if ( v68 )
      {
        v42 = (PartyOrganizationListViewItem_o *)sub_B5D684(v68, v66->obj.klass->_1.element_class);
        if ( !v42 )
          goto LABEL_70;
      }
      if ( v59 >= v66->max_length )
        goto LABEL_69;
      v75 = &v66->obj.klass + v59;
      v75[4] = (Il2CppClass *)v68;
      sub_B5D560((BattleServantConfConponent_o *)(v75 + 4), v68, v69, v70, v71, v72, v73, v74);
    }
    else
    {
      if ( !v58 )
        goto LABEL_68;
      if ( v59 >= v58->max_length )
        goto LABEL_69;
      v76 = v58->m_Items[v59];
      v77 = *p_memberList;
      if ( v76 )
      {
        v78 = v58;
        v79 = this;
        v80 = follower;
        v81 = deck;
        EquipList = UserDeckEntity__GetEquipList(deck, v59, 0LL);
        v83 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_29755084(
          v83,
          v59,
          v76,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v77 )
          goto LABEL_68;
        if ( v83 )
        {
          v42 = (PartyOrganizationListViewItem_o *)sub_B5D684(v83, v77->obj.klass->_1.element_class);
          if ( !v42 )
            goto LABEL_70;
        }
        if ( v59 >= v77->max_length )
          goto LABEL_69;
        deck = v81;
        v90 = &v77->obj.klass + v59;
        v90[4] = (Il2CppClass *)v83;
        sub_B5D560((BattleServantConfConponent_o *)(v90 + 4), (System_Int32_array **)v83, v84, v85, v86, v87, v88, v89);
        follower = v80;
        this = v79;
        v58 = v78;
      }
      else
      {
        v91 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_29764096(v91, v59, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v77 )
          goto LABEL_68;
        if ( v91 )
        {
          v42 = (PartyOrganizationListViewItem_o *)sub_B5D684(v91, v77->obj.klass->_1.element_class);
          if ( !v42 )
          {
LABEL_70:
            v102 = sub_B5D6BC(v42);
            sub_B5D668(v102, 0LL);
          }
        }
        if ( v59 >= v77->max_length )
          goto LABEL_69;
        v98 = &v77->obj.klass + v59;
        v98[4] = (Il2CppClass *)v91;
        sub_B5D560((BattleServantConfConponent_o *)(v98 + 4), (System_Int32_array **)v91, v92, v93, v94, v95, v96, v97);
      }
      DeckMainMemberMax = v105;
    }
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_68;
    if ( v59 >= memberList->max_length )
    {
LABEL_69:
      v101 = sub_B5D6C8(v42);
      sub_B5D668(v101, 0LL);
    }
    v42 = memberList->m_Items[v59];
    if ( !v42 )
      goto LABEL_68;
    cost = this->fields.cost;
    v59 = v108;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v42, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v43);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_33793456(
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
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x1
  struct System_String_o *DefaultDeckName; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 Member; // x0
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x2
  UserEventDeckEntity_o *v63; // x20
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v65; // x3
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v67; // x0
  PartyListViewItem_o *v68; // x9
  int v69; // w27
  const MethodInfo *v70; // x2
  int32_t v71; // w23
  BalanceConfig_c *v72; // x0
  struct PartyOrganizationListViewItem_array *v73; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  int32_t v81; // w8
  const MethodInfo *v82; // x2
  unsigned int v83; // w24
  int32_t *p_initPos; // x8
  struct DeckServant_o *v85; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v87; // x8
  int32_t initPos; // w25
  const MethodInfo *v89; // x6
  int v90; // w23
  struct DeckServant_o *v91; // x8
  struct DeckServantData_array *v92; // x8
  DeckServantData_o *v93; // x8
  _BOOL4 v94; // w19
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v96; // x27
  int32_t v97; // w23
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v99; // x20
  int32_t v100; // w26
  PartyOrganizationListViewItem_o *v101; // x19
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  Il2CppClass **v108; // x0
  FollowerInfo_o *v109; // x23
  struct PartyOrganizationListViewItem_array *v110; // x26
  int32_t v111; // w27
  PartyOrganizationListViewItem_o *v112; // x19
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  Il2CppClass **v119; // x0
  BattleServantConfConponent_o *v120; // x0
  System_Int32_array **v121; // x1
  UserServantEntity_array *v122; // x20
  Il2CppClass **v123; // x23
  Il2CppClass *v124; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v125; // x23
  Il2CppClass *v126; // t1
  Il2CppClass *parent; // x19
  Il2CppClass *declaringType; // x27
  int32_t v129; // w19
  int32_t v130; // w27
  int32_t DispLimitCount; // w0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  UserServantEntity_o *v138; // x23
  struct PartyOrganizationListViewItem_array *v139; // x20
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v141; // x0
  System_Int32_array **v142; // x23
  Il2CppClass **v143; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v146; // x1
  __int64 v147; // x0
  __int64 v148; // x0
  bool *v149; // [xsp+20h] [xbp-C0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+30h] [xbp-B0h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-A8h]
  int v153; // [xsp+40h] [xbp-A0h]
  int v154; // [xsp+44h] [xbp-9Ch]
  PartyListViewItem_o *v155; // [xsp+48h] [xbp-98h]
  int32_t v157; // [xsp+64h] [xbp-7Ch]
  bool v159; // [xsp+74h] [xbp-6Ch]
  int32_t followerClassIda; // [xsp+84h] [xbp-5Ch] BYREF
  FollowerInfo_o *followera; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16

  if ( (byte_42ECE5D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)isBaseModify, menuKind, *(_QWORD *)&index);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v18, v19, v20);
    sub_B5D5C4(&DataManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&PartyOrganizationListViewItem___TypeInfo, v27, v28, v29);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v36, v37, v38);
    byte_42ECE5D = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v52);
  this->fields.deckName = DefaultDeckName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.deckName,
    (System_Int32_array **)DefaultDeckName,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v63 = deck;
  if ( !deck )
    goto LABEL_139;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_139;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v62) )
  {
    Member = (__int64)deck->fields.deckInfo;
    if ( !Member )
      goto LABEL_139;
    DeckServant__ResetInitPos((DeckServant_o *)Member, 0LL);
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v65);
  if ( FollowerIndex <= 0 )
  {
    v67 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v67 = BalanceConfig_TypeInfo;
    }
    v63 = deck;
    FollowerIndex = v67->static_fields->DeckMainMemberMax;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_139;
  if ( *(int *)(Member + 48) < 1 )
  {
    v159 = 0;
    v155 = 0LL;
    v69 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_139;
    v68 = *(PartyListViewItem_o **)(Member + 72);
    v69 = 0;
    v159 = v68 != 0LL;
    v155 = v68;
    if ( follower && v68 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_139;
      if ( !v155 )
        goto LABEL_139;
      v69 = *(_DWORD *)(Member + 48);
      Member = (__int64)PartyListViewItem__GetMember(v155, v69 - 1, v70);
      if ( !Member )
        goto LABEL_139;
      v71 = *(_DWORD *)(Member + 348);
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_139;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v71, follower, 0LL);
      v159 = 1;
    }
  }
  v149 = isBaseModify;
  v72 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v72 = BalanceConfig_TypeInfo;
  }
  v73 = (struct PartyOrganizationListViewItem_array *)sub_B5D5DC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v72->static_fields->DeckMemberMax);
  this->fields.memberList = v73;
  p_memberList = &this->fields.memberList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v73,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_139;
  if ( !*(_QWORD *)(Member + 24) )
  {
    v81 = followerDeckId;
    goto LABEL_49;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member
    || (follower = *(FollowerInfo_o **)(Member + 24),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (followerClassId = *(_DWORD *)(Member + 32),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_139:
    sub_B5D69C(Member, v61);
  }
  v81 = *(_DWORD *)(Member + 36);
LABEL_49:
  v157 = v81;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !Member )
    goto LABEL_139;
  v154 = v69 - 1;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Member,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v83 = 0;
  v153 = FollowerIndex - 1;
  while ( 1 )
  {
    Member = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v83 >= *(_DWORD *)(*(_QWORD *)(Member + 184) + 156LL) )
      break;
    if ( v159 )
    {
      Member = (__int64)v155;
      if ( !v155 )
        goto LABEL_139;
      Member = (__int64)PartyListViewItem__GetMember(v155, v83, v82);
      if ( !Member )
        goto LABEL_139;
      p_initPos = (int32_t *)(Member + 348);
    }
    else
    {
      v85 = v63->fields.deckInfo;
      if ( !v85 )
        goto LABEL_139;
      svts = v85->fields.svts;
      if ( !svts )
        goto LABEL_139;
      if ( v83 >= svts->max_length )
        goto LABEL_143;
      v87 = svts->m_Items[v83];
      if ( !v87 )
        goto LABEL_139;
      p_initPos = &v87->fields.initPos;
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_139;
    Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(questRestrictionInfo, initPos, 0LL);
    v90 = Member;
    if ( (Member & 1) != 0 )
    {
      v91 = v63->fields.deckInfo;
      if ( !v91 )
        goto LABEL_139;
      v92 = v91->fields.svts;
      if ( !v92 )
        goto LABEL_139;
      if ( v83 >= v92->max_length )
        goto LABEL_143;
      v93 = v92->m_Items[v83];
      if ( !v93 )
        goto LABEL_139;
      v94 = 0;
      if ( v154 != v83 )
      {
        npcFollowerSvtId = v93->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v94 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v89);
      }
    }
    else
    {
      v94 = 0;
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_139;
    Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, initPos, 0LL);
    if ( Member && ((v90 ^ 1) & 1) == 0 )
    {
      v96 = (FollowerInfo_o *)Member;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL) )
        v97 = 0;
      else
        v97 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v96, 0LL);
      v99 = *p_memberList;
      if ( IsNpc )
        v100 = 0;
      else
        v100 = v157;
      v101 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_29728604(
        v101,
        v83,
        v96,
        v97,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v100,
        initPos,
        0LL);
      if ( !v99 )
        goto LABEL_139;
      if ( v101 )
      {
        Member = sub_B5D684(v101, v99->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v83 >= v99->max_length )
        goto LABEL_143;
      v108 = &v99->obj.klass + (int)v83;
LABEL_124:
      v108[4] = (Il2CppClass *)v101;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v108 + 4),
        (System_Int32_array **)v101,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
      v63 = deck;
      goto LABEL_132;
    }
    if ( v153 != v83 && !v94 )
    {
      if ( (v90 & 1) != 0 )
      {
        v122 = UserServantList;
        if ( !UserServantList )
          goto LABEL_139;
        if ( v83 >= UserServantList->max_length )
          goto LABEL_143;
        v123 = &UserServantList->obj.klass + (int)v83;
        v126 = v123[4];
        v125 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v123 + 4);
        v124 = v126;
        if ( v126 )
        {
          declaringType = v124->_1.declaringType;
          parent = v124->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v162.fields.currentCryptoKey = declaringType;
          *(_QWORD *)&v162.fields.fakeValue = parent;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v162, 0LL);
          if ( v83 >= UserServantList->max_length )
            goto LABEL_143;
          if ( !*v125 )
            goto LABEL_139;
          v129 = Member;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*v125)[6], 0LL);
          if ( v83 >= UserServantList->max_length )
            goto LABEL_143;
          v130 = Member;
          Member = (__int64)*v125;
          if ( !*v125 )
            goto LABEL_139;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
          Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                     questRestrictionInfo,
                     v129,
                     v130,
                     DispLimitCount,
                     initPos,
                     0,
                     0LL);
          if ( (Member & 1) != 0 )
          {
            if ( v83 >= UserServantList->max_length )
              goto LABEL_143;
            *v125 = 0LL;
            sub_B5D560((BattleServantConfConponent_o *)v125, 0LL, v132, v133, v134, v135, v136, v137);
          }
        }
      }
      else
      {
        v122 = UserServantList;
        if ( !UserServantList )
          goto LABEL_139;
      }
      if ( v83 >= v122->max_length )
        goto LABEL_143;
      v138 = v122->m_Items[v83];
      v139 = *p_memberList;
      if ( v138 )
      {
        EquipList = UserEventDeckEntity__GetEquipList(deck, v83, 0LL);
        v101 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_29755084(
          v101,
          v83,
          v138,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v139 )
          goto LABEL_139;
      }
      else
      {
        v101 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_29764096(v101, v83, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v139 )
          goto LABEL_139;
      }
      if ( v101 )
      {
        Member = sub_B5D684(v101, v139->obj.klass->_1.element_class);
        if ( !Member )
        {
LABEL_144:
          v148 = sub_B5D6BC(Member);
          sub_B5D668(v148, 0LL);
        }
      }
      if ( v83 >= v139->max_length )
        goto LABEL_143;
      v108 = &v139->obj.klass + (int)v83;
      goto LABEL_124;
    }
    v109 = followera;
    v110 = *p_memberList;
    if ( followera )
    {
      v111 = followerClassIda;
      v112 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_29728604(
        v112,
        v83,
        v109,
        v111,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v157,
        initPos,
        0LL);
      if ( !v110 )
        goto LABEL_139;
      if ( v112 )
      {
        Member = sub_B5D684(v112, v110->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v83 >= v110->max_length )
        goto LABEL_143;
      v119 = &v110->obj.klass + (int)v83;
      v119[4] = (Il2CppClass *)v112;
      v120 = (BattleServantConfConponent_o *)(v119 + 4);
      v121 = (System_Int32_array **)v112;
    }
    else
    {
      v141 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      v142 = (System_Int32_array **)v141;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_29728604(
          v141,
          v83,
          follower,
          followerClassId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v157,
          initPos,
          0LL);
        if ( !v110 )
          goto LABEL_139;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_29764096(v141, v83, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v110 )
          goto LABEL_139;
      }
      if ( v142 )
      {
        Member = sub_B5D684(v142, v110->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v83 >= v110->max_length )
        goto LABEL_143;
      v143 = &v110->obj.klass + (int)v83;
      v143[4] = (Il2CppClass *)v142;
      v120 = (BattleServantConfConponent_o *)(v143 + 4);
      v121 = v142;
    }
    sub_B5D560(v120, v121, v113, v114, v115, v116, v117, v118);
LABEL_132:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_139;
    if ( v83 >= memberList->max_length )
    {
LABEL_143:
      v147 = sub_B5D6C8(Member);
      sub_B5D668(v147, 0LL);
    }
    Member = (__int64)memberList->m_Items[v83];
    if ( !Member )
      goto LABEL_139;
    cost = this->fields.cost;
    ++v83;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Member, 0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v61);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v146) )
    *v149 = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_33798840(
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x1
  struct System_String_o *DefaultDeckName; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 Member; // x0
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x2
  struct DeckServant_o *deckInfo; // x8
  SingletonTemplate_PartyOrganizationUtility__c **v69; // x26
  PartyListViewItem_o *v70; // x27
  unsigned int v71; // w23
  const MethodInfo *v72; // x2
  int32_t v73; // w19
  int32_t v74; // w8
  BalanceConfig_c *v75; // x0
  struct PartyOrganizationListViewItem_array *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  int32_t v83; // w8
  struct QuestRestrictionInfo_o *v84; // x8
  unsigned int *v85; // x24
  FollowerInfo_array *QuestFollowerList; // x0
  const MethodInfo *v87; // x2
  __int64 v88; // x8
  unsigned __int64 v89; // x25
  __int64 v90; // x23
  int32_t *v91; // x8
  struct DeckServant_o *v92; // x8
  struct DeckServantData_array *svts; // x8
  __int64 v94; // x8
  int32_t v95; // w19
  unsigned __int64 max_length; // x8
  __int64 v97; // x9
  __int64 v98; // x20
  __int64 v99; // x23
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x20
  const MethodInfo *v107; // x6
  int v108; // w27
  struct DeckServant_o *v109; // x8
  struct DeckServantData_array *v110; // x8
  __int64 v111; // x8
  _BOOL4 v112; // w20
  int64_t v113; // x4
  SingletonTemplate_PartyOrganizationUtility__c *v114; // x0
  FollowerInfo_o *v115; // x23
  SingletonTemplate_PartyOrganizationUtility__c **v116; // x24
  PartyListViewItem_o *v117; // x26
  UserEventDeckEntity_o *v118; // x21
  int32_t v119; // w27
  bool IsNpc; // w0
  unsigned int *v121; // x19
  int32_t v122; // w28
  PartyOrganizationListViewItem_o *v123; // x20
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  __int64 v130; // x19
  FollowerInfo_o *v131; // x23
  unsigned int *v132; // x19
  int32_t v133; // w27
  PartyOrganizationListViewItem_o *v134; // x20
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  unsigned __int64 v141; // x27
  QuestRestrictionInfo_o *v142; // x25
  unsigned int *v143; // x19
  PartyOrganizationListViewItem_o *v144; // x0
  int32_t v145; // w1
  QuestRestrictionInfo_o *v146; // x4
  System_Int32_array **v147; // x20
  unsigned __int64 v148; // x22
  QuestRestrictionInfo_o *v149; // x27
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  __int64 v156; // x8
  __int64 v157; // x20
  __int64 v158; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v159; // x8
  int32_t v160; // w20
  int32_t v161; // w23
  int32_t DispLimitCount; // w0
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  UserServantEntity_o *v169; // x23
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v171; // x0
  System_Int32_array **v172; // x27
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v181; // x1
  __int64 v182; // x0
  __int64 v183; // x0
  UserServantMaster_o *Master_WarQuestSelectionMaster; // [xsp+20h] [xbp-100h]
  int32_t *v186; // [xsp+30h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+48h] [xbp-D8h]
  UserServantEntity_array *UserServantList; // [xsp+50h] [xbp-D0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+60h] [xbp-C0h]
  UserServantEntity_o **m_Items; // [xsp+70h] [xbp-B0h]
  __int64 v193; // [xsp+78h] [xbp-A8h]
  int32_t v194; // [xsp+84h] [xbp-9Ch]
  __int64 v195; // [xsp+88h] [xbp-98h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+90h] [xbp-90h]
  PartyListViewItem_o *v197; // [xsp+98h] [xbp-88h]
  int32_t initPos; // [xsp+ACh] [xbp-74h]
  __int64 v199; // [xsp+B0h] [xbp-70h]
  int32_t followerClassIda; // [xsp+BCh] [xbp-64h] BYREF
  FollowerInfo_o *followera; // [xsp+C0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v202; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v203; // 0:x0.16

  v14 = questRestrictionInfo;
  if ( (byte_42ECE5E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)isBaseModify, menuKind, *(_QWORD *)&index);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v23, v24, v25);
    sub_B5D5C4(&DataManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&PartyOrganizationListViewItem___TypeInfo, v32, v33, v34);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v41, v42, v43);
    byte_42ECE5E = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v57);
  this->fields.deckName = DefaultDeckName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.deckName,
    (System_Int32_array **)DefaultDeckName,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  if ( !deck )
    goto LABEL_170;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_170;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v67) )
  {
    Member = (__int64)deck->fields.deckInfo;
    if ( !Member )
      goto LABEL_170;
    DeckServant__ResetInitPos((DeckServant_o *)Member, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  v69 = &SingletonTemplate_PartyOrganizationUtility__TypeInfo;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  if ( *(int *)(Member + 48) < 1 )
  {
    v70 = 0LL;
    if ( !questRestrictionInfo )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  v70 = *(PartyListViewItem_o **)(Member + 72);
  if ( questRestrictionInfo )
LABEL_21:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_22:
  v71 = 0;
  if ( follower && v70 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    v71 = *(_DWORD *)(Member + 48);
    Member = (__int64)PartyListViewItem__GetMember(v70, v71 - 1, v72);
    if ( !Member )
      goto LABEL_170;
    v73 = *(_DWORD *)(Member + 348);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v73, follower, 0LL);
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  if ( *(_QWORD *)(Member + 24) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    follower = *(FollowerInfo_o **)(Member + 24);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    followerClassId = *(_DWORD *)(Member + 32);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    v74 = *(_DWORD *)(Member + 36);
  }
  else
  {
    v74 = followerDeckId;
  }
  v194 = v74;
  v75 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v75 = BalanceConfig_TypeInfo;
  }
  v76 = (struct PartyOrganizationListViewItem_array *)sub_B5D5DC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v75->static_fields->DeckMemberMax);
  this->fields.memberList = v76;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  v83 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v83 == 3 )
  {
    Member = (__int64)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_170;
    Member = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Member, 0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_170;
    v193 = Member;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0LL;
    v193 = 0LL;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v84 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo || (v85 = (unsigned int *)UserServantList, !Member) )
LABEL_170:
    sub_B5D69C(Member, v66);
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Member,
                        v84->fields.questId,
                        v84->fields.questPhase,
                        0LL);
  v88 = 8LL * v71;
  v89 = 0LL;
  v90 = 0LL;
  v186 = &svtIdForceBattleList->m_Items[1];
  npcFollowerInfoList = QuestFollowerList;
  m_Items = UserServantList->m_Items;
  v195 = v88 - 8;
  v197 = v70;
  while ( 1 )
  {
    Member = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Member = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v89 >= *(int *)(*(_QWORD *)(Member + 184) + 156LL) )
      break;
    if ( v70 )
    {
      Member = (__int64)PartyListViewItem__GetMember(v70, v89, v87);
      if ( !Member )
        goto LABEL_170;
      v91 = (int32_t *)(Member + 348);
    }
    else
    {
      v92 = deck->fields.deckInfo;
      if ( !v92 )
        goto LABEL_170;
      svts = v92->fields.svts;
      if ( !svts )
        goto LABEL_170;
      if ( v89 >= svts->max_length )
        goto LABEL_171;
      v94 = *(__int64 *)((char *)svts->m_Items + v90);
      if ( !v94 )
        goto LABEL_170;
      v91 = (int32_t *)(v94 + 76);
    }
    v95 = *v91;
    v199 = v90;
    initPos = *v91;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v193 )
        goto LABEL_170;
      if ( (__int64)v89 >= *(int *)(v193 + 24) )
      {
        v141 = v89;
        v142 = v14;
        v143 = (unsigned int *)*p_memberList;
        v144 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        v145 = v141;
        v146 = v14;
        v147 = (System_Int32_array **)v144;
        v148 = v141;
        v149 = v142;
        PartyOrganizationListViewItem___ctor_29764096(v144, v145, 0, setupInfo, v146, 1, initPos, 0LL);
        if ( !v143 )
          goto LABEL_170;
        if ( v147 )
        {
          Member = sub_B5D684(v147, *(_QWORD *)(*(_QWORD *)v143 + 64LL));
          if ( !Member )
          {
LABEL_172:
            v183 = sub_B5D6BC(Member);
            sub_B5D668(v183, 0LL);
          }
        }
        if ( v148 >= v143[6] )
          goto LABEL_171;
        *(_QWORD *)((char *)v143 + v90 + 32) = v147;
        v89 = v148;
        v14 = v149;
        sub_B5D560((BattleServantConfConponent_o *)((char *)v143 + v90 + 32), v147, v150, v151, v152, v153, v154, v155);
        v70 = v197;
        goto LABEL_160;
      }
      if ( svtIdForceBattleList )
      {
        if ( v195 != v90 && isFirstEnforceChange )
        {
          max_length = svtIdForceBattleList->max_length;
          if ( (__int64)v89 < (int)max_length )
          {
            if ( v89 >= max_length )
              goto LABEL_171;
            v66 = (const MethodInfo *)(unsigned int)v186[v89];
            if ( (int)v66 >= 1 )
            {
              if ( !v85 )
                goto LABEL_170;
              if ( v89 >= v85[6] )
                goto LABEL_171;
              v97 = *(__int64 *)((char *)m_Items + v90);
              if ( !v97 )
                goto LABEL_88;
              v99 = *(_QWORD *)(v97 + 80);
              v98 = *(_QWORD *)(v97 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v202.fields.currentCryptoKey = v99;
              *(_QWORD *)&v202.fields.fakeValue = v98;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v202, 0LL);
              max_length = svtIdForceBattleList->max_length;
              if ( v89 >= max_length )
                goto LABEL_171;
              v90 = v199;
              v66 = (const MethodInfo *)(unsigned int)v186[v89];
              if ( (_DWORD)Member != (_DWORD)v66 )
              {
LABEL_88:
                if ( v89 >= max_length )
                  goto LABEL_171;
                Member = (__int64)Master_WarQuestSelectionMaster;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_170;
                Member = (__int64)UserServantMaster__getSvtIdBattle(Master_WarQuestSelectionMaster, (int32_t)v66, 0LL);
                v106 = (System_Int32_array **)Member;
                if ( Member )
                {
                  Member = sub_B5D684(Member, *(_QWORD *)(*(_QWORD *)v85 + 64LL));
                  if ( !Member )
                    goto LABEL_172;
                }
                if ( v89 >= v85[6] )
                  goto LABEL_171;
                *(UserServantEntity_o **)((char *)m_Items + v90) = (UserServantEntity_o *)v106;
                sub_B5D560(
                  (BattleServantConfConponent_o *)((char *)m_Items + v90),
                  v106,
                  v100,
                  v101,
                  v102,
                  v103,
                  v104,
                  v105);
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
    Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(v14, v95, 0LL);
    v108 = Member;
    if ( (Member & 1) != 0 )
    {
      v109 = deck->fields.deckInfo;
      if ( !v109 )
        goto LABEL_170;
      v110 = v109->fields.svts;
      if ( !v110 )
        goto LABEL_170;
      if ( v89 >= v110->max_length )
        goto LABEL_171;
      v111 = *(__int64 *)((char *)v110->m_Items + v90);
      if ( !v111 )
        goto LABEL_170;
      v112 = 0;
      if ( v195 != v90 )
      {
        v113 = *(_QWORD *)(v111 + 64);
        if ( v113 >= 1 )
          v112 = PartyListViewItem__SetNpcFollowerInfo(
                   this,
                   &followera,
                   &followerClassIda,
                   npcFollowerInfoList,
                   v113,
                   v95,
                   v107);
      }
    }
    else
    {
      v112 = 0;
    }
    v114 = *v69;
    if ( (BYTE3((*v69)->vtable._0_Equals.methodPtr) & 4) != 0 && !v114->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v114);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v95, 0LL);
    if ( Member && ((v108 ^ 1) & 1) == 0 )
    {
      v115 = (FollowerInfo_o *)Member;
      v116 = v69;
      v117 = this;
      v118 = deck;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL) )
        v119 = 0;
      else
        v119 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v115, 0LL);
      v121 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v122 = 0;
      else
        v122 = v194;
      v123 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_29728604(
        v123,
        v89,
        v115,
        v119,
        setupInfo,
        v14,
        friendPointCampaignEntityList,
        0,
        v122,
        initPos,
        0LL);
      if ( !v121 )
        goto LABEL_170;
      v70 = v197;
      if ( v123 )
      {
        Member = sub_B5D684(v123, *(_QWORD *)(*(_QWORD *)v121 + 64LL));
        if ( !Member )
          goto LABEL_172;
      }
      if ( v89 >= v121[6] )
        goto LABEL_171;
      deck = v118;
      *(_QWORD *)((char *)v121 + v199 + 32) = v123;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)v121 + v199 + 32),
        (System_Int32_array **)v123,
        v124,
        v125,
        v126,
        v127,
        v128,
        v129);
      v90 = v199;
      this = v117;
      v69 = v116;
      v85 = (unsigned int *)UserServantList;
      goto LABEL_156;
    }
    v130 = v199;
    if ( v195 != v199 && !v112 )
    {
      if ( (v108 & 1) != 0 )
      {
        if ( !v85 )
          goto LABEL_170;
        if ( v89 >= v85[6] )
          goto LABEL_171;
        v156 = *(__int64 *)((char *)m_Items + v199);
        if ( v156 )
        {
          v158 = *(_QWORD *)(v156 + 80);
          v157 = *(_QWORD *)(v156 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v203.fields.currentCryptoKey = v158;
          *(_QWORD *)&v203.fields.fakeValue = v157;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v203, 0LL);
          if ( v89 >= v85[6] )
            goto LABEL_171;
          v159 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)m_Items + v199);
          if ( !v159 )
            goto LABEL_170;
          v160 = Member;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v159[6], 0LL);
          if ( v89 >= v85[6] )
            goto LABEL_171;
          v161 = Member;
          Member = *(__int64 *)((char *)m_Items + v199);
          if ( !Member )
            goto LABEL_170;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
          Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                     v14,
                     v160,
                     v161,
                     DispLimitCount,
                     initPos,
                     0,
                     0LL);
          v130 = v199;
          if ( (Member & 1) != 0 )
          {
            if ( v89 >= v85[6] )
              goto LABEL_171;
            *(UserServantEntity_o **)((char *)m_Items + v199) = 0LL;
            sub_B5D560(
              (BattleServantConfConponent_o *)((char *)m_Items + v199),
              0LL,
              v163,
              v164,
              v165,
              v166,
              v167,
              v168);
          }
        }
      }
      else if ( !v85 )
      {
        goto LABEL_170;
      }
      if ( v89 >= v85[6] )
        goto LABEL_171;
      v169 = *(UserServantEntity_o **)((char *)m_Items + v130);
      v132 = (unsigned int *)*p_memberList;
      if ( !v169 )
      {
        v134 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_29764096(v134, v89, 0, setupInfo, v14, 1, initPos, 0LL);
        v70 = v197;
        if ( !v132 )
          goto LABEL_170;
        goto LABEL_152;
      }
      EquipList = UserEventDeckEntity__GetEquipList(deck, v89, 0LL);
      v134 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_29755084(
        v134,
        v89,
        v169,
        EquipList,
        setupInfo,
        v14,
        0LL,
        initPos,
        0LL,
        0,
        0LL);
      if ( !v132 )
        goto LABEL_170;
    }
    else
    {
      v131 = followera;
      v132 = (unsigned int *)*p_memberList;
      if ( !followera )
      {
        v171 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        v172 = (System_Int32_array **)v171;
        if ( follower )
          PartyOrganizationListViewItem___ctor_29728604(
            v171,
            v89,
            follower,
            followerClassId,
            setupInfo,
            v14,
            friendPointCampaignEntityList,
            0,
            v194,
            initPos,
            0LL);
        else
          PartyOrganizationListViewItem___ctor_29764096(v171, v89, 1, setupInfo, v14, 1, initPos, 0LL);
        v90 = v199;
        if ( !v132 )
          goto LABEL_170;
        if ( v172 )
        {
          Member = sub_B5D684(v172, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
          if ( !Member )
            goto LABEL_172;
        }
        if ( v89 >= v132[6] )
          goto LABEL_171;
        *(_QWORD *)((char *)v132 + v199 + 32) = v172;
        sub_B5D560((BattleServantConfConponent_o *)((char *)v132 + v199 + 32), v172, v173, v174, v175, v176, v177, v178);
        v70 = v197;
        goto LABEL_156;
      }
      v133 = followerClassIda;
      v134 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_29728604(v134, v89, v131, v133, setupInfo, v14, 0LL, 0, v194, initPos, 0LL);
      if ( !v132 )
        goto LABEL_170;
    }
    v70 = v197;
LABEL_152:
    v90 = v199;
    if ( v134 )
    {
      Member = sub_B5D684(v134, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
      if ( !Member )
        goto LABEL_172;
    }
    if ( v89 >= v132[6] )
      goto LABEL_171;
    *(_QWORD *)((char *)v132 + v199 + 32) = v134;
    sub_B5D560(
      (BattleServantConfConponent_o *)((char *)v132 + v199 + 32),
      (System_Int32_array **)v134,
      v135,
      v136,
      v137,
      v138,
      v139,
      v140);
LABEL_156:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_170;
    if ( v89 >= memberList->max_length )
    {
LABEL_171:
      v182 = sub_B5D6C8(Member);
      sub_B5D668(v182, 0LL);
    }
    Member = *(__int64 *)((char *)memberList->m_Items + v90);
    if ( !Member )
      goto LABEL_170;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Member, 0LL)
                      + cost;
LABEL_160:
    ++v89;
    v90 += 8LL;
  }
  PartyListViewItem__CheckRestriction(this, v66);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v181) )
    *isBaseModify = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_33801984(
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  BalanceConfig_c *v54; // x0
  struct PartyOrganizationListViewItem_array *v55; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  clsQuestCheck_o *v63; // x0
  __int64 v64; // x1
  int32_t klass; // w23
  struct PartyOrganizationListViewItem_array *v66; // x26
  PartyOrganizationListViewItem_o *v67; // x0
  System_Int32_array **v68; // x27
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v77; // x1
  int32_t i; // w23
  struct PartyOrganizationListViewItem_array *v79; // x26
  PartyOrganizationListViewItem_o *v80; // x24
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  Il2CppClass **v87; // x0
  struct PartyOrganizationListViewItem_array *v88; // x8
  int32_t v89; // w24
  BalanceConfig_c *v90; // x0
  __int64 v91; // x0
  __int64 v92; // x0

  if ( (byte_42ECE5F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, menuKind, index, *(_QWORD *)&maxCost);
    sub_B5D5C4(&PartyOrganizationListViewItem___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_1/*""*/, v32, v33, v34);
    byte_42ECE5F = 1;
  }
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.isDeckNameDefault = 0;
  v47 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.deckName, v47, v48, v49, v50, v51, v52, v53);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v54 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v54 = BalanceConfig_TypeInfo;
  }
  v55 = (struct PartyOrganizationListViewItem_array *)sub_B5D5DC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v54->static_fields->DeckMemberMax);
  this->fields.memberList = v55;
  p_memberList = &this->fields.memberList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v55,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v63 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v63 )
    goto LABEL_41;
  if ( v63->fields.cQuestReleaseListP )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v63 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v63 )
      goto LABEL_41;
    follower = (FollowerInfo_o *)v63->fields.cQuestReleaseListP;
    v63 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v63 )
      goto LABEL_41;
    klass = (int32_t)v63[1].klass;
    v63 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v63 )
      goto LABEL_41;
    followerClassId = klass;
    followerDeckId = HIDWORD(v63[1].klass);
  }
  v66 = *p_memberList;
  v67 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
  v68 = (System_Int32_array **)v67;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_29728604(
      v67,
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
    if ( !v66 )
      goto LABEL_41;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_29764096(v67, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v66 )
      goto LABEL_41;
  }
  if ( v68 )
  {
    v63 = (clsQuestCheck_o *)sub_B5D684(v68, v66->obj.klass->_1.element_class);
    if ( !v63 )
    {
LABEL_43:
      v92 = sub_B5D6BC(v63);
      sub_B5D668(v92, 0LL);
    }
  }
  if ( !v66->max_length )
    goto LABEL_42;
  v66->m_Items[0] = (PartyOrganizationListViewItem_o *)v68;
  sub_B5D560((BattleServantConfConponent_o *)v66->m_Items, v68, v69, v70, v71, v72, v73, v74);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_41;
  if ( !memberList->max_length )
  {
LABEL_42:
    v91 = sub_B5D6C8(v63);
    sub_B5D668(v91, 0LL);
  }
  v63 = (clsQuestCheck_o *)memberList->m_Items[0];
  if ( !v63 )
LABEL_41:
    sub_B5D69C(v63, v64);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v63, 0LL) + cost;
  for ( i = 1; ; ++i )
  {
    v90 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v90 = BalanceConfig_TypeInfo;
    }
    if ( i >= v90->static_fields->DeckMemberMax )
      break;
    v79 = *p_memberList;
    v80 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_29764096(v80, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v79 )
      goto LABEL_41;
    if ( v80 )
    {
      v63 = (clsQuestCheck_o *)sub_B5D684(v80, v79->obj.klass->_1.element_class);
      if ( !v63 )
        goto LABEL_43;
    }
    if ( i >= v79->max_length )
      goto LABEL_42;
    v87 = &v79->obj.klass + i;
    v87[4] = (Il2CppClass *)v80;
    sub_B5D560((BattleServantConfConponent_o *)(v87 + 4), (System_Int32_array **)v80, v81, v82, v83, v84, v85, v86);
    v88 = this->fields.memberList;
    if ( !v88 )
      goto LABEL_41;
    if ( i >= v88->max_length )
      goto LABEL_42;
    v63 = (clsQuestCheck_o *)v88->m_Items[i];
    if ( !v63 )
      goto LABEL_41;
    v89 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v63, 0LL) + v89;
  }
  PartyListViewItem__CheckRestriction(this, v77);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_33802960(
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 IsNeedDeckPosReset; // x0
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w25
  const MethodInfo *v58; // x3
  PartyListViewItem_o *v59; // x9
  int v60; // w28
  const MethodInfo *v61; // x2
  int32_t v62; // w23
  int32_t FollowerIndex; // w26
  BalanceConfig_c *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x9
  __int64 v72; // x27
  __int64 v73; // x21
  unsigned __int64 v74; // x8
  __int64 v75; // x23
  signed __int64 v76; // x24
  BalanceConfig_c *v77; // x0
  struct PartyOrganizationListViewItem_array *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct QuestRestrictionInfo_o *v85; // x8
  UserEventDeckEntity_o *v86; // x28
  __int64 v87; // x19
  const MethodInfo *v88; // x2
  int32_t *p_initPos; // x8
  struct DeckServant_o *v90; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v92; // x8
  int32_t initPos; // w26
  const MethodInfo *v94; // x6
  int v95; // w23
  _BOOL4 v96; // w25
  struct DeckServant_o *v97; // x8
  struct DeckServantData_array *v98; // x8
  DeckServantData_o *v99; // x8
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v101; // x24
  int32_t v102; // w25
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v104; // x21
  int32_t v105; // w28
  PartyOrganizationListViewItem_o *v106; // x23
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  unsigned int max_length; // w8
  FollowerInfo_o *v114; // x24
  int32_t v115; // w25
  __int64 v116; // x21
  __int64 v117; // x23
  __int64 v118; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v119; // x23
  __int64 v120; // t1
  __int64 v121; // x24
  __int64 v122; // x25
  int32_t v123; // w24
  int32_t v124; // w25
  int32_t DispLimitCount; // w0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  UserServantEntity_o *v132; // x24
  struct PartyOrganizationListViewItem_array *v133; // x28
  System_Int64_array *EquipList; // x25
  PartyOrganizationListViewItem_o *v135; // x23
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  Il2CppClass **v142; // x0
  PartyOrganizationListViewItem_o *v143; // x0
  Il2CppClass **v144; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v147; // x1
  __int64 v148; // x0
  __int64 v149; // x0
  FollowerInfo_array *npcFollowerInfoList; // [xsp+20h] [xbp-C0h]
  int v153; // [xsp+30h] [xbp-B0h]
  int v154; // [xsp+38h] [xbp-A8h]
  int v155; // [xsp+38h] [xbp-A8h]
  PartyListViewItem_o *v156; // [xsp+40h] [xbp-A0h]
  int32_t v157; // [xsp+4Ch] [xbp-94h]
  int32_t v158; // [xsp+5Ch] [xbp-84h]
  UserEventDeckEntity_o *v159; // [xsp+60h] [xbp-80h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+68h] [xbp-78h]
  bool v161; // [xsp+74h] [xbp-6Ch]
  int32_t v162; // [xsp+84h] [xbp-5Ch] BYREF
  FollowerInfo_o *followera; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16

  if ( (byte_42ECE60 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)isBaseModify, menuKind, *(_QWORD *)&index);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&PartyOrganizationListViewItem___TypeInfo, v28, v29, v30);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v37, v38, v39);
    byte_42ECE60 = 1;
  }
  followera = 0LL;
  v162 = 0;
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  if ( !deck )
    goto LABEL_149;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_149;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v55);
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  if ( *(int *)(IsNeedDeckPosReset + 48) < 1 )
  {
    v161 = 0;
    v156 = 0LL;
    v60 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v59 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 72);
    v60 = 0;
    v161 = v59 != 0LL;
    v156 = v59;
    if ( follower && v59 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      if ( !v156 )
        goto LABEL_149;
      v60 = *(_DWORD *)(IsNeedDeckPosReset + 48);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v156, v60 - 1, v61);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      v62 = *(_DWORD *)(IsNeedDeckPosReset + 348);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)IsNeedDeckPosReset, v62, follower, 0LL);
      v161 = 1;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v58);
  if ( FollowerIndex > 0 || questRestrictionInfo->fields.isNotTransitionSupportList )
  {
    if ( FollowerIndex > servantNumMax )
    {
LABEL_32:
      *isBaseModify = 1;
      v64 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v64 = BalanceConfig_TypeInfo;
      }
      FollowerIndex = servantNumMax;
      if ( servantNumMax > v64->static_fields->DeckMainMemberMax )
      {
        if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          FollowerIndex = v64->static_fields->DeckMainMemberMax;
          if ( !v64->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v64);
            FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
          }
        }
        else
        {
          FollowerIndex = v64->static_fields->DeckMainMemberMax;
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    follower = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v157 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v158 = *(_DWORD *)(IsNeedDeckPosReset + 36);
  }
  else
  {
    v158 = followerDeckId;
    v157 = followerClassId;
  }
  v154 = v60;
  v159 = deck;
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  v71 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v72 = IsNeedDeckPosReset;
  if ( (int)v71 >= 1 )
  {
    v73 = 0LL;
    v74 = 0LL;
    v75 = IsNeedDeckPosReset + 32;
    do
    {
      if ( v74 >= (unsigned int)v71 )
      {
LABEL_153:
        v148 = sub_B5D6C8(IsNeedDeckPosReset);
        sub_B5D668(v148, 0LL);
      }
      v76 = v74 + 1;
      if ( servantNumMax < (int)v74 + 1 && *(_QWORD *)(v75 + 8 * v74) )
      {
        *isBaseModify = 1;
        if ( v74 >= *(unsigned int *)(v72 + 24) )
          goto LABEL_153;
        *(_QWORD *)(v75 + 8 * v74) = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)(v75 + v73), 0LL, v65, v66, v67, v68, v69, v70);
      }
      LODWORD(v71) = *(_DWORD *)(v72 + 24);
      v73 += 8LL;
      v74 = v76;
    }
    while ( v76 < (int)v71 );
  }
  v77 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v77 = BalanceConfig_TypeInfo;
  }
  v78 = (struct PartyOrganizationListViewItem_array *)sub_B5D5DC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v77->static_fields->DeckMemberMax);
  this->fields.memberList = v78;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v85 = *p_questRestrictionInfo;
  v86 = v159;
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_149:
    sub_B5D69C(IsNeedDeckPosReset, v54);
  v87 = 0LL;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          v85->fields.questId,
                          v85->fields.questPhase,
                          0LL);
  v155 = v154 - 1;
  v153 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (int)v87 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 156LL) )
      break;
    if ( v161 )
    {
      IsNeedDeckPosReset = (__int64)v156;
      if ( !v156 )
        goto LABEL_149;
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v156, v87, v88);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 348);
    }
    else
    {
      v90 = v86->fields.deckInfo;
      if ( !v90 )
        goto LABEL_149;
      svts = v90->fields.svts;
      if ( !svts )
        goto LABEL_149;
      if ( (unsigned int)v87 >= svts->max_length )
        goto LABEL_153;
      v92 = svts->m_Items[(int)v87];
      if ( !v92 )
        goto LABEL_149;
      p_initPos = &v92->fields.initPos;
    }
    initPos = *p_initPos;
    followera = 0LL;
    v162 = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(questRestrictionInfo, initPos, 0LL);
    v95 = IsNeedDeckPosReset;
    v96 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v97 = v86->fields.deckInfo;
      if ( !v97 )
        goto LABEL_149;
      v98 = v97->fields.svts;
      if ( !v98 )
        goto LABEL_149;
      if ( (unsigned int)v87 >= v98->max_length )
        goto LABEL_153;
      v99 = v98->m_Items[(int)v87];
      if ( !v99 )
        goto LABEL_149;
      v96 = 0;
      if ( v155 != (_DWORD)v87 )
      {
        npcFollowerSvtId = v99->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v96 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &v162,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v94);
      }
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    IsNeedDeckPosReset = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                                    (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                                    initPos,
                                    0LL);
    if ( IsNeedDeckPosReset && ((v95 ^ 1) & 1) == 0 )
    {
      v101 = (FollowerInfo_o *)IsNeedDeckPosReset;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsNeedDeckPosReset, 0LL) )
        v102 = 0;
      else
        v102 = v157;
      IsNpc = FollowerInfo__get_IsNpc(v101, 0LL);
      v104 = *p_memberList;
      if ( IsNpc )
        v105 = 0;
      else
        v105 = v158;
      v106 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_29728604(
        v106,
        v87,
        v101,
        v102,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v105,
        initPos,
        0LL);
      if ( !v104 )
        goto LABEL_149;
      if ( v106 )
      {
        IsNeedDeckPosReset = sub_B5D684(v106, v104->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_154;
      }
      max_length = v104->max_length;
      v86 = v159;
      goto LABEL_140;
    }
    if ( v153 == (_DWORD)v87 || v96 )
    {
      v114 = followera;
      v104 = *p_memberList;
      if ( followera )
      {
        v115 = v162;
        v106 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_29728604(
          v106,
          v87,
          v114,
          v115,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v158,
          initPos,
          0LL);
LABEL_136:
        if ( !v104 )
          goto LABEL_149;
      }
      else
      {
        v143 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        v106 = v143;
        if ( follower )
        {
          PartyOrganizationListViewItem___ctor_29728604(
            v143,
            v87,
            follower,
            v157,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v158,
            initPos,
            0LL);
          goto LABEL_136;
        }
        PartyOrganizationListViewItem___ctor_29764096(v143, v87, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v104 )
          goto LABEL_149;
      }
      if ( v106 )
      {
        IsNeedDeckPosReset = sub_B5D684(v106, v104->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_154;
      }
      max_length = v104->max_length;
LABEL_140:
      if ( (unsigned int)v87 >= max_length )
        goto LABEL_153;
      v144 = &v104->obj.klass + (int)v87;
      v144[4] = (Il2CppClass *)v106;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v144 + 4),
        (System_Int32_array **)v106,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
      goto LABEL_142;
    }
    v116 = v87;
    if ( (v95 & 1) != 0 )
    {
      if ( (unsigned int)v87 >= *(_DWORD *)(v72 + 24) )
        goto LABEL_153;
      v117 = v72 + 8LL * (int)v87;
      v120 = *(_QWORD *)(v117 + 32);
      v119 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v117 + 32);
      v118 = v120;
      v116 = (int)v87;
      if ( v120 )
      {
        v122 = *(_QWORD *)(v118 + 80);
        v121 = *(_QWORD *)(v118 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v164.fields.currentCryptoKey = v122;
        *(_QWORD *)&v164.fields.fakeValue = v121;
        IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v164, 0LL);
        if ( (unsigned int)v87 >= *(_DWORD *)(v72 + 24) )
          goto LABEL_153;
        if ( !*v119 )
          goto LABEL_149;
        v123 = IsNeedDeckPosReset;
        IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*v119)[6], 0LL);
        if ( (unsigned int)v87 >= *(_DWORD *)(v72 + 24) )
          goto LABEL_153;
        v124 = IsNeedDeckPosReset;
        IsNeedDeckPosReset = (__int64)*v119;
        if ( !*v119 )
          goto LABEL_149;
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0LL);
        IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                               questRestrictionInfo,
                               v123,
                               v124,
                               DispLimitCount,
                               initPos,
                               0,
                               0LL);
        if ( (IsNeedDeckPosReset & 1) != 0 )
        {
          if ( (unsigned int)v87 >= *(_DWORD *)(v72 + 24) )
            goto LABEL_153;
          *v119 = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)v119, 0LL, v126, v127, v128, v129, v130, v131);
        }
      }
    }
    if ( (unsigned int)v87 >= *(_DWORD *)(v72 + 24) )
      goto LABEL_153;
    v132 = *(UserServantEntity_o **)(v72 + 8 * v116 + 32);
    v133 = *p_memberList;
    if ( v132 )
    {
      EquipList = UserEventDeckEntity__GetEquipList(v159, v87, 0LL);
      v135 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_29755084(
        v135,
        v87,
        v132,
        EquipList,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        0LL,
        0,
        0LL);
      if ( !v133 )
        goto LABEL_149;
    }
    else
    {
      v135 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_29764096(v135, v87, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v133 )
        goto LABEL_149;
    }
    if ( v135 )
    {
      IsNeedDeckPosReset = sub_B5D684(v135, v133->obj.klass->_1.element_class);
      if ( !IsNeedDeckPosReset )
      {
LABEL_154:
        v149 = sub_B5D6BC(IsNeedDeckPosReset);
        sub_B5D668(v149, 0LL);
      }
    }
    if ( (unsigned int)v87 >= v133->max_length )
      goto LABEL_153;
    v142 = &v133->obj.klass + v116;
    v142[4] = (Il2CppClass *)v135;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v142 + 4),
      (System_Int32_array **)v135,
      v136,
      v137,
      v138,
      v139,
      v140,
      v141);
    v86 = v159;
LABEL_142:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_149;
    if ( (unsigned int)v87 >= memberList->max_length )
      goto LABEL_153;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[(int)v87];
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0LL)
                      + cost;
    ++v87;
  }
  PartyListViewItem__CheckRestriction(this, v54);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v147) )
    *isBaseModify = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_33805656(
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  __int64 Member; // x0
  FollowerInfo_o *v139; // x1
  const MethodInfo *v140; // x2
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x28
  PartyListViewItem_o *v143; // x9
  const MethodInfo *v144; // x2
  int32_t v145; // w21
  FollowerInfo_array *QuestFollowerList; // x19
  const MethodInfo *v147; // x3
  int max_length; // w8
  FollowerInfo_array *v149; // x9
  unsigned int v150; // w19
  int32_t size; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v153; // w9
  unsigned int v154; // w10
  QuestRestrictionInfo_SlotInfo_o *v155; // x11
  struct DeckServant_o *v156; // x8
  int v157; // w26
  int v158; // w27
  __int64 v159; // x28
  struct DeckServantData_array *svts; // x8
  unsigned int v161; // w20
  PartyListViewItem___c__DisplayClass27_0_o *v162; // x19
  struct DeckServant_o *v163; // x8
  struct DeckServantData_array *v164; // x8
  __int64 v165; // x8
  __int64 v166; // x21
  struct DeckServant_o *v167; // x8
  struct DeckServantData_array *v168; // x8
  __int64 v169; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v170; // x21
  BalanceConfig_c *v171; // x0
  Il2CppClass *monitor; // x20
  int v173; // w8
  Il2CppClass **v174; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v176; // x1
  _BOOL8 v177; // x0
  __int64 v178; // x1
  const MethodInfo *v179; // x2
  BalanceConfig_c *v180; // x0
  const MethodInfo *v181; // x2
  const MethodInfo *v182; // x3
  int32_t i; // w19
  struct DeckServant_o *v184; // x8
  struct DeckServantData_array *v185; // x8
  DeckServantData_o *v186; // x8
  int32_t UserServantDeployIndex; // w0
  unsigned int v188; // w21
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  System_Int32_array **v195; // x22
  Il2CppClass **v196; // x0
  bool v197; // w20
  BalanceConfig_c *v198; // x0
  struct PartyOrganizationListViewItem_array *v199; // x0
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  unsigned __int64 v206; // x28
  bool *p_isNpcEditablePos; // x21
  __int64 j; // x22
  unsigned int *v209; // x20
  PartyOrganizationListViewItem_o *v210; // x24
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  BalanceConfig_c *v217; // x0
  PartyListViewItem___c__DisplayClass27_1_o *v218; // x24
  const MethodInfo *v219; // x2
  int32_t *v220; // x8
  struct DeckServant_o *v221; // x8
  struct DeckServantData_array *v222; // x8
  __int64 v223; // x8
  int32_t v224; // w19
  const MethodInfo *v225; // x6
  bool v226; // w25
  int64_t v227; // x4
  bool v228; // w20
  FollowerInfo_o *v229; // x27
  bool *v230; // x25
  bool IsNpc; // w0
  int32_t v232; // w8
  bool v233; // w0
  unsigned int *v234; // x20
  int32_t v235; // w21
  PartyOrganizationListViewItem_o *v236; // x24
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  unsigned __int64 v243; // x25
  bool *v244; // x20
  FollowerInfo_o *v245; // x27
  unsigned int *v246; // x21
  int32_t v247; // w25
  PartyOrganizationListViewItem_o *v248; // x24
  System_String_array **v249; // x2
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  PartyOrganizationListViewItem_o *v255; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v256; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v257; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v258; // x27
  FollowerInfo_o *v259; // x24
  unsigned int v260; // w21
  unsigned int *v261; // x26
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v263; // x8
  int32_t classId; // w20
  PartyOrganizationListViewItem_o *v265; // x27
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  UserEventDeckEntity_o *v272; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v273; // x21
  __int64 v274; // x20
  FollowerInfo_o *v275; // x24
  unsigned int *v276; // x21
  PartyOrganizationListViewItem_o *v277; // x24
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  int v286; // w8
  PartyOrganizationListViewItem_o *v287; // x24
  System_String_array **v288; // x2
  System_String_array **v289; // x3
  System_Boolean_array **v290; // x4
  System_Int32_array **v291; // x5
  System_Int32_array *v292; // x6
  System_Int32_array *v293; // x7
  UserServantEntity_array *v294; // x20
  __int64 v295; // x8
  __int64 v296; // x24
  __int64 v297; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v298; // x8
  int32_t v299; // w27
  int32_t v300; // w24
  int32_t DispLimitCount; // w0
  System_String_array **v302; // x2
  System_String_array **v303; // x3
  System_Boolean_array **v304; // x4
  System_Int32_array **v305; // x5
  System_Int32_array *v306; // x6
  System_Int32_array *v307; // x7
  unsigned int *v308; // x21
  UserServantEntity_o *v309; // x27
  unsigned int *v310; // x20
  System_Int64_array *EquipList; // x21
  PartyOrganizationListViewItem_o *v312; // x24
  System_String_array **v313; // x2
  System_String_array **v314; // x3
  System_Boolean_array **v315; // x4
  System_Int32_array **v316; // x5
  System_Int32_array *v317; // x6
  System_Int32_array *v318; // x7
  struct ServantLeaderInfo_array *v319; // x8
  ServantLeaderInfo_o *v320; // x8
  int32_t v321; // w20
  PartyOrganizationListViewItem_o *v322; // x27
  System_String_array **v323; // x2
  System_String_array **v324; // x3
  System_Boolean_array **v325; // x4
  System_Int32_array **v326; // x5
  System_Int32_array *v327; // x6
  System_Int32_array *v328; // x7
  __int64 v329; // x21
  int v330; // w26
  unsigned __int64 v331; // x28
  UserServantEntity_o **m_Items; // x27
  PartyListViewItem___c__DisplayClass27_2_o *v333; // x19
  signed __int64 v334; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v335; // x22
  System_String_array **v336; // x2
  System_String_array **v337; // x3
  System_Boolean_array **v338; // x4
  System_Int32_array **v339; // x5
  System_Int32_array *v340; // x6
  System_Int32_array *v341; // x7
  unsigned __int64 v342; // x8
  unsigned __int64 v343; // x20
  signed __int64 v344; // x21
  const MethodInfo *v345; // x6
  int v346; // w27
  struct DeckServant_o *v347; // x8
  struct DeckServantData_array *v348; // x8
  __int64 v349; // x8
  int64_t v350; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v352; // x22
  bool *v353; // x25
  int32_t v354; // w28
  bool v355; // w0
  unsigned int *v356; // x20
  int32_t v357; // w23
  PartyOrganizationListViewItem_o *v358; // x27
  System_String_array **v359; // x2
  System_String_array **v360; // x3
  System_Boolean_array **v361; // x4
  System_Int32_array **v362; // x5
  System_Int32_array *v363; // x6
  System_Int32_array *v364; // x7
  struct PartyOrganizationListViewItem_array *v365; // x8
  struct DeckServant_o *v366; // x9
  struct DeckServantData_array *v367; // x9
  __int64 v368; // x9
  __int64 v369; // x8
  FollowerInfo_o *v370; // x22
  unsigned int *v371; // x28
  int32_t v372; // w28
  unsigned int *v373; // x19
  PartyOrganizationListViewItem_o *v374; // x27
  __int64 IsRestrictionServantIndividuality; // x0
  System_String_array **v376; // x2
  System_String_array **v377; // x3
  System_Boolean_array **v378; // x4
  System_Int32_array **v379; // x5
  System_Int32_array *v380; // x6
  System_Int32_array *v381; // x7
  BattleServantConfConponent_o *v382; // x0
  PartyOrganizationListViewItem_o *v383; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v384; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v385; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v386; // x22
  il2cpp_array_size_t *v387; // x20
  __int64 v388; // x8
  __int64 v389; // x22
  __int64 v390; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v391; // x8
  int32_t v392; // w22
  int32_t v393; // w27
  int32_t v394; // w0
  System_String_array **v395; // x2
  System_String_array **v396; // x3
  System_Boolean_array **v397; // x4
  System_Int32_array **v398; // x5
  System_Int32_array *v399; // x6
  System_Int32_array *v400; // x7
  FollowerInfo_o *v401; // x27
  struct PartyOrganizationListViewItem_array *v402; // x8
  struct DeckServant_o *v403; // x9
  struct DeckServantData_array *v404; // x9
  __int64 v405; // x9
  __int64 v406; // x8
  int32_t v407; // w8
  unsigned int v408; // w20
  unsigned int *v409; // x22
  struct ServantLeaderInfo_array *v410; // x8
  ServantLeaderInfo_o *v411; // x8
  PartyOrganizationListViewItem_o *v412; // x28
  System_String_array **v413; // x2
  System_String_array **v414; // x3
  System_Boolean_array **v415; // x4
  System_Int32_array **v416; // x5
  System_Int32_array *v417; // x6
  System_Int32_array *v418; // x7
  UserServantEntity_o *v419; // x22
  unsigned int *v420; // x20
  System_Int64_array *v421; // x28
  PartyOrganizationListViewItem_o *v422; // x27
  System_String_array **v423; // x2
  System_String_array **v424; // x3
  System_Boolean_array **v425; // x4
  System_Int32_array **v426; // x5
  System_Int32_array *v427; // x6
  System_Int32_array *v428; // x7
  PartyOrganizationListViewItem_o *v429; // x22
  System_String_array **v430; // x2
  System_String_array **v431; // x3
  System_Boolean_array **v432; // x4
  System_Int32_array **v433; // x5
  System_Int32_array *v434; // x6
  System_Int32_array *v435; // x7
  unsigned int *v436; // x28
  PartyOrganizationListViewItem_o *v437; // x22
  System_String_array **v438; // x2
  System_String_array **v439; // x3
  System_Boolean_array **v440; // x4
  System_Int32_array **v441; // x5
  System_Int32_array *v442; // x6
  System_Int32_array *v443; // x7
  struct PartyOrganizationListViewItem_array *v444; // x8
  int32_t v445; // w19
  __int64 v446; // x26
  unsigned __int64 k; // x24
  unsigned int *v448; // x20
  PartyOrganizationListViewItem_o *v449; // x27
  System_String_array **v450; // x2
  System_String_array **v451; // x3
  System_Boolean_array **v452; // x4
  System_Int32_array **v453; // x5
  System_Int32_array *v454; // x6
  System_Int32_array *v455; // x7
  BalanceConfig_c *v456; // x0
  PartyListViewItem___c__DisplayClass27_3_o *v457; // x28
  const MethodInfo *v458; // x2
  int32_t *v459; // x8
  struct DeckServant_o *v460; // x8
  struct DeckServantData_array *v461; // x8
  __int64 v462; // x8
  int32_t v463; // w19
  const MethodInfo *v464; // x1
  __int64 v465; // x0
  __int64 v466; // x0
  __int64 v467; // x0
  __int64 v468; // x0
  __int64 v469; // x0
  __int64 v470; // x0
  int32_t initPos; // [xsp+8h] [xbp-168h]
  bool *v472; // [xsp+18h] [xbp-158h]
  int32_t v473; // [xsp+20h] [xbp-150h]
  int v474; // [xsp+2Ch] [xbp-144h]
  _BOOL4 v475; // [xsp+2Ch] [xbp-144h]
  int32_t v476; // [xsp+3Ch] [xbp-134h]
  int v477; // [xsp+40h] [xbp-130h]
  int32_t v478; // [xsp+44h] [xbp-12Ch]
  int v479; // [xsp+48h] [xbp-128h]
  bool *v480; // [xsp+48h] [xbp-128h]
  int v481; // [xsp+48h] [xbp-128h]
  int32_t FollowerIndex; // [xsp+54h] [xbp-11Ch]
  PartyListViewItem_o *v483; // [xsp+58h] [xbp-118h]
  int v484; // [xsp+60h] [xbp-110h]
  FollowerInfo_o *followerInfo; // [xsp+68h] [xbp-108h]
  UserServantEntity_array *userServantList; // [xsp+70h] [xbp-100h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+78h] [xbp-F8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v488; // [xsp+80h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+88h] [xbp-E8h]
  System_Int64_array *v490; // [xsp+90h] [xbp-E0h]
  System_Int64_array *v491; // [xsp+90h] [xbp-E0h]
  il2cpp_array_size_t *p_max_length; // [xsp+90h] [xbp-E0h]
  PartyListViewItem_o *v493; // [xsp+98h] [xbp-D8h]
  int32_t DeckMemberMax; // [xsp+A8h] [xbp-C8h]
  bool v496; // [xsp+A8h] [xbp-C8h]
  int32_t v497; // [xsp+A8h] [xbp-C8h]
  bool v498; // [xsp+B4h] [xbp-BCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+B8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v501; // [xsp+C8h] [xbp-A8h] BYREF
  int32_t v502; // [xsp+E4h] [xbp-8Ch] BYREF
  FollowerInfo_o *v503; // [xsp+E8h] [xbp-88h] BYREF
  int32_t v504; // [xsp+F4h] [xbp-7Ch] BYREF
  FollowerInfo_o *v505; // [xsp+F8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v506; // [xsp+100h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v507; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v508; // 0:x0.16

  v18 = isBaseModify;
  if ( (byte_42ECE61 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)isBaseModify, menuKind, *(_QWORD *)&index);
    sub_B5D5C4(&Method_BasicHelper_Any_FollowerInfo___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v23, v24, v25);
    sub_B5D5C4(&DataManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v29, v30, v31);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_FollowerInfo___, v32, v33, v34);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___, v35, v36, v37);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___, v38, v39, v40);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__, v50, v51, v52);
    sub_B5D5C4(&FollowerInfo___TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Method_System_Func_FollowerInfo__bool___ctor__, v56, v57, v58);
    sub_B5D5C4(&System_Func_FollowerInfo__bool__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&long___TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v71, v72, v73);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__, v74, v75, v76);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__, v77, v78, v79);
    sub_B5D5C4(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v80, v81, v82);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v83, v84, v85);
    sub_B5D5C4(&PartyOrganizationListViewItem___TypeInfo, v86, v87, v88);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v89, v90, v91);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v92, v93, v94);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v95, v96, v97);
    sub_B5D5C4(&Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__, v98, v99, v100);
    sub_B5D5C4(&PartyListViewItem___c__DisplayClass27_0_TypeInfo, v101, v102, v103);
    sub_B5D5C4(&Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__, v104, v105, v106);
    sub_B5D5C4(&PartyListViewItem___c__DisplayClass27_1_TypeInfo, v107, v108, v109);
    sub_B5D5C4(&Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__, v110, v111, v112);
    sub_B5D5C4(&PartyListViewItem___c__DisplayClass27_2_TypeInfo, v113, v114, v115);
    sub_B5D5C4(&Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__, v116, v117, v118);
    sub_B5D5C4(&PartyListViewItem___c__DisplayClass27_3_TypeInfo, v119, v120, v121);
    sub_B5D5C4(&UserServantEntity___TypeInfo, v122, v123, v124);
    byte_42ECE61 = 1;
  }
  memset(&v506, 0, sizeof(v506));
  v505 = 0LL;
  v504 = 0;
  v503 = 0LL;
  v502 = 0;
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  if ( !deck )
    goto LABEL_466;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_466;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v140) )
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
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_466;
  followerInfo = follower;
  if ( *(int *)(Member + 48) < 1 )
  {
    v498 = 0;
    v493 = 0LL;
    v477 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_466;
    v143 = *(PartyListViewItem_o **)(Member + 72);
    v477 = 0;
    v498 = v143 != 0LL;
    v493 = v143;
    if ( follower && v143 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_466;
      if ( !v493 )
        goto LABEL_466;
      v477 = *(_DWORD *)(Member + 48);
      Member = (__int64)PartyListViewItem__GetMember(v493, v477 - 1, v144);
      if ( !Member )
        goto LABEL_466;
      v145 = *(_DWORD *)(Member + 348);
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_466;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v145, follower, 0LL);
      v498 = 1;
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
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_466;
  if ( !Member )
    goto LABEL_466;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Member,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0LL);
  v488 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v488,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  if ( !QuestFollowerList )
    goto LABEL_466;
  max_length = QuestFollowerList->max_length;
  v149 = QuestFollowerList;
  npcFollowerInfoList = QuestFollowerList;
  if ( max_length >= 1 )
  {
    v150 = 0;
    while ( v150 < max_length )
    {
      v139 = v149->m_Items[v150];
      if ( !v139 )
        goto LABEL_466;
      if ( !v139->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v139->fields.isFixedNpc) )
      {
        Member = (__int64)v488;
        if ( !v488 )
          goto LABEL_466;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v488,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v139,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_FollowerInfo__Add__);
        v149 = npcFollowerInfoList;
      }
      max_length = v149->max_length;
      if ( (int)++v150 >= max_length )
        goto LABEL_52;
    }
LABEL_473:
    v465 = sub_B5D6C8(Member);
    sub_B5D668(v465, 0LL);
  }
LABEL_52:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v488,
                    v147);
  questRestrictionInfoa = questRestrictionInfo;
  v483 = this;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
  {
LABEL_132:
    v197 = isNew;
    goto LABEL_133;
  }
  Member = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (Member & 1) != 0 )
  {
    if ( !v488 )
      goto LABEL_466;
    size = v488->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_466;
    v153 = slotInfos->max_length;
    if ( v153 >= 1 )
    {
      size = 0;
      v154 = 0;
      while ( v154 < v153 )
      {
        v155 = slotInfos->m_Items[v154];
        if ( !v155 )
          goto LABEL_466;
        if ( v155->fields.slotType == 1 )
          size += v155->fields.isMoved;
        if ( (int)++v154 >= v153 )
          goto LABEL_67;
      }
      goto LABEL_473;
    }
    size = 0;
  }
LABEL_67:
  v156 = deck->fields.deckInfo;
  v490 = NpcServantFollowerIds;
  if ( !v156 )
    goto LABEL_466;
  v157 = 0;
  v158 = 0;
  v159 = 4LL;
  while ( 1 )
  {
    svts = v156->fields.svts;
    if ( !svts )
      goto LABEL_466;
    v161 = v159 - 4;
    if ( (int)v159 - 4 >= (signed int)svts->max_length )
      break;
    v162 = (PartyListViewItem___c__DisplayClass27_0_o *)sub_B5D694(PartyListViewItem___c__DisplayClass27_0_TypeInfo);
    PartyListViewItem___c__DisplayClass27_0___ctor(v162, 0LL);
    v163 = deck->fields.deckInfo;
    if ( v163 )
    {
      v164 = v163->fields.svts;
      if ( v164 )
      {
        if ( v161 >= v164->max_length )
          goto LABEL_473;
        v165 = *((_QWORD *)&v164->obj.klass + v159);
        if ( v165 )
        {
          if ( v162 )
          {
            v166 = *(_QWORD *)(v165 + 24);
            v162->fields.npcSvtId = *(_QWORD *)(v165 + 64);
            v167 = deck->fields.deckInfo;
            if ( v167 )
            {
              v168 = v167->fields.svts;
              if ( v168 )
              {
                if ( v161 >= v168->max_length )
                  goto LABEL_473;
                v169 = *((_QWORD *)&v168->obj.klass + v159);
                if ( v169 )
                {
                  Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(
                             questRestrictionInfo,
                             *(_DWORD *)(v169 + 76),
                             0LL);
                  if ( (int)v161 >= DeckMemberMax && (v166 || v162->fields.npcSvtId) )
                    v157 = 1;
                  if ( !(Member & 1 | (v162->fields.npcSvtId == 0)) )
                  {
                    v170 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_FollowerInfo__bool__TypeInfo);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      v170,
                      (Il2CppObject *)v162,
                      Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__,
                      (const MethodInfo_2C2ECD0 *)Method_System_Func_FollowerInfo__bool___ctor__);
                    Member = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                               (System_Collections_Generic_List_T__o *)v488,
                               (System_Func_T__bool__o *)v170,
                               (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_FollowerInfo___);
                    v158 += Member & 1;
                  }
                  v156 = deck->fields.deckInfo;
                  ++v159;
                  if ( v156 )
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
  if ( ((v158 == size) & ~v157) != 0 )
  {
    this = v483;
    NpcServantFollowerIds = v490;
    goto LABEL_132;
  }
  this = v483;
  v171 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v171 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_B5D5DC(
                                                  long___TypeInfo,
                                                  (unsigned int)v171->static_fields->DeckMemberMax);
  Member = (__int64)v488;
  if ( !v488 )
    goto LABEL_466;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v501,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v488,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v506 = v501;
  while ( 1 )
  {
    v177 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v506,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v177 )
      break;
    if ( !v506.fields.current )
      sub_B5D69C(v177, v178);
    monitor = (Il2CppClass *)v506.fields.current[4].monitor;
    if ( monitor )
    {
      v173 = LODWORD(v506.fields.current[5].klass) - 1;
      if ( v173 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_B5D69C(v177, v178);
        if ( v173 >= NpcServantFollowerIds->max_length )
        {
          v467 = sub_B5D6C8(v177);
          sub_B5D668(v467, 0LL);
        }
        v174 = &NpcServantFollowerIds->obj.klass + v173;
        goto LABEL_104;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(v483, NpcServantFollowerIds, v179);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_B5D69C(NpcDeployIdx, v176);
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
        {
          v470 = sub_B5D6C8(NpcDeployIdx);
          sub_B5D668(v470, 0LL);
        }
        v174 = &NpcServantFollowerIds->obj.klass + (int)NpcDeployIdx;
LABEL_104:
        v174[4] = monitor;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v506,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v180 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v180 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_B5D5DC(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v180->static_fields->DeckMemberMax);
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
    v184 = deck->fields.deckInfo;
    if ( !v184 )
      goto LABEL_466;
    v185 = v184->fields.svts;
    if ( !v185 )
      goto LABEL_466;
    if ( i >= v185->max_length )
      goto LABEL_473;
    v186 = v185->m_Items[i];
    if ( !v186 )
      goto LABEL_466;
    if ( v186->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Member,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v182);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v188 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Member = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0LL);
          if ( !userServantList )
            goto LABEL_466;
          v195 = (System_Int32_array **)Member;
          if ( Member )
          {
            Member = sub_B5D684(Member, userServantList->obj.klass->_1.element_class);
            if ( !Member )
            {
LABEL_474:
              v466 = sub_B5D6BC(Member);
              sub_B5D668(v466, 0LL);
            }
          }
          if ( v188 >= userServantList->max_length )
            goto LABEL_473;
          v196 = &userServantList->obj.klass + (int)v188;
          v196[4] = (Il2CppClass *)v195;
          sub_B5D560((BattleServantConfConponent_o *)(v196 + 4), v195, v189, v190, v191, v192, v193, v194);
        }
      }
    }
  }
  if ( FollowerIndex < 1 )
    goto LABEL_132;
  v197 = isNew;
  if ( !questRestrictionInfo->fields.isNotTransitionSupportList && !questRestrictionInfo->fields.isNpcOnlyBattle )
    FollowerIndex = PartyListViewItem__GetSupportInitIndex(
                      v483,
                      (System_Collections_Generic_List_FollowerInfo__o *)v488,
                      v181);
LABEL_133:
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_466;
  if ( !*(_QWORD *)(Member + 24) )
  {
    v478 = followerDeckId;
    v476 = followerClassId;
    goto LABEL_146;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member
    || (followerInfo = *(FollowerInfo_o **)(Member + 24),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (v476 = *(_DWORD *)(Member + 32),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_466:
    sub_B5D69C(Member, v139);
  }
  v478 = *(_DWORD *)(Member + 36);
LABEL_146:
  v198 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v198 = BalanceConfig_TypeInfo;
  }
  v199 = (struct PartyOrganizationListViewItem_array *)sub_B5D5DC(
                                                         PartyOrganizationListViewItem___TypeInfo,
                                                         (unsigned int)v198->static_fields->DeckMemberMax);
  this->fields.memberList = v199;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v199,
    v200,
    v201,
    v202,
    v203,
    v204,
    v205);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( !v197 && questRestrictionInfo->fields.isNpcEditablePos )
  {
    v491 = NpcServantFollowerIds;
    v206 = 0LL;
    p_isNpcEditablePos = &questRestrictionInfo->fields.isNpcEditablePos;
    v474 = -1;
    while ( 1 )
    {
      for ( j = 8 * v206 + 32; ; j += 8LL )
      {
        v217 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v217 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v206 >= v217->static_fields->DeckMemberMax )
          goto LABEL_468;
        v218 = (PartyListViewItem___c__DisplayClass27_1_o *)sub_B5D694(PartyListViewItem___c__DisplayClass27_1_TypeInfo);
        PartyListViewItem___c__DisplayClass27_1___ctor(v218, 0LL);
        if ( v498 )
        {
          Member = (__int64)v493;
          if ( !v493 )
            goto LABEL_466;
          Member = (__int64)PartyListViewItem__GetMember(v493, v206, v219);
          if ( !Member )
            goto LABEL_466;
          v220 = (int32_t *)(Member + 348);
        }
        else
        {
          v221 = deck->fields.deckInfo;
          if ( !v221 )
            goto LABEL_466;
          v222 = v221->fields.svts;
          if ( !v222 )
            goto LABEL_466;
          if ( v206 >= v222->max_length )
            goto LABEL_473;
          v223 = *(__int64 *)((char *)&v222->obj.klass + j);
          if ( !v223 )
            goto LABEL_466;
          v220 = (int32_t *)(v223 + 76);
        }
        v224 = *v220;
        if ( (__int64)v206 < DeckMemberMax )
          break;
        v209 = (unsigned int *)*p_memberList;
        v210 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_29764096(v210, v206, 0, setupInfo, questRestrictionInfo, 1, v224, 0LL);
        if ( !v209 )
          goto LABEL_466;
        if ( v210 )
        {
          Member = sub_B5D684(v210, *(_QWORD *)(*(_QWORD *)v209 + 64LL));
          if ( !Member )
            goto LABEL_474;
        }
        if ( v206 >= v209[6] )
          goto LABEL_473;
        *(_QWORD *)((char *)v209 + j) = v210;
        sub_B5D560(
          (BattleServantConfConponent_o *)((char *)v209 + j),
          (System_Int32_array **)v210,
          v211,
          v212,
          v213,
          v214,
          v215,
          v216);
        ++v206;
      }
      if ( !v218 )
        goto LABEL_466;
      v218->fields.chkIdx = v206 + 1;
      v505 = 0LL;
      v504 = 0;
      Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(questRestrictionInfoa, v224, 0LL);
      v226 = 0;
      v479 = Member;
      if ( (Member & 1) != 0 )
      {
        if ( !v491 )
          goto LABEL_466;
        if ( v206 >= v491->max_length )
          goto LABEL_473;
        v227 = *(int64_t *)((char *)&v491->obj.klass + j);
        v226 = v227 >= 1
            && v218->fields.chkIdx != v477
            && PartyListViewItem__SetNpcFollowerInfo(this, &v505, &v504, npcFollowerInfoList, v227, v224, v225);
      }
      v228 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfoa, 0LL)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfoa, v224, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_466;
      Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v224, 0LL);
      if ( !Member || ((v479 ^ 1) & 1) != 0 )
      {
        if ( v226 || v218->fields.chkIdx == FollowerIndex )
        {
          v244 = p_isNpcEditablePos;
          v245 = v505;
          v246 = (unsigned int *)*p_memberList;
          if ( v505 )
          {
            v247 = v504;
            v248 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_29728604(
              v248,
              v206,
              v245,
              v247,
              setupInfo,
              questRestrictionInfoa,
              0LL,
              0,
              v478,
              v224,
              0LL);
            v243 = v206 + 1;
            if ( !v246 )
              goto LABEL_466;
          }
          else
          {
            v255 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
            v243 = v206 + 1;
            v248 = v255;
            if ( followerInfo )
              PartyOrganizationListViewItem___ctor_29728604(
                v255,
                v206,
                followerInfo,
                v476,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                0,
                v478,
                v224,
                0LL);
            else
              PartyOrganizationListViewItem___ctor_29764096(
                v255,
                v206,
                1,
                setupInfo,
                questRestrictionInfoa,
                1,
                v224,
                0LL);
            if ( !v246 )
              goto LABEL_466;
          }
          if ( v248 )
          {
            Member = sub_B5D684(v248, *(_QWORD *)(*(_QWORD *)v246 + 64LL));
            if ( !Member )
              goto LABEL_474;
          }
          if ( v206 >= v246[6] )
            goto LABEL_473;
          *(_QWORD *)((char *)v246 + j) = v248;
          sub_B5D560(
            (BattleServantConfConponent_o *)((char *)v246 + j),
            (System_Int32_array **)v248,
            v249,
            v250,
            v251,
            v252,
            v253,
            v254);
          p_isNpcEditablePos = v244;
        }
        else
        {
          v472 = p_isNpcEditablePos;
          if ( v228 )
          {
            v256 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_FollowerInfo__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v256,
              (Il2CppObject *)v218,
              Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__,
              (const MethodInfo_2C2ECD0 *)Method_System_Func_FollowerInfo__bool___ctor__);
            v257 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v488,
                     (System_Func_TSource__bool__o *)v256,
                     (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
            v258 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B5D684(v257, FollowerInfo___TypeInfo);
            if ( !v258 )
              v258 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                            v257,
                                                                            (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
            Member = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                       v258,
                       (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
            if ( (Member & 1) != 0 )
            {
              Member = (__int64)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                  v258,
                                  0,
                                  (const MethodInfo_1CA9DA0 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
              v243 = v206 + 1;
              v259 = (FollowerInfo_o *)Member;
              v260 = v474;
              v261 = (unsigned int *)*p_memberList;
              if ( Member )
                goto LABEL_211;
            }
            else
            {
              if ( !v488 )
                goto LABEL_466;
              v286 = v488->fields._size;
              if ( v286 >= 1 )
              {
                v260 = 0;
                while ( 1 )
                {
                  if ( v286 <= v260 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  v259 = (FollowerInfo_o *)v488->fields._items->m_Items[v260];
                  if ( !v259 || !v491 )
                    goto LABEL_466;
                  if ( v206 >= v491->max_length )
                    goto LABEL_473;
                  if ( (Il2CppClass *)v259->fields.npcFollowerSvtId != *(Il2CppClass **)((char *)&v491->obj.klass + j) )
                  {
                    if ( v488->fields._size <= v260 )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                    if ( v474 < (int)v260 && v259->fields.npcInitIdx <= 0 )
                      break;
                  }
                  ++v260;
                  v286 = v488->fields._size;
                  if ( (int)v260 >= v286 )
                    goto LABEL_260;
                }
                v243 = v206 + 1;
                if ( v488->fields._size <= v260 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                v261 = (unsigned int *)*p_memberList;
LABEL_211:
                userSvtLeaderHash = v259->fields.userSvtLeaderHash;
                if ( !userSvtLeaderHash )
                  goto LABEL_466;
                if ( !userSvtLeaderHash->max_length )
                  goto LABEL_473;
                v263 = userSvtLeaderHash->m_Items[0];
                if ( !v263 )
                  goto LABEL_466;
                classId = v263->fields.classId;
                v265 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_29728604(
                  v265,
                  v206,
                  v259,
                  classId,
                  setupInfo,
                  questRestrictionInfoa,
                  0LL,
                  1,
                  v478,
                  v224,
                  0LL);
                if ( !v261 )
                  goto LABEL_466;
                if ( v265 )
                {
                  Member = sub_B5D684(v265, *(_QWORD *)(*(_QWORD *)v261 + 64LL));
                  if ( !Member )
                    goto LABEL_474;
                }
                if ( v206 >= v261[6] )
                  goto LABEL_473;
                *(_QWORD *)((char *)v261 + j) = v265;
                sub_B5D560(
                  (BattleServantConfConponent_o *)((char *)v261 + j),
                  (System_Int32_array **)v265,
                  v266,
                  v267,
                  v268,
                  v269,
                  v270,
                  v271);
                this = v483;
                v474 = v260;
LABEL_303:
                p_isNpcEditablePos = v472;
                goto LABEL_242;
              }
LABEL_260:
              v243 = v206 + 1;
              v261 = (unsigned int *)*p_memberList;
            }
            v287 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_29764096(v287, v206, 0, setupInfo, questRestrictionInfoa, 0, v224, 0LL);
            if ( !v261 )
              goto LABEL_466;
            p_isNpcEditablePos = v472;
            if ( v287 )
            {
              Member = sub_B5D684(v287, *(_QWORD *)(*(_QWORD *)v261 + 64LL));
              if ( !Member )
                goto LABEL_474;
            }
            if ( v206 >= v261[6] )
              goto LABEL_473;
            *(_QWORD *)((char *)v261 + j) = v287;
            sub_B5D560(
              (BattleServantConfConponent_o *)((char *)v261 + j),
              (System_Int32_array **)v287,
              v288,
              v289,
              v290,
              v291,
              v292,
              v293);
            this = v483;
          }
          else
          {
            if ( !v491 )
              goto LABEL_466;
            v272 = deck;
            if ( v206 >= v491->max_length )
              goto LABEL_473;
            if ( *(Il2CppClass **)((char *)&v491->obj.klass + j) )
            {
              Member = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v488,
                         (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
              v243 = v206 + 1;
              if ( (int)Member < 1 )
              {
LABEL_231:
                v276 = (unsigned int *)*p_memberList;
                v277 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_29764096(
                  v277,
                  v206,
                  0,
                  setupInfo,
                  questRestrictionInfoa,
                  1,
                  v224,
                  0LL);
                if ( !v276 )
                  goto LABEL_466;
                if ( v277 )
                {
                  Member = sub_B5D684(v277, *(_QWORD *)(*(_QWORD *)v276 + 64LL));
                  if ( !Member )
                    goto LABEL_474;
                }
                if ( v206 >= v276[6] )
                  goto LABEL_473;
                *(_QWORD *)((char *)v276 + j) = v277;
                sub_B5D560(
                  (BattleServantConfConponent_o *)((char *)v276 + j),
                  (System_Int32_array **)v277,
                  v278,
                  v279,
                  v280,
                  v281,
                  v282,
                  v283);
              }
              else
              {
                if ( !v488 )
                  goto LABEL_466;
                v273 = v488;
                v274 = 4LL;
                while ( 1 )
                {
                  if ( v273->fields._size <= (unsigned int)(v274 - 4) )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  v275 = (FollowerInfo_o *)*((_QWORD *)&v488->fields._items->obj.klass + v274);
                  if ( !v275 )
                    goto LABEL_466;
                  if ( v206 >= v491->max_length )
                    goto LABEL_473;
                  if ( (Il2CppClass *)v275->fields.npcFollowerSvtId == *(Il2CppClass **)((char *)&v491->obj.klass + j) )
                    break;
                  v273 = v488;
                  Member = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v488,
                             (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
                  if ( (int)++v274 - 4 >= (int)Member )
                    goto LABEL_231;
                }
                if ( v488->fields._size <= (unsigned int)(v274 - 4) )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                v308 = (unsigned int *)*p_memberList;
                v319 = v275->fields.userSvtLeaderHash;
                if ( !v319 )
                  goto LABEL_466;
                if ( !v319->max_length )
                  goto LABEL_473;
                v320 = v319->m_Items[0];
                if ( !v320 )
                  goto LABEL_466;
                v321 = v320->fields.classId;
                v322 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_29728604(
                  v322,
                  v206,
                  v275,
                  v321,
                  setupInfo,
                  questRestrictionInfoa,
                  0LL,
                  1,
                  v478,
                  v224,
                  0LL);
                if ( !v308 )
                  goto LABEL_466;
                if ( v322 )
                {
                  Member = sub_B5D684(v322, *(_QWORD *)(*(_QWORD *)v308 + 64LL));
                  if ( !Member )
                    goto LABEL_474;
                }
                if ( v206 >= v308[6] )
                  goto LABEL_473;
                *(_QWORD *)((char *)v308 + j) = v322;
                sub_B5D560(
                  (BattleServantConfConponent_o *)((char *)v308 + j),
                  (System_Int32_array **)v322,
                  v323,
                  v324,
                  v325,
                  v326,
                  v327,
                  v328);
              }
              goto LABEL_303;
            }
            if ( (v479 & 1) != 0 )
            {
              v294 = userServantList;
              if ( !userServantList )
                goto LABEL_466;
              v243 = v206 + 1;
              if ( v206 >= userServantList->max_length )
                goto LABEL_473;
              v295 = *(__int64 *)((char *)&userServantList->obj.klass + j);
              if ( v295 )
              {
                v296 = *(_QWORD *)(v295 + 80);
                v297 = *(_QWORD *)(v295 + 88);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v507.fields.currentCryptoKey = v296;
                *(_QWORD *)&v507.fields.fakeValue = v297;
                Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v507, 0LL);
                if ( v206 >= userServantList->max_length )
                  goto LABEL_473;
                v298 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + j);
                if ( !v298 )
                  goto LABEL_466;
                v299 = Member;
                Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v298[6], 0LL);
                if ( v206 >= userServantList->max_length )
                  goto LABEL_473;
                v300 = Member;
                Member = *(__int64 *)((char *)&userServantList->obj.klass + j);
                if ( !Member )
                  goto LABEL_466;
                DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
                Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfoa,
                           v299,
                           v300,
                           DispLimitCount,
                           v224,
                           0,
                           0LL);
                v272 = deck;
                v294 = userServantList;
                if ( (Member & 1) != 0 )
                {
                  if ( v206 >= userServantList->max_length )
                    goto LABEL_473;
                  *(Il2CppClass **)((char *)&userServantList->obj.klass + j) = 0LL;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)((char *)userServantList + j),
                    0LL,
                    v302,
                    v303,
                    v304,
                    v305,
                    v306,
                    v307);
                }
              }
            }
            else
            {
              v294 = userServantList;
              v243 = v206 + 1;
              if ( !userServantList )
                goto LABEL_466;
            }
            if ( v206 >= v294->max_length )
              goto LABEL_473;
            v309 = *(UserServantEntity_o **)((char *)&v294->obj.klass + j);
            v310 = (unsigned int *)*p_memberList;
            if ( v309 )
            {
              EquipList = UserEventDeckEntity__GetEquipList(v272, v206, 0LL);
              v312 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_29755084(
                v312,
                v206,
                v309,
                EquipList,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                v224,
                0LL,
                0,
                0LL);
              if ( !v310 )
                goto LABEL_466;
              p_isNpcEditablePos = v472;
            }
            else
            {
              v312 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_29764096(
                v312,
                v206,
                0,
                setupInfo,
                questRestrictionInfoa,
                1,
                v224,
                0LL);
              p_isNpcEditablePos = v472;
              if ( !v310 )
                goto LABEL_466;
            }
            if ( v312 )
            {
              Member = sub_B5D684(v312, *(_QWORD *)(*(_QWORD *)v310 + 64LL));
              if ( !Member )
                goto LABEL_474;
            }
            if ( v206 >= v310[6] )
              goto LABEL_473;
            *(_QWORD *)((char *)v310 + j) = v312;
            sub_B5D560(
              (BattleServantConfConponent_o *)((char *)v310 + j),
              (System_Int32_array **)v312,
              v313,
              v314,
              v315,
              v316,
              v317,
              v318);
          }
        }
      }
      else
      {
        v229 = (FollowerInfo_o *)Member;
        v230 = p_isNpcEditablePos;
        IsNpc = FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL);
        v232 = v476;
        if ( IsNpc )
          v232 = 0;
        v473 = v232;
        v233 = FollowerInfo__get_IsNpc(v229, 0LL);
        v234 = (unsigned int *)*p_memberList;
        if ( v233 )
          v235 = 0;
        else
          v235 = v478;
        v236 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_29728604(
          v236,
          v206,
          v229,
          v473,
          setupInfo,
          questRestrictionInfoa,
          friendPointCampaignEntityList,
          0,
          v235,
          v224,
          0LL);
        if ( !v234 )
          goto LABEL_466;
        p_isNpcEditablePos = v230;
        if ( v236 )
        {
          Member = sub_B5D684(v236, *(_QWORD *)(*(_QWORD *)v234 + 64LL));
          if ( !Member )
            goto LABEL_474;
        }
        if ( v206 >= v234[6] )
          goto LABEL_473;
        v243 = v206 + 1;
        *(_QWORD *)((char *)v234 + j) = v236;
        sub_B5D560(
          (BattleServantConfConponent_o *)((char *)v234 + j),
          (System_Int32_array **)v236,
          v237,
          v238,
          v239,
          v240,
          v241,
          v242);
      }
LABEL_242:
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_466;
      if ( v206 >= memberList->max_length )
        goto LABEL_473;
      Member = *(__int64 *)((char *)&memberList->obj.klass + j);
      if ( !Member )
        goto LABEL_466;
      cost = this->fields.cost;
      v206 = v243;
      questRestrictionInfo = questRestrictionInfoa;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Member, 0LL)
                        + cost;
    }
  }
  v484 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( v197 )
  {
    p_max_length = &userServantList->max_length;
    goto LABEL_324;
  }
  if ( !userServantList )
    goto LABEL_466;
  p_max_length = &userServantList->max_length;
  if ( (int)userServantList->max_length >= 1 )
  {
    v480 = v18;
    v329 = 0LL;
    v330 = 0;
    v331 = 0LL;
    m_Items = userServantList->m_Items;
    while ( 1 )
    {
      v333 = (PartyListViewItem___c__DisplayClass27_2_o *)sub_B5D694(PartyListViewItem___c__DisplayClass27_2_TypeInfo);
      PartyListViewItem___c__DisplayClass27_2___ctor(v333, 0LL);
      if ( !v333 )
        goto LABEL_466;
      v334 = v331 + 1;
      v333->fields.chkIdx = v331 + 1;
      if ( v331 >= *p_max_length )
        goto LABEL_473;
      if ( m_Items[v331] )
        ++v330;
      v335 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v335,
        (Il2CppObject *)v333,
        Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_FollowerInfo__bool___ctor__);
      Member = (__int64)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                          (System_Func_TSource__bool__o *)v335,
                          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v342 = *p_max_length;
      if ( v331 >= v342 )
        goto LABEL_473;
      if ( !m_Items[v331] )
        goto LABEL_322;
      if ( v333->fields.chkIdx > DeckMemberMax )
        goto LABEL_320;
      Member = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Member,
                 (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v330 > v484 || (Member & 1) != 0 )
        break;
LABEL_322:
      ++v329;
      ++v331;
      if ( v334 >= (int)*p_max_length )
      {
        v18 = v480;
        goto LABEL_324;
      }
    }
    v342 = *p_max_length;
LABEL_320:
    if ( v331 >= v342 )
      goto LABEL_473;
    m_Items[v331] = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&m_Items[v329], 0LL, v336, v337, v338, v339, v340, v341);
    goto LABEL_322;
  }
LABEL_324:
  v343 = 0LL;
  v481 = 0;
  v344 = DeckMemberMax;
LABEL_445:
  v446 = 8 * v343 + 32;
  for ( k = v343; ; ++k )
  {
    v456 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v456 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v456->static_fields->DeckMemberMax )
      break;
    v457 = (PartyListViewItem___c__DisplayClass27_3_o *)sub_B5D694(PartyListViewItem___c__DisplayClass27_3_TypeInfo);
    PartyListViewItem___c__DisplayClass27_3___ctor(v457, 0LL);
    if ( v498 )
    {
      Member = (__int64)v493;
      if ( !v493 )
        goto LABEL_466;
      Member = (__int64)PartyListViewItem__GetMember(v493, k, v458);
      if ( !Member )
        goto LABEL_466;
      v459 = (int32_t *)(Member + 348);
    }
    else
    {
      v460 = deck->fields.deckInfo;
      if ( !v460 )
        goto LABEL_466;
      v461 = v460->fields.svts;
      if ( !v461 )
        goto LABEL_466;
      if ( k >= v461->max_length )
        goto LABEL_473;
      v462 = *(__int64 *)((char *)&v461->obj.klass + v446);
      if ( !v462 )
        goto LABEL_466;
      v459 = (int32_t *)(v462 + 76);
    }
    v463 = *v459;
    if ( (__int64)k < v344 )
    {
      if ( !v457 )
        goto LABEL_466;
      v343 = k + 1;
      v457->fields.chkIdx = k + 1;
      v503 = 0LL;
      v502 = 0;
      Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(questRestrictionInfo, v463, 0LL);
      v346 = Member;
      if ( (Member & 1) == 0 )
        goto LABEL_333;
      v347 = deck->fields.deckInfo;
      if ( !v347 )
        goto LABEL_466;
      v348 = v347->fields.svts;
      if ( !v348 )
        goto LABEL_466;
      if ( k >= v348->max_length )
        goto LABEL_473;
      v349 = *(__int64 *)((char *)&v348->obj.klass + v446);
      if ( !v349 )
        goto LABEL_466;
      v350 = *(_QWORD *)(v349 + 64);
      if ( v350 >= 1 )
      {
        if ( v457->fields.chkIdx == v477 )
        {
          v475 = 0;
          v496 = 1;
        }
        else
        {
          v496 = PartyListViewItem__SetNpcFollowerInfo(v483, &v503, &v502, npcFollowerInfoList, v350, v463, v345);
          v475 = 0;
        }
        goto LABEL_338;
      }
LABEL_333:
      if ( followerInfo && !questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v496 = 0;
        v475 = v457->fields.chkIdx == FollowerIndex;
      }
      else
      {
        v475 = 0;
        v496 = 0;
      }
LABEL_338:
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_466;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v463, 0LL);
      if ( NpcFollowerInfo && ((v346 ^ 1) & 1) == 0 )
      {
        v352 = NpcFollowerInfo;
        v353 = v18;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v354 = 0;
        else
          v354 = v476;
        v355 = FollowerInfo__get_IsNpc(v352, 0LL);
        v356 = (unsigned int *)*p_memberList;
        if ( v355 )
          v357 = 0;
        else
          v357 = v478;
        v358 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_29728604(
          v358,
          k,
          v352,
          v354,
          setupInfo,
          questRestrictionInfoa,
          friendPointCampaignEntityList,
          0,
          v357,
          v463,
          0LL);
        if ( !v356 )
          goto LABEL_466;
        if ( v358 )
        {
          Member = sub_B5D684(v358, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
          if ( !Member )
            goto LABEL_474;
        }
        if ( k >= v356[6] )
          goto LABEL_473;
        v18 = v353;
        *(_QWORD *)((char *)v356 + v446) = v358;
        sub_B5D560(
          (BattleServantConfConponent_o *)((char *)v356 + v446),
          (System_Int32_array **)v358,
          v359,
          v360,
          v361,
          v362,
          v363,
          v364);
        questRestrictionInfo = questRestrictionInfoa;
        v365 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_466;
        v343 = k + 1;
        if ( k >= v365->max_length )
          goto LABEL_473;
        v366 = deck->fields.deckInfo;
        if ( !v366 )
          goto LABEL_466;
        v367 = v366->fields.svts;
        if ( !v367 )
          goto LABEL_466;
        if ( k >= v367->max_length )
          goto LABEL_473;
        v368 = *(__int64 *)((char *)&v367->obj.klass + v446);
        if ( !v368 )
          goto LABEL_466;
        v369 = *(__int64 *)((char *)&v365->obj.klass + v446);
        if ( !v369 )
          goto LABEL_466;
        *(_DWORD *)(v369 + 348) = *(_DWORD *)(v368 + 76);
        ++v481;
        goto LABEL_445;
      }
      if ( v496 || v457->fields.chkIdx == FollowerIndex )
      {
        v370 = v503;
        v371 = (unsigned int *)*p_memberList;
        if ( v503 )
        {
          v372 = v502;
          initPos = v463;
          v373 = (unsigned int *)*p_memberList;
          v374 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_29728604(
            v374,
            k,
            v370,
            v372,
            setupInfo,
            questRestrictionInfo,
            0LL,
            !v475,
            v478,
            initPos,
            0LL);
          if ( !v373 )
            goto LABEL_480;
          if ( v374 )
          {
            IsRestrictionServantIndividuality = sub_B5D684(v374, *(_QWORD *)(*(_QWORD *)v373 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_478;
          }
          if ( k >= v373[6] )
            goto LABEL_479;
          v382 = (BattleServantConfConponent_o *)((char *)v373 + v446);
        }
        else
        {
          v383 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
          v374 = v383;
          if ( followerInfo )
            PartyOrganizationListViewItem___ctor_29728604(
              v383,
              k,
              followerInfo,
              v476,
              setupInfo,
              questRestrictionInfo,
              0LL,
              !v475,
              v478,
              v463,
              0LL);
          else
            PartyOrganizationListViewItem___ctor_29764096(v383, k, 1, setupInfo, questRestrictionInfo, 1, v463, 0LL);
          if ( !v371 )
            goto LABEL_480;
          if ( v374 )
          {
            IsRestrictionServantIndividuality = sub_B5D684(v374, *(_QWORD *)(*(_QWORD *)v371 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_478;
          }
          if ( k >= v371[6] )
            goto LABEL_479;
          v382 = (BattleServantConfConponent_o *)((char *)v371 + v446);
        }
        v382->klass = (BattleServantConfConponent_c *)v374;
        sub_B5D560(v382, (System_Int32_array **)v374, v376, v377, v378, v379, v380, v381);
        v402 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_480;
        if ( k >= v402->max_length )
        {
LABEL_479:
          v469 = sub_B5D6C8(IsRestrictionServantIndividuality);
          sub_B5D668(v469, 0LL);
        }
        v403 = deck->fields.deckInfo;
        if ( !v403 )
          goto LABEL_480;
        v404 = v403->fields.svts;
        if ( !v404 )
          goto LABEL_480;
        if ( k >= v404->max_length )
          goto LABEL_479;
        v405 = *(__int64 *)((char *)&v404->obj.klass + v446);
        if ( !v405 || (v406 = *(__int64 *)((char *)&v402->obj.klass + v446)) == 0 )
LABEL_480:
          sub_B5D69C(IsRestrictionServantIndividuality, v139);
        *(_DWORD *)(v406 + 348) = *(_DWORD *)(v405 + 76);
        v481 += v475 || v496;
        goto LABEL_445;
      }
      v384 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v384,
        (Il2CppObject *)v457,
        Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_FollowerInfo__bool___ctor__);
      v385 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v488,
               (System_Func_TSource__bool__o *)v384,
               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v386 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B5D684(v385, FollowerInfo___TypeInfo);
      if ( !v386 )
        v386 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                      v385,
                                                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      IsRestrictionServantIndividuality = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                            v386,
                                            (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v481 < v484 && (IsRestrictionServantIndividuality & 1) == 0 )
      {
        if ( (v346 & 1) != 0 )
        {
          if ( !userServantList )
            goto LABEL_480;
          v387 = p_max_length;
          if ( k >= *p_max_length )
            goto LABEL_479;
          v388 = *(__int64 *)((char *)&userServantList->obj.klass + v446);
          if ( v388 )
          {
            v390 = *(_QWORD *)(v388 + 80);
            v389 = *(_QWORD *)(v388 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v508.fields.currentCryptoKey = v390;
            *(_QWORD *)&v508.fields.fakeValue = v389;
            IsRestrictionServantIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                  v508,
                                                  0LL);
            if ( k >= *p_max_length )
              goto LABEL_479;
            v391 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + v446);
            if ( !v391 )
              goto LABEL_480;
            v392 = IsRestrictionServantIndividuality;
            IsRestrictionServantIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                  v391[6],
                                                  0LL);
            if ( k >= *p_max_length )
              goto LABEL_479;
            v393 = IsRestrictionServantIndividuality;
            IsRestrictionServantIndividuality = *(__int64 *)((char *)&userServantList->obj.klass + v446);
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_480;
            v394 = UserServantEntity__getDispLimitCount(
                     (UserServantEntity_o *)IsRestrictionServantIndividuality,
                     0,
                     0LL);
            IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                  questRestrictionInfo,
                                                  v392,
                                                  v393,
                                                  v394,
                                                  v463,
                                                  0,
                                                  0LL);
            v387 = p_max_length;
            if ( (IsRestrictionServantIndividuality & 1) != 0 )
            {
              if ( k >= *p_max_length )
                goto LABEL_479;
              *(Il2CppClass **)((char *)&userServantList->obj.klass + v446) = 0LL;
              sub_B5D560(
                (BattleServantConfConponent_o *)((char *)userServantList + v446),
                0LL,
                v395,
                v396,
                v397,
                v398,
                v399,
                v400);
            }
          }
        }
        else
        {
          v387 = p_max_length;
          if ( !userServantList )
            goto LABEL_480;
        }
        if ( k >= *v387 )
          goto LABEL_479;
        v419 = *(UserServantEntity_o **)((char *)&userServantList->obj.klass + v446);
        v420 = (unsigned int *)*p_memberList;
        if ( v419 )
        {
          v421 = UserEventDeckEntity__GetEquipList(deck, k, 0LL);
          v422 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_29755084(
            v422,
            k,
            v419,
            v421,
            setupInfo,
            questRestrictionInfo,
            0LL,
            v463,
            0LL,
            0,
            0LL);
          if ( !v420 )
            goto LABEL_480;
          if ( v422 )
          {
            IsRestrictionServantIndividuality = sub_B5D684(v422, *(_QWORD *)(*(_QWORD *)v420 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_478;
          }
          if ( k >= v420[6] )
            goto LABEL_479;
          *(_QWORD *)((char *)v420 + v446) = v422;
          sub_B5D560(
            (BattleServantConfConponent_o *)((char *)v420 + v446),
            (System_Int32_array **)v422,
            v423,
            v424,
            v425,
            v426,
            v427,
            v428);
        }
        else
        {
          v429 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_29764096(v429, k, 0, setupInfo, questRestrictionInfo, 1, v463, 0LL);
          if ( !v420 )
            goto LABEL_480;
          if ( v429 )
          {
            IsRestrictionServantIndividuality = sub_B5D684(v429, *(_QWORD *)(*(_QWORD *)v420 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_478;
          }
          if ( k >= v420[6] )
            goto LABEL_479;
          *(_QWORD *)((char *)v420 + v446) = v429;
          sub_B5D560(
            (BattleServantConfConponent_o *)((char *)v420 + v446),
            (System_Int32_array **)v429,
            v430,
            v431,
            v432,
            v433,
            v434,
            v435);
        }
        v343 = k + 1;
        ++v481;
        goto LABEL_441;
      }
      IsRestrictionServantIndividuality = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                            v386,
                                            (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( (IsRestrictionServantIndividuality & 1) != 0 )
      {
        IsRestrictionServantIndividuality = (__int64)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                                       v386,
                                                       0,
                                                       (const MethodInfo_1CA9DA0 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        v401 = (FollowerInfo_o *)IsRestrictionServantIndividuality;
        goto LABEL_411;
      }
      if ( !v488 )
        goto LABEL_480;
      v407 = v488->fields._size;
      v408 = k - v481;
      if ( v407 <= (int)k - v481 )
      {
        v343 = k + 1;
        v436 = (unsigned int *)*p_memberList;
      }
      else
      {
        if ( v407 <= v408 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v401 = (FollowerInfo_o *)v488->fields._items->m_Items[v408];
        v343 = k + 1;
LABEL_411:
        v409 = (unsigned int *)*p_memberList;
        if ( v401 )
        {
          v410 = v401->fields.userSvtLeaderHash;
          if ( !v410 )
            goto LABEL_480;
          if ( !v410->max_length )
            goto LABEL_479;
          v411 = v410->m_Items[0];
          if ( !v411 )
            goto LABEL_480;
          v497 = v411->fields.classId;
          v412 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_29728604(
            v412,
            k,
            v401,
            v497,
            setupInfo,
            questRestrictionInfo,
            0LL,
            1,
            v478,
            v463,
            0LL);
          if ( !v409 )
            goto LABEL_480;
          if ( v412 )
          {
            IsRestrictionServantIndividuality = sub_B5D684(v412, *(_QWORD *)(*(_QWORD *)v409 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_478;
          }
          if ( k >= v409[6] )
            goto LABEL_479;
          *(_QWORD *)((char *)v409 + v446) = v412;
          sub_B5D560(
            (BattleServantConfConponent_o *)((char *)v409 + v446),
            (System_Int32_array **)v412,
            v413,
            v414,
            v415,
            v416,
            v417,
            v418);
LABEL_441:
          v444 = v483->fields.memberList;
          if ( !v444 )
            goto LABEL_480;
          if ( k >= v444->max_length )
            goto LABEL_479;
          IsRestrictionServantIndividuality = *(__int64 *)((char *)&v444->obj.klass + v446);
          if ( !IsRestrictionServantIndividuality )
            goto LABEL_480;
          v445 = v483->fields.cost;
          v483->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                                (PartyOrganizationListViewItem_o *)IsRestrictionServantIndividuality,
                                0LL)
                            + v445;
          goto LABEL_445;
        }
        v436 = (unsigned int *)*p_memberList;
      }
      v437 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_29764096(v437, k, 0, setupInfo, questRestrictionInfo, 0, v463, 0LL);
      if ( !v436 )
        goto LABEL_480;
      if ( v437 )
      {
        IsRestrictionServantIndividuality = sub_B5D684(v437, *(_QWORD *)(*(_QWORD *)v436 + 64LL));
        if ( !IsRestrictionServantIndividuality )
        {
LABEL_478:
          v468 = sub_B5D6BC(IsRestrictionServantIndividuality);
          sub_B5D668(v468, 0LL);
        }
      }
      if ( k >= v436[6] )
        goto LABEL_479;
      *(_QWORD *)((char *)v436 + v446) = v437;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)v436 + v446),
        (System_Int32_array **)v437,
        v438,
        v439,
        v440,
        v441,
        v442,
        v443);
      goto LABEL_441;
    }
    v448 = (unsigned int *)*p_memberList;
    v449 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_29764096(v449, k, 0, setupInfo, questRestrictionInfo, 1, v463, 0LL);
    if ( !v448 )
      goto LABEL_466;
    if ( v449 )
    {
      Member = sub_B5D684(v449, *(_QWORD *)(*(_QWORD *)v448 + 64LL));
      if ( !Member )
        goto LABEL_474;
    }
    if ( k >= v448[6] )
      goto LABEL_473;
    *(_QWORD *)((char *)v448 + v446) = v449;
    sub_B5D560(
      (BattleServantConfConponent_o *)((char *)v448 + v446),
      (System_Int32_array **)v449,
      v450,
      v451,
      v452,
      v453,
      v454,
      v455);
    v446 += 8LL;
  }
  this = v483;
  p_isNpcEditablePos = &questRestrictionInfo->fields.isNpcEditablePos;
LABEL_468:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v139);
  if ( (*p_isNpcEditablePos || !questRestrictionInfo->fields.isNpcOnlyBattle)
    && !PartyListViewItem__GetStartDeckCondition(this, v464) )
  {
    *v18 = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_33815568(
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
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x28
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v59; // x1
  struct DeckServant_o *deckInfo; // x8
  int64_t eventId; // x8
  BalanceConfig_c *v62; // x8
  struct PartyOrganizationListViewItem_array *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_List_int__o *v70; // x27
  int v71; // w8
  __int64 v72; // x20
  unsigned int v73; // w19
  __int64 v74; // x24
  struct System_Int32_array *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  int32_t v82; // w27
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v84; // w24
  struct DeckServant_o *v85; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v87; // x8
  UserServantEntity_array *v88; // x9
  int32_t initPos; // w28
  UserServantEntity_o *v90; // x20
  struct PartyOrganizationListViewItem_array *v91; // x19
  __int128 v92; // q0
  int64_t v93; // x0
  System_Int64_array *v94; // x21
  struct DeckServant_o *v95; // x8
  struct DeckServantData_array *v96; // x8
  DeckServantData_o *v97; // x8
  System_Int32_array *equipSvtIdList; // x26
  PartyOrganizationListViewItem_o *v99; // x20
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  Il2CppClass **v106; // x0
  PartyOrganizationListViewItem_o *v107; // x24
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  Il2CppClass **v114; // x0
  struct PartyOrganizationListViewItem_array *v115; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v118; // x0
  __int64 v119; // x0
  PartyListViewItem_o *v120; // [xsp+20h] [xbp-E0h]
  UserEventDeckEntity_o *v121; // [xsp+28h] [xbp-D8h]
  UserServantEntity_array *UserServantList; // [xsp+30h] [xbp-D0h]
  int v123; // [xsp+3Ch] [xbp-C4h]
  int32_t v126; // [xsp+54h] [xbp-ACh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+58h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+80h] [xbp-80h]

  if ( (byte_42ECE62 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, menuKind, index, *(_QWORD *)&maxCost);
    sub_B5D5C4(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&PartyOrganizationListViewItem___TypeInfo, v39, v40, v41);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v42, v43, v44);
    byte_42ECE62 = 1;
  }
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( !deck )
    goto LABEL_73;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_73;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  eventId = deck->fields.eventId;
  this->fields._IsWaveBattleRestart_k__BackingField = restartWave > 0;
  this->fields.id = eventId;
  v126 = index + 1;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, restartWave > 0, 0LL);
  v62 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v62 = BalanceConfig_TypeInfo;
  }
  v63 = (struct PartyOrganizationListViewItem_array *)sub_B5D5DC(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v62->static_fields->DeckMemberMax);
  this->fields.memberList = v63;
  sub_B5D560(
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
  v70 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v70,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
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
  v71 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
  v72 = Master_WarQuestSelectionMaster;
  if ( v71 >= 1 )
  {
    v73 = 0;
    while ( 1 )
    {
      if ( v73 >= v71 )
      {
LABEL_74:
        v118 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v118, 0LL);
      }
      v74 = *(_QWORD *)(v72 + 8LL * (int)v73 + 32);
      if ( !v74 )
        break;
      if ( *(_DWORD *)(v74 + 56) == v126 )
      {
        if ( !v70 )
          break;
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v70,
                                           *(_DWORD *)(v74 + 32),
                                           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v70,
            *(_DWORD *)(v74 + 32),
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      v71 = *(_DWORD *)(v72 + 24);
      if ( (int)++v73 >= v71 )
        goto LABEL_23;
    }
LABEL_73:
    sub_B5D69C(Master_WarQuestSelectionMaster, v59);
  }
LABEL_23:
  if ( !v70 )
    goto LABEL_73;
  v75 = System_Collections_Generic_List_int___ToArray(
          v70,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v75;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.waveBattleEnemyClassIds,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this->fields._IsClearedWave_k__BackingField = v126 < restartWave;
  Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
  }
  v82 = 0;
  v120 = this;
  v121 = deck;
  v123 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 160LL) * index;
  while ( 1 )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_WarQuestSelectionMaster + 184);
    if ( v82 >= static_fields->DeckMemberMax )
      break;
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v84 = v123 + v82;
    if ( v82 >= static_fields->DeckMainMemberMax )
    {
      v88 = UserServantList;
      initPos = v82 + 1;
      if ( !UserServantList )
        goto LABEL_73;
    }
    else
    {
      v85 = deck->fields.deckInfo;
      if ( !v85 )
        goto LABEL_73;
      svts = v85->fields.svts;
      if ( !svts )
        goto LABEL_73;
      if ( v84 >= svts->max_length )
        goto LABEL_74;
      v87 = svts->m_Items[v84];
      v88 = UserServantList;
      if ( !v87 )
        goto LABEL_73;
      initPos = v87->fields.initPos;
      if ( !UserServantList )
        goto LABEL_73;
    }
    if ( v82 >= v88->max_length )
      goto LABEL_74;
    v90 = v88->m_Items[v82];
    v91 = *p_memberList;
    if ( v90 )
    {
      v92 = *(_OWORD *)&v90->fields.id.fields.fakeValue;
      *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v90->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v129.fields.fakeValue = v92;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v128 = v129;
      v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v128, 0LL);
      Master_WarQuestSelectionMaster = (__int64)UserEventDeckEntity__GetEquipList_28072948(
                                                  deck,
                                                  v93,
                                                  restartWave > 0,
                                                  0LL);
      v94 = (System_Int64_array *)Master_WarQuestSelectionMaster;
      if ( restartWave < 1 )
      {
        equipSvtIdList = 0LL;
      }
      else
      {
        v95 = deck->fields.deckInfo;
        if ( !v95 )
          goto LABEL_73;
        v96 = v95->fields.svts;
        if ( !v96 )
          goto LABEL_73;
        if ( v84 >= v96->max_length )
          goto LABEL_74;
        v97 = v96->m_Items[v84];
        if ( !v97 )
          goto LABEL_73;
        equipSvtIdList = v97->fields.svtEquipIds;
      }
      v107 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_29755084(
        v107,
        v82,
        v90,
        v94,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        equipSvtIdList,
        v126 < restartWave,
        0LL);
      if ( !v91 )
        goto LABEL_73;
      this = v120;
      if ( v107 )
      {
        Master_WarQuestSelectionMaster = sub_B5D684(v107, v91->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
        {
LABEL_75:
          v119 = sub_B5D6BC(Master_WarQuestSelectionMaster);
          sub_B5D668(v119, 0LL);
        }
      }
      if ( v82 >= v91->max_length )
        goto LABEL_74;
      v114 = &v91->obj.klass + v82;
      v114[4] = (Il2CppClass *)v107;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v114 + 4),
        (System_Int32_array **)v107,
        v108,
        v109,
        v110,
        v111,
        v112,
        v113);
      deck = v121;
    }
    else
    {
      v99 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_29764096(v99, v82, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v91 )
        goto LABEL_73;
      if ( v99 )
      {
        Master_WarQuestSelectionMaster = sub_B5D684(v99, v91->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_75;
      }
      if ( v82 >= v91->max_length )
        goto LABEL_74;
      v106 = &v91->obj.klass + v82;
      v106[4] = (Il2CppClass *)v99;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v106 + 4),
        (System_Int32_array **)v99,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
    }
    v115 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_73;
    if ( v82 >= v115->max_length )
      goto LABEL_74;
    Master_WarQuestSelectionMaster = (__int64)v115->m_Items[v82];
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_73;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_WarQuestSelectionMaster,
      this->fields.waveBattleEnemyClassIds,
      0LL);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_73;
    if ( v82 >= memberList->max_length )
      goto LABEL_74;
    Master_WarQuestSelectionMaster = (__int64)memberList->m_Items[v82];
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_73;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_WarQuestSelectionMaster,
                          0LL)
                      + cost;
    Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
    ++v82;
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

  if ( (byte_42ECE74 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, deckMemberCount, mainMemberCount, isFollowerMainMember);
    byte_42ECE74 = 1;
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
    sub_B5D69C(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t v11; // w20
  int v12; // w23
  int v13; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *IsUseOldMaster; // x0
  struct PartyOrganizationListViewItem_array *v16; // x8
  PartyOrganizationListViewItem_o *v17; // x8
  struct PartyOrganizationListViewItem_array *v18; // x8
  PartyOrganizationListViewItem_o *v19; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v22; // w21
  char i; // w25
  struct PartyOrganizationListViewItem_array *v24; // x8
  PartyOrganizationListViewItem_o *v25; // x8
  struct PartyOrganizationListViewItem_array *v26; // x20
  int max_length; // w8
  unsigned int v28; // w21
  int v29; // w21
  int32_t FixedPositionCount; // w20
  int v31; // w27
  char v32; // w25
  int v33; // w26
  struct PartyOrganizationListViewItem_array *v34; // x8
  PartyOrganizationListViewItem_o *v35; // x8
  _BOOL4 isRestrictionNeedStarting; // w10
  int isRestrictionMyServantPos; // w9
  int isRestrictionServantPos; // w8
  bool v39; // zf
  struct PartyOrganizationListViewItem_array *v40; // x21
  int v41; // w8
  unsigned int v42; // w27
  il2cpp_array_size_t j; // w21
  struct PartyOrganizationListViewItem_array *v44; // x8
  struct PartyOrganizationListViewItem_array *v45; // x20
  int v46; // w8
  unsigned int v47; // w21
  struct QuestRestrictionInfo_o *v48; // x8
  int64_t sortValue2; // x20
  __int64 sortValue1_low; // x21
  __int64 v51; // x25
  __int64 v52; // x8
  __int64 v53; // x8
  struct QuestRestrictionInfo_o *v54; // x8
  il2cpp_array_size_t k; // w20
  struct PartyOrganizationListViewItem_array *v56; // x8
  PartyOrganizationListViewItem_o *v57; // x8
  __int64 v58; // x0

  if ( (byte_42ECE69 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v8, v9, v10);
    byte_42ECE69 = 1;
  }
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v11 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_115;
    if ( v11 >= memberList->max_length )
      goto LABEL_116;
    IsUseOldMaster = memberList->m_Items[v11];
    if ( !IsUseOldMaster )
      goto LABEL_115;
    PartyOrganizationListViewItem__CheckRestriction(IsUseOldMaster, this, v11, 0LL);
    v16 = this->fields.memberList;
    if ( !v16 )
      goto LABEL_115;
    if ( v11 >= v16->max_length )
      goto LABEL_116;
    v17 = v16->m_Items[v11];
    if ( !v17 )
      goto LABEL_115;
    v17->fields._IsNotSupportSingle_k__BackingField = 0;
    v18 = this->fields.memberList;
    if ( !v18 )
      goto LABEL_115;
    if ( v11 >= v18->max_length )
      goto LABEL_116;
    v19 = v18->m_Items[v11];
    if ( !v19 )
      goto LABEL_115;
    ++v11;
    v12 += v19->fields.isFollower;
    if ( v19->fields.userServantEntity )
      ++v13;
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
      v22 = 0;
      for ( i = 0; ; i |= v25->fields.isFixedSupportPositionRestriction )
      {
        if ( (IsUseOldMaster->fields.nameLimitCount & 0x4000000) != 0
          && !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
        {
          j_il2cpp_runtime_class_init_0(IsUseOldMaster);
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v22 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
          break;
        v24 = this->fields.memberList;
        if ( !v24 )
          goto LABEL_115;
        if ( v22 >= v24->max_length )
          goto LABEL_116;
        v25 = v24->m_Items[v22];
        if ( !v25 )
          goto LABEL_115;
        ++v22;
        FixedServantPositionCount -= v25->fields.isFixedServantPositionAgreement;
      }
      if ( !(i & 1 | (FixedServantPositionCount > 0)) )
      {
        v26 = this->fields.memberList;
        if ( !v26 )
          goto LABEL_115;
        max_length = v26->max_length;
        if ( max_length >= 1 )
        {
          v28 = 0;
          while ( v28 < max_length )
          {
            IsUseOldMaster = v26->m_Items[v28];
            if ( !IsUseOldMaster )
              goto LABEL_115;
            PartyOrganizationListViewItem__ResetPositionRestriction(IsUseOldMaster, 0LL);
            max_length = v26->max_length;
            if ( (int)++v28 >= max_length )
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
    v29 = (int)IsUseOldMaster;
    FixedPositionCount = QuestRestrictionInfo__GetFixedPositionCount(this->fields.questRestrictionInfo, 0LL);
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v31 = 0;
    v32 = 0;
    v33 = -1;
    while ( 1 )
    {
      if ( (IsUseOldMaster->fields.nameLimitCount & 0x4000000) != 0 && !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
      {
        j_il2cpp_runtime_class_init_0(IsUseOldMaster);
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( v31 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
        break;
      v34 = this->fields.memberList;
      if ( !v34 )
        goto LABEL_115;
      if ( v31 >= v34->max_length )
        goto LABEL_116;
      v35 = v34->m_Items[v31];
      if ( !v35 )
        goto LABEL_115;
      v32 |= v35->fields.isFixedSupportPositionRestriction;
      if ( v35->fields.isFixedServantPositionAgreement )
      {
        isRestrictionNeedStarting = v35->fields.isRestrictionNeedStarting;
        isRestrictionMyServantPos = v35->fields.isRestrictionMyServantPos;
        isRestrictionServantPos = v35->fields.isRestrictionServantPos;
        v39 = isRestrictionNeedStarting && v33 == -1;
        v29 -= isRestrictionMyServantPos;
        if ( v39 )
          v33 = v31;
        FixedPositionCount -= isRestrictionServantPos;
      }
      ++v31;
    }
    if ( v29 > 0 )
      goto LABEL_63;
    v40 = this->fields.memberList;
    if ( !v40 )
      goto LABEL_115;
    v41 = v40->max_length;
    if ( v41 < 1 )
    {
LABEL_63:
      if ( !((v33 < 0) | v32 & 1) )
      {
        for ( j = v33 + 1; ; ++j )
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
          v44 = this->fields.memberList;
          if ( !v44 )
            goto LABEL_115;
          if ( j >= v44->max_length )
            goto LABEL_116;
          IsUseOldMaster = v44->m_Items[j];
          if ( !IsUseOldMaster )
            goto LABEL_115;
          PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(IsUseOldMaster, 0LL);
        }
      }
      if ( (FixedPositionCount > 0) | v32 & 1 )
        goto LABEL_80;
      v45 = this->fields.memberList;
      if ( !v45 )
        goto LABEL_115;
      v46 = v45->max_length;
      if ( v46 < 1 )
      {
LABEL_80:
        v48 = this->fields.questRestrictionInfo;
        if ( !v48 || v48->fields.servantNumMin != 1 )
          return;
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2 = IsUseOldMaster->fields.sortValue2;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( IsUseOldMaster )
          {
            if ( sortValue2 )
            {
              sortValue1_low = LODWORD(IsUseOldMaster->fields.sortValue1);
              if ( (int)sortValue1_low >= 1 )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                v51 = 0LL;
                v13 = 0;
                while ( 1 )
                {
                  if ( (IsUseOldMaster->fields.nameLimitCount & 0x4000000) != 0
                    && !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( v51 >= *(int *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
                    break;
                  if ( sortValue1_low != ++v51 )
                  {
                    v52 = *(_QWORD *)(sortValue2 + 120);
                    if ( !v52 )
                      goto LABEL_115;
                    if ( v51 - 1 >= (unsigned __int64)*(unsigned int *)(v52 + 24) )
                      goto LABEL_116;
                    v53 = *(_QWORD *)(v52 + 8 * v51 + 24);
                    if ( !v53 )
                      goto LABEL_115;
                    if ( *(_QWORD *)(v53 + 112) )
                      ++v13;
                  }
                }
              }
            }
            v54 = this->fields.questRestrictionInfo;
            if ( v54 )
            {
              if ( !v13 && v12 == 1 && v54->fields.isNotSingleSupportOnly )
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
                  v56 = this->fields.memberList;
                  if ( !v56 )
                    goto LABEL_115;
                  if ( k >= v56->max_length )
                    goto LABEL_116;
                  v57 = v56->m_Items[k];
                  if ( !v57 )
                    goto LABEL_115;
                  if ( v57->fields.isFollower )
                  {
                    v57->fields._IsNotSupportSingle_k__BackingField = 1;
                    return;
                  }
                }
              }
              return;
            }
          }
        }
LABEL_115:
        sub_B5D69C(IsUseOldMaster, method);
      }
      v47 = 0;
      while ( v47 < v46 )
      {
        IsUseOldMaster = v45->m_Items[v47];
        if ( !IsUseOldMaster )
          goto LABEL_115;
        PartyOrganizationListViewItem__ResetPositionRestrictionServant(IsUseOldMaster, 0LL);
        v46 = v45->max_length;
        if ( (int)++v47 >= v46 )
          goto LABEL_80;
      }
    }
    else
    {
      v42 = 0;
      while ( v42 < v41 )
      {
        IsUseOldMaster = v40->m_Items[v42];
        if ( !IsUseOldMaster )
          goto LABEL_115;
        PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(IsUseOldMaster, 0LL);
        v41 = v40->max_length;
        if ( (int)++v42 >= v41 )
          goto LABEL_63;
      }
    }
LABEL_116:
    v58 = sub_B5D6C8(IsUseOldMaster);
    sub_B5D668(v58, 0LL);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  il2cpp_array_size_t i; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  BalanceConfig_c *v7; // x0
  int32_t cost; // w22
  __int64 v9; // x0

  if ( (byte_42ECE6E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECE6E = 1;
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
      v9 = sub_B5D6C8(v7);
      sub_B5D668(v9, 0LL);
    }
    v7 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v7 )
LABEL_15:
      sub_B5D69C(v7, method);
    if ( !LOBYTE(v7->_1.fields) )
    {
      cost = this->fields.cost;
      this->fields.cost = cost - PartyOrganizationListViewItem__ClearEquip((PartyOrganizationListViewItem_o *)v7, 0LL);
    }
  }
  PartyListViewItem__CheckRestriction(this, method);
}


void __fastcall PartyListViewItem__ClearFollower(PartyListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  il2cpp_array_size_t i; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  BalanceConfig_c *v7; // x0
  __int64 v8; // x0

  if ( (byte_42ECE6F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECE6F = 1;
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
      v8 = sub_B5D6C8(v7);
      sub_B5D668(v8, 0LL);
    }
    v7 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v7 )
LABEL_13:
      sub_B5D69C(v7, method);
    PartyOrganizationListViewItem__ClearFollower((PartyOrganizationListViewItem_o *)v7, 0LL);
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
    sub_B5D69C(this, *(_QWORD *)&num);
  }
  if ( v7->max_length <= num )
  {
LABEL_9:
    v9 = sub_B5D6C8(this);
    sub_B5D668(v9, 0LL);
  }
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void __fastcall PartyListViewItem__ClearMember_33818856(PartyListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  il2cpp_array_size_t i; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  BalanceConfig_c *v7; // x0
  __int64 v8; // x0

  if ( (byte_42ECE6D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECE6D = 1;
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
      v8 = sub_B5D6C8(v7);
      sub_B5D668(v8, 0LL);
    }
    v7 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v7 )
LABEL_15:
      sub_B5D69C(v7, method);
    if ( !LOBYTE(v7->_1.fields) )
      PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)v7, 0LL);
  }
  this->fields.cost = 0;
  PartyListViewItem__CheckRestriction(this, method);
}


PartyListViewItem_o *__fastcall PartyListViewItem__Clone(PartyListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListViewItem_o *v5; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_42ECE68 & 1) == 0 )
  {
    sub_B5D5C4(&PartyListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECE68 = 1;
  }
  v5 = (PartyListViewItem_o *)sub_B5D694(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v5, v6);
  if ( !v5 )
    sub_B5D69C(v7, v8);
  PartyListViewItem__Set(v5, this, v9);
  return v5;
}


bool __fastcall PartyListViewItem__CompMember(
        PartyListViewItem_o *this,
        PartyListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyListViewItem_o *v5; // x20
  il2cpp_array_size_t i; // w21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v8; // x9
  PartyOrganizationListViewItem_o *v9; // x1
  __int64 v11; // x0

  v5 = this;
  if ( (byte_42ECE78 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42ECE78 = 1;
  }
  if ( !item )
LABEL_18:
    sub_B5D69C(this, item);
  if ( System_String__op_Inequality(v5->fields.deckName, item->fields.deckName, 0LL) )
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
    memberList = v5->fields.memberList;
    if ( !memberList )
      goto LABEL_18;
    if ( i >= memberList->max_length )
      goto LABEL_19;
    v8 = item->fields.memberList;
    if ( !v8 )
      goto LABEL_18;
    if ( i >= v8->max_length )
    {
LABEL_19:
      v11 = sub_B5D6C8(this);
      sub_B5D668(v11, 0LL);
    }
    this = (PartyListViewItem_o *)memberList->m_Items[i];
    if ( !this )
      goto LABEL_18;
    v9 = v8->m_Items[i];
    if ( !PartyOrganizationListViewItem__CompMember((PartyOrganizationListViewItem_o *)this, v9, 0LL) )
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  __int64 v21; // x1
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *AssetName; // x0
  __int64 v27; // x0

  if ( (byte_42ECE84 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v17, v18, v19);
    byte_42ECE84 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
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
      v27 = sub_B5D6C8(AssetName);
      sub_B5D668(v27, 0LL);
    }
    v24 = memberList->m_Items[i];
    if ( v24 )
    {
      AssetName = (EventMissionProgressRequest_Argument_ProgressData_o *)PartyOrganizationListViewItem__GetAssetName(
                                                                           v24,
                                                                           0LL);
      if ( AssetName )
      {
        if ( !v20 )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          AssetName,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  if ( !v20 )
LABEL_19:
    sub_B5D69C(AssetName, v21);
  if ( v20->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_Int32_array *__fastcall PartyListViewItem__GetCommandCardList(
        PartyListViewItem_o *this,
        int32_t typeMax,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  System_Int32_array *v10; // x21
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v13; // x0
  _QWORD *p_image; // x0
  unsigned __int64 j; // x8
  unsigned __int64 v16; // x10
  __int64 v18; // x0

  if ( (byte_42ECE83 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, typeMax, (_DWORD)method, v3);
    sub_B5D5C4(&int___TypeInfo, v6, v7, v8);
    byte_42ECE83 = 1;
  }
  v10 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)typeMax);
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
      sub_B5D69C(p_image, v9);
    if ( i >= memberList->max_length )
    {
LABEL_22:
      v18 = sub_B5D6C8(p_image);
      sub_B5D668(v18, 0LL);
    }
    v13 = memberList->m_Items[i];
    if ( v13 )
    {
      p_image = PartyOrganizationListViewItem__GetCommandCardList(v13, 0LL);
      if ( p_image )
      {
        if ( typeMax >= 1 )
        {
          for ( j = 0LL; (__int64)j < typeMax; ++j )
          {
            v16 = *((unsigned int *)p_image + 6);
            if ( (__int64)j < (int)v16 )
            {
              if ( !v10 )
                goto LABEL_23;
              if ( j >= v10->max_length || j >= v16 )
                goto LABEL_22;
              v10->m_Items[j + 1] += *((_DWORD *)p_image + j + 8);
            }
          }
        }
      }
    }
  }
  return v10;
}


int32_t __fastcall PartyListViewItem__GetDeckCondition(PartyListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x5
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
  void *DeckConditionServantNumAndPosition; // x0
  il2cpp_array_size_t v31; // w26
  int v32; // w25
  char v33; // w28
  int v34; // w27
  int v35; // w21
  int32_t v36; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v38; // x8
  PartyOrganizationListViewItem_o *v39; // x22
  _BOOL4 isFollower; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t DeckMainMemberMax; // w22
  int32_t v43; // w26
  struct PartyOrganizationListViewItem_array *v44; // x8
  Il2CppClass **v45; // x8
  PartyOrganizationListViewItem_o *v46; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // kr10_16
  __int64 v48; // x8
  int32_t v49; // w23
  struct PartyOrganizationListViewItem_array *v50; // x9
  PartyOrganizationListViewItem_o *v51; // x9
  const MethodInfo *v52; // x5
  const MethodInfo *v53; // x5
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  _BOOL4 isNotSingleSupportOnly; // w8
  struct PartyOrganizationListViewItem_array *v56; // x26
  int max_length; // w8
  unsigned int v58; // w28
  Il2CppClass **v59; // x8
  PartyOrganizationListViewItem_o *v60; // x20
  PartyOrganizationListViewItem_o *v61; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // kr20_16
  _DWORD *v63; // x21
  _QWORD *v64; // x22
  signed __int64 v65; // x8
  int v66; // w9
  unsigned __int64 v67; // x27
  char v68; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x23
  ServantEntity_o *servantEntity; // x24
  int32_t svtLimitCount; // w25
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  int v74; // w8
  __int64 i; // x23
  struct PartyOrganizationListViewItem_array *v76; // x8
  PartyOrganizationListViewItem_o *v77; // x8
  struct ServantEntity_o *v78; // x8
  __int64 v79; // x20
  __int64 v80; // x21
  int32_t v81; // w20
  unsigned __int64 j; // x24
  struct PartyOrganizationListViewItem_array *v83; // x8
  PartyOrganizationListViewItem_o *v84; // x8
  struct ServantEntity_o *v85; // x8
  __int64 v86; // x21
  __int64 v87; // x22
  __int64 v88; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_42ECE76 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Intersect_int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Item__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28, v29);
    byte_42ECE76 = 1;
  }
  if ( this->fields.cost > this->fields.maxCost )
  {
    LODWORD(DeckConditionServantNumAndPosition) = 7;
    return (int)DeckConditionServantNumAndPosition;
  }
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
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
    if ( (int)v31 >= DeckMainMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_182;
    if ( v31 >= memberList->max_length )
      goto LABEL_183;
    v38 = &memberList->obj.klass + (int)v31;
    v39 = (PartyOrganizationListViewItem_o *)v38[4];
    if ( !v39 )
      goto LABEL_182;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v38[4], 0LL) )
    {
LABEL_62:
      LODWORD(DeckConditionServantNumAndPosition) = 5;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( (v39->fields.fatigureTime & 0x8000000000000000LL) == 0 )
    {
LABEL_63:
      LODWORD(DeckConditionServantNumAndPosition) = 6;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v39->fields._IsAllOutBattle_k__BackingField )
    {
LABEL_64:
      LODWORD(DeckConditionServantNumAndPosition) = 19;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v39->fields._IsDataLost_k__BackingField )
    {
LABEL_65:
      LODWORD(DeckConditionServantNumAndPosition) = 20;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v39->fields._TimesToRestart_k__BackingField > 0 )
    {
LABEL_66:
      LODWORD(DeckConditionServantNumAndPosition) = 21;
      return (int)DeckConditionServantNumAndPosition;
    }
    isFollower = v39->fields.isFollower;
    if ( v39->fields.isFollower && !v39->fields.isMyServantOrNpcRestriction )
    {
      ++v35;
      ++v34;
      v33 = 1;
    }
    else
    {
      if ( v39->fields.userServantEntity )
        goto LABEL_18;
      if ( v39->fields.isMyServantOrNpcRestriction )
      {
        SvtId = PartyOrganizationListViewItem__get_SvtId(v39, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(SvtId, 0LL) >= 1 )
        {
          isFollower = v39->fields.isFollower;
LABEL_18:
          ++v36;
          v32 |= isFollower;
        }
      }
    }
    ++v31;
  }
  if ( (*((_BYTE *)DeckConditionServantNumAndPosition + 307) & 4) != 0
    && !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
  {
    j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  v43 = v36;
  while ( 1 )
  {
    if ( (*((_BYTE *)DeckConditionServantNumAndPosition + 307) & 4) != 0
      && !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
    {
      j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    v48 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
    if ( DeckMainMemberMax >= *(_DWORD *)(v48 + 156) )
      break;
    v44 = this->fields.memberList;
    if ( !v44 )
      goto LABEL_182;
    if ( DeckMainMemberMax >= v44->max_length )
      goto LABEL_183;
    v45 = &v44->obj.klass + DeckMainMemberMax;
    v46 = (PartyOrganizationListViewItem_o *)v45[4];
    if ( !v46 )
      goto LABEL_182;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v45[4], 0LL) )
      goto LABEL_62;
    if ( (v46->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_63;
    if ( v46->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_64;
    if ( v46->fields._IsDataLost_k__BackingField )
      goto LABEL_65;
    if ( v46->fields._TimesToRestart_k__BackingField > 0 )
      goto LABEL_66;
    if ( v46->fields.isFollower && !v46->fields.isMyServantOrNpcRestriction )
    {
      ++v34;
    }
    else
    {
      if ( v46->fields.userServantEntity )
        goto LABEL_46;
      if ( v46->fields.isMyServantOrNpcRestriction )
      {
        v47 = PartyOrganizationListViewItem__get_SvtId(v46, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v47, 0LL) >= 1 )
LABEL_46:
          ++v43;
      }
    }
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    ++DeckMainMemberMax;
  }
  DeckConditionServantNumAndPosition = 0LL;
  v49 = v34 + v43;
  switch ( this->fields.menuKind )
  {
    case 4:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__CheckDeckConditionServantNum(
                                                     this,
                                                     v49,
                                                     v36,
                                                     v33 & 1,
                                                     1,
                                                     v4);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
        goto LABEL_61;
      goto LABEL_101;
    case 5:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                     this,
                                                     v49,
                                                     v36,
                                                     v33 & 1,
                                                     1,
                                                     v4);
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
                                                            v49,
                                                            v36,
                                                            v33 & 1,
                                                            v35,
                                                            v53);
            if ( (_DWORD)DeckConditionServantNumAndPosition )
              return (int)DeckConditionServantNumAndPosition;
          }
        }
      }
      else if ( !PartyListViewItem__CheckDeckConditionServantNum(this, v49, v36, v33 & 1, v35, v52) )
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
              v43,
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
        v48 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
LABEL_99:
        if ( v36 + v35 < *(_DWORD *)(v48 + 160) )
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
      if ( v36 == 1 && (v32 & isNotSingleSupportOnly & 1) != 0 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 22;
        return (int)DeckConditionServantNumAndPosition;
      }
      v56 = this->fields.memberList;
      if ( !v56 )
        goto LABEL_182;
      max_length = v56->max_length;
      if ( max_length >= 1 )
      {
        v58 = 0;
        while ( v58 < max_length )
        {
          v59 = &v56->obj.klass + (int)v58;
          v60 = (PartyOrganizationListViewItem_o *)v59[4];
          if ( !v60 )
            goto LABEL_182;
          v61 = (PartyOrganizationListViewItem_o *)v59[4];
          v60->fields._IsErrorNeedIndividuality_k__BackingField = 0;
          v62 = PartyOrganizationListViewItem__get_SvtId(v61, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                         v62,
                                                         0LL);
          if ( !(_DWORD)DeckConditionServantNumAndPosition )
          {
            DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
            if ( !DeckConditionServantNumAndPosition )
              goto LABEL_182;
            DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsSetRequired(
                                                           (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                           v60->fields.index + 1,
                                                           v60->fields._InitPos_k__BackingField,
                                                           0LL);
            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
            {
              LODWORD(DeckConditionServantNumAndPosition) = 18;
              return (int)DeckConditionServantNumAndPosition;
            }
          }
          if ( v60->fields.userServantEntity )
          {
            DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
            if ( !DeckConditionServantNumAndPosition )
              goto LABEL_182;
            DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetNeedIndividualityList(
                                                   (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                   v60->fields._InitPos_k__BackingField,
                                                   0LL);
            if ( !this->fields.questRestrictionInfo )
              goto LABEL_182;
            v63 = DeckConditionServantNumAndPosition;
            DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetRangeTypeList(
                                                   this->fields.questRestrictionInfo,
                                                   v60->fields._InitPos_k__BackingField,
                                                   0LL);
            if ( v63 )
            {
              v64 = DeckConditionServantNumAndPosition;
              if ( DeckConditionServantNumAndPosition )
              {
                LODWORD(v65) = v63[6];
                if ( (int)v65 >= 1 )
                {
                  v66 = *((_DWORD *)DeckConditionServantNumAndPosition + 6);
                  if ( v66 >= 1 && (_DWORD)v65 == v66 )
                  {
                    v67 = 0LL;
                    v68 = 0;
                    do
                    {
                      if ( v67 >= (unsigned int)v65 )
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                      v69 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*((_QWORD *)v63 + 2) + 8 * v67 + 32);
                      if ( v69 )
                      {
                        if ( v67 >= (unsigned int)v63[6] )
                          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                        if ( v69[1].monitor )
                        {
                          if ( v67 >= (unsigned int)v63[6] )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                          servantEntity = v60->fields.servantEntity;
                          svtLimitCount = v60->fields.svtLimitCount;
                          DeckConditionServantNumAndPosition = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(
                                                                         v60,
                                                                         0LL);
                          if ( !servantEntity )
                            goto LABEL_182;
                          Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                                 servantEntity,
                                                                                                 svtLimitCount,
                                                                                                 (int32_t)DeckConditionServantNumAndPosition,
                                                                                                 0LL);
                          v73 = System_Linq_Enumerable__Intersect_int_(
                                  v69,
                                  Individuality,
                                  (const MethodInfo_1CACD4C *)Method_System_Linq_Enumerable_Intersect_int___);
                          DeckConditionServantNumAndPosition = System_Linq_Enumerable__ToArray_int_(
                                                                 v73,
                                                                 (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
                          if ( v67 >= *((unsigned int *)v64 + 6) )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                          v74 = *(_DWORD *)(v64[2] + 4 * v67 + 32);
                          if ( v74 == 1 )
                          {
                            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)DeckConditionServantNumAndPosition,
                                                                           (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
                            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
                              goto LABEL_146;
                          }
                          else
                          {
                            if ( v67 >= *((unsigned int *)v64 + 6) )
                              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                            if ( v74 == 2 )
                            {
                              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)DeckConditionServantNumAndPosition,
                                                                             (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
                              if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
                                goto LABEL_146;
                            }
                          }
                          v68 = 1;
                        }
                      }
                      v65 = (int)v63[6];
                      ++v67;
                    }
                    while ( (__int64)v67 < v65 );
                    if ( (v68 & 1) != 0 )
                    {
                      v60->fields._IsErrorNeedIndividuality_k__BackingField = 1;
                      LODWORD(DeckConditionServantNumAndPosition) = 23;
                      return (int)DeckConditionServantNumAndPosition;
                    }
                  }
                }
              }
            }
          }
LABEL_146:
          max_length = v56->max_length;
          if ( (int)++v58 >= max_length )
            goto LABEL_147;
        }
LABEL_183:
        v88 = sub_B5D6C8(DeckConditionServantNumAndPosition);
        sub_B5D668(v88, 0LL);
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
        v76 = this->fields.memberList;
        if ( !v76 )
          goto LABEL_182;
        if ( (unsigned int)i >= v76->max_length )
          goto LABEL_183;
        v77 = v76->m_Items[(int)i];
        if ( !v77 )
          goto LABEL_182;
        if ( v77->fields.userServantEntity )
          break;
LABEL_172:
        ;
      }
      v78 = v77->fields.servantEntity;
      if ( !v78 )
LABEL_182:
        sub_B5D69C(DeckConditionServantNumAndPosition, method);
      v80 = *(_QWORD *)&v78->fields.baseSvtId.fields.currentCryptoKey;
      v79 = *(_QWORD *)&v78->fields.baseSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v90.fields.currentCryptoKey = v80;
      *(_QWORD *)&v90.fields.fakeValue = v79;
      v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v90, 0LL);
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
          v83 = this->fields.memberList;
          if ( !v83 )
            goto LABEL_182;
          if ( j >= v83->max_length )
            goto LABEL_183;
          v84 = v83->m_Items[j];
          if ( !v84 )
            goto LABEL_182;
          if ( v84->fields.userServantEntity )
          {
            v85 = v84->fields.servantEntity;
            if ( !v85 )
              goto LABEL_182;
            v87 = *(_QWORD *)&v85->fields.baseSvtId.fields.currentCryptoKey;
            v86 = *(_QWORD *)&v85->fields.baseSvtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v91.fields.currentCryptoKey = v87;
            *(_QWORD *)&v91.fields.fakeValue = v86;
            if ( v81 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v91, 0LL) )
              break;
          }
        }
      }
      LODWORD(DeckConditionServantNumAndPosition) = 4;
      return (int)DeckConditionServantNumAndPosition;
    default:
      if ( !v43 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 1;
        return (int)DeckConditionServantNumAndPosition;
      }
      if ( v36 != 1 )
        goto LABEL_86;
      v50 = this->fields.memberList;
      if ( !v50 )
        goto LABEL_182;
      if ( !v50->max_length )
        goto LABEL_183;
      v51 = v50->m_Items[0];
      if ( !v51 )
        goto LABEL_182;
      if ( v51->fields.userServantEntity )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 2;
        return (int)DeckConditionServantNumAndPosition;
      }
LABEL_86:
      v35 = v33 & 1;
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
  __int64 v11; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v15; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v17; // x8
  __int64 v18; // x0

  if ( (byte_42ECE75 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, deckMemberCount, mainMemberCount, isFollowerMainMember);
    byte_42ECE75 = 1;
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
    sub_B5D69C(questRestrictionInfo, v11);
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
      v18 = sub_B5D6C8(questRestrictionInfo);
      sub_B5D668(v18, 0LL);
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
  System_Collections_Generic_List_long__o *v14; // x20
  __int64 EquipUserSvtId; // x0
  __int64 v16; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v18; // x22
  int max_length; // w9
  Il2CppClass **v20; // x8
  PartyOrganizationListViewItem_o *v21; // x21
  __int64 v23; // x0

  if ( (byte_42ECE7B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v11, v12, v13);
    byte_42ECE7B = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_12;
  v18 = 0LL;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v18 >= max_length )
      break;
    if ( (unsigned int)v18 >= max_length )
    {
      v23 = sub_B5D6C8(EquipUserSvtId);
      sub_B5D668(v23, 0LL);
    }
    v20 = &memberList->obj.klass + v18;
    v21 = (PartyOrganizationListViewItem_o *)v20[4];
    if ( v21 )
    {
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v20[4], 0LL);
      if ( EquipUserSvtId >= 1 )
      {
        EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v21, 0LL);
        if ( !v14 )
          goto LABEL_12;
        System_Collections_Generic_List_long___Add(
          v14,
          EquipUserSvtId,
          (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      }
      memberList = this->fields.memberList;
      ++v18;
      if ( memberList )
        continue;
    }
    goto LABEL_12;
  }
  if ( !v14 )
LABEL_12:
    sub_B5D69C(EquipUserSvtId, v16);
  return System_Collections_Generic_List_long___ToArray(
           v14,
           (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
}


bool __fastcall PartyListViewItem__GetEventUpVal(
        PartyListViewItem_o *this,
        int32_t *eventId,
        EventUpValInfo_array **eventUpValList,
        const MethodInfo *method)
{
  PartyListViewItem_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x8
  __int64 v11; // x9
  BalanceConfig_c *v12; // x0
  EventUpValInfo_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  EventUpValInfo_array *v22; // x8
  __int64 v24; // x0

  v6 = this;
  if ( (byte_42ECE82 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)eventId, (_DWORD)eventUpValList, method);
    this = (PartyListViewItem_o *)sub_B5D5C4(&EventUpValInfo___TypeInfo, v7, v8, v9);
    byte_42ECE82 = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_25:
      sub_B5D69C(this, eventId);
    v11 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v11 )
    {
      if ( !(_DWORD)v11 )
      {
LABEL_26:
        v24 = sub_B5D6C8(this);
        sub_B5D668(v24, 0LL);
      }
      LODWORD(setupInfo) = setupInfo->fields.eventIdList;
    }
    else
    {
      LODWORD(setupInfo) = 0;
    }
  }
  *eventId = (int)setupInfo;
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  v13 = (EventUpValInfo_array *)sub_B5D5DC(EventUpValInfo___TypeInfo, (unsigned int)v12->static_fields->DeckMemberMax);
  *eventUpValList = v13;
  sub_B5D560((BattleServantConfConponent_o *)eventUpValList, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
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
      v22 = *eventUpValList;
      if ( !*eventUpValList )
        goto LABEL_25;
      if ( i >= v22->max_length )
        goto LABEL_26;
      PartyOrganizationListViewItem__GetEventUpVal((PartyOrganizationListViewItem_o *)this, &v22->m_Items[i], 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
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
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  int current; // w22
  DeckServantData_o *v37; // x8
  QuestRestrictionInfo_o *v38; // x0
  const MethodInfo *v39; // x2
  __int64 v40; // x0
  struct QuestRestrictionInfo_o *v41; // x8
  int servantNumMax; // w9
  PartyListViewItem___c__DisplayClass32_0_o *v43; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v44; // x23
  struct QuestRestrictionInfo_o *v45; // x8
  System_Collections_Generic_List_Enumerator_int__o v47; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v48; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42ECE65 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_FollowerInfo___, (_DWORD)deck, (_DWORD)fixNpcFollowerInfoList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_FollowerInfo__bool___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_FollowerInfo__bool__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v22, v23, v24);
    sub_B5D5C4(&Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__, v25, v26, v27);
    sub_B5D5C4(&PartyListViewItem___c__DisplayClass32_0_TypeInfo, v28, v29, v30);
    byte_42ECE65 = 1;
  }
  memset(&v48, 0, sizeof(v48));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v47,
      (System_Collections_Generic_List_int__o *)questRestrictionInfo,
      (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v48 = v47;
    while ( 1 )
    {
      v32 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v48,
              (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v32 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_B5D69C(v32, v33);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_B5D69C(v32, v33);
      current = v48.fields.current;
      if ( v48.fields.current - 1 >= svts->max_length )
      {
        v40 = sub_B5D6C8(v32);
        sub_B5D668(v40, 0LL);
      }
      v37 = svts->m_Items[v48.fields.current - 1];
      if ( !v37 )
        sub_B5D69C(v32, v33);
      v38 = this->fields.questRestrictionInfo;
      if ( !v38 )
        sub_B5D69C(0LL, v33);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(v38, v37->fields.initPos, 0LL) )
        goto LABEL_20;
    }
    current = 0;
LABEL_20:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v48,
      (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  v41 = this->fields.questRestrictionInfo;
  if ( !v41 )
    return current;
  servantNumMax = v41->fields.servantNumMax;
  if ( servantNumMax >= 1 && servantNumMax < current )
  {
LABEL_38:
    v45 = this->fields.questRestrictionInfo;
    if ( v45 )
    {
      if ( fixNpcFollowerInfoList )
        return PartyListViewItem__GetSupportInitIndex(this, fixNpcFollowerInfoList, v39);
      else
        return v45->fields.supportInitIndex;
    }
    return 0;
  }
  if ( fixNpcFollowerInfoList && !v41->fields.isNpcEditablePos )
  {
    v43 = (PartyListViewItem___c__DisplayClass32_0_o *)sub_B5D694(PartyListViewItem___c__DisplayClass32_0_TypeInfo);
    PartyListViewItem___c__DisplayClass32_0___ctor(v43, 0LL);
    if ( v43 )
    {
      v43->fields.chkIndex = current;
      v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v44,
        (Il2CppObject *)v43,
        Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_FollowerInfo__bool___ctor__);
      if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v44,
              (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_38;
    }
LABEL_44:
    sub_B5D69C(questRestrictionInfo, deck);
  }
  return current;
}


int32_t __fastcall PartyListViewItem__GetFriendPointUpVal(PartyListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  unsigned __int64 v5; // x21
  int32_t v6; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v8; // x0
  int32_t FriendPointUpVal; // w0
  BalanceConfig_c *v10; // x0
  __int64 v12; // x0

  if ( (byte_42ECE81 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECE81 = 1;
  }
  v5 = 0LL;
  v6 = 0;
  while ( 1 )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v5 >= v10->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      sub_B5D69C(v10, method);
    if ( v5 >= memberList->max_length )
    {
      v12 = sub_B5D6C8(v10);
      sub_B5D668(v12, 0LL);
    }
    v8 = memberList->m_Items[v5];
    if ( v8 )
    {
      FriendPointUpVal = PartyOrganizationListViewItem__GetFriendPointUpVal(v8, 0LL);
      if ( FriendPointUpVal > v6 )
        v6 = FriendPointUpVal;
    }
    ++v5;
  }
  return v6;
}


System_Boolean_array *__fastcall PartyListViewItem__GetIsFollowerList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  __int64 v9; // x1
  System_Boolean_array *v10; // x20
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v13; // x8
  BalanceConfig_c *v14; // x0
  __int64 v16; // x0

  if ( (byte_42ECE80 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&bool___TypeInfo, v5, v6, v7);
    byte_42ECE80 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v10 = (System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, (unsigned int)v8->static_fields->DeckMemberMax);
  for ( i = 0LL; ; ++i )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v14->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( i >= memberList->max_length )
      goto LABEL_20;
    v13 = memberList->m_Items[i];
    if ( v13 )
    {
      if ( !v10 )
LABEL_19:
        sub_B5D69C(v14, v9);
      if ( i >= v10->max_length )
      {
LABEL_20:
        v16 = sub_B5D6C8(v14);
        sub_B5D668(v16, 0LL);
      }
      v10->m_Items[i + 4] = v13->fields.isFollower;
    }
  }
  return v10;
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
    sub_B5D69C(this, num);
  if ( memberList->max_length <= num )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
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
    sub_B5D69C(this, npcSvtIds);
  myServantNumMax = (unsigned int)questRestrictionInfo->fields.myServantNumMax;
  max_length = npcSvtIds->max_length;
  while ( (int)myServantNumMax < (int)max_length )
  {
    if ( (unsigned int)myServantNumMax >= max_length )
    {
      v6 = sub_B5D6C8(myServantNumMax);
      sub_B5D668(v6, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t menuKind; // w8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int dialogMessageInfoDictionary; // w23
  PartyOrganizationListViewItem_o *v11; // x20
  __int64 v12; // x24
  struct PartyOrganizationListViewItem_array *memberList; // x8
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
  __int64 v29; // x0

  if ( (byte_42ECE77 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    byte_42ECE77 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_49:
      sub_B5D69C(questRestrictionInfo, method);
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
                                                       questRestrictionInfo,
                                                       0LL);
    if ( questRestrictionInfo )
    {
      dialogMessageInfoDictionary = (int)questRestrictionInfo->fields.dialogMessageInfoDictionary;
      v11 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
      if ( dialogMessageInfoDictionary < 1 )
      {
LABEL_4:
        LODWORD(questRestrictionInfo) = 0;
        return (int)questRestrictionInfo;
      }
      v12 = 0LL;
      while ( 1 )
      {
        memberList = this->fields.memberList;
        if ( !memberList )
          goto LABEL_49;
        if ( (unsigned int)v12 >= memberList->max_length )
          goto LABEL_50;
        questRestrictionInfo = (QuestRestrictionInfo_o *)memberList->m_Items[v12];
        if ( !questRestrictionInfo )
          goto LABEL_49;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)questRestrictionInfo, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                           SvtId,
                                                           0LL);
        if ( (unsigned int)v12 >= v11->fields.sortIndex )
          goto LABEL_50;
        if ( (_DWORD)questRestrictionInfo != *((_DWORD *)&v11->fields.sortValue0 + v12) )
          break;
        if ( (int)++v12 >= dialogMessageInfoDictionary )
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
        questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v18 >= SHIDWORD(questRestrictionInfo->fields.fixedSupportPositionRestrictionEntity[2].fields.name) )
          break;
        v22 = this->fields.memberList;
        if ( !v22 )
          goto LABEL_49;
        if ( v18 >= v22->max_length )
        {
LABEL_50:
          v29 = sub_B5D6C8(questRestrictionInfo);
          sub_B5D668(v29, 0LL);
        }
        v23 = &v22->obj.klass + (int)v18;
        v24 = v23[4];
        if ( !v24 )
          goto LABEL_49;
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction((PartyOrganizationListViewItem_o *)v23[4], 0LL) )
        {
          LODWORD(questRestrictionInfo) = 18;
          return (int)questRestrictionInfo;
        }
        ++v18;
        v21 |= BYTE2(v24->_2.unity_user_data) != 0;
        v20 |= BYTE3(v24->_2.unity_user_data) != 0;
        FixedServantPositionCount -= BYTE6(v24->_2.unity_user_data) & 1;
        v19 |= BYTE4(v24->_2.unity_user_data) != 0;
      }
      if ( (v19 & 1) != 0 )
      {
        LODWORD(questRestrictionInfo) = 9;
        return (int)questRestrictionInfo;
      }
      v25 = FixedServantPositionCount > 0;
      v26 = FixedServantPositionCount <= 0 ? 12 : 10;
      v27 = v25 | v21;
      v28 = v20 | v25 | v21;
      LODWORD(questRestrictionInfo) = (v27 & 1) != 0 ? v26 : 13;
      if ( (v28 & 1) == 0 )
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
  __int64 v3; // x3
  PartyListViewItem_o *v5; // x20
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t result; // w0
  int32_t v26; // w23
  PartyListViewItem___c__DisplayClass33_0_o *v27; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  BalanceConfig_c *v30; // x0
  int32_t supportInitIndex; // [xsp+8h] [xbp-58h]
  int myServantNumMax; // [xsp+Ch] [xbp-54h]

  v5 = this;
  if ( (byte_42ECE66 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)fixNpcFollowerInfoList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_FollowerInfo__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_FollowerInfo__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__, v18, v19, v20);
    this = (PartyListViewItem_o *)sub_B5D5C4(&PartyListViewItem___c__DisplayClass33_0_TypeInfo, v21, v22, v23);
    byte_42ECE66 = 1;
  }
  questRestrictionInfo = v5->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_17:
    sub_B5D69C(this, fixNpcFollowerInfoList);
  result = questRestrictionInfo->fields.supportInitIndex;
  if ( result <= 0 )
  {
    supportInitIndex = questRestrictionInfo->fields.supportInitIndex;
    myServantNumMax = questRestrictionInfo->fields.myServantNumMax;
    v26 = 0;
    while ( 1 )
    {
      do
      {
        v30 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v30 = BalanceConfig_TypeInfo;
        }
        if ( v26 >= v30->static_fields->DeckMemberMax )
          return supportInitIndex;
        v27 = (PartyListViewItem___c__DisplayClass33_0_o *)sub_B5D694(PartyListViewItem___c__DisplayClass33_0_TypeInfo);
        PartyListViewItem___c__DisplayClass33_0___ctor(v27, 0LL);
        if ( !v27 )
          goto LABEL_17;
        v27->fields.chkIdx = ++v26;
        v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v28,
          (Il2CppObject *)v27,
          Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_FollowerInfo__bool___ctor__);
        v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
                (System_Func_TSource__bool__o *)v28,
                (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      }
      while ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                v29,
                (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) );
      if ( myServantNumMax < 1 )
        return v27->fields.chkIdx;
      --myServantNumMax;
    }
  }
  return result;
}


ServantEntity_array *__fastcall PartyListViewItem__GetSvtEntityList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ServantEntity_array *v16; // x20
  unsigned __int64 v17; // x24
  BattleServantConfConponent_o *i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v20; // x8
  System_Int32_array **servantEntity; // x22
  BalanceConfig_c *v22; // x0
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_42ECE7E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantEntity___TypeInfo, v5, v6, v7);
    byte_42ECE7E = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v16 = (ServantEntity_array *)sub_B5D5DC(ServantEntity___TypeInfo, (unsigned int)v8->static_fields->DeckMemberMax);
  v17 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v16->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v17 >= v22->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( v17 >= memberList->max_length )
      goto LABEL_22;
    v20 = memberList->m_Items[v17];
    if ( v20 )
    {
      if ( !v16 )
LABEL_21:
        sub_B5D69C(v22, v9);
      servantEntity = (System_Int32_array **)v20->fields.servantEntity;
      if ( servantEntity )
      {
        v22 = (BalanceConfig_c *)sub_B5D684(servantEntity, v16->obj.klass->_1.element_class);
        if ( !v22 )
        {
          v25 = sub_B5D6BC(0LL);
          sub_B5D668(v25, 0LL);
        }
      }
      if ( v17 >= v16->max_length )
      {
LABEL_22:
        v24 = sub_B5D6C8(v22);
        sub_B5D668(v24, 0LL);
      }
      i->klass = (BattleServantConfConponent_c *)servantEntity;
      sub_B5D560(i, servantEntity, v10, v11, v12, v13, v14, v15);
    }
    ++v17;
  }
  return v16;
}


System_String_array *__fastcall PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  __int64 v9; // x1
  System_String_array *v10; // x20
  unsigned __int64 v11; // x24
  BattleServantConfConponent_o *i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v14; // x0
  System_Int32_array **SvtNameText; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x22
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_42ECE7F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&string___TypeInfo, v5, v6, v7);
    byte_42ECE7F = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v10 = (System_String_array *)sub_B5D5DC(string___TypeInfo, (unsigned int)v8->static_fields->DeckMemberMax);
  v11 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v10->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    SvtNameText = (System_Int32_array **)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (System_Int32_array **)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v11 >= SvtNameText[23]->m_Items[32] )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( v11 >= memberList->max_length )
      goto LABEL_22;
    v14 = memberList->m_Items[v11];
    if ( v14 )
    {
      SvtNameText = (System_Int32_array **)PartyOrganizationListViewItem__get_SvtNameText(v14, 0LL);
      if ( !v10 )
LABEL_21:
        sub_B5D69C(SvtNameText, v9);
      v22 = SvtNameText;
      if ( SvtNameText )
      {
        SvtNameText = (System_Int32_array **)sub_B5D684(SvtNameText, v10->obj.klass->_1.element_class);
        if ( !SvtNameText )
        {
          v25 = sub_B5D6BC(0LL);
          sub_B5D668(v25, 0LL);
        }
      }
      if ( v11 >= v10->max_length )
      {
LABEL_22:
        v24 = sub_B5D6C8(SvtNameText);
        sub_B5D668(v24, 0LL);
      }
      i->klass = (BattleServantConfConponent_c *)v22;
      sub_B5D560(i, v22, v16, v17, v18, v19, v20, v21);
    }
    ++v11;
  }
  return v10;
}


UserDeckEntity_o *__fastcall PartyListViewItem__GetUserDeck(
        PartyListViewItem_o *this,
        PartyListViewItem_o *baseItem,
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
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **deckName; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t max_length; // w22
  PartyListViewItem_o *v27; // x19
  int64_t userEquipId; // x20
  DeckServant_o *v29; // x21
  __int64 v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct PartyOrganizationListViewItem_array *v37; // x23
  __int64 v38; // x24
  unsigned int v39; // w19
  __int64 v40; // x25
  PartyOrganizationListViewItem_o *v41; // x22
  __int64 v42; // x21
  int v43; // w28
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v45; // q0
  __int128 v46; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  _DWORD *v54; // x22
  __int64 v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x0
  __int64 v64; // x0
  UserDeckEntity_o *v65; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67[2]; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_42ECE79 & 1) == 0 )
  {
    sub_B5D5C4(&DeckServantData_TypeInfo, (_DWORD)baseItem, (_DWORD)method, v3);
    sub_B5D5C4(&DeckServant_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UserDeckEntity_TypeInfo, v12, v13, v14);
    byte_42ECE79 = 1;
  }
  memset(&v67[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v15 = sub_B5D694(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor((UserDeckEntity_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_30;
  *(_QWORD *)(v15 + 16) = this->fields.id;
  *(_DWORD *)(v15 + 32) = this->fields.index + 1;
  deckName = (System_Int32_array **)this->fields.deckName;
  *(_QWORD *)(v15 + 40) = deckName;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 40), deckName, v18, v19, v20, v21, v22, v23);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_30;
  max_length = memberList->max_length;
  v27 = baseItem ? baseItem : this;
  userEquipId = v27->fields.userEquipId;
  v29 = (DeckServant_o *)sub_B5D694(DeckServant_TypeInfo);
  DeckServant___ctor_16952084(v29, max_length, userEquipId, 0LL);
  *(_QWORD *)(v15 + 48) = v29;
  v30 = v15 + 48;
  v65 = (UserDeckEntity_o *)v15;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 48), (System_Int32_array **)v29, v31, v32, v33, v34, v35, v36);
  v37 = v27->fields.memberList;
  if ( !v37 )
    goto LABEL_30;
  v38 = *(_QWORD *)&v37->max_length;
  if ( (int)v38 >= 1 )
  {
    v39 = 0;
    v40 = 8LL;
    while ( 1 )
    {
      v41 = *(PartyOrganizationListViewItem_o **)((char *)&v37->obj.klass + v40 * 4);
      v42 = sub_B5D694(DeckServantData_TypeInfo);
      DeckServantData___ctor((DeckServantData_o *)v42, 0LL);
      if ( !v42 )
        break;
      v43 = v39 + 1;
      *(_DWORD *)(v42 + 16) = v39 + 1;
      if ( !v41 )
        break;
      userServantEntity = v41->fields.userServantEntity;
      if ( userServantEntity )
      {
        v46 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v45 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v67, 0LL, 0LL);
        v46 = *(_OWORD *)&v67[0].fields.currentCryptoKey;
        v45 = *(_OWORD *)&v67[0].fields.fakeValue;
      }
      *(_OWORD *)&v67[1].fields.currentCryptoKey = v46;
      *(_OWORD *)&v67[1].fields.fakeValue = v45;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v66 = v67[1];
      *(_QWORD *)(v42 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
      *(_BYTE *)(v42 + 56) = v41->fields.isFollower;
      EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(v41, 0LL);
      *(_QWORD *)(v42 + 40) = EquipList;
      sub_B5D560((BattleServantConfConponent_o *)(v42 + 40), EquipList, v48, v49, v50, v51, v52, v53);
      *(_DWORD *)(v42 + 76) = v41->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v30 )
        break;
      v54 = *(_DWORD **)(*(_QWORD *)v30 + 16LL);
      if ( !v54 )
        break;
      v55 = sub_B5D684(v42, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
      if ( !v55 )
      {
        v64 = sub_B5D6BC(0LL);
        sub_B5D668(v64, 0LL);
      }
      if ( v39 < v54[6] )
      {
        *(_QWORD *)&v54[v40] = v42;
        sub_B5D560((BattleServantConfConponent_o *)&v54[v40], (System_Int32_array **)v42, v56, v57, v58, v59, v60, v61);
        if ( v43 >= (int)v38 )
          return v65;
        v40 += 2LL;
        ++v39;
        if ( v43 < v37->max_length )
          continue;
      }
      v62 = sub_B5D6C8(v55);
      sub_B5D668(v62, 0LL);
    }
LABEL_30:
    sub_B5D69C(v16, v17);
  }
  return v65;
}


UserEventDeckEntity_o *__fastcall PartyListViewItem__GetUserEventDeck(
        PartyListViewItem_o *this,
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x20
  __int64 UserId; // x0
  __int64 v19; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int64_t userEquipId; // x21
  DeckServant_o *v22; // x0
  int32_t max_length; // w1
  System_Int32_array **v24; // x22
  __int64 v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct PartyOrganizationListViewItem_array *v32; // x8
  unsigned __int64 v33; // x27
  unsigned __int64 v34; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v36; // x22
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
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  unsigned int *v61; // x0
  __int64 v63; // x0
  __int64 v64; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66[2]; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_42ECE7A & 1) == 0 )
  {
    sub_B5D5C4(&DeckServantData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DeckServant_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UserEventDeckEntity_TypeInfo, v14, v15, v16);
    byte_42ECE7A = 1;
  }
  memset(&v66[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v17 = sub_B5D694(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v17, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v17 )
    goto LABEL_54;
  *(_QWORD *)(v17 + 16) = UserId;
  *(_DWORD *)(v17 + 24) = this->fields.id;
  *(_DWORD *)(v17 + 28) = this->fields.index + 1;
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_54;
  userEquipId = this->fields.userEquipId;
  v22 = (DeckServant_o *)sub_B5D694(DeckServant_TypeInfo);
  max_length = memberList->max_length;
  v24 = (System_Int32_array **)v22;
  DeckServant___ctor_16952084(v22, max_length, userEquipId, 0LL);
  *(_QWORD *)(v17 + 32) = v24;
  v25 = v17 + 32;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 32), v24, v26, v27, v28, v29, v30, v31);
  v32 = this->fields.memberList;
  if ( !v32 )
LABEL_54:
    sub_B5D69C(UserId, v19);
  v33 = 0LL;
  while ( 1 )
  {
    v34 = v32->max_length;
    if ( (__int64)v33 >= (int)v34 )
      return (UserEventDeckEntity_o *)v17;
    if ( v33 >= v34 )
      goto LABEL_55;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v36 = v32->m_Items[v33];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_25;
    }
    UserId = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    v37 = this->fields.questRestrictionInfo;
    if ( (UserId & 1) != 0 )
    {
      if ( !v37 )
        goto LABEL_54;
      isNpcEditablePos = v37->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v36 || !v37 )
        goto LABEL_54;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v36->fields._InitPos_k__BackingField,
                        0LL);
      v37 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v37 )
        goto LABEL_25;
    }
    UserId = QuestRestrictionInfo__IsNpcMulitipleOrOnly(v37, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v36 )
        goto LABEL_54;
      if ( v36->fields.isFixNpc
        && v36->fields.isFollower
        && !isNpcEditablePos
        && !v36->fields.isMyServantOrNpcRestriction )
      {
        ++v33;
        goto LABEL_50;
      }
    }
LABEL_25:
    v40 = sub_B5D694(DeckServantData_TypeInfo);
    DeckServantData___ctor((DeckServantData_o *)v40, 0LL);
    if ( !v40 )
      goto LABEL_54;
    *(_DWORD *)(v40 + 16) = v33 + 1;
    if ( !v36 )
      goto LABEL_54;
    userServantEntity = v36->fields.userServantEntity;
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
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v66, 0LL, 0LL);
      v43 = *(_OWORD *)&v66[0].fields.currentCryptoKey;
      v42 = *(_OWORD *)&v66[0].fields.fakeValue;
    }
    *(_OWORD *)&v66[1].fields.currentCryptoKey = v43;
    *(_OWORD *)&v66[1].fields.fakeValue = v42;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v65 = v66[1];
    *(_QWORD *)(v40 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v65, 0LL);
    *(_BYTE *)(v40 + 56) = v36->fields.isFollower;
    EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(v36, 0LL);
    *(_QWORD *)(v40 + 40) = EquipList;
    sub_B5D560((BattleServantConfConponent_o *)(v40 + 40), EquipList, v45, v46, v47, v48, v49, v50);
    InitPos_k__BackingField = v36->fields._InitPos_k__BackingField;
    v52 = *(_QWORD *)(v40 + 24);
    *(_QWORD *)(v40 + 64) = 0LL;
    *(_DWORD *)(v40 + 76) = InitPos_k__BackingField;
    if ( v52 )
    {
      v53 = 0;
LABEL_42:
      if ( (v53 & isNpcEditablePos & 1) != 0 )
      {
        *(_QWORD *)(v40 + 64) = v36->fields.npcFollowerSvtId;
        if ( v36->fields.isFixNpc )
          *(_BYTE *)(v40 + 56) = 0;
      }
      goto LABEL_45;
    }
    if ( !v36->fields.isMyServantOrNpcRestriction || !v36->fields.isFollower )
    {
      v53 = !v36->fields.isMyServantOrNpcRestriction;
      goto LABEL_42;
    }
    *(_QWORD *)(v40 + 64) = v36->fields.npcFollowerSvtId;
LABEL_45:
    if ( !*(_QWORD *)v25 )
      goto LABEL_54;
    v54 = *(unsigned int **)(*(_QWORD *)v25 + 16LL);
    if ( !v54 )
      goto LABEL_54;
    UserId = sub_B5D684(v40, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
    if ( !UserId )
    {
      v64 = sub_B5D6BC(0LL);
      sub_B5D668(v64, 0LL);
    }
    if ( v33 >= v54[6] )
    {
LABEL_55:
      v63 = sub_B5D6C8(UserId);
      sub_B5D668(v63, 0LL);
    }
    v61 = &v54[2 * v33];
    *((_QWORD *)v61 + 4) = v40;
    sub_B5D560((BattleServantConfConponent_o *)(v61 + 8), (System_Int32_array **)v40, v55, v56, v57, v58, v59, v60);
    ++v33;
LABEL_50:
    v32 = this->fields.memberList;
    if ( !v32 )
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

  if ( (byte_42ECE64 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)userServantList, (_DWORD)npcSvtIds, method);
    byte_42ECE64 = 1;
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
        sub_B5D69C(v7, userServantList);
      if ( v6 >= npcSvtIds->max_length )
      {
LABEL_18:
        v9 = sub_B5D6C8(v7);
        sub_B5D668(v9, 0LL);
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
      sub_B5D69C(this, userSvtId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        v9 = sub_B5D6C8(this);
        sub_B5D668(v9, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  il2cpp_array_size_t v5; // w21
  BalanceConfig_c *v6; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v8; // x8
  __int64 v10; // x0

  if ( (byte_42ECE72 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECE72 = 1;
  }
  v5 = 0;
  v6 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v5 >= v6->static_fields->DeckMemberMax )
      return 1;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( v5 >= memberList->max_length )
    {
      v10 = sub_B5D6C8(v6);
      sub_B5D668(v10, 0LL);
    }
    v8 = memberList->m_Items[v5];
    if ( !v8 )
LABEL_14:
      sub_B5D69C(v6, method);
    ++v5;
    if ( v8->fields.userServantEntity )
      return 0;
  }
}


bool __fastcall PartyListViewItem__IsDeckInit(PartyListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  il2cpp_array_size_t v5; // w21
  BalanceConfig_c *v6; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v8; // x8
  System_String_o *deckName; // x20
  System_String_o *DefaultDeckName; // x1
  __int64 v12; // x0

  if ( (byte_42ECE71 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECE71 = 1;
  }
  v5 = 0;
  v6 = BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)v5 >= v6->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_16;
    if ( v5 >= memberList->max_length )
    {
      v12 = sub_B5D6C8(v6);
      sub_B5D668(v12, 0LL);
    }
    v8 = memberList->m_Items[v5];
    if ( !v8 )
LABEL_16:
      sub_B5D69C(v6, method);
    ++v5;
    if ( v8->fields.userServantEntity )
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
  int v2; // w2
  __int64 v3; // x3
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v6; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v9; // x0

  if ( (byte_42ECE73 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECE73 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v6 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v6->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( i >= memberList->max_length )
    {
      v9 = sub_B5D6C8(v6);
      sub_B5D668(v9, 0LL);
    }
    v6 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v6 )
LABEL_14:
      sub_B5D69C(v6, method);
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v6, 0LL) > 0 )
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
  __int64 v3; // x3
  PartyListViewItem_o *v5; // x20
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int max_length; // w8
  unsigned int v8; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  __int64 v11; // x0

  v5 = this;
  if ( (byte_42ECE7C & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_B5D5C4(
                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    svtId,
                                    (_DWORD)method,
                                    v3);
    byte_42ECE7C = 1;
  }
  if ( svtId < 1 )
    return 0;
  memberList = v5->fields.memberList;
  if ( !memberList )
LABEL_17:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  max_length = memberList->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
      v11 = sub_B5D6C8(this);
      sub_B5D668(v11, 0LL);
    }
    this = (PartyListViewItem_o *)memberList->m_Items[v8];
    if ( !this )
      goto LABEL_17;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(EquipSvtId, 0LL);
    if ( (_DWORD)this == svtId )
      return 1;
    max_length = memberList->max_length;
    if ( (int)++v8 >= max_length )
      return 0;
  }
}


bool __fastcall PartyListViewItem__IsNeedDeckPosReset(
        PartyListViewItem_o *this,
        UserEventDeckEntity_o *deck,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  bool IsUseOldMaster; // w21
  unsigned __int64 i; // x22
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v11; // x24
  struct QuestRestrictionInfo_o *v12; // x8
  __int64 v14; // x0

  if ( (byte_42ECE63 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)deck, (_DWORD)method, v3);
    byte_42ECE63 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_31:
    sub_B5D69C(questRestrictionInfo, deck);
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
      v14 = sub_B5D6C8(questRestrictionInfo);
      sub_B5D668(v14, 0LL);
    }
    v11 = svts->m_Items[i];
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( IsUseOldMaster )
      break;
    if ( !v11 || !questRestrictionInfo )
      goto LABEL_31;
    if ( !QuestRestrictionInfo__IsEditablePos(questRestrictionInfo, v11->fields.initPos, 0LL) )
      goto LABEL_23;
LABEL_24:
    ;
  }
  if ( !questRestrictionInfo )
    goto LABEL_31;
  questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(questRestrictionInfo, 0LL);
  v12 = this->fields.questRestrictionInfo;
  if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 )
    goto LABEL_15;
  if ( !v12 )
    goto LABEL_31;
  if ( v12->fields.isNpcEditablePos )
  {
LABEL_15:
    if ( !v11 || !v12 )
      goto LABEL_31;
    if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(
           this->fields.questRestrictionInfo,
           v11->fields.initPos,
           0LL) )
    {
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  if ( !v11 )
    goto LABEL_31;
LABEL_23:
  if ( v11->fields.initPos == v11->fields.id )
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


bool __fastcall PartyListViewItem__IsSpecificMenuKind_33827064(
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
  int v2; // w2
  __int64 v3; // x3
  int32_t i; // w20
  PartyOrganizationListViewItem_o *v6; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v8; // x9
  const MethodInfo *v9; // x1
  __int64 v10; // x0

  if ( (byte_42ECE70 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECE70 = 1;
  }
  for ( i = 1; ; ++i )
  {
    v6 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
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
    v6 = memberList->m_Items[i];
    if ( !v6 )
      goto LABEL_17;
    if ( !v6->fields.isFollower )
      PartyOrganizationListViewItem__Empty(v6, 0LL);
  }
  if ( !(_DWORD)v8 )
  {
LABEL_18:
    v10 = sub_B5D6C8(v6);
    sub_B5D668(v10, 0LL);
  }
  v6 = memberList->m_Items[0];
  if ( !v6 )
LABEL_17:
    sub_B5D69C(v6, method);
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v6, 0LL);
  PartyListViewItem__CheckRestriction(this, v9);
}


void __fastcall PartyListViewItem__Modify(PartyListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  il2cpp_array_size_t i; // w21
  struct PartyOrganizationListViewItem_array *memberList; // x9
  PartyOrganizationListViewItem_o *v7; // x9
  struct PartyOrganizationListViewItem_array *v8; // x9
  BalanceConfig_c *v9; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x0

  if ( (byte_42ECE6A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECE6A = 1;
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
      v11 = sub_B5D6C8(v9);
      sub_B5D668(v11, 0LL);
    }
    v7 = memberList->m_Items[i];
    if ( !v7 )
      goto LABEL_16;
    v7->fields._NowPos_k__BackingField = i + 1;
    v8 = this->fields.memberList;
    if ( !v8 )
      goto LABEL_16;
    if ( i >= v8->max_length )
      goto LABEL_17;
    v9 = (BalanceConfig_c *)v8->m_Items[i];
    if ( !v9 )
LABEL_16:
      sub_B5D69C(v9, method);
    PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)v9, 0LL);
  }
  PartyListViewItem__CheckRestriction(this, method);
  PartyListViewItem__UpdateEventEffect(this, v10);
}


void __fastcall PartyListViewItem__Set(PartyListViewItem_o *this, PartyListViewItem_o *item, const MethodInfo *method)
{
  __int64 v3; // x3
  PartyOrganizationListViewItem_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int v28; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v30; // x26
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x21
  Il2CppClass **v38; // x0
  struct PartyOrganizationListViewItem_array *v39; // x8
  PartyOrganizationListViewItem_o *v40; // x8
  il2cpp_array_size_t v41; // w24
  struct System_String_o *deckName; // x1
  struct System_Int32_array *waveBattleEnemyClassIds; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x0
  __int64 v51; // x0

  if ( (byte_42ECE6B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42ECE6B = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_21:
    sub_B5D69C(v6, v7);
  this->fields.menuKind = item->fields.menuKind;
  this->fields.maxCost = item->fields.maxCost;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v28 = 1;
  this->fields.id = item->fields.id;
  while ( 1 )
  {
    v6 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v41 = v28 - 1;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v41 >= *(_DWORD *)(*(_QWORD *)&v6->fields.classId + 156LL) )
      break;
    memberList = item->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( v41 >= memberList->max_length )
      goto LABEL_22;
    v6 = memberList->m_Items[v41];
    if ( !v6 )
      goto LABEL_21;
    v30 = this->fields.memberList;
    v6 = PartyOrganizationListViewItem__Clone(v6, -1, 0LL);
    if ( !v30 )
      goto LABEL_21;
    v37 = (System_Int32_array **)v6;
    if ( v6 )
    {
      v6 = (PartyOrganizationListViewItem_o *)sub_B5D684(v6, v30->obj.klass->_1.element_class);
      if ( !v6 )
      {
        v51 = sub_B5D6BC(0LL);
        sub_B5D668(v51, 0LL);
      }
    }
    if ( v41 >= v30->max_length )
      goto LABEL_22;
    v38 = &v30->obj.klass + (int)v41;
    v38[4] = (Il2CppClass *)v37;
    sub_B5D560((BattleServantConfConponent_o *)(v38 + 4), v37, v31, v32, v33, v34, v35, v36);
    v39 = this->fields.memberList;
    if ( !v39 )
      goto LABEL_21;
    if ( v41 >= v39->max_length )
    {
LABEL_22:
      v50 = sub_B5D6C8(v6);
      sub_B5D668(v50, 0LL);
    }
    v40 = v39->m_Items[v41];
    if ( !v40 )
      goto LABEL_21;
    v40->fields._NowPos_k__BackingField = v28++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.deckName,
    (System_Int32_array **)deckName,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.waveBattleEnemyClassIds,
    (System_Int32_array **)waveBattleEnemyClassIds,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
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
  sub_B5D560(
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

  if ( (byte_42ECE6C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, num, userSvtId, method);
    byte_42ECE6C = 1;
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
      v15 = sub_B5D6C8(v14);
      sub_B5D668(v15, 0LL);
    }
    v9 = &memberList->obj.klass + (int)i;
    v10 = (PartyOrganizationListViewItem_o *)v9[4];
    if ( !v10 )
LABEL_16:
      sub_B5D69C(v14, *(_QWORD *)&num);
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
    || (PartyOrganizationListViewItem__Modify_29766772((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberList) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(this, *(_QWORD *)&num);
  }
  if ( v10->max_length <= num )
  {
LABEL_12:
    v13 = sub_B5D6C8(this);
    sub_B5D668(v13, 0LL);
  }
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember_33827088(
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
    sub_B5D69C(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_B5D684(member, v15->obj.klass->_1.element_class);
    if ( !this )
    {
      v21 = sub_B5D6BC(0LL);
      sub_B5D668(v21, 0LL);
    }
  }
  if ( v15->max_length <= idx )
    goto LABEL_18;
  v16 = &v15->obj.klass + idx;
  v16[4] = (Il2CppClass *)member;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 4), (System_Int32_array **)member, v9, v10, v11, v12, v13, v14);
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
    v20 = sub_B5D6C8(this);
    sub_B5D668(v20, 0LL);
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v32; // x1
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v34; // x28
  unsigned int v35; // w20
  FollowerInfo_o *v36; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x27
  struct QuestRestrictionInfo_o *v40; // x8
  int32_t v41; // w0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  QuestRestrictionInfo_o *v48; // x19
  QuestRestrictionInfo_o *v49; // x24
  __int64 v50; // x19
  bool result; // w0
  __int64 v52; // x0
  int32_t *v53; // [xsp+8h] [xbp-78h]
  __int64 value; // [xsp+10h] [xbp-70h]
  PartyListViewItem_o *v55; // [xsp+18h] [xbp-68h]
  UserServantEntity_o *v56; // [xsp+20h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42ECE67 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___,
      (_DWORD)follower,
      (_DWORD)followerClassId,
      npcFollowerInfoList);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v19,
      v20,
      v21);
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v22,
      v23,
      v24);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    byte_42ECE67 = 1;
  }
  v56 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !npcFollowerInfoList )
    goto LABEL_39;
  max_length = npcFollowerInfoList->max_length;
  if ( max_length < 1 )
    return 0;
  v53 = followerClassId;
  v34 = Master_WarQuestSelectionMaster;
  v35 = 0;
  v55 = this;
  while ( 1 )
  {
    if ( v35 >= max_length )
    {
      v52 = sub_B5D6C8(Master_WarQuestSelectionMaster);
      sub_B5D668(v52, 0LL);
    }
    v36 = npcFollowerInfoList->m_Items[v35];
    if ( !v36 )
      goto LABEL_39;
    if ( v36->fields.npcFollowerSvtId == npcFollowerSvtId )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_39;
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v36, 0, ReturnTypeByQuestId, 0LL);
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Master_WarQuestSelectionMaster, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(Master_WarQuestSelectionMaster, &entity, npcFollowerSvtId, (const MethodInfo_23FB094 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v40 = this->fields.questRestrictionInfo;
        if ( !v40 )
          goto LABEL_39;
        v41 = FollowerInfo__GetReturnTypeByQuestId(v40->fields.questId, 0LL);
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)FollowerInfo__GetNpcServantIndividuality(v36, 0, v41, 0LL);
        if ( !this->fields.questRestrictionInfo )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_34285280(this->fields.questRestrictionInfo, (System_Int32_array *)Master_WarQuestSelectionMaster, pos, 0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          break;
        goto LABEL_34;
      }
      if ( !v34 )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(v34, &v56, npcFollowerSvtId, (const MethodInfo_23FB094 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        goto LABEL_27;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v56;
      if ( !v56 )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v56, 0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v56;
        if ( !v56 )
          goto LABEL_39;
        v48 = this->fields.questRestrictionInfo;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)NpcServantFollowerEntity__GetOverwriteIndividuality((NpcServantFollowerEntity_o *)v56, 0LL);
        if ( !v48 )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_34285280(v48, (System_Int32_array *)Master_WarQuestSelectionMaster, pos, 0LL);
      }
      else
      {
LABEL_27:
        if ( !ServantLeaderInfo )
          goto LABEL_39;
        v49 = this->fields.questRestrictionInfo;
        v50 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        *(_QWORD *)&v58.fields.fakeValue = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          value = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v58.fields.fakeValue = value;
        }
        *(_QWORD *)&v58.fields.currentCryptoKey = v50;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
        if ( !v49 )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(v49, (int32_t)Master_WarQuestSelectionMaster, ServantLeaderInfo->fields.limitCount, ServantLeaderInfo->fields.dispLimitCount, pos, 0, 0LL);
        this = v55;
      }
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        break;
    }
LABEL_34:
    max_length = npcFollowerInfoList->max_length;
    if ( (int)++v35 >= max_length )
      return 0;
  }
  *follower = v36;
  sub_B5D560((BattleServantConfConponent_o *)follower, (System_Int32_array **)v36, v42, v43, v44, v45, v46, v47);
  if ( !ServantLeaderInfo )
LABEL_39:
    sub_B5D69C(Master_WarQuestSelectionMaster, v32);
  result = 1;
  *v53 = ServantLeaderInfo->fields.classId;
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
    v7 = sub_B5D6C8(this);
    sub_B5D668(v7, 0LL);
  }
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_B5D69C(this, num1);
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
        v5 = sub_B5D6C8(this);
        sub_B5D668(v5, 0LL);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ECE7D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10463/*"PARTY_ORGANIZATION_NAME_BASE"*/, v5, v6, v7);
    byte_42ECE7D = 1;
  }
  v11 = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10463/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0LL);
  v11 = this->fields.index + 1;
  v9 = (Il2CppObject *)System_Int32__ToString((int32_t)&v11, 0LL);
  return System_String__Format(v8, v9, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}