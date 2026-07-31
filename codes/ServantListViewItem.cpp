void ServantListViewItem___ctor(
        ServantListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  IconLabelInfo_o *v20; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int64_t Instance; // x0
  __int64 v35; // x1
  struct ServantEntity_o *ServantEntity; // x0
  ServantEntity_o **p_servantEntity; // x22
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // q0
  __int64 v51; // x1
  __int64 v52; // x2
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  const MethodInfo_476E8C0 *v65; // x0
  Il2CppObject *MasterData_object; // x25
  struct UserServantEntity_o *v67; // x8
  int32_t v68; // w26
  const MethodInfo *v69; // x2
  struct ServantEntity_o *v70; // x8
  bool IsLeave; // w8
  bool IsLock; // w8
  bool IsChoice; // w8
  bool IsFriendShipSvtEquip; // w8
  bool IsChocolateSvtEquip; // w8
  bool IsMaterialTd; // w0
  const MethodInfo_476E8C0 *v77; // x8
  __int64 v78; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v79; // x8
  UserServantCollectionMaster_o *v80; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // q1
  int64_t v82; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // kr10_16
  __int128 v84; // q1
  __int64 v85; // x25
  struct UserServantEntity_o *v86; // x8
  __int128 v87; // q1
  int64_t v88; // x25
  il2cpp_array_size_t max_length; // x8
  __int64 v90; // x9
  il2cpp_array_size_t v91; // x8
  __int64 v92; // x9
  struct System_Int32_array *EquipCategoryIdList; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  int32_t v100; // w1
  struct System_Int32_array **p_equipCategoryIdList; // x0
  char v102; // w8
  UserServantEntity_o *v103; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v112; // x8
  __int64 rarity; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v114; // x9
  ServantEntity_o *v115; // x8
  __int64 v116; // x21
  __int64 currentCryptoKey; // x22
  __int64 v118; // x2
  struct UserServantEntity_o *v119; // x8
  __int64 v120; // x21
  __int64 v121; // x22
  __int64 v122; // x2
  struct UserServantEntity_o *v123; // x8
  __int128 v124; // q0
  __int128 v125; // q1
  int v126; // w8
  __int64 v127; // x1
  __int64 v128; // x2
  int64_t v129; // x8
  BalanceConfig_c *v130; // x0
  int32_t adjustHp; // w22
  struct BalanceConfig_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+90h] [xbp-90h]
  int32_t friendshipRank; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16

  if ( (byte_59344D0 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59344D0 = 1;
  }
  friendshipRank = 0;
  v13 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0);
  this->fields.iconLabelInfo2 = v20;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !userSvtEntity )
    goto LABEL_70;
  ServantEntity = UserServantEntity__GetServantEntity(userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( !this->fields.servantEntity )
    goto LABEL_70;
  id = this->fields.servantEntity->fields.id;
  this->fields.userCommandCodeEntity = 0;
  this->fields.svtId = id;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.userCommandCodeEntity, 0, v44, v45, v46, v47, v48, v49);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51, v52);
  this->fields.commandCodeId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  this->fields.commandCodeEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeEntity, 0, v53, v54, v55, v56, v57, v58);
  this->fields.setupInfo = setupInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v65 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  *(_QWORD *)&this->fields.bonusKind = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v65);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(this->fields.svtId, 0);
  v67 = this->fields.userSvtEntity;
  if ( !v67 )
    goto LABEL_70;
  v68 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v67->fields.limitCount, 0);
  if ( !MasterData_object )
    goto LABEL_70;
  ServantLimitMaster__GetEntity((ServantLimitMaster_o *)MasterData_object, v68, Instance, 0);
  ServantListViewItem__SetOverwriteStatus(this, userSvtEntity, v69);
  v70 = this->fields.servantEntity;
  if ( !v70 )
    goto LABEL_70;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.classId = v70->fields.classId;
  if ( !Instance )
    goto LABEL_70;
  IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isLeave = IsLeave;
  if ( !Instance )
    goto LABEL_70;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_70;
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  if ( !Instance )
    goto LABEL_70;
  IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = IsFriendShipSvtEquip;
  if ( !Instance )
    goto LABEL_70;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !Instance )
    goto LABEL_70;
  IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0);
  v77 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isMaterialTdSvt = IsMaterialTd;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v77);
  if ( !Instance )
    goto LABEL_70;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v79 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_70;
  v80 = (UserServantCollectionMaster_o *)Instance;
  v81 = v79[4];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v137.fields.currentCryptoKey = v79[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v137.fields.fakeValue = v81;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v78);
  v136 = v137;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v136, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_70;
  v82 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412((*p_userSvtEntity)[5], 0);
  if ( !v80 )
    goto LABEL_70;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v80, v82, Instance, 0);
  if ( !Instance )
    goto LABEL_70;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0);
  v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0);
  v35 = *(_QWORD *)&v83.fields.fakeValue;
  *(_QWORD *)&this->fields.friendship.fields.currentCryptoKey = *(_QWORD *)&v83.fields.currentCryptoKey;
  Instance = (int64_t)this->fields.userSvtEntity;
  *(_QWORD *)&this->fields.friendship.fields.fakeValue = *(_QWORD *)&v83.fields.fakeValue;
  this->fields.partyIndex = -1;
  *(_WORD *)&this->fields.isPartyEquip = 0;
  if ( !Instance )
    goto LABEL_70;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_70;
  v84 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v85 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v135.fields.fakeValue = v84;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v135, 0);
  v86 = this->fields.userSvtEntity;
  this->fields.isEnabled = 1;
  this->fields.isPush = v85 == Instance;
  if ( !v86 )
    goto LABEL_70;
  v87 = *(_OWORD *)&v86->fields.id.fields.fakeValue;
  *(_OWORD *)&v134.fields.currentCryptoKey = *(_OWORD *)&v86->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v134.fields.fakeValue = v87;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v134, 0);
  if ( !*p_servantEntity )
    goto LABEL_70;
  v88 = Instance;
  Instance = ServantEntity__get_IsKeepServantEquip(*p_servantEntity, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( partyUserEquipList )
    {
      max_length = partyUserEquipList->max_length;
      if ( (int)max_length >= 1 )
      {
        v90 = 0;
        while ( v88 != partyUserEquipList->m_Items[v90] )
        {
          if ( (_DWORD)max_length == (_DWORD)++v90 )
            goto LABEL_42;
        }
        this->fields.partyIndex = v90;
        *(_WORD *)&this->fields.isPartyEquip = 257;
      }
LABEL_42:
      Instance = (int64_t)*p_userSvtEntity;
      if ( *p_userSvtEntity )
      {
        EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0);
        v100 = (int)EquipCategoryIdList;
        this->fields.equipCategoryIdList = EquipCategoryIdList;
        p_equipCategoryIdList = &this->fields.equipCategoryIdList;
        goto LABEL_52;
      }
    }
