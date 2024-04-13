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
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  IconLabelInfo_o *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  IconLabelInfo_o *v53; // x25
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct UserServantEntity_o **p_equippedUserSvtEntity; // x23
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  int64_t Instance; // x0
  __int64 v81; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v82; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v83; // x27
  __int64 v84; // x25
  __int64 v85; // x28
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  ServantLimitMaster_o *v94; // x28
  int32_t v95; // w25
  __int128 v96; // q1
  __int128 v97; // q0
  unsigned int v98; // w21
  __int128 v99; // q0
  int64_t v100; // x0
  __int64 v101; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v103; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // q0
  int64_t v105; // x8
  UserServantEntity_o *v106; // x8
  bool IsChocolateSvtEquip; // w0
  struct UserServantEntity_o *v108; // x8
  __int64 v109; // x24
  __int64 v110; // x25
  struct UserServantEntity_o *v111; // x8
  PartyOrganizationUtility_o *v112; // x24
  __int64 v113; // x25
  __int64 v114; // x26
  UserServantEntity_o *v115; // x8
  int32_t v116; // w23
  int32_t Rarity; // w0
  __int64 v118; // x8
  int32_t v119; // w20
  struct System_Int32_array *EquipCategoryIdList; // x0
  BattleServantConfConponent_o *p_categoryIdList; // x19
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  __int64 v128; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+BCh] [xbp-64h] BYREF
  System_String_o *skillName; // [xsp+C0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16

  if ( (byte_42EC430 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, index, (_DWORD)userSvtEntity, targetSvtEquipId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v40, v41, v42);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v43, v44, v45);
    byte_42EC430 = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v46 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v46, 0LL);
  this->fields.iconLabelInfo1 = v46;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v53, 0LL);
  this->fields.iconLabelInfo2 = v53;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventSetupInfo,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.equippedUserSvtEntity = equippedUserSvtEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equippedUserSvtEntity,
    (System_Int32_array **)equippedUserSvtEntity,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v82 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  v83 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v85 = *(_QWORD *)&v82[5].fields.currentCryptoKey;
  v84 = *(_QWORD *)&v82[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v138.fields.currentCryptoKey = v85;
  *(_QWORD *)&v138.fields.fakeValue = v84;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v138, 0LL);
  if ( !v83 )
    goto LABEL_64;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v83,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  v94 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  v95 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[6], 0LL);
  if ( !v94 )
    goto LABEL_64;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v94, v95, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_64;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_64;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_64;
  v96 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v135.fields.fakeValue = v96;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v134 = v135;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v134, 0LL) == targetSvtEquipId )
  {
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    *(_WORD *)&this->fields.isBase = 0;
    v97 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v135.fields.fakeValue = v97;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v133 = v135;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v133, 0LL);
    if ( Instance != oldTargetSvtEquipId )
    {
      if ( !useSvtEquipList )
        goto LABEL_64;
      if ( (int)useSvtEquipList->max_length >= 1 )
      {
        v98 = 0;
        while ( 1 )
        {
          v99 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v135.fields.fakeValue = v99;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v132 = v135;
          v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v132, 0LL);
          v101 = *(_QWORD *)&useSvtEquipList->max_length;
          if ( v98 >= (unsigned int)v101 )
          {
            v128 = sub_B5D6C8(v100);
            sub_B5D668(v128, 0LL);
          }
          if ( v100 == useSvtEquipList->m_Items[v98] )
            break;
          if ( (int)++v98 >= (int)v101 )
            goto LABEL_36;
        }
        this->fields.isUse = 1;
      }
    }
  }
