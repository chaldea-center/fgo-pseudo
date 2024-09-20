void __fastcall ServantListViewItem___ctor(
        ServantListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  IconLabelInfo_o *v16; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  struct UserServantEntity_o **p_userSvtEntity; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  int64_t Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v26; // x27
  __int64 v27; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x25
  Il2CppObject *Entity; // x0
  ServantEntity_o **p_servantEntity; // x25
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x26
  struct UserServantEntity_o *v40; // x8
  int32_t v41; // w27
  int32_t v42; // w8
  UserServantEntity_o *v43; // x8
  UserServantEntity_o *v44; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v46; // x8
  UserServantEntity_o *v47; // x8
  struct UserServantEntity_o *v48; // x8
  __int128 v49; // q1
  UserServantCollectionMaster_o *v50; // x26
  int64_t v51; // x27
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // kr10_16
  __int128 v53; // q0
  __int128 v54; // q1
  __int64 v55; // x24
  struct UserServantEntity_o *v56; // x8
  __int128 v57; // q0
  int64_t v58; // x24
  signed int max_length; // w8
  int32_t v60; // w9
  signed int v61; // w8
  int32_t v62; // w9
  struct System_Int32_array *EquipCategoryIdList; // x1
  int32_t v64; // w2
  int32_t v65; // w3
  struct System_Int32_array **p_equipCategoryIdList; // x0
  UserServantEntity_o *v67; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  int64_t v71; // x8
  __int64 rarity; // x22
  __int64 v73; // x23
  __int64 lv; // x24
  __int64 v75; // x22
  __int64 v76; // x23
  int32_t v77; // w8
  int v78; // w22
  BalanceConfig_c *v79; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+60h] [xbp-90h]
  int32_t friendshipRank; // [xsp+8Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  if ( (byte_4A5751B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5751B = 1;
  }
  friendshipRank = 0;
  v13 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo1 = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v13, v14, v15);
  v16 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo2 = v16;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v16, v18, v19);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v21, v22);
  if ( !this->fields.userSvtEntity )
    goto LABEL_65;
  this->fields.svtId = this->fields.userSvtEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v27;
  *(_QWORD *)&v86.fields.fakeValue = v26;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v86, 0LL);
  if ( !v28 )
    goto LABEL_65;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v28,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v31, v32);
  this->fields.userCommandCodeEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeEntity, 0, v33, v34);
  this->fields.commandCodeId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  this->fields.commandCodeEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity, 0, v35, v36);
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v37, v38);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v39 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL);
  v40 = this->fields.userSvtEntity;
  if ( !v40 )
    goto LABEL_65;
  v41 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40->fields.limitCount, 0LL);
  if ( !v39 )
    goto LABEL_65;
  Instance = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v39, v41, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_65;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_65;
  v42 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.rarity = v42;
  if ( !Instance )
    goto LABEL_65;
  Instance = UserServantEntity__IsLeave((UserServantEntity_o *)Instance, 0LL);
  v43 = this->fields.userSvtEntity;
  this->fields.isLeave = Instance & 1;
  if ( !v43 )
    goto LABEL_65;
  Instance = UserServantEntity__IsLock(v43, 0LL);
  v44 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v44 )
    goto LABEL_65;
  IsChoice = UserServantEntity__IsChoice(v44, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_65;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v46 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v46 )
    goto LABEL_65;
  Instance = UserServantEntity__IsChocolateSvtEquip(v46, 0LL);
  v47 = this->fields.userSvtEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v47 )
    goto LABEL_65;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v47, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v48 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v49 = *(_OWORD *)&v48->fields.userId.fields.fakeValue;
  v50 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v48->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v84.fields.fakeValue = v49;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v83 = v84;
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v83, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL);
  if ( !v50 )
    goto LABEL_65;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v50, v51, Instance, 0LL);
  if ( !Instance )
    goto LABEL_65;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0LL);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  v24 = *(_QWORD *)&v52.fields.fakeValue;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.friendship = v52;
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
  v54 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v53 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v55 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v82.fields.currentCryptoKey = v54;
  *(_OWORD *)&v82.fields.fakeValue = v53;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v82, 0LL);
  v56 = this->fields.userSvtEntity;
  this->fields.isPush = v55 == Instance;
  this->fields.isEnabled = 1;
  if ( !v56 )
    goto LABEL_65;
  v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
  *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v81.fields.fakeValue = v57;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v81, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_65;
  v58 = Instance;
  Instance = ServantEntity__get_IsKeepServantEquip(*p_servantEntity, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( partyUserEquipList )
    {
      max_length = partyUserEquipList->max_length;
      if ( max_length >= 1 )
      {
        v60 = 0;
        while ( v58 != partyUserEquipList->m_Items[v60] )
        {
          if ( max_length == ++v60 )
            goto LABEL_44;
        }
        this->fields.partyIndex = v60;
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
    sub_1B8880C(Instance, v24);
  }
  if ( !partyUserServantList )
    goto LABEL_65;
  v61 = partyUserServantList->max_length;
  if ( v61 >= 1 )
  {
    v62 = 0;
    while ( v58 != partyUserServantList->m_Items[v62] )
    {
      if ( v61 == ++v62 )
        goto LABEL_47;
    }
    this->fields.partyIndex = v62;
  }
LABEL_47:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v67 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v67 )
    goto LABEL_65;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v67, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v69,
    v70);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_65;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_51:
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_equipCategoryIdList, (int32_t)EquipCategoryIdList, v64, v65);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_65;
  v71 = *(int *)(Instance + 48);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v71;
  this->fields.sortValue1B = v71;
  if ( !Instance || !*p_userSvtEntity )
    goto LABEL_65;
  rarity = (unsigned int)this->fields.rarity;
  v73 = *(int *)(Instance + 208);
  lv = (*p_userSvtEntity)->fields.lv;
  this->fields.sortValue2 = (v73 << 16) | (rarity << 48) | (2 * lv) | ServantEntity__get_IsServantMaterialTd(
                                                                        (ServantEntity_o *)Instance,
                                                                        0LL);
  v76 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v75 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v87.fields.currentCryptoKey = v76;
  *(_QWORD *)&v87.fields.fakeValue = v75;
  v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v87, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValue2B = v77;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_65;
  v78 = *(_DWORD *)(Instance + 276);
  v79 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v79 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  static_fields = v79->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v78;
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


