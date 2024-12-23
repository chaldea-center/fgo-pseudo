// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewItem___ctor(
        ServantListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
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
  IconLabelInfo_o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  IconLabelInfo_o *v30; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct UserServantEntity_o **p_userSvtEntity; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t Instance; // x0
  __int64 v46; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v48; // x27
  __int64 v49; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x25
  Il2CppObject *Entity; // x0
  ServantEntity_o **p_servantEntity; // x25
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  Il2CppObject *v77; // x26
  struct UserServantEntity_o *v78; // x8
  int32_t v79; // w27
  int32_t v80; // w8
  UserServantEntity_o *v81; // x8
  UserServantEntity_o *v82; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v84; // x8
  UserServantEntity_o *v85; // x8
  struct UserServantEntity_o *v86; // x8
  __int128 v87; // q1
  UserServantCollectionMaster_o *v88; // x26
  int64_t v89; // x27
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // kr10_16
  __int128 v91; // q0
  __int128 v92; // q1
  __int64 v93; // x24
  struct UserServantEntity_o *v94; // x8
  __int128 v95; // q0
  int64_t v96; // x24
  signed int max_length; // w8
  int32_t v98; // w9
  signed int v99; // w8
  int32_t v100; // w9
  struct System_Int32_array *EquipCategoryIdList; // x1
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct System_Int32_array **p_equipCategoryIdList; // x0
  UserServantEntity_o *v109; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x8
  __int64 rarity; // x22
  __int64 v119; // x23
  __int64 lv; // x24
  __int64 v121; // x22
  __int64 v122; // x23
  int32_t v123; // w8
  int v124; // w22
  BalanceConfig_c *v125; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+60h] [xbp-90h]
  int32_t friendshipRank; // [xsp+8Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16

  if ( (byte_4B62E56 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantClassMaster___, v13);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v14);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v18);
    sub_1BE4ACC(&IconLabelInfo_TypeInfo, v19);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4B62E56 = 1;
  }
  friendshipRank = 0;
  v23 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo1 = v23;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v30, 0LL);
  this->fields.iconLabelInfo2 = v30;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v30, v32, v33, v34, v35, v36, v37);
  ListViewItem___ctor_41686696((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( !this->fields.userSvtEntity )
    goto LABEL_65;
  this->fields.svtId = this->fields.userSvtEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  v49 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v48 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v132.fields.currentCryptoKey = v49;
  *(_QWORD *)&v132.fields.fakeValue = v48;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v132, 0LL);
  if ( !v50 )
    goto LABEL_65;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v50,
             Instance,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v53, v54, v55, v56, v57, v58);
  this->fields.userCommandCodeEntity = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.userCommandCodeEntity, 0LL, v59, v60, v61, v62, v63, v64);
  this->fields.commandCodeId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  this->fields.commandCodeEntity = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.commandCodeEntity, 0LL, v65, v66, v67, v68, v69, v70);
  this->fields.setupInfo = setupInfo;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupInfo, v71, v72, v73, v74, v75, v76);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v77 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(this->fields.svtId, 0LL);
  v78 = this->fields.userSvtEntity;
  if ( !v78 )
    goto LABEL_65;
  v79 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v78->fields.limitCount, 0LL);
  if ( !v77 )
    goto LABEL_65;
  Instance = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v77, v79, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_65;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_65;
  v80 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.rarity = v80;
  if ( !Instance )
    goto LABEL_65;
  Instance = UserServantEntity__IsLeave((UserServantEntity_o *)Instance, 0LL);
  v81 = this->fields.userSvtEntity;
  this->fields.isLeave = Instance & 1;
  if ( !v81 )
    goto LABEL_65;
  Instance = UserServantEntity__IsLock(v81, 0LL);
  v82 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v82 )
    goto LABEL_65;
  IsChoice = UserServantEntity__IsChoice(v82, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_65;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v84 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v84 )
    goto LABEL_65;
  Instance = UserServantEntity__IsChocolateSvtEquip(v84, 0LL);
  v85 = this->fields.userSvtEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v85 )
    goto LABEL_65;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v85, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v86 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v87 = *(_OWORD *)&v86->fields.userId.fields.fakeValue;
  v88 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)&v86->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v130.fields.fakeValue = v87;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v129 = v130;
  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v129, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(this->fields.svtId, 0LL);
  if ( !v88 )
    goto LABEL_65;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v88, v89, Instance, 0LL);
  if ( !Instance )
    goto LABEL_65;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0LL);
  v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  v46 = *(_QWORD *)&v90.fields.fakeValue;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.friendship = v90;
  this->fields.partyIndex = -1;
  *(_WORD *)&this->fields.isPartyEquip = 0;
  if ( !Instance )
    goto LABEL_65;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_65;
  if ( !userSvtEntity )
    goto LABEL_65;
  v92 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v91 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v93 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v128.fields.currentCryptoKey = v92;
  *(_OWORD *)&v128.fields.fakeValue = v91;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v128, 0LL);
  v94 = this->fields.userSvtEntity;
  this->fields.isPush = v93 == Instance;
  this->fields.isEnabled = 1;
  if ( !v94 )
    goto LABEL_65;
  v95 = *(_OWORD *)&v94->fields.id.fields.fakeValue;
  *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v94->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v127.fields.fakeValue = v95;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v127, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_65;
  v96 = Instance;
  Instance = ServantEntity__get_IsKeepServantEquip(*p_servantEntity, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( partyUserEquipList )
    {
      max_length = partyUserEquipList->max_length;
      if ( max_length >= 1 )
      {
        v98 = 0;
        while ( v96 != partyUserEquipList->m_Items[v98] )
        {
          if ( max_length == ++v98 )
            goto LABEL_44;
        }
        this->fields.partyIndex = v98;
        *(_WORD *)&this->fields.isPartyEquip = 257;
      }
LABEL_44:
      Instance = (int64_t)*p_userSvtEntity;
      if ( *p_userSvtEntity )
      {
        EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
        p_equipCategoryIdList = &this->fields.equipCategoryIdList;
        this->fields.equipCategoryIdList = EquipCategoryIdList;
        goto LABEL_51;
      }
    }
LABEL_65:
    sub_1BE4D28(Instance, v46);
  }
  if ( !partyUserServantList )
    goto LABEL_65;
  v99 = partyUserServantList->max_length;
  if ( v99 >= 1 )
  {
    v100 = 0;
    while ( v96 != partyUserServantList->m_Items[v100] )
    {
      if ( v99 == ++v100 )
        goto LABEL_47;
    }
    this->fields.partyIndex = v100;
  }
