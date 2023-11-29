// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListViewItem___ctor(
        SupportServantEquipListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        int64_t oldTargetSvtEquipId,
        System_Int64_array *useSvtEquipList,
        UserServantEntity_o *equippedUserSvtEntity,
        EventUpValSetupInfo_o *eventSetupInfo,
        SupportServantData_array *supportServantData,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        bool isFixMainDeck,
        bool isFixEventDeck,
        const MethodInfo *method)
{
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  IconLabelInfo_o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  IconLabelInfo_o *v41; // x25
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct UserServantEntity_o **p_equippedUserSvtEntity; // x23
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v71; // x27
  __int64 v72; // x25
  __int64 v73; // x28
  int32_t v74; // w0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  WebViewManager_o *v83; // x0
  WarQuestSelectionMaster_o *v84; // x0
  ServantLimitMaster_o *v85; // x28
  int32_t v86; // w0
  int32_t v87; // w25
  int32_t v88; // w0
  ServantLimitEntity_o *v89; // x0
  __int128 v90; // q1
  __int128 v91; // q0
  unsigned int v92; // w21
  __int128 v93; // q0
  int64_t v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x8
  UserServantEntity_o *v98; // x0
  bool IsChoice; // w0
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v101; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // q0
  int64_t v103; // x8
  UserServantEntity_o *v104; // x0
  bool IsFriendShipSvtEquip; // w0
  UserServantEntity_o *v106; // x8
  bool IsChocolateSvtEquip; // w0
  struct UserServantEntity_o *v108; // x8
  __int64 v109; // x24
  __int64 v110; // x25
  clsQuestCheck_o *v111; // x0
  struct UserServantEntity_o *v112; // x8
  PartyOrganizationUtility_o *v113; // x24
  __int64 v114; // x25
  __int64 v115; // x26
  int32_t v116; // w0
  UserServantEntity_o *v117; // x8
  int32_t v118; // w23
  int32_t Rarity; // w0
  __int64 v120; // x8
  int32_t v121; // w20
  int32_t v122; // w0
  struct System_Int32_array *EquipCategoryIdList; // x0
  BattleServantConfConponent_o *p_categoryIdList; // x19
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  IconLabelInfo_o *monitor; // x0
  IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+BCh] [xbp-64h] BYREF
  System_String_o *skillName; // [xsp+C0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16

  if ( (byte_40FD2BD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v24);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v29);
    byte_40FD2BD = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v30 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userSvtEntity,
                             targetSvtEquipId,
                             oldTargetSvtEquipId);
  IconLabelInfo___ctor(v30, 0LL);
  this->fields.iconLabelInfo1 = v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v41 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v37, v38, v39, v40);
  IconLabelInfo___ctor(v41, 0LL);
  this->fields.iconLabelInfo2 = v41;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventSetupInfo,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.equippedUserSvtEntity = equippedUserSvtEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equippedUserSvtEntity,
    (System_Int32_array **)equippedUserSvtEntity,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v70 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  v71 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v73 = *(_QWORD *)&v70[5].fields.currentCryptoKey;
  v72 = *(_QWORD *)&v70[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v141.fields.currentCryptoKey = v73;
  *(_QWORD *)&v141.fields.fakeValue = v72;
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v141, 0LL);
  if ( !v71 )
    goto LABEL_64;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v71,
                                       v74,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  v83 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v83 )
    goto LABEL_64;
  v84 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v83,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  v85 = (ServantLimitMaster_o *)v84;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  v87 = v86;
  v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[6], 0LL);
  if ( !v85 )
    goto LABEL_64;
  v89 = ServantLimitMaster__GetEntity(v85, v87, v88, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_64;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !v89 )
    goto LABEL_64;
  this->fields.rarity = v89->fields.rarity;
  if ( !userSvtEntity )
    goto LABEL_64;
  v90 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v138.fields.fakeValue = v90;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v137 = v138;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v137, 0LL) == targetSvtEquipId )
  {
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    *(_WORD *)&this->fields.isBase = 0;
    v91 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v138.fields.fakeValue = v91;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v136 = v138;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v136, 0LL) != oldTargetSvtEquipId )
    {
      if ( !useSvtEquipList )
        goto LABEL_64;
      if ( (int)useSvtEquipList->max_length >= 1 )
      {
        v92 = 0;
        while ( 1 )
        {
          v93 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v138.fields.fakeValue = v93;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v135 = v138;
          v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v135, 0LL);
          v97 = *(_QWORD *)&useSvtEquipList->max_length;
          if ( v92 >= (unsigned int)v97 )
          {
            sub_B17100(v94, v95, v96);
            sub_B170A0();
          }
          if ( v94 == useSvtEquipList->m_Items[v92] )
            break;
          if ( (int)++v92 >= (int)v97 )
            goto LABEL_36;
        }
        this->fields.isUse = 1;
      }
    }
  }
