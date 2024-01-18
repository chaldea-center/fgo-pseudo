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

  if ( (byte_418B503 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationListViewItem___TypeInfo, v3);
    byte_418B503 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationListViewItem_array *)sub_B2C374(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.memberList = v5;
  sub_B2C2F8(
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
void __fastcall PartyListViewItem___ctor_31894220(
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
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x27
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v40; // x8
  int32_t DeckMainMemberMax; // w28
  struct PartyOrganizationListViewItem_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int32_t v49; // w21
  struct DeckServant_o *v50; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v53; // x8
  int32_t initPos; // w25
  int v55; // w9
  struct PartyOrganizationListViewItem_array *v56; // x19
  PartyOrganizationListViewItem_o *v57; // x0
  System_Int32_array **v58; // x24
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  Il2CppClass **v65; // x0
  UserServantEntity_o *v66; // x19
  struct PartyOrganizationListViewItem_array *v67; // x28
  UserServantEntity_array *v68; // x20
  PartyListViewItem_o *v69; // x27
  FollowerInfo_o *v70; // x22
  UserDeckEntity_o *v71; // x26
  System_Int64_array *EquipList; // x23
  PartyOrganizationListViewItem_o *v73; // x24
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  Il2CppClass **v80; // x0
  PartyOrganizationListViewItem_o *v81; // x24
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  Il2CppClass **v88; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v91; // x0
  __int64 v92; // x0
  int32_t v95; // [xsp+34h] [xbp-7Ch]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+40h] [xbp-70h]
  int32_t v98; // [xsp+5Ch] [xbp-54h]

  if ( (byte_418B504 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_B2C35C(&PartyOrganizationListViewItem___TypeInfo, v18);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v21);
    byte_418B504 = 1;
  }
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B2C2F8(
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
  PartyListViewItem__SetDeckName(this, deck->fields.name, v36);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_66;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0LL);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0LL);
  v40 = BalanceConfig_TypeInfo;
  if ( FollowerIndex <= 0 )
  {
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v40 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v40->static_fields->DeckMainMemberMax;
  }
  else
  {
    DeckMainMemberMax = FollowerIndex;
  }
  if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v40);
    v40 = BalanceConfig_TypeInfo;
  }
  v42 = (struct PartyOrganizationListViewItem_array *)sub_B2C374(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v40->static_fields->DeckMemberMax);
  this->fields.memberList = v42;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v34 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v34 )
    goto LABEL_66;
  if ( *(_QWORD *)&v34->fields.sortIndex )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v34 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( v34 )
    {
      follower = *(FollowerInfo_o **)&v34->fields.sortIndex;
      v34 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( v34 )
      {
        followerClassId = v34->fields.sortValue0;
        v34 = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( v34 )
        {
          followerDeckId = HIDWORD(v34->fields.sortValue0);
          goto LABEL_26;
        }
      }
    }
LABEL_66:
    sub_B2C434(v34, v35);
  }
LABEL_26:
  v49 = 0;
  v95 = DeckMainMemberMax;
  while ( 1 )
  {
    v34 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v49 >= *(_DWORD *)(*(_QWORD *)&v34->fields.frameType + 156LL) )
      break;
    v50 = deck->fields.deckInfo;
    if ( !v50 )
      goto LABEL_66;
    svts = v50->fields.svts;
    if ( !svts )
      goto LABEL_66;
    max_length = svts->max_length;
    if ( v49 >= max_length )
    {
      v55 = v49 + 1;
      initPos = v49 + 1;
    }
    else
    {
      if ( v49 >= (unsigned int)max_length )
        goto LABEL_67;
      v53 = svts->m_Items[v49];
      if ( !v53 )
        goto LABEL_66;
      initPos = v53->fields.initPos;
      v55 = v49 + 1;
    }
    v98 = v55;
    if ( v55 == DeckMainMemberMax )
    {
      v56 = *p_memberList;
      v57 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      v58 = (System_Int32_array **)v57;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_32183040(
          v57,
          v49,
          follower,
          followerClassId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0LL);
        if ( !v56 )
          goto LABEL_66;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_32212232(v57, v49, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v56 )
          goto LABEL_66;
      }
      if ( v58 )
      {
        v34 = (PartyOrganizationListViewItem_o *)sub_B2C41C(v58, v56->obj.klass->_1.element_class);
        if ( !v34 )
          goto LABEL_68;
      }
      if ( v49 >= v56->max_length )
        goto LABEL_67;
      v65 = &v56->obj.klass + v49;
      v65[4] = (Il2CppClass *)v58;
      sub_B2C2F8((BattleServantConfConponent_o *)(v65 + 4), v58, v59, v60, v61, v62, v63, v64);
    }
    else
    {
      if ( !UserServantList )
        goto LABEL_66;
      if ( v49 >= UserServantList->max_length )
        goto LABEL_67;
      v66 = UserServantList->m_Items[v49];
      v67 = *p_memberList;
      if ( v66 )
      {
        v68 = UserServantList;
        v69 = this;
        v70 = follower;
        v71 = deck;
        EquipList = UserDeckEntity__GetEquipList(deck, v49, 0LL);
        v73 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32205676(
          v73,
          v49,
          v66,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL);
        if ( !v67 )
          goto LABEL_66;
        if ( v73 )
        {
          v34 = (PartyOrganizationListViewItem_o *)sub_B2C41C(v73, v67->obj.klass->_1.element_class);
          if ( !v34 )
            goto LABEL_68;
        }
        if ( v49 >= v67->max_length )
          goto LABEL_67;
        deck = v71;
        v80 = &v67->obj.klass + v49;
        v80[4] = (Il2CppClass *)v73;
        sub_B2C2F8((BattleServantConfConponent_o *)(v80 + 4), (System_Int32_array **)v73, v74, v75, v76, v77, v78, v79);
        follower = v70;
        this = v69;
        UserServantList = v68;
      }
      else
      {
        v81 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32212232(v81, v49, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v67 )
          goto LABEL_66;
        if ( v81 )
        {
          v34 = (PartyOrganizationListViewItem_o *)sub_B2C41C(v81, v67->obj.klass->_1.element_class);
          if ( !v34 )
          {
LABEL_68:
            v92 = sub_B2C454(v34);
            sub_B2C400(v92, 0LL);
          }
        }
        if ( v49 >= v67->max_length )
          goto LABEL_67;
        v88 = &v67->obj.klass + v49;
        v88[4] = (Il2CppClass *)v81;
        sub_B2C2F8((BattleServantConfConponent_o *)(v88 + 4), (System_Int32_array **)v81, v82, v83, v84, v85, v86, v87);
      }
      DeckMainMemberMax = v95;
    }
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_66;
    if ( v49 >= memberList->max_length )
    {
LABEL_67:
      v91 = sub_B2C460(v34);
      sub_B2C400(v91, 0LL);
    }
    v34 = memberList->m_Items[v49];
    if ( !v34 )
      goto LABEL_66;
    cost = this->fields.cost;
    v49 = v98;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v34, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v35);
}


void __fastcall PartyListViewItem___ctor_31897120(
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
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x2
  UserEventDeckEntity_o *v49; // x20
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v51; // x3
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v53; // x0
  PartyListViewItem_o *v54; // x9
  int v55; // w27
  const MethodInfo *v56; // x2
  int32_t v57; // w23
  BalanceConfig_c *v58; // x0
  struct PartyOrganizationListViewItem_array *v59; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  int32_t v67; // w8
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
  FollowerInfo_o *v82; // x27
  int32_t v83; // w23
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v85; // x20
  int32_t v86; // w26
  PartyOrganizationListViewItem_o *v87; // x19
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  Il2CppClass **v94; // x0
  FollowerInfo_o *v95; // x23
  struct PartyOrganizationListViewItem_array *v96; // x26
  int32_t v97; // w27
  PartyOrganizationListViewItem_o *v98; // x19
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  Il2CppClass **v105; // x0
  BattleServantConfConponent_o *v106; // x0
  System_Int32_array **v107; // x1
  UserServantEntity_array *v108; // x20
  Il2CppClass **v109; // x23
  Il2CppClass *v110; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v111; // x23
  Il2CppClass *v112; // t1
  Il2CppClass *parent; // x19
  Il2CppClass *declaringType; // x27
  int32_t v115; // w19
  int32_t v116; // w27
  int32_t DispLimitCount; // w0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  UserServantEntity_o *v124; // x23
  struct PartyOrganizationListViewItem_array *v125; // x20
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v127; // x0
  System_Int32_array **v128; // x23
  Il2CppClass **v129; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v132; // x1
  __int64 v133; // x0
  __int64 v134; // x0
  bool *v135; // [xsp+20h] [xbp-C0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+30h] [xbp-B0h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-A8h]
  int v139; // [xsp+40h] [xbp-A0h]
  int v140; // [xsp+44h] [xbp-9Ch]
  PartyListViewItem_o *v141; // [xsp+48h] [xbp-98h]
  int32_t v143; // [xsp+64h] [xbp-7Ch]
  bool v145; // [xsp+74h] [xbp-6Ch]
  int32_t followerClassIda; // [xsp+84h] [xbp-5Ch] BYREF
  FollowerInfo_o *followera; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16

  if ( (byte_418B505 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, isBaseModify);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcFollowerMaster___, v18);
    sub_B2C35C(&DataManager_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B2C35C(&PartyOrganizationListViewItem___TypeInfo, v21);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v24);
    byte_418B505 = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.deckName,
    (System_Int32_array **)DefaultDeckName,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v49 = deck;
  if ( !deck )
    goto LABEL_139;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_139;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v48) )
  {
    Member = (__int64)deck->fields.deckInfo;
    if ( !Member )
      goto LABEL_139;
    DeckServant__ResetInitPos((DeckServant_o *)Member, 0LL);
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v51);
  if ( FollowerIndex <= 0 )
  {
    v53 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v53 = BalanceConfig_TypeInfo;
    }
    v49 = deck;
    FollowerIndex = v53->static_fields->DeckMainMemberMax;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_139;
  if ( *(int *)(Member + 48) < 1 )
  {
    v145 = 0;
    v141 = 0LL;
    v55 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_139;
    v54 = *(PartyListViewItem_o **)(Member + 72);
    v55 = 0;
    v145 = v54 != 0LL;
    v141 = v54;
    if ( follower && v54 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_139;
      if ( !v141 )
        goto LABEL_139;
      v55 = *(_DWORD *)(Member + 48);
      Member = (__int64)PartyListViewItem__GetMember(v141, v55 - 1, v56);
      if ( !Member )
        goto LABEL_139;
      v57 = *(_DWORD *)(Member + 332);
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_139;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v57, follower, 0LL);
      v145 = 1;
    }
  }
  v135 = isBaseModify;
  v58 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v58 = BalanceConfig_TypeInfo;
  }
  v59 = (struct PartyOrganizationListViewItem_array *)sub_B2C374(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v58->static_fields->DeckMemberMax);
  this->fields.memberList = v59;
  p_memberList = &this->fields.memberList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v59,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  this->fields.cost = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_139;
  if ( !*(_QWORD *)(Member + 24) )
  {
    v67 = followerDeckId;
    goto LABEL_49;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member
    || (follower = *(FollowerInfo_o **)(Member + 24),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (followerClassId = *(_DWORD *)(Member + 32),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_139:
    sub_B2C434(Member, v47);
  }
  v67 = *(_DWORD *)(Member + 36);
LABEL_49:
  v143 = v67;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !Member )
    goto LABEL_139;
  v140 = v55 - 1;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Member,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v69 = 0;
  v139 = FollowerIndex - 1;
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
    if ( v145 )
    {
      Member = (__int64)v141;
      if ( !v141 )
        goto LABEL_139;
      Member = (__int64)PartyListViewItem__GetMember(v141, v69, v68);
      if ( !Member )
        goto LABEL_139;
      p_initPos = (int32_t *)(Member + 332);
    }
    else
    {
      v71 = v49->fields.deckInfo;
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
    Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(questRestrictionInfo, initPos, 0LL);
    v76 = Member;
    if ( (Member & 1) != 0 )
    {
      v77 = v49->fields.deckInfo;
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
      if ( v140 != v69 )
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
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_139;
    Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, initPos, 0LL);
    if ( Member && ((v76 ^ 1) & 1) == 0 )
    {
      v82 = (FollowerInfo_o *)Member;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL) )
        v83 = 0;
      else
        v83 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v82, 0LL);
      v85 = *p_memberList;
      if ( IsNpc )
        v86 = 0;
      else
        v86 = v143;
      v87 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32183040(
        v87,
        v69,
        v82,
        v83,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v86,
        initPos,
        0LL);
      if ( !v85 )
        goto LABEL_139;
      if ( v87 )
      {
        Member = sub_B2C41C(v87, v85->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v69 >= v85->max_length )
        goto LABEL_143;
      v94 = &v85->obj.klass + (int)v69;
LABEL_124:
      v94[4] = (Il2CppClass *)v87;
      sub_B2C2F8((BattleServantConfConponent_o *)(v94 + 4), (System_Int32_array **)v87, v88, v89, v90, v91, v92, v93);
      v49 = deck;
      goto LABEL_132;
    }
    if ( v139 != v69 && !v80 )
    {
      if ( (v76 & 1) != 0 )
      {
        v108 = UserServantList;
        if ( !UserServantList )
          goto LABEL_139;
        if ( v69 >= UserServantList->max_length )
          goto LABEL_143;
        v109 = &UserServantList->obj.klass + (int)v69;
        v112 = v109[4];
        v111 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v109 + 4);
        v110 = v112;
        if ( v112 )
        {
          declaringType = v110->_1.declaringType;
          parent = v110->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v148.fields.currentCryptoKey = declaringType;
          *(_QWORD *)&v148.fields.fakeValue = parent;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v148, 0LL);
          if ( v69 >= UserServantList->max_length )
            goto LABEL_143;
          if ( !*v111 )
            goto LABEL_139;
          v115 = Member;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*v111)[6], 0LL);
          if ( v69 >= UserServantList->max_length )
            goto LABEL_143;
          v116 = Member;
          Member = (__int64)*v111;
          if ( !*v111 )
            goto LABEL_139;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
          Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                     questRestrictionInfo,
                     v115,
                     v116,
                     DispLimitCount,
                     initPos,
                     0,
                     0LL);
          if ( (Member & 1) != 0 )
          {
            if ( v69 >= UserServantList->max_length )
              goto LABEL_143;
            *v111 = 0LL;
            sub_B2C2F8((BattleServantConfConponent_o *)v111, 0LL, v118, v119, v120, v121, v122, v123);
          }
        }
      }
      else
      {
        v108 = UserServantList;
        if ( !UserServantList )
          goto LABEL_139;
      }
      if ( v69 >= v108->max_length )
        goto LABEL_143;
      v124 = v108->m_Items[v69];
      v125 = *p_memberList;
      if ( v124 )
      {
        EquipList = UserEventDeckEntity__GetEquipList(deck, v69, 0LL);
        v87 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32205676(
          v87,
          v69,
          v124,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL);
        if ( !v125 )
          goto LABEL_139;
      }
      else
      {
        v87 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32212232(v87, v69, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v125 )
          goto LABEL_139;
      }
      if ( v87 )
      {
        Member = sub_B2C41C(v87, v125->obj.klass->_1.element_class);
        if ( !Member )
        {
LABEL_144:
          v134 = sub_B2C454(Member);
          sub_B2C400(v134, 0LL);
        }
      }
      if ( v69 >= v125->max_length )
        goto LABEL_143;
      v94 = &v125->obj.klass + (int)v69;
      goto LABEL_124;
    }
    v95 = followera;
    v96 = *p_memberList;
    if ( followera )
    {
      v97 = followerClassIda;
      v98 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32183040(
        v98,
        v69,
        v95,
        v97,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v143,
        initPos,
        0LL);
      if ( !v96 )
        goto LABEL_139;
      if ( v98 )
      {
        Member = sub_B2C41C(v98, v96->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v69 >= v96->max_length )
        goto LABEL_143;
      v105 = &v96->obj.klass + (int)v69;
      v105[4] = (Il2CppClass *)v98;
      v106 = (BattleServantConfConponent_o *)(v105 + 4);
      v107 = (System_Int32_array **)v98;
    }
    else
    {
      v127 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      v128 = (System_Int32_array **)v127;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_32183040(
          v127,
          v69,
          follower,
          followerClassId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v143,
          initPos,
          0LL);
        if ( !v96 )
          goto LABEL_139;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_32212232(v127, v69, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v96 )
          goto LABEL_139;
      }
      if ( v128 )
      {
        Member = sub_B2C41C(v128, v96->obj.klass->_1.element_class);
        if ( !Member )
          goto LABEL_144;
      }
      if ( v69 >= v96->max_length )
        goto LABEL_143;
      v129 = &v96->obj.klass + (int)v69;
      v129[4] = (Il2CppClass *)v128;
      v106 = (BattleServantConfConponent_o *)(v129 + 4);
      v107 = v128;
    }
    sub_B2C2F8(v106, v107, v99, v100, v101, v102, v103, v104);
LABEL_132:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_139;
    if ( v69 >= memberList->max_length )
    {
LABEL_143:
      v133 = sub_B2C460(Member);
      sub_B2C400(v133, 0LL);
    }
    Member = (__int64)memberList->m_Items[v69];
    if ( !Member )
      goto LABEL_139;
    cost = this->fields.cost;
    ++v69;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Member, 0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v47);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v132) )
    *v135 = 1;
}