LABEL_36:
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isOldBase = this->fields.isBase;
  if ( !Instance )
    goto LABEL_64;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  this->fields.isLock = Instance & 1;
  if ( !this->fields.userSvtEntity )
    goto LABEL_64;
  Instance = UserServantEntity__IsChoice(this->fields.userSvtEntity, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isChoice = Instance & 1;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !servantEntity )
    goto LABEL_64;
  v103 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v103[16].fields.currentCryptoKey;
  v104 = v103[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v135.fields.currentCryptoKey = v103[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v135.fields.fakeValue = v104;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v131 = v135;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v131, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v105;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_64;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v106 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
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
    *(_QWORD *)&v139.fields.currentCryptoKey = v110;
    *(_QWORD *)&v139.fields.fakeValue = v109;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v139, 0LL) >= 1 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v111 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v112 = (PartyOrganizationUtility_o *)Instance;
        v114 = *(_QWORD *)&v111->fields.svtId.fields.currentCryptoKey;
        v113 = *(_QWORD *)&v111->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v140.fields.currentCryptoKey = v114;
        *(_QWORD *)&v140.fields.fakeValue = v113;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v140, 0LL);
        v115 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v116 = Instance;
          Rarity = UserServantEntity__getRarity(v115, 0LL);
          v118 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          *(_QWORD *)&v141.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          v119 = Rarity;
          *(_QWORD *)&v141.fields.currentCryptoKey = v118;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v141, 0LL);
          if ( v112 )
          {
            this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                             v112,
                                             &skillName,
                                             &actMaxRarity,
                                             v116,
                                             v119,
                                             Instance,
                                             -1,
                                             0LL);
            goto LABEL_60;
          }
        }
      }
LABEL_64:
      sub_B5D69C(Instance, v81);
    }
  }
LABEL_60:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (BattleServantConfConponent_o *)&this->fields.categoryIdList;
  sub_B5D560(p_categoryIdList, (System_Int32_array **)EquipCategoryIdList, v122, v123, v124, v125, v126, v127);
  Instance = (int64_t)p_categoryIdList->monitor;
  if ( !Instance )
    goto LABEL_64;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_64;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
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
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EC435 & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, (_DWORD)tdInfo, (_DWORD)method, v3);
    byte_42EC435 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v8 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v8, 0LL);
  *tdInfo = v8;
  sub_B5D560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  FilterKindList_c *v12; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v20; // x0
  ListViewSort_FilterKind_array *v21; // x0
  bool HaveStatusFilter; // w8
  __int64 v23; // x0

  if ( (byte_42EC433 & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    byte_42EC433 = 1;
  }
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v12->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_38;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v14->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v16->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL) )
  {
    IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                               sort,
                                               this->fields.userSvtEntity,
                                               this->fields.servantEntity,
                                               0,
                                               0LL);
    result = 0;
    if ( !IsMatchServantEquipCombineStatusFilter )
      return result;
  }
  v20 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v20 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v20->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_38;
  v21 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v21, 0LL) )
  {
    HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                         sort,
                         this->fields.userSvtEntity,
                         this->fields.servantEntity,
                         0,
                         0LL);
    result = 0;
    if ( !HaveStatusFilter )
      return result;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_38:
    sub_B5D69C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
  {
    v23 = sub_B5D6C8(RarityFilterKindList);
    sub_B5D668(v23, 0LL);
  }
  RarityFilterKindList->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
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
    sub_B5D69C(0LL, method);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int64_t Instance; // x0
  __int64 v28; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v29; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x23
  __int64 v31; // x24
  __int64 v32; // x25
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  ServantLimitMaster_o *v41; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v42; // x8
  int32_t v43; // w22
  __int128 v44; // q1
  int64_t rarity; // x9
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_42EC431 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, (_DWORD)userSvtEntity, targetSvtEquipId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42EC431 = 1;
  }
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    (System_String_array **)targetSvtEquipId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v29 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_21;
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v32 = *(_QWORD *)&v29[5].fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v49.fields.currentCryptoKey = v32;
  *(_QWORD *)&v49.fields.fakeValue = v31;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v49, 0LL);
  if ( !v30 )
    goto LABEL_21;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v30,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_21;
  v41 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  v42 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_21;
  v43 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v42[6], 0LL);
  if ( !v41 )
    goto LABEL_21;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v41, v43, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_21;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_21;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_21;
  v44 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v48.fields.fakeValue = v44;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v47 = v48;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v47, 0LL);
  rarity = this->fields.rarity;
  servantEntity = this->fields.servantEntity;
  this->fields.isBase = Instance == targetSvtEquipId;
  this->fields.isOldBase = Instance == targetSvtEquipId;
  this->fields.sortValue1B = rarity;
  if ( !servantEntity )
LABEL_21:
    sub_B5D69C(Instance, v28);
  this->fields.sortValue2 = servantEntity->fields.collectionNo;
}