LABEL_36:
  v98 = this->fields.userSvtEntity;
  this->fields.isOldBase = this->fields.isBase;
  if ( !v98 )
    goto LABEL_64;
  this->fields.isLock = UserServantEntity__IsLock(v98, 0LL);
  if ( !this->fields.userSvtEntity )
    goto LABEL_64;
  IsChoice = UserServantEntity__IsChoice(this->fields.userSvtEntity, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChoice = IsChoice;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !servantEntity )
    goto LABEL_64;
  v101 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v101[16].fields.currentCryptoKey;
  v102 = v101[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v138.fields.currentCryptoKey = v101[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v138.fields.fakeValue = v102;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v134 = v138;
  v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v134, 0LL);
  v104 = this->fields.userSvtEntity;
  this->fields.sortValue2B = v103;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !v104 )
    goto LABEL_64;
  IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip(v104, 0LL);
  v106 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = IsFriendShipSvtEquip;
  if ( !v106 )
    goto LABEL_64;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v106, 0LL);
  v108 = this->fields.equippedUserSvtEntity;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( v108 )
  {
    v110 = *(_QWORD *)&v108->fields.svtId.fields.currentCryptoKey;
    v109 = *(_QWORD *)&v108->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v142.fields.currentCryptoKey = v110;
    *(_QWORD *)&v142.fields.fakeValue = v109;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v142, 0LL) >= 1 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v111 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v112 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v113 = (PartyOrganizationUtility_o *)v111;
        v115 = *(_QWORD *)&v112->fields.svtId.fields.currentCryptoKey;
        v114 = *(_QWORD *)&v112->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v143.fields.currentCryptoKey = v115;
        *(_QWORD *)&v143.fields.fakeValue = v114;
        v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v143, 0LL);
        v117 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v118 = v116;
          Rarity = UserServantEntity__getRarity(v117, 0LL);
          v120 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          *(_QWORD *)&v144.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          v121 = Rarity;
          *(_QWORD *)&v144.fields.currentCryptoKey = v120;
          v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v144, 0LL);
          if ( v113 )
          {
            this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                             v113,
                                             &skillName,
                                             &actMaxRarity,
                                             v118,
                                             v121,
                                             v122,
                                             -1,
                                             0LL);
            goto LABEL_60;
          }
        }
      }
LABEL_64:
      sub_B170D4();
    }
  }
LABEL_60:
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)*p_userSvtEntity, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (BattleServantConfConponent_o *)&this->fields.categoryIdList;
  sub_B16F98(p_categoryIdList, (System_Int32_array **)EquipCategoryIdList, v125, v126, v127, v128, v129, v130);
  monitor = (IconLabelInfo_o *)p_categoryIdList->monitor;
  if ( !monitor )
    goto LABEL_64;
  IconLabelInfo__Clear(monitor, 0LL);
  if ( !*p_iconLabelInfo2 )
    goto LABEL_64;
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
}


