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
  IconLabelInfo_o *v37; // x25
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
  struct UserServantEntity_o **p_equippedUserSvtEntity; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int64_t Instance; // x0
  __int64 v65; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v66; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v67; // x27
  __int64 v68; // x25
  __int64 v69; // x28
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  ServantLimitMaster_o *v78; // x28
  int32_t v79; // w25
  __int128 v80; // q1
  __int128 v81; // q0
  unsigned int v82; // w21
  __int128 v83; // q0
  int64_t v84; // x0
  __int64 v85; // x8
  struct ServantEntity_o *servantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v87; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // q0
  int64_t v89; // x8
  UserServantEntity_o *v90; // x8
  bool IsChocolateSvtEquip; // w0
  struct UserServantEntity_o *v92; // x8
  __int64 v93; // x24
  __int64 v94; // x25
  struct UserServantEntity_o *v95; // x8
  PartyOrganizationUtility_o *v96; // x24
  __int64 v97; // x25
  __int64 v98; // x26
  UserServantEntity_o *v99; // x8
  int32_t v100; // w23
  int32_t Rarity; // w0
  __int64 v102; // x8
  int32_t v103; // w20
  struct System_Int32_array *EquipCategoryIdList; // x0
  BattleServantConfConponent_o *p_categoryIdList; // x19
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  __int64 v112; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+90h] [xbp-90h]
  int32_t actMaxRarity; // [xsp+BCh] [xbp-64h] BYREF
  System_String_o *skillName; // [xsp+C0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16

  if ( (byte_418AC3F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v24);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v29);
    byte_418AC3F = 1;
  }
  skillName = 0LL;
  actMaxRarity = 0;
  v30 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v30, 0LL);
  this->fields.iconLabelInfo1 = v30;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo2 = v37;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventSetupInfo,
    (System_Int32_array **)eventSetupInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.equippedUserSvtEntity = equippedUserSvtEntity;
  p_equippedUserSvtEntity = &this->fields.equippedUserSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equippedUserSvtEntity,
    (System_Int32_array **)equippedUserSvtEntity,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v66 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  v67 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v69 = *(_QWORD *)&v66[5].fields.currentCryptoKey;
  v68 = *(_QWORD *)&v66[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v122.fields.currentCryptoKey = v69;
  *(_QWORD *)&v122.fields.fakeValue = v68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v122, 0LL);
  if ( !v67 )
    goto LABEL_64;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v67,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  v78 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  v79 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[6], 0LL);
  if ( !v78 )
    goto LABEL_64;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v78, v79, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_64;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_64;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_64;
  v80 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v119.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v119.fields.fakeValue = v80;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v118 = v119;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v118, 0LL) == targetSvtEquipId )
  {
    *(_WORD *)&this->fields.isBase = 1;
  }
  else
  {
    *(_WORD *)&this->fields.isBase = 0;
    v81 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v119.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v119.fields.fakeValue = v81;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v117 = v119;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v117, 0LL);
    if ( Instance != oldTargetSvtEquipId )
    {
      if ( !useSvtEquipList )
        goto LABEL_64;
      if ( (int)useSvtEquipList->max_length >= 1 )
      {
        v82 = 0;
        while ( 1 )
        {
          v83 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v119.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v119.fields.fakeValue = v83;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v116 = v119;
          v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v116, 0LL);
          v85 = *(_QWORD *)&useSvtEquipList->max_length;
          if ( v82 >= (unsigned int)v85 )
          {
            v112 = sub_B2C460(v84);
            sub_B2C400(v112, 0LL);
          }
          if ( v84 == useSvtEquipList->m_Items[v82] )
            break;
          if ( (int)++v82 >= (int)v85 )
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
  v87 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v87[16].fields.currentCryptoKey;
  v88 = v87[2];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v119.fields.currentCryptoKey = v87[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v119.fields.fakeValue = v88;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v115 = v119;
  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v115, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v89;
  this->fields.amountSortValue = -1LL;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_64;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v90 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v90 )
    goto LABEL_64;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v90, 0LL);
  v92 = this->fields.equippedUserSvtEntity;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( v92 )
  {
    v94 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
    v93 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v123.fields.currentCryptoKey = v94;
    *(_QWORD *)&v123.fields.fakeValue = v93;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v123, 0LL) >= 1 )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v95 = *p_equippedUserSvtEntity;
      if ( *p_equippedUserSvtEntity )
      {
        v96 = (PartyOrganizationUtility_o *)Instance;
        v98 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
        v97 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v124.fields.currentCryptoKey = v98;
        *(_QWORD *)&v124.fields.fakeValue = v97;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v124, 0LL);
        v99 = *p_equippedUserSvtEntity;
        if ( *p_equippedUserSvtEntity )
        {
          v100 = Instance;
          Rarity = UserServantEntity__getRarity(v99, 0LL);
          v102 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          *(_QWORD *)&v125.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          v103 = Rarity;
          *(_QWORD *)&v125.fields.currentCryptoKey = v102;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v125, 0LL);
          if ( v96 )
          {
            this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                             v96,
                                             &skillName,
                                             &actMaxRarity,
                                             v100,
                                             v103,
                                             Instance,
                                             -1,
                                             0LL);
            goto LABEL_60;
          }
        }
      }