void __fastcall PartyListViewItem___ctor_31902268(
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
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x2
  struct DeckServant_o *deckInfo; // x8
  SingletonTemplate_PartyOrganizationUtility__c **v53; // x26
  PartyListViewItem_o *v54; // x27
  unsigned int v55; // w23
  const MethodInfo *v56; // x2
  int32_t v57; // w19
  int32_t v58; // w8
  BalanceConfig_c *v59; // x0
  struct PartyOrganizationListViewItem_array *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  int32_t v67; // w8
  struct QuestRestrictionInfo_o *v68; // x8
  unsigned int *v69; // x24
  FollowerInfo_array *QuestFollowerList; // x0
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
  __int64 v81; // x9
  __int64 v82; // x20
  __int64 v83; // x23
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x20
  const MethodInfo *v91; // x6
  int v92; // w27
  struct DeckServant_o *v93; // x8
  struct DeckServantData_array *v94; // x8
  __int64 v95; // x8
  _BOOL4 v96; // w20
  int64_t v97; // x4
  SingletonTemplate_PartyOrganizationUtility__c *v98; // x0
  FollowerInfo_o *v99; // x23
  SingletonTemplate_PartyOrganizationUtility__c **v100; // x24
  PartyListViewItem_o *v101; // x26
  UserEventDeckEntity_o *v102; // x21
  int32_t v103; // w27
  bool IsNpc; // w0
  unsigned int *v105; // x19
  int32_t v106; // w28
  PartyOrganizationListViewItem_o *v107; // x20
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  __int64 v114; // x19
  FollowerInfo_o *v115; // x23
  unsigned int *v116; // x19
  int32_t v117; // w27
  PartyOrganizationListViewItem_o *v118; // x20
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  unsigned __int64 v125; // x27
  QuestRestrictionInfo_o *v126; // x25
  unsigned int *v127; // x19
  PartyOrganizationListViewItem_o *v128; // x0
  int32_t v129; // w1
  QuestRestrictionInfo_o *v130; // x4
  System_Int32_array **v131; // x20
  unsigned __int64 v132; // x22
  QuestRestrictionInfo_o *v133; // x27
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  __int64 v140; // x8
  __int64 v141; // x20
  __int64 v142; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v143; // x8
  int32_t v144; // w20
  int32_t v145; // w23
  int32_t DispLimitCount; // w0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  UserServantEntity_o *v153; // x23
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v155; // x0
  System_Int32_array **v156; // x27
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v165; // x1
  __int64 v166; // x0
  __int64 v167; // x0
  UserServantMaster_o *Master_WarQuestSelectionMaster; // [xsp+20h] [xbp-100h]
  int32_t *v170; // [xsp+30h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+48h] [xbp-D8h]
  UserServantEntity_array *UserServantList; // [xsp+50h] [xbp-D0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+60h] [xbp-C0h]
  UserServantEntity_o **m_Items; // [xsp+70h] [xbp-B0h]
  __int64 v177; // [xsp+78h] [xbp-A8h]
  int32_t v178; // [xsp+84h] [xbp-9Ch]
  __int64 v179; // [xsp+88h] [xbp-98h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+90h] [xbp-90h]
  PartyListViewItem_o *v181; // [xsp+98h] [xbp-88h]
  int32_t initPos; // [xsp+ACh] [xbp-74h]
  __int64 v183; // [xsp+B0h] [xbp-70h]
  int32_t followerClassIda; // [xsp+BCh] [xbp-64h] BYREF
  FollowerInfo_o *followera; // [xsp+C0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x0.16

  v14 = questRestrictionInfo;
  if ( (byte_418B506 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, isBaseModify);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcFollowerMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v21);
    sub_B2C35C(&DataManager_TypeInfo, v22);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B2C35C(&PartyOrganizationListViewItem___TypeInfo, v24);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v25);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v26);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v27);
    byte_418B506 = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v51) )
  {
    Member = (__int64)deck->fields.deckInfo;
    if ( !Member )
      goto LABEL_170;
    DeckServant__ResetInitPos((DeckServant_o *)Member, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  v53 = &SingletonTemplate_PartyOrganizationUtility__TypeInfo;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  if ( *(int *)(Member + 48) < 1 )
  {
    v54 = 0LL;
    if ( !questRestrictionInfo )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  v54 = *(PartyListViewItem_o **)(Member + 72);
  if ( questRestrictionInfo )
LABEL_21:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_22:
  v55 = 0;
  if ( follower && v54 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    v55 = *(_DWORD *)(Member + 48);
    Member = (__int64)PartyListViewItem__GetMember(v54, v55 - 1, v56);
    if ( !Member )
      goto LABEL_170;
    v57 = *(_DWORD *)(Member + 332);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v57, follower, 0LL);
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_170;
  if ( *(_QWORD *)(Member + 24) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    follower = *(FollowerInfo_o **)(Member + 24);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    followerClassId = *(_DWORD *)(Member + 32);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    v58 = *(_DWORD *)(Member + 36);
  }
  else
  {
    v58 = followerDeckId;
  }
  v178 = v58;
  v59 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v59 = BalanceConfig_TypeInfo;
  }
  v60 = (struct PartyOrganizationListViewItem_array *)sub_B2C374(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v59->static_fields->DeckMemberMax);
  this->fields.memberList = v60;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v67 == 3 )
  {
    Member = (__int64)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_170;
    Member = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Member, 0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_170;
    v177 = Member;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0LL;
    v177 = 0LL;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v68 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo || (v69 = (unsigned int *)UserServantList, !Member) )
LABEL_170:
    sub_B2C434(Member, v50);
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Member,
                        v68->fields.questId,
                        v68->fields.questPhase,
                        0LL);
  v72 = 8LL * v55;
  v73 = 0LL;
  v74 = 0LL;
  v170 = &svtIdForceBattleList->m_Items[1];
  npcFollowerInfoList = QuestFollowerList;
  m_Items = UserServantList->m_Items;
  v179 = v72 - 8;
  v181 = v54;
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
    if ( v54 )
    {
      Member = (__int64)PartyListViewItem__GetMember(v54, v73, v71);
      if ( !Member )
        goto LABEL_170;
      v75 = (int32_t *)(Member + 332);
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
    v183 = v74;
    initPos = *v75;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v177 )
        goto LABEL_170;
      if ( (__int64)v73 >= *(int *)(v177 + 24) )
      {
        v125 = v73;
        v126 = v14;
        v127 = (unsigned int *)*p_memberList;
        v128 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        v129 = v125;
        v130 = v14;
        v131 = (System_Int32_array **)v128;
        v132 = v125;
        v133 = v126;
        PartyOrganizationListViewItem___ctor_32212232(v128, v129, 0, setupInfo, v130, 1, initPos, 0LL);
        if ( !v127 )
          goto LABEL_170;
        if ( v131 )
        {
          Member = sub_B2C41C(v131, *(_QWORD *)(*(_QWORD *)v127 + 64LL));
          if ( !Member )
          {
LABEL_172:
            v167 = sub_B2C454(Member);
            sub_B2C400(v167, 0LL);
          }
        }
        if ( v132 >= v127[6] )
          goto LABEL_171;
        *(_QWORD *)((char *)v127 + v74 + 32) = v131;
        v73 = v132;
        v14 = v133;
        sub_B2C2F8((BattleServantConfConponent_o *)((char *)v127 + v74 + 32), v131, v134, v135, v136, v137, v138, v139);
        v54 = v181;
        goto LABEL_160;
      }
      if ( svtIdForceBattleList )
      {
        if ( v179 != v74 && isFirstEnforceChange )
        {
          max_length = svtIdForceBattleList->max_length;
          if ( (__int64)v73 < (int)max_length )
          {
            if ( v73 >= max_length )
              goto LABEL_171;
            v50 = (const MethodInfo *)(unsigned int)v170[v73];
            if ( (int)v50 >= 1 )
            {
              if ( !v69 )
                goto LABEL_170;
              if ( v73 >= v69[6] )
                goto LABEL_171;
              v81 = *(__int64 *)((char *)m_Items + v74);
              if ( !v81 )
                goto LABEL_88;
              v83 = *(_QWORD *)(v81 + 80);
              v82 = *(_QWORD *)(v81 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v186.fields.currentCryptoKey = v83;
              *(_QWORD *)&v186.fields.fakeValue = v82;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v186, 0LL);
              max_length = svtIdForceBattleList->max_length;
              if ( v73 >= max_length )
                goto LABEL_171;
              v74 = v183;
              v50 = (const MethodInfo *)(unsigned int)v170[v73];
              if ( (_DWORD)Member != (_DWORD)v50 )
              {
LABEL_88:
                if ( v73 >= max_length )
                  goto LABEL_171;
                Member = (__int64)Master_WarQuestSelectionMaster;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_170;
                Member = (__int64)UserServantMaster__getSvtIdBattle(Master_WarQuestSelectionMaster, (int32_t)v50, 0LL);
                v90 = (System_Int32_array **)Member;
                if ( Member )
                {
                  Member = sub_B2C41C(Member, *(_QWORD *)(*(_QWORD *)v69 + 64LL));
                  if ( !Member )
                    goto LABEL_172;
                }
                if ( v73 >= v69[6] )
                  goto LABEL_171;
                *(UserServantEntity_o **)((char *)m_Items + v74) = (UserServantEntity_o *)v90;
                sub_B2C2F8((BattleServantConfConponent_o *)((char *)m_Items + v74), v90, v84, v85, v86, v87, v88, v89);
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
    Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(v14, v79, 0LL);
    v92 = Member;
    if ( (Member & 1) != 0 )
    {
      v93 = deck->fields.deckInfo;
      if ( !v93 )
        goto LABEL_170;
      v94 = v93->fields.svts;
      if ( !v94 )
        goto LABEL_170;
      if ( v73 >= v94->max_length )
        goto LABEL_171;
      v95 = *(__int64 *)((char *)v94->m_Items + v74);
      if ( !v95 )
        goto LABEL_170;
      v96 = 0;
      if ( v179 != v74 )
      {
        v97 = *(_QWORD *)(v95 + 48);
        if ( v97 >= 1 )
          v96 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  v97,
                  v79,
                  v91);
      }
    }
    else
    {
      v96 = 0;
    }
    v98 = *v53;
    if ( (BYTE3((*v53)->vtable._0_Equals.methodPtr) & 4) != 0 && !v98->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v98);
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_170;
    Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v79, 0LL);
    if ( Member && ((v92 ^ 1) & 1) == 0 )
    {
      v99 = (FollowerInfo_o *)Member;
      v100 = v53;
      v101 = this;
      v102 = deck;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL) )
        v103 = 0;
      else
        v103 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v99, 0LL);
      v105 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v106 = 0;
      else
        v106 = v178;
      v107 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32183040(
        v107,
        v73,
        v99,
        v103,
        setupInfo,
        v14,
        friendPointCampaignEntityList,
        0,
        v106,
        initPos,
        0LL);
      if ( !v105 )
        goto LABEL_170;
      v54 = v181;
      if ( v107 )
      {
        Member = sub_B2C41C(v107, *(_QWORD *)(*(_QWORD *)v105 + 64LL));
        if ( !Member )
          goto LABEL_172;
      }
      if ( v73 >= v105[6] )
        goto LABEL_171;
      deck = v102;
      *(_QWORD *)((char *)v105 + v183 + 32) = v107;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)v105 + v183 + 32),
        (System_Int32_array **)v107,
        v108,
        v109,
        v110,
        v111,
        v112,
        v113);
      v74 = v183;
      this = v101;
      v53 = v100;
      v69 = (unsigned int *)UserServantList;
      goto LABEL_156;
    }
    v114 = v183;
    if ( v179 != v183 && !v96 )
    {
      if ( (v92 & 1) != 0 )
      {
        if ( !v69 )
          goto LABEL_170;
        if ( v73 >= v69[6] )
          goto LABEL_171;
        v140 = *(__int64 *)((char *)m_Items + v183);
        if ( v140 )
        {
          v142 = *(_QWORD *)(v140 + 80);
          v141 = *(_QWORD *)(v140 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v187.fields.currentCryptoKey = v142;
          *(_QWORD *)&v187.fields.fakeValue = v141;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v187, 0LL);
          if ( v73 >= v69[6] )
            goto LABEL_171;
          v143 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)m_Items + v183);
          if ( !v143 )
            goto LABEL_170;
          v144 = Member;
          Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v143[6], 0LL);
          if ( v73 >= v69[6] )
            goto LABEL_171;
          v145 = Member;
          Member = *(__int64 *)((char *)m_Items + v183);
          if ( !Member )
            goto LABEL_170;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
          Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                     v14,
                     v144,
                     v145,
                     DispLimitCount,
                     initPos,
                     0,
                     0LL);
          v114 = v183;
          if ( (Member & 1) != 0 )
          {
            if ( v73 >= v69[6] )
              goto LABEL_171;
            *(UserServantEntity_o **)((char *)m_Items + v183) = 0LL;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)((char *)m_Items + v183),
              0LL,
              v147,
              v148,
              v149,
              v150,
              v151,
              v152);
          }
        }
      }
      else if ( !v69 )
      {
        goto LABEL_170;
      }
      if ( v73 >= v69[6] )
        goto LABEL_171;
      v153 = *(UserServantEntity_o **)((char *)m_Items + v114);
      v116 = (unsigned int *)*p_memberList;
      if ( !v153 )
      {
        v118 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32212232(v118, v73, 0, setupInfo, v14, 1, initPos, 0LL);
        v54 = v181;
        if ( !v116 )
          goto LABEL_170;
        goto LABEL_152;
      }
      EquipList = UserEventDeckEntity__GetEquipList(deck, v73, 0LL);
      v118 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32205676(v118, v73, v153, EquipList, setupInfo, v14, 0LL, initPos, 0LL);
      if ( !v116 )
        goto LABEL_170;
    }
    else
    {
      v115 = followera;
      v116 = (unsigned int *)*p_memberList;
      if ( !followera )
      {
        v155 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        v156 = (System_Int32_array **)v155;
        if ( follower )
          PartyOrganizationListViewItem___ctor_32183040(
            v155,
            v73,
            follower,
            followerClassId,
            setupInfo,
            v14,
            friendPointCampaignEntityList,
            0,
            v178,
            initPos,
            0LL);
        else
          PartyOrganizationListViewItem___ctor_32212232(v155, v73, 1, setupInfo, v14, 1, initPos, 0LL);
        v74 = v183;
        if ( !v116 )
          goto LABEL_170;
        if ( v156 )
        {
          Member = sub_B2C41C(v156, *(_QWORD *)(*(_QWORD *)v116 + 64LL));
          if ( !Member )
            goto LABEL_172;
        }
        if ( v73 >= v116[6] )
          goto LABEL_171;
        *(_QWORD *)((char *)v116 + v183 + 32) = v156;
        sub_B2C2F8((BattleServantConfConponent_o *)((char *)v116 + v183 + 32), v156, v157, v158, v159, v160, v161, v162);
        v54 = v181;
        goto LABEL_156;
      }
      v117 = followerClassIda;
      v118 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32183040(v118, v73, v115, v117, setupInfo, v14, 0LL, 0, v178, initPos, 0LL);
      if ( !v116 )
        goto LABEL_170;
    }
    v54 = v181;
LABEL_152:
    v74 = v183;
    if ( v118 )
    {
      Member = sub_B2C41C(v118, *(_QWORD *)(*(_QWORD *)v116 + 64LL));
      if ( !Member )
        goto LABEL_172;
    }
    if ( v73 >= v116[6] )
      goto LABEL_171;
    *(_QWORD *)((char *)v116 + v183 + 32) = v118;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)((char *)v116 + v183 + 32),
      (System_Int32_array **)v118,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124);
LABEL_156:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_170;
    if ( v73 >= memberList->max_length )
    {
LABEL_171:
      v166 = sub_B2C460(Member);
      sub_B2C400(v166, 0LL);
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
  PartyListViewItem__CheckRestriction(this, v50);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v165) )
    *isBaseModify = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_31905400(
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
  int32_t klass; // w23
  struct PartyOrganizationListViewItem_array *v56; // x26
  PartyOrganizationListViewItem_o *v57; // x0
  System_Int32_array **v58; // x27
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v67; // x1
  int32_t i; // w23
  struct PartyOrganizationListViewItem_array *v69; // x26
  PartyOrganizationListViewItem_o *v70; // x24
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  Il2CppClass **v77; // x0
  struct PartyOrganizationListViewItem_array *v78; // x8
  int32_t v79; // w24
  BalanceConfig_c *v80; // x0
  __int64 v81; // x0
  __int64 v82; // x0

  if ( (byte_418B507 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_B2C35C(&PartyOrganizationListViewItem___TypeInfo, v20);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v22);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v23);
    sub_B2C35C(&StringLiteral_1/*""*/, v24);
    byte_418B507 = 1;
  }
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.deckName, v37, v38, v39, v40, v41, v42, v43);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v44 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  v45 = (struct PartyOrganizationListViewItem_array *)sub_B2C374(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v44->static_fields->DeckMemberMax);
  this->fields.memberList = v45;
  p_memberList = &this->fields.memberList;
  sub_B2C2F8(
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
  v53 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v53 )
    goto LABEL_41;
  if ( v53->fields.cQuestReleaseListP )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v53 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v53 )
      goto LABEL_41;
    follower = (FollowerInfo_o *)v53->fields.cQuestReleaseListP;
    v53 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v53 )
      goto LABEL_41;
    klass = (int32_t)v53[1].klass;
    v53 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v53 )
      goto LABEL_41;
    followerClassId = klass;
    followerDeckId = HIDWORD(v53[1].klass);
  }
  v56 = *p_memberList;
  v57 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
  v58 = (System_Int32_array **)v57;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_32183040(
      v57,
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
    if ( !v56 )
      goto LABEL_41;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_32212232(v57, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v56 )
      goto LABEL_41;
  }
  if ( v58 )
  {
    v53 = (clsQuestCheck_o *)sub_B2C41C(v58, v56->obj.klass->_1.element_class);
    if ( !v53 )
    {
LABEL_43:
      v82 = sub_B2C454(v53);
      sub_B2C400(v82, 0LL);
    }
  }
  if ( !v56->max_length )
    goto LABEL_42;
  v56->m_Items[0] = (PartyOrganizationListViewItem_o *)v58;
  sub_B2C2F8((BattleServantConfConponent_o *)v56->m_Items, v58, v59, v60, v61, v62, v63, v64);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_41;
  if ( !memberList->max_length )
  {
LABEL_42:
    v81 = sub_B2C460(v53);
    sub_B2C400(v81, 0LL);
  }
  v53 = (clsQuestCheck_o *)memberList->m_Items[0];
  if ( !v53 )
LABEL_41:
    sub_B2C434(v53, v54);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v53, 0LL) + cost;
  for ( i = 1; ; ++i )
  {
    v80 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v80 = BalanceConfig_TypeInfo;
    }
    if ( i >= v80->static_fields->DeckMemberMax )
      break;
    v69 = *p_memberList;
    v70 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32212232(v70, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v69 )
      goto LABEL_41;
    if ( v70 )
    {
      v53 = (clsQuestCheck_o *)sub_B2C41C(v70, v69->obj.klass->_1.element_class);
      if ( !v53 )
        goto LABEL_43;
    }
    if ( i >= v69->max_length )
      goto LABEL_42;
    v77 = &v69->obj.klass + i;
    v77[4] = (Il2CppClass *)v70;
    sub_B2C2F8((BattleServantConfConponent_o *)(v77 + 4), (System_Int32_array **)v70, v71, v72, v73, v74, v75, v76);
    v78 = this->fields.memberList;
    if ( !v78 )
      goto LABEL_41;
    if ( i >= v78->max_length )
      goto LABEL_42;
    v53 = (clsQuestCheck_o *)v78->m_Items[i];
    if ( !v53 )
      goto LABEL_41;
    v79 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v53, 0LL) + v79;
  }
  PartyListViewItem__CheckRestriction(this, v67);
}