LABEL_70:
    sub_21FFECC(Instance, v35);
  }
  if ( !partyUserServantList )
    goto LABEL_70;
  v91 = partyUserServantList->max_length;
  if ( (int)v91 >= 1 )
  {
    v92 = 0;
    while ( v88 != partyUserServantList->m_Items[v92] )
    {
      if ( (_DWORD)v91 == (_DWORD)++v92 )
        goto LABEL_45;
    }
    this->fields.partyIndex = v92;
  }
LABEL_45:
  Instance = UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0);
  if ( (Instance & 1) != 0 )
  {
    Instance = UserServantEntity__CheckBaseServant(userSvtEntity, -1, 0);
    v102 = Instance ^ 1;
  }
  else
  {
    v102 = 0;
  }
  if ( !this )
    goto LABEL_70;
  this->fields.isTransformed = v102 & 1;
  Instance = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userSvtEntity, -1, 0, 0);
  v103 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v103 )
    goto LABEL_70;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v103, -1, Instance, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_70;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   this->fields.dispLimitCount,
                                   0);
  v100 = (int)TreasureDeviceCategoryIdList;
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
LABEL_52:
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_equipCategoryIdList, v100, v94, v95, v96, v97, v98, v99);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_70;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_70;
  v112 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.priority = v112;
  this->fields.sortValue1B = v112;
  if ( !Instance )
    goto LABEL_70;
  rarity = (unsigned int)this->fields.rarity;
  Instance = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_70;
  v114 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_70;
  v115 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_70;
  v116 = *(int *)(Instance + 208);
  currentCryptoKey = v114[25].fields.currentCryptoKey;
  Instance = ServantEntity__get_IsServantMaterialTd(v115, 0);
  v119 = this->fields.userSvtEntity;
  this->fields.sortValue2 = (v116 << 16) | (rarity << 48) | (2 * currentCryptoKey) | Instance & 1;
  if ( !v119 )
    goto LABEL_70;
  v120 = *(_QWORD *)&v119->fields.svtId.fields.currentCryptoKey;
  v121 = *(_QWORD *)&v119->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v118);
  *(_QWORD *)&v139.fields.currentCryptoKey = v120;
  *(_QWORD *)&v139.fields.fakeValue = v121;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v139, 0);
  v123 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v123 )
    goto LABEL_70;
  v124 = *(_OWORD *)&v123->fields.id.fields.currentCryptoKey;
  v125 = *(_OWORD *)&v123->fields.id.fields.fakeValue;
  v126 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v137.fields.currentCryptoKey = v124;
  *(_OWORD *)&v137.fields.fakeValue = v125;
  if ( !v126 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v122);
  v133 = v137;
  v129 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v133, 0);
  v130 = BalanceConfig_TypeInfo;
  this->fields.sortValueLast = v129;
  this->fields.amountSortValue = -1;
  adjustHp = userSvtEntity->fields.adjustHp;
  if ( !*(&v130->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v130, v127, v128);
    v130 = BalanceConfig_TypeInfo;
  }
  static_fields = v130->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userSvtEntity->fields.adjustAtk;
  UserServantEntity__GetAdjustMaxData(
    userSvtEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  if ( !Instance )
    goto LABEL_70;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)this->fields.iconLabelInfo2;
  if ( !Instance )
    goto LABEL_70;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void ServantListViewItem___ctor_41719232(
        ServantListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        System_Int64_array *attachUserCommandCodeList,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  IconLabelInfo_o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int64_t Instance; // x0
  __int64 v30; // x1
  const MethodInfo_476E8C0 *v31; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x23
  __int64 v36; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x22
  Il2CppObject *Entity; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // kr00_16
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  int32_t rarity; // w8
  bool IsLock; // w8
  bool IsChoice; // w0
  struct System_Int32_array *CategoryIdList; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  __int64 v69; // x2
  struct UserCommandCodeEntity_o *v70; // x8
  __int128 v71; // q1
  __int64 v72; // x2
  int max_length; // w8
  int64_t *m_Items; // x9
  __int64 v75; // t1
  struct CommandCodeEntity_o *v76; // x8
  __int64 v77; // x20
  __int64 v78; // x21
  __int64 v79; // x23
  __int64 v80; // x8
  __int64 v81; // x2
  struct UserCommandCodeEntity_o *v82; // x8
  __int128 v83; // q0
  __int128 v84; // q1
  int v85; // w8
  int64_t v86; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_59344D1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59344D1 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo1 = v9;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo2 = v16;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)userCommandCodeEntity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( !userCommandCodeEntity )
    goto LABEL_30;
  v31 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.commandCodeId = userCommandCodeEntity->fields.commandCodeId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v31);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v35 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34);
  *(_QWORD *)&v90.fields.currentCryptoKey = v35;
  *(_QWORD *)&v90.fields.fakeValue = v36;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v90, 0);
  if ( !v37 )
    goto LABEL_30;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v37,
             Instance,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeEntity,
    (int32_t)Entity,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.userSvtEntity = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity, 0, v45, v46, v47, v48, v49, v50);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  this->fields.servantEntity = 0;
  this->fields.svtId = v51;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity, 0, v52, v53, v54, v55, v56, v57);
  commandCodeEntity = this->fields.commandCodeEntity;
  this->fields.classId = 0;
  if ( !commandCodeEntity )
    goto LABEL_30;
  rarity = commandCodeEntity->fields.rarity;
  Instance = (int64_t)this->fields.userCommandCodeEntity;
  this->fields.isLeave = 0;
  this->fields.rarity = rarity;
  if ( !Instance )
    goto LABEL_30;
  IsLock = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userCommandCodeEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_30;
  IsChoice = UserCommandCodeEntity__IsChoice((UserCommandCodeEntity_o *)Instance, 0);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isFriendShipSvtEq = 0;
  this->fields.isChoice = IsChoice;
  this->fields.friendshipMax = 0;
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  this->fields.partyIndex = -1;
  *(_WORD *)&this->fields.isPartyEquip = 0;
  *(_WORD *)&this->fields.isEventJoin = 0;
  this->fields.isEnabled = 1;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(userCommandCodeEntity, 0);
  this->fields.commandCodeCategoryIdList = CategoryIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeCategoryIdList,
    (int32_t)CategoryIdList,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v70 = this->fields.userCommandCodeEntity;
  if ( !v70 )
    goto LABEL_30;
  v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
  *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v89.fields.fakeValue = v71;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30, v69);
  v88 = v89;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v88, 0);
  if ( !attachUserCommandCodeList )
    goto LABEL_30;
  max_length = attachUserCommandCodeList->max_length;
  if ( max_length >= 1 )
  {
    m_Items = attachUserCommandCodeList->m_Items;
    while ( 1 )
    {
      v75 = *m_Items++;
      if ( Instance == v75 )
        break;
      if ( !--max_length )
        goto LABEL_21;
    }
    this->fields.isUse = 1;
  }
