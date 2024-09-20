void __fastcall EventServantFatigueListViewItem___ctor(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  IconLabelInfo_o *v16; // x21
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  struct UserServantEntity_o **p_userServantEntity; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  int64_t Instance; // x0
  __int64 v24; // x1
  struct UserServantEntity_o *v25; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x26
  __int64 v27; // x27
  __int64 v28; // x28
  Il2CppObject *Entity; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct UserServantEntity_o *v32; // x8
  ServantEntity_o *servantEntity; // x26
  struct System_String_o *Name; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  UserServantEntity_o *v37; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v39; // x8
  struct UserServantEntity_o *v40; // x8
  __int128 v41; // q1
  __int64 v42; // x26
  bool v43; // w8
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  struct UserServantEntity_o *v48; // x8
  UserEventServantFatigueMaster_o *v49; // x24
  __int64 v50; // x25
  __int64 v51; // x26
  int64_t v52; // x25
  struct UserServantEntity_o *v53; // x8
  __int128 v54; // q0
  int64_t v55; // x0
  struct UserServantEntity_o *v56; // x8
  __int128 v57; // q0
  UserServantCollectionMaster_o *v58; // x22
  struct UserServantEntity_o *v59; // x8
  int64_t v60; // x23
  __int64 v61; // x24
  __int64 v62; // x25
  Il2CppObject *MasterData_object; // x22
  __int64 v64; // x23
  int64_t v65; // x22
  unsigned int v66; // w24
  __int64 v67; // x25
  __int64 v68; // x8
  unsigned int v69; // w26
  __int64 v70; // x8
  unsigned int v71; // w9
  __int64 v72; // x8
  struct UserServantEntity_o *v73; // x9
  __int128 v74; // q0
  __int64 v75; // x28
  UserServantEntity_o *v76; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  int v83; // w22
  BalanceConfig_c *v84; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t v86; // w2
  int32_t v87; // w3
  struct System_String_o *v88; // x1
  int64_t v89; // x23
  int64_t v90; // x8
  struct ServantEntity_o *v91; // x9
  struct UserServantEntity_o *v92; // x8
  __int64 v93; // x21
  __int64 v94; // x22
  int32_t v95; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+90h] [xbp-90h]
  int64_t recoverAt; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_4A5F3CE & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5F3CE = 1;
  }
  recoverAt = 0LL;
  v13 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo1 = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v13, v14, v15);
  v16 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo2 = v16;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v16, v18, v19);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v21,
    v22);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v25 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v28 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v102.fields.currentCryptoKey = v28;
  *(_QWORD *)&v102.fields.fakeValue = v27;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v102, 0LL);
  if ( !v26 )
    goto LABEL_92;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v26,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v30, v31);
  v32 = this->fields.userServantEntity;
  if ( !v32 )
    goto LABEL_92;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v32->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_92;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0LL);
  this->fields.servantName = Name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantName, (int32_t)Name, v35, v36);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_92;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
  v37 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v37 )
    goto LABEL_92;
  Rarity = UserServantEntity__getRarity(v37, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_92;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v39 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v39 )
    goto LABEL_92;
  this->fields.isChoice = UserServantEntity__IsChoice(v39, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_92;
  v40 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v41 = *(_OWORD *)&v40->fields.id.fields.fakeValue;
  v42 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v40->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v100.fields.fakeValue = v41;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v99 = v100;
  v43 = v42 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v99, 0LL);
  this->fields.baseUserSvtId = baseUserSvtId;
  this->fields.isPush = v43;
  this->fields.targetRecoveryFatigueItem = targetRecoveryFatigueItem;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.targetRecoveryFatigueItem,
    (int32_t)targetRecoveryFatigueItem,
    v44,
    v45);
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v46, v47);
  this->fields.isFatigueRecover = 0;
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.fatigueTime = -1LL;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_92;
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    this->fields.isHeroineSvt = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  v48 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v49 = (UserEventServantFatigueMaster_o *)Instance;
  v51 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v51;
  *(_QWORD *)&v103.fields.fakeValue = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v103, 0LL);
  if ( !v49 )
    goto LABEL_92;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v49,
         &recoverAt,
         &this->fields.isFatigueRecover,
         eventId,
         Instance,
         0LL) )
  {
    v52 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getTime(0LL);
    if ( v52 > Instance )
      this->fields.fatigueTime = recoverAt;
    if ( this->fields.isFatigueRecover )
    {
      v53 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_92;
      v54 = *(_OWORD *)&v53->fields.id.fields.fakeValue;
      *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v53->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v100.fields.fakeValue = v54;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v98 = v100;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v98, 0LL);
      this->fields.isCanNotSelect = !UserEventServantFatigueMaster__IsRecoverUserServant(v49, eventId, v55, 0LL);
    }
  }
  if ( this->fields.isHeroineSvt )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_37688364(126, 0LL) )
      this->fields.isCanNotSelect = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v56 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v57 = *(_OWORD *)&v56->fields.userId.fields.fakeValue;
  v58 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v56->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v100.fields.fakeValue = v57;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v97 = v100;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v97, 0LL);
  v59 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v60 = Instance;
  v62 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
  v61 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v104.fields.currentCryptoKey = v62;
  *(_QWORD *)&v104.fields.fakeValue = v61;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v104, 0LL);
  if ( !v58 )
    goto LABEL_92;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v58, v60, Instance, 0LL);
  if ( !Instance )
    goto LABEL_92;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_92;
  Instance = (int64_t)UserDeckMaster__getDeckList((UserDeckMaster_o *)MasterData_object, Instance, 0LL);
  if ( !Instance )
    goto LABEL_92;
  v64 = *(_QWORD *)(Instance + 24);
  v65 = Instance;
  if ( (int)v64 < 1 )
    goto LABEL_75;
  v66 = 0;