LABEL_47:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v109 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v109 )
    goto LABEL_65;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v109, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
    (int64_t)SkillCategoryIdList,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_65;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_51:
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)p_equipCategoryIdList,
    (int64_t)EquipCategoryIdList,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_65;
  v117 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v117;
  this->fields.sortValue1B = v117;
  if ( !Instance || !*p_userSvtEntity )
    goto LABEL_65;
  rarity = (unsigned int)this->fields.rarity;
  v119 = *(int *)(Instance + 208);
  lv = (*p_userSvtEntity)->fields.lv;
  this->fields.sortValue2 = (v119 << 16) | (rarity << 48) | (2 * lv) | ServantEntity__get_IsServantMaterialTd(
                                                                         (ServantEntity_o *)Instance,
                                                                         0LL);
  v122 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v121 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v133.fields.currentCryptoKey = v122;
  *(_QWORD *)&v133.fields.fakeValue = v121;
  v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v133, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v123;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_65;
  v124 = *(_DWORD *)(Instance + 276);
  v125 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v125 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  static_fields = v125->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v124;
  if ( !Instance )
    goto LABEL_65;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  if ( !Instance )
    goto LABEL_65;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_65;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewItem___ctor_33394080(
        ServantListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        System_Int64_array *attachUserCommandCodeList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  IconLabelInfo_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  IconLabelInfo_o *v21; // x24
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t Instance; // x0
  __int64 v36; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v38; // x24
  __int64 v39; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x23
  Il2CppObject *Entity; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // kr00_16
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  int32_t rarity; // w8
  UserCommandCodeEntity_o *v63; // x8
  bool IsChoice; // w0
  struct System_Int32_array *CategoryIdList; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct UserCommandCodeEntity_o *v72; // x8
  __int128 v73; // q1
  signed int max_length; // w8
  int v75; // w9
  struct CommandCodeEntity_o *v76; // x8
  __int64 v77; // x23
  __int64 v78; // x20
  __int64 v79; // x22
  __int64 v80; // x9
  int32_t v81; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_4B62E57 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9);
    sub_1BE4ACC(&IconLabelInfo_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B62E57 = 1;
  }
  v14 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo1 = v14;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo2 = v21;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v21, v23, v24, v25, v26, v27, v28);
  ListViewItem___ctor_41686696((ListViewItem_o *)this, index, 0LL);
  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userCommandCodeEntity,
    (int64_t)userCommandCodeEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !userCommandCodeEntity )
    goto LABEL_27;
  this->fields.commandCodeId = userCommandCodeEntity->fields.commandCodeId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v39 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v84.fields.currentCryptoKey = v39;
  *(_QWORD *)&v84.fields.fakeValue = v38;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v84, 0LL);
  if ( !v40 )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v40,
             Instance,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeEntity,
    (int64_t)Entity,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.userSvtEntity = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.userSvtEntity, 0LL, v48, v49, v50, v51, v52, v53);
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  this->fields.servantEntity = 0LL;
  this->fields.svtId = v54;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.servantEntity, 0LL, v55, v56, v57, v58, v59, v60);
  this->fields.classId = 0;
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_27;
  rarity = commandCodeEntity->fields.rarity;
  Instance = (int64_t)this->fields.userCommandCodeEntity;
  this->fields.isLeave = 0;
  this->fields.rarity = rarity;
  if ( !Instance )
    goto LABEL_27;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL);
  v63 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v63 )
    goto LABEL_27;
  IsChoice = UserCommandCodeEntity__IsChoice(v63, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isFriendShipSvtEq = 0;
  this->fields.isChoice = IsChoice;
  this->fields.friendshipMax = 0;
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  *(_WORD *)&this->fields.isPartyEquip = 0;
  *(_WORD *)&this->fields.isEventJoin = 0;
  this->fields.partyIndex = -1;
  this->fields.isEnabled = 1;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(userCommandCodeEntity, 0LL);
  this->fields.commandCodeCategoryIdList = CategoryIdList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeCategoryIdList,
    (int64_t)CategoryIdList,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = this->fields.userCommandCodeEntity;
  if ( !v72 )
    goto LABEL_27;
  v73 = *(_OWORD *)&v72->fields.id.fields.fakeValue;
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v72->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v73;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v82 = v83;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v82, 0LL);
  if ( !attachUserCommandCodeList )
    goto LABEL_27;
  max_length = attachUserCommandCodeList->max_length;
  if ( max_length >= 1 )
  {
    v75 = 0;
    while ( Instance != attachUserCommandCodeList->m_Items[v75] )
    {
      if ( max_length == ++v75 )
        goto LABEL_21;
    }
    this->fields.isUse = 1;
  }