LABEL_21:
  v76 = this->fields.commandCodeEntity;
  this->fields.priority = 0;
  this->fields.sortValue1B = 0;
  if ( !v76 )
    goto LABEL_30;
  v77 = *(_QWORD *)&v76->fields.collectionNo.fields.currentCryptoKey;
  v78 = *(_QWORD *)&v76->fields.collectionNo.fields.fakeValue;
  v79 = (unsigned int)this->fields.rarity;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v72);
  *(_QWORD *)&v91.fields.currentCryptoKey = v77;
  *(_QWORD *)&v91.fields.fakeValue = v78;
  v80 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v91, 0) << 16;
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v80 | (v79 << 48);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(commandCodeId, 0);
  v82 = this->fields.userCommandCodeEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v82 )
    goto LABEL_30;
  v83 = *(_OWORD *)&v82->fields.id.fields.currentCryptoKey;
  v84 = *(_OWORD *)&v82->fields.id.fields.fakeValue;
  v85 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v89.fields.currentCryptoKey = v83;
  *(_OWORD *)&v89.fields.fakeValue = v84;
  if ( !v85 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30, v81);
  v87 = v89;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v87, 0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v86;
  this->fields.amountSortValue = -1;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)this->fields.iconLabelInfo2) == 0) )
  {
LABEL_30:
    sub_21FFECC(Instance, v30);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void ServantListViewItem__Finalize(ServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool ServantListViewItem__GetIsEventUpValShow(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantListViewItem_o *v4; // x19
  int32_t bonusKind2; // w8
  bool result; // w0
  __int64 bonusKindId; // x2
  unsigned int bonusKind2Id; // w9
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  System_Func_object__bool__o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v4 = this;
  if ( (byte_59344D7 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_ServantListViewItem__GetIsEventUpValShow_b__57_0__);
    this = (ServantListViewItem_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59344D7 = 1;
  }
  if ( !sort )
    goto LABEL_38;
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  result = 1;
  if ( (unsigned int)bonusKind2 <= 7 && ((1 << bonusKind2) & 0xB9) != 0 )
  {
    if ( v4->fields.bonusKind == bonusKind2 )
    {
      bonusKindId = (unsigned int)v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKind2Id;
      if ( (_DWORD)bonusKindId == bonusKind2Id )
      {
LABEL_14:
        result = 0;
        if ( bonusKind2 <= 3 )
        {
          if ( bonusKind2 )
          {
            if ( bonusKind2 == 3 )
            {
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, bonusKindId);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
              v12 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
              v13 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
              *(_QWORD *)&v16.fields.currentCryptoKey = v12;
              *(_QWORD *)&v16.fields.fakeValue = v13;
              this = (ServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                v16,
                                                0);
              if ( !Master_object )
                goto LABEL_38;
              return EventCampaignMaster__IsEnableServant(
                       (EventCampaignMaster_o *)Master_object,
                       (int32_t)this,
                       v4->fields.bonusKindId,
                       0);
            }
          }
          else
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, bonusKindId);
            this = (ServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventGroupMaster___);
            if ( !this )
              goto LABEL_38;
            EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                  (EventGroupMaster_o *)this,
                                  v4->fields.bonusKindId,
                                  0);
            this = (ServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)EntitiesByGroupId,
                                              0);
            if ( ((unsigned __int8)this & 1) != 0 )
              return 0;
            if ( !EntitiesByGroupId )
              goto LABEL_38;
            if ( EntitiesByGroupId->fields._size < 2 )
            {
              return 0;
            }
            else
            {
              v15 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventGroupEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v15,
                (Il2CppObject *)v4,
                Method_ServantListViewItem__GetIsEventUpValShow_b__57_0__,
                0);
              return BasicHelper__Any_object_(
                       (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                       (System_Func_T__bool__o *)v15,
                       (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_EventGroupEntity___);
            }
          }
        }
        else
        {
          if ( (unsigned int)(bonusKind2 - 4) < 2 )
          {
            this = (ServantListViewItem_o *)v4->fields.userSvtEntity;
            if ( this )
              return UserServantEntity__getEventUpVal(
                       (UserServantEntity_o *)this,
                       v4->fields.setupInfo,
                       bonusKindId,
                       0,
                       0);
LABEL_38:
            sub_21FFECC(this, sort);
          }
          if ( bonusKind2 == 7 )
          {
            this = (ServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_38;
            this = (ServantListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            if ( !this )
              goto LABEL_38;
            return ServantFilterMaster__IsEnableServant(
                     (ServantFilterMaster_o *)this,
                     v4->fields.svtId,
                     v4->fields.bonusKindId,
                     0);
          }
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


bool ServantListViewItem__IsMatchCommandCodeFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  _BOOL4 isChoice; // w8

  if ( (byte_59344D6 & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_59344D6 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_20;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_20;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !RarityFilterKindList )
LABEL_20:
    sub_21FFECC(RarityFilterKindList, sort);
  if ( !LODWORD(RarityFilterKindList->max_length) )
    sub_21FFED4(RarityFilterKindList);
  RarityFilterKindList->m_Items[0] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    || !ListViewSort__GetFilter(sort, 39, 0) )
  {
    return 1;
  }
  isChoice = this->fields.isChoice;
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  return isChoice;
}


bool ServantListViewItem__IsMatchFilter(ServantListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
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
      sub_21FFECC(0, sort);
    if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0) )
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


bool ServantListViewItem__IsMatchServantEquipFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  bool HaveStatusFilter; // w8
  _BOOL4 isChoice; // w8

  if ( (byte_59344D5 & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_59344D5 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0) )
  {
    return 0;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
    v8 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v8->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                          (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v16 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
      v16 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v16->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_21FFED4(RarityFilterKindList);
        RarityFilterKindList->m_Items[0] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
          || !ListViewSort__GetFilter(sort, 39, 0) )
        {
          return 1;
        }
        isChoice = this->fields.isChoice;
        if ( this->fields.isSwapChoice )
          return !this->fields.isChoice;
        return isChoice;
      }
LABEL_36:
      sub_21FFECC(RarityFilterKindList, sort);
    }
  }
  return result;
}


bool ServantListViewItem__IsMatchServantFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  __int64 v16; // x2
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v22; // x2
  _BOOL4 isChoice; // w8
  FilterKindList_c *v24; // x0
  ListViewSort_FilterKind_array *v25; // x21
  UserServantEntity_o *v27; // x0
  bool v28; // w8
  _BOOL4 v29; // w21
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v46; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v48; // w0

  if ( (byte_59344D4 & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_21FFC50(&ServantEventBonusFilterController_TypeInfo);
    byte_59344D4 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_75;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_75;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            ClassGroupFilterKindList,
                                            (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v16);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v17->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !*(&ServantEventBonusFilterController_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v19, v20);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0) )
      return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
    goto LABEL_35;
  v27 = this->fields.userSvtEntity;
  if ( v27 )
  {
    if ( UserServantEntity__get_IsSaveTransformServant(v27, 0) )
    {
      ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userSvtEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_75;
      v28 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)ClassGroupFilterKindList, -1, 0);
    }
    else
    {
      v28 = 0;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userSvtEntity;
    if ( ClassGroupFilterKindList )
    {
      v29 = v28;
      DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                                -1,
                                                0,
                                                0);
      if ( this->fields.isTransformed != v29 || this->fields.dispLimitCount != DispLimitCountStageSealAfterIndexZero )
      {
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userSvtEntity;
        this->fields.isTransformed = v29;
        this->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
        if ( !ClassGroupFilterKindList )
          goto LABEL_75;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                -1,
                                DispLimitCountStageSealAfterIndexZero,
                                0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_75;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         this->fields.dispLimitCount,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      goto LABEL_62;
    }
LABEL_75:
    sub_21FFECC(ClassGroupFilterKindList, sort);
  }