LABEL_57:
  v67 = *(_QWORD *)(v65 + 8LL * (int)v66 + 32);
  if ( !v67 )
    goto LABEL_92;
  v68 = *(_QWORD *)(v67 + 48);
  if ( !v68 )
    goto LABEL_92;
  v69 = 0;
  while ( 1 )
  {
    v70 = *(_QWORD *)(v68 + 16);
    if ( !v70 )
      goto LABEL_92;
    v71 = *(_DWORD *)(v70 + 24);
    if ( (int)v69 >= (int)v71 )
    {
      if ( this->fields.isParty )
        goto LABEL_75;
      if ( ++v66 == (_DWORD)v64 )
        goto LABEL_75;
      if ( v66 >= *(_DWORD *)(v65 + 24) )
LABEL_73:
        sub_1B88814(Instance, v24);
      goto LABEL_57;
    }
    if ( v69 >= v71 )
      goto LABEL_73;
    v72 = *(_QWORD *)(v70 + 8LL * (int)v69 + 32);
    if ( !v72 )
      goto LABEL_92;
    v73 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_92;
    v74 = *(_OWORD *)&v73->fields.id.fields.fakeValue;
    v75 = *(_QWORD *)(v72 + 24);
    *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v73->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v100.fields.fakeValue = v74;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v96 = v100;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v96, 0LL);
    if ( v75 == Instance )
      break;
    v68 = *(_QWORD *)(v67 + 48);
    ++v69;
    if ( !v68 )
      goto LABEL_92;
  }
  this->fields.isParty = 1;