LABEL_21:
  v76 = this->fields.commandCodeEntity;
  this->fields.priority = 0;
  this->fields.sortValue1B = 0LL;
  if ( !v76 )
    goto LABEL_27;
  v77 = (unsigned int)this->fields.rarity;
  v79 = *(_QWORD *)&v76->fields.collectionNo.fields.currentCryptoKey;
  v78 = *(_QWORD *)&v76->fields.collectionNo.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = v79;
  *(_QWORD *)&v85.fields.fakeValue = v78;
  v80 = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v85, 0LL) << 16) | (v77 << 48);
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v80;
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(commandCodeId, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v81;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_27:
    sub_1BE4D28(Instance, v36);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall ServantListViewItem__Finalize(ServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall ServantListViewItem__GetIsEventUpValShow(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  unsigned int bonusKind2; // w8
  bool result; // w0
  int32_t bonusKindId; // w2
  int32_t bonusKind2Id; // w9
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  System_Func_object__bool__o *v19; // x21
  Il2CppObject *Master_object; // x0
  __int64 v21; // x21
  __int64 v22; // x22
  EventCampaignMaster_o *v23; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4B62E5C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventGroupMaster___, v7);
    sub_1BE4ACC(&DataManager_TypeInfo, v8);
    sub_1BE4ACC(&System_Func_EventGroupEntity__bool__TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&Method_ServantListViewItem__GetIsEventUpValShow_b__55_0__, v12);
    this = (ServantListViewItem_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B62E5C = 1;
  }
  if ( !sort )
LABEL_34:
    sub_1BE4D28(this, sort);
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  result = 1;
  if ( bonusKind2 <= 7 && ((1 << bonusKind2) & 0xB9) != 0 )
  {
    if ( v4->fields.bonusKind == bonusKind2 )
    {
      bonusKindId = v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKind2Id;
      if ( bonusKindId == bonusKind2Id )
      {
LABEL_14:
        result = 0;
        switch ( bonusKind2 )
        {
          case 0u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (ServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventGroupMaster___);
            if ( !this )
              goto LABEL_34;
            EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                  (EventGroupMaster_o *)this,
                                  v4->fields.bonusKindId,
                                  0LL);
            this = (ServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)EntitiesByGroupId,
                                              0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_33;
            if ( !EntitiesByGroupId )
              goto LABEL_34;
            if ( EntitiesByGroupId->fields._size < 2 )
            {
LABEL_33:
              result = 0;
            }
            else
            {
              v19 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_EventGroupEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v19,
                (Il2CppObject *)v4,
                Method_ServantListViewItem__GetIsEventUpValShow_b__55_0__,
                0LL);
              result = BasicHelper__Any_object_(
                         (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                         (System_Func_T__bool__o *)v19,
                         (const MethodInfo_2F4407C *)Method_BasicHelper_Any_EventGroupEntity___);
            }
            break;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCampaignMaster___);
            v22 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
            v21 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
            v23 = (EventCampaignMaster_o *)Master_object;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v24.fields.currentCryptoKey = v22;
            *(_QWORD *)&v24.fields.fakeValue = v21;
            this = (ServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                              v24,
                                              0LL);
            if ( !v23 )
              goto LABEL_34;
            return EventCampaignMaster__IsEnableServant(v23, (int32_t)this, v4->fields.bonusKindId, 0LL);
          case 4u:
          case 5u:
            this = (ServantListViewItem_o *)v4->fields.userSvtEntity;
            if ( !this )
              goto LABEL_34;
            return UserServantEntity__getEventUpVal_41168560(
                     (UserServantEntity_o *)this,
                     v4->fields.setupInfo,
                     bonusKindId,
                     0LL,
                     0LL);
          case 7u:
            this = (ServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_34;
            this = (ServantListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            if ( !this )
              goto LABEL_34;
            return ServantFilterMaster__IsEnableServant(
                     (ServantFilterMaster_o *)this,
                     v4->fields.svtId,
                     v4->fields.bonusKindId,
                     0LL);
          default:
            return result;
        }
        return result;
      }
    }
    else
    {
      bonusKind2Id = sort->fields.bonusKind2Id;
    }
    bonusKindId = bonusKind2Id;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = bonusKind2Id;
    goto LABEL_14;
  }
  return result;
}


bool __fastcall ServantListViewItem__GetNpInfo(
        ServantListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B62E60 & 1) == 0 )
  {
    sub_1BE4ACC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4B62E60 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1BE4D18(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1BE4A70((PartyOrganizationUtility_o *)tdInfo, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


bool __fastcall ServantListViewItem__IsMatchCommandCodeFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  _BOOL4 v9; // w8

  if ( (byte_4B62E5B & 1) == 0 )
  {
    sub_1BE4ACC(&FilterKindList_TypeInfo, sort);
    sub_1BE4ACC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4B62E5B = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_20;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_20;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_20:
    sub_1BE4D28(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
    sub_1BE4D30(RarityFilterKindList, RarityFilterKindList);
  RarityFilterKindList->m_Items[1] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    || !ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    return 1;
  }
  v9 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v9;
}


bool __fastcall ServantListViewItem__IsMatchFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v7; // x2

  if ( this->fields.userCommandCodeEntity )
  {
    if ( ServantListViewItem__IsMatchCommandCodeFilter(this, sort, method) )
      return 1;
  }
  else
  {
    servantEntity = this->fields.servantEntity;
    if ( !servantEntity )
      sub_1BE4D28(0LL, sort);
    if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL) )
    {
      if ( ServantListViewItem__IsMatchServantEquipFilter(this, sort, v7) )
        return 1;
    }
    else if ( ServantListViewItem__IsMatchServantFilter(this, sort, v7) )
    {
      return 1;
    }
  }
  return 0;
}