void __fastcall PartyListViewItem___ctor_31906376(
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
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w25
  const MethodInfo *v44; // x3
  PartyListViewItem_o *v45; // x9
  int v46; // w28
  const MethodInfo *v47; // x2
  int32_t v48; // w23
  int32_t FollowerIndex; // w26
  BalanceConfig_c *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x9
  __int64 v58; // x27
  __int64 v59; // x21
  unsigned __int64 v60; // x8
  __int64 v61; // x23
  signed __int64 v62; // x24
  BalanceConfig_c *v63; // x0
  struct PartyOrganizationListViewItem_array *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct QuestRestrictionInfo_o *v71; // x8
  UserEventDeckEntity_o *v72; // x28
  __int64 v73; // x19
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
  FollowerInfo_o *v87; // x24
  int32_t v88; // w25
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v90; // x21
  int32_t v91; // w28
  PartyOrganizationListViewItem_o *v92; // x23
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  unsigned int max_length; // w8
  FollowerInfo_o *v100; // x24
  int32_t v101; // w25
  __int64 v102; // x21
  __int64 v103; // x23
  __int64 v104; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v105; // x23
  __int64 v106; // t1
  __int64 v107; // x24
  __int64 v108; // x25
  int32_t v109; // w24
  int32_t v110; // w25
  int32_t DispLimitCount; // w0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  UserServantEntity_o *v118; // x24
  struct PartyOrganizationListViewItem_array *v119; // x28
  System_Int64_array *EquipList; // x25
  PartyOrganizationListViewItem_o *v121; // x23
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  Il2CppClass **v128; // x0
  PartyOrganizationListViewItem_o *v129; // x0
  Il2CppClass **v130; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v133; // x1
  __int64 v134; // x0
  __int64 v135; // x0
  FollowerInfo_array *npcFollowerInfoList; // [xsp+20h] [xbp-C0h]
  int v139; // [xsp+30h] [xbp-B0h]
  int v140; // [xsp+38h] [xbp-A8h]
  int v141; // [xsp+38h] [xbp-A8h]
  PartyListViewItem_o *v142; // [xsp+40h] [xbp-A0h]
  int32_t v143; // [xsp+4Ch] [xbp-94h]
  int32_t v144; // [xsp+5Ch] [xbp-84h]
  UserEventDeckEntity_o *v145; // [xsp+60h] [xbp-80h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+68h] [xbp-78h]
  bool v147; // [xsp+74h] [xbp-6Ch]
  int32_t v148; // [xsp+84h] [xbp-5Ch] BYREF
  FollowerInfo_o *followera; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16

  if ( (byte_418B508 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, isBaseModify);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_B2C35C(&DataManager_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&PartyOrganizationListViewItem___TypeInfo, v22);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v25);
    byte_418B508 = 1;
  }
  followera = 0LL;
  v148 = 0;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v41);
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  if ( *(int *)(IsNeedDeckPosReset + 48) < 1 )
  {
    v147 = 0;
    v142 = 0LL;
    v46 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v45 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 72);
    v46 = 0;
    v147 = v45 != 0LL;
    v142 = v45;
    if ( follower && v45 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      if ( !v142 )
        goto LABEL_149;
      v46 = *(_DWORD *)(IsNeedDeckPosReset + 48);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v142, v46 - 1, v47);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      v48 = *(_DWORD *)(IsNeedDeckPosReset + 332);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)IsNeedDeckPosReset, v48, follower, 0LL);
      v147 = 1;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v44);
  if ( FollowerIndex > 0 || questRestrictionInfo->fields.isNotTransitionSupportList )
  {
    if ( FollowerIndex > servantNumMax )
    {
LABEL_32:
      *isBaseModify = 1;
      v50 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v50 = BalanceConfig_TypeInfo;
      }
      FollowerIndex = servantNumMax;
      if ( servantNumMax > v50->static_fields->DeckMainMemberMax )
      {
        if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          FollowerIndex = v50->static_fields->DeckMainMemberMax;
          if ( !v50->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v50);
            FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
          }
        }
        else
        {
          FollowerIndex = v50->static_fields->DeckMainMemberMax;
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    follower = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v143 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    v144 = *(_DWORD *)(IsNeedDeckPosReset + 36);
  }
  else
  {
    v144 = followerDeckId;
    v143 = followerClassId;
  }
  v140 = v46;
  v145 = deck;
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0LL);
  if ( !IsNeedDeckPosReset )
    goto LABEL_149;
  v57 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v58 = IsNeedDeckPosReset;
  if ( (int)v57 >= 1 )
  {
    v59 = 0LL;
    v60 = 0LL;
    v61 = IsNeedDeckPosReset + 32;
    do
    {
      if ( v60 >= (unsigned int)v57 )
      {
LABEL_153:
        v134 = sub_B2C460(IsNeedDeckPosReset);
        sub_B2C400(v134, 0LL);
      }
      v62 = v60 + 1;
      if ( servantNumMax < (int)v60 + 1 && *(_QWORD *)(v61 + 8 * v60) )
      {
        *isBaseModify = 1;
        if ( v60 >= *(unsigned int *)(v58 + 24) )
          goto LABEL_153;
        *(_QWORD *)(v61 + 8 * v60) = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)(v61 + v59), 0LL, v51, v52, v53, v54, v55, v56);
      }
      LODWORD(v57) = *(_DWORD *)(v58 + 24);
      v59 += 8LL;
      v60 = v62;
    }
    while ( v62 < (int)v57 );
  }
  v63 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v63 = BalanceConfig_TypeInfo;
  }
  v64 = (struct PartyOrganizationListViewItem_array *)sub_B2C374(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v63->static_fields->DeckMemberMax);
  this->fields.memberList = v64;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v71 = *p_questRestrictionInfo;
  v72 = v145;
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_149:
    sub_B2C434(IsNeedDeckPosReset, v40);
  v73 = 0LL;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          v71->fields.questId,
                          v71->fields.questPhase,
                          0LL);
  v141 = v140 - 1;
  v139 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (int)v73 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 156LL) )
      break;
    if ( v147 )
    {
      IsNeedDeckPosReset = (__int64)v142;
      if ( !v142 )
        goto LABEL_149;
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v142, v73, v74);
      if ( !IsNeedDeckPosReset )
        goto LABEL_149;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 332);
    }
    else
    {
      v76 = v72->fields.deckInfo;
      if ( !v76 )
        goto LABEL_149;
      svts = v76->fields.svts;
      if ( !svts )
        goto LABEL_149;
      if ( (unsigned int)v73 >= svts->max_length )
        goto LABEL_153;
      v78 = svts->m_Items[(int)v73];
      if ( !v78 )
        goto LABEL_149;
      p_initPos = &v78->fields.initPos;
    }
    initPos = *p_initPos;
    followera = 0LL;
    v148 = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(questRestrictionInfo, initPos, 0LL);
    v81 = IsNeedDeckPosReset;
    v82 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v83 = v72->fields.deckInfo;
      if ( !v83 )
        goto LABEL_149;
      v84 = v83->fields.svts;
      if ( !v84 )
        goto LABEL_149;
      if ( (unsigned int)v73 >= v84->max_length )
        goto LABEL_153;
      v85 = v84->m_Items[(int)v73];
      if ( !v85 )
        goto LABEL_149;
      v82 = 0;
      if ( v141 != (_DWORD)v73 )
      {
        npcFollowerSvtId = v85->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v82 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &v148,
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
    IsNeedDeckPosReset = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    IsNeedDeckPosReset = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                                    (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                                    initPos,
                                    0LL);
    if ( IsNeedDeckPosReset && ((v81 ^ 1) & 1) == 0 )
    {
      v87 = (FollowerInfo_o *)IsNeedDeckPosReset;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsNeedDeckPosReset, 0LL) )
        v88 = 0;
      else
        v88 = v143;
      IsNpc = FollowerInfo__get_IsNpc(v87, 0LL);
      v90 = *p_memberList;
      if ( IsNpc )
        v91 = 0;
      else
        v91 = v144;
      v92 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32183040(
        v92,
        v73,
        v87,
        v88,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v91,
        initPos,
        0LL);
      if ( !v90 )
        goto LABEL_149;
      if ( v92 )
      {
        IsNeedDeckPosReset = sub_B2C41C(v92, v90->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_154;
      }
      max_length = v90->max_length;
      v72 = v145;
      goto LABEL_140;
    }
    if ( v139 == (_DWORD)v73 || v82 )
    {
      v100 = followera;
      v90 = *p_memberList;
      if ( followera )
      {
        v101 = v148;
        v92 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32183040(
          v92,
          v73,
          v100,
          v101,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v144,
          initPos,
          0LL);
LABEL_136:
        if ( !v90 )
          goto LABEL_149;
      }
      else
      {
        v129 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        v92 = v129;
        if ( follower )
        {
          PartyOrganizationListViewItem___ctor_32183040(
            v129,
            v73,
            follower,
            v143,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v144,
            initPos,
            0LL);
          goto LABEL_136;
        }
        PartyOrganizationListViewItem___ctor_32212232(v129, v73, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v90 )
          goto LABEL_149;
      }
      if ( v92 )
      {
        IsNeedDeckPosReset = sub_B2C41C(v92, v90->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_154;
      }
      max_length = v90->max_length;
LABEL_140:
      if ( (unsigned int)v73 >= max_length )
        goto LABEL_153;
      v130 = &v90->obj.klass + (int)v73;
      v130[4] = (Il2CppClass *)v92;
      sub_B2C2F8((BattleServantConfConponent_o *)(v130 + 4), (System_Int32_array **)v92, v93, v94, v95, v96, v97, v98);
      goto LABEL_142;
    }
    v102 = v73;
    if ( (v81 & 1) != 0 )
    {
      if ( (unsigned int)v73 >= *(_DWORD *)(v58 + 24) )
        goto LABEL_153;
      v103 = v58 + 8LL * (int)v73;
      v106 = *(_QWORD *)(v103 + 32);
      v105 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v103 + 32);
      v104 = v106;
      v102 = (int)v73;
      if ( v106 )
      {
        v108 = *(_QWORD *)(v104 + 80);
        v107 = *(_QWORD *)(v104 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v150.fields.currentCryptoKey = v108;
        *(_QWORD *)&v150.fields.fakeValue = v107;
        IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v150, 0LL);
        if ( (unsigned int)v73 >= *(_DWORD *)(v58 + 24) )
          goto LABEL_153;
        if ( !*v105 )
          goto LABEL_149;
        v109 = IsNeedDeckPosReset;
        IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*v105)[6], 0LL);
        if ( (unsigned int)v73 >= *(_DWORD *)(v58 + 24) )
          goto LABEL_153;
        v110 = IsNeedDeckPosReset;
        IsNeedDeckPosReset = (__int64)*v105;
        if ( !*v105 )
          goto LABEL_149;
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0LL);
        IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                               questRestrictionInfo,
                               v109,
                               v110,
                               DispLimitCount,
                               initPos,
                               0,
                               0LL);
        if ( (IsNeedDeckPosReset & 1) != 0 )
        {
          if ( (unsigned int)v73 >= *(_DWORD *)(v58 + 24) )
            goto LABEL_153;
          *v105 = 0LL;
          sub_B2C2F8((BattleServantConfConponent_o *)v105, 0LL, v112, v113, v114, v115, v116, v117);
        }
      }
    }
    if ( (unsigned int)v73 >= *(_DWORD *)(v58 + 24) )
      goto LABEL_153;
    v118 = *(UserServantEntity_o **)(v58 + 8 * v102 + 32);
    v119 = *p_memberList;
    if ( v118 )
    {
      EquipList = UserEventDeckEntity__GetEquipList(v145, v73, 0LL);
      v121 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32205676(
        v121,
        v73,
        v118,
        EquipList,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        0LL);
      if ( !v119 )
        goto LABEL_149;
    }
    else
    {
      v121 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32212232(v121, v73, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v119 )
        goto LABEL_149;
    }
    if ( v121 )
    {
      IsNeedDeckPosReset = sub_B2C41C(v121, v119->obj.klass->_1.element_class);
      if ( !IsNeedDeckPosReset )
      {
LABEL_154:
        v135 = sub_B2C454(IsNeedDeckPosReset);
        sub_B2C400(v135, 0LL);
      }
    }
    if ( (unsigned int)v73 >= v119->max_length )
      goto LABEL_153;
    v128 = &v119->obj.klass + v102;
    v128[4] = (Il2CppClass *)v121;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v128 + 4),
      (System_Int32_array **)v121,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127);
    v72 = v145;