LABEL_62:
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_76;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_76:
    sub_21FFED4(ClassGroupFilterKindList);
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 51;
  v46 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0);
  v48 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
  if ( IsUnSelectedAllTargetFilters && v46 || !IsUnSelectedAllTargetFilters && !v46 )
  {
    if ( !IsMatchEffectCategory && !v48 )
      return 0;
  }
  else if ( IsUnSelectedAllTargetFilters )
  {
    if ( !v48 )
      return 0;
  }
  else if ( !IsMatchEffectCategory )
  {
    return 0;
  }
LABEL_35:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_76;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = this->fields.isChoice;
    if ( this->fields.isSwapChoice )
      isChoice = !this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v24 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v22);
    v24 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v24->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_75;
  v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v25, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void ServantListViewItem__ModifyChoiceItem(ServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsChoice; // w0
  UserCommandCodeEntity_o *userCommandCodeEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0);
LABEL_5:
    this->fields.isChoice = IsChoice;
    goto LABEL_6;
  }
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( userCommandCodeEntity )
  {
    IsChoice = UserCommandCodeEntity__IsChoice(userCommandCodeEntity, 0);
    goto LABEL_5;
  }
LABEL_6:
  this->fields.isSwapChoice = 0;
}


void ServantListViewItem__ModifyLockItem(ServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  bool IsLock; // w0
  UserCommandCodeEntity_o *userCommandCodeEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
LABEL_5:
    this->fields.isLock = IsLock;
    goto LABEL_6;
  }
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( userCommandCodeEntity )
  {
    IsLock = UserCommandCodeEntity__IsLock(userCommandCodeEntity, 0);
    goto LABEL_5;
  }