bool __fastcall ServantListViewItem__IsMatchServantEquipFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  bool HaveStatusFilter; // w8
  _BOOL4 v18; // w8

  if ( (byte_4B62E5A & 1) == 0 )
  {
    sub_1BE4ACC(&FilterKindList_TypeInfo, sort);
    sub_1BE4ACC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_4B62E5A = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0LL),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v15 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v15 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v15->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0LL),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1BE4D30(RarityFilterKindList, RarityFilterKindList);
        RarityFilterKindList->m_Items[1] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(
               sort,
               (ListViewSort_FilterKind_array *)RarityFilterKindList,
               0LL)
          || !ListViewSort__GetFilter(sort, 39, 0LL) )
        {
          return 1;
        }
        v18 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v18;
      }
LABEL_36:
      sub_1BE4D28(RarityFilterKindList, sort);
    }
  }
  return result;
}


bool __fastcall ServantListViewItem__IsMatchServantFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v19; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x21
  UserServantEntity_o *v24; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v26; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v42; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v44; // w0

  if ( (byte_4B62E59 & 1) == 0 )
  {
    sub_1BE4ACC(&FilterKindList_TypeInfo, sort);
    sub_1BE4ACC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1BE4ACC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4B62E59 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v16->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_67:
    sub_1BE4D28(ClassGroupFilterKindList, sort);
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v24 = this->fields.userSvtEntity;
    if ( v24 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v24, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v26 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v26 )
          goto LABEL_67;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v26, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
    }
    ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_68;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_1BE4D30(ClassGroupFilterKindList, v19);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v42 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v44 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v42) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v44 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v44 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v19 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_68;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v21 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v21->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v22, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall ServantListViewItem__Modify(
        ServantListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.userSvtEntity = userSvtEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userSvtEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantListViewItem__ModifyLockItem(this, v9);
  ServantListViewItem__ModifyChoiceItem(this, v10);
}