LABEL_75:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v76 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v76 )
    goto LABEL_92;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v76, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v78,
    v79);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_92;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v81,
    v82);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_92;
  v83 = *(_DWORD *)(Instance + 276);
  v84 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v84 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v84->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v83;
  if ( !Instance )
    goto LABEL_92;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_92;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_92;
  v88 = *(struct System_String_o **)(Instance + 24);
  v89 = Instance;
  this->fields.className = v88;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.className, (int32_t)v88, v86, v87);
  v90 = *(int *)(v89 + 48);
  v91 = this->fields.servantEntity;
  this->fields.priority = v90;
  this->fields.sortValue1B = v90;
  if ( !v91 )
    goto LABEL_92;
  v92 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  this->fields.sortValue2 = ((__int64)v91->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v92->fields.lv;
  v94 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
  v93 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v105.fields.currentCryptoKey = v94;
  *(_QWORD *)&v105.fields.fakeValue = v93;
  v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v105, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v95;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_92:
    sub_1B8880C(Instance, v24);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall EventServantFatigueListViewItem__ClearFatigue(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  this->fields.fatigueTime = -1LL;
}


bool __fastcall EventServantFatigueListViewItem__GetIsEventUpValShow(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *v4; // x19
  unsigned int bonusKind2; // w8
  int32_t bonusKindId; // w2
  int32_t bonusKind2Id; // w9
  struct ServantEntity_o *servantEntity; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  struct ServantEntity_o *v11; // x8
  EventServantFatigueMaster_o *v12; // x20
  int32_t v13; // w19
  __int64 v14; // x21
  __int64 v15; // x22
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  System_Func_object__bool__o *v17; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v19; // x20
  __int64 v20; // x21
  __int64 v21; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v22; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v4 = this;
  if ( (byte_4A5F3D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantFatigueMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_EventServantFatigueListViewItem__GetIsEventUpValShow_b__44_0__);
    sub_1B885B0(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EventServantFatigueListViewItem_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F3D2 = 1;
  }
  if ( !sort )
LABEL_47:
    sub_1B8880C(this, sort);
  if ( !sort->fields.isBonusKind )
  {
LABEL_26:
    LOBYTE(this) = 1;
    return (char)this;
  }
  bonusKind2 = sort->fields.bonusKind2;
  this = (EventServantFatigueListViewItem_o *)(&dword_0 + 1);
  if ( bonusKind2 <= 7 && ((1 << bonusKind2) & 0xB9) != 0 )
  {
    if ( v4->fields.bonusKind == bonusKind2 )
    {
      bonusKindId = v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKind2Id;
      if ( bonusKindId == bonusKind2Id )
      {
LABEL_12:
        switch ( bonusKind2 )
        {
          case 0u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
            if ( !this )
              goto LABEL_47;
            EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                  (EventGroupMaster_o *)this,
                                  v4->fields.bonusKindId,
                                  0LL);
            this = (EventServantFatigueListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                          (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                          0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_34;
            if ( !EntitiesByGroupId )
              goto LABEL_47;
            if ( EntitiesByGroupId->fields._size < 2 )
              goto LABEL_34;
            v17 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v17,
              (Il2CppObject *)v4,
              Method_EventServantFatigueListViewItem__GetIsEventUpValShow_b__44_0__,
              0LL);
            LOBYTE(this) = BasicHelper__Any_object_(
                             (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                             (System_Func_T__bool__o *)v17,
                             (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventGroupEntity___);
            return (char)this;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
            userServantEntity = v4->fields.userServantEntity;
            if ( !userServantEntity )
              goto LABEL_47;
            v19 = (EventCampaignMaster_o *)this;
            v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
            v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v26.fields.currentCryptoKey = v21;
            *(_QWORD *)&v26.fields.fakeValue = v20;
            this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                          v26,
                                                          0LL);
            if ( !v19 )
              goto LABEL_47;
            LOBYTE(this) = EventCampaignMaster__IsEnableServant(v19, (int32_t)this, v4->fields.bonusKindId, 0LL);
            return (char)this;
          case 4u:
          case 5u:
            this = (EventServantFatigueListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_47;
            this = (EventServantFatigueListViewItem_o *)UserServantEntity__getEventUpVal_40205120(
                                                          (UserServantEntity_o *)this,
                                                          v4->fields.setupInfo,
                                                          bonusKindId,
                                                          0LL,
                                                          0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_26;
LABEL_15:
            servantEntity = v4->fields.servantEntity;
            if ( !servantEntity )
              goto LABEL_47;
            v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v24.fields.currentCryptoKey = v10;
            *(_QWORD *)&v24.fields.fakeValue = v9;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL) < 1 )
              goto LABEL_34;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantFatigueMaster___);
            v11 = v4->fields.servantEntity;
            if ( !v11 )
              goto LABEL_47;
            v12 = (EventServantFatigueMaster_o *)this;
            v13 = v4->fields.bonusKindId;
            v15 = *(_QWORD *)&v11->fields.id.fields.currentCryptoKey;
            v14 = *(_QWORD *)&v11->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v25.fields.currentCryptoKey = v15;
            *(_QWORD *)&v25.fields.fakeValue = v14;
            this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                          v25,
                                                          0LL);
            if ( !v12 )
              goto LABEL_47;
            if ( EventServantFatigueMaster__IsBonusFilterTarget(v12, v13, (int32_t)this, 0LL) )
              goto LABEL_26;
LABEL_34:
            LOBYTE(this) = 0;
            break;
          case 7u:
            this = (EventServantFatigueListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_47;
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
            if ( !v22 || !this )
              goto LABEL_47;
            LOBYTE(this) = ServantFilterMaster__IsEnableServant(
                             (ServantFilterMaster_o *)this,
                             v22[5],
                             v4->fields.bonusKindId,
                             0LL);
            return (char)this;
          default:
            goto LABEL_15;
        }
        return (char)this;
      }
    }
    else
    {
      bonusKind2Id = sort->fields.bonusKind2Id;
    }
    bonusKindId = bonusKind2Id;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = bonusKind2Id;
    goto LABEL_12;
  }
  return (char)this;
}


bool __fastcall EventServantFatigueListViewItem__IsMatchIndividuality(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  EventServantRecoveryFatigueItem_o *v5; // x20
  bool v6; // w25
  unsigned __int64 v7; // x26
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v9; // w21
  ServantEntity_o *servantEntity; // x22
  __int64 v11; // x23
  __int64 v12; // x24
  struct UserServantEntity_o *v13; // x8
  int32_t v14; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5F3D5 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5F3D5 = 1;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_16;
  targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)EventServantRecoveryFatigueItem__get_Individuality(
                                                                     targetRecoveryFatigueItem,
                                                                     0LL);
  if ( !targetRecoveryFatigueItem )
    goto LABEL_16;
  m_CancellationTokenSource = targetRecoveryFatigueItem->fields.m_CancellationTokenSource;
  v5 = targetRecoveryFatigueItem;
  v6 = (int)m_CancellationTokenSource > 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)m_CancellationTokenSource )
        sub_1B88814(targetRecoveryFatigueItem, method);
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        break;
      v9 = *((_DWORD *)&v5->fields.baseButton + v7);
      servantEntity = this->fields.servantEntity;
      v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
      v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = v12;
      *(_QWORD *)&v16.fields.fakeValue = v11;
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                         v16,
                                                                         0LL);
      v13 = this->fields.userServantEntity;
      if ( !v13 )
        break;
      v14 = (int)targetRecoveryFatigueItem;
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                         v13->fields.dispLimitCount,
                                                                         0LL);
      if ( !servantEntity )
        break;
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)ServantEntity__IsIndividuality(
                                                                         servantEntity,
                                                                         v14,
                                                                         (int32_t)targetRecoveryFatigueItem,
                                                                         v9,
                                                                         0LL);
      if ( ((unsigned __int8)targetRecoveryFatigueItem & 1) == 0 )
      {
        LODWORD(m_CancellationTokenSource) = v5->fields.m_CancellationTokenSource;
        v6 = (__int64)++v7 < (int)m_CancellationTokenSource;
        if ( (__int64)v7 < (int)m_CancellationTokenSource )
          continue;
      }
      return v6;
    }