void __fastcall SupportServantEquipListViewItem__ModifyLockItem(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B5D69C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall SupportServantEquipListViewItem__SetSortValue(
        SupportServantEquipListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SupportServantEquipListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t *p_bonusKind2Id; // x8
  int32_t v13; // w5
  bool EventUpVal_21840756; // w0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v18; // q1
  struct UserServantEntity_o *v19; // x8
  struct ServantEntity_o *servantEntity; // x8
  struct ListViewManager_o *manager; // x8
  __int64 v22; // x11
  struct ListViewManager_o *v23; // x20
  IconLabelInfo_o *iconLabelInfo1; // x19
  struct UserServantEntity_o *v25; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v28; // w1
  struct UserServantEntity_o *v29; // x8
  int32_t sortValue0; // w20
  struct UserServantEntity_o *v31; // x8
  __int64 v32; // x21
  __int64 v33; // x22
  const MethodInfo *v34; // x2
  struct ServantEntity_o *v35; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v37; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v5 = this;
  if ( (byte_42EC432 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7, v8);
    this = (SupportServantEquipListViewItem_o *)sub_B5D5C4(&SupportServantEquipListViewManager_TypeInfo, v9, v10, v11);
    byte_42EC432 = 1;
  }
  *(_WORD *)&v5->fields.isTermination = 0;
  v5->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_65;
  if ( sort->fields.isBonusKind && !v5->fields.isBase && sort->fields.bonusKind2 == 1 )
  {
    if ( v5->fields.bonusKind == 1 )
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
      if ( v5->fields.bonusKindId == sort->fields.bonusKind2Id )
      {
        if ( !v5->fields.isEventUpVal )
          goto LABEL_28;
LABEL_14:
        if ( v5->fields.isInvalidRarity )
          goto LABEL_28;
        goto LABEL_15;
      }
    }
    else
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
    }
    v5->fields.bonusKind = 1;
    v13 = *p_bonusKind2Id;
    this = (SupportServantEquipListViewItem_o *)v5->fields.userSvtEntity;
    v5->fields.bonusKindId = *p_bonusKind2Id;
    if ( !this )
      goto LABEL_65;
    EventUpVal_21840756 = UserServantEntity__getEventUpVal_21840756(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            v5->fields.eventSetupInfo,
                            v13,
                            0,
                            0LL);
    v5->fields.isEventUpVal = EventUpVal_21840756;
    if ( !EventUpVal_21840756 )
      goto LABEL_28;
    goto LABEL_14;
  }
LABEL_15:
  if ( (((__int64 (__fastcall *)(SupportServantEquipListViewItem_o *, ListViewSort_o *, void *))v5->klass->vtable._5_IsMatchFilter.method)(
          v5,
          sort,
          v5->klass[1]._1.image) & 1) != 0 )
  {
    isSwapChoice = v5->fields.isSwapChoice;
    isChoice = v5->fields.isChoice;
    v5->fields.sortValue0 = 0LL;
    if ( isSwapChoice != isChoice && sort->fields.isChoiceSort )
      v5->fields.sortValue0 = 10LL;
    this = (SupportServantEquipListViewItem_o *)v5->fields.iconLabelInfo2;
    if ( this )
    {
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      this = (SupportServantEquipListViewItem_o *)(&dword_0 + 1);
      switch ( sort->fields.sortKind )
      {
        case 1:
          userSvtEntity = v5->fields.userSvtEntity;
          if ( !userSvtEntity )
            goto LABEL_65;
          v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v40.fields.fakeValue = v18;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v39 = v40;
          this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                        &v39,
                                                        0LL);
          v19 = v5->fields.userSvtEntity;
          v5->fields.sortValue1 = (int64_t)this;
          if ( !v19 )
            goto LABEL_65;
          this = (SupportServantEquipListViewItem_o *)v5->fields.iconLabelInfo1;
          if ( !this )
            goto LABEL_65;
          IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v19->fields.createdAt, 0, 0, 0, 0LL);
          goto LABEL_48;
        case 2:
          this = (SupportServantEquipListViewItem_o *)v5->fields.userSvtEntity;
          v5->fields.sortValue1 = v5->fields.rarity;
          if ( !this )
            goto LABEL_65;
          goto LABEL_40;
        case 3:
          this = (SupportServantEquipListViewItem_o *)v5->fields.userSvtEntity;
          if ( !this )
            goto LABEL_65;
          v5->fields.sortValue1 = SLODWORD(this[1].fields.sortValue0);
LABEL_40:
          iconLabelInfo1 = v5->fields.iconLabelInfo1;
          goto LABEL_50;
        case 5:
          v25 = v5->fields.userSvtEntity;
          if ( !v25 )
            goto LABEL_65;
          this = (SupportServantEquipListViewItem_o *)v5->fields.iconLabelInfo1;
          v5->fields.sortValue1 = v25->fields.hp;
          if ( !this )
            goto LABEL_65;
          adjustHp = v25->fields.adjustHp;
          hp = v25->fields.hp;
          v28 = 3;
          goto LABEL_47;
        case 6:
          v29 = v5->fields.userSvtEntity;
          if ( !v29 )
            goto LABEL_65;
          this = (SupportServantEquipListViewItem_o *)v5->fields.iconLabelInfo1;
          v5->fields.sortValue1 = v29->fields.atk;
          if ( !this )
            goto LABEL_65;
          adjustHp = v29->fields.adjustAtk;
          hp = v29->fields.atk;
          v28 = 5;
LABEL_47:
          IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, v28, hp, adjustHp, 0, 0, 0, 0, 0LL);
          goto LABEL_48;
        case 7:
          servantEntity = v5->fields.servantEntity;
          if ( !servantEntity )
            goto LABEL_65;
          this = (SupportServantEquipListViewItem_o *)v5->fields.iconLabelInfo1;
          v5->fields.sortValue1 = servantEntity->fields.cost;
          if ( !this )
            goto LABEL_65;
          IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