void __fastcall ServantListViewItem__ModifyChoiceItem(ServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsChoice; // w0
  UserCommandCodeEntity_o *userCommandCodeEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
LABEL_5:
    this->fields.isChoice = IsChoice;
    goto LABEL_6;
  }
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( userCommandCodeEntity )
  {
    IsChoice = UserCommandCodeEntity__IsChoice(userCommandCodeEntity, 0LL);
    goto LABEL_5;
  }
LABEL_6:
  this->fields.isSwapChoice = 0;
}


void __fastcall ServantListViewItem__ModifyLockItem(ServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w0
  UserCommandCodeEntity_o *userCommandCodeEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
LABEL_5:
    this->fields.isLock = IsLock;
    goto LABEL_6;
  }
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( userCommandCodeEntity )
  {
    IsLock = UserCommandCodeEntity__IsLock(userCommandCodeEntity, 0LL);
    goto LABEL_5;
  }
LABEL_6:
  this->fields.isSwapLock = 0;
}


void __fastcall ServantListViewItem__ModifyUserCommandCodeEntity(
        ServantListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userCommandCodeEntity,
    (int64_t)userCommandCodeEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantListViewItem__ModifyUserServantEntity(
        ServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.userSvtEntity = userServantEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantListViewItem__Modify_33395148(
        ServantListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userCommandCodeEntity,
    (int64_t)userCommandCodeEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantListViewItem__ModifyLockItem(this, v9);
  ServantListViewItem__ModifyChoiceItem(this, v10);
}


bool __fastcall ServantListViewItem__SetSortValue(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ServantListViewItem_c *klass; // x8
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  char v10; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v14; // zf
  _BOOL4 v15; // w8
  int v16; // w10
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x9
  int32_t sortKind; // w8
  int64_t rarity; // x8
  int64_t partyIndex; // x8
  __int128 v21; // q1
  struct UserCommandCodeEntity_o *v22; // x8
  struct ListViewManager_o *v23; // x8
  __int64 v24; // x11
  struct ListViewManager_o *v25; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v27; // q1
  struct UserServantEntity_o *v28; // x8
  IconLabelInfo_o *v29; // x20
  int32_t v30; // w21
  bool IsMaterialTd; // w8
  int64_t v32; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t hpReinforceValue; // x2
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v36; // w1
  struct UserServantEntity_o *v37; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v40; // w1
  struct UserServantEntity_o *v41; // x8
  IconLabelInfo_o *v42; // x19
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t lv; // w20
  __int64 v46; // x20
  __int64 v47; // x21
  int32_t v48; // w0
  IconLabelInfo_o *v49; // x20
  int64_t v50; // x9
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v53; // x20
  IconLabelInfo_o *v54; // x20
  int32_t v55; // w21
  __int64 v56; // x21
  __int64 v57; // x22
  const MethodInfo *v58; // x2
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v60; // x20
  __int64 v61; // x21
  int32_t v62; // w8
  __int64 v63; // x21
  __int64 v64; // x22
  const MethodInfo *v65; // x2
  struct ServantEntity_o *v66; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v68; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+50h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_4B62E58 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1BE4ACC(&ServantListViewManager_TypeInfo, v6);
    byte_4B62E58 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.isNeedAdjustIconLabelScale = 0;
  this->fields.sortValue1 = -1LL;
  v10 = ((__int64 (__fastcall *)(ServantListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          klass[1]._1.image);
  iconLabelInfo2 = 0LL;
  if ( (v10 & 1) != 0 )
  {
    if ( !this->fields.userSvtEntity
      || (iconLabelInfo2 = ServantListViewItem__GetIsEventUpValShow(this, sort, v9), (iconLabelInfo2 & 1) != 0) )
    {
      isChoice = this->fields.isChoice;
      isSwapChoice = this->fields.isSwapChoice;
      this->fields.sortValue0 = 0LL;
      v14 = !isChoice;
      v15 = !isChoice;
      v16 = !v14;
      if ( !isSwapChoice )
        v15 = v16;
      if ( v15 )
      {
        if ( !sort )
          goto LABEL_117;
        if ( sort->fields.isChoiceSort )
          this->fields.sortValue0 = 10LL;
      }
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( !iconLabelInfo2 || (IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL), !sort) )
LABEL_117:
        sub_1BE4D28(iconLabelInfo2, v8);
      userCommandCodeEntity = this->fields.userCommandCodeEntity;
      sortKind = sort->fields.sortKind;
      if ( !userCommandCodeEntity )
      {
        iconLabelInfo2 = 1LL;
        switch ( sortKind )
        {
          case 0:
            partyIndex = this->fields.partyIndex;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue0 = (int)partyIndex >= 0;
            goto LABEL_63;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              goto LABEL_117;
            v27 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v72.fields.fakeValue = v27;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v70 = v72;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v70, 0LL);
            v28 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v28 )
              goto LABEL_117;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v28->fields.createdAt, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            v29 = this->fields.iconLabelInfo2;
            v30 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v29 )
              goto LABEL_117;
            IconLabelInfo__Set_39043324(v29, 2, v30, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)iconLabelInfo2, 0LL);
            LOBYTE(iconLabelInfo2) = 1;
            if ( IsMaterialTd )
              this->fields.isNeedAdjustIconLabelScale = 1;
            return iconLabelInfo2;
          case 2:
            partyIndex = this->fields.rarity;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            goto LABEL_63;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            v32 = *(int *)(iconLabelInfo2 + 256);
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v32;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !iconLabelInfo1 )
              goto LABEL_117;
            IconLabelInfo__Set_39043324(iconLabelInfo1, 2, v32, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_105;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            UserServantEntity__getTreasureDeviceInfo_41175800(
              (UserServantEntity_o *)iconLabelInfo2,
              &tdMaxLv[1],
              tdMaxLv,
              0LL);
            LODWORD(hpReinforceValue) = tdMaxLv[1];
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = tdMaxLv[1];
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            nowMaxHpReinforceValue = tdMaxLv[0];
            v36 = 33;
            goto LABEL_80;
          case 5:
            v37 = this->fields.userSvtEntity;
            if ( !v37 )
              goto LABEL_117;
            hp = v37->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            adjustHp = v37->fields.adjustHp;
            v40 = 3;
            goto LABEL_57;
          case 6:
            v41 = this->fields.userSvtEntity;
            if ( !v41 )
              goto LABEL_117;
            hp = v41->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            adjustHp = v41->fields.adjustAtk;
            v40 = 5;
LABEL_57:
            IconLabelInfo__Set_39043324((IconLabelInfo_o *)iconLabelInfo2, v40, hp, adjustHp, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            v42 = this->fields.iconLabelInfo2;
            goto LABEL_65;
          case 7:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_117;
            cost = servantEntity->fields.cost;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            IconLabelInfo__Set_39043324((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_81;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            partyIndex = -this->fields.priority;
LABEL_63:
            this->fields.sortValue1 = partyIndex;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            v42 = this->fields.iconLabelInfo1;
LABEL_65:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
            goto LABEL_66;
          case 10:
            v47 = *(_QWORD *)&this->fields.friendship.fields.currentCryptoKey;
            v46 = *(_QWORD *)&this->fields.friendship.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v74.fields.currentCryptoKey = v47;
            *(_QWORD *)&v74.fields.fakeValue = v46;
            v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v74, 0LL);
            v49 = this->fields.iconLabelInfo1;
            v50 = v48;
            friendship = this->fields.friendship;
            this->fields.sortValue1 = v50;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(friendship, 0LL);
            if ( !v49 )
              goto LABEL_117;
            IconLabelInfo__Set_39043324(v49, 32, iconLabelInfo2, this->fields.friendshipMax, 0, 0, 0, 0, 0LL);
            goto LABEL_81;
          case 14:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_114;
            manager = sort->fields.manager;
            if ( manager
              && (methodPtr_low = LOBYTE(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
            {
              if ( (ServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantListViewManager_TypeInfo )
                v53 = sort->fields.manager;
              else
                v53 = 0LL;
            }
            else
            {
              v53 = 0LL;
            }
            v64 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v63 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v78.fields.currentCryptoKey = v64;
            *(_QWORD *)&v78.fields.fakeValue = v63;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v78, 0LL);
            if ( !v53 )
              goto LABEL_117;
            iconLabelInfo2 = ServantListViewManager__GetAmountSortValue(
                               (ServantListViewManager_o *)v53,
                               iconLabelInfo2,
                               v65);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_114:
            v66 = this->fields.servantEntity;
            if ( !v66 )
              goto LABEL_117;
            collectionNo = v66->fields.collectionNo;
            v68 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v68 )
              goto LABEL_117;
            v42 = this->fields.iconLabelInfo1;
            lv = v68->fields.lv;
            iconLabelInfo2 = (int64_t)v68;
LABEL_66:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v42 )
              goto LABEL_117;
            IconLabelInfo__Set_39043324(v42, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_105;
          case 15:
            hpReinforceValue = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
            v36 = 44;
            goto LABEL_80;
          case 16:
            hpReinforceValue = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            nowMaxHpReinforceValue = this->fields.nowMaxAtkReinforceValue;
            v36 = 45;
LABEL_80:
            IconLabelInfo__Set_39043324(
              (IconLabelInfo_o *)iconLabelInfo2,
              v36,
              hpReinforceValue,
              nowMaxHpReinforceValue,
              0,
              0,
              0,
              0,
              0LL);
LABEL_81:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            v54 = this->fields.iconLabelInfo2;
            v55 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v54 )
              goto LABEL_117;
            IconLabelInfo__Set_39043324(v54, 2, v55, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
              goto LABEL_89;
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0LL) )
              goto LABEL_89;
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)iconLabelInfo2, 0LL) )
              goto LABEL_105;
LABEL_89:
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            goto LABEL_104;
          default:
            return iconLabelInfo2;
        }
      }
      switch ( sortKind )
      {
        case 1:
          v21 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v72.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v71 = v72;
          iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v71, 0LL);
          v22 = this->fields.userCommandCodeEntity;
          this->fields.sortValue1 = iconLabelInfo2;
          if ( !v22 )
            goto LABEL_117;
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          if ( !iconLabelInfo2 )
            goto LABEL_117;
          IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v22->fields.createdAt, 0, 0, 0, 0LL);
          break;
        case 14:
          if ( (this->fields.amountSortValue & 0x8000000000000000LL) != 0 )
          {
            v23 = sort->fields.manager;
            if ( v23
              && (v24 = LOBYTE(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v23->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v24) )
            {
              if ( (ServantListViewManager_c *)v23->klass->_2.typeHierarchy[v24 - 1] == ServantListViewManager_TypeInfo )
                v25 = sort->fields.manager;
              else
                v25 = 0LL;
            }
            else
            {
              v25 = 0LL;
            }
            v57 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
            v56 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v76.fields.currentCryptoKey = v57;
            *(_QWORD *)&v76.fields.fakeValue = v56;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v76, 0LL);
            if ( !v25 )
              goto LABEL_117;
            iconLabelInfo2 = ServantListViewManager__GetCommandCodeAmountSortValue(
                               (ServantListViewManager_o *)v25,
                               iconLabelInfo2,
                               v58);
            this->fields.amountSortValue = iconLabelInfo2;
          }
          commandCodeEntity = this->fields.commandCodeEntity;
          if ( !commandCodeEntity )
            goto LABEL_117;
          v61 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
          v60 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v77.fields.currentCryptoKey = v61;
          *(_QWORD *)&v77.fields.fakeValue = v60;
          v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v77, 0LL);
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          rarity = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (this->fields.amountSortValue << 48)) | v62;
          goto LABEL_103;
        case 2:
          rarity = this->fields.rarity;
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
LABEL_103:
          this->fields.sortValue1 = rarity;
          if ( iconLabelInfo2 )
          {
LABEL_104:
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL);
            break;
          }
          goto LABEL_117;
      }