LABEL_16:
    sub_1B8880C(targetRecoveryFatigueItem, method);
  }
  return v6;
}


bool __fastcall EventServantFatigueListViewItem__IsMatchIndividuality_46151752(
        EventServantFatigueListViewItem_o *this,
        EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *v4; // x19
  __int64 v5; // x8
  EventServantFatigueListViewItem_o *v6; // x20
  bool v7; // w25
  unsigned __int64 v8; // x26
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v10; // w21
  ServantEntity_o *servantEntity; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v14; // x8
  int32_t v15; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_4A5F3D6 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5F3D6 = 1;
  }
  if ( !targetRecoveryFatigueItem )
    goto LABEL_16;
  this = (EventServantFatigueListViewItem_o *)EventServantRecoveryFatigueItem__get_Individuality(
                                                targetRecoveryFatigueItem,
                                                0LL);
  if ( !this )
    goto LABEL_16;
  v5 = *(_QWORD *)&this->fields.sortIndex;
  v6 = this;
  v7 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v5 )
        sub_1B88814(this, targetRecoveryFatigueItem);
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        break;
      v10 = *((_DWORD *)&v6->fields.sortValue0 + v8);
      servantEntity = v4->fields.servantEntity;
      v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = v13;
      *(_QWORD *)&v17.fields.fakeValue = v12;
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                    v17,
                                                    0LL);
      v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
      if ( !v14 )
        break;
      v15 = (int)this;
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                    v14[8],
                                                    0LL);
      if ( !servantEntity )
        break;
      this = (EventServantFatigueListViewItem_o *)ServantEntity__IsIndividuality(
                                                    servantEntity,
                                                    v15,
                                                    (int32_t)this,
                                                    v10,
                                                    0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(v5) = v6->fields.sortIndex;
        v7 = (__int64)++v8 < (int)v5;
        if ( (__int64)v8 < (int)v5 )
          continue;
      }
      return v7;
    }
