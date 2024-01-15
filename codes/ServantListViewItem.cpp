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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  IconLabelInfo_o *v34; // x25
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UserServantEntity_o **p_userSvtEntity; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v50; // x27
  __int64 v51; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x25
  int32_t v53; // w0
  struct ServantEntity_o *Entity; // x0
  ServantEntity_o **p_servantEntity; // x25
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  WebViewManager_o *v80; // x0
  ServantLimitMaster_o *v81; // x26
  int32_t v82; // w0
  struct UserServantEntity_o *v83; // x8
  int32_t v84; // w27
  int32_t v85; // w0
  const MethodInfo *v86; // x3
  ServantLimitEntity_o *v87; // x0
  int32_t rarity; // w8
  UserServantEntity_o *v89; // x0
  bool IsLeave; // w0
  UserServantEntity_o *v91; // x8
  bool IsLock; // w0
  UserServantEntity_o *v93; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v95; // x0
  bool IsFriendShipSvtEquip; // w0
  UserServantEntity_o *v97; // x8
  bool IsChocolateSvtEquip; // w0
  UserServantEntity_o *v99; // x8
  WebViewManager_o *v100; // x0
  WarQuestSelectionMaster_o *v101; // x0
  UserServantEntity_o *v102; // x8
  __int128 v103; // q1
  UserServantCollectionMaster_o *v104; // x26
  int64_t v105; // x27
  int32_t v106; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // kr10_16
  UserServantEntity_o *v109; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int128 v111; // q0
  __int128 v112; // q1
  int64_t pushUserSvtId; // x24
  int64_t v114; // x0
  struct UserServantEntity_o *v115; // x8
  __int128 v116; // q0
  int64_t v117; // x0
  int64_t v118; // x24
  signed int max_length; // w8
  __int64 v120; // x9
  signed int v121; // w8
  __int64 v122; // x9
  struct System_Int32_array *EquipCategoryIdList; // x1
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  struct System_Int32_array **p_equipCategoryIdList; // x0
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v132; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  UserServantEntity_o *v140; // x0
  WebViewManager_o *v141; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v142; // x0
  WarEntity_o *v143; // x0
  int64_t bannerId; // x8
  struct ServantEntity_o *servantEntity; // x0
  __int64 v146; // x20
  __int64 collectionNo; // x22
  __int64 lv; // x23
  __int64 v149; // x22
  __int64 v150; // x23
  int32_t v151; // w8
  struct UserServantEntity_o *v152; // x0
  int32_t adjustHp; // w20
  BalanceConfig_c *v154; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+70h] [xbp-80h]
  int32_t friendshipRank[3]; // [xsp+94h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16

  if ( (byte_40FC826 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v18);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_40FC826 = 1;
  }
  friendshipRank[0] = 0;
  v23 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userSvtEntity,
                             partyUserServantList,
                             partyUserEquipList);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo1 = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v34 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v30, v31, v32, v33);
  IconLabelInfo___ctor(v34, 0LL);
  this->fields.iconLabelInfo2 = v34;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( !this->fields.userSvtEntity )
    goto LABEL_69;
  this->fields.svtId = this->fields.userSvtEntity->fields.svtId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v51 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v162.fields.currentCryptoKey = v51;
  *(_QWORD *)&v162.fields.fakeValue = v50;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v162, 0LL);
  if ( !v52 )
    goto LABEL_69;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v52,
                                       v53,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.userCommandCodeEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity, 0LL, v62, v63, v64, v65, v66, v67);
  this->fields.commandCodeId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  this->fields.commandCodeEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.commandCodeEntity, 0LL, v68, v69, v70, v71, v72, v73);
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  v80 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v80 )
    goto LABEL_69;
  v81 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v80,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  v83 = this->fields.userSvtEntity;
  if ( !v83 )
    goto LABEL_69;
  v84 = v82;
  v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v83->fields.limitCount, 0LL);
  if ( !v81 )
    goto LABEL_69;
  v87 = ServantLimitMaster__GetEntity(v81, v84, v85, v86);
  if ( !*p_servantEntity )
    goto LABEL_69;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !v87 )
    goto LABEL_69;
  rarity = v87->fields.rarity;
  v89 = this->fields.userSvtEntity;
  this->fields.rarity = rarity;
  if ( !v89 )
    goto LABEL_69;
  IsLeave = UserServantEntity__IsLeave(v89, 0LL);
  v91 = this->fields.userSvtEntity;
  this->fields.isLeave = IsLeave;
  if ( !v91 )
    goto LABEL_69;
  IsLock = UserServantEntity__IsLock(v91, 0LL);
  v93 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !v93 )
    goto LABEL_69;
  IsChoice = UserServantEntity__IsChoice(v93, 0LL);
  v95 = this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !v95 )
    goto LABEL_69;
  IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip(v95, 0LL);
  v97 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = IsFriendShipSvtEquip;
  if ( !v97 )
    goto LABEL_69;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v97, 0LL);
  v99 = this->fields.userSvtEntity;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !v99 )
    goto LABEL_69;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v99, 0LL);
  v100 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v100 )
    goto LABEL_69;
  v101 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v100,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v102 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_69;
  v103 = *(_OWORD *)&v102->fields.userId.fields.fakeValue;
  v104 = (UserServantCollectionMaster_o *)v101;
  *(_OWORD *)&v160.fields.currentCryptoKey = *(_OWORD *)&v102->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v160.fields.fakeValue = v103;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v159 = v160;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v159, 0LL);
  v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  if ( !v104 )
    goto LABEL_69;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v104, v105, v106, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_69;
  UserServantCollectionEntity__getFriendShipRankInfo(EntityDefinitely, friendshipRank, &this->fields.friendshipMax, 0LL);
  v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  v109 = this->fields.userSvtEntity;
  this->fields.friendship = v108;
  this->fields.partyIndex = -1;
  *(_WORD *)&this->fields.isPartyEquip = 0;
  if ( !v109 )
    goto LABEL_69;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(v109, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_69;
  if ( !userSvtEntity )
    goto LABEL_69;
  v112 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v111 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v158.fields.currentCryptoKey = v112;
  *(_OWORD *)&v158.fields.fakeValue = v111;
  v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v158, 0LL);
  v115 = this->fields.userSvtEntity;
  this->fields.isPush = pushUserSvtId == v114;
  this->fields.isEnabled = 1;
  if ( !v115 )
    goto LABEL_69;
  v116 = *(_OWORD *)&v115->fields.id.fields.fakeValue;
  *(_OWORD *)&v157.fields.currentCryptoKey = *(_OWORD *)&v115->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v157.fields.fakeValue = v116;
  v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v157, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_69;
  v118 = v117;
  if ( ServantEntity__get_IsKeepServantEquip(*p_servantEntity, 0LL) )
  {
    if ( partyUserEquipList )
    {
      max_length = partyUserEquipList->max_length;
      if ( max_length >= 1 )
      {
        v120 = 0LL;
        while ( v118 != partyUserEquipList->m_Items[v120] )
        {
          if ( (int)++v120 >= max_length )
            goto LABEL_46;
        }
        this->fields.partyIndex = v120;
        *(_WORD *)&this->fields.isPartyEquip = 257;
      }
LABEL_46:
      if ( *p_userSvtEntity )
      {
        EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(*p_userSvtEntity, 0LL);
        p_equipCategoryIdList = &this->fields.equipCategoryIdList;
        this->fields.equipCategoryIdList = EquipCategoryIdList;
        goto LABEL_53;
      }
    }
LABEL_69:
    sub_B170D4();
  }
  if ( !partyUserServantList )
    goto LABEL_69;
  v121 = partyUserServantList->max_length;
  if ( v121 >= 1 )
  {
    v122 = 0LL;
    while ( v118 != partyUserServantList->m_Items[v122] )
    {
      if ( (int)++v122 >= v121 )
        goto LABEL_49;
    }
    this->fields.partyIndex = v122;
  }
