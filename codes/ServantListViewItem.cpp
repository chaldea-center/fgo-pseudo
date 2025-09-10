void ServantListViewItem___ctor(
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
  const MethodInfo *v15; // x3
  IconLabelInfo_o *v16; // x25
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UserServantEntity_o **p_userSvtEntity; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int64_t Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v26; // x27
  __int64 v27; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x25
  Il2CppObject *Entity; // x0
  ServantEntity_o **p_servantEntity; // x25
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x26
  struct UserServantEntity_o *v40; // x8
  int32_t v41; // w27
  const MethodInfo *v42; // x2
  struct ServantEntity_o *servantEntity; // x8
  UserServantEntity_o *v44; // x8
  UserServantEntity_o *v45; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v47; // x8
  UserServantEntity_o *v48; // x8
  struct UserServantEntity_o *v49; // x8
  __int128 v50; // q1
  UserServantCollectionMaster_o *v51; // x26
  int64_t v52; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // kr10_16
  __int128 v54; // q0
  __int128 v55; // q1
  __int64 v56; // x24
  struct UserServantEntity_o *v57; // x8
  __int128 v58; // q0
  int64_t v59; // x24
  int max_length; // w8
  int32_t v61; // w9
  int v62; // w8
  int32_t v63; // w9
  struct System_Int32_array *EquipCategoryIdList; // x1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Int32_array **p_equipCategoryIdList; // x0
  UserServantEntity_o *v68; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int64_t v72; // x8
  __int64 rarity; // x22
  __int64 v74; // x23
  __int64 lv; // x24
  __int64 v76; // x22
  __int64 v77; // x23
  struct UserServantEntity_o *v78; // x8
  __int128 v79; // q0
  int64_t v80; // x8
  int v81; // w22
  BalanceConfig_c *v82; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+90h] [xbp-90h]
  int32_t friendshipRank; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_4C23323 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23323 = 1;
  }
  friendshipRank = 0;
  v13 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v13, v14, v15);
  v16 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v16, v18, v19);
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.userSvtEntity = userSvtEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, v21, v22);
  if ( !this->fields.userSvtEntity )
    goto LABEL_67;
  this->fields.svtId = this->fields.userSvtEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v27 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v90.fields.currentCryptoKey = v27;
  *(_QWORD *)&v90.fields.fakeValue = v26;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v90, 0);
  if ( !v28 )
    goto LABEL_67;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v28,
             Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v31, v32);
  this->fields.userCommandCodeEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity, 0, v33, v34);
  this->fields.commandCodeId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  this->fields.commandCodeEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, 0, v35, v36);
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v37, v38);
  *(_QWORD *)&this->fields.bonusKind = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  v39 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(this->fields.svtId, 0);
  v40 = this->fields.userSvtEntity;
  if ( !v40 )
    goto LABEL_67;
  v41 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v40->fields.limitCount, 0);
  if ( !v39 )
    goto LABEL_67;
  ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v39, v41, Instance, 0);
  ServantListViewItem__SetOverwriteStatus(this, userSvtEntity, v42);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_67;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.classId = servantEntity->fields.classId;
  if ( !Instance )
    goto LABEL_67;
  Instance = UserServantEntity__IsLeave((UserServantEntity_o *)Instance, 0);
  v44 = this->fields.userSvtEntity;
  this->fields.isLeave = Instance & 1;
  if ( !v44 )
    goto LABEL_67;
  Instance = UserServantEntity__IsLock(v44, 0);
  v45 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v45 )
    goto LABEL_67;
  IsChoice = UserServantEntity__IsChoice(v45, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_67;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  v47 = this->fields.userSvtEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v47 )
    goto LABEL_67;
  Instance = UserServantEntity__IsChocolateSvtEquip(v47, 0);
  v48 = this->fields.userSvtEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v48 )
    goto LABEL_67;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v48, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v49 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  v50 = *(_OWORD *)&v49->fields.userId.fields.fakeValue;
  v51 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v49->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v88.fields.fakeValue = v50;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v87 = v88;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v87, 0);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(this->fields.svtId, 0);
  if ( !v51 )
    goto LABEL_67;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v51, v52, Instance, 0);
  if ( !Instance )
    goto LABEL_67;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0);
  v24 = *(_QWORD *)&v53.fields.fakeValue;
  *(_QWORD *)&this->fields.friendship.fields.currentCryptoKey = *(_QWORD *)&v53.fields.currentCryptoKey;
  Instance = (int64_t)this->fields.userSvtEntity;
  *(_QWORD *)&this->fields.friendship.fields.fakeValue = *(_QWORD *)&v53.fields.fakeValue;
  this->fields.partyIndex = -1;
  *(_WORD *)&this->fields.isPartyEquip = 0;
  if ( !Instance )
    goto LABEL_67;
  this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_67;
  if ( !userSvtEntity )
    goto LABEL_67;
  v55 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  v54 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v56 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v86.fields.currentCryptoKey = v55;
  *(_OWORD *)&v86.fields.fakeValue = v54;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v86, 0);
  v57 = this->fields.userSvtEntity;
  this->fields.isPush = v56 == Instance;
  this->fields.isEnabled = 1;
  if ( !v57 )
    goto LABEL_67;
  v58 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
  *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v85.fields.fakeValue = v58;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v85, 0);
  if ( !*p_servantEntity )
    goto LABEL_67;
  v59 = Instance;
  Instance = ServantEntity__get_IsKeepServantEquip(*p_servantEntity, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( partyUserEquipList )
    {
      max_length = partyUserEquipList->max_length;
      if ( max_length >= 1 )
      {
        v61 = 0;
        while ( v59 != partyUserEquipList->m_Items[v61] )
        {
          if ( max_length == ++v61 )
            goto LABEL_43;
        }
        this->fields.partyIndex = v61;
        *(_WORD *)&this->fields.isPartyEquip = 257;
      }
LABEL_43:
      Instance = (int64_t)*p_userSvtEntity;
      if ( *p_userSvtEntity )
      {
        EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0);
        p_equipCategoryIdList = &this->fields.equipCategoryIdList;
        this->fields.equipCategoryIdList = EquipCategoryIdList;
        goto LABEL_50;
      }
    }