void __fastcall ServantListViewItem___ctor_32599864(
        ServantListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        System_Int64_array *attachUserCommandCodeList,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  IconLabelInfo_o *v12; // x24
  struct IconLabelInfo_o **p_iconLabelInfo2; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int64_t Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x24
  __int64 v22; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  Il2CppObject *Entity; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr00_16
  int32_t v30; // w2
  int32_t v31; // w3
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  int32_t rarity; // w8
  UserCommandCodeEntity_o *v34; // x8
  bool IsChoice; // w0
  struct System_Int32_array *CategoryIdList; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct UserCommandCodeEntity_o *v39; // x8
  __int128 v40; // q1
  signed int max_length; // w8
  int v42; // w9
  struct CommandCodeEntity_o *v43; // x8
  __int64 v44; // x23
  __int64 v45; // x20
  __int64 v46; // x22
  __int64 v47; // x9
  int32_t v48; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_4A5751C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5751C = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.iconLabelInfo1 = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v9, v10, v11);
  v12 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0LL);
  this->fields.iconLabelInfo2 = v12;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v12, v14, v15);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)userCommandCodeEntity,
    v16,
    v17);
  if ( !userCommandCodeEntity )
    goto LABEL_27;
  this->fields.commandCodeId = userCommandCodeEntity->fields.commandCodeId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v22 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v22;
  *(_QWORD *)&v51.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v51, 0LL);
  if ( !v23 )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v23,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v25, v26);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.userSvtEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, 0, v27, v28);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  this->fields.servantEntity = 0LL;
  this->fields.svtId = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, v30, v31);
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
  v34 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v34 )
    goto LABEL_27;
  IsChoice = UserCommandCodeEntity__IsChoice(v34, 0LL);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeCategoryIdList,
    (int32_t)CategoryIdList,
    v37,
    v38);
  v39 = this->fields.userCommandCodeEntity;
  if ( !v39 )
    goto LABEL_27;
  v40 = *(_OWORD *)&v39->fields.id.fields.fakeValue;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v39->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v40;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v49 = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v49, 0LL);
  if ( !attachUserCommandCodeList )
    goto LABEL_27;
  max_length = attachUserCommandCodeList->max_length;
  if ( max_length >= 1 )
  {
    v42 = 0;
    while ( Instance != attachUserCommandCodeList->m_Items[v42] )
    {
      if ( max_length == ++v42 )
        goto LABEL_21;
    }
    this->fields.isUse = 1;
  }
