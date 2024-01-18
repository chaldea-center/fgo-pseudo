void __fastcall PartyOrganizationRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyOrganizationRootComponent_c *v2; // x8

  if ( (byte_418505C & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRootComponent_TypeInfo, v1);
    byte_418505C = 1;
  }
  PartyOrganizationRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME = 0.5;
  PartyOrganizationRootComponent_TypeInfo->static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 27;
  v2 = PartyOrganizationRootComponent_TypeInfo;
  PartyOrganizationRootComponent_TypeInfo->static_fields->RETURN_TERMINAL_MESSAGE_POSITION_Y = 10;
  v2->static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
  v2->static_fields->SERVANT_COST_5 = 16;
  v2->static_fields->SERVANT_COST_4 = 12;
  v2->static_fields->SERVANT_COST_3 = 7;
  v2->static_fields->SERVANT_COST_2 = 4;
  v2->static_fields->SERVANT_COST_1 = 3;
}


void __fastcall PartyOrganizationRootComponent___ctor(PartyOrganizationRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


int32_t __fastcall PartyOrganizationRootComponent__AutoOrganizationChangeServant(
        PartyOrganizationRootComponent_o *this,
        AutoOrganizationManager_ServantData_array_array *dataLists,
        int32_t deckNum,
        int32_t costNum,
        int32_t remainCost,
        const MethodInfo *method)
{
  __int64 v10; // x1
  unsigned __int64 i; // x23
  AutoOrganizationManager_ServantData_array *v12; // x24
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *v14; // x26
  int32_t v15; // w2
  const MethodInfo *v16; // x5
  PartyServantListViewItem_o *v17; // x0
  PartyServantListViewItem_o *v18; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v20; // q0
  PartyOrganizationRootComponent_o *v21; // x0
  const MethodInfo *v22; // x4
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-70h]

  if ( (byte_4185036 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, dataLists);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_4185036 = 1;
  }
  for ( i = 0LL; ; ++i )
  {
    partyItem = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      partyItem = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= SHIDWORD(partyItem[1].klass->_1.methods) )
      break;
    if ( !dataLists )
      goto LABEL_25;
    if ( i >= dataLists->max_length )
    {
      v24 = sub_B2C460(partyItem);
      sub_B2C400(v24, 0LL);
    }
    v12 = dataLists->m_Items[i];
    if ( v12 )
    {
      partyItem = this->fields.partyItem;
      if ( !partyItem )
        goto LABEL_25;
      partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, i, 0LL);
      if ( !partyItem )
        goto LABEL_25;
      v14 = (PartyOrganizationListViewItem_o *)partyItem;
      if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)partyItem, 0LL) )
      {
        v17 = PartyOrganizationRootComponent__GetAutoOrganizationChangeServant(this, v12, v15, i, remainCost, v16);
        if ( v17 )
        {
          v18 = v17;
          if ( !PartyOrganizationListViewItem__get_IsEmpty(v14, 0LL) )
          {
            partyItem = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MainCost(v14, 0LL);
            userServantEntity = v14->fields.userServantEntity;
            if ( !userServantEntity )
              goto LABEL_25;
            v20 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            costNum += (int)partyItem;
            *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v26.fields.fakeValue = v20;
            remainCost += (int)partyItem;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v25 = v26;
            v21 = (PartyOrganizationRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                        &v25,
                                                        0LL);
            PartyOrganizationRootComponent__SetUseAutoOrganizationServant(v21, v12, (int64_t)v21, 1, v22);
          }
          partyItem = this->fields.partyItem;
          if ( !partyItem )
LABEL_25:
            sub_B2C434(partyItem, dataLists);
          PartyListViewItem__SetMember(partyItem, i, v18, 0LL);
          costNum -= PartyServantListViewItem__get_Cost(v18, 0LL);
          remainCost -= PartyServantListViewItem__get_Cost(v18, 0LL);
        }
      }
    }
  }
  return costNum;
}


void __fastcall PartyOrganizationRootComponent__AutoOrganizationExec(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
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
  int64_t partyListMenu; // x0
  struct PartyListViewItem_o *Item; // x0
  struct PartyListViewItem_o *v34; // x0
  PartyListViewItem_c *v35; // x8
  ListViewSort_o *gc_desc; // x21
  int64_t v37; // x25
  int v38; // w19
  int32_t autoOrganizationMode; // w22
  System_Collections_Generic_List_long__o *v40; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x27
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct PartyListViewItem_o **v43; // x21
  int32_t myServantNumMax; // w9
  int32_t v45; // w8
  int32_t servantNumMax; // w8
  int32_t v47; // w9
  int32_t i; // w22
  BalanceConfig_c *v49; // x0
  int32_t j; // w22
  BalanceConfig_c *v51; // x0
  int32_t DeckNum; // w0
  PartyOrganizationRootComponent_o *v53; // x22
  int32_t v54; // w22
  BalanceConfig_c *v55; // x0
  PartyOrganizationListViewItem_o *v56; // x24
  int32_t k; // w24
  PartyOrganizationListViewItem_o *v58; // x26
  QuestRestrictionInfo_o *v59; // x0
  AutoOrganizationManager_MySvtOrNpcData_o *v60; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v63; // q0
  System_Array_o *v64; // x22
  int32_t RarityBit; // w19
  System_Collections_Generic_List_int__o *v66; // x27
  const MethodInfo *v67; // x3
  PartyOrganizationRootComponent_o *v68; // x22
  struct PartyListViewItem_array *baseDeckItemList; // x10
  int max_length; // w8
  int m; // w19
  Il2CppClass **v72; // x8
  PartyListViewItem_o *v73; // x28
  struct PartyListViewItem_array *v74; // x21
  int v75; // w22
  int32_t n; // w22
  PartyOrganizationListViewItem_o *v77; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // kr10_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // kr20_16
  int32_t v80; // w20
  BattleSetupInfo_o *battleSetupInfo; // x8
  QuestPhaseMaster_o *v82; // x22
  struct BattleSetupInfo_o *v83; // x8
  QuestRestrictionInfo_o *v84; // x22
  System_Int32_array *v85; // x26
  System_Int32_array *v86; // x24
  const MethodInfo *v87; // x5
  AutoOrganizationManager_ServantData_array *v88; // x25
  QuestRestrictionInfo_o *v89; // x0
  System_Int32_array *FixedServantPositionSvtIdList; // x0
  System_Int32_array *v91; // x28
  int32_t v92; // w22
  il2cpp_array_size_t v93; // w19
  int32_t v94; // w27
  const MethodInfo *v95; // x4
  PartyServantListViewItem_o *AutoOrganizationServant; // x0
  PartyServantListViewItem_o *v97; // x24
  BalanceConfig_c *v98; // x0
  int32_t v99; // w19
  int32_t v100; // w24
  _BOOL8 v101; // x0
  __int64 v102; // x1
  const MethodInfo *v103; // x4
  Il2CppObject *current; // x20
  __int64 v105; // x1
  PartyServantListViewItem_o *AutoOrganizationServant_19989268; // x22
  AutoOrganizationManager_ServantData_array_array *DeckRelationServantDataLists; // x26
  const MethodInfo *v108; // x5
  const MethodInfo *v109; // x5
  int32_t v110; // w24
  char v111; // w19
  int v112; // w8
  unsigned __int64 v113; // x22
  unsigned __int64 v114; // x22
  int64_t v115; // x23
  __int64 v116; // x8
  __int128 v117; // q0
  PartyOrganizationRootComponent_o *v118; // x0
  const MethodInfo *v119; // x4
  int32_t v120; // w0
  const MethodInfo *v121; // x5
  int32_t v122; // w0
  struct QuestRestrictionInfo_o *v123; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v125; // x24
  signed __int64 v126; // x25
  int v127; // w20
  int64_t v128; // x26
  int64_t v129; // x27
  __int64 v130; // x27
  __int64 v131; // x28
  int age; // w8
  int v133; // w19
  PartyOrganizationRootComponent_o *v134; // x22
  int32_t *p_mainMenuMode; // x19
  PartyOrganizationRootComponent_o *v136; // x19
  System_Collections_Generic_List_int__o *v137; // x22
  struct PartyListViewItem_array *v138; // x9
  int v139; // w8
  int v140; // w21
  __int64 v141; // x8
  PartyListViewItem_o *v142; // x24
  int v143; // w25
  int32_t ii; // w25
  PartyOrganizationListViewItem_o *v145; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr30_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // kr40_16
  AutoOrganizationManager_ServantData_array *v148; // x22
  int32_t v149; // w24
  int v150; // w20
  PartyOrganizationListViewItem_o *v151; // x25
  _BOOL8 IsEmpty; // x0
  const MethodInfo *v153; // x5
  AutoOrganizationManager_ServantData_o *AutoOrganizationEquip; // x0
  AutoOrganizationManager_ServantData_o *v155; // x25
  PartyListViewItem_o **v156; // x21
  struct PartyListViewItem_array *v157; // x8
  __int64 v158; // x0
  struct PartyListViewItem_array *v159; // x8
  unsigned __int64 v160; // x19
  unsigned __int64 v161; // x9
  unsigned int *waveBattleDeckItemList; // x20
  int64_t v163; // x21
  unsigned int *v164; // x0
  __int64 v165; // x0
  __int64 v166; // x0
  const MethodInfo *v167; // [xsp+10h] [xbp-150h]
  const MethodInfo *waveBattleEnemyClassIds; // [xsp+20h] [xbp-140h]
  int32_t v169; // [xsp+2Ch] [xbp-134h]
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v170; // [xsp+30h] [xbp-130h]
  int32_t v171; // [xsp+38h] [xbp-128h]
  int v172; // [xsp+3Ch] [xbp-124h]
  int32_t maxCost; // [xsp+40h] [xbp-120h]
  int v174; // [xsp+44h] [xbp-11Ch]
  System_Collections_Generic_List_long__o *eventId; // [xsp+48h] [xbp-118h]
  int32_t eventIda; // [xsp+48h] [xbp-118h]
  int v177; // [xsp+50h] [xbp-110h]
  struct PartyListViewItem_array *v178; // [xsp+50h] [xbp-110h]
  int32_t remainCost; // [xsp+5Ch] [xbp-104h]
  int remainCosta; // [xsp+5Ch] [xbp-104h]
  PartyOrganizationRootComponent_o *v181; // [xsp+60h] [xbp-100h]
  PartyListViewItem_o **p_partyItem; // [xsp+68h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v183; // [xsp+70h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v184; // [xsp+90h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v185; // [xsp+B0h] [xbp-B0h] BYREF
  WarEntity_o *v186; // [xsp+D0h] [xbp-90h] BYREF
  UserServantEntity_o *v187; // [xsp+D8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v188; // [xsp+E0h] [xbp-80h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+F8h] [xbp-68h] BYREF
  int32_t settingUnitNum[3]; // [xsp+104h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16

  if ( (byte_418502C & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v3);
    sub_B2C35C(&bool___TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_MySvtOrNpcData__Dispose__,
      v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_MySvtOrNpcData__MoveNext__,
      v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_MySvtOrNpcData__get_Current__,
      v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_MySvtOrNpcData__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_MySvtOrNpcData__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_MySvtOrNpcData___ctor__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_MySvtOrNpcData__get_Count__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v24);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_B2C35C(&System_Collections_Generic_List_AutoOrganizationManager_MySvtOrNpcData__TypeInfo, v26);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v27);
    sub_B2C35C(&AutoOrganizationManager_MySvtOrNpcData_TypeInfo, v28);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
    sub_B2C35C(&PartyListViewItem___TypeInfo, v31);
    byte_418502C = 1;
  }
  settingUnitNum[0] = 0;
  entity = 0LL;
  memset(&v188, 0, sizeof(v188));
  v186 = 0LL;
  v187 = 0LL;
  partyListMenu = (int64_t)this->fields.partyListMenu;
  this->fields.changePartyMode = 1;
  if ( !partyListMenu )
    goto LABEL_316;
  PartyListMenu__SetCenterItem((PartyListMenu_o *)partyListMenu, this->fields.selectPartyNum, 0, 0LL);
  partyListMenu = (int64_t)this->fields.partyListMenu;
  if ( !partyListMenu )
    goto LABEL_316;
  Item = PartyListMenu__GetItem((PartyListMenu_o *)partyListMenu, this->fields.selectPartyNum, 0LL);
  this->fields.basePartyItem = Item;
  sub_B2C2F8(&this->fields.basePartyItem, Item);
  partyListMenu = (int64_t)this->fields.basePartyItem;
  if ( !partyListMenu )
    goto LABEL_316;
  v34 = PartyListViewItem__Clone((PartyListViewItem_o *)partyListMenu, 0LL);
  this->fields.partyItem = v34;
  sub_B2C2F8(&this->fields.partyItem, v34);
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_4185067 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, method);
    byte_4185067 = 1;
  }
  partyListMenu = (int64_t)AutoOrganizationManager_TypeInfo;
  p_partyItem = &this->fields.partyItem;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    partyListMenu = (int64_t)AutoOrganizationManager_TypeInfo;
  }
  v35 = *(PartyListViewItem_c **)(partyListMenu + 184);
  gc_desc = (ListViewSort_o *)v35->_1.gc_desc;
  if ( !gc_desc )
    goto LABEL_316;
  ListViewSort__Load((ListViewSort_o *)v35->_1.gc_desc, 0LL);
  partyListMenu = (int64_t)AutoOrganizationManager__GetAutoOrganizationSetting(gc_desc, settingUnitNum, 0LL);
  if ( !partyListMenu )
    goto LABEL_316;
  v37 = partyListMenu;
  if ( *(_DWORD *)(partyListMenu + 24) < 2u )
    goto LABEL_320;
  partyListMenu = (int64_t)this->fields.partyOrganizationMenu;
  if ( !partyListMenu )
    goto LABEL_316;
  v38 = *(unsigned __int8 *)(v37 + 33);
  autoOrganizationMode = gc_desc->fields.autoOrganizationMode;
  v177 = *(unsigned __int8 *)(v37 + 32);
  PartyOrganizationMenu__Init((PartyOrganizationMenu_o *)partyListMenu, method);
  partyListMenu = (int64_t)this->fields.partyOrganizationMenu;
  if ( !partyListMenu )
    goto LABEL_316;
  PartyOrganizationMenu__Open(
    (PartyOrganizationMenu_o *)partyListMenu,
    this->fields.menuKind,
    this->fields.basePartyItem,
    this->fields.partyItem,
    this->fields.setupInfo,
    this->fields.questRestrictionInfo,
    0LL,
    0LL,
    0,
    this->fields.friendPointCampaignVal,
    v167);
  v40 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v40,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AutoOrganizationManager_MySvtOrNpcData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AutoOrganizationManager_MySvtOrNpcData___ctor__);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v43 = &this->fields.partyItem;
  v181 = this;
  if ( !questRestrictionInfo )
    goto LABEL_38;
  if ( questRestrictionInfo->fields.isNpcOnlyBattle )
    return;
  myServantNumMax = questRestrictionInfo->fields.myServantNumMax;
  if ( myServantNumMax )
  {
    v45 = settingUnitNum[0];
    remainCost = autoOrganizationMode;
    v174 = v38;
    if ( myServantNumMax < settingUnitNum[0] )
      v45 = myServantNumMax;
    settingUnitNum[0] = v45;
    goto LABEL_51;
  }
  servantNumMax = questRestrictionInfo->fields.servantNumMax;
  if ( servantNumMax )
  {
    v47 = settingUnitNum[0];
    remainCost = autoOrganizationMode;
    v174 = v38;
    if ( servantNumMax <= settingUnitNum[0] )
    {
      settingUnitNum[0] = servantNumMax;
      for ( i = 0; ; ++i )
      {
        v49 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v49 = BalanceConfig_TypeInfo;
        }
        if ( i >= v49->static_fields->DeckMemberMax )
          break;
        partyListMenu = (int64_t)*p_partyItem;
        if ( !*p_partyItem )
          goto LABEL_316;
        partyListMenu = (int64_t)PartyListViewItem__GetMember((PartyListViewItem_o *)partyListMenu, i, 0LL);
        if ( !partyListMenu )
          goto LABEL_316;
        if ( *(_BYTE *)(partyListMenu + 128) )
          --settingUnitNum[0];
      }
      goto LABEL_51;
    }
  }
  else
  {
LABEL_38:
    v47 = settingUnitNum[0];
    remainCost = autoOrganizationMode;
    v174 = v38;
  }
  if ( v47 <= 5 )
  {
    for ( j = 0; ; ++j )
    {
      v51 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v51 = BalanceConfig_TypeInfo;
      }
      if ( j >= v51->static_fields->DeckMemberMax )
        break;
      partyListMenu = (int64_t)*p_partyItem;
      if ( !*p_partyItem )
        goto LABEL_316;
      partyListMenu = (int64_t)PartyListViewItem__GetMember((PartyListViewItem_o *)partyListMenu, j, 0LL);
      if ( !partyListMenu )
        goto LABEL_316;
      if ( this->fields.questRestrictionInfo
        && QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
             this->fields.questRestrictionInfo,
             *(_DWORD *)(partyListMenu + 332),
             0LL) )
      {
        ++settingUnitNum[0];
      }
    }
  }
LABEL_51:
  partyListMenu = (int64_t)*p_partyItem;
  if ( !*p_partyItem )
    goto LABEL_316;
  DeckNum = PartyListViewItem__get_DeckNum((PartyListViewItem_o *)partyListMenu, 0LL);
  v53 = this;
  eventId = v40;
  if ( !v177 )
  {
    remainCosta = 0;
    goto LABEL_214;
  }
  v171 = DeckNum;
  if ( v174 )
  {
    v172 = 0;
  }
  else
  {
    v172 = 0;
    v54 = 0;
    while ( 1 )
    {
      v55 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v55 = BalanceConfig_TypeInfo;
      }
      if ( v54 >= v55->static_fields->DeckMemberMax )
        break;
      partyListMenu = (int64_t)*v43;
      if ( !*v43 )
        goto LABEL_316;
      partyListMenu = (int64_t)PartyListViewItem__GetMember((PartyListViewItem_o *)partyListMenu, v54, 0LL);
      if ( !partyListMenu )
        goto LABEL_316;
      v56 = (PartyOrganizationListViewItem_o *)partyListMenu;
      if ( *(_BYTE *)(partyListMenu + 128) || v54 + 1 > settingUnitNum[0] )
      {
        if ( !v40 )
          goto LABEL_316;
        System_Collections_Generic_List_long___Add(
          v40,
          0LL,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        ++v54;
      }
      else
      {
        partyListMenu = PartyOrganizationListViewItem__get_EquipUserSvtId(
                          (PartyOrganizationListViewItem_o *)partyListMenu,
                          0LL);
        if ( !v40 )
          goto LABEL_316;
        System_Collections_Generic_List_long___Add(
          v40,
          partyListMenu,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        ++v54;
        v172 += PartyOrganizationListViewItem__get_EquipCost(v56, 0LL);
      }
      v43 = &this->fields.partyItem;
    }
    v53 = this;
  }
  for ( k = 0; ; ++k )
  {
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    partyListMenu = (int64_t)*p_partyItem;
    if ( !*p_partyItem )
      goto LABEL_316;
    if ( k >= BalanceConfig_TypeInfo->static_fields->DeckMemberMax )
      break;
    partyListMenu = (int64_t)PartyListViewItem__GetMember((PartyListViewItem_o *)partyListMenu, k, 0LL);
    if ( !partyListMenu )
      goto LABEL_316;
    v58 = (PartyOrganizationListViewItem_o *)partyListMenu;
    if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)partyListMenu, 0LL) )
    {
      v59 = v53->fields.questRestrictionInfo;
      if ( v59 )
      {
        if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(v59, v58->fields._InitPos_k__BackingField, 0LL)
          && !v58->fields.isFollower )
        {
          v60 = (AutoOrganizationManager_MySvtOrNpcData_o *)sub_B2C42C(AutoOrganizationManager_MySvtOrNpcData_TypeInfo);
          AutoOrganizationManager_MySvtOrNpcData___ctor(v60, 0LL);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v58, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          partyListMenu = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(SvtId, 0LL);
          if ( !v60 )
            goto LABEL_316;
          v60->fields.svtId = partyListMenu;
          userServantEntity = v58->fields.userServantEntity;
          v40 = eventId;
          if ( !userServantEntity )
            goto LABEL_316;
          v63 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v185.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v185.fields.fakeValue = v63;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v184 = v185;
          partyListMenu = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v184, 0LL);
          v60->fields.userSvtId = partyListMenu;
          v60->fields.slot = k;
          if ( !v41 )
            goto LABEL_316;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v41,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AutoOrganizationManager_MySvtOrNpcData__Add__);
          v53 = this;
        }
      }
    }
  }
  PartyListViewItem__ClearMember_31922084((PartyListViewItem_o *)partyListMenu, 0LL);
  partyListMenu = (int64_t)v53->fields.questRestrictionInfo;
  if ( partyListMenu )
    QuestRestrictionInfo__ResetDeckInfo((QuestRestrictionInfo_o *)partyListMenu, 0LL);
  if ( !*p_partyItem )
    goto LABEL_316;
  v170 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v41;
  maxCost = (*p_partyItem)->fields.maxCost;
  v64 = (System_Array_o *)sub_B2C374(bool___TypeInfo, 5LL);
  System_Array__Copy_42671224((System_Array_o *)v37, 2, v64, 0, 5, 0LL);
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  RarityBit = AutoOrganizationManager__GetRarityBit((System_Boolean_array *)v64, 0LL);
  v66 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v66,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v68 = this;
  if ( this->fields.mainMenuMode == 8 )
  {
    if ( !*p_partyItem )
      goto LABEL_316;
    baseDeckItemList = this->fields.baseDeckItemList;
    if ( !baseDeckItemList )
      goto LABEL_316;
    max_length = baseDeckItemList->max_length;
    method = (const MethodInfo *)(*p_partyItem)->fields.waveBattleEnemyClassIds;
    if ( max_length >= 1 )
    {
      waveBattleEnemyClassIds = (const MethodInfo *)(*p_partyItem)->fields.waveBattleEnemyClassIds;
      v169 = RarityBit;
      for ( m = 0; m < max_length; ++m )
      {
        if ( m >= (unsigned int)max_length )
          goto LABEL_320;
        v72 = &baseDeckItemList->obj.klass + m;
        v73 = (PartyListViewItem_o *)v72[4];
        if ( !v73 )
          goto LABEL_316;
        v74 = baseDeckItemList;
        partyListMenu = PartyListViewItem__get_DeckNum((PartyListViewItem_o *)v72[4], 0LL);
        if ( !*p_partyItem )
          goto LABEL_316;
        v75 = partyListMenu;
        partyListMenu = PartyListViewItem__get_DeckNum(*p_partyItem, 0LL);
        if ( v75 != (_DWORD)partyListMenu )
        {
          for ( n = 0; ; ++n )
          {
            partyListMenu = (int64_t)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              partyListMenu = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( n >= *(_DWORD *)(*(_QWORD *)(partyListMenu + 184) + 160LL) )
              break;
            partyListMenu = (int64_t)PartyListViewItem__GetMember(v73, n, 0LL);
            if ( !partyListMenu )
              goto LABEL_316;
            v77 = (PartyOrganizationListViewItem_o *)partyListMenu;
            v78 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)partyListMenu, 0LL);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v78, 0LL) >= 1 )
            {
              v79 = PartyOrganizationListViewItem__get_SvtId(v77, 0LL);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              partyListMenu = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v79, 0LL);
              if ( !v66 )
                goto LABEL_316;
              System_Collections_Generic_List_int___Add(
                v66,
                partyListMenu,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
        max_length = v74->max_length;
        v68 = this;
        baseDeckItemList = v74;
      }
      v40 = eventId;
      v80 = maxCost;
      RarityBit = v169;
      method = waveBattleEnemyClassIds;
      goto LABEL_138;
    }
LABEL_137:
    v80 = maxCost;
    goto LABEL_138;
  }
  if ( !this->fields.battleSetupInfo )
  {
    method = 0LL;
    goto LABEL_137;
  }
  v80 = maxCost;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyListMenu = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  battleSetupInfo = v181->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_316;
  v82 = (QuestPhaseMaster_o *)partyListMenu;
  partyListMenu = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
  v83 = v181->fields.battleSetupInfo;
  if ( !v83 || !v82 )
    goto LABEL_316;
  partyListMenu = QuestPhaseMaster__TryGetEntity(v82, &entity, partyListMenu, v83->fields.questPhase, 0LL);
  v68 = v181;
  method = 0LL;
  if ( (partyListMenu & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_316;
    method = (const MethodInfo *)entity->fields.classIds;
  }
LABEL_138:
  partyListMenu = (int64_t)PartyOrganizationRootComponent__GetEnemyClassIds(
                             (PartyOrganizationRootComponent_o *)partyListMenu,
                             (System_Int32_array *)method,
                             remainCost == 1,
                             v67);
  if ( !v66 )
    goto LABEL_316;
  v84 = v68->fields.questRestrictionInfo;
  v85 = (System_Int32_array *)partyListMenu;
  v86 = System_Collections_Generic_List_int___ToArray(
          v66,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  partyListMenu = (int64_t)AutoOrganizationManager__AutoOrganizationServant(RarityBit, v84, v86, 0LL);
  if ( !partyListMenu )
    goto LABEL_316;
  v53 = v181;
  v88 = (AutoOrganizationManager_ServantData_array *)partyListMenu;
  if ( *(int *)(partyListMenu + 24) < 1 )
  {
    v43 = p_partyItem;
LABEL_213:
    remainCosta = v80;
    goto LABEL_214;
  }
  v89 = v181->fields.questRestrictionInfo;
  if ( v89
    && v89->fields.isFixedMyServantPosition
    && (FixedServantPositionSvtIdList = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(v89, 0LL)) != 0LL
    && (v91 = FixedServantPositionSvtIdList, *(_QWORD *)&FixedServantPositionSvtIdList->max_length) )
  {
    v92 = 0;
    v93 = 0;
    v94 = 0;
    while ( 1 )
    {
      v98 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v98 = BalanceConfig_TypeInfo;
      }
      if ( v92 >= v98->static_fields->DeckMemberMax )
        break;
      partyListMenu = (int64_t)*p_partyItem;
      if ( !*p_partyItem )
        goto LABEL_316;
      partyListMenu = (int64_t)PartyListViewItem__GetMember((PartyListViewItem_o *)partyListMenu, v92, 0LL);
      if ( !partyListMenu )
        goto LABEL_316;
      if ( !*(_BYTE *)(partyListMenu + 128) )
      {
        if ( !v181->fields.questRestrictionInfo )
          goto LABEL_316;
        partyListMenu = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
                          v181->fields.questRestrictionInfo,
                          *(_DWORD *)(partyListMenu + 332),
                          0LL);
        if ( (partyListMenu & 1) == 0 )
        {
          if ( v93 >= v91->max_length )
            goto LABEL_320;
          AutoOrganizationServant = PartyOrganizationRootComponent__FindAutoOrganizationServant(
                                      v181,
                                      v88,
                                      v92,
                                      v91->m_Items[v93 + 1],
                                      v95);
          if ( AutoOrganizationServant )
          {
            v97 = AutoOrganizationServant;
            partyListMenu = (int64_t)*p_partyItem;
            if ( !*p_partyItem )
              goto LABEL_316;
            PartyListViewItem__SetMember((PartyListViewItem_o *)partyListMenu, v92, v97, 0LL);
            ++v94;
            v80 -= PartyServantListViewItem__get_Cost(v97, 0LL);
            if ( v94 >= settingUnitNum[0] )
              break;
            if ( (signed int)++v93 >= (signed int)v91->max_length )
              break;
          }
        }
      }
      ++v92;
    }
  }
  else
  {
    v94 = 0;
  }
  if ( v94 >= settingUnitNum[0] )
  {
    v43 = p_partyItem;
    v40 = eventId;
    v99 = v171;
  }
  else
  {
    v43 = p_partyItem;
    v99 = v171;
    partyListMenu = (int64_t)v170;
    if ( !v170 )
      goto LABEL_316;
    v40 = eventId;
    if ( v170->fields._size >= 1 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v185,
        v170,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AutoOrganizationManager_MySvtOrNpcData__GetEnumerator__);
      v188 = *(System_Collections_Generic_List_Enumerator_T__o *)&v185.fields.currentCryptoKey;
      do
      {
        v100 = v80;
        do
        {
          v101 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v188,
                   (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_MySvtOrNpcData__MoveNext__);
          if ( !v101 )
          {
            v80 = v100;
            goto LABEL_180;
          }
          current = v188.fields.current;
          if ( !v188.fields.current )
            sub_B2C434(v101, v102);
          AutoOrganizationServant_19989268 = PartyOrganizationRootComponent__FindAutoOrganizationServant_19989268(
                                               v181,
                                               v88,
                                               (int32_t)v188.fields.current[2].klass,
                                               (int64_t)v188.fields.current[1].monitor,
                                               v103);
        }
        while ( !AutoOrganizationServant_19989268 );
        if ( !*p_partyItem )
          sub_B2C434(0LL, v105);
        PartyListViewItem__SetMember(*p_partyItem, (int32_t)current[2].klass, AutoOrganizationServant_19989268, 0LL);
        ++v94;
        v80 = v100 - PartyServantListViewItem__get_Cost(AutoOrganizationServant_19989268, 0LL);
      }
      while ( v94 < settingUnitNum[0] );
LABEL_180:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v188,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_MySvtOrNpcData__Dispose__);
    }
  }
  if ( v94 >= settingUnitNum[0] )
  {
    v53 = v181;
    goto LABEL_213;
  }
  v53 = v181;
  DeckRelationServantDataLists = PartyOrganizationRootComponent__GetDeckRelationServantDataLists(
                                   v181,
                                   v88,
                                   v85,
                                   v94,
                                   settingUnitNum[0],
                                   v87);
  partyListMenu = PartyOrganizationRootComponent__NormalAutoOrganization(
                    v181,
                    DeckRelationServantDataLists,
                    v80,
                    v80 - v172,
                    v99,
                    v108);
  remainCosta = partyListMenu;
  if ( !v174 )
  {
    if ( !v40 )
      goto LABEL_316;
    if ( v172 < 1 || v40->fields._size < 1 )
      goto LABEL_221;
    if ( !DeckRelationServantDataLists )
      goto LABEL_316;
    v110 = v99;
    v111 = 0;
    v112 = *(_QWORD *)&DeckRelationServantDataLists->max_length;
    if ( v112 >= 1 )
    {
      v113 = 0LL;
      while ( v113 < (unsigned int)v112 )
      {
        if ( DeckRelationServantDataLists->m_Items[v113] )
        {
          partyListMenu = (int64_t)*v43;
          if ( !*v43 )
            goto LABEL_316;
          partyListMenu = (int64_t)PartyListViewItem__GetMember((PartyListViewItem_o *)partyListMenu, v113, 0LL);
          if ( !partyListMenu )
            goto LABEL_316;
          partyListMenu = PartyOrganizationListViewItem__get_IsEmpty(
                            (PartyOrganizationListViewItem_o *)partyListMenu,
                            0LL);
          v111 |= partyListMenu;
        }
        v112 = DeckRelationServantDataLists->max_length;
        if ( (__int64)++v113 >= v112 )
          goto LABEL_195;
      }
LABEL_320:
      v165 = sub_B2C460(partyListMenu);
      sub_B2C400(v165, 0LL);
    }
LABEL_195:
    v53 = v181;
    if ( (v111 & 1) != 0 )
    {
      if ( v112 >= 1 )
      {
        v114 = 0LL;
        while ( v114 < (unsigned int)v112 )
        {
          if ( DeckRelationServantDataLists->m_Items[v114] )
          {
            partyListMenu = (int64_t)*v43;
            if ( !*v43 )
              goto LABEL_316;
            partyListMenu = (int64_t)PartyListViewItem__GetMember((PartyListViewItem_o *)partyListMenu, v114, 0LL);
            if ( !partyListMenu )
              goto LABEL_316;
            v115 = partyListMenu;
            partyListMenu = PartyOrganizationListViewItem__get_IsEmpty(
                              (PartyOrganizationListViewItem_o *)partyListMenu,
                              0LL);
            if ( (partyListMenu & 1) == 0 )
            {
              v116 = *(_QWORD *)(v115 + 112);
              if ( !v116 )
                goto LABEL_316;
              v117 = *(_OWORD *)(v116 + 32);
              *(_OWORD *)&v185.fields.currentCryptoKey = *(_OWORD *)(v116 + 16);
              *(_OWORD *)&v185.fields.fakeValue = v117;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v183 = v185;
              v118 = (PartyOrganizationRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                           &v183,
                                                           0LL);
              PartyOrganizationRootComponent__SetUseAutoOrganizationServant(v118, v88, (int64_t)v118, 0, v119);
              partyListMenu = (int64_t)*v43;
              if ( !*v43 )
                goto LABEL_316;
              PartyListViewItem__ClearMember((PartyListViewItem_o *)partyListMenu, v114, 0LL);
            }
          }
          v112 = DeckRelationServantDataLists->max_length;
          if ( (__int64)++v114 >= v112 )
            goto LABEL_210;
        }
        goto LABEL_320;
      }
LABEL_210:
      v53 = v181;
      v120 = PartyOrganizationRootComponent__CostPrioAutoOrganization(
               v181,
               DeckRelationServantDataLists,
               v80,
               v80 - v172,
               v110,
               v109);
      if ( v120 == v80 )
        v122 = PartyOrganizationRootComponent__NormalAndEquipAutoOrganization(
                 v181,
                 DeckRelationServantDataLists,
                 v40,
                 v80,
                 v110,
                 v121);
      else
        v122 = PartyOrganizationRootComponent__AutoOrganizationChangeServant(
                 v181,
                 DeckRelationServantDataLists,
                 v110,
                 v120,
                 v120 - v172,
                 v121);
      remainCosta = v122;
    }
LABEL_214:
    if ( v174 )
      goto LABEL_215;
LABEL_221:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
    v125 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
    v126 = 0LL;
    v127 = 0;
    while ( 1 )
    {
      partyListMenu = (int64_t)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        partyListMenu = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( v126 >= *(int *)(*(_QWORD *)(partyListMenu + 184) + 156LL) )
        break;
      if ( !v40 )
        goto LABEL_316;
      if ( v126 < v40->fields._size )
      {
        if ( v126 >= (unsigned __int64)(unsigned int)v40->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v128 = v40->fields._items->m_Items[v126];
        if ( v128 )
        {
          partyListMenu = (int64_t)*p_partyItem;
          if ( !*p_partyItem )
            goto LABEL_316;
          partyListMenu = (int64_t)PartyListViewItem__GetMember((PartyListViewItem_o *)partyListMenu, v126, 0LL);
          if ( !partyListMenu )
            goto LABEL_316;
          v129 = partyListMenu;
          partyListMenu = PartyOrganizationListViewItem__get_IsEmpty(
                            (PartyOrganizationListViewItem_o *)partyListMenu,
                            0LL);
          if ( (partyListMenu & 1) == 0 && !*(_BYTE *)(v129 + 128) )
          {
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_316;
            partyListMenu = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                              Master_WarQuestSelectionMaster,
                              &v187,
                              v128,
                              (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( (partyListMenu & 1) != 0 )
            {
              if ( !v187 )
                goto LABEL_316;
              v131 = *(_QWORD *)&v187->fields.svtId.fields.currentCryptoKey;
              v130 = *(_QWORD *)&v187->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v191.fields.currentCryptoKey = v131;
              *(_QWORD *)&v191.fields.fakeValue = v130;
              partyListMenu = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v191, 0LL);
              if ( !v125 )
                goto LABEL_316;
              partyListMenu = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                v125,
                                &v186,
                                partyListMenu,
                                (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
              v40 = eventId;
              if ( (partyListMenu & 1) != 0 )
              {
                if ( !v186 )
                  goto LABEL_316;
                age = (int)v186[1].fields.age;
              }
              else
              {
                age = 0;
              }
              v133 = remainCosta - age;
              if ( remainCosta >= age )
              {
                partyListMenu = (int64_t)*p_partyItem;
                if ( !*p_partyItem )
                  goto LABEL_316;
                PartyListViewItem__SetEquip((PartyListViewItem_o *)partyListMenu, v126, v128, 0LL);
                if ( ++v127 >= settingUnitNum[0] )
                  break;
                remainCosta = v133;
              }
            }
          }
        }
      }
      ++v126;
    }
    v134 = v181;
    p_mainMenuMode = &v181->fields.mainMenuMode;
    goto LABEL_301;
  }
LABEL_215:
  if ( !v177 )
  {
    partyListMenu = (int64_t)*v43;
    if ( !*v43 )
      goto LABEL_316;
    PartyListViewItem__ClearEquip((PartyListViewItem_o *)partyListMenu, 0LL);
    if ( !*v43 )
      goto LABEL_316;
    remainCosta = (*v43)->fields.maxCost - (*v43)->fields.cost;
  }
  v123 = v53->fields.questRestrictionInfo;
  if ( v123 )
    eventIda = v123->fields.eventId;
  else
    eventIda = 0;
  if ( v53->fields.mainMenuMode == 8 )
  {
    v136 = v53;
    v137 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v137,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    v138 = v136->fields.baseDeckItemList;
    if ( !v138 )
      goto LABEL_316;
    v139 = v138->max_length;
    if ( v139 >= 1 )
    {
      v140 = 0;
      v178 = v136->fields.baseDeckItemList;
      while ( v140 < (unsigned int)v139 )
      {
        v141 = (__int64)v138 + 8 * v140;
        v142 = *(PartyListViewItem_o **)(v141 + 32);
        if ( !v142 )
          goto LABEL_316;
        partyListMenu = PartyListViewItem__get_DeckNum(*(PartyListViewItem_o **)(v141 + 32), 0LL);
        if ( !*p_partyItem )
          goto LABEL_316;
        v143 = partyListMenu;
        partyListMenu = PartyListViewItem__get_DeckNum(*p_partyItem, 0LL);
        if ( v143 != (_DWORD)partyListMenu )
        {
          for ( ii = 0; ; ++ii )
          {
            partyListMenu = (int64_t)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              partyListMenu = (int64_t)BalanceConfig_TypeInfo;
            }
            if ( ii >= *(_DWORD *)(*(_QWORD *)(partyListMenu + 184) + 160LL) )
              break;
            partyListMenu = (int64_t)PartyListViewItem__GetMember(v142, ii, 0LL);
            if ( !partyListMenu )
              goto LABEL_316;
            v145 = (PartyOrganizationListViewItem_o *)partyListMenu;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(
                           (PartyOrganizationListViewItem_o *)partyListMenu,
                           0LL);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(EquipSvtId, 0LL) >= 1 )
            {
              v147 = PartyOrganizationListViewItem__get_EquipSvtId(v145, 0LL);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              partyListMenu = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v147, 0LL);
              if ( !v137 )
                goto LABEL_316;
              System_Collections_Generic_List_int___Add(
                v137,
                partyListMenu,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
        v138 = v178;
        ++v140;
        v139 = v178->max_length;
        if ( v140 >= v139 )
          goto LABEL_283;
      }
      goto LABEL_320;
    }
  }
  else
  {
    v137 = 0LL;
  }
LABEL_283:
  p_mainMenuMode = &v181->fields.mainMenuMode;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  v148 = AutoOrganizationManager__AutoOrganizationEquip(eventIda, v137, 0LL);
  v149 = 0;
  v150 = 0;
  while ( 1 )
  {
    partyListMenu = (int64_t)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      partyListMenu = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( v149 >= *(_DWORD *)(*(_QWORD *)(partyListMenu + 184) + 156LL) )
      break;
    partyListMenu = (int64_t)*p_partyItem;
    if ( !*p_partyItem )
      goto LABEL_316;
    partyListMenu = (int64_t)PartyListViewItem__GetMember((PartyListViewItem_o *)partyListMenu, v149, 0LL);
    if ( !partyListMenu )
      goto LABEL_316;
    v151 = (PartyOrganizationListViewItem_o *)partyListMenu;
    if ( !*(_BYTE *)(partyListMenu + 128) )
    {
      IsEmpty = PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)partyListMenu, 0LL);
      if ( !IsEmpty )
      {
        AutoOrganizationEquip = PartyOrganizationRootComponent__GetAutoOrganizationEquip(
                                  (PartyOrganizationRootComponent_o *)IsEmpty,
                                  v151,
                                  v148,
                                  remainCosta,
                                  eventIda,
                                  v153);
        if ( AutoOrganizationEquip )
        {
          v155 = AutoOrganizationEquip;
          partyListMenu = (int64_t)*p_partyItem;
          if ( !*p_partyItem )
            goto LABEL_316;
          PartyListViewItem__SetEquip((PartyListViewItem_o *)partyListMenu, v149, v155->fields.userSvtId, 0LL);
          v155->fields.used = 1;
          if ( ++v150 >= settingUnitNum[0] )
            break;
          remainCosta -= v155->fields.cost;
        }
      }
    }
    ++v149;
  }
  v134 = v181;
LABEL_301:
  v156 = p_partyItem;
  if ( *p_mainMenuMode != 8 )
    return;
  v157 = v134->fields.baseDeckItemList;
  if ( !v157
    || (v158 = sub_B2C374(PartyListViewItem___TypeInfo, v157->max_length),
        v134->fields.waveBattleDeckItemList = (struct PartyListViewItem_array *)v158,
        sub_B2C2F8(&v134->fields.waveBattleDeckItemList, v158),
        (v159 = v134->fields.baseDeckItemList) == 0LL) )
  {
LABEL_316:
    sub_B2C434(partyListMenu, method);
  }
  v160 = 0LL;
  while ( 1 )
  {
    v161 = v159->max_length;
    if ( (__int64)v160 >= (int)v161 )
      break;
    waveBattleDeckItemList = (unsigned int *)v134->fields.waveBattleDeckItemList;
    if ( v160 == v134->fields.selectPartyNum )
    {
      partyListMenu = (int64_t)*v156;
      if ( !*v156 )
        goto LABEL_316;
    }
    else
    {
      if ( v160 >= v161 )
        goto LABEL_320;
      partyListMenu = (int64_t)v159->m_Items[v160];
      if ( !partyListMenu )
        goto LABEL_316;
    }
    partyListMenu = (int64_t)PartyListViewItem__Clone((PartyListViewItem_o *)partyListMenu, 0LL);
    if ( !waveBattleDeckItemList )
      goto LABEL_316;
    v163 = partyListMenu;
    if ( partyListMenu )
    {
      partyListMenu = sub_B2C41C(partyListMenu, *(_QWORD *)(*(_QWORD *)waveBattleDeckItemList + 64LL));
      if ( !partyListMenu )
      {
        v166 = sub_B2C454();
        sub_B2C400(v166, 0LL);
      }
    }
    if ( v160 >= waveBattleDeckItemList[6] )
      goto LABEL_320;
    v164 = &waveBattleDeckItemList[2 * v160];
    *((_QWORD *)v164 + 4) = v163;
    sub_B2C2F8(v164 + 8, v163);
    v159 = v134->fields.baseDeckItemList;
    v156 = p_partyItem;
    ++v160;
    if ( !v159 )
      goto LABEL_316;
  }
}


void __fastcall PartyOrganizationRootComponent__BackOrganizationChange(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x19
  __int64 v3; // x1
  struct PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x8
  System_String_array *AssetNameList; // x0
  const MethodInfo *v6; // x2
  PartyOrganizationChangeMenu_o *v7; // x20
  System_Action_o *v8; // x21

  v2 = this;
  if ( (byte_4184FDF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&Method_PartyOrganizationRootComponent_OnMoveEnd__, v3);
    byte_4184FDF = 1;
  }
  if ( v2->fields.state == 12 )
  {
    partyOrganizationChangeMenu = v2->fields.partyOrganizationChangeMenu;
    v2->fields.state = 13;
    if ( !partyOrganizationChangeMenu
      || (this = (PartyOrganizationRootComponent_o *)partyOrganizationChangeMenu->fields.partyItem) == 0LL
      || (AssetNameList = PartyListViewItem__GetAssetNameList((PartyListViewItem_o *)this, 0LL),
          PartyOrganizationRootComponent__SetCacheAssetNameList(v2, AssetNameList, v6),
          v7 = v2->fields.partyOrganizationChangeMenu,
          v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
          System_Action___ctor(v8, (Il2CppObject *)v2, Method_PartyOrganizationRootComponent_OnMoveEnd__, 0LL),
          !v7) )
    {
      sub_B2C434(this, method);
    }
    PartyOrganizationChangeMenu__Close_31964824(v7, v8, 0LL);
  }
}


void __fastcall PartyOrganizationRootComponent__BackOrganizationSwap(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x19
  __int64 v3; // x1
  struct PartyOrganizationMenu_o *partyOrganizationMenu; // x8
  System_String_array *AssetNameList; // x0
  const MethodInfo *v6; // x2
  PartyOrganizationMenu_o *v7; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4184FE1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&Method_PartyOrganizationRootComponent_OnMoveEnd__, v3);
    byte_4184FE1 = 1;
  }
  if ( v2->fields.state == 15 )
  {
    partyOrganizationMenu = v2->fields.partyOrganizationMenu;
    v2->fields.state = 16;
    if ( !partyOrganizationMenu )
      goto LABEL_9;
    this = (PartyOrganizationRootComponent_o *)partyOrganizationMenu->fields.partyItem;
    if ( !this )
      goto LABEL_9;
    AssetNameList = PartyListViewItem__GetAssetNameList((PartyListViewItem_o *)this, 0LL);
    PartyOrganizationRootComponent__SetCacheAssetNameList(v2, AssetNameList, v6);
    v2->fields.waveBattleDeckItemList = 0LL;
    sub_B2C2F8(&v2->fields.waveBattleDeckItemList, 0LL);
    v2->fields.waveBattleTempDeckItemList = 0LL;
    sub_B2C2F8(&v2->fields.waveBattleTempDeckItemList, 0LL);
    v7 = v2->fields.partyOrganizationMenu;
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)v2, Method_PartyOrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !v7 )
LABEL_9:
      sub_B2C434(this, method);
    PartyOrganizationMenu__Close_19902244(v7, v8, v9);
  }
}


void __fastcall PartyOrganizationRootComponent__BackParty(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  unsigned int menuMode; // w8
  CommonUI_o *Instance; // x20
  PartyOrganizationRootComponent_c *v8; // x8
  float EDIT_SCENE_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4184FDD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndFadeBackParty__, v3);
    sub_B2C35C(&PartyOrganizationRootComponent_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4184FDD = 1;
  }
  if ( this->fields.state == 9 )
  {
    menuMode = this->fields.menuMode;
    this->fields.state = 10;
    if ( menuMode > 8 )
    {
      PartyOrganizationRootComponent__EndFadeBackParty(this, method);
    }
    else
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = PartyOrganizationRootComponent_TypeInfo;
      if ( (BYTE3(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo);
        v8 = PartyOrganizationRootComponent_TypeInfo;
      }
      EDIT_SCENE_FADE_TIME = v8->static_fields->EDIT_SCENE_FADE_TIME;
      v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndFadeBackParty__, 0LL);
      if ( !Instance )
        sub_B2C434(v11, v12);
      CommonUI__maskFadeout(Instance, 1, EDIT_SCENE_FADE_TIME, v10, 0LL);
    }
  }
}


void __fastcall PartyOrganizationRootComponent__BackQuest(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  int32_t state; // w8

  state = this->fields.state;
  if ( state == 32 )
  {
    this->fields.state = 33;
  }
  else
  {
    if ( state != 3 )
      return;
    this->fields.state = 4;
  }
  PartyOrganizationRootComponent__EndFadeBackQuest(this, method);
}


bool __fastcall PartyOrganizationRootComponent__BackScene(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRootComponent__SceneBack(this, 0, v2);
  return 1;
}


void __fastcall PartyOrganizationRootComponent__BackSupportOnlyQuest(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 6 )
  {
    this->fields.state = 7;
    PartyOrganizationRootComponent__EndFadeBackSupportOnlyQuest(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PartyOrganizationRootComponent__CalculateLimitCountWithSpoilerProtection(
        PartyOrganizationRootComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  bool FriendCostume; // w0
  BalanceConfig_c *v11; // x0
  ServantLimitSpoilerProtectionMaster_o *Master_WarQuestSelectionMaster; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // kr00_16
  BalanceConfig_c *v15; // x0

  if ( (byte_4185019 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&OptionManager_TypeInfo, v9);
    byte_4185019 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetSpoilerSetting(0LL) )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    FriendCostume = OptionManager__GetFriendCostume(0LL);
    if ( limitCount >= 11 && !FriendCostume )
    {
      v11 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v11 = BalanceConfig_TypeInfo;
      }
      limitCount = v11->static_fields->ServantLimitMax;
    }
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__GetFriendImageLimitCount(0LL) )
    {
      return limitCount;
    }
    else
    {
      v15 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v15 = BalanceConfig_TypeInfo;
      }
      return limitCount - (limitCount == v15->static_fields->ServantLimitMax);
    }
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      sub_B2C434(*(_QWORD *)&v14.fields.currentCryptoKey, *(_QWORD *)&v14.fields.fakeValue);
    return ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
             Master_WarQuestSelectionMaster,
             v14,
             limitCount,
             0LL);
  }
}


bool __fastcall PartyOrganizationRootComponent__CheckTabKind(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PartyListViewItem_o *sortValue1B; // x0
  __int64 v10; // x1
  struct PartyListViewItem_o *v11; // x0
  struct PartyListViewItem_o *v12; // x0
  const MethodInfo *v13; // x1
  __int64 *v14; // x8

  if ( (byte_4184FD2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v3);
    sub_B2C35C(&StringLiteral_8739/*"MENU_SUPPORT_ONLY_QUEST_START"*/, v4);
    sub_B2C35C(&StringLiteral_8727/*"MENU_QUEST_START"*/, v5);
    sub_B2C35C(&StringLiteral_8726/*"MENU_PARTY_SELECT"*/, v6);
    sub_B2C35C(&StringLiteral_8723/*"MENU_PARTY_OGRANIZATION_CHANGE"*/, v7);
    sub_B2C35C(&StringLiteral_8724/*"MENU_PARTY_OGRANIZATION_SWAP"*/, v8);
    byte_4184FD2 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  sortValue1B = (PartyListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !sortValue1B )
    goto LABEL_29;
  if ( SLODWORD(sortValue1B->fields.sortValue1) >= 1 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    sortValue1B = (PartyListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( sortValue1B )
    {
      sortValue1B = (PartyListViewItem_o *)sortValue1B->fields.sortValue1B;
      if ( sortValue1B )
      {
        v11 = PartyListViewItem__Clone(sortValue1B, 0LL);
        this->fields.basePartyItem = v11;
        sub_B2C2F8(&this->fields.basePartyItem, v11);
        sortValue1B = (PartyListViewItem_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( sortValue1B )
        {
          sortValue1B = (PartyListViewItem_o *)sortValue1B->fields.sortValue2;
          if ( sortValue1B )
          {
            v12 = PartyListViewItem__Clone(sortValue1B, 0LL);
            this->fields.partyItem = v12;
            sub_B2C2F8(&this->fields.partyItem, v12);
            PartyOrganizationRootComponent__SelectQuest(this, v13);
            return 1;
          }
        }
      }
    }
LABEL_29:
    sub_B2C434(sortValue1B, v10);
  }
  switch ( this->fields.menuMode )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      sortValue1B = (PartyListViewItem_o *)this->fields.myFSM;
      if ( !sortValue1B )
        goto LABEL_29;
      v14 = &StringLiteral_8727/*"MENU_QUEST_START"*/;
      break;
    case 1:
      sortValue1B = (PartyListViewItem_o *)this->fields.myFSM;
      if ( !sortValue1B )
        goto LABEL_29;
      v14 = &StringLiteral_8739/*"MENU_SUPPORT_ONLY_QUEST_START"*/;
      break;
    case 9:
      sortValue1B = (PartyListViewItem_o *)this->fields.myFSM;
      if ( !sortValue1B )
        goto LABEL_29;
      v14 = &StringLiteral_8726/*"MENU_PARTY_SELECT"*/;
      break;
    case 0xA:
      sortValue1B = (PartyListViewItem_o *)this->fields.myFSM;
      if ( !sortValue1B )
        goto LABEL_29;
      v14 = &StringLiteral_8723/*"MENU_PARTY_OGRANIZATION_CHANGE"*/;
      break;
    case 0xB:
      sortValue1B = (PartyListViewItem_o *)this->fields.myFSM;
      if ( !sortValue1B )
        goto LABEL_29;
      v14 = &StringLiteral_8724/*"MENU_PARTY_OGRANIZATION_SWAP"*/;
      break;
    default:
      return 1;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)sortValue1B, (System_String_o *)*v14, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__CloseRestrictionHelpDialog(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  PartyOrganizationRestrictionHelpDialog_o *partyOrganizationRestrictionHelpDialog; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4185022 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OpenRestrictionHelpDialog__, v4);
    byte_4185022 = 1;
  }
  partyOrganizationRestrictionHelpDialog = this->fields.partyOrganizationRestrictionHelpDialog;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_OpenRestrictionHelpDialog__, 0LL);
  if ( !partyOrganizationRestrictionHelpDialog )
    sub_B2C434(v7, v8);
  PartyOrganizationRestrictionHelpDialog__Close_19917744(partyOrganizationRestrictionHelpDialog, v6, v9);
}


void __fastcall PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectMyServantOrNpcDialog; // x20
  __int64 v4; // x1
  SelectMyServantOrNpcDialog_o *v5; // x0

  if ( (byte_4185058 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185058 = 1;
  }
  selectMyServantOrNpcDialog = (UnityEngine_Object_o *)this->fields.selectMyServantOrNpcDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectMyServantOrNpcDialog, 0LL, 0LL) )
  {
    v5 = this->fields.selectMyServantOrNpcDialog;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    SelectMyServantOrNpcDialog__Close(v5, 0LL);
  }
}


bool __fastcall PartyOrganizationRootComponent__ConfirmPartyOrganizationChangeCancel(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x8
  PartyListViewItem_o *partyItem; // x20
  struct PartyOrganizationChangeMenu_o *v10; // x8
  PartyListViewItem_o *basePartyItem; // x21
  PartyListViewItem_o *v12; // x22
  PartyOrganizationConfirmDeck2Menu_o *operationConfirmDeck2Menu; // x20
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v14; // x23

  v2 = this;
  if ( (byte_4184FE2 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeCancel__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_8715/*"MENU_BACK"*/, v5);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v6);
    byte_4184FE2 = 1;
  }
  partyOrganizationChangeMenu = v2->fields.partyOrganizationChangeMenu;
  if ( !partyOrganizationChangeMenu )
    goto LABEL_20;
  partyItem = partyOrganizationChangeMenu->fields.partyItem;
  if ( !partyItem )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    this = (PartyOrganizationRootComponent_o *)v2->fields.myFSM;
    v2->fields.state = 1;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
      return 0;
    }
    goto LABEL_20;
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  this = (PartyOrganizationRootComponent_o *)PartyListViewItem__CompMember(partyItem, v2->fields.basePartyItem, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v10 = v2->fields.partyOrganizationChangeMenu;
    if ( v10 )
    {
      basePartyItem = v10->fields.basePartyItem;
      v12 = v10->fields.partyItem;
      operationConfirmDeck2Menu = v2->fields.operationConfirmDeck2Menu;
      v14 = (PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeck2Menu_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v2,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeCancel__,
        0LL);
      if ( operationConfirmDeck2Menu )
      {
        PartyOrganizationConfirmDeck2Menu__Open(operationConfirmDeck2Menu, 0, basePartyItem, v12, v14, 0LL);
        return 1;
      }
    }
LABEL_20:
    sub_B2C434(this, method);
  }
  this = (PartyOrganizationRootComponent_o *)v2->fields.myFSM;
  v2->fields.menuMode = v2->fields.mainMenuMode;
  if ( !this )
    goto LABEL_20;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8715/*"MENU_BACK"*/, 0LL);
  return 1;
}


bool __fastcall PartyOrganizationRootComponent__ConfirmPartyOrganizationChangeDecide(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x8
  PartyListViewItem_o *partyItem; // x20
  bool v15; // w19
  struct PartyOrganizationChangeMenu_o *v17; // x8
  PartyListViewItem_o *v18; // x21
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x20
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v20; // x22
  int32_t v21; // w1
  struct PartyOrganizationChangeMenu_o *v22; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v24; // x21
  System_String_o *v25; // x22
  System_Action_o *v26; // x23

  v2 = this;
  if ( (byte_4184FE4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeDecideCancel__, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeDecide__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, v9);
    sub_B2C35C(&StringLiteral_10328/*"PARTY_ORGANIZATION_DECIDE_WARNING_TITLE_COST_OVER"*/, v10);
    sub_B2C35C(&StringLiteral_10327/*"PARTY_ORGANIZATION_DECIDE_WARNING_MESSAGE_COST_OVER"*/, v11);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v12);
    byte_4184FE4 = 1;
  }
  partyOrganizationChangeMenu = v2->fields.partyOrganizationChangeMenu;
  if ( !partyOrganizationChangeMenu )
    goto LABEL_32;
  partyItem = partyOrganizationChangeMenu->fields.partyItem;
  if ( !partyItem )
  {
LABEL_14:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    this = (PartyOrganizationRootComponent_o *)v2->fields.myFSM;
    v2->fields.state = 1;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
      return 0;
    }
LABEL_32:
    sub_B2C434(this, method);
  }
  if ( v2->fields.tutorialState != 5 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
  }
  this = (PartyOrganizationRootComponent_o *)PartyListViewItem__GetStartDeckCondition(partyItem, 0LL);
  switch ( (int)this )
  {
    case 0:
    case 5:
    case 6:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
      this = (PartyOrganizationRootComponent_o *)v2->fields.myFSM;
      if ( !this )
        goto LABEL_32;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8717/*"MENU_DECIDE"*/, 0LL);
      goto LABEL_13;
    case 1:
    case 2:
    case 3:
      v17 = v2->fields.partyOrganizationChangeMenu;
      if ( !v17 )
        goto LABEL_32;
      v18 = v17->fields.partyItem;
      operationConfirmDeckMenu = v2->fields.operationConfirmDeckMenu;
      v20 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)v2,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeDecide__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_32;
      v21 = 2;
      goto LABEL_26;
    case 7:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10328/*"PARTY_ORGANIZATION_DECIDE_WARNING_TITLE_COST_OVER"*/, 0LL);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10327/*"PARTY_ORGANIZATION_DECIDE_WARNING_MESSAGE_COST_OVER"*/, 0LL);
      v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v2,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeDecideCancel__,
        0LL);
      if ( !Instance )
        goto LABEL_32;
      v15 = 1;
      CommonUI__OpenNotificationDialog(Instance, v24, v25, v26, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
      return v15;
    case 8:
      v22 = v2->fields.partyOrganizationChangeMenu;
      if ( !v22 )
        goto LABEL_32;
      v18 = v22->fields.partyItem;
      operationConfirmDeckMenu = v2->fields.operationConfirmDeckMenu;
      v20 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)v2,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeDecide__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_32;
      v21 = 15;
LABEL_26:
      PartyOrganizationConfirmDeckMenu__Open(operationConfirmDeckMenu, v21, v18, v20, 0LL);
LABEL_13:
      v15 = 1;
      break;
    default:
      goto LABEL_14;
  }
  return v15;
}


bool __fastcall PartyOrganizationRootComponent__ConfirmPartyOrganizationChangeRemove(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x8
  PartyListViewItem_o *partyItem; // x20
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x6

  v2 = this;
  if ( (byte_4184FE7 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeRemoveSelect__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v5);
    byte_4184FE7 = 1;
  }
  partyOrganizationChangeMenu = v2->fields.partyOrganizationChangeMenu;
  if ( !partyOrganizationChangeMenu )
    goto LABEL_15;
  partyItem = partyOrganizationChangeMenu->fields.partyItem;
  if ( partyItem )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    partyOrganizationRemoveSelectMenu = v2->fields.partyOrganizationRemoveSelectMenu;
    v9 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)v2,
      Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeRemoveSelect__,
      0LL);
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 0, v9, 0, 0, v10);
      return 1;
    }
LABEL_15:
    sub_B2C434(this, method);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(2, 0LL);
  this = (PartyOrganizationRootComponent_o *)v2->fields.myFSM;
  v2->fields.state = 1;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
  return 0;
}


bool __fastcall PartyOrganizationRootComponent__ConfirmPartyOrganizationSwapCancel(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct PartyOrganizationMenu_o *partyOrganizationMenu; // x8
  PartyListViewItem_o *partyItem; // x20
  _BOOL4 isAutoOrganization; // w8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  PartyListViewItem_o *basePartyItem; // x1
  struct PartyOrganizationMenu_o *v14; // x8
  PartyListViewItem_o *v15; // x21
  PartyListViewItem_o *v16; // x22
  PartyOrganizationConfirmDeck2Menu_o *operationConfirmDeck2Menu; // x20
  PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *v18; // x23

  v2 = this;
  if ( (byte_4184FEC & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_ConfirmPartyOrganizationSwapCancel__, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapCancel__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_8715/*"MENU_BACK"*/, v6);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v7);
    byte_4184FEC = 1;
  }
  partyOrganizationMenu = v2->fields.partyOrganizationMenu;
  if ( !partyOrganizationMenu )
    goto LABEL_29;
  partyItem = partyOrganizationMenu->fields.partyItem;
  if ( partyItem )
  {
    if ( !v2->fields.isAutoClose )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
    }
    isAutoOrganization = v2->fields.isAutoOrganization;
    v2->fields.isAutoClose = 0;
    if ( isAutoOrganization && v2->fields.isServantSelect )
    {
      v2->fields.isServantSelect = 0;
      v11 = Method_PartyOrganizationRootComponent_ConfirmPartyOrganizationSwapCancel__;
      if ( (*((_BYTE *)Method_PartyOrganizationRootComponent_ConfirmPartyOrganizationSwapCancel__ + 75) & 2) != 0 )
        v11 = (_QWORD *)sub_B2C364(Method_PartyOrganizationRootComponent_ConfirmPartyOrganizationSwapCancel__);
      v12 = (System_Reflection_MethodBase_o *)sub_B2C340(v11, v11[3]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
      goto LABEL_25;
    }
    basePartyItem = v2->fields.basePartyItem;
    v2->fields.isServantSelect = 0;
    this = (PartyOrganizationRootComponent_o *)PartyListViewItem__CompMember(partyItem, basePartyItem, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 && !v2->fields.isAutoOrganization )
    {
      this = (PartyOrganizationRootComponent_o *)v2->fields.myFSM;
      v2->fields.menuMode = v2->fields.mainMenuMode;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8715/*"MENU_BACK"*/, 0LL);
        return 1;
      }
    }
    else
    {
      v14 = v2->fields.partyOrganizationMenu;
      if ( v14 )
      {
        v15 = v14->fields.basePartyItem;
        v16 = v14->fields.partyItem;
        operationConfirmDeck2Menu = v2->fields.operationConfirmDeck2Menu;
        v18 = (PartyOrganizationConfirmDeck2Menu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeck2Menu_CallbackFunc_TypeInfo);
        PartyOrganizationConfirmDeck2Menu_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)v2,
          Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapCancel__,
          0LL);
        if ( operationConfirmDeck2Menu )
        {
          PartyOrganizationConfirmDeck2Menu__Open(operationConfirmDeck2Menu, 0, v15, v16, v18, 0LL);
          return 1;
        }
      }
    }
LABEL_29:
    sub_B2C434(this, method);
  }
  v2->fields.isServantSelect = 0;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
LABEL_25:
  this = (PartyOrganizationRootComponent_o *)v2->fields.myFSM;
  v2->fields.state = 1;
  if ( !this )
    goto LABEL_29;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
  return 0;
}


bool __fastcall PartyOrganizationRootComponent__ConfirmPartyOrganizationSwapDecide(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct PartyOrganizationMenu_o *partyOrganizationMenu; // x8
  PartyListViewItem_o *partyItem; // x20
  SoundManager_c *v15; // x0
  bool result; // w0
  struct PartyOrganizationMenu_o *v17; // x8
  PartyListViewItem_o *v18; // x21
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x20
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v20; // x22
  int32_t v21; // w1
  CommonUI_o *Instance; // x20
  System_String_o *v23; // x21
  System_String_o *v24; // x22
  System_Action_o *v25; // x23
  struct PartyOrganizationMenu_o *v26; // x8

  v2 = this;
  if ( (byte_4184FEE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapDecideCancel__, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapDecide__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, v9);
    sub_B2C35C(&StringLiteral_10328/*"PARTY_ORGANIZATION_DECIDE_WARNING_TITLE_COST_OVER"*/, v10);
    sub_B2C35C(&StringLiteral_10327/*"PARTY_ORGANIZATION_DECIDE_WARNING_MESSAGE_COST_OVER"*/, v11);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v12);
    byte_4184FEE = 1;
  }
  partyOrganizationMenu = v2->fields.partyOrganizationMenu;
  if ( !partyOrganizationMenu )
    goto LABEL_31;
  partyItem = partyOrganizationMenu->fields.partyItem;
  v15 = SoundManager_TypeInfo;
  if ( !partyItem )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
    {
LABEL_13:
      if ( !v15->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v15);
    }
LABEL_15:
    SoundManager__playSystemSe(2, 0LL);
    this = (PartyOrganizationRootComponent_o *)v2->fields.myFSM;
    v2->fields.state = 1;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
      return 0;
    }
LABEL_31:
    sub_B2C434(this, method);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  this = (PartyOrganizationRootComponent_o *)PartyListViewItem__GetStartDeckCondition(partyItem, 0LL);
  switch ( (int)this )
  {
    case 0:
    case 5:
    case 6:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
      this = (PartyOrganizationRootComponent_o *)v2->fields.myFSM;
      if ( !this )
        goto LABEL_31;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8717/*"MENU_DECIDE"*/, 0LL);
      goto LABEL_11;
    case 1:
    case 2:
    case 3:
      v17 = v2->fields.partyOrganizationMenu;
      if ( !v17 )
        goto LABEL_31;
      v18 = v17->fields.partyItem;
      operationConfirmDeckMenu = v2->fields.operationConfirmDeckMenu;
      v20 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)v2,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapDecide__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_31;
      v21 = 2;
      goto LABEL_28;
    case 7:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10328/*"PARTY_ORGANIZATION_DECIDE_WARNING_TITLE_COST_OVER"*/, 0LL);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10327/*"PARTY_ORGANIZATION_DECIDE_WARNING_MESSAGE_COST_OVER"*/, 0LL);
      v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v25,
        (Il2CppObject *)v2,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapDecideCancel__,
        0LL);
      if ( !Instance )
        goto LABEL_31;
      CommonUI__OpenNotificationDialog(Instance, v23, v24, v25, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
      goto LABEL_11;
    case 8:
      v26 = v2->fields.partyOrganizationMenu;
      if ( !v26 )
        goto LABEL_31;
      v18 = v26->fields.partyItem;
      operationConfirmDeckMenu = v2->fields.operationConfirmDeckMenu;
      v20 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)v2,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapDecide__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_31;
      v21 = 15;
LABEL_28:
      PartyOrganizationConfirmDeckMenu__Open(operationConfirmDeckMenu, v21, v18, v20, 0LL);
LABEL_11:
      result = 1;
      break;
    default:
      v15 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_15;
      goto LABEL_13;
  }
  return result;
}


bool __fastcall PartyOrganizationRootComponent__ConfirmPartyOrganizationSwapRemove(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct PartyOrganizationMenu_o *partyOrganizationMenu; // x8
  PartyListViewItem_o *partyItem; // x20
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x6

  v2 = this;
  if ( (byte_4184FF1 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapRemoveSelect__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v5);
    byte_4184FF1 = 1;
  }
  partyOrganizationMenu = v2->fields.partyOrganizationMenu;
  if ( !partyOrganizationMenu )
    goto LABEL_15;
  partyItem = partyOrganizationMenu->fields.partyItem;
  if ( partyItem )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    partyOrganizationRemoveSelectMenu = v2->fields.partyOrganizationRemoveSelectMenu;
    v9 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)v2,
      Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapRemoveSelect__,
      0LL);
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 0, v9, 0, 0, v10);
      return 1;
    }
LABEL_15:
    sub_B2C434(this, method);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(2, 0LL);
  this = (PartyOrganizationRootComponent_o *)v2->fields.myFSM;
  v2->fields.state = 1;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
  return 0;
}


bool __fastcall PartyOrganizationRootComponent__CopyDeck(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t state; // w8
  DeckSelectMenu_o *deckSelectMenu; // x21
  PartyListViewItem_array *baseDeckItemList; // x20
  DeckSelectMenu_CallbackFunc_o *v10; // x22
  PlayMakerFSM_o *myFSM; // x0
  __int64 v12; // x1
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v16; // x22
  const MethodInfo *v17; // x6

  if ( (byte_4184FF8 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&DeckSelectMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndDeckSelectCopy__, v5);
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v6);
    byte_4184FF8 = 1;
  }
  if ( this->fields.basePartyItem )
  {
    state = this->fields.state;
    this->fields.state = 25;
    deckSelectMenu = this->fields.deckSelectMenu;
    this->fields.showBackupState = state;
    baseDeckItemList = this->fields.baseDeckItemList;
    v10 = (DeckSelectMenu_CallbackFunc_o *)sub_B2C42C(DeckSelectMenu_CallbackFunc_TypeInfo);
    DeckSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent_EndDeckSelectCopy__,
      0LL);
    if ( deckSelectMenu )
    {
      DeckSelectMenu__Open(deckSelectMenu, 0, baseDeckItemList, v10, 0LL, 0LL);
      return 1;
    }
LABEL_9:
    sub_B2C434(myFSM, v12);
  }
  partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
  partyItem = this->fields.partyItem;
  v16 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
  PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__,
    0LL);
  if ( !partyOrganizationRemoveSelectMenu )
    goto LABEL_9;
  PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 1, v16, 0, 0, v17);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_9;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
  return 0;
}


int32_t __fastcall PartyOrganizationRootComponent__CostPrioAutoOrganization(
        PartyOrganizationRootComponent_o *this,
        AutoOrganizationManager_ServantData_array_array *dataLists,
        int32_t costNum,
        int32_t remainCost,
        int32_t deckNum,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  unsigned __int64 i; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x24
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x25
  PartyOrganizationRootComponent___c_c *v20; // x8
  struct PartyOrganizationRootComponent___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__212_0; // x26
  Il2CppObject *v23; // x27
  struct PartyOrganizationRootComponent___c_StaticFields *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x5
  PartyServantListViewItem_o *AutoOrganizationServant; // x0
  PartyServantListViewItem_o *v29; // x24
  __int64 v31; // x0

  if ( (byte_4185034 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, dataLists);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_AutoOrganizationManager_ServantData__int___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___, v11);
    sub_B2C35C(&Method_System_Func_AutoOrganizationManager_ServantData__int___ctor__, v12);
    sub_B2C35C(&System_Func_AutoOrganizationManager_ServantData__int__TypeInfo, v13);
    sub_B2C35C(&Method_PartyOrganizationRootComponent___c__CostPrioAutoOrganization_b__212_0__, v14);
    sub_B2C35C(&PartyOrganizationRootComponent___c_TypeInfo, v15);
    byte_4185034 = 1;
  }
  for ( i = 0LL; ; ++i )
  {
    partyItem = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      partyItem = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= SHIDWORD(partyItem[1].klass->_1.methods) )
      break;
    if ( !dataLists )
      goto LABEL_26;
    if ( i >= dataLists->max_length )
    {
      v31 = sub_B2C460(partyItem);
      sub_B2C400(v31, 0LL);
    }
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)dataLists->m_Items[i];
    if ( v17 )
    {
      partyItem = this->fields.partyItem;
      if ( !partyItem )
        goto LABEL_26;
      Member = PartyListViewItem__GetMember(partyItem, i, 0LL);
      v20 = PartyOrganizationRootComponent___c_TypeInfo;
      if ( (BYTE3(PartyOrganizationRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent___c_TypeInfo);
        v20 = PartyOrganizationRootComponent___c_TypeInfo;
      }
      static_fields = v20->static_fields;
      _9__212_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__212_0;
      if ( !_9__212_0 )
      {
        if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          static_fields = PartyOrganizationRootComponent___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)static_fields->__9;
        _9__212_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__212_0,
          v23,
          Method_PartyOrganizationRootComponent___c__CostPrioAutoOrganization_b__212_0__,
          (const MethodInfo_27127B0 *)Method_System_Func_AutoOrganizationManager_ServantData__int___ctor__);
        v24 = PartyOrganizationRootComponent___c_TypeInfo->static_fields;
        v24->__9__212_0 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__212_0;
        sub_B2C2F8(&v24->__9__212_0, _9__212_0);
      }
      v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                   v17,
                                                                   (System_Func_TSource__TKey__o *)_9__212_0,
                                                                   (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_AutoOrganizationManager_ServantData__int___);
      partyItem = (PartyListViewItem_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v25,
                                           (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
      if ( !Member )
LABEL_26:
        sub_B2C434(partyItem, dataLists);
      AutoOrganizationServant = PartyOrganizationRootComponent__GetAutoOrganizationServant(
                                  this,
                                  (AutoOrganizationManager_ServantData_array *)partyItem,
                                  v26,
                                  Member->fields._InitPos_k__BackingField - 1,
                                  remainCost,
                                  v27);
      if ( AutoOrganizationServant )
      {
        v29 = AutoOrganizationServant;
        partyItem = this->fields.partyItem;
        if ( !partyItem )
          goto LABEL_26;
        PartyListViewItem__SetMember(partyItem, i, v29, 0LL);
        costNum -= PartyServantListViewItem__get_Cost(v29, 0LL);
        remainCost -= PartyServantListViewItem__get_Cost(v29, 0LL);
      }
    }
  }
  return costNum;
}


void __fastcall PartyOrganizationRootComponent__CtrlMyServantOrNpc(
        PartyOrganizationRootComponent_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  PartyOrganizationRootComponent___c__DisplayClass202_0_o *v13; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v15; // x1
  System_String_o *v16; // x21
  char v17; // w22
  bool IsNotIndividuality; // w23
  SelectMyServantOrNpcDialog_CallbackFunc_o *v19; // x24
  const MethodInfo *v20; // x1

  if ( (byte_418502A & 1) == 0 )
  {
    sub_B2C35C(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo, item);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    sub_B2C35C(&Method_PartyOrganizationRootComponent___c__DisplayClass202_0__CtrlMyServantOrNpc_b__0__, v10);
    sub_B2C35C(&PartyOrganizationRootComponent___c__DisplayClass202_0_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_3061/*"CLICK_FOLLOWER"*/, v12);
    byte_418502A = 1;
  }
  v13 = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)sub_B2C42C(PartyOrganizationRootComponent___c__DisplayClass202_0_TypeInfo);
  PartyOrganizationRootComponent___c__DisplayClass202_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_27;
  v13->fields.__4__this = this;
  sub_B2C2F8(&v13->fields, this);
  v13->fields.pos = pos;
  if ( !item )
    goto LABEL_27;
  v13->fields.initPos = item->fields._InitPos_k__BackingField;
  if ( item->fields.haveIndividualityServant )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetRestrictedName(
                                                         questRestrictionInfo,
                                                         v13->fields.initPos,
                                                         0LL);
      if ( this->fields.questRestrictionInfo )
      {
        v16 = (System_String_o *)questRestrictionInfo;
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsSelectableNormalSupport(
                                                           this->fields.questRestrictionInfo,
                                                           v13->fields.initPos,
                                                           0LL);
        if ( this->fields.questRestrictionInfo )
        {
          v17 = (char)questRestrictionInfo;
          IsNotIndividuality = QuestRestrictionInfo__IsNotIndividuality(
                                 this->fields.questRestrictionInfo,
                                 v13->fields.initPos,
                                 0LL);
          v19 = (SelectMyServantOrNpcDialog_CallbackFunc_o *)sub_B2C42C(SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo);
          SelectMyServantOrNpcDialog_CallbackFunc___ctor(
            v19,
            (Il2CppObject *)v13,
            Method_PartyOrganizationRootComponent___c__DisplayClass202_0__CtrlMyServantOrNpc_b__0__,
            0LL);
          questRestrictionInfo = (QuestRestrictionInfo_o *)this->fields.selectMyServantOrNpcDialog;
          if ( questRestrictionInfo )
          {
            SelectMyServantOrNpcDialog__Open(
              (SelectMyServantOrNpcDialog_o *)questRestrictionInfo,
              v16,
              v19,
              0,
              v17 & 1,
              IsNotIndividuality,
              0LL);
            return;
          }
        }
      }
    }
LABEL_27:
    sub_B2C434(questRestrictionInfo, v15);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog(this, v20);
  questRestrictionInfo = (QuestRestrictionInfo_o *)this->fields.partyListMenu;
  if ( !questRestrictionInfo )
    goto LABEL_27;
  PartyListMenu__SetCenterItem((PartyListMenu_o *)questRestrictionInfo, this->fields.selectPartyNum, 0, 0LL);
  this->fields.changePartyMode = 1;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  questRestrictionInfo = (QuestRestrictionInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !questRestrictionInfo )
    goto LABEL_27;
  LODWORD(questRestrictionInfo->fields.deckSvtIdList) = v13->fields.pos;
  questRestrictionInfo = (QuestRestrictionInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !questRestrictionInfo )
    goto LABEL_27;
  HIDWORD(questRestrictionInfo->fields.deckSvtIdList) = v13->fields.initPos;
  questRestrictionInfo = (QuestRestrictionInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !questRestrictionInfo )
    goto LABEL_27;
  LODWORD(questRestrictionInfo->fields.supportPositionList) = v13->fields.pos;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_27;
  QuestRestrictionInfo__SetDeckInfo_31220960(
    questRestrictionInfo,
    this->fields.partyItem,
    this->fields.selectPartyMemberNum,
    0LL);
  questRestrictionInfo = (QuestRestrictionInfo_o *)this->fields.myFSM;
  if ( !questRestrictionInfo )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)questRestrictionInfo, (System_String_o *)StringLiteral_3061/*"CLICK_FOLLOWER"*/, 0LL);
}


System_Collections_IEnumerator_o *__fastcall PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4185039 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218_TypeInfo, method);
    byte_4185039 = 1;
  }
  v3 = (PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218_o *)sub_B2C42C(PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218_TypeInfo);
  PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall PartyOrganizationRootComponent__DispWaveBattleTop(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationRootComponent___c__DisplayClass198_0_o *v7; // x19
  PartyListMenu_o *partyListMenu; // x0
  __int64 v9; // x1
  PartyListViewItem_o *CenterItem; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4185026 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent___c__DisplayClass198_0__DispWaveBattleTop_b__0__, v5);
    sub_B2C35C(&PartyOrganizationRootComponent___c__DisplayClass198_0_TypeInfo, v6);
    byte_4185026 = 1;
  }
  v7 = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)sub_B2C42C(PartyOrganizationRootComponent___c__DisplayClass198_0_TypeInfo);
  PartyOrganizationRootComponent___c__DisplayClass198_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  v7->fields.__4__this = this;
  sub_B2C2F8(&v7->fields, this);
  partyListMenu = this->fields.partyListMenu;
  if ( !partyListMenu )
    goto LABEL_10;
  CenterItem = PartyListMenu__GetCenterItem(partyListMenu, 0LL);
  v7->fields.item = CenterItem;
  sub_B2C2F8(&v7->fields.item, CenterItem);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_PartyOrganizationRootComponent___c__DisplayClass198_0__DispWaveBattleTop_b__0__,
    0LL);
  if ( !Instance )
LABEL_10:
    sub_B2C434(partyListMenu, v9);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v14, 0LL);
}


// attributes: thunk
void __fastcall PartyOrganizationRootComponent__EndCloseOrganizationChangeServantEquipListCancel(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent__EndSelectedOrganizationChange(this, method);
}


void __fastcall PartyOrganizationRootComponent__EndCloseOrganizationChangeServantEquipListDecide(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 12;
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, method);
}


void __fastcall PartyOrganizationRootComponent__EndCloseShowEventPoint(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4185006 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, method);
    byte_4185006 = 1;
  }
  this->fields.state = this->fields.showBackupState;
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, method);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B2C434(0LL, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndCloseShowInfomation(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *waveBattlePartyOrganizationMenu; // x20
  const MethodInfo *v5; // x1
  WaveBattlePartyOrganizationMenu_o *myFSM; // x0

  if ( (byte_4185003 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v3);
    byte_4185003 = 1;
  }
  this->fields.state = this->fields.showBackupState;
  waveBattlePartyOrganizationMenu = (UnityEngine_Object_o *)this->fields.waveBattlePartyOrganizationMenu;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(waveBattlePartyOrganizationMenu, 0LL, 0LL) )
    goto LABEL_9;
  myFSM = this->fields.waveBattlePartyOrganizationMenu;
  if ( !myFSM )
    goto LABEL_12;
  if ( !WaveBattlePartyOrganizationMenu__IsDisplay(myFSM, 0LL) )
LABEL_9:
    PartyOrganizationRootComponent__RecoverInputShowMenu(this, v5);
  myFSM = (WaveBattlePartyOrganizationMenu_o *)this->fields.myFSM;
  if ( !myFSM )
LABEL_12:
    sub_B2C434(myFSM, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndCloseShowQuestInformation(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4185009 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, method);
    byte_4185009 = 1;
  }
  this->fields.state = this->fields.showBackupState;
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, method);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B2C434(0LL, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndCloseSwapServantEquipListCancel(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PartyOrganizationMenu_o *partyItem; // x0

  this->fields.state = 15;
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, method);
  if ( this->fields.changePartyMode == 2 )
  {
    partyItem = (PartyOrganizationMenu_o *)this->fields.partyItem;
    if ( !partyItem )
      goto LABEL_7;
    if ( PartyListViewItem__CompMember((PartyListViewItem_o *)partyItem, this->fields.basePartyItem, 0LL) )
    {
      partyItem = this->fields.partyOrganizationMenu;
      this->fields.isAutoClose = 1;
      if ( partyItem )
      {
        PartyOrganizationMenu__OnClickCancel(partyItem, v3);
        return;
      }
LABEL_7:
      sub_B2C434(partyItem, v3);
    }
  }
}


void __fastcall PartyOrganizationRootComponent__EndCloseSwapServantEquipListDecide(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 15;
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, method);
}


void __fastcall PartyOrganizationRootComponent__EndCloseTutorialArrowChange(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0

  if ( (byte_4185029 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, method);
    byte_4185029 = 1;
  }
  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL),
        (tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.myFSM) == 0LL) )
  {
    sub_B2C434(tutorialMaskBase, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase, (System_String_o *)StringLiteral_3043/*"CLICK_BACK"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmAutoOrganization(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PartyOrganizationAutoOrganizationConfirmDialog_o *autoOrganizationConfirmDialog; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x6

  if ( (byte_4185042 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_3082/*"CLICK_SWAP"*/, v7);
    byte_4185042 = 1;
  }
  autoOrganizationConfirmDialog = this->fields.autoOrganizationConfirmDialog;
  if ( !autoOrganizationConfirmDialog )
LABEL_17:
    sub_B2C434(autoOrganizationConfirmDialog, isDecide);
  PartyOrganizationAutoOrganizationConfirmDialog__Close(autoOrganizationConfirmDialog, 0LL);
  if ( !isDecide )
  {
    partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
    partyItem = this->fields.partyItem;
    v13 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__,
      0LL);
    if ( !partyOrganizationRemoveSelectMenu )
      goto LABEL_17;
    PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 1, v13, 0, 0, v14);
LABEL_12:
    PartyOrganizationRootComponent__RecoverInputShowMenu(this, v10);
    return;
  }
  if ( (this->fields.menuKind | 2) == 3 || !this->fields.partyItem )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    goto LABEL_12;
  }
  PartyOrganizationRootComponent__AutoOrganizationExec(this, v9);
  autoOrganizationConfirmDialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)this->fields.partyOrganizationMenu;
  this->fields.changePartyMode = 1;
  if ( !autoOrganizationConfirmDialog )
    goto LABEL_17;
  PartyOrganizationMenu__ModifyItem(
    (PartyOrganizationMenu_o *)autoOrganizationConfirmDialog,
    (const MethodInfo *)isDecide);
  autoOrganizationConfirmDialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)this->fields.myFSM;
  this->fields.menuMode = 11;
  if ( !autoOrganizationConfirmDialog )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)autoOrganizationConfirmDialog, (System_String_o *)StringLiteral_3082/*"CLICK_SWAP"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmCopy(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DeckSelectMenu_o *deckSelectMenu; // x0
  PartyOrganizationConfirmCopyMenu_o *partyOrganizationConfirmCopyMenu; // x20
  System_Action_o *v10; // x21
  DeckSelectMenu_o *v11; // x21
  PartyListViewItem_array *baseDeckItemList; // x20
  DeckSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_4184FFA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&DeckSelectMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndDeckSelectCopy__, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__EndConfirmCopy_b__150_0__, v7);
    byte_4184FFA = 1;
  }
  if ( isDecide )
  {
    deckSelectMenu = this->fields.deckSelectMenu;
    if ( deckSelectMenu )
    {
      DeckSelectMenu__Close_16761608(deckSelectMenu, 0LL, 0LL);
      partyOrganizationConfirmCopyMenu = this->fields.partyOrganizationConfirmCopyMenu;
      v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent__EndConfirmCopy_b__150_0__,
        0LL);
      if ( partyOrganizationConfirmCopyMenu )
      {
        PartyOrganizationConfirmCopyMenu__Close_32155496(partyOrganizationConfirmCopyMenu, v10, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B2C434(deckSelectMenu, isDecide);
  }
  deckSelectMenu = (DeckSelectMenu_o *)this->fields.partyOrganizationConfirmCopyMenu;
  if ( !deckSelectMenu )
    goto LABEL_10;
  PartyOrganizationConfirmCopyMenu__Close_32155496((PartyOrganizationConfirmCopyMenu_o *)deckSelectMenu, 0LL, 0LL);
  v11 = this->fields.deckSelectMenu;
  baseDeckItemList = this->fields.baseDeckItemList;
  v13 = (DeckSelectMenu_CallbackFunc_o *)sub_B2C42C(DeckSelectMenu_CallbackFunc_TypeInfo);
  DeckSelectMenu_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndDeckSelectCopy__,
    0LL);
  if ( !v11 )
    goto LABEL_10;
  DeckSelectMenu__Open(v11, 0, baseDeckItemList, v13, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmInputBoostItem(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  bool v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  BoostItemMenu_o *boostItemMenu; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x20
  BoostItemMenu_o *v9; // x20
  EventUpValSetupInfo_o *setupInfo; // x21
  BoostItemMenu_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x1
  bool IsFriendChocolateQuest; // w23
  const MethodInfo *v14; // x1

  v3 = isDecide;
  if ( (byte_4184FFD & 1) == 0 )
  {
    sub_B2C35C(&BoostItemMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndInputBoostItemMenu__, v5);
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, v6);
    byte_4184FFD = 1;
  }
  if ( v3 )
  {
    *(_QWORD *)&isDecide = (unsigned int)this->fields.selectBoostItem;
    if ( (isDecide & 0x80000000) == 0 )
    {
      boostItemMenu = this->fields.boostItemMenu;
      if ( !boostItemMenu )
        goto LABEL_14;
      boostItemMenu = (BoostItemMenu_o *)BoostItemMenu__GetItem(boostItemMenu, isDecide, 0LL);
      if ( !boostItemMenu )
        goto LABEL_14;
      battleSetupInfo = this->fields.battleSetupInfo;
      boostItemMenu = (BoostItemMenu_o *)BoostItemListViewItem__get_ItemId(
                                           (BoostItemListViewItem_o *)boostItemMenu,
                                           0LL);
      if ( !battleSetupInfo )
        goto LABEL_14;
      battleSetupInfo->fields.itemId = (int)boostItemMenu;
    }
    boostItemMenu = (BoostItemMenu_o *)this->fields.myFSM;
    if ( boostItemMenu )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)boostItemMenu, (System_String_o *)StringLiteral_8717/*"MENU_DECIDE"*/, 0LL);
      return;
    }
LABEL_14:
    sub_B2C434(boostItemMenu, isDecide);
  }
  boostItemMenu = (BoostItemMenu_o *)this->fields.operationConfirmMenu;
  if ( !boostItemMenu )
    goto LABEL_14;
  PartyOrganizationConfirmMenu__Close((PartyOrganizationConfirmMenu_o *)boostItemMenu, 0LL);
  v9 = this->fields.boostItemMenu;
  setupInfo = this->fields.setupInfo;
  v11 = (BoostItemMenu_CallbackFunc_o *)sub_B2C42C(BoostItemMenu_CallbackFunc_TypeInfo);
  BoostItemMenu_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndInputBoostItemMenu__,
    0LL);
  IsFriendChocolateQuest = PartyOrganizationRootComponent__IsFriendChocolateQuest(this, v12);
  boostItemMenu = (BoostItemMenu_o *)PartyOrganizationRootComponent__IsAvailableFriendChocolate(this, v14);
  if ( !v9 )
    goto LABEL_14;
  BoostItemMenu__Open(v9, setupInfo, v11, 0LL, IsFriendChocolateQuest, (unsigned __int8)boostItemMenu & 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmInputBoostSupportItem(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        int32_t boostId,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 *v9; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  v6 = this;
  if ( (byte_4184FFE & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, v7);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v8);
    byte_4184FFE = 1;
  }
  if ( result == 2 )
  {
    battleSetupInfo = v6->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_15;
    battleSetupInfo->fields.boostId = boostId;
    goto LABEL_10;
  }
  if ( result == 1 )
  {
LABEL_10:
    this = (PartyOrganizationRootComponent_o *)v6->fields.myFSM;
    if ( !this )
      goto LABEL_15;
    v9 = &StringLiteral_8717/*"MENU_DECIDE"*/;
    goto LABEL_12;
  }
  if ( result )
    goto LABEL_13;
  v6->fields.state = v6->fields.showBackupState;
  PartyOrganizationRootComponent__RecoverInputShowMenu(v6, *(const MethodInfo **)&result);
  this = (PartyOrganizationRootComponent_o *)v6->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  v9 = &StringLiteral_8716/*"MENU_CANCEL"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v9, 0LL);
LABEL_13:
  this = (PartyOrganizationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_15:
    sub_B2C434(this, *(_QWORD *)&result);
  CommonUI__CloseBoostSupportRequestMenu((CommonUI_o *)this, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyInitAll(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x0
  const MethodInfo *v8; // x2
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x6
  const MethodInfo *v13; // x1

  if ( (byte_4185045 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__, v5);
    sub_B2C35C(&StringLiteral_3073/*"CLICK_REMOVE"*/, v6);
    byte_4185045 = 1;
  }
  operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
  if ( !operationConfirmDeckMenu )
    goto LABEL_13;
  PartyOrganizationConfirmDeckMenu__Close(operationConfirmDeckMenu, 0LL);
  partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
  if ( isDecide )
  {
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Close_19908004(this->fields.partyOrganizationRemoveSelectMenu, 0LL, v8);
      operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.partyItem;
      if ( operationConfirmDeckMenu )
      {
        PartyListViewItem__ClearMember_31922084((PartyListViewItem_o *)operationConfirmDeckMenu, 0LL);
        operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.partyItem;
        if ( operationConfirmDeckMenu )
        {
          PartyListViewItem__ClearDeckName((PartyListViewItem_o *)operationConfirmDeckMenu, 0LL);
          operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.partyOrganizationChangeMenu;
          if ( operationConfirmDeckMenu )
          {
            PartyOrganizationChangeMenu__Init((PartyOrganizationChangeMenu_o *)operationConfirmDeckMenu, 0LL);
            operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
            this->fields.menuMode = 11;
            if ( operationConfirmDeckMenu )
            {
              PlayMakerFSM__SendEvent(
                (PlayMakerFSM_o *)operationConfirmDeckMenu,
                (System_String_o *)StringLiteral_3073/*"CLICK_REMOVE"*/,
                0LL);
              return;
            }
          }
        }
      }
    }
LABEL_13:
    sub_B2C434(operationConfirmDeckMenu, isDecide);
  }
  partyItem = this->fields.partyItem;
  v11 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
  PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__,
    0LL);
  if ( !partyOrganizationRemoveSelectMenu )
    goto LABEL_13;
  PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 1, v11, 0, 0, v12);
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationChangeCancel(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PartyOrganizationConfirmDeck2Menu_o *operationConfirmDeck2Menu; // x0
  __int64 *v9; // x8

  if ( (byte_4184FE3 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, isDecide);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_8715/*"MENU_BACK"*/, v6);
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v7);
    byte_4184FE3 = 1;
  }
  operationConfirmDeck2Menu = this->fields.operationConfirmDeck2Menu;
  if ( !operationConfirmDeck2Menu )
    goto LABEL_14;
  PartyOrganizationConfirmDeck2Menu__Close(operationConfirmDeck2Menu, 0LL);
  if ( !isDecide )
  {
    operationConfirmDeck2Menu = (PartyOrganizationConfirmDeck2Menu_o *)this->fields.myFSM;
    this->fields.state = 1;
    if ( operationConfirmDeck2Menu )
    {
      v9 = &StringLiteral_8716/*"MENU_CANCEL"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_B2C434(operationConfirmDeck2Menu, isDecide);
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  operationConfirmDeck2Menu = (PartyOrganizationConfirmDeck2Menu_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationConfirmDeck2Menu )
    goto LABEL_14;
  PartyOrganizationUtility__ClearNpcFollowerInfo((PartyOrganizationUtility_o *)operationConfirmDeck2Menu, -1, 0LL);
  operationConfirmDeck2Menu = (PartyOrganizationConfirmDeck2Menu_o *)this->fields.myFSM;
  this->fields.menuMode = this->fields.mainMenuMode;
  if ( !operationConfirmDeck2Menu )
    goto LABEL_14;
  v9 = &StringLiteral_8715/*"MENU_BACK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationConfirmDeck2Menu, (System_String_o *)*v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationChangeDecide(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x0
  __int64 *v7; // x8

  if ( (byte_4184FE5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, isDecide);
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v5);
    byte_4184FE5 = 1;
  }
  operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
  if ( !operationConfirmDeckMenu )
    goto LABEL_10;
  PartyOrganizationConfirmDeckMenu__Close(operationConfirmDeckMenu, 0LL);
  if ( !isDecide )
  {
    operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
    this->fields.state = 1;
    if ( operationConfirmDeckMenu )
    {
      v7 = &StringLiteral_8716/*"MENU_CANCEL"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B2C434(operationConfirmDeckMenu, isDecide);
  }
  operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
  if ( !operationConfirmDeckMenu )
    goto LABEL_10;
  v7 = &StringLiteral_8717/*"MENU_DECIDE"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationConfirmDeckMenu, (System_String_o *)*v7, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationChangeDecideCancel(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4184FE6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, method);
    byte_4184FE6 = 1;
  }
  myFSM = this->fields.myFSM;
  this->fields.state = 1;
  if ( !myFSM )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationChangeInitAll(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x0
  const MethodInfo *v8; // x2
  struct PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x8
  PartyListViewItem_o *partyItem; // x20
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x22
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x6

  if ( (byte_4184FEB & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeRemoveSelect__, v5);
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, v6);
    byte_4184FEB = 1;
  }
  operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
  if ( !operationConfirmDeckMenu )
    goto LABEL_12;
  PartyOrganizationConfirmDeckMenu__Close(operationConfirmDeckMenu, 0LL);
  partyOrganizationChangeMenu = this->fields.partyOrganizationChangeMenu;
  if ( !partyOrganizationChangeMenu )
    goto LABEL_12;
  partyItem = partyOrganizationChangeMenu->fields.partyItem;
  partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
  if ( isDecide )
  {
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Close_19908004(this->fields.partyOrganizationRemoveSelectMenu, 0LL, v8);
      if ( partyItem )
      {
        PartyListViewItem__ClearMember_31922084(partyItem, 0LL);
        PartyListViewItem__ClearDeckName(partyItem, 0LL);
        operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
        this->fields.state = 1;
        if ( operationConfirmDeckMenu )
        {
          PlayMakerFSM__SendEvent(
            (PlayMakerFSM_o *)operationConfirmDeckMenu,
            (System_String_o *)StringLiteral_8717/*"MENU_DECIDE"*/,
            0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B2C434(operationConfirmDeckMenu, isDecide);
  }
  v12 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
  PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeRemoveSelect__,
    0LL);
  if ( !partyOrganizationRemoveSelectMenu )
    goto LABEL_12;
  PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 0, v12, 0, 0, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationChangeRemoveAll(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x0
  const MethodInfo *v8; // x2
  struct PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x8
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x22
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x6

  if ( (byte_4184FEA & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeRemoveSelect__, v5);
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, v6);
    byte_4184FEA = 1;
  }
  operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
  if ( !operationConfirmDeckMenu )
    goto LABEL_12;
  PartyOrganizationConfirmDeckMenu__Close(operationConfirmDeckMenu, 0LL);
  partyOrganizationChangeMenu = this->fields.partyOrganizationChangeMenu;
  if ( !partyOrganizationChangeMenu )
    goto LABEL_12;
  partyItem = partyOrganizationChangeMenu->fields.partyItem;
  partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
  if ( isDecide )
  {
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Close_19908004(this->fields.partyOrganizationRemoveSelectMenu, 0LL, v8);
      if ( partyItem )
      {
        PartyListViewItem__ClearMember_31922084(partyItem, 0LL);
        operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
        this->fields.state = 1;
        if ( operationConfirmDeckMenu )
        {
          PlayMakerFSM__SendEvent(
            (PlayMakerFSM_o *)operationConfirmDeckMenu,
            (System_String_o *)StringLiteral_8717/*"MENU_DECIDE"*/,
            0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B2C434(operationConfirmDeckMenu, isDecide);
  }
  v12 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
  PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeRemoveSelect__,
    0LL);
  if ( !partyOrganizationRemoveSelectMenu )
    goto LABEL_12;
  PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 0, v12, 0, 0, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationChangeRemoveEquip(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x0
  const MethodInfo *v8; // x2
  struct PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x8
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x22
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x6

  if ( (byte_4184FE9 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeRemoveSelect__, v5);
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, v6);
    byte_4184FE9 = 1;
  }
  operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
  if ( !operationConfirmDeckMenu )
    goto LABEL_12;
  PartyOrganizationConfirmDeckMenu__Close(operationConfirmDeckMenu, 0LL);
  partyOrganizationChangeMenu = this->fields.partyOrganizationChangeMenu;
  if ( !partyOrganizationChangeMenu )
    goto LABEL_12;
  partyItem = partyOrganizationChangeMenu->fields.partyItem;
  partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
  if ( isDecide )
  {
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Close_19908004(this->fields.partyOrganizationRemoveSelectMenu, 0LL, v8);
      if ( partyItem )
      {
        PartyListViewItem__ClearEquip(partyItem, 0LL);
        operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
        this->fields.state = 1;
        if ( operationConfirmDeckMenu )
        {
          PlayMakerFSM__SendEvent(
            (PlayMakerFSM_o *)operationConfirmDeckMenu,
            (System_String_o *)StringLiteral_8717/*"MENU_DECIDE"*/,
            0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B2C434(operationConfirmDeckMenu, isDecide);
  }
  v12 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
  PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeRemoveSelect__,
    0LL);
  if ( !partyOrganizationRemoveSelectMenu )
    goto LABEL_12;
  PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 0, v12, 0, 0, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationChangeRemoveSelect(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x8
  int v11; // w9
  PartyListViewItem_o *partyItem; // x20
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x21
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v14; // x22
  int32_t v15; // w1
  __int64 *v16; // x8

  v4 = this;
  if ( (byte_4184FE8 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeInitAll__, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeRemoveAll__, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeRemoveEquip__, v7);
    sub_B2C35C(&StringLiteral_3056/*"CLICK_DECK_NAME"*/, v8);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v9);
    byte_4184FE8 = 1;
  }
  partyOrganizationChangeMenu = v4->fields.partyOrganizationChangeMenu;
  if ( !partyOrganizationChangeMenu )
LABEL_18:
    sub_B2C434(this, *(_QWORD *)&result);
  v11 = result - 2;
  partyItem = partyOrganizationChangeMenu->fields.partyItem;
  switch ( v11 )
  {
    case 0:
      operationConfirmDeckMenu = v4->fields.operationConfirmDeckMenu;
      v14 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v4,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeRemoveAll__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_18;
      v15 = 8;
      goto LABEL_11;
    case 1:
      operationConfirmDeckMenu = v4->fields.operationConfirmDeckMenu;
      v14 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v4,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeInitAll__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_18;
      v15 = 6;
      goto LABEL_11;
    case 2:
      operationConfirmDeckMenu = v4->fields.operationConfirmDeckMenu;
      v14 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v4,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationChangeRemoveEquip__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_18;
      v15 = 7;
LABEL_11:
      PartyOrganizationConfirmDeckMenu__Open(operationConfirmDeckMenu, v15, partyItem, v14, 0LL);
      return;
    case 3:
      this = (PartyOrganizationRootComponent_o *)v4->fields.myFSM;
      if ( !this )
        goto LABEL_18;
      v16 = &StringLiteral_3056/*"CLICK_DECK_NAME"*/;
      goto LABEL_17;
    default:
      this = (PartyOrganizationRootComponent_o *)v4->fields.partyOrganizationRemoveSelectMenu;
      if ( !this )
        goto LABEL_18;
      PartyOrganizationRemoveSelectMenu__Close_19908004((PartyOrganizationRemoveSelectMenu_o *)this, 0LL, method);
      this = (PartyOrganizationRootComponent_o *)v4->fields.myFSM;
      v4->fields.state = 1;
      if ( !this )
        goto LABEL_18;
      v16 = &StringLiteral_8716/*"MENU_CANCEL"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v16, 0LL);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationSwapCancel(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PartyOrganizationConfirmDeck2Menu_o *operationConfirmDeck2Menu; // x0
  __int64 *v9; // x8

  if ( (byte_4184FED & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, isDecide);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_8715/*"MENU_BACK"*/, v6);
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v7);
    byte_4184FED = 1;
  }
  operationConfirmDeck2Menu = this->fields.operationConfirmDeck2Menu;
  if ( !operationConfirmDeck2Menu )
    goto LABEL_14;
  PartyOrganizationConfirmDeck2Menu__Close(operationConfirmDeck2Menu, 0LL);
  if ( !isDecide )
  {
    operationConfirmDeck2Menu = (PartyOrganizationConfirmDeck2Menu_o *)this->fields.myFSM;
    this->fields.state = 1;
    if ( operationConfirmDeck2Menu )
    {
      v9 = &StringLiteral_8716/*"MENU_CANCEL"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_B2C434(operationConfirmDeck2Menu, isDecide);
  }
  this->fields.isAutoOrganization = 0;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  operationConfirmDeck2Menu = (PartyOrganizationConfirmDeck2Menu_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationConfirmDeck2Menu )
    goto LABEL_14;
  PartyOrganizationUtility__ClearNpcFollowerInfo((PartyOrganizationUtility_o *)operationConfirmDeck2Menu, -1, 0LL);
  operationConfirmDeck2Menu = (PartyOrganizationConfirmDeck2Menu_o *)this->fields.myFSM;
  this->fields.menuMode = this->fields.mainMenuMode;
  if ( !operationConfirmDeck2Menu )
    goto LABEL_14;
  v9 = &StringLiteral_8715/*"MENU_BACK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationConfirmDeck2Menu, (System_String_o *)*v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationSwapDecide(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x0
  __int64 *v7; // x8

  if ( (byte_4184FEF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, isDecide);
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v5);
    byte_4184FEF = 1;
  }
  operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
  if ( !operationConfirmDeckMenu )
    goto LABEL_10;
  PartyOrganizationConfirmDeckMenu__Close(operationConfirmDeckMenu, 0LL);
  if ( !isDecide )
  {
    operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
    this->fields.state = 1;
    if ( operationConfirmDeckMenu )
    {
      v7 = &StringLiteral_8716/*"MENU_CANCEL"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B2C434(operationConfirmDeckMenu, isDecide);
  }
  operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
  if ( !operationConfirmDeckMenu )
    goto LABEL_10;
  v7 = &StringLiteral_8717/*"MENU_DECIDE"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationConfirmDeckMenu, (System_String_o *)*v7, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationSwapDecideCancel(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4184FF0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, method);
    byte_4184FF0 = 1;
  }
  myFSM = this->fields.myFSM;
  this->fields.state = 1;
  if ( !myFSM )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationSwapInitAll(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x0
  const MethodInfo *v8; // x2
  struct PartyOrganizationMenu_o *partyOrganizationMenu; // x8
  PartyListViewItem_o *partyItem; // x20
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x22
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x6

  if ( (byte_4184FF5 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapRemoveSelect__, v5);
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, v6);
    byte_4184FF5 = 1;
  }
  operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
  if ( !operationConfirmDeckMenu )
    goto LABEL_12;
  PartyOrganizationConfirmDeckMenu__Close(operationConfirmDeckMenu, 0LL);
  partyOrganizationMenu = this->fields.partyOrganizationMenu;
  if ( !partyOrganizationMenu )
    goto LABEL_12;
  partyItem = partyOrganizationMenu->fields.partyItem;
  partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
  if ( isDecide )
  {
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Close_19908004(this->fields.partyOrganizationRemoveSelectMenu, 0LL, v8);
      if ( partyItem )
      {
        PartyListViewItem__ClearMember_31922084(partyItem, 0LL);
        PartyListViewItem__ClearDeckName(partyItem, 0LL);
        operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
        this->fields.state = 1;
        if ( operationConfirmDeckMenu )
        {
          PlayMakerFSM__SendEvent(
            (PlayMakerFSM_o *)operationConfirmDeckMenu,
            (System_String_o *)StringLiteral_8717/*"MENU_DECIDE"*/,
            0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B2C434(operationConfirmDeckMenu, isDecide);
  }
  v12 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
  PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapRemoveSelect__,
    0LL);
  if ( !partyOrganizationRemoveSelectMenu )
    goto LABEL_12;
  PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 0, v12, 0, 0, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationSwapRemoveAll(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x0
  const MethodInfo *v8; // x2
  struct PartyOrganizationMenu_o *partyOrganizationMenu; // x8
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x22
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x6

  if ( (byte_4184FF4 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapRemoveSelect__, v5);
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, v6);
    byte_4184FF4 = 1;
  }
  operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
  if ( !operationConfirmDeckMenu )
    goto LABEL_12;
  PartyOrganizationConfirmDeckMenu__Close(operationConfirmDeckMenu, 0LL);
  partyOrganizationMenu = this->fields.partyOrganizationMenu;
  if ( !partyOrganizationMenu )
    goto LABEL_12;
  partyItem = partyOrganizationMenu->fields.partyItem;
  partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
  if ( isDecide )
  {
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Close_19908004(this->fields.partyOrganizationRemoveSelectMenu, 0LL, v8);
      if ( partyItem )
      {
        PartyListViewItem__ClearMember_31922084(partyItem, 0LL);
        operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
        this->fields.state = 1;
        if ( operationConfirmDeckMenu )
        {
          PlayMakerFSM__SendEvent(
            (PlayMakerFSM_o *)operationConfirmDeckMenu,
            (System_String_o *)StringLiteral_8717/*"MENU_DECIDE"*/,
            0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B2C434(operationConfirmDeckMenu, isDecide);
  }
  v12 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
  PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapRemoveSelect__,
    0LL);
  if ( !partyOrganizationRemoveSelectMenu )
    goto LABEL_12;
  PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 0, v12, 0, 0, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationSwapRemoveEquip(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x0
  const MethodInfo *v8; // x2
  struct PartyOrganizationMenu_o *partyOrganizationMenu; // x8
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x22
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x6

  if ( (byte_4184FF3 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapRemoveSelect__, v5);
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, v6);
    byte_4184FF3 = 1;
  }
  operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
  if ( !operationConfirmDeckMenu )
    goto LABEL_12;
  PartyOrganizationConfirmDeckMenu__Close(operationConfirmDeckMenu, 0LL);
  partyOrganizationMenu = this->fields.partyOrganizationMenu;
  if ( !partyOrganizationMenu )
    goto LABEL_12;
  partyItem = partyOrganizationMenu->fields.partyItem;
  partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
  if ( isDecide )
  {
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Close_19908004(this->fields.partyOrganizationRemoveSelectMenu, 0LL, v8);
      if ( partyItem )
      {
        PartyListViewItem__ClearEquip(partyItem, 0LL);
        operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
        this->fields.state = 1;
        if ( operationConfirmDeckMenu )
        {
          PlayMakerFSM__SendEvent(
            (PlayMakerFSM_o *)operationConfirmDeckMenu,
            (System_String_o *)StringLiteral_8717/*"MENU_DECIDE"*/,
            0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B2C434(operationConfirmDeckMenu, isDecide);
  }
  v12 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
  PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapRemoveSelect__,
    0LL);
  if ( !partyOrganizationRemoveSelectMenu )
    goto LABEL_12;
  PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 0, v12, 0, 0, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyOrganizationSwapRemoveSelect(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct PartyOrganizationMenu_o *partyOrganizationMenu; // x8
  int v11; // w9
  PartyListViewItem_o *partyItem; // x20
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x21
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v14; // x22
  int32_t v15; // w1
  __int64 *v16; // x8

  v4 = this;
  if ( (byte_4184FF2 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapInitAll__, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapRemoveAll__, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapRemoveEquip__, v7);
    sub_B2C35C(&StringLiteral_3056/*"CLICK_DECK_NAME"*/, v8);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v9);
    byte_4184FF2 = 1;
  }
  partyOrganizationMenu = v4->fields.partyOrganizationMenu;
  if ( !partyOrganizationMenu )
LABEL_18:
    sub_B2C434(this, *(_QWORD *)&result);
  v11 = result - 2;
  partyItem = partyOrganizationMenu->fields.partyItem;
  switch ( v11 )
  {
    case 0:
      operationConfirmDeckMenu = v4->fields.operationConfirmDeckMenu;
      v14 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v4,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapRemoveAll__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_18;
      v15 = 8;
      goto LABEL_11;
    case 1:
      operationConfirmDeckMenu = v4->fields.operationConfirmDeckMenu;
      v14 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v4,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapInitAll__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_18;
      v15 = 6;
      goto LABEL_11;
    case 2:
      operationConfirmDeckMenu = v4->fields.operationConfirmDeckMenu;
      v14 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v4,
        Method_PartyOrganizationRootComponent_EndConfirmPartyOrganizationSwapRemoveEquip__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_18;
      v15 = 7;
LABEL_11:
      PartyOrganizationConfirmDeckMenu__Open(operationConfirmDeckMenu, v15, partyItem, v14, 0LL);
      return;
    case 3:
      this = (PartyOrganizationRootComponent_o *)v4->fields.myFSM;
      if ( !this )
        goto LABEL_18;
      v16 = &StringLiteral_3056/*"CLICK_DECK_NAME"*/;
      goto LABEL_17;
    default:
      this = (PartyOrganizationRootComponent_o *)v4->fields.partyOrganizationRemoveSelectMenu;
      if ( !this )
        goto LABEL_18;
      PartyOrganizationRemoveSelectMenu__Close_19908004((PartyOrganizationRemoveSelectMenu_o *)this, 0LL, method);
      this = (PartyOrganizationRootComponent_o *)v4->fields.myFSM;
      v4->fields.state = 1;
      if ( !this )
        goto LABEL_18;
      v16 = &StringLiteral_8716/*"MENU_CANCEL"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v16, 0LL);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyRemoveAll(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x0
  const MethodInfo *v8; // x2
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x6
  const MethodInfo *v13; // x1

  if ( (byte_4185044 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__, v5);
    sub_B2C35C(&StringLiteral_3073/*"CLICK_REMOVE"*/, v6);
    byte_4185044 = 1;
  }
  operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
  if ( !operationConfirmDeckMenu )
    goto LABEL_12;
  PartyOrganizationConfirmDeckMenu__Close(operationConfirmDeckMenu, 0LL);
  partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
  if ( isDecide )
  {
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Close_19908004(this->fields.partyOrganizationRemoveSelectMenu, 0LL, v8);
      operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.partyItem;
      if ( operationConfirmDeckMenu )
      {
        PartyListViewItem__ClearMember_31922084((PartyListViewItem_o *)operationConfirmDeckMenu, 0LL);
        operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.partyOrganizationChangeMenu;
        if ( operationConfirmDeckMenu )
        {
          PartyOrganizationChangeMenu__Init((PartyOrganizationChangeMenu_o *)operationConfirmDeckMenu, 0LL);
          operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
          this->fields.menuMode = 11;
          if ( operationConfirmDeckMenu )
          {
            PlayMakerFSM__SendEvent(
              (PlayMakerFSM_o *)operationConfirmDeckMenu,
              (System_String_o *)StringLiteral_3073/*"CLICK_REMOVE"*/,
              0LL);
            return;
          }
        }
      }
    }
LABEL_12:
    sub_B2C434(operationConfirmDeckMenu, isDecide);
  }
  partyItem = this->fields.partyItem;
  v11 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
  PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__,
    0LL);
  if ( !partyOrganizationRemoveSelectMenu )
    goto LABEL_12;
  PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 1, v11, 0, 0, v12);
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyRemoveEquip(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x0
  const MethodInfo *v8; // x2
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x6
  const MethodInfo *v13; // x1

  if ( (byte_4185043 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__, v5);
    sub_B2C35C(&StringLiteral_3073/*"CLICK_REMOVE"*/, v6);
    byte_4185043 = 1;
  }
  operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
  if ( !operationConfirmDeckMenu )
    goto LABEL_12;
  PartyOrganizationConfirmDeckMenu__Close(operationConfirmDeckMenu, 0LL);
  partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
  if ( isDecide )
  {
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Close_19908004(this->fields.partyOrganizationRemoveSelectMenu, 0LL, v8);
      operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.partyItem;
      if ( operationConfirmDeckMenu )
      {
        PartyListViewItem__ClearEquip((PartyListViewItem_o *)operationConfirmDeckMenu, 0LL);
        operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.partyOrganizationChangeMenu;
        if ( operationConfirmDeckMenu )
        {
          PartyOrganizationChangeMenu__Init((PartyOrganizationChangeMenu_o *)operationConfirmDeckMenu, 0LL);
          operationConfirmDeckMenu = (PartyOrganizationConfirmDeckMenu_o *)this->fields.myFSM;
          this->fields.menuMode = 11;
          if ( operationConfirmDeckMenu )
          {
            PlayMakerFSM__SendEvent(
              (PlayMakerFSM_o *)operationConfirmDeckMenu,
              (System_String_o *)StringLiteral_3073/*"CLICK_REMOVE"*/,
              0LL);
            return;
          }
        }
      }
    }
LABEL_12:
    sub_B2C434(operationConfirmDeckMenu, isDecide);
  }
  partyItem = this->fields.partyItem;
  v11 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
  PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__,
    0LL);
  if ( !partyOrganizationRemoveSelectMenu )
    goto LABEL_12;
  PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 1, v11, 0, 0, v12);
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmPartyRemoveSelect(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x0
  __int64 *v23; // x8
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v26; // x22
  int32_t v27; // w1
  UnityEngine_Object_o *v28; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v30; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  System_String_o *v33; // x24
  CommonConfirmDialog_ClickDelegate_o *v34; // x0
  __int64 *v35; // x8
  UnityEngine_Object_o *waveBattlePartyOrganizationMenu; // x20
  CommonConfirmDialog_ClickDelegate_o *v37; // x25
  UnityEngine_Object_o *v38; // x20
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1

  if ( (byte_418503E & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyInitAll__, v8);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveAll__, v9);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveEquip__, v10);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmWavePartyRemoveAll__, v11);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmWavePartyRemoveEquip__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B2C35C(&StringLiteral_3055/*"CLICK_DECK_COPY"*/, v14);
    sub_B2C35C(&StringLiteral_15347/*"WAVE_BATTLE_EQUIP_REMOVE_MESSAGE"*/, v15);
    sub_B2C35C(&StringLiteral_15353/*"WAVE_BATTLE_PARTY_REMOVE_MESSAGE"*/, v16);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v17);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v18);
    sub_B2C35C(&StringLiteral_15354/*"WAVE_BATTLE_PARTY_REMOVE_TITLE"*/, v19);
    sub_B2C35C(&StringLiteral_3056/*"CLICK_DECK_NAME"*/, v20);
    sub_B2C35C(&StringLiteral_15348/*"WAVE_BATTLE_EQUIP_REMOVE_TITLE"*/, v21);
    byte_418503E = 1;
  }
  switch ( result )
  {
    case 1:
      partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
      if ( !partyOrganizationRemoveSelectMenu )
        goto LABEL_49;
      PartyOrganizationRemoveSelectMenu__Close_19908004(partyOrganizationRemoveSelectMenu, 0LL, method);
      partyOrganizationRemoveSelectMenu = (PartyOrganizationRemoveSelectMenu_o *)this->fields.myFSM;
      if ( !partyOrganizationRemoveSelectMenu )
        goto LABEL_49;
      v23 = &StringLiteral_3055/*"CLICK_DECK_COPY"*/;
      goto LABEL_9;
    case 2:
      waveBattlePartyOrganizationMenu = (UnityEngine_Object_o *)this->fields.waveBattlePartyOrganizationMenu;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(waveBattlePartyOrganizationMenu, 0LL, 0LL) )
        goto LABEL_44;
      partyOrganizationRemoveSelectMenu = (PartyOrganizationRemoveSelectMenu_o *)this->fields.waveBattlePartyOrganizationMenu;
      if ( !partyOrganizationRemoveSelectMenu )
        goto LABEL_49;
      if ( WaveBattlePartyOrganizationMenu__IsDisplay(
             (WaveBattlePartyOrganizationMenu_o *)partyOrganizationRemoveSelectMenu,
             0LL) )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15354/*"WAVE_BATTLE_PARTY_REMOVE_TITLE"*/, 0LL);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15353/*"WAVE_BATTLE_PARTY_REMOVE_MESSAGE"*/, 0LL);
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v35 = &Method_PartyOrganizationRootComponent_EndConfirmWavePartyRemoveAll__;
        goto LABEL_32;
      }
LABEL_44:
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      partyItem = this->fields.partyItem;
      v26 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveAll__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_49;
      v27 = 8;
      break;
    case 3:
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      partyItem = this->fields.partyItem;
      v26 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndConfirmPartyInitAll__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_49;
      v27 = 6;
      break;
    case 4:
      v28 = (UnityEngine_Object_o *)this->fields.waveBattlePartyOrganizationMenu;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
        goto LABEL_42;
      partyOrganizationRemoveSelectMenu = (PartyOrganizationRemoveSelectMenu_o *)this->fields.waveBattlePartyOrganizationMenu;
      if ( !partyOrganizationRemoveSelectMenu )
        goto LABEL_49;
      if ( WaveBattlePartyOrganizationMenu__IsDisplay(
             (WaveBattlePartyOrganizationMenu_o *)partyOrganizationRemoveSelectMenu,
             0LL) )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15348/*"WAVE_BATTLE_EQUIP_REMOVE_TITLE"*/, 0LL);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15347/*"WAVE_BATTLE_EQUIP_REMOVE_MESSAGE"*/, 0LL);
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v35 = &Method_PartyOrganizationRootComponent_EndConfirmWavePartyRemoveEquip__;
LABEL_32:
        v37 = v34;
        CommonConfirmDialog_ClickDelegate___ctor(v34, (Il2CppObject *)this, *v35, 0LL);
        if ( Instance )
        {
          CommonUI__OpenConfirmDecideDlg(Instance, v30, v31, v32, v33, v37, 26, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
          return;
        }
LABEL_49:
        sub_B2C434(partyOrganizationRemoveSelectMenu, *(_QWORD *)&result);
      }
LABEL_42:
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      partyItem = this->fields.partyItem;
      v26 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveEquip__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_49;
      v27 = 7;
      break;
    case 5:
      partyOrganizationRemoveSelectMenu = (PartyOrganizationRemoveSelectMenu_o *)this->fields.myFSM;
      if ( !partyOrganizationRemoveSelectMenu )
        goto LABEL_49;
      v23 = &StringLiteral_3056/*"CLICK_DECK_NAME"*/;
LABEL_9:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)partyOrganizationRemoveSelectMenu, (System_String_o *)*v23, 0LL);
      return;
    default:
      v38 = (UnityEngine_Object_o *)this->fields.waveBattlePartyOrganizationMenu;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
        goto LABEL_47;
      partyOrganizationRemoveSelectMenu = (PartyOrganizationRemoveSelectMenu_o *)this->fields.waveBattlePartyOrganizationMenu;
      if ( !partyOrganizationRemoveSelectMenu )
        goto LABEL_49;
      if ( WaveBattlePartyOrganizationMenu__IsDisplay(
             (WaveBattlePartyOrganizationMenu_o *)partyOrganizationRemoveSelectMenu,
             0LL) )
      {
        partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
        if ( !partyOrganizationRemoveSelectMenu )
          goto LABEL_49;
        PartyOrganizationRemoveSelectMenu__Close_19908004(partyOrganizationRemoveSelectMenu, 0LL, v39);
      }
      else
      {
LABEL_47:
        partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
        this->fields.changePartyMode = 0;
        if ( !partyOrganizationRemoveSelectMenu )
          goto LABEL_49;
        PartyOrganizationRemoveSelectMenu__Close_19908004(partyOrganizationRemoveSelectMenu, 0LL, v39);
        PartyOrganizationRootComponent__RecoverInputShowMenu(this, v40);
      }
      return;
  }
  PartyOrganizationConfirmDeckMenu__Open(operationConfirmDeckMenu, v27, partyItem, v26, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmWavePartyRemoveAll(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CommonUI_o *Instance; // x0
  struct PartyListViewItem_array *baseDeckItemList; // x1
  il2cpp_array_size_t v13; // w21
  __int64 v14; // x22
  il2cpp_array_size_t max_length; // w8
  struct PartyListViewItem_array *v16; // x8
  struct PartyListViewItem_array *waveBattleBaseDeckItemList; // x23
  Il2CppClass *v18; // x20
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v21; // x22
  const MethodInfo *v22; // x6
  UserEventDeckEntity_o *UserEventDeck; // x20
  NetworkManager_ResultCallbackFunc_o *v24; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t eventId; // w22
  EventDeckSetupRequest_o *v27; // x21
  struct BattleSetupInfo_o *v28; // x8
  const MethodInfo *v29; // x2
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_4185041 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventDeckSetupRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__, v7);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestWaveBattleDeckReset__, v8);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4185041 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( !isDecide )
  {
    partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
    partyItem = this->fields.partyItem;
    v21 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__,
      0LL);
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 1, v21, 0, 0, v22);
      return;
    }
LABEL_18:
    sub_B2C434(Instance, baseDeckItemList);
  }
  baseDeckItemList = this->fields.baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_18;
  v13 = 0;
  v14 = 32LL;
  while ( 1 )
  {
    max_length = baseDeckItemList->max_length;
    if ( (int)v13 >= (int)max_length )
      break;
    if ( v13 >= max_length )
      goto LABEL_30;
    Instance = *(CommonUI_o **)((char *)&baseDeckItemList->obj.klass + v14);
    if ( Instance )
    {
      PartyListViewItem__ClearMember_31922084((PartyListViewItem_o *)Instance, 0LL);
      v16 = this->fields.baseDeckItemList;
      if ( v16 )
      {
        if ( v13 >= v16->max_length )
          goto LABEL_30;
        Instance = *(CommonUI_o **)((char *)&v16->obj.klass + v14);
        if ( Instance )
        {
          waveBattleBaseDeckItemList = this->fields.waveBattleBaseDeckItemList;
          Instance = (CommonUI_o *)PartyListViewItem__Clone((PartyListViewItem_o *)Instance, 0LL);
          if ( waveBattleBaseDeckItemList )
          {
            v18 = (Il2CppClass *)Instance;
            if ( Instance )
            {
              Instance = (CommonUI_o *)sub_B2C41C(Instance, waveBattleBaseDeckItemList->obj.klass->_1.element_class);
              if ( !Instance )
              {
                v31 = sub_B2C454();
                sub_B2C400(v31, 0LL);
              }
            }
            if ( v13 >= waveBattleBaseDeckItemList->max_length )
            {
LABEL_30:
              v30 = sub_B2C460(Instance);
              sub_B2C400(v30, 0LL);
            }
            *(Il2CppClass **)((char *)&waveBattleBaseDeckItemList->obj.klass + v14) = v18;
            sub_B2C2F8((char *)waveBattleBaseDeckItemList + v14, v18);
            baseDeckItemList = this->fields.baseDeckItemList;
            ++v13;
            v14 += 8LL;
            if ( baseDeckItemList )
              continue;
          }
        }
      }
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)this->fields.waveBattlePartyOrganizationMenu;
  if ( !Instance )
    goto LABEL_18;
  UserEventDeck = WaveBattlePartyOrganizationMenu__GetUserEventDeck(
                    (WaveBattlePartyOrganizationMenu_o *)Instance,
                    baseDeckItemList,
                    0LL);
  v24 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndRequestWaveBattleDeckReset__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (CommonUI_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                             v24,
                             (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventDeckSetupRequest___);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_18;
  eventId = battleSetupInfo->fields.eventId;
  v27 = (EventDeckSetupRequest_o *)Instance;
  Instance = (CommonUI_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v28 = this->fields.battleSetupInfo;
  if ( !v28 )
    goto LABEL_18;
  if ( !v27 )
    goto LABEL_18;
  EventDeckSetupRequest__beginRequest(v27, UserEventDeck, eventId, (int32_t)Instance, v28->fields.questPhase, 0LL);
  Instance = (CommonUI_o *)this->fields.partyOrganizationRemoveSelectMenu;
  if ( !Instance )
    goto LABEL_18;
  PartyOrganizationRemoveSelectMenu__Close_19908004((PartyOrganizationRemoveSelectMenu_o *)Instance, 0LL, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndConfirmWavePartyRemoveEquip(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CommonUI_o *Instance; // x0
  struct PartyListViewItem_array *baseDeckItemList; // x1
  il2cpp_array_size_t v13; // w21
  __int64 v14; // x22
  il2cpp_array_size_t max_length; // w8
  struct PartyListViewItem_array *v16; // x8
  struct PartyListViewItem_array *waveBattleBaseDeckItemList; // x23
  Il2CppClass *v18; // x20
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v21; // x22
  const MethodInfo *v22; // x6
  UserEventDeckEntity_o *UserEventDeck; // x20
  NetworkManager_ResultCallbackFunc_o *v24; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t eventId; // w22
  EventDeckSetupRequest_o *v27; // x21
  struct BattleSetupInfo_o *v28; // x8
  const MethodInfo *v29; // x2
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_4185040 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventDeckSetupRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__, v7);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestWaveBattleDeckReset__, v8);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4185040 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( !isDecide )
  {
    partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
    partyItem = this->fields.partyItem;
    v21 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__,
      0LL);
    if ( partyOrganizationRemoveSelectMenu )
    {
      PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 1, v21, 0, 0, v22);
      return;
    }
LABEL_18:
    sub_B2C434(Instance, baseDeckItemList);
  }
  baseDeckItemList = this->fields.baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_18;
  v13 = 0;
  v14 = 32LL;
  while ( 1 )
  {
    max_length = baseDeckItemList->max_length;
    if ( (int)v13 >= (int)max_length )
      break;
    if ( v13 >= max_length )
      goto LABEL_30;
    Instance = *(CommonUI_o **)((char *)&baseDeckItemList->obj.klass + v14);
    if ( Instance )
    {
      PartyListViewItem__ClearEquip((PartyListViewItem_o *)Instance, 0LL);
      v16 = this->fields.baseDeckItemList;
      if ( v16 )
      {
        if ( v13 >= v16->max_length )
          goto LABEL_30;
        Instance = *(CommonUI_o **)((char *)&v16->obj.klass + v14);
        if ( Instance )
        {
          waveBattleBaseDeckItemList = this->fields.waveBattleBaseDeckItemList;
          Instance = (CommonUI_o *)PartyListViewItem__Clone((PartyListViewItem_o *)Instance, 0LL);
          if ( waveBattleBaseDeckItemList )
          {
            v18 = (Il2CppClass *)Instance;
            if ( Instance )
            {
              Instance = (CommonUI_o *)sub_B2C41C(Instance, waveBattleBaseDeckItemList->obj.klass->_1.element_class);
              if ( !Instance )
              {
                v31 = sub_B2C454();
                sub_B2C400(v31, 0LL);
              }
            }
            if ( v13 >= waveBattleBaseDeckItemList->max_length )
            {
LABEL_30:
              v30 = sub_B2C460(Instance);
              sub_B2C400(v30, 0LL);
            }
            *(Il2CppClass **)((char *)&waveBattleBaseDeckItemList->obj.klass + v14) = v18;
            sub_B2C2F8((char *)waveBattleBaseDeckItemList + v14, v18);
            baseDeckItemList = this->fields.baseDeckItemList;
            ++v13;
            v14 += 8LL;
            if ( baseDeckItemList )
              continue;
          }
        }
      }
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)this->fields.waveBattlePartyOrganizationMenu;
  if ( !Instance )
    goto LABEL_18;
  UserEventDeck = WaveBattlePartyOrganizationMenu__GetUserEventDeck(
                    (WaveBattlePartyOrganizationMenu_o *)Instance,
                    baseDeckItemList,
                    0LL);
  v24 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndRequestWaveBattleDeckReset__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (CommonUI_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                             v24,
                             (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventDeckSetupRequest___);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_18;
  eventId = battleSetupInfo->fields.eventId;
  v27 = (EventDeckSetupRequest_o *)Instance;
  Instance = (CommonUI_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v28 = this->fields.battleSetupInfo;
  if ( !v28 )
    goto LABEL_18;
  if ( !v27 )
    goto LABEL_18;
  EventDeckSetupRequest__beginRequest(v27, UserEventDeck, eventId, (int32_t)Instance, v28->fields.questPhase, 0LL);
  Instance = (CommonUI_o *)this->fields.partyOrganizationRemoveSelectMenu;
  if ( !Instance )
    goto LABEL_18;
  PartyOrganizationRemoveSelectMenu__Close_19908004((PartyOrganizationRemoveSelectMenu_o *)Instance, 0LL, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndDeckSelectCopy(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct PartyListViewItem_array *baseDeckItemList; // x8
  __int64 selectPartyNum; // x9
  unsigned int max_length; // w10
  PartyOrganizationConfirmCopyMenu_o *partyOrganizationConfirmCopyMenu; // x21
  PartyListViewItem_o *v15; // x22
  PartyListViewItem_o *v16; // x20
  PartyOrganizationConfirmCopyMenu_CallbackFunc_o *v17; // x23
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v20; // x22
  const MethodInfo *v21; // x6
  __int64 v22; // x0

  v6 = this;
  if ( (byte_4184FF9 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmCopy__, v8);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__, v9);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v10);
    byte_4184FF9 = 1;
  }
  v6->fields.selectCopyPartyNum = index;
  if ( result == 1 )
  {
    baseDeckItemList = v6->fields.baseDeckItemList;
    if ( baseDeckItemList )
    {
      selectPartyNum = v6->fields.selectPartyNum;
      max_length = baseDeckItemList->max_length;
      if ( (unsigned int)selectPartyNum >= max_length || max_length <= index )
      {
        v22 = sub_B2C460(this);
        sub_B2C400(v22, 0LL);
      }
      partyOrganizationConfirmCopyMenu = v6->fields.partyOrganizationConfirmCopyMenu;
      v15 = baseDeckItemList->m_Items[selectPartyNum];
      v16 = baseDeckItemList->m_Items[index];
      v17 = (PartyOrganizationConfirmCopyMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmCopyMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)v6,
        Method_PartyOrganizationRootComponent_EndConfirmCopy__,
        0LL);
      if ( partyOrganizationConfirmCopyMenu )
      {
        PartyOrganizationConfirmCopyMenu__Open(partyOrganizationConfirmCopyMenu, 0, v15, v16, v17, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B2C434(this, *(_QWORD *)&result);
  }
  this = (PartyOrganizationRootComponent_o *)v6->fields.deckSelectMenu;
  if ( !this )
    goto LABEL_13;
  DeckSelectMenu__Close_16761608((DeckSelectMenu_o *)this, 0LL, 0LL);
  partyOrganizationRemoveSelectMenu = v6->fields.partyOrganizationRemoveSelectMenu;
  partyItem = v6->fields.partyItem;
  v20 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
  PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)v6,
    Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__,
    0LL);
  if ( !partyOrganizationRemoveSelectMenu )
    goto LABEL_13;
  PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 1, v20, 0, 0, v21);
  this = (PartyOrganizationRootComponent_o *)v6->fields.myFSM;
  v6->fields.state = v6->fields.showBackupState;
  if ( !this )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndFadeBackParty(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyListMenu_o *partyListMenu; // x0
  struct PartyListMenu_o *v4; // x8

  partyListMenu = this->fields.partyListMenu;
  if ( !partyListMenu || (PartyListMenu__DispInfoPanel(partyListMenu, 0, 0LL), (v4 = this->fields.partyListMenu) == 0LL) )
    sub_B2C434(partyListMenu, method);
  v4->fields.buttonStateSetFlag = 1;
  PartyOrganizationRootComponent__OnMoveEnd(this, method);
}


void __fastcall PartyOrganizationRootComponent__EndFadeBackQuest(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyListMenu_o *partyListMenu; // x0
  struct PartyListMenu_o *v4; // x8

  partyListMenu = this->fields.partyListMenu;
  if ( !partyListMenu || (PartyListMenu__DispInfoPanel(partyListMenu, 0, 0LL), (v4 = this->fields.partyListMenu) == 0LL) )
    sub_B2C434(partyListMenu, method);
  v4->fields.buttonStateSetFlag = 1;
  PartyOrganizationRootComponent__OnMoveEnd(this, method);
}


void __fastcall PartyOrganizationRootComponent__EndFadeBackSupportOnlyQuest(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyListMenu_o *partyListMenu; // x0
  struct PartyListMenu_o *v4; // x8

  partyListMenu = this->fields.partyListMenu;
  if ( !partyListMenu || (PartyListMenu__DispInfoPanel(partyListMenu, 0, 0LL), (v4 = this->fields.partyListMenu) == 0LL) )
    sub_B2C434(partyListMenu, method);
  v4->fields.buttonStateSetFlag = 1;
  PartyOrganizationRootComponent__OnMoveEnd(this, method);
}


void __fastcall PartyOrganizationRootComponent__EndFadeSelectParty(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  PartyOrganizationRootComponent_c *v7; // x8
  float EDIT_SCENE_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4184FDC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnMoveEnd__, v3);
    sub_B2C35C(&PartyOrganizationRootComponent_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4184FDC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = PartyOrganizationRootComponent_TypeInfo;
  if ( (BYTE3(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo);
    v7 = PartyOrganizationRootComponent_TypeInfo;
  }
  EDIT_SCENE_FADE_TIME = v7->static_fields->EDIT_SCENE_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_OnMoveEnd__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadein(Instance, EDIT_SCENE_FADE_TIME, v9, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndFadeSelectSupportOnlyQuest(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  PartyOrganizationRootComponent_c *v7; // x8
  float EDIT_SCENE_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4184FDA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnMoveEnd__, v3);
    sub_B2C35C(&PartyOrganizationRootComponent_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4184FDA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = PartyOrganizationRootComponent_TypeInfo;
  if ( (BYTE3(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo);
    v7 = PartyOrganizationRootComponent_TypeInfo;
  }
  EDIT_SCENE_FADE_TIME = v7->static_fields->EDIT_SCENE_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_OnMoveEnd__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadein(Instance, EDIT_SCENE_FADE_TIME, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndFixedServantPosAndSearvantNumQuestStart(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  PartyOrganizationConfirmMyServantMenu_o *partyOrganizationConfirmMyServantMenu; // x0
  System_String_o *v6; // x20
  PartyListViewItem_o *v7; // x21
  bool IsUseOldMaster; // w0
  PartyOrganizationRestrictionHelpDialog_o *partyOrganizationRestrictionHelpDialog; // x24
  EventUpValSetupInfo_o *setupInfo; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  bool v12; // w26
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v13; // x25
  const MethodInfo *v14; // [xsp+0h] [xbp-50h]

  if ( (byte_418503D & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndServantNumWarningQuestStart__, v4);
    byte_418503D = 1;
  }
  partyOrganizationConfirmMyServantMenu = this->fields.partyOrganizationConfirmMyServantMenu;
  if ( !partyOrganizationConfirmMyServantMenu )
    goto LABEL_11;
  PartyOrganizationConfirmMyServantMenu__Close(partyOrganizationConfirmMyServantMenu, 0LL);
  partyOrganizationConfirmMyServantMenu = (PartyOrganizationConfirmMyServantMenu_o *)this->fields.questRestrictionInfo;
  if ( !partyOrganizationConfirmMyServantMenu )
    goto LABEL_11;
  partyOrganizationConfirmMyServantMenu = (PartyOrganizationConfirmMyServantMenu_o *)QuestRestrictionInfo__GetServantNumRestrictionDialogMessage(
                                                                                       (QuestRestrictionInfo_o *)partyOrganizationConfirmMyServantMenu,
                                                                                       0LL);
  if ( !this->fields.partyListMenu )
    goto LABEL_11;
  v6 = (System_String_o *)partyOrganizationConfirmMyServantMenu;
  partyOrganizationConfirmMyServantMenu = (PartyOrganizationConfirmMyServantMenu_o *)PartyListMenu__GetItem(
                                                                                       this->fields.partyListMenu,
                                                                                       this->fields.selectPartyNum,
                                                                                       0LL);
  if ( !this->fields.questRestrictionInfo )
    goto LABEL_11;
  v7 = (PartyListViewItem_o *)partyOrganizationConfirmMyServantMenu;
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(this->fields.questRestrictionInfo, 0LL);
  partyOrganizationRestrictionHelpDialog = this->fields.partyOrganizationRestrictionHelpDialog;
  setupInfo = this->fields.setupInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v12 = IsUseOldMaster;
  v13 = (PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
  PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndServantNumWarningQuestStart__,
    0LL);
  if ( !partyOrganizationRestrictionHelpDialog )
LABEL_11:
    sub_B2C434(partyOrganizationConfirmMyServantMenu, isDecide);
  if ( v12 )
    PartyOrganizationRestrictionHelpDialog__Open(
      partyOrganizationRestrictionHelpDialog,
      v7,
      10,
      v6,
      setupInfo,
      questRestrictionInfo,
      v13,
      0,
      v14);
  else
    PartyOrganizationRestrictionHelpDialog__Open_19913556(
      partyOrganizationRestrictionHelpDialog,
      v7,
      0,
      3,
      v6,
      setupInfo,
      questRestrictionInfo,
      v13,
      v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndInputBoostItemMenu(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  BoostItemMenu_o *v21; // x0
  BoostItemListViewItem_o *Item; // x21
  const MethodInfo *v23; // x1
  bool IsFriendChocolateQuest; // w20
  System_String_o *v25; // x21
  System_String_o *v26; // x22
  BalanceConfig_c *v27; // x8
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v32; // x21
  BoostItemMenu_o *boostItemMenu; // x20
  System_Action_o *v34; // x21
  System_String_o *v35; // x22
  Il2CppObject *NameText; // x23
  Il2CppObject *SkillText; // x0
  System_String_o *v38; // x21
  PartyOrganizationConfirmMenu_o *operationConfirmMenu; // x22
  PartyOrganizationConfirmMenu_CallbackFunc_o *v40; // x23
  int32_t MaxFriendChocolateUse; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4184FFC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&BalanceConfig_TypeInfo, v7);
    sub_B2C35C(&PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo, v8);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&OptionManager_TypeInfo, v11);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmInputBoostItem__, v12);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndShowCommandCardBoostItem__, v13);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__EndInputBoostItemMenu_b__153_0__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B2C35C(&SoundManager_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_2588/*"BOOST_ITEM_USE_CONFIRM_MESSAGE_FRIEND_CHOCOLATE"*/, v17);
    sub_B2C35C(&StringLiteral_2587/*"BOOST_ITEM_USE_CONFIRM_MESSAGE"*/, v18);
    sub_B2C35C(&StringLiteral_2589/*"BOOST_ITEM_USE_CONFIRM_MESSAGE_FRIEND_CHOCOLATE_ALERT"*/, v19);
    byte_4184FFC = 1;
  }
  if ( result == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v32 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v32,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent_EndShowCommandCardBoostItem__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenClassCompatibilityMenu(Instance, v32, 0LL);
      return;
    }
    goto LABEL_45;
  }
  if ( result != 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    boostItemMenu = this->fields.boostItemMenu;
    v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent__EndInputBoostItemMenu_b__153_0__,
      0LL);
    if ( boostItemMenu )
    {
      BoostItemMenu__Close_25587912(boostItemMenu, v34, 0LL);
      return;
    }
    goto LABEL_45;
  }
  this->fields.selectBoostItem = n;
  if ( (n & 0x80000000) == 0 )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__GetBoostItemUseConfirm(0LL) )
    {
      v21 = this->fields.boostItemMenu;
      if ( !v21 )
        goto LABEL_45;
      Item = BoostItemMenu__GetItem(v21, n, 0LL);
      IsFriendChocolateQuest = PartyOrganizationRootComponent__IsFriendChocolateQuest(this, v23);
      if ( IsFriendChocolateQuest )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2588/*"BOOST_ITEM_USE_CONFIRM_MESSAGE_FRIEND_CHOCOLATE"*/, 0LL);
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2589/*"BOOST_ITEM_USE_CONFIRM_MESSAGE_FRIEND_CHOCOLATE_ALERT"*/, 0LL);
        v27 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v27 = BalanceConfig_TypeInfo;
        }
        MaxFriendChocolateUse = v27->static_fields->MaxFriendChocolateUse;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxFriendChocolateUse);
        v29 = System_String__Format(v26, v28, 0LL);
        v30 = System_String__Concat_44305532(v25, v29, 0LL);
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v21 = (BoostItemMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2587/*"BOOST_ITEM_USE_CONFIRM_MESSAGE"*/, 0LL);
        if ( !Item )
          goto LABEL_45;
        v35 = (System_String_o *)v21;
        NameText = (Il2CppObject *)BoostItemListViewItem__get_NameText(Item, 0LL);
        SkillText = (Il2CppObject *)BoostItemListViewItem__get_SkillText(Item, 0LL);
        v30 = System_String__Format_44301068(v35, NameText, SkillText, 0LL);
      }
      v38 = v30;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      operationConfirmMenu = this->fields.operationConfirmMenu;
      v40 = (PartyOrganizationConfirmMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmMenu_CallbackFunc___ctor(
        v40,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndConfirmInputBoostItem__,
        0LL);
      if ( operationConfirmMenu )
      {
        PartyOrganizationConfirmMenu__Open(operationConfirmMenu, 1, v38, v40, IsFriendChocolateQuest, 0LL);
        return;
      }
LABEL_45:
      sub_B2C434(v21, v20);
    }
  }
  if ( this->fields.tutorialMode != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
  }
  PartyOrganizationRootComponent__EndConfirmInputBoostItem(this, 1, *(const MethodInfo **)&n);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndInputDeckNameMenu(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        System_String_o *changeName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  PartyOrganizationRootComponent___c__DisplayClass147_0_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x23
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v17; // x22
  const MethodInfo *v18; // x6
  DeckNameInputMenu_o *deckNameInputMenu; // x19
  System_Action_o *v20; // x21

  if ( (byte_4184FF7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__, v8);
    sub_B2C35C(&Method_PartyOrganizationRootComponent___c__DisplayClass147_0__EndInputDeckNameMenu_b__0__, v9);
    sub_B2C35C(&PartyOrganizationRootComponent___c__DisplayClass147_0_TypeInfo, v10);
    byte_4184FF7 = 1;
  }
  v11 = (PartyOrganizationRootComponent___c__DisplayClass147_0_o *)sub_B2C42C(PartyOrganizationRootComponent___c__DisplayClass147_0_TypeInfo);
  PartyOrganizationRootComponent___c__DisplayClass147_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  v11->fields.__4__this = this;
  sub_B2C2F8(&v11->fields, this);
  v11->fields.isDecide = isDecide;
  partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
  if ( !partyOrganizationRemoveSelectMenu )
    goto LABEL_11;
  if ( isDecide )
  {
    PartyOrganizationRemoveSelectMenu__Close_19908004(this->fields.partyOrganizationRemoveSelectMenu, 0LL, v14);
    this->fields.editDeckName = changeName;
    sub_B2C2F8(&this->fields.editDeckName, changeName);
  }
  else if ( partyOrganizationRemoveSelectMenu->fields.state == 3 )
  {
    partyItem = this->fields.partyItem;
    v17 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__,
      0LL);
    PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 1, v17, 0, 0, v18);
  }
  deckNameInputMenu = this->fields.deckNameInputMenu;
  v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v11,
    Method_PartyOrganizationRootComponent___c__DisplayClass147_0__EndInputDeckNameMenu_b__0__,
    0LL);
  if ( !deckNameInputMenu )
LABEL_11:
    sub_B2C434(v12, v13);
  DeckNameInputMenu__Close_16758972(deckNameInputMenu, v20, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndLoadCommonBg(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v6; // x20

  if ( (byte_4184FCD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndLoadOutGameAtlas__, v4);
    byte_4184FCD = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_B2C434(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v6, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndLoadOutGameAtlas(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4184FCE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndLoadPartyOrganizationAtlas__, v4);
    byte_4184FCE = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    PartyOrganizationRootComponent__EndLoadPartyOrganizationAtlas(this, method);
  }
  else
  {
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent_EndLoadPartyOrganizationAtlas__,
      0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadPartyOrganizationAtlas(v5, 1, 0LL);
  }
}


void __fastcall PartyOrganizationRootComponent__EndLoadPartyOrganizationAtlas(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  clsQuestCheck_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4184FCF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v3);
    byte_4184FCF = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  if ( SLODWORD(v4[1].fields.qrs) < 1 )
    SceneRootComponent__beginStartUp_17297004((SceneRootComponent_o *)this, 0LL);
  else
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndMyServantWarningQuestStart(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationConfirmMyServantMenu_o *partyOrganizationConfirmMyServantMenu; // x0
  const MethodInfo *v5; // x1

  partyOrganizationConfirmMyServantMenu = this->fields.partyOrganizationConfirmMyServantMenu;
  if ( !partyOrganizationConfirmMyServantMenu )
    sub_B2C434(0LL, isDecide);
  PartyOrganizationConfirmMyServantMenu__Close(partyOrganizationConfirmMyServantMenu, 0LL);
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, v5);
}


void __fastcall PartyOrganizationRootComponent__EndOpenMenu(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x19

  if ( (byte_4185020 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4185020 = 1;
  }
  if ( this->fields.isNeedSetBaseDeck )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    if ( CommonUI__maskFadeIsDisp(Instance, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = Instance;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( v6 )
      {
        CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        return;
      }
LABEL_12:
      sub_B2C434(Instance, v5);
    }
  }
}


void __fastcall PartyOrganizationRootComponent__EndOpenOrganizationChangeServant(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t tutorialMode; // w8
  CommonUI_o *Instance; // x20
  System_String_o *v9; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4185047 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndTutorialOrganizationGuideNotification3__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_13516/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION3"*/, v6);
    byte_4185047 = 1;
  }
  if ( this->fields.tutorialState == 2 )
  {
    tutorialMode = this->fields.tutorialMode;
    this->fields.tutorialState = 4;
    if ( tutorialMode == 1 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13516/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION3"*/, 0LL);
      v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndTutorialOrganizationGuideNotification3__,
        0LL);
      if ( !Instance )
        sub_B2C434(v11, v12);
      CommonUI__OpenTutorialNotificationDialog(Instance, v9, -1, v10, 0LL);
    }
  }
}


void __fastcall PartyOrganizationRootComponent__EndOpenPartyList(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  struct System_Int32_array *DialogList; // x0
  const MethodInfo *v6; // x1

  if ( (byte_418501E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v3);
    byte_418501E = 1;
  }
  if ( this->fields.isFirstChange )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    questRestrictionInfo = (QuestRestrictionInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !questRestrictionInfo )
      goto LABEL_13;
    if ( BYTE4(questRestrictionInfo->fields.supportPositionList) )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      this->fields.isFirstChange = 0;
      if ( questRestrictionInfo )
      {
        DialogList = QuestRestrictionInfo__GetDialogList(questRestrictionInfo, 0LL);
        this->fields.restrictionHelpList = DialogList;
        sub_B2C2F8(&this->fields.restrictionHelpList, DialogList);
        this->fields.restrictionHelpCount = 0;
        PartyOrganizationRootComponent__OpenRestrictionHelpDialog(this, v6);
        return;
      }
LABEL_13:
      sub_B2C434(questRestrictionInfo, method);
    }
  }
  questRestrictionInfo = (QuestRestrictionInfo_o *)this->fields.partyListMenu;
  if ( !questRestrictionInfo )
    goto LABEL_13;
  PartyListMenu__SetSelectItemEnable((PartyListMenu_o *)questRestrictionInfo, 1, 0LL);
}


// attributes: thunk
void __fastcall PartyOrganizationRootComponent__EndOpenPartyListMenu(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent__EndSelectQuest(this, method);
}


void __fastcall PartyOrganizationRootComponent__EndOpenTutorialArrow(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 9;
}


void __fastcall PartyOrganizationRootComponent__EndQuestStartTutorial(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationRootComponent__EndRequestConfirmCostumeMenu(
        PartyOrganizationRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PartyOrganizationConfirmCostumeMenu_o *partyOrganizationConfirmCostumeMenu; // x0

  partyOrganizationConfirmCostumeMenu = this->fields.partyOrganizationConfirmCostumeMenu;
  if ( !partyOrganizationConfirmCostumeMenu
    || (PartyOrganizationConfirmCostumeMenu__Close(partyOrganizationConfirmCostumeMenu, 0LL),
        (partyOrganizationConfirmCostumeMenu = (PartyOrganizationConfirmCostumeMenu_o *)this->fields.partyListMenu) == 0LL) )
  {
    sub_B2C434(partyOrganizationConfirmCostumeMenu, result);
  }
  PartyListMenu__SetSelectItemEnable((PartyListMenu_o *)partyOrganizationConfirmCostumeMenu, 1, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndRequestDeckCopy(
        PartyOrganizationRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PartyListMenu_o *myFSM; // x0
  __int64 *v9; // x8

  if ( (byte_418500D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, result);
    sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418500D = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    myFSM = (PartyListMenu_o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11077/*"REQUEST_NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B2C434(myFSM, v7);
  }
  this->fields.isSaveDeck = 0;
  this->fields.baseDeckItemList = 0LL;
  sub_B2C2F8(&this->fields.baseDeckItemList, 0LL);
  myFSM = this->fields.partyListMenu;
  if ( !myFSM )
    goto LABEL_10;
  PartyListMenu__Init(myFSM, 0LL);
  myFSM = (PartyListMenu_o *)this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_10;
  v9 = &StringLiteral_11079/*"REQUEST_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndRequestDeckName(
        PartyOrganizationRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PartyListMenu_o *myFSM; // x0
  __int64 *v9; // x8

  if ( (byte_418500B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, result);
    sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418500B = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    myFSM = (PartyListMenu_o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11077/*"REQUEST_NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B2C434(myFSM, v7);
  }
  this->fields.baseDeckItemList = 0LL;
  sub_B2C2F8(&this->fields.baseDeckItemList, 0LL);
  myFSM = this->fields.partyListMenu;
  if ( !myFSM )
    goto LABEL_10;
  PartyListMenu__Init(myFSM, 0LL);
  myFSM = (PartyListMenu_o *)this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_10;
  v9 = &StringLiteral_11079/*"REQUEST_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndRequestOrganizationChange(
        PartyOrganizationRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PartyListMenu_o *myFSM; // x0
  int32_t tutorialMode; // w8
  __int64 *v11; // x8

  if ( (byte_4185011 & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, result);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v5);
    sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v6);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v7);
    byte_4185011 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    myFSM = (PartyListMenu_o *)this->fields.myFSM;
    this->fields.state = 1;
    if ( myFSM )
    {
      v11 = &StringLiteral_11077/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_15:
    sub_B2C434(myFSM, v8);
  }
  this->fields.isSaveDeck = 0;
  this->fields.baseDeckItemList = 0LL;
  sub_B2C2F8(&this->fields.baseDeckItemList, 0LL);
  myFSM = this->fields.partyListMenu;
  if ( !myFSM )
    goto LABEL_15;
  PartyListMenu__Init(myFSM, 0LL);
  tutorialMode = this->fields.tutorialMode;
  this->fields.menuMode = this->fields.mainMenuMode;
  if ( tutorialMode == 1 )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    TutorialFlag__SetProgress(3, 0LL);
  }
  myFSM = (PartyListMenu_o *)this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_15;
  v11 = &StringLiteral_11079/*"REQUEST_OK"*/;
LABEL_14:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v11, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndRequestOrganizationSelect(
        PartyOrganizationRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PartyListMenu_o *myFSM; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 *v10; // x8

  if ( (byte_418500F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, result);
    sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418500F = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    myFSM = (PartyListMenu_o *)this->fields.myFSM;
    this->fields.state = 1;
    this->fields.activeDeckId = 0LL;
    if ( myFSM )
    {
      v10 = &StringLiteral_11077/*"REQUEST_NG"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_B2C434(myFSM, v7);
  }
  this->fields.isSaveDeck = 0;
  this->fields.baseDeckItemList = 0LL;
  sub_B2C2F8(&this->fields.baseDeckItemList, 0LL);
  myFSM = this->fields.partyListMenu;
  if ( !myFSM )
    goto LABEL_13;
  PartyListMenu__Init(myFSM, 0LL);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  this->fields.menuMode = this->fields.mainMenuMode;
  if ( questRestrictionInfo && QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL) )
  {
    this->fields.followerInfo = 0LL;
    sub_B2C2F8(&this->fields.followerInfo, 0LL);
  }
  myFSM = (PartyListMenu_o *)this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_13;
  v10 = &StringLiteral_11079/*"REQUEST_OK"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v10, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndRequestOrganizationSwap(
        PartyOrganizationRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PartyListMenu_o *myFSM; // x0
  int32_t tutorialMode; // w8
  __int64 *v11; // x8

  if ( (byte_4185014 & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, result);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v5);
    sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v6);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v7);
    byte_4185014 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    myFSM = (PartyListMenu_o *)this->fields.myFSM;
    this->fields.state = 1;
    if ( myFSM )
    {
      v11 = &StringLiteral_11077/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_15:
    sub_B2C434(myFSM, v8);
  }
  this->fields.isSaveDeck = 0;
  this->fields.baseDeckItemList = 0LL;
  sub_B2C2F8(&this->fields.baseDeckItemList, 0LL);
  myFSM = this->fields.partyListMenu;
  if ( !myFSM )
    goto LABEL_15;
  PartyListMenu__Init(myFSM, 0LL);
  tutorialMode = this->fields.tutorialMode;
  this->fields.menuMode = this->fields.mainMenuMode;
  if ( tutorialMode == 1 )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    TutorialFlag__SetProgress(3, 0LL);
  }
  myFSM = (PartyListMenu_o *)this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_15;
  v11 = &StringLiteral_11079/*"REQUEST_OK"*/;
LABEL_14:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v11, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndRequestResume(
        PartyOrganizationRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  void *battleSetupInfo; // x1

  ((void (__fastcall *)(PartyOrganizationRootComponent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._7_beginFinish.method)(
    this,
    this->klass->vtable._8_beginPause.methodPtr,
    method);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    battleSetupInfo = this->fields.masterFormationInfo;
  ((void (__fastcall *)(PartyOrganizationRootComponent_o *, void *, Il2CppMethodPointer))this->klass->vtable._5_beginStartUp.method)(
    this,
    battleSetupInfo,
    this->klass->vtable._6_beginStartUp.methodPtr);
  SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndRequestWaveBattleAutoDeckEdit(
        PartyOrganizationRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserEventDeckMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 UserId; // x0
  __int64 v10; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t eventId; // w22
  int64_t v13; // x21
  struct BattleSetupInfo_o *v14; // x8
  struct PartyListViewItem_array *baseDeckItemList; // x8
  il2cpp_array_size_t v16; // w21
  __int64 v17; // x22
  il2cpp_array_size_t max_length; // w9
  struct PartyListViewItem_array *waveBattleBaseDeckItemList; // x23
  Il2CppClass *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_4184FD5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventDeckMaster___, result);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v7);
    byte_4184FD5 = 1;
  }
  if ( System_String__op_Inequality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    this->fields.isSaveDeck = 0;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_26;
    eventId = battleSetupInfo->fields.eventId;
    v13 = UserId;
    UserId = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
    v14 = this->fields.battleSetupInfo;
    if ( !v14 )
      goto LABEL_26;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_26;
    UserId = (__int64)UserEventDeckMaster__getDeckList(
                        Master_WarQuestSelectionMaster,
                        v13,
                        eventId,
                        UserId,
                        v14->fields.questPhase,
                        0LL);
    if ( !UserId )
      goto LABEL_26;
    if ( !*(_DWORD *)(UserId + 24) )
    {
LABEL_28:
      v21 = sub_B2C460(UserId);
      sub_B2C400(v21, 0LL);
    }
    if ( !this->fields.waveBattlePartyOrganizationMenu
      || (WaveBattlePartyOrganizationMenu__UpdateInfo(
            this->fields.waveBattlePartyOrganizationMenu,
            *(UserEventDeckEntity_o **)(UserId + 32),
            0LL),
          (baseDeckItemList = this->fields.baseDeckItemList) == 0LL) )
    {
LABEL_26:
      sub_B2C434(UserId, v10);
    }
    v16 = 0;
    v17 = 32LL;
    while ( 1 )
    {
      max_length = baseDeckItemList->max_length;
      if ( (int)v16 >= (int)max_length )
        break;
      if ( v16 >= max_length )
        goto LABEL_28;
      UserId = *(__int64 *)((char *)&baseDeckItemList->obj.klass + v17);
      if ( !UserId )
        goto LABEL_26;
      waveBattleBaseDeckItemList = this->fields.waveBattleBaseDeckItemList;
      UserId = (__int64)PartyListViewItem__Clone((PartyListViewItem_o *)UserId, 0LL);
      if ( !waveBattleBaseDeckItemList )
        goto LABEL_26;
      v20 = (Il2CppClass *)UserId;
      if ( UserId )
      {
        UserId = sub_B2C41C(UserId, waveBattleBaseDeckItemList->obj.klass->_1.element_class);
        if ( !UserId )
        {
          v22 = sub_B2C454();
          sub_B2C400(v22, 0LL);
        }
      }
      if ( v16 >= waveBattleBaseDeckItemList->max_length )
        goto LABEL_28;
      *(Il2CppClass **)((char *)&waveBattleBaseDeckItemList->obj.klass + v17) = v20;
      sub_B2C2F8((char *)waveBattleBaseDeckItemList + v17, v20);
      baseDeckItemList = this->fields.baseDeckItemList;
      ++v16;
      v17 += 8LL;
      if ( !baseDeckItemList )
        goto LABEL_26;
    }
  }
}


void __fastcall PartyOrganizationRootComponent__EndRequestWaveBattleDeckEdit(
        PartyOrganizationRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4185025 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, result);
    byte_4185025 = 1;
  }
  if ( System_String__op_Inequality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    this->fields.isSaveDeck = 0;
    PartyOrganizationRootComponent__DispWaveBattleTop(this, v5);
  }
}


void __fastcall PartyOrganizationRootComponent__EndRequestWaveBattleDeckReset(
        PartyOrganizationRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UserEventDeckMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v8; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t eventId; // w22
  int64_t v11; // x21
  struct BattleSetupInfo_o *v12; // x8
  WaveBattlePartyOrganizationMenu_o *waveBattlePartyOrganizationMenu; // x8
  __int64 v14; // x0

  if ( (byte_418503F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventDeckMaster___, result);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    byte_418503F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_16;
  eventId = battleSetupInfo->fields.eventId;
  v11 = UserId;
  UserId = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v12 = this->fields.battleSetupInfo;
  if ( !v12 )
    goto LABEL_16;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  UserId = (int64_t)UserEventDeckMaster__getDeckList(
                      Master_WarQuestSelectionMaster,
                      v11,
                      eventId,
                      UserId,
                      v12->fields.questPhase,
                      0LL);
  if ( !UserId )
    goto LABEL_16;
  if ( !*(_DWORD *)(UserId + 24) )
  {
    v14 = sub_B2C460(UserId);
    sub_B2C400(v14, 0LL);
  }
  waveBattlePartyOrganizationMenu = this->fields.waveBattlePartyOrganizationMenu;
  if ( !waveBattlePartyOrganizationMenu )
LABEL_16:
    sub_B2C434(UserId, v8);
  WaveBattlePartyOrganizationMenu__UpdateInfo(
    waveBattlePartyOrganizationMenu,
    *(UserEventDeckEntity_o **)(UserId + 32),
    0LL);
}


void __fastcall PartyOrganizationRootComponent__EndRestrictionNotSatisfyDialog(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  RestrictionNotSatisfyDialog_o *restrictionNotSatisfyDialog; // x0
  const MethodInfo *v4; // x1

  restrictionNotSatisfyDialog = this->fields.restrictionNotSatisfyDialog;
  if ( !restrictionNotSatisfyDialog )
    sub_B2C434(0LL, method);
  RestrictionNotSatisfyDialog__Close(restrictionNotSatisfyDialog, 0LL);
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndSearvantNumAndFixedServantPosQuestStart(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  PartyOrganizationRestrictionHelpDialog_o *partyOrganizationRestrictionHelpDialog; // x0
  PartyOrganizationConfirmMyServantMenu_o *partyOrganizationConfirmMyServantMenu; // x23
  PartyListViewItem_o *partyItem; // x20
  EventUpValSetupInfo_o *setupInfo; // x21
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v10; // x24

  if ( (byte_418503C & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndMyServantWarningQuestStart__, v4);
    byte_418503C = 1;
  }
  partyOrganizationRestrictionHelpDialog = this->fields.partyOrganizationRestrictionHelpDialog;
  if ( !partyOrganizationRestrictionHelpDialog
    || (PartyOrganizationRestrictionHelpDialog__Close_19917744(partyOrganizationRestrictionHelpDialog, 0LL, method),
        partyOrganizationConfirmMyServantMenu = this->fields.partyOrganizationConfirmMyServantMenu,
        partyItem = this->fields.partyItem,
        setupInfo = this->fields.setupInfo,
        questRestrictionInfo = this->fields.questRestrictionInfo,
        v10 = (PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo),
        PartyOrganizationConfirmMyServantMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_PartyOrganizationRootComponent_EndMyServantWarningQuestStart__,
          0LL),
        !partyOrganizationConfirmMyServantMenu) )
  {
    sub_B2C434(partyOrganizationRestrictionHelpDialog, isDecide);
  }
  PartyOrganizationConfirmMyServantMenu__Open(
    partyOrganizationConfirmMyServantMenu,
    0,
    partyItem,
    setupInfo,
    questRestrictionInfo,
    v10,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndSelectOrganizationChangeServantEquip(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        EquipGraphListViewItem_o *equipItem,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *v12; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v14; // q0
  __int128 v15; // q1
  int64_t v16; // x21
  CommonUI_o *Instance; // x20
  System_Action_o *v18; // x0
  __int64 *v19; // x8
  System_Action_o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22[2]; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4185048 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndCloseOrganizationChangeServantEquipListCancel__, v8);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndCloseOrganizationChangeServantEquipListDecide__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4185048 = 1;
  }
  memset(&v22[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  if ( result != 1 )
    goto LABEL_17;
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_22;
  partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, this->fields.selectPartyMemberNum, 0LL);
  v12 = (PartyOrganizationListViewItem_o *)partyItem;
  if ( equipItem )
  {
    userSvtEntity = equipItem->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v15 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v22, 0LL, 0LL);
    v15 = *(_OWORD *)&v22[0].fields.currentCryptoKey;
    v14 = *(_OWORD *)&v22[0].fields.fakeValue;
  }
  *(_OWORD *)&v22[1].fields.currentCryptoKey = v15;
  *(_OWORD *)&v22[1].fields.fakeValue = v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v21 = v22[1];
  partyItem = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v21, 0LL);
  if ( !v12 )
LABEL_22:
    sub_B2C434(partyItem, *(_QWORD *)&result);
  v16 = (int64_t)partyItem;
  if ( (PartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v12, 0LL) != partyItem )
  {
    partyItem = this->fields.partyItem;
    if ( !partyItem )
      goto LABEL_22;
    PartyListViewItem__SetEquip(partyItem, this->fields.selectPartyMemberNum, v16, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v19 = &Method_PartyOrganizationRootComponent_EndCloseOrganizationChangeServantEquipListDecide__;
  }
  else
  {
LABEL_17:
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v19 = &Method_PartyOrganizationRootComponent_EndCloseOrganizationChangeServantEquipListCancel__;
  }
  v20 = v18;
  System_Action___ctor(v18, (Il2CppObject *)this, *v19, 0LL);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__CloseEquipGraphListMenu(Instance, v20, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndSelectOrganizationSwapServantEquip(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        EquipGraphListViewItem_o *equipItem,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  PartyOrganizationRootComponent___c__DisplayClass246_0_o *v23; // x20
  __int64 partyItem; // x0
  __int64 v25; // x1
  struct PartyListViewItem_array *v26; // x8
  unsigned int v27; // w21
  __int64 v28; // x22
  __int64 v29; // x9
  struct PartyListViewItem_array *v30; // x23
  Il2CppClass *v31; // x20
  struct PartyListViewItem_array *waveBattleTempDeckItemList; // x8
  il2cpp_array_size_t v33; // w21
  __int64 v34; // x22
  il2cpp_array_size_t max_length; // w9
  struct PartyListViewItem_array *waveBattleDeckItemList; // x23
  Il2CppClass *v37; // x20
  PartyOrganizationListViewItem_o *v38; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v40; // q0
  __int128 v41; // q1
  __int64 selectPartyNum; // x10
  struct PartyListViewItem_o *v43; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v45; // x0
  __int64 *v46; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationUtility_o *v50; // x24
  __int64 v51; // x25
  __int64 v52; // x26
  int32_t v53; // w25
  int32_t v54; // w26
  struct UserServantEntity_o *v55; // x8
  PartyOrganizationUtility_o *v56; // x19
  ServantEntity_o *servantEntity; // x23
  __int64 v58; // x24
  __int64 v59; // x25
  UserServantEntity_o *v60; // x8
  System_String_o *v61; // x22
  ServantEntity_o *v62; // x8
  int32_t v63; // w21
  System_String_o *RarityInvalidMessage; // x21
  System_Text_StringBuilder_o *v65; // x19
  System_String_o *v66; // x0
  CommonUI_o *v67; // x21
  System_String_o *v68; // x19
  System_String_o *v69; // x22
  System_String_o *v70; // x23
  CommonConfirmDialog_ClickDelegate_o *v71; // x24
  System_Action_o *v72; // x21
  __int64 v73; // x0
  __int64 v74; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76[2]; // [xsp+60h] [xbp-B0h] BYREF
  int32_t minFontSize[2]; // [xsp+A0h] [xbp-70h] BYREF
  int32_t actMaxRarity[2]; // [xsp+A8h] [xbp-68h] BYREF
  System_String_o *skillName; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_418504E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndCloseSwapServantEquipListCancel__, v11);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndCloseSwapServantEquipListDecide__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v14);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v15);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v16);
    sub_B2C35C(
      &Method_PartyOrganizationRootComponent___c__DisplayClass246_0__EndSelectOrganizationSwapServantEquip_b__0__,
      v17);
    sub_B2C35C(&PartyOrganizationRootComponent___c__DisplayClass246_0_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_10208/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v19);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v20);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v21);
    sub_B2C35C(&StringLiteral_1/*""*/, v22);
    byte_418504E = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  memset(&v76[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v23 = (PartyOrganizationRootComponent___c__DisplayClass246_0_o *)sub_B2C42C(PartyOrganizationRootComponent___c__DisplayClass246_0_TypeInfo);
  PartyOrganizationRootComponent___c__DisplayClass246_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_29;
  v23->fields.__4__this = this;
  sub_B2C2F8(&v23->fields, this);
  if ( !result )
  {
    if ( this->fields.mainMenuMode == 8 )
    {
      waveBattleTempDeckItemList = this->fields.waveBattleTempDeckItemList;
      if ( !waveBattleTempDeckItemList )
        goto LABEL_29;
      v33 = 0;
      v34 = 32LL;
      while ( 1 )
      {
        max_length = waveBattleTempDeckItemList->max_length;
        if ( (int)v33 >= (int)max_length )
          break;
        if ( v33 >= max_length )
          goto LABEL_89;
        partyItem = *(__int64 *)((char *)&waveBattleTempDeckItemList->obj.klass + v34);
        if ( !partyItem )
          goto LABEL_29;
        waveBattleDeckItemList = this->fields.waveBattleDeckItemList;
        partyItem = (__int64)PartyListViewItem__Clone((PartyListViewItem_o *)partyItem, 0LL);
        if ( !waveBattleDeckItemList )
          goto LABEL_29;
        v37 = (Il2CppClass *)partyItem;
        if ( partyItem )
        {
          partyItem = sub_B2C41C(partyItem, waveBattleDeckItemList->obj.klass->_1.element_class);
          if ( !partyItem )
          {
LABEL_90:
            v74 = sub_B2C454();
            sub_B2C400(v74, 0LL);
          }
        }
        if ( v33 >= waveBattleDeckItemList->max_length )
          goto LABEL_89;
        *(Il2CppClass **)((char *)&waveBattleDeckItemList->obj.klass + v34) = v37;
        sub_B2C2F8((char *)waveBattleDeckItemList + v34, v37);
        waveBattleTempDeckItemList = this->fields.waveBattleTempDeckItemList;
        ++v33;
        v34 += 8LL;
        if ( !waveBattleTempDeckItemList )
          goto LABEL_29;
      }
    }
    goto LABEL_46;
  }
  if ( result != 1 )
  {
LABEL_46:
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v46 = &Method_PartyOrganizationRootComponent_EndCloseSwapServantEquipListCancel__;
    goto LABEL_87;
  }
  if ( this->fields.mainMenuMode != 8 )
  {
    partyItem = (__int64)this->fields.partyItem;
    if ( !partyItem )
      goto LABEL_29;
    partyItem = (__int64)PartyListViewItem__GetMember(
                           (PartyListViewItem_o *)partyItem,
                           this->fields.selectPartyMemberNum,
                           0LL);
    v38 = (PartyOrganizationListViewItem_o *)partyItem;
    if ( equipItem )
    {
      userSvtEntity = equipItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_29;
      v41 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      v40 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    }
    else
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v76, 0LL, 0LL);
      v41 = *(_OWORD *)&v76[0].fields.currentCryptoKey;
      v40 = *(_OWORD *)&v76[0].fields.fakeValue;
    }
    *(_OWORD *)&v76[1].fields.currentCryptoKey = v41;
    *(_OWORD *)&v76[1].fields.fakeValue = v40;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v75 = v76[1];
    partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v75, 0LL);
    v23->fields.equipUserSvtId = partyItem;
    if ( v38 )
    {
      if ( PartyOrganizationListViewItem__get_EquipUserSvtId(v38, 0LL) == v23->fields.equipUserSvtId )
        goto LABEL_46;
      if ( this->fields.changePartyMode == 2 )
      {
        partyItem = (__int64)this->fields.titleInfo;
        if ( !partyItem )
          goto LABEL_29;
        TitleInfoControl__changeTitleInfo((TitleInfoControl_o *)partyItem, 2, 68, 0LL);
      }
      actMaxRarity[1] = 0;
      skillName = (System_String_o *)StringLiteral_1/*""*/;
      if ( !equipItem )
        goto LABEL_84;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        eventId = questRestrictionInfo->fields.eventId;
      else
        eventId = -1;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      partyItem = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      userServantEntity = v38->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_29;
      v50 = (PartyOrganizationUtility_o *)partyItem;
      v52 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      v51 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v80.fields.currentCryptoKey = v52;
      *(_QWORD *)&v80.fields.fakeValue = v51;
      partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v80, 0LL);
      if ( !v38->fields.userServantEntity )
        goto LABEL_29;
      v53 = partyItem;
      partyItem = UserServantEntity__getRarity(v38->fields.userServantEntity, 0LL);
      if ( !equipItem->fields.userSvtEntity )
        goto LABEL_29;
      v54 = partyItem;
      partyItem = UserServantEntity__getSvtId(equipItem->fields.userSvtEntity, 0LL);
      if ( !v50 )
        goto LABEL_29;
      if ( !PartyOrganizationUtility__IsRarityRestriction(
              v50,
              &skillName,
              &actMaxRarity[1],
              v53,
              v54,
              partyItem,
              eventId,
              0LL) )
      {
LABEL_84:
        partyItem = (__int64)this->fields.partyItem;
        if ( !partyItem )
          goto LABEL_29;
        PartyListViewItem__SetEquip(
          (PartyListViewItem_o *)partyItem,
          this->fields.selectPartyMemberNum,
          v23->fields.equipUserSvtId,
          0LL);
        goto LABEL_86;
      }
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      partyItem = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v55 = v38->fields.userServantEntity;
      if ( v55 )
      {
        v56 = (PartyOrganizationUtility_o *)partyItem;
        servantEntity = v38->fields.servantEntity;
        v59 = *(_QWORD *)&v55->fields.limitCount.fields.currentCryptoKey;
        v58 = *(_QWORD *)&v55->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v81.fields.currentCryptoKey = v59;
        *(_QWORD *)&v81.fields.fakeValue = v58;
        partyItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v81, 0LL);
        if ( servantEntity )
        {
          partyItem = (__int64)ServantEntity__getName(servantEntity, partyItem, -1, 0LL);
          v60 = v38->fields.userServantEntity;
          if ( v60 )
          {
            v61 = (System_String_o *)partyItem;
            partyItem = UserServantEntity__getRarity(v60, 0LL);
            v62 = equipItem->fields.servantEntity;
            if ( v62 )
            {
              v63 = partyItem;
              partyItem = (__int64)ServantEntity__getName(v62, -1, -1, 0LL);
              if ( v56 )
              {
                RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                         v56,
                                         actMaxRarity,
                                         v61,
                                         v63,
                                         (System_String_o *)partyItem,
                                         skillName,
                                         actMaxRarity[1],
                                         0LL);
                partyItem = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                if ( partyItem )
                {
                  PartyOrganizationUtility__DecisionFontSize(
                    (PartyOrganizationUtility_o *)partyItem,
                    &minFontSize[1],
                    minFontSize,
                    actMaxRarity[0],
                    0LL);
                  v65 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
                  System_Text_StringBuilder___ctor(v65, 0LL);
                  if ( v65 )
                  {
                    System_Text_StringBuilder__Append_42408700(v65, RarityInvalidMessage, 0LL);
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_10208/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                    System_Text_StringBuilder__Append_42408700(v65, v66, 0LL);
                    partyItem = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( partyItem )
                    {
                      CommonUI__CloseEquipGraphListMenu((CommonUI_o *)partyItem, 0LL, 0LL);
                      v67 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v68 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v65->klass->vtable._3_ToString.method)(
                                                 v65,
                                                 v65->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
                      v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
                      v71 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                      CommonConfirmDialog_ClickDelegate___ctor(
                        v71,
                        (Il2CppObject *)v23,
                        Method_PartyOrganizationRootComponent___c__DisplayClass246_0__EndSelectOrganizationSwapServantEquip_b__0__,
                        0LL);
                      if ( v67 )
                      {
                        CommonUI__OpenConfirmDialog_17971264(
                          v67,
                          (System_String_o *)StringLiteral_1/*""*/,
                          v68,
                          v69,
                          v70,
                          v71,
                          minFontSize[1],
                          minFontSize[0],
                          30.0,
                          728,
                          2,
                          480,
                          -162.5,
                          0,
                          0,
                          240,
                          1,
                          0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_B2C434(partyItem, v25);
  }
  v26 = this->fields.waveBattleDeckItemList;
  if ( !v26 )
    goto LABEL_29;
  v27 = 0;
  v28 = 32LL;
  while ( 1 )
  {
    v29 = *(_QWORD *)&v26->max_length;
    if ( (int)v27 >= (int)v29 )
      break;
    if ( v27 >= (unsigned int)v29 )
      goto LABEL_89;
    partyItem = *(__int64 *)((char *)&v26->obj.klass + v28);
    if ( partyItem )
    {
      v30 = this->fields.waveBattleTempDeckItemList;
      partyItem = (__int64)PartyListViewItem__Clone((PartyListViewItem_o *)partyItem, 0LL);
      if ( v30 )
      {
        v31 = (Il2CppClass *)partyItem;
        if ( partyItem )
        {
          partyItem = sub_B2C41C(partyItem, v30->obj.klass->_1.element_class);
          if ( !partyItem )
            goto LABEL_90;
        }
        if ( v27 >= v30->max_length )
          goto LABEL_89;
        *(Il2CppClass **)((char *)&v30->obj.klass + v28) = v31;
        sub_B2C2F8((char *)v30 + v28, v31);
        v26 = this->fields.waveBattleDeckItemList;
        ++v27;
        v28 += 8LL;
        if ( v26 )
          continue;
      }
    }
    goto LABEL_29;
  }
  selectPartyNum = this->fields.selectPartyNum;
  if ( (unsigned int)selectPartyNum >= (unsigned int)v29 )
  {
LABEL_89:
    v73 = sub_B2C460(partyItem);
    sub_B2C400(v73, 0LL);
  }
  partyItem = (__int64)v26->m_Items[selectPartyNum];
  if ( !partyItem )
    goto LABEL_29;
  v43 = PartyListViewItem__Clone((PartyListViewItem_o *)partyItem, 0LL);
  this->fields.partyItem = v43;
  sub_B2C2F8(&this->fields.partyItem, v43);
LABEL_86:
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  v46 = &Method_PartyOrganizationRootComponent_EndCloseSwapServantEquipListDecide__;
LABEL_87:
  v72 = v45;
  System_Action___ctor(v45, (Il2CppObject *)this, *v46, 0LL);
  if ( !Instance )
    goto LABEL_29;
  CommonUI__CloseEquipGraphListMenu(Instance, v72, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndSelectQuest(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 Member; // x0
  __int64 v12; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct PartyListViewItem_array *baseDeckItemList; // x8
  __int64 selectPartyNum; // x9
  PartyListViewItem_o *v16; // x8
  PartyListViewItem_o *partyItem; // x21
  int32_t v18; // w20
  PartyListViewItem_o *v19; // x0
  CommonUI_o *Instance; // x20
  PartyOrganizationRootComponent_c *v21; // x8
  float EDIT_SCENE_FADE_TIME; // s8
  System_Action_o *v23; // x21
  struct PartyListViewItem_array *v24; // x21
  struct PartyListViewItem_o *basePartyItem; // x20
  __int64 v26; // x22
  Il2CppClass **v27; // x0
  int32_t menuKind; // w8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 *v30; // x8
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_4184FD8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnMoveEnd__, v3);
    sub_B2C35C(&PartyOrganizationRootComponent_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v7);
    sub_B2C35C(&StringLiteral_8723/*"MENU_PARTY_OGRANIZATION_CHANGE"*/, v8);
    sub_B2C35C(&StringLiteral_15396/*"WaitQuest"*/, v9);
    sub_B2C35C(&StringLiteral_8724/*"MENU_PARTY_OGRANIZATION_SWAP"*/, v10);
    byte_4184FD8 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_52;
  if ( *(int *)(Member + 48) < 1 )
  {
LABEL_31:
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = PartyOrganizationRootComponent_TypeInfo;
    if ( (BYTE3(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo);
      v21 = PartyOrganizationRootComponent_TypeInfo;
    }
    EDIT_SCENE_FADE_TIME = v21->static_fields->EDIT_SCENE_FADE_TIME;
    v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadein(Instance, EDIT_SCENE_FADE_TIME, v23, 0LL);
      return;
    }
LABEL_52:
    sub_B2C434(Member, v12);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_52;
  if ( battleSetupInfo->fields.followerId >= 1 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Member )
      goto LABEL_52;
    baseDeckItemList = this->fields.baseDeckItemList;
    if ( !baseDeckItemList )
      goto LABEL_52;
    selectPartyNum = this->fields.selectPartyNum;
    if ( (unsigned int)selectPartyNum >= baseDeckItemList->max_length )
      goto LABEL_53;
    v16 = baseDeckItemList->m_Items[selectPartyNum];
    if ( !v16 )
      goto LABEL_52;
    partyItem = this->fields.partyItem;
    v18 = *(_DWORD *)(Member + 48) - 1;
    Member = (__int64)PartyListViewItem__GetMember(v16, v18, 0LL);
    if ( !partyItem )
      goto LABEL_52;
    PartyListViewItem__SetMember_31930328(partyItem, v18, (PartyOrganizationListViewItem_o *)Member, 0LL);
    Member = (__int64)this->fields.partyItem;
    if ( !Member )
      goto LABEL_52;
    PartyListViewItem__CheckRestriction((PartyListViewItem_o *)Member, 0LL);
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_52;
  *(_DWORD *)(Member + 48) = 0;
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_52;
  *(_DWORD *)(Member + 52) = 0;
  Member = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Member )
    goto LABEL_52;
  *(_DWORD *)(Member + 56) = 0;
  v19 = this->fields.partyItem;
  if ( !v19 || (Member = PartyListViewItem__CompMember(v19, this->fields.basePartyItem, 0LL), (Member & 1) != 0) )
  {
    Member = (__int64)this->fields.partyListMenu;
    this->fields.state = 2;
    if ( !Member )
      goto LABEL_52;
    PartyListMenu__SetCenterItem((PartyListMenu_o *)Member, this->fields.selectPartyNum, 0, 0LL);
    Member = (__int64)this->fields.myFSM;
    if ( !Member )
      goto LABEL_52;
    PlayMakerFSM__SetState((PlayMakerFSM_o *)Member, (System_String_o *)StringLiteral_15396/*"WaitQuest"*/, 0LL);
    goto LABEL_31;
  }
  v24 = this->fields.baseDeckItemList;
  this->fields.isNeedSetBaseDeck = 1;
  if ( !v24 )
    goto LABEL_52;
  basePartyItem = this->fields.basePartyItem;
  v26 = this->fields.selectPartyNum;
  if ( basePartyItem )
  {
    Member = sub_B2C41C(this->fields.basePartyItem, v24->obj.klass->_1.element_class);
    if ( !Member )
    {
      v32 = sub_B2C454();
      sub_B2C400(v32, 0LL);
    }
  }
  if ( (unsigned int)v26 >= v24->max_length )
  {
LABEL_53:
    v31 = sub_B2C460(Member);
    sub_B2C400(v31, 0LL);
  }
  v27 = &v24->obj.klass + v26;
  v27[4] = (Il2CppClass *)basePartyItem;
  sub_B2C2F8(v27 + 4, basePartyItem);
  Member = (__int64)this->fields.partyListMenu;
  if ( !Member )
    goto LABEL_52;
  PartyListMenu__DispInfoPanel((PartyListMenu_o *)Member, 0, 0LL);
  Member = (__int64)this->fields.partyListMenu;
  if ( !Member )
    goto LABEL_52;
  PartyListMenu__SetListViewMangaerEnabled((PartyListMenu_o *)Member, 0, 0LL);
  menuKind = this->fields.menuKind;
  this->fields.changePartyMode = 1;
  if ( menuKind == 3
    || menuKind == 7
    && (questRestrictionInfo = this->fields.questRestrictionInfo) != 0LL
    && !questRestrictionInfo->fields.isNpcEditablePos
    && questRestrictionInfo->fields.myServantNumMax == 1 )
  {
    Member = (__int64)this->fields.myFSM;
    if ( !Member )
      goto LABEL_52;
    v30 = &StringLiteral_8723/*"MENU_PARTY_OGRANIZATION_CHANGE"*/;
  }
  else
  {
    Member = (__int64)this->fields.myFSM;
    if ( !Member )
      goto LABEL_52;
    v30 = &StringLiteral_8724/*"MENU_PARTY_OGRANIZATION_SWAP"*/;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Member, (System_String_o *)*v30, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndSelectQuestConfirmCostumeMenu(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x1
  const MethodInfo *v9; // x2
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v12; // x1

  if ( (byte_4185024 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestConfirmCostumeMenu__, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&TutorialFlag_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v7);
    byte_4185024 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28617756(206, 0LL) )
  {
    PartyOrganizationRootComponent__EndRequestConfirmCostumeMenu(this, v8, v9);
  }
  else
  {
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent_EndRequestConfirmCostumeMenu__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v10,
                                                                  (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B2C434(0LL, v12);
    TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, 206, 0LL);
  }
}


void __fastcall PartyOrganizationRootComponent__EndSelectedOrganizationChange(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PlayMakerFSM_o *partyItem; // x0
  PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x20
  int32_t menuKind; // w21
  PartyListViewItem_o *basePartyItem; // x22
  PartyListViewItem_o *v12; // x23
  EventUpValSetupInfo_o *setupInfo; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  PartyOrganizationChangeMenu_CallbackFunc_o *callback; // x26
  PartyServantSelectMenu_o *partyServantSelectMenu; // x20
  System_Action_o *v17; // x21
  PartyOrganizationChangeMenu_o *v18; // x20
  int32_t v19; // w21
  PartyListViewItem_o *v20; // x22
  PartyListViewItem_o *v21; // x23
  EventUpValSetupInfo_o *v22; // x24
  QuestRestrictionInfo_o *v23; // x25
  PartyOrganizationChangeMenu_CallbackFunc_o *v24; // x26
  PartyServantSelectMenu_o *v25; // x20
  System_Action_o *v26; // x21

  if ( (byte_418504A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectedOrganizationChange__, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__EndSelectedOrganizationChange_b__242_0__, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__EndSelectedOrganizationChange_b__242_1__, v6);
    sub_B2C35C(&StringLiteral_9357/*"NO_MODIFY"*/, v7);
    byte_418504A = 1;
  }
  partyItem = (PlayMakerFSM_o *)this->fields.partyItem;
  this->fields.state = 12;
  if ( !partyItem )
    goto LABEL_12;
  if ( PartyListViewItem__CompMember((PartyListViewItem_o *)partyItem, this->fields.basePartyItem, 0LL) )
  {
    partyOrganizationChangeMenu = this->fields.partyOrganizationChangeMenu;
    menuKind = this->fields.menuKind;
    basePartyItem = this->fields.basePartyItem;
    v12 = this->fields.partyItem;
    this->fields.menuMode = this->fields.mainMenuMode;
    setupInfo = this->fields.setupInfo;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    callback = (PartyOrganizationChangeMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationChangeMenu_CallbackFunc_TypeInfo);
    PartyOrganizationChangeMenu_CallbackFunc___ctor(
      callback,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent_OnSelectedOrganizationChange__,
      0LL);
    if ( partyOrganizationChangeMenu )
    {
      PartyOrganizationChangeMenu__Open(
        partyOrganizationChangeMenu,
        menuKind,
        0,
        basePartyItem,
        v12,
        -1,
        setupInfo,
        questRestrictionInfo,
        callback,
        0LL,
        this->fields.friendPointCampaignVal,
        0LL);
      partyServantSelectMenu = this->fields.partyServantSelectMenu;
      v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent__EndSelectedOrganizationChange_b__242_0__,
        0LL);
      if ( partyServantSelectMenu )
      {
        PartyServantSelectMenu__Close_32396636(partyServantSelectMenu, v17, 0LL);
        partyItem = this->fields.myFSM;
        if ( partyItem )
        {
          PlayMakerFSM__SendEvent(partyItem, (System_String_o *)StringLiteral_9357/*"NO_MODIFY"*/, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B2C434(partyItem, method);
  }
  this->fields.state = 12;
  v18 = this->fields.partyOrganizationChangeMenu;
  v19 = this->fields.menuKind;
  v20 = this->fields.basePartyItem;
  v21 = this->fields.partyItem;
  v22 = this->fields.setupInfo;
  v23 = this->fields.questRestrictionInfo;
  v24 = (PartyOrganizationChangeMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationChangeMenu_CallbackFunc_TypeInfo);
  PartyOrganizationChangeMenu_CallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_OnSelectedOrganizationChange__,
    0LL);
  if ( !v18 )
    goto LABEL_12;
  PartyOrganizationChangeMenu__Open(
    v18,
    v19,
    0,
    v20,
    v21,
    -1,
    v22,
    v23,
    v24,
    0LL,
    this->fields.friendPointCampaignVal,
    0LL);
  v25 = this->fields.partyServantSelectMenu;
  v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent__EndSelectedOrganizationChange_b__242_1__,
    0LL);
  if ( !v25 )
    goto LABEL_12;
  PartyServantSelectMenu__Close_32396636(v25, v26, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndSelectedOrganizationChangeServant(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v5; // w21
  PartyOrganizationRootComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  PartyOrganizationListViewItem_o *Member; // x20
  struct PartyListViewItem_o *partyItem; // x8
  PartyServantSelectMenu_o *partyServantSelectMenu; // x20
  System_Action_o *v16; // x21
  PartyOrganizationConfirmCostumeMenu_o *partyOrganizationConfirmCostumeMenu; // x23
  EventUpValSetupInfo_o *setupInfo; // x21
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *v20; // x24

  v5 = result;
  v6 = this;
  if ( (byte_4185049 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectQuestConfirmCostumeMenu__, v8);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndTutorialOrganizationGuideNotification4__, v9);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v11);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&TutorialFlag_TypeInfo, v12);
    byte_4185049 = 1;
  }
  if ( v5 )
  {
    if ( !item )
      goto LABEL_41;
    if ( item->fields.isBase )
    {
      this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
      if ( !this )
        goto LABEL_41;
      PartyListViewItem__ClearMember((PartyListViewItem_o *)this, v6->fields.selectPartyMemberNum, 0LL);
      Member = 0LL;
    }
    else
    {
      this = (PartyOrganizationRootComponent_o *)PartyServantListViewItem__get_IsParty(item, 0LL);
      partyItem = v6->fields.partyItem;
      *(_QWORD *)&result = (unsigned int)v6->fields.selectPartyMemberNum;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !partyItem )
          goto LABEL_41;
        PartyListViewItem__SwapMember(v6->fields.partyItem, result, item->fields.partyIndex, 1, 0LL);
      }
      else
      {
        if ( !partyItem )
          goto LABEL_41;
        PartyListViewItem__SetMember(v6->fields.partyItem, result, item, 0LL);
      }
      this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
      if ( !this )
LABEL_41:
        sub_B2C434(this, *(_QWORD *)&result);
      Member = PartyListViewItem__GetMember((PartyListViewItem_o *)this, v6->fields.selectPartyMemberNum, 0LL);
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    this = (PartyOrganizationRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_41;
    PartyOrganizationUtility__ClearNpcFollowerInfo(
      (PartyOrganizationUtility_o *)this,
      v6->fields.selectPartyMemberNum + 1,
      0LL);
  }
  else
  {
    Member = 0LL;
  }
  this = (PartyOrganizationRootComponent_o *)v6->fields.partyOrganizationChangeMenu;
  if ( !this )
    goto LABEL_41;
  PartyOrganizationChangeMenu__ModifyItem((PartyOrganizationChangeMenu_o *)this, 0LL);
  this = (PartyOrganizationRootComponent_o *)v6->fields.backSkinSprite;
  v6->fields.selectPartyMemberNum = -1;
  if ( !this )
    goto LABEL_41;
  this = (PartyOrganizationRootComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_41;
  this = (PartyOrganizationRootComponent_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
  if ( !this )
    goto LABEL_41;
  this = (PartyOrganizationRootComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_41;
  this = (PartyOrganizationRootComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (PartyOrganizationRootComponent_o *)v6->fields.titleInfo;
  if ( !this )
    goto LABEL_41;
  TitleInfoControl__changeTitleInfo((TitleInfoControl_o *)this, 2, 68, 0LL);
  if ( v6->fields.tutorialState == 4 )
  {
    this = (PartyOrganizationRootComponent_o *)v6->fields.partyOrganizationChangeMenu;
    v6->fields.tutorialState = 5;
    v6->fields.state = 12;
    if ( this )
    {
      PartyOrganizationChangeMenu__Open(
        (PartyOrganizationChangeMenu_o *)this,
        v6->fields.menuKind,
        0,
        v6->fields.basePartyItem,
        v6->fields.partyItem,
        -1,
        v6->fields.setupInfo,
        v6->fields.questRestrictionInfo,
        0LL,
        0LL,
        v6->fields.friendPointCampaignVal,
        0LL);
      partyServantSelectMenu = v6->fields.partyServantSelectMenu;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)v6,
        Method_PartyOrganizationRootComponent_EndTutorialOrganizationGuideNotification4__,
        0LL);
      if ( partyServantSelectMenu )
      {
        PartyServantSelectMenu__Close_32396636(partyServantSelectMenu, v16, 0LL);
        return;
      }
    }
    goto LABEL_41;
  }
  if ( Member && PartyOrganizationListViewItem__IsModifyFixCostume(Member, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28617756(206, 0LL) )
    {
      partyOrganizationConfirmCostumeMenu = v6->fields.partyOrganizationConfirmCostumeMenu;
      setupInfo = v6->fields.setupInfo;
      questRestrictionInfo = v6->fields.questRestrictionInfo;
      v20 = (PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmCostumeMenu_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)v6,
        Method_PartyOrganizationRootComponent_EndSelectQuestConfirmCostumeMenu__,
        0LL);
      if ( !partyOrganizationConfirmCostumeMenu )
        goto LABEL_41;
      PartyOrganizationConfirmCostumeMenu__Open(
        partyOrganizationConfirmCostumeMenu,
        0,
        Member,
        setupInfo,
        questRestrictionInfo,
        v20,
        0LL);
    }
  }
  PartyOrganizationRootComponent__EndSelectedOrganizationChange(v6, *(const MethodInfo **)&result);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndSelectedOrganizationSwapServant(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
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
  PartyOrganizationRootComponent___c__DisplayClass244_0_o *v32; // x19
  __int64 IsParty; // x0
  __int64 v34; // x1
  PartyServantListViewItem_o **p_item; // x20
  const MethodInfo *v36; // x3
  PartyOrganizationListViewItem_o *v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w23
  int32_t v41; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  PartyOrganizationUtility_o *v43; // x24
  __int64 v44; // x25
  __int64 v45; // x26
  int32_t v46; // w25
  int32_t Rarity; // w26
  PartyServantListViewItem_o *v48; // x8
  struct UserServantEntity_o *v49; // x9
  PartyOrganizationUtility_o *v50; // x23
  ServantEntity_o *servantEntity; // x24
  __int64 v52; // x25
  __int64 v53; // x26
  System_String_o *v54; // x24
  int32_t v55; // w25
  System_String_o *RarityInvalidMessage; // x23
  System_Text_StringBuilder_o *v57; // x22
  System_String_o *v58; // x0
  PartyServantSelectMenu_o *partyServantSelectMenu; // x23
  System_Action_o *v60; // x24
  CommonUI_o *Instance; // x23
  System_String_o *v62; // x22
  System_String_o *v63; // x24
  System_String_o *v64; // x25
  CommonConfirmDialog_ClickDelegate_o *v65; // x26
  char v66; // w27
  struct PartyListViewItem_o *partyItem; // x8
  int32_t index; // w10
  int32_t OrganizedWave_k__BackingField; // w8
  int v70; // w25
  PartyOrganizationListViewItem_o *v71; // x24
  struct PartyListViewItem_array *waveBattleDeckItemList; // x9
  il2cpp_array_size_t v73; // w8
  PartyListViewItem_o *v74; // x21
  int32_t i; // w22
  __int64 v76; // x8
  PartyOrganizationListViewItem_o *v77; // x23
  struct UserServantEntity_o *v78; // x9
  __int128 v79; // q0
  LocalizationManager_c *v80; // x0
  int32_t cost; // w26
  int32_t MargeCost; // w22
  int32_t v83; // w8
  System_String_o *v84; // x20
  System_String_o *v85; // x21
  CommonUI_o *v86; // x22
  NotificationDialog_ClickDelegate_o *v87; // x23
  System_String_o *v88; // x21
  System_String_o *v89; // x22
  System_Object_array *v90; // x23
  Il2CppObject *v91; // x25
  int32_t rarityId; // w25
  Il2CppObject *v93; // x25
  Il2CppObject *v94; // x25
  Il2CppObject *v95; // x24
  Il2CppObject *v96; // x24
  int32_t v97; // w0
  Il2CppObject *v98; // x24
  Il2CppObject *v99; // x24
  PartyServantListViewItem_o *v100; // x8
  struct UserServantEntity_o *v101; // x9
  ServantEntity_o *v102; // x20
  __int64 v103; // x24
  __int64 v104; // x25
  Il2CppObject *v105; // x20
  System_String_o *v106; // x20
  CommonUI_o *v107; // x22
  System_String_o *v108; // x23
  System_String_o *v109; // x24
  CommonConfirmDialog_ClickDelegate_o *v110; // x25
  __int64 v111; // x0
  __int64 v112; // x0
  int32_t v113; // [xsp+68h] [xbp-98h] BYREF
  int v114; // [xsp+6Ch] [xbp-94h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+70h] [xbp-90h] BYREF
  int32_t minFontSize; // [xsp+90h] [xbp-70h] BYREF
  int32_t maxLength[2]; // [xsp+94h] [xbp-6Ch] BYREF
  int32_t actMaxRarity; // [xsp+9Ch] [xbp-64h] BYREF
  System_String_o *skillName; // [xsp+A0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  if ( (byte_418504C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&BalanceConfig_TypeInfo, v7);
    sub_B2C35C(&NotificationDialog_ClickDelegate_TypeInfo, v8);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&object___TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&Rarity_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v17);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v18);
    sub_B2C35C(
      &Method_PartyOrganizationRootComponent___c__DisplayClass244_0__EndSelectedOrganizationSwapServant_b__0__,
      v19);
    sub_B2C35C(
      &Method_PartyOrganizationRootComponent___c__DisplayClass244_0__EndSelectedOrganizationSwapServant_b__1__,
      v20);
    sub_B2C35C(
      &Method_PartyOrganizationRootComponent___c__DisplayClass244_0__EndSelectedOrganizationSwapServant_b__2__,
      v21);
    sub_B2C35C(
      &Method_PartyOrganizationRootComponent___c__DisplayClass244_0__EndSelectedOrganizationSwapServant_b__3__,
      v22);
    sub_B2C35C(&PartyOrganizationRootComponent___c__DisplayClass244_0_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_15358/*"WAVE_BATTLE_SERVANT_SWAP_TITLE"*/, v24);
    sub_B2C35C(&StringLiteral_10208/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v25);
    sub_B2C35C(&StringLiteral_15345/*"WAVE_BATTLE_COST_OVER_TITLE"*/, v26);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v27);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v28);
    sub_B2C35C(&StringLiteral_1/*""*/, v29);
    sub_B2C35C(&StringLiteral_15357/*"WAVE_BATTLE_SERVANT_SWAP_MESSAGE"*/, v30);
    sub_B2C35C(&StringLiteral_15344/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, v31);
    byte_418504C = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  *(_QWORD *)maxLength = 0LL;
  minFontSize = 0;
  v32 = (PartyOrganizationRootComponent___c__DisplayClass244_0_o *)sub_B2C42C(PartyOrganizationRootComponent___c__DisplayClass244_0_TypeInfo);
  PartyOrganizationRootComponent___c__DisplayClass244_0___ctor(v32, 0LL);
  if ( !v32 )
    goto LABEL_132;
  v32->fields.__4__this = this;
  sub_B2C2F8(&v32->fields, this);
  v32->fields.item = item;
  p_item = &v32->fields.item;
  v32->fields.result = result;
  sub_B2C2F8(&v32->fields.item, item);
  if ( !v32->fields.result )
  {
    v41 = 0;
LABEL_79:
    PartyOrganizationRootComponent__ExecutionServantSet(this, v41, *p_item, v36);
    return;
  }
  IsParty = (__int64)*p_item;
  if ( !*p_item )
    goto LABEL_132;
  if ( *(_BYTE *)(IsParty + 200) )
    goto LABEL_51;
  IsParty = PartyServantListViewItem__get_IsParty((PartyServantListViewItem_o *)IsParty, 0LL);
  if ( (IsParty & 1) != 0 )
    goto LABEL_51;
  IsParty = (__int64)this->fields.partyItem;
  if ( !IsParty )
    goto LABEL_132;
  IsParty = (__int64)PartyListViewItem__GetMember(
                       (PartyListViewItem_o *)IsParty,
                       this->fields.selectPartyMemberNum,
                       0LL);
  actMaxRarity = 0;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !IsParty )
    goto LABEL_132;
  v37 = (PartyOrganizationListViewItem_o *)IsParty;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)IsParty, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  IsParty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(EquipSvtId, 0LL);
  if ( (int)IsParty < 1 )
    goto LABEL_51;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    eventId = questRestrictionInfo->fields.eventId;
  else
    eventId = -1;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  IsParty = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !*p_item )
    goto LABEL_132;
  userServantEntity = (*p_item)->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_132;
  v43 = (PartyOrganizationUtility_o *)IsParty;
  v45 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v120.fields.currentCryptoKey = v45;
  *(_QWORD *)&v120.fields.fakeValue = v44;
  IsParty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v120, 0LL);
  if ( !*p_item )
    goto LABEL_132;
  v46 = IsParty;
  IsParty = (__int64)(*p_item)->fields.userServantEntity;
  if ( !IsParty )
    goto LABEL_132;
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)IsParty, 0LL);
  v121 = PartyOrganizationListViewItem__get_EquipSvtId(v37, 0LL);
  IsParty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v121, 0LL);
  if ( !v43 )
    goto LABEL_132;
  IsParty = PartyOrganizationUtility__IsRarityRestriction(
              v43,
              &skillName,
              &actMaxRarity,
              v46,
              Rarity,
              IsParty,
              eventId,
              0LL);
  if ( (IsParty & 1) == 0 )
  {
LABEL_51:
    v66 = 0;
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsParty = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v48 = *p_item;
    if ( !*p_item )
      goto LABEL_132;
    v49 = v48->fields.userServantEntity;
    if ( !v49 )
      goto LABEL_132;
    v50 = (PartyOrganizationUtility_o *)IsParty;
    servantEntity = v48->fields.servantEntity;
    v53 = *(_QWORD *)&v49->fields.limitCount.fields.currentCryptoKey;
    v52 = *(_QWORD *)&v49->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v122.fields.currentCryptoKey = v53;
    *(_QWORD *)&v122.fields.fakeValue = v52;
    IsParty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v122, 0LL);
    if ( !servantEntity )
      goto LABEL_132;
    IsParty = (__int64)ServantEntity__getName(servantEntity, IsParty, -1, 0LL);
    if ( !*p_item )
      goto LABEL_132;
    v54 = (System_String_o *)IsParty;
    IsParty = (__int64)(*p_item)->fields.userServantEntity;
    if ( !IsParty )
      goto LABEL_132;
    v55 = UserServantEntity__getRarity((UserServantEntity_o *)IsParty, 0LL);
    IsParty = (__int64)PartyOrganizationListViewItem__get_EquipName(v37, 0LL);
    if ( !v50 )
      goto LABEL_132;
    RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                             v50,
                             &maxLength[1],
                             v54,
                             v55,
                             (System_String_o *)IsParty,
                             skillName,
                             actMaxRarity,
                             0LL);
    IsParty = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsParty )
      goto LABEL_132;
    PartyOrganizationUtility__DecisionFontSize(
      (PartyOrganizationUtility_o *)IsParty,
      maxLength,
      &minFontSize,
      maxLength[1],
      0LL);
    v57 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v57, 0LL);
    if ( !v57 )
      goto LABEL_132;
    System_Text_StringBuilder__Append_42408700(v57, RarityInvalidMessage, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_10208/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
    System_Text_StringBuilder__Append_42408700(v57, v58, 0LL);
    partyServantSelectMenu = this->fields.partyServantSelectMenu;
    v60 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v60,
      (Il2CppObject *)v32,
      Method_PartyOrganizationRootComponent___c__DisplayClass244_0__EndSelectedOrganizationSwapServant_b__0__,
      0LL);
    if ( !partyServantSelectMenu )
      goto LABEL_132;
    PartyServantSelectMenu__Close_32396636(partyServantSelectMenu, v60, 0LL);
    IsParty = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !IsParty )
      goto LABEL_132;
    CommonUI__CloseEquipGraphListMenu((CommonUI_o *)IsParty, 0LL, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v62 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v57->klass->vtable._3_ToString.method)(
                               v57,
                               v57->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
    v65 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v65,
      (Il2CppObject *)v32,
      Method_PartyOrganizationRootComponent___c__DisplayClass244_0__EndSelectedOrganizationSwapServant_b__1__,
      0LL);
    if ( !Instance )
      goto LABEL_132;
    v66 = 1;
    CommonUI__OpenConfirmDialog_17971264(
      Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v62,
      v63,
      v64,
      v65,
      maxLength[0],
      minFontSize,
      30.0,
      728,
      2,
      480,
      -162.5,
      0,
      0,
      240,
      1,
      0LL);
  }
  if ( !v32->fields.result )
    goto LABEL_77;
  if ( !*p_item )
    goto LABEL_132;
  if ( (*p_item)->fields._OrganizedWave_k__BackingField < 1 )
    goto LABEL_77;
  IsParty = (__int64)this->fields.partyItem;
  if ( !IsParty )
    goto LABEL_132;
  IsParty = (__int64)PartyListViewItem__GetMember(
                       (PartyListViewItem_o *)IsParty,
                       this->fields.selectPartyMemberNum,
                       0LL);
  partyItem = this->fields.partyItem;
  if ( !partyItem || !*p_item )
    goto LABEL_132;
  index = partyItem->fields.index;
  OrganizedWave_k__BackingField = (*p_item)->fields._OrganizedWave_k__BackingField;
  v70 = index + 1;
  if ( index + 1 == OrganizedWave_k__BackingField )
    goto LABEL_77;
  v71 = (PartyOrganizationListViewItem_o *)IsParty;
  if ( !IsParty )
    goto LABEL_132;
  if ( !*(_QWORD *)(IsParty + 168) )
  {
LABEL_77:
    if ( (v66 & 1) != 0 )
      return;
    v41 = v32->fields.result;
    goto LABEL_79;
  }
  waveBattleDeckItemList = this->fields.waveBattleDeckItemList;
  if ( !waveBattleDeckItemList )
    goto LABEL_132;
  v73 = OrganizedWave_k__BackingField - 1;
  if ( v73 >= waveBattleDeckItemList->max_length )
    goto LABEL_133;
  v74 = waveBattleDeckItemList->m_Items[v73];
  for ( i = 0; ; ++i )
  {
    IsParty = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsParty = (__int64)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)(IsParty + 184) + 160LL) )
    {
      v80 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_90;
      goto LABEL_88;
    }
    if ( !v74 )
      goto LABEL_132;
    IsParty = (__int64)PartyListViewItem__GetMember(v74, i, 0LL);
    if ( !IsParty )
      goto LABEL_132;
    v76 = *(_QWORD *)(IsParty + 112);
    v77 = (PartyOrganizationListViewItem_o *)IsParty;
    if ( v76 )
    {
      if ( !*p_item )
        goto LABEL_132;
      v78 = (*p_item)->fields.userServantEntity;
      if ( !v78 )
        goto LABEL_132;
      v79 = *(_OWORD *)(v76 + 32);
      *(_OWORD *)&v115.fields.currentCryptoKey = *(_OWORD *)(v76 + 16);
      *(_OWORD *)&v115.fields.fakeValue = v79;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_44761692(&v78->fields.id, &v115, 0LL) )
        break;
    }
  }
  cost = v74->fields.cost;
  MargeCost = PartyOrganizationListViewItem__get_MargeCost(v77, 0LL);
  v83 = PartyOrganizationListViewItem__get_MargeCost(v71, 0LL);
  v80 = LocalizationManager_TypeInfo;
  if ( cost - MargeCost + v83 > v74->fields.maxCost )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_15345/*"WAVE_BATTLE_COST_OVER_TITLE"*/, 0LL);
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_15344/*"WAVE_BATTLE_COST_OVER_MESSAGE"*/, 0LL);
    v86 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v87 = (NotificationDialog_ClickDelegate_o *)sub_B2C42C(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v87,
      (Il2CppObject *)v32,
      Method_PartyOrganizationRootComponent___c__DisplayClass244_0__EndSelectedOrganizationSwapServant_b__3__,
      0LL);
    if ( v86 )
    {
      CommonUI__OpenNotificationDialog_17973524(
        v86,
        v84,
        v85,
        v87,
        -1,
        0,
        0,
        0,
        0,
        0,
        0LL,
        0LL,
        0,
        0,
        0LL,
        1,
        0LL,
        0LL,
        0LL,
        0LL);
      return;
    }
LABEL_132:
    sub_B2C434(IsParty, v34);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
  {
LABEL_88:
    if ( !v80->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v80);
  }
LABEL_90:
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_15358/*"WAVE_BATTLE_SERVANT_SWAP_TITLE"*/, 0LL);
  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_15357/*"WAVE_BATTLE_SERVANT_SWAP_MESSAGE"*/, 0LL);
  v90 = (System_Object_array *)sub_B2C374(object___TypeInfo, 8LL);
  v114 = v70;
  IsParty = j_il2cpp_value_box_0(int_TypeInfo, &v114);
  if ( !v90 )
    goto LABEL_132;
  v91 = (Il2CppObject *)IsParty;
  if ( IsParty )
  {
    IsParty = sub_B2C41C(IsParty, v90->obj.klass->_1.element_class);
    if ( !IsParty )
      goto LABEL_134;
  }
  if ( !v90->max_length )
    goto LABEL_133;
  v90->m_Items[0] = v91;
  sub_B2C2F8(v90->m_Items, v91);
  rarityId = v71->fields.rarityId;
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  IsParty = (__int64)Rarity__getRarityType(rarityId, 0LL);
  v93 = (Il2CppObject *)IsParty;
  if ( IsParty )
  {
    IsParty = sub_B2C41C(IsParty, v90->obj.klass->_1.element_class);
    if ( !IsParty )
      goto LABEL_134;
  }
  if ( v90->max_length <= 1 )
    goto LABEL_133;
  v90->m_Items[1] = v93;
  sub_B2C2F8(&v90->m_Items[1], v93);
  IsParty = (__int64)v71->fields.servantEntity;
  if ( !IsParty )
    goto LABEL_132;
  IsParty = (__int64)ServantEntity__getClassName((ServantEntity_o *)IsParty, 0LL);
  v94 = (Il2CppObject *)IsParty;
  if ( IsParty )
  {
    IsParty = sub_B2C41C(IsParty, v90->obj.klass->_1.element_class);
    if ( !IsParty )
      goto LABEL_134;
  }
  if ( v90->max_length <= 2 )
    goto LABEL_133;
  v90->m_Items[2] = v94;
  sub_B2C2F8(&v90->m_Items[2], v94);
  IsParty = (__int64)PartyOrganizationListViewItem__get_ServantName(v71, 0LL);
  v95 = (Il2CppObject *)IsParty;
  if ( IsParty )
  {
    IsParty = sub_B2C41C(IsParty, v90->obj.klass->_1.element_class);
    if ( !IsParty )
      goto LABEL_134;
  }
  if ( v90->max_length <= 3 )
    goto LABEL_133;
  v90->m_Items[3] = v95;
  sub_B2C2F8(&v90->m_Items[3], v95);
  if ( !*p_item )
    goto LABEL_132;
  v113 = (*p_item)->fields._OrganizedWave_k__BackingField;
  IsParty = j_il2cpp_value_box_0(int_TypeInfo, &v113);
  v96 = (Il2CppObject *)IsParty;
  if ( IsParty )
  {
    IsParty = sub_B2C41C(IsParty, v90->obj.klass->_1.element_class);
    if ( !IsParty )
      goto LABEL_134;
  }
  if ( v90->max_length <= 4 )
    goto LABEL_133;
  v90->m_Items[4] = v96;
  sub_B2C2F8(&v90->m_Items[4], v96);
  if ( !*p_item )
    goto LABEL_132;
  IsParty = (__int64)(*p_item)->fields.userServantEntity;
  if ( !IsParty )
    goto LABEL_132;
  v97 = UserServantEntity__getRarity((UserServantEntity_o *)IsParty, 0LL);
  IsParty = (__int64)Rarity__getRarityType(v97, 0LL);
  v98 = (Il2CppObject *)IsParty;
  if ( IsParty )
  {
    IsParty = sub_B2C41C(IsParty, v90->obj.klass->_1.element_class);
    if ( !IsParty )
      goto LABEL_134;
  }
  if ( v90->max_length <= 5 )
    goto LABEL_133;
  v90->m_Items[5] = v98;
  sub_B2C2F8(&v90->m_Items[5], v98);
  if ( !*p_item )
    goto LABEL_132;
  IsParty = (__int64)(*p_item)->fields.servantEntity;
  if ( !IsParty )
    goto LABEL_132;
  IsParty = (__int64)ServantEntity__getClassName((ServantEntity_o *)IsParty, 0LL);
  v99 = (Il2CppObject *)IsParty;
  if ( IsParty )
  {
    IsParty = sub_B2C41C(IsParty, v90->obj.klass->_1.element_class);
    if ( !IsParty )
      goto LABEL_134;
  }
  if ( v90->max_length <= 6 )
    goto LABEL_133;
  v90->m_Items[6] = v99;
  sub_B2C2F8(&v90->m_Items[6], v99);
  v100 = *p_item;
  if ( !*p_item )
    goto LABEL_132;
  v101 = v100->fields.userServantEntity;
  if ( !v101 )
    goto LABEL_132;
  v102 = v100->fields.servantEntity;
  v104 = *(_QWORD *)&v101->fields.limitCount.fields.currentCryptoKey;
  v103 = *(_QWORD *)&v101->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v123.fields.currentCryptoKey = v104;
  *(_QWORD *)&v123.fields.fakeValue = v103;
  IsParty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v123, 0LL);
  if ( !v102 )
    goto LABEL_132;
  IsParty = (__int64)ServantEntity__getName(v102, IsParty, -1, 0LL);
  v105 = (Il2CppObject *)IsParty;
  if ( IsParty )
  {
    IsParty = sub_B2C41C(IsParty, v90->obj.klass->_1.element_class);
    if ( !IsParty )
    {
LABEL_134:
      v112 = sub_B2C454();
      sub_B2C400(v112, 0LL);
    }
  }
  if ( v90->max_length <= 7 )
  {
LABEL_133:
    v111 = sub_B2C460(IsParty);
    sub_B2C400(v111, 0LL);
  }
  v90->m_Items[7] = v105;
  sub_B2C2F8(&v90->m_Items[7], v105);
  v106 = System_String__Format_44384256(v89, v90, 0LL);
  v107 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
  v110 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v110,
    (Il2CppObject *)v32,
    Method_PartyOrganizationRootComponent___c__DisplayClass244_0__EndSelectedOrganizationSwapServant_b__2__,
    0LL);
  if ( !v107 )
    goto LABEL_132;
  CommonUI__OpenConfirmDialog_17971264(
    v107,
    v88,
    v106,
    v108,
    v109,
    v110,
    24,
    25,
    14.5,
    728,
    2,
    480,
    -162.5,
    0,
    0,
    280,
    0,
    0LL);
}


void __fastcall PartyOrganizationRootComponent__EndServantNumWarningQuestStart(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationRestrictionHelpDialog_o *partyOrganizationRestrictionHelpDialog; // x0
  const MethodInfo *v5; // x1

  partyOrganizationRestrictionHelpDialog = this->fields.partyOrganizationRestrictionHelpDialog;
  if ( !partyOrganizationRestrictionHelpDialog )
    sub_B2C434(0LL, isDecide);
  PartyOrganizationRestrictionHelpDialog__Close_19917744(partyOrganizationRestrictionHelpDialog, 0LL, method);
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, v5);
}


void __fastcall PartyOrganizationRootComponent__EndShowCommandCardBoostItem(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  BoostItemMenu_o *boostItemMenu; // x20
  EventUpValSetupInfo_o *setupInfo; // x21
  BoostItemMenu_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x1
  bool IsFriendChocolateQuest; // w23
  const MethodInfo *v12; // x1

  if ( (byte_4184FFF & 1) == 0 )
  {
    sub_B2C35C(&BoostItemMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndInputBoostItemMenu__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4184FFF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL),
        boostItemMenu = this->fields.boostItemMenu,
        setupInfo = this->fields.setupInfo,
        v9 = (BoostItemMenu_CallbackFunc_o *)sub_B2C42C(BoostItemMenu_CallbackFunc_TypeInfo),
        BoostItemMenu_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PartyOrganizationRootComponent_EndInputBoostItemMenu__,
          0LL),
        IsFriendChocolateQuest = PartyOrganizationRootComponent__IsFriendChocolateQuest(this, v10),
        Instance = (WebViewManager_o *)PartyOrganizationRootComponent__IsAvailableFriendChocolate(this, v12),
        !boostItemMenu) )
  {
    sub_B2C434(Instance, v6);
  }
  BoostItemMenu__Open(boostItemMenu, setupInfo, v9, 0LL, IsFriendChocolateQuest, (unsigned __int8)Instance & 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndShowEventPoint(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  PartyOrganizationEventPointMenu_o *operationEventPointMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4185005 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndCloseShowEventPoint__, v4);
    byte_4185005 = 1;
  }
  operationEventPointMenu = this->fields.operationEventPointMenu;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndCloseShowEventPoint__, 0LL);
  if ( !operationEventPointMenu )
    sub_B2C434(v7, v8);
  PartyOrganizationEventPointMenu__Close_32198488(operationEventPointMenu, v6, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndShowInfomation(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4185002 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndCloseShowInfomation__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4185002 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndCloseShowInfomation__, 0LL);
  if ( !Instance )
    sub_B2C434(v7, v8);
  CommonUI__CloseClassCompatibilityMenu(Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__EndShowShowQuestInformation(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  PartyOrganizationQuestInfoMenu_o *questInfoMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4185008 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndCloseShowQuestInformation__, v4);
    byte_4185008 = 1;
  }
  questInfoMenu = this->fields.questInfoMenu;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndCloseShowQuestInformation__,
    0LL);
  if ( !questInfoMenu )
    sub_B2C434(v7, v8);
  PartyOrganizationQuestInfoMenu__Close_19905680(questInfoMenu, v6, v9);
}


void __fastcall PartyOrganizationRootComponent__EndSupportWarningQuestStart(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationConfirmSupportMenu_o *partyOrganizationConfirmSupportMenu; // x0
  const MethodInfo *v5; // x1

  partyOrganizationConfirmSupportMenu = this->fields.partyOrganizationConfirmSupportMenu;
  if ( !partyOrganizationConfirmSupportMenu )
    sub_B2C434(0LL, isDecide);
  PartyOrganizationConfirmSupportMenu__Close(partyOrganizationConfirmSupportMenu, 0LL);
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, v5);
}


void __fastcall PartyOrganizationRootComponent__EndTutorialFollowerGuideNotification1(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListMenu_o *partyListMenu; // x20
  int32_t menuKind; // w21
  PartyListViewItem_array *baseDeckItemList; // x22
  int32_t selectPartyNum; // w23
  EventUpValSetupInfo_o *setupInfo; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  PartyListMenu_CallbackFunc_o *v10; // x26
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4185055 & 1) == 0 )
  {
    sub_B2C35C(&PartyListMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectPartyList__, v3);
    byte_4185055 = 1;
  }
  this->fields.state = 9;
  this->fields.tutorialState = 7;
  partyListMenu = this->fields.partyListMenu;
  menuKind = this->fields.menuKind;
  baseDeckItemList = this->fields.baseDeckItemList;
  selectPartyNum = this->fields.selectPartyNum;
  setupInfo = this->fields.setupInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v10 = (PartyListMenu_CallbackFunc_o *)sub_B2C42C(PartyListMenu_CallbackFunc_TypeInfo);
  PartyListMenu_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyOrganizationRootComponent_OnSelectPartyList__,
    0LL);
  if ( !partyListMenu )
    sub_B2C434(v11, v12);
  PartyListMenu__Open(
    partyListMenu,
    menuKind,
    3,
    baseDeckItemList,
    selectPartyNum,
    setupInfo,
    questRestrictionInfo,
    v10,
    0LL,
    this->fields.friendPointCampaignVal,
    0,
    0,
    1,
    0LL);
}


void __fastcall PartyOrganizationRootComponent__EndTutorialOrganizationGuideNotification1(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListMenu_o *partyListMenu; // x20
  int32_t menuKind; // w21
  PartyListViewItem_array *baseDeckItemList; // x22
  int32_t selectPartyNum; // w23
  EventUpValSetupInfo_o *setupInfo; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  PartyListMenu_CallbackFunc_o *v10; // x26
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4185050 & 1) == 0 )
  {
    sub_B2C35C(&PartyListMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectPartyList__, v3);
    byte_4185050 = 1;
  }
  this->fields.state = 9;
  this->fields.tutorialState = 2;
  partyListMenu = this->fields.partyListMenu;
  menuKind = this->fields.menuKind;
  baseDeckItemList = this->fields.baseDeckItemList;
  selectPartyNum = this->fields.selectPartyNum;
  setupInfo = this->fields.setupInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v10 = (PartyListMenu_CallbackFunc_o *)sub_B2C42C(PartyListMenu_CallbackFunc_TypeInfo);
  PartyListMenu_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyOrganizationRootComponent_OnSelectPartyList__,
    0LL);
  if ( !partyListMenu )
    sub_B2C434(v11, v12);
  PartyListMenu__Open(
    partyListMenu,
    menuKind,
    2,
    baseDeckItemList,
    selectPartyNum,
    setupInfo,
    questRestrictionInfo,
    v10,
    0LL,
    this->fields.friendPointCampaignVal,
    0,
    0,
    1,
    0LL);
}


void __fastcall PartyOrganizationRootComponent__EndTutorialOrganizationGuideNotification2(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x20
  int32_t menuKind; // w21
  PartyListViewItem_o *basePartyItem; // x22
  PartyListViewItem_o *partyItem; // x23
  EventUpValSetupInfo_o *setupInfo; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  PartyOrganizationChangeMenu_CallbackFunc_o *callback; // x26
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4185051 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectedOrganizationChange__, v3);
    byte_4185051 = 1;
  }
  partyOrganizationChangeMenu = this->fields.partyOrganizationChangeMenu;
  menuKind = this->fields.menuKind;
  basePartyItem = this->fields.basePartyItem;
  partyItem = this->fields.partyItem;
  setupInfo = this->fields.setupInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  callback = (PartyOrganizationChangeMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationChangeMenu_CallbackFunc_TypeInfo);
  PartyOrganizationChangeMenu_CallbackFunc___ctor(
    callback,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_OnSelectedOrganizationChange__,
    0LL);
  if ( !partyOrganizationChangeMenu )
    sub_B2C434(v11, v12);
  PartyOrganizationChangeMenu__Open(
    partyOrganizationChangeMenu,
    menuKind,
    4,
    basePartyItem,
    partyItem,
    -1,
    setupInfo,
    questRestrictionInfo,
    callback,
    0LL,
    this->fields.friendPointCampaignVal,
    0LL);
}


void __fastcall PartyOrganizationRootComponent__EndTutorialOrganizationGuideNotification3(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *titleInfo; // x0
  PartyServantSelectMenu_o *partyServantSelectMenu; // x20
  PartyListViewItem_array *baseDeckItemList; // x21
  PartyListViewItem_o *partyItem; // x22
  int32_t selectPartyMemberNum; // w23
  QuestRestrictionInfo_o *questRestrictionInfo; // x24
  PartyServantSelectMenu_CallbackFunc_o *v10; // x25

  if ( (byte_4185052 & 1) == 0 )
  {
    sub_B2C35C(&PartyServantSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__, v3);
    byte_4185052 = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_13;
  titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo2;
  if ( !titleInfo )
    goto LABEL_13;
  TitleInfoControl__setTitleInfo_19532804((TitleInfoControl_o *)titleInfo, this->fields.myFSM, 2, 70, 0LL);
  titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !titleInfo )
    goto LABEL_13;
  titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_13;
  titleInfo = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)titleInfo,
                                           0LL);
  if ( !titleInfo )
    goto LABEL_13;
  titleInfo = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_13;
  titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  baseDeckItemList = this->fields.baseDeckItemList;
  partyItem = this->fields.partyItem;
  selectPartyMemberNum = this->fields.selectPartyMemberNum;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v10 = (PartyServantSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_CallbackFunc_TypeInfo);
  PartyServantSelectMenu_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__,
    0LL);
  if ( !partyServantSelectMenu )
LABEL_13:
    sub_B2C434(titleInfo, method);
  PartyServantSelectMenu__Open(
    partyServantSelectMenu,
    baseDeckItemList,
    partyItem,
    selectPartyMemberNum,
    2,
    0LL,
    questRestrictionInfo,
    v10,
    0LL,
    0LL);
}


void __fastcall PartyOrganizationRootComponent__EndTutorialOrganizationGuideNotification4(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *titleInfo; // x0

  PartyOrganizationRootComponent__EndTutorialOrganizationGuideNotification5(this, method);
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_B2C434(titleInfo, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndTutorialOrganizationGuideNotification5(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationMenu_o *partyOrganizationMenu; // x20
  int32_t menuKind; // w21
  PartyListViewItem_o *basePartyItem; // x22
  PartyListViewItem_o *partyItem; // x23
  EventUpValSetupInfo_o *setupInfo; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  PartyOrganizationMenu_CallbackFunc_o *v10; // x26
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // [xsp+10h] [xbp-50h]

  if ( (byte_4185053 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectedOrganizationSwap__, v3);
    byte_4185053 = 1;
  }
  partyOrganizationMenu = this->fields.partyOrganizationMenu;
  menuKind = this->fields.menuKind;
  basePartyItem = this->fields.basePartyItem;
  partyItem = this->fields.partyItem;
  setupInfo = this->fields.setupInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v10 = (PartyOrganizationMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationMenu_CallbackFunc_TypeInfo);
  PartyOrganizationMenu_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyOrganizationRootComponent_OnSelectedOrganizationSwap__,
    0LL);
  if ( !partyOrganizationMenu )
    sub_B2C434(v11, v12);
  PartyOrganizationMenu__Open(
    partyOrganizationMenu,
    menuKind,
    basePartyItem,
    partyItem,
    setupInfo,
    questRestrictionInfo,
    v10,
    0LL,
    4,
    this->fields.friendPointCampaignVal,
    v13);
}


void __fastcall PartyOrganizationRootComponent__EndTutorialOrganizationGuideNotification6(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float OffsetX; // s10
  float v9; // s4
  float v10; // s5
  float v11; // s6
  float v12; // s7
  float x; // s0
  float v14; // s4
  WebViewManager_o *Instance; // x0
  Il2CppMethodPointer methodPointer; // kr08_8
  void *invoker_method; // kr10_8
  CommonUI_o *v18; // x21
  System_Action_o *v19; // x20
  MethodInfo v20; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v25; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4185054 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&FSUtility_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndOpenTutorialArrow__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4185054 = 1;
  }
  v20.methodPointer = 0LL;
  v20.invoker_method = 0LL;
  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
  tutorialMaskBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !tutorialMaskBase )
    goto LABEL_10;
  TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)tutorialMaskBase, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
  v22.fields.m_XMin = -510.0;
  v22.fields.m_YMin = 225.0;
  v22.fields.m_Width = 160.0;
  v22.fields.m_Height = 60.0;
  UnityEngine_Rect___ctor(v22, v9, v10, v11, v12, &v20);
  x = UnityEngine_Rect__get_x(v23, &v20);
  v24.fields.m_XMin = x - FSUtility__GetOffsetX(68.0, 0, 0LL);
  UnityEngine_Rect__set_x(v24, v14, &v20);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  methodPointer = v20.methodPointer;
  invoker_method = v20.invoker_method;
  v18 = (CommonUI_o *)Instance;
  v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !v18 )
LABEL_10:
    sub_B2C434(tutorialMaskBase, method);
  v21.fields.x = TutorialBackArrowPos.fields.x - OffsetX;
  v21.fields.y = TutorialBackArrowPos.fields.y;
  *(_QWORD *)&v25.fields.m_XMin = methodPointer;
  *(_QWORD *)&v25.fields.m_Width = invoker_method;
  CommonUI__OpenTutorialArrowMark(v18, v21, 180.0, v25, v19, 0LL);
}


void __fastcall PartyOrganizationRootComponent__EndWarningQuestStart(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x0
  const MethodInfo *v5; // x1

  operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
  if ( !operationConfirmDeckMenu )
    sub_B2C434(0LL, isDecide);
  PartyOrganizationConfirmDeckMenu__Close(operationConfirmDeckMenu, 0LL);
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__ExecutionServantSet(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  PartyOrganizationListViewItem_o *Member; // x21
  struct System_Int64_array *equipIdList; // x8
  int32_t OrganizedWave_k__BackingField; // w8
  unsigned int v18; // w23
  struct PartyListViewItem_array *waveBattleDeckItemList; // x8
  PartyListViewItem_o *v20; // x22
  int32_t i; // w21
  struct PartyOrganizationConfirmDeck2Menu_o *operationConfirmDeck2Menu; // x8
  struct UserServantEntity_o *userServantEntity; // x9
  __int128 v24; // q0
  struct PartyListViewItem_array *v25; // x8
  PartyOrganizationListViewItem_o *v26; // x22
  struct PartyListViewItem_array *v27; // x8
  struct PartyListViewItem_array *v28; // x8
  struct PartyListViewItem_array *v29; // x8
  struct PartyListViewItem_array *waveBattleTempDeckItemList; // x22
  PartyOrganizationRootComponent_o *v31; // x21
  Il2CppClass **v32; // x0
  struct System_Int64_array *v33; // x8
  PartyServantSelectMenu_o *partyServantSelectMenu; // x20
  System_Action_o *v35; // x21
  PartyOrganizationConfirmCostumeMenu_o *partyOrganizationConfirmCostumeMenu; // x23
  EventUpValSetupInfo_o *setupInfo; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *v39; // x24
  PartyServantSelectMenu_o *v40; // x20
  System_Action_o *v41; // x22
  const MethodInfo *v42; // x1
  int32_t changePartyMode; // w8
  __int64 v44; // x0
  __int64 v45; // x0
  const MethodInfo *v46; // [xsp+10h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-60h] BYREF

  v6 = this;
  if ( (byte_418504D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&BalanceConfig_TypeInfo, v7);
    sub_B2C35C(&PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo, v8);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectQuestConfirmCostumeMenu__, v9);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndTutorialOrganizationGuideNotification4__, v10);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__ExecutionServantSet_b__245_0__, v11);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&TutorialFlag_TypeInfo, v14);
    byte_418504D = 1;
  }
  if ( !result )
  {
    Member = 0LL;
    goto LABEL_76;
  }
  if ( !item )
    goto LABEL_113;
  if ( !item->fields.isBase )
  {
    this = (PartyOrganizationRootComponent_o *)PartyServantListViewItem__get_IsParty(item, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
      if ( !this )
        goto LABEL_113;
      this = (PartyOrganizationRootComponent_o *)PartyListViewItem__GetMember(
                                                   (PartyListViewItem_o *)this,
                                                   item->fields.partyIndex,
                                                   0LL);
      if ( !this )
        goto LABEL_113;
      if ( LOBYTE(this->fields.titleInfo2) )
        goto LABEL_17;
      this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
      if ( !this )
        goto LABEL_113;
      this = (PartyOrganizationRootComponent_o *)PartyListViewItem__GetMember(
                                                   (PartyListViewItem_o *)this,
                                                   v6->fields.selectPartyMemberNum,
                                                   0LL);
      if ( !this )
        goto LABEL_113;
      if ( LOBYTE(this->fields.titleInfo2) )
      {
LABEL_17:
        this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
        if ( !this )
          goto LABEL_113;
        PartyListViewItem__ClearMember((PartyListViewItem_o *)this, item->fields.partyIndex, 0LL);
        this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
        if ( !this )
          goto LABEL_113;
        PartyListViewItem__SetMember((PartyListViewItem_o *)this, v6->fields.selectPartyMemberNum, item, 0LL);
        this = (PartyOrganizationRootComponent_o *)PartyServantListViewItem__get_IsEquip(item, 0LL);
        Member = 0LL;
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_71;
        equipIdList = item->fields.equipIdList;
        if ( !equipIdList )
          goto LABEL_113;
        if ( equipIdList->max_length )
        {
          this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
          if ( !this )
            goto LABEL_113;
          PartyListViewItem__SetEquip(
            (PartyListViewItem_o *)this,
            v6->fields.selectPartyMemberNum,
            equipIdList->m_Items[0],
            0LL);
          goto LABEL_8;
        }
LABEL_114:
        v44 = sub_B2C460(this);
        sub_B2C400(v44, 0LL);
      }
      this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
      if ( !this )
        goto LABEL_113;
      PartyListViewItem__SwapMember(
        (PartyListViewItem_o *)this,
        v6->fields.selectPartyMemberNum,
        item->fields.partyIndex,
        1,
        0LL);
    }
    else
    {
      OrganizedWave_k__BackingField = item->fields._OrganizedWave_k__BackingField;
      v18 = OrganizedWave_k__BackingField - 1;
      if ( OrganizedWave_k__BackingField < 1 )
      {
        this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
        if ( !this )
          goto LABEL_113;
        PartyListViewItem__SetMember((PartyListViewItem_o *)this, v6->fields.selectPartyMemberNum, item, 0LL);
      }
      else
      {
        waveBattleDeckItemList = v6->fields.waveBattleDeckItemList;
        if ( !waveBattleDeckItemList )
          goto LABEL_113;
        if ( v18 >= waveBattleDeckItemList->max_length )
          goto LABEL_114;
        v20 = waveBattleDeckItemList->m_Items[v18];
        for ( i = 0; ; ++i )
        {
          this = (PartyOrganizationRootComponent_o *)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            this = (PartyOrganizationRootComponent_o *)BalanceConfig_TypeInfo;
          }
          if ( i >= SLODWORD(this->fields.partyOrganizationConfirmCopyMenu->fields.cancelButton) )
            break;
          if ( !v20 )
            goto LABEL_113;
          this = (PartyOrganizationRootComponent_o *)PartyListViewItem__GetMember(v20, i, 0LL);
          if ( !this )
            goto LABEL_113;
          operationConfirmDeck2Menu = this->fields.operationConfirmDeck2Menu;
          if ( operationConfirmDeck2Menu )
          {
            userServantEntity = item->fields.userServantEntity;
            if ( !userServantEntity )
              goto LABEL_113;
            v24 = *(_OWORD *)&operationConfirmDeck2Menu->fields.basePanelList;
            *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&operationConfirmDeck2Menu->fields.m_CachedPtr;
            *(_OWORD *)&v47.fields.fakeValue = v24;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_44761692(
                   &userServantEntity->fields.id,
                   &v47,
                   0LL) )
            {
              goto LABEL_39;
            }
          }
        }
        i = 0;
LABEL_39:
        this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
        if ( !this )
          goto LABEL_113;
        this = (PartyOrganizationRootComponent_o *)PartyListViewItem__GetMember(
                                                     (PartyListViewItem_o *)this,
                                                     v6->fields.selectPartyMemberNum,
                                                     0LL);
        if ( !this )
          goto LABEL_113;
        if ( this->fields.deckNameInputMenu )
        {
          this = (PartyOrganizationRootComponent_o *)PartyOrganizationListViewItem__Clone(
                                                       (PartyOrganizationListViewItem_o *)this,
                                                       i,
                                                       0LL);
          v25 = v6->fields.waveBattleDeckItemList;
          if ( !v25 )
            goto LABEL_113;
          if ( v18 >= v25->max_length )
            goto LABEL_114;
          v26 = (PartyOrganizationListViewItem_o *)this;
          this = (PartyOrganizationRootComponent_o *)v25->m_Items[v18];
          if ( !this )
            goto LABEL_113;
          this = (PartyOrganizationRootComponent_o *)PartyListViewItem__GetMember((PartyListViewItem_o *)this, i, 0LL);
          if ( !this )
            goto LABEL_113;
          if ( !v26 )
            goto LABEL_113;
          v26->fields._InitPos_k__BackingField = this->fields.selectPartyMemberNum;
          v27 = v6->fields.waveBattleDeckItemList;
          if ( !v27 )
            goto LABEL_113;
          if ( v18 >= v27->max_length )
            goto LABEL_114;
          this = (PartyOrganizationRootComponent_o *)v27->m_Items[v18];
          if ( !this )
            goto LABEL_113;
          PartyListViewItem__SetMember_31930328((PartyListViewItem_o *)this, i, v26, 0LL);
        }
        else
        {
          v28 = v6->fields.waveBattleDeckItemList;
          if ( !v28 )
            goto LABEL_113;
          if ( v18 >= v28->max_length )
            goto LABEL_114;
          this = (PartyOrganizationRootComponent_o *)v28->m_Items[v18];
          if ( !this )
            goto LABEL_113;
          PartyListViewItem__ClearMember((PartyListViewItem_o *)this, i, 0LL);
        }
        v29 = v6->fields.waveBattleDeckItemList;
        if ( !v29 )
          goto LABEL_113;
        if ( v18 >= v29->max_length )
          goto LABEL_114;
        this = (PartyOrganizationRootComponent_o *)v29->m_Items[v18];
        if ( !this )
          goto LABEL_113;
        waveBattleTempDeckItemList = v6->fields.waveBattleTempDeckItemList;
        this = (PartyOrganizationRootComponent_o *)PartyListViewItem__Clone((PartyListViewItem_o *)this, 0LL);
        if ( !waveBattleTempDeckItemList )
          goto LABEL_113;
        v31 = this;
        if ( this )
        {
          this = (PartyOrganizationRootComponent_o *)sub_B2C41C(
                                                       this,
                                                       waveBattleTempDeckItemList->obj.klass->_1.element_class);
          if ( !this )
          {
            v45 = sub_B2C454();
            sub_B2C400(v45, 0LL);
          }
        }
        if ( v18 >= waveBattleTempDeckItemList->max_length )
          goto LABEL_114;
        v32 = &waveBattleTempDeckItemList->obj.klass + (int)v18;
        v32[4] = (Il2CppClass *)v31;
        sub_B2C2F8(v32 + 4, v31);
        this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
        if ( !this )
          goto LABEL_113;
        PartyListViewItem__SetMember((PartyListViewItem_o *)this, v6->fields.selectPartyMemberNum, item, 0LL);
        v33 = item->fields.equipIdList;
        if ( !v33 )
          goto LABEL_113;
        if ( !v33->max_length )
          goto LABEL_114;
        this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
        if ( !this )
          goto LABEL_113;
        PartyListViewItem__SetEquip((PartyListViewItem_o *)this, v6->fields.selectPartyMemberNum, v33->m_Items[0], 0LL);
      }
    }
    this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
    if ( !this )
      goto LABEL_113;
    Member = PartyListViewItem__GetMember((PartyListViewItem_o *)this, v6->fields.selectPartyMemberNum, 0LL);
    goto LABEL_71;
  }
  this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem;
  if ( !this )
    goto LABEL_113;
  PartyListViewItem__ClearMember((PartyListViewItem_o *)this, v6->fields.selectPartyMemberNum, 0LL);
LABEL_8:
  Member = 0LL;
LABEL_71:
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  this = (PartyOrganizationRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
    goto LABEL_113;
  PartyOrganizationUtility__ClearNpcFollowerInfo(
    (PartyOrganizationUtility_o *)this,
    v6->fields.selectPartyMemberNum + 1,
    0LL);
LABEL_76:
  this = (PartyOrganizationRootComponent_o *)v6->fields.partyOrganizationMenu;
  v6->fields.isServantSelect = 1;
  if ( !this )
    goto LABEL_113;
  PartyOrganizationMenu__ModifyItem((PartyOrganizationMenu_o *)this, *(const MethodInfo **)&result);
  this = (PartyOrganizationRootComponent_o *)v6->fields.backSkinSprite;
  v6->fields.selectPartyMemberNum = -1;
  if ( !this )
    goto LABEL_113;
  this = (PartyOrganizationRootComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_113;
  this = (PartyOrganizationRootComponent_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
  if ( !this )
    goto LABEL_113;
  this = (PartyOrganizationRootComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_113;
  this = (PartyOrganizationRootComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( v6->fields.tutorialState == 4 )
  {
    this = (PartyOrganizationRootComponent_o *)v6->fields.partyOrganizationMenu;
    v6->fields.tutorialState = 5;
    v6->fields.state = 15;
    if ( this )
    {
      PartyOrganizationMenu__Open(
        (PartyOrganizationMenu_o *)this,
        v6->fields.menuKind,
        v6->fields.basePartyItem,
        v6->fields.partyItem,
        v6->fields.setupInfo,
        v6->fields.questRestrictionInfo,
        0LL,
        0LL,
        0,
        v6->fields.friendPointCampaignVal,
        v46);
      partyServantSelectMenu = v6->fields.partyServantSelectMenu;
      v35 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v35,
        (Il2CppObject *)v6,
        Method_PartyOrganizationRootComponent_EndTutorialOrganizationGuideNotification4__,
        0LL);
      if ( partyServantSelectMenu )
      {
        PartyServantSelectMenu__Close_32396636(partyServantSelectMenu, v35, 0LL);
        return;
      }
    }
    goto LABEL_113;
  }
  if ( Member && PartyOrganizationListViewItem__IsFixCostume(Member, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28617756(206, 0LL) )
    {
      partyOrganizationConfirmCostumeMenu = v6->fields.partyOrganizationConfirmCostumeMenu;
      setupInfo = v6->fields.setupInfo;
      questRestrictionInfo = v6->fields.questRestrictionInfo;
      v39 = (PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmCostumeMenu_CallbackFunc___ctor(
        v39,
        (Il2CppObject *)v6,
        Method_PartyOrganizationRootComponent_EndSelectQuestConfirmCostumeMenu__,
        0LL);
      if ( !partyOrganizationConfirmCostumeMenu )
        goto LABEL_113;
      PartyOrganizationConfirmCostumeMenu__Open(
        partyOrganizationConfirmCostumeMenu,
        0,
        Member,
        setupInfo,
        questRestrictionInfo,
        v39,
        0LL);
    }
  }
  v40 = v6->fields.partyServantSelectMenu;
  v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v6,
    Method_PartyOrganizationRootComponent__ExecutionServantSet_b__245_0__,
    0LL);
  if ( !v40
    || (PartyServantSelectMenu__Close_32396636(v40, v41, 0LL),
        v6->fields.state = 15,
        PartyOrganizationRootComponent__RecoverInputShowMenu(v6, v42),
        (this = (PartyOrganizationRootComponent_o *)v6->fields.partyItem) == 0LL) )
  {
LABEL_113:
    sub_B2C434(this, *(_QWORD *)&result);
  }
  if ( PartyListViewItem__CompMember((PartyListViewItem_o *)this, v6->fields.basePartyItem, 0LL) )
  {
    changePartyMode = v6->fields.changePartyMode;
    v6->fields.menuMode = v6->fields.mainMenuMode;
    if ( changePartyMode == 1 )
    {
      this = (PartyOrganizationRootComponent_o *)v6->fields.partyOrganizationMenu;
      v6->fields.isAutoClose = 1;
      if ( this )
      {
        PartyOrganizationMenu__OnClickCancel((PartyOrganizationMenu_o *)this, *(const MethodInfo **)&result);
        return;
      }
      goto LABEL_113;
    }
  }
  else
  {
    if ( v6->fields.changePartyMode == 1 )
    {
      this = (PartyOrganizationRootComponent_o *)v6->fields.titleInfo;
      if ( !this )
        goto LABEL_113;
      TitleInfoControl__changeTitleInfo((TitleInfoControl_o *)this, 2, 68, 0LL);
    }
    if ( Member && Member->fields.isMyServantOrNpcRestriction )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      this = (PartyOrganizationRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        PartyOrganizationUtility__SetNpcFollowerInfo(
          (PartyOrganizationUtility_o *)this,
          Member->fields._InitPos_k__BackingField,
          0LL,
          0LL);
        return;
      }
      goto LABEL_113;
    }
  }
}


PartyServantListViewItem_o *__fastcall PartyOrganizationRootComponent__FindAutoOrganizationServant(
        PartyOrganizationRootComponent_o *this,
        AutoOrganizationManager_ServantData_array *dataList,
        int32_t index,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  PartyServantListViewItem_o *v15; // x20
  PartyListViewItem_array *baseDeckItemList; // x23
  PartyListViewItem_o *partyItem; // x24
  EventUpValSetupInfo_o *setupInfo2; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x26
  UserServantEntity_o *v20; // x22
  signed int max_length; // w8
  unsigned int v22; // w21
  AutoOrganizationManager_ServantData_o *v23; // x24
  int64_t userSvtId; // x25
  UserServantEntity_o *v25; // x8
  __int128 v26; // q0
  __int64 v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+30h] [xbp-70h]
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_418502E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, dataList);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v12);
    byte_418502E = 1;
  }
  userServantList = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  Master_WarQuestSelectionMaster = UserServantMaster__TryGetEntityListBySvtId(
                                     (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                     &userServantList,
                                     svtId,
                                     0,
                                     0LL);
  v15 = 0LL;
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( !userServantList )
      goto LABEL_27;
    if ( !userServantList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    baseDeckItemList = this->fields.baseDeckItemList;
    partyItem = this->fields.partyItem;
    setupInfo2 = this->fields.setupInfo2;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v20 = userServantList->fields._items->m_Items[0];
    v15 = (PartyServantListViewItem_o *)sub_B2C42C(PartyServantListViewItem_TypeInfo);
    PartyServantListViewItem___ctor(
      v15,
      index,
      v20,
      baseDeckItemList,
      partyItem,
      index,
      0,
      setupInfo2,
      questRestrictionInfo,
      0LL);
    if ( !dataList )
      goto LABEL_27;
    max_length = dataList->max_length;
    if ( max_length >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= max_length )
        {
          v28 = sub_B2C460(Master_WarQuestSelectionMaster);
          sub_B2C400(v28, 0LL);
        }
        v23 = dataList->m_Items[v22];
        if ( !v23 || !userServantList )
          break;
        userSvtId = v23->fields.userSvtId;
        if ( !userServantList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v25 = userServantList->fields._items->m_Items[0];
        if ( !v25 )
          break;
        v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
        *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v30.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v29 = v30;
        Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v29, 0LL);
        if ( userSvtId == Master_WarQuestSelectionMaster )
          v23->fields.used = 1;
        max_length = dataList->max_length;
        if ( (int)++v22 >= max_length )
          return v15;
      }
LABEL_27:
      sub_B2C434(Master_WarQuestSelectionMaster, v14);
    }
  }
  return v15;
}


PartyServantListViewItem_o *__fastcall PartyOrganizationRootComponent__FindAutoOrganizationServant_19989268(
        PartyOrganizationRootComponent_o *this,
        AutoOrganizationManager_ServantData_array *dataList,
        int32_t index,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  UserServantEntity_o *v14; // x23
  PartyListViewItem_array *baseDeckItemList; // x24
  PartyListViewItem_o *partyItem; // x25
  EventUpValSetupInfo_o *setupInfo2; // x26
  QuestRestrictionInfo_o *questRestrictionInfo; // x27
  PartyServantListViewItem_o *v19; // x22
  signed int max_length; // w10
  unsigned int v21; // w8
  AutoOrganizationManager_ServantData_o *v22; // x10
  __int64 v24; // x0
  UserServantEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_418502F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, dataList);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v11);
    byte_418502F = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          userSvtId,
          (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return 0LL;
  v14 = entity;
  baseDeckItemList = this->fields.baseDeckItemList;
  partyItem = this->fields.partyItem;
  setupInfo2 = this->fields.setupInfo2;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v19 = (PartyServantListViewItem_o *)sub_B2C42C(PartyServantListViewItem_TypeInfo);
  PartyServantListViewItem___ctor(
    v19,
    index,
    v14,
    baseDeckItemList,
    partyItem,
    index,
    0,
    setupInfo2,
    questRestrictionInfo,
    0LL);
  if ( !dataList )
    goto LABEL_19;
  max_length = dataList->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        v24 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v24, 0LL);
      }
      v22 = dataList->m_Items[v21];
      if ( !v22 )
        break;
      if ( v22->fields.userSvtId == userSvtId )
        v22->fields.used = 1;
      max_length = dataList->max_length;
      if ( (int)++v21 >= max_length )
        return v19;
    }
LABEL_19:
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
  }
  return v19;
}


void __fastcall PartyOrganizationRootComponent__FirstRestrictionWarningDialog(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PartyListViewItem_o *partyItem; // x0
  struct PartyListViewItem_array *baseDeckItemList; // x8
  __int64 selectPartyNum; // x9
  struct PartyListViewItem_o *v9; // x1
  int32_t i; // w20
  struct PartyListViewItem_array *v11; // x8
  __int64 v12; // x9
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v14; // x21
  PartyOrganizationConfirmCostumeMenu_o *partyOrganizationConfirmCostumeMenu; // x23
  EventUpValSetupInfo_o *setupInfo; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *v18; // x24
  __int64 v19; // x0

  if ( (byte_4185023 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectQuestConfirmCostumeMenu__, v4);
    sub_B2C35C(&TutorialFlag_TypeInfo, v5);
    byte_4185023 = 1;
  }
  partyItem = this->fields.partyItem;
  if ( !partyItem )
  {
    baseDeckItemList = this->fields.baseDeckItemList;
    if ( !baseDeckItemList )
      goto LABEL_26;
    selectPartyNum = this->fields.selectPartyNum;
    if ( (unsigned int)selectPartyNum >= baseDeckItemList->max_length )
    {
LABEL_27:
      v19 = sub_B2C460(partyItem);
      sub_B2C400(v19, 0LL);
    }
    v9 = baseDeckItemList->m_Items[selectPartyNum];
    this->fields.partyItem = v9;
    sub_B2C2F8(&this->fields.partyItem, v9);
    partyItem = this->fields.partyItem;
    if ( !partyItem )
      goto LABEL_26;
  }
  PartyListViewItem__GetStartDeckCondition(partyItem, 0LL);
  for ( i = 0; ; ++i )
  {
    partyItem = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      partyItem = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( i >= SHIDWORD(partyItem[1].klass->_1.methods) )
    {
      partyItem = (PartyListViewItem_o *)this->fields.partyListMenu;
      if ( partyItem )
      {
        PartyListMenu__SetSelectItemEnable((PartyListMenu_o *)partyItem, 1, 0LL);
        return;
      }
LABEL_26:
      sub_B2C434(partyItem, method);
    }
    v11 = this->fields.baseDeckItemList;
    if ( !v11 )
      goto LABEL_26;
    v12 = this->fields.selectPartyNum;
    if ( (unsigned int)v12 >= v11->max_length )
      goto LABEL_27;
    partyItem = v11->m_Items[v12];
    if ( !partyItem )
      goto LABEL_26;
    Member = PartyListViewItem__GetMember(partyItem, i, 0LL);
    if ( Member )
    {
      v14 = Member;
      if ( PartyOrganizationListViewItem__IsModifyFixCostume(Member, 0LL) )
      {
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( !TutorialFlag__Get_28617756(206, 0LL) )
          break;
      }
    }
  }
  partyOrganizationConfirmCostumeMenu = this->fields.partyOrganizationConfirmCostumeMenu;
  setupInfo = this->fields.setupInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v18 = (PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo);
  PartyOrganizationConfirmCostumeMenu_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndSelectQuestConfirmCostumeMenu__,
    0LL);
  if ( !partyOrganizationConfirmCostumeMenu )
    goto LABEL_26;
  PartyOrganizationConfirmCostumeMenu__Open(
    partyOrganizationConfirmCostumeMenu,
    0,
    v14,
    setupInfo,
    questRestrictionInfo,
    v18,
    0LL);
}


bool __fastcall PartyOrganizationRootComponent__FollowerScene(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRootComponent__SceneBack(this, 1, v2);
  return 1;
}


PartyServantListViewItem_o *__fastcall PartyOrganizationRootComponent__GetAutoOrganizationChangeServant(
        PartyOrganizationRootComponent_o *this,
        AutoOrganizationManager_ServantData_array *dataList,
        int32_t deckNum,
        int32_t index,
        int32_t remainCost,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v17; // x22
  PartyOrganizationListViewItem_o *v18; // x25
  int v19; // w24
  signed int max_length; // w8
  unsigned int v21; // w9
  AutoOrganizationManager_ServantData_o *v22; // x8
  int v23; // w27
  struct UserServantEntity_o *userServantEntity; // x9
  __int128 v25; // q0
  int64_t userSvtId; // x26
  signed int v27; // w8
  int32_t v28; // w25
  int v29; // w28
  int32_t v30; // w23
  int v31; // w26
  AutoOrganizationManager_ServantData_o *v32; // x19
  struct QuestRestrictionInfo_o *v33; // x24
  int32_t v34; // w20
  __int64 v35; // x25
  __int64 v36; // x26
  int32_t v37; // w25
  int32_t v38; // w26
  int32_t v39; // w3
  PartyServantListViewItem_o *v40; // x20
  UserServantEntity_o *v42; // x21
  PartyListViewItem_array *baseDeckItemList; // x22
  PartyListViewItem_o *partyItem; // x23
  EventUpValSetupInfo_o *setupInfo2; // x24
  int32_t v46; // w26
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  __int64 v48; // x0
  PartyOrganizationRootComponent_o *v49; // [xsp+10h] [xbp-B0h]
  int32_t v50; // [xsp+1Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]
  bool isWhole; // [xsp+64h] [xbp-5Ch] BYREF
  UserServantEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4185037 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, dataList);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v14);
    byte_4185037 = 1;
  }
  entity = 0LL;
  isWhole = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !this->fields.partyItem )
    goto LABEL_49;
  v17 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster;
  v50 = index;
  Master_WarQuestSelectionMaster = (int64_t)PartyListViewItem__GetMember(this->fields.partyItem, index, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_49;
  v18 = (PartyOrganizationListViewItem_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = PartyOrganizationListViewItem__get_IsEmpty(
                                     (PartyOrganizationListViewItem_o *)Master_WarQuestSelectionMaster,
                                     0LL);
  if ( (Master_WarQuestSelectionMaster & 1) == 0 )
  {
    Master_WarQuestSelectionMaster = PartyOrganizationListViewItem__get_MainCost(v18, 0LL);
    if ( dataList )
    {
      max_length = dataList->max_length;
      v19 = Master_WarQuestSelectionMaster;
      if ( max_length < 1 )
        goto LABEL_23;
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= max_length )
        {
LABEL_50:
          v48 = sub_B2C460(Master_WarQuestSelectionMaster);
          sub_B2C400(v48, 0LL);
        }
        v22 = dataList->m_Items[v21];
        v23 = v21;
        if ( !v22 )
          break;
        userServantEntity = v18->fields.userServantEntity;
        if ( !userServantEntity )
          break;
        v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        userSvtId = v22->fields.userSvtId;
        *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v52.fields.fakeValue = v25;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v51 = v52;
        Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL);
        if ( userSvtId != Master_WarQuestSelectionMaster )
        {
          max_length = dataList->max_length;
          v21 = v23 + 1;
          if ( v23 + 1 < max_length )
            continue;
        }
        goto LABEL_24;
      }
    }
LABEL_49:
    sub_B2C434(Master_WarQuestSelectionMaster, v16);
  }
  if ( !dataList )
    goto LABEL_49;
  v19 = 0;
LABEL_23:
  v23 = -1;
LABEL_24:
  v27 = dataList->max_length;
  v28 = v50;
  if ( v27 < 1 )
    return 0LL;
  v29 = 0;
  v30 = v19 + remainCost;
  v31 = v50 + 1;
  while ( 1 )
  {
    if ( v29 >= (unsigned int)v27 )
      goto LABEL_50;
    if ( v23 < v29 )
      return 0LL;
    v32 = dataList->m_Items[v29];
    if ( !v32 )
      goto LABEL_49;
    if ( !v32->fields.used && v32->fields.cost <= v30 )
    {
      if ( !v17 )
        goto LABEL_49;
      Master_WarQuestSelectionMaster = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                         v17,
                                         &entity,
                                         v32->fields.userSvtId,
                                         (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v33 = this->fields.questRestrictionInfo;
        if ( !v33 || !v33->fields.isRestriction )
          goto LABEL_43;
        v49 = this;
        if ( !entity )
          goto LABEL_49;
        v34 = v31;
        v36 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v35 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v55.fields.currentCryptoKey = v36;
        *(_QWORD *)&v55.fields.fakeValue = v35;
        Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v55, 0LL);
        if ( !entity )
          goto LABEL_49;
        v37 = Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                           entity->fields.limitCount,
                                           0LL);
        if ( !entity )
          goto LABEL_49;
        v38 = Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
        if ( !entity )
          goto LABEL_49;
        v39 = v38;
        v31 = v34;
        Master_WarQuestSelectionMaster = QuestRestrictionInfo__IsRestriction_31224308(
                                           v33,
                                           &isWhole,
                                           v37,
                                           v39,
                                           Master_WarQuestSelectionMaster,
                                           entity->fields.lv,
                                           v34,
                                           0LL);
        v28 = v50;
        this = v49;
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
        {
LABEL_43:
          Master_WarQuestSelectionMaster = (int64_t)entity;
          if ( !entity )
            goto LABEL_49;
          Master_WarQuestSelectionMaster = UserServantEntity__getUniqueSvtRestriction_21657540(
                                             entity,
                                             this->fields.questRestrictionInfo,
                                             this->fields.partyItem,
                                             v28,
                                             -1,
                                             0LL);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            break;
        }
      }
    }
    v27 = dataList->max_length;
    if ( ++v29 >= v27 )
      return 0LL;
  }
  v42 = entity;
  baseDeckItemList = this->fields.baseDeckItemList;
  partyItem = this->fields.partyItem;
  setupInfo2 = this->fields.setupInfo2;
  v46 = v28;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v40 = (PartyServantListViewItem_o *)sub_B2C42C(PartyServantListViewItem_TypeInfo);
  PartyServantListViewItem___ctor(
    v40,
    v46,
    v42,
    baseDeckItemList,
    partyItem,
    v46,
    0,
    setupInfo2,
    questRestrictionInfo,
    0LL);
  v32->fields.used = 1;
  return v40;
}


AutoOrganizationManager_ServantData_o *__fastcall PartyOrganizationRootComponent__GetAutoOrganizationEquip(
        PartyOrganizationRootComponent_o *this,
        PartyOrganizationListViewItem_o *member,
        AutoOrganizationManager_ServantData_array *dataList,
        int32_t remainCost,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  signed int max_length; // w8
  unsigned int v13; // w27
  AutoOrganizationManager_ServantData_o *v14; // x23
  PartyOrganizationRootComponent_o *v15; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  __int64 v18; // x0
  int32_t actMaxRarity; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *skillName; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4185030 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, member);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v11);
    byte_4185030 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  if ( !dataList )
    goto LABEL_22;
  max_length = dataList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        v18 = sub_B2C460(this);
        sub_B2C400(v18, 0LL);
      }
      v14 = dataList->m_Items[v13];
      if ( !v14 )
        break;
      if ( !v14->fields.used && v14->fields.cost <= remainCost )
      {
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (PartyOrganizationRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !member )
          break;
        v15 = this;
        SvtId = PartyOrganizationListViewItem__get_SvtId(member, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        this = (PartyOrganizationRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                     SvtId,
                                                     0LL);
        if ( !v15 )
          break;
        this = (PartyOrganizationRootComponent_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                     (PartyOrganizationUtility_o *)v15,
                                                     &skillName,
                                                     &actMaxRarity,
                                                     (int32_t)this,
                                                     member->fields.rarityId,
                                                     v14->fields.svtId,
                                                     eventId,
                                                     0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return v14;
      }
      max_length = dataList->max_length;
      if ( (int)++v13 >= max_length )
        return 0LL;
    }
LABEL_22:
    sub_B2C434(this, member);
  }
  return 0LL;
}


PartyServantListViewItem_o *__fastcall PartyOrganizationRootComponent__GetAutoOrganizationServant(
        PartyOrganizationRootComponent_o *this,
        AutoOrganizationManager_ServantData_array *dataList,
        int32_t deckNum,
        int32_t index,
        int32_t remainCost,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  signed int max_length; // w8
  const MethodInfo_24E4354 **v17; // x26
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v18; // x23
  unsigned int v19; // w24
  AutoOrganizationManager_ServantData_o *v20; // x28
  struct QuestRestrictionInfo_o *v21; // x25
  int32_t v22; // w21
  const MethodInfo_24E4354 **v23; // x19
  __int64 v24; // x26
  __int64 v25; // x27
  int32_t v26; // w26
  int32_t v27; // w27
  PartyServantListViewItem_o *v28; // x20
  UserServantEntity_o *v30; // x22
  PartyListViewItem_array *baseDeckItemList; // x23
  PartyListViewItem_o *partyItem; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  EventUpValSetupInfo_o *setupInfo2; // x25
  __int64 v35; // x0
  PartyOrganizationRootComponent_o *v36; // [xsp+18h] [xbp-68h]
  int initPos; // [xsp+20h] [xbp-60h]
  bool isWhole; // [xsp+24h] [xbp-5Ch] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_418502D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, dataList);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&PartyServantListViewItem_TypeInfo, v13);
    byte_418502D = 1;
  }
  entity = 0LL;
  isWhole = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !dataList )
LABEL_31:
    sub_B2C434(Master_WarQuestSelectionMaster, v15);
  max_length = dataList->max_length;
  if ( max_length < 1 )
    return 0LL;
  initPos = index + 1;
  v17 = (const MethodInfo_24E4354 **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__;
  v18 = Master_WarQuestSelectionMaster;
  v19 = 0;
  v36 = this;
  while ( 1 )
  {
    if ( v19 >= max_length )
    {
      v35 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v35, 0LL);
    }
    v20 = dataList->m_Items[v19];
    if ( !v20 )
      goto LABEL_31;
    if ( !v20->fields.used && v20->fields.cost <= remainCost )
    {
      if ( !v18 )
        goto LABEL_31;
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(v18, &entity, v20->fields.userSvtId, *v17);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v21 = this->fields.questRestrictionInfo;
        if ( !v21 || !v21->fields.isRestriction )
          goto LABEL_25;
        if ( !entity )
          goto LABEL_31;
        v22 = index;
        v23 = v17;
        v25 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v24 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v40.fields.currentCryptoKey = v25;
        *(_QWORD *)&v40.fields.fakeValue = v24;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
        if ( !entity )
          goto LABEL_31;
        v26 = (int)Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(entity->fields.limitCount, 0LL);
        if ( !entity )
          goto LABEL_31;
        v27 = (int)Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)UserServantEntity__getDispLimitCount(entity, 0, 0LL);
        if ( !entity )
          goto LABEL_31;
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestriction_31224308(v21, &isWhole, v26, v27, (int32_t)Master_WarQuestSelectionMaster, entity->fields.lv, initPos, 0LL);
        v17 = v23;
        index = v22;
        this = v36;
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        {
LABEL_25:
          Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)entity;
          if ( !entity )
            goto LABEL_31;
          Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)UserServantEntity__getUniqueSvtRestriction_21657540(entity, this->fields.questRestrictionInfo, this->fields.partyItem, index, -1, 0LL);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
            break;
        }
      }
    }
    max_length = dataList->max_length;
    if ( (int)++v19 >= max_length )
      return 0LL;
  }
  v30 = entity;
  baseDeckItemList = this->fields.baseDeckItemList;
  partyItem = this->fields.partyItem;
  setupInfo2 = this->fields.setupInfo2;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v28 = (PartyServantListViewItem_o *)sub_B2C42C(PartyServantListViewItem_TypeInfo);
  PartyServantListViewItem___ctor(
    v28,
    index,
    v30,
    baseDeckItemList,
    partyItem,
    index,
    0,
    setupInfo2,
    questRestrictionInfo,
    0LL);
  v20->fields.used = 1;
  return v28;
}


BattleSetupInfo_o *__fastcall PartyOrganizationRootComponent__GetBattleSetupInfo(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSetupInfo;
}


AutoOrganizationManager_ServantData_array_array *__fastcall PartyOrganizationRootComponent__GetDeckRelationServantDataLists(
        PartyOrganizationRootComponent_o *this,
        AutoOrganizationManager_ServantData_array *dataList,
        System_Int32_array *enemyClassIds,
        int32_t unitNum,
        int32_t unitMax,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  BalanceConfig_c *v12; // x0
  __int64 v13; // x1
  AutoOrganizationManager_ServantData_array_array *v14; // x24
  unsigned __int64 v15; // x25
  signed int v16; // w21
  AutoOrganizationManager_ServantData_array *v17; // x27
  AutoOrganizationManager_ServantData_array **i; // x26
  __int64 partyItem; // x0
  __int64 v20; // x28
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v23; // w8
  int32_t v24; // w28
  __int64 v25; // x28
  BalanceConfig_c *v26; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  System_Int32_array *v31; // [xsp+8h] [xbp-58h]

  if ( (byte_4185032 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, dataList);
    sub_B2C35C(&BalanceConfig_TypeInfo, v10);
    sub_B2C35C(&AutoOrganizationManager_ServantData_____TypeInfo, v11);
    byte_4185032 = 1;
  }
  v31 = enemyClassIds;
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  v14 = (AutoOrganizationManager_ServantData_array_array *)sub_B2C374(
                                                             AutoOrganizationManager_ServantData_____TypeInfo,
                                                             (unsigned int)v12->static_fields->DeckMemberMax);
  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  for ( i = v14->m_Items; ; ++i )
  {
    v26 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v15 >= v26->static_fields->DeckMemberMax )
      break;
    partyItem = (__int64)this->fields.partyItem;
    if ( !partyItem )
      goto LABEL_47;
    partyItem = (__int64)PartyListViewItem__GetMember((PartyListViewItem_o *)partyItem, v15, 0LL);
    if ( !partyItem )
      goto LABEL_47;
    v20 = partyItem;
    if ( *(_BYTE *)(partyItem + 128) )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo
        || !QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
              questRestrictionInfo,
              *(_DWORD *)(v20 + 332),
              0LL) )
      {
        goto LABEL_41;
      }
LABEL_16:
      if ( ++unitNum >= unitMax )
        return v14;
      goto LABEL_41;
    }
    if ( !PartyOrganizationListViewItem__get_IsEmpty((PartyOrganizationListViewItem_o *)partyItem, 0LL) )
      goto LABEL_41;
    partyItem = (__int64)this->fields.questRestrictionInfo;
    if ( partyItem )
    {
      partyItem = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
                    (QuestRestrictionInfo_o *)partyItem,
                    *(_DWORD *)(v20 + 332),
                    0LL);
      if ( (partyItem & 1) != 0 )
        goto LABEL_16;
    }
    if ( !v31 )
      goto LABEL_47;
    max_length = v31->max_length;
    if ( v16 >= (int)max_length )
      v23 = 0;
    else
      v23 = v16;
    if ( !v17 || v23 )
    {
      if ( v23 >= max_length )
        goto LABEL_48;
      v24 = v31->m_Items[v23 + 1];
      if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      }
      partyItem = (__int64)AutoOrganizationManager__SortClassRelation(
                             (System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *)dataList,
                             v24,
                             0LL);
      if ( !v14 )
LABEL_47:
        sub_B2C434(partyItem, v13);
      v25 = partyItem;
      if ( partyItem )
      {
        partyItem = sub_B2C41C(partyItem, v14->obj.klass->_1.element_class);
        if ( !partyItem )
          goto LABEL_49;
      }
      if ( v15 >= v14->max_length )
        goto LABEL_48;
      *i = (AutoOrganizationManager_ServantData_array *)v25;
      sub_B2C2F8(i, v25);
      if ( !v17 )
      {
        if ( v15 >= v14->max_length )
        {
LABEL_48:
          v28 = sub_B2C460(partyItem);
          sub_B2C400(v28, 0LL);
        }
        v17 = *i;
      }
    }
    else
    {
      if ( !v14 )
        goto LABEL_47;
      partyItem = sub_B2C41C(v17, v14->obj.klass->_1.element_class);
      if ( !partyItem )
      {
LABEL_49:
        v29 = sub_B2C454();
        sub_B2C400(v29, 0LL);
      }
      if ( v15 >= v14->max_length )
        goto LABEL_48;
      *i = v17;
      sub_B2C2F8(i, v17);
    }
    if ( ++unitNum >= unitMax )
      return v14;
    ++v16;
LABEL_41:
    ++v15;
  }
  return v14;
}


System_Int32_array *__fastcall PartyOrganizationRootComponent__GetEnemyClassIds(
        PartyOrganizationRootComponent_o *this,
        System_Int32_array *enemyClassIds,
        bool useAllEnemyClass,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w8
  __int64 v10; // x0

  v5 = enemyClassIds;
  if ( (byte_4185031 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, enemyClassIds);
    byte_4185031 = 1;
  }
  if ( !v5 || !*(_QWORD *)&v5->max_length )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !useAllEnemyClass )
  {
    v6 = sub_B2C374(int___TypeInfo, 1LL);
    if ( !v5->max_length )
      goto LABEL_12;
    if ( !v6 )
      sub_B2C434(0LL, v7);
    if ( !*(_DWORD *)(v6 + 24) )
    {
LABEL_12:
      v10 = sub_B2C460(v6);
      sub_B2C400(v10, 0LL);
    }
    v8 = v5->m_Items[1];
    v5 = (System_Int32_array *)v6;
    *(_DWORD *)(v6 + 32) = v8;
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PartyOrganizationRootComponent__GetImageLimitCountByLimitCount(
        PartyOrganizationRootComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0

  if ( (byte_418501A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v6);
    byte_418501A = 1;
  }
  if ( limitCount <= 10 )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( v7->static_fields->ServantLimitMax == limitCount )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        return BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
      }
    }
    else
    {
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      return ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL) + 1;
    }
  }
  return limitCount;
}


int32_t __fastcall PartyOrganizationRootComponent__GetMainMenuMode(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mainMenuMode;
}


void __fastcall PartyOrganizationRootComponent__Init(PartyOrganizationRootComponent_o *this, const MethodInfo *method)
{
  if ( !this->fields.state )
    this->fields.state = 1;
}


bool __fastcall PartyOrganizationRootComponent__InputBoostItem(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t state; // w9
  int32_t eventId; // w20
  System_Action_o *v16; // x21
  BattleSetupInfo_o *Instance; // x0
  struct BattleSetupInfo_o *v18; // x8
  struct BattleSetupInfo_o *v19; // x8
  struct EventUpValSetupInfo_o *setupInfo; // x8
  int32_t questId; // w20
  struct BattleSetupInfo_o *v22; // x8
  struct BattleSetupInfo_o *v23; // x8
  int32_t questPhase; // w22
  CommonUI_o *v25; // x21
  BoostFunctionUtility_CallbackFunc_o *v26; // x23
  BoostItemMenu_o *boostItemMenu; // x20
  EventUpValSetupInfo_o *v28; // x21
  BoostItemMenu_CallbackFunc_o *v29; // x22
  const MethodInfo *v30; // x1
  bool IsFriendChocolateQuest; // w23
  const MethodInfo *v32; // x1

  if ( (byte_4184FFB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BoostItemMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&BoostFunctionUtility_CallbackFunc_TypeInfo, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmInputBoostSupportItem__, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndInputBoostItemMenu__, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndQuestStartTutorial__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v9);
    sub_B2C35C(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v10);
    sub_B2C35C(&SoundManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, v12);
    byte_4184FFB = 1;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( battleSetupInfo )
  {
    state = this->fields.state;
    this->fields.state = 26;
    this->fields.showBackupState = state;
    eventId = battleSetupInfo->fields.eventId;
    v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndQuestStartTutorial__, 0LL);
    Instance = this->fields.battleSetupInfo;
    if ( Instance )
    {
      Instance = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(Instance, 0LL);
      v18 = this->fields.battleSetupInfo;
      if ( v18 )
      {
        EventTutorialMaster__CheckTutorial(eventId, 16, v16, (int32_t)Instance, v18->fields.questPhase, 0, 0, 0LL);
        v19 = this->fields.battleSetupInfo;
        this->fields.state = 27;
        if ( v19 )
        {
          v19->fields.itemId = 0;
          setupInfo = this->fields.setupInfo;
          if ( setupInfo )
          {
            questId = setupInfo->fields.questId;
          }
          else
          {
            Instance = this->fields.battleSetupInfo;
            if ( !Instance )
              goto LABEL_30;
            questId = BattleSetupInfo__TargetQuestId(Instance, 0LL);
          }
          if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
          }
          Instance = (BattleSetupInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
          v22 = this->fields.battleSetupInfo;
          if ( v22 && Instance )
          {
            if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
                   (BoostFunctionUtility_o *)Instance,
                   questId,
                   v22->fields.questPhase,
                   0LL) )
            {
              Instance = (BattleSetupInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v23 = this->fields.battleSetupInfo;
              if ( v23 )
              {
                questPhase = v23->fields.questPhase;
                v25 = (CommonUI_o *)Instance;
                v26 = (BoostFunctionUtility_CallbackFunc_o *)sub_B2C42C(BoostFunctionUtility_CallbackFunc_TypeInfo);
                BoostFunctionUtility_CallbackFunc___ctor(
                  v26,
                  (Il2CppObject *)this,
                  Method_PartyOrganizationRootComponent_EndConfirmInputBoostSupportItem__,
                  0LL);
                if ( v25 )
                {
                  CommonUI__OpenBoostSupportRequestMenu(v25, questId, questPhase, v26, 0, 0LL);
                  return 1;
                }
              }
            }
            else
            {
              boostItemMenu = this->fields.boostItemMenu;
              v28 = this->fields.setupInfo;
              v29 = (BoostItemMenu_CallbackFunc_o *)sub_B2C42C(BoostItemMenu_CallbackFunc_TypeInfo);
              BoostItemMenu_CallbackFunc___ctor(
                v29,
                (Il2CppObject *)this,
                Method_PartyOrganizationRootComponent_EndInputBoostItemMenu__,
                0LL);
              IsFriendChocolateQuest = PartyOrganizationRootComponent__IsFriendChocolateQuest(this, v30);
              Instance = (BattleSetupInfo_o *)PartyOrganizationRootComponent__IsAvailableFriendChocolate(this, v32);
              if ( boostItemMenu )
              {
                BoostItemMenu__Open(
                  boostItemMenu,
                  v28,
                  v29,
                  0LL,
                  IsFriendChocolateQuest,
                  (unsigned __int8)Instance & 1,
                  0LL);
                return 1;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_B2C434(Instance, method);
  }
  if ( this->fields.tutorialMode != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
  }
  Instance = (BattleSetupInfo_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_30;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_8717/*"MENU_DECIDE"*/, 0LL);
  return 1;
}


bool __fastcall PartyOrganizationRootComponent__InputDeckName(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct PartyListViewItem_o *basePartyItem; // x0
  int32_t state; // w8
  DeckNameInputMenu_o *deckNameInputMenu; // x20
  System_String_o *deckName; // x21
  System_String_o *DefaultDeckName; // x22
  DeckNameInputMenu_CallbackFunc_o *v10; // x23
  PlayMakerFSM_o *myFSM; // x0
  __int64 v12; // x1

  if ( (byte_4184FF6 & 1) == 0 )
  {
    sub_B2C35C(&DeckNameInputMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndInputDeckNameMenu__, v3);
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v4);
    byte_4184FF6 = 1;
  }
  basePartyItem = this->fields.basePartyItem;
  if ( basePartyItem )
  {
    state = this->fields.state;
    this->fields.state = 24;
    deckNameInputMenu = this->fields.deckNameInputMenu;
    this->fields.showBackupState = state;
    deckName = basePartyItem->fields.deckName;
    DefaultDeckName = PartyListViewItem__get_DefaultDeckName(basePartyItem, 0LL);
    v10 = (DeckNameInputMenu_CallbackFunc_o *)sub_B2C42C(DeckNameInputMenu_CallbackFunc_TypeInfo);
    DeckNameInputMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent_EndInputDeckNameMenu__,
      0LL);
    if ( deckNameInputMenu )
    {
      DeckNameInputMenu__Open(deckNameInputMenu, deckName, DefaultDeckName, v10, 0LL);
      return 1;
    }
LABEL_8:
    sub_B2C434(myFSM, v12);
  }
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, method);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
  return 0;
}


bool __fastcall PartyOrganizationRootComponent__IsAvailableFriendChocolate(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FollowerInfo_o *followerInfo; // x0
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  EventDetailEntity_o *v12; // x20
  struct BattleSetupInfo_o *v13; // x8
  struct FollowerInfo_o *v14; // x9
  UsedCount_o *UsedCount; // x0
  UsedCount_o *v16; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185057 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&TitleInfoControl_TypeInfo, v7);
    byte_4185057 = 1;
  }
  entity = 0LL;
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    if ( !this->fields.battleSetupInfo || FollowerInfo__get_IsNpc(followerInfo, 0LL) )
    {
LABEL_6:
      LOBYTE(followerInfo) = 0;
      return (char)followerInfo;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
    entity = 0LL;
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo || !Instance )
      goto LABEL_26;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
           &entity,
           battleSetupInfo->fields.eventId,
           (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      v12 = (EventDetailEntity_o *)entity;
      if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      }
      if ( !TitleInfoControl__IsEnableEventShopButton_19598560(v12, 0LL) )
        goto LABEL_6;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___),
          (v13 = this->fields.battleSetupInfo) == 0LL)
      || (v14 = this->fields.followerInfo) == 0LL
      || !Instance )
    {
LABEL_26:
      sub_B2C434(Instance, v10);
    }
    UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                  (EventBoostItemUsedMaster_o *)Instance,
                  v13->fields.eventId,
                  v14->fields.userId,
                  0LL);
    if ( UsedCount )
    {
      v16 = UsedCount;
      followerInfo = (FollowerInfo_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        followerInfo = (FollowerInfo_o *)BalanceConfig_TypeInfo;
      }
      LOBYTE(followerInfo) = *(_DWORD *)(followerInfo[1].fields.tutorial1 + 716) - v16->fields.count > 0;
    }
    else
    {
      LOBYTE(followerInfo) = 1;
    }
  }
  return (char)followerInfo;
}


bool __fastcall PartyOrganizationRootComponent__IsEventDeck(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo && questRestrictionInfo->fields.eventDeckNum > 0;
}


bool __fastcall PartyOrganizationRootComponent__IsFriendChocolateQuest(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185056 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185056 = 1;
  }
  entity = 0LL;
  if ( !this->fields.battleSetupInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        entity = 0LL,
        (battleSetupInfo = this->fields.battleSetupInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_B2C434(Instance, v6);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          battleSetupInfo->fields.eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_12;
  return EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x1000000000LL, 0LL);
}


bool __fastcall PartyOrganizationRootComponent__IsGetFriendPoint(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleSetupInfo_o *battleSetupInfo; // x0
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct BattleSetupInfo_o *v8; // x8
  int32_t questPhase; // w21
  int32_t v10; // w20
  QuestPhaseEntity_o *Entity; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( (byte_4184FCC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcFollowerMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4184FCC = 1;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( battleSetupInfo )
  {
    Instance = (DataManager_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    v8 = this->fields.battleSetupInfo;
    if ( !v8 )
      goto LABEL_20;
    questPhase = v8->fields.questPhase;
    v10 = (int)Instance;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_20;
    Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, v10, questPhase, 0LL);
    if ( !Entity || !Entity->fields.isNpcOnly )
      goto LABEL_13;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___)) == 0LL
      || (Instance = (DataManager_o *)NpcFollowerMaster__GetQuestFollowerList(
                                        (NpcFollowerMaster_o *)Instance,
                                        v10,
                                        questPhase,
                                        0LL)) == 0LL )
    {
LABEL_20:
      sub_B2C434(Instance, v7);
    }
    if ( !Instance->fields.datalist )
      return 0;
  }
LABEL_13:
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 1;
  if ( questRestrictionInfo->fields.isNoSupportBattle
    || questRestrictionInfo->fields.isFixedMyServantSingle
    || questRestrictionInfo->fields.isSupportOnlyForceBattle )
  {
    return 0;
  }
  return !questRestrictionInfo->fields.isNpcOnlyBattle;
}


bool __fastcall PartyOrganizationRootComponent__IsNotSelectSupportAfterScript(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x9
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool result; // w0

  battleSetupInfo = this->fields.battleSetupInfo;
  result = 0;
  if ( battleSetupInfo )
  {
    questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      if ( battleSetupInfo->fields.isScriptBeforePartySelect
        && (questRestrictionInfo->fields.isNpcOnlyBattle
         || questRestrictionInfo->fields.isFixedMyServantSingle
         || questRestrictionInfo->fields.isNotTransitionSupportList
         || questRestrictionInfo->fields.isNoSupportBattle) )
      {
        return 1;
      }
    }
  }
  return result;
}


bool __fastcall PartyOrganizationRootComponent__IsSetAllWave(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x19
  __int64 v3; // x1
  struct PartyListViewItem_array *baseDeckItemList; // x21
  __int64 v5; // x8
  unsigned __int64 v6; // x22
  PartyListViewItem_o *v7; // x19
  int32_t v8; // w20
  struct PartyOrganizationConfirmDeck2Menu_o *operationConfirmDeck2Menu; // x8
  __int128 v10; // q0
  __int64 v11; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-50h]

  v2 = this;
  if ( (byte_4184FD6 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    byte_4184FD6 = 1;
  }
  baseDeckItemList = v2->fields.baseDeckItemList;
  if ( !baseDeckItemList )
LABEL_25:
    sub_B2C434(this, method);
  v5 = *(_QWORD *)&baseDeckItemList->max_length;
  if ( (int)v5 < 1 )
  {
    LOBYTE(this) = 1;
  }
  else
  {
    v6 = 0LL;
    while ( 2 )
    {
      if ( v6 >= (unsigned int)v5 )
      {
        v11 = sub_B2C460(this);
        sub_B2C400(v11, 0LL);
      }
      v7 = baseDeckItemList->m_Items[v6];
      v8 = 0;
      while ( 1 )
      {
        this = (PartyOrganizationRootComponent_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (PartyOrganizationRootComponent_o *)BalanceConfig_TypeInfo;
        }
        if ( v8 >= SLODWORD(this->fields.partyOrganizationConfirmCopyMenu->fields.cancelButton) )
          break;
        if ( !v7 )
          goto LABEL_25;
        this = (PartyOrganizationRootComponent_o *)PartyListViewItem__GetMember(v7, v8, 0LL);
        if ( !this )
          goto LABEL_25;
        operationConfirmDeck2Menu = this->fields.operationConfirmDeck2Menu;
        if ( operationConfirmDeck2Menu )
        {
          v10 = *(_OWORD *)&operationConfirmDeck2Menu->fields.basePanelList;
          *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&operationConfirmDeck2Menu->fields.m_CachedPtr;
          *(_OWORD *)&v14.fields.fakeValue = v10;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v13 = v14;
          ++v8;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v13, 0LL) >= 1 )
            continue;
        }
        LOBYTE(this) = 0;
        return (char)this;
      }
      LODWORD(v5) = baseDeckItemList->max_length;
      ++v6;
      this = (PartyOrganizationRootComponent_o *)(&dword_0 + 1);
      if ( (__int64)v6 < (int)v5 )
        continue;
      break;
    }
  }
  return (char)this;
}


bool __fastcall PartyOrganizationRootComponent__MasterFormationScene(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct PartyListViewItem_o *basePartyItem; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x9
  PartyListMenu_o *menuKind; // x0
  struct PartyListViewItem_o *v10; // x8
  int64_t userEquipId; // x20
  SceneJumpInfo_o *v12; // x21
  Il2CppObject *masterFormationInfo; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool v15; // w1
  struct PartyListViewItem_o *v16; // x8
  int64_t id; // x20
  char v18; // w23
  struct PartyListViewItem_o *v19; // x8
  int64_t v20; // x24
  int32_t v21; // w22
  SceneJumpInfo_o *v22; // x0
  __int64 *v23; // x8
  QuestRestrictionInfo_o *v24; // x0
  struct BattleSetupInfo_o *v25; // x8

  if ( (byte_4185016 & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_5205/*"DeckId"*/, v4);
    sub_B2C35C(&StringLiteral_6155/*"EventDeckId"*/, v5);
    sub_B2C35C(&StringLiteral_15097/*"UserEquipId"*/, v6);
    byte_4185016 = 1;
  }
  basePartyItem = this->fields.basePartyItem;
  this->fields.state = 29;
  if ( basePartyItem )
  {
    if ( !this->fields.mainMenuMode )
    {
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( battleSetupInfo )
        battleSetupInfo->fields.deckId = basePartyItem->fields.id;
    }
    menuKind = (PartyListMenu_o *)(unsigned int)this->fields.menuKind;
    if ( (_DWORD)menuKind == 1 )
    {
      v10 = this->fields.basePartyItem;
      if ( !v10 )
        goto LABEL_32;
      userEquipId = v10->fields.userEquipId;
      v12 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17293196(v12, (System_String_o *)StringLiteral_15097/*"UserEquipId"*/, userEquipId, 0LL);
    }
    else
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        v15 = questRestrictionInfo->fields.eventDeckNum > 0;
      else
        v15 = 0;
      menuKind = (PartyListMenu_o *)PartyListViewItem__IsSpecificMenuKind_31930304((int32_t)menuKind, v15, 0LL);
      v16 = this->fields.basePartyItem;
      if ( !v16 )
        goto LABEL_32;
      id = v16->fields.id;
      v18 = (char)menuKind;
      menuKind = (PartyListMenu_o *)PartyListViewItem__get_DeckNum(this->fields.basePartyItem, 0LL);
      v19 = this->fields.basePartyItem;
      if ( !v19 )
        goto LABEL_32;
      v20 = v19->fields.userEquipId;
      v21 = (int)menuKind;
      v22 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      v12 = v22;
      if ( (v18 & 1) != 0 )
        v23 = &StringLiteral_6155/*"EventDeckId"*/;
      else
        v23 = &StringLiteral_5205/*"DeckId"*/;
      SceneJumpInfo___ctor_17293344(v22, (System_String_o *)*v23, id, v21, v20, 0LL);
    }
    this->fields.masterFormationInfo = v12;
    sub_B2C2F8(&this->fields.masterFormationInfo, v12);
    if ( this->fields.battleSetupInfo )
    {
      v24 = this->fields.questRestrictionInfo;
      if ( v24 )
      {
        menuKind = (PartyListMenu_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction(v24, 0LL);
        if ( ((unsigned __int8)menuKind & 1) != 0 )
        {
          v25 = this->fields.battleSetupInfo;
          if ( !v25 )
            goto LABEL_32;
          v25->fields.followerId = 0LL;
        }
      }
    }
    if ( this->fields.menuKind == 9 )
    {
      menuKind = this->fields.partyListMenu;
      if ( !menuKind )
        goto LABEL_32;
      PartyListMenu__SetCenterItem(menuKind, this->fields.selectPartyNum, 0, 0LL);
    }
    menuKind = (PartyListMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( menuKind )
    {
      masterFormationInfo = (Il2CppObject *)this->fields.masterFormationInfo;
      goto LABEL_31;
    }
LABEL_32:
    sub_B2C434(menuKind, method);
  }
  menuKind = (PartyListMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !menuKind )
    goto LABEL_32;
  masterFormationInfo = 0LL;
LABEL_31:
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)menuKind, 44, 1, masterFormationInfo, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__MoveWaveBattleTop(
        PartyOrganizationRootComponent_o *this,
        bool isBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  PartyListViewItem_o *waveBattlePartyOrganizationMenu; // x0
  const MethodInfo *v12; // x1
  struct PartyListViewItem_array *baseDeckItemList; // x8
  __int64 v14; // x20
  int max_length; // w10
  il2cpp_array_size_t v16; // w9
  struct PartyListViewItem_array *waveBattleBaseDeckItemList; // x10
  UserEventDeckEntity_o *UserEventDeck; // x20
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t eventId; // w22
  EventDeckSetupRequest_o *v22; // x21
  struct BattleSetupInfo_o *v23; // x8
  __int64 v24; // x0

  if ( (byte_4185027 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_EventDeckSetupRequest___, isBack);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestWaveBattleDeckEdit__, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_MoveWaveBattleTop__, v7);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4185027 = 1;
  }
  v9 = Method_PartyOrganizationRootComponent_MoveWaveBattleTop__;
  if ( (*((_BYTE *)Method_PartyOrganizationRootComponent_MoveWaveBattleTop__ + 75) & 2) != 0 )
    v9 = (_QWORD *)sub_B2C364(Method_PartyOrganizationRootComponent_MoveWaveBattleTop__);
  v10 = (System_Reflection_MethodBase_o *)sub_B2C340(v9, v9[3]);
  OverwriteAssetSoundName__PlaySystemSe(v10, isBack, 0LL);
  baseDeckItemList = this->fields.baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_24;
  v14 = 4LL;
  while ( 1 )
  {
    max_length = baseDeckItemList->max_length;
    v16 = v14 - 4;
    if ( (int)v14 - 4 >= max_length )
    {
      PartyOrganizationRootComponent__DispWaveBattleTop(this, v12);
      return;
    }
    if ( v16 >= max_length )
      goto LABEL_25;
    waveBattleBaseDeckItemList = this->fields.waveBattleBaseDeckItemList;
    if ( !waveBattleBaseDeckItemList )
      goto LABEL_24;
    if ( v16 >= waveBattleBaseDeckItemList->max_length )
    {
LABEL_25:
      v24 = sub_B2C460(waveBattlePartyOrganizationMenu);
      sub_B2C400(v24, 0LL);
    }
    waveBattlePartyOrganizationMenu = (PartyListViewItem_o *)*((_QWORD *)&baseDeckItemList->obj.klass + v14);
    if ( !waveBattlePartyOrganizationMenu )
      goto LABEL_24;
    waveBattlePartyOrganizationMenu = (PartyListViewItem_o *)PartyListViewItem__CompMember(
                                                               waveBattlePartyOrganizationMenu,
                                                               *((PartyListViewItem_o **)&waveBattleBaseDeckItemList->obj.klass
                                                               + v14),
                                                               0LL);
    if ( ((unsigned __int8)waveBattlePartyOrganizationMenu & 1) == 0 )
      break;
    baseDeckItemList = this->fields.baseDeckItemList;
    ++v14;
    if ( !baseDeckItemList )
      goto LABEL_24;
  }
  waveBattlePartyOrganizationMenu = (PartyListViewItem_o *)this->fields.waveBattlePartyOrganizationMenu;
  if ( !waveBattlePartyOrganizationMenu )
    goto LABEL_24;
  UserEventDeck = WaveBattlePartyOrganizationMenu__GetUserEventDeck(
                    (WaveBattlePartyOrganizationMenu_o *)waveBattlePartyOrganizationMenu,
                    this->fields.baseDeckItemList,
                    0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndRequestWaveBattleDeckEdit__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  waveBattlePartyOrganizationMenu = (PartyListViewItem_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                             v19,
                                                             (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventDeckSetupRequest___);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo
    || (eventId = battleSetupInfo->fields.eventId,
        v22 = (EventDeckSetupRequest_o *)waveBattlePartyOrganizationMenu,
        waveBattlePartyOrganizationMenu = (PartyListViewItem_o *)BattleSetupInfo__TargetQuestId(
                                                                   this->fields.battleSetupInfo,
                                                                   0LL),
        (v23 = this->fields.battleSetupInfo) == 0LL)
    || !v22 )
  {
LABEL_24:
    sub_B2C434(waveBattlePartyOrganizationMenu, v12);
  }
  EventDeckSetupRequest__beginRequest(
    v22,
    UserEventDeck,
    eventId,
    (int32_t)waveBattlePartyOrganizationMenu,
    v23->fields.questPhase,
    0LL);
}


int32_t __fastcall PartyOrganizationRootComponent__NormalAndEquipAutoOrganization(
        PartyOrganizationRootComponent_o *this,
        AutoOrganizationManager_ServantData_array_array *dataLists,
        System_Collections_Generic_List_long__o *equipList,
        int32_t costNum,
        int32_t deckNum,
        const MethodInfo *method)
{
  AutoOrganizationManager_ServantData_array_array *v7; // x22
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int v17; // w20
  __int64 v18; // x23
  AutoOrganizationManager_ServantData_array *v19; // x26
  PartyListViewItem_o *partyItem; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x5
  PartyListViewItem_o *v23; // x27
  __int64 v24; // x21
  __int64 v25; // x24
  int32_t v26; // w2
  int age; // w8
  int deckName_high; // w9
  int v29; // w27
  PartyServantListViewItem_o *AutoOrganizationServant; // x0
  PartyServantListViewItem_o *v31; // x26
  unsigned __int64 v32; // x25
  __int64 v34; // x0
  AutoOrganizationManager_ServantData_array_array *v35; // [xsp+8h] [xbp-88h]
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // [xsp+10h] [xbp-80h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // [xsp+20h] [xbp-70h]
  WarEntity_o *v39; // [xsp+30h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v7 = dataLists;
  if ( (byte_4185035 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, dataLists);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    byte_4185035 = 1;
  }
  v39 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v17 = 0;
  v18 = 4LL;
  v35 = v7;
  while ( 1 )
  {
    partyItem = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    v32 = v18 - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      partyItem = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v32 >= SHIDWORD(partyItem[1].klass->_1.methods) )
      return costNum;
    if ( !v7 )
      goto LABEL_41;
    if ( v32 >= v7->max_length )
    {
      v34 = sub_B2C460(partyItem);
      sub_B2C400(v34, 0LL);
    }
    v19 = (AutoOrganizationManager_ServantData_array *)*((_QWORD *)&v7->obj.klass + v18);
    if ( v19 )
    {
      partyItem = this->fields.partyItem;
      if ( !partyItem )
        goto LABEL_41;
      partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, v32, 0LL);
      if ( !equipList )
        goto LABEL_41;
      v23 = partyItem;
      if ( v32 >= (unsigned int)equipList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( *((__int64 *)&equipList->fields._items->obj.klass + v18) < 1 )
        goto LABEL_27;
      if ( v32 >= (unsigned int)equipList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_41;
      partyItem = (PartyListViewItem_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                           Master_WarQuestSelectionMaster,
                                           &entity,
                                           *((_QWORD *)&equipList->fields._items->obj.klass + v18),
                                           (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)partyItem & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_41;
        v25 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v24 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v41.fields.currentCryptoKey = v25;
        *(_QWORD *)&v41.fields.fakeValue = v24;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v41, 0LL);
        partyItem = (PartyListViewItem_o *)v36;
        if ( !v36 )
          goto LABEL_41;
        partyItem = (PartyListViewItem_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             v36,
                                             &v39,
                                             v26,
                                             (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        v7 = v35;
        if ( ((unsigned __int8)partyItem & 1) != 0 )
        {
          if ( !v39 )
            goto LABEL_41;
          age = (int)v39[1].fields.age;
        }
        else
        {
          age = 0;
        }
        if ( !v23 )
LABEL_41:
          sub_B2C434(partyItem, v16);
      }
      else
      {
LABEL_27:
        age = 0;
        if ( !v23 )
          goto LABEL_41;
      }
      deckName_high = HIDWORD(v23[1].fields.deckName);
      v29 = v17;
      v17 += age;
      AutoOrganizationServant = PartyOrganizationRootComponent__GetAutoOrganizationServant(
                                  this,
                                  v19,
                                  v21,
                                  deckName_high - 1,
                                  costNum - v17,
                                  v22);
      if ( AutoOrganizationServant )
      {
        v31 = AutoOrganizationServant;
        partyItem = this->fields.partyItem;
        if ( !partyItem )
          goto LABEL_41;
        PartyListViewItem__SetMember(partyItem, v32, v31, 0LL);
        costNum -= PartyServantListViewItem__get_Cost(v31, 0LL);
      }
      else
      {
        v17 = v29;
      }
    }
    ++v18;
  }
}


int32_t __fastcall PartyOrganizationRootComponent__NormalAutoOrganization(
        PartyOrganizationRootComponent_o *this,
        AutoOrganizationManager_ServantData_array_array *dataLists,
        int32_t costNum,
        int32_t remainCost,
        int32_t deckNum,
        const MethodInfo *method)
{
  unsigned __int64 i; // x23
  AutoOrganizationManager_ServantData_array *v11; // x24
  PartyListViewItem_o *partyItem; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x5
  int32_t v15; // w4
  PartyServantListViewItem_o *AutoOrganizationServant; // x0
  PartyServantListViewItem_o *v17; // x24
  __int64 v19; // x0

  if ( (byte_4185033 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, dataLists);
    byte_4185033 = 1;
  }
  for ( i = 0LL; ; ++i )
  {
    partyItem = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      partyItem = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= SHIDWORD(partyItem[1].klass->_1.methods) )
      break;
    if ( !dataLists )
      goto LABEL_22;
    if ( i >= dataLists->max_length )
    {
      v19 = sub_B2C460(partyItem);
      sub_B2C400(v19, 0LL);
    }
    v11 = dataLists->m_Items[i];
    if ( v11 )
    {
      partyItem = this->fields.partyItem;
      if ( !partyItem || (partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, i, 0LL)) == 0LL )
LABEL_22:
        sub_B2C434(partyItem, dataLists);
      if ( remainCost >= 0 )
        v15 = remainCost;
      else
        v15 = costNum;
      AutoOrganizationServant = PartyOrganizationRootComponent__GetAutoOrganizationServant(
                                  this,
                                  v11,
                                  v13,
                                  HIDWORD(partyItem[1].fields.deckName) - 1,
                                  v15,
                                  v14);
      if ( AutoOrganizationServant )
      {
        v17 = AutoOrganizationServant;
        partyItem = this->fields.partyItem;
        if ( !partyItem )
          goto LABEL_22;
        PartyListViewItem__SetMember(partyItem, i, v17, 0LL);
        costNum -= PartyServantListViewItem__get_Cost(v17, 0LL);
        if ( (remainCost & 0x80000000) == 0 )
          remainCost -= PartyServantListViewItem__get_Cost(v17, 0LL);
      }
    }
  }
  return costNum;
}


void __fastcall PartyOrganizationRootComponent__OnClickBack(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  PartyServantSelectMenu_o *partyServantSelectMenu; // x0
  int32_t state; // w9
  CommonUI_o *Instance; // x20
  System_Action_o *v29; // x21
  UnityEngine_Object_o *waveBattlePartyOrganizationMenu; // x20
  const MethodInfo *v31; // x2
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  TerminalPramsManager_c *v34; // x0
  __int64 *v35; // x8
  __int64 *v36; // x8
  PartyServantSelectMenu_o *v37; // x20
  System_Action_o *v38; // x21
  PartyServantSelectMenu_o *v39; // x20
  System_Action_o *v40; // x21
  System_String_o *v41; // x20
  System_String_o *v42; // x21
  CommonUI_o *v43; // x22
  System_String_o *v44; // x23
  System_String_o *v45; // x24
  CommonConfirmDialog_ClickDelegate_o *v46; // x25

  if ( (byte_4185028 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndCloseTutorialArrowChange__, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnClickBack__, v7);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__OnClickBack_b__200_0__, v8);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__OnClickBack_b__200_1__, v9);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__OnClickBack_b__200_2__, v10);
    sub_B2C35C(&PartyOrganizationRootComponent_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v14);
    sub_B2C35C(&SoundManager_TypeInfo, v15);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_6375/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/, v17);
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, v18);
    sub_B2C35C(&StringLiteral_6374/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/, v19);
    sub_B2C35C(&StringLiteral_9357/*"NO_MODIFY"*/, v20);
    sub_B2C35C(&StringLiteral_6373/*"FOLLOWER_SELECT_BACK_TITLE"*/, v21);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v22);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v23);
    sub_B2C35C(&StringLiteral_3045/*"CLICK_BACK_QUEST"*/, v24);
    sub_B2C35C(&StringLiteral_1/*""*/, v25);
    byte_4185028 = 1;
  }
  partyServantSelectMenu = this->fields.partyServantSelectMenu;
  if ( !partyServantSelectMenu )
    goto LABEL_87;
  PartyServantSelectMenu__ClearScrollValue(partyServantSelectMenu, 0LL);
  state = this->fields.state;
  switch ( state )
  {
    case 3:
    case 6:
      goto LABEL_12;
    case 4:
    case 5:
    case 7:
    case 8:
    case 10:
    case 11:
    case 13:
    case 14:
    case 16:
      return;
    case 9:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      if ( this->fields.tutorialState == 5 )
      {
        this->fields.state = 10;
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v29,
          (Il2CppObject *)this,
          Method_PartyOrganizationRootComponent_EndCloseTutorialArrowChange__,
          0LL);
        if ( Instance )
        {
          CommonUI__CloseTutorialArrowMark(Instance, v29, 0LL);
          return;
        }
LABEL_87:
        sub_B2C434(partyServantSelectMenu, method);
      }
      if ( this->fields.menuKind == 8 )
      {
LABEL_37:
        partyServantSelectMenu = (PartyServantSelectMenu_o *)this->fields.myFSM;
        if ( !partyServantSelectMenu )
          goto LABEL_87;
        v36 = &StringLiteral_3043/*"CLICK_BACK"*/;
      }
      else
      {
        partyServantSelectMenu = (PartyServantSelectMenu_o *)this->fields.myFSM;
        this->fields.menuMode = this->fields.mainMenuMode;
        if ( !partyServantSelectMenu )
          goto LABEL_87;
        v36 = &StringLiteral_3045/*"CLICK_BACK_QUEST"*/;
      }
LABEL_73:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)partyServantSelectMenu, (System_String_o *)*v36, 0LL);
      return;
    case 12:
      partyServantSelectMenu = (PartyServantSelectMenu_o *)this->fields.partyOrganizationChangeMenu;
      if ( !partyServantSelectMenu )
        goto LABEL_87;
      PartyOrganizationChangeMenu__OnClickCancel((PartyOrganizationChangeMenu_o *)partyServantSelectMenu, 0LL);
      return;
    case 15:
      partyServantSelectMenu = (PartyServantSelectMenu_o *)this->fields.partyOrganizationMenu;
      if ( !partyServantSelectMenu )
        goto LABEL_87;
      PartyOrganizationMenu__OnClickCancel((PartyOrganizationMenu_o *)partyServantSelectMenu, method);
      return;
    case 17:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v37 = this->fields.partyServantSelectMenu;
      v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent__OnClickBack_b__200_0__,
        0LL);
      if ( !v37 )
        goto LABEL_87;
      PartyServantSelectMenu__Close_32396636(v37, v38, 0LL);
      goto LABEL_64;
    case 18:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v39 = this->fields.partyServantSelectMenu;
      v40 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent__OnClickBack_b__200_1__,
        0LL);
      if ( !v39 )
        goto LABEL_87;
      PartyServantSelectMenu__Close_32396636(v39, v40, 0LL);
      goto LABEL_58;
    case 19:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      partyServantSelectMenu = (PartyServantSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !partyServantSelectMenu )
        goto LABEL_87;
      CommonUI__CloseEquipGraphListMenu((CommonUI_o *)partyServantSelectMenu, 0LL, 0LL);
LABEL_64:
      partyServantSelectMenu = (PartyServantSelectMenu_o *)this->fields.partyItem;
      this->fields.state = 12;
      if ( !partyServantSelectMenu )
        goto LABEL_87;
      if ( !PartyListViewItem__CompMember(
              (PartyListViewItem_o *)partyServantSelectMenu,
              this->fields.basePartyItem,
              0LL) )
      {
LABEL_68:
        PartyOrganizationRootComponent__RecoverInputShowMenu(this, method);
        return;
      }
      partyServantSelectMenu = (PartyServantSelectMenu_o *)this->fields.myFSM;
      this->fields.menuMode = 9;
      if ( !partyServantSelectMenu )
        goto LABEL_87;
      v36 = &StringLiteral_9357/*"NO_MODIFY"*/;
      goto LABEL_73;
    case 20:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      partyServantSelectMenu = (PartyServantSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !partyServantSelectMenu )
        goto LABEL_87;
      CommonUI__CloseEquipGraphListMenu((CommonUI_o *)partyServantSelectMenu, 0LL, 0LL);
LABEL_58:
      this->fields.state = 15;
      goto LABEL_68;
    default:
      if ( state != 32 )
        return;
LABEL_12:
      waveBattlePartyOrganizationMenu = (UnityEngine_Object_o *)this->fields.waveBattlePartyOrganizationMenu;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(waveBattlePartyOrganizationMenu, 0LL, 0LL) )
        goto LABEL_18;
      partyServantSelectMenu = (PartyServantSelectMenu_o *)this->fields.waveBattlePartyOrganizationMenu;
      if ( !partyServantSelectMenu )
        goto LABEL_87;
      if ( !WaveBattlePartyOrganizationMenu__IsDisplay((WaveBattlePartyOrganizationMenu_o *)partyServantSelectMenu, 0LL) )
      {
        PartyOrganizationRootComponent__MoveWaveBattleTop(this, 1, v31);
        return;
      }
LABEL_18:
      if ( PartyOrganizationRootComponent__IsNotSelectSupportAfterScript(this, method) )
      {
        v32 = Method_PartyOrganizationRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_PartyOrganizationRootComponent_OnClickBack__ + 75) & 2) != 0 )
          v32 = (_QWORD *)sub_B2C364(Method_PartyOrganizationRootComponent_OnClickBack__);
        v33 = (System_Reflection_MethodBase_o *)sub_B2C340(v32, v32[3]);
        OverwriteAssetSoundName__PlaySystemSe(v33, 1, 0LL);
        v34 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v34 = TerminalPramsManager_TypeInfo;
        }
        if ( v34->static_fields->lastPlayQuestConsumeAp <= 0 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v35 = &StringLiteral_6375/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v35 = &StringLiteral_6374/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        }
        v41 = LocalizationManager__Get((System_String_o *)*v35, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_6373/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v43 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
        v46 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v46,
          (Il2CppObject *)this,
          Method_PartyOrganizationRootComponent__OnClickBack_b__200_2__,
          0LL);
        partyServantSelectMenu = (PartyServantSelectMenu_o *)PartyOrganizationRootComponent_TypeInfo;
        if ( (BYTE3(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent_TypeInfo);
          partyServantSelectMenu = (PartyServantSelectMenu_o *)PartyOrganizationRootComponent_TypeInfo;
        }
        if ( !v43 )
          goto LABEL_87;
        CommonUI__OpenConfirmDecideDlg(
          v43,
          v42,
          v41,
          v44,
          v45,
          v46,
          HIDWORD(partyServantSelectMenu->fields.pushTabButton->klass),
          (float)SLODWORD(partyServantSelectMenu->fields.pushTabButton->monitor),
          (float)SHIDWORD(partyServantSelectMenu->fields.pushTabButton->monitor),
          0,
          0,
          0,
          240,
          0,
          0LL);
        return;
      }
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      partyServantSelectMenu = (PartyServantSelectMenu_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !partyServantSelectMenu )
        goto LABEL_87;
      *(_DWORD *)&partyServantSelectMenu->fields.isBasePosition = 0;
      goto LABEL_37;
  }
}


void __fastcall PartyOrganizationRootComponent__OnMoveEnd(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t state; // w8
  _BOOL4 isNeedSetBaseDeck; // w8
  _DWORD *myFSM; // x0
  struct PartyListMenu_o *v22; // x8
  int32_t tutorialMode; // w8
  PartyListMenu_o *v24; // x25
  int32_t v25; // w24
  PartyListViewItem_array *v26; // x23
  int32_t v27; // w22
  EventUpValSetupInfo_o *v28; // x21
  QuestRestrictionInfo_o *v29; // x20
  PartyListMenu_CallbackFunc_o *v30; // x26
  int32_t tutorialState; // w8
  int32_t v32; // w8
  int32_t selectPartyMemberNum; // w20
  PartyOrganizationMenu_o *partyOrganizationMenu; // x25
  int32_t v35; // w24
  PartyListViewItem_o *v36; // x22
  PartyListViewItem_o *v37; // x23
  EventUpValSetupInfo_o *v38; // x21
  QuestRestrictionInfo_o *v39; // x20
  PartyOrganizationMenu_CallbackFunc_o *v40; // x26
  System_Action_o *v41; // x27
  const MethodInfo *v42; // x3
  int32_t v43; // w8
  int32_t v44; // w2
  int32_t v45; // w1
  PartyListMenu_o *v46; // x24
  int32_t v47; // w25
  PartyListViewItem_array *v48; // x20
  int32_t v49; // w21
  EventUpValSetupInfo_o *v50; // x22
  QuestRestrictionInfo_o *v51; // x23
  PartyListMenu_CallbackFunc_o *v52; // x26
  System_Action_o *v53; // x27
  PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x26
  int32_t v55; // w27
  PartyListViewItem_o *basePartyItem; // x24
  PartyListViewItem_o *partyItem; // x25
  EventUpValSetupInfo_o *v58; // x22
  QuestRestrictionInfo_o *v59; // x23
  PartyOrganizationChangeMenu_CallbackFunc_o *v60; // x28
  System_Action_o *v61; // x21
  PartyListMenu_o *v62; // x24
  int32_t v63; // w25
  PartyListViewItem_array *v64; // x20
  int32_t v65; // w21
  EventUpValSetupInfo_o *v66; // x22
  QuestRestrictionInfo_o *v67; // x23
  PartyListMenu_CallbackFunc_o *v68; // x26
  CommonUI_o *Instance; // x20
  System_String_o *v70; // x21
  System_Action_o *v71; // x22
  _BOOL4 v72; // w28
  PartyListMenu_o *partyListMenu; // x24
  int32_t menuKind; // w25
  PartyListViewItem_array *baseDeckItemList; // x20
  int32_t selectPartyNum; // w21
  EventUpValSetupInfo_o *setupInfo; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  PartyListMenu_CallbackFunc_o *v79; // x26
  System_Action_o *v80; // x27
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x4
  CommonUI_o *v83; // x20
  __int64 *v84; // x8
  System_String_o *v85; // x21
  System_Action_o *v86; // x22
  const MethodInfo *v87; // [xsp+10h] [xbp-80h]
  int32_t changePartyMode; // [xsp+3Ch] [xbp-54h]

  if ( (byte_418501F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&PartyListMenu_CallbackFunc_TypeInfo, v4);
    sub_B2C35C(&PartyOrganizationMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndOpenMenu__, v8);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndOpenPartyList__, v9);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndTutorialFollowerGuideNotification1__, v10);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectPartyList__, v11);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectedOrganizationChange__, v12);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectedOrganizationSwap__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B2C35C(&StringLiteral_5476/*"END_ACTION"*/, v16);
    sub_B2C35C(&StringLiteral_13512/*"TUTORIAL_MESSAGE_FOLLOWER_ORGANIZATION2"*/, v17);
    sub_B2C35C(&StringLiteral_13511/*"TUTORIAL_MESSAGE_FOLLOWER_ORGANIZATION1"*/, v18);
    byte_418501F = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 2:
      *(_QWORD *)&this->fields.menuMode = 0x300000000LL;
      if ( this->fields.tutorialState != 1 )
        goto LABEL_60;
      tutorialMode = this->fields.tutorialMode;
      this->fields.state = 2;
      if ( tutorialMode == 3 )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v70 = LocalizationManager__Get((System_String_o *)StringLiteral_13512/*"TUTORIAL_MESSAGE_FOLLOWER_ORGANIZATION2"*/, 0LL);
        v71 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v71,
          (Il2CppObject *)this,
          Method_PartyOrganizationRootComponent_EndTutorialFollowerGuideNotification1__,
          0LL);
        if ( !Instance )
          goto LABEL_78;
        CommonUI__OpenTutorialNotificationDialog(Instance, v70, -1, v71, 0LL);
      }
      else if ( tutorialMode == 2 )
      {
        PartyOrganizationRootComponent__EndTutorialFollowerGuideNotification1(this, method);
      }
LABEL_60:
      myFSM = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !myFSM )
        goto LABEL_78;
      if ( *((_BYTE *)myFSM + 140) )
      {
        myFSM = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !myFSM )
          goto LABEL_78;
        v72 = myFSM[36] == 1;
      }
      else
      {
        v72 = 0;
      }
      partyListMenu = this->fields.partyListMenu;
      menuKind = this->fields.menuKind;
      baseDeckItemList = this->fields.baseDeckItemList;
      selectPartyNum = this->fields.selectPartyNum;
      setupInfo = this->fields.setupInfo;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      v79 = (PartyListMenu_CallbackFunc_o *)sub_B2C42C(PartyListMenu_CallbackFunc_TypeInfo);
      PartyListMenu_CallbackFunc___ctor(
        v79,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationRootComponent_OnSelectPartyList__,
        0LL);
      v80 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v80, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndOpenPartyList__, 0LL);
      if ( !partyListMenu )
        goto LABEL_78;
      PartyListMenu__Open(
        partyListMenu,
        menuKind,
        0,
        baseDeckItemList,
        selectPartyNum,
        setupInfo,
        questRestrictionInfo,
        v79,
        v80,
        this->fields.friendPointCampaignVal,
        v72,
        1,
        1,
        0LL);
      PartyOrganizationRootComponent__SetCacheAssetNameList(this, 0LL, v81);
      if ( v72 )
      {
        PartyOrganizationRootComponent__OnSelectPartyList(
          this,
          8,
          this->fields.selectPartyNum,
          this->fields.selectPartyMemberNum,
          v82);
        return;
      }
      goto LABEL_53;
    case 3:
    case 6:
    case 9:
    case 12:
    case 15:
      return;
    case 4:
    case 7:
    case 10:
      goto LABEL_15;
    case 5:
      *(_QWORD *)&this->fields.menuMode = 0x600000001LL;
      v24 = this->fields.partyListMenu;
      v25 = this->fields.menuKind;
      v26 = this->fields.baseDeckItemList;
      v27 = this->fields.selectPartyNum;
      v28 = this->fields.setupInfo;
      v29 = this->fields.questRestrictionInfo;
      v30 = (PartyListMenu_CallbackFunc_o *)sub_B2C42C(PartyListMenu_CallbackFunc_TypeInfo);
      PartyListMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationRootComponent_OnSelectPartyList__,
        0LL);
      if ( !v24 )
        goto LABEL_78;
      PartyListMenu__Open(v24, v25, 0, v26, v27, v28, v29, v30, 0LL, this->fields.friendPointCampaignVal, 0, 0, 1, 0LL);
      goto LABEL_52;
    case 8:
      *(_QWORD *)&this->fields.menuMode = 0x900000009LL;
      tutorialState = this->fields.tutorialState;
      if ( tutorialState != 5 )
      {
        if ( tutorialState != 1 )
        {
          v62 = this->fields.partyListMenu;
          v63 = this->fields.menuKind;
          v64 = this->fields.baseDeckItemList;
          v65 = this->fields.selectPartyNum;
          v66 = this->fields.setupInfo;
          v67 = this->fields.questRestrictionInfo;
          v68 = (PartyListMenu_CallbackFunc_o *)sub_B2C42C(PartyListMenu_CallbackFunc_TypeInfo);
          PartyListMenu_CallbackFunc___ctor(
            v68,
            (Il2CppObject *)this,
            (intptr_t)Method_PartyOrganizationRootComponent_OnSelectPartyList__,
            0LL);
          if ( !v62 )
            goto LABEL_78;
          PartyListMenu__Open(
            v62,
            v63,
            0,
            v64,
            v65,
            v66,
            v67,
            v68,
            0LL,
            this->fields.friendPointCampaignVal,
            0,
            0,
            1,
            0LL);
          goto LABEL_52;
        }
        v32 = this->fields.tutorialMode;
        this->fields.state = 8;
        if ( v32 == 3 )
        {
          v83 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v84 = &StringLiteral_13512/*"TUTORIAL_MESSAGE_FOLLOWER_ORGANIZATION2"*/;
        }
        else
        {
          if ( v32 != 2 )
          {
            if ( v32 == 1 )
              PartyOrganizationRootComponent__EndTutorialOrganizationGuideNotification1(this, method);
            goto LABEL_52;
          }
          v83 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v84 = &StringLiteral_13511/*"TUTORIAL_MESSAGE_FOLLOWER_ORGANIZATION1"*/;
        }
        v85 = LocalizationManager__Get((System_String_o *)*v84, 0LL);
        v86 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v86,
          (Il2CppObject *)this,
          Method_PartyOrganizationRootComponent_EndTutorialFollowerGuideNotification1__,
          0LL);
        if ( !v83 )
          goto LABEL_78;
        CommonUI__OpenTutorialNotificationDialog(v83, v85, -1, v86, 0LL);
        goto LABEL_52;
      }
      this->fields.state = 8;
      this->fields.tutorialState = 6;
      PartyOrganizationRootComponent__EndTutorialOrganizationGuideNotification6(this, method);
LABEL_52:
      PartyOrganizationRootComponent__SetCacheAssetNameList(this, 0LL, v2);
LABEL_53:
      myFSM = this->fields.myFSM;
      if ( myFSM )
        goto LABEL_54;
      goto LABEL_78;
    case 11:
      *(_QWORD *)&this->fields.menuMode = 0xC0000000ALL;
      selectPartyMemberNum = this->fields.selectPartyMemberNum;
      if ( (selectPartyMemberNum & 0x80000000) != 0 )
        changePartyMode = 0;
      else
        changePartyMode = this->fields.changePartyMode;
      partyOrganizationChangeMenu = this->fields.partyOrganizationChangeMenu;
      v55 = this->fields.menuKind;
      basePartyItem = this->fields.basePartyItem;
      partyItem = this->fields.partyItem;
      v58 = this->fields.setupInfo;
      v59 = this->fields.questRestrictionInfo;
      v60 = (PartyOrganizationChangeMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationChangeMenu_CallbackFunc_TypeInfo);
      PartyOrganizationChangeMenu_CallbackFunc___ctor(
        v60,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_OnSelectedOrganizationChange__,
        0LL);
      v61 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v61, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndOpenMenu__, 0LL);
      if ( !partyOrganizationChangeMenu )
        goto LABEL_78;
      PartyOrganizationChangeMenu__Open(
        partyOrganizationChangeMenu,
        v55,
        changePartyMode,
        basePartyItem,
        partyItem,
        selectPartyMemberNum,
        v58,
        v59,
        v60,
        v61,
        this->fields.friendPointCampaignVal,
        0LL);
      goto LABEL_53;
    case 13:
    case 16:
      isNeedSetBaseDeck = this->fields.isNeedSetBaseDeck;
      this->fields.isAutoOrganization = 0;
      this->fields.state = 1;
      if ( !isNeedSetBaseDeck )
        goto LABEL_11;
      myFSM = this->fields.partyListMenu;
      if ( !myFSM )
        goto LABEL_78;
      PartyListMenu__SetListViewMangaerEnabled((PartyListMenu_o *)myFSM, 1, 0LL);
      method = (const MethodInfo *)this->fields.baseDeckItemList;
      if ( !method || !method->klass )
        goto LABEL_11;
      myFSM = this->fields.partyListMenu;
      if ( !myFSM )
        goto LABEL_78;
      PartyListMenu__SetPartyDeck(
        (PartyListMenu_o *)myFSM,
        (PartyListViewItem_array *)method,
        this->fields.selectPartyNum,
        this->fields.setupInfo,
        this->fields.questRestrictionInfo,
        this->fields.friendPointCampaignVal,
        0LL);
      v22 = this->fields.partyListMenu;
      if ( !v22 )
        goto LABEL_78;
      v22->fields.buttonStateSetFlag = 1;
LABEL_11:
      myFSM = this->fields.myFSM;
      this->fields.isNeedSetBaseDeck = 0;
      if ( !myFSM )
        goto LABEL_78;
      goto LABEL_54;
    case 14:
      *(_QWORD *)&this->fields.menuMode = 0xF0000000BLL;
      partyOrganizationMenu = this->fields.partyOrganizationMenu;
      v35 = this->fields.menuKind;
      v37 = this->fields.basePartyItem;
      v36 = this->fields.partyItem;
      v38 = this->fields.setupInfo;
      v39 = this->fields.questRestrictionInfo;
      v40 = (PartyOrganizationMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationMenu_CallbackFunc_TypeInfo);
      PartyOrganizationMenu_CallbackFunc___ctor(
        v40,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationRootComponent_OnSelectedOrganizationSwap__,
        0LL);
      v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndOpenMenu__, 0LL);
      if ( !partyOrganizationMenu )
        goto LABEL_78;
      PartyOrganizationMenu__Open(
        partyOrganizationMenu,
        v35,
        v37,
        v36,
        v38,
        v39,
        v40,
        v41,
        0,
        this->fields.friendPointCampaignVal,
        v87);
      v43 = this->fields.changePartyMode;
      if ( v43 == 2 )
      {
        myFSM = this->fields.partyOrganizationMenu;
        if ( !myFSM )
          goto LABEL_78;
        v44 = this->fields.selectPartyMemberNum;
        if ( (v44 & 0x80000000) != 0 )
          goto LABEL_53;
        v45 = 2;
      }
      else
      {
        if ( v43 != 1 )
          goto LABEL_53;
        myFSM = this->fields.partyOrganizationMenu;
        if ( !myFSM )
          goto LABEL_78;
        v44 = this->fields.selectPartyMemberNum;
        if ( (v44 & 0x80000000) != 0 )
          goto LABEL_53;
        v45 = 1;
      }
      PartyOrganizationMenu__OnClickItem((PartyOrganizationMenu_o *)myFSM, v45, v44, v42);
      goto LABEL_53;
    default:
      if ( state == 31 )
      {
        myFSM = this->fields.waveBattlePartyOrganizationMenu;
        this->fields.state = 32;
        if ( !myFSM )
          goto LABEL_78;
        if ( WaveBattlePartyOrganizationMenu__IsDisplay((WaveBattlePartyOrganizationMenu_o *)myFSM, 0LL) )
          goto LABEL_53;
        this->fields.isFirstChange = 0;
        v46 = this->fields.partyListMenu;
        v47 = this->fields.menuKind;
        v48 = this->fields.baseDeckItemList;
        v49 = this->fields.selectPartyNum;
        v50 = this->fields.setupInfo;
        v51 = this->fields.questRestrictionInfo;
        v52 = (PartyListMenu_CallbackFunc_o *)sub_B2C42C(PartyListMenu_CallbackFunc_TypeInfo);
        PartyListMenu_CallbackFunc___ctor(
          v52,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyOrganizationRootComponent_OnSelectPartyList__,
          0LL);
        v53 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v53, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndOpenPartyList__, 0LL);
        if ( !v46 )
          goto LABEL_78;
        PartyListMenu__Open(
          v46,
          v47,
          0,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          this->fields.friendPointCampaignVal,
          0,
          0,
          1,
          0LL);
        goto LABEL_52;
      }
      if ( state == 33 )
      {
LABEL_15:
        myFSM = this->fields.myFSM;
        this->fields.state = 1;
        if ( myFSM )
        {
LABEL_54:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_5476/*"END_ACTION"*/, 0LL);
          return;
        }
LABEL_78:
        sub_B2C434(myFSM, method);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__OnSelectPartyList(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
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
  unsigned int state; // w8
  PartyListMenu_o *partyListMenu; // x0
  struct PartyListViewItem_o *Item; // x0
  struct PartyListViewItem_o *v44; // x1
  struct PartyListViewItem_o **p_basePartyItem; // x0
  const MethodInfo *v46; // x2
  PartyListViewItem_o *v47; // x0
  const MethodInfo *v48; // x3
  PartyOrganizationListViewItem_o *v49; // x21
  PartyListMenu_o *v50; // x8
  SoundManager_c *v51; // x0
  int partyChangeButton_low; // w9
  __int16 v53; // w8
  __int64 *v54; // x8
  unsigned int DeckCondition; // w0
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v58; // x22
  const MethodInfo *v59; // x6
  PartyListViewItem_o *basePartyItem; // x0
  System_String_array *v61; // x0
  const MethodInfo *v62; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  PartyListViewItem_o *v64; // x0
  System_String_array *v65; // x0
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x2
  PartyListViewItem_o *v69; // x0
  int32_t v70; // w8
  const MethodInfo *v71; // x1
  QuestPhaseMaster_o *v72; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  const MethodInfo *v74; // x1
  int32_t menuKind; // w8
  System_String_array *AssetNameList; // x0
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x1
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418502B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, v9);
    sub_B2C35C(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__, v15);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndWarningQuestStart__, v16);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectPartyList__, v17);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__OnSelectPartyList_b__203_0__, v18);
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v19);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v25);
    sub_B2C35C(&SoundManager_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_3055/*"CLICK_DECK_COPY"*/, v27);
    sub_B2C35C(&StringLiteral_3082/*"CLICK_SWAP"*/, v28);
    sub_B2C35C(&StringLiteral_3064/*"CLICK_MASTER_FORMATION"*/, v29);
    sub_B2C35C(&StringLiteral_3072/*"CLICK_QUEST"*/, v30);
    sub_B2C35C(&StringLiteral_3061/*"CLICK_FOLLOWER"*/, v31);
    sub_B2C35C(&StringLiteral_3063/*"CLICK_INFOMATION"*/, v32);
    sub_B2C35C(&StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v33);
    sub_B2C35C(&StringLiteral_3054/*"CLICK_DECIDE"*/, v34);
    sub_B2C35C(&StringLiteral_3050/*"CLICK_CHANGE"*/, v35);
    sub_B2C35C(&StringLiteral_3057/*"CLICK_EDIT"*/, v36);
    sub_B2C35C(&StringLiteral_3056/*"CLICK_DECK_NAME"*/, v37);
    sub_B2C35C(&StringLiteral_3079/*"CLICK_START"*/, v38);
    sub_B2C35C(&StringLiteral_3058/*"CLICK_EVENT_POINT"*/, v39);
    sub_B2C35C(&StringLiteral_1/*""*/, v40);
    byte_418502B = 1;
  }
  outEnt = 0LL;
  state = this->fields.state;
  if ( state <= 0x20 && ((1LL << state) & 0x100000248LL) != 0 )
  {
    this->fields.selectPartyNum = n;
    this->fields.changePartyMode = 0;
    this->fields.selectPartyMemberNum = m;
    if ( (n & 0x80000000) != 0 )
    {
      this->fields.partyItem = 0LL;
      sub_B2C2F8(&this->fields.partyItem, 0LL);
      p_basePartyItem = &this->fields.basePartyItem;
      v44 = 0LL;
      this->fields.basePartyItem = 0LL;
    }
    else
    {
      partyListMenu = this->fields.partyListMenu;
      if ( !partyListMenu )
        goto LABEL_180;
      Item = PartyListMenu__GetItem(partyListMenu, n, 0LL);
      this->fields.basePartyItem = Item;
      sub_B2C2F8(&this->fields.basePartyItem, Item);
      partyListMenu = (PartyListMenu_o *)this->fields.basePartyItem;
      if ( !partyListMenu )
        goto LABEL_180;
      v44 = PartyListViewItem__Clone((PartyListViewItem_o *)partyListMenu, 0LL);
      p_basePartyItem = &this->fields.partyItem;
      this->fields.partyItem = v44;
    }
    sub_B2C2F8(p_basePartyItem, v44);
    switch ( result )
    {
      case 1:
        if ( !this->fields.partyItem || !this->fields.basePartyItem )
          goto LABEL_166;
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
        partyListMenu = (PartyListMenu_o *)this->fields.partyServantSelectMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyServantSelectMenu__ClearScrollValue((PartyServantSelectMenu_o *)partyListMenu, 0LL);
        partyListMenu = (PartyListMenu_o *)this->fields.partyItem;
        if ( !partyListMenu )
          goto LABEL_180;
        DeckCondition = PartyListViewItem__GetDeckCondition((PartyListViewItem_o *)partyListMenu, 0LL);
        if ( DeckCondition > 7 || ((1 << DeckCondition) & 0xAF) == 0 )
          goto LABEL_166;
        if ( this->fields.menuKind == 8 )
        {
          partyListMenu = (PartyListMenu_o *)this->fields.myFSM;
          if ( partyListMenu )
          {
            v54 = &StringLiteral_3054/*"CLICK_DECIDE"*/;
LABEL_178:
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)partyListMenu, (System_String_o *)*v54, 0LL);
            return;
          }
        }
        else
        {
          partyListMenu = (PartyListMenu_o *)this->fields.basePartyItem;
          this->fields.menuMode = this->fields.mainMenuMode;
          if ( partyListMenu )
          {
            AssetNameList = PartyListViewItem__GetAssetNameList((PartyListViewItem_o *)partyListMenu, 0LL);
            PartyOrganizationRootComponent__SetCacheAssetNameList(this, AssetNameList, v77);
            partyListMenu = (PartyListMenu_o *)this->fields.myFSM;
            if ( partyListMenu )
            {
              v54 = &StringLiteral_3072/*"CLICK_QUEST"*/;
              goto LABEL_178;
            }
          }
        }
        goto LABEL_180;
      case 2:
        if ( (this->fields.menuKind | 2) == 3 )
          goto LABEL_166;
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
        goto LABEL_132;
      case 3:
        if ( (this->fields.menuKind | 2) == 3 || !this->fields.partyItem )
          goto LABEL_166;
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
        partyListMenu = (PartyListMenu_o *)this->fields.partyOrganizationMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyOrganizationMenu__Init((PartyOrganizationMenu_o *)partyListMenu, *(const MethodInfo **)&result);
        goto LABEL_112;
      case 4:
        if ( (this->fields.menuKind | 2) == 3 || !this->fields.partyItem )
          goto LABEL_166;
        partyListMenu = this->fields.partyListMenu;
        this->fields.changePartyMode = 1;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__ForceSetCenterItem(partyListMenu, this->fields.selectPartyNum, 0LL);
        partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
        partyItem = this->fields.partyItem;
        v58 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
        PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
          v58,
          (Il2CppObject *)this,
          Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__,
          0LL);
        if ( !partyOrganizationRemoveSelectMenu )
          goto LABEL_180;
        PartyOrganizationRemoveSelectMenu__Open(partyOrganizationRemoveSelectMenu, partyItem, 1, v58, 0, 0, v59);
        return;
      case 5:
        if ( (this->fields.menuKind | 2) == 3 || !this->fields.partyItem )
          goto LABEL_166;
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
        partyListMenu = (PartyListMenu_o *)this->fields.myFSM;
        if ( !partyListMenu )
          goto LABEL_180;
        v54 = &StringLiteral_3056/*"CLICK_DECK_NAME"*/;
        goto LABEL_178;
      case 6:
        if ( (this->fields.menuKind | 2) == 3 || !this->fields.partyItem )
          goto LABEL_166;
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
        partyListMenu = (PartyListMenu_o *)this->fields.myFSM;
        if ( !partyListMenu )
          goto LABEL_180;
        v54 = &StringLiteral_3055/*"CLICK_DECK_COPY"*/;
        goto LABEL_178;
      case 7:
        if ( (this->fields.menuKind | 2) == 3 || !this->fields.partyItem )
          goto LABEL_166;
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
        basePartyItem = this->fields.basePartyItem;
        this->fields.menuMode = 9;
        if ( basePartyItem )
        {
          v61 = PartyListViewItem__GetAssetNameList(basePartyItem, 0LL);
          PartyOrganizationRootComponent__SetCacheAssetNameList(this, v61, v62);
        }
        partyListMenu = (PartyListMenu_o *)this->fields.myFSM;
        if ( !partyListMenu )
          goto LABEL_180;
        v54 = &StringLiteral_3057/*"CLICK_EDIT"*/;
        goto LABEL_178;
      case 8:
        if ( this->fields.mainMenuMode == 8 )
        {
          PartyOrganizationRootComponent__MoveWaveBattleTop(this, 0, v46);
          return;
        }
        if ( !this->fields.partyItem || !this->fields.basePartyItem )
          goto LABEL_166;
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        partyListMenu = (PartyListMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !this->fields.battleSetupInfo )
          goto LABEL_180;
        v72 = (QuestPhaseMaster_o *)partyListMenu;
        partyListMenu = (PartyListMenu_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        if ( !battleSetupInfo || !v72 )
          goto LABEL_180;
        QuestPhaseMaster__GetEntity(v72, (int32_t)partyListMenu, battleSetupInfo->fields.questPhase, 0LL);
        PartyOrganizationRootComponent__QuestStartCheckOld(this, v74);
        return;
      case 9:
        if ( !this->fields.partyItem )
          goto LABEL_166;
        partyListMenu = (PartyListMenu_o *)this->fields.myFSM;
        this->fields.isMasterEquipEdit = 1;
        if ( !partyListMenu )
          goto LABEL_180;
        v54 = &StringLiteral_3064/*"CLICK_MASTER_FORMATION"*/;
        goto LABEL_178;
      case 10:
        if ( !this->fields.partyItem )
          goto LABEL_166;
        partyListMenu = (PartyListMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !partyListMenu )
          goto LABEL_180;
        partyListMenu = (PartyListMenu_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)partyListMenu,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo || !partyListMenu )
          goto LABEL_180;
        if ( !EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
                (EventEquipSkillReleaseMaster_o *)partyListMenu,
                questRestrictionInfo->fields.eventId,
                &outEnt,
                0LL) )
          goto LABEL_166;
        partyListMenu = (PartyListMenu_o *)outEnt;
        if ( !outEnt )
          goto LABEL_180;
        if ( EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL) )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
            || SoundManager_TypeInfo->_2.cctor_finished )
          {
            goto LABEL_169;
          }
          v51 = SoundManager_TypeInfo;
          goto LABEL_168;
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        partyListMenu = this->fields.partyListMenu;
        if ( partyListMenu )
        {
          PartyListMenu__UpdateEventLimitEquip(partyListMenu, this->fields.selectPartyNum, 0LL);
LABEL_170:
          PartyOrganizationRootComponent__RecoverInputShowMenu(this, v78);
          return;
        }
        goto LABEL_180;
      case 11:
        if ( !this->fields.partyItem )
          goto LABEL_166;
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
        partyListMenu = (PartyListMenu_o *)this->fields.myFSM;
        if ( !partyListMenu )
          goto LABEL_180;
        v54 = &StringLiteral_3063/*"CLICK_INFOMATION"*/;
        goto LABEL_178;
      case 12:
        if ( !this->fields.partyItem )
          goto LABEL_166;
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
        partyListMenu = (PartyListMenu_o *)this->fields.myFSM;
        if ( !partyListMenu )
          goto LABEL_180;
        v54 = &StringLiteral_3058/*"CLICK_EVENT_POINT"*/;
        goto LABEL_178;
      case 13:
        v64 = this->fields.basePartyItem;
        if ( !v64 )
          goto LABEL_88;
        v65 = PartyListViewItem__GetAssetNameList(v64, 0LL);
        PartyOrganizationRootComponent__SetCacheAssetNameList(this, v65, v66);
        partyListMenu = (PartyListMenu_o *)this->fields.basePartyItem;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListViewItem__Modify((PartyListViewItem_o *)partyListMenu, 0LL);
LABEL_88:
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__Init(partyListMenu, 0LL);
        PartyOrganizationRootComponent__RecoverInputShowMenu(this, v67);
        PartyOrganizationRootComponent__SetCacheAssetNameList(this, 0LL, v68);
        return;
      case 14:
      case 17:
        v47 = this->fields.partyItem;
        if ( !v47 )
          goto LABEL_166;
        partyListMenu = (PartyListMenu_o *)PartyListViewItem__GetMember(v47, m, 0LL);
        if ( !partyListMenu )
          goto LABEL_180;
        v49 = (PartyOrganizationListViewItem_o *)partyListMenu;
        if ( LOBYTE(partyListMenu->fields.commandAssistConfirmButton) )
          goto LABEL_14;
        menuKind = this->fields.menuKind;
        if ( menuKind == 3 )
        {
          if ( PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
                 (PartyOrganizationListViewItem_o *)partyListMenu,
                 0LL) )
          {
            goto LABEL_166;
          }
          menuKind = this->fields.menuKind;
        }
        else if ( menuKind == 1 )
        {
          if ( !LOBYTE(partyListMenu->fields.partyChangeButton) )
            goto LABEL_166;
LABEL_159:
          partyListMenu = this->fields.partyListMenu;
          if ( partyListMenu )
          {
            PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
            this->fields.changePartyMode = 1;
            if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
            }
            partyListMenu = (PartyListMenu_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( partyListMenu )
            {
              *(_DWORD *)&partyListMenu->fields.isBasePosition = m + 1;
              if ( !v49->fields.isFollower )
              {
LABEL_171:
                PartyOrganizationRootComponent__SendPlayMarkerEventForChange(this, *(const MethodInfo **)&result);
                return;
              }
              if ( this->fields.menuKind == 8 )
                goto LABEL_166;
              partyListMenu = (PartyListMenu_o *)this->fields.questRestrictionInfo;
              if ( partyListMenu )
              {
                QuestRestrictionInfo__SetDeckInfo_31220960(
                  (QuestRestrictionInfo_o *)partyListMenu,
                  this->fields.partyItem,
                  this->fields.selectPartyMemberNum,
                  0LL);
                v51 = SoundManager_TypeInfo;
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
                {
LABEL_174:
                  if ( !v51->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v51);
                }
LABEL_176:
                SoundManager__playSystemSe(0, 0LL);
                partyListMenu = (PartyListMenu_o *)this->fields.myFSM;
                if ( partyListMenu )
                {
                  v54 = &StringLiteral_3061/*"CLICK_FOLLOWER"*/;
                  goto LABEL_178;
                }
              }
            }
          }
LABEL_180:
          sub_B2C434(partyListMenu, *(_QWORD *)&result);
        }
        switch ( menuKind )
        {
          case 4:
          case 5:
            goto LABEL_146;
          case 6:
            goto LABEL_166;
          case 7:
            if ( v49->fields.isFixMultipleNpc || v49->fields.isFixMultipleNpcRestriction )
              goto LABEL_166;
LABEL_146:
            if ( !v49->fields.isServantNumRestriction )
              goto LABEL_159;
            goto LABEL_166;
          case 9:
            if ( !v49->fields.isServantNumRestriction )
              goto LABEL_159;
            v79 = Method_PartyOrganizationRootComponent_OnSelectPartyList__;
            if ( (*((_BYTE *)Method_PartyOrganizationRootComponent_OnSelectPartyList__ + 75) & 2) != 0 )
              v79 = (_QWORD *)sub_B2C364(Method_PartyOrganizationRootComponent_OnSelectPartyList__);
            v80 = (System_Reflection_MethodBase_o *)sub_B2C340(v79, v79[3]);
            OverwriteAssetSoundName__PlaySystemSe(v80, 2, 0LL);
            goto LABEL_170;
          default:
            goto LABEL_159;
        }
      case 15:
        if ( this->fields.menuKind == 1 )
          goto LABEL_166;
        v69 = this->fields.partyItem;
        if ( !v69 )
          goto LABEL_166;
        partyListMenu = (PartyListMenu_o *)PartyListViewItem__GetMember(v69, m, 0LL);
        if ( !partyListMenu )
          goto LABEL_180;
        v49 = (PartyOrganizationListViewItem_o *)partyListMenu;
        if ( LOBYTE(partyListMenu->fields.commandAssistConfirmButton) && !partyListMenu->fields.partyEditButton )
        {
LABEL_14:
          PartyOrganizationRootComponent__CtrlMyServantOrNpc(this, v49, m + 1, v48);
          return;
        }
        v70 = this->fields.menuKind;
        if ( v70 != 3 )
          goto LABEL_98;
        if ( PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
               (PartyOrganizationListViewItem_o *)partyListMenu,
               0LL) )
        {
          goto LABEL_166;
        }
        v70 = this->fields.menuKind;
LABEL_98:
        if ( v70 == 7 )
        {
          if ( v49->fields.isFixMultipleNpc
            || v49->fields.isFixMultipleNpcRestriction
            || v49->fields.isServantNumRestriction )
          {
LABEL_166:
            v51 = SoundManager_TypeInfo;
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
              goto LABEL_169;
            goto LABEL_167;
          }
        }
        else if ( v70 == 6 )
        {
          goto LABEL_166;
        }
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
        this->fields.changePartyMode = 2;
        if ( !v49->fields.isFollower )
          goto LABEL_171;
        v51 = SoundManager_TypeInfo;
        v53 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
        if ( this->fields.menuKind == 8 )
        {
LABEL_20:
          if ( (v53 & 0x400) == 0 )
            goto LABEL_169;
LABEL_167:
          if ( !v51->_2.cctor_finished )
LABEL_168:
            j_il2cpp_runtime_class_init_0(v51);
LABEL_169:
          SoundManager__playSystemSe(2, 0LL);
          goto LABEL_170;
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_176;
        goto LABEL_174;
      case 16:
        if ( !this->fields.partyItem )
          goto LABEL_166;
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
        partyListMenu = (PartyListMenu_o *)this->fields.partyItem;
        if ( !partyListMenu )
          goto LABEL_180;
        partyListMenu = (PartyListMenu_o *)PartyListViewItem__GetMember((PartyListViewItem_o *)partyListMenu, m, 0LL);
        this->fields.changePartyMode = 3;
        if ( !partyListMenu )
          goto LABEL_180;
        v50 = partyListMenu;
        v51 = SoundManager_TypeInfo;
        partyChangeButton_low = LOBYTE(v50->fields.partyChangeButton);
        v53 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
        if ( partyChangeButton_low )
          goto LABEL_20;
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
LABEL_132:
        partyListMenu = (PartyListMenu_o *)this->fields.partyOrganizationChangeMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyOrganizationChangeMenu__Init((PartyOrganizationChangeMenu_o *)partyListMenu, 0LL);
        partyListMenu = (PartyListMenu_o *)this->fields.myFSM;
        this->fields.menuMode = 10;
        if ( !partyListMenu )
          goto LABEL_180;
        v54 = &StringLiteral_3050/*"CLICK_CHANGE"*/;
        goto LABEL_178;
      case 18:
        if ( !this->fields.partyItem )
          goto LABEL_166;
        partyListMenu = this->fields.partyListMenu;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyListMenu__SetCenterItem(partyListMenu, this->fields.selectPartyNum, 0, 0LL);
        PartyOrganizationRootComponent__ShowQuestInformation(this, v71);
        return;
      case 19:
        if ( (this->fields.menuKind | 2) == 3 || !this->fields.partyItem )
          goto LABEL_166;
        PartyOrganizationRootComponent__AutoOrganizationExec(this, *(const MethodInfo **)&result);
        partyListMenu = (PartyListMenu_o *)this->fields.partyOrganizationMenu;
        this->fields.isAutoOrganization = 1;
        this->fields.changePartyMode = 1;
        if ( !partyListMenu )
          goto LABEL_180;
        PartyOrganizationMenu__ModifyItem((PartyOrganizationMenu_o *)partyListMenu, *(const MethodInfo **)&result);
LABEL_112:
        partyListMenu = (PartyListMenu_o *)this->fields.myFSM;
        this->fields.menuMode = 11;
        if ( !partyListMenu )
          goto LABEL_180;
        v54 = &StringLiteral_3082/*"CLICK_SWAP"*/;
        goto LABEL_178;
      default:
        return;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__OnSelectWavePartyList(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
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
  const MethodInfo *v37; // x1
  int64_t partyListMenu; // x0
  struct PartyListViewItem_o *Item; // x0
  struct PartyListViewItem_o **v40; // x21
  struct PartyListViewItem_array *baseDeckItemList; // x8
  __int64 selectPartyNum; // x9
  PartyListViewItem_o *v43; // x0
  struct PartyListViewItem_o *v44; // x1
  struct PartyListViewItem_o **p_basePartyItem; // x0
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v49; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v51; // x21
  UnityEngine_Object_o *waveBattleAutoOrganizationConfirmDialog; // x20
  UnityEngine_GameObject_o *waveBattleAutoOrganizationConfirmDialogPrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x0
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *Component_srcLineSprite; // x0
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *v57; // x20
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v58; // x21
  struct PartyListViewItem_array *v59; // x21
  int max_length; // w8
  int v61; // w22
  char v62; // w23
  int v63; // w24
  Il2CppClass **v64; // x8
  PartyListViewItem_o *v65; // x20
  __int64 *v66; // x8
  UserEventDeckMaster_o *Master_WarQuestSelectionMaster; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t eventId; // w22
  int64_t v70; // x21
  struct BattleSetupInfo_o *v71; // x8
  struct PartyListViewItem_array *v72; // x8
  __int64 v73; // x9
  DropAutoSellDlgComponent_o *waveBattleDropAutoSellDialog; // x20
  DropAutoSellDlgComponent_CallbackFunc_o *v75; // x21
  const MethodInfo *v76; // x1
  _QWORD *v77; // x0
  System_Reflection_MethodBase_o *v78; // x0
  System_String_o *v79; // x19
  System_String_o *v80; // x20
  CommonUI_o *v81; // x21
  PartyOrganizationRootComponent___c_c *v82; // x8
  struct PartyOrganizationRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__105_5; // x22
  Il2CppObject *v85; // x23
  struct PartyOrganizationRootComponent___c_StaticFields *v86; // x0
  PartyOrganizationRemoveSelectMenu_o *partyOrganizationRemoveSelectMenu; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v89; // x22
  const MethodInfo *v90; // x6
  CommonUI_o *v91; // x20
  System_String_o *v92; // x21
  System_Action_o *v93; // x22
  __int64 v94; // x0

  if ( (byte_4184FD4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v9);
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, v10);
    sub_B2C35C(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, v11);
    sub_B2C35C(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventDeckMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(
      &Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___,
      v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&NetworkManager_TypeInfo, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__, v19);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectWavePartyList__, v20);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__OnSelectWavePartyList_b__105_0__, v21);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__OnSelectWavePartyList_b__105_1__, v22);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__OnSelectWavePartyList_b__105_2__, v23);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__OnSelectWavePartyList_b__105_3__, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v26);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v27);
    sub_B2C35C(&Method_PartyOrganizationRootComponent___c__OnSelectWavePartyList_b__105_5__, v28);
    sub_B2C35C(&PartyOrganizationRootComponent___c_TypeInfo, v29);
    sub_B2C35C(&StringLiteral_15356/*"WAVE_BATTLE_RESTRICTION_NOT_SATISFY_TITLE"*/, v30);
    sub_B2C35C(&StringLiteral_3064/*"CLICK_MASTER_FORMATION"*/, v31);
    sub_B2C35C(&StringLiteral_15355/*"WAVE_BATTLE_RESTRICTION_NOT_SATISFY_MESSAGE"*/, v32);
    sub_B2C35C(&StringLiteral_3063/*"CLICK_INFOMATION"*/, v33);
    sub_B2C35C(&StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v34);
    sub_B2C35C(&StringLiteral_3079/*"CLICK_START"*/, v35);
    sub_B2C35C(&StringLiteral_1/*""*/, v36);
    byte_4184FD4 = 1;
  }
  v37 = (const MethodInfo *)(unsigned int)(wave - 1);
  *(_QWORD *)&this->fields.selectPartyNum = (unsigned int)v37;
  this->fields.selectPartyMemberNum = idx;
  if ( wave - 1 < 0 )
  {
    this->fields.partyItem = 0LL;
    sub_B2C2F8(&this->fields.partyItem, 0LL);
    p_basePartyItem = &this->fields.basePartyItem;
    v44 = 0LL;
    this->fields.basePartyItem = 0LL;
  }
  else
  {
    partyListMenu = (int64_t)this->fields.partyListMenu;
    if ( !partyListMenu )
      goto LABEL_96;
    Item = PartyListMenu__GetItem((PartyListMenu_o *)partyListMenu, (int32_t)v37, 0LL);
    v40 = &this->fields.basePartyItem;
    this->fields.basePartyItem = Item;
    sub_B2C2F8(&this->fields.basePartyItem, Item);
    partyListMenu = (int64_t)this->fields.basePartyItem;
    if ( !partyListMenu )
    {
      baseDeckItemList = this->fields.baseDeckItemList;
      if ( !baseDeckItemList )
        goto LABEL_96;
      selectPartyNum = this->fields.selectPartyNum;
      if ( (unsigned int)selectPartyNum >= baseDeckItemList->max_length )
        goto LABEL_97;
      partyListMenu = (int64_t)baseDeckItemList->m_Items[selectPartyNum];
      if ( !partyListMenu )
        goto LABEL_96;
      v43 = PartyListViewItem__Clone((PartyListViewItem_o *)partyListMenu, 0LL);
      *v40 = v43;
      sub_B2C2F8(&this->fields.basePartyItem, v43);
      partyListMenu = (int64_t)*v40;
      if ( !*v40 )
        goto LABEL_96;
    }
    v44 = PartyListViewItem__Clone((PartyListViewItem_o *)partyListMenu, 0LL);
    p_basePartyItem = &this->fields.partyItem;
    this->fields.partyItem = v44;
  }
  sub_B2C2F8(p_basePartyItem, v44);
  switch ( result )
  {
    case 0:
      partyListMenu = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !partyListMenu )
        goto LABEL_96;
      if ( CommonUI__maskFadeIsBusy((CommonUI_o *)partyListMenu, 0LL) )
        return;
      v46 = Method_PartyOrganizationRootComponent_OnSelectWavePartyList__;
      if ( (*((_BYTE *)Method_PartyOrganizationRootComponent_OnSelectWavePartyList__ + 75) & 2) != 0 )
        v46 = (_QWORD *)sub_B2C364(Method_PartyOrganizationRootComponent_OnSelectWavePartyList__);
      v47 = (System_Reflection_MethodBase_o *)sub_B2C340(v46, v46[3]);
      OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v49 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v49 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v49->static_fields->DEFAULT_FADE_TIME;
      v51 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v51,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent__OnSelectWavePartyList_b__105_0__,
        0LL);
      if ( !Instance )
        goto LABEL_96;
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v51, 0LL);
      return;
    case 1:
      partyListMenu = (int64_t)this->fields.myFSM;
      this->fields.isMasterEquipEdit = 1;
      if ( !partyListMenu )
        goto LABEL_96;
      v66 = &StringLiteral_3064/*"CLICK_MASTER_FORMATION"*/;
      goto LABEL_71;
    case 2:
      waveBattleAutoOrganizationConfirmDialog = (UnityEngine_Object_o *)this->fields.waveBattleAutoOrganizationConfirmDialog;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(waveBattleAutoOrganizationConfirmDialog, 0LL, 0LL) )
        goto LABEL_29;
      partyListMenu = (int64_t)this->fields.waveBattlePartyOrganizationMenu;
      if ( !partyListMenu )
        goto LABEL_96;
      waveBattleAutoOrganizationConfirmDialogPrefab = this->fields.waveBattleAutoOrganizationConfirmDialogPrefab;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)partyListMenu, 0LL);
      Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
      partyListMenu = (int64_t)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 waveBattleAutoOrganizationConfirmDialogPrefab,
                                 Parent,
                                 0LL,
                                 0LL);
      if ( !partyListMenu )
        goto LABEL_96;
      Component_srcLineSprite = (struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_((UnityEngine_GameObject_o *)partyListMenu, (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___);
      this->fields.waveBattleAutoOrganizationConfirmDialog = Component_srcLineSprite;
      sub_B2C2F8(&this->fields.waveBattleAutoOrganizationConfirmDialog, Component_srcLineSprite);
LABEL_29:
      v57 = this->fields.waveBattleAutoOrganizationConfirmDialog;
      v58 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *)sub_B2C42C(WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
      WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        v58,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent__OnSelectWavePartyList_b__105_1__,
        0LL);
      if ( !v57 )
        goto LABEL_96;
      WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Open(v57, v58, 0LL);
      return;
    case 3:
      v59 = this->fields.baseDeckItemList;
      if ( !v59 )
        goto LABEL_96;
      max_length = v59->max_length;
      if ( max_length >= 1 )
      {
        v61 = 0;
        v62 = 0;
        v63 = 0;
        while ( v61 < (unsigned int)max_length )
        {
          v64 = &v59->obj.klass + v61;
          v65 = (PartyListViewItem_o *)v64[4];
          if ( !v65 )
            goto LABEL_96;
          v63 |= !PartyListViewItem__IsDeckEmpty((PartyListViewItem_o *)v64[4], 0LL);
          partyListMenu = PartyListViewItem__IsEquipEmpty(v65, 0LL);
          max_length = v59->max_length;
          ++v61;
          v62 |= (unsigned __int8)partyListMenu ^ 1;
          if ( v61 >= max_length )
            goto LABEL_88;
        }
LABEL_97:
        v94 = sub_B2C460(partyListMenu);
        sub_B2C400(v94, 0LL);
      }
      LOBYTE(v63) = 0;
      v62 = 0;
LABEL_88:
      partyOrganizationRemoveSelectMenu = this->fields.partyOrganizationRemoveSelectMenu;
      partyItem = this->fields.partyItem;
      v89 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
      PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
        v89,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndConfirmPartyRemoveSelect__,
        0LL);
      if ( !partyOrganizationRemoveSelectMenu )
        goto LABEL_96;
      PartyOrganizationRemoveSelectMenu__Open(
        partyOrganizationRemoveSelectMenu,
        partyItem,
        1,
        v89,
        v63 & 1,
        v62 & 1,
        v90);
      return;
    case 4:
      partyListMenu = (int64_t)this->fields.myFSM;
      if ( !partyListMenu )
        goto LABEL_96;
      v66 = &StringLiteral_3063/*"CLICK_INFOMATION"*/;
      goto LABEL_71;
    case 5:
      waveBattleDropAutoSellDialog = this->fields.waveBattleDropAutoSellDialog;
      v75 = (DropAutoSellDlgComponent_CallbackFunc_o *)sub_B2C42C(DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
      DropAutoSellDlgComponent_CallbackFunc___ctor(
        v75,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent__OnSelectWavePartyList_b__105_2__,
        0LL);
      if ( !waveBattleDropAutoSellDialog )
        goto LABEL_96;
      DropAutoSellDlgComponent__Open(waveBattleDropAutoSellDialog, v75, 0LL);
      return;
    case 6:
      if ( !PartyOrganizationRootComponent__IsSetAllWave(this, v37) )
      {
        v77 = Method_PartyOrganizationRootComponent_OnSelectWavePartyList__;
        if ( (*((_BYTE *)Method_PartyOrganizationRootComponent_OnSelectWavePartyList__ + 75) & 2) != 0 )
          v77 = (_QWORD *)sub_B2C364(Method_PartyOrganizationRootComponent_OnSelectWavePartyList__);
        v78 = (System_Reflection_MethodBase_o *)sub_B2C340(v77, v77[3]);
        OverwriteAssetSoundName__PlaySystemSe(v78, 0, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_15356/*"WAVE_BATTLE_RESTRICTION_NOT_SATISFY_TITLE"*/, 0LL);
        v80 = LocalizationManager__Get((System_String_o *)StringLiteral_15355/*"WAVE_BATTLE_RESTRICTION_NOT_SATISFY_MESSAGE"*/, 0LL);
        partyListMenu = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v81 = (CommonUI_o *)partyListMenu;
        v82 = PartyOrganizationRootComponent___c_TypeInfo;
        if ( (BYTE3(PartyOrganizationRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationRootComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationRootComponent___c_TypeInfo);
          v82 = PartyOrganizationRootComponent___c_TypeInfo;
        }
        static_fields = v82->static_fields;
        _9__105_5 = static_fields->__9__105_5;
        if ( !_9__105_5 )
        {
          if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v82);
            static_fields = PartyOrganizationRootComponent___c_TypeInfo->static_fields;
          }
          v85 = (Il2CppObject *)static_fields->__9;
          _9__105_5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            _9__105_5,
            v85,
            Method_PartyOrganizationRootComponent___c__OnSelectWavePartyList_b__105_5__,
            0LL);
          v86 = PartyOrganizationRootComponent___c_TypeInfo->static_fields;
          v86->__9__105_5 = _9__105_5;
          sub_B2C2F8(&v86->__9__105_5, _9__105_5);
        }
        if ( v81 )
        {
          CommonUI__OpenNotificationDialog(v81, v79, v80, _9__105_5, -1, 0, 0, 0, 0, 26, 0, 0, 0LL, 0LL);
          return;
        }
        goto LABEL_96;
      }
      if ( !this->fields.isCheckFriendshipUpItemAvailable )
        goto LABEL_69;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      partyListMenu = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !partyListMenu )
        goto LABEL_96;
      if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)partyListMenu, 0LL) )
      {
        v91 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v92 = LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
        v93 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v93,
          (Il2CppObject *)this,
          Method_PartyOrganizationRootComponent__OnSelectWavePartyList_b__105_3__,
          0LL);
        if ( v91 )
        {
          CommonUI__OpenNotificationDialog(
            v91,
            (System_String_o *)StringLiteral_1/*""*/,
            v92,
            v93,
            -1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0LL,
            0LL);
          return;
        }
LABEL_96:
        sub_B2C434(partyListMenu, v37);
      }
LABEL_69:
      PartyOrganizationRootComponent__SetCampaignItemIdBattleSutupInfo(this, v76);
      partyListMenu = (int64_t)this->fields.myFSM;
      if ( !partyListMenu )
        goto LABEL_96;
      v66 = &StringLiteral_3079/*"CLICK_START"*/;
LABEL_71:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)partyListMenu, (System_String_o *)*v66, 0LL);
      return;
    case 7:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventDeckMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      partyListMenu = NetworkManager__get_UserId(0LL);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_96;
      eventId = battleSetupInfo->fields.eventId;
      v70 = partyListMenu;
      partyListMenu = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
      v71 = this->fields.battleSetupInfo;
      if ( !v71 )
        goto LABEL_96;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_96;
      partyListMenu = (int64_t)UserEventDeckMaster__getDeckList(
                                 Master_WarQuestSelectionMaster,
                                 v70,
                                 eventId,
                                 partyListMenu,
                                 v71->fields.questPhase,
                                 0LL);
      if ( !partyListMenu )
        goto LABEL_96;
      if ( !*(_DWORD *)(partyListMenu + 24) )
        goto LABEL_97;
      if ( !this->fields.waveBattlePartyOrganizationMenu )
        goto LABEL_96;
      WaveBattlePartyOrganizationMenu__UpdateInfo(
        this->fields.waveBattlePartyOrganizationMenu,
        *(UserEventDeckEntity_o **)(partyListMenu + 32),
        0LL);
      v72 = this->fields.baseDeckItemList;
      if ( !v72 )
        goto LABEL_96;
      v73 = this->fields.selectPartyNum;
      if ( (unsigned int)v73 >= v72->max_length )
        goto LABEL_97;
      partyListMenu = (int64_t)v72->m_Items[v73];
      if ( !partyListMenu )
        goto LABEL_96;
      partyListMenu = (int64_t)PartyListViewItem__GetMember(
                                 (PartyListViewItem_o *)partyListMenu,
                                 this->fields.selectPartyMemberNum,
                                 0LL);
      if ( !partyListMenu )
        goto LABEL_96;
      PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)partyListMenu, 0LL);
      partyListMenu = (int64_t)this->fields.partyListMenu;
      if ( !partyListMenu )
        goto LABEL_96;
      PartyListMenu__Init((PartyListMenu_o *)partyListMenu, 0LL);
      return;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__OnSelectedOrganizationChange(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        int32_t m,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  PartyOrganizationRootComponent___c__DisplayClass236_0_o *v24; // x20
  void *myFSM; // x0
  const MethodInfo *v26; // x1
  __int64 *v27; // x8
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  WebViewManager_o *Instance; // x0
  PartyListViewItem_array *v31; // x20
  PartyListViewItem_o *v32; // x21
  int32_t v33; // w22
  EventUpValSetupInfo_o *v34; // x23
  CommonUI_o *v35; // x24
  EquipGraphListMenu_CallbackFunc_o *v36; // x25
  const MethodInfo *v37; // x1
  PartyServantSelectMenu_o *partyServantSelectMenu; // x20
  PartyListViewItem_array *baseDeckItemList; // x21
  PartyListViewItem_o *partyItem; // x22
  int32_t selectPartyMemberNum; // w23
  EventUpValSetupInfo_o *setupInfo2; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  PartyServantSelectMenu_CallbackFunc_o *v44; // x26
  System_Action_o *openCallback; // x27
  PartyServantSelectMenu_o *v46; // x22
  PartyListViewItem_array *waveBattleDeckItemList; // x23
  PartyListViewItem_o *v48; // x24
  int32_t v49; // w25
  EventUpValSetupInfo_o *v50; // x20
  QuestRestrictionInfo_o *v51; // x21
  PartyServantSelectMenu_CallbackFunc_o *v52; // x26
  System_Action_o *v53; // x27
  System_String_o *v54; // x21
  char v55; // w22
  bool IsNotIndividuality; // w23
  SelectMyServantOrNpcDialog_CallbackFunc_o *v57; // x24
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x2

  if ( (byte_4185046 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&EquipGraphListMenu_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo, v8);
    sub_B2C35C(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v9);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__, v10);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectOrganizationChangeServantEquip__, v11);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectedOrganizationChangeServant__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v14);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v15);
    sub_B2C35C(&SoundManager_TypeInfo, v16);
    sub_B2C35C(&Method_PartyOrganizationRootComponent___c__DisplayClass236_0__OnSelectedOrganizationChange_b__0__, v17);
    sub_B2C35C(&PartyOrganizationRootComponent___c__DisplayClass236_0_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_3063/*"CLICK_INFOMATION"*/, v19);
    sub_B2C35C(&StringLiteral_3054/*"CLICK_DECIDE"*/, v20);
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, v21);
    sub_B2C35C(&StringLiteral_3073/*"CLICK_REMOVE"*/, v22);
    sub_B2C35C(&StringLiteral_3058/*"CLICK_EVENT_POINT"*/, v23);
    byte_4185046 = 1;
  }
  v24 = (PartyOrganizationRootComponent___c__DisplayClass236_0_o *)sub_B2C42C(PartyOrganizationRootComponent___c__DisplayClass236_0_TypeInfo);
  PartyOrganizationRootComponent___c__DisplayClass236_0___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_70;
  v24->fields.__4__this = this;
  sub_B2C2F8(&v24->fields, this);
  v24->fields.m = m;
  this->fields.changePartyMode = 0;
  this->fields.selectPartyMemberNum = v24->fields.m;
  switch ( result )
  {
    case 0:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_70;
      v27 = &StringLiteral_3043/*"CLICK_BACK"*/;
      goto LABEL_15;
    case 1:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_70;
      v27 = &StringLiteral_3054/*"CLICK_DECIDE"*/;
      goto LABEL_15;
    case 2:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_70;
      v27 = &StringLiteral_3073/*"CLICK_REMOVE"*/;
      goto LABEL_15;
    case 3:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_70;
      v27 = &StringLiteral_3063/*"CLICK_INFOMATION"*/;
      goto LABEL_15;
    case 4:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_70;
      v27 = &StringLiteral_3058/*"CLICK_EVENT_POINT"*/;
LABEL_15:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v27, 0LL);
      return;
    case 5:
      myFSM = this->fields.partyItem;
      if ( !myFSM )
        goto LABEL_70;
      myFSM = PartyListViewItem__GetMember((PartyListViewItem_o *)myFSM, v24->fields.m, 0LL);
      if ( this->fields.menuKind != 3 )
        goto LABEL_30;
      if ( !myFSM )
        goto LABEL_70;
      if ( !PartyOrganizationListViewItem__get_IsFixedMyServantSingle((PartyOrganizationListViewItem_o *)myFSM, 0LL) )
      {
LABEL_30:
        myFSM = this->fields.partyItem;
        if ( myFSM )
        {
          myFSM = PartyListViewItem__GetMember((PartyListViewItem_o *)myFSM, v24->fields.m, 0LL);
          if ( myFSM )
          {
            if ( *((_BYTE *)myFSM + 224) && !this->fields.isSelectedServant )
            {
              myFSM = this->fields.partyItem;
              if ( myFSM )
              {
                myFSM = PartyListViewItem__GetMember((PartyListViewItem_o *)myFSM, v24->fields.m, 0LL);
                if ( myFSM )
                {
                  v24->fields.initPos = *((_DWORD *)myFSM + 83);
                  myFSM = this->fields.partyItem;
                  if ( myFSM )
                  {
                    myFSM = PartyListViewItem__GetMember((PartyListViewItem_o *)myFSM, v24->fields.m, 0LL);
                    if ( myFSM )
                    {
                      if ( *((_BYTE *)myFSM + 225) )
                      {
                        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !SoundManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                        }
                        SoundManager__playSystemSe(0, 0LL);
                        myFSM = this->fields.questRestrictionInfo;
                        if ( myFSM )
                        {
                          myFSM = QuestRestrictionInfo__GetRestrictedName(
                                    (QuestRestrictionInfo_o *)myFSM,
                                    v24->fields.initPos,
                                    0LL);
                          if ( this->fields.questRestrictionInfo )
                          {
                            v54 = (System_String_o *)myFSM;
                            myFSM = (void *)QuestRestrictionInfo__IsSelectableNormalSupport(
                                              this->fields.questRestrictionInfo,
                                              v24->fields.initPos,
                                              0LL);
                            if ( this->fields.questRestrictionInfo )
                            {
                              v55 = (char)myFSM;
                              IsNotIndividuality = QuestRestrictionInfo__IsNotIndividuality(
                                                     this->fields.questRestrictionInfo,
                                                     v24->fields.initPos,
                                                     0LL);
                              v57 = (SelectMyServantOrNpcDialog_CallbackFunc_o *)sub_B2C42C(SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo);
                              SelectMyServantOrNpcDialog_CallbackFunc___ctor(
                                v57,
                                (Il2CppObject *)v24,
                                Method_PartyOrganizationRootComponent___c__DisplayClass236_0__OnSelectedOrganizationChange_b__0__,
                                0LL);
                              myFSM = this->fields.selectMyServantOrNpcDialog;
                              if ( myFSM )
                              {
                                SelectMyServantOrNpcDialog__Open(
                                  (SelectMyServantOrNpcDialog_o *)myFSM,
                                  v54,
                                  v57,
                                  0,
                                  v55 & 1,
                                  IsNotIndividuality,
                                  0LL);
                                return;
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !SoundManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                        }
                        SoundManager__playSystemSe(0, 0LL);
                        PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog(this, v58);
                        PartyOrganizationRootComponent__RecoverInputShowMenu(this, v59);
                        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                        }
                        myFSM = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( myFSM )
                        {
                          *((_DWORD *)myFSM + 12) = v24->fields.m + 1;
                          myFSM = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                          if ( myFSM )
                          {
                            *((_DWORD *)myFSM + 13) = v24->fields.initPos;
                            myFSM = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( myFSM )
                            {
                              *((_DWORD *)myFSM + 14) = v24->fields.m + 1;
                              myFSM = this->fields.questRestrictionInfo;
                              if ( myFSM )
                              {
                                QuestRestrictionInfo__SetDeckInfo_31220960(
                                  (QuestRestrictionInfo_o *)myFSM,
                                  this->fields.partyItem,
                                  this->fields.selectPartyMemberNum,
                                  0LL);
                                PartyOrganizationRootComponent__SceneBack(this, 1, v60);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              myFSM = this->fields.titleInfo;
              this->fields.isSelectedServant = 0;
              this->fields.state = 17;
              if ( myFSM )
              {
                myFSM = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFSM, 0LL);
                if ( myFSM )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFSM, 0, 0LL);
                  myFSM = this->fields.backSkinSprite;
                  if ( myFSM )
                  {
                    myFSM = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFSM, 0LL);
                    if ( myFSM )
                    {
                      myFSM = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)myFSM, 0LL);
                      if ( myFSM )
                      {
                        myFSM = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)myFSM, 0LL);
                        if ( myFSM )
                        {
                          myFSM = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFSM, 0LL);
                          if ( myFSM )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFSM, 0, 0LL);
                            if ( this->fields.tutorialState == 2 )
                            {
                              partyServantSelectMenu = this->fields.partyServantSelectMenu;
                              baseDeckItemList = this->fields.baseDeckItemList;
                              partyItem = this->fields.partyItem;
                              selectPartyMemberNum = this->fields.selectPartyMemberNum;
                              setupInfo2 = this->fields.setupInfo2;
                              questRestrictionInfo = this->fields.questRestrictionInfo;
                              v44 = (PartyServantSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_CallbackFunc_TypeInfo);
                              PartyServantSelectMenu_CallbackFunc___ctor(
                                v44,
                                (Il2CppObject *)this,
                                (intptr_t)Method_PartyOrganizationRootComponent_EndSelectedOrganizationChangeServant__,
                                0LL);
                              openCallback = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                              System_Action___ctor(
                                openCallback,
                                (Il2CppObject *)this,
                                Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__,
                                0LL);
                              if ( partyServantSelectMenu )
                              {
                                PartyServantSelectMenu__Open(
                                  partyServantSelectMenu,
                                  baseDeckItemList,
                                  partyItem,
                                  selectPartyMemberNum,
                                  1,
                                  setupInfo2,
                                  questRestrictionInfo,
                                  v44,
                                  openCallback,
                                  0LL);
                                return;
                              }
                            }
                            else
                            {
                              PartyOrganizationRootComponent__SetWaveBattleDeckItemList(this, v37);
                              v46 = this->fields.partyServantSelectMenu;
                              waveBattleDeckItemList = this->fields.waveBattleDeckItemList;
                              v48 = this->fields.partyItem;
                              v49 = this->fields.selectPartyMemberNum;
                              v50 = this->fields.setupInfo2;
                              v51 = this->fields.questRestrictionInfo;
                              v52 = (PartyServantSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_CallbackFunc_TypeInfo);
                              PartyServantSelectMenu_CallbackFunc___ctor(
                                v52,
                                (Il2CppObject *)this,
                                (intptr_t)Method_PartyOrganizationRootComponent_EndSelectedOrganizationChangeServant__,
                                0LL);
                              v53 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                              System_Action___ctor(
                                v53,
                                (Il2CppObject *)this,
                                Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__,
                                0LL);
                              if ( v46 )
                              {
                                PartyServantSelectMenu__Open(
                                  v46,
                                  waveBattleDeckItemList,
                                  v48,
                                  v49,
                                  0,
                                  v50,
                                  v51,
                                  v52,
                                  v53,
                                  0LL);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_70:
        sub_B2C434(myFSM, v26);
      }
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      PartyOrganizationRootComponent__RecoverInputShowMenu(this, v28);
      return;
    case 6:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this->fields.state = 19;
      PartyOrganizationRootComponent__SetWaveBattleDeckItemList(this, v29);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v31 = this->fields.waveBattleDeckItemList;
      v32 = this->fields.partyItem;
      v33 = this->fields.selectPartyMemberNum;
      v34 = this->fields.setupInfo2;
      v35 = (CommonUI_o *)Instance;
      v36 = (EquipGraphListMenu_CallbackFunc_o *)sub_B2C42C(EquipGraphListMenu_CallbackFunc_TypeInfo);
      EquipGraphListMenu_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndSelectOrganizationChangeServantEquip__,
        0LL);
      if ( !v35 )
        goto LABEL_70;
      CommonUI__OpenEquipGraphListMenu(v35, v31, v32, v33, v34, v36, 0LL);
      return;
    case 7:
      PartyOrganizationRootComponent__ShowQuestInformation(this, v26);
      return;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__OnSelectedOrganizationSwap(
        PartyOrganizationRootComponent_o *this,
        int32_t result,
        int32_t m,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  PartyOrganizationRootComponent___c__DisplayClass243_0_o *v26; // x20
  void *myFSM; // x0
  const MethodInfo *v28; // x1
  __int64 *v29; // x8
  int32_t mainMenuMode; // w8
  struct PartyListViewItem_array *baseDeckItemList; // x8
  __int64 v32; // x20
  unsigned __int64 max_length; // x10
  unsigned __int64 v34; // x9
  struct PartyListViewItem_array *waveBattleDeckItemList; // x10
  const MethodInfo *v36; // x1
  PartyServantSelectMenu_o *partyServantSelectMenu; // x20
  PartyListViewItem_array *v38; // x21
  PartyListViewItem_o *partyItem; // x22
  int32_t selectPartyMemberNum; // w23
  EventUpValSetupInfo_o *setupInfo2; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  PartyServantSelectMenu_CallbackFunc_o *v43; // x26
  System_Action_o *openCallback; // x27
  WebViewManager_o *Instance; // x0
  PartyListViewItem_array *v46; // x20
  PartyListViewItem_o *v47; // x21
  int32_t v48; // w22
  EventUpValSetupInfo_o *v49; // x23
  CommonUI_o *v50; // x24
  EquipGraphListMenu_CallbackFunc_o *v51; // x25
  PartyServantSelectMenu_o *v52; // x22
  PartyListViewItem_array *v53; // x23
  PartyListViewItem_o *v54; // x24
  int32_t v55; // w25
  EventUpValSetupInfo_o *v56; // x20
  QuestRestrictionInfo_o *v57; // x21
  PartyServantSelectMenu_CallbackFunc_o *v58; // x26
  System_Action_o *v59; // x27
  System_String_o *v60; // x21
  char v61; // w22
  bool IsNotIndividuality; // w23
  SelectMyServantOrNpcDialog_CallbackFunc_o *v63; // x24
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x2
  __int64 v69; // x0

  if ( (byte_418504B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&EquipGraphListMenu_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo, v8);
    sub_B2C35C(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v9);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__, v10);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectOrganizationSwapServantEquip__, v11);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__, v12);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectedOrganizationSwap__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v15);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v16);
    sub_B2C35C(&SoundManager_TypeInfo, v17);
    sub_B2C35C(&Method_PartyOrganizationRootComponent___c__DisplayClass243_0__OnSelectedOrganizationSwap_b__0__, v18);
    sub_B2C35C(&PartyOrganizationRootComponent___c__DisplayClass243_0_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_3063/*"CLICK_INFOMATION"*/, v20);
    sub_B2C35C(&StringLiteral_3054/*"CLICK_DECIDE"*/, v21);
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, v22);
    sub_B2C35C(&StringLiteral_9357/*"NO_MODIFY"*/, v23);
    sub_B2C35C(&StringLiteral_3073/*"CLICK_REMOVE"*/, v24);
    sub_B2C35C(&StringLiteral_3058/*"CLICK_EVENT_POINT"*/, v25);
    byte_418504B = 1;
  }
  v26 = (PartyOrganizationRootComponent___c__DisplayClass243_0_o *)sub_B2C42C(PartyOrganizationRootComponent___c__DisplayClass243_0_TypeInfo);
  PartyOrganizationRootComponent___c__DisplayClass243_0___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_77;
  v26->fields.__4__this = this;
  sub_B2C2F8(&v26->fields, this);
  v26->fields.m = m;
  this->fields.selectPartyMemberNum = m;
  switch ( result )
  {
    case 0:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_77;
      v29 = &StringLiteral_3043/*"CLICK_BACK"*/;
      goto LABEL_65;
    case 1:
      myFSM = this->fields.partyItem;
      this->fields.isAutoOrganization = 0;
      if ( !myFSM )
        goto LABEL_77;
      myFSM = (void *)PartyListViewItem__CompMember((PartyListViewItem_o *)myFSM, this->fields.basePartyItem, 0LL);
      if ( ((unsigned __int8)myFSM & 1) == 0 )
        goto LABEL_47;
      mainMenuMode = this->fields.mainMenuMode;
      if ( mainMenuMode != 8 || !this->fields.waveBattleDeckItemList )
        goto LABEL_61;
      baseDeckItemList = this->fields.baseDeckItemList;
      if ( !baseDeckItemList )
        goto LABEL_77;
      v32 = 4LL;
      while ( 2 )
      {
        max_length = baseDeckItemList->max_length;
        v34 = v32 - 4;
        if ( v32 - 4 >= (int)max_length )
        {
          mainMenuMode = this->fields.mainMenuMode;
LABEL_61:
          this->fields.menuMode = mainMenuMode;
          v64 = Method_PartyOrganizationRootComponent_OnSelectedOrganizationSwap__;
          if ( (*((_BYTE *)Method_PartyOrganizationRootComponent_OnSelectedOrganizationSwap__ + 75) & 2) != 0 )
            v64 = (_QWORD *)sub_B2C364(Method_PartyOrganizationRootComponent_OnSelectedOrganizationSwap__);
          v65 = (System_Reflection_MethodBase_o *)sub_B2C340(v64, v64[3]);
          OverwriteAssetSoundName__PlaySystemSe(v65, 8, 0LL);
          myFSM = this->fields.myFSM;
          if ( myFSM )
          {
            v29 = &StringLiteral_9357/*"NO_MODIFY"*/;
            goto LABEL_65;
          }
        }
        else
        {
          if ( v34 == this->fields.selectPartyNum )
            goto LABEL_27;
          if ( v34 >= max_length )
            goto LABEL_78;
          waveBattleDeckItemList = this->fields.waveBattleDeckItemList;
          if ( waveBattleDeckItemList )
          {
            if ( v34 >= waveBattleDeckItemList->max_length )
            {
LABEL_78:
              v69 = sub_B2C460(myFSM);
              sub_B2C400(v69, 0LL);
            }
            myFSM = (void *)*((_QWORD *)&baseDeckItemList->obj.klass + v32);
            if ( myFSM )
            {
              myFSM = (void *)PartyListViewItem__CompMember(
                                (PartyListViewItem_o *)myFSM,
                                *((PartyListViewItem_o **)&waveBattleDeckItemList->obj.klass + v32),
                                0LL);
              if ( ((unsigned __int8)myFSM & 1) != 0 )
              {
                baseDeckItemList = this->fields.baseDeckItemList;
LABEL_27:
                ++v32;
                if ( !baseDeckItemList )
                  goto LABEL_77;
                continue;
              }
LABEL_47:
              myFSM = this->fields.myFSM;
              if ( myFSM )
              {
                v29 = &StringLiteral_3054/*"CLICK_DECIDE"*/;
LABEL_65:
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v29, 0LL);
                return;
              }
            }
          }
        }
        goto LABEL_77;
      }
    case 2:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_77;
      v29 = &StringLiteral_3073/*"CLICK_REMOVE"*/;
      goto LABEL_65;
    case 3:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_77;
      v29 = &StringLiteral_3063/*"CLICK_INFOMATION"*/;
      goto LABEL_65;
    case 4:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_77;
      v29 = &StringLiteral_3058/*"CLICK_EVENT_POINT"*/;
      goto LABEL_65;
    case 5:
      myFSM = this->fields.partyItem;
      if ( !myFSM )
        goto LABEL_77;
      myFSM = PartyListViewItem__GetMember((PartyListViewItem_o *)myFSM, v26->fields.m, 0LL);
      if ( !myFSM )
        goto LABEL_77;
      if ( !*((_BYTE *)myFSM + 224) || this->fields.isSelectedServant )
      {
        myFSM = this->fields.titleInfo;
        this->fields.isSelectedServant = 0;
        this->fields.state = 18;
        if ( myFSM )
        {
          myFSM = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFSM, 0LL);
          if ( myFSM )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFSM, 0, 0LL);
            myFSM = this->fields.titleInfo2;
            if ( myFSM )
            {
              TitleInfoControl__setTitleInfo_19532804((TitleInfoControl_o *)myFSM, this->fields.myFSM, 2, 70, 0LL);
              myFSM = this->fields.backSkinSprite;
              if ( myFSM )
              {
                myFSM = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFSM, 0LL);
                if ( myFSM )
                {
                  myFSM = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)myFSM, 0LL);
                  if ( myFSM )
                  {
                    myFSM = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)myFSM, 0LL);
                    if ( myFSM )
                    {
                      myFSM = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myFSM, 0LL);
                      if ( myFSM )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFSM, 0, 0LL);
                        if ( this->fields.tutorialState == 2 )
                        {
                          partyServantSelectMenu = this->fields.partyServantSelectMenu;
                          v38 = this->fields.baseDeckItemList;
                          partyItem = this->fields.partyItem;
                          selectPartyMemberNum = this->fields.selectPartyMemberNum;
                          setupInfo2 = this->fields.setupInfo2;
                          questRestrictionInfo = this->fields.questRestrictionInfo;
                          v43 = (PartyServantSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_CallbackFunc_TypeInfo);
                          PartyServantSelectMenu_CallbackFunc___ctor(
                            v43,
                            (Il2CppObject *)this,
                            (intptr_t)Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__,
                            0LL);
                          openCallback = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                          System_Action___ctor(
                            openCallback,
                            (Il2CppObject *)this,
                            Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__,
                            0LL);
                          if ( partyServantSelectMenu )
                          {
                            PartyServantSelectMenu__Open(
                              partyServantSelectMenu,
                              v38,
                              partyItem,
                              selectPartyMemberNum,
                              1,
                              setupInfo2,
                              questRestrictionInfo,
                              v43,
                              openCallback,
                              0LL);
                            return;
                          }
                        }
                        else
                        {
                          PartyOrganizationRootComponent__SetWaveBattleDeckItemList(this, v36);
                          v52 = this->fields.partyServantSelectMenu;
                          v53 = this->fields.waveBattleDeckItemList;
                          v54 = this->fields.partyItem;
                          v55 = this->fields.selectPartyMemberNum;
                          v56 = this->fields.setupInfo2;
                          v57 = this->fields.questRestrictionInfo;
                          v58 = (PartyServantSelectMenu_CallbackFunc_o *)sub_B2C42C(PartyServantSelectMenu_CallbackFunc_TypeInfo);
                          PartyServantSelectMenu_CallbackFunc___ctor(
                            v58,
                            (Il2CppObject *)this,
                            (intptr_t)Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__,
                            0LL);
                          v59 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                          System_Action___ctor(
                            v59,
                            (Il2CppObject *)this,
                            Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__,
                            0LL);
                          if ( v52 )
                          {
                            PartyServantSelectMenu__Open(v52, v53, v54, v55, 0, v56, v57, v58, v59, 0LL);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_77;
      }
      v26->fields.initPos = *((_DWORD *)myFSM + 83);
      if ( *((_BYTE *)myFSM + 225) )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        myFSM = this->fields.questRestrictionInfo;
        if ( myFSM )
        {
          myFSM = QuestRestrictionInfo__GetRestrictedName((QuestRestrictionInfo_o *)myFSM, v26->fields.initPos, 0LL);
          if ( this->fields.questRestrictionInfo )
          {
            v60 = (System_String_o *)myFSM;
            myFSM = (void *)QuestRestrictionInfo__IsSelectableNormalSupport(
                              this->fields.questRestrictionInfo,
                              v26->fields.initPos,
                              0LL);
            if ( this->fields.questRestrictionInfo )
            {
              v61 = (char)myFSM;
              IsNotIndividuality = QuestRestrictionInfo__IsNotIndividuality(
                                     this->fields.questRestrictionInfo,
                                     v26->fields.initPos,
                                     0LL);
              v63 = (SelectMyServantOrNpcDialog_CallbackFunc_o *)sub_B2C42C(SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo);
              SelectMyServantOrNpcDialog_CallbackFunc___ctor(
                v63,
                (Il2CppObject *)v26,
                Method_PartyOrganizationRootComponent___c__DisplayClass243_0__OnSelectedOrganizationSwap_b__0__,
                0LL);
              myFSM = this->fields.selectMyServantOrNpcDialog;
              if ( myFSM )
              {
                SelectMyServantOrNpcDialog__Open(
                  (SelectMyServantOrNpcDialog_o *)myFSM,
                  v60,
                  v63,
                  0,
                  v61 & 1,
                  IsNotIndividuality,
                  0LL);
                return;
              }
            }
          }
        }
LABEL_77:
        sub_B2C434(myFSM, v28);
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog(this, v66);
      PartyOrganizationRootComponent__RecoverInputShowMenu(this, v67);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      myFSM = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !myFSM )
        goto LABEL_77;
      *((_DWORD *)myFSM + 12) = v26->fields.m + 1;
      myFSM = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !myFSM )
        goto LABEL_77;
      *((_DWORD *)myFSM + 13) = v26->fields.initPos;
      myFSM = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !myFSM )
        goto LABEL_77;
      *((_DWORD *)myFSM + 14) = v26->fields.m + 1;
      myFSM = this->fields.questRestrictionInfo;
      if ( !myFSM )
        goto LABEL_77;
      QuestRestrictionInfo__SetDeckInfo_31220960(
        (QuestRestrictionInfo_o *)myFSM,
        this->fields.partyItem,
        this->fields.selectPartyMemberNum,
        0LL);
      PartyOrganizationRootComponent__SceneBack(this, 1, v68);
      return;
    case 6:
      this->fields.state = 20;
      PartyOrganizationRootComponent__SetWaveBattleDeckItemList(this, v28);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v46 = this->fields.waveBattleDeckItemList;
      v47 = this->fields.partyItem;
      v48 = this->fields.selectPartyMemberNum;
      v49 = this->fields.setupInfo2;
      v50 = (CommonUI_o *)Instance;
      v51 = (EquipGraphListMenu_CallbackFunc_o *)sub_B2C42C(EquipGraphListMenu_CallbackFunc_TypeInfo);
      EquipGraphListMenu_CallbackFunc___ctor(
        v51,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndSelectOrganizationSwapServantEquip__,
        0LL);
      if ( !v50 )
        goto LABEL_77;
      CommonUI__OpenEquipGraphListMenu(v50, v46, v47, v48, v49, v51, 0LL);
      return;
    case 7:
      PartyOrganizationRootComponent__ShowQuestInformation(this, v28);
      return;
    default:
      return;
  }
}


void __fastcall PartyOrganizationRootComponent__OpenRestrictionHelpDialog(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x19
  __int64 v3; // x1
  struct System_Int32_array *restrictionHelpList; // x8
  __int64 restrictionHelpCount; // x8
  struct System_Int32_array *v6; // x9
  PartyListViewItem_o *v7; // x20
  int32_t v8; // w22
  System_String_o *v9; // x21
  int32_t DialogType; // w0
  PartyOrganizationRestrictionHelpDialog_o *partyOrganizationRestrictionHelpDialog; // x25
  EventUpValSetupInfo_o *setupInfo; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x24
  int32_t v14; // w26
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v15; // x27
  PartyOrganizationRestrictionHelpDialog_o *v16; // x26
  int32_t m_CachedPtr; // w24
  int32_t v18; // w25
  EventUpValSetupInfo_o *v19; // x22
  QuestRestrictionInfo_o *v20; // x23
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v21; // x27
  __int64 v22; // x0
  const MethodInfo *v23; // [xsp+0h] [xbp-60h]

  v2 = this;
  if ( (byte_4185021 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, method);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(
                                                 &Method_PartyOrganizationRootComponent_CloseRestrictionHelpDialog__,
                                                 v3);
    byte_4185021 = 1;
  }
  restrictionHelpList = v2->fields.restrictionHelpList;
  if ( !restrictionHelpList )
    goto LABEL_18;
  if ( v2->fields.restrictionHelpCount >= (signed int)restrictionHelpList->max_length )
  {
    PartyOrganizationRootComponent__FirstRestrictionWarningDialog(v2, method);
  }
  else
  {
    this = (PartyOrganizationRootComponent_o *)v2->fields.partyListMenu;
    if ( !this )
      goto LABEL_18;
    this = (PartyOrganizationRootComponent_o *)PartyListMenu__GetItem(
                                                 (PartyListMenu_o *)this,
                                                 v2->fields.selectPartyNum,
                                                 0LL);
    restrictionHelpCount = v2->fields.restrictionHelpCount;
    v6 = v2->fields.restrictionHelpList;
    v2->fields.restrictionHelpCount = restrictionHelpCount + 1;
    if ( !v6 )
      goto LABEL_18;
    if ( (unsigned int)restrictionHelpCount >= v6->max_length )
    {
      v22 = sub_B2C460(this);
      sub_B2C400(v22, 0LL);
    }
    v7 = (PartyListViewItem_o *)this;
    this = (PartyOrganizationRootComponent_o *)v2->fields.questRestrictionInfo;
    if ( !this )
      goto LABEL_18;
    v8 = v6->m_Items[restrictionHelpCount + 1];
    this = (PartyOrganizationRootComponent_o *)QuestRestrictionInfo__GetDialogMessage(
                                                 (QuestRestrictionInfo_o *)this,
                                                 v8,
                                                 0LL);
    if ( !v2->fields.questRestrictionInfo )
      goto LABEL_18;
    v9 = (System_String_o *)this;
    this = (PartyOrganizationRootComponent_o *)QuestRestrictionInfo__IsUseOldMaster(
                                                 v2->fields.questRestrictionInfo,
                                                 0LL);
    if ( !v2->fields.questRestrictionInfo )
      goto LABEL_18;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      DialogType = QuestRestrictionInfo__GetDialogType(v2->fields.questRestrictionInfo, v8, 0LL);
      partyOrganizationRestrictionHelpDialog = v2->fields.partyOrganizationRestrictionHelpDialog;
      setupInfo = v2->fields.setupInfo;
      questRestrictionInfo = v2->fields.questRestrictionInfo;
      v14 = DialogType;
      v15 = (PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
      PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)v2,
        Method_PartyOrganizationRootComponent_CloseRestrictionHelpDialog__,
        0LL);
      if ( partyOrganizationRestrictionHelpDialog )
      {
        PartyOrganizationRestrictionHelpDialog__Open(
          partyOrganizationRestrictionHelpDialog,
          v7,
          v14,
          v9,
          setupInfo,
          questRestrictionInfo,
          v15,
          v8,
          v23);
        return;
      }
LABEL_18:
      sub_B2C434(this, method);
    }
    this = (PartyOrganizationRootComponent_o *)QuestRestrictionInfo__GetDialogMessageInfo(
                                                 v2->fields.questRestrictionInfo,
                                                 v8,
                                                 0LL);
    if ( !this )
      goto LABEL_18;
    v16 = v2->fields.partyOrganizationRestrictionHelpDialog;
    m_CachedPtr = this->fields.m_CachedPtr;
    v18 = *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1);
    v19 = v2->fields.setupInfo;
    v20 = v2->fields.questRestrictionInfo;
    v21 = (PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
    PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)v2,
      Method_PartyOrganizationRootComponent_CloseRestrictionHelpDialog__,
      0LL);
    if ( !v16 )
      goto LABEL_18;
    PartyOrganizationRestrictionHelpDialog__Open_19913556(v16, v7, m_CachedPtr, v18, v9, v19, v20, v21, v23);
  }
}


void __fastcall PartyOrganizationRootComponent__OpenRestrictionNotSatisfyDialog(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *restrictionNotSatisfyDialog; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *partyListMenu; // x0
  UnityEngine_GameObject_o *restrictionNotSatisfyDialogPrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x0
  struct RestrictionNotSatisfyDialog_o *Component_srcLineSprite; // x0
  RestrictionNotSatisfyDialog_o *v13; // x20
  PartyListViewItem_o *partyItem; // x21
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  RestrictionNotSatisfyDialog_CloseDelegate_o *v16; // x23

  if ( (byte_418503B & 1) == 0 )
  {
    sub_B2C35C(&RestrictionNotSatisfyDialog_CloseDelegate_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyDialog___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRestrictionNotSatisfyDialog__, v5);
    byte_418503B = 1;
  }
  restrictionNotSatisfyDialog = (UnityEngine_Object_o *)this->fields.restrictionNotSatisfyDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(restrictionNotSatisfyDialog, 0LL, 0LL) )
  {
    partyListMenu = (UnityEngine_Component_o *)this->fields.partyListMenu;
    if ( !partyListMenu )
      goto LABEL_13;
    restrictionNotSatisfyDialogPrefab = this->fields.restrictionNotSatisfyDialogPrefab;
    gameObject = UnityEngine_Component__get_gameObject(partyListMenu, 0LL);
    Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
    partyListMenu = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 restrictionNotSatisfyDialogPrefab,
                                                 Parent,
                                                 0LL,
                                                 0LL);
    if ( !partyListMenu
      || (Component_srcLineSprite = (struct RestrictionNotSatisfyDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              (UnityEngine_GameObject_o *)partyListMenu,
                                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RestrictionNotSatisfyDialog___),
          this->fields.restrictionNotSatisfyDialog = Component_srcLineSprite,
          sub_B2C2F8(&this->fields.restrictionNotSatisfyDialog, Component_srcLineSprite),
          (partyListMenu = (UnityEngine_Component_o *)this->fields.restrictionNotSatisfyDialog) == 0LL) )
    {
LABEL_13:
      sub_B2C434(partyListMenu, v7);
    }
    RestrictionNotSatisfyDialog__Init((RestrictionNotSatisfyDialog_o *)partyListMenu, 0LL);
  }
  v13 = this->fields.restrictionNotSatisfyDialog;
  partyItem = this->fields.partyItem;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v16 = (RestrictionNotSatisfyDialog_CloseDelegate_o *)sub_B2C42C(RestrictionNotSatisfyDialog_CloseDelegate_TypeInfo);
  RestrictionNotSatisfyDialog_CloseDelegate___ctor(
    v16,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndRestrictionNotSatisfyDialog__,
    0LL);
  if ( !v13 )
    goto LABEL_13;
  RestrictionNotSatisfyDialog__Open(v13, partyItem, questRestrictionInfo, v16, 0LL);
}


void __fastcall PartyOrganizationRootComponent__OpenSelectMyServantOrNpcDialog(
        PartyOrganizationRootComponent_o *this,
        System_String_o *name,
        SelectMyServantOrNpcDialog_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        bool isSelectableSupport,
        bool isNotIndividuality,
        const MethodInfo *method)
{
  SelectMyServantOrNpcDialog_o *selectMyServantOrNpcDialog; // x0

  selectMyServantOrNpcDialog = this->fields.selectMyServantOrNpcDialog;
  if ( !selectMyServantOrNpcDialog )
    sub_B2C434(0LL, name);
  SelectMyServantOrNpcDialog__Open(
    selectMyServantOrNpcDialog,
    name,
    callback,
    canMaskTouchClose,
    isSelectableSupport,
    isNotIndividuality,
    0LL);
}


bool __fastcall PartyOrganizationRootComponent__QuestStartCheckOld(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  void *partyItem; // x0
  PartyOrganizationConfirmDeckMenu_o *operationConfirmDeckMenu; // x20
  PartyListViewItem_o *v29; // x21
  PartyOrganizationConfirmDeckMenu_CallbackFunc_o *v30; // x22
  int32_t v31; // w1
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  int32_t v38; // w20
  BalanceConfig_c *v39; // x0
  int32_t v40; // w20
  struct PartyListViewItem_o *basePartyItem; // x8
  __int64 id; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x9
  struct BattleSetupInfo_o *v44; // x8
  __int64 v45; // x8
  struct BattleSetupInfo_o *v46; // x9
  struct BattleSetupInfo_o *v47; // x9
  struct BattleSetupInfo_o *v48; // x22
  struct BattleSetupInfo_o *v49; // x22
  int v50; // w23
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  PartyOrganizationConfirmSupportMenu_o *partyOrganizationConfirmSupportMenu; // x23
  PartyListViewItem_o *v54; // x20
  EventUpValSetupInfo_o *setupInfo; // x21
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  PartyOrganizationConfirmSupportMenu_CallbackFunc_o *v57; // x24
  struct PartyOrganizationConfirmMyServantMenu_o *partyOrganizationConfirmMyServantMenu; // x23
  struct PartyListViewItem_o *v59; // x20
  struct EventUpValSetupInfo_o *v60; // x21
  struct QuestRestrictionInfo_o *v61; // x22
  PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v62; // x0
  __int64 *v63; // x8
  struct PartyOrganizationConfirmMyServantMenu_o *v64; // x20
  struct PartyListViewItem_o *v65; // x21
  struct EventUpValSetupInfo_o *v66; // x22
  struct QuestRestrictionInfo_o *v67; // x23
  PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *v68; // x24
  int32_t v69; // w1
  PartyOrganizationConfirmMyServantMenu_o *v70; // x0
  PartyListViewItem_o *v71; // x2
  EventUpValSetupInfo_o *v72; // x3
  QuestRestrictionInfo_o *v73; // x4
  System_String_o *v74; // x20
  PartyListViewItem_o *v75; // x21
  bool IsUseOldMaster; // w0
  struct PartyOrganizationRestrictionHelpDialog_o *partyOrganizationRestrictionHelpDialog; // x24
  struct EventUpValSetupInfo_o *v78; // x23
  struct QuestRestrictionInfo_o *v79; // x22
  bool v80; // w26
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v81; // x25
  int32_t v82; // w2
  System_String_o *v83; // x20
  PartyListViewItem_o *v84; // x21
  bool v85; // w0
  struct PartyOrganizationRestrictionHelpDialog_o *v86; // x24
  struct EventUpValSetupInfo_o *v87; // x22
  struct QuestRestrictionInfo_o *v88; // x23
  bool v89; // w26
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v90; // x0
  PartyOrganizationRestrictionHelpDialog_o *v91; // x0
  PartyListViewItem_o *v92; // x1
  System_String_o *v93; // x3
  EventUpValSetupInfo_o *v94; // x4
  QuestRestrictionInfo_o *v95; // x5
  bool v96; // w0
  bool v97; // w26
  int32_t v99; // w3
  PartyOrganizationRestrictionHelpDialog_o *v100; // x0
  PartyListViewItem_o *v101; // x1
  int32_t v102; // w2
  System_String_o *v103; // x4
  EventUpValSetupInfo_o *v104; // x5
  QuestRestrictionInfo_o *v105; // x6
  System_String_o *NeedIndividualityMessage; // x0
  struct PartyOrganizationRestrictionHelpDialog_o *v107; // x23
  struct PartyListViewItem_o *v108; // x24
  struct EventUpValSetupInfo_o *v109; // x21
  struct QuestRestrictionInfo_o *v110; // x22
  System_String_o *v111; // x25
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v112; // x26
  PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *v113; // x7
  QuestHintDialogOpenManager_c *v114; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v116; // x21
  System_Action_o *v117; // x22
  const MethodInfo *canMaskTouchClose; // [xsp+0h] [xbp-70h]

  if ( (byte_4185038 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v3);
    sub_B2C35C(&PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo, v4);
    sub_B2C35C(&PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo, v6);
    sub_B2C35C(&PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndFixedServantPosAndSearvantNumQuestStart__, v9);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndMyServantWarningQuestStart__, v10);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSearvantNumAndFixedServantPosQuestStart__, v11);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndServantNumWarningQuestStart__, v12);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSupportWarningQuestStart__, v13);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndWarningQuestStart__, v14);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_QuestStartCheckOld__, v15);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__QuestStartCheckOld_b__217_0__, v16);
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v17);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v22);
    sub_B2C35C(&SoundManager_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v24);
    sub_B2C35C(&StringLiteral_3079/*"CLICK_START"*/, v25);
    sub_B2C35C(&StringLiteral_1/*""*/, v26);
    byte_4185038 = 1;
  }
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_204;
  partyItem = (void *)PartyListViewItem__GetStartDeckCondition((PartyListViewItem_o *)partyItem, 0LL);
  switch ( (int)partyItem )
  {
    case 0:
      if ( this->fields.mainMenuMode )
        goto LABEL_49;
      basePartyItem = this->fields.basePartyItem;
      if ( !basePartyItem )
        goto LABEL_204;
      id = basePartyItem->fields.id;
      if ( id < 1 )
        goto LABEL_49;
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_204;
      battleSetupInfo->fields.deckId = id;
LABEL_49:
      partyItem = this->fields.partyListMenu;
      if ( !partyItem )
        goto LABEL_204;
      PartyListMenu__SetEventLimitEquipSetting((PartyListMenu_o *)partyItem, 0LL);
      partyItem = this->fields.partyListMenu;
      if ( !partyItem )
        goto LABEL_204;
      partyItem = (void *)PartyListMenu__IsUseEventLimitEquipUserWill(
                            (PartyListMenu_o *)partyItem,
                            this->fields.selectPartyNum,
                            0LL);
      if ( ((unsigned __int8)partyItem & 1) == 0 )
        goto LABEL_54;
      v44 = this->fields.battleSetupInfo;
      if ( !v44 )
        goto LABEL_204;
      v44->fields.userEquipId = -1LL;
LABEL_54:
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      partyItem = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !partyItem )
        goto LABEL_204;
      v45 = *((_QWORD *)partyItem + 3);
      if ( !v45 )
        goto LABEL_69;
      v46 = this->fields.battleSetupInfo;
      if ( !v46 )
        goto LABEL_204;
      v46->fields.followerId = *(_QWORD *)(v45 + 16);
      v47 = this->fields.battleSetupInfo;
      if ( !v47 )
        goto LABEL_204;
      v47->fields.followerType = *(_DWORD *)(v45 + 36);
      v48 = this->fields.battleSetupInfo;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      partyItem = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !partyItem )
        goto LABEL_204;
      if ( !v48 )
        goto LABEL_204;
      v48->fields.followerClassId = *((_DWORD *)partyItem + 8);
      v49 = this->fields.battleSetupInfo;
      partyItem = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !partyItem || !v49 )
        goto LABEL_204;
      v49->fields.followerSupportDeckId = *((_DWORD *)partyItem + 9);
LABEL_69:
      partyItem = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !partyItem )
        goto LABEL_204;
      if ( !*((_BYTE *)partyItem + 140) )
        goto LABEL_173;
      partyItem = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !partyItem )
        goto LABEL_204;
      v50 = *((_DWORD *)partyItem + 36);
      partyItem = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !partyItem )
        goto LABEL_204;
      if ( v50 == 1 )
      {
        *((_DWORD *)partyItem + 36) = 2;
        PartyOrganizationRootComponent__SetRandomLimitCountBattleSutupInfo(this, method);
        PartyOrganizationRootComponent__SetCampaignItemIdBattleSutupInfo(this, v51);
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        partyItem = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( partyItem )
        {
          PartyOrganizationUtility__ClearFollowerInfo((PartyOrganizationUtility_o *)partyItem, 0LL);
          BattleScriptRootComponent__GoForBattle(this->fields.battleSetupInfo, 0LL);
          if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          }
          RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
          return 1;
        }
LABEL_204:
        sub_B2C434(partyItem, method);
      }
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)partyItem, 0LL);
LABEL_173:
      if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      }
      if ( !byte_4185066 )
      {
        sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, method);
        byte_4185066 = 1;
      }
      v114 = QuestHintDialogOpenManager_TypeInfo;
      if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        v114 = QuestHintDialogOpenManager_TypeInfo;
      }
      if ( v114->static_fields->temporarilyId )
      {
        if ( (BYTE3(v114->vtable._0_Equals.methodPtr) & 4) != 0 && !v114->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v114);
        QuestHintDialogOpenManager__ResetTemporarilyId(0LL);
      }
      if ( !this->fields.isCheckFriendshipUpItemAvailable )
        goto LABEL_192;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      partyItem = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !partyItem )
        goto LABEL_204;
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)partyItem, 0LL) )
      {
LABEL_192:
        PartyOrganizationRootComponent__SetCampaignItemIdBattleSutupInfo(this, method);
        partyItem = this->fields.myFSM;
        if ( !partyItem )
          goto LABEL_204;
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)partyItem, (System_String_o *)StringLiteral_3079/*"CLICK_START"*/, 0LL);
        return 0;
      }
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v116 = LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
      v117 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v117,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent__QuestStartCheckOld_b__217_0__,
        0LL);
      if ( !Instance )
        goto LABEL_204;
      CommonUI__OpenNotificationDialog(
        Instance,
        (System_String_o *)StringLiteral_1/*""*/,
        v116,
        v117,
        -1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0LL,
        0LL);
      return 1;
    case 1:
    case 2:
    case 3:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      v29 = this->fields.partyItem;
      v30 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndWarningQuestStart__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_204;
      v31 = 11;
      goto LABEL_161;
    case 5:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      v29 = this->fields.partyItem;
      v30 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndWarningQuestStart__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_204;
      v31 = 12;
      goto LABEL_161;
    case 6:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      v29 = this->fields.partyItem;
      v30 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndWarningQuestStart__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_204;
      v31 = 4;
      goto LABEL_161;
    case 7:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      v29 = this->fields.partyItem;
      v30 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndWarningQuestStart__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_204;
      v31 = 14;
      goto LABEL_161;
    case 8:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      v29 = this->fields.partyItem;
      v30 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndWarningQuestStart__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_204;
      v31 = 17;
      goto LABEL_161;
    case 9:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyOrganizationConfirmSupportMenu = this->fields.partyOrganizationConfirmSupportMenu;
      v54 = this->fields.partyItem;
      setupInfo = this->fields.setupInfo;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      v57 = (PartyOrganizationConfirmSupportMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmSupportMenu_CallbackFunc___ctor(
        v57,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndSupportWarningQuestStart__,
        0LL);
      if ( !partyOrganizationConfirmSupportMenu )
        goto LABEL_204;
      PartyOrganizationConfirmSupportMenu__Open(
        partyOrganizationConfirmSupportMenu,
        0,
        v54,
        setupInfo,
        questRestrictionInfo,
        v57,
        0LL);
      return 0;
    case 10:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyOrganizationConfirmMyServantMenu = this->fields.partyOrganizationConfirmMyServantMenu;
      v59 = this->fields.partyItem;
      v60 = this->fields.setupInfo;
      v61 = this->fields.questRestrictionInfo;
      v62 = (PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
      v63 = &Method_PartyOrganizationRootComponent_EndMyServantWarningQuestStart__;
      goto LABEL_169;
    case 11:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v64 = this->fields.partyOrganizationConfirmMyServantMenu;
      v65 = this->fields.partyItem;
      v66 = this->fields.setupInfo;
      v67 = this->fields.questRestrictionInfo;
      v68 = (PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmMyServantMenu_CallbackFunc___ctor(
        v68,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndMyServantWarningQuestStart__,
        0LL);
      if ( !v64 )
        goto LABEL_204;
      v69 = 1;
      v70 = v64;
      v71 = v65;
      v72 = v66;
      v73 = v67;
      goto LABEL_171;
    case 12:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      v29 = this->fields.partyItem;
      v30 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndWarningQuestStart__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_204;
      v31 = 18;
      goto LABEL_161;
    case 13:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      v29 = this->fields.partyItem;
      v30 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndWarningQuestStart__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_204;
      v31 = 19;
      goto LABEL_161;
    case 14:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyItem = this->fields.questRestrictionInfo;
      if ( !partyItem )
        goto LABEL_204;
      partyItem = QuestRestrictionInfo__GetServantNumRestrictionDialogMessage((QuestRestrictionInfo_o *)partyItem, 0LL);
      if ( !this->fields.partyListMenu )
        goto LABEL_204;
      v74 = (System_String_o *)partyItem;
      partyItem = PartyListMenu__GetItem(this->fields.partyListMenu, this->fields.selectPartyNum, 0LL);
      if ( !this->fields.questRestrictionInfo )
        goto LABEL_204;
      v75 = (PartyListViewItem_o *)partyItem;
      IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(this->fields.questRestrictionInfo, 0LL);
      partyOrganizationRestrictionHelpDialog = this->fields.partyOrganizationRestrictionHelpDialog;
      v78 = this->fields.setupInfo;
      v79 = this->fields.questRestrictionInfo;
      v80 = IsUseOldMaster;
      v81 = (PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
      PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
        v81,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndServantNumWarningQuestStart__,
        0LL);
      if ( !partyOrganizationRestrictionHelpDialog )
        goto LABEL_204;
      if ( !v80 )
        goto LABEL_163;
      v82 = 10;
      goto LABEL_149;
    case 15:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyItem = this->fields.questRestrictionInfo;
      if ( !partyItem )
        goto LABEL_204;
      if ( QuestRestrictionInfo__IsFirstServantNum((QuestRestrictionInfo_o *)partyItem, 0LL) )
      {
        partyItem = this->fields.questRestrictionInfo;
        if ( !partyItem )
          goto LABEL_204;
        partyItem = QuestRestrictionInfo__GetServantNumRestrictionDialogMessage(
                      (QuestRestrictionInfo_o *)partyItem,
                      0LL);
        if ( !this->fields.partyListMenu )
          goto LABEL_204;
        v83 = (System_String_o *)partyItem;
        partyItem = PartyListMenu__GetItem(this->fields.partyListMenu, this->fields.selectPartyNum, 0LL);
        if ( !this->fields.questRestrictionInfo )
          goto LABEL_204;
        v84 = (PartyListViewItem_o *)partyItem;
        v85 = QuestRestrictionInfo__IsUseOldMaster(this->fields.questRestrictionInfo, 0LL);
        v86 = this->fields.partyOrganizationRestrictionHelpDialog;
        v87 = this->fields.setupInfo;
        v88 = this->fields.questRestrictionInfo;
        v89 = v85;
        v90 = (PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
        v81 = v90;
        if ( v89 )
        {
          PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
            v90,
            (Il2CppObject *)this,
            Method_PartyOrganizationRootComponent_EndSearvantNumAndFixedServantPosQuestStart__,
            0LL);
          if ( !v86 )
            goto LABEL_204;
          v82 = 10;
          v91 = v86;
          v92 = v84;
          v93 = v83;
          v94 = v87;
          v95 = v88;
LABEL_150:
          PartyOrganizationRestrictionHelpDialog__Open(v91, v92, v82, v93, v94, v95, v81, 0, canMaskTouchClose);
        }
        else
        {
          PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
            v90,
            (Il2CppObject *)this,
            Method_PartyOrganizationRootComponent_EndServantNumWarningQuestStart__,
            0LL);
          if ( !v86 )
            goto LABEL_204;
          v99 = 3;
          v100 = v86;
          v101 = v84;
          v102 = 0;
          v103 = v83;
          v104 = v87;
          v105 = v88;
LABEL_196:
          v113 = v81;
LABEL_197:
          PartyOrganizationRestrictionHelpDialog__Open_19913556(
            v100,
            v101,
            v102,
            v99,
            v103,
            v104,
            v105,
            v113,
            canMaskTouchClose);
        }
      }
      else
      {
        partyOrganizationConfirmMyServantMenu = this->fields.partyOrganizationConfirmMyServantMenu;
        v59 = this->fields.partyItem;
        v60 = this->fields.setupInfo;
        v61 = this->fields.questRestrictionInfo;
        v62 = (PartyOrganizationConfirmMyServantMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmMyServantMenu_CallbackFunc_TypeInfo);
        v63 = &Method_PartyOrganizationRootComponent_EndFixedServantPosAndSearvantNumQuestStart__;
LABEL_169:
        v68 = v62;
        PartyOrganizationConfirmMyServantMenu_CallbackFunc___ctor(v62, (Il2CppObject *)this, *v63, 0LL);
        if ( !partyOrganizationConfirmMyServantMenu )
          goto LABEL_204;
        v70 = partyOrganizationConfirmMyServantMenu;
        v69 = 0;
        v71 = v59;
        v72 = v60;
        v73 = v61;
LABEL_171:
        PartyOrganizationConfirmMyServantMenu__Open(v70, v69, v71, v72, v73, v68, 0LL);
      }
      return 0;
    case 16:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyItem = this->fields.questRestrictionInfo;
      if ( !partyItem )
        goto LABEL_204;
      partyItem = QuestRestrictionInfo__GetMyServantNumRestrictionDialogMessage(
                    (QuestRestrictionInfo_o *)partyItem,
                    0LL);
      if ( !this->fields.partyListMenu )
        goto LABEL_204;
      v74 = (System_String_o *)partyItem;
      partyItem = PartyListMenu__GetItem(this->fields.partyListMenu, this->fields.selectPartyNum, 0LL);
      if ( !this->fields.questRestrictionInfo )
        goto LABEL_204;
      v75 = (PartyListViewItem_o *)partyItem;
      v96 = QuestRestrictionInfo__IsUseOldMaster(this->fields.questRestrictionInfo, 0LL);
      partyOrganizationRestrictionHelpDialog = this->fields.partyOrganizationRestrictionHelpDialog;
      v78 = this->fields.setupInfo;
      v79 = this->fields.questRestrictionInfo;
      v97 = v96;
      v81 = (PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
      PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
        v81,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndServantNumWarningQuestStart__,
        0LL);
      if ( !partyOrganizationRestrictionHelpDialog )
        goto LABEL_204;
      if ( !v97 )
      {
LABEL_163:
        v99 = 3;
        v100 = partyOrganizationRestrictionHelpDialog;
        v101 = v75;
        v102 = 0;
        v103 = v74;
        v104 = v78;
        v105 = v79;
        goto LABEL_196;
      }
      v82 = 11;
LABEL_149:
      v91 = partyOrganizationRestrictionHelpDialog;
      v92 = v75;
      v93 = v74;
      v94 = v78;
      v95 = v79;
      goto LABEL_150;
    case 17:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      v29 = this->fields.partyItem;
      v30 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndWarningQuestStart__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_204;
      v31 = 22;
      goto LABEL_161;
    case 18:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      v29 = this->fields.partyItem;
      v30 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndWarningQuestStart__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_204;
      v31 = 23;
      goto LABEL_161;
    case 19:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      v29 = this->fields.partyItem;
      v30 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndWarningQuestStart__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_204;
      v31 = 24;
      goto LABEL_161;
    case 20:
    case 21:
      v32 = Method_PartyOrganizationRootComponent_QuestStartCheckOld__;
      if ( (*((_BYTE *)Method_PartyOrganizationRootComponent_QuestStartCheckOld__ + 75) & 2) != 0 )
        v32 = (_QWORD *)sub_B2C364(Method_PartyOrganizationRootComponent_QuestStartCheckOld__);
      v33 = (System_Reflection_MethodBase_o *)sub_B2C340(v32, v32[3]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      v29 = this->fields.partyItem;
      v30 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndWarningQuestStart__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_204;
      v31 = 26;
      goto LABEL_161;
    case 22:
      v34 = Method_PartyOrganizationRootComponent_QuestStartCheckOld__;
      if ( (*((_BYTE *)Method_PartyOrganizationRootComponent_QuestStartCheckOld__ + 75) & 2) != 0 )
        v34 = (_QWORD *)sub_B2C364(Method_PartyOrganizationRootComponent_QuestStartCheckOld__);
      v35 = (System_Reflection_MethodBase_o *)sub_B2C340(v34, v34[3]);
      OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
      operationConfirmDeckMenu = this->fields.operationConfirmDeckMenu;
      v29 = this->fields.partyItem;
      v30 = (PartyOrganizationConfirmDeckMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationConfirmDeckMenu_CallbackFunc_TypeInfo);
      PartyOrganizationConfirmDeckMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndWarningQuestStart__,
        0LL);
      if ( !operationConfirmDeckMenu )
        goto LABEL_204;
      v31 = 27;
LABEL_161:
      PartyOrganizationConfirmDeckMenu__Open(operationConfirmDeckMenu, v31, v29, v30, 0LL);
      return 0;
    case 23:
      v36 = Method_PartyOrganizationRootComponent_QuestStartCheckOld__;
      if ( (*((_BYTE *)Method_PartyOrganizationRootComponent_QuestStartCheckOld__ + 75) & 2) != 0 )
        v36 = (_QWORD *)sub_B2C364(Method_PartyOrganizationRootComponent_QuestStartCheckOld__);
      v37 = (System_Reflection_MethodBase_o *)sub_B2C340(v36, v36[3]);
      OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0LL);
      v38 = 0;
      while ( 1 )
      {
        v39 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v39 = BalanceConfig_TypeInfo;
        }
        if ( v38 >= v39->static_fields->DeckMemberMax )
          break;
        partyItem = this->fields.partyItem;
        if ( !partyItem )
          goto LABEL_204;
        partyItem = PartyListViewItem__GetMember((PartyListViewItem_o *)partyItem, v38, 0LL);
        if ( !partyItem )
          goto LABEL_204;
        ++v38;
        if ( *((_BYTE *)partyItem + 340) )
        {
          v40 = *((_DWORD *)partyItem + 83);
          goto LABEL_165;
        }
      }
      v40 = 0;
LABEL_165:
      partyItem = this->fields.questRestrictionInfo;
      if ( !partyItem )
        goto LABEL_204;
      NeedIndividualityMessage = QuestRestrictionInfo__GetNeedIndividualityMessage(
                                   (QuestRestrictionInfo_o *)partyItem,
                                   v40,
                                   0LL);
      v107 = this->fields.partyOrganizationRestrictionHelpDialog;
      v108 = this->fields.partyItem;
      v109 = this->fields.setupInfo;
      v110 = this->fields.questRestrictionInfo;
      v111 = NeedIndividualityMessage;
      v112 = (PartyOrganizationRestrictionHelpDialog_CallbackFunc_o *)sub_B2C42C(PartyOrganizationRestrictionHelpDialog_CallbackFunc_TypeInfo);
      PartyOrganizationRestrictionHelpDialog_CallbackFunc___ctor(
        v112,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndServantNumWarningQuestStart__,
        0LL);
      if ( !v107 )
        goto LABEL_204;
      v100 = v107;
      v101 = v108;
      v102 = v40;
      v99 = 0;
      v103 = v111;
      v104 = v109;
      v105 = v110;
      v113 = v112;
      goto LABEL_197;
    default:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      PartyOrganizationRootComponent__RecoverInputShowMenu(this, v52);
      return 0;
  }
}


void __fastcall PartyOrganizationRootComponent__Quit(PartyOrganizationRootComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall PartyOrganizationRootComponent__RecoverInputShowMenu(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t selectPartyNum; // w20
  int32_t state; // w8
  PartyListMenu_o *v10; // x24
  int32_t v11; // w25
  PartyListViewItem_array *v12; // x23
  EventUpValSetupInfo_o *v13; // x21
  QuestRestrictionInfo_o *v14; // x22
  PartyListMenu_CallbackFunc_o *v15; // x26
  __int64 v16; // x0
  __int64 v17; // x1
  PartyListMenu_o *partyListMenu; // x24
  int32_t menuKind; // w25
  PartyListViewItem_array *baseDeckItemList; // x23
  EventUpValSetupInfo_o *setupInfo; // x21
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  PartyListMenu_CallbackFunc_o *v23; // x26
  PartyOrganizationMenu_o *partyOrganizationMenu; // x20
  int32_t v25; // w21
  PartyListViewItem_o *v26; // x22
  PartyListViewItem_o *v27; // x23
  EventUpValSetupInfo_o *v28; // x24
  QuestRestrictionInfo_o *v29; // x25
  PartyOrganizationMenu_CallbackFunc_o *v30; // x26
  PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x20
  int32_t v32; // w21
  PartyListViewItem_o *basePartyItem; // x22
  PartyListViewItem_o *partyItem; // x23
  EventUpValSetupInfo_o *v35; // x24
  QuestRestrictionInfo_o *v36; // x25
  PartyOrganizationChangeMenu_CallbackFunc_o *v37; // x26
  const MethodInfo *isRetry; // [xsp+10h] [xbp-60h]

  if ( (byte_4185000 & 1) == 0 )
  {
    sub_B2C35C(&PartyListMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectPartyList__, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectedOrganizationChange__, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectedOrganizationSwap__, v7);
    byte_4185000 = 1;
  }
  selectPartyNum = this->fields.selectPartyNum;
  if ( (selectPartyNum & 0x80000000) != 0 )
  {
    selectPartyNum = 0;
    this->fields.selectPartyNum = 0;
  }
  state = this->fields.state;
  if ( state <= 9 )
  {
    if ( state == 3 || state == 6 || state == 9 )
    {
      partyListMenu = this->fields.partyListMenu;
      menuKind = this->fields.menuKind;
      baseDeckItemList = this->fields.baseDeckItemList;
      setupInfo = this->fields.setupInfo;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      v23 = (PartyListMenu_CallbackFunc_o *)sub_B2C42C(PartyListMenu_CallbackFunc_TypeInfo);
      PartyListMenu_CallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyOrganizationRootComponent_OnSelectPartyList__,
        0LL);
      if ( !partyListMenu )
        goto LABEL_21;
      PartyListMenu__Open(
        partyListMenu,
        menuKind,
        0,
        baseDeckItemList,
        selectPartyNum,
        setupInfo,
        questRestrictionInfo,
        v23,
        0LL,
        this->fields.friendPointCampaignVal,
        0,
        0,
        1,
        0LL);
    }
  }
  else
  {
    switch ( state )
    {
      case 12:
        partyOrganizationChangeMenu = this->fields.partyOrganizationChangeMenu;
        v32 = this->fields.menuKind;
        basePartyItem = this->fields.basePartyItem;
        partyItem = this->fields.partyItem;
        v35 = this->fields.setupInfo;
        v36 = this->fields.questRestrictionInfo;
        v37 = (PartyOrganizationChangeMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationChangeMenu_CallbackFunc_TypeInfo);
        PartyOrganizationChangeMenu_CallbackFunc___ctor(
          v37,
          (Il2CppObject *)this,
          Method_PartyOrganizationRootComponent_OnSelectedOrganizationChange__,
          0LL);
        if ( !partyOrganizationChangeMenu )
          goto LABEL_21;
        PartyOrganizationChangeMenu__Open(
          partyOrganizationChangeMenu,
          v32,
          0,
          basePartyItem,
          partyItem,
          -1,
          v35,
          v36,
          v37,
          0LL,
          this->fields.friendPointCampaignVal,
          0LL);
        break;
      case 15:
        partyOrganizationMenu = this->fields.partyOrganizationMenu;
        v25 = this->fields.menuKind;
        v26 = this->fields.basePartyItem;
        v27 = this->fields.partyItem;
        v28 = this->fields.setupInfo;
        v29 = this->fields.questRestrictionInfo;
        v30 = (PartyOrganizationMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationMenu_CallbackFunc_TypeInfo);
        PartyOrganizationMenu_CallbackFunc___ctor(
          v30,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyOrganizationRootComponent_OnSelectedOrganizationSwap__,
          0LL);
        if ( !partyOrganizationMenu )
          goto LABEL_21;
        PartyOrganizationMenu__Open(
          partyOrganizationMenu,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          0LL,
          0,
          this->fields.friendPointCampaignVal,
          isRetry);
        break;
      case 32:
        v10 = this->fields.partyListMenu;
        v11 = this->fields.menuKind;
        v12 = this->fields.baseDeckItemList;
        v13 = this->fields.setupInfo;
        v14 = this->fields.questRestrictionInfo;
        v15 = (PartyListMenu_CallbackFunc_o *)sub_B2C42C(PartyListMenu_CallbackFunc_TypeInfo);
        PartyListMenu_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_PartyOrganizationRootComponent_OnSelectPartyList__,
          0LL);
        if ( v10 )
        {
          PartyListMenu__Open(
            v10,
            v11,
            0,
            v12,
            selectPartyNum,
            v13,
            v14,
            v15,
            0LL,
            this->fields.friendPointCampaignVal,
            0,
            0,
            0,
            0LL);
          return;
        }
LABEL_21:
        sub_B2C434(v16, v17);
    }
  }
}


void __fastcall PartyOrganizationRootComponent__RequestDeckCopy(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PartyListMenu_o *partyListMenu; // x0
  UserDeckEntity_o *UserDeck; // x0
  UserDeckEntity_o *v9; // x20
  UserGameEntity_o *SelfUserGame; // x0
  int64_t activeDeckId; // x21
  NetworkManager_ResultCallbackFunc_o *v12; // x22

  if ( (byte_418500C & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_DeckSetupRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestDeckCopy__, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v6);
    byte_418500C = 1;
  }
  partyListMenu = this->fields.partyListMenu;
  if ( !partyListMenu )
    goto LABEL_17;
  partyListMenu = (PartyListMenu_o *)PartyListMenu__GetItem(partyListMenu, this->fields.selectCopyPartyNum, 0LL);
  method = (const MethodInfo *)this->fields.basePartyItem;
  if ( !method )
    goto LABEL_17;
  this->fields.activeDeckId = (int64_t)method[1].rgctx_data;
  if ( !partyListMenu
    || (UserDeck = PartyListViewItem__GetUserDeck(
                     (PartyListViewItem_o *)partyListMenu,
                     (PartyListViewItem_o *)method,
                     0LL)) == 0LL )
  {
    partyListMenu = (PartyListMenu_o *)this->fields.myFSM;
    if ( partyListMenu )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)partyListMenu, (System_String_o *)StringLiteral_11079/*"REQUEST_OK"*/, 0LL);
      return;
    }
LABEL_17:
    sub_B2C434(partyListMenu, method);
  }
  v9 = UserDeck;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( SelfUserGame )
    activeDeckId = SelfUserGame->fields.activeDeckId;
  else
    activeDeckId = 0LL;
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndRequestDeckCopy__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  partyListMenu = (PartyListMenu_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                       v12,
                                       (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_DeckSetupRequest___);
  if ( !partyListMenu )
    goto LABEL_17;
  DeckSetupRequest__beginRequest((DeckSetupRequest_o *)partyListMenu, activeDeckId, v9, 0LL);
}


void __fastcall PartyOrganizationRootComponent__RequestDeckName(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct PartyListViewItem_o *basePartyItem; // x21
  PlayMakerFSM_o *myFSM; // x0
  NetworkManager_ResultCallbackFunc_o *v9; // x20

  if ( (byte_418500A & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_DeckEditNameRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestDeckName__, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v6);
    byte_418500A = 1;
  }
  basePartyItem = this->fields.basePartyItem;
  if ( !basePartyItem || System_String__IsNullOrEmpty(this->fields.editDeckName, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11079/*"REQUEST_OK"*/, 0LL);
      return;
    }
LABEL_12:
    sub_B2C434(myFSM, method);
  }
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndRequestDeckName__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  myFSM = (PlayMakerFSM_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                              v9,
                              (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_DeckEditNameRequest___);
  if ( !myFSM )
    goto LABEL_12;
  DeckEditNameRequest__beginRequest(
    (DeckEditNameRequest_o *)myFSM,
    basePartyItem->fields.id,
    this->fields.editDeckName,
    0LL);
}


void __fastcall PartyOrganizationRootComponent__RequestOrganizationChange(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x8
  PartyListViewItem_o *partyItem; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool v13; // w1
  UserEventDeckEntity_o *UserEventDeck; // x0
  UserEventDeckEntity_o *v15; // x20
  NetworkManager_ResultCallbackFunc_o *v16; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t eventId; // w22
  EventDeckSetupRequest_o *v19; // x21
  struct BattleSetupInfo_o *v20; // x8
  UserDeckEntity_o *UserDeck; // x0
  UserDeckEntity_o *v22; // x21
  NetworkManager_ResultCallbackFunc_o *v23; // x22

  v2 = this;
  if ( (byte_4185010 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_DeckSetupRequest___, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventDeckSetupRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestOrganizationChange__, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestOrganizationSelect__, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v9);
    byte_4185010 = 1;
  }
  partyOrganizationChangeMenu = v2->fields.partyOrganizationChangeMenu;
  if ( !partyOrganizationChangeMenu )
    goto LABEL_27;
  partyItem = partyOrganizationChangeMenu->fields.partyItem;
  if ( !partyItem )
    goto LABEL_25;
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    v13 = questRestrictionInfo->fields.eventDeckNum > 0;
  else
    v13 = 0;
  if ( PartyListViewItem__IsSpecificMenuKind_31930304(v2->fields.menuKind, v13, 0LL) )
  {
    UserEventDeck = PartyListViewItem__GetUserEventDeck(partyItem, 0LL);
    if ( UserEventDeck )
    {
      v15 = UserEventDeck;
      this = (PartyOrganizationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
        v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v16,
          (Il2CppObject *)v2,
          Method_PartyOrganizationRootComponent_EndRequestOrganizationSelect__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (PartyOrganizationRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                     v16,
                                                     (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventDeckSetupRequest___);
        battleSetupInfo = v2->fields.battleSetupInfo;
        if ( battleSetupInfo )
        {
          eventId = battleSetupInfo->fields.eventId;
          v19 = (EventDeckSetupRequest_o *)this;
          this = (PartyOrganizationRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
          v20 = v2->fields.battleSetupInfo;
          if ( v20 )
          {
            if ( v19 )
            {
              EventDeckSetupRequest__beginRequest(v19, v15, eventId, (int32_t)this, v20->fields.questPhase, 0LL);
              return;
            }
          }
        }
      }
LABEL_27:
      sub_B2C434(this, method);
    }
    goto LABEL_25;
  }
  UserDeck = PartyListViewItem__GetUserDeck(partyItem, 0LL, 0LL);
  if ( !UserDeck )
  {
LABEL_25:
    this = (PartyOrganizationRootComponent_o *)v2->fields.myFSM;
    v2->fields.state = 1;
    if ( !this )
      goto LABEL_27;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11077/*"REQUEST_NG"*/, 0LL);
    return;
  }
  v22 = UserDeck;
  this = (PartyOrganizationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_27;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)v2,
    Method_PartyOrganizationRootComponent_EndRequestOrganizationChange__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (PartyOrganizationRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                               v23,
                                               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_DeckSetupRequest___);
  if ( !this )
    goto LABEL_27;
  DeckSetupRequest__beginRequest((DeckSetupRequest_o *)this, partyItem->fields.id, v22, 0LL);
}


void __fastcall PartyOrganizationRootComponent__RequestOrganizationSelect(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct PartyListViewItem_o *basePartyItem; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool v12; // w1
  UserEventDeckEntity_o *UserEventDeck; // x0
  UserEventDeckEntity_o *v14; // x20
  NetworkManager_ResultCallbackFunc_o *v15; // x21
  EventDeckSetupRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t eventId; // w22
  EventDeckSetupRequest_o *v19; // x21
  struct BattleSetupInfo_o *v20; // x8
  UserDeckEntity_o *UserDeck; // x0
  UserDeckEntity_o *v22; // x21
  UserGameEntity_o *SelfUserGame; // x0
  int64_t activeDeckId; // x8
  int64_t id; // x9
  NetworkManager_ResultCallbackFunc_o *v26; // x22

  if ( (byte_418500E & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_DeckSetupRequest___, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventDeckSetupRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestOrganizationSelect__, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v8);
    byte_418500E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  basePartyItem = this->fields.basePartyItem;
  if ( !basePartyItem )
    goto LABEL_30;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    v12 = questRestrictionInfo->fields.eventDeckNum > 0;
  else
    v12 = 0;
  if ( PartyListViewItem__IsSpecificMenuKind_31930304(this->fields.menuKind, v12, 0LL) )
  {
    UserEventDeck = PartyListViewItem__GetUserEventDeck(basePartyItem, 0LL);
    if ( UserEventDeck )
    {
      v14 = UserEventDeck;
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndRequestOrganizationSelect__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (EventDeckSetupRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v15,
                                                                       (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventDeckSetupRequest___);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( battleSetupInfo )
      {
        eventId = battleSetupInfo->fields.eventId;
        v19 = Request_WarBoardWallAttackRequest;
        Request_WarBoardWallAttackRequest = (EventDeckSetupRequest_o *)BattleSetupInfo__TargetQuestId(
                                                                         this->fields.battleSetupInfo,
                                                                         0LL);
        v20 = this->fields.battleSetupInfo;
        if ( v20 )
        {
          if ( v19 )
          {
            EventDeckSetupRequest__beginRequest(
              v19,
              v14,
              eventId,
              (int32_t)Request_WarBoardWallAttackRequest,
              v20->fields.questPhase,
              0LL);
            return;
          }
        }
      }
LABEL_32:
      sub_B2C434(Request_WarBoardWallAttackRequest, v9);
    }
    goto LABEL_30;
  }
  UserDeck = PartyListViewItem__GetUserDeck(basePartyItem, 0LL, 0LL);
  if ( !UserDeck
    || ((v22 = UserDeck, (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) == 0LL)
      ? (activeDeckId = 0LL)
      : (activeDeckId = SelfUserGame->fields.activeDeckId),
        (this->fields.activeDeckId = activeDeckId, id = basePartyItem->fields.id, id < 1) || id == activeDeckId) )
  {
LABEL_30:
    Request_WarBoardWallAttackRequest = (EventDeckSetupRequest_o *)this->fields.myFSM;
    if ( !Request_WarBoardWallAttackRequest )
      goto LABEL_32;
    PlayMakerFSM__SendEvent(
      (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
      (System_String_o *)StringLiteral_11079/*"REQUEST_OK"*/,
      0LL);
    return;
  }
  this->fields.activeDeckId = id;
  v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v26,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndRequestOrganizationSelect__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventDeckSetupRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v26,
                                                                   (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_DeckSetupRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_32;
  DeckSetupRequest__beginRequest(
    (DeckSetupRequest_o *)Request_WarBoardWallAttackRequest,
    basePartyItem->fields.id,
    v22,
    0LL);
}


void __fastcall PartyOrganizationRootComponent__RequestOrganizationSwap(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CommonUI_o *menuKind; // x0
  System_Collections_IEnumerator_o *v11; // x1
  struct PartyOrganizationMenu_o *partyOrganizationMenu; // x8
  PartyListViewItem_o *partyItem; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool v15; // w1
  UserEventDeckEntity_o *UserEventDeck; // x0
  UserEventDeckEntity_o *v17; // x20
  NetworkManager_ResultCallbackFunc_o *v18; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t eventId; // w22
  EventDeckSetupRequest_o *v21; // x21
  struct BattleSetupInfo_o *v22; // x8
  UserDeckEntity_o *UserDeck; // x0
  UserDeckEntity_o *v24; // x21
  NetworkManager_ResultCallbackFunc_o *v25; // x22

  if ( (byte_4185013 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_DeckSetupRequest___, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventDeckSetupRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestOrganizationSelect__, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestOrganizationSwap__, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v9);
    byte_4185013 = 1;
  }
  menuKind = (CommonUI_o *)(unsigned int)this->fields.menuKind;
  if ( (_DWORD)menuKind == 9 )
  {
    v11 = PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
    return;
  }
  partyOrganizationMenu = this->fields.partyOrganizationMenu;
  if ( !partyOrganizationMenu )
    goto LABEL_29;
  partyItem = partyOrganizationMenu->fields.partyItem;
  if ( !partyItem )
    goto LABEL_27;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    v15 = questRestrictionInfo->fields.eventDeckNum > 0;
  else
    v15 = 0;
  if ( PartyListViewItem__IsSpecificMenuKind_31930304((int32_t)menuKind, v15, 0LL) )
  {
    UserEventDeck = PartyListViewItem__GetUserEventDeck(partyItem, 0LL);
    if ( UserEventDeck )
    {
      v17 = UserEventDeck;
      menuKind = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( menuKind )
      {
        CommonUI__SetConnectMarkFadeInLag(menuKind, 0, 0LL);
        v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          Method_PartyOrganizationRootComponent_EndRequestOrganizationSelect__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        menuKind = (CommonUI_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                   v18,
                                   (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventDeckSetupRequest___);
        battleSetupInfo = this->fields.battleSetupInfo;
        if ( battleSetupInfo )
        {
          eventId = battleSetupInfo->fields.eventId;
          v21 = (EventDeckSetupRequest_o *)menuKind;
          menuKind = (CommonUI_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v22 = this->fields.battleSetupInfo;
          if ( v22 )
          {
            if ( v21 )
            {
              EventDeckSetupRequest__beginRequest(v21, v17, eventId, (int32_t)menuKind, v22->fields.questPhase, 0LL);
              return;
            }
          }
        }
      }
LABEL_29:
      sub_B2C434(menuKind, method);
    }
    goto LABEL_27;
  }
  UserDeck = PartyListViewItem__GetUserDeck(partyItem, 0LL, 0LL);
  if ( !UserDeck )
  {
LABEL_27:
    menuKind = (CommonUI_o *)this->fields.myFSM;
    this->fields.state = 1;
    if ( !menuKind )
      goto LABEL_29;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)menuKind, (System_String_o *)StringLiteral_11077/*"REQUEST_NG"*/, 0LL);
    return;
  }
  v24 = UserDeck;
  menuKind = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !menuKind )
    goto LABEL_29;
  CommonUI__SetConnectMarkFadeInLag(menuKind, 0, 0LL);
  v25 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndRequestOrganizationSwap__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  menuKind = (CommonUI_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                             v25,
                             (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_DeckSetupRequest___);
  if ( !menuKind )
    goto LABEL_29;
  DeckSetupRequest__beginRequest((DeckSetupRequest_o *)menuKind, partyItem->fields.id, v24, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationRootComponent__SceneBack(
        PartyOrganizationRootComponent_o *this,
        bool isSetChildFollower,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v11; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x21
  Il2CppObject *v13; // x2
  PartyListViewItem_o *CenterItem; // x0
  __int64 id; // x8

  if ( (byte_4185015 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isSetChildFollower);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v6);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    byte_4185015 = 1;
  }
  this->fields.state = 28;
  if ( PartyOrganizationRootComponent__IsNotSelectSupportAfterScript(this, (const MethodInfo *)isSetChildFollower) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C70 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
      byte_4183C70 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  if ( !isSetChildFollower )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    PartyOrganizationUtility__ClearFollowerInfo(Instance, 0LL);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  this->fields.battleSetupInfo = 0LL;
  sub_B2C2F8(&this->fields.battleSetupInfo, 0LL);
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
  {
    if ( battleSetupInfo )
    {
      if ( !this->fields.mainMenuMode )
      {
        Instance = (PartyOrganizationUtility_o *)this->fields.partyListMenu;
        if ( !Instance )
          goto LABEL_35;
        CenterItem = PartyListMenu__GetCenterItem((PartyListMenu_o *)Instance, 0LL);
        if ( CenterItem )
        {
          id = CenterItem->fields.id;
          if ( id >= 1 )
            battleSetupInfo->fields.deckId = id;
        }
      }
      battleSetupInfo->fields.isChildFollower = isSetChildFollower;
      Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( Instance )
      {
        v13 = (Il2CppObject *)battleSetupInfo;
LABEL_29:
        AvalonSceneManager__popScene((AvalonSceneManager_o *)Instance, 1, v13, 0LL);
        return 1;
      }
    }
    else
    {
      Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( Instance )
      {
        v13 = 0LL;
        goto LABEL_29;
      }
    }
LABEL_35:
    sub_B2C434(Instance, v11);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 39, 1, 0LL, 0LL);
  return 1;
}


void __fastcall PartyOrganizationRootComponent__SelectOrganizationChange(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  PartyOrganizationChangeMenu_o *partyOrganizationChangeMenu; // x20
  int32_t menuKind; // w21
  PartyListViewItem_o *basePartyItem; // x22
  PartyListViewItem_o *partyItem; // x23
  EventUpValSetupInfo_o *setupInfo; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  System_Action_o *v11; // x26

  if ( (byte_4184FDE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnMoveEnd__, v3);
    byte_4184FDE = 1;
  }
  if ( this->fields.state == 1 )
  {
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_8;
    TitleInfoControl__changeTitleInfo(titleInfo, 2, 68, 0LL);
    this->fields.state = 11;
    partyOrganizationChangeMenu = this->fields.partyOrganizationChangeMenu;
    menuKind = this->fields.menuKind;
    basePartyItem = this->fields.basePartyItem;
    partyItem = this->fields.partyItem;
    setupInfo = this->fields.setupInfo;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !partyOrganizationChangeMenu )
LABEL_8:
      sub_B2C434(titleInfo, method);
    PartyOrganizationChangeMenu__Open(
      partyOrganizationChangeMenu,
      menuKind,
      0,
      basePartyItem,
      partyItem,
      -1,
      setupInfo,
      questRestrictionInfo,
      0LL,
      v11,
      this->fields.friendPointCampaignVal,
      0LL);
  }
}


void __fastcall PartyOrganizationRootComponent__SelectOrganizationSwap(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  int32_t v5; // w2
  PartyOrganizationMenu_o *partyOrganizationMenu; // x20
  int32_t menuKind; // w21
  PartyListViewItem_o *basePartyItem; // x22
  PartyListViewItem_o *partyItem; // x23
  EventUpValSetupInfo_o *setupInfo; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  System_Action_o *v12; // x26
  const MethodInfo *v13; // [xsp+10h] [xbp-50h]

  if ( (byte_4184FE0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnMoveEnd__, v3);
    byte_4184FE0 = 1;
  }
  if ( this->fields.state == 1 )
  {
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_11;
    v5 = this->fields.changePartyMode == 1 ? 68 : 69;
    TitleInfoControl__changeTitleInfo(titleInfo, 2, v5, 0LL);
    this->fields.state = 14;
    partyOrganizationMenu = this->fields.partyOrganizationMenu;
    menuKind = this->fields.menuKind;
    basePartyItem = this->fields.basePartyItem;
    partyItem = this->fields.partyItem;
    setupInfo = this->fields.setupInfo;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_OnMoveEnd__, 0LL);
    if ( !partyOrganizationMenu )
LABEL_11:
      sub_B2C434(titleInfo, method);
    PartyOrganizationMenu__Open(
      partyOrganizationMenu,
      menuKind,
      basePartyItem,
      partyItem,
      setupInfo,
      questRestrictionInfo,
      0LL,
      v12,
      0,
      this->fields.friendPointCampaignVal,
      v13);
  }
}


void __fastcall PartyOrganizationRootComponent__SelectParty(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 titleInfo; // x0
  UserGameEntity_o *SelfUserGame; // x22
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v12; // x21
  struct PartyListViewItem_array *v13; // x0
  __int64 v14; // x8
  signed int v15; // w10
  __int64 v16; // x23
  __int64 v17; // x9
  UserDeckEntity_o **v18; // x10
  UserDeckEntity_o *v19; // x24
  struct DeckServant_o *deckInfo; // x11
  struct DeckServantData_array *svts; // x11
  int max_length; // w12
  DeckServantData_o *v23; // x11
  int32_t menuKind; // w26
  UserGameEntity_o *v25; // x28
  int32_t costMax; // w27
  struct PartyListViewItem_array *v27; // x19
  PartyOrganizationRootComponent_o *v28; // x22
  struct EventUpValSetupInfo_o *setupInfo2; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  PartyListViewItem_o *v31; // x25
  Il2CppClass **v32; // x0
  int64_t activeDeckId; // x8
  int v34; // w9
  __int64 v35; // x10
  __int64 v36; // x12
  PartyOrganizationRootComponent_o *v37; // x19
  PartyListMenu_o *partyListMenu; // x24
  int32_t v39; // w25
  PartyListViewItem_array *baseDeckItemList; // x20
  int32_t selectPartyNum; // w21
  EventUpValSetupInfo_o *v42; // x22
  QuestRestrictionInfo_o *v43; // x23
  System_Action_o *v44; // x26
  __int64 v45; // x0
  __int64 v46; // x0
  struct PartyListViewItem_array **p_baseDeckItemList; // [xsp+30h] [xbp-70h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+38h] [xbp-68h]
  int32_t followerClassId; // [xsp+44h] [xbp-5Ch]
  FollowerInfo_o *follower; // [xsp+48h] [xbp-58h]

  if ( (byte_4184FDB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&PartyListViewItem___TypeInfo, v5);
    sub_B2C35C(&PartyListViewItem_TypeInfo, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndFadeSelectParty__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4184FDB = 1;
  }
  if ( this->fields.state == 1 )
  {
    titleInfo = (__int64)this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_45;
    TitleInfoControl__changeTitleInfo((TitleInfoControl_o *)titleInfo, 2, 67, 0LL);
    if ( !this->fields.baseDeckItemList )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      titleInfo = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !titleInfo )
        goto LABEL_45;
      MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)titleInfo,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      titleInfo = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_45;
      titleInfo = (__int64)UserDeckMaster__getDeckList(MasterData_WarQuestSelectionMaster, titleInfo, 0LL);
      if ( !titleInfo )
        goto LABEL_45;
      v12 = titleInfo;
      v13 = (struct PartyListViewItem_array *)sub_B2C374(
                                                PartyListViewItem___TypeInfo,
                                                *(unsigned int *)(titleInfo + 24));
      this->fields.baseDeckItemList = v13;
      p_baseDeckItemList = &this->fields.baseDeckItemList;
      sub_B2C2F8(&this->fields.baseDeckItemList, v13);
      v14 = *(_QWORD *)(v12 + 24);
      if ( (int)v14 >= 1 )
      {
        v15 = 0;
        while ( 1 )
        {
          if ( v15 >= (unsigned int)v14 )
          {
LABEL_46:
            v45 = sub_B2C460(titleInfo);
            sub_B2C400(v45, 0LL);
          }
          v16 = v15;
          v17 = 0LL;
          v18 = (UserDeckEntity_o **)(v12 + 8LL * v15 + 32);
          while ( 1 )
          {
            v19 = *v18;
            if ( !*v18 )
              goto LABEL_45;
            deckInfo = v19->fields.deckInfo;
            if ( !deckInfo )
              goto LABEL_45;
            svts = deckInfo->fields.svts;
            if ( !svts )
              goto LABEL_45;
            max_length = svts->max_length;
            if ( (int)v17 >= max_length )
              break;
            if ( (unsigned int)v17 >= max_length )
              goto LABEL_46;
            v23 = svts->m_Items[v17];
            if ( !v23 )
              goto LABEL_45;
            ++v17;
            if ( !v23->fields.initPos )
            {
              v23->fields.initPos = v17;
              v14 = *(_QWORD *)(v12 + 24);
            }
            if ( (unsigned int)v16 >= (unsigned int)v14 )
              goto LABEL_46;
          }
          if ( !SelfUserGame )
            break;
          menuKind = this->fields.menuKind;
          v25 = SelfUserGame;
          costMax = SelfUserGame->fields.costMax;
          v27 = *p_baseDeckItemList;
          v28 = this;
          follower = this->fields.followerInfo;
          followerClassId = this->fields.followerClassId;
          setupInfo2 = this->fields.setupInfo2;
          questRestrictionInfo = this->fields.questRestrictionInfo;
          setupInfo = setupInfo2;
          v31 = (PartyListViewItem_o *)sub_B2C42C(PartyListViewItem_TypeInfo);
          PartyListViewItem___ctor_31894220(
            v31,
            menuKind,
            v16,
            costMax,
            v19,
            follower,
            followerClassId,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0LL);
          if ( !v27 )
            break;
          if ( v31 )
          {
            titleInfo = sub_B2C41C(v31, v27->obj.klass->_1.element_class);
            if ( !titleInfo )
            {
              v46 = sub_B2C454();
              sub_B2C400(v46, 0LL);
            }
          }
          if ( (unsigned int)v16 >= v27->max_length )
            goto LABEL_46;
          v32 = &v27->obj.klass + v16;
          v32[4] = (Il2CppClass *)v31;
          sub_B2C2F8(v32 + 4, v31);
          v14 = *(_QWORD *)(v12 + 24);
          v15 = v16 + 1;
          this = v28;
          SelfUserGame = v25;
          if ( (int)v16 + 1 >= (int)v14 )
            goto LABEL_32;
        }
LABEL_45:
        sub_B2C434(titleInfo, method);
      }
LABEL_32:
      activeDeckId = this->fields.activeDeckId;
      if ( activeDeckId >= 1 )
      {
        this->fields.selectPartyNum = 0;
        v34 = *(_DWORD *)(v12 + 24);
        if ( v34 >= 1 )
        {
          v35 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v35 >= v34 )
              goto LABEL_46;
            v36 = *(_QWORD *)(v12 + 32 + 8 * v35);
            if ( !v36 )
              goto LABEL_45;
            if ( *(_QWORD *)(v36 + 16) == activeDeckId )
              break;
            if ( (int)++v35 >= v34 )
              goto LABEL_41;
          }
          this->fields.selectPartyNum = v35;
        }
LABEL_41:
        this->fields.activeDeckId = 0LL;
      }
    }
    v37 = this;
    partyListMenu = this->fields.partyListMenu;
    v39 = this->fields.menuKind;
    baseDeckItemList = this->fields.baseDeckItemList;
    v37->fields.state = 8;
    selectPartyNum = v37->fields.selectPartyNum;
    v42 = v37->fields.setupInfo;
    v43 = v37->fields.questRestrictionInfo;
    v44 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v44, (Il2CppObject *)v37, Method_PartyOrganizationRootComponent_EndFadeSelectParty__, 0LL);
    if ( !partyListMenu )
      goto LABEL_45;
    PartyListMenu__Open(
      partyListMenu,
      v39,
      0,
      baseDeckItemList,
      selectPartyNum,
      v42,
      v43,
      0LL,
      v44,
      v37->fields.friendPointCampaignVal,
      0,
      0,
      1,
      0LL);
  }
}


void __fastcall PartyOrganizationRootComponent__SelectQuest(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
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
  __int64 titleInfo; // x0
  struct BattleSetupInfo_o *v34; // x8
  UserEventDeckMaster_o *Master_WarQuestSelectionMaster; // x21
  struct BattleSetupInfo_o *v36; // x8
  int32_t v37; // w23
  int64_t v38; // x22
  struct BattleSetupInfo_o *v39; // x8
  struct DeckServant_o *v40; // x8
  struct BattleSetupInfo_o *v41; // x8
  int64_t v42; // x22
  int32_t v43; // w23
  int64_t v44; // x24
  BalanceConfig_c *v45; // x0
  int32_t DeckMainMemberMax; // w25
  struct PartyListViewItem_array *v47; // x0
  struct PartyListViewItem_array *v48; // x0
  unsigned int v49; // w25
  __int64 v50; // x23
  struct PartyListViewItem_array *v51; // x22
  int32_t v52; // w27
  QuestRestrictionInfo_o *v53; // x20
  int32_t v54; // w28
  EventUpValSetupInfo_o *v55; // x21
  PartyListViewItem_o *v56; // x26
  struct PartyListViewItem_array *v57; // x8
  struct PartyListViewItem_array *waveBattleBaseDeckItemList; // x20
  Il2CppClass *v59; // x26
  UnityEngine_Object_o *waveBattlePartyOrganizationMenu; // x23
  struct WaveBattlePartyOrganizationMenu_o **p_waveBattlePartyOrganizationMenu; // x22
  UnityEngine_GameObject_o *waveBattlePartyOrganizationPrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  WaveBattlePartyOrganizationMenu_o *v66; // x23
  QuestRestrictionInfo_o *v67; // x22
  WaveBattlePartyOrganizationMenu_CallbackFunc_o *v68; // x24
  const MethodInfo *v69; // x1
  UserEventDeckMaster_o *v70; // x22
  struct BattleSetupInfo_o *v71; // x8
  int32_t v72; // w24
  int64_t v73; // x23
  struct BattleSetupInfo_o *v74; // x8
  _QWORD *v75; // x22
  __int64 v76; // x0
  __int64 v77; // x8
  unsigned __int64 v78; // x23
  _QWORD *v79; // x24
  __int64 v80; // x8
  UserEventDeckEntity_o **v81; // x24
  __int64 v82; // t1
  __int64 v83; // x8
  struct BattleSetupInfo_o *v84; // x8
  int32_t v85; // w20
  int64_t v86; // x27
  int64_t v87; // x26
  UserEventDeckEntity_o *v88; // x25
  int32_t i; // w25
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v92; // x20
  struct BattleSetupInfo_o *v93; // x8
  int32_t followerDeckId; // w27
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t followerClassId; // w25
  struct FollowerInfo_o *v97; // x9
  QuestRestrictionInfo_o *v98; // x26
  struct PartyListViewItem_array *v99; // x21
  EventCampaignEntity_array *v100; // x19
  UserEventDeckEntity_o *v101; // x28
  PartyListViewItem_o *v102; // x24
  Il2CppClass **v103; // x0
  int32_t selectWaveNum; // w20
  UserEventDeckMaster_o *v105; // x22
  struct BattleSetupInfo_o *v106; // x8
  int32_t v107; // w24
  int64_t v108; // x23
  struct BattleSetupInfo_o *v109; // x8
  _QWORD *v110; // x22
  __int64 v111; // x0
  __int64 v112; // x8
  unsigned __int64 v113; // x23
  struct BattleSetupInfo_o *v114; // x8
  int32_t v115; // w20
  int64_t v116; // x27
  int64_t v117; // x25
  UserEventDeckEntity_o *v118; // x26
  unsigned int *v119; // x28
  FollowerInfo_o *v120; // x20
  QuestRestrictionInfo_o *v121; // x21
  int32_t v122; // w27
  EventCampaignEntity_array *v123; // x19
  PartyListViewItem_o *v124; // x25
  unsigned int *v125; // x0
  _QWORD *v126; // x24
  __int64 v127; // x8
  UserEventDeckEntity_o **v128; // x24
  __int64 v129; // t1
  __int64 v130; // x8
  struct BattleSetupInfo_o *v131; // x8
  int32_t v132; // w20
  int64_t v133; // x27
  int64_t v134; // x26
  UserEventDeckEntity_o *v135; // x25
  int32_t j; // w25
  struct DeckServant_o *v137; // x8
  struct DeckServantData_array *v138; // x8
  DeckServantData_o *v139; // x20
  int32_t v140; // w25
  struct QuestRestrictionInfo_o *v141; // x8
  struct BattleSetupInfo_o *v142; // x8
  int32_t v143; // w21
  UserEventDeckEntity_o *v144; // x27
  unsigned int *v145; // x28
  struct QuestRestrictionInfo_o *v146; // x10
  FollowerInfo_o *v147; // x20
  EventCampaignEntity_array *v148; // x26
  struct EventUpValSetupInfo_o *v149; // x9
  int32_t v150; // w19
  PartyListViewItem_o *v151; // x24
  unsigned int *v152; // x0
  PartyListMenu_o *v153; // x24
  int32_t v154; // w25
  PartyListViewItem_array *v155; // x23
  EventUpValSetupInfo_o *v156; // x21
  QuestRestrictionInfo_o *v157; // x22
  PartyListMenu_CallbackFunc_o *v158; // x26
  System_Action_o *v159; // x27
  struct QuestRestrictionInfo_o *v160; // x8
  _BOOL4 v161; // w20
  UserEventDeckMaster_o *MasterData_WarQuestSelectionMaster; // x22
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t eventId; // w24
  int64_t v165; // x23
  struct BattleSetupInfo_o *v166; // x8
  _QWORD *v167; // x28
  __int64 v168; // x0
  __int64 v169; // x8
  unsigned __int64 v170; // x21
  __int64 v171; // x22
  __int64 v172; // x8
  __int64 v173; // x8
  struct BattleSetupInfo_o *v174; // x8
  int32_t v175; // w26
  int64_t userEquipId; // x27
  int64_t v177; // x25
  UserEventDeckEntity_o *v178; // x24
  struct BattleSetupInfo_o *v179; // x8
  _QWORD *v180; // x20
  __int64 v181; // x26
  UserEventDeckEntity_o *v182; // x22
  int32_t followerSupportDeckId; // w28
  struct PartyListViewItem_array *baseDeckItemList; // x23
  EventCampaignEntity_array *friendPointCampaignEntityList; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x27
  PartyListViewItem_o *v187; // x24
  UserEventDeckMaster_o *v188; // x22
  struct BattleSetupInfo_o *v189; // x8
  int32_t v190; // w24
  int64_t v191; // x23
  struct BattleSetupInfo_o *v192; // x8
  _QWORD *v193; // x28
  __int64 v194; // x0
  __int64 v195; // x8
  unsigned __int64 v196; // x21
  __int64 v197; // x22
  __int64 v198; // x8
  __int64 v199; // x8
  struct QuestRestrictionInfo_o *v200; // x8
  struct BattleSetupInfo_o *v201; // x9
  int32_t eventDeckNum; // w20
  int64_t v203; // x26
  int64_t v204; // x25
  UserEventDeckEntity_o *v205; // x24
  struct BattleSetupInfo_o *v206; // x8
  _QWORD *v207; // x27
  struct PartyListViewItem_array *v208; // x23
  EventCampaignEntity_array *v209; // x20
  bool isFirstChange; // w25
  QuestRestrictionInfo_o *v211; // x26
  UserEventDeckEntity_o *v212; // x9
  int32_t v213; // w28
  PartyListViewItem_o *v214; // x24
  UserEventDeckMaster_o *v215; // x22
  struct BattleSetupInfo_o *v216; // x8
  int32_t v217; // w24
  int64_t v218; // x23
  struct BattleSetupInfo_o *v219; // x8
  _QWORD *v220; // x22
  __int64 v221; // x0
  __int64 v222; // x8
  unsigned __int64 v223; // x23
  _QWORD *v224; // x24
  __int64 v225; // x8
  UserEventDeckEntity_o **v226; // x24
  __int64 v227; // t1
  __int64 v228; // x8
  struct BattleSetupInfo_o *v229; // x8
  int32_t v230; // w20
  int64_t v231; // x21
  int64_t v232; // x26
  UserEventDeckEntity_o *v233; // x25
  int32_t k; // w25
  struct DeckServant_o *v235; // x8
  struct DeckServantData_array *v236; // x8
  DeckServantData_o *v237; // x20
  struct BattleSetupInfo_o *v238; // x8
  int32_t v239; // w25
  PartyOrganizationRootComponent_o *v240; // x9
  int32_t v241; // w10
  struct PartyListViewItem_array *v242; // x28
  EventCampaignEntity_array *v243; // x19
  EventUpValSetupInfo_o *v244; // x20
  QuestRestrictionInfo_o *v245; // x21
  FollowerInfo_o *v246; // x26
  UserEventDeckEntity_o *v247; // x27
  PartyListViewItem_o *v248; // x24
  Il2CppClass **v249; // x0
  QuestRestrictionInfo_o *v250; // x0
  __int64 v251; // x1
  struct BattleSetupInfo_o *v252; // x8
  int32_t m; // w21
  struct PartyListViewItem_array *v254; // x8
  __int64 selectPartyNum; // x9
  __int64 v256; // x8
  UserDeckMaster_o *v257; // x22
  __int64 v258; // x22
  __int64 v259; // x0
  __int64 v260; // x8
  signed int v261; // w10
  __int64 v262; // x23
  __int64 v263; // x9
  UserDeckEntity_o **v264; // x10
  UserDeckEntity_o *v265; // x24
  struct DeckServant_o *v266; // x11
  struct DeckServantData_array *v267; // x11
  int max_length; // w12
  DeckServantData_o *v269; // x11
  struct BattleSetupInfo_o *v270; // x8
  int32_t v271; // w26
  struct PartyListViewItem_array *v272; // x20
  PartyOrganizationRootComponent_o *v273; // x9
  struct EventUpValSetupInfo_o *v274; // x10
  EventCampaignEntity_array *v275; // x19
  int32_t v276; // w28
  QuestRestrictionInfo_o *v277; // x21
  FollowerInfo_o *v278; // x27
  PartyListViewItem_o *v279; // x25
  Il2CppClass **v280; // x0
  int32_t lastUsedDeckNumber; // w8
  bool v282; // vf
  int32_t v283; // w8
  struct BattleSetupInfo_o *v284; // x9
  bool v285; // w28
  struct PartyListViewItem_array *v286; // x8
  UserEventDeckEntity_o *UserEventDeck; // x0
  UserEventDeckEntity_o *v288; // x20
  NetworkManager_ResultCallbackFunc_o *v289; // x21
  struct BattleSetupInfo_o *v290; // x8
  int32_t v291; // w22
  EventDeckSetupRequest_o *v292; // x21
  struct BattleSetupInfo_o *v293; // x8
  PartyListMenu_o *partyListMenu; // x24
  int32_t v295; // w25
  PartyListViewItem_array *v296; // x20
  int32_t v297; // w21
  EventUpValSetupInfo_o *v298; // x22
  QuestRestrictionInfo_o *v299; // x23
  System_Action_o *v300; // x26
  CommonUI_o *Instance; // x20
  System_String_o *v302; // x21
  System_Action_o *v303; // x22
  int64_t activeDeckId; // x8
  int v305; // w9
  __int64 v306; // x10
  __int64 v307; // x12
  __int64 v308; // x0
  __int64 v309; // x0
  __int64 v310; // x0
  __int64 v311; // x0
  EventUpValSetupInfo_o *v312; // [xsp+30h] [xbp-A0h]
  EventUpValSetupInfo_o *v313; // [xsp+38h] [xbp-98h]
  UserEventDeckEntity_o *v314; // [xsp+38h] [xbp-98h]
  int32_t costMax; // [xsp+40h] [xbp-90h]
  EventUpValSetupInfo_o *v316; // [xsp+40h] [xbp-90h]
  FollowerInfo_o *followerInfo; // [xsp+40h] [xbp-90h]
  FollowerInfo_o *v318; // [xsp+40h] [xbp-90h]
  struct PartyListViewItem_array **p_baseDeckItemList; // [xsp+48h] [xbp-88h]
  FollowerInfo_o *follower; // [xsp+50h] [xbp-80h]
  int32_t followera; // [xsp+50h] [xbp-80h]
  FollowerInfo_o *followerb; // [xsp+50h] [xbp-80h]
  int32_t followerc; // [xsp+50h] [xbp-80h]
  int32_t followerd; // [xsp+50h] [xbp-80h]
  int32_t followere; // [xsp+50h] [xbp-80h]
  int32_t followerf; // [xsp+50h] [xbp-80h]
  struct PartyListViewItem_array **maxCost; // [xsp+58h] [xbp-78h]
  int32_t maxCosta; // [xsp+58h] [xbp-78h]
  EventUpValSetupInfo_o *maxCostb; // [xsp+58h] [xbp-78h]
  int32_t maxCostc; // [xsp+58h] [xbp-78h]
  int32_t maxCostd; // [xsp+58h] [xbp-78h]
  int32_t maxCoste; // [xsp+58h] [xbp-78h]
  int32_t maxCostf; // [xsp+58h] [xbp-78h]
  EventUpValSetupInfo_o *maxCostg; // [xsp+58h] [xbp-78h]
  UserGameEntity_o *menuKind; // [xsp+60h] [xbp-70h]
  int32_t menuKindb; // [xsp+60h] [xbp-70h]
  char menuKinda; // [xsp+60h] [xbp-70h]
  int32_t menuKindc; // [xsp+60h] [xbp-70h]
  int32_t menuKindd; // [xsp+60h] [xbp-70h]
  int32_t menuKinde; // [xsp+60h] [xbp-70h]
  int32_t menuKindf; // [xsp+60h] [xbp-70h]
  int waveNum; // [xsp+68h] [xbp-68h]
  PartyOrganizationRootComponent_o *waveNuma; // [xsp+68h] [xbp-68h]
  int32_t waveNumb; // [xsp+68h] [xbp-68h]
  int32_t waveNumc; // [xsp+68h] [xbp-68h]
  UserEventDeckEntity_o *v346; // [xsp+70h] [xbp-60h]
  UserGameEntity_o *SelfUserGame; // [xsp+70h] [xbp-60h]
  bool isBaseModify[4]; // [xsp+7Ch] [xbp-54h] BYREF

  if ( (byte_4184FD7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v3);
    sub_B2C35C(&PartyListMenu_CallbackFunc_TypeInfo, v4);
    sub_B2C35C(&WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_StageMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventDeckMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationMenu___, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventDeckSetupRequest___, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&PartyListViewItem___TypeInfo, v16);
    sub_B2C35C(&PartyListViewItem_TypeInfo, v17);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestSelectQuest__, v18);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectQuest__, v19);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectPartyList__, v20);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectWavePartyList__, v21);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__SelectQuest_b__109_0__, v22);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v27);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v28);
    sub_B2C35C(&UserEventDeckEntity_TypeInfo, v29);
    sub_B2C35C(&StringLiteral_20227/*"limited_bg"*/, v30);
    sub_B2C35C(&StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v31);
    sub_B2C35C(&StringLiteral_1/*""*/, v32);
    byte_4184FD7 = 1;
  }
  isBaseModify[0] = 0;
  if ( this->fields.state != 1 )
    return;
  isBaseModify[0] = 0;
  titleInfo = (__int64)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_405;
  TitleInfoControl__changeTitleInfo((TitleInfoControl_o *)titleInfo, 3, 64, 0LL);
  if ( this->fields.menuKind != 9 )
  {
    p_baseDeckItemList = &this->fields.baseDeckItemList;
    if ( !this->fields.baseDeckItemList )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      waveNuma = this;
      switch ( this->fields.menuKind )
      {
        case 2:
          titleInfo = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !titleInfo )
            goto LABEL_405;
          MasterData_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)titleInfo,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          titleInfo = NetworkManager__get_UserId(0LL);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( !battleSetupInfo )
            goto LABEL_405;
          eventId = battleSetupInfo->fields.eventId;
          v165 = titleInfo;
          titleInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v166 = this->fields.battleSetupInfo;
          if ( !v166 )
            goto LABEL_405;
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_405;
          titleInfo = (__int64)UserEventDeckMaster__getDeckList(
                                 MasterData_WarQuestSelectionMaster,
                                 v165,
                                 eventId,
                                 titleInfo,
                                 v166->fields.questPhase,
                                 0LL);
          if ( !titleInfo )
            goto LABEL_405;
          v167 = (_QWORD *)titleInfo;
          v168 = sub_B2C374(PartyListViewItem___TypeInfo, *(unsigned int *)(titleInfo + 24));
          *p_baseDeckItemList = (struct PartyListViewItem_array *)v168;
          sub_B2C2F8(p_baseDeckItemList, v168);
          v169 = v167[3];
          if ( (int)v169 < 1 )
            goto LABEL_306;
          v170 = 0LL;
          v171 = 32LL;
          waveNumb = 1;
          while ( v170 < (unsigned int)v169 )
          {
            v172 = *(_QWORD *)((char *)v167 + v171);
            if ( !v172 )
              goto LABEL_413;
            v173 = *(_QWORD *)(v172 + 32);
            if ( !v173 )
              goto LABEL_405;
            titleInfo = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v173 + 32), 0LL);
            if ( (titleInfo & 1) == 0 )
            {
LABEL_413:
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              titleInfo = NetworkManager__get_UserId(0LL);
              v174 = this->fields.battleSetupInfo;
              if ( !v174 )
                goto LABEL_405;
              v175 = v174->fields.eventId;
              userEquipId = v174->fields.userEquipId;
              v177 = titleInfo;
              v178 = (UserEventDeckEntity_o *)sub_B2C42C(UserEventDeckEntity_TypeInfo);
              UserEventDeckEntity___ctor_27003412(v178, v177, v175, waveNumb, userEquipId, 0, 0, 0LL);
              if ( v178 )
              {
                titleInfo = sub_B2C41C(v178, *(_QWORD *)(*v167 + 64LL));
                if ( !titleInfo )
                  goto LABEL_409;
              }
              if ( v170 >= *((unsigned int *)v167 + 6) )
                goto LABEL_406;
              *(_QWORD *)((char *)v167 + v171) = v178;
              sub_B2C2F8((char *)v167 + v171, v178);
            }
            if ( !SelfUserGame )
              goto LABEL_405;
            if ( v170 >= *((unsigned int *)v167 + 6) )
              break;
            v179 = this->fields.battleSetupInfo;
            if ( !v179 )
              goto LABEL_405;
            v180 = v167;
            v181 = v171;
            maxCostd = SelfUserGame->fields.costMax;
            menuKindc = this->fields.menuKind;
            v182 = *(UserEventDeckEntity_o **)((char *)v167 + v171);
            followerSupportDeckId = v179->fields.followerSupportDeckId;
            v313 = this->fields.setupInfo;
            baseDeckItemList = this->fields.baseDeckItemList;
            friendPointCampaignEntityList = this->fields.friendPointCampaignEntityList;
            followerc = this->fields.followerClassId;
            questRestrictionInfo = this->fields.questRestrictionInfo;
            followerInfo = this->fields.followerInfo;
            v187 = (PartyListViewItem_o *)sub_B2C42C(PartyListViewItem_TypeInfo);
            PartyListViewItem___ctor_31902268(
              v187,
              isBaseModify,
              menuKindc,
              waveNumb - 1,
              maxCostd,
              v182,
              followerInfo,
              followerc,
              v313,
              questRestrictionInfo,
              0,
              friendPointCampaignEntityList,
              followerSupportDeckId,
              0LL);
            if ( !baseDeckItemList )
              goto LABEL_405;
            if ( v187 )
            {
              titleInfo = sub_B2C41C(v187, baseDeckItemList->obj.klass->_1.element_class);
              if ( !titleInfo )
                goto LABEL_409;
            }
            if ( v170 >= baseDeckItemList->max_length )
              goto LABEL_406;
            v167 = v180;
            *(Il2CppClass **)((char *)&baseDeckItemList->obj.klass + v181) = (Il2CppClass *)v187;
            sub_B2C2F8((char *)baseDeckItemList + v181, v187);
            LODWORD(v169) = *((_DWORD *)v180 + 6);
            ++v170;
            v171 = v181 + 8;
            ++waveNumb;
            if ( (__int64)v170 >= (int)v169 )
              goto LABEL_306;
          }
          goto LABEL_406;
        case 3:
          titleInfo = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !titleInfo )
            goto LABEL_405;
          v188 = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)titleInfo,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          titleInfo = NetworkManager__get_UserId(0LL);
          v189 = this->fields.battleSetupInfo;
          if ( !v189 )
            goto LABEL_405;
          v190 = v189->fields.eventId;
          v191 = titleInfo;
          titleInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v192 = this->fields.battleSetupInfo;
          if ( !v192 )
            goto LABEL_405;
          if ( !v188 )
            goto LABEL_405;
          titleInfo = (__int64)UserEventDeckMaster__getDeckList(
                                 v188,
                                 v191,
                                 v190,
                                 titleInfo,
                                 v192->fields.questPhase,
                                 0LL);
          if ( !titleInfo )
            goto LABEL_405;
          v193 = (_QWORD *)titleInfo;
          v194 = sub_B2C374(PartyListViewItem___TypeInfo, *(unsigned int *)(titleInfo + 24));
          *p_baseDeckItemList = (struct PartyListViewItem_array *)v194;
          sub_B2C2F8(p_baseDeckItemList, v194);
          v195 = v193[3];
          if ( (int)v195 < 1 )
            goto LABEL_306;
          v196 = 0LL;
          v197 = 4LL;
          waveNumc = 1;
          while ( v196 < (unsigned int)v195 )
          {
            v198 = v193[v197];
            if ( !v198 )
              goto LABEL_414;
            v199 = *(_QWORD *)(v198 + 32);
            if ( !v199 )
              goto LABEL_405;
            titleInfo = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v199 + 32), 0LL);
            if ( (titleInfo & 1) == 0 )
            {
LABEL_414:
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              titleInfo = NetworkManager__get_UserId(0LL);
              v200 = this->fields.questRestrictionInfo;
              if ( !v200 )
                goto LABEL_405;
              v201 = this->fields.battleSetupInfo;
              if ( !v201 )
                goto LABEL_405;
              eventDeckNum = v200->fields.eventDeckNum;
              v203 = v201->fields.userEquipId;
              v204 = titleInfo;
              v205 = (UserEventDeckEntity_o *)sub_B2C42C(UserEventDeckEntity_TypeInfo);
              UserEventDeckEntity___ctor_27003412(v205, v204, eventDeckNum, waveNumc, v203, 0, 0, 0LL);
              if ( v205 )
              {
                titleInfo = sub_B2C41C(v205, *(_QWORD *)(*v193 + 64LL));
                if ( !titleInfo )
                  goto LABEL_409;
              }
              if ( v196 >= *((unsigned int *)v193 + 6) )
                goto LABEL_406;
              v193[v197] = v205;
              sub_B2C2F8(&v193[v197], v205);
            }
            if ( !SelfUserGame )
              goto LABEL_405;
            if ( v196 >= *((unsigned int *)v193 + 6) )
              break;
            v206 = this->fields.battleSetupInfo;
            if ( !v206 )
              goto LABEL_405;
            v207 = v193;
            v208 = this->fields.baseDeckItemList;
            maxCoste = SelfUserGame->fields.costMax;
            menuKindd = this->fields.menuKind;
            v209 = this->fields.friendPointCampaignEntityList;
            isFirstChange = this->fields.isFirstChange;
            v312 = this->fields.setupInfo;
            followerd = this->fields.followerClassId;
            v211 = this->fields.questRestrictionInfo;
            v318 = this->fields.followerInfo;
            v212 = (UserEventDeckEntity_o *)v193[v197];
            v213 = v206->fields.followerSupportDeckId;
            v314 = v212;
            v214 = (PartyListViewItem_o *)sub_B2C42C(PartyListViewItem_TypeInfo);
            PartyListViewItem___ctor_31902268(
              v214,
              isBaseModify,
              menuKindd,
              waveNumc - 1,
              maxCoste,
              v314,
              v318,
              followerd,
              v312,
              v211,
              isFirstChange,
              v209,
              v213,
              0LL);
            if ( !v208 )
              goto LABEL_405;
            if ( v214 )
            {
              titleInfo = sub_B2C41C(v214, v208->obj.klass->_1.element_class);
              if ( !titleInfo )
                goto LABEL_409;
            }
            if ( v196 >= v208->max_length )
              goto LABEL_406;
            v193 = v207;
            *(Il2CppClass **)((char *)&v208->obj.klass + v197 * 8) = (Il2CppClass *)v214;
            sub_B2C2F8((char *)v208 + v197 * 8, v214);
            LODWORD(v195) = *((_DWORD *)v207 + 6);
            ++v196;
            ++v197;
            ++waveNumc;
            if ( (__int64)v196 >= (int)v195 )
              goto LABEL_306;
          }
          goto LABEL_406;
        case 4:
        case 5:
          titleInfo = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !titleInfo )
            goto LABEL_405;
          v70 = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)titleInfo,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          titleInfo = NetworkManager__get_UserId(0LL);
          v71 = this->fields.battleSetupInfo;
          if ( !v71 )
            goto LABEL_405;
          v72 = v71->fields.eventId;
          v73 = titleInfo;
          titleInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v74 = this->fields.battleSetupInfo;
          if ( !v74 )
            goto LABEL_405;
          if ( !v70 )
            goto LABEL_405;
          titleInfo = (__int64)UserEventDeckMaster__getDeckList(v70, v73, v72, titleInfo, v74->fields.questPhase, 0LL);
          if ( !titleInfo )
            goto LABEL_405;
          v75 = (_QWORD *)titleInfo;
          v76 = sub_B2C374(PartyListViewItem___TypeInfo, *(unsigned int *)(titleInfo + 24));
          *p_baseDeckItemList = (struct PartyListViewItem_array *)v76;
          sub_B2C2F8(p_baseDeckItemList, v76);
          v77 = v75[3];
          if ( (int)v77 < 1 )
            goto LABEL_306;
          v78 = 0LL;
          while ( v78 < (unsigned int)v77 )
          {
            v79 = &v75[v78];
            v82 = v79[4];
            v81 = (UserEventDeckEntity_o **)(v79 + 4);
            v80 = v82;
            if ( !v82 )
              goto LABEL_415;
            v83 = *(_QWORD *)(v80 + 32);
            if ( !v83 )
              goto LABEL_405;
            titleInfo = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v83 + 32), 0LL);
            if ( (titleInfo & 1) == 0 )
            {
LABEL_415:
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              titleInfo = NetworkManager__get_UserId(0LL);
              v84 = this->fields.battleSetupInfo;
              if ( !v84 )
                goto LABEL_405;
              v85 = v84->fields.eventId;
              v86 = v84->fields.userEquipId;
              v87 = titleInfo;
              v88 = (UserEventDeckEntity_o *)sub_B2C42C(UserEventDeckEntity_TypeInfo);
              UserEventDeckEntity___ctor_27003412(v88, v87, v85, v78 + 1, v86, 0, 0, 0LL);
              if ( v88 )
              {
                titleInfo = sub_B2C41C(v88, *(_QWORD *)(*v75 + 64LL));
                if ( !titleInfo )
                  goto LABEL_409;
              }
              if ( v78 >= *((unsigned int *)v75 + 6) )
                goto LABEL_406;
              *v81 = v88;
              sub_B2C2F8(v81, v88);
            }
            if ( this->fields.partyItem )
            {
              if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
              }
              titleInfo = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( !titleInfo )
                goto LABEL_405;
              if ( *(int *)(titleInfo + 48) >= 1 )
              {
                for ( i = 0; ; ++i )
                {
                  titleInfo = (__int64)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    titleInfo = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( i >= *(_DWORD *)(*(_QWORD *)(titleInfo + 184) + 156LL) )
                    break;
                  if ( v78 >= *((unsigned int *)v75 + 6) )
                    goto LABEL_406;
                  if ( !*v81 )
                    goto LABEL_405;
                  deckInfo = (*v81)->fields.deckInfo;
                  if ( !deckInfo )
                    goto LABEL_405;
                  svts = deckInfo->fields.svts;
                  if ( !svts )
                    goto LABEL_405;
                  if ( i >= svts->max_length )
                    goto LABEL_406;
                  titleInfo = (__int64)this->fields.partyItem;
                  if ( !titleInfo )
                    goto LABEL_405;
                  v92 = svts->m_Items[i];
                  titleInfo = (__int64)PartyListViewItem__GetMember((PartyListViewItem_o *)titleInfo, i, 0LL);
                  if ( !titleInfo || !v92 )
                    goto LABEL_405;
                  v92->fields.initPos = *(_DWORD *)(titleInfo + 332);
                }
              }
            }
            if ( !SelfUserGame )
              goto LABEL_405;
            if ( v78 >= *((unsigned int *)v75 + 6) )
              break;
            v93 = this->fields.battleSetupInfo;
            if ( !v93 )
              goto LABEL_405;
            followerDeckId = v93->fields.followerSupportDeckId;
            menuKindb = this->fields.menuKind;
            maxCosta = SelfUserGame->fields.costMax;
            setupInfo = this->fields.setupInfo;
            followerClassId = this->fields.followerClassId;
            v98 = this->fields.questRestrictionInfo;
            v97 = this->fields.followerInfo;
            v99 = this->fields.baseDeckItemList;
            v100 = this->fields.friendPointCampaignEntityList;
            v101 = *v81;
            follower = v97;
            v102 = (PartyListViewItem_o *)sub_B2C42C(PartyListViewItem_TypeInfo);
            PartyListViewItem___ctor_31906376(
              v102,
              isBaseModify,
              menuKindb,
              v78,
              maxCosta,
              v101,
              v98,
              follower,
              followerClassId,
              setupInfo,
              v100,
              followerDeckId,
              0LL);
            if ( !v99 )
              goto LABEL_405;
            if ( v102 )
            {
              titleInfo = sub_B2C41C(v102, v99->obj.klass->_1.element_class);
              if ( !titleInfo )
                goto LABEL_409;
            }
            this = waveNuma;
            if ( v78 >= v99->max_length )
              goto LABEL_406;
            v103 = &v99->obj.klass + v78;
            v103[4] = (Il2CppClass *)v102;
            sub_B2C2F8(v103 + 4, v102);
            LODWORD(v77) = *((_DWORD *)v75 + 6);
            if ( (__int64)++v78 >= (int)v77 )
              goto LABEL_306;
          }
          goto LABEL_406;
        case 6:
        case 7:
          titleInfo = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !titleInfo )
            goto LABEL_405;
          v105 = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)titleInfo,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          titleInfo = NetworkManager__get_UserId(0LL);
          v106 = this->fields.battleSetupInfo;
          if ( !v106 )
            goto LABEL_405;
          v107 = v106->fields.eventId;
          v108 = titleInfo;
          titleInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v109 = this->fields.battleSetupInfo;
          if ( !v109 )
            goto LABEL_405;
          if ( !v105 )
            goto LABEL_405;
          titleInfo = (__int64)UserEventDeckMaster__getDeckList(
                                 v105,
                                 v108,
                                 v107,
                                 titleInfo,
                                 v109->fields.questPhase,
                                 0LL);
          if ( !titleInfo )
            goto LABEL_405;
          v110 = (_QWORD *)titleInfo;
          v111 = sub_B2C374(PartyListViewItem___TypeInfo, *(unsigned int *)(titleInfo + 24));
          *p_baseDeckItemList = (struct PartyListViewItem_array *)v111;
          sub_B2C2F8(p_baseDeckItemList, v111);
          v112 = v110[3];
          if ( (int)v112 < 1 )
            goto LABEL_306;
          menuKinda = 0;
          v113 = 0LL;
          while ( v113 < (unsigned int)v112 )
          {
            v126 = &v110[v113];
            v129 = v126[4];
            v128 = (UserEventDeckEntity_o **)(v126 + 4);
            v127 = v129;
            if ( !v129 )
              goto LABEL_416;
            v130 = *(_QWORD *)(v127 + 32);
            if ( !v130 )
              goto LABEL_405;
            titleInfo = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v130 + 32), 0LL);
            if ( (titleInfo & 1) == 0 )
            {
LABEL_416:
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              titleInfo = NetworkManager__get_UserId(0LL);
              v131 = this->fields.battleSetupInfo;
              if ( !v131 )
                goto LABEL_405;
              v132 = v131->fields.eventId;
              v133 = v131->fields.userEquipId;
              v134 = titleInfo;
              v135 = (UserEventDeckEntity_o *)sub_B2C42C(UserEventDeckEntity_TypeInfo);
              UserEventDeckEntity___ctor_27003412(v135, v134, v132, v113 + 1, v133, 0, 0, 0LL);
              if ( v135 )
              {
                titleInfo = sub_B2C41C(v135, *(_QWORD *)(*v110 + 64LL));
                if ( !titleInfo )
                  goto LABEL_409;
              }
              if ( v113 >= *((unsigned int *)v110 + 6) )
                goto LABEL_406;
              *v128 = v135;
              sub_B2C2F8(v128, v135);
              menuKinda = 1;
            }
            if ( this->fields.partyItem )
            {
              if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
              }
              titleInfo = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( !titleInfo )
                goto LABEL_405;
              if ( *(int *)(titleInfo + 48) >= 1 )
              {
                for ( j = 0; ; ++j )
                {
                  titleInfo = (__int64)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    titleInfo = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( j >= *(_DWORD *)(*(_QWORD *)(titleInfo + 184) + 156LL) )
                    break;
                  if ( v113 >= *((unsigned int *)v110 + 6) )
                    goto LABEL_406;
                  if ( !*v128 )
                    goto LABEL_405;
                  v137 = (*v128)->fields.deckInfo;
                  if ( !v137 )
                    goto LABEL_405;
                  v138 = v137->fields.svts;
                  if ( !v138 )
                    goto LABEL_405;
                  if ( j >= v138->max_length )
                    goto LABEL_406;
                  titleInfo = (__int64)this->fields.partyItem;
                  if ( !titleInfo )
                    goto LABEL_405;
                  v139 = v138->m_Items[j];
                  titleInfo = (__int64)PartyListViewItem__GetMember((PartyListViewItem_o *)titleInfo, j, 0LL);
                  if ( !titleInfo || !v139 )
                    goto LABEL_405;
                  v139->fields.initPos = *(_DWORD *)(titleInfo + 332);
                }
              }
            }
            v140 = this->fields.menuKind;
            if ( v140 != 6 )
              goto LABEL_176;
            v141 = this->fields.questRestrictionInfo;
            if ( !v141 )
              goto LABEL_405;
            if ( !v141->fields.isNpcEditablePos )
            {
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              titleInfo = NetworkManager__get_UserId(0LL);
              v114 = this->fields.battleSetupInfo;
              if ( !v114 )
                goto LABEL_405;
              v115 = v114->fields.eventId;
              v116 = v114->fields.userEquipId;
              v117 = titleInfo;
              v118 = (UserEventDeckEntity_o *)sub_B2C42C(UserEventDeckEntity_TypeInfo);
              UserEventDeckEntity___ctor_27003412(v118, v117, v115, v113 + 1, v116, 0, 0, 0LL);
              if ( !SelfUserGame )
                goto LABEL_405;
              v119 = (unsigned int *)*p_baseDeckItemList;
              followera = this->fields.menuKind;
              costMax = SelfUserGame->fields.costMax;
              maxCostb = this->fields.setupInfo;
              v121 = this->fields.questRestrictionInfo;
              v120 = this->fields.followerInfo;
              v122 = this->fields.followerClassId;
              v123 = this->fields.friendPointCampaignEntityList;
              v124 = (PartyListViewItem_o *)sub_B2C42C(PartyListViewItem_TypeInfo);
              PartyListViewItem___ctor_31909060(
                v124,
                isBaseModify,
                followera,
                v113,
                costMax,
                v118,
                v121,
                maxCostb,
                v123,
                menuKinda & 1,
                v120,
                v122,
                0,
                0LL);
              if ( !v119 )
                goto LABEL_405;
              if ( v124 )
              {
                titleInfo = sub_B2C41C(v124, *(_QWORD *)(*(_QWORD *)v119 + 64LL));
                if ( !titleInfo )
                  goto LABEL_409;
              }
              this = waveNuma;
              if ( v113 >= v119[6] )
                goto LABEL_406;
              v125 = &v119[2 * v113];
              *((_QWORD *)v125 + 4) = v124;
              sub_B2C2F8(v125 + 8, v124);
              ++v113;
            }
            else
            {
LABEL_176:
              if ( !SelfUserGame )
                goto LABEL_405;
              if ( v113 >= *((unsigned int *)v110 + 6) )
                goto LABEL_406;
              v142 = this->fields.battleSetupInfo;
              if ( !v142 )
                goto LABEL_405;
              v143 = v142->fields.followerSupportDeckId;
              v144 = *v128;
              v145 = (unsigned int *)*p_baseDeckItemList;
              maxCostc = SelfUserGame->fields.costMax;
              v146 = this->fields.questRestrictionInfo;
              v147 = this->fields.followerInfo;
              v148 = this->fields.friendPointCampaignEntityList;
              v149 = this->fields.setupInfo;
              v150 = this->fields.followerClassId;
              followerb = (FollowerInfo_o *)v146;
              v316 = v149;
              v151 = (PartyListViewItem_o *)sub_B2C42C(PartyListViewItem_TypeInfo);
              PartyListViewItem___ctor_31909060(
                v151,
                isBaseModify,
                v140,
                v113,
                maxCostc,
                v144,
                (QuestRestrictionInfo_o *)followerb,
                v316,
                v148,
                menuKinda & 1,
                v147,
                v150,
                v143,
                0LL);
              if ( !v145 )
                goto LABEL_405;
              if ( v151 )
              {
                titleInfo = sub_B2C41C(v151, *(_QWORD *)(*(_QWORD *)v145 + 64LL));
                if ( !titleInfo )
                  goto LABEL_409;
              }
              this = waveNuma;
              if ( v113 >= v145[6] )
                goto LABEL_406;
              v152 = &v145[2 * v113];
              *((_QWORD *)v152 + 4) = v151;
              sub_B2C2F8(v152 + 8, v151);
              ++v113;
            }
            LODWORD(v112) = *((_DWORD *)v110 + 6);
            if ( (__int64)v113 >= (int)v112 )
              goto LABEL_306;
          }
          goto LABEL_406;
        default:
          v160 = this->fields.questRestrictionInfo;
          if ( v160 )
            v161 = v160->fields.eventDeckNum > 0;
          else
            v161 = 0;
          titleInfo = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !titleInfo )
            goto LABEL_405;
          if ( v161 )
          {
            v215 = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)titleInfo,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            titleInfo = NetworkManager__get_UserId(0LL);
            v216 = this->fields.battleSetupInfo;
            if ( !v216 )
              goto LABEL_405;
            v217 = v216->fields.eventId;
            v218 = titleInfo;
            titleInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
            v219 = this->fields.battleSetupInfo;
            if ( !v219 )
              goto LABEL_405;
            if ( !v215 )
              goto LABEL_405;
            titleInfo = (__int64)UserEventDeckMaster__getDeckList(
                                   v215,
                                   v218,
                                   v217,
                                   titleInfo,
                                   v219->fields.questPhase,
                                   0LL);
            if ( !titleInfo )
              goto LABEL_405;
            v220 = (_QWORD *)titleInfo;
            v221 = sub_B2C374(PartyListViewItem___TypeInfo, *(unsigned int *)(titleInfo + 24));
            *p_baseDeckItemList = (struct PartyListViewItem_array *)v221;
            sub_B2C2F8(p_baseDeckItemList, v221);
            v222 = v220[3];
            if ( (int)v222 >= 1 )
            {
              v223 = 0LL;
              while ( v223 < (unsigned int)v222 )
              {
                v224 = &v220[v223];
                v227 = v224[4];
                v226 = (UserEventDeckEntity_o **)(v224 + 4);
                v225 = v227;
                if ( !v227 )
                  goto LABEL_417;
                v228 = *(_QWORD *)(v225 + 32);
                if ( !v228 )
                  goto LABEL_405;
                titleInfo = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v228 + 32), 0LL);
                if ( (titleInfo & 1) == 0 )
                {
LABEL_417:
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  titleInfo = NetworkManager__get_UserId(0LL);
                  v229 = this->fields.battleSetupInfo;
                  if ( !v229 )
                    goto LABEL_405;
                  v230 = v229->fields.eventId;
                  v231 = v229->fields.userEquipId;
                  v232 = titleInfo;
                  v233 = (UserEventDeckEntity_o *)sub_B2C42C(UserEventDeckEntity_TypeInfo);
                  UserEventDeckEntity___ctor_27003412(v233, v232, v230, v223 + 1, v231, 0, 0, 0LL);
                  if ( v233 )
                  {
                    titleInfo = sub_B2C41C(v233, *(_QWORD *)(*v220 + 64LL));
                    if ( !titleInfo )
                    {
LABEL_409:
                      v310 = sub_B2C454();
                      sub_B2C400(v310, 0LL);
                    }
                  }
                  if ( v223 >= *((unsigned int *)v220 + 6) )
                    goto LABEL_406;
                  *v226 = v233;
                  sub_B2C2F8(v226, v233);
                }
                if ( this->fields.partyItem )
                {
                  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
                  }
                  titleInfo = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                  if ( !titleInfo )
                    goto LABEL_405;
                  if ( *(int *)(titleInfo + 48) >= 1 )
                  {
                    for ( k = 0; ; ++k )
                    {
                      titleInfo = (__int64)BalanceConfig_TypeInfo;
                      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        titleInfo = (__int64)BalanceConfig_TypeInfo;
                      }
                      if ( k >= *(_DWORD *)(*(_QWORD *)(titleInfo + 184) + 156LL) )
                        break;
                      if ( v223 >= *((unsigned int *)v220 + 6) )
                        goto LABEL_406;
                      if ( !*v226 )
                        goto LABEL_405;
                      v235 = (*v226)->fields.deckInfo;
                      if ( !v235 )
                        goto LABEL_405;
                      v236 = v235->fields.svts;
                      if ( !v236 )
                        goto LABEL_405;
                      if ( k >= v236->max_length )
                        goto LABEL_406;
                      titleInfo = (__int64)this->fields.partyItem;
                      if ( !titleInfo )
                        goto LABEL_405;
                      v237 = v236->m_Items[k];
                      titleInfo = (__int64)PartyListViewItem__GetMember((PartyListViewItem_o *)titleInfo, k, 0LL);
                      if ( !titleInfo || !v237 )
                        goto LABEL_405;
                      v237->fields.initPos = *(_DWORD *)(titleInfo + 332);
                    }
                  }
                }
                if ( !SelfUserGame )
                  goto LABEL_405;
                if ( v223 >= *((unsigned int *)v220 + 6) )
                  break;
                v238 = this->fields.battleSetupInfo;
                if ( !v238 )
                  goto LABEL_405;
                v239 = v238->fields.followerSupportDeckId;
                maxCostf = SelfUserGame->fields.costMax;
                v240 = this;
                menuKinde = this->fields.menuKind;
                v241 = this->fields.followerClassId;
                v242 = this->fields.baseDeckItemList;
                v243 = this->fields.friendPointCampaignEntityList;
                v244 = v240->fields.setupInfo;
                followere = v241;
                v245 = v240->fields.questRestrictionInfo;
                v246 = v240->fields.followerInfo;
                v247 = *v226;
                v248 = (PartyListViewItem_o *)sub_B2C42C(PartyListViewItem_TypeInfo);
                PartyListViewItem___ctor_31897120(
                  v248,
                  isBaseModify,
                  menuKinde,
                  v223,
                  maxCostf,
                  v247,
                  v246,
                  followere,
                  v244,
                  v245,
                  v243,
                  v239,
                  0LL);
                if ( !v242 )
                  goto LABEL_405;
                if ( v248 )
                {
                  titleInfo = sub_B2C41C(v248, v242->obj.klass->_1.element_class);
                  if ( !titleInfo )
                    goto LABEL_409;
                }
                this = waveNuma;
                if ( v223 >= v242->max_length )
                  goto LABEL_406;
                v249 = &v242->obj.klass + v223;
                v249[4] = (Il2CppClass *)v248;
                sub_B2C2F8(v249 + 4, v248);
                LODWORD(v222) = *((_DWORD *)v220 + 6);
                if ( (__int64)++v223 >= (int)v222 )
                  goto LABEL_306;
              }
              goto LABEL_406;
            }
LABEL_306:
            this->fields.selectPartyNum = 0;
          }
          else
          {
            v257 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)titleInfo,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            titleInfo = NetworkManager__get_UserId(0LL);
            if ( !v257 )
              goto LABEL_405;
            titleInfo = (__int64)UserDeckMaster__getDeckList(v257, titleInfo, 0LL);
            if ( !titleInfo )
              goto LABEL_405;
            v258 = titleInfo;
            v259 = sub_B2C374(PartyListViewItem___TypeInfo, *(unsigned int *)(titleInfo + 24));
            *p_baseDeckItemList = (struct PartyListViewItem_array *)v259;
            sub_B2C2F8(p_baseDeckItemList, v259);
            v260 = *(_QWORD *)(v258 + 24);
            if ( (int)v260 >= 1 )
            {
              v261 = 0;
              while ( v261 < (unsigned int)v260 )
              {
                v262 = v261;
                v263 = 0LL;
                v264 = (UserDeckEntity_o **)(v258 + 8LL * v261 + 32);
                while ( 1 )
                {
                  v265 = *v264;
                  if ( !*v264 )
                    goto LABEL_407;
                  v266 = v265->fields.deckInfo;
                  if ( !v266 )
                    goto LABEL_407;
                  v267 = v266->fields.svts;
                  if ( !v267 )
                    goto LABEL_407;
                  max_length = v267->max_length;
                  if ( (int)v263 >= max_length )
                    break;
                  if ( (unsigned int)v263 >= max_length )
                    goto LABEL_406;
                  v269 = v267->m_Items[v263];
                  if ( !v269 )
                    goto LABEL_407;
                  ++v263;
                  if ( !v269->fields.initPos )
                  {
                    v269->fields.initPos = v263;
                    v260 = *(_QWORD *)(v258 + 24);
                  }
                  if ( (unsigned int)v262 >= (unsigned int)v260 )
                    goto LABEL_408;
                }
                if ( !SelfUserGame )
                  goto LABEL_407;
                v270 = this->fields.battleSetupInfo;
                if ( !v270 )
                  goto LABEL_407;
                v271 = v270->fields.followerSupportDeckId;
                v272 = this->fields.baseDeckItemList;
                menuKindf = this->fields.menuKind;
                v273 = this;
                v274 = this->fields.setupInfo;
                v275 = this->fields.friendPointCampaignEntityList;
                v276 = SelfUserGame->fields.costMax;
                maxCostg = v274;
                followerf = v273->fields.followerClassId;
                v277 = v273->fields.questRestrictionInfo;
                v278 = v273->fields.followerInfo;
                v279 = (PartyListViewItem_o *)sub_B2C42C(PartyListViewItem_TypeInfo);
                PartyListViewItem___ctor_31894220(
                  v279,
                  menuKindf,
                  v262,
                  v276,
                  v265,
                  v278,
                  followerf,
                  maxCostg,
                  v277,
                  v275,
                  v271,
                  0LL);
                if ( !v272 )
                  goto LABEL_407;
                if ( v279 )
                {
                  titleInfo = sub_B2C41C(v279, v272->obj.klass->_1.element_class);
                  if ( !titleInfo )
                  {
                    v311 = sub_B2C454();
                    sub_B2C400(v311, 0LL);
                  }
                }
                this = waveNuma;
                if ( (unsigned int)v262 >= v272->max_length )
                  goto LABEL_408;
                v280 = &v272->obj.klass + v262;
                v280[4] = (Il2CppClass *)v279;
                sub_B2C2F8(v280 + 4, v279);
                v260 = *(_QWORD *)(v258 + 24);
                v261 = v262 + 1;
                if ( (int)v262 + 1 >= (int)v260 )
                  goto LABEL_352;
              }
              goto LABEL_408;
            }
LABEL_352:
            lastUsedDeckNumber = this->fields.lastUsedDeckNumber;
            v282 = __OFSUB__(lastUsedDeckNumber, 1);
            v283 = lastUsedDeckNumber - 1;
            if ( v283 < 0 == v282 )
            {
              this->fields.selectPartyNum = v283;
              this->fields.lastUsedDeckNumber = 0;
              break;
            }
            activeDeckId = this->fields.activeDeckId;
            if ( activeDeckId < 1 )
              break;
            this->fields.selectPartyNum = 0;
            v305 = *(_DWORD *)(v258 + 24);
            if ( v305 >= 1 )
            {
              v306 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v306 >= v305 )
                  goto LABEL_408;
                v307 = *(_QWORD *)(v258 + 32 + 8 * v306);
                if ( !v307 )
                  goto LABEL_407;
                if ( *(_QWORD *)(v307 + 16) == activeDeckId )
                  break;
                if ( (int)++v306 >= v305 )
                  goto LABEL_307;
              }
              this->fields.selectPartyNum = v306;
            }
          }
LABEL_307:
          this->fields.activeDeckId = 0LL;
          break;
      }
    }
    v250 = this->fields.questRestrictionInfo;
    if ( v250 )
    {
      titleInfo = QuestRestrictionInfo__IsMyServantOrNpcRestriction(v250, 0LL);
      if ( (titleInfo & 1) != 0 )
      {
        v252 = this->fields.battleSetupInfo;
        if ( !v252 )
          goto LABEL_407;
        if ( !v252->fields.followerId && !v252->fields.isChildFollower )
        {
          for ( m = 0; ; ++m )
          {
            titleInfo = (__int64)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              titleInfo = (__int64)BalanceConfig_TypeInfo;
            }
            if ( m >= *(_DWORD *)(*(_QWORD *)(titleInfo + 184) + 156LL) )
              goto LABEL_356;
            v254 = this->fields.baseDeckItemList;
            if ( !v254 )
              goto LABEL_407;
            selectPartyNum = this->fields.selectPartyNum;
            if ( (unsigned int)selectPartyNum >= v254->max_length )
              goto LABEL_408;
            titleInfo = (__int64)v254->m_Items[selectPartyNum];
            if ( !titleInfo )
              goto LABEL_407;
            titleInfo = (__int64)PartyListViewItem__GetMember((PartyListViewItem_o *)titleInfo, m, 0LL);
            if ( titleInfo )
            {
              if ( *(_BYTE *)(titleInfo + 224) )
              {
                v256 = *(_QWORD *)(titleInfo + 120);
                if ( v256 )
                  break;
              }
            }
          }
          v284 = this->fields.battleSetupInfo;
          if ( !v284 )
            goto LABEL_407;
          v284->fields.followerId = *(_QWORD *)(v256 + 16);
        }
      }
    }
LABEL_356:
    titleInfo = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !titleInfo )
      goto LABEL_407;
    if ( *(_BYTE *)(titleInfo + 140) )
    {
      titleInfo = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !titleInfo )
        goto LABEL_407;
      if ( *(_DWORD *)(titleInfo + 144) == 1 )
      {
        v285 = 1;
        isBaseModify[0] = 0;
LABEL_376:
        this->fields.isSaveDeck = 1;
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        titleInfo = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( titleInfo )
        {
          if ( !*(_DWORD *)(titleInfo + 48) )
            this->fields.state = 2;
          titleInfo = (__int64)this->fields.partyListMenu;
          if ( titleInfo )
          {
            PartyListMenu__SetSelectItemEnable((PartyListMenu_o *)titleInfo, 0, 0LL);
            partyListMenu = this->fields.partyListMenu;
            v295 = this->fields.menuKind;
            v296 = this->fields.baseDeckItemList;
            v297 = this->fields.selectPartyNum;
            v298 = this->fields.setupInfo;
            v299 = this->fields.questRestrictionInfo;
            v300 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v300,
              (Il2CppObject *)this,
              Method_PartyOrganizationRootComponent_EndSelectQuest__,
              0LL);
            if ( partyListMenu )
            {
              PartyListMenu__Open(
                partyListMenu,
                v295,
                0,
                v296,
                v297,
                v298,
                v299,
                0LL,
                v300,
                this->fields.friendPointCampaignVal,
                v285,
                0,
                0,
                0LL);
              if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
              }
              titleInfo = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( titleInfo )
              {
                if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)titleInfo, 0LL)
                  || !this->fields.isCheckFriendshipUpItemAvailable )
                {
                  return;
                }
                Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v302 = LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
                v303 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(
                  v303,
                  (Il2CppObject *)this,
                  Method_PartyOrganizationRootComponent__SelectQuest_b__109_0__,
                  0LL);
                if ( Instance )
                {
                  CommonUI__OpenNotificationDialog(
                    Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v302,
                    v303,
                    -1,
                    0,
                    0,
                    0,
                    0,
                    0,
                    0,
                    0,
                    0LL,
                    0LL);
                  return;
                }
              }
            }
          }
        }
LABEL_407:
        sub_B2C434(titleInfo, v251);
      }
    }
    if ( !isBaseModify[0] || !this->fields.isSaveDeck )
    {
LABEL_375:
      v285 = 0;
      goto LABEL_376;
    }
    v286 = *p_baseDeckItemList;
    if ( !*p_baseDeckItemList )
      goto LABEL_407;
    if ( v286->max_length )
    {
      titleInfo = (__int64)v286->m_Items[0];
      if ( !titleInfo )
        goto LABEL_407;
      UserEventDeck = PartyListViewItem__GetUserEventDeck((PartyListViewItem_o *)titleInfo, 0LL);
      if ( UserEventDeck )
      {
        v288 = UserEventDeck;
        titleInfo = (__int64)this->fields.partyListMenu;
        if ( titleInfo )
        {
          PartyListMenu__Open(
            (PartyListMenu_o *)titleInfo,
            this->fields.menuKind,
            0,
            this->fields.baseDeckItemList,
            this->fields.selectPartyNum,
            this->fields.setupInfo,
            this->fields.questRestrictionInfo,
            0LL,
            0LL,
            this->fields.friendPointCampaignVal,
            0,
            0,
            1,
            0LL);
          v289 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v289,
            (Il2CppObject *)this,
            Method_PartyOrganizationRootComponent_EndRequestSelectQuest__,
            0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          titleInfo = (__int64)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                 v289,
                                 (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventDeckSetupRequest___);
          v290 = this->fields.battleSetupInfo;
          if ( v290 )
          {
            v291 = v290->fields.eventId;
            v292 = (EventDeckSetupRequest_o *)titleInfo;
            titleInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
            v293 = this->fields.battleSetupInfo;
            if ( v293 )
            {
              if ( v292 )
              {
                EventDeckSetupRequest__beginRequest(v292, v288, v291, titleInfo, v293->fields.questPhase, 0LL);
                return;
              }
            }
          }
        }
        goto LABEL_407;
      }
      goto LABEL_375;
    }
LABEL_408:
    v309 = sub_B2C460(titleInfo);
    sub_B2C400(v309, 0LL);
  }
  this->fields.state = 31;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  titleInfo = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_StageMaster___);
  v34 = this->fields.battleSetupInfo;
  if ( !v34 || !titleInfo )
    goto LABEL_405;
  waveNum = StageMaster__GetWaveCount((StageMaster_o *)titleInfo, v34->fields.questId, v34->fields.questPhase, 0LL);
  Master_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  titleInfo = NetworkManager__get_UserId(0LL);
  v36 = this->fields.battleSetupInfo;
  if ( !v36 )
    goto LABEL_405;
  v37 = v36->fields.eventId;
  v38 = titleInfo;
  titleInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v39 = this->fields.battleSetupInfo;
  if ( !v39 )
    goto LABEL_405;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_405;
  titleInfo = (__int64)UserEventDeckMaster__getDeckList(
                         Master_WarQuestSelectionMaster,
                         v38,
                         v37,
                         titleInfo,
                         v39->fields.questPhase,
                         0LL);
  if ( !titleInfo )
    goto LABEL_405;
  if ( !*(_DWORD *)(titleInfo + 24) )
  {
LABEL_406:
    v308 = sub_B2C460(titleInfo);
    sub_B2C400(v308, 0LL);
  }
  v346 = *(UserEventDeckEntity_o **)(titleInfo + 32);
  if ( !v346 )
    goto LABEL_418;
  v40 = v346->fields.deckInfo;
  if ( !v40 )
    goto LABEL_405;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v40->fields.waveSvts, 0LL) )
  {
LABEL_418:
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    titleInfo = NetworkManager__get_UserId(0LL);
    v41 = this->fields.battleSetupInfo;
    if ( !v41 )
      goto LABEL_405;
    v42 = titleInfo;
    v43 = v41->fields.eventId;
    v44 = v41->fields.userEquipId;
    v45 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v45 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v45->static_fields->DeckMainMemberMax;
    v346 = (UserEventDeckEntity_o *)sub_B2C42C(UserEventDeckEntity_TypeInfo);
    UserEventDeckEntity___ctor_27003412(v346, v42, v43, 1, v44, waveNum, DeckMainMemberMax, 0LL);
  }
  menuKind = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.baseDeckItemList )
  {
    v47 = (struct PartyListViewItem_array *)sub_B2C374(PartyListViewItem___TypeInfo, (unsigned int)waveNum);
    this->fields.baseDeckItemList = v47;
    maxCost = &this->fields.baseDeckItemList;
    sub_B2C2F8(&this->fields.baseDeckItemList, v47);
    v48 = (struct PartyListViewItem_array *)sub_B2C374(PartyListViewItem___TypeInfo, (unsigned int)waveNum);
    this->fields.waveBattleBaseDeckItemList = v48;
    sub_B2C2F8(&this->fields.waveBattleBaseDeckItemList, v48);
    if ( waveNum >= 1 )
    {
      if ( menuKind )
      {
        v49 = 0;
        v50 = 32LL;
        while ( 1 )
        {
          v51 = this->fields.baseDeckItemList;
          v52 = this->fields.menuKind;
          v53 = this->fields.questRestrictionInfo;
          v54 = menuKind->fields.costMax;
          v55 = this->fields.setupInfo;
          v56 = (PartyListViewItem_o *)sub_B2C42C(PartyListViewItem_TypeInfo);
          PartyListViewItem___ctor_31918940(v56, v52, v49, v54, v346, v53, v55, 0LL);
          if ( !v51 )
            break;
          if ( v56 )
          {
            titleInfo = sub_B2C41C(v56, v51->obj.klass->_1.element_class);
            if ( !titleInfo )
              goto LABEL_409;
          }
          if ( v49 >= v51->max_length )
            goto LABEL_406;
          *(Il2CppClass **)((char *)&v51->obj.klass + v50) = (Il2CppClass *)v56;
          sub_B2C2F8((char *)v51 + v50, v56);
          v57 = *maxCost;
          if ( !*maxCost )
            break;
          if ( v49 >= v57->max_length )
            goto LABEL_406;
          titleInfo = *(__int64 *)((char *)&v57->obj.klass + v50);
          if ( !titleInfo )
            break;
          waveBattleBaseDeckItemList = this->fields.waveBattleBaseDeckItemList;
          titleInfo = (__int64)PartyListViewItem__Clone((PartyListViewItem_o *)titleInfo, 0LL);
          if ( !waveBattleBaseDeckItemList )
            break;
          v59 = (Il2CppClass *)titleInfo;
          if ( titleInfo )
          {
            titleInfo = sub_B2C41C(titleInfo, waveBattleBaseDeckItemList->obj.klass->_1.element_class);
            if ( !titleInfo )
              goto LABEL_409;
          }
          if ( v49 >= waveBattleBaseDeckItemList->max_length )
            goto LABEL_406;
          *(Il2CppClass **)((char *)&waveBattleBaseDeckItemList->obj.klass + v50) = v59;
          sub_B2C2F8((char *)waveBattleBaseDeckItemList + v50, v59);
          ++v49;
          v50 += 8LL;
          if ( (int)v49 >= waveNum )
            goto LABEL_46;
        }
      }
LABEL_405:
      sub_B2C434(titleInfo, method);
    }
  }
LABEL_46:
  waveBattlePartyOrganizationMenu = (UnityEngine_Object_o *)this->fields.waveBattlePartyOrganizationMenu;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_waveBattlePartyOrganizationMenu = &this->fields.waveBattlePartyOrganizationMenu;
  if ( UnityEngine_Object__op_Equality(waveBattlePartyOrganizationMenu, 0LL, 0LL) )
  {
    titleInfo = (__int64)this->fields.partyListMenu;
    if ( !titleInfo )
      goto LABEL_405;
    PartyListMenu__Init((PartyListMenu_o *)titleInfo, 0LL);
    titleInfo = (__int64)this->fields.waveBattlePartyOrganizationIndicator;
    this->fields.selectWaveNum = -1;
    if ( !titleInfo )
      goto LABEL_405;
    PartyEventPointIndicator__SetUnknown((PartyEventPointIndicator_o *)titleInfo, 0LL);
    titleInfo = (__int64)this->fields.waveBattlePartyOrganizationIndicator;
    if ( !titleInfo )
      goto LABEL_405;
    PartyEventPointIndicator__SetTotalDropItemList((PartyEventPointIndicator_o *)titleInfo, 0LL, 0LL);
    titleInfo = (__int64)this->fields.waveBattlePartyOrganizationFixSprite;
    if ( !titleInfo )
      goto LABEL_405;
    titleInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL);
    if ( !titleInfo )
      goto LABEL_405;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
    titleInfo = (__int64)this->fields.waveBattlePartyOrganizationFixSprite;
    if ( !titleInfo )
      goto LABEL_405;
    UISprite__set_spriteName((UISprite_o *)titleInfo, (System_String_o *)StringLiteral_20227/*"limited_bg"*/, 0LL);
    titleInfo = (__int64)this->fields.partyListMenu;
    if ( !titleInfo )
      goto LABEL_405;
    waveBattlePartyOrganizationPrefab = this->fields.waveBattlePartyOrganizationPrefab;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL);
    Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
    titleInfo = (__int64)BaseMonoBehaviour__createObject(
                           (BaseMonoBehaviour_o *)this,
                           waveBattlePartyOrganizationPrefab,
                           Parent,
                           0LL,
                           0LL);
    if ( !titleInfo )
      goto LABEL_405;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)titleInfo,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationMenu___);
    *p_waveBattlePartyOrganizationMenu = (struct WaveBattlePartyOrganizationMenu_o *)Component_srcLineSprite;
    sub_B2C2F8(&this->fields.waveBattlePartyOrganizationMenu, Component_srcLineSprite);
    titleInfo = (__int64)*p_waveBattlePartyOrganizationMenu;
    if ( !*p_waveBattlePartyOrganizationMenu )
      goto LABEL_405;
    WaveBattlePartyOrganizationMenu__Init((WaveBattlePartyOrganizationMenu_o *)titleInfo, 0LL);
    this->fields.selectPartyNum = 0;
    this->fields.activeDeckId = 0LL;
    v66 = this->fields.waveBattlePartyOrganizationMenu;
    v67 = this->fields.questRestrictionInfo;
    v68 = (WaveBattlePartyOrganizationMenu_CallbackFunc_o *)sub_B2C42C(WaveBattlePartyOrganizationMenu_CallbackFunc_TypeInfo);
    WaveBattlePartyOrganizationMenu_CallbackFunc___ctor(
      v68,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyOrganizationRootComponent_OnSelectWavePartyList__,
      0LL);
    if ( !v66 )
      goto LABEL_405;
    WaveBattlePartyOrganizationMenu__Open(v66, v346, v67, waveNum, v68, 0LL);
    goto LABEL_118;
  }
  titleInfo = (__int64)*p_waveBattlePartyOrganizationMenu;
  if ( !*p_waveBattlePartyOrganizationMenu )
    goto LABEL_405;
  if ( WaveBattlePartyOrganizationMenu__IsDisplay((WaveBattlePartyOrganizationMenu_o *)titleInfo, 0LL) )
  {
    titleInfo = (__int64)*p_waveBattlePartyOrganizationMenu;
    if ( !*p_waveBattlePartyOrganizationMenu )
      goto LABEL_405;
    WaveBattlePartyOrganizationMenu__UpdateInfo((WaveBattlePartyOrganizationMenu_o *)titleInfo, v346, 0LL);
LABEL_118:
    PartyOrganizationRootComponent__EndSelectQuest(this, v69);
    return;
  }
  selectWaveNum = this->fields.selectWaveNum;
  if ( (selectWaveNum & 0x80000000) != 0 )
  {
    selectWaveNum = this->fields.selectPartyNum;
  }
  else
  {
    this->fields.selectPartyNum = selectWaveNum;
    this->fields.selectWaveNum = -1;
  }
  v153 = this->fields.partyListMenu;
  v154 = this->fields.menuKind;
  v155 = this->fields.baseDeckItemList;
  v156 = this->fields.setupInfo;
  v157 = this->fields.questRestrictionInfo;
  v158 = (PartyListMenu_CallbackFunc_o *)sub_B2C42C(PartyListMenu_CallbackFunc_TypeInfo);
  PartyListMenu_CallbackFunc___ctor(
    v158,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyOrganizationRootComponent_OnSelectPartyList__,
    0LL);
  v159 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v159, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndSelectQuest__, 0LL);
  if ( !v153 )
    goto LABEL_405;
  PartyListMenu__Open(
    v153,
    v154,
    0,
    v155,
    selectWaveNum,
    v156,
    v157,
    v158,
    v159,
    this->fields.friendPointCampaignVal,
    0,
    0,
    0,
    0LL);
}


void __fastcall PartyOrganizationRootComponent__SelectSupportOnlyQuest(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0
  UserGameEntity_o *SelfUserGame; // x21
  struct PartyListViewItem_array *v8; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int64_t userEquipId; // x24
  struct PartyListViewItem_array *baseDeckItemList; // x20
  int32_t menuKind; // w22
  int32_t costMax; // w23
  FollowerInfo_o *followerInfo; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x28
  int32_t followerClassId; // w26
  EventUpValSetupInfo_o *setupInfo; // x27
  PartyListViewItem_o *v18; // x21
  PartyListMenu_o *partyListMenu; // x23
  int32_t v20; // w24
  PartyListViewItem_array *v21; // x22
  EventUpValSetupInfo_o *v22; // x20
  QuestRestrictionInfo_o *v23; // x21
  System_Action_o *v24; // x25
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_4184FD9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&PartyListViewItem___TypeInfo, v3);
    sub_B2C35C(&PartyListViewItem_TypeInfo, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndFadeSelectSupportOnlyQuest__, v5);
    byte_4184FD9 = 1;
  }
  if ( this->fields.state == 1 )
  {
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_14;
    TitleInfoControl__changeTitleInfo(titleInfo, 3, 64, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v8 = (struct PartyListViewItem_array *)sub_B2C374(PartyListViewItem___TypeInfo, 1LL);
    this->fields.baseDeckItemList = v8;
    sub_B2C2F8(&this->fields.baseDeckItemList, v8);
    if ( !SelfUserGame )
      goto LABEL_14;
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_14;
    userEquipId = battleSetupInfo->fields.userEquipId;
    baseDeckItemList = this->fields.baseDeckItemList;
    menuKind = this->fields.menuKind;
    costMax = SelfUserGame->fields.costMax;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    followerInfo = this->fields.followerInfo;
    followerClassId = this->fields.followerClassId;
    setupInfo = this->fields.setupInfo;
    v18 = (PartyListViewItem_o *)sub_B2C42C(PartyListViewItem_TypeInfo);
    PartyListViewItem___ctor_31905400(
      v18,
      menuKind,
      0,
      costMax,
      userEquipId,
      followerInfo,
      followerClassId,
      setupInfo,
      questRestrictionInfo,
      0LL,
      0,
      0LL);
    if ( !baseDeckItemList )
      goto LABEL_14;
    if ( v18 )
    {
      titleInfo = (TitleInfoControl_o *)sub_B2C41C(v18, baseDeckItemList->obj.klass->_1.element_class);
      if ( !titleInfo )
      {
        v26 = sub_B2C454();
        sub_B2C400(v26, 0LL);
      }
    }
    if ( !baseDeckItemList->max_length )
    {
      v25 = sub_B2C460(titleInfo);
      sub_B2C400(v25, 0LL);
    }
    baseDeckItemList->m_Items[0] = v18;
    sub_B2C2F8(baseDeckItemList->m_Items, v18);
    this->fields.activeDeckId = 0LL;
    partyListMenu = this->fields.partyListMenu;
    *(_QWORD *)&this->fields.state = 5LL;
    v20 = this->fields.menuKind;
    v21 = this->fields.baseDeckItemList;
    v22 = this->fields.setupInfo;
    v23 = this->fields.questRestrictionInfo;
    v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent_EndFadeSelectSupportOnlyQuest__,
      0LL);
    if ( !partyListMenu )
LABEL_14:
      sub_B2C434(titleInfo, method);
    PartyListMenu__Open(
      partyListMenu,
      v20,
      0,
      v21,
      0,
      v22,
      v23,
      0LL,
      v24,
      this->fields.friendPointCampaignVal,
      0,
      0,
      1,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent__SelectedFriendOfferConfirm(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v7; // x8

  if ( (byte_418504F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, isDecide);
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v5);
    byte_418504F = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B2C434(0LL, isDecide);
  v7 = &StringLiteral_8717/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8716/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0LL);
}


void __fastcall PartyOrganizationRootComponent__SendPlayMarkerEventForChange(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t menuKind; // w8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  PartyOrganizationMenu_o *partyOrganizationMenu; // x0
  __int64 *v7; // x8

  if ( (byte_418503A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3082/*"CLICK_SWAP"*/, method);
    sub_B2C35C(&StringLiteral_3050/*"CLICK_CHANGE"*/, v3);
    byte_418503A = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind != 3
    && (menuKind != 7
     || (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL
     || questRestrictionInfo->fields.isNpcEditablePos
     || questRestrictionInfo->fields.myServantNumMax != 1) )
  {
    partyOrganizationMenu = this->fields.partyOrganizationMenu;
    if ( partyOrganizationMenu )
    {
      PartyOrganizationMenu__Init(partyOrganizationMenu, method);
      partyOrganizationMenu = (PartyOrganizationMenu_o *)this->fields.myFSM;
      this->fields.menuMode = 11;
      if ( partyOrganizationMenu )
      {
        v7 = &StringLiteral_3082/*"CLICK_SWAP"*/;
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_B2C434(partyOrganizationMenu, method);
  }
  partyOrganizationMenu = (PartyOrganizationMenu_o *)this->fields.partyOrganizationChangeMenu;
  if ( !partyOrganizationMenu )
    goto LABEL_15;
  PartyOrganizationChangeMenu__Init((PartyOrganizationChangeMenu_o *)partyOrganizationMenu, 0LL);
  partyOrganizationMenu = (PartyOrganizationMenu_o *)this->fields.myFSM;
  this->fields.menuMode = 10;
  if ( !partyOrganizationMenu )
    goto LABEL_15;
  v7 = &StringLiteral_3050/*"CLICK_CHANGE"*/;
LABEL_14:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)partyOrganizationMenu, (System_String_o *)*v7, 0LL);
}


void __fastcall PartyOrganizationRootComponent__SetCacheAssetNameList(
        PartyOrganizationRootComponent_o *this,
        System_String_array *list,
        const MethodInfo *method)
{
  System_String_array *cacheAssetNameList; // x19
  struct System_String_array **p_cacheAssetNameList; // x21

  if ( (byte_4184FD3 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, list);
    byte_4184FD3 = 1;
  }
  cacheAssetNameList = this->fields.cacheAssetNameList;
  p_cacheAssetNameList = &this->fields.cacheAssetNameList;
  if ( list )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage_30159204(list, 0LL, 1, 0LL);
  }
  *p_cacheAssetNameList = list;
  sub_B2C2F8(p_cacheAssetNameList, list);
  if ( cacheAssetNameList )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_30161248(cacheAssetNameList, 0LL);
  }
}


void __fastcall PartyOrganizationRootComponent__SetCampaignItemIdBattleSutupInfo(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PartyOrganizationUtility_c *v5; // x0
  clsQuestCheck_o *Int; // x0
  __int64 v7; // x1
  ItemEntity_o *AvailableFriendshipUpItemEntity; // x20
  int32_t id; // w8
  struct BattleSetupInfo_o *battleSetupInfo; // x9

  if ( (byte_4185059 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, method);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v4);
    byte_4185059 = 1;
  }
  v5 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v5 = PartyOrganizationUtility_TypeInfo;
  }
  Int = (clsQuestCheck_o *)UnityEngine_PlayerPrefs__GetInt(
                             v5->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE,
                             0,
                             0LL);
  if ( (_DWORD)Int )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Int = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Int
      || (AvailableFriendshipUpItemEntity = PartyOrganizationUtility__GetAvailableFriendshipUpItemEntity(
                                              (PartyOrganizationUtility_o *)Int,
                                              0LL),
          (Int = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_18:
      sub_B2C434(Int, v7);
    }
    Int = (clsQuestCheck_o *)PartyOrganizationUtility__GetAvailableFriendshipUpItemNum(
                               (PartyOrganizationUtility_o *)Int,
                               0LL);
    id = 0;
    if ( AvailableFriendshipUpItemEntity && (int)Int >= 1 )
      id = AvailableFriendshipUpItemEntity->fields.id;
  }
  else
  {
    id = 0;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_18;
  battleSetupInfo->fields.campaignItemId = id;
}


void __fastcall PartyOrganizationRootComponent__SetRandomLimitCount(
        PartyOrganizationRootComponent_o *this,
        PartyListViewItem_o *item,
        int32_t *followrLimitCount,
        int32_t *followerSpoilerProtectionLimitCount,
        System_Collections_Generic_Dictionary_string__object__o **randLimitCountDic,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t i; // w23
  __int64 ServantLeader; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v17; // x24
  bool IsRandomChoice; // w26
  ServantLeaderInfo_o *v19; // x25
  __int64 v20; // x24
  __int64 v21; // x25
  PartyOrganizationRootComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  int32_t ImageLimitCountByLimitCount; // w0
  UserServantEntity_o *userServantEntity; // x0
  struct UserServantEntity_o *v26; // x8
  System_String_o *v27; // x0
  UserServantEntity_o *v28; // x25
  System_Xml_XmlQualifiedName_o *v29; // x24
  int32_t ChoiceLimitCount; // w0
  System_Collections_Generic_Dictionary_string__object__o *v31; // x25
  unsigned int v32; // w26
  int32_t v33; // w25
  int32_t v34; // w26
  int32_t LimitCountByDispLimit; // w25
  __int64 v36; // x26
  __int64 v37; // x27
  PartyOrganizationRootComponent_o *v38; // x0
  const MethodInfo *v39; // x3
  int32_t v40; // w25
  PartyOrganizationRootComponent_o *v41; // x0
  const MethodInfo *v42; // x3
  int32_t v44; // [xsp+Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4185018 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, item);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v9);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v10);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v13);
    byte_4185018 = 1;
  }
  for ( i = 0; ; ++i )
  {
    ServantLeader = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      ServantLeader = (__int64)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)(ServantLeader + 184) + 156LL) )
      break;
    if ( !item )
      goto LABEL_48;
    Member = PartyListViewItem__GetMember(item, i, 0LL);
    if ( Member )
    {
      v17 = Member;
      if ( !PartyOrganizationListViewItem__get_IsEmpty(Member, 0LL) )
      {
        if ( v17->fields.isFollower )
        {
          if ( PartyOrganizationListViewItem__get_ServantLeader(v17, 0LL) )
          {
            ServantLeader = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v17, 0LL);
            if ( !ServantLeader )
              goto LABEL_48;
            if ( !ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ServantLeader, 0LL) )
            {
              ServantLeader = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v17, 0LL);
              if ( !ServantLeader )
                goto LABEL_48;
              IsRandomChoice = ServantLeaderInfo__get_IsRandomChoice((ServantLeaderInfo_o *)ServantLeader, 0LL);
              ServantLeader = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v17, 0LL);
              v19 = (ServantLeaderInfo_o *)ServantLeader;
              if ( IsRandomChoice )
              {
                if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
                }
                *followrLimitCount = RandomLimitCountManager__GetChoiceLimitCount_21887276(v19, 0LL);
                ServantLeader = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v17, 0LL);
                if ( !ServantLeader )
                  goto LABEL_48;
                v21 = *(_QWORD *)(ServantLeader + 48);
                v20 = *(_QWORD *)(ServantLeader + 56);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v45.fields.currentCryptoKey = v21;
                *(_QWORD *)&v45.fields.fakeValue = v20;
                v22 = (PartyOrganizationRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                            v45,
                                                            0LL);
                ImageLimitCountByLimitCount = PartyOrganizationRootComponent__CalculateLimitCountWithSpoilerProtection(
                                                v22,
                                                (int32_t)v22,
                                                *followrLimitCount,
                                                v23);
              }
              else
              {
                if ( !ServantLeader )
                  goto LABEL_48;
                v32 = *(_DWORD *)(ServantLeader + 164);
                ServantLeader = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v17, 0LL);
                if ( !ServantLeader )
                  goto LABEL_48;
                v33 = *(_DWORD *)(ServantLeader + 64);
                v34 = (__PAIR64__(v32, v32 - 1) - 10) >> 32;
                if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                }
                LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v34, v33, 0LL);
                ServantLeader = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v17, 0LL);
                if ( !ServantLeader )
                  goto LABEL_48;
                v37 = *(_QWORD *)(ServantLeader + 48);
                v36 = *(_QWORD *)(ServantLeader + 56);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v46.fields.currentCryptoKey = v37;
                *(_QWORD *)&v46.fields.fakeValue = v36;
                v38 = (PartyOrganizationRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                            v46,
                                                            0LL);
                v40 = PartyOrganizationRootComponent__CalculateLimitCountWithSpoilerProtection(
                        v38,
                        (int32_t)v38,
                        LimitCountByDispLimit,
                        v39);
                ServantLeader = (__int64)PartyOrganizationListViewItem__get_ServantLeader(v17, 0LL);
                if ( !ServantLeader )
                  goto LABEL_48;
                v41 = (PartyOrganizationRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(ServantLeader + 48),
                                                            0LL);
                ImageLimitCountByLimitCount = PartyOrganizationRootComponent__GetImageLimitCountByLimitCount(
                                                v41,
                                                (int32_t)v41,
                                                v40,
                                                v42);
              }
              *followerSpoilerProtectionLimitCount = ImageLimitCountByLimitCount;
            }
          }
        }
        else
        {
          userServantEntity = v17->fields.userServantEntity;
          if ( userServantEntity )
          {
            ServantLeader = UserServantEntity__get_IsRandomChoice(userServantEntity, 0LL);
            if ( (ServantLeader & 1) != 0 && !v17->fields.isConvertOverwriteImage )
            {
              v26 = v17->fields.userServantEntity;
              if ( !v26 )
                goto LABEL_48;
              v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString(&v26->fields.id, 0LL);
              v28 = v17->fields.userServantEntity;
              v29 = (System_Xml_XmlQualifiedName_o *)v27;
              if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              }
              ChoiceLimitCount = RandomLimitCountManager__GetChoiceLimitCount(v28, 0LL);
              v31 = *randLimitCountDic;
              v44 = ChoiceLimitCount;
              ServantLeader = j_il2cpp_value_box_0(int_TypeInfo, &v44);
              if ( !v31 )
LABEL_48:
                sub_B2C434(ServantLeader, item);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v31,
                v29,
                (System_Xml_Schema_XmlSchemaObject_o *)ServantLeader,
                (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
            }
          }
        }
      }
    }
  }
}


void __fastcall PartyOrganizationRootComponent__SetRandomLimitCountBattleSutupInfo(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v5; // x20
  System_String_o *v6; // x0
  const MethodInfo *v7; // x5
  struct PartyListViewItem_o *partyItem; // x1
  struct PartyListViewItem_array *waveBattleBaseDeckItemList; // x21
  __int64 v10; // x8
  unsigned __int64 v11; // x22
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v13; // x21
  struct BattleSetupInfo_o *v14; // x8
  __int64 v15; // x0
  System_Collections_Generic_Dictionary_string__object__o *randLimitCountDic; // [xsp+8h] [xbp-38h] BYREF
  int32_t followerSpoilerProtectionLimitCount[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4185017 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v3);
    sub_B2C35C(&JsonManager_TypeInfo, v4);
    byte_4185017 = 1;
  }
  *(_QWORD *)followerSpoilerProtectionLimitCount = 0LL;
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v5,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  randLimitCountDic = (System_Collections_Generic_Dictionary_string__object__o *)v5;
  partyItem = this->fields.partyItem;
  if ( partyItem )
  {
    if ( partyItem->fields.menuKind == 9 )
    {
      waveBattleBaseDeckItemList = this->fields.waveBattleBaseDeckItemList;
      if ( !waveBattleBaseDeckItemList )
        goto LABEL_21;
      v10 = *(_QWORD *)&waveBattleBaseDeckItemList->max_length;
      if ( (int)v10 >= 1 )
      {
        v11 = 0LL;
        do
        {
          if ( v11 >= (unsigned int)v10 )
          {
            v15 = sub_B2C460(v6);
            sub_B2C400(v15, 0LL);
          }
          PartyOrganizationRootComponent__SetRandomLimitCount(
            this,
            waveBattleBaseDeckItemList->m_Items[v11],
            &followerSpoilerProtectionLimitCount[1],
            followerSpoilerProtectionLimitCount,
            &randLimitCountDic,
            v7);
          LODWORD(v10) = waveBattleBaseDeckItemList->max_length;
          ++v11;
        }
        while ( (__int64)v11 < (int)v10 );
      }
    }
    else
    {
      PartyOrganizationRootComponent__SetRandomLimitCount(
        this,
        partyItem,
        &followerSpoilerProtectionLimitCount[1],
        followerSpoilerProtectionLimitCount,
        &randLimitCountDic,
        v7);
    }
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( battleSetupInfo )
    {
      battleSetupInfo->fields.followrRandomLimitCount = followerSpoilerProtectionLimitCount[1];
      v13 = this->fields.battleSetupInfo;
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v6 = JsonManager__toJson((Il2CppObject *)v5, 0, 0, 0LL);
      if ( v13 )
      {
        v13->fields.choiceRandomLimitCounts = v6;
        sub_B2C2F8(&v13->fields.choiceRandomLimitCounts, v6);
        v14 = this->fields.battleSetupInfo;
        if ( v14 )
        {
          v14->fields.followerSpoilerProtectionLimitCount = followerSpoilerProtectionLimitCount[0];
          return;
        }
      }
    }
LABEL_21:
    sub_B2C434(v6, partyItem);
  }
}


void __fastcall PartyOrganizationRootComponent__SetUseAutoOrganizationServant(
        PartyOrganizationRootComponent_o *this,
        AutoOrganizationManager_ServantData_array *dataList,
        int64_t userSvtId,
        bool flag,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v6; // w9
  AutoOrganizationManager_ServantData_o *v7; // x10
  __int64 v8; // x0

  if ( !dataList )
LABEL_12:
    sub_B2C434(this, dataList);
  max_length = dataList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v8 = sub_B2C460(this);
        sub_B2C400(v8, 0LL);
      }
      v7 = dataList->m_Items[v6];
      if ( !v7 )
        goto LABEL_12;
      if ( v7->fields.userSvtId == userSvtId )
        break;
      if ( (int)++v6 >= max_length )
        return;
    }
    v7->fields.used = flag;
  }
}


void __fastcall PartyOrganizationRootComponent__SetWaveBattleDeckItemList(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x20
  struct PartyListViewItem_array *waveBattleDeckItemList; // x22
  struct PartyListViewItem_array **p_waveBattleDeckItemList; // x19
  __int64 selectPartyNum; // x23
  PartyOrganizationRootComponent_o *v6; // x21
  Il2CppClass **v7; // x0
  struct PartyListViewItem_array *waveBattleTempDeckItemList; // x21
  struct PartyListViewItem_array *v9; // x8
  __int64 v10; // x20
  PartyOrganizationRootComponent_o *v11; // x19
  Il2CppClass **v12; // x0
  struct PartyListViewItem_array *baseDeckItemList; // x8
  __int64 v14; // x0
  struct PartyListViewItem_array *v15; // x8
  __int64 v16; // x0
  struct PartyListViewItem_array *v17; // x8
  il2cpp_array_size_t v18; // w23
  __int64 v19; // x24
  il2cpp_array_size_t v20; // w9
  struct PartyListViewItem_array *v21; // x25
  PartyOrganizationRootComponent_o *v22; // x22
  _DWORD *v23; // x0
  Il2CppClass **v24; // x0
  struct PartyListViewItem_array *v25; // x8
  struct PartyListViewItem_array *v26; // x26
  PartyOrganizationRootComponent_o *v27; // x22
  Il2CppClass **v28; // x0
  _QWORD *p_waveBattleTempDeckItemList; // x20
  __int64 v30; // x0
  struct PartyListViewItem_array *v31; // x8
  unsigned int v32; // w22
  __int64 v33; // x23
  il2cpp_array_size_t max_length; // w9
  _DWORD *v35; // x24
  PartyOrganizationRootComponent_o *v36; // x21
  __int64 v37; // x0
  __int64 v38; // x0

  v2 = this;
  if ( (byte_418505B & 1) == 0 )
  {
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&PartyListViewItem___TypeInfo, method);
    byte_418505B = 1;
  }
  waveBattleDeckItemList = v2->fields.waveBattleDeckItemList;
  p_waveBattleDeckItemList = &v2->fields.waveBattleDeckItemList;
  if ( waveBattleDeckItemList )
  {
    this = (PartyOrganizationRootComponent_o *)v2->fields.partyItem;
    if ( !this )
      goto LABEL_55;
    selectPartyNum = v2->fields.selectPartyNum;
    this = (PartyOrganizationRootComponent_o *)PartyListViewItem__Clone((PartyListViewItem_o *)this, 0LL);
    v6 = this;
    if ( this )
    {
      this = (PartyOrganizationRootComponent_o *)sub_B2C41C(this, waveBattleDeckItemList->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_58;
    }
    if ( (unsigned int)selectPartyNum >= waveBattleDeckItemList->max_length )
      goto LABEL_57;
    v7 = &waveBattleDeckItemList->obj.klass + selectPartyNum;
    v7[4] = (Il2CppClass *)v6;
    sub_B2C2F8(v7 + 4, v6);
    waveBattleTempDeckItemList = v2->fields.waveBattleTempDeckItemList;
    if ( waveBattleTempDeckItemList )
    {
      v9 = v2->fields.waveBattleDeckItemList;
      if ( v9 )
      {
        v10 = v2->fields.selectPartyNum;
        if ( (unsigned int)v10 >= v9->max_length )
          goto LABEL_57;
        this = (PartyOrganizationRootComponent_o *)v9->m_Items[v10];
        if ( this )
        {
          this = (PartyOrganizationRootComponent_o *)PartyListViewItem__Clone((PartyListViewItem_o *)this, 0LL);
          v11 = this;
          if ( !this
            || (this = (PartyOrganizationRootComponent_o *)sub_B2C41C(
                                                             this,
                                                             waveBattleTempDeckItemList->obj.klass->_1.element_class)) != 0LL )
          {
            if ( (unsigned int)v10 < waveBattleTempDeckItemList->max_length )
            {
              v12 = &waveBattleTempDeckItemList->obj.klass + v10;
              v12[4] = (Il2CppClass *)v11;
              sub_B2C2F8(v12 + 4, v11);
              return;
            }
LABEL_57:
            v37 = sub_B2C460(this);
            sub_B2C400(v37, 0LL);
          }
LABEL_58:
          v38 = sub_B2C454();
          sub_B2C400(v38, 0LL);
        }
      }
LABEL_55:
      sub_B2C434(this, method);
    }
    if ( !*p_waveBattleDeckItemList )
      goto LABEL_55;
    p_waveBattleTempDeckItemList = &v2->fields.waveBattleTempDeckItemList;
    v30 = sub_B2C374(PartyListViewItem___TypeInfo, (*p_waveBattleDeckItemList)->max_length);
    *p_waveBattleTempDeckItemList = v30;
    sub_B2C2F8(p_waveBattleTempDeckItemList, v30);
    v31 = *p_waveBattleDeckItemList;
    if ( !*p_waveBattleDeckItemList )
      goto LABEL_55;
    v32 = 0;
    v33 = 8LL;
    while ( 1 )
    {
      max_length = v31->max_length;
      if ( (int)v32 >= (int)max_length )
        break;
      if ( v32 >= max_length )
        goto LABEL_57;
      this = *(PartyOrganizationRootComponent_o **)((char *)&v31->obj.klass + v33 * 4);
      if ( this )
      {
        v35 = (_DWORD *)*p_waveBattleTempDeckItemList;
        this = (PartyOrganizationRootComponent_o *)PartyListViewItem__Clone((PartyListViewItem_o *)this, 0LL);
        if ( v35 )
        {
          v36 = this;
          if ( this )
          {
            this = (PartyOrganizationRootComponent_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
            if ( !this )
              goto LABEL_58;
          }
          if ( v32 >= v35[6] )
            goto LABEL_57;
          *(_QWORD *)&v35[v33] = v36;
          sub_B2C2F8(&v35[v33], v36);
          v31 = *p_waveBattleDeckItemList;
          ++v32;
          v33 += 2LL;
          if ( *p_waveBattleDeckItemList )
            continue;
        }
      }
      goto LABEL_55;
    }
  }
  else
  {
    baseDeckItemList = v2->fields.baseDeckItemList;
    if ( !baseDeckItemList )
      goto LABEL_55;
    v14 = sub_B2C374(PartyListViewItem___TypeInfo, baseDeckItemList->max_length);
    v2->fields.waveBattleDeckItemList = (struct PartyListViewItem_array *)v14;
    sub_B2C2F8(&v2->fields.waveBattleDeckItemList, v14);
    v15 = v2->fields.baseDeckItemList;
    if ( !v15 )
      goto LABEL_55;
    v16 = sub_B2C374(PartyListViewItem___TypeInfo, v15->max_length);
    v2->fields.waveBattleTempDeckItemList = (struct PartyListViewItem_array *)v16;
    sub_B2C2F8(&v2->fields.waveBattleTempDeckItemList, v16);
    v17 = v2->fields.baseDeckItemList;
    if ( !v17 )
      goto LABEL_55;
    v18 = 0;
    v19 = 32LL;
    while ( 1 )
    {
      v20 = v17->max_length;
      if ( (int)v18 >= (int)v20 )
        break;
      v21 = v2->fields.waveBattleDeckItemList;
      if ( v18 == v2->fields.selectPartyNum )
      {
        this = (PartyOrganizationRootComponent_o *)v2->fields.partyItem;
        if ( !this )
          goto LABEL_55;
        this = (PartyOrganizationRootComponent_o *)PartyListViewItem__Clone((PartyListViewItem_o *)this, 0LL);
        if ( !v21 )
          goto LABEL_55;
        v22 = this;
        if ( this )
        {
          this = (PartyOrganizationRootComponent_o *)sub_B2C41C(this, v21->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_58;
        }
        if ( v18 >= v21->max_length )
          goto LABEL_57;
        v23 = (_DWORD *)((char *)v21 + v19);
        *(Il2CppClass **)((char *)&v21->obj.klass + v19) = (Il2CppClass *)v22;
      }
      else
      {
        if ( v18 >= v20 )
          goto LABEL_57;
        this = (PartyOrganizationRootComponent_o *)v17->m_Items[v18];
        if ( !this )
          goto LABEL_55;
        this = (PartyOrganizationRootComponent_o *)PartyListViewItem__Clone((PartyListViewItem_o *)this, 0LL);
        if ( !v21 )
          goto LABEL_55;
        v22 = this;
        if ( this )
        {
          this = (PartyOrganizationRootComponent_o *)sub_B2C41C(this, v21->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_58;
        }
        if ( v18 >= v21->max_length )
          goto LABEL_57;
        v24 = &v21->obj.klass + (int)v18;
        v24[4] = (Il2CppClass *)v22;
        v23 = v24 + 4;
      }
      sub_B2C2F8(v23, v22);
      v25 = *p_waveBattleDeckItemList;
      if ( !*p_waveBattleDeckItemList )
        goto LABEL_55;
      if ( v18 >= v25->max_length )
        goto LABEL_57;
      this = (PartyOrganizationRootComponent_o *)v25->m_Items[v18];
      if ( this )
      {
        v26 = v2->fields.waveBattleTempDeckItemList;
        this = (PartyOrganizationRootComponent_o *)PartyListViewItem__Clone((PartyListViewItem_o *)this, 0LL);
        if ( v26 )
        {
          v27 = this;
          if ( this )
          {
            this = (PartyOrganizationRootComponent_o *)sub_B2C41C(this, v26->obj.klass->_1.element_class);
            if ( !this )
              goto LABEL_58;
          }
          if ( v18 >= v26->max_length )
            goto LABEL_57;
          v28 = &v26->obj.klass + (int)v18;
          v28[4] = (Il2CppClass *)v27;
          sub_B2C2F8(v28 + 4, v27);
          v17 = v2->fields.baseDeckItemList;
          ++v18;
          v19 += 8LL;
          if ( v17 )
            continue;
        }
      }
      goto LABEL_55;
    }
  }
}


System_Collections_IEnumerator_o *__fastcall PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4185012 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_TypeInfo, method);
    byte_4185012 = 1;
  }
  v3 = (PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *)sub_B2C42C(PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_TypeInfo);
  PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall PartyOrganizationRootComponent__ShowEventPoint(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t state; // w8
  PartyOrganizationEventPointMenu_o *operationEventPointMenu; // x20
  EventUpValSetupInfo_o *setupInfo; // x21
  PartyListViewItem_o *partyItem; // x22
  PartyOrganizationEventPointMenu_CallbackFunc_o *v9; // x23
  PlayMakerFSM_o *myFSM; // x0
  __int64 v11; // x1

  if ( (byte_4185004 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationEventPointMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndShowEventPoint__, v3);
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v4);
    byte_4185004 = 1;
  }
  if ( this->fields.basePartyItem )
  {
    state = this->fields.state;
    this->fields.state = 22;
    operationEventPointMenu = this->fields.operationEventPointMenu;
    this->fields.showBackupState = state;
    setupInfo = this->fields.setupInfo;
    partyItem = this->fields.partyItem;
    v9 = (PartyOrganizationEventPointMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationEventPointMenu_CallbackFunc_TypeInfo);
    PartyOrganizationEventPointMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent_EndShowEventPoint__,
      0LL);
    if ( operationEventPointMenu )
    {
      PartyOrganizationEventPointMenu__Open(operationEventPointMenu, setupInfo, partyItem, v9, 0LL);
      return 1;
    }
LABEL_8:
    sub_B2C434(myFSM, v11);
  }
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, method);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
  return 0;
}


bool __fastcall PartyOrganizationRootComponent__ShowInfomation(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t state; // w8
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21
  PlayMakerFSM_o *myFSM; // x0
  __int64 v10; // x1

  if ( (byte_4185001 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndShowInfomation__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v5);
    byte_4185001 = 1;
  }
  if ( this->fields.basePartyItem )
  {
    state = this->fields.state;
    this->fields.state = 21;
    this->fields.showBackupState = state;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndShowInfomation__, 0LL);
    if ( Instance )
    {
      CommonUI__OpenClassCompatibilityMenu(Instance, v8, 0LL);
      return 1;
    }
LABEL_8:
    sub_B2C434(myFSM, v10);
  }
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, method);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
  return 0;
}


bool __fastcall PartyOrganizationRootComponent__ShowQuestInformation(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t state; // w8
  BattleSetupInfo_o *battleSetupInfo; // x0
  PartyOrganizationQuestInfoMenu_o *questInfoMenu; // x20
  int32_t v8; // w21
  PartyOrganizationQuestInfoMenu_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x3

  if ( (byte_4185007 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndShowShowQuestInformation__, v3);
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v4);
    byte_4185007 = 1;
  }
  if ( this->fields.basePartyItem )
  {
    state = this->fields.state;
    battleSetupInfo = this->fields.battleSetupInfo;
    this->fields.state = 30;
    this->fields.showBackupState = state;
    if ( battleSetupInfo )
    {
      questInfoMenu = this->fields.questInfoMenu;
      v8 = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
      v9 = (PartyOrganizationQuestInfoMenu_CallbackFunc_o *)sub_B2C42C(PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo);
      PartyOrganizationQuestInfoMenu_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndShowShowQuestInformation__,
        0LL);
      if ( questInfoMenu )
      {
        PartyOrganizationQuestInfoMenu__Open(questInfoMenu, v8, v9, v10);
        return 1;
      }
    }
LABEL_9:
    sub_B2C434(battleSetupInfo, method);
  }
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, method);
  battleSetupInfo = (BattleSetupInfo_o *)this->fields.myFSM;
  if ( !battleSetupInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
  return 0;
}


void __fastcall PartyOrganizationRootComponent__StartBattledScript(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleSetupInfo_o *battleSetupInfo; // x20
  BattleScriptRootComponent_TalkScriptInfo_o *v5; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_418501D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B2C35C(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v3);
    byte_418501D = 1;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  v5 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B2C42C(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_20076220(v5, battleSetupInfo, 3, 0, 0, 0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  AvalonSceneManager__transitionScene(Instance, 38, 1, (Il2CppObject *)v5, 0LL);
}


bool __fastcall PartyOrganizationRootComponent__StartScriptAction(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationUtility_o *battleSetupInfo; // x0
  __int64 v8; // x1
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2
  struct BattleSetupInfo_o *v11; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20

  if ( (byte_418501B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__StartScriptAction_b__186_0__, v3);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_418501B = 1;
  }
  PartyOrganizationRootComponent__SetRandomLimitCountBattleSutupInfo(this, method);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  battleSetupInfo = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !battleSetupInfo )
    goto LABEL_16;
  PartyOrganizationUtility__ClearFollowerInfo(battleSetupInfo, 0LL);
  battleSetupInfo = (PartyOrganizationUtility_o *)this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_16;
  if ( BYTE1(battleSetupInfo->fields._PartyItem_k__BackingField) )
  {
    BattleScriptRootComponent__GoForBattle((BattleSetupInfo_o *)battleSetupInfo, 0LL);
  }
  else
  {
    v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PartyOrganizationRootComponent__StartScriptAction_b__186_0__,
      0LL);
    PartyOrganizationRootComponent__StartWindowMessage(this, v9, v10);
  }
  v11 = this->fields.battleSetupInfo;
  if ( !v11 )
LABEL_16:
    sub_B2C434(battleSetupInfo, v8);
  questId = v11->fields.questId;
  questPhase = v11->fields.questPhase;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__SendStartQuestToAdManager(questId, questPhase, 0LL);
  return 1;
}


void __fastcall PartyOrganizationRootComponent__StartWindowMessage(
        PartyOrganizationRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v12; // x8
  DataManager_o *v13; // x22
  System_String_array *v14; // x0
  __int64 v15; // x1
  struct BattleSetupInfo_o *v16; // x20
  TerminalPramsManager_c *v17; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v19; // x1
  TerminalPramsManager_c *v20; // x0

  if ( (byte_418501C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMessageMaster___, end_act);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    byte_418501C = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C79 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, end_act);
    byte_4183C79 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_IsDispOnly_k__BackingField )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    TerminalPramsManager__InitMessageWindowData(0LL);
    goto LABEL_22;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMessageMaster___);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_43;
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)QuestMessageMaster__GetValidMessage(
                                (QuestMessageMaster_o *)Instance,
                                battleSetupInfo->fields.questId,
                                battleSetupInfo->fields.questPhase,
                                2,
                                0LL);
  v12 = this->fields.battleSetupInfo;
  if ( !v12 )
    goto LABEL_43;
  v13 = Instance;
  v14 = QuestAfterAction__GetBeforeAction(v12->fields.questId, v12->fields.questPhase, 0LL);
  if ( !v13 && !v14 )
  {
LABEL_22:
    ActionExtensions__Call(end_act, 0LL);
    return;
  }
  v16 = this->fields.battleSetupInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184733 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    byte_4184733 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v17->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = v16;
  sub_B2C2F8(&static_fields->_BattleSetupKeep_k__BackingField, v16);
  if ( !byte_4184732 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v19);
    byte_4184732 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v20->static_fields->_IsDispOnly_k__BackingField = 1;
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v19);
    v20 = TerminalPramsManager_TypeInfo;
    byte_4183C70 = 1;
  }
  if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v20);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v20->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_43:
    sub_B2C434(Instance, v10);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall PartyOrganizationRootComponent__WaveBattleAutoOrganizationExec(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 WaveBattleAutoOrganizationSetting; // x0
  __int64 v21; // x8
  ListViewSort_o *v22; // x23
  System_Array_o *v23; // x21
  int v24; // w24
  int v25; // w25
  System_Array_o *v26; // x22
  int32_t RarityBit; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x23
  struct PartyListViewItem_array *baseDeckItemList; // x19
  __int64 v30; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  bool v32; // w9
  int v33; // w21
  unsigned __int64 v34; // x25
  PartyListViewItem_o *v35; // x24
  BalanceConfig_c *v36; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x25
  __int64 v38; // x19
  unsigned __int64 v39; // x26
  int32_t *p_addCount; // x20
  PartyOrganizationListViewItem_o *Member; // x27
  AutoOrganizationManager_ServantData_o *v42; // x28
  __int64 v43; // x28
  __int64 v44; // x28
  unsigned __int64 i; // x24
  struct PartyListViewItem_array *v46; // x8
  int v47; // w9
  __int64 v48; // x21
  PartyListViewItem_o *v49; // x25
  int32_t v50; // w26
  const MethodInfo *v51; // x3
  __int64 v52; // x27
  int32_t v53; // w28
  EventMissionProgressRequest_Argument_ProgressData_o *v54; // x8
  __int64 v55; // x8
  unsigned __int64 v56; // x8
  int32_t *v57; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v58; // x20
  int32_t v59; // w28
  WarBoardAIRoute_RouteData_o *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x5
  PartyServantListViewItem_o *AutoOrganizationServant; // x0
  PartyServantListViewItem_o *v64; // x27
  const MethodInfo *v65; // x5
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  AutoOrganizationManager_ServantData_o *AutoOrganizationEquip; // x0
  AutoOrganizationManager_ServantData_o *v68; // x26
  int monitor; // w10
  int j; // w9
  __int64 v71; // x10
  _BOOL8 v72; // x0
  __int64 v73; // x1
  Il2CppObject *current; // x8
  int v75; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v76; // x8
  __int64 v77; // x8
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x0
  int v81; // [xsp+Ch] [xbp-D4h]
  System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList; // [xsp+10h] [xbp-D0h]
  struct PartyListViewItem_array *v83; // [xsp+18h] [xbp-C8h]
  int32_t autoOrganizationMode; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // [xsp+28h] [xbp-B8h]
  unsigned __int64 v86; // [xsp+30h] [xbp-B0h]
  int v87; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v88; // [xsp+38h] [xbp-A8h]
  PartyOrganizationRootComponent_o *v89; // [xsp+40h] [xbp-A0h]
  int v90; // [xsp+48h] [xbp-98h]
  int v91; // [xsp+4Ch] [xbp-94h]
  _BYTE v92[28]; // [xsp+50h] [xbp-90h] BYREF
  int v93; // [xsp+6Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v94; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_418505A & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v3);
    sub_B2C35C(&bool___TypeInfo, v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__AutoOrganizationManager_ServantData____ContainsKey__,
      v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__AutoOrganizationManager_ServantData_____ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__AutoOrganizationManager_ServantData____get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__AutoOrganizationManager_ServantData____set_Item__, v8);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__AutoOrganizationManager_ServantData____TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData____Dispose__, v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData____MoveNext__,
      v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData____get_Current__,
      v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData____Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData____GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData_____ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData____get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_AutoOrganizationManager_ServantData____TypeInfo, v17);
    sub_B2C35C(&AutoOrganizationManager_ServantData___TypeInfo, v18);
    sub_B2C35C(&AutoOrganizationManager_ServantData_TypeInfo, v19);
    byte_418505A = 1;
  }
  memset(&v94, 0, sizeof(v94));
  v93 = 0;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_4185068 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, method);
    byte_4185068 = 1;
  }
  WaveBattleAutoOrganizationSetting = (__int64)AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    WaveBattleAutoOrganizationSetting = (__int64)AutoOrganizationManager_TypeInfo;
  }
  v21 = *(_QWORD *)(WaveBattleAutoOrganizationSetting + 184);
  v22 = *(ListViewSort_o **)(v21 + 16);
  if ( !v22 )
    goto LABEL_132;
  ListViewSort__Load(*(ListViewSort_o **)(v21 + 16), 0LL);
  WaveBattleAutoOrganizationSetting = (__int64)AutoOrganizationManager__GetWaveBattleAutoOrganizationSetting(v22, 0LL);
  if ( !WaveBattleAutoOrganizationSetting )
    goto LABEL_132;
  v23 = (System_Array_o *)WaveBattleAutoOrganizationSetting;
  if ( *(_DWORD *)(WaveBattleAutoOrganizationSetting + 24) < 2u )
    goto LABEL_133;
  v24 = *(unsigned __int8 *)(WaveBattleAutoOrganizationSetting + 32);
  v25 = *(unsigned __int8 *)(WaveBattleAutoOrganizationSetting + 33);
  v26 = (System_Array_o *)sub_B2C374(bool___TypeInfo, 5LL);
  System_Array__Copy_42671224(v23, 2, v26, 0, 5, 0LL);
  RarityBit = AutoOrganizationManager__GetRarityBit((System_Boolean_array *)v26, 0LL);
  autoOrganizationMode = v22->fields.autoOrganizationMode;
  dataList = (System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *)AutoOrganizationManager__AutoOrganizationServant(
                                                                                                  RarityBit,
                                                                                                  this->fields.questRestrictionInfo,
                                                                                                  0LL,
                                                                                                  0LL);
  v88 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__AutoOrganizationManager_ServantData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v88,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__AutoOrganizationManager_ServantData_____ctor__);
  v85 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AutoOrganizationManager_ServantData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v85,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData_____ctor__);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AutoOrganizationManager_ServantData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData_____ctor__);
  baseDeckItemList = this->fields.baseDeckItemList;
  if ( !baseDeckItemList )
LABEL_132:
    sub_B2C434(WaveBattleAutoOrganizationSetting, method);
  v30 = *(_QWORD *)&baseDeckItemList->max_length;
  v31 = v85;
  v32 = v25 != 0;
  v90 = v24;
  v91 = v25;
  v89 = this;
  if ( (int)v30 >= 1 )
  {
    v33 = v24 != 0 && v32;
    v81 = v32 && v24 == 0;
    v34 = 0LL;
    v83 = this->fields.baseDeckItemList;
    while ( v34 < (unsigned int)v30 )
    {
      v35 = baseDeckItemList->m_Items[v34];
      if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      }
      WaveBattleAutoOrganizationSetting = (__int64)AutoOrganizationManager__AutoOrganizationEquip(0, 0LL, 0LL);
      if ( !v31 )
        goto LABEL_132;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v31,
        (EventMissionProgressRequest_Argument_ProgressData_o *)WaveBattleAutoOrganizationSetting,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData____Add__);
      v36 = BalanceConfig_TypeInfo;
      v86 = v34;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v36 = BalanceConfig_TypeInfo;
      }
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C374(
                                                                     AutoOrganizationManager_ServantData___TypeInfo,
                                                                     (unsigned int)v36->static_fields->DeckMainMemberMax);
      v38 = 0LL;
      v39 = 0LL;
      p_addCount = &v37->fields.addCount;
      while ( 1 )
      {
        WaveBattleAutoOrganizationSetting = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          WaveBattleAutoOrganizationSetting = (__int64)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v39 >= *(int *)(*(_QWORD *)(WaveBattleAutoOrganizationSetting + 184) + 160LL) )
          break;
        if ( v33 )
        {
          if ( !v35 )
            goto LABEL_132;
          PartyListViewItem__ClearMember(v35, v39, 0LL);
        }
        else if ( v90 )
        {
          if ( !v35 )
            goto LABEL_132;
          Member = PartyListViewItem__GetMember(v35, v39, 0LL);
          v42 = (AutoOrganizationManager_ServantData_o *)sub_B2C42C(AutoOrganizationManager_ServantData_TypeInfo);
          AutoOrganizationManager_ServantData___ctor(v42, 0LL);
          if ( !v37 )
            goto LABEL_132;
          if ( v42 )
          {
            WaveBattleAutoOrganizationSetting = sub_B2C41C(v42, v37->klass->_1.element_class);
            if ( !WaveBattleAutoOrganizationSetting )
            {
              v80 = sub_B2C454();
              sub_B2C400(v80, 0LL);
            }
          }
          if ( v39 >= (unsigned int)v37->fields.targetId )
            goto LABEL_133;
          *(_QWORD *)&p_addCount[2 * v39] = v42;
          sub_B2C2F8(&p_addCount[v38], v42);
          if ( v39 >= (unsigned int)v37->fields.targetId )
            goto LABEL_133;
          if ( !Member )
            goto LABEL_132;
          v43 = *(_QWORD *)&p_addCount[2 * v39];
          WaveBattleAutoOrganizationSetting = (__int64)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
          if ( !WaveBattleAutoOrganizationSetting )
            goto LABEL_132;
          if ( !*(_DWORD *)(WaveBattleAutoOrganizationSetting + 24) )
            goto LABEL_133;
          if ( !v43 )
            goto LABEL_132;
          *(_QWORD *)(v43 + 24) = *(_QWORD *)(WaveBattleAutoOrganizationSetting + 32);
          if ( v39 >= (unsigned int)v37->fields.targetId )
            goto LABEL_133;
          v44 = *(_QWORD *)&p_addCount[2 * v39];
          if ( (PartyOrganizationListViewItem__get_EquipCost(Member, 0LL) & 0x80000000) != 0 )
          {
            WaveBattleAutoOrganizationSetting = 0LL;
            if ( !v44 )
              goto LABEL_132;
          }
          else
          {
            WaveBattleAutoOrganizationSetting = PartyOrganizationListViewItem__get_EquipCost(Member, 0LL);
            if ( !v44 )
              goto LABEL_132;
          }
          *(_DWORD *)(v44 + 48) = WaveBattleAutoOrganizationSetting;
          PartyListViewItem__ClearMember(v35, v39, 0LL);
          this = v89;
        }
        ++v39;
        v38 += 2LL;
      }
      if ( !v28 )
        goto LABEL_132;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        v37,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData____Add__);
      v31 = v85;
      baseDeckItemList = v83;
      if ( v81 )
      {
        if ( !v35 )
          goto LABEL_132;
        PartyListViewItem__ClearEquip(v35, 0LL);
      }
      LODWORD(v30) = v83->max_length;
      v34 = v86 + 1;
      if ( (__int64)(v86 + 1) >= (int)v30 )
        goto LABEL_56;
    }
LABEL_133:
    v79 = sub_B2C460(WaveBattleAutoOrganizationSetting);
    sub_B2C400(v79, 0LL);
  }
LABEL_56:
  v87 = 0;
  for ( i = 0LL; ; ++i )
  {
    WaveBattleAutoOrganizationSetting = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      WaveBattleAutoOrganizationSetting = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)(WaveBattleAutoOrganizationSetting + 184) + 160LL) )
      break;
    v46 = this->fields.baseDeckItemList;
    if ( !v46 )
      goto LABEL_132;
    v47 = v46->max_length - 1;
    if ( v47 >= 0 )
    {
      while ( 1 )
      {
        if ( v47 >= v46->max_length )
          goto LABEL_133;
        v48 = v47;
        v49 = v46->m_Items[v47];
        if ( !v49 )
          goto LABEL_132;
        v50 = v49->fields.maxCost - v49->fields.cost;
        if ( v90 )
        {
          WaveBattleAutoOrganizationSetting = (__int64)PartyListViewItem__GetMember(v49, i, 0LL);
          v52 = WaveBattleAutoOrganizationSetting;
          v53 = i;
          if ( !v91 )
          {
            while ( 1 )
            {
              WaveBattleAutoOrganizationSetting = (__int64)BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                WaveBattleAutoOrganizationSetting = (__int64)BalanceConfig_TypeInfo;
              }
              if ( v53 >= *(_DWORD *)(*(_QWORD *)(WaveBattleAutoOrganizationSetting + 184) + 160LL) )
                break;
              if ( !v28 )
                goto LABEL_132;
              if ( v28->fields._size <= (unsigned int)v48 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v54 = v28->fields._items->m_Items[v48];
              if ( !v54 )
                goto LABEL_132;
              if ( (unsigned int)v53 >= v54->fields.targetId )
                goto LABEL_133;
              v55 = *((_QWORD *)&v54->fields.addCount + v53);
              if ( !v55 )
                goto LABEL_132;
              ++v53;
              v50 -= *(_DWORD *)(v55 + 48);
            }
          }
          WaveBattleAutoOrganizationSetting = (__int64)PartyOrganizationRootComponent__GetEnemyClassIds(
                                                         (PartyOrganizationRootComponent_o *)WaveBattleAutoOrganizationSetting,
                                                         v49->fields.waveBattleEnemyClassIds,
                                                         autoOrganizationMode == 1,
                                                         v51);
          if ( !WaveBattleAutoOrganizationSetting )
            goto LABEL_132;
          v56 = *(unsigned int *)(WaveBattleAutoOrganizationSetting + 24);
          if ( (__int64)i >= (int)v56 )
          {
            if ( !(_DWORD)v56 )
              goto LABEL_133;
            v57 = (int32_t *)(WaveBattleAutoOrganizationSetting + 32);
          }
          else
          {
            if ( i >= v56 )
              goto LABEL_133;
            v57 = (int32_t *)(WaveBattleAutoOrganizationSetting + 4 * i + 32);
          }
          v58 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v88;
          if ( !v88 )
            goto LABEL_132;
          v59 = *v57;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  v88,
                  *v57,
                  (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__AutoOrganizationManager_ServantData____ContainsKey__) )
          {
            if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            }
            v60 = (WarBoardAIRoute_RouteData_o *)AutoOrganizationManager__SortClassRelation(dataList, v59, 0LL);
            v58 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v88;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              v88,
              v59,
              v60,
              (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__AutoOrganizationManager_ServantData____set_Item__);
          }
          WaveBattleAutoOrganizationSetting = (__int64)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                         v58,
                                                         v59,
                                                         (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__AutoOrganizationManager_ServantData____get_Item__);
          if ( !v52 )
            goto LABEL_132;
          this = v89;
          AutoOrganizationServant = PartyOrganizationRootComponent__GetAutoOrganizationServant(
                                      v89,
                                      (AutoOrganizationManager_ServantData_array *)WaveBattleAutoOrganizationSetting,
                                      v61,
                                      *(_DWORD *)(v52 + 332) - 1,
                                      v50,
                                      v62);
          v31 = v85;
          if ( AutoOrganizationServant )
          {
            v64 = AutoOrganizationServant;
            PartyListViewItem__SetMember(v49, i, AutoOrganizationServant, 0LL);
            WaveBattleAutoOrganizationSetting = PartyServantListViewItem__get_Cost(v64, 0LL);
            v50 -= WaveBattleAutoOrganizationSetting;
          }
          else
          {
            PartyListViewItem__ClearMember(v49, i, 0LL);
          }
        }
        if ( !v91 )
          goto LABEL_114;
        WaveBattleAutoOrganizationSetting = (__int64)PartyListViewItem__GetMember(v49, i, 0LL);
        if ( !v31 )
          goto LABEL_132;
        if ( v31->fields._size <= (unsigned int)v48 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_132;
        AutoOrganizationEquip = PartyOrganizationRootComponent__GetAutoOrganizationEquip(
                                  (PartyOrganizationRootComponent_o *)WaveBattleAutoOrganizationSetting,
                                  (PartyOrganizationListViewItem_o *)WaveBattleAutoOrganizationSetting,
                                  (AutoOrganizationManager_ServantData_array *)v31->fields._items->m_Items[v48],
                                  v50,
                                  questRestrictionInfo->fields.eventId,
                                  v65);
        if ( AutoOrganizationEquip )
        {
          v68 = AutoOrganizationEquip;
          PartyListViewItem__SetEquip(v49, i, AutoOrganizationEquip->fields.userSvtId, 0LL);
          v68->fields.used = 1;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v92,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v31,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData____GetEnumerator__);
          v94 = *(System_Collections_Generic_List_Enumerator_T__o *)v92;
          while ( 1 )
          {
            v72 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v94,
                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData____MoveNext__);
            if ( !v72 )
              break;
            current = v94.fields.current;
            if ( !v94.fields.current )
              sub_B2C434(v72, v73);
            monitor = (int)v94.fields.current[1].monitor;
            if ( monitor >= 1 )
            {
              for ( j = 0; j < monitor; ++j )
              {
                if ( j >= (unsigned int)monitor )
                {
                  v78 = sub_B2C460(v72);
                  sub_B2C400(v78, 0LL);
                }
                v71 = *((_QWORD *)&current[2].klass + j);
                if ( !v71 )
                  sub_B2C434(v72, v73);
                if ( v68->fields.svtId == *(_DWORD *)(v71 + 16) )
                  *(_BYTE *)(v71 + 52) = 1;
                monitor = (int)current[1].monitor;
              }
            }
          }
          *(_DWORD *)&v92[4 * v87 + 24] = 771;
          v75 = ++v93;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v94,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData____Dispose__);
          if ( !v75 )
          {
            v87 = 0;
LABEL_114:
            if ( !v28 )
              goto LABEL_132;
            if ( v28->fields._size <= (unsigned int)v48 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v76 = v28->fields._items->m_Items[v48];
            if ( !v76 )
              goto LABEL_132;
            if ( i >= (unsigned int)v76->fields.targetId )
              goto LABEL_133;
            v77 = *((_QWORD *)&v76->fields.addCount + i);
            if ( !v77 )
              goto LABEL_132;
            PartyListViewItem__SetEquip(v49, i, *(_QWORD *)(v77 + 24), 0LL);
            goto LABEL_121;
          }
          v87 = v75;
          if ( *(_DWORD *)&v92[4 * v75 + 20] != 771 )
            goto LABEL_114;
          v93 = v75 - 1;
          v87 = v75 - 1;
        }
        else
        {
          WaveBattleAutoOrganizationSetting = (__int64)PartyListViewItem__GetMember(v49, i, 0LL);
          if ( !WaveBattleAutoOrganizationSetting )
            goto LABEL_132;
          WaveBattleAutoOrganizationSetting = PartyOrganizationListViewItem__ClearEquip(
                                                (PartyOrganizationListViewItem_o *)WaveBattleAutoOrganizationSetting,
                                                0LL);
        }
LABEL_121:
        v47 = v48 - 1;
        if ( (int)v48 - 1 < 0 )
          break;
        v46 = this->fields.baseDeckItemList;
        if ( !v46 )
          goto LABEL_132;
      }
    }
  }
}


void __fastcall PartyOrganizationRootComponent___EndConfirmCopy_b__150_0(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4185061 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, method);
    byte_4185061 = 1;
  }
  this->fields.state = this->fields.showBackupState;
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, method);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B2C434(0LL, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8717/*"MENU_DECIDE"*/, 0LL);
}


void __fastcall PartyOrganizationRootComponent___EndInputBoostItemMenu_b__153_0(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4185062 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, method);
    byte_4185062 = 1;
  }
  this->fields.state = this->fields.showBackupState;
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, method);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B2C434(0LL, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8716/*"MENU_CANCEL"*/, 0LL);
}


void __fastcall PartyOrganizationRootComponent___EndSelectedOrganizationChange_b__242_0(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_B2C434(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
}


void __fastcall PartyOrganizationRootComponent___EndSelectedOrganizationChange_b__242_1(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_B2C434(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
}


void __fastcall PartyOrganizationRootComponent___ExecutionServantSet_b__245_0(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_B2C434(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
}


void __fastcall PartyOrganizationRootComponent___OnClickBack_b__200_0(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_B2C434(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
}


void __fastcall PartyOrganizationRootComponent___OnClickBack_b__200_1(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_B2C434(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent___OnClickBack_b__200_2(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *waveBattlePartyOrganizationMenu; // x20
  const MethodInfo *v12; // x1

  if ( (byte_4185063 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v7);
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, v8);
    byte_4185063 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (CommonUI_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      LODWORD(Instance->fields.leftMaskPanel) = 0;
      Instance = (CommonUI_o *)this->fields.myFSM;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3043/*"CLICK_BACK"*/, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B2C434(Instance, v10);
  }
  waveBattlePartyOrganizationMenu = (UnityEngine_Object_o *)this->fields.waveBattlePartyOrganizationMenu;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(waveBattlePartyOrganizationMenu, 0LL, 0LL) )
    PartyOrganizationRootComponent__RecoverInputShowMenu(this, v12);
}


void __fastcall PartyOrganizationRootComponent___OnSelectPartyList_b__203_0(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21

  if ( (byte_4185064 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__OnSelectPartyList_b__203_1__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4185064 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  v8 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent__OnSelectPartyList_b__203_1__,
    0LL);
  if ( !v8 )
LABEL_9:
    sub_B2C434(Instance, v7);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall PartyOrganizationRootComponent___OnSelectPartyList_b__203_1(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0
  const MethodInfo *v4; // x1

  v3 = PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, v4);
}


void __fastcall PartyOrganizationRootComponent___OnSelectWavePartyList_b__105_0(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WaveBattlePartyOrganizationMenu_o *waveBattlePartyOrganizationMenu; // x0
  PartyListMenu_o *partyListMenu; // x24
  int32_t menuKind; // w25
  PartyListViewItem_array *baseDeckItemList; // x20
  int32_t selectPartyNum; // w21
  EventUpValSetupInfo_o *setupInfo; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  PartyListMenu_CallbackFunc_o *v13; // x26
  System_Action_o *openCallback; // x27

  if ( (byte_418505D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&PartyListMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndOpenPartyListMenu__, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_OnSelectPartyList__, v5);
    byte_418505D = 1;
  }
  waveBattlePartyOrganizationMenu = this->fields.waveBattlePartyOrganizationMenu;
  if ( !waveBattlePartyOrganizationMenu )
    goto LABEL_6;
  WaveBattlePartyOrganizationMenu__Hide(waveBattlePartyOrganizationMenu, 0LL);
  partyListMenu = this->fields.partyListMenu;
  menuKind = this->fields.menuKind;
  baseDeckItemList = this->fields.baseDeckItemList;
  selectPartyNum = this->fields.selectPartyNum;
  setupInfo = this->fields.setupInfo;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v13 = (PartyListMenu_CallbackFunc_o *)sub_B2C42C(PartyListMenu_CallbackFunc_TypeInfo);
  PartyListMenu_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_PartyOrganizationRootComponent_OnSelectPartyList__,
    0LL);
  openCallback = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    openCallback,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent_EndOpenPartyListMenu__,
    0LL);
  if ( !partyListMenu )
LABEL_6:
    sub_B2C434(waveBattlePartyOrganizationMenu, method);
  PartyListMenu__Open(
    partyListMenu,
    menuKind,
    0,
    baseDeckItemList,
    selectPartyNum,
    setupInfo,
    questRestrictionInfo,
    v13,
    openCallback,
    this->fields.friendPointCampaignVal,
    0,
    0,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent___OnSelectWavePartyList_b__105_1(
        PartyOrganizationRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *waveBattleAutoOrganizationConfirmDialog; // x0
  const MethodInfo *v9; // x1
  UserEventDeckEntity_o *UserEventDeck; // x20
  NetworkManager_ResultCallbackFunc_o *v11; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t eventId; // w22
  EventDeckSetupRequest_o *v14; // x21
  struct BattleSetupInfo_o *v15; // x8

  if ( (byte_418505E & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_EventDeckSetupRequest___, isDecide);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestWaveBattleAutoDeckEdit__, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_418505E = 1;
  }
  waveBattleAutoOrganizationConfirmDialog = this->fields.waveBattleAutoOrganizationConfirmDialog;
  if ( !waveBattleAutoOrganizationConfirmDialog )
    goto LABEL_14;
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Close(waveBattleAutoOrganizationConfirmDialog, 0LL);
  if ( isDecide )
  {
    PartyOrganizationRootComponent__WaveBattleAutoOrganizationExec(this, v9);
    waveBattleAutoOrganizationConfirmDialog = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)this->fields.waveBattlePartyOrganizationMenu;
    if ( waveBattleAutoOrganizationConfirmDialog )
    {
      UserEventDeck = WaveBattlePartyOrganizationMenu__GetUserEventDeck(
                        (WaveBattlePartyOrganizationMenu_o *)waveBattleAutoOrganizationConfirmDialog,
                        this->fields.baseDeckItemList,
                        0LL);
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_PartyOrganizationRootComponent_EndRequestWaveBattleAutoDeckEdit__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      waveBattleAutoOrganizationConfirmDialog = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(v11, (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventDeckSetupRequest___);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( battleSetupInfo )
      {
        eventId = battleSetupInfo->fields.eventId;
        v14 = (EventDeckSetupRequest_o *)waveBattleAutoOrganizationConfirmDialog;
        waveBattleAutoOrganizationConfirmDialog = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v15 = this->fields.battleSetupInfo;
        if ( v15 )
        {
          if ( v14 )
          {
            EventDeckSetupRequest__beginRequest(
              v14,
              UserEventDeck,
              eventId,
              (int32_t)waveBattleAutoOrganizationConfirmDialog,
              v15->fields.questPhase,
              0LL);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_B2C434(waveBattleAutoOrganizationConfirmDialog, isDecide);
  }
}


void __fastcall PartyOrganizationRootComponent___OnSelectWavePartyList_b__105_2(
        PartyOrganizationRootComponent_o *this,
        bool res,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *waveBattleDropAutoSellDialog; // x0

  waveBattleDropAutoSellDialog = this->fields.waveBattleDropAutoSellDialog;
  if ( !waveBattleDropAutoSellDialog )
    sub_B2C434(0LL, res);
  DropAutoSellDlgComponent__Close(waveBattleDropAutoSellDialog, 0LL);
}


void __fastcall PartyOrganizationRootComponent___OnSelectWavePartyList_b__105_3(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21

  if ( (byte_418505F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__OnSelectWavePartyList_b__105_4__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_418505F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  v8 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent__OnSelectWavePartyList_b__105_4__,
    0LL);
  if ( !v8 )
LABEL_9:
    sub_B2C434(Instance, v7);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall PartyOrganizationRootComponent___OnSelectWavePartyList_b__105_4(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0
  const MethodInfo *v4; // x1

  v3 = PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, v4);
}


void __fastcall PartyOrganizationRootComponent___QuestStartCheckOld_b__217_0(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21

  if ( (byte_4185065 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__QuestStartCheckOld_b__217_1__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4185065 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  v8 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_PartyOrganizationRootComponent__QuestStartCheckOld_b__217_1__,
    0LL);
  if ( !v8 )
LABEL_9:
    sub_B2C434(Instance, v7);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall PartyOrganizationRootComponent___QuestStartCheckOld_b__217_1(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0
  const MethodInfo *v4; // x1

  v3 = PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  PartyOrganizationRootComponent__RecoverInputShowMenu(this, v4);
}


void __fastcall PartyOrganizationRootComponent___SelectQuest_b__109_0(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21

  if ( (byte_4185060 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_PartyOrganizationRootComponent__SelectQuest_b__109_1__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4185060 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  v8 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationRootComponent__SelectQuest_b__109_1__, 0LL);
  if ( !v8 )
LABEL_9:
    sub_B2C434(Instance, v7);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall PartyOrganizationRootComponent___SelectQuest_b__109_1(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall PartyOrganizationRootComponent__beginFinish(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PartyListMenu_o *partyListMenu; // x0
  _BOOL4 isMasterEquipEdit; // w8
  UnityEngine_Object_o *waveBattlePartyOrganizationMenu; // x20
  PartyListViewItem_o **p_basePartyItem; // x20
  PartyListMenu_o *v12; // x21
  PartyListViewItem_o **p_partyItem; // x21
  PartyListMenu_o *v14; // x22
  bool v15; // w8
  UnityEngine_Object_o *v16; // x22
  const MethodInfo *v17; // x2

  if ( (byte_4184FD0 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v7);
    byte_4184FD0 = 1;
  }
  partyListMenu = this->fields.partyListMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyListMenu__Init(partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.partyOrganizationChangeMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationChangeMenu__Init((PartyOrganizationChangeMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.partyOrganizationMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationMenu__Init((PartyOrganizationMenu_o *)partyListMenu, method);
  partyListMenu = (PartyListMenu_o *)this->fields.partyServantSelectMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyServantSelectMenu__Init((PartyServantSelectMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.operationConfirmMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationConfirmMenu__Init((PartyOrganizationConfirmMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.operationConfirmDeckMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationConfirmDeckMenu__Init((PartyOrganizationConfirmDeckMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.operationConfirmDeck2Menu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationConfirmDeck2Menu__Init((PartyOrganizationConfirmDeck2Menu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.partyOrganizationConfirmSupportMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationConfirmSupportMenu__Init((PartyOrganizationConfirmSupportMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.partyOrganizationConfirmMyServantMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationConfirmMyServantMenu__Init((PartyOrganizationConfirmMyServantMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.partyOrganizationConfirmCostumeMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationConfirmCostumeMenu__Init((PartyOrganizationConfirmCostumeMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.operationCommandCardMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationCommandCardMenu__Init((PartyOrganizationCommandCardMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.operationEventPointMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationEventPointMenu__Init((PartyOrganizationEventPointMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.deckNameInputMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  DeckNameInputMenu__Init((DeckNameInputMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.deckSelectMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  DeckSelectMenu__Init((DeckSelectMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.partyOrganizationConfirmCopyMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationConfirmCopyMenu__Init((PartyOrganizationConfirmCopyMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.boostItemMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  BoostItemMenu__Init((BoostItemMenu_o *)partyListMenu, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.partyOrganizationRemoveSelectMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationRemoveSelectMenu__Init((PartyOrganizationRemoveSelectMenu_o *)partyListMenu, method);
  partyListMenu = (PartyListMenu_o *)this->fields.partyOrganizationRestrictionHelpDialog;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationRestrictionHelpDialog__Init((PartyOrganizationRestrictionHelpDialog_o *)partyListMenu, method);
  partyListMenu = (PartyListMenu_o *)this->fields.questInfoMenu;
  if ( !partyListMenu )
    goto LABEL_77;
  PartyOrganizationQuestInfoMenu__Init((PartyOrganizationQuestInfoMenu_o *)partyListMenu, method);
  partyListMenu = (PartyListMenu_o *)this->fields.selectMyServantOrNpcDialog;
  if ( !partyListMenu )
    goto LABEL_77;
  SelectMyServantOrNpcDialog__Init((SelectMyServantOrNpcDialog_o *)partyListMenu, 0LL);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  partyListMenu = (PartyListMenu_o *)this->fields.backSkinSprite;
  if ( !partyListMenu )
    goto LABEL_77;
  partyListMenu = (PartyListMenu_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)partyListMenu,
                                       0LL);
  if ( !partyListMenu )
    goto LABEL_77;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListMenu, 0, 0LL);
  partyListMenu = (PartyListMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !partyListMenu )
    goto LABEL_77;
  AtlasManager__ReleaseUISkin((AtlasManager_o *)partyListMenu, 2, 0, 0LL);
  if ( !this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleasePartyOrganizationAtlas(0LL);
  }
  isMasterEquipEdit = this->fields.isMasterEquipEdit;
  this->fields.state = 0;
  if ( !isMasterEquipEdit )
    goto LABEL_39;
  waveBattlePartyOrganizationMenu = (UnityEngine_Object_o *)this->fields.waveBattlePartyOrganizationMenu;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(waveBattlePartyOrganizationMenu, 0LL, 0LL) )
  {
LABEL_39:
    this->fields.baseDeckItemList = 0LL;
    sub_B2C2F8(&this->fields.baseDeckItemList, 0LL);
    this->fields.waveBattleDeckItemList = 0LL;
    sub_B2C2F8(&this->fields.waveBattleDeckItemList, 0LL);
  }
  this->fields.followerInfo = 0LL;
  sub_B2C2F8(&this->fields.followerInfo, 0LL);
  p_basePartyItem = &this->fields.basePartyItem;
  if ( this->fields.basePartyItem )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    partyListMenu = (PartyListMenu_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !*p_basePartyItem )
      goto LABEL_77;
    v12 = partyListMenu;
    partyListMenu = (PartyListMenu_o *)PartyListViewItem__Clone(*p_basePartyItem, 0LL);
    if ( !v12 )
      goto LABEL_77;
    *(_QWORD *)&v12->fields.basePosition.fields.y = partyListMenu;
    sub_B2C2F8(&v12->fields.basePosition.fields.y, partyListMenu);
  }
  p_partyItem = &this->fields.partyItem;
  if ( this->fields.partyItem )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    partyListMenu = (PartyListMenu_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !*p_partyItem )
      goto LABEL_77;
    v14 = partyListMenu;
    partyListMenu = (PartyListMenu_o *)PartyListViewItem__Clone(*p_partyItem, 0LL);
    if ( !v14 )
      goto LABEL_77;
    *(_QWORD *)&v14->fields.isOpen = partyListMenu;
    sub_B2C2F8(&v14->fields.isOpen, partyListMenu);
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  partyListMenu = (PartyListMenu_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !partyListMenu )
    goto LABEL_77;
  if ( LODWORD(partyListMenu->fields.enterTransform) )
  {
    if ( (WORD1(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    partyListMenu = (PartyListMenu_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !partyListMenu )
      goto LABEL_77;
    v15 = 0;
  }
  else
  {
    if ( (WORD1(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    partyListMenu = (PartyListMenu_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !partyListMenu )
      goto LABEL_77;
    v15 = !this->fields.isMasterEquipEdit;
  }
  LOBYTE(partyListMenu->fields.basePosition.fields.x) = v15;
  if ( !this->fields.isMasterEquipEdit )
  {
    v16 = (UnityEngine_Object_o *)this->fields.waveBattlePartyOrganizationMenu;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    {
      partyListMenu = (PartyListMenu_o *)this->fields.waveBattlePartyOrganizationMenu;
      if ( partyListMenu )
      {
        WaveBattlePartyOrganizationMenu__Close((WaveBattlePartyOrganizationMenu_o *)partyListMenu, 0LL);
        goto LABEL_76;
      }
LABEL_77:
      sub_B2C434(partyListMenu, method);
    }
  }
LABEL_76:
  this->fields.isMasterEquipEdit = 0;
  this->fields.basePartyItem = 0LL;
  sub_B2C2F8(&this->fields.basePartyItem, 0LL);
  this->fields.partyItem = 0LL;
  sub_B2C2F8(&this->fields.partyItem, 0LL);
  PartyOrganizationRootComponent__SetCacheAssetNameList(this, 0LL, v17);
}


void __fastcall PartyOrganizationRootComponent__beginInitialize(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *titleInfo; // x0
  __int64 v7; // x1
  clsQuestCheck_o *v8; // x20

  if ( (byte_4184FCA & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v4);
    sub_B2C35C(&StringLiteral_13178/*"SvtEqScrollBarValue"*/, v5);
    byte_4184FCA = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  *(_QWORD *)&this->fields.selectPartyNum = 0xFFFFFFFFLL;
  this->fields.selectPartyMemberNum = -1;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  titleInfo = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !titleInfo )
    goto LABEL_24;
  if ( titleInfo[1].klass )
    goto LABEL_14;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  titleInfo = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !titleInfo )
LABEL_24:
    sub_B2C434(titleInfo, v7);
  if ( SLODWORD(titleInfo[2].klass) <= 0 )
    this->fields.isFirstChange = 1;
LABEL_14:
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  this->fields.isAutoClose = 0;
  this->fields.isSaveDeck = 1;
  *(_WORD *)&this->fields.isAutoOrganization = 0;
  this->fields.state = 0;
  if ( !titleInfo )
    goto LABEL_24;
  titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  titleInfo = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !titleInfo )
    goto LABEL_24;
  LOBYTE(titleInfo[3].monitor) = 0;
  v8 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  titleInfo = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !titleInfo )
    goto LABEL_24;
  if ( !v8 )
    goto LABEL_24;
  BYTE4(v8[1].fields.cQuestReleaseListP) = LODWORD(titleInfo[2].klass) == 0;
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13178/*"SvtEqScrollBarValue"*/, 0LL);
  titleInfo = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_24;
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)titleInfo, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall PartyOrganizationRootComponent__beginResume(
        PartyOrganizationRootComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x9
  struct SceneJumpInfo_o *masterFormationInfo; // x8
  int32_t menuKind; // w0
  struct PartyListViewItem_o *v10; // x9
  PartyOrganizationRootComponent_c *klass; // x8
  void *v12; // x1
  struct SceneJumpInfo_o *v13; // x8
  struct PartyListViewItem_o *basePartyItem; // x9
  int64_t userId2; // x8
  struct BattleSetupInfo_o *v16; // x9
  struct SceneJumpInfo_o *v17; // x8
  struct PartyListViewItem_o *v18; // x9
  struct PartyListViewItem_array *baseDeckItemList; // x8
  int max_length; // w10
  int i; // w9
  struct SceneJumpInfo_o *v22; // x10
  PartyListViewItem_o *v23; // x11
  UserEventDeckEntity_o *UserEventDeck; // x20
  NetworkManager_ResultCallbackFunc_c *v25; // x0
  NetworkManager_ResultCallbackFunc_o *v26; // x21
  struct BattleSetupInfo_o *v27; // x8
  int32_t eventId; // w22
  EventDeckSetupRequest_o *v29; // x21
  struct BattleSetupInfo_o *v30; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool v32; // w1
  struct SceneJumpInfo_o *v33; // x8
  struct PartyListViewItem_o *v34; // x9
  int64_t v35; // x8
  int64_t userEquipId; // x9
  struct BattleSetupInfo_o *v37; // x9
  struct SceneJumpInfo_o *v38; // x8
  struct PartyListViewItem_o *v39; // x9
  UserEventDeckEntity_o *v40; // x0
  struct QuestRestrictionInfo_o *v41; // x8
  struct BattleSetupInfo_o *v42; // x9
  NetworkManager_ResultCallbackFunc_o *v43; // x20
  UserFormationRequest_o *v44; // x20
  struct SceneJumpInfo_o *v45; // x8
  __int64 v46; // x0

  v2 = this;
  if ( (byte_4184FD1 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_EventDeckSetupRequest___, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_UserFormationRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndRequestResume__, v5);
    this = (PartyOrganizationRootComponent_o *)sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4184FD1 = 1;
  }
  if ( v2->fields.state != 29 )
  {
    ((void (__fastcall *)(PartyOrganizationRootComponent_o *, Il2CppMethodPointer))v2->klass->vtable._7_beginFinish.method)(
      v2,
      v2->klass->vtable._8_beginPause.methodPtr);
    ((void (__fastcall *)(PartyOrganizationRootComponent_o *, _QWORD, Il2CppMethodPointer))v2->klass->vtable._5_beginStartUp.method)(
      v2,
      0LL,
      v2->klass->vtable._6_beginStartUp.methodPtr);
LABEL_58:
    SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)v2, 0LL);
    return;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  masterFormationInfo = v2->fields.masterFormationInfo;
  if ( battleSetupInfo )
  {
    if ( !masterFormationInfo )
    {
LABEL_56:
      ((void (__fastcall *)(PartyOrganizationRootComponent_o *, Il2CppMethodPointer))v2->klass->vtable._7_beginFinish.method)(
        v2,
        v2->klass->vtable._8_beginPause.methodPtr);
      klass = v2->klass;
      v12 = v2->fields.battleSetupInfo;
      goto LABEL_57;
    }
    menuKind = v2->fields.menuKind;
    if ( menuKind == 9 )
    {
      this = (PartyOrganizationRootComponent_o *)v2->fields.waveBattlePartyOrganizationMenu;
      if ( this )
      {
        this = (PartyOrganizationRootComponent_o *)WaveBattlePartyOrganizationMenu__IsDisplay(
                                                     (WaveBattlePartyOrganizationMenu_o *)this,
                                                     0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          v2->fields.selectWaveNum = v2->fields.selectPartyNum;
        v13 = v2->fields.masterFormationInfo;
        if ( v13 )
        {
          basePartyItem = v2->fields.basePartyItem;
          if ( basePartyItem )
          {
            userId2 = v13->fields.userId2;
            if ( userId2 == basePartyItem->fields.userEquipId )
              goto LABEL_56;
            v16 = v2->fields.battleSetupInfo;
            if ( v16 )
            {
              v16->fields.userEquipId = userId2;
              v17 = v2->fields.masterFormationInfo;
              if ( v17 )
              {
                v18 = v2->fields.basePartyItem;
                if ( v18 )
                {
                  v18->fields.userEquipId = v17->fields.userId2;
                  baseDeckItemList = v2->fields.baseDeckItemList;
                  if ( baseDeckItemList )
                  {
                    max_length = baseDeckItemList->max_length;
                    if ( max_length >= 1 )
                    {
                      for ( i = 0; i < max_length; ++i )
                      {
                        if ( i >= (unsigned int)max_length )
                        {
                          v46 = sub_B2C460(this);
                          sub_B2C400(v46, 0LL);
                        }
                        v22 = v2->fields.masterFormationInfo;
                        if ( !v22 )
                          goto LABEL_68;
                        v23 = baseDeckItemList->m_Items[i];
                        if ( !v23 )
                          goto LABEL_68;
                        v23->fields.userEquipId = v22->fields.userId2;
                        max_length = baseDeckItemList->max_length;
                      }
                    }
                    this = (PartyOrganizationRootComponent_o *)v2->fields.waveBattlePartyOrganizationMenu;
                    if ( !this )
                      goto LABEL_68;
                    UserEventDeck = WaveBattlePartyOrganizationMenu__GetUserEventDeck(
                                      (WaveBattlePartyOrganizationMenu_o *)this,
                                      v2->fields.baseDeckItemList,
                                      0LL);
                    v25 = NetworkManager_ResultCallbackFunc_TypeInfo;
                    goto LABEL_32;
                  }
                }
              }
            }
          }
        }
      }
LABEL_68:
      sub_B2C434(this, method);
    }
    if ( menuKind == 1 )
    {
      battleSetupInfo->fields.userEquipId = masterFormationInfo->fields.userId;
      goto LABEL_56;
    }
    questRestrictionInfo = v2->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      v32 = questRestrictionInfo->fields.eventDeckNum > 0;
    else
      v32 = 0;
    this = (PartyOrganizationRootComponent_o *)PartyListViewItem__IsSpecificMenuKind_31930304(menuKind, v32, 0LL);
    v33 = v2->fields.masterFormationInfo;
    if ( !v33 )
      goto LABEL_68;
    v34 = v2->fields.basePartyItem;
    if ( !v34 )
      goto LABEL_68;
    v35 = v33->fields.userId2;
    userEquipId = v34->fields.userEquipId;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v35 == userEquipId )
        goto LABEL_56;
      v37 = v2->fields.battleSetupInfo;
      if ( v37 )
      {
        v37->fields.userEquipId = v35;
        v38 = v2->fields.masterFormationInfo;
        if ( v38 )
        {
          v39 = v2->fields.basePartyItem;
          if ( v39 )
          {
            v39->fields.userEquipId = v38->fields.userId2;
            this = (PartyOrganizationRootComponent_o *)v2->fields.basePartyItem;
            if ( this )
            {
              v40 = PartyListViewItem__GetUserEventDeck((PartyListViewItem_o *)this, 0LL);
              if ( !v40 )
                goto LABEL_56;
              v41 = v2->fields.questRestrictionInfo;
              if ( !v41 )
                goto LABEL_56;
              UserEventDeck = v40;
              if ( v41->fields.isNpcOnlyBattle && !v41->fields.isNpcEditablePos )
                goto LABEL_56;
              v25 = NetworkManager_ResultCallbackFunc_TypeInfo;
LABEL_32:
              v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(v25);
              NetworkManager_ResultCallbackFunc___ctor(
                v26,
                (Il2CppObject *)v2,
                Method_PartyOrganizationRootComponent_EndRequestResume__,
                0LL);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              this = (PartyOrganizationRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v26,
                                                           (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventDeckSetupRequest___);
              v27 = v2->fields.battleSetupInfo;
              if ( v27 )
              {
                eventId = v27->fields.eventId;
                v29 = (EventDeckSetupRequest_o *)this;
                this = (PartyOrganizationRootComponent_o *)BattleSetupInfo__TargetQuestId(
                                                             v2->fields.battleSetupInfo,
                                                             0LL);
                v30 = v2->fields.battleSetupInfo;
                if ( v30 )
                {
                  if ( v29 )
                  {
                    EventDeckSetupRequest__beginRequest(
                      v29,
                      UserEventDeck,
                      eventId,
                      (int32_t)this,
                      v30->fields.questPhase,
                      0LL);
                    return;
                  }
                }
              }
              goto LABEL_68;
            }
          }
        }
      }
      goto LABEL_68;
    }
    if ( v35 == userEquipId )
      goto LABEL_56;
    v42 = v2->fields.battleSetupInfo;
    if ( !v42 )
      goto LABEL_68;
    v42->fields.userEquipId = v35;
  }
  else
  {
    if ( !masterFormationInfo )
      goto LABEL_68;
    v10 = v2->fields.basePartyItem;
    if ( !v10 )
      goto LABEL_68;
    if ( masterFormationInfo->fields.userId2 == v10->fields.userEquipId )
    {
      ((void (__fastcall *)(PartyOrganizationRootComponent_o *, Il2CppMethodPointer))v2->klass->vtable._7_beginFinish.method)(
        v2,
        v2->klass->vtable._8_beginPause.methodPtr);
      klass = v2->klass;
      v12 = v2->fields.masterFormationInfo;
LABEL_57:
      ((void (__fastcall *)(PartyOrganizationRootComponent_o *, void *, Il2CppMethodPointer))klass->vtable._5_beginStartUp.method)(
        v2,
        v12,
        klass->vtable._6_beginStartUp.methodPtr);
      goto LABEL_58;
    }
  }
  v43 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v43,
    (Il2CppObject *)v2,
    Method_PartyOrganizationRootComponent_EndRequestResume__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (PartyOrganizationRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                               v43,
                                               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_UserFormationRequest___);
  if ( !v2->fields.basePartyItem )
    goto LABEL_68;
  v44 = (UserFormationRequest_o *)this;
  this = (PartyOrganizationRootComponent_o *)PartyListViewItem__get_DeckNum(v2->fields.basePartyItem, 0LL);
  v45 = v2->fields.masterFormationInfo;
  if ( !v45 || !v44 )
    goto LABEL_68;
  UserFormationRequest__beginRequest(v44, (int32_t)this, v45->fields.userId2, 0LL);
}


void __fastcall PartyOrganizationRootComponent__beginStartUp(
        PartyOrganizationRootComponent_o *this,
        Il2CppObject *data,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
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
  __int64 v35; // x10
  Il2CppObject *v36; // x1
  BattleSetupInfo_o **p_battleSetupInfo; // x20
  struct EventUpValSetupInfo_o **p_setupInfo2; // x24
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x23
  struct FollowerInfo_o **p_followerInfo; // x21
  int32_t *p_selectPartyNum; // x26
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct EventUpValSetupInfo_o *eventUpValSetupInfo; // x22
  int64_t Instance; // x0
  const MethodInfo *v45; // x1
  QuestRestrictionInfo_o *v46; // x1
  QuestPhaseMaster_o *v47; // x22
  __int64 v48; // d0
  int32_t v49; // w8
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v51; // x20
  __int64 v52; // x10
  __int64 v53; // x10
  System_Int32_array *EventValUpEventIdList; // x20
  EventUpValSetupInfo_o *v55; // x21
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int v57; // w8
  UserDeckEntity_o *v58; // x21
  struct DeckServant_o *deckInfo; // x9
  struct DeckServantData_array *svts; // x9
  int max_length; // w11
  int v62; // w10
  DeckServantData_o *v63; // x9
  QuestRestrictionInfo_o *v64; // x0
  int32_t menuKind; // w22
  int32_t costMax; // w23
  FollowerInfo_o *followerInfo; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x28
  EventUpValSetupInfo_o *setupInfo; // x25
  PartyListViewItem_o *v70; // x20
  int32_t StartDeckCondition; // w0
  System_String_o *MainBgmName; // x20
  System_Action_o *v73; // x20
  struct QuestRestrictionInfo_o *v74; // x8
  BattleSetupInfo_o *v75; // x8
  int32_t followerType; // w9
  int64_t followerId; // x22
  int v78; // w8
  int32_t v79; // w23
  NpcFollowerMaster_o *v80; // x24
  FollowerInfo_o *Follower; // x0
  struct FollowerInfo_o *v82; // x9
  FollowerInfo_o *v83; // x0
  FollowerInfo_o *v84; // x0
  struct FollowerInfo_o *v85; // x1
  EventCampaignMaster_o *v86; // x21
  EventQuestMaster_o *v87; // x22
  struct EventCampaignEntity_array *Data_29696660; // x0
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x11
  int v90; // w9
  __int64 v91; // x10
  int32_t v92; // w8
  EventCampaignEntity_o **m_Items; // x11
  EventCampaignEntity_o *v94; // x12
  struct System_Int32_array *targetIds; // x13
  int32_t value; // w12
  struct BattleSetupInfo_o *v97; // x8
  QuestRestrictionInfo_o *v98; // x8
  int64_t deckId; // x8
  struct QuestRestrictionInfo_o *v100; // x8
  int32_t questId; // w22
  __int64 v102; // x0
  UserGameEntity_o *v103; // [xsp+20h] [xbp-60h] BYREF
  UserGameEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4184FCB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&AtlasManager_TypeInfo, v5);
    sub_B2C35C(&BattleSetupInfo_TypeInfo, v6);
    sub_B2C35C(&BgmManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventQuestMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_UserFollowerMaster___, v15);
    sub_B2C35C(&DataManager_TypeInfo, v16);
    sub_B2C35C(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v17);
    sub_B2C35C(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v18);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v19);
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, v20);
    sub_B2C35C(&NetworkManager_TypeInfo, v21);
    sub_B2C35C(&OptionManager_TypeInfo, v22);
    sub_B2C35C(&PartyListViewItem_TypeInfo, v23);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndLoadCommonBg__, v24);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v25);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v29);
    sub_B2C35C(&SoundManager_TypeInfo, v30);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v31);
    sub_B2C35C(&TutorialFlag_TypeInfo, v32);
    sub_B2C35C(&StringLiteral_5205/*"DeckId"*/, v33);
    sub_B2C35C(&StringLiteral_12259/*"SKIP_SETUP"*/, v34);
    byte_4184FCB = 1;
  }
  v103 = 0LL;
  entity = 0LL;
  if ( data
    && (v35 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v35) )
  {
    if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v35 - 1] == BattleSetupInfo_TypeInfo )
      v36 = data;
    else
      v36 = 0LL;
  }
  else
  {
    v36 = 0LL;
  }
  p_battleSetupInfo = &this->fields.battleSetupInfo;
  this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v36;
  sub_B2C2F8(&this->fields.battleSetupInfo, v36);
  this->fields.masterFormationInfo = 0LL;
  sub_B2C2F8(&this->fields.masterFormationInfo, 0LL);
  this->fields.setupInfo = 0LL;
  sub_B2C2F8(&this->fields.setupInfo, 0LL);
  p_setupInfo2 = &this->fields.setupInfo2;
  this->fields.setupInfo2 = 0LL;
  sub_B2C2F8(&this->fields.setupInfo2, 0LL);
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = 0LL;
  sub_B2C2F8(&this->fields.questRestrictionInfo, 0LL);
  p_followerInfo = &this->fields.followerInfo;
  this->fields.followerInfo = 0LL;
  sub_B2C2F8(&this->fields.followerInfo, 0LL);
  p_selectPartyNum = &this->fields.selectPartyNum;
  this->fields.followerClassId = 0;
  *(_QWORD *)&this->fields.selectPartyNum = 0xFFFFFFFFLL;
  this->fields.selectPartyMemberNum = -1;
  battleSetupInfo = this->fields.battleSetupInfo;
  *(_QWORD *)&this->fields.tutorialMode = 0LL;
  this->fields.friendPointCampaignVal = 0;
  this->fields.activeDeckId = 0LL;
  if ( !battleSetupInfo )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v51 = SelfUserGame;
    *(_QWORD *)&this->fields.mainMenuMode = 0x900000009LL;
    this->fields.menuKind = 8;
    if ( SelfUserGame )
      this->fields.activeDeckId = SelfUserGame->fields.activeDeckId;
    if ( data )
    {
      v52 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
      if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v52
        && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v52 - 1] == SceneJumpInfo_TypeInfo )
      {
        Instance = System_String__op_Equality(
                     (System_String_o *)data[1].klass,
                     (System_String_o *)StringLiteral_5205/*"DeckId"*/,
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v53 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
          if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v53
            || (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v53 - 1] != SceneJumpInfo_TypeInfo )
          {
            goto LABEL_238;
          }
          this->fields.activeDeckId = (int64_t)data[2].klass;
        }
      }
    }
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28617756(102, 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_238;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_238;
      EventValUpEventIdList = EventMaster__GetEventValUpEventIdList((EventMaster_o *)Instance, 0, 0LL);
      v55 = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor_26087716(v55, EventValUpEventIdList, 0, 0LL);
      *p_setupInfo2 = v55;
      sub_B2C2F8(&this->fields.setupInfo2, v55);
    }
    else
    {
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( !TutorialFlag__IsProgressDone(3, 0LL) )
      {
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_238;
        MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_238;
        Instance = (int64_t)UserDeckMaster__getDeckList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
        if ( !Instance )
          goto LABEL_238;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_239;
        v57 = 1;
        while ( 1 )
        {
          v58 = *(UserDeckEntity_o **)(Instance + 32);
          if ( !v58 )
            goto LABEL_238;
          deckInfo = v58->fields.deckInfo;
          if ( !deckInfo )
            goto LABEL_238;
          svts = deckInfo->fields.svts;
          if ( !svts )
            goto LABEL_238;
          max_length = svts->max_length;
          v62 = v57 - 1;
          if ( v57 - 1 >= max_length )
            break;
          if ( v62 >= (unsigned int)max_length )
            goto LABEL_239;
          v63 = svts->m_Items[v62];
          if ( !v63 )
            goto LABEL_238;
          if ( !v63->fields.initPos )
            v63->fields.initPos = v57;
          ++v57;
          if ( !*(_DWORD *)(Instance + 24) )
            goto LABEL_239;
        }
        if ( !v51 )
          goto LABEL_238;
        menuKind = this->fields.menuKind;
        costMax = v51->fields.costMax;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        followerInfo = this->fields.followerInfo;
        setupInfo = this->fields.setupInfo;
        v70 = (PartyListViewItem_o *)sub_B2C42C(PartyListViewItem_TypeInfo);
        PartyListViewItem___ctor_31894220(
          v70,
          menuKind,
          0,
          costMax,
          v58,
          followerInfo,
          0,
          setupInfo,
          questRestrictionInfo,
          0LL,
          0,
          0LL);
        if ( !v70 )
          goto LABEL_238;
        StartDeckCondition = PartyListViewItem__GetStartDeckCondition(v70, 0LL);
        this->fields.tutorialMode = 1;
        if ( StartDeckCondition )
        {
          this->fields.tutorialState = 1;
        }
        else
        {
          this->fields.tutorialState = 5;
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          TutorialFlag__SetProgress(3, 0LL);
        }
      }
    }
    *p_selectPartyNum = 0;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    MainBgmName = BgmManager__GetMainBgmName(0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm(MainBgmName, 0LL);
    Instance = (int64_t)this->fields.titleInfo;
    if ( Instance )
    {
      TitleInfoControl__setTitleInfo_19532804((TitleInfoControl_o *)Instance, this->fields.myFSM, 2, 67, 0LL);
      goto LABEL_80;
    }
LABEL_238:
    sub_B2C434(Instance, v45);
  }
  eventUpValSetupInfo = battleSetupInfo->fields.eventUpValSetupInfo;
  *p_setupInfo2 = eventUpValSetupInfo;
  sub_B2C2F8(&this->fields.setupInfo2, eventUpValSetupInfo);
  this->fields.setupInfo = eventUpValSetupInfo;
  sub_B2C2F8(&this->fields.setupInfo, eventUpValSetupInfo);
  if ( !*p_battleSetupInfo )
    goto LABEL_238;
  v46 = (*p_battleSetupInfo)->fields.questRestrictionInfo;
  *p_questRestrictionInfo = v46;
  sub_B2C2F8(&this->fields.questRestrictionInfo, v46);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !*p_battleSetupInfo )
    goto LABEL_238;
  v47 = (QuestPhaseMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
  if ( !*p_battleSetupInfo )
    goto LABEL_238;
  if ( !v47 )
    goto LABEL_238;
  Instance = (int64_t)QuestPhaseMaster__GetEntity(v47, Instance, (*p_battleSetupInfo)->fields.questPhase, 0LL);
  if ( !Instance )
    goto LABEL_238;
  if ( QuestPhaseEntity__IsWaveSetup((QuestPhaseEntity_o *)Instance, 0LL) )
  {
    v48 = 0x800000008LL;
    v49 = 9;
LABEL_90:
    *(_QWORD *)&this->fields.mainMenuMode = v48;
    this->fields.menuKind = v49;
    goto LABEL_91;
  }
  if ( *p_questRestrictionInfo )
  {
    if ( QuestRestrictionInfo__IsSupportOnly(*p_questRestrictionInfo, 0LL) )
    {
      v48 = 0x100000001LL;
      v49 = 1;
      goto LABEL_90;
    }
    v64 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( v64->fields.isFixedMyServantSingle )
      {
        v48 = 0x300000003LL;
        v49 = 3;
        goto LABEL_90;
      }
      if ( v64->fields.isNpcOnlyBattle )
      {
        v48 = 0x600000006LL;
        v49 = 6;
        goto LABEL_90;
      }
      if ( v64->fields.isNpcMultipleBattle )
      {
        v48 = 0x700000007LL;
        v49 = 7;
        goto LABEL_90;
      }
      if ( QuestRestrictionInfo__IsServantNum(v64, 0LL) )
      {
        Instance = (int64_t)*p_questRestrictionInfo;
        if ( !*p_questRestrictionInfo )
          goto LABEL_238;
        if ( QuestRestrictionInfo__IsFixedServantPosition((QuestRestrictionInfo_o *)Instance, 0LL) )
        {
          v48 = 0x500000005LL;
          v49 = 5;
          goto LABEL_90;
        }
      }
      if ( *p_questRestrictionInfo )
      {
        if ( QuestRestrictionInfo__IsServantNum(*p_questRestrictionInfo, 0LL) )
        {
          v48 = 0x400000004LL;
          v49 = 4;
          goto LABEL_90;
        }
        v98 = *p_questRestrictionInfo;
        if ( *p_questRestrictionInfo && (v98->fields.isNoSupportBattle || v98->fields.isNotTransitionSupportList) )
        {
          v48 = 0x200000002LL;
          v49 = 2;
          goto LABEL_90;
        }
      }
    }
  }
  *(_QWORD *)&this->fields.mainMenuMode = 0LL;
  this->fields.menuKind = 0;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  Instance = OptionManager__GetAutoSelectParty(0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_222;
  if ( !*p_battleSetupInfo )
    goto LABEL_238;
  if ( (*p_battleSetupInfo)->fields.isChildFollower )
    goto LABEL_222;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_238;
  if ( *(_BYTE *)(Instance + 60) )
  {
    if ( !*p_battleSetupInfo )
      goto LABEL_238;
    v100 = (*p_battleSetupInfo)->fields.questRestrictionInfo;
    if ( !v100 )
      goto LABEL_238;
    questId = v100->fields.questId;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    }
    Instance = LastUsedDeckNumberManager__GetDeckNumber(questId, 0LL);
    this->fields.lastUsedDeckNumber = Instance;
    if ( (_DWORD)Instance )
      goto LABEL_91;
  }
  else
  {
LABEL_222:
    this->fields.lastUsedDeckNumber = 0;
  }
  if ( !*p_battleSetupInfo )
    goto LABEL_238;
  deckId = (*p_battleSetupInfo)->fields.deckId;
  if ( deckId >= 1 )
    this->fields.activeDeckId = deckId;
LABEL_91:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C79 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v45);
    byte_4183C79 = 1;
  }
  Instance = (int64_t)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 86LL) )
  {
    if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
      j_il2cpp_runtime_class_init_0(Instance);
    if ( !byte_418483C )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v45);
      byte_418483C = 1;
    }
    Instance = (int64_t)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( *(_DWORD *)(*(_QWORD *)(Instance + 184) + 92LL) == 2 )
      goto LABEL_112;
  }
  if ( !*p_battleSetupInfo )
    goto LABEL_238;
  v74 = (*p_battleSetupInfo)->fields.questRestrictionInfo;
  if ( !v74 )
    goto LABEL_238;
  if ( v74->fields.isSupportOnlyForceBattle )
  {
LABEL_112:
    SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12259/*"SKIP_SETUP"*/, 0LL);
    return;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28617756(102, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__IsProgressDone(3, 0LL) )
      goto LABEL_112;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  *p_selectPartyNum = 0;
  v75 = *p_battleSetupInfo;
  if ( !*p_battleSetupInfo )
    goto LABEL_238;
  followerType = v75->fields.followerType;
  followerId = v75->fields.followerId;
  if ( followerType == 5 )
    v78 = 5;
  else
    v78 = -1;
  if ( followerType == 1 )
    v79 = 1;
  else
    v79 = v78;
  if ( followerId >= 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_238;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
    if ( !*p_battleSetupInfo )
      goto LABEL_238;
    v80 = (NpcFollowerMaster_o *)Instance;
    Instance = BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
    if ( !*p_battleSetupInfo )
      goto LABEL_238;
    if ( !v80 )
      goto LABEL_238;
    Follower = NpcFollowerMaster__GetFollower(v80, Instance, (*p_battleSetupInfo)->fields.questPhase, followerId, 0LL);
    *p_followerInfo = Follower;
    sub_B2C2F8(&this->fields.followerInfo, Follower);
    if ( !*p_battleSetupInfo )
      goto LABEL_238;
    v82 = this->fields.followerInfo;
    this->fields.followerClassId = (*p_battleSetupInfo)->fields.followerClassId;
    if ( v82 )
      goto LABEL_242;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserFollowerMaster___);
    if ( !Instance )
      goto LABEL_238;
    if ( DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
           (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)Instance,
           &entity,
           (const MethodInfo_24E43E0 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__) )
    {
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_238;
      v83 = UserFollowerEntity__getFollowerInfo((UserFollowerEntity_o *)entity, followerId, v79, 0LL);
      *p_followerInfo = v83;
      sub_B2C2F8(&this->fields.followerInfo, v83);
    }
    if ( *p_followerInfo )
      goto LABEL_242;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    if ( !Instance )
      goto LABEL_238;
    if ( DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
           (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)Instance,
           &v103,
           (const MethodInfo_24E43E0 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    {
      Instance = (int64_t)v103;
      if ( !v103 )
        goto LABEL_238;
      v84 = PickupUserFollowerEntity__getFollowerInfo((PickupUserFollowerEntity_o *)v103, followerId, v79, 0LL);
      *p_followerInfo = v84;
      sub_B2C2F8(&this->fields.followerInfo, v84);
    }
    if ( *p_followerInfo )
    {
LABEL_242:
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_238;
      if ( *(int *)(Instance + 48) < 1 )
        goto LABEL_243;
      Instance = (int64_t)*p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_238;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
      {
LABEL_243:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !Instance )
          goto LABEL_238;
        v85 = *p_followerInfo;
        *(_QWORD *)(Instance + 24) = *p_followerInfo;
        sub_B2C2F8(Instance + 24, v85);
        Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*p_battleSetupInfo )
          goto LABEL_238;
        if ( !Instance )
          goto LABEL_238;
        *(_DWORD *)(Instance + 32) = (*p_battleSetupInfo)->fields.followerClassId;
        Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !*p_battleSetupInfo || !Instance )
          goto LABEL_238;
        *(_DWORD *)(Instance + 36) = (*p_battleSetupInfo)->fields.followerSupportDeckId;
      }
    }
  }
  if ( PartyOrganizationRootComponent__IsGetFriendPoint(this, v45) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_238;
    v86 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_238;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventQuestMaster___);
    if ( !*p_battleSetupInfo )
      goto LABEL_238;
    v87 = (EventQuestMaster_o *)Instance;
    Instance = BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
    if ( !*p_battleSetupInfo )
      goto LABEL_238;
    if ( !v87 )
      goto LABEL_238;
    Instance = (int64_t)EventQuestMaster__GetEnabledEventCampaignForQuest(
                          v87,
                          Instance,
                          (*p_battleSetupInfo)->fields.questPhase,
                          0LL,
                          0LL);
    if ( !v86 )
      goto LABEL_238;
    Data_29696660 = EventCampaignMaster__getData_29696660(v86, 24, (EventEntity_array *)Instance, 0LL);
    this->fields.friendPointCampaignEntityList = Data_29696660;
    sub_B2C2F8(&this->fields.friendPointCampaignEntityList, Data_29696660);
    friendPointCampaignEntityList = this->fields.friendPointCampaignEntityList;
    if ( friendPointCampaignEntityList )
    {
      v90 = friendPointCampaignEntityList->max_length;
      if ( v90 >= 1 )
      {
        v91 = 0LL;
        v92 = 0;
        m_Items = friendPointCampaignEntityList->m_Items;
        while ( (unsigned int)v91 < v90 )
        {
          v94 = m_Items[v91];
          if ( !v94 )
            goto LABEL_238;
          targetIds = v94->fields.targetIds;
          if ( !targetIds || !targetIds->max_length )
          {
            value = v94->fields.value;
            if ( v92 < value )
              v92 = value;
          }
          if ( (int)++v91 >= v90 )
            goto LABEL_190;
        }
LABEL_239:
        v102 = sub_B2C460(Instance);
        sub_B2C400(v102, 0LL);
      }
      v92 = 0;
LABEL_190:
      this->fields.friendPointCampaignVal = v92;
    }
  }
  Instance = (int64_t)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_238;
  TitleInfoControl__setTitleInfo_19532804((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 64, 0LL);
  v97 = this->fields.battleSetupInfo;
  if ( !v97 )
    goto LABEL_238;
  Instance = (int64_t)this->fields.partyListMenu;
  if ( !Instance )
    goto LABEL_238;
  PartyListMenu__SetStartButton(
    (PartyListMenu_o *)Instance,
    v97->fields.isScriptBeforePartySelect,
    this->fields.mainMenuMode == 8,
    0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_238;
  if ( !*(_BYTE *)(Instance + 60) )
    goto LABEL_80;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_238;
  if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)Instance, 0LL) )
    this->fields.isCheckFriendshipUpItemAvailable = 1;
LABEL_80:
  Instance = (int64_t)this->fields.backSkinSprite;
  if ( !Instance )
    goto LABEL_238;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_238;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v73 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v73, (Il2CppObject *)this, Method_PartyOrganizationRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v73, 2, 1, 0LL);
}


void __fastcall PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218___ctor(
        PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218__MoveNext(
        PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct PartyOrganizationRootComponent_o *_4__this; // x20
  PartyOrganizationUtility_c *v8; // x0
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  UnityEngine_WaitForSeconds_o *v11; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  CommonUI_o *v14; // x19

  if ( (byte_41852A0 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    byte_41852A0 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v14 )
      goto LABEL_17;
    CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    v8 = PartyOrganizationUtility_TypeInfo;
    if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v8 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v8->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
    if ( _4__this )
    {
      Instance = (WebViewManager_o *)_4__this->fields.partyListMenu;
      _4__this->fields.isCheckFriendshipUpItemAvailable = 0;
      if ( Instance )
      {
        PartyListMenu__HideFriendshipUpItemUseButton((PartyListMenu_o *)Instance, 0LL);
        v11 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v11, 0.5, 0LL);
        this->fields.__2__current = (Il2CppObject *)v11;
        p__2__current = &this->fields.__2__current;
        sub_B2C2F8(p__2__current, v11);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_17:
    sub_B2C434(Instance, v10);
  }
  return 0;
}


Il2CppObject *__fastcall PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218__System_Collections_IEnumerator_Reset(
        PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218__System_Collections_IEnumerator_get_Current(
        PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218__System_IDisposable_Dispose(
        PartyOrganizationRootComponent__DisableFriendshipUpItemUseButton_d__218_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175___ctor(
        PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175__MoveNext(
        PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *v2; // x19
  __int64 v3; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  bool result; // w0
  struct PartyOrganizationRootComponent_o *_4__this; // x21
  struct PartyOrganizationMenu_o *partyOrganizationMenu; // x8
  struct PartyListViewItem_array *baseDeckItemList; // x20
  struct PartyListViewItem_o *partyItem; // x19
  __int64 selectPartyNum; // x22
  Il2CppClass **v12; // x0
  unsigned int *v13; // x23
  unsigned __int64 v14; // x22
  struct PartyListViewItem_array **p_waveBattleDeckItemList; // x19
  struct PartyListViewItem_array *v16; // x8
  PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *v17; // x20
  unsigned int *v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0

  v2 = this;
  if ( (byte_41852A1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, method);
    this = (PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *)sub_B2C35C(
                                                                                       &StringLiteral_11079/*"REQUEST_OK"*/,
                                                                                       v3);
    byte_41852A1 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *)_4__this->fields.partyListMenu;
      if ( this )
      {
        PartyListMenu__Init((PartyListMenu_o *)this, 0LL);
        partyOrganizationMenu = _4__this->fields.partyOrganizationMenu;
        _4__this->fields.menuMode = _4__this->fields.mainMenuMode;
        if ( partyOrganizationMenu )
        {
          baseDeckItemList = _4__this->fields.baseDeckItemList;
          if ( baseDeckItemList )
          {
            partyItem = partyOrganizationMenu->fields.partyItem;
            selectPartyNum = _4__this->fields.selectPartyNum;
            if ( partyItem )
            {
              this = (PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *)sub_B2C41C(
                                                                                                 partyItem,
                                                                                                 baseDeckItemList->obj.klass->_1.element_class);
              if ( !this )
              {
LABEL_32:
                v20 = sub_B2C454();
                sub_B2C400(v20, 0LL);
              }
            }
            if ( (unsigned int)selectPartyNum >= baseDeckItemList->max_length )
            {
LABEL_31:
              v19 = sub_B2C460(this);
              sub_B2C400(v19, 0LL);
            }
            v12 = &baseDeckItemList->obj.klass + selectPartyNum;
            v12[4] = (Il2CppClass *)partyItem;
            sub_B2C2F8(v12 + 4, partyItem);
            if ( _4__this->fields.waveBattleDeckItemList )
            {
              v13 = (unsigned int *)_4__this->fields.baseDeckItemList;
              if ( !v13 )
                goto LABEL_26;
              v14 = 0LL;
              p_waveBattleDeckItemList = &_4__this->fields.waveBattleDeckItemList;
              while ( (__int64)v14 < (int)v13[6] )
              {
                if ( v14 != _4__this->fields.selectPartyNum )
                {
                  v16 = *p_waveBattleDeckItemList;
                  if ( !*p_waveBattleDeckItemList )
                    goto LABEL_26;
                  if ( v14 >= v16->max_length )
                    goto LABEL_31;
                  this = (PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *)v16->m_Items[v14];
                  if ( !this )
                    goto LABEL_26;
                  this = (PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *)PartyListViewItem__Clone(
                                                                                                     (PartyListViewItem_o *)this,
                                                                                                     0LL);
                  v17 = this;
                  if ( this )
                  {
                    this = (PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
                    if ( !this )
                      goto LABEL_32;
                  }
                  if ( v14 >= v13[6] )
                    goto LABEL_31;
                  v18 = &v13[2 * v14];
                  *((_QWORD *)v18 + 4) = v17;
                  sub_B2C2F8(v18 + 8, v17);
                  v13 = (unsigned int *)_4__this->fields.baseDeckItemList;
                }
                ++v14;
                if ( !v13 )
                  goto LABEL_26;
              }
              _4__this->fields.waveBattleDeckItemList = 0LL;
              sub_B2C2F8(&_4__this->fields.waveBattleDeckItemList, 0LL);
              _4__this->fields.waveBattleTempDeckItemList = 0LL;
              sub_B2C2F8(&_4__this->fields.waveBattleTempDeckItemList, 0LL);
            }
            this = (PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *)_4__this->fields.myFSM;
            if ( this )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11079/*"REQUEST_OK"*/, 0LL);
              return 0;
            }
          }
        }
      }
    }
LABEL_26:
    sub_B2C434(this, method);
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v5;
    sub_B2C2F8(&v2->fields.__2__current, v5);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175__System_Collections_IEnumerator_Reset(
        PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175__System_Collections_IEnumerator_get_Current(
        PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175__System_IDisposable_Dispose(
        PartyOrganizationRootComponent__SetWaveBattleOrganizationSwap_d__175_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct PartyOrganizationRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4185295 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRootComponent___c_TypeInfo, v1);
    byte_4185295 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(PartyOrganizationRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = PartyOrganizationRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PartyOrganizationRootComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall PartyOrganizationRootComponent___c___ctor(
        PartyOrganizationRootComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall PartyOrganizationRootComponent___c___CostPrioAutoOrganization_b__212_0(
        PartyOrganizationRootComponent___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_B2C434(this, 0LL);
  return d->fields.cost;
}


void __fastcall PartyOrganizationRootComponent___c___OnSelectWavePartyList_b__105_5(
        PartyOrganizationRootComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4185296 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4185296 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall PartyOrganizationRootComponent___c__DisplayClass147_0___ctor(
        PartyOrganizationRootComponent___c__DisplayClass147_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PartyOrganizationRootComponent___c__DisplayClass147_0___EndInputDeckNameMenu_b__0(
        PartyOrganizationRootComponent___c__DisplayClass147_0_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent___c__DisplayClass147_0_o *v2; // x19
  __int64 v3; // x1
  struct PartyOrganizationRootComponent_o *_4__this; // x8
  struct PartyOrganizationRootComponent_o *v5; // x8
  __int64 *v6; // x8

  v2 = this;
  if ( (byte_4185297 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8717/*"MENU_DECIDE"*/, method);
    this = (PartyOrganizationRootComponent___c__DisplayClass147_0_o *)sub_B2C35C(&StringLiteral_8716/*"MENU_CANCEL"*/, v3);
    byte_4185297 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.state = _4__this->fields.showBackupState,
        (this = (PartyOrganizationRootComponent___c__DisplayClass147_0_o *)v2->fields.__4__this) == 0LL)
    || (PartyOrganizationRootComponent__RecoverInputShowMenu((PartyOrganizationRootComponent_o *)this, 0LL),
        (v5 = v2->fields.__4__this) == 0LL)
    || (this = (PartyOrganizationRootComponent___c__DisplayClass147_0_o *)v5->fields.myFSM) == 0LL )
  {
    sub_B2C434(this, method);
  }
  if ( v2->fields.isDecide )
    v6 = &StringLiteral_8717/*"MENU_DECIDE"*/;
  else
    v6 = &StringLiteral_8716/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0LL);
}


void __fastcall PartyOrganizationRootComponent___c__DisplayClass198_0___ctor(
        PartyOrganizationRootComponent___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PartyOrganizationRootComponent___c__DisplayClass198_0___DispWaveBattleTop_b__0(
        PartyOrganizationRootComponent___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent___c__DisplayClass198_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct PartyOrganizationRootComponent_o *_4__this; // x8
  struct PartyOrganizationRootComponent_o *v9; // x8
  il2cpp_array_size_t v10; // w21
  __int64 v11; // x22
  struct PartyListViewItem_array *baseDeckItemList; // x9
  il2cpp_array_size_t max_length; // w10
  struct PartyListViewItem_array *waveBattleBaseDeckItemList; // x23
  PartyOrganizationRootComponent___c__DisplayClass198_0_o *v15; // x20
  UserEventDeckMaster_o *Master_WarQuestSelectionMaster; // x20
  struct PartyOrganizationRootComponent_o *v17; // x8
  PartyOrganizationRootComponent___c__DisplayClass198_0_o *v18; // x21
  int32_t monitor_high; // w22
  struct PartyOrganizationRootComponent_o *v20; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  UserEventDeckEntity_o *klass; // x20
  struct DeckServant_o *deckInfo; // x8
  struct PartyOrganizationRootComponent_o *v24; // x8
  struct PartyOrganizationRootComponent_o *v25; // x8
  struct PartyOrganizationRootComponent_o *v26; // x8
  WaveBattlePartyOrganizationMenu_o *waveBattlePartyOrganizationMenu; // x20
  CommonUI_o *v28; // x20
  struct PartyOrganizationRootComponent_o *v29; // x8
  struct PartyOrganizationRootComponent_o *v30; // x8
  struct PartyOrganizationRootComponent_o *v31; // x8
  struct PartyOrganizationRootComponent_o *v32; // x8
  struct PartyOrganizationRootComponent_o *v33; // x8
  struct PartyOrganizationRootComponent_o *v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0

  v2 = this;
  if ( (byte_4185298 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventDeckMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)sub_B2C35C(&StringLiteral_20227/*"limited_bg"*/, v7);
    byte_4185298 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)_4__this->fields.partyListMenu;
  if ( !this )
    goto LABEL_16;
  PartyListMenu__Close((PartyListMenu_o *)this, 0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_16;
  v10 = 0;
  v11 = 32LL;
  while ( 1 )
  {
    baseDeckItemList = v9->fields.baseDeckItemList;
    if ( !baseDeckItemList )
      goto LABEL_16;
    max_length = baseDeckItemList->max_length;
    if ( (int)v10 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_58;
    this = *(PartyOrganizationRootComponent___c__DisplayClass198_0_o **)((char *)&baseDeckItemList->obj.klass + v11);
    if ( !this )
      goto LABEL_16;
    waveBattleBaseDeckItemList = v9->fields.waveBattleBaseDeckItemList;
    this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)PartyListViewItem__Clone(
                                                                        (PartyListViewItem_o *)this,
                                                                        0LL);
    if ( !waveBattleBaseDeckItemList )
      goto LABEL_16;
    v15 = this;
    if ( this )
    {
      this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)sub_B2C41C(
                                                                          this,
                                                                          waveBattleBaseDeckItemList->obj.klass->_1.element_class);
      if ( !this )
      {
        v36 = sub_B2C454();
        sub_B2C400(v36, 0LL);
      }
    }
    if ( v10 >= waveBattleBaseDeckItemList->max_length )
      goto LABEL_58;
    *(Il2CppClass **)((char *)&waveBattleBaseDeckItemList->obj.klass + v11) = (Il2CppClass *)v15;
    sub_B2C2F8((char *)waveBattleBaseDeckItemList + v11, v15);
    v9 = v2->fields.__4__this;
    ++v10;
    v11 += 8LL;
    if ( !v9 )
      goto LABEL_16;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)NetworkManager__get_UserId(0LL);
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_16;
  v18 = this;
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)v17->fields.battleSetupInfo;
  if ( !this )
    goto LABEL_16;
  monitor_high = HIDWORD(this[2].monitor);
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)BattleSetupInfo__TargetQuestId(
                                                                      (BattleSetupInfo_o *)this,
                                                                      0LL);
  v20 = v2->fields.__4__this;
  if ( !v20 )
    goto LABEL_16;
  battleSetupInfo = v20->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_16;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)UserEventDeckMaster__getDeckList(
                                                                      Master_WarQuestSelectionMaster,
                                                                      (int64_t)v18,
                                                                      monitor_high,
                                                                      (int32_t)this,
                                                                      battleSetupInfo->fields.questPhase,
                                                                      0LL);
  if ( !this )
    goto LABEL_16;
  if ( !LODWORD(this->fields.item) )
  {
LABEL_58:
    v35 = sub_B2C460(this);
    sub_B2C400(v35, 0LL);
  }
  klass = (UserEventDeckEntity_o *)this[1].klass;
  if ( klass )
  {
    deckInfo = klass->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_16;
    this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)BasicHelper__IsNullOrEmpty(
                                                                        (System_Collections_ICollection_o *)deckInfo->fields.waveSvts,
                                                                        0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v24 = v2->fields.__4__this;
      if ( !v24 )
        goto LABEL_16;
      this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)v24->fields.waveBattlePartyOrganizationMenu;
      if ( !this )
        goto LABEL_16;
      WaveBattlePartyOrganizationMenu__UpdateInfo((WaveBattlePartyOrganizationMenu_o *)this, klass, 0LL);
    }
  }
  v25 = v2->fields.__4__this;
  if ( !v25 )
    goto LABEL_16;
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)v25->fields.waveBattlePartyOrganizationMenu;
  if ( !this )
    goto LABEL_16;
  WaveBattlePartyOrganizationMenu__Display((WaveBattlePartyOrganizationMenu_o *)this, 0LL);
  v26 = v2->fields.__4__this;
  if ( !v26 )
    goto LABEL_16;
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)v2->fields.item;
  if ( !this )
    goto LABEL_16;
  waveBattlePartyOrganizationMenu = v26->fields.waveBattlePartyOrganizationMenu;
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)PartyListViewItem__get_DeckNum(
                                                                      (PartyListViewItem_o *)this,
                                                                      0LL);
  if ( !waveBattlePartyOrganizationMenu )
    goto LABEL_16;
  WaveBattlePartyOrganizationMenu__SetWave(waveBattlePartyOrganizationMenu, (int32_t)this, 0LL);
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = (CommonUI_o *)this;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v28 )
    goto LABEL_16;
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)CommonUI__maskFadein(
                                                                      v28,
                                                                      AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME,
                                                                      0LL,
                                                                      0LL);
  v29 = v2->fields.__4__this;
  if ( !v29 )
    goto LABEL_16;
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)v29->fields.partyListMenu;
  if ( !this )
    goto LABEL_16;
  PartyListMenu__Init((PartyListMenu_o *)this, 0LL);
  v30 = v2->fields.__4__this;
  if ( !v30 )
    goto LABEL_16;
  v30->fields.menuMode = v30->fields.mainMenuMode;
  v31 = v2->fields.__4__this;
  if ( !v31 )
    goto LABEL_16;
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)v31->fields.waveBattlePartyOrganizationIndicator;
  if ( !this )
    goto LABEL_16;
  PartyEventPointIndicator__SetUnknown((PartyEventPointIndicator_o *)this, 0LL);
  v32 = v2->fields.__4__this;
  if ( !v32 )
    goto LABEL_16;
  this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)v32->fields.waveBattlePartyOrganizationIndicator;
  if ( !this
    || (PartyEventPointIndicator__SetTotalDropItemList((PartyEventPointIndicator_o *)this, 0LL, 0LL),
        (v33 = v2->fields.__4__this) == 0LL)
    || (this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)v33->fields.waveBattlePartyOrganizationFixSprite) == 0LL
    || (this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v34 = v2->fields.__4__this) == 0LL)
    || (this = (PartyOrganizationRootComponent___c__DisplayClass198_0_o *)v34->fields.waveBattlePartyOrganizationFixSprite) == 0LL )
  {
LABEL_16:
    sub_B2C434(this, method);
  }
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20227/*"limited_bg"*/, 0LL);
}


void __fastcall PartyOrganizationRootComponent___c__DisplayClass202_0___ctor(
        PartyOrganizationRootComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent___c__DisplayClass202_0___CtrlMyServantOrNpc_b__0(
        PartyOrganizationRootComponent___c__DisplayClass202_0_o *this,
        int32_t buttonResult,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent___c__DisplayClass202_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct PartyOrganizationRootComponent_o *v7; // x8
  struct PartyOrganizationRootComponent_o *v8; // x8
  struct PartyOrganizationRootComponent_o *v9; // x8
  struct PartyOrganizationRootComponent_o *_4__this; // x8
  struct PartyOrganizationRootComponent_o *v11; // x8
  struct PartyOrganizationRootComponent_o *v12; // x8
  struct PartyOrganizationRootComponent_o *v13; // x8

  v4 = this;
  if ( (byte_4185299 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, *(_QWORD *)&buttonResult);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5);
    this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)sub_B2C35C(&StringLiteral_3061/*"CLICK_FOLLOWER"*/, v6);
    byte_4185299 = 1;
  }
  if ( buttonResult )
  {
    if ( buttonResult == 1 )
    {
      this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_32;
      PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog((PartyOrganizationRootComponent_o *)this, 0LL);
      _4__this = v4->fields.__4__this;
      if ( !_4__this )
        goto LABEL_32;
      this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)_4__this->fields.partyListMenu;
      if ( !this )
        goto LABEL_32;
      PartyListMenu__SetCenterItem((PartyListMenu_o *)this, _4__this->fields.selectPartyNum, 0, 0LL);
      v11 = v4->fields.__4__this;
      if ( !v11 )
        goto LABEL_32;
      v11->fields.changePartyMode = 1;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_32;
      LODWORD(this[1].fields.__4__this) = v4->fields.pos;
      this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_32;
      HIDWORD(this[1].fields.__4__this) = v4->fields.initPos;
      this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_32;
      this[1].fields.pos = v4->fields.pos;
      v12 = v4->fields.__4__this;
      if ( !v12 )
        goto LABEL_32;
      this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)v12->fields.questRestrictionInfo;
      if ( !this )
        goto LABEL_32;
      QuestRestrictionInfo__SetDeckInfo_31220960(
        (QuestRestrictionInfo_o *)this,
        v12->fields.partyItem,
        v12->fields.selectPartyMemberNum,
        0LL);
      v13 = v4->fields.__4__this;
      if ( !v13 )
        goto LABEL_32;
      this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)v13->fields.myFSM;
      if ( !this )
        goto LABEL_32;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3061/*"CLICK_FOLLOWER"*/, 0LL);
    }
    else if ( buttonResult == 2 )
    {
      this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)v4->fields.__4__this;
      if ( this )
      {
        PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog((PartyOrganizationRootComponent_o *)this, 0LL);
        this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)v4->fields.__4__this;
        if ( this )
        {
          PartyOrganizationRootComponent__RecoverInputShowMenu((PartyOrganizationRootComponent_o *)this, 0LL);
          return;
        }
      }
LABEL_32:
      sub_B2C434(this, *(_QWORD *)&buttonResult);
    }
  }
  else
  {
    v7 = v4->fields.__4__this;
    if ( !v7 )
      goto LABEL_32;
    v7->fields.isSelectedServant = 1;
    this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)v4->fields.__4__this;
    if ( !this )
      goto LABEL_32;
    PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog((PartyOrganizationRootComponent_o *)this, 0LL);
    v8 = v4->fields.__4__this;
    if ( !v8 )
      goto LABEL_32;
    this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)v8->fields.partyListMenu;
    if ( !this )
      goto LABEL_32;
    PartyListMenu__SetCenterItem((PartyListMenu_o *)this, v8->fields.selectPartyNum, 0, 0LL);
    v9 = v4->fields.__4__this;
    if ( !v9 )
      goto LABEL_32;
    v9->fields.changePartyMode = 1;
    this = (PartyOrganizationRootComponent___c__DisplayClass202_0_o *)v4->fields.__4__this;
    if ( !this )
      goto LABEL_32;
    PartyOrganizationRootComponent__SendPlayMarkerEventForChange((PartyOrganizationRootComponent_o *)this, 0LL);
  }
}


void __fastcall PartyOrganizationRootComponent___c__DisplayClass236_0___ctor(
        PartyOrganizationRootComponent___c__DisplayClass236_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent___c__DisplayClass236_0___OnSelectedOrganizationChange_b__0(
        PartyOrganizationRootComponent___c__DisplayClass236_0_o *this,
        int32_t buttonResult,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  PartyOrganizationRootComponent_o *_4__this; // x0
  struct PartyOrganizationRootComponent_o *v11; // x8
  struct PartyOrganizationRootComponent_o *v12; // x8
  struct PartyOrganizationRootComponent_o *v13; // x8
  struct PartyOrganizationRootComponent_o *v14; // x8
  struct PartyOrganizationRootComponent_o *v15; // x8
  struct PartyOrganizationRootComponent_o *v16; // x27
  int32_t tutorialState; // w28
  PartyServantSelectMenu_o *partyServantSelectMenu; // x25
  PartyListViewItem_array *baseDeckItemList; // x24
  PartyListViewItem_o *partyItem; // x23
  int32_t selectPartyMemberNum; // w22
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  EventUpValSetupInfo_o *setupInfo2; // x21
  __int64 v24; // x26
  __int64 v25; // x9
  Il2CppObject *v26; // x27
  System_Action_o *openCallback; // x19

  if ( (byte_418529A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&buttonResult);
    sub_B2C35C(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectedOrganizationChangeServant__, v7);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v9);
    byte_418529A = 1;
  }
  if ( buttonResult )
  {
    if ( buttonResult == 1 )
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_40;
      PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog(_4__this, 0LL);
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_40;
      PartyOrganizationRootComponent__RecoverInputShowMenu(_4__this, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      _4__this = (PartyOrganizationRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_40;
      _4__this->fields.kind = this->fields.m + 1;
      _4__this = (PartyOrganizationRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_40;
      _4__this->fields.depth = this->fields.initPos;
      _4__this = (PartyOrganizationRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_40;
      LODWORD(_4__this->fields.backSkinSprite) = this->fields.m + 1;
      v11 = this->fields.__4__this;
      if ( !v11 )
        goto LABEL_40;
      _4__this = (PartyOrganizationRootComponent_o *)v11->fields.questRestrictionInfo;
      if ( !_4__this )
        goto LABEL_40;
      QuestRestrictionInfo__SetDeckInfo_31220960(
        (QuestRestrictionInfo_o *)_4__this,
        v11->fields.partyItem,
        v11->fields.selectPartyMemberNum,
        0LL);
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_40;
      PartyOrganizationRootComponent__FollowerScene(_4__this, 0LL);
    }
    else if ( buttonResult == 2 )
    {
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog(_4__this, 0LL);
        _4__this = this->fields.__4__this;
        if ( _4__this )
        {
          PartyOrganizationRootComponent__RecoverInputShowMenu(_4__this, 0LL);
          return;
        }
      }
LABEL_40:
      sub_B2C434(_4__this, *(_QWORD *)&buttonResult);
    }
  }
  else
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_40;
    PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog(_4__this, 0LL);
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_40;
    v12->fields.state = 18;
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)v13->fields.titleInfo;
    if ( !_4__this )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)_4__this,
                                                     0LL);
    if ( !_4__this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)v14->fields.titleInfo2;
    if ( !_4__this )
      goto LABEL_40;
    TitleInfoControl__setTitleInfo_19532804((TitleInfoControl_o *)_4__this, v14->fields.myFSM, 2, 70, 0LL);
    v15 = this->fields.__4__this;
    if ( !v15 )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)v15->fields.backSkinSprite;
    if ( !_4__this )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)_4__this,
                                                     0LL);
    if ( !_4__this )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)_4__this,
                                                     0LL);
    if ( !_4__this )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)UnityEngine_Transform__get_parent(
                                                     (UnityEngine_Transform_o *)_4__this,
                                                     0LL);
    if ( !_4__this )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)_4__this,
                                                     0LL);
    if ( !_4__this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
    v16 = this->fields.__4__this;
    if ( !v16 )
      goto LABEL_40;
    tutorialState = v16->fields.tutorialState;
    partyServantSelectMenu = v16->fields.partyServantSelectMenu;
    baseDeckItemList = v16->fields.baseDeckItemList;
    partyItem = v16->fields.partyItem;
    selectPartyMemberNum = v16->fields.selectPartyMemberNum;
    setupInfo2 = v16->fields.setupInfo2;
    questRestrictionInfo = v16->fields.questRestrictionInfo;
    v24 = sub_B2C42C(PartyServantSelectMenu_CallbackFunc_TypeInfo);
    v25 = *(_QWORD *)Method_PartyOrganizationRootComponent_EndSelectedOrganizationChangeServant__;
    *(_QWORD *)(v24 + 40) = Method_PartyOrganizationRootComponent_EndSelectedOrganizationChangeServant__;
    *(_QWORD *)(v24 + 16) = v25;
    *(_QWORD *)(v24 + 32) = v16;
    sub_B2C2F8(v24 + 32, v16);
    v26 = (Il2CppObject *)this->fields.__4__this;
    openCallback = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      openCallback,
      v26,
      Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__,
      0LL);
    if ( !partyServantSelectMenu )
      goto LABEL_40;
    if ( tutorialState == 2 )
      PartyServantSelectMenu__Open(
        partyServantSelectMenu,
        baseDeckItemList,
        partyItem,
        selectPartyMemberNum,
        1,
        setupInfo2,
        questRestrictionInfo,
        (PartyServantSelectMenu_CallbackFunc_o *)v24,
        openCallback,
        0LL);
    else
      PartyServantSelectMenu__Open(
        partyServantSelectMenu,
        baseDeckItemList,
        partyItem,
        selectPartyMemberNum,
        0,
        setupInfo2,
        questRestrictionInfo,
        (PartyServantSelectMenu_CallbackFunc_o *)v24,
        openCallback,
        0LL);
  }
}


void __fastcall PartyOrganizationRootComponent___c__DisplayClass243_0___ctor(
        PartyOrganizationRootComponent___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent___c__DisplayClass243_0___OnSelectedOrganizationSwap_b__0(
        PartyOrganizationRootComponent___c__DisplayClass243_0_o *this,
        int32_t buttonResult,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  PartyOrganizationRootComponent_o *_4__this; // x0
  struct PartyOrganizationRootComponent_o *v11; // x8
  struct PartyOrganizationRootComponent_o *v12; // x8
  struct PartyOrganizationRootComponent_o *v13; // x8
  struct PartyOrganizationRootComponent_o *v14; // x8
  struct PartyOrganizationRootComponent_o *v15; // x8
  struct PartyOrganizationRootComponent_o *v16; // x27
  int32_t tutorialState; // w28
  PartyServantSelectMenu_o *partyServantSelectMenu; // x25
  PartyListViewItem_array *baseDeckItemList; // x24
  PartyListViewItem_o *partyItem; // x23
  int32_t selectPartyMemberNum; // w22
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  EventUpValSetupInfo_o *setupInfo2; // x21
  __int64 v24; // x26
  __int64 v25; // x9
  Il2CppObject *v26; // x27
  System_Action_o *openCallback; // x19

  if ( (byte_418529B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&buttonResult);
    sub_B2C35C(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__, v7);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v9);
    byte_418529B = 1;
  }
  if ( buttonResult )
  {
    if ( buttonResult == 1 )
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_40;
      PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog(_4__this, 0LL);
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_40;
      PartyOrganizationRootComponent__RecoverInputShowMenu(_4__this, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      _4__this = (PartyOrganizationRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_40;
      _4__this->fields.kind = this->fields.m + 1;
      _4__this = (PartyOrganizationRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_40;
      _4__this->fields.depth = this->fields.initPos;
      _4__this = (PartyOrganizationRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_40;
      LODWORD(_4__this->fields.backSkinSprite) = this->fields.m + 1;
      v11 = this->fields.__4__this;
      if ( !v11 )
        goto LABEL_40;
      _4__this = (PartyOrganizationRootComponent_o *)v11->fields.questRestrictionInfo;
      if ( !_4__this )
        goto LABEL_40;
      QuestRestrictionInfo__SetDeckInfo_31220960(
        (QuestRestrictionInfo_o *)_4__this,
        v11->fields.partyItem,
        v11->fields.selectPartyMemberNum,
        0LL);
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_40;
      PartyOrganizationRootComponent__FollowerScene(_4__this, 0LL);
    }
    else if ( buttonResult == 2 )
    {
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog(_4__this, 0LL);
        _4__this = this->fields.__4__this;
        if ( _4__this )
        {
          PartyOrganizationRootComponent__RecoverInputShowMenu(_4__this, 0LL);
          return;
        }
      }
LABEL_40:
      sub_B2C434(_4__this, *(_QWORD *)&buttonResult);
    }
  }
  else
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_40;
    PartyOrganizationRootComponent__CloseSelectMyServantOrNpcDialog(_4__this, 0LL);
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_40;
    v12->fields.state = 18;
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)v13->fields.titleInfo;
    if ( !_4__this )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)_4__this,
                                                     0LL);
    if ( !_4__this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)v14->fields.titleInfo2;
    if ( !_4__this )
      goto LABEL_40;
    TitleInfoControl__setTitleInfo_19532804((TitleInfoControl_o *)_4__this, v14->fields.myFSM, 2, 70, 0LL);
    v15 = this->fields.__4__this;
    if ( !v15 )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)v15->fields.backSkinSprite;
    if ( !_4__this )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)_4__this,
                                                     0LL);
    if ( !_4__this )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)_4__this,
                                                     0LL);
    if ( !_4__this )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)UnityEngine_Transform__get_parent(
                                                     (UnityEngine_Transform_o *)_4__this,
                                                     0LL);
    if ( !_4__this )
      goto LABEL_40;
    _4__this = (PartyOrganizationRootComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)_4__this,
                                                     0LL);
    if ( !_4__this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
    v16 = this->fields.__4__this;
    if ( !v16 )
      goto LABEL_40;
    tutorialState = v16->fields.tutorialState;
    partyServantSelectMenu = v16->fields.partyServantSelectMenu;
    baseDeckItemList = v16->fields.baseDeckItemList;
    partyItem = v16->fields.partyItem;
    selectPartyMemberNum = v16->fields.selectPartyMemberNum;
    setupInfo2 = v16->fields.setupInfo2;
    questRestrictionInfo = v16->fields.questRestrictionInfo;
    v24 = sub_B2C42C(PartyServantSelectMenu_CallbackFunc_TypeInfo);
    v25 = *(_QWORD *)Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__;
    *(_QWORD *)(v24 + 40) = Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__;
    *(_QWORD *)(v24 + 16) = v25;
    *(_QWORD *)(v24 + 32) = v16;
    sub_B2C2F8(v24 + 32, v16);
    v26 = (Il2CppObject *)this->fields.__4__this;
    openCallback = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      openCallback,
      v26,
      Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__,
      0LL);
    if ( !partyServantSelectMenu )
      goto LABEL_40;
    if ( tutorialState == 2 )
      PartyServantSelectMenu__Open(
        partyServantSelectMenu,
        baseDeckItemList,
        partyItem,
        selectPartyMemberNum,
        1,
        setupInfo2,
        questRestrictionInfo,
        (PartyServantSelectMenu_CallbackFunc_o *)v24,
        openCallback,
        0LL);
    else
      PartyServantSelectMenu__Open(
        partyServantSelectMenu,
        baseDeckItemList,
        partyItem,
        selectPartyMemberNum,
        0,
        setupInfo2,
        questRestrictionInfo,
        (PartyServantSelectMenu_CallbackFunc_o *)v24,
        openCallback,
        0LL);
  }
}


void __fastcall PartyOrganizationRootComponent___c__DisplayClass244_0___ctor(
        PartyOrganizationRootComponent___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PartyOrganizationRootComponent___c__DisplayClass244_0___EndSelectedOrganizationSwapServant_b__0(
        PartyOrganizationRootComponent___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationRootComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (PartyOrganizationRootComponent___c__DisplayClass244_0_o *)_4__this->fields.titleInfo) == 0LL
    || (this = (PartyOrganizationRootComponent___c__DisplayClass244_0_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL)) == 0LL )
  {
    sub_B2C434(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent___c__DisplayClass244_0___EndSelectedOrganizationSwapServant_b__1(
        PartyOrganizationRootComponent___c__DisplayClass244_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PartyOrganizationRootComponent_o *_4__this; // x0
  struct PartyOrganizationRootComponent_o *v10; // x8
  struct PartyOrganizationRootComponent_o *v11; // x27
  PartyServantSelectMenu_o *partyServantSelectMenu; // x22
  PartyListViewItem_array *baseDeckItemList; // x23
  PartyListViewItem_o *partyItem; // x24
  int32_t selectPartyMemberNum; // w25
  EventUpValSetupInfo_o *setupInfo2; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  __int64 v18; // x26
  __int64 v19; // x9
  Il2CppObject *v20; // x27
  System_Action_o *openCallback; // x19

  if ( (byte_418529C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_418529C = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      PartyOrganizationRootComponent__ExecutionServantSet(_4__this, this->fields.result, this->fields.item, 0LL);
      _4__this = (PartyOrganizationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( _4__this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B2C434(_4__this, isDecide);
  }
  _4__this = (PartyOrganizationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_12;
  v10->fields.state = 18;
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_12;
  partyServantSelectMenu = v11->fields.partyServantSelectMenu;
  baseDeckItemList = v11->fields.baseDeckItemList;
  partyItem = v11->fields.partyItem;
  selectPartyMemberNum = v11->fields.selectPartyMemberNum;
  setupInfo2 = v11->fields.setupInfo2;
  questRestrictionInfo = v11->fields.questRestrictionInfo;
  v18 = sub_B2C42C(PartyServantSelectMenu_CallbackFunc_TypeInfo);
  v19 = *(_QWORD *)Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__;
  *(_QWORD *)(v18 + 40) = Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__;
  *(_QWORD *)(v18 + 16) = v19;
  *(_QWORD *)(v18 + 32) = v11;
  sub_B2C2F8(v18 + 32, v11);
  v20 = (Il2CppObject *)this->fields.__4__this;
  openCallback = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(openCallback, v20, Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__, 0LL);
  if ( !partyServantSelectMenu )
    goto LABEL_12;
  PartyServantSelectMenu__Open(
    partyServantSelectMenu,
    baseDeckItemList,
    partyItem,
    selectPartyMemberNum,
    0,
    setupInfo2,
    questRestrictionInfo,
    (PartyServantSelectMenu_CallbackFunc_o *)v18,
    openCallback,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent___c__DisplayClass244_0___EndSelectedOrganizationSwapServant_b__2(
        PartyOrganizationRootComponent___c__DisplayClass244_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PartyOrganizationRootComponent_o *_4__this; // x0
  struct PartyOrganizationRootComponent_o *v10; // x8
  struct PartyOrganizationRootComponent_o *v11; // x27
  PartyServantSelectMenu_o *partyServantSelectMenu; // x22
  PartyListViewItem_array *waveBattleDeckItemList; // x23
  PartyListViewItem_o *partyItem; // x24
  int32_t selectPartyMemberNum; // w25
  EventUpValSetupInfo_o *setupInfo2; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  __int64 v18; // x26
  __int64 v19; // x9
  Il2CppObject *v20; // x27
  System_Action_o *openCallback; // x19

  if ( (byte_418529E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__, v6);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_418529E = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      PartyOrganizationRootComponent__ExecutionServantSet(_4__this, this->fields.result, this->fields.item, 0LL);
      _4__this = (PartyOrganizationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( _4__this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B2C434(_4__this, isDecide);
  }
  _4__this = (PartyOrganizationRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_12;
  v10->fields.state = 18;
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_12;
  partyServantSelectMenu = v11->fields.partyServantSelectMenu;
  waveBattleDeckItemList = v11->fields.waveBattleDeckItemList;
  partyItem = v11->fields.partyItem;
  selectPartyMemberNum = v11->fields.selectPartyMemberNum;
  setupInfo2 = v11->fields.setupInfo2;
  questRestrictionInfo = v11->fields.questRestrictionInfo;
  v18 = sub_B2C42C(PartyServantSelectMenu_CallbackFunc_TypeInfo);
  v19 = *(_QWORD *)Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__;
  *(_QWORD *)(v18 + 40) = Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__;
  *(_QWORD *)(v18 + 16) = v19;
  *(_QWORD *)(v18 + 32) = v11;
  sub_B2C2F8(v18 + 32, v11);
  v20 = (Il2CppObject *)this->fields.__4__this;
  openCallback = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(openCallback, v20, Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__, 0LL);
  if ( !partyServantSelectMenu )
    goto LABEL_12;
  PartyServantSelectMenu__Open(
    partyServantSelectMenu,
    waveBattleDeckItemList,
    partyItem,
    selectPartyMemberNum,
    0,
    setupInfo2,
    questRestrictionInfo,
    (PartyServantSelectMenu_CallbackFunc_o *)v18,
    openCallback,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent___c__DisplayClass244_0___EndSelectedOrganizationSwapServant_b__3(
        PartyOrganizationRootComponent___c__DisplayClass244_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  struct PartyOrganizationRootComponent_o *_4__this; // x8
  struct PartyOrganizationRootComponent_o *v11; // x27
  PartyServantSelectMenu_o *partyServantSelectMenu; // x22
  PartyListViewItem_array *waveBattleDeckItemList; // x23
  PartyListViewItem_o *partyItem; // x24
  int32_t selectPartyMemberNum; // w25
  EventUpValSetupInfo_o *setupInfo2; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  __int64 v18; // x26
  __int64 v19; // x9
  Il2CppObject *v20; // x27
  System_Action_o *openCallback; // x19

  if ( (byte_418529D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&PartyServantSelectMenu_CallbackFunc_TypeInfo, v4);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__, v5);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_418529D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  _4__this->fields.state = 18;
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_8;
  partyServantSelectMenu = v11->fields.partyServantSelectMenu;
  waveBattleDeckItemList = v11->fields.waveBattleDeckItemList;
  partyItem = v11->fields.partyItem;
  selectPartyMemberNum = v11->fields.selectPartyMemberNum;
  setupInfo2 = v11->fields.setupInfo2;
  questRestrictionInfo = v11->fields.questRestrictionInfo;
  v18 = sub_B2C42C(PartyServantSelectMenu_CallbackFunc_TypeInfo);
  v19 = *(_QWORD *)Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__;
  *(_QWORD *)(v18 + 40) = Method_PartyOrganizationRootComponent_EndSelectedOrganizationSwapServant__;
  *(_QWORD *)(v18 + 16) = v19;
  *(_QWORD *)(v18 + 32) = v11;
  sub_B2C2F8(v18 + 32, v11);
  v20 = (Il2CppObject *)this->fields.__4__this;
  openCallback = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(openCallback, v20, Method_PartyOrganizationRootComponent_EndOpenOrganizationChangeServant__, 0LL);
  if ( !partyServantSelectMenu )
LABEL_8:
    sub_B2C434(Instance, v9);
  PartyServantSelectMenu__Open(
    partyServantSelectMenu,
    waveBattleDeckItemList,
    partyItem,
    selectPartyMemberNum,
    0,
    setupInfo2,
    questRestrictionInfo,
    (PartyServantSelectMenu_CallbackFunc_o *)v18,
    openCallback,
    0LL);
}


void __fastcall PartyOrganizationRootComponent___c__DisplayClass246_0___ctor(
        PartyOrganizationRootComponent___c__DisplayClass246_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRootComponent___c__DisplayClass246_0___EndSelectOrganizationSwapServantEquip_b__0(
        PartyOrganizationRootComponent___c__DisplayClass246_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationRootComponent___c__DisplayClass246_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct PartyOrganizationRootComponent_o *_4__this; // x8
  struct PartyOrganizationRootComponent_o *v8; // x8
  struct PartyOrganizationRootComponent_o *v9; // x8
  struct PartyOrganizationRootComponent_o *v10; // x25
  PartyListViewItem_array *waveBattleDeckItemList; // x20
  PartyListViewItem_o *partyItem; // x21
  int32_t selectPartyMemberNum; // w22
  EventUpValSetupInfo_o *setupInfo2; // x23
  CommonUI_o *v15; // x19
  EquipGraphListMenu_CallbackFunc_o *v16; // x24

  v4 = this;
  if ( (byte_418529F & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_PartyOrganizationRootComponent_EndSelectOrganizationSwapServantEquip__, v5);
    this = (PartyOrganizationRootComponent___c__DisplayClass246_0_o *)sub_B2C35C(
                                                                        &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                        v6);
    byte_418529F = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( _4__this )
    {
      this = (PartyOrganizationRootComponent___c__DisplayClass246_0_o *)_4__this->fields.partyItem;
      if ( this )
      {
        PartyListViewItem__SetEquip(
          (PartyListViewItem_o *)this,
          _4__this->fields.selectPartyMemberNum,
          v4->fields.equipUserSvtId,
          0LL);
        v8 = v4->fields.__4__this;
        if ( v8 )
        {
          v8->fields.state = 15;
          this = (PartyOrganizationRootComponent___c__DisplayClass246_0_o *)v4->fields.__4__this;
          if ( this )
          {
            PartyOrganizationRootComponent__RecoverInputShowMenu((PartyOrganizationRootComponent_o *)this, 0LL);
            this = (PartyOrganizationRootComponent___c__DisplayClass246_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( this )
            {
              CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_B2C434(this, isDecide);
  }
  this = (PartyOrganizationRootComponent___c__DisplayClass246_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_16;
  v9->fields.state = 20;
  this = (PartyOrganizationRootComponent___c__DisplayClass246_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_16;
  PartyOrganizationRootComponent__SetWaveBattleDeckItemList((PartyOrganizationRootComponent_o *)this, 0LL);
  this = (PartyOrganizationRootComponent___c__DisplayClass246_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  waveBattleDeckItemList = v10->fields.waveBattleDeckItemList;
  partyItem = v10->fields.partyItem;
  selectPartyMemberNum = v10->fields.selectPartyMemberNum;
  setupInfo2 = v10->fields.setupInfo2;
  v15 = (CommonUI_o *)this;
  v16 = (EquipGraphListMenu_CallbackFunc_o *)sub_B2C42C(EquipGraphListMenu_CallbackFunc_TypeInfo);
  EquipGraphListMenu_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)v10,
    Method_PartyOrganizationRootComponent_EndSelectOrganizationSwapServantEquip__,
    0LL);
  if ( !v15 )
    goto LABEL_16;
  CommonUI__OpenEquipGraphListMenu(v15, waveBattleDeckItemList, partyItem, selectPartyMemberNum, setupInfo2, v16, 0LL);
}