void __fastcall SupportServantEquipListViewItem__Finalize(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall SupportServantEquipListViewItem__GetNpInfo(
        SupportServantEquipListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FD2C2 & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_40FD2C2 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v9 = (TreasureDvcInfo_o *)sub_B170CC(TreasureDvcInfo_TypeInfo, tdInfo, method, v3, v4);
  TreasureDvcInfo___ctor(v9, 0LL);
  *tdInfo = v9;
  sub_B16F98((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  return 0;
}


bool __fastcall SupportServantEquipListViewItem__IsMatchFilter(
        SupportServantEquipListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return this->fields.isBase || SupportServantEquipListViewItem__IsMatchServantEquipFilter(this, sort, method);
}


bool __fastcall SupportServantEquipListViewItem__IsMatchServantEquipFilter(
        SupportServantEquipListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantEquipTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  ListViewSort_FilterKind_array *v14; // x0
  __int64 v15; // x2

  if ( (byte_40FD2C0 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40FD2C0 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_25;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          RarityFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_25;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v10 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ServantEquipTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v10->static_fields->ServantEquipTypeFilterKindList;
  if ( !ServantEquipTypeFilterKindList )
LABEL_25:
    sub_B170D4();
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ServantEquipTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v14 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v13);
  if ( !v14 )
    goto LABEL_25;
  if ( !v14->max_length )
  {
    sub_B17100(v14, v14, v15);
    sub_B170A0();
  }
  v14->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields.isSwapChoice == this->fields.isChoice;
}


void __fastcall SupportServantEquipListViewItem__Modify(
        SupportServantEquipListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  SupportServantEquipListViewItem__ModifyItem(this, userSvtEntity, targetSvtEquipId, method);
  SupportServantEquipListViewItem__ModifyLockItem(this, v5);
  SupportServantEquipListViewItem__ModifyChoiceItem(this, v6);
}


void __fastcall SupportServantEquipListViewItem__ModifyChoiceItem(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
  this->fields.isChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall SupportServantEquipListViewItem__ModifyItem(
        SupportServantEquipListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        int64_t targetSvtEquipId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v19; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x23
  __int64 v21; // x24
  __int64 v22; // x25
  int32_t v23; // w0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WebViewManager_o *v32; // x0
  WarQuestSelectionMaster_o *v33; // x0
  ServantLimitMaster_o *v34; // x24
  int32_t v35; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v36; // x8
  int32_t v37; // w22
  int32_t v38; // w0
  ServantLimitEntity_o *v39; // x0
  __int128 v40; // q1
  int64_t v41; // x0
  int64_t rarity; // x9
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_40FD2BE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, userSvtEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FD2BE = 1;
  }
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    (System_String_array **)targetSvtEquipId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_21;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v22 = *(_QWORD *)&v19[5].fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v22;
  *(_QWORD *)&v46.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46, 0LL);
  if ( !v20 )
    goto LABEL_21;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v20,
                                       v23,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v32 )
    goto LABEL_21;
  v33 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v32,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_21;
  v34 = (ServantLimitMaster_o *)v33;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
  v36 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_21;
  v37 = v35;
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v36[6], 0LL);
  if ( !v34 )
    goto LABEL_21;
  v39 = ServantLimitMaster__GetEntity(v34, v37, v38, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_21;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !v39 )
    goto LABEL_21;
  this->fields.rarity = v39->fields.rarity;
  if ( !userSvtEntity )
    goto LABEL_21;
  v40 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v40;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v44 = v45;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v44, 0LL);
  rarity = this->fields.rarity;
  servantEntity = this->fields.servantEntity;
  this->fields.isBase = v41 == targetSvtEquipId;
  this->fields.isOldBase = v41 == targetSvtEquipId;
  this->fields.sortValue1B = rarity;
  if ( !servantEntity )
LABEL_21:
    sub_B170D4();
  this->fields.sortValue2 = servantEntity->fields.collectionNo;
}