LABEL_67:
    sub_1C2D6EC(Instance, v24);
  }
  if ( !partyUserServantList )
    goto LABEL_67;
  v62 = partyUserServantList->max_length;
  if ( v62 >= 1 )
  {
    v63 = 0;
    while ( v59 != partyUserServantList->m_Items[v63] )
    {
      if ( v62 == ++v63 )
        goto LABEL_46;
    }
    this->fields.partyIndex = v63;
  }
LABEL_46:
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_67;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v68 = this->fields.userSvtEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v68 )
    goto LABEL_67;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v68, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v70, v71);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_67;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, -1, 0);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_50:
  sub_1C2D434((CGThumbnailListItem_o *)p_equipCategoryIdList, (int32_t)EquipCategoryIdList, v65, v66);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_67;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_67;
  v72 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v72;
  this->fields.sortValue1B = v72;
  if ( !Instance || !*p_userSvtEntity )
    goto LABEL_67;
  rarity = (unsigned int)this->fields.rarity;
  v74 = *(int *)(Instance + 208);
  lv = (*p_userSvtEntity)->fields.lv;
  this->fields.sortValue2 = (v74 << 16)
                          | (rarity << 48)
                          | (2 * lv)
                          | ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0);
  v77 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v76 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v91.fields.currentCryptoKey = v77;
  *(_QWORD *)&v91.fields.fakeValue = v76;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v91, 0);
  v78 = this->fields.userSvtEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v78 )
    goto LABEL_67;
  v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
  *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v88.fields.fakeValue = v79;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v84 = v88;
  v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v84, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.sortValueLast = v80;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_67;
  v81 = *(_DWORD *)(Instance + 276);
  v82 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v82 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userSvtEntity;
  }
  static_fields = v82->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v81;
  if ( !Instance )
    goto LABEL_67;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  if ( !Instance )
    goto LABEL_67;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_67;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void ServantListViewItem___ctor_34772284(
        ServantListViewItem_o *this,
        int32_t index,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        System_Int64_array *attachUserCommandCodeList,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  IconLabelInfo_o *v12; // x24
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int64_t Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x24
  __int64 v22; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  Il2CppObject *Entity; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr00_16
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  int32_t rarity; // w8
  UserCommandCodeEntity_o *v34; // x8
  bool IsChoice; // w0
  struct System_Int32_array *CategoryIdList; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct UserCommandCodeEntity_o *v39; // x8
  __int128 v40; // q1
  int max_length; // w8
  int v42; // w9
  struct CommandCodeEntity_o *v43; // x8
  __int64 v44; // x24
  __int64 v45; // x21
  __int64 v46; // x22
  int64_t v47; // x9
  struct UserCommandCodeEntity_o *v48; // x8
  __int128 v49; // q0
  int64_t v50; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // 0:x0.16

  if ( (byte_4C23324 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23324 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo1 = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v9, v10, v11);
  v12 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0);
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  this->fields.iconLabelInfo2 = v12;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v12, v14, v15);
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity, (int32_t)userCommandCodeEntity, v16, v17);
  if ( !userCommandCodeEntity )
    goto LABEL_30;
  this->fields.commandCodeId = userCommandCodeEntity->fields.commandCodeId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v22 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v22;
  *(_QWORD *)&v54.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v54, 0);
  if ( !v23 )
    goto LABEL_30;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v23,
             Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v25, v26);
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.userSvtEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v27, v28);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  this->fields.servantEntity = 0;
  this->fields.svtId = v29;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, 0, v30, v31);
  this->fields.classId = 0;
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_30;
  rarity = commandCodeEntity->fields.rarity;
  Instance = (int64_t)this->fields.userCommandCodeEntity;
  this->fields.isLeave = 0;
  this->fields.rarity = rarity;
  if ( !Instance )
    goto LABEL_30;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0);
  v34 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v34 )
    goto LABEL_30;
  IsChoice = UserCommandCodeEntity__IsChoice(v34, 0);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isFriendShipSvtEq = 0;
  this->fields.isChoice = IsChoice;
  this->fields.friendshipMax = 0;
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  *(_WORD *)&this->fields.isPartyEquip = 0;
  *(_WORD *)&this->fields.isEventJoin = 0;
  this->fields.partyIndex = -1;
  this->fields.isEnabled = 1;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(userCommandCodeEntity, 0);
  this->fields.commandCodeCategoryIdList = CategoryIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeCategoryIdList, (int32_t)CategoryIdList, v37, v38);
  v39 = this->fields.userCommandCodeEntity;
  if ( !v39 )
    goto LABEL_30;
  v40 = *(_OWORD *)&v39->fields.id.fields.fakeValue;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v39->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v40;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v52, 0);
  if ( !attachUserCommandCodeList )
    goto LABEL_30;
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
  this->fields.sortValue1B = 0;
  if ( !v43 )
    goto LABEL_30;
  v44 = (unsigned int)this->fields.rarity;
  v46 = *(_QWORD *)&v43->fields.collectionNo.fields.currentCryptoKey;
  v45 = *(_QWORD *)&v43->fields.collectionNo.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v46;
  *(_QWORD *)&v55.fields.fakeValue = v45;
  v47 = ((__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v55, 0) << 16) | (v44 << 48);
  commandCodeId = this->fields.commandCodeId;
  this->fields.sortValue2 = v47;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(commandCodeId, 0);
  v48 = this->fields.userCommandCodeEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v48 )
    goto LABEL_30;
  v49 = *(_OWORD *)&v48->fields.id.fields.fakeValue;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v48->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v49;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v53;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v51, 0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v50;
  this->fields.amountSortValue = -1;
  if ( !Instance || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
LABEL_30:
    sub_1C2D6EC(Instance, v19);
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
  if ( (byte_4C23329 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_ServantListViewItem__GetIsEventUpValShow_b__58_0__);
    this = (ServantListViewItem_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23329 = 1;
  }
  if ( !sort )
LABEL_34:
    sub_1C2D6EC(this, sort);
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
            this = (ServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventGroupMaster___);
            if ( !this )
              goto LABEL_34;
            EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                  (EventGroupMaster_o *)this,
                                  v4->fields.bonusKindId,
                                  0);
            this = (ServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)EntitiesByGroupId,
                                              0);
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
              v10 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventGroupEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v10,
                (Il2CppObject *)v4,
                Method_ServantListViewItem__GetIsEventUpValShow_b__58_0__,
                0);
              result = BasicHelper__Any_object_(
                         (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                         (System_Func_T__bool__o *)v10,
                         (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_EventGroupEntity___);
            }
            break;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
            v13 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
            v12 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
            v14 = (EventCampaignMaster_o *)Master_object;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v15.fields.currentCryptoKey = v13;
            *(_QWORD *)&v15.fields.fakeValue = v12;
            this = (ServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v15, 0);
            if ( !v14 )
              goto LABEL_34;
            return EventCampaignMaster__IsEnableServant(v14, (int32_t)this, v4->fields.bonusKindId, 0);
          case 4u:
          case 5u:
            this = (ServantListViewItem_o *)v4->fields.userSvtEntity;
            if ( !this )
              goto LABEL_34;
            return UserServantEntity__getEventUpVal_42935000(
                     (UserServantEntity_o *)this,
                     v4->fields.setupInfo,
                     bonusKindId,
                     0,
                     0);
          case 7u:
            this = (ServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_34;
            this = (ServantListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            if ( !this )
              goto LABEL_34;
            return ServantFilterMaster__IsEnableServant(
                     (ServantFilterMaster_o *)this,
                     v4->fields.svtId,
                     v4->fields.bonusKindId,
                     0);
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


bool ServantListViewItem__GetNpInfo(ServantListViewItem_o *this, TreasureDvcInfo_o **tdInfo, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2332D & 1) == 0 )
  {
    sub_1C2D490(&TreasureDvcInfo_TypeInfo);
    byte_4C2332D = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, -1, 0, 0);
  v7 = (TreasureDvcInfo_o *)sub_1C2D6DC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  *tdInfo = v7;
  sub_1C2D434((CGThumbnailListItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


bool ServantListViewItem__IsMatchCommandCodeFilter(
        ServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  __int64 v7; // x2
  _BOOL4 v8; // w8

  if ( (byte_4C23328 & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C23328 = 1;
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
                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_20;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.commandCodeCategoryIdList, sort, 0) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !RarityFilterKindList )
LABEL_20:
    sub_1C2D6EC(RarityFilterKindList, sort);
  if ( !LODWORD(RarityFilterKindList->max_length) )
    sub_1C2D6F4(RarityFilterKindList, RarityFilterKindList, v7);
  RarityFilterKindList->m_Items[0] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    || !ListViewSort__GetFilter(sort, 39, 0) )
  {
    return 1;
  }
  v8 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v8;
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
      sub_1C2D6EC(0, sort);
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
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  bool IsMatchServantEquipCombineStatusFilter; // w8
  bool result; // w0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  bool HaveStatusFilter; // w8
  __int64 v16; // x2
  _BOOL4 v17; // w8

  if ( (byte_4C23327 & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C23327 = 1;
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
                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_36;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0) )
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
                                          (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0) )
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
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    || (IsMatchServantEquipCombineStatusFilter = ListViewSort__IsMatchServantEquipCombineStatusFilter(
                                                   sort,
                                                   this->fields.userSvtEntity,
                                                   this->fields.servantEntity,
                                                   0,
                                                   0),
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
                                             (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0)
      || (HaveStatusFilter = ListViewSort__IsMatchServantEquipHaveStatusFilter(
                               sort,
                               this->fields.userSvtEntity,
                               this->fields.servantEntity,
                               0,
                               0),
          result = 0,
          HaveStatusFilter) )
    {
      RarityFilterKindList = (System_Int32Enum_array *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
      if ( RarityFilterKindList )
      {
        if ( !LODWORD(RarityFilterKindList->max_length) )
          sub_1C2D6F4(RarityFilterKindList, RarityFilterKindList, v16);
        RarityFilterKindList->m_Items[0] = 39;
        if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
          || !ListViewSort__GetFilter(sort, 39, 0) )
        {
          return 1;
        }
        v17 = !this->fields.isChoice;
        if ( !this->fields.isSwapChoice )
          return this->fields.isChoice;
        return v17;
      }
LABEL_36:
      sub_1C2D6EC(RarityFilterKindList, sort);
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
  __int64 v16; // x2
  __int64 v17; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  UserServantEntity_o *v22; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v24; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v32; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v34; // w0

  if ( (byte_4C23326 & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C2D490(&ServantEventBonusFilterController_TypeInfo);
    byte_4C23326 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_69;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
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
    goto LABEL_69;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userSvtEntity, 0) )
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
    goto LABEL_69;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userSvtEntity, 0) )
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
    goto LABEL_69;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userSvtEntity, sort, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
  {
    v22 = this->fields.userSvtEntity;
    if ( v22 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v22, 0, 0) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0);
        v24 = this->fields.userSvtEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v24 )
          goto LABEL_69;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v24, -1, -1, 0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v26, v27);
        ClassGroupFilterKindList = (__int64)this->fields.userSvtEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C2D434(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v29,
          v30);
      }
    }
    ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_70;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_70:
      sub_1C2D6F4(ClassGroupFilterKindList, v17, v16);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v32 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v34 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v32) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v34 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v34 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userSvtEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_69:
    sub_1C2D6EC(ClassGroupFilterKindList, sort);
  v17 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_70;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void ServantListViewItem__Modify(
        ServantListViewItem_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  this->fields.userSvtEntity = userSvtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userSvtEntity, (int32_t)method, v3);
  ServantListViewItem__SetOverwriteStatus(this, userSvtEntity, v6);
  ServantListViewItem__ModifyLockItem(this, v7);
  ServantListViewItem__ModifyChoiceItem(this, v8);
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
  const MethodInfo *v3; // x3

  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)userCommandCodeEntity,
    (int32_t)method,
    v3);
}