LABEL_48:
          this = (SupportServantEquipListViewItem_o *)v5->fields.userSvtEntity;
          if ( !this )
            goto LABEL_65;
          iconLabelInfo1 = v5->fields.iconLabelInfo2;
LABEL_50:
          sortValue0 = this[1].fields.sortValue0;
          break;
        case 0xE:
          this = (SupportServantEquipListViewItem_o *)v5->fields.amountSortValue;
          if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
            goto LABEL_62;
          manager = sort->fields.manager;
          if ( manager
            && (v22 = *(&SupportServantEquipListViewManager_TypeInfo->_2.bitflags2 + 1),
                *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v22) )
          {
            if ( (SupportServantEquipListViewManager_c *)manager->klass->_2.typeHierarchy[v22 - 1] == SupportServantEquipListViewManager_TypeInfo )
              v23 = sort->fields.manager;
            else
              v23 = 0LL;
          }
          else
          {
            v23 = 0LL;
          }
          v31 = v5->fields.userSvtEntity;
          if ( !v31 )
            goto LABEL_65;
          v33 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
          v32 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v41.fields.currentCryptoKey = v33;
          *(_QWORD *)&v41.fields.fakeValue = v32;
          this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                        v41,
                                                        0LL);
          if ( !v23 )
            goto LABEL_65;
          this = (SupportServantEquipListViewItem_o *)SupportServantEquipListViewManager__GetAmountSortValue(
                                                        (SupportServantEquipListViewManager_o *)v23,
                                                        (int32_t)this,
                                                        v34);
          v5->fields.amountSortValue = (int64_t)this;
LABEL_62:
          v35 = v5->fields.servantEntity;
          if ( !v35 )
            goto LABEL_65;
          collectionNo = v35->fields.collectionNo;
          v37 = v5->fields.userSvtEntity;
          v5->fields.sortValue1 = (((unsigned __int64)(unsigned int)v5->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
          if ( !v37 )
            goto LABEL_65;
          iconLabelInfo1 = v5->fields.iconLabelInfo1;
          sortValue0 = v37->fields.lv;
          this = (SupportServantEquipListViewItem_o *)v37;
          break;
        default:
          return (char)this;
      }
      this = (SupportServantEquipListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( iconLabelInfo1 )
      {
        IconLabelInfo__Set_28463004(iconLabelInfo1, 2, sortValue0, (int32_t)this, 0, 0, 0, 0, 0LL);
        LOBYTE(this) = 1;
        return (char)this;
      }
    }
LABEL_65:
    sub_B5D69C(this, sort);
  }
LABEL_28:
  LOBYTE(this) = 0;
  return (char)this;
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
  int v2; // w2
  __int64 v3; // x3
  System_String_o *NameText; // x0

  if ( (byte_42EC436 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10259/*"Other "*/, (_DWORD)method, v2, v3);
    byte_42EC436 = 1;
  }
  NameText = SupportServantEquipListViewItem__get_NameText(this, method);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_10259/*"Other "*/, NameText, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42EC434 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v5, v6, v7);
    byte_42EC434 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18624/*"error"*/;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v11 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v10 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  }
  else
  {
    v12 = -1;
  }
  return ServantEntity__getName(servantEntity, v12, -1, 0LL);
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