LABEL_49:
  if ( !*p_userSvtEntity )
    goto LABEL_69;
  DispLimitCount = UserServantEntity__getDispLimitCount(*p_userSvtEntity, 0, 0LL);
  v132 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = DispLimitCount;
  if ( !v132 )
    goto LABEL_69;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v132, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v134,
    v135,
    v136,
    v137,
    v138,
    v139);
  v140 = this->fields.userSvtEntity;
  if ( !v140 )
    goto LABEL_69;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v140, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_53:
  sub_B16F98(
    (BattleServantConfConponent_o *)p_equipCategoryIdList,
    (System_Int32_array **)EquipCategoryIdList,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  v141 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v141 )
    goto LABEL_69;
  v142 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v141,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !v142 )
    goto LABEL_69;
  v143 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v142,
           this->fields.classId,
           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !v143 )
    goto LABEL_69;
  bannerId = v143->fields.bannerId;
  servantEntity = this->fields.servantEntity;
  this->fields.priority = bannerId;
  this->fields.sortValue1B = bannerId;
  if ( !servantEntity || !*p_userSvtEntity )
    goto LABEL_69;
  v146 = (unsigned int)this->fields.rarity;
  collectionNo = servantEntity->fields.collectionNo;
  lv = (*p_userSvtEntity)->fields.lv;
  this->fields.sortValue2 = (collectionNo << 16) | (v146 << 48) | (2 * lv) | ServantEntity__get_IsServantMaterialTd(
                                                                               servantEntity,
                                                                               0LL);
  v150 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v149 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v163.fields.currentCryptoKey = v150;
  *(_QWORD *)&v163.fields.fakeValue = v149;
  v151 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v163, 0LL);
  v152 = this->fields.userSvtEntity;
  this->fields.sortValue2B = v151;
  this->fields.amountSortValue = -1LL;
  if ( !v152 )
    goto LABEL_69;
  adjustHp = v152->fields.adjustHp;
  v154 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v154 = BalanceConfig_TypeInfo;
    v152 = *p_userSvtEntity;
  }
  this->fields.hpReinforceValue = v154->static_fields->StatusUpAdjustHp * adjustHp;
  if ( !v152 )
    goto LABEL_69;
  this->fields.atkReinforceValue = v154->static_fields->StatusUpAdjustAtk * v152->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v152,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  if ( !iconLabelInfo1 )
    goto LABEL_69;
  IconLabelInfo__Clear(iconLabelInfo1, 0LL);
  if ( !*p_iconLabelInfo2 )
    goto LABEL_69;
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewItem___ctor_29659972(
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
  IconLabelInfo_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  IconLabelInfo_o *v25; // x24
  IconLabelInfo_o **p_iconLabelInfo2; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v41; // x24
  __int64 v42; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v43; // x23
  int32_t v44; // w0
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // kr00_16
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  int32_t rarity; // w8
  UserCommandCodeEntity_o *v67; // x0
  bool IsLock; // w0
  UserCommandCodeEntity_o *v69; // x8
  bool IsChoice; // w0
  struct System_Int32_array *CategoryIdList; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct UserCommandCodeEntity_o *v78; // x8
  __int128 v79; // q1
  int64_t v80; // x0
  signed int max_length; // w8
  __int64 v82; // x9
  struct CommandCodeEntity_o *v83; // x8
  __int64 v84; // x23
  __int64 v85; // x21
  __int64 v86; // x22
  __int64 v87; // x9
  int32_t v88; // w8
  IconLabelInfo_o *iconLabelInfo1; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_40FC827 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FC827 = 1;
  }
  v14 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userCommandCodeEntity,
                             attachUserCommandCodeList,
                             method);
  IconLabelInfo___ctor(v14, 0LL);
  this->fields.iconLabelInfo1 = v14;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v25 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v21, v22, v23, v24);
  IconLabelInfo___ctor(v25, 0LL);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCodeEntity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !userCommandCodeEntity )
    goto LABEL_30;
  this->fields.commandCodeId = userCommandCodeEntity->fields.commandCodeId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v42 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v43 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v92.fields.currentCryptoKey = v42;
  *(_QWORD *)&v92.fields.fakeValue = v41;
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v92, 0LL);
  if ( !v43 )
    goto LABEL_30;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v43,
                                           v44,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  this->fields.userSvtEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v52, v53, v54, v55, v56, v57);
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  this->fields.servantEntity = 0LL;
  this->fields.svtId = v58;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v59, v60, v61, v62, v63, v64);
  this->fields.classId = 0;
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_30;
  rarity = commandCodeEntity->fields.rarity;
  v67 = this->fields.userCommandCodeEntity;
  this->fields.isLeave = 0;
  this->fields.rarity = rarity;
  if ( !v67 )
    goto LABEL_30;
  IsLock = UserCommandCodeEntity__IsLock(v67, 0LL);
  v69 = this->fields.userCommandCodeEntity;
  this->fields.isLock = IsLock;
  if ( !v69 )
    goto LABEL_30;
  IsChoice = UserCommandCodeEntity__IsChoice(v69, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeCategoryIdList,
    (System_Int32_array **)CategoryIdList,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v78 = this->fields.userCommandCodeEntity;
  if ( !v78 )
    goto LABEL_30;
  v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
  *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v91.fields.fakeValue = v79;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v90 = v91;
  v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v90, 0LL);
  if ( !attachUserCommandCodeList )
    goto LABEL_30;
  max_length = attachUserCommandCodeList->max_length;
  if ( max_length >= 1 )
  {
    v82 = 0LL;
    while ( v80 != attachUserCommandCodeList->m_Items[v82] )
    {
      if ( (int)++v82 >= max_length )
        goto LABEL_23;
    }
    this->fields.isUse = 1;
  }