void ServantListViewItem__ModifyUserServantEntity(
        ServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x2

  this->fields.userSvtEntity = userServantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  ServantListViewItem__SetOverwriteStatus(this, userServantEntity, v6);
}


void ServantListViewItem__Modify_34773480(
        ServantListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  this->fields.userCommandCodeEntity = userCommandCodeEntity;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)userCommandCodeEntity,
    (int32_t)method,
    v3);
  ServantListViewItem__ModifyLockItem(this, v5);
  ServantListViewItem__ModifyChoiceItem(this, v6);
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
    sub_1C2D6EC(this, userServantEntity);
  }
  *(int8x16_t *)&v3->fields.rarity = vextq_s8(
                                       *(int8x16_t *)&this->fields.selectNum,
                                       *(int8x16_t *)&this->fields.selectNum,
                                       8u);
}


bool ServantListViewItem__SetSortValue(ServantListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
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
  int64_t hp; // x20
  IconLabelInfo_o *v36; // x21
  int64_t atk; // x20
  IconLabelInfo_o *v38; // x21
  IconLabelInfo_o *v39; // x19
  int64_t cost; // x2
  int32_t lv; // w20
  __int64 v42; // x20
  __int64 v43; // x21
  int32_t v44; // w0
  IconLabelInfo_o *v45; // x20
  int64_t v46; // x9
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v49; // x20
  IconLabelInfo_o *v50; // x20
  int32_t v51; // w21
  __int64 v52; // x21
  __int64 v53; // x22
  const MethodInfo *v54; // x2
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v56; // x20
  __int64 v57; // x21
  int32_t v58; // w8
  __int64 v59; // x21
  __int64 v60; // x22
  const MethodInfo *v61; // x2
  struct ServantEntity_o *servantEntity; // x8
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

  if ( (byte_4C23325 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&ServantListViewManager_TypeInfo);
    byte_4C23325 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.isNeedAdjustIconLabelScale = 0;
  this->fields.sortValue1 = -1;
  v8 = ((__int64 (__fastcall *)(ServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr)(
         this,
         sort,
         klass->vtable._5_IsMatchFilter.method);
  iconLabelInfo2 = 0;
  if ( (v8 & 1) != 0 )
  {
    if ( !this->fields.userSvtEntity
      || (iconLabelInfo2 = ServantListViewItem__GetIsEventUpValShow(this, sort, v7), (iconLabelInfo2 & 1) != 0) )
    {
      isChoice = this->fields.isChoice;
      isSwapChoice = this->fields.isSwapChoice;
      this->fields.sortValue0 = 0;
      v12 = !isChoice;
      v13 = !isChoice;
      v14 = !v12;
      if ( !isSwapChoice )
        v13 = v14;
      if ( v13 )
      {
        if ( !sort )
          goto LABEL_116;
        if ( sort->fields.isChoiceSort )
          this->fields.sortValue0 = 10;
      }
      iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
      if ( !iconLabelInfo2 || (IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0), !sort) )
LABEL_116:
        sub_1C2D6EC(iconLabelInfo2, v6);
      userCommandCodeEntity = this->fields.userCommandCodeEntity;
      sortKind = sort->fields.sortKind;
      if ( !userCommandCodeEntity )
      {
        iconLabelInfo2 = 1;
        switch ( sortKind )
        {
          case 0:
            partyIndex = this->fields.partyIndex;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue0 = (int)partyIndex >= 0;
            goto LABEL_62;
          case 1:
            userSvtEntity = this->fields.userSvtEntity;
            if ( !userSvtEntity )
              goto LABEL_116;
            v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v68.fields.fakeValue = v25;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v66 = v68;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v66, 0);
            v26 = this->fields.userSvtEntity;
            this->fields.sortValue1 = iconLabelInfo2;
            if ( !v26 )
              goto LABEL_116;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v26->fields.createdAt, 0, 0, 0, 0);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            v27 = this->fields.iconLabelInfo2;
            v28 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v27 )
              goto LABEL_116;
            IconLabelInfo__Set_40696284(v27, 2, v28, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)iconLabelInfo2, 0);
            LOBYTE(iconLabelInfo2) = 1;
            if ( IsMaterialTd )
              this->fields.isNeedAdjustIconLabelScale = 1;
            return iconLabelInfo2;
          case 2:
            partyIndex = this->fields.rarity;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            goto LABEL_62;
          case 3:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            v30 = *(int *)(iconLabelInfo2 + 256);
            iconLabelInfo1 = this->fields.iconLabelInfo1;
            this->fields.sortValue1 = v30;
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !iconLabelInfo1 )
              goto LABEL_116;
            IconLabelInfo__Set_40696284(iconLabelInfo1, 2, v30, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_104;
          case 4:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            UserServantEntity__getTreasureDeviceInfo_42942260(
              (UserServantEntity_o *)iconLabelInfo2,
              &tdMaxLv[1],
              tdMaxLv,
              0);
            LODWORD(hpReinforceValue) = tdMaxLv[1];
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = tdMaxLv[1];
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            nowMaxHpReinforceValue = tdMaxLv[0];
            v34 = 33;
            goto LABEL_79;
          case 5:
            hp = this->fields.hp;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = hp;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            v36 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v36 )
              goto LABEL_116;
            IconLabelInfo__Set_40696284(v36, 3, hp, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_57;
          case 6:
            atk = this->fields.atk;
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            this->fields.sortValue1 = atk;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            v38 = this->fields.iconLabelInfo1;
            iconLabelInfo2 = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v38 )
              goto LABEL_116;
            IconLabelInfo__Set_40696284(v38, 5, atk, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
LABEL_57:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            v39 = this->fields.iconLabelInfo2;
            goto LABEL_64;
          case 7:
            cost = this->fields.cost;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = cost;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            IconLabelInfo__Set_40696284((IconLabelInfo_o *)iconLabelInfo2, 7, cost, 0, 0, 0, 0, 0, 0, 0);
            goto LABEL_80;
          case 8:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            partyIndex = -this->fields.priority;
LABEL_62:
            this->fields.sortValue1 = partyIndex;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            v39 = this->fields.iconLabelInfo1;
LABEL_64:
            lv = *(_DWORD *)(iconLabelInfo2 + 256);
            goto LABEL_65;
          case 10:
            v42 = *(_QWORD *)&this->fields.friendship.fields.currentCryptoKey;
            v43 = *(_QWORD *)&this->fields.friendship.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v70.fields.currentCryptoKey = v42;
            *(_QWORD *)&v70.fields.fakeValue = v43;
            v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v70, 0);
            v45 = this->fields.iconLabelInfo1;
            v46 = v44;
            friendship = this->fields.friendship;
            this->fields.sortValue1 = v46;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(friendship, 0);
            if ( !v45 )
              goto LABEL_116;
            IconLabelInfo__Set_40696284(v45, 32, iconLabelInfo2, this->fields.friendshipMax, 0, 0, 0, 0, 0, 0);
            goto LABEL_80;
          case 14:
            iconLabelInfo2 = this->fields.amountSortValue;
            if ( (iconLabelInfo2 & 0x8000000000000000LL) == 0 )
              goto LABEL_113;
            manager = sort->fields.manager;
            if ( manager
              && (naturalAligment = ServantListViewManager_TypeInfo->_2.naturalAligment,
                  manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
            {
              if ( (ServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == ServantListViewManager_TypeInfo )
                v49 = sort->fields.manager;
              else
                v49 = 0;
            }
            else
            {
              v49 = 0;
            }
            v60 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
            v59 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v74.fields.currentCryptoKey = v60;
            *(_QWORD *)&v74.fields.fakeValue = v59;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v74, 0);
            if ( !v49 )
              goto LABEL_116;
            iconLabelInfo2 = ServantListViewManager__GetAmountSortValue(
                               (ServantListViewManager_o *)v49,
                               iconLabelInfo2,
                               v61);
            this->fields.amountSortValue = iconLabelInfo2;
LABEL_113:
            servantEntity = this->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_116;
            collectionNo = servantEntity->fields.collectionNo;
            v64 = this->fields.userSvtEntity;
            this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32)
                                     + (iconLabelInfo2 << 48))
                                    | collectionNo;
            if ( !v64 )
              goto LABEL_116;
            v39 = this->fields.iconLabelInfo1;
            lv = v64->fields.lv;
            iconLabelInfo2 = (int64_t)v64;
LABEL_65:
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v39 )
              goto LABEL_116;
            IconLabelInfo__Set_40696284(v39, 2, lv, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            goto LABEL_104;
          case 15:
            hpReinforceValue = this->fields.hpReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            nowMaxHpReinforceValue = this->fields.nowMaxHpReinforceValue;
            v34 = 44;
            goto LABEL_79;
          case 16:
            hpReinforceValue = this->fields.atkReinforceValue;
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            this->fields.sortValue1 = hpReinforceValue;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            nowMaxHpReinforceValue = this->fields.nowMaxAtkReinforceValue;
            v34 = 45;
LABEL_79:
            IconLabelInfo__Set_40696284(
              (IconLabelInfo_o *)iconLabelInfo2,
              v34,
              hpReinforceValue,
              nowMaxHpReinforceValue,
              0,
              0,
              0,
              0,
              0,
              0);
LABEL_80:
            iconLabelInfo2 = (int64_t)this->fields.userSvtEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            v50 = this->fields.iconLabelInfo2;
            v51 = *(_DWORD *)(iconLabelInfo2 + 256);
            iconLabelInfo2 = UserServantEntity__getLevelMax((UserServantEntity_o *)iconLabelInfo2, 0);
            if ( !v50 )
              goto LABEL_116;
            IconLabelInfo__Set_40696284(v50, 2, v51, iconLabelInfo2, 0, 0, 0, 0, 0, 0);
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            if ( ServantEntity__get_IsExpUp((ServantEntity_o *)iconLabelInfo2, 0) )
              goto LABEL_88;
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)iconLabelInfo2, 0) )
              goto LABEL_88;
            iconLabelInfo2 = (int64_t)this->fields.servantEntity;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)iconLabelInfo2, 0) )
              goto LABEL_104;