LABEL_6:
  this->fields.isSwapLock = 0;
}


void ServantListViewItem__ModifyUserCommandCodeEntity(
        ServantListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)userCommandCodeEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantListViewItem__ModifyUserServantEntity(
        ServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_userSvtEntity; // x20
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  UserServantEntity_o *userSvtEntity; // x0
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct ServantEntity_o *v22; // x8
  const MethodInfo_476E8C0 *v23; // x0
  int64_t currentCryptoKey_high; // x8
  __int64 rarity; // x22
  struct UserServantEntity_o *v26; // x9
  ServantEntity_o *v27; // x8
  __int64 currentCryptoKey; // x20
  __int64 lv; // x21

  if ( (byte_59344D2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59344D2 = 1;
  }
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServantEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantListViewItem__SetOverwriteStatus(this, userServantEntity, v11);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_13;
  ServantEntity = UserServantEntity__GetServantEntity(userSvtEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = this->fields.servantEntity;
  if ( !v22 )
    goto LABEL_13;
  this->fields.svtId = v22->fields.id;
  v23 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.classId = v22->fields.classId;
  userSvtEntity = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance(v23);
  if ( !userSvtEntity )
    goto LABEL_13;
  userSvtEntity = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)userSvtEntity,
                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !userSvtEntity )
    goto LABEL_13;
  userSvtEntity = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
                                           this->fields.classId,
                                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !userSvtEntity )
    goto LABEL_13;
  currentCryptoKey_high = SHIDWORD(userSvtEntity->fields.userId.fields.currentCryptoKey);
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.priority = currentCryptoKey_high;
  this->fields.sortValue1B = currentCryptoKey_high;
  if ( !userSvtEntity
    || (rarity = (unsigned int)this->fields.rarity,
        (userSvtEntity = (UserServantEntity_o *)UserServantEntity__get_BaseServantEntity(userSvtEntity, 0)) == 0)
    || (v26 = *p_userSvtEntity) == 0
    || (v27 = *p_servantEntity) == 0 )
  {
LABEL_13:
    sub_21FFECC(userSvtEntity, v12);
  }
  currentCryptoKey = userSvtEntity->fields.randomLimitCount.fields.currentCryptoKey;
  lv = v26->fields.lv;
  this->fields.sortValue2 = (currentCryptoKey << 16)
                          | (rarity << 48)
                          | (2 * lv)
                          | ServantEntity__get_IsServantMaterialTd(v27, 0);
}


void ServantListViewItem__SetOverwriteStatus(
        ServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  ServantListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this, (this = (ServantListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0)) == 0) )
  {
    sub_21FFECC(this, userServantEntity);
  }
  *(int8x16_t *)&v3->fields.rarity = vextq_s8(
                                       *(int8x16_t *)&this->fields.selectNum,
                                       *(int8x16_t *)&this->fields.selectNum,
                                       8u);
}