LABEL_142:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_149;
    if ( (unsigned int)v73 >= memberList->max_length )
      goto LABEL_153;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[(int)v73];
    if ( !IsNeedDeckPosReset )
      goto LABEL_149;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0LL)
                      + cost;
    ++v73;
  }
  PartyListViewItem__CheckRestriction(this, v40);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v133) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_31909060(
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
  FollowerInfo_o *v69; // x1
  const MethodInfo *v70; // x2
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x28
  PartyListViewItem_o *v73; // x9
  const MethodInfo *v74; // x2
  int32_t v75; // w21
  FollowerInfo_array *QuestFollowerList; // x19
  const MethodInfo *v77; // x3
  int max_length; // w8
  FollowerInfo_array *v79; // x9
  unsigned int v80; // w19
  int32_t size; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v83; // w9
  unsigned int v84; // w10
  QuestRestrictionInfo_SlotInfo_o *v85; // x11
  struct DeckServant_o *v86; // x8
  int v87; // w26
  int v88; // w27
  __int64 v89; // x28
  struct DeckServantData_array *svts; // x8
  unsigned int v91; // w20
  PartyListViewItem___c__DisplayClass19_0_o *v92; // x19
  struct DeckServant_o *v93; // x8
  struct DeckServantData_array *v94; // x8
  __int64 v95; // x8
  __int64 v96; // x21
  struct DeckServant_o *v97; // x8
  struct DeckServantData_array *v98; // x8
  __int64 v99; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v100; // x21
  BalanceConfig_c *v101; // x0
  Il2CppClass *monitor; // x20
  __int64 klass_low; // x8
  Il2CppClass **v104; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v106; // x1
  _BOOL8 v107; // x0
  __int64 v108; // x1
  const MethodInfo *v109; // x2
  BalanceConfig_c *v110; // x0
  const MethodInfo *v111; // x2
  const MethodInfo *v112; // x3
  int32_t i; // w19
  struct DeckServant_o *v114; // x8
  struct DeckServantData_array *v115; // x8
  DeckServantData_o *v116; // x8
  int32_t UserServantDeployIndex; // w0
  unsigned int v118; // w21
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x22
  Il2CppClass **v126; // x0
  bool v127; // w20
  BalanceConfig_c *v128; // x0
  struct PartyOrganizationListViewItem_array *v129; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  unsigned __int64 v136; // x28
  bool *p_isNpcEditablePos; // x21
  __int64 j; // x22
  unsigned int *v139; // x20
  PartyOrganizationListViewItem_o *v140; // x24
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  BalanceConfig_c *v147; // x0
  PartyListViewItem___c__DisplayClass19_1_o *v148; // x24
  const MethodInfo *v149; // x2
  int32_t *v150; // x8
  struct DeckServant_o *v151; // x8
  struct DeckServantData_array *v152; // x8
  __int64 v153; // x8
  int32_t v154; // w19
  const MethodInfo *v155; // x6
  bool v156; // w8
  int64_t v157; // x4
  bool *v158; // x25
  bool v159; // w21
  bool v160; // w20
  FollowerInfo_o *v161; // x27
  bool IsNpc; // w0
  int32_t v163; // w8
  bool v164; // w0
  unsigned int *v165; // x20
  int32_t v166; // w21
  PartyOrganizationListViewItem_o *v167; // x24
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  unsigned __int64 v174; // x25
  FollowerInfo_o *v175; // x27
  bool *v176; // x20
  unsigned int *v177; // x21
  int32_t v178; // w25
  PartyOrganizationListViewItem_o *v179; // x24
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  PartyOrganizationListViewItem_o *v186; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v187; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v188; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v189; // x27
  FollowerInfo_o *v190; // x24
  unsigned int v191; // w21
  unsigned int *v192; // x26
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v194; // x8
  int32_t classId; // w20
  PartyOrganizationListViewItem_o *v196; // x27
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v203; // x21
  __int64 v204; // x20
  FollowerInfo_o *v205; // x24
  unsigned int *v206; // x21
  PartyOrganizationListViewItem_o *v207; // x24
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  int v216; // w8
  PartyOrganizationListViewItem_o *v217; // x24
  System_String_array **v218; // x2
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  UserServantEntity_array *v224; // x20
  __int64 v225; // x8
  __int64 v226; // x24
  __int64 v227; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v228; // x8
  int32_t v229; // w27
  int32_t v230; // w24
  int32_t DispLimitCount; // w0
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  unsigned int *v238; // x21
  UserServantEntity_o *v239; // x24
  unsigned int *v240; // x20
  PartyOrganizationListViewItem_o *v241; // x27
  System_String_array **v242; // x2
  System_String_array **v243; // x3
  System_Boolean_array **v244; // x4
  System_Int32_array **v245; // x5
  System_Int32_array *v246; // x6
  System_Int32_array *v247; // x7
  PartyOrganizationListViewItem_o *v248; // x24
  System_String_array **v249; // x2
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  struct ServantLeaderInfo_array *v255; // x8
  ServantLeaderInfo_o *v256; // x8
  int32_t v257; // w20
  PartyOrganizationListViewItem_o *v258; // x27
  System_String_array **v259; // x2
  System_String_array **v260; // x3
  System_Boolean_array **v261; // x4
  System_Int32_array **v262; // x5
  System_Int32_array *v263; // x6
  System_Int32_array *v264; // x7
  __int64 v265; // x21
  int v266; // w26
  unsigned __int64 v267; // x28
  UserServantEntity_o **m_Items; // x27
  PartyListViewItem___c__DisplayClass19_2_o *v269; // x19
  signed __int64 v270; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v271; // x22
  System_String_array **v272; // x2
  System_String_array **v273; // x3
  System_Boolean_array **v274; // x4
  System_Int32_array **v275; // x5
  System_Int32_array *v276; // x6
  System_Int32_array *v277; // x7
  unsigned __int64 v278; // x8
  unsigned __int64 v279; // x20
  signed __int64 v280; // x21
  const MethodInfo *v281; // x6
  int v282; // w27
  struct DeckServant_o *v283; // x8
  struct DeckServantData_array *v284; // x8
  __int64 v285; // x8
  int64_t v286; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v288; // x22
  bool *v289; // x25
  int32_t v290; // w28
  bool v291; // w0
  unsigned int *v292; // x20
  int32_t v293; // w23
  PartyOrganizationListViewItem_o *v294; // x27
  System_String_array **v295; // x2
  System_String_array **v296; // x3
  System_Boolean_array **v297; // x4
  System_Int32_array **v298; // x5
  System_Int32_array *v299; // x6
  System_Int32_array *v300; // x7
  struct PartyOrganizationListViewItem_array *v301; // x8
  struct DeckServant_o *v302; // x9
  struct DeckServantData_array *v303; // x9
  __int64 v304; // x9
  __int64 v305; // x8
  FollowerInfo_o *v306; // x22
  unsigned int *v307; // x28
  int32_t v308; // w28
  unsigned int *v309; // x19
  PartyOrganizationListViewItem_o *v310; // x27
  __int64 IsRestrictionServantIndividuality; // x0
  System_String_array **v312; // x2
  System_String_array **v313; // x3
  System_Boolean_array **v314; // x4
  System_Int32_array **v315; // x5
  System_Int32_array *v316; // x6
  System_Int32_array *v317; // x7
  BattleServantConfConponent_o *v318; // x0
  PartyOrganizationListViewItem_o *v319; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v320; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v321; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v322; // x22
  il2cpp_array_size_t *v323; // x20
  __int64 v324; // x8
  __int64 v325; // x22
  __int64 v326; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v327; // x8
  int32_t v328; // w22
  int32_t v329; // w27
  int32_t v330; // w0
  System_String_array **v331; // x2
  System_String_array **v332; // x3
  System_Boolean_array **v333; // x4
  System_Int32_array **v334; // x5
  System_Int32_array *v335; // x6
  System_Int32_array *v336; // x7
  FollowerInfo_o *v337; // x27
  struct PartyOrganizationListViewItem_array *v338; // x8
  struct DeckServant_o *v339; // x9
  struct DeckServantData_array *v340; // x9
  __int64 v341; // x9
  __int64 v342; // x8
  int32_t v343; // w8
  unsigned int v344; // w20
  unsigned int *v345; // x22
  struct ServantLeaderInfo_array *v346; // x8
  ServantLeaderInfo_o *v347; // x8
  PartyOrganizationListViewItem_o *v348; // x28
  System_String_array **v349; // x2
  System_String_array **v350; // x3
  System_Boolean_array **v351; // x4
  System_Int32_array **v352; // x5
  System_Int32_array *v353; // x6
  System_Int32_array *v354; // x7
  UserServantEntity_o *v355; // x27
  unsigned int *v356; // x20
  System_Int64_array *EquipList; // x28
  PartyOrganizationListViewItem_o *v358; // x22
  System_String_array **v359; // x2
  System_String_array **v360; // x3
  System_Boolean_array **v361; // x4
  System_Int32_array **v362; // x5
  System_Int32_array *v363; // x6
  System_Int32_array *v364; // x7
  unsigned int *v365; // x28
  PartyOrganizationListViewItem_o *v366; // x22
  System_String_array **v367; // x2
  System_String_array **v368; // x3
  System_Boolean_array **v369; // x4
  System_Int32_array **v370; // x5
  System_Int32_array *v371; // x6
  System_Int32_array *v372; // x7
  struct PartyOrganizationListViewItem_array *v373; // x8
  int32_t v374; // w19
  __int64 v375; // x26
  unsigned __int64 k; // x24
  unsigned int *v377; // x20
  PartyOrganizationListViewItem_o *v378; // x27
  System_String_array **v379; // x2
  System_String_array **v380; // x3
  System_Boolean_array **v381; // x4
  System_Int32_array **v382; // x5
  System_Int32_array *v383; // x6
  System_Int32_array *v384; // x7
  BalanceConfig_c *v385; // x0
  PartyListViewItem___c__DisplayClass19_3_o *v386; // x28
  const MethodInfo *v387; // x2
  int32_t *v388; // x8
  struct DeckServant_o *v389; // x8
  struct DeckServantData_array *v390; // x8
  __int64 v391; // x8
  int32_t v392; // w19
  const MethodInfo *v393; // x1
  __int64 v394; // x0
  __int64 v395; // x0
  __int64 v396; // x0
  __int64 v397; // x0
  __int64 v398; // x0
  __int64 v399; // x0
  int32_t initPos; // [xsp+8h] [xbp-168h]
  bool *v401; // [xsp+18h] [xbp-158h]
  int32_t v402; // [xsp+20h] [xbp-150h]
  int v403; // [xsp+2Ch] [xbp-144h]
  _BOOL4 v404; // [xsp+2Ch] [xbp-144h]
  int32_t v405; // [xsp+3Ch] [xbp-134h]
  int v406; // [xsp+40h] [xbp-130h]
  int32_t v407; // [xsp+44h] [xbp-12Ch]
  int v408; // [xsp+48h] [xbp-128h]
  bool *v409; // [xsp+48h] [xbp-128h]
  int v410; // [xsp+48h] [xbp-128h]
  int32_t FollowerIndex; // [xsp+54h] [xbp-11Ch]
  PartyListViewItem_o *v412; // [xsp+58h] [xbp-118h]
  System_Int64_array *equipIdLista; // [xsp+60h] [xbp-110h]
  int equipIdList; // [xsp+60h] [xbp-110h]
  FollowerInfo_o *followerInfo; // [xsp+68h] [xbp-108h]
  UserServantEntity_array *userServantList; // [xsp+70h] [xbp-100h]
  QuestRestrictionInfo_o *questRestrictionInfoa; // [xsp+78h] [xbp-F8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v418; // [xsp+80h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+88h] [xbp-E8h]
  System_Int64_array *v420; // [xsp+90h] [xbp-E0h]
  System_Int64_array *v421; // [xsp+90h] [xbp-E0h]
  il2cpp_array_size_t *p_max_length; // [xsp+90h] [xbp-E0h]
  PartyListViewItem_o *v423; // [xsp+98h] [xbp-D8h]
  int32_t DeckMemberMax; // [xsp+A8h] [xbp-C8h]
  bool v426; // [xsp+A8h] [xbp-C8h]
  int32_t v427; // [xsp+A8h] [xbp-C8h]
  bool v428; // [xsp+B4h] [xbp-BCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+B8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v431; // [xsp+C8h] [xbp-A8h] BYREF
  int32_t v432; // [xsp+E4h] [xbp-8Ch] BYREF
  FollowerInfo_o *v433; // [xsp+E8h] [xbp-88h] BYREF
  int32_t v434; // [xsp+F4h] [xbp-7Ch] BYREF
  FollowerInfo_o *v435; // [xsp+F8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v436; // [xsp+100h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v437; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v438; // 0:x0.16

  v18 = isBaseModify;
  if ( (byte_418B509 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, isBaseModify);
    sub_B2C35C(&Method_BasicHelper_Any_FollowerInfo___, v20);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcFollowerMaster___, v21);
    sub_B2C35C(&DataManager_TypeInfo, v22);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v23);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_FollowerInfo___, v24);
    sub_B2C35C(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___, v25);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___, v26);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__, v30);
    sub_B2C35C(&FollowerInfo___TypeInfo, v31);
    sub_B2C35C(&Method_System_Func_FollowerInfo__bool___ctor__, v32);
    sub_B2C35C(&System_Func_FollowerInfo__bool__TypeInfo, v33);
    sub_B2C35C(&long___TypeInfo, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v37);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__, v38);
    sub_B2C35C(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__, v39);
    sub_B2C35C(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v40);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
    sub_B2C35C(&PartyOrganizationListViewItem___TypeInfo, v42);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v43);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v44);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v45);
    sub_B2C35C(&Method_PartyListViewItem___c__DisplayClass19_0___ctor_b__0__, v46);
    sub_B2C35C(&PartyListViewItem___c__DisplayClass19_0_TypeInfo, v47);
    sub_B2C35C(&Method_PartyListViewItem___c__DisplayClass19_1___ctor_b__1__, v48);
    sub_B2C35C(&PartyListViewItem___c__DisplayClass19_1_TypeInfo, v49);
    sub_B2C35C(&Method_PartyListViewItem___c__DisplayClass19_2___ctor_b__2__, v50);
    sub_B2C35C(&PartyListViewItem___c__DisplayClass19_2_TypeInfo, v51);
    sub_B2C35C(&Method_PartyListViewItem___c__DisplayClass19_3___ctor_b__3__, v52);
    sub_B2C35C(&PartyListViewItem___c__DisplayClass19_3_TypeInfo, v53);
    sub_B2C35C(&UserServantEntity___TypeInfo, v54);
    byte_418B509 = 1;
  }
  memset(&v436, 0, sizeof(v436));
  v435 = 0LL;
  v434 = 0;
  v433 = 0LL;
  v432 = 0;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v70) )
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
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_465;
  followerInfo = follower;
  if ( *(int *)(Member + 48) < 1 )
  {
    v428 = 0;
    v423 = 0LL;
    v406 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_465;
    v73 = *(PartyListViewItem_o **)(Member + 72);
    v406 = 0;
    v428 = v73 != 0LL;
    v423 = v73;
    if ( follower && v73 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_465;
      if ( !v423 )
        goto LABEL_465;
      v406 = *(_DWORD *)(Member + 48);
      Member = (__int64)PartyListViewItem__GetMember(v423, v406 - 1, v74);
      if ( !Member )
        goto LABEL_465;
      v75 = *(_DWORD *)(Member + 332);
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_465;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v75, follower, 0LL);
      v428 = 1;
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
  Member = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_465;
  if ( !Member )
    goto LABEL_465;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Member,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0LL);
  v418 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v418,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  if ( !QuestFollowerList )
    goto LABEL_465;
  max_length = QuestFollowerList->max_length;
  v79 = QuestFollowerList;
  npcFollowerInfoList = QuestFollowerList;
  if ( max_length >= 1 )
  {
    v80 = 0;
    while ( v80 < max_length )
    {
      v69 = v79->m_Items[v80];
      if ( !v69 )
        goto LABEL_465;
      if ( !v69->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v69->fields.isFixedNpc) )
      {
        Member = (__int64)v418;
        if ( !v418 )
          goto LABEL_465;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v418,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_FollowerInfo__Add__);
        v79 = npcFollowerInfoList;
      }
      max_length = v79->max_length;
      if ( (int)++v80 >= max_length )
        goto LABEL_52;
    }
LABEL_472:
    v394 = sub_B2C460(Member);
    sub_B2C400(v394, 0LL);
  }
LABEL_52:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v418,
                    v77);
  questRestrictionInfoa = questRestrictionInfo;
  v412 = this;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
  {
LABEL_132:
    v127 = isNew;
    goto LABEL_133;
  }
  Member = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (Member & 1) != 0 )
  {
    if ( !v418 )
      goto LABEL_465;
    size = v418->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_465;
    v83 = slotInfos->max_length;
    if ( v83 >= 1 )
    {
      size = 0;
      v84 = 0;
      while ( v84 < v83 )
      {
        v85 = slotInfos->m_Items[v84];
        if ( !v85 )
          goto LABEL_465;
        if ( v85->fields.slotType == 1 )
          size += v85->fields.isMoved;
        if ( (int)++v84 >= v83 )
          goto LABEL_67;
      }
      goto LABEL_472;
    }
    size = 0;
  }