LABEL_88:
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
            iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo2;
            if ( !iconLabelInfo2 )
              goto LABEL_116;
            goto LABEL_103;
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
          iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v67, 0);
          v20 = this->fields.userCommandCodeEntity;
          this->fields.sortValue1 = iconLabelInfo2;
          if ( !v20 )
            goto LABEL_116;
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          if ( !iconLabelInfo2 )
            goto LABEL_116;
          IconLabelInfo__SetTime((IconLabelInfo_o *)iconLabelInfo2, 49, v20->fields.createdAt, 0, 0, 0, 0);
          break;
        case 14:
          if ( this->fields.amountSortValue < 0 )
          {
            v21 = sort->fields.manager;
            if ( v21
              && (v22 = ServantListViewManager_TypeInfo->_2.naturalAligment,
                  v21->klass->_2.naturalAligment >= (unsigned int)v22) )
            {
              if ( (ServantListViewManager_c *)v21->klass->_2.typeHierarchy[v22 - 1] == ServantListViewManager_TypeInfo )
                v23 = sort->fields.manager;
              else
                v23 = 0;
            }
            else
            {
              v23 = 0;
            }
            v53 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
            v52 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v72.fields.currentCryptoKey = v53;
            *(_QWORD *)&v72.fields.fakeValue = v52;
            iconLabelInfo2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v72, 0);
            if ( !v23 )
              goto LABEL_116;
            iconLabelInfo2 = ServantListViewManager__GetCommandCodeAmountSortValue(
                               (ServantListViewManager_o *)v23,
                               iconLabelInfo2,
                               v54);
            this->fields.amountSortValue = iconLabelInfo2;
          }
          commandCodeEntity = this->fields.commandCodeEntity;
          if ( !commandCodeEntity )
            goto LABEL_116;
          v57 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.currentCryptoKey;
          v56 = *(_QWORD *)&commandCodeEntity->fields.collectionNo.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v73.fields.currentCryptoKey = v57;
          *(_QWORD *)&v73.fields.fakeValue = v56;
          v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v73, 0);
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
          rarity = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (this->fields.amountSortValue << 48))
                 | v58;
          goto LABEL_102;
        case 2:
          rarity = this->fields.rarity;
          iconLabelInfo2 = (int64_t)this->fields.iconLabelInfo1;