bool ServantListViewItem__SetSortValue(ServantListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  ServantListViewItem_c *klass; // x9
  const MethodInfo *v6; // x2
  __int64 (__fastcall *methodPtr)(ServantListViewItem_o *, ListViewSort_o *, const MethodInfo *); // x8
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  char v10; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v14; // zf
  _BOOL4 v15; // w8
  int v16; // w10
  __int64 v17; // x2
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  int32_t sortKind; // w9
  int64_t v20; // x8
  int64_t partyIndex; // x8
  struct ListViewManager_o *v22; // x8
  __int64 v23; // x11
  struct ListViewManager_o *v24; // x20
  __int128 v25; // q1
  struct UserCommandCodeEntity_o *v26; // x8
  int64_t amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v30; // x20
  int32_t v31; // w2
  int64_t atkReinforceValue; // x2
  int64_t hp; // x20
  IconLabelInfo_o *v34; // x21
  int64_t hpReinforceValue; // x2
  int64_t v36; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v39; // q1
  struct UserServantEntity_o *v40; // x8
  IconLabelInfo_o *v41; // x20
  int32_t v42; // w21
  bool IsMaterialTd; // w8
  int64_t atk; // x20
  IconLabelInfo_o *v45; // x21
  IconLabelInfo_o *v46; // x19
  int64_t cost; // x2
  __int64 v48; // x20
  __int64 v49; // x21
  int64_t v50; // x8
  IconLabelInfo_o *v51; // x20
  IconLabelInfo_o *v52; // x20
  int32_t v53; // w21
  __int64 v54; // x21
  __int64 v55; // x22
  const MethodInfo *v56; // x2
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v58; // x20
  __int64 v59; // x21
  __int64 v60; // x9
  struct UserServantEntity_o *v61; // x8
  __int64 v62; // x21
  __int64 v63; // x22
  const MethodInfo *v64; // x2
  __int64 rarity; // x20
  __int64 v66; // x9
  int32_t v67; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+50h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_59344D3 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantListViewManager_TypeInfo);
    byte_59344D3 = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  this->fields.isNeedAdjustIconLabelScale = 0;
  methodPtr = (__int64 (__fastcall *)(ServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr;
  v6 = klass->vtable._5_IsMatchFilter.method;
  *(_QWORD *)tdMaxLv = 0;
  v10 = methodPtr(this, sort, v6);
  iconLabelInfo2 = 0;
  if ( (v10 & 1) != 0 )
  {
    if ( !this->fields.userSvtEntity
      || (iconLabelInfo2 = ServantListViewItem__GetIsEventUpValShow(this, sort, v9), (iconLabelInfo2 & 1) != 0) )
    {
      isChoice = this->fields.isChoice;
      isSwapChoice = this->fields.isSwapChoice;
      this->fields.sortValue0 = 0;
      v14 = !isChoice;
      v15 = isChoice;
      v16 = v14;
      if ( isSwapChoice )
        v15 = v16;
      if ( v15 )
      {
        if ( !sort )
          goto LABEL_117;
        if ( sort->fields.isChoiceSort )
          this->fields.sortValue0 = 10;
      }
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( !iconLabelInfo2 )
LABEL_117:
        sub_21FFECC(iconLabelInfo2, v8);
      IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
      userCommandCodeEntity = this->fields.userCommandCodeEntity;
      if ( !userCommandCodeEntity )
      {
        if ( sort )
        {
          iconLabelInfo2 = 1;
          switch ( sort->fields.sortKind )
          {
            case 0:
              partyIndex = this->fields.partyIndex;
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              this->fields.sortValue0 = partyIndex >= 0;
              goto LABEL_111;
            case 1:
              userSvtEntity = this->fields.userSvtEntity;
              if ( !userSvtEntity )
                goto LABEL_117;
              v39 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
              *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v71.fields.fakeValue = v39;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v17);
              v69 = v71;
              iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v69, 0);
              v40 = this->fields.userSvtEntity;
              this->fields.sortValue1 = iconLabelInfo2;
              if ( !v40 )
                goto LABEL_117;
              iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v40->fields.createdAt, 0, 0, 0, 0);
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              v41 = this->fields.iconLabelInfo2;
              v42 = *(_DWORD *)(iconLabelInfo2 + 400);
              iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
              if ( !v41 )
                goto LABEL_117;
              IconLabelInfo__Set_47932852(v41, 2, v42, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)iconLabelInfo2, 0);
              LOBYTE(iconLabelInfo2) = 1;
              if ( IsMaterialTd )
                this->fields.isNeedAdjustIconLabelScale = 1;
              return iconLabelInfo2;
            case 2:
              partyIndex = this->fields.rarity;
              goto LABEL_86;
            case 3:
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              v36 = *(int *)(iconLabelInfo2 + 400);
              iconLabelInfo1 = this->fields.iconLabelInfo1;
              this->fields.sortValue1 = v36;
              iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
              if ( !iconLabelInfo1 )
                goto LABEL_117;
              IconLabelInfo__Set_47932852(iconLabelInfo1, 2, v36, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
              goto LABEL_115;
            case 4:
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              UserServantEntity__getTreasureDeviceInfo_50128532(
                (UserServantEntity_o *)iconLabelInfo2,
                &tdMaxLv[1],
                tdMaxLv,
                0);
              v31 = tdMaxLv[1];
              iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
              this->fields.sortValue1 = tdMaxLv[1];
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              IconLabelInfo__Set_47932852((IconLabelInfo_o *)iconLabelInfo2, 33, v31, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
              goto LABEL_74;
            case 5:
              hp = this->fields.hp;
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              this->fields.sortValue1 = hp;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              v34 = this->fields.iconLabelInfo1;
              iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
              if ( !v34 )
                goto LABEL_117;
              IconLabelInfo__Set_47932852(v34, 3, hp, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
              goto LABEL_66;
            case 6:
              atk = this->fields.atk;
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              this->fields.sortValue1 = atk;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              v45 = this->fields.iconLabelInfo1;
              iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
              if ( !v45 )
                goto LABEL_117;
              IconLabelInfo__Set_47932852(v45, 5, atk, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
LABEL_66:
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              v46 = this->fields.iconLabelInfo2;
              goto LABEL_113;
            case 7:
              cost = this->fields.cost;
              iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
              this->fields.sortValue1 = cost;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              IconLabelInfo__Set_47932852((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0, 0);
              goto LABEL_74;
            case 8:
              partyIndex = -this->fields.priority;
LABEL_86:
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              goto LABEL_111;
            case 0xA:
              v48 = *(_QWORD *)&this->fields.friendship.fields.currentCryptoKey;
              v49 = *(_QWORD *)&this->fields.friendship.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v17);
              *(_QWORD *)&v73.fields.currentCryptoKey = v48;
              *(_QWORD *)&v73.fields.fakeValue = v49;
              v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v73, 0);
              friendship = this->fields.friendship;
              v51 = this->fields.iconLabelInfo1;
              this->fields.sortValue1 = v50;
              iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(friendship, 0);
              if ( !v51 )
                goto LABEL_117;
              IconLabelInfo__Set_47932852(v51, 32, iconLabelInfo2, this->fields.friendshipMax, 0, 0, 0, 0, 0, 0);
              goto LABEL_74;
            case 0xE:
              amountSortValue = this->fields.amountSortValue;
              if ( (amountSortValue & 0x8000000000000000LL) == 0 )
                goto LABEL_108;
              manager = sort->fields.manager;
              if ( manager
                && (naturalAligment = ServantListViewManager_TypeInfo->_2.naturalAligment,
                    manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (ServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == ServantListViewManager_TypeInfo )
                  v30 = sort->fields.manager;
                else
                  v30 = 0;
              }
              else
              {
                v30 = 0;
              }
              v61 = this->fields.userSvtEntity;
              if ( !v61 )
                goto LABEL_117;
              v62 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
              v63 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v17);
              *(_QWORD *)&v77.fields.currentCryptoKey = v62;
              *(_QWORD *)&v77.fields.fakeValue = v63;
              iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v77, 0);
              if ( !v30 )
                goto LABEL_117;
              amountSortValue = ServantListViewManager__GetAmountSortValue(
                                  (ServantListViewManager_o *)v30,
                                  iconLabelInfo2,
                                  v64);
              this->fields.amountSortValue = amountSortValue;
LABEL_108:
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              rarity = this->fields.rarity;
              iconLabelInfo2 = (int64_t)UserServantEntity__get_BaseServantEntity(
                                          (UserServantEntity_o *)iconLabelInfo2,
                                          0);
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              v66 = *(int *)(iconLabelInfo2 + 208);
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              partyIndex = ((rarity << 32) + (amountSortValue << 48)) | v66;
LABEL_111:
              this->fields.sortValue1 = partyIndex;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              v46 = this->fields.iconLabelInfo1;
LABEL_113:
              v67 = *(_DWORD *)(iconLabelInfo2 + 400);
              iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
              if ( !v46 )
                goto LABEL_117;
              IconLabelInfo__Set_47932852(v46, 2, v67, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
              goto LABEL_115;
            case 0xF:
              hpReinforceValue = this->fields.hpReinforceValue;
              iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
              this->fields.sortValue1 = hpReinforceValue;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              IconLabelInfo__Set_47932852(
                (IconLabelInfo_o *)iconLabelInfo2,
                44,
                hpReinforceValue,
                this->fields.nowMaxHpReinforceValue,
                0,
                0,
                0,
                0,
                0,
                0);
              goto LABEL_74;
            case 0x10:
              atkReinforceValue = this->fields.atkReinforceValue;
              iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
              this->fields.sortValue1 = atkReinforceValue;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              IconLabelInfo__Set_47932852(
                (IconLabelInfo_o *)iconLabelInfo2,
                45,
                atkReinforceValue,
                this->fields.nowMaxAtkReinforceValue,
                0,
                0,
                0,
                0,
                0,
                0);
LABEL_74:
              iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              v52 = this->fields.iconLabelInfo2;
              v53 = *(_DWORD *)(iconLabelInfo2 + 400);
              iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
              if ( !v52 )
                goto LABEL_117;
              IconLabelInfo__Set_47932852(v52, 2, v53, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
              iconLabelInfo2 = (int64_t)this->fields.servantEntity;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0) )
                goto LABEL_82;
              iconLabelInfo2 = (int64_t)this->fields.servantEntity;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0) )
                goto LABEL_82;
              iconLabelInfo2 = (int64_t)this->fields.servantEntity;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)iconLabelInfo2, 0) )
                goto LABEL_115;