LABEL_105:
      LOBYTE(iconLabelInfo2) = 1;
      return iconLabelInfo2;
    }
    LOBYTE(iconLabelInfo2) = 0;
  }
  return iconLabelInfo2;
}


bool __fastcall ServantListViewItem__SwapChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall ServantListViewItem__SwapLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool __fastcall ServantListViewItem___GetIsEventUpValShow_b__55_0(
        ServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  EventCampaignMaster_o *v11; // x21
  ServantFilterMaster_o *userSvtEntity; // x0
  __int64 v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B62E61 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B62E61 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  userSvtEntity = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v15, 0LL);
  if ( !entity || !v11 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v11, (int32_t)userSvtEntity, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userSvtEntity = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !userSvtEntity )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(userSvtEntity, this->fields.svtId, entity->fields.eventId, 0LL) )
    return 1;
  userSvtEntity = (ServantFilterMaster_o *)this->fields.userSvtEntity;
  if ( !userSvtEntity )
LABEL_17:
    sub_1BE4D28(userSvtEntity, v13);
  return UserServantEntity__getEventUpVal_41168560(
           (UserServantEntity_o *)userSvtEntity,
           this->fields.setupInfo,
           entity->fields.eventId,
           0LL,
           0LL);
}


CommandCodeEntity_o *__fastcall ServantListViewItem__get_CommandCode(
        ServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeEntity;
}