LABEL_21:
  v43 = this->fields.commandCodeEntity;
  this->fields.priority = 0;
  this->fields.sortValue1B = 0LL;
  if ( !v43 )
    goto LABEL_27;
  v44 = (unsigned int)this->fields.rarity;
  v46 = *(_QWORD *)&v43->fields.collectionNo.fields.currentCryptoKey;
  v45 = *(_QWORD *)&v43->fields.collectionNo.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v46;
  *(_QWORD *)&v52.fields.fakeValue = v45;
  v47 = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v52, 0LL) << 16) | (v44 << 48);
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v47;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(commandCodeId, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v48;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_27:
    sub_1B8880C(Instance, v19);
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
  unsigned int bonusKind2; // w8
  bool result; // w0
  int32_t bonusKindId; // w2
  int32_t bonusKind2Id; // w9
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  System_Func_object__bool__o *v10; // x21
  Il2CppObject *Master_object; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  EventCampaignMaster_o *v14; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_4A57521 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_ServantListViewItem__GetIsEventUpValShow_b__55_0__);
    this = (ServantListViewItem_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57521 = 1;
  }
  if ( !sort )
LABEL_34:
    sub_1B8880C(this, sort);
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
            this = (ServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v10 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v10,
                (Il2CppObject *)v4,
                Method_ServantListViewItem__GetIsEventUpValShow_b__55_0__,
                0LL);
              result = BasicHelper__Any_object_(
                         (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                         (System_Func_T__bool__o *)v10,
                         (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventGroupEntity___);
            }
            break;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
            v13 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
            v12 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
            v14 = (EventCampaignMaster_o *)Master_object;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v15.fields.currentCryptoKey = v13;
            *(_QWORD *)&v15.fields.fakeValue = v12;
            this = (ServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v15,
                                              0LL);
            if ( !v14 )
              goto LABEL_34;
            return EventCampaignMaster__IsEnableServant(v14, (int32_t)this, v4->fields.bonusKindId, 0LL);
          case 4u:
          case 5u:
            this = (ServantListViewItem_o *)v4->fields.userSvtEntity;
            if ( !this )
              goto LABEL_34;
            return UserServantEntity__getEventUpVal_40205120(
                     (UserServantEntity_o *)this,
                     v4->fields.setupInfo,
                     bonusKindId,
                     0LL,
                     0LL);
          case 7u:
            this = (ServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_34;
            this = (ServantListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57525 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A57525 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


bool __fastcall ServantListViewItem__IsMatchCommandCodeFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  _BOOL4 v7; // w8

  if ( (byte_4A57520 & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4A57520 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_20;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_20;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_20:
    sub_1B8880C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
    sub_1B88814(RarityFilterKindList, RarityFilterKindList);
  RarityFilterKindList->m_Items[1] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    || !ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    return 1;
  }
  v7 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v7;
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
      sub_1B8880C(0LL, sort);
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
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  bool HaveStatusFilter; // w8
  _BOOL4 v16; // w8

  if ( (byte_4A5751F & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4A5751F = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                          (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_36;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0LL),
        result = 0,
        IsMatchServantEquipCombineStatusFilter) )
  {
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v13 = FilterKindList_TypeInfo;
    }
    RarityFilterKindList = (System_Int32Enum_array *)v13->static_fields->ServantEquipHaveStatusFilterKindList;
    if ( !RarityFilterKindList )
      goto LABEL_36;
    v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                             (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0LL),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
      if ( RarityFilterKindList )
      {
        if ( !RarityFilterKindList->max_length )
          sub_1B88814(RarityFilterKindList, RarityFilterKindList);
        RarityFilterKindList->m_Items[1] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(
               sort,
               (ListViewSort_FilterKind_array *)RarityFilterKindList,
               0LL)
          || !ListViewSort__GetFilter(sort, 39, 0LL) )
        {
          return 1;
        }
        v16 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v16;
      }
LABEL_36:
      sub_1B8880C(RarityFilterKindList, sort);
    }
  }
  return result;
}