LABEL_82:
              iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
              iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
              if ( !iconLabelInfo2 )
                goto LABEL_117;
              goto LABEL_99;
            default:
              return iconLabelInfo2;
          }
        }
        goto LABEL_117;
      }
      if ( !sort )
        goto LABEL_117;
      sortKind = sort->fields.sortKind;
      switch ( sortKind )
      {
        case 1:
          v25 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v71.fields.fakeValue = v25;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v17);
          v70 = v71;
          iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v70, 0);
          v26 = this->fields.userCommandCodeEntity;
          this->fields.sortValue1 = iconLabelInfo2;
          if ( !v26 )
            goto LABEL_117;
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          if ( !iconLabelInfo2 )
            goto LABEL_117;
          IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v26->fields.createdAt, 0, 0, 0, 0);
          break;
        case 14:
          if ( this->fields.amountSortValue < 0 )
          {
            v22 = sort->fields.manager;
            if ( v22
              && (v23 = ServantListViewManager_TypeInfo->_2.naturalAligment,
                  v22->klass->_2.naturalAligment >= (unsigned int)v23) )
            {
              if ( (ServantListViewManager_c *)v22->klass->_2.typeHierarchy[v23 - 1] == ServantListViewManager_TypeInfo )
                v24 = sort->fields.manager;
              else
                v24 = 0;
            }
            else
            {
              v24 = 0;
            }
            v54 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
            v55 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v17);
            *(_QWORD *)&v75.fields.currentCryptoKey = v54;
            *(_QWORD *)&v75.fields.fakeValue = v55;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v75, 0);
            if ( !v24 )
              goto LABEL_117;
            iconLabelInfo2 = ServantListViewManager__GetCommandCodeAmountSortValue(
                               (ServantListViewManager_o *)v24,
                               iconLabelInfo2,
                               v56);
            this->fields.amountSortValue = iconLabelInfo2;
          }
          commandCodeEntity = this->fields.commandCodeEntity;
          if ( !commandCodeEntity )
            goto LABEL_117;
          v58 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
          v59 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v17);
          *(_QWORD *)&v76.fields.currentCryptoKey = v58;
          *(_QWORD *)&v76.fields.fakeValue = v59;
          v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v76, 0);
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          v20 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (this->fields.amountSortValue << 48))
              | v60;
          goto LABEL_98;
        case 2:
          v20 = this->fields.rarity;
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
LABEL_98:
          this->fields.sortValue1 = v20;
          if ( iconLabelInfo2 )
          {
LABEL_99:
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
            break;
          }
          goto LABEL_117;
      }