LABEL_64:
      sub_B2C434(Instance, v65);
    }
  }
LABEL_60:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_64;
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.categoryIdList = EquipCategoryIdList;
  p_categoryIdList = (BattleServantConfConponent_o *)&this->fields.categoryIdList;
  sub_B2C2F8(p_categoryIdList, (System_Int32_array **)EquipCategoryIdList, v106, v107, v108, v109, v110, v111);
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
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_418AC44 & 1) == 0 )
  {
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_418AC44 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  __int64 v12; // x0

  if ( (byte_418AC42 & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_418AC42 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_25;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_25;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.categoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v9->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
LABEL_25:
    sub_B2C434(RarityFilterKindList, sort);
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
    goto LABEL_25;
  if ( !RarityFilterKindList->max_length )
  {
    v12 = sub_B2C460(RarityFilterKindList);
    sub_B2C400(v12, 0LL);
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
    sub_B2C434(0LL, method);
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
  int64_t Instance; // x0
  __int64 v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v19; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x23
  __int64 v21; // x24
  __int64 v22; // x25
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  ServantLimitMaster_o *v31; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v32; // x8
  int32_t v33; // w22
  __int128 v34; // q1
  int64_t rarity; // x9
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_418AC40 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, userSvtEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_418AC40 = 1;
  }
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    (System_String_array **)targetSvtEquipId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_21;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v22 = *(_QWORD *)&v19[5].fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v22;
  *(_QWORD *)&v39.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v39, 0LL);
  if ( !v20 )
    goto LABEL_21;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v20,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_21;
  v31 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
  v32 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_21;
  v33 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32[6], 0LL);
  if ( !v31 )
    goto LABEL_21;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v31, v33, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_21;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_21;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  if ( !userSvtEntity )
    goto LABEL_21;
  v34 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v34;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v37 = v38;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v37, 0LL);
  rarity = this->fields.rarity;
  servantEntity = this->fields.servantEntity;
  this->fields.isBase = Instance == targetSvtEquipId;
  this->fields.isOldBase = Instance == targetSvtEquipId;
  this->fields.sortValue1B = rarity;
  if ( !servantEntity )
LABEL_21:
    sub_B2C434(Instance, v18);
  this->fields.sortValue2 = servantEntity->fields.collectionNo;
}