bool __fastcall ServantListViewItem__IsMatchServantFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v16; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x21
  UserServantEntity_o *v21; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v23; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v31; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v33; // w0

  if ( (byte_4A5751E & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4A5751E = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v13->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_67:
    sub_1B8880C(ClassGroupFilterKindList, sort);
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
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
    v21 = this->fields.userSvtEntity;
    if ( v21 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v21, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v23 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v23 )
          goto LABEL_67;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v23, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v25,
          v26);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v28,
          v29);
      }
    }
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_68;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_1B88814(ClassGroupFilterKindList, v16);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v31 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v33 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v31) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v33 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v33 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v16 = ClassGroupFilterKindList;
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
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v18->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall ServantListViewItem__Modify(
        ServantListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  this->fields.userSvtEntity = userSvtEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity,
    (int32_t)userSvtEntity,
    (int32_t)method,
    v3);
  ServantListViewItem__ModifyLockItem(this, v5);
  ServantListViewItem__ModifyChoiceItem(this, v6);
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

  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)userCommandCodeEntity,
    (int32_t)method,
    v3);
}


void __fastcall ServantListViewItem__ModifyUserServantEntity(
        ServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.userSvtEntity = userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
}


void __fastcall ServantListViewItem__Modify_32600932(
        ServantListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)userCommandCodeEntity,
    (int32_t)method,
    v3);
  ServantListViewItem__ModifyLockItem(this, v5);
  ServantListViewItem__ModifyChoiceItem(this, v6);
}