LABEL_16:
    sub_1B8880C(this, targetRecoveryFatigueItem);
  }
  return v7;
}


bool __fastcall EventServantFatigueListViewItem__IsMatchServantFilter(
        EventServantFatigueListViewItem_o *this,
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
  UserServantEntity_o *userServantEntity; // x21
  __int64 v14; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21
  UserServantEntity_o *v19; // x0
  int32_t dispLimitCount; // w22
  UserServantEntity_o *v21; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v29; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v31; // w0

  if ( (byte_4A5F3D1 & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4A5F3D1 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_62;
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
      goto LABEL_62;
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
    goto LABEL_62;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
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
    goto LABEL_62;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0LL) )
      return 0;
  }
  ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_62:
    sub_1B8880C(ClassGroupFilterKindList, sort);
  v14 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_63;
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
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
    goto LABEL_37;
  v19 = this->fields.userServantEntity;
  if ( v19 )
  {
    dispLimitCount = this->fields.dispLimitCount;
    if ( dispLimitCount != UserServantEntity__getDispLimitCount(v19, 0, 0LL) )
    {
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_62;
      ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                   (UserServantEntity_o *)ClassGroupFilterKindList,
                                   0,
                                   0LL);
      v21 = this->fields.userServantEntity;
      this->fields.dispLimitCount = ClassGroupFilterKindList;
      if ( !v21 )
        goto LABEL_62;
      SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v21, -1, 0LL);
      this->fields.skillCategoryIdList = SkillCategoryIdList;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
        (int32_t)SkillCategoryIdList,
        v23,
        v24);
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_62;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)ClassGroupFilterKindList,
                                       0,
                                       0LL);
      this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
        (int32_t)TreasureDeviceCategoryIdList,
        v26,
        v27);
    }
  }
  ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v14 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_63;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0LL);
  ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v14 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
    sub_1B88814(ClassGroupFilterKindList, v14);
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
  v29 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0LL);
  v31 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
  if ( ((IsUnSelectedAllTargetFilters ^ v29) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v31 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v31 )
  {
    return 0;
  }
LABEL_37:
  v16 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v16->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall EventServantFatigueListViewItem__ModifyChoiceItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B8880C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EventServantFatigueListViewItem__ModifyItem(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  EventServantFatigueListViewItem__ModifyLockItem(this, v5);
  EventServantFatigueListViewItem__ModifyChoiceItem(this, v6);
  EventServantFatigueListViewItem__ModifyPushItem(this, v7);
}


void __fastcall EventServantFatigueListViewItem__ModifyLockItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B8880C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EventServantFatigueListViewItem__ModifyPushItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4A5F3CF & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5F3CF = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_1B8880C(SelfUserGame, v4);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v8, 0LL);
}