LABEL_115:
      LOBYTE(iconLabelInfo2) = 1;
      return iconLabelInfo2;
    }
    LOBYTE(iconLabelInfo2) = 0;
  }
  return iconLabelInfo2;
}


bool ServantListViewItem__SwapChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapChoice; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapChoice = this->fields.isSwapChoice;
  v4 = !isSwapChoice;
  v5 = !isSwapChoice;
  result = v4;
  this->fields.isSwapChoice = v5;
  return result;
}


bool ServantListViewItem__SwapLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isSwapLock; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isSwapLock = this->fields.isSwapLock;
  v4 = !isSwapLock;
  v5 = !isSwapLock;
  result = v4;
  this->fields.isSwapLock = v5;
  return result;
}


bool ServantListViewItem___GetIsEventUpValShow_b__57_0(
        ServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x22
  __int64 v9; // x23
  EventCampaignMaster_o *v10; // x21
  ServantFilterMaster_o *userSvtEntity; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_59344DA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59344DA = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (EventCampaignMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  userSvtEntity = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0);
  if ( !entity || !v10 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)userSvtEntity, entity->fields.eventId, 0) )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
  userSvtEntity = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !userSvtEntity )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(userSvtEntity, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  userSvtEntity = (ServantFilterMaster_o *)this->fields.userSvtEntity;
  if ( !userSvtEntity )
LABEL_17:
    sub_21FFECC(userSvtEntity, v12);
  return UserServantEntity__getEventUpVal(
           (UserServantEntity_o *)userSvtEntity,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0);
}


int32_t ServantListViewItem__get_CommandCodeId(ServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_59344D9 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59344D9 = 1;
  }
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v7, 0);
}


IconLabelInfo_o *ServantListViewItem__get_IconInfo1(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *ServantListViewItem__get_IconInfo2(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool ServantListViewItem__get_IsCanNotSelect(ServantListViewItem_o *this, const MethodInfo *method)
{
  return 0;
}


bool ServantListViewItem__get_IsChocolateSvtEquip(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool ServantListViewItem__get_IsChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool ServantListViewItem__get_IsDispChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool ServantListViewItem__get_IsDispLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool ServantListViewItem__get_IsEnabled(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool ServantListViewItem__get_IsEventJoin(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool ServantListViewItem__get_IsFriendShipSvtEq(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool ServantListViewItem__get_IsLeave(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLeave;
}


bool ServantListViewItem__get_IsLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool ServantListViewItem__get_IsMaterialTdSvt(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialTdSvt;
}


bool ServantListViewItem__get_IsNeedAdjustIconLabelScale(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNeedAdjustIconLabelScale;
}


bool ServantListViewItem__get_IsParty(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool ServantListViewItem__get_IsPush(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool ServantListViewItem__get_IsSwapChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool ServantListViewItem__get_IsSwapLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool ServantListViewItem__get_IsUse(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


ServantEntity_o *ServantListViewItem__get_Servant(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t ServantListViewItem__get_SvtId(ServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_59344D8 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59344D8 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v7, 0);
}


UserCommandCodeEntity_o *ServantListViewItem__get_UserCommandCode(
        ServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeEntity;
}


UserServantEntity_o *ServantListViewItem__get_UserServant(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


void ServantListViewItem__set_IsEnabled(ServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void ServantListViewItem__set_IsPush(ServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPush = value;
}