void __fastcall SupportServantEquipListViewItem__ModifyLockItem(
        SupportServantEquipListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    sub_B2C434(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  this->fields.isSwapLock = 0;
}


bool __fastcall SupportServantEquipListViewItem__SetSortValue(
        SupportServantEquipListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SupportServantEquipListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t *p_bonusKind2Id; // x8
  int32_t v8; // w5
  bool EventUpVal_21652484; // w0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v13; // q1
  struct UserServantEntity_o *v14; // x8
  struct ServantEntity_o *servantEntity; // x8
  struct ListViewManager_o *manager; // x8
  __int64 v17; // x11
  struct ListViewManager_o *v18; // x20
  IconLabelInfo_o *iconLabelInfo1; // x19
  struct UserServantEntity_o *v20; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v23; // w1
  struct UserServantEntity_o *v24; // x8
  int32_t sortValue0; // w20
  struct UserServantEntity_o *v26; // x8
  __int64 v27; // x21
  __int64 v28; // x22
  struct ServantEntity_o *v29; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+10h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+30h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v4 = this;
  if ( (byte_418AC41 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    this = (SupportServantEquipListViewItem_o *)sub_B2C35C(&SupportServantEquipListViewManager_TypeInfo, v6);
    byte_418AC41 = 1;
  }
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_65;
  if ( sort->fields.isBonusKind && !v4->fields.isBase && sort->fields.bonusKind2 == 1 )
  {
    if ( v4->fields.bonusKind == 1 )
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == sort->fields.bonusKind2Id )
      {
        if ( !v4->fields.isEventUpVal )
          goto LABEL_28;
LABEL_14:
        if ( v4->fields.isInvalidRarity )
          goto LABEL_28;
        goto LABEL_15;
      }
    }
    else
    {
      p_bonusKind2Id = &sort->fields.bonusKind2Id;
    }
    v4->fields.bonusKind = 1;
    v8 = *p_bonusKind2Id;
    this = (SupportServantEquipListViewItem_o *)v4->fields.userSvtEntity;
    v4->fields.bonusKindId = *p_bonusKind2Id;
    if ( !this )
      goto LABEL_65;
    EventUpVal_21652484 = UserServantEntity__getEventUpVal_21652484(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            v4->fields.eventSetupInfo,
                            v8,
                            0,
                            0LL);
    v4->fields.isEventUpVal = EventUpVal_21652484;
    if ( !EventUpVal_21652484 )
      goto LABEL_28;
    goto LABEL_14;
  }
LABEL_15:
  if ( (((__int64 (__fastcall *)(SupportServantEquipListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
          v4,
          sort,
          v4->klass[1]._1.image) & 1) != 0 )
  {
    isSwapChoice = v4->fields.isSwapChoice;
    isChoice = v4->fields.isChoice;
    v4->fields.sortValue0 = 0LL;
    if ( isSwapChoice != isChoice && sort->fields.isChoiceSort )
      v4->fields.sortValue0 = 10LL;
    this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo2;
    if ( this )
    {
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      this = (SupportServantEquipListViewItem_o *)(&dword_0 + 1);
      switch ( sort->fields.sortKind )
      {
        case 1:
          userSvtEntity = v4->fields.userSvtEntity;
          if ( !userSvtEntity )
            goto LABEL_65;
          v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v34.fields.fakeValue = v13;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v33 = v34;
          this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                        &v33,
                                                        0LL);
          v14 = v4->fields.userSvtEntity;
          v4->fields.sortValue1 = (int64_t)this;
          if ( !v14 )
            goto LABEL_65;
          this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo1;
          if ( !this )
            goto LABEL_65;
          IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v14->fields.createdAt, 0, 0, 0, 0LL);
          goto LABEL_48;
        case 2:
          this = (SupportServantEquipListViewItem_o *)v4->fields.userSvtEntity;
          v4->fields.sortValue1 = v4->fields.rarity;
          if ( !this )
            goto LABEL_65;
          goto LABEL_40;
        case 3:
          this = (SupportServantEquipListViewItem_o *)v4->fields.userSvtEntity;
          if ( !this )
            goto LABEL_65;
          v4->fields.sortValue1 = SLODWORD(this[1].fields.sortValue0);
LABEL_40:
          iconLabelInfo1 = v4->fields.iconLabelInfo1;
          goto LABEL_50;
        case 5:
          v20 = v4->fields.userSvtEntity;
          if ( !v20 )
            goto LABEL_65;
          this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = v20->fields.hp;
          if ( !this )
            goto LABEL_65;
          adjustHp = v20->fields.adjustHp;
          hp = v20->fields.hp;
          v23 = 3;
          goto LABEL_47;
        case 6:
          v24 = v4->fields.userSvtEntity;
          if ( !v24 )
            goto LABEL_65;
          this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = v24->fields.atk;
          if ( !this )
            goto LABEL_65;
          adjustHp = v24->fields.adjustAtk;
          hp = v24->fields.atk;
          v23 = 5;
LABEL_47:
          IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, v23, hp, adjustHp, 0, 0, 0, 0, 0LL);
          goto LABEL_48;
        case 7:
          servantEntity = v4->fields.servantEntity;
          if ( !servantEntity )
            goto LABEL_65;
          this = (SupportServantEquipListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = servantEntity->fields.cost;
          if ( !this )
            goto LABEL_65;
          IconLabelInfo__Set_27362128((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
LABEL_48:
          this = (SupportServantEquipListViewItem_o *)v4->fields.userSvtEntity;
          if ( !this )
            goto LABEL_65;
          iconLabelInfo1 = v4->fields.iconLabelInfo2;
LABEL_50:
          sortValue0 = this[1].fields.sortValue0;
          break;
        case 0xE:
          this = (SupportServantEquipListViewItem_o *)v4->fields.amountSortValue;
          if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
            goto LABEL_62;
          manager = sort->fields.manager;
          if ( manager
            && (v17 = *(&SupportServantEquipListViewManager_TypeInfo->_2.bitflags2 + 1),
                *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v17) )
          {
            if ( (SupportServantEquipListViewManager_c *)manager->klass->_2.typeHierarchy[v17 - 1] == SupportServantEquipListViewManager_TypeInfo )
              v18 = sort->fields.manager;
            else
              v18 = 0LL;
          }
          else
          {
            v18 = 0LL;
          }
          v26 = v4->fields.userSvtEntity;
          if ( !v26 )
            goto LABEL_65;
          v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v35.fields.currentCryptoKey = v28;
          *(_QWORD *)&v35.fields.fakeValue = v27;
          this = (SupportServantEquipListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                        v35,
                                                        0LL);
          if ( !v18 )
            goto LABEL_65;
          this = (SupportServantEquipListViewItem_o *)SupportServantEquipListViewManager__GetAmountSortValue(
                                                        (SupportServantEquipListViewManager_o *)v18,
                                                        (int32_t)this,
                                                        0LL);
          v4->fields.amountSortValue = (int64_t)this;
LABEL_62:
          v29 = v4->fields.servantEntity;
          if ( !v29 )
            goto LABEL_65;
          collectionNo = v29->fields.collectionNo;
          v31 = v4->fields.userSvtEntity;
          v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
          if ( !v31 )
            goto LABEL_65;
          iconLabelInfo1 = v4->fields.iconLabelInfo1;
          sortValue0 = v31->fields.lv;
          this = (SupportServantEquipListViewItem_o *)v31;
          break;
        default:
          return (char)this;
      }
      this = (SupportServantEquipListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( iconLabelInfo1 )
      {
        IconLabelInfo__Set_27362128(iconLabelInfo1, 2, sortValue0, (int32_t)this, 0, 0, 0, 0, 0LL);
        LOBYTE(this) = 1;
        return (char)this;
      }
    }
LABEL_65:
    sub_B2C434(this, sort);
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
  System_String_o *NameText; // x0

  if ( (byte_418AC45 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10153/*"Other "*/, method);
    byte_418AC45 = 1;
  }
  NameText = SupportServantEquipListViewItem__get_NameText(this, method);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_10153/*"Other "*/, NameText, 0LL);
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

  if ( (byte_418AC43 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v3);
    byte_418AC43 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18395/*"error"*/;
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
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
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