bool __fastcall ServantListViewItem__SetSortValue(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ServantListViewItem_c *klass; // x8
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  char v8; // w8
  int64_t iconLabelInfo2; // x0
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v12; // zf
  _BOOL4 v13; // w8
  int v14; // w10
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x9
  int32_t sortKind; // w8
  int64_t rarity; // x8
  int64_t partyIndex; // x8
  __int128 v19; // q1
  struct UserCommandCodeEntity_o *v20; // x8
  struct ListViewManager_o *v21; // x8
  __int64 v22; // x11
  struct ListViewManager_o *v23; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v25; // q1
  struct UserServantEntity_o *v26; // x8
  IconLabelInfo_o *v27; // x20
  int32_t v28; // w21
  bool IsMaterialTd; // w8
  int64_t v30; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t hpReinforceValue; // x2
  int32_t nowMaxHpReinforceValue; // w3
  int32_t v34; // w1
  struct UserServantEntity_o *v35; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v38; // w1
  struct UserServantEntity_o *v39; // x8
  IconLabelInfo_o *v40; // x19
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int32_t lv; // w20
  __int64 v44; // x20
  __int64 v45; // x21
  int32_t v46; // w0
  IconLabelInfo_o *v47; // x20
  int64_t v48; // x9
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v51; // x20
  IconLabelInfo_o *v52; // x20
  int32_t v53; // w21
  __int64 v54; // x21
  __int64 v55; // x22
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v57; // x20
  __int64 v58; // x21
  int32_t v59; // w8
  __int64 v60; // x21
  __int64 v61; // x22
  struct ServantEntity_o *v62; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v64; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+50h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_4A5751D & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantListViewManager_TypeInfo);
    byte_4A5751D = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.isNeedAdjustIconLabelScale = 0;
  this->fields.sortValue1 = -1LL;
  v8 = ((__int64 (__fastcall *)(ServantListViewItem_o *, ListViewSort_o *, void *))klass->vtable._5_IsMatchFilter.method)(
         this,
         sort,
         klass[1]._1.image);
  iconLabelInfo2 = 0LL;
  if ( (v8 & 1) != 0 )
  {
    if ( !this->fields.userSvtEntity
      || (iconLabelInfo2 = ServantListViewItem__GetIsEventUpValShow(this, sort, v7), (iconLabelInfo2 & 1) != 0) )
    {
      isChoice = this->fields.isChoice;
      isSwapChoice = this->fields.isSwapChoice;
      this->fields.sortValue0 = 0LL;
      v12 = !isChoice;
      v13 = !isChoice;
      v14 = !v12;
      if ( !isSwapChoice )
        v13 = v14;
      if ( v13 )
      {
        if ( !sort )
          goto LABEL_117;
        if ( sort->fields.isChoiceSort )
          this->fields.sortValue0 = 10LL;
      }
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( !iconLabelInfo2 || (IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0LL), !sort) )
LABEL_117:
        sub_1B8880C(iconLabelInfo2, v6);
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
            v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v68.fields.fakeValue = v25;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v66 = v68;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v66, 0LL);
            v26 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v26 )
              goto LABEL_117;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v26->fields.createdAt, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            v27 = this->fields.iconLabelInfo2;
            v28 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v27 )
              goto LABEL_117;
            IconLabelInfo__Set_38140136(v27, 2, v28, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
            v30 = *(int *)(iconLabelInfo2 + 256);
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v30;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !iconLabelInfo1 )
              goto LABEL_117;
            IconLabelInfo__Set_38140136(iconLabelInfo1, 2, v30, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_105;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            UserServantEntity__getTreasureDeviceInfo_40212352(
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
            v34 = 33;
            goto LABEL_80;
          case 5:
            v35 = this->fields.userSvtEntity;
            if ( !v35 )
              goto LABEL_117;
            hp = v35->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            adjustHp = v35->fields.adjustHp;
            v38 = 3;
            goto LABEL_57;
          case 6:
            v39 = this->fields.userSvtEntity;
            if ( !v39 )
              goto LABEL_117;
            hp = v39->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            adjustHp = v39->fields.adjustAtk;
            v38 = 5;
LABEL_57:
            IconLabelInfo__Set_38140136((IconLabelInfo_o *)iconLabelInfo2, v38, hp, adjustHp, 0, 0, 0, 0, 0LL);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            v40 = this->fields.iconLabelInfo2;
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
            IconLabelInfo__Set_38140136((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0LL);
            goto LABEL_81;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            partyIndex = -this->fields.priority;
LABEL_63:
            this->fields.sortValue1 = partyIndex;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            v40 = this->fields.iconLabelInfo1;
LABEL_65:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
            goto LABEL_66;
          case 10:
            v45 = *(_QWORD *)&this->fields.friendship.fields.currentCryptoKey;
            v44 = *(_QWORD *)&this->fields.friendship.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v70.fields.currentCryptoKey = v45;
            *(_QWORD *)&v70.fields.fakeValue = v44;
            v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v70, 0LL);
            v47 = this->fields.iconLabelInfo1;
            v48 = v46;
            friendship = this->fields.friendship;
            this->fields.sortValue1 = v48;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(friendship, 0LL);
            if ( !v47 )
              goto LABEL_117;
            IconLabelInfo__Set_38140136(v47, 32, iconLabelInfo2, this->fields.friendshipMax, 0, 0, 0, 0, 0LL);
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
                v51 = sort->fields.manager;
              else
                v51 = 0LL;
            }
            else
            {
              v51 = 0LL;
            }
            v61 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v60 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v74.fields.currentCryptoKey = v61;
            *(_QWORD *)&v74.fields.fakeValue = v60;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v74, 0LL);
            if ( !v51 )
              goto LABEL_117;
            iconLabelInfo2 = ServantListViewManager__GetAmountSortValue(
                               (ServantListViewManager_o *)v51,
                               iconLabelInfo2,
                               0LL);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_114:
            v62 = this->fields.servantEntity;
            if ( !v62 )
              goto LABEL_117;
            collectionNo = v62->fields.collectionNo;
            v64 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48)) | collectionNo;
            if ( !v64 )
              goto LABEL_117;
            v40 = this->fields.iconLabelInfo1;
            lv = v64->fields.lv;
            iconLabelInfo2 = (int64_t)v64;