LABEL_67:
  v86 = deck->fields.deckInfo;
  v420 = NpcServantFollowerIds;
  if ( !v86 )
    goto LABEL_465;
  v87 = 0;
  v88 = 0;
  v89 = 4LL;
  while ( 1 )
  {
    svts = v86->fields.svts;
    if ( !svts )
      goto LABEL_465;
    v91 = v89 - 4;
    if ( (int)v89 - 4 >= (signed int)svts->max_length )
      break;
    v92 = (PartyListViewItem___c__DisplayClass19_0_o *)sub_B2C42C(PartyListViewItem___c__DisplayClass19_0_TypeInfo);
    PartyListViewItem___c__DisplayClass19_0___ctor(v92, 0LL);
    v93 = deck->fields.deckInfo;
    if ( v93 )
    {
      v94 = v93->fields.svts;
      if ( v94 )
      {
        if ( v91 >= v94->max_length )
          goto LABEL_472;
        v95 = *((_QWORD *)&v94->obj.klass + v89);
        if ( v95 )
        {
          if ( v92 )
          {
            v96 = *(_QWORD *)(v95 + 24);
            v92->fields.npcSvtId = *(_QWORD *)(v95 + 48);
            v97 = deck->fields.deckInfo;
            if ( v97 )
            {
              v98 = v97->fields.svts;
              if ( v98 )
              {
                if ( v91 >= v98->max_length )
                  goto LABEL_472;
                v99 = *((_QWORD *)&v98->obj.klass + v89);
                if ( v99 )
                {
                  Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
                             questRestrictionInfo,
                             *(_DWORD *)(v99 + 60),
                             0LL);
                  if ( (int)v91 >= DeckMemberMax && (v96 || v92->fields.npcSvtId) )
                    v87 = 1;
                  if ( !(Member & 1 | (v92->fields.npcSvtId == 0)) )
                  {
                    v100 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_FollowerInfo__bool__TypeInfo);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      v100,
                      (Il2CppObject *)v92,
                      Method_PartyListViewItem___c__DisplayClass19_0___ctor_b__0__,
                      (const MethodInfo_2711C04 *)Method_System_Func_FollowerInfo__bool___ctor__);
                    Member = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                               (System_Collections_Generic_List_T__o *)v418,
                               (System_Func_T__bool__o *)v100,
                               (const MethodInfo_17266AC *)Method_BasicHelper_Any_FollowerInfo___);
                    v88 += Member & 1;
                  }
                  v86 = deck->fields.deckInfo;
                  ++v89;
                  if ( v86 )
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
  if ( ((v88 == size) & ~v87) != 0 )
  {
    this = v412;
    NpcServantFollowerIds = v420;
    goto LABEL_132;
  }
  this = v412;
  v101 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v101 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_B2C374(
                                                  long___TypeInfo,
                                                  (unsigned int)v101->static_fields->DeckMemberMax);
  Member = (__int64)v418;
  if ( !v418 )
    goto LABEL_465;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v431,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v418,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v436 = v431;
  while ( 1 )
  {
    v107 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v436,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v107 )
      break;
    if ( !v436.fields.current )
      sub_B2C434(v107, v108);
    monitor = (Il2CppClass *)v436.fields.current[4].monitor;
    if ( monitor )
    {
      klass_low = SLODWORD(v436.fields.current[5].klass);
      if ( (int)klass_low >= 1 )
      {
        if ( !NpcServantFollowerIds )
          sub_B2C434(v107, v108);
        if ( (unsigned int)klass_low >= NpcServantFollowerIds->max_length )
        {
          v396 = sub_B2C460(v107);
          sub_B2C400(v396, 0LL);
        }
        v104 = &NpcServantFollowerIds->obj.klass + klass_low;
        goto LABEL_104;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(v412, NpcServantFollowerIds, v109);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_B2C434(NpcDeployIdx, v106);
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
        {
          v399 = sub_B2C460(NpcDeployIdx);
          sub_B2C400(v399, 0LL);
        }
        v104 = &NpcServantFollowerIds->obj.klass + (int)NpcDeployIdx;
LABEL_104:
        v104[4] = monitor;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v436,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v110 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v110 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_B2C374(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v110->static_fields->DeckMemberMax);
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
    v114 = deck->fields.deckInfo;
    if ( !v114 )
      goto LABEL_465;
    v115 = v114->fields.svts;
    if ( !v115 )
      goto LABEL_465;
    if ( i >= v115->max_length )
      goto LABEL_472;
    v116 = v115->m_Items[i];
    if ( !v116 )
      goto LABEL_465;
    if ( v116->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Member,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v112);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v118 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Member = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0LL);
          if ( !userServantList )
            goto LABEL_465;
          v125 = (System_Int32_array **)Member;
          if ( Member )
          {
            Member = sub_B2C41C(Member, userServantList->obj.klass->_1.element_class);
            if ( !Member )
            {
LABEL_473:
              v395 = sub_B2C454(Member);
              sub_B2C400(v395, 0LL);
            }
          }
          if ( v118 >= userServantList->max_length )
            goto LABEL_472;
          v126 = &userServantList->obj.klass + (int)v118;
          v126[4] = (Il2CppClass *)v125;
          sub_B2C2F8((BattleServantConfConponent_o *)(v126 + 4), v125, v119, v120, v121, v122, v123, v124);
        }
      }
    }
  }
  if ( FollowerIndex < 1 )
    goto LABEL_132;
  v127 = isNew;
  if ( !questRestrictionInfo->fields.isNotTransitionSupportList && !questRestrictionInfo->fields.isNpcOnlyBattle )
    FollowerIndex = PartyListViewItem__GetSupportInitIndex(
                      v412,
                      (System_Collections_Generic_List_FollowerInfo__o *)v418,
                      v111);
LABEL_133:
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_465;
  if ( !*(_QWORD *)(Member + 24) )
  {
    v407 = followerDeckId;
    v405 = followerClassId;
    goto LABEL_146;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member
    || (followerInfo = *(FollowerInfo_o **)(Member + 24),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (v405 = *(_DWORD *)(Member + 32),
        (Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_465:
    sub_B2C434(Member, v69);
  }
  v407 = *(_DWORD *)(Member + 36);
LABEL_146:
  v128 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v128 = BalanceConfig_TypeInfo;
  }
  v129 = (struct PartyOrganizationListViewItem_array *)sub_B2C374(
                                                         PartyOrganizationListViewItem___TypeInfo,
                                                         (unsigned int)v128->static_fields->DeckMemberMax);
  this->fields.memberList = v129;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v129,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( !v127 && questRestrictionInfo->fields.isNpcEditablePos )
  {
    v421 = NpcServantFollowerIds;
    v136 = 0LL;
    p_isNpcEditablePos = &questRestrictionInfo->fields.isNpcEditablePos;
    v403 = -1;
    while ( 1 )
    {
      for ( j = 8 * v136 + 32; ; j += 8LL )
      {
        v147 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v147 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v136 >= v147->static_fields->DeckMemberMax )
          goto LABEL_467;
        v148 = (PartyListViewItem___c__DisplayClass19_1_o *)sub_B2C42C(PartyListViewItem___c__DisplayClass19_1_TypeInfo);
        PartyListViewItem___c__DisplayClass19_1___ctor(v148, 0LL);
        if ( v428 )
        {
          Member = (__int64)v423;
          if ( !v423 )
            goto LABEL_465;
          Member = (__int64)PartyListViewItem__GetMember(v423, v136, v149);
          if ( !Member )
            goto LABEL_465;
          v150 = (int32_t *)(Member + 332);
        }
        else
        {
          v151 = deck->fields.deckInfo;
          if ( !v151 )
            goto LABEL_465;
          v152 = v151->fields.svts;
          if ( !v152 )
            goto LABEL_465;
          if ( v136 >= v152->max_length )
            goto LABEL_472;
          v153 = *(__int64 *)((char *)&v152->obj.klass + j);
          if ( !v153 )
            goto LABEL_465;
          v150 = (int32_t *)(v153 + 60);
        }
        v154 = *v150;
        if ( (__int64)v136 < DeckMemberMax )
          break;
        v139 = (unsigned int *)*p_memberList;
        v140 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32212232(v140, v136, 0, setupInfo, questRestrictionInfo, 1, v154, 0LL);
        if ( !v139 )
          goto LABEL_465;
        if ( v140 )
        {
          Member = sub_B2C41C(v140, *(_QWORD *)(*(_QWORD *)v139 + 64LL));
          if ( !Member )
            goto LABEL_473;
        }
        if ( v136 >= v139[6] )
          goto LABEL_472;
        *(_QWORD *)((char *)v139 + j) = v140;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)((char *)v139 + j),
          (System_Int32_array **)v140,
          v141,
          v142,
          v143,
          v144,
          v145,
          v146);
        ++v136;
      }
      if ( !v148 )
        goto LABEL_465;
      v148->fields.chkIdx = v136 + 1;
      v435 = 0LL;
      v434 = 0;
      Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(questRestrictionInfoa, v154, 0LL);
      v156 = 0;
      v408 = Member;
      if ( (Member & 1) != 0 )
      {
        if ( !v421 )
          goto LABEL_465;
        if ( v136 >= v421->max_length )
          goto LABEL_472;
        v157 = *(int64_t *)((char *)&v421->obj.klass + j);
        v156 = v157 >= 1
            && v148->fields.chkIdx != v406
            && PartyListViewItem__SetNpcFollowerInfo(this, &v435, &v434, npcFollowerInfoList, v157, v154, v155);
      }
      v158 = p_isNpcEditablePos;
      v159 = v156;
      v160 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfoa, 0LL)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfoa, v154, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_465;
      Member = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v154, 0LL);
      if ( !Member || ((v408 ^ 1) & 1) != 0 )
      {
        if ( v159 || v148->fields.chkIdx == FollowerIndex )
        {
          v175 = v435;
          v176 = v158;
          v177 = (unsigned int *)*p_memberList;
          if ( v435 )
          {
            v178 = v434;
            v179 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_32183040(
              v179,
              v136,
              v175,
              v178,
              setupInfo,
              questRestrictionInfoa,
              0LL,
              0,
              v407,
              v154,
              0LL);
            v174 = v136 + 1;
            if ( !v177 )
              goto LABEL_465;
          }
          else
          {
            v186 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
            v174 = v136 + 1;
            v179 = v186;
            if ( followerInfo )
              PartyOrganizationListViewItem___ctor_32183040(
                v186,
                v136,
                followerInfo,
                v405,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                0,
                v407,
                v154,
                0LL);
            else
              PartyOrganizationListViewItem___ctor_32212232(
                v186,
                v136,
                1,
                setupInfo,
                questRestrictionInfoa,
                1,
                v154,
                0LL);
            if ( !v177 )
              goto LABEL_465;
          }
          if ( v179 )
          {
            Member = sub_B2C41C(v179, *(_QWORD *)(*(_QWORD *)v177 + 64LL));
            if ( !Member )
              goto LABEL_473;
          }
          if ( v136 >= v177[6] )
            goto LABEL_472;
          *(_QWORD *)((char *)v177 + j) = v179;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)((char *)v177 + j),
            (System_Int32_array **)v179,
            v180,
            v181,
            v182,
            v183,
            v184,
            v185);
          p_isNpcEditablePos = v176;
        }
        else if ( v160 )
        {
          v187 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_FollowerInfo__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v187,
            (Il2CppObject *)v148,
            Method_PartyListViewItem___c__DisplayClass19_1___ctor_b__1__,
            (const MethodInfo_2711C04 *)Method_System_Func_FollowerInfo__bool___ctor__);
          v188 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v418,
                   (System_Func_TSource__bool__o *)v187,
                   (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v189 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B2C41C(v188, FollowerInfo___TypeInfo);
          if ( !v189 )
            v189 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                          v188,
                                                                          (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          Member = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     v189,
                     (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          v401 = v158;
          if ( (Member & 1) != 0 )
          {
            Member = (__int64)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                v189,
                                0,
                                (const MethodInfo_1A8E68C *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v174 = v136 + 1;
            v190 = (FollowerInfo_o *)Member;
            v191 = v403;
            v192 = (unsigned int *)*p_memberList;
            if ( Member )
              goto LABEL_211;
          }
          else
          {
            if ( !v418 )
              goto LABEL_465;
            v216 = v418->fields._size;
            if ( v216 >= 1 )
            {
              v191 = 0;
              while ( 1 )
              {
                if ( v216 <= v191 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                v190 = (FollowerInfo_o *)v418->fields._items->m_Items[v191];
                if ( !v190 || !v421 )
                  goto LABEL_465;
                if ( v136 >= v421->max_length )
                  goto LABEL_472;
                if ( (Il2CppClass *)v190->fields.npcFollowerSvtId != *(Il2CppClass **)((char *)&v421->obj.klass + j) )
                {
                  if ( v418->fields._size <= v191 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                  if ( v403 < (int)v191 && v190->fields.npcInitIdx <= 0 )
                    break;
                }
                ++v191;
                v216 = v418->fields._size;
                if ( (int)v191 >= v216 )
                  goto LABEL_260;
              }
              v174 = v136 + 1;
              if ( v418->fields._size <= v191 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v192 = (unsigned int *)*p_memberList;
LABEL_211:
              userSvtLeaderHash = v190->fields.userSvtLeaderHash;
              if ( !userSvtLeaderHash )
                goto LABEL_465;
              if ( !userSvtLeaderHash->max_length )
                goto LABEL_472;
              v194 = userSvtLeaderHash->m_Items[0];
              if ( !v194 )
                goto LABEL_465;
              classId = v194->fields.classId;
              v196 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_32183040(
                v196,
                v136,
                v190,
                classId,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                1,
                v407,
                v154,
                0LL);
              if ( !v192 )
                goto LABEL_465;
              if ( v196 )
              {
                Member = sub_B2C41C(v196, *(_QWORD *)(*(_QWORD *)v192 + 64LL));
                if ( !Member )
                  goto LABEL_473;
              }
              if ( v136 >= v192[6] )
                goto LABEL_472;
              *(_QWORD *)((char *)v192 + j) = v196;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)((char *)v192 + j),
                (System_Int32_array **)v196,
                v197,
                v198,
                v199,
                v200,
                v201,
                v202);
              this = v412;
              v403 = v191;
LABEL_306:
              p_isNpcEditablePos = v401;
              goto LABEL_242;
            }
LABEL_260:
            v174 = v136 + 1;
            v192 = (unsigned int *)*p_memberList;
          }
          v217 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32212232(v217, v136, 0, setupInfo, questRestrictionInfoa, 0, v154, 0LL);
          if ( !v192 )
            goto LABEL_465;
          p_isNpcEditablePos = v401;
          if ( v217 )
          {
            Member = sub_B2C41C(v217, *(_QWORD *)(*(_QWORD *)v192 + 64LL));
            if ( !Member )
              goto LABEL_473;
          }
          if ( v136 >= v192[6] )
            goto LABEL_472;
          *(_QWORD *)((char *)v192 + j) = v217;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)((char *)v192 + j),
            (System_Int32_array **)v217,
            v218,
            v219,
            v220,
            v221,
            v222,
            v223);
          this = v412;
        }
        else
        {
          if ( !v421 )
            goto LABEL_465;
          if ( v136 >= v421->max_length )
            goto LABEL_472;
          p_isNpcEditablePos = v158;
          if ( *(Il2CppClass **)((char *)&v421->obj.klass + j) )
          {
            v401 = v158;
            Member = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v418,
                       (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
            v174 = v136 + 1;
            if ( (int)Member < 1 )
            {
LABEL_231:
              v206 = (unsigned int *)*p_memberList;
              v207 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_32212232(
                v207,
                v136,
                0,
                setupInfo,
                questRestrictionInfoa,
                1,
                v154,
                0LL);
              if ( !v206 )
                goto LABEL_465;
              if ( v207 )
              {
                Member = sub_B2C41C(v207, *(_QWORD *)(*(_QWORD *)v206 + 64LL));
                if ( !Member )
                  goto LABEL_473;
              }
              if ( v136 >= v206[6] )
                goto LABEL_472;
              *(_QWORD *)((char *)v206 + j) = v207;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)((char *)v206 + j),
                (System_Int32_array **)v207,
                v208,
                v209,
                v210,
                v211,
                v212,
                v213);
            }
            else
            {
              if ( !v418 )
                goto LABEL_465;
              v203 = v418;
              v204 = 4LL;
              while ( 1 )
              {
                if ( v203->fields._size <= (unsigned int)(v204 - 4) )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                v205 = (FollowerInfo_o *)*((_QWORD *)&v418->fields._items->obj.klass + v204);
                if ( !v205 )
                  goto LABEL_465;
                if ( v136 >= v421->max_length )
                  goto LABEL_472;
                if ( (Il2CppClass *)v205->fields.npcFollowerSvtId == *(Il2CppClass **)((char *)&v421->obj.klass + j) )
                  break;
                v203 = v418;
                Member = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v418,
                           (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
                if ( (int)++v204 - 4 >= (int)Member )
                  goto LABEL_231;
              }
              if ( v418->fields._size <= (unsigned int)(v204 - 4) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v238 = (unsigned int *)*p_memberList;
              v255 = v205->fields.userSvtLeaderHash;
              if ( !v255 )
                goto LABEL_465;
              if ( !v255->max_length )
                goto LABEL_472;
              v256 = v255->m_Items[0];
              if ( !v256 )
                goto LABEL_465;
              v257 = v256->fields.classId;
              v258 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_32183040(
                v258,
                v136,
                v205,
                v257,
                setupInfo,
                questRestrictionInfoa,
                0LL,
                1,
                v407,
                v154,
                0LL);
              if ( !v238 )
                goto LABEL_465;
              if ( v258 )
              {
                Member = sub_B2C41C(v258, *(_QWORD *)(*(_QWORD *)v238 + 64LL));
                if ( !Member )
                  goto LABEL_473;
              }
              if ( v136 >= v238[6] )
                goto LABEL_472;
              *(_QWORD *)((char *)v238 + j) = v258;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)((char *)v238 + j),
                (System_Int32_array **)v258,
                v259,
                v260,
                v261,
                v262,
                v263,
                v264);
            }
            goto LABEL_306;
          }
          if ( (v408 & 1) != 0 )
          {
            v224 = userServantList;
            if ( !userServantList )
              goto LABEL_465;
            v174 = v136 + 1;
            if ( v136 >= userServantList->max_length )
              goto LABEL_472;
            v225 = *(__int64 *)((char *)&userServantList->obj.klass + j);
            if ( v225 )
            {
              v226 = *(_QWORD *)(v225 + 80);
              v227 = *(_QWORD *)(v225 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v437.fields.currentCryptoKey = v226;
              *(_QWORD *)&v437.fields.fakeValue = v227;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v437, 0LL);
              if ( v136 >= userServantList->max_length )
                goto LABEL_472;
              v228 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + j);
              if ( !v228 )
                goto LABEL_465;
              v229 = Member;
              Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v228[6], 0LL);
              if ( v136 >= userServantList->max_length )
                goto LABEL_472;
              v230 = Member;
              Member = *(__int64 *)((char *)&userServantList->obj.klass + j);
              if ( !Member )
                goto LABEL_465;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Member, 0, 0LL);
              Member = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         questRestrictionInfoa,
                         v229,
                         v230,
                         DispLimitCount,
                         v154,
                         0,
                         0LL);
              v224 = userServantList;
              if ( (Member & 1) != 0 )
              {
                if ( v136 >= userServantList->max_length )
                  goto LABEL_472;
                *(Il2CppClass **)((char *)&userServantList->obj.klass + j) = 0LL;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)((char *)userServantList + j),
                  0LL,
                  v232,
                  v233,
                  v234,
                  v235,
                  v236,
                  v237);
              }
            }
          }
          else
          {
            v224 = userServantList;
            v174 = v136 + 1;
            if ( !userServantList )
              goto LABEL_465;
          }
          if ( v136 >= v224->max_length )
            goto LABEL_472;
          v239 = *(UserServantEntity_o **)((char *)&v224->obj.klass + j);
          v240 = (unsigned int *)*p_memberList;
          if ( v239 )
          {
            equipIdLista = UserEventDeckEntity__GetEquipList(deck, v136, 0LL);
            v241 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_32205676(
              v241,
              v136,
              v239,
              equipIdLista,
              setupInfo,
              questRestrictionInfoa,
              0LL,
              v154,
              0LL);
            if ( !v240 )
              goto LABEL_465;
            if ( v241 )
            {
              Member = sub_B2C41C(v241, *(_QWORD *)(*(_QWORD *)v240 + 64LL));
              if ( !Member )
                goto LABEL_473;
            }
            if ( v136 >= v240[6] )
              goto LABEL_472;
            *(_QWORD *)((char *)v240 + j) = v241;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)((char *)v240 + j),
              (System_Int32_array **)v241,
              v242,
              v243,
              v244,
              v245,
              v246,
              v247);
          }
          else
          {
            v248 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_32212232(v248, v136, 0, setupInfo, questRestrictionInfoa, 1, v154, 0LL);
            if ( !v240 )
              goto LABEL_465;
            if ( v248 )
            {
              Member = sub_B2C41C(v248, *(_QWORD *)(*(_QWORD *)v240 + 64LL));
              if ( !Member )
                goto LABEL_473;
            }
            if ( v136 >= v240[6] )
              goto LABEL_472;
            *(_QWORD *)((char *)v240 + j) = v248;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)((char *)v240 + j),
              (System_Int32_array **)v248,
              v249,
              v250,
              v251,
              v252,
              v253,
              v254);
          }
        }
      }
      else
      {
        v161 = (FollowerInfo_o *)Member;
        IsNpc = FollowerInfo__get_IsNpc((FollowerInfo_o *)Member, 0LL);
        v163 = v405;
        if ( IsNpc )
          v163 = 0;
        v402 = v163;
        v164 = FollowerInfo__get_IsNpc(v161, 0LL);
        v165 = (unsigned int *)*p_memberList;
        if ( v164 )
          v166 = 0;
        else
          v166 = v407;
        v167 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32183040(
          v167,
          v136,
          v161,
          v402,
          setupInfo,
          questRestrictionInfoa,
          friendPointCampaignEntityList,
          0,
          v166,
          v154,
          0LL);
        if ( !v165 )
          goto LABEL_465;
        p_isNpcEditablePos = v158;
        if ( v167 )
        {
          Member = sub_B2C41C(v167, *(_QWORD *)(*(_QWORD *)v165 + 64LL));
          if ( !Member )
            goto LABEL_473;
        }
        if ( v136 >= v165[6] )
          goto LABEL_472;
        v174 = v136 + 1;
        *(_QWORD *)((char *)v165 + j) = v167;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)((char *)v165 + j),
          (System_Int32_array **)v167,
          v168,
          v169,
          v170,
          v171,
          v172,
          v173);
      }
LABEL_242:
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_465;
      if ( v136 >= memberList->max_length )
        goto LABEL_472;
      Member = *(__int64 *)((char *)&memberList->obj.klass + j);
      if ( !Member )
        goto LABEL_465;
      cost = this->fields.cost;
      v136 = v174;
      questRestrictionInfo = questRestrictionInfoa;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Member, 0LL)
                        + cost;
    }
  }
  equipIdList = questRestrictionInfo->fields.myServantNumMax
              + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( v127 )
  {
    p_max_length = &userServantList->max_length;
    goto LABEL_327;
  }
  if ( !userServantList )
    goto LABEL_465;
  p_max_length = &userServantList->max_length;
  if ( (int)userServantList->max_length >= 1 )
  {
    v409 = v18;
    v265 = 0LL;
    v266 = 0;
    v267 = 0LL;
    m_Items = userServantList->m_Items;
    while ( 1 )
    {
      v269 = (PartyListViewItem___c__DisplayClass19_2_o *)sub_B2C42C(PartyListViewItem___c__DisplayClass19_2_TypeInfo);
      PartyListViewItem___c__DisplayClass19_2___ctor(v269, 0LL);
      if ( !v269 )
        goto LABEL_465;
      v270 = v267 + 1;
      v269->fields.chkIdx = v267 + 1;
      if ( v267 >= *p_max_length )
        goto LABEL_472;
      if ( m_Items[v267] )
        ++v266;
      v271 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v271,
        (Il2CppObject *)v269,
        Method_PartyListViewItem___c__DisplayClass19_2___ctor_b__2__,
        (const MethodInfo_2711C04 *)Method_System_Func_FollowerInfo__bool___ctor__);
      Member = (__int64)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                          (System_Func_TSource__bool__o *)v271,
                          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v278 = *p_max_length;
      if ( v267 >= v278 )
        goto LABEL_472;
      if ( !m_Items[v267] )
        goto LABEL_325;
      if ( v269->fields.chkIdx > DeckMemberMax )
        goto LABEL_323;
      Member = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Member,
                 (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v266 > equipIdList || (Member & 1) != 0 )
        break;
LABEL_325:
      ++v265;
      ++v267;
      if ( v270 >= (int)*p_max_length )
      {
        v18 = v409;
        goto LABEL_327;
      }
    }
    v278 = *p_max_length;
LABEL_323:
    if ( v267 >= v278 )
      goto LABEL_472;
    m_Items[v267] = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&m_Items[v265], 0LL, v272, v273, v274, v275, v276, v277);
    goto LABEL_325;
  }
LABEL_327:
  v279 = 0LL;
  v410 = 0;
  v280 = DeckMemberMax;