void __fastcall SupportServantEquipListViewItem__ModifyLockItem(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B170D4();
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall SupportServantEquipListViewItem__SetSortValue(
        SupportServantEquipListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t *p_bonusKind2Id; // x8
  int32_t v8; // w5
  UserServantEntity_o *userSvtEntity; // x0
  bool EventUpVal_21445868; // w0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  IconLabelInfo_o *iconLabelInfo2; // x0
  bool result; // w0
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q1
  int64_t v17; // x0
  struct UserServantEntity_o *v18; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  struct UserServantEntity_o *v20; // x0
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *v22; // x0
  int64_t amountSortValue; // x0
  struct ListViewManager_o *manager; // x8
  __int64 v25; // x11
  struct ListViewManager_o *v26; // x20
  IconLabelInfo_o *v27; // x19
  struct UserServantEntity_o *v28; // x8
  IconLabelInfo_o *v29; // x0
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v32; // w1
  struct UserServantEntity_o *v33; // x8
  int32_t lv; // w20
  int32_t LevelMax; // w0
  struct UserServantEntity_o *v36; // x8
  __int64 v37; // x21
  __int64 v38; // x22
  int32_t v39; // w0
  struct ServantEntity_o *v40; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v42; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_40FD2BF & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B16FFC(&SupportServantEquipListViewManager_TypeInfo, v6);
    byte_40FD2BF = 1;
  }
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  if ( !sort )
LABEL_65:
    sub_B170D4();
  if ( sort->fields.isBonusKind && !this->fields.isBase && sort->fields.bonusKind2 == 1 )
  {
    if ( this->fields.bonusKind == 1 )
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
      if ( this->fields.bonusKindId == sort->fields.bonusKind2Id )
      {
        if ( !this->fields.isEventUpVal )
          return 0;
LABEL_14:
        if ( !this->fields.isInvalidRarity )
          goto LABEL_15;
        return 0;
      }
    }
    else
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
    }
    this->fields.bonusKind = 1;
    v8 = *p_bonusKind2Id;
    userSvtEntity = this->fields.userSvtEntity;
    this->fields.bonusKindId = *p_bonusKind2Id;
    if ( !userSvtEntity )
      goto LABEL_65;
    EventUpVal_21445868 = UserServantEntity__getEventUpVal_21445868(
                            userSvtEntity,
                            -1,
                            0,
                            0,
                            this->fields.eventSetupInfo,
                            v8,
                            0,
                            0LL);
    this->fields.isEventUpVal = EventUpVal_21445868;
    if ( !EventUpVal_21445868 )
      return 0;
    goto LABEL_14;
  }