bool __fastcall EventServantFatigueListViewItem__SetSortValue(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int64_t *p_sortValue0; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int64_t IsBaseSvt; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  _BOOL4 isChoice; // w8
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  EventServantRecoveryFatigueItem_o **manager; // x8
  __int64 methodPtr_low; // x11
  int64_t fatigueTime; // x22
  bool IsMatchIndividuality_46151752; // w0
  int64_t v18; // x8
  __int64 v19; // x9
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v22; // x21
  __int64 v23; // x22
  struct UserServantEntity_o *v24; // x8
  __int128 v25; // q1
  struct UserServantEntity_o *v26; // x8
  int64_t rarity; // x8
  int64_t v28; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v32; // w1
  struct UserServantEntity_o *v33; // x8
  struct UserServantEntity_o *v34; // x8
  struct ServantEntity_o *v35; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *v38; // x8
  __int64 v39; // x11
  struct ListViewManager_o *v40; // x20
  int32_t lv; // w20
  int64_t priority; // x9
  struct ServantEntity_o *v43; // x8
  struct UserServantEntity_o *v44; // x8
  __int64 v45; // x21
  __int64 v46; // x22
  struct ServantEntity_o *v47; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v49; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4A5F3D0 & 1) == 0 )
  {
    sub_1B885B0(&EventServantFatigueListViewManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5F3D0 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventServantFatigueListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventServantFatigueListViewItem__IsMatchServantFilter(this, sort, v7)
    || (IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v6), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventServantFatigueListViewItem__GetIsEventUpValShow(this, sort, v10), (IsBaseSvt & 1) == 0) )
  {
    LOBYTE(IsBaseSvt) = 0;
    return IsBaseSvt;
  }
  isChoice = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    isChoice = this->fields.isChoice;
  if ( isChoice )
  {
    if ( !sort )
      goto LABEL_99;
    if ( sort->fields.isChoiceSort )
      *p_sortValue0 = 10LL;
  }
  IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v9);
  if ( (IsBaseSvt & 1) != 0 )
  {
    v13 = 30LL;
  }
  else
  {
    if ( !sort )
      goto LABEL_99;
    if ( !sort->fields.isSmartSort )
      goto LABEL_35;
    manager = (EventServantRecoveryFatigueItem_o **)sort->fields.manager;
    if ( !manager )
      goto LABEL_99;
    methodPtr_low = LOBYTE(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE((*manager)[2].klass) < (unsigned int)methodPtr_low
      || *((EventServantFatigueListViewManager_c **)(*manager)[1].fields.emptySprite + methodPtr_low - 1) != EventServantFatigueListViewManager_TypeInfo )
    {
      goto LABEL_99;
    }
    fatigueTime = this->fields.fatigueTime;
    IsMatchIndividuality_46151752 = EventServantFatigueListViewItem__IsMatchIndividuality_46151752(
                                      this,
                                      manager[67],
                                      v12);
    v18 = 10LL;
    if ( IsMatchIndividuality_46151752 )
      v18 = 20LL;
    if ( IsMatchIndividuality_46151752 )
      v19 = -10LL;
    else
      v19 = -20LL;
    if ( fatigueTime < 1 )
      v18 = v19;
    this->fields.sortValue0 = v18;
    if ( sort->fields.isChoiceSort && this->fields.isChoice )
      this->fields.sortValue0B = 10LL;
    if ( !this->fields.isCanNotSelect )
      goto LABEL_35;
    v13 = -30LL;
  }
  *p_sortValue0 = v13;
LABEL_35:
  IsBaseSvt = (int64_t)this->fields.iconLabelInfo2;
  if ( !IsBaseSvt )
    goto LABEL_99;
  IconLabelInfo__Clear((IconLabelInfo_o *)IsBaseSvt, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.sortValue1B = this->fields.priority;
  if ( !servantEntity )
    goto LABEL_99;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_99;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | userServantEntity->fields.lv;
  v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v23;
  *(_QWORD *)&v54.fields.fakeValue = v22;
  IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v54, 0LL);
  this->fields.sortValue2B = (int)IsBaseSvt;
  if ( !sort )