LABEL_444:
  v375 = 8 * v279 + 32;
  for ( k = v279; ; ++k )
  {
    v385 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v385 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v385->static_fields->DeckMemberMax )
      break;
    v386 = (PartyListViewItem___c__DisplayClass19_3_o *)sub_B2C42C(PartyListViewItem___c__DisplayClass19_3_TypeInfo);
    PartyListViewItem___c__DisplayClass19_3___ctor(v386, 0LL);
    if ( v428 )
    {
      Member = (__int64)v423;
      if ( !v423 )
        goto LABEL_465;
      Member = (__int64)PartyListViewItem__GetMember(v423, k, v387);
      if ( !Member )
        goto LABEL_465;
      v388 = (int32_t *)(Member + 332);
    }
    else
    {
      v389 = deck->fields.deckInfo;
      if ( !v389 )
        goto LABEL_465;
      v390 = v389->fields.svts;
      if ( !v390 )
        goto LABEL_465;
      if ( k >= v390->max_length )
        goto LABEL_472;
      v391 = *(__int64 *)((char *)&v390->obj.klass + v375);
      if ( !v391 )
        goto LABEL_465;
      v388 = (int32_t *)(v391 + 60);
    }
    v392 = *v388;
    if ( (__int64)k < v280 )
    {
      if ( !v386 )
        goto LABEL_465;
      v279 = k + 1;
      v386->fields.chkIdx = k + 1;
      v433 = 0LL;
      v432 = 0;
      Member = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(questRestrictionInfo, v392, 0LL);
      v282 = Member;
      if ( (Member & 1) == 0 )
        goto LABEL_336;
      v283 = deck->fields.deckInfo;
      if ( !v283 )
        goto LABEL_465;
      v284 = v283->fields.svts;
      if ( !v284 )
        goto LABEL_465;
      if ( k >= v284->max_length )
        goto LABEL_472;
      v285 = *(__int64 *)((char *)&v284->obj.klass + v375);
      if ( !v285 )
        goto LABEL_465;
      v286 = *(_QWORD *)(v285 + 48);
      if ( v286 >= 1 )
      {
        if ( v386->fields.chkIdx == v406 )
        {
          v404 = 0;
          v426 = 1;
        }
        else
        {
          v426 = PartyListViewItem__SetNpcFollowerInfo(v412, &v433, &v432, npcFollowerInfoList, v286, v392, v281);
          v404 = 0;
        }
        goto LABEL_341;
      }
LABEL_336:
      if ( followerInfo && !questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v426 = 0;
        v404 = v386->fields.chkIdx == FollowerIndex;
      }
      else
      {
        v404 = 0;
        v426 = 0;
      }
LABEL_341:
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Member )
        goto LABEL_465;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Member, v392, 0LL);
      if ( NpcFollowerInfo && ((v282 ^ 1) & 1) == 0 )
      {
        v288 = NpcFollowerInfo;
        v289 = v18;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v290 = 0;
        else
          v290 = v405;
        v291 = FollowerInfo__get_IsNpc(v288, 0LL);
        v292 = (unsigned int *)*p_memberList;
        if ( v291 )
          v293 = 0;
        else
          v293 = v407;
        v294 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32183040(
          v294,
          k,
          v288,
          v290,
          setupInfo,
          questRestrictionInfoa,
          friendPointCampaignEntityList,
          0,
          v293,
          v392,
          0LL);
        if ( !v292 )
          goto LABEL_465;
        if ( v294 )
        {
          Member = sub_B2C41C(v294, *(_QWORD *)(*(_QWORD *)v292 + 64LL));
          if ( !Member )
            goto LABEL_473;
        }
        if ( k >= v292[6] )
          goto LABEL_472;
        v18 = v289;
        *(_QWORD *)((char *)v292 + v375) = v294;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)((char *)v292 + v375),
          (System_Int32_array **)v294,
          v295,
          v296,
          v297,
          v298,
          v299,
          v300);
        questRestrictionInfo = questRestrictionInfoa;
        v301 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_465;
        v279 = k + 1;
        if ( k >= v301->max_length )
          goto LABEL_472;
        v302 = deck->fields.deckInfo;
        if ( !v302 )
          goto LABEL_465;
        v303 = v302->fields.svts;
        if ( !v303 )
          goto LABEL_465;
        if ( k >= v303->max_length )
          goto LABEL_472;
        v304 = *(__int64 *)((char *)&v303->obj.klass + v375);
        if ( !v304 )
          goto LABEL_465;
        v305 = *(__int64 *)((char *)&v301->obj.klass + v375);
        if ( !v305 )
          goto LABEL_465;
        *(_DWORD *)(v305 + 332) = *(_DWORD *)(v304 + 60);
        ++v410;
        goto LABEL_444;
      }
      if ( v426 || v386->fields.chkIdx == FollowerIndex )
      {
        v306 = v433;
        v307 = (unsigned int *)*p_memberList;
        if ( v433 )
        {
          v308 = v432;
          initPos = v392;
          v309 = (unsigned int *)*p_memberList;
          v310 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32183040(
            v310,
            k,
            v306,
            v308,
            setupInfo,
            questRestrictionInfo,
            0LL,
            !v404,
            v407,
            initPos,
            0LL);
          if ( !v309 )
            goto LABEL_479;
          if ( v310 )
          {
            IsRestrictionServantIndividuality = sub_B2C41C(v310, *(_QWORD *)(*(_QWORD *)v309 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_477;
          }
          if ( k >= v309[6] )
            goto LABEL_478;
          v318 = (BattleServantConfConponent_o *)((char *)v309 + v375);
        }
        else
        {
          v319 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
          v310 = v319;
          if ( followerInfo )
            PartyOrganizationListViewItem___ctor_32183040(
              v319,
              k,
              followerInfo,
              v405,
              setupInfo,
              questRestrictionInfo,
              0LL,
              !v404,
              v407,
              v392,
              0LL);
          else
            PartyOrganizationListViewItem___ctor_32212232(v319, k, 1, setupInfo, questRestrictionInfo, 1, v392, 0LL);
          if ( !v307 )
            goto LABEL_479;
          if ( v310 )
          {
            IsRestrictionServantIndividuality = sub_B2C41C(v310, *(_QWORD *)(*(_QWORD *)v307 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_477;
          }
          if ( k >= v307[6] )
            goto LABEL_478;
          v318 = (BattleServantConfConponent_o *)((char *)v307 + v375);
        }
        v318->klass = (BattleServantConfConponent_c *)v310;
        sub_B2C2F8(v318, (System_Int32_array **)v310, v312, v313, v314, v315, v316, v317);
        v338 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_479;
        if ( k >= v338->max_length )
        {
LABEL_478:
          v398 = sub_B2C460(IsRestrictionServantIndividuality);
          sub_B2C400(v398, 0LL);
        }
        v339 = deck->fields.deckInfo;
        if ( !v339 )
          goto LABEL_479;
        v340 = v339->fields.svts;
        if ( !v340 )
          goto LABEL_479;
        if ( k >= v340->max_length )
          goto LABEL_478;
        v341 = *(__int64 *)((char *)&v340->obj.klass + v375);
        if ( !v341 || (v342 = *(__int64 *)((char *)&v338->obj.klass + v375)) == 0 )
LABEL_479:
          sub_B2C434(IsRestrictionServantIndividuality, v69);
        *(_DWORD *)(v342 + 332) = *(_DWORD *)(v341 + 60);
        v410 += v404 || v426;
        goto LABEL_444;
      }
      v320 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v320,
        (Il2CppObject *)v386,
        Method_PartyListViewItem___c__DisplayClass19_3___ctor_b__3__,
        (const MethodInfo_2711C04 *)Method_System_Func_FollowerInfo__bool___ctor__);
      v321 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v418,
               (System_Func_TSource__bool__o *)v320,
               (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v322 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_B2C41C(v321, FollowerInfo___TypeInfo);
      if ( !v322 )
        v322 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                      v321,
                                                                      (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      IsRestrictionServantIndividuality = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                            v322,
                                            (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v410 < equipIdList && (IsRestrictionServantIndividuality & 1) == 0 )
      {
        if ( (v282 & 1) != 0 )
        {
          if ( !userServantList )
            goto LABEL_479;
          v323 = p_max_length;
          if ( k >= *p_max_length )
            goto LABEL_478;
          v324 = *(__int64 *)((char *)&userServantList->obj.klass + v375);
          if ( v324 )
          {
            v326 = *(_QWORD *)(v324 + 80);
            v325 = *(_QWORD *)(v324 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v438.fields.currentCryptoKey = v326;
            *(_QWORD *)&v438.fields.fakeValue = v325;
            IsRestrictionServantIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  v438,
                                                  0LL);
            if ( k >= *p_max_length )
              goto LABEL_478;
            v327 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + v375);
            if ( !v327 )
              goto LABEL_479;
            v328 = IsRestrictionServantIndividuality;
            IsRestrictionServantIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  v327[6],
                                                  0LL);
            if ( k >= *p_max_length )
              goto LABEL_478;
            v329 = IsRestrictionServantIndividuality;
            IsRestrictionServantIndividuality = *(__int64 *)((char *)&userServantList->obj.klass + v375);
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_479;
            v330 = UserServantEntity__getDispLimitCount(
                     (UserServantEntity_o *)IsRestrictionServantIndividuality,
                     0,
                     0LL);
            IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                  questRestrictionInfo,
                                                  v328,
                                                  v329,
                                                  v330,
                                                  v392,
                                                  0,
                                                  0LL);
            v323 = p_max_length;
            if ( (IsRestrictionServantIndividuality & 1) != 0 )
            {
              if ( k >= *p_max_length )
                goto LABEL_478;
              *(Il2CppClass **)((char *)&userServantList->obj.klass + v375) = 0LL;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)((char *)userServantList + v375),
                0LL,
                v331,
                v332,
                v333,
                v334,
                v335,
                v336);
            }
          }
        }
        else
        {
          v323 = p_max_length;
          if ( !userServantList )
            goto LABEL_479;
        }
        if ( k >= *v323 )
          goto LABEL_478;
        v355 = *(UserServantEntity_o **)((char *)&userServantList->obj.klass + v375);
        v356 = (unsigned int *)*p_memberList;
        if ( v355 )
        {
          EquipList = UserEventDeckEntity__GetEquipList(deck, k, 0LL);
          v358 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32205676(
            v358,
            k,
            v355,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            v392,
            0LL);
          if ( !v356 )
            goto LABEL_479;
        }
        else
        {
          v358 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32212232(v358, k, 0, setupInfo, questRestrictionInfo, 1, v392, 0LL);
          if ( !v356 )
            goto LABEL_479;
        }
        if ( v358 )
        {
          IsRestrictionServantIndividuality = sub_B2C41C(v358, *(_QWORD *)(*(_QWORD *)v356 + 64LL));
          if ( !IsRestrictionServantIndividuality )
          {
LABEL_477:
            v397 = sub_B2C454(IsRestrictionServantIndividuality);
            sub_B2C400(v397, 0LL);
          }
        }
        if ( k >= v356[6] )
          goto LABEL_478;
        *(_QWORD *)((char *)v356 + v375) = v358;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)((char *)v356 + v375),
          (System_Int32_array **)v358,
          v359,
          v360,
          v361,
          v362,
          v363,
          v364);
        ++v410;
        v279 = k + 1;
        goto LABEL_440;
      }
      IsRestrictionServantIndividuality = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                            v322,
                                            (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( (IsRestrictionServantIndividuality & 1) != 0 )
      {
        IsRestrictionServantIndividuality = (__int64)System_Linq_Enumerable__ElementAt_UserPresentHistoryEntity_(
                                                       v322,
                                                       0,
                                                       (const MethodInfo_1A8E68C *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        v337 = (FollowerInfo_o *)IsRestrictionServantIndividuality;
        goto LABEL_414;
      }
      if ( !v418 )
        goto LABEL_479;
      v343 = v418->fields._size;
      v344 = k - v410;
      if ( v343 <= (int)k - v410 )
      {
        v279 = k + 1;
        v365 = (unsigned int *)*p_memberList;
      }
      else
      {
        if ( v343 <= v344 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v337 = (FollowerInfo_o *)v418->fields._items->m_Items[v344];
        v279 = k + 1;
LABEL_414:
        v345 = (unsigned int *)*p_memberList;
        if ( v337 )
        {
          v346 = v337->fields.userSvtLeaderHash;
          if ( !v346 )
            goto LABEL_479;
          if ( !v346->max_length )
            goto LABEL_478;
          v347 = v346->m_Items[0];
          if ( !v347 )
            goto LABEL_479;
          v427 = v347->fields.classId;
          v348 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32183040(
            v348,
            k,
            v337,
            v427,
            setupInfo,
            questRestrictionInfo,
            0LL,
            1,
            v407,
            v392,
            0LL);
          if ( !v345 )
            goto LABEL_479;
          if ( v348 )
          {
            IsRestrictionServantIndividuality = sub_B2C41C(v348, *(_QWORD *)(*(_QWORD *)v345 + 64LL));
            if ( !IsRestrictionServantIndividuality )
              goto LABEL_477;
          }
          if ( k >= v345[6] )
            goto LABEL_478;
          *(_QWORD *)((char *)v345 + v375) = v348;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)((char *)v345 + v375),
            (System_Int32_array **)v348,
            v349,
            v350,
            v351,
            v352,
            v353,
            v354);
LABEL_440:
          v373 = v412->fields.memberList;
          if ( !v373 )
            goto LABEL_479;
          if ( k >= v373->max_length )
            goto LABEL_478;
          IsRestrictionServantIndividuality = *(__int64 *)((char *)&v373->obj.klass + v375);
          if ( !IsRestrictionServantIndividuality )
            goto LABEL_479;
          v374 = v412->fields.cost;
          v412->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                                (PartyOrganizationListViewItem_o *)IsRestrictionServantIndividuality,
                                0LL)
                            + v374;
          goto LABEL_444;
        }
        v365 = (unsigned int *)*p_memberList;
      }
      v366 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32212232(v366, k, 0, setupInfo, questRestrictionInfo, 0, v392, 0LL);
      if ( !v365 )
        goto LABEL_479;
      if ( v366 )
      {
        IsRestrictionServantIndividuality = sub_B2C41C(v366, *(_QWORD *)(*(_QWORD *)v365 + 64LL));
        if ( !IsRestrictionServantIndividuality )
          goto LABEL_477;
      }
      if ( k >= v365[6] )
        goto LABEL_478;
      *(_QWORD *)((char *)v365 + v375) = v366;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)v365 + v375),
        (System_Int32_array **)v366,
        v367,
        v368,
        v369,
        v370,
        v371,
        v372);
      goto LABEL_440;
    }
    v377 = (unsigned int *)*p_memberList;
    v378 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32212232(v378, k, 0, setupInfo, questRestrictionInfo, 1, v392, 0LL);
    if ( !v377 )
      goto LABEL_465;
    if ( v378 )
    {
      Member = sub_B2C41C(v378, *(_QWORD *)(*(_QWORD *)v377 + 64LL));
      if ( !Member )
        goto LABEL_473;
    }
    if ( k >= v377[6] )
      goto LABEL_472;
    *(_QWORD *)((char *)v377 + v375) = v378;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)((char *)v377 + v375),
      (System_Int32_array **)v378,
      v379,
      v380,
      v381,
      v382,
      v383,
      v384);
    v375 += 8LL;
  }
  this = v412;
  p_isNpcEditablePos = &questRestrictionInfo->fields.isNpcEditablePos;