LABEL_102:
          this->fields.sortValue1 = rarity;
          if ( iconLabelInfo2 )
          {
LABEL_103:
            IconLabelInfo__Clear((IconLabelInfo_o *)iconLabelInfo2, 0);
            break;
          }
          goto LABEL_116;
      }
LABEL_104:
      LOBYTE(iconLabelInfo2) = 1;
      return iconLabelInfo2;
    }
    LOBYTE(iconLabelInfo2) = 0;
  }
  return iconLabelInfo2;
}


bool ServantListViewItem__SwapChoice(ServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool ServantListViewItem__SwapLock(ServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool ServantListViewItem___GetIsEventUpValShow_b__58_0(
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

  if ( (byte_4C2332E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2332E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  userSvtEntity = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v12, 0);
  if ( !entity || !v8 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)userSvtEntity, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userSvtEntity = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !userSvtEntity )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(userSvtEntity, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  userSvtEntity = (ServantFilterMaster_o *)this->fields.userSvtEntity;
  if ( !userSvtEntity )
LABEL_17:
    sub_1C2D6EC(userSvtEntity, v10);
  return UserServantEntity__getEventUpVal_42935000(
           (UserServantEntity_o *)userSvtEntity,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0);
}


CommandCodeEntity_o *ServantListViewItem__get_CommandCode(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.commandCodeEntity;
}


int32_t ServantListViewItem__get_CommandCodeId(ServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4C2332B & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2332B = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v6, 0);
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


bool ServantListViewItem__get_IsPartyEquip(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPartyEquip;
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


System_String_o *ServantListViewItem__get_NameText(ServantListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C2332C & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_19056/*"error"*/);
    byte_4C2332C = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19056/*"error"*/;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0, 0);
}


ServantEntity_o *ServantListViewItem__get_Servant(ServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t ServantListViewItem__get_SvtId(ServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4C2332A & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2332A = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v6, 0);
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