LABEL_23:
  v83 = this->fields.commandCodeEntity;
  this->fields.priority = 0;
  this->fields.sortValue1B = 0LL;
  if ( !v83 )
    goto LABEL_30;
  v84 = (unsigned int)this->fields.rarity;
  v86 = *(_QWORD *)&v83->fields.collectionNo.fields.currentCryptoKey;
  v85 = *(_QWORD *)&v83->fields.collectionNo.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v93.fields.currentCryptoKey = v86;
  *(_QWORD *)&v93.fields.fakeValue = v85;
  v87 = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v93, 0LL) << 16) | (v84 << 48);
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v87;
  v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(commandCodeId, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v88;
  this->fields.amountSortValue = -1LL;
  if ( !iconLabelInfo1 || (IconLabelInfo__Clear(iconLabelInfo1, 0LL), !*p_iconLabelInfo2) )
LABEL_30:
    sub_B170D4();
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
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
  __int64 v5; // x1
  int32_t bonusKind2; // w8
  int32_t bonusKind2Id; // w2
  UserServantEntity_o *userSvtEntity; // x0
  WebViewManager_o *Instance; // x0
  ServantFilterMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v12; // x4

  if ( (byte_40FC82C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFilterMaster___, sort);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC82C = 1;
  }
  if ( !sort )
    goto LABEL_18;
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  if ( (unsigned int)(bonusKind2 - 1) > 1 )
    return 1;
  if ( this->fields.bonusKind != bonusKind2
    || (bonusKind2Id = this->fields.bonusKindId, bonusKind2Id != sort->fields.bonusKind2Id) )
  {
    this->fields.bonusKind = bonusKind2;
    bonusKind2Id = sort->fields.bonusKind2Id;
    this->fields.bonusKindId = bonusKind2Id;
    bonusKind2 = sort->fields.bonusKind2;
  }
  if ( bonusKind2 == 2 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = (ServantFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_18;
    return ServantFilterMaster__IsEnableServant(
             MasterData_WarQuestSelectionMaster,
             this->fields.svtId,
             this->fields.bonusKindId,
             v12);
  }
  else
  {
    if ( bonusKind2 == 1 )
    {
      userSvtEntity = this->fields.userSvtEntity;
      if ( userSvtEntity )
        return UserServantEntity__getEventUpVal_21445528(userSvtEntity, this->fields.setupInfo, bonusKind2Id, 0LL);
LABEL_18:
      sub_B170D4();
    }
    return 0;
  }
}


bool __fastcall ServantListViewItem__GetNpInfo(
        ServantListViewItem_o *this,
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

  if ( (byte_40FC830 & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_40FC830 = 1;
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


bool __fastcall ServantListViewItem__IsMatchCommandCodeFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  ListViewSort_FilterKind_array *v11; // x0
  __int64 v12; // x2

  if ( (byte_40FC82B & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40FC82B = 1;
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
    goto LABEL_19;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          RarityFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_19;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v11 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v10);
  if ( !v11 )
LABEL_19:
    sub_B170D4();
  if ( !v11->max_length )
  {
    sub_B17100(v11, v11, v12);
    sub_B170A0();
  }
  v11->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields.isSwapChoice == this->fields.isChoice;
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
      sub_B170D4();
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
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantEquipTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  ListViewSort_FilterKind_array *v14; // x0
  __int64 v15; // x2

  if ( (byte_40FC82A & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40FC82A = 1;
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
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0LL) )
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


bool __fastcall ServantListViewItem__IsMatchServantFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpEffectFilterKindList; // x0
  ListViewSort_FilterKind_array *v19; // x0
  FilterKindList_c *v20; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v22; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v24; // x2
  ListViewSort_FilterKind_array *v25; // x0
  __int64 v26; // x2
  ListViewSort_FilterKind_array *v27; // x1
  FilterKindList_c *v28; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v30; // x21
  UserServantEntity_o *v32; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v34; // x0
  int32_t v35; // w0
  UserServantEntity_o *v36; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UserServantEntity_o *v44; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  __int64 v53; // x2
  _BOOL4 v54; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v56; // w0

  if ( (byte_40FC829 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B16FFC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_40FC829 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_72;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    v11 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v11 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      goto LABEL_72;
    v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassFilterKindList,
                                             (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
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
  NpTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->NpTypeFilterKindList;
  if ( !NpTypeFilterKindList )
    goto LABEL_72;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  NpEffectFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v17->static_fields->NpEffectFilterKindList;
  if ( !NpEffectFilterKindList )
    goto LABEL_72;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpEffectFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v20 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v20 = FilterKindList_TypeInfo;
  }
  ServantTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v20->static_fields->ServantTypeFilterKindList;
  if ( !ServantTypeFilterKindList )
LABEL_72:
    sub_B170D4();
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ServantTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    }
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v32 = this->fields.userSvtEntity;
    if ( v32 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v32, 0, 0LL) )
      {
        v34 = this->fields.userSvtEntity;
        if ( !v34 )
          goto LABEL_72;
        v35 = UserServantEntity__getDispLimitCount(v34, 0, 0LL);
        v36 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = v35;
        if ( !v36 )
          goto LABEL_72;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v36, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        v44 = this->fields.userSvtEntity;
        if ( !v44 )
          goto LABEL_72;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v44, 0, 0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
    }
    v25 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v24);
    if ( !v25 )
      goto LABEL_72;
    v27 = v25;
    if ( !v25->max_length )
      goto LABEL_73;
    v25->m_Items[1] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL);
    v25 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v53);
    if ( !v25 )
      goto LABEL_72;
    v27 = v25;
    if ( !v25->max_length )
    {
LABEL_73:
      sub_B17100(v25, v27, v26);
      sub_B170A0();
    }
    v25->m_Items[1] = 51;
    v54 = ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v56 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v54) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v56 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v56 )
    {
      return 0;
    }
  }
  v25 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v24);
  if ( !v25 )
    goto LABEL_72;
  v27 = v25;
  if ( !v25->max_length )
    goto LABEL_73;
  v25->m_Items[1] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  v28 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v28 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v28->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_72;
  v30 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v30, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v30, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall ServantListViewItem__Modify(
        ServantListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.userSvtEntity = userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userSvtEntity,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCodeEntity,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userSvtEntity = userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantListViewItem__Modify_29661096(
        ServantListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCodeEntity,
    (System_String_array **)method,
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
  const MethodInfo *v8; // x2
  char v9; // w8
  bool result; // w0
  _BOOL4 isSwapChoice; // w8
  _BOOL4 isChoice; // w9
  IconLabelInfo_o *iconLabelInfo2; // x0
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x9
  int32_t sortKind; // w8
  int64_t v16; // x8
  IconLabelInfo_o *v17; // x0
  int64_t partyIndex; // x8
  struct UserServantEntity_o *userSvtEntity; // x0
  __int128 v20; // q1
  int64_t v21; // x0
  struct UserCommandCodeEntity_o *v22; // x8
  IconLabelInfo_o *v23; // x0
  int64_t CommandCodeAmountSortValue; // x21
  struct ListViewManager_o *v25; // x8
  __int64 v26; // x11
  struct ListViewManager_o *v27; // x20
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q1
  int64_t v30; // x0
  struct UserServantEntity_o *v31; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  struct UserServantEntity_o *v33; // x0
  IconLabelInfo_o *v34; // x20
  int32_t lv; // w21
  int32_t LevelMax; // w0
  UserServantEntity_o *v37; // x0
  bool IsMaterialTd; // w8
  UserServantEntity_o *v39; // x0
  int64_t hpReinforceValue; // x2
  IconLabelInfo_o *v41; // x0
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v43; // w1
  struct UserServantEntity_o *v44; // x8
  IconLabelInfo_o *v45; // x0
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v48; // w1
  struct UserServantEntity_o *v49; // x8
  IconLabelInfo_o *v50; // x19
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *v52; // x0
  int32_t v53; // w20
  int32_t v54; // w0
  __int64 v55; // x20
  __int64 v56; // x21
  int32_t v57; // w0
  IconLabelInfo_o *v58; // x20
  int64_t v59; // x9
  int32_t v60; // w0
  int64_t amountSortValue; // x0
  struct ListViewManager_o *manager; // x8
  __int64 v63; // x11
  struct ListViewManager_o *v64; // x20
  struct UserServantEntity_o *v65; // x0
  IconLabelInfo_o *v66; // x20
  int32_t v67; // w21
  int32_t v68; // w0
  ServantEntity_o *v69; // x0
  ServantEntity_o *v70; // x0
  ServantEntity_o *v71; // x0
  IconLabelInfo_o *v72; // x0
  __int64 v73; // x21
  __int64 v74; // x22
  int32_t v75; // w0
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 rarity; // x23
  __int64 v78; // x20
  __int64 v79; // x22
  int32_t v80; // w8
  __int64 v81; // x21
  __int64 v82; // x22
  int32_t v83; // w0
  struct ServantEntity_o *v84; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v86; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+50h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  if ( (byte_40FC828 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B16FFC(&ServantListViewManager_TypeInfo, v6);
    byte_40FC828 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.isNeedAdjustIconLabelScale = 0;
  this->fields.sortValue1 = -1LL;
  v9 = ((__int64 (__fastcall *)(ServantListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  result = 0;
  if ( (v9 & 1) != 0 )
  {
    if ( this->fields.userSvtEntity && !ServantListViewItem__GetIsEventUpValShow(this, sort, v8) )
      return 0;
    isSwapChoice = this->fields.isSwapChoice;
    isChoice = this->fields.isChoice;
    this->fields.sortValue0 = 0LL;
    if ( isSwapChoice != isChoice )
    {
      if ( !sort )
        goto LABEL_117;
      if ( sort->fields.isChoiceSort )
        this->fields.sortValue0 = 10LL;
    }
    iconLabelInfo2 = this->fields.iconLabelInfo2;
    if ( !iconLabelInfo2 || (IconLabelInfo__Clear(iconLabelInfo2, 0LL), !sort) )
LABEL_117:
      sub_B170D4();
    userCommandCodeEntity = this->fields.userCommandCodeEntity;
    sortKind = sort->fields.sortKind;
    if ( !userCommandCodeEntity )
    {
      result = 1;
      switch ( sortKind )
      {
        case 0:
          partyIndex = this->fields.partyIndex;
          userSvtEntity = this->fields.userSvtEntity;
          this->fields.sortValue0 = (int)partyIndex >= 0;
          goto LABEL_59;
        case 1:
          v28 = this->fields.userSvtEntity;
          if ( !v28 )
            goto LABEL_117;
          v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
          *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v89.fields.fakeValue = v29;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v87 = v89;
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v87, 0LL);
          v31 = this->fields.userSvtEntity;
          this->fields.sortValue1 = v30;
          if ( !v31 )
            goto LABEL_117;
          iconLabelInfo1 = this->fields.iconLabelInfo1;
          if ( !iconLabelInfo1 )
            goto LABEL_117;
          IconLabelInfo__SetTime(iconLabelInfo1, 49, v31->fields.createdAt, 0, 0, 0, 0LL);
          v33 = this->fields.userSvtEntity;
          if ( !v33 )
            goto LABEL_117;
          v34 = this->fields.iconLabelInfo2;
          lv = v33->fields.lv;
          LevelMax = UserServantEntity__getLevelMax(v33, 0LL);
          if ( !v34 )
            goto LABEL_117;
          IconLabelInfo__Set_28888132(v34, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
          v37 = this->fields.userSvtEntity;
          if ( !v37 )
            goto LABEL_117;
          IsMaterialTd = UserServantEntity__IsMaterialTd(v37, 0LL);
          result = 1;
          if ( IsMaterialTd )
            this->fields.isNeedAdjustIconLabelScale = 1;
          return result;
        case 2:
          partyIndex = this->fields.rarity;
          userSvtEntity = this->fields.userSvtEntity;
          goto LABEL_59;
        case 3:
          userSvtEntity = this->fields.userSvtEntity;
          if ( !userSvtEntity )
            goto LABEL_117;
          this->fields.sortValue1 = userSvtEntity->fields.lv;
          goto LABEL_60;
        case 4:
          v39 = this->fields.userSvtEntity;
          if ( !v39 )
            goto LABEL_117;
          UserServantEntity__getTreasureDeviceInfo_21453148(v39, &tdMaxLv[1], tdMaxLv, 0LL);
          LODWORD(hpReinforceValue) = tdMaxLv[1];
          v41 = this->fields.iconLabelInfo1;
          this->fields.sortValue1 = tdMaxLv[1];
          if ( !v41 )
            goto LABEL_117;
          nowMaxHpReinforceValue = tdMaxLv[0];
          v43 = 33;
          goto LABEL_77;
        case 5:
          v44 = this->fields.userSvtEntity;
          if ( !v44 )
            goto LABEL_117;
          v45 = this->fields.iconLabelInfo1;
          this->fields.sortValue1 = v44->fields.hp;
          if ( !v45 )
            goto LABEL_117;
          adjustHp = v44->fields.adjustHp;
          hp = v44->fields.hp;
          v48 = 3;
          goto LABEL_53;
        case 6:
          v49 = this->fields.userSvtEntity;
          if ( !v49 )
            goto LABEL_117;
          v45 = this->fields.iconLabelInfo1;
          this->fields.sortValue1 = v49->fields.atk;
          if ( !v45 )
            goto LABEL_117;
          adjustHp = v49->fields.adjustAtk;
          hp = v49->fields.atk;
          v48 = 5;
LABEL_53:
          IconLabelInfo__Set_28888132(v45, v48, hp, adjustHp, 0, 0, 0, 0, 0LL);
          userSvtEntity = this->fields.userSvtEntity;
          if ( !userSvtEntity )
            goto LABEL_117;
          v50 = this->fields.iconLabelInfo2;
          goto LABEL_61;
        case 7:
          servantEntity = this->fields.servantEntity;
          if ( !servantEntity )
            goto LABEL_117;
          v52 = this->fields.iconLabelInfo1;
          this->fields.sortValue1 = servantEntity->fields.cost;
          if ( !v52 )
            goto LABEL_117;
          IconLabelInfo__Set_28888132(v52, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
          goto LABEL_78;
        case 8:
          userSvtEntity = this->fields.userSvtEntity;
          partyIndex = -this->fields.priority;
LABEL_59:
          this->fields.sortValue1 = partyIndex;
          if ( !userSvtEntity )
            goto LABEL_117;
LABEL_60:
          v50 = this->fields.iconLabelInfo1;
LABEL_61:
          v53 = userSvtEntity->fields.lv;
          goto LABEL_62;
        case 10:
          v56 = *(_QWORD *)&this->fields.friendship.fields.currentCryptoKey;
          v55 = *(_QWORD *)&this->fields.friendship.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v91.fields.currentCryptoKey = v56;
          *(_QWORD *)&v91.fields.fakeValue = v55;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v91, 0LL);
          v58 = this->fields.iconLabelInfo1;
          v59 = v57;
          friendship = this->fields.friendship;
          this->fields.sortValue1 = v59;
          v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(friendship, 0LL);
          if ( !v58 )
            goto LABEL_117;
          IconLabelInfo__Set_28888132(v58, 32, v60, this->fields.friendshipMax, 0, 0, 0, 0, 0LL);
          goto LABEL_78;
        case 14:
          amountSortValue = this->fields.amountSortValue;
          if ( (amountSortValue & 0x8000000000000000LL) == 0 )
            goto LABEL_114;
          manager = sort->fields.manager;
          if ( manager
            && (v63 = *(&ServantListViewManager_TypeInfo->_2.bitflags2 + 1),
                *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v63) )
          {
            if ( (ServantListViewManager_c *)manager->klass->_2.typeHierarchy[v63 - 1] == ServantListViewManager_TypeInfo )
              v64 = sort->fields.manager;
            else
              v64 = 0LL;
          }
          else
          {
            v64 = 0LL;
          }
          v82 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v81 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v95.fields.currentCryptoKey = v82;
          *(_QWORD *)&v95.fields.fakeValue = v81;
          v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v95, 0LL);
          if ( !v64 )
            goto LABEL_117;
          amountSortValue = ServantListViewManager__GetAmountSortValue((ServantListViewManager_o *)v64, v83, 0LL);
          this->fields.amountSortValue = amountSortValue;
LABEL_114:
          v84 = this->fields.servantEntity;
          if ( !v84 )
            goto LABEL_117;
          collectionNo = v84->fields.collectionNo;
          v86 = this->fields.userSvtEntity;
          this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                   + (amountSortValue << 48)) | collectionNo;
          if ( !v86 )
            goto LABEL_117;
          v50 = this->fields.iconLabelInfo1;
          v53 = v86->fields.lv;
          userSvtEntity = v86;
LABEL_62:
          v54 = UserServantEntity__getLevelMax(userSvtEntity, 0LL);
          if ( !v50 )
            goto LABEL_117;
          IconLabelInfo__Set_28888132(v50, 2, v53, v54, 0, 0, 0, 0, 0LL);
          return 1;
        case 15:
          hpReinforceValue = this->fields.hpReinforceValue;
          v41 = this->fields.iconLabelInfo1;
          this->fields.sortValue1 = hpReinforceValue;
          if ( !v41 )
            goto LABEL_117;
          nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
          v43 = 44;
          goto LABEL_77;
        case 16:
          hpReinforceValue = this->fields.atkReinforceValue;
          v41 = this->fields.iconLabelInfo1;
          this->fields.sortValue1 = hpReinforceValue;
          if ( !v41 )
            goto LABEL_117;
          nowMaxHpReinforceValue = this->fields.nowMaxAtkReinforceValue;
          v43 = 45;
LABEL_77:
          IconLabelInfo__Set_28888132(v41, v43, hpReinforceValue, nowMaxHpReinforceValue, 0, 0, 0, 0, 0LL);
LABEL_78:
          v65 = this->fields.userSvtEntity;
          if ( !v65 )
            goto LABEL_117;
          v66 = this->fields.iconLabelInfo2;
          v67 = v65->fields.lv;
          v68 = UserServantEntity__getLevelMax(v65, 0LL);
          if ( !v66 )
            goto LABEL_117;
          IconLabelInfo__Set_28888132(v66, 2, v67, v68, 0, 0, 0, 0, 0LL);
          v69 = this->fields.servantEntity;
          if ( !v69 )
            goto LABEL_117;
          if ( ServantEntity__get_IsExpUp(v69, 0LL) )
            goto LABEL_86;
          v70 = this->fields.servantEntity;
          if ( !v70 )
            goto LABEL_117;
          if ( ServantEntity__get_IsStatusUp(v70, 0LL) )
            goto LABEL_86;
          v71 = this->fields.servantEntity;
          if ( !v71 )
            goto LABEL_117;
          if ( !ServantEntity__get_IsServantMaterialTd(v71, 0LL) )
            return 1;
LABEL_86:
          v72 = this->fields.iconLabelInfo1;
          if ( !v72 )
            goto LABEL_117;
          IconLabelInfo__Clear(v72, 0LL);
          v17 = this->fields.iconLabelInfo2;
          if ( !v17 )
            goto LABEL_117;
          goto LABEL_103;
        default:
          return result;
      }
    }
    switch ( sortKind )
    {
      case 1:
        v20 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v89.fields.fakeValue = v20;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v88 = v89;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v88, 0LL);
        v22 = this->fields.userCommandCodeEntity;
        this->fields.sortValue1 = v21;
        if ( !v22 )
          goto LABEL_117;
        v23 = this->fields.iconLabelInfo1;
        if ( !v23 )
          goto LABEL_117;
        IconLabelInfo__SetTime(v23, 49, v22->fields.createdAt, 0, 0, 0, 0LL);
        break;
      case 14:
        CommandCodeAmountSortValue = this->fields.amountSortValue;
        if ( (CommandCodeAmountSortValue & 0x8000000000000000LL) != 0 )
        {
          v25 = sort->fields.manager;
          if ( v25
            && (v26 = *(&ServantListViewManager_TypeInfo->_2.bitflags2 + 1),
                *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26) )
          {
            if ( (ServantListViewManager_c *)v25->klass->_2.typeHierarchy[v26 - 1] == ServantListViewManager_TypeInfo )
              v27 = sort->fields.manager;
            else
              v27 = 0LL;
          }
          else
          {
            v27 = 0LL;
          }
          v74 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
          v73 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v93.fields.currentCryptoKey = v74;
          *(_QWORD *)&v93.fields.fakeValue = v73;
          v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v93, 0LL);
          if ( !v27 )
            goto LABEL_117;
          CommandCodeAmountSortValue = ServantListViewManager__GetCommandCodeAmountSortValue(
                                         (ServantListViewManager_o *)v27,
                                         v75,
                                         0LL);
          this->fields.amountSortValue = CommandCodeAmountSortValue;
        }
        commandCodeEntity = this->fields.commandCodeEntity;
        if ( !commandCodeEntity )
          goto LABEL_117;
        rarity = (unsigned int)this->fields.rarity;
        v79 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
        v78 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v94.fields.currentCryptoKey = v79;
        *(_QWORD *)&v94.fields.fakeValue = v78;
        v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v94, 0LL);
        v17 = this->fields.iconLabelInfo1;
        v16 = ((rarity << 32) + (CommandCodeAmountSortValue << 48)) | v80;
        goto LABEL_102;
      case 2:
        v16 = this->fields.rarity;
        v17 = this->fields.iconLabelInfo1;
LABEL_102:
        this->fields.sortValue1 = v16;
        if ( v17 )
        {
LABEL_103:
          IconLabelInfo__Clear(v17, 0LL);
          return 1;
        }
        goto LABEL_117;
    }
    return 1;
  }
  return result;
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

  if ( (byte_40FC82E & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FC82E = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL);
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
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall ServantListViewItem__get_IsDispLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
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

  if ( (byte_40FC82F & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18326/*"error"*/, v3);
    byte_40FC82F = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18326/*"error"*/;
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


ServantEntity_o *__fastcall ServantListViewItem__get_Servant(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall ServantListViewItem__get_SvtId(ServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_40FC82D & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FC82D = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL);
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