LABEL_99:
    sub_1B8880C(IsBaseSvt, v9);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v24 = this->fields.userServantEntity;
      if ( !v24 )
        goto LABEL_99;
      v25 = *(_OWORD *)&v24->fields.id.fields.fakeValue;
      *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&v24->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v52.fields.fakeValue = v25;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v51 = v52;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v51, 0LL);
      v26 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v26 )
        goto LABEL_99;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_99;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v26->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_77;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_64;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      v28 = *(int *)(IsBaseSvt + 256);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v28;
      goto LABEL_86;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_40212352((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = tdMaxLv[0];
      v32 = 33;
      goto LABEL_76;
    case 5:
      v33 = this->fields.userServantEntity;
      if ( !v33 )
        goto LABEL_99;
      hp = v33->fields.hp;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = v33->fields.adjustHp;
      v32 = 3;
      goto LABEL_76;
    case 6:
      v34 = this->fields.userServantEntity;
      if ( !v34 )
        goto LABEL_99;
      hp = v34->fields.atk;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = v34->fields.adjustAtk;
      v32 = 5;
      goto LABEL_76;
    case 7:
      v35 = this->fields.servantEntity;
      if ( !v35 )
        goto LABEL_99;
      cost = v35->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_99;
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_77;
    case 8:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      rarity = -this->fields.priority;
LABEL_64:
      this->fields.sortValue1 = rarity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      goto LABEL_79;
    case 0xA:
      hp = this->fields.friendship;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = this->fields.friendshipMax;
      v32 = 32;
      goto LABEL_76;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_96;
      v38 = sort->fields.manager;
      if ( v38
        && (v39 = LOBYTE(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v38->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v39) )
      {
        if ( (EventServantFatigueListViewManager_c *)v38->klass->_2.typeHierarchy[v39 - 1] == EventServantFatigueListViewManager_TypeInfo )
          v40 = sort->fields.manager;
        else
          v40 = 0LL;
      }
      else
      {
        v40 = 0LL;
      }
      v44 = this->fields.userServantEntity;
      if ( !v44 )
        goto LABEL_99;
      v46 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v55.fields.currentCryptoKey = v46;
      *(_QWORD *)&v55.fields.fakeValue = v45;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v55, 0LL);
      if ( !v40 )
        goto LABEL_99;
      IsBaseSvt = EventServantFatigueListViewManager__GetAmountSortValue(
                    (EventServantFatigueListViewManager_o *)v40,
                    IsBaseSvt,
                    0LL);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_96:
      v47 = this->fields.servantEntity;
      if ( !v47 )
        goto LABEL_99;
      collectionNo = v47->fields.collectionNo;
      v49 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48)) | collectionNo;
      if ( !v49 )
        goto LABEL_99;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      lv = v49->fields.lv;
      IsBaseSvt = (int64_t)v49;
      goto LABEL_80;
    case 0xF:
      hp = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = this->fields.nowMaxHpReinforceValue;
      v32 = 44;
      goto LABEL_76;
    case 0x10:
      hp = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = this->fields.nowMaxAtkReinforceValue;
      v32 = 45;
LABEL_76:
      IconLabelInfo__Set_38140136((IconLabelInfo_o *)IsBaseSvt, v32, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_77:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      iconLabelInfo2 = this->fields.iconLabelInfo2;
LABEL_79:
      lv = *(_DWORD *)(IsBaseSvt + 256);
LABEL_80:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_99;
      IconLabelInfo__Set_38140136(iconLabelInfo2, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0LL);
LABEL_82:
      LOBYTE(IsBaseSvt) = 1;
      break;
    case 0x19:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      this->fields.sortValue1 = this->fields.fatigueTime;
      if ( !IsBaseSvt )
        goto LABEL_99;
      v28 = *(int *)(IsBaseSvt + 256);
      priority = this->fields.priority;
      v43 = this->fields.servantEntity;
      this->fields.sortValue1B = v28;
      this->fields.sortValue2 = priority;
      if ( !v43 )
        goto LABEL_99;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue2B = v28 | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | ((__int64)v43->fields.collectionNo << 16);
LABEL_86:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_99;
      IconLabelInfo__Set_38140136(iconLabelInfo1, 2, v28, IsBaseSvt, 0, 0, 0, 0, 0LL);
      goto LABEL_82;
    default:
      return IsBaseSvt;
  }
  return IsBaseSvt;
}