LABEL_66:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v40 )
              goto LABEL_117;
            IconLabelInfo__Set_38140136(v40, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0LL);
            goto LABEL_105;
          case 15:
            hpReinforceValue = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
            v34 = 44;
            goto LABEL_80;
          case 16:
            hpReinforceValue = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_117;
            nowMaxHpReinforceValue = this->fields.nowMaxAtkReinforceValue;
            v34 = 45;
LABEL_80:
            IconLabelInfo__Set_38140136(
              (IconLabelInfo_o *)iconLabelInfo2,
              v34,
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
            v52 = this->fields.iconLabelInfo2;
            v53 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0LL);
            if ( !v52 )
              goto LABEL_117;
            IconLabelInfo__Set_38140136(v52, 2, v53, iconLabelInfo2, 0, 0, 0, 0, 0LL);
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
          v19 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v68.fields.fakeValue = v19;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v67 = v68;
          iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v67, 0LL);
          v20 = this->fields.userCommandCodeEntity;
          this->fields.sortValue1 = iconLabelInfo2;
          if ( !v20 )
            goto LABEL_117;
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          if ( !iconLabelInfo2 )
            goto LABEL_117;
          IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v20->fields.createdAt, 0, 0, 0, 0LL);
          break;
        case 14:
          if ( (this->fields.amountSortValue & 0x8000000000000000LL) != 0 )
          {
            v21 = sort->fields.manager;
            if ( v21
              && (v22 = LOBYTE(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v21->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v22) )
            {
              if ( (ServantListViewManager_c *)v21->klass->_2.typeHierarchy[v22 - 1] == ServantListViewManager_TypeInfo )
                v23 = sort->fields.manager;
              else
                v23 = 0LL;
            }
            else
            {
              v23 = 0LL;
            }
            v55 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
            v54 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v72.fields.currentCryptoKey = v55;
            *(_QWORD *)&v72.fields.fakeValue = v54;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v72, 0LL);
            if ( !v23 )
              goto LABEL_117;
            iconLabelInfo2 = ServantListViewManager__GetCommandCodeAmountSortValue(
                               (ServantListViewManager_o *)v23,
                               iconLabelInfo2,
                               0LL);
            this->fields.amountSortValue = iconLabelInfo2;
          }
          commandCodeEntity = this->fields.commandCodeEntity;
          if ( !commandCodeEntity )
            goto LABEL_117;
          v58 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
          v57 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v73.fields.currentCryptoKey = v58;
          *(_QWORD *)&v73.fields.fakeValue = v57;
          v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v73, 0LL);
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          rarity = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (this->fields.amountSortValue << 48)) | v59;
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
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  EventCampaignMaster_o *v8; // x21
  ServantFilterMaster_o *userSvtEntity; // x0
  __int64 v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A57526 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57526 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  userSvtEntity = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
  if ( !entity || !v8 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)userSvtEntity, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userSvtEntity = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !userSvtEntity )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(userSvtEntity, this->fields.svtId, entity->fields.eventId, 0LL) )
    return 1;
  userSvtEntity = (ServantFilterMaster_o *)this->fields.userSvtEntity;
  if ( !userSvtEntity )
LABEL_17:
    sub_1B8880C(userSvtEntity, v10);
  return UserServantEntity__getEventUpVal_40205120(
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

  if ( (byte_4A57523 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57523 = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
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
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A57524 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A57524 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19052/*"error"*/;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0LL);
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

  if ( (byte_4A57522 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57522 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
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