LABEL_467:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v69);
  if ( (*p_isNpcEditablePos || !questRestrictionInfo->fields.isNpcOnlyBattle)
    && !PartyListViewItem__GetStartDeckCondition(this, v393) )
  {
    *v18 = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_31918940(
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
  __int64 v35; // x1
  __int64 Master_WarQuestSelectionMaster; // x0
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x23
  BalanceConfig_c *v39; // x8
  struct PartyOrganizationListViewItem_array *v40; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x24
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_int__o *v48; // x27
  int v49; // w8
  __int64 v50; // x28
  unsigned int v51; // w19
  __int64 v52; // x25
  struct System_Int32_array *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UserEventDeckEntity_o *v60; // x28
  int32_t v61; // w26
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct DeckServant_o *v63; // x8
  struct DeckServantData_array *svts; // x8
  __int64 v65; // x8
  int32_t v66; // w25
  UserServantEntity_o *v67; // x27
  struct PartyOrganizationListViewItem_array *v68; // x21
  __int128 v69; // q0
  int64_t v70; // x0
  System_Int64_array *EquipList_27004044; // x19
  PartyOrganizationListViewItem_o *v72; // x28
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  Il2CppClass **v79; // x0
  PartyOrganizationListViewItem_o *v80; // x27
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  Il2CppClass **v87; // x0
  struct PartyOrganizationListViewItem_array *v88; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v91; // x0
  __int64 v92; // x0
  int v93; // [xsp+14h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+50h] [xbp-70h]

  if ( (byte_418B50A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_B2C35C(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_B2C35C(&PartyOrganizationListViewItem___TypeInfo, v20);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v21);
    byte_418B50A = 1;
  }
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  v39 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  v40 = (struct PartyOrganizationListViewItem_array *)sub_B2C374(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v39->static_fields->DeckMemberMax);
  this->fields.memberList = v40;
  p_memberList = &this->fields.memberList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.memberList,
    (System_Int32_array **)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.cost = 0;
  v48 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v48,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
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
  v49 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
  v50 = Master_WarQuestSelectionMaster;
  if ( v49 >= 1 )
  {
    v51 = 0;
    while ( 1 )
    {
      if ( v51 >= v49 )
      {
LABEL_67:
        v91 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v91, 0LL);
      }
      v52 = *(_QWORD *)(v50 + 8LL * (int)v51 + 32);
      if ( !v52 )
        break;
      if ( *(_DWORD *)(v52 + 56) == index + 1 )
      {
        if ( !v48 )
          break;
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v48,
                                           *(_DWORD *)(v52 + 32),
                                           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v48,
            *(_DWORD *)(v52 + 32),
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v49 = *(_DWORD *)(v50 + 24);
      if ( (int)++v51 >= v49 )
        goto LABEL_23;
    }
LABEL_66:
    sub_B2C434(Master_WarQuestSelectionMaster, v35);
  }
LABEL_23:
  if ( !v48 )
    goto LABEL_66;
  v53 = System_Collections_Generic_List_int___ToArray(
          v48,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v53;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.waveBattleEnemyClassIds,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = deck;
  Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)BalanceConfig_TypeInfo;
  }
  v61 = 0;
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
    if ( v61 >= static_fields->DeckMemberMax )
      break;
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    if ( v61 >= static_fields->DeckMainMemberMax )
    {
      v66 = v61 + 1;
      if ( !UserServantList )
        goto LABEL_66;
    }
    else
    {
      v63 = v60->fields.deckInfo;
      if ( !v63 )
        goto LABEL_66;
      svts = v63->fields.svts;
      if ( !svts )
        goto LABEL_66;
      if ( v93 + v61 >= svts->max_length )
        goto LABEL_67;
      v65 = *((_QWORD *)&svts->m_Items[v93] + v61);
      if ( !v65 )
        goto LABEL_66;
      v66 = *(_DWORD *)(v65 + 60);
      if ( !UserServantList )
        goto LABEL_66;
    }
    if ( v61 >= UserServantList->max_length )
      goto LABEL_67;
    v67 = UserServantList->m_Items[v61];
    v68 = *p_memberList;
    if ( v67 )
    {
      v69 = *(_OWORD *)&v67->fields.id.fields.fakeValue;
      *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v67->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v98.fields.fakeValue = v69;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v97 = v98;
      v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v97, 0LL);
      EquipList_27004044 = UserEventDeckEntity__GetEquipList_27004044(v60, v70, 0LL);
      v72 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32205676(
        v72,
        v61,
        v67,
        EquipList_27004044,
        setupInfo,
        questRestrictionInfo,
        0LL,
        v66,
        0LL);
      if ( !v68 )
        goto LABEL_66;
      if ( v72 )
      {
        Master_WarQuestSelectionMaster = sub_B2C41C(v72, v68->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_68;
      }
      if ( v61 >= v68->max_length )
        goto LABEL_67;
      v79 = &v68->obj.klass + v61;
      v79[4] = (Il2CppClass *)v72;
      sub_B2C2F8((BattleServantConfConponent_o *)(v79 + 4), (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
      v60 = deck;
    }
    else
    {
      v80 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32212232(v80, v61, 0, setupInfo, questRestrictionInfo, 1, v66, 0LL);
      if ( !v68 )
        goto LABEL_66;
      if ( v80 )
      {
        Master_WarQuestSelectionMaster = sub_B2C41C(v80, v68->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
        {
LABEL_68:
          v92 = sub_B2C454(Master_WarQuestSelectionMaster);
          sub_B2C400(v92, 0LL);
        }
      }
      if ( v61 >= v68->max_length )
        goto LABEL_67;
      v87 = &v68->obj.klass + v61;
      v87[4] = (Il2CppClass *)v80;
      sub_B2C2F8((BattleServantConfConponent_o *)(v87 + 4), (System_Int32_array **)v80, v81, v82, v83, v84, v85, v86);
    }
    v88 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_66;
    if ( v61 >= v88->max_length )
      goto LABEL_67;
    Master_WarQuestSelectionMaster = (__int64)v88->m_Items[v61];
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_66;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_WarQuestSelectionMaster,
      this->fields.waveBattleEnemyClassIds,
      0LL);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_66;
    if ( v61 >= memberList->max_length )
      goto LABEL_67;
    Master_WarQuestSelectionMaster = (__int64)memberList->m_Items[v61];
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_66;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_WarQuestSelectionMaster,
                          0LL)
                      + cost;
    ++v61;
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

  if ( (byte_418B51C & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_418B51C = 1;
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
    sub_B2C434(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
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

  if ( (byte_418B511 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v4);
    byte_418B511 = 1;
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
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2 = IsUseOldMaster->fields.sortValue2;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        sub_B2C434(IsUseOldMaster, method);
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
    v52 = sub_B2C460(IsUseOldMaster);
    sub_B2C400(v52, 0LL);
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
  sub_B2C2F8(
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

  if ( (byte_418B516 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418B516 = 1;
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
      v7 = sub_B2C460(v5);
      sub_B2C400(v7, 0LL);
    }
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_15:
      sub_B2C434(v5, method);
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

  if ( (byte_418B517 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418B517 = 1;
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
      v6 = sub_B2C460(v5);
      sub_B2C400(v6, 0LL);
    }
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_13:
      sub_B2C434(v5, method);
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
    sub_B2C434(this, *(_QWORD *)&num);
  }
  if ( v7->max_length <= num )
  {
LABEL_9:
    v9 = sub_B2C460(this);
    sub_B2C400(v9, 0LL);
  }
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void __fastcall PartyListViewItem__ClearMember_31922084(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  BalanceConfig_c *v5; // x0
  __int64 v6; // x0

  if ( (byte_418B515 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418B515 = 1;
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
      v6 = sub_B2C460(v5);
      sub_B2C400(v6, 0LL);
    }
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_15:
      sub_B2C434(v5, method);
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

  if ( (byte_418B510 & 1) == 0 )
  {
    sub_B2C35C(&PartyListViewItem_TypeInfo, method);
    byte_418B510 = 1;
  }
  v3 = (PartyListViewItem_o *)sub_B2C42C(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_B2C434(v5, v6);
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
  if ( (byte_418B520 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_B2C35C(&BalanceConfig_TypeInfo, item);
    byte_418B520 = 1;
  }
  if ( !item )
LABEL_18:
    sub_B2C434(this, item);
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
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  __int64 v9; // x1
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v12; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *AssetName; // x0
  __int64 v15; // x0

  if ( (byte_418B52C & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v7);
    byte_418B52C = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
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
      v15 = sub_B2C460(AssetName);
      sub_B2C400(v15, 0LL);
    }
    v12 = memberList->m_Items[i];
    if ( v12 )
    {
      AssetName = (EventMissionProgressRequest_Argument_ProgressData_o *)PartyOrganizationListViewItem__GetAssetName(
                                                                           v12,
                                                                           0LL);
      if ( AssetName )
      {
        if ( !v8 )
          goto LABEL_19;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          AssetName,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  if ( !v8 )
LABEL_19:
    sub_B2C434(AssetName, v9);
  if ( v8->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall PartyListViewItem__GetCommandCardList(
        PartyListViewItem_o *this,
        int32_t typeMax,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array *v7; // x21
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v10; // x0
  _QWORD *p_image; // x0
  unsigned __int64 j; // x8
  unsigned __int64 v13; // x10
  __int64 v15; // x0

  if ( (byte_418B52B & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&typeMax);
    sub_B2C35C(&int___TypeInfo, v5);
    byte_418B52B = 1;
  }
  v7 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)typeMax);
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
      sub_B2C434(p_image, v6);
    if ( i >= memberList->max_length )
    {
LABEL_22:
      v15 = sub_B2C460(p_image);
      sub_B2C400(v15, 0LL);
    }
    v10 = memberList->m_Items[i];
    if ( v10 )
    {
      p_image = PartyOrganizationListViewItem__GetCommandCardList(v10, 0LL);
      if ( p_image )
      {
        if ( typeMax >= 1 )
        {
          for ( j = 0LL; (__int64)j < typeMax; ++j )
          {
            v13 = *((unsigned int *)p_image + 6);
            if ( (__int64)j < (int)v13 )
            {
              if ( !v7 )
                goto LABEL_23;
              if ( j >= v7->max_length || j >= v13 )
                goto LABEL_22;
              v7->m_Items[j + 1] += *((_DWORD *)p_image + j + 8);
            }
          }
        }
      }
    }
  }
  return v7;
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

  if ( (byte_418B51E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_int___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Intersect_int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Item__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_418B51E = 1;
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(SvtId, 0LL) >= 1 )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v29, 0LL) >= 1 )
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
          DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                      v51 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*((_QWORD *)v45 + 2) + 8 * v49 + 32);
                      if ( v51 )
                      {
                        if ( v49 >= (unsigned int)v45[6] )
                          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                        if ( v51[1].monitor )
                        {
                          if ( v49 >= (unsigned int)v45[6] )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
                                  (const MethodInfo_1A91638 *)Method_System_Linq_Enumerable_Intersect_int___);
                          DeckConditionServantNumAndPosition = System_Linq_Enumerable__ToArray_int_(
                                                                 v55,
                                                                 (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
                          if ( v49 >= *((unsigned int *)v46 + 6) )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                          v56 = *(_DWORD *)(v46[2] + 4 * v49 + 32);
                          if ( v56 == 1 )
                          {
                            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)DeckConditionServantNumAndPosition,
                                                                           (const MethodInfo_173832C *)Method_System_Linq_Enumerable_Any_int___);
                            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
                              goto LABEL_146;
                          }
                          else
                          {
                            if ( v49 >= *((unsigned int *)v46 + 6) )
                              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                            if ( v56 == 2 )
                            {
                              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)DeckConditionServantNumAndPosition,
                                                                             (const MethodInfo_173832C *)Method_System_Linq_Enumerable_Any_int___);
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
        v70 = sub_B2C460(DeckConditionServantNumAndPosition);
        sub_B2C400(v70, 0LL);
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
        sub_B2C434(DeckConditionServantNumAndPosition, method);
      v62 = *(_QWORD *)&v60->fields.baseSvtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&v60->fields.baseSvtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v72.fields.currentCryptoKey = v62;
      *(_QWORD *)&v72.fields.fakeValue = v61;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v72, 0LL);
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
            if ( v63 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v73, 0LL) )
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
  __int64 v11; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v15; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v17; // x8
  __int64 v18; // x0

  if ( (byte_418B51D & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_418B51D = 1;
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
    sub_B2C434(questRestrictionInfo, v11);
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
      v18 = sub_B2C460(questRestrictionInfo);
      sub_B2C400(v18, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x20
  __int64 EquipUserSvtId; // x0
  __int64 v8; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v10; // x22
  int max_length; // w9
  Il2CppClass **v12; // x8
  PartyOrganizationListViewItem_o *v13; // x21
  __int64 v15; // x0

  if ( (byte_418B523 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_418B523 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
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
      v15 = sub_B2C460(EquipUserSvtId);
      sub_B2C400(v15, 0LL);
    }
    v12 = &memberList->obj.klass + v10;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( v13 )
    {
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v12[4], 0LL);
      if ( EquipUserSvtId >= 1 )
      {
        EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v13, 0LL);
        if ( !v6 )
          goto LABEL_12;
        System_Collections_Generic_List_long___Add(
          v6,
          EquipUserSvtId,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      }
      memberList = this->fields.memberList;
      ++v10;
      if ( memberList )
        continue;
    }
    goto LABEL_12;
  }
  if ( !v6 )
LABEL_12:
    sub_B2C434(EquipUserSvtId, v8);
  return System_Collections_Generic_List_long___ToArray(
           v6,
           (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  __int64 v22; // x0

  v6 = this;
  if ( (byte_418B52A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, eventId);
    this = (PartyListViewItem_o *)sub_B2C35C(&EventUpValInfo___TypeInfo, v7);
    byte_418B52A = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_25:
      sub_B2C434(this, eventId);
    eventIdList = setupInfo->fields.eventIdList;
    if ( eventIdList )
    {
      if ( !(_DWORD)eventIdList )
      {
LABEL_26:
        v22 = sub_B2C460(this);
        sub_B2C400(v22, 0LL);
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
  v11 = (EventUpValInfo_array *)sub_B2C374(EventUpValInfo___TypeInfo, (unsigned int)v10->static_fields->DeckMemberMax);
  *eventUpValList = v11;
  sub_B2C2F8((BattleServantConfConponent_o *)eventUpValList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
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
  __int64 v12; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  int32_t FollowerIndex; // w22
  DeckServantData_o *v16; // x8
  QuestRestrictionInfo_o *v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x0
  struct QuestRestrictionInfo_o *v20; // x8
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418B50D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, deck);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    byte_418B50D = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
      v20 = this->fields.questRestrictionInfo;
      if ( v20 )
      {
        if ( fixNpcFollowerInfoList )
          return PartyListViewItem__GetSupportInitIndex(this, fixNpcFollowerInfoList, v18);
        else
          return v20->fields.supportInitIndex;
      }
      return 0;
    }
LABEL_35:
    sub_B2C434(questRestrictionInfo, deck);
  }
  if ( !deck )
    goto LABEL_35;
  questRestrictionInfo = (QuestRestrictionInfo_o *)UserEventDeckEntity__GetFollowerIndexList(deck, 0LL);
  if ( !questRestrictionInfo )
    goto LABEL_35;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_int__o *)questRestrictionInfo,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v11 )
      break;
    deckInfo = deck->fields.deckInfo;
    if ( !deckInfo )
      sub_B2C434(v11, v12);
    svts = deckInfo->fields.svts;
    if ( !svts )
      sub_B2C434(v11, v12);
    FollowerIndex = v23.fields.current;
    if ( v23.fields.current - 1 >= svts->max_length )
    {
      v19 = sub_B2C460(v11);
      sub_B2C400(v19, 0LL);
    }
    v16 = svts->m_Items[v23.fields.current - 1];
    if ( !v16 )
      sub_B2C434(v11, v12);
    v17 = this->fields.questRestrictionInfo;
    if ( !v17 )
      sub_B2C434(0LL, v12);
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(v17, v16->fields.initPos, 0LL) )
      goto LABEL_20;
  }
  FollowerIndex = 0;
LABEL_20:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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

  if ( (byte_418B529 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418B529 = 1;
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
      sub_B2C434(v8, method);
    if ( v3 >= memberList->max_length )
    {
      v10 = sub_B2C460(v8);
      sub_B2C400(v10, 0LL);
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
  __int64 v5; // x1
  System_Boolean_array *v6; // x20
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v9; // x8
  BalanceConfig_c *v10; // x0
  __int64 v12; // x0

  if ( (byte_418B528 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&bool___TypeInfo, v3);
    byte_418B528 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v6 = (System_Boolean_array *)sub_B2C374(bool___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  for ( i = 0LL; ; ++i )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v10->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( i >= memberList->max_length )
      goto LABEL_20;
    v9 = memberList->m_Items[i];
    if ( v9 )
    {
      if ( !v6 )
LABEL_19:
        sub_B2C434(v10, v5);
      if ( i >= v6->max_length )
      {
LABEL_20:
        v12 = sub_B2C460(v10);
        sub_B2C400(v12, 0LL);
      }
      v6->m_Items[i + 4] = v9->fields.isFollower;
    }
  }
  return v6;
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
    sub_B2C434(this, num);
  if ( memberList->max_length <= num )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
    sub_B2C434(this, npcSvtIds);
  myServantNumMax = (unsigned int)questRestrictionInfo->fields.myServantNumMax;
  max_length = npcSvtIds->max_length;
  while ( (int)myServantNumMax < (int)max_length )
  {
    if ( (unsigned int)myServantNumMax >= max_length )
    {
      v6 = sub_B2C460(myServantNumMax);
      sub_B2C400(v6, 0LL);
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

  if ( (byte_418B51F & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_418B51F = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_49:
      sub_B2C434(questRestrictionInfo, method);
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
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
          v25 = sub_B2C460(questRestrictionInfo);
          sub_B2C400(v25, 0LL);
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  BalanceConfig_c *v17; // x0
  int32_t supportInitIndex; // [xsp+8h] [xbp-58h]
  int myServantNumMax; // [xsp+Ch] [xbp-54h]

  v4 = this;
  if ( (byte_418B50E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, fixNpcFollowerInfoList);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v6);
    sub_B2C35C(&Method_System_Func_FollowerInfo__bool___ctor__, v7);
    sub_B2C35C(&System_Func_FollowerInfo__bool__TypeInfo, v8);
    sub_B2C35C(&Method_PartyListViewItem___c__DisplayClass25_0__GetSupportInitIndex_b__0__, v9);
    this = (PartyListViewItem_o *)sub_B2C35C(&PartyListViewItem___c__DisplayClass25_0_TypeInfo, v10);
    byte_418B50E = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_17:
    sub_B2C434(this, fixNpcFollowerInfoList);
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
        v17 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v17 = BalanceConfig_TypeInfo;
        }
        if ( v13 >= v17->static_fields->DeckMemberMax )
          return supportInitIndex;
        v14 = (PartyListViewItem___c__DisplayClass25_0_o *)sub_B2C42C(PartyListViewItem___c__DisplayClass25_0_TypeInfo);
        PartyListViewItem___c__DisplayClass25_0___ctor(v14, 0LL);
        if ( !v14 )
          goto LABEL_17;
        v14->fields.chkIdx = ++v13;
        v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v15,
          (Il2CppObject *)v14,
          Method_PartyListViewItem___c__DisplayClass25_0__GetSupportInitIndex_b__0__,
          (const MethodInfo_2711C04 *)Method_System_Func_FollowerInfo__bool___ctor__);
        v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
                (System_Func_TSource__bool__o *)v15,
                (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      }
      while ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                v16,
                (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) );
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
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  ServantEntity_array *v12; // x20
  unsigned __int64 v13; // x24
  BattleServantConfConponent_o *i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v16; // x8
  System_Int32_array **servantEntity; // x22
  BalanceConfig_c *v18; // x0
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_418B526 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&ServantEntity___TypeInfo, v3);
    byte_418B526 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v12 = (ServantEntity_array *)sub_B2C374(ServantEntity___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v13 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v12->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v18 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v18->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( v13 >= memberList->max_length )
      goto LABEL_22;
    v16 = memberList->m_Items[v13];
    if ( v16 )
    {
      if ( !v12 )
LABEL_21:
        sub_B2C434(v18, v5);
      servantEntity = (System_Int32_array **)v16->fields.servantEntity;
      if ( servantEntity )
      {
        v18 = (BalanceConfig_c *)sub_B2C41C(servantEntity, v12->obj.klass->_1.element_class);
        if ( !v18 )
        {
          v21 = sub_B2C454(0LL);
          sub_B2C400(v21, 0LL);
        }
      }
      if ( v13 >= v12->max_length )
      {
LABEL_22:
        v20 = sub_B2C460(v18);
        sub_B2C400(v20, 0LL);
      }
      i->klass = (BattleServantConfConponent_c *)servantEntity;
      sub_B2C2F8(i, servantEntity, v6, v7, v8, v9, v10, v11);
    }
    ++v13;
  }
  return v12;
}


System_String_array *__fastcall PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  System_String_array *v6; // x20
  unsigned __int64 v7; // x24
  BattleServantConfConponent_o *i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v10; // x0
  System_Int32_array **SvtNameText; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x22
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_418B527 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&string___TypeInfo, v3);
    byte_418B527 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v6 = (System_String_array *)sub_B2C374(string___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v7 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v6->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    SvtNameText = (System_Int32_array **)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (System_Int32_array **)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v7 >= SvtNameText[23]->m_Items[32] )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( v7 >= memberList->max_length )
      goto LABEL_22;
    v10 = memberList->m_Items[v7];
    if ( v10 )
    {
      SvtNameText = (System_Int32_array **)PartyOrganizationListViewItem__get_SvtNameText(v10, 0LL);
      if ( !v6 )
LABEL_21:
        sub_B2C434(SvtNameText, v5);
      v18 = SvtNameText;
      if ( SvtNameText )
      {
        SvtNameText = (System_Int32_array **)sub_B2C41C(SvtNameText, v6->obj.klass->_1.element_class);
        if ( !SvtNameText )
        {
          v21 = sub_B2C454(0LL);
          sub_B2C400(v21, 0LL);
        }
      }
      if ( v7 >= v6->max_length )
      {
LABEL_22:
        v20 = sub_B2C460(SvtNameText);
        sub_B2C400(v20, 0LL);
      }
      i->klass = (BattleServantConfConponent_c *)v18;
      sub_B2C2F8(i, v18, v12, v13, v14, v15, v16, v17);
    }
    ++v7;
  }
  return v6;
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
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **deckName; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t max_length; // w22
  PartyListViewItem_o *v20; // x19
  int64_t userEquipId; // x20
  DeckServant_o *v22; // x21
  __int64 v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct PartyOrganizationListViewItem_array *v30; // x24
  __int64 v31; // x25
  unsigned int v32; // w27
  __int64 v33; // x26
  PartyOrganizationListViewItem_o *v34; // x22
  __int64 v35; // x21
  int v36; // w19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v38; // q0
  __int128 v39; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  _DWORD *v47; // x22
  __int64 v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x0
  __int64 v57; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59[2]; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_418B521 & 1) == 0 )
  {
    sub_B2C35C(&DeckServantData_TypeInfo, baseItem);
    sub_B2C35C(&DeckServant_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B2C35C(&UserDeckEntity_TypeInfo, v7);
    byte_418B521 = 1;
  }
  memset(&v59[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v8 = sub_B2C42C(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor((UserDeckEntity_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_30;
  *(_QWORD *)(v8 + 16) = this->fields.id;
  *(_DWORD *)(v8 + 32) = this->fields.index + 1;
  deckName = (System_Int32_array **)this->fields.deckName;
  *(_QWORD *)(v8 + 40) = deckName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 40), deckName, v11, v12, v13, v14, v15, v16);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_30;
  max_length = memberList->max_length;
  v20 = baseItem ? baseItem : this;
  userEquipId = v20->fields.userEquipId;
  v22 = (DeckServant_o *)sub_B2C42C(DeckServant_TypeInfo);
  DeckServant___ctor_16762468(v22, max_length, userEquipId, 0LL);
  *(_QWORD *)(v8 + 48) = v22;
  v23 = v8 + 48;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)v22, v24, v25, v26, v27, v28, v29);
  v30 = v20->fields.memberList;
  if ( !v30 )
    goto LABEL_30;
  v31 = *(_QWORD *)&v30->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0;
    v33 = 8LL;
    while ( 1 )
    {
      v34 = *(PartyOrganizationListViewItem_o **)((char *)&v30->obj.klass + v33 * 4);
      v35 = sub_B2C42C(DeckServantData_TypeInfo);
      DeckServantData___ctor((DeckServantData_o *)v35, 0LL);
      if ( !v35 )
        break;
      v36 = v32 + 1;
      *(_DWORD *)(v35 + 16) = v32 + 1;
      if ( !v34 )
        break;
      userServantEntity = v34->fields.userServantEntity;
      if ( userServantEntity )
      {
        v39 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        v38 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      }
      else
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v59, 0LL, 0LL);
        v39 = *(_OWORD *)&v59[0].fields.currentCryptoKey;
        v38 = *(_OWORD *)&v59[0].fields.fakeValue;
      }
      *(_OWORD *)&v59[1].fields.currentCryptoKey = v39;
      *(_OWORD *)&v59[1].fields.fakeValue = v38;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v58 = v59[1];
      *(_QWORD *)(v35 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
      *(_BYTE *)(v35 + 40) = v34->fields.isFollower;
      EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(v34, 0LL);
      *(_QWORD *)(v35 + 32) = EquipList;
      sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 32), EquipList, v41, v42, v43, v44, v45, v46);
      *(_DWORD *)(v35 + 60) = v34->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v23 )
        break;
      v47 = *(_DWORD **)(*(_QWORD *)v23 + 16LL);
      if ( !v47 )
        break;
      v48 = sub_B2C41C(v35, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
      if ( !v48 )
      {
        v57 = sub_B2C454(0LL);
        sub_B2C400(v57, 0LL);
      }
      if ( v32 < v47[6] )
      {
        *(_QWORD *)&v47[v33] = v35;
        sub_B2C2F8((BattleServantConfConponent_o *)&v47[v33], (System_Int32_array **)v35, v49, v50, v51, v52, v53, v54);
        if ( v36 >= (int)v31 )
          return (UserDeckEntity_o *)v8;
        v33 += 2LL;
        ++v32;
        if ( v36 < v30->max_length )
          continue;
      }
      v55 = sub_B2C460(v48);
      sub_B2C400(v55, 0LL);
    }
LABEL_30:
    sub_B2C434(v9, v10);
  }
  return (UserDeckEntity_o *)v8;
}


UserEventDeckEntity_o *__fastcall PartyListViewItem__GetUserEventDeck(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x23
  __int64 UserId; // x0
  __int64 v9; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x20
  int64_t userEquipId; // x21
  DeckServant_o *v12; // x22
  __int64 v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct PartyOrganizationListViewItem_array *v20; // x8
  unsigned __int64 v21; // x20
  unsigned __int64 max_length; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v24; // x22
  struct QuestRestrictionInfo_o *v25; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  __int64 v28; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v30; // q0
  __int128 v31; // q1
  System_Int32_array **EquipList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t InitPos_k__BackingField; // w8
  __int64 v40; // x9
  int v41; // w8
  unsigned int *v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  unsigned int *v49; // x0
  __int64 v51; // x0
  __int64 v52; // x0
  UserEventDeckEntity_o *v53; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55[2]; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_418B522 & 1) == 0 )
  {
    sub_B2C35C(&DeckServantData_TypeInfo, method);
    sub_B2C35C(&DeckServant_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B2C35C(&UserEventDeckEntity_TypeInfo, v6);
    byte_418B522 = 1;
  }
  memset(&v55[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v7 = sub_B2C42C(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v7, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v7 )
    goto LABEL_54;
  *(_QWORD *)(v7 + 16) = UserId;
  *(_DWORD *)(v7 + 24) = this->fields.id;
  *(_DWORD *)(v7 + 28) = this->fields.index + 1;
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_54;
  userEquipId = this->fields.userEquipId;
  v12 = (DeckServant_o *)sub_B2C42C(DeckServant_TypeInfo);
  DeckServant___ctor_16762468(v12, memberList->max_length, userEquipId, 0LL);
  *(_QWORD *)(v7 + 32) = v12;
  v13 = v7 + 32;
  v53 = (UserEventDeckEntity_o *)v7;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)v12, v14, v15, v16, v17, v18, v19);
  v20 = this->fields.memberList;
  if ( !v20 )
LABEL_54:
    sub_B2C434(UserId, v9);
  v21 = 0LL;
  while ( 1 )
  {
    max_length = v20->max_length;
    if ( (__int64)v21 >= (int)max_length )
      return v53;
    if ( v21 >= max_length )
      goto LABEL_55;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v24 = v20->m_Items[v21];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_25;
    }
    UserId = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    v25 = this->fields.questRestrictionInfo;
    if ( (UserId & 1) != 0 )
    {
      if ( !v25 )
        goto LABEL_54;
      isNpcEditablePos = v25->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v24 || !v25 )
        goto LABEL_54;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v24->fields._InitPos_k__BackingField,
                        0LL);
      v25 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v25 )
        goto LABEL_25;
    }
    UserId = QuestRestrictionInfo__IsNpcMulitipleOrOnly(v25, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_54;
      if ( v24->fields.isFixNpc
        && v24->fields.isFollower
        && !isNpcEditablePos
        && !v24->fields.isMyServantOrNpcRestriction )
      {
        ++v21;
        goto LABEL_50;
      }
    }
LABEL_25:
    v28 = sub_B2C42C(DeckServantData_TypeInfo);
    DeckServantData___ctor((DeckServantData_o *)v28, 0LL);
    if ( !v28 )
      goto LABEL_54;
    *(_DWORD *)(v28 + 16) = v21 + 1;
    if ( !v24 )
      goto LABEL_54;
    userServantEntity = v24->fields.userServantEntity;
    if ( userServantEntity )
    {
      v31 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      v30 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    }
    else
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v55, 0LL, 0LL);
      v31 = *(_OWORD *)&v55[0].fields.currentCryptoKey;
      v30 = *(_OWORD *)&v55[0].fields.fakeValue;
    }
    *(_OWORD *)&v55[1].fields.currentCryptoKey = v31;
    *(_OWORD *)&v55[1].fields.fakeValue = v30;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v54 = v55[1];
    *(_QWORD *)(v28 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v54, 0LL);
    *(_BYTE *)(v28 + 40) = v24->fields.isFollower;
    EquipList = (System_Int32_array **)PartyOrganizationListViewItem__GetEquipList(v24, 0LL);
    *(_QWORD *)(v28 + 32) = EquipList;
    sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 32), EquipList, v33, v34, v35, v36, v37, v38);
    InitPos_k__BackingField = v24->fields._InitPos_k__BackingField;
    v40 = *(_QWORD *)(v28 + 24);
    *(_QWORD *)(v28 + 48) = 0LL;
    *(_DWORD *)(v28 + 60) = InitPos_k__BackingField;
    if ( v40 )
    {
      v41 = 0;
LABEL_42:
      if ( (v41 & isNpcEditablePos & 1) != 0 )
      {
        *(_QWORD *)(v28 + 48) = v24->fields.npcFollowerSvtId;
        if ( v24->fields.isFixNpc )
          *(_BYTE *)(v28 + 40) = 0;
      }
      goto LABEL_45;
    }
    if ( !v24->fields.isMyServantOrNpcRestriction || !v24->fields.isFollower )
    {
      v41 = !v24->fields.isMyServantOrNpcRestriction;
      goto LABEL_42;
    }
    *(_QWORD *)(v28 + 48) = v24->fields.npcFollowerSvtId;
LABEL_45:
    if ( !*(_QWORD *)v13 )
      goto LABEL_54;
    v42 = *(unsigned int **)(*(_QWORD *)v13 + 16LL);
    if ( !v42 )
      goto LABEL_54;
    UserId = sub_B2C41C(v28, *(_QWORD *)(*(_QWORD *)v42 + 64LL));
    if ( !UserId )
    {
      v52 = sub_B2C454(0LL);
      sub_B2C400(v52, 0LL);
    }
    if ( v21 >= v42[6] )
    {
LABEL_55:
      v51 = sub_B2C460(UserId);
      sub_B2C400(v51, 0LL);
    }
    v49 = &v42[2 * v21];
    *((_QWORD *)v49 + 4) = v28;
    sub_B2C2F8((BattleServantConfConponent_o *)(v49 + 8), (System_Int32_array **)v28, v43, v44, v45, v46, v47, v48);
    ++v21;
LABEL_50:
    v20 = this->fields.memberList;
    if ( !v20 )
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

  if ( (byte_418B50C & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userServantList);
    byte_418B50C = 1;
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
        sub_B2C434(v7, userServantList);
      if ( v6 >= npcSvtIds->max_length )
      {
LABEL_18:
        v9 = sub_B2C460(v7);
        sub_B2C400(v9, 0LL);
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
      sub_B2C434(this, userSvtId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
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

  if ( (byte_418B51A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418B51A = 1;
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
      v8 = sub_B2C460(v4);
      sub_B2C400(v8, 0LL);
    }
    v6 = memberList->m_Items[v3];
    if ( !v6 )
LABEL_14:
      sub_B2C434(v4, method);
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

  if ( (byte_418B519 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418B519 = 1;
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
      v10 = sub_B2C460(v4);
      sub_B2C400(v10, 0LL);
    }
    v6 = memberList->m_Items[v3];
    if ( !v6 )
LABEL_16:
      sub_B2C434(v4, method);
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

  if ( (byte_418B51B & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418B51B = 1;
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
      v7 = sub_B2C460(v4);
      sub_B2C400(v7, 0LL);
    }
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_B2C434(v4, method);
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
  if ( (byte_418B524 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
    byte_418B524 = 1;
  }
  if ( svtId < 1 )
    return 0;
  memberList = v4->fields.memberList;
  if ( !memberList )
LABEL_17:
    sub_B2C434(this, *(_QWORD *)&svtId);
  max_length = memberList->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
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
    this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(EquipSvtId, 0LL);
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

  if ( (byte_418B50B & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, deck);
    byte_418B50B = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_31:
    sub_B2C434(questRestrictionInfo, deck);
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
      v13 = sub_B2C460(questRestrictionInfo);
      sub_B2C400(v13, 0LL);
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
    if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
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


bool __fastcall PartyListViewItem__IsSpecificMenuKind_31930304(
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

  if ( (byte_418B518 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418B518 = 1;
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
    v8 = sub_B2C460(v4);
    sub_B2C400(v8, 0LL);
  }
  v4 = memberList->m_Items[0];
  if ( !v4 )
LABEL_17:
    sub_B2C434(v4, method);
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

  if ( (byte_418B512 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418B512 = 1;
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
      v9 = sub_B2C460(v7);
      sub_B2C400(v9, 0LL);
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
      sub_B2C434(v7, method);
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

  if ( (byte_418B513 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, item);
    byte_418B513 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_21:
    sub_B2C434(v5, v6);
  this->fields.menuKind = item->fields.menuKind;
  this->fields.maxCost = item->fields.maxCost;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
      v5 = (PartyOrganizationListViewItem_o *)sub_B2C41C(v5, v29->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v50 = sub_B2C454(0LL);
        sub_B2C400(v50, 0LL);
      }
    }
    if ( v40 >= v29->max_length )
      goto LABEL_22;
    v37 = &v29->obj.klass + (int)v40;
    v37[4] = (Il2CppClass *)v36;
    sub_B2C2F8((BattleServantConfConponent_o *)(v37 + 4), v36, v30, v31, v32, v33, v34, v35);
    v38 = this->fields.memberList;
    if ( !v38 )
      goto LABEL_21;
    if ( v40 >= v38->max_length )
    {
LABEL_22:
      v49 = sub_B2C460(v5);
      sub_B2C400(v49, 0LL);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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

  if ( (byte_418B514 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&num);
    byte_418B514 = 1;
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
      v15 = sub_B2C460(v14);
      sub_B2C400(v15, 0LL);
    }
    v9 = &memberList->obj.klass + (int)i;
    v10 = (PartyOrganizationListViewItem_o *)v9[4];
    if ( !v10 )
LABEL_16:
      sub_B2C434(v14, *(_QWORD *)&num);
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
    || (PartyOrganizationListViewItem__Modify_32214720((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberList) == 0LL) )
  {
LABEL_11:
    sub_B2C434(this, *(_QWORD *)&num);
  }
  if ( v10->max_length <= num )
  {
LABEL_12:
    v13 = sub_B2C460(this);
    sub_B2C400(v13, 0LL);
  }
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember_31930328(
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
    sub_B2C434(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_B2C41C(member, v15->obj.klass->_1.element_class);
    if ( !this )
    {
      v21 = sub_B2C454(0LL);
      sub_B2C400(v21, 0LL);
    }
  }
  if ( v15->max_length <= idx )
    goto LABEL_18;
  v16 = &v15->obj.klass + idx;
  v16[4] = (Il2CppClass *)member;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 4), (System_Int32_array **)member, v9, v10, v11, v12, v13, v14);
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
    v20 = sub_B2C460(this);
    sub_B2C400(v20, 0LL);
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
  __int64 v20; // x1
  signed int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v22; // x28
  unsigned int v23; // w20
  FollowerInfo_o *v24; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x27
  struct QuestRestrictionInfo_o *v28; // x8
  int32_t v29; // w0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  QuestRestrictionInfo_o *v36; // x19
  QuestRestrictionInfo_o *v37; // x24
  __int64 v38; // x19
  bool result; // w0
  __int64 v40; // x0
  int32_t *v41; // [xsp+8h] [xbp-78h]
  __int64 value; // [xsp+10h] [xbp-70h]
  PartyListViewItem_o *v43; // [xsp+18h] [xbp-68h]
  UserServantEntity_o *v44; // [xsp+20h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_418B50F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, follower);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v15);
    sub_B2C35C(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_418B50F = 1;
  }
  v44 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !npcFollowerInfoList )
    goto LABEL_39;
  max_length = npcFollowerInfoList->max_length;
  if ( max_length < 1 )
    return 0;
  v41 = followerClassId;
  v22 = Master_WarQuestSelectionMaster;
  v23 = 0;
  v43 = this;
  while ( 1 )
  {
    if ( v23 >= max_length )
    {
      v40 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v40, 0LL);
    }
    v24 = npcFollowerInfoList->m_Items[v23];
    if ( !v24 )
      goto LABEL_39;
    if ( v24->fields.npcFollowerSvtId == npcFollowerSvtId )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_39;
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
      ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v24, 0, ReturnTypeByQuestId, 0LL);
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Master_WarQuestSelectionMaster, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(Master_WarQuestSelectionMaster, &entity, npcFollowerSvtId, (const MethodInfo_24E4354 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v28 = this->fields.questRestrictionInfo;
        if ( !v28 )
          goto LABEL_39;
        v29 = FollowerInfo__GetReturnTypeByQuestId(v28->fields.questId, 0LL);
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)FollowerInfo__GetNpcServantIndividuality(v24, 0, v29, 0LL);
        if ( !this->fields.questRestrictionInfo )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_31244412(this->fields.questRestrictionInfo, (System_Int32_array *)Master_WarQuestSelectionMaster, pos, 0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          break;
        goto LABEL_34;
      }
      if ( !v22 )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(v22, &v44, npcFollowerSvtId, (const MethodInfo_24E4354 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        goto LABEL_27;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v44;
      if ( !v44 )
        goto LABEL_39;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v44, 0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v44;
        if ( !v44 )
          goto LABEL_39;
        v36 = this->fields.questRestrictionInfo;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)NpcServantFollowerEntity__GetOverwriteIndividuality((NpcServantFollowerEntity_o *)v44, 0LL);
        if ( !v36 )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_31244412(v36, (System_Int32_array *)Master_WarQuestSelectionMaster, pos, 0LL);
      }
      else
      {
LABEL_27:
        if ( !ServantLeaderInfo )
          goto LABEL_39;
        v37 = this->fields.questRestrictionInfo;
        v38 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          value = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v46.fields.fakeValue = value;
        }
        *(_QWORD *)&v46.fields.currentCryptoKey = v38;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v46, 0LL);
        if ( !v37 )
          goto LABEL_39;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(v37, (int32_t)Master_WarQuestSelectionMaster, ServantLeaderInfo->fields.limitCount, ServantLeaderInfo->fields.dispLimitCount, pos, 0, 0LL);
        this = v43;
      }
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        break;
    }
LABEL_34:
    max_length = npcFollowerInfoList->max_length;
    if ( (int)++v23 >= max_length )
      return 0;
  }
  *follower = v24;
  sub_B2C2F8((BattleServantConfConponent_o *)follower, (System_Int32_array **)v24, v30, v31, v32, v33, v34, v35);
  if ( !ServantLeaderInfo )
LABEL_39:
    sub_B2C434(Master_WarQuestSelectionMaster, v20);
  result = 1;
  *v41 = ServantLeaderInfo->fields.classId;
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
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
  }
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_B2C434(this, num1);
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
        v5 = sub_B2C460(this);
        sub_B2C400(v5, 0LL);
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
    sub_B2C434(this, method);
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

  if ( (byte_418B525 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10357/*"PARTY_ORGANIZATION_NAME_BASE"*/, v3);
    byte_418B525 = 1;
  }
  v7 = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10357/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}