void __fastcall EventServantFatigueListViewItem__SetUserServantEntity(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.userServantEntity = userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
}


bool __fastcall EventServantFatigueListViewItem__SwapChoice(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall EventServantFatigueListViewItem__SwapLock(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool __fastcall EventServantFatigueListViewItem___GetIsEventUpValShow_b__44_0(
        EventServantFatigueListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  struct UserServantEntity_o *v11; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5F3D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5F3D7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_19;
  v8 = Master_object;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  if ( !entity || !v8 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v11 = this->fields.userServantEntity;
  if ( !v11 || !Master_object )
    goto LABEL_19;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Master_object,
         v11->fields.svtId,
         entity->fields.eventId,
         0LL) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_19:
    sub_1B8880C(Master_object, v6);
  return UserServantEntity__getEventUpVal_40205120(
           (UserServantEntity_o *)Master_object,
           this->fields.setupInfo,
           entity->fields.eventId,
           0LL,
           0LL);
}


System_String_o *__fastcall EventServantFatigueListViewItem__get_ClassName(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.className;
}


int64_t __fastcall EventServantFatigueListViewItem__get_FatigueTime(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fatigueTime;
}


IconLabelInfo_o *__fastcall EventServantFatigueListViewItem__get_IconInfo1(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall EventServantFatigueListViewItem__get_IconInfo2(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall EventServantFatigueListViewItem__get_IsBaseSvt(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4A5F3D4 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5F3D4 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B8880C(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v7, 0LL);
}


bool __fastcall EventServantFatigueListViewItem__get_IsCanNotLock(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool __fastcall EventServantFatigueListViewItem__get_IsCanNotSelect(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotSelect;
}


bool __fastcall EventServantFatigueListViewItem__get_IsCanNotSelectPush(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v5; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_11;
  if ( UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
    return 1;
  if ( this->fields.isCanNotLock )
    return 1;
  v5 = this->fields.userServantEntity;
  if ( !v5 || UserServantEntity__IsLeave(v5, 0LL) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_11;
  if ( UserServantEntity__IsCombineMaterial(userServantEntity, 0LL) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_11:
    sub_1B8880C(userServantEntity, method);
  return UserServantEntity__IsStatusUp(userServantEntity, 0LL);
}


bool __fastcall EventServantFatigueListViewItem__get_IsChoice(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall EventServantFatigueListViewItem__get_IsDispChoice(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall EventServantFatigueListViewItem__get_IsDispLock(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall EventServantFatigueListViewItem__get_IsFatigueRecover(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFatigueRecover;
}


bool __fastcall EventServantFatigueListViewItem__get_IsHeroineSvt(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHeroineSvt;
}


bool __fastcall EventServantFatigueListViewItem__get_IsLock(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall EventServantFatigueListViewItem__get_IsParty(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isParty;
}


bool __fastcall EventServantFatigueListViewItem__get_IsPush(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall EventServantFatigueListViewItem__get_IsSwapChoice(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall EventServantFatigueListViewItem__get_IsSwapLock(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


int32_t __fastcall EventServantFatigueListViewItem__get_Rarity(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rarity;
}


ServantEntity_o *__fastcall EventServantFatigueListViewItem__get_ServantEntity(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


System_String_o *__fastcall EventServantFatigueListViewItem__get_ServantName(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantName;
}


UserServantEntity_o *__fastcall EventServantFatigueListViewItem__get_UserServantEntity(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t __fastcall EventServantFatigueListViewItem__get_UserSvtId(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4A5F3D3 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5F3D3 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B8880C(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v6, 0LL);
}


void __fastcall EventServantFatigueListViewItem__set_IsCanNotLock(
        EventServantFatigueListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}