LABEL_15:
  if ( (((__int64 (__fastcall *)(SupportServantEquipListViewItem_o *, ListViewSort_o *, void *))this->klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          this->klass[1]._1.image) & 1) == 0 )
    return 0;
  isSwapChoice = this->fields.isSwapChoice;
  isChoice = this->fields.isChoice;
  this->fields.sortValue0 = 0LL;
  if ( isSwapChoice != isChoice && sort->fields.isChoiceSort )
    this->fields.sortValue0 = 10LL;
  iconLabelInfo2 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_65;
  IconLabelInfo__Clear(iconLabelInfo2, 0LL);
  result = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v15 = this->fields.userSvtEntity;
      if ( !v15 )
        goto LABEL_65;
      v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v44.fields.fakeValue = v16;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v43 = v44;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v43, 0LL);
      v18 = this->fields.userSvtEntity;
      this->fields.sortValue1 = v17;
      if ( !v18 )
        goto LABEL_65;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      if ( !iconLabelInfo1 )
        goto LABEL_65;
      IconLabelInfo__SetTime(iconLabelInfo1, 49, v18->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_48;
    case 2:
      v20 = this->fields.userSvtEntity;
      this->fields.sortValue1 = this->fields.rarity;
      if ( !v20 )
        goto LABEL_65;
      goto LABEL_40;
    case 3:
      v20 = this->fields.userSvtEntity;
      if ( !v20 )
        goto LABEL_65;
      this->fields.sortValue1 = v20->fields.lv;
LABEL_40:
      v27 = this->fields.iconLabelInfo1;
      goto LABEL_50;
    case 5:
      v28 = this->fields.userSvtEntity;
      if ( !v28 )
        goto LABEL_65;
      v29 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v28->fields.hp;
      if ( !v29 )
        goto LABEL_65;
      adjustHp = v28->fields.adjustHp;
      hp = v28->fields.hp;
      v32 = 3;
      goto LABEL_47;
    case 6:
      v33 = this->fields.userSvtEntity;
      if ( !v33 )
        goto LABEL_65;
      v29 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v33->fields.atk;
      if ( !v29 )
        goto LABEL_65;
      adjustHp = v33->fields.adjustAtk;
      hp = v33->fields.atk;
      v32 = 5;
LABEL_47:
      IconLabelInfo__Set_28888132(v29, v32, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_48;
    case 7:
      servantEntity = this->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_65;
      v22 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = servantEntity->fields.cost;
      if ( !v22 )
        goto LABEL_65;
      IconLabelInfo__Set_28888132(v22, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
LABEL_48:
      v20 = this->fields.userSvtEntity;
      if ( !v20 )
        goto LABEL_65;
      v27 = this->fields.iconLabelInfo2;
LABEL_50:
      lv = v20->fields.lv;
      break;
    case 0xE:
      amountSortValue = this->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_62;
      manager = sort->fields.manager;
      if ( manager
        && (v25 = *(&SupportServantEquipListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v25) )
      {
        if ( (SupportServantEquipListViewManager_c *)manager->klass->_2.typeHierarchy[v25 - 1] == SupportServantEquipListViewManager_TypeInfo )
          v26 = sort->fields.manager;
        else
          v26 = 0LL;
      }
      else
      {
        v26 = 0LL;
      }
      v36 = this->fields.userSvtEntity;
      if ( !v36 )
        goto LABEL_65;
      v38 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
      v37 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v45.fields.currentCryptoKey = v38;
      *(_QWORD *)&v45.fields.fakeValue = v37;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v45, 0LL);
      if ( !v26 )
        goto LABEL_65;
      amountSortValue = SupportServantEquipListViewManager__GetAmountSortValue(
                          (SupportServantEquipListViewManager_o *)v26,
                          v39,
                          0LL);
      this->fields.amountSortValue = amountSortValue;
LABEL_62:
      v40 = this->fields.servantEntity;
      if ( !v40 )
        goto LABEL_65;
      collectionNo = v40->fields.collectionNo;
      v42 = this->fields.userSvtEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (amountSortValue << 48)) | collectionNo;
      if ( !v42 )
        goto LABEL_65;
      v27 = this->fields.iconLabelInfo1;
      lv = v42->fields.lv;
      v20 = v42;
      break;
    default:
      return result;
  }
  LevelMax = UserServantEntity__getLevelMax(v20, 0LL);
  if ( !v27 )
    goto LABEL_65;
  IconLabelInfo__Set_28888132(v27, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
  return 1;
}


bool __fastcall SupportServantEquipListViewItem__SwapChoice(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall SupportServantEquipListViewItem__SwapLock(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


System_String_o *__fastcall SupportServantEquipListViewItem__ToString(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *NameText; // x0

  if ( (byte_40FD2C3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10120, method);
    byte_40FD2C3 = 1;
  }
  NameText = SupportServantEquipListViewItem__get_NameText(this, method);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_10120, NameText, 0LL);
}


int32_t __fastcall SupportServantEquipListViewItem__get_AdjustAttack(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipListViewItem__get_AdjustHp(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustHp;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipListViewItem__get_Attack(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.atk;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipListViewItem__get_Cost(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return servantEntity->fields.cost;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipListViewItem__get_Hp(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.hp;
  else
    return 0;
}


IconLabelInfo_o *__fastcall SupportServantEquipListViewItem__get_IconInfo1(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall SupportServantEquipListViewItem__get_IconInfo2(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall SupportServantEquipListViewItem__get_IsBase(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isBase;
}


bool __fastcall SupportServantEquipListViewItem__get_IsCanNotSelect(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return !this->fields.isBase && this->fields.isUse;
}


bool __fastcall SupportServantEquipListViewItem__get_IsChocolateSvtEquip(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool __fastcall SupportServantEquipListViewItem__get_IsChoice(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall SupportServantEquipListViewItem__get_IsDispChoice(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall SupportServantEquipListViewItem__get_IsDispLock(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
}


bool __fastcall SupportServantEquipListViewItem__get_IsFriendShipSvtEq(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool __fastcall SupportServantEquipListViewItem__get_IsInvalidRarity(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool __fastcall SupportServantEquipListViewItem__get_IsLock(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall SupportServantEquipListViewItem__get_IsSwapChoice(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall SupportServantEquipListViewItem__get_IsSwapLock(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall SupportServantEquipListViewItem__get_IsUse(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUse;
}


System_String_o *__fastcall SupportServantEquipListViewItem__get_NameText(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_40FD2C1 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18326, v3);
    byte_40FD2C1 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18326;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(servantEntity, v8, -1, 0LL);
}


ServantEntity_o *__fastcall SupportServantEquipListViewItem__get_Servant(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


UserServantEntity_o *__fastcall SupportServantEquipListViewItem__get_UserServant(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void __fastcall SupportServantEquipListViewItem__set_IsBase(
        SupportServantEquipListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isBase = value;
}