int32_t __fastcall ServantListViewItem__get_CommandCodeId(ServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4B62E5E & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B62E5E = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v6, 0LL);
}


IconLabelInfo_o *__fastcall ServantListViewItem__get_IconInfo1(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall ServantListViewItem__get_IconInfo2(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall ServantListViewItem__get_IsCanNotSelect(ServantListViewItem_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall ServantListViewItem__get_IsChocolateSvtEquip(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool __fastcall ServantListViewItem__get_IsChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall ServantListViewItem__get_IsDispChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall ServantListViewItem__get_IsDispLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall ServantListViewItem__get_IsEnabled(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool __fastcall ServantListViewItem__get_IsEventJoin(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool __fastcall ServantListViewItem__get_IsFriendShipSvtEq(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool __fastcall ServantListViewItem__get_IsLeave(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLeave;
}


bool __fastcall ServantListViewItem__get_IsLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall ServantListViewItem__get_IsMaterialTdSvt(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialTdSvt;
}


bool __fastcall ServantListViewItem__get_IsNeedAdjustIconLabelScale(
        ServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNeedAdjustIconLabelScale;
}


bool __fastcall ServantListViewItem__get_IsParty(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool __fastcall ServantListViewItem__get_IsPartyEquip(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPartyEquip;
}


bool __fastcall ServantListViewItem__get_IsPush(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall ServantListViewItem__get_IsSwapChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall ServantListViewItem__get_IsSwapLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall ServantListViewItem__get_IsUse(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


System_String_o *__fastcall ServantListViewItem__get_NameText(ServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B62E5F & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_19307/*"error"*/, v3);
    byte_4B62E5F = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19307/*"error"*/;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(servantEntity, v8, -1, 0LL);
}


ServantEntity_o *__fastcall ServantListViewItem__get_Servant(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall ServantListViewItem__get_SvtId(ServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4B62E5D & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B62E5D = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v6, 0LL);
}


UserCommandCodeEntity_o *__fastcall ServantListViewItem__get_UserCommandCode(
        ServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeEntity;
}


UserServantEntity_o *__fastcall ServantListViewItem__get_UserServant(
        ServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void __fastcall ServantListViewItem__set_IsEnabled(ServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void __fastcall ServantListViewItem__set_IsPush(ServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPush = value;
}