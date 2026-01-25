void EventServantFatigueListViewItem___ctor(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x20
  IconLabelInfo_o *v14; // x21
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  struct UserServantEntity_o **p_userServantEntity; // x21
  __int64 Instance; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *v19; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x26
  __int64 v21; // x27
  __int64 v22; // x28
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o *v24; // x8
  ServantEntity_o *servantEntity; // x26
  struct System_String_o *Name; // x0
  UserServantEntity_o *v27; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v29; // x8
  struct UserServantEntity_o *v30; // x8
  __int128 v31; // q1
  __int64 v32; // x26
  bool v33; // w8
  struct UserServantEntity_o *v34; // x8
  UserEventServantFatigueMaster_o *v35; // x24
  __int64 v36; // x25
  __int64 v37; // x26
  int64_t v38; // x25
  struct UserServantEntity_o *v39; // x8
  __int128 v40; // q0
  int64_t v41; // x0
  struct UserServantEntity_o *v42; // x8
  __int128 v43; // q0
  UserServantCollectionMaster_o *v44; // x22
  struct UserServantEntity_o *v45; // x8
  int64_t v46; // x23
  __int64 v47; // x24
  __int64 v48; // x25
  Il2CppObject *MasterData_object; // x22
  __int64 v50; // x23
  __int64 v51; // x22
  unsigned int v52; // w24
  __int64 v53; // x25
  __int64 v54; // x8
  unsigned int v55; // w26
  __int64 v56; // x8
  unsigned int v57; // w9
  __int64 v58; // x8
  struct UserServantEntity_o *v59; // x9
  __int128 v60; // q0
  __int64 v61; // x28
  UserServantEntity_o *v62; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int v65; // w22
  BalanceConfig_c *v66; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct System_String_o *v68; // x1
  __int64 v69; // x23
  int64_t v70; // x8
  struct ServantEntity_o *v71; // x9
  struct UserServantEntity_o *v72; // x8
  __int64 v73; // x21
  __int64 v74; // x22
  struct UserServantEntity_o *v75; // x8
  __int128 v76; // q0
  int64_t v77; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+10h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+50h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+90h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+B0h] [xbp-90h]
  int64_t recoverAt; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_4CE8EC1 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C7BAE8(&IconLabelInfo_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    byte_4CE8EC1 = 1;
  }
  recoverAt = 0;
  v13 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo1 = v13;
  sub_1C7BA8C(&this->fields.iconLabelInfo1, v13);
  v14 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0);
  this->fields.iconLabelInfo2 = v14;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C7BA8C(&this->fields.iconLabelInfo2, v14);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C7BA8C(&this->fields.userServantEntity, userServantEntity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_99;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = v22;
  *(_QWORD *)&v85.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v85, 0);
  if ( !v20 )
    goto LABEL_99;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v20,
             Instance,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  Instance = sub_1C7BA8C(&this->fields.servantEntity, Entity);
  v24 = this->fields.userServantEntity;
  if ( !v24 )
    goto LABEL_99;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v24->fields.limitCount, 0);
  if ( !servantEntity )
    goto LABEL_99;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0, 0);
  this->fields.servantName = Name;
  sub_1C7BA8C(&this->fields.servantName, Name);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_99;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0, 0);
  v27 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v27 )
    goto LABEL_99;
  Rarity = UserServantEntity__getRarity(v27, 0);
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_99;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v29 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v29 )
    goto LABEL_99;
  this->fields.isChoice = UserServantEntity__IsChoice(v29, 0);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_99;
  v30 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_99;
  v31 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
  v32 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v31;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v82 = v83;
  v33 = v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v82, 0);
  this->fields.baseUserSvtId = baseUserSvtId;
  this->fields.isPush = v33;
  this->fields.targetRecoveryFatigueItem = targetRecoveryFatigueItem;
  sub_1C7BA8C(&this->fields.targetRecoveryFatigueItem, targetRecoveryFatigueItem);
  this->fields.setupInfo = setupInfo;
  sub_1C7BA8C(&this->fields.setupInfo, setupInfo);
  this->fields.isFatigueRecover = 0;
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.fatigueTime = -1;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_99;
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0) )
    this->fields.isHeroineSvt = 1;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  v34 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_99;
  v35 = (UserEventServantFatigueMaster_o *)Instance;
  v37 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v37;
  *(_QWORD *)&v86.fields.fakeValue = v36;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v86, 0);
  if ( !v35 )
    goto LABEL_99;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v35,
         &recoverAt,
         &this->fields.isFatigueRecover,
         eventId,
         Instance,
         0) )
  {
    v38 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getTime(0);
    if ( v38 > Instance )
      this->fields.fatigueTime = recoverAt;
    if ( this->fields.isFatigueRecover )
    {
      v39 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_99;
      v40 = *(_OWORD *)&v39->fields.id.fields.fakeValue;
      *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v39->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v83.fields.fakeValue = v40;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v81 = v83;
      v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v81, 0);
      this->fields.isCanNotSelect = !UserEventServantFatigueMaster__IsRecoverUserServant(v35, eventId, v41, 0);
    }
  }
  if ( this->fields.isHeroineSvt )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_40989036(126, 0) )
      this->fields.isCanNotSelect = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v42 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_99;
  v43 = *(_OWORD *)&v42->fields.userId.fields.fakeValue;
  v44 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v42->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v43;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v80 = v83;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v80, 0);
  v45 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_99;
  v46 = Instance;
  v48 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v87.fields.currentCryptoKey = v48;
  *(_QWORD *)&v87.fields.fakeValue = v47;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v87, 0);
  if ( !v44 )
    goto LABEL_99;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v44, v46, Instance, 0);
  if ( !Instance )
    goto LABEL_99;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_99;
  Instance = (__int64)UserDeckMaster__getDeckList(
                        (UserDeckMaster_o *)MasterData_object,
                        *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                        0);
  if ( !Instance )
    goto LABEL_99;
  v50 = *(_QWORD *)(Instance + 24);
  v51 = Instance;
  if ( (int)v50 < 1 )
    goto LABEL_79;
  v52 = 0;
LABEL_61:
  v53 = *(_QWORD *)(v51 + 8LL * (int)v52 + 32);
  if ( !v53 )
    goto LABEL_99;
  v54 = *(_QWORD *)(v53 + 48);
  if ( !v54 )
    goto LABEL_99;
  v55 = 0;
  while ( 1 )
  {
    v56 = *(_QWORD *)(v54 + 16);
    if ( !v56 )
      goto LABEL_99;
    v57 = *(_DWORD *)(v56 + 24);
    if ( (int)v55 >= (int)v57 )
    {
      if ( this->fields.isParty )
        goto LABEL_79;
      if ( ++v52 == (_DWORD)v50 )
        goto LABEL_79;
      if ( v52 >= *(_DWORD *)(v51 + 24) )
LABEL_77:
        sub_1C7BD48(Instance);
      goto LABEL_61;
    }
    if ( v55 >= v57 )
      goto LABEL_77;
    v58 = *(_QWORD *)(v56 + 8LL * (int)v55 + 32);
    if ( !v58 )
      goto LABEL_99;
    v59 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_99;
    v60 = *(_OWORD *)&v59->fields.id.fields.fakeValue;
    v61 = *(_QWORD *)(v58 + 24);
    *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v59->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v83.fields.fakeValue = v60;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v79 = v83;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v79, 0);
    if ( v61 == Instance )
      break;
    v54 = *(_QWORD *)(v53 + 48);
    ++v55;
    if ( !v54 )
      goto LABEL_99;
  }
  this->fields.isParty = 1;
LABEL_79:
  Instance = (__int64)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_99;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v62 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v62 )
    goto LABEL_99;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v62, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C7BA8C(&this->fields.skillCategoryIdList, SkillCategoryIdList);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_99;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   -1,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1C7BA8C(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_99;
  v65 = *(_DWORD *)(Instance + 276);
  v66 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v66 = BalanceConfig_TypeInfo;
    Instance = (__int64)*p_userServantEntity;
  }
  static_fields = v66->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v65;
  if ( !Instance )
    goto LABEL_99;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_99;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_99;
  v68 = *(struct System_String_o **)(Instance + 24);
  v69 = Instance;
  this->fields.className = v68;
  Instance = sub_1C7BA8C(&this->fields.className, v68);
  v70 = *(int *)(v69 + 52);
  v71 = this->fields.servantEntity;
  this->fields.priority = v70;
  this->fields.sortValue1B = v70;
  if ( !v71 )
    goto LABEL_99;
  v72 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_99;
  this->fields.sortValue2 = ((__int64)v71->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v72->fields.lv;
  v74 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
  v73 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v88.fields.currentCryptoKey = v74;
  *(_QWORD *)&v88.fields.fakeValue = v73;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v88, 0);
  v75 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v75 )
    goto LABEL_99;
  v76 = *(_OWORD *)&v75->fields.id.fields.fakeValue;
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v75->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v76;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v78 = v83;
  v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v78, 0);
  Instance = (__int64)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v77;
  this->fields.amountSortValue = -1;
  if ( !Instance || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (__int64)*p_iconLabelInfo2) == 0) )
LABEL_99:
    sub_1C7BD40(Instance, v18);
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


bool EventServantFatigueListViewItem__GetIsEventUpValShow(
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
  if ( (byte_4CE8EC5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventServantFatigueMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_EventServantFatigueListViewItem__GetIsEventUpValShow_b__43_0__);
    sub_1C7BAE8(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EventServantFatigueListViewItem_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE8EC5 = 1;
  }
  if ( !sort )
LABEL_47:
    sub_1C7BD40(this, sort);
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
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventGroupMaster___);
            if ( !this )
              goto LABEL_47;
            EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                  (EventGroupMaster_o *)this,
                                  v4->fields.bonusKindId,
                                  0);
            this = (EventServantFatigueListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                          (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                          0);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_34;
            if ( !EntitiesByGroupId )
              goto LABEL_47;
            if ( EntitiesByGroupId->fields._size < 2 )
              goto LABEL_34;
            v17 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v17,
              (Il2CppObject *)v4,
              Method_EventServantFatigueListViewItem__GetIsEventUpValShow_b__43_0__,
              0);
            LOBYTE(this) = BasicHelper__Any_object_(
                             (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                             (System_Func_T__bool__o *)v17,
                             (const MethodInfo_3159728 *)Method_BasicHelper_Any_EventGroupEntity___);
            return (char)this;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
            this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                          v26,
                                                          0);
            if ( !v19 )
              goto LABEL_47;
            LOBYTE(this) = EventCampaignMaster__IsEnableServant(v19, (int32_t)this, v4->fields.bonusKindId, 0);
            return (char)this;
          case 4u:
          case 5u:
            this = (EventServantFatigueListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_47;
            this = (EventServantFatigueListViewItem_o *)UserServantEntity__getEventUpVal(
                                                          (UserServantEntity_o *)this,
                                                          v4->fields.setupInfo,
                                                          bonusKindId,
                                                          0,
                                                          0);
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
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v24, 0) < 1 )
              goto LABEL_34;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventServantFatigueMaster___);
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
            this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                          v25,
                                                          0);
            if ( !v12 )
              goto LABEL_47;
            if ( EventServantFatigueMaster__IsBonusFilterTarget(v12, v13, (int32_t)this, 0) )
              goto LABEL_26;
LABEL_34:
            LOBYTE(this) = 0;
            break;
          case 7u:
            this = (EventServantFatigueListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_47;
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
            if ( !v22 || !this )
              goto LABEL_47;
            LOBYTE(this) = ServantFilterMaster__IsEnableServant(
                             (ServantFilterMaster_o *)this,
                             v22[5],
                             v4->fields.bonusKindId,
                             0);
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


bool EventServantFatigueListViewItem__IsMatchIndividuality(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *v2; // x19
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  il2cpp_array_size_t max_length; // x8
  bool v7; // w25
  unsigned __int64 v8; // x26
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v10; // w20
  ServantEntity_o *servantEntity; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v14; // x8
  int32_t v15; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v2 = this;
  if ( (byte_4CE8EC7 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CE8EC7 = 1;
  }
  targetRecoveryFatigueItem = v2->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_17;
  eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    goto LABEL_17;
  targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality;
  if ( !targetIndividuality )
    goto LABEL_17;
  max_length = targetIndividuality->max_length;
  v7 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C7BD48(this);
      userServantEntity = v2->fields.userServantEntity;
      if ( !userServantEntity )
        break;
      v10 = targetIndividuality->m_Items[v8];
      servantEntity = v2->fields.servantEntity;
      v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = v13;
      *(_QWORD *)&v17.fields.fakeValue = v12;
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                    v17,
                                                    0);
      v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
      if ( !v14 )
        break;
      v15 = (int)this;
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                    v14[8],
                                                    0);
      if ( !servantEntity )
        break;
      this = (EventServantFatigueListViewItem_o *)ServantEntity__IsIndividuality(
                                                    servantEntity,
                                                    v15,
                                                    (int32_t)this,
                                                    v10,
                                                    0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(max_length) = targetIndividuality->max_length;
        v7 = (__int64)++v8 < (int)max_length;
        if ( (__int64)v8 < (int)max_length )
          continue;
      }
      return v7;
    }
LABEL_17:
    sub_1C7BD40(this, method);
  }
  return v7;
}


bool EventServantFatigueListViewItem__IsMatchIndividuality_32883148(
        EventServantFatigueListViewItem_o *this,
        EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *v4; // x19
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  il2cpp_array_size_t max_length; // x8
  bool v8; // w25
  unsigned __int64 v9; // x26
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v11; // w20
  ServantEntity_o *servantEntity; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  int32_t v16; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_4CE8EC8 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CE8EC8 = 1;
  }
  if ( !targetRecoveryFatigueItem )
    goto LABEL_17;
  eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt;
  if ( !eventFatigueRecoveryEnt )
    goto LABEL_17;
  targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality;
  if ( !targetIndividuality )
    goto LABEL_17;
  max_length = targetIndividuality->max_length;
  v8 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C7BD48(this);
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        break;
      v11 = targetIndividuality->m_Items[v9];
      servantEntity = v4->fields.servantEntity;
      v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
      v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = v14;
      *(_QWORD *)&v18.fields.fakeValue = v13;
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                    v18,
                                                    0);
      v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
      if ( !v15 )
        break;
      v16 = (int)this;
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                    v15[8],
                                                    0);
      if ( !servantEntity )
        break;
      this = (EventServantFatigueListViewItem_o *)ServantEntity__IsIndividuality(
                                                    servantEntity,
                                                    v16,
                                                    (int32_t)this,
                                                    v11,
                                                    0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(max_length) = targetIndividuality->max_length;
        v8 = (__int64)++v9 < (int)max_length;
        if ( (__int64)v9 < (int)max_length )
          continue;
      }
      return v8;
    }
LABEL_17:
    sub_1C7BD40(this, targetRecoveryFatigueItem);
  }
  return v8;
}


bool EventServantFatigueListViewItem__IsMatchServantFilter(
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
  _BOOL4 isChoice; // w8
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x21
  UserServantEntity_o *v18; // x0
  int32_t dispLimitCount; // w22
  UserServantEntity_o *v20; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v24; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v26; // w0

  if ( (byte_4CE8EC4 & 1) == 0 )
  {
    sub_1C7BAE8(&FilterKindList_TypeInfo);
    sub_1C7BAE8(&ListViewSort_FilterKind___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C7BAE8(&ServantEventBonusFilterController_TypeInfo);
    byte_4CE8EC4 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_64;
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
      goto LABEL_64;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_64;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0) )
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
    goto LABEL_64;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_64:
    sub_1C7BD40(ClassGroupFilterKindList, sort);
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_65;
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
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
    goto LABEL_39;
  v18 = this->fields.userServantEntity;
  if ( v18 )
  {
    dispLimitCount = this->fields.dispLimitCount;
    if ( dispLimitCount != UserServantEntity__getDispLimitCount(v18, 0, 0) )
    {
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_64;
      ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                   (UserServantEntity_o *)ClassGroupFilterKindList,
                                   0,
                                   0);
      v20 = this->fields.userServantEntity;
      this->fields.dispLimitCount = ClassGroupFilterKindList;
      if ( !v20 )
        goto LABEL_64;
      SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v20, -1, -1, 0);
      this->fields.skillCategoryIdList = SkillCategoryIdList;
      sub_1C7BA8C(&this->fields.skillCategoryIdList, SkillCategoryIdList);
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_64;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)ClassGroupFilterKindList,
                                       0,
                                       -1,
                                       0);
      this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_1C7BA8C(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
    }
  }
  ClassGroupFilterKindList = sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_65;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = sub_1C7BB90(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_65:
    sub_1C7BD48(ClassGroupFilterKindList);
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
  v24 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0);
  v26 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
  if ( ((IsUnSelectedAllTargetFilters ^ v24) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v26 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v26 )
  {
    return 0;
  }
LABEL_39:
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38260BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v16, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void EventServantFatigueListViewItem__ModifyChoiceItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C7BD40(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  this->fields.isSwapChoice = 0;
}


void EventServantFatigueListViewItem__ModifyItem(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1C7BA8C(&this->fields.userServantEntity, userServantEntity);
  EventServantFatigueListViewItem__ModifyLockItem(this, v4);
  EventServantFatigueListViewItem__ModifyChoiceItem(this, v5);
  EventServantFatigueListViewItem__ModifyPushItem(this, v6);
}


void EventServantFatigueListViewItem__ModifyLockItem(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C7BD40(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
}


void EventServantFatigueListViewItem__ModifyPushItem(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4CE8EC2 & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE8EC2 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0 )
    sub_1C7BD40(SelfUserGame, v4);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v8, 0);
}


bool EventServantFatigueListViewItem__SetSortValue(
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
  __int64 naturalAligment; // x11
  int64_t fatigueTime; // x22
  bool IsMatchIndividuality_32883148; // w0
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
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v32; // w1
  int64_t v33; // x20
  IconLabelInfo_o *v34; // x21
  int32_t v35; // w3
  int32_t v36; // w1
  struct ServantEntity_o *v37; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *v40; // x8
  __int64 v41; // x11
  struct ListViewManager_o *v42; // x20
  int32_t lv; // w20
  int64_t priority; // x9
  struct ServantEntity_o *v45; // x8
  struct UserServantEntity_o *v46; // x8
  __int64 v47; // x21
  __int64 v48; // x22
  const MethodInfo *v49; // x2
  struct ServantEntity_o *v50; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v52; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4CE8EC3 & 1) == 0 )
  {
    sub_1C7BAE8(&EventServantFatigueListViewManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE8EC3 = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0;
  this->fields.sortValue1 = -1;
  this->fields.sortValue0 = 0;
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
      goto LABEL_98;
    if ( sort->fields.isChoiceSort )
      *p_sortValue0 = 10;
  }
  IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v9);
  if ( (IsBaseSvt & 1) != 0 )
  {
    v13 = 30;
  }
  else
  {
    if ( !sort )
      goto LABEL_98;
    if ( !sort->fields.isSmartSort )
      goto LABEL_33;
    manager = (EventServantRecoveryFatigueItem_o **)sort->fields.manager;
    if ( !manager )
      goto LABEL_98;
    naturalAligment = EventServantFatigueListViewManager_TypeInfo->_2.naturalAligment;
    if ( LOBYTE((*manager)[2].klass) < (unsigned int)naturalAligment
      || *((EventServantFatigueListViewManager_c **)(*manager)[1].fields.emptySprite + naturalAligment - 1) != EventServantFatigueListViewManager_TypeInfo )
    {
      goto LABEL_98;
    }
    fatigueTime = this->fields.fatigueTime;
    IsMatchIndividuality_32883148 = EventServantFatigueListViewItem__IsMatchIndividuality_32883148(
                                      this,
                                      manager[67],
                                      v12);
    v18 = 10;
    if ( IsMatchIndividuality_32883148 )
    {
      v18 = 20;
      v19 = -10;
    }
    else
    {
      v19 = -20;
    }
    if ( fatigueTime < 1 )
      v18 = v19;
    this->fields.sortValue0 = v18;
    if ( sort->fields.isChoiceSort && this->fields.isChoice )
      this->fields.sortValue0B = 10;
    if ( !this->fields.isCanNotSelect )
      goto LABEL_33;
    v13 = -30;
  }
  *p_sortValue0 = v13;
LABEL_33:
  IsBaseSvt = (int64_t)this->fields.iconLabelInfo2;
  if ( !IsBaseSvt )
    goto LABEL_98;
  IconLabelInfo__Clear((IconLabelInfo_o *)IsBaseSvt, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.sortValue1B = this->fields.priority;
  if ( !servantEntity )
    goto LABEL_98;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_98;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | userServantEntity->fields.lv;
  v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v23;
  *(_QWORD *)&v57.fields.fakeValue = v22;
  IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v57, 0);
  this->fields.sortValue2B = (int)IsBaseSvt;
  if ( !sort )
LABEL_98:
    sub_1C7BD40(IsBaseSvt, v9);
  IsBaseSvt = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v24 = this->fields.userServantEntity;
      if ( !v24 )
        goto LABEL_98;
      v25 = *(_OWORD *)&v24->fields.id.fields.fakeValue;
      *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v24->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v55.fields.fakeValue = v25;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v54 = v55;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v54, 0);
      v26 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v26 )
        goto LABEL_98;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_98;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v26->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_76;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_63;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_98;
      v28 = *(int *)(IsBaseSvt + 256);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v28;
      goto LABEL_85;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_98;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_43714172((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0);
      LODWORD(friendship) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_98;
      friendshipMax = tdMaxLv[0];
      v32 = 33;
      goto LABEL_75;
    case 5:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_98;
      v33 = *(int *)(IsBaseSvt + 268);
      v34 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v33;
      IsBaseSvt = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v34 )
        goto LABEL_98;
      v35 = IsBaseSvt;
      v36 = 3;
      goto LABEL_58;
    case 6:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_98;
      v33 = *(int *)(IsBaseSvt + 264);
      v34 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v33;
      IsBaseSvt = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v34 )
        goto LABEL_98;
      v35 = IsBaseSvt;
      v36 = 5;
LABEL_58:
      IconLabelInfo__Set_41483756(v34, v36, v33, v35, 0, 0, 0, 0, 0, 0);
      goto LABEL_76;
    case 7:
      v37 = this->fields.servantEntity;
      if ( !v37 )
        goto LABEL_98;
      cost = v37->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_98;
      IconLabelInfo__Set_41483756((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0, 0);
      goto LABEL_76;
    case 8:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      rarity = -this->fields.priority;
LABEL_63:
      this->fields.sortValue1 = rarity;
      if ( !IsBaseSvt )
        goto LABEL_98;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      goto LABEL_78;
    case 0xA:
      friendship = this->fields.friendship;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_98;
      friendshipMax = this->fields.friendshipMax;
      v32 = 32;
      goto LABEL_75;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_95;
      v40 = sort->fields.manager;
      if ( v40
        && (v41 = EventServantFatigueListViewManager_TypeInfo->_2.naturalAligment,
            v40->klass->_2.naturalAligment >= (unsigned int)v41) )
      {
        if ( (EventServantFatigueListViewManager_c *)v40->klass->_2.typeHierarchy[v41 - 1] == EventServantFatigueListViewManager_TypeInfo )
          v42 = sort->fields.manager;
        else
          v42 = 0;
      }
      else
      {
        v42 = 0;
      }
      v46 = this->fields.userServantEntity;
      if ( !v46 )
        goto LABEL_98;
      v48 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v58.fields.currentCryptoKey = v48;
      *(_QWORD *)&v58.fields.fakeValue = v47;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v58, 0);
      if ( !v42 )
        goto LABEL_98;
      IsBaseSvt = EventServantFatigueListViewManager__GetAmountSortValue(
                    (EventServantFatigueListViewManager_o *)v42,
                    IsBaseSvt,
                    v49);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_95:
      v50 = this->fields.servantEntity;
      if ( !v50 )
        goto LABEL_98;
      collectionNo = v50->fields.collectionNo;
      v52 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48))
                              | collectionNo;
      if ( !v52 )
        goto LABEL_98;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      lv = v52->fields.lv;
      IsBaseSvt = (int64_t)v52;
      goto LABEL_79;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_98;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v32 = 44;
      goto LABEL_75;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_98;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v32 = 45;
LABEL_75:
      IconLabelInfo__Set_41483756((IconLabelInfo_o *)IsBaseSvt, v32, friendship, friendshipMax, 0, 0, 0, 0, 0, 0);
LABEL_76:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_98;
      iconLabelInfo2 = this->fields.iconLabelInfo2;
LABEL_78:
      lv = *(_DWORD *)(IsBaseSvt + 256);
LABEL_79:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_98;
      IconLabelInfo__Set_41483756(iconLabelInfo2, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0, 0);
LABEL_81:
      LOBYTE(IsBaseSvt) = 1;
      break;
    case 0x19:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      this->fields.sortValue1 = this->fields.fatigueTime;
      if ( !IsBaseSvt )
        goto LABEL_98;
      v28 = *(int *)(IsBaseSvt + 256);
      priority = this->fields.priority;
      v45 = this->fields.servantEntity;
      this->fields.sortValue1B = v28;
      this->fields.sortValue2 = priority;
      if ( !v45 )
        goto LABEL_98;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue2B = v28
                               | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                               | ((__int64)v45->fields.collectionNo << 16);
LABEL_85:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_98;
      IconLabelInfo__Set_41483756(iconLabelInfo1, 2, v28, IsBaseSvt, 0, 0, 0, 0, 0, 0);
      goto LABEL_81;
    default:
      return IsBaseSvt;
  }
  return IsBaseSvt;
}


void EventServantFatigueListViewItem__SetUserServantEntity(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  this->fields.userServantEntity = userServantEntity;
  sub_1C7BA8C(&this->fields.userServantEntity, userServantEntity);
}


bool EventServantFatigueListViewItem__SwapChoice(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool EventServantFatigueListViewItem__SwapLock(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool EventServantFatigueListViewItem___GetIsEventUpValShow_b__43_0(
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

  if ( (byte_4CE8EC9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CE8EC9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v13, 0);
  if ( !entity || !v8 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v11 = this->fields.userServantEntity;
  if ( !v11 || !Master_object )
    goto LABEL_19;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Master_object,
         v11->fields.svtId,
         entity->fields.eventId,
         0) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_19:
    sub_1C7BD40(Master_object, v6);
  return UserServantEntity__getEventUpVal(
           (UserServantEntity_o *)Master_object,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0);
}


int64_t EventServantFatigueListViewItem__get_FatigueTime(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fatigueTime;
}


IconLabelInfo_o *EventServantFatigueListViewItem__get_IconInfo1(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *EventServantFatigueListViewItem__get_IconInfo2(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool EventServantFatigueListViewItem__get_IsBaseSvt(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4CE8EC6 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE8EC6 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C7BD40(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v7, 0);
}


bool EventServantFatigueListViewItem__get_IsCanNotLock(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool EventServantFatigueListViewItem__get_IsCanNotSelect(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotSelect;
}


bool EventServantFatigueListViewItem__get_IsCanNotSelectPush(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v5; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_11;
  if ( UserServantEntity__IsEventJoin(userServantEntity, 0) )
    return 1;
  if ( this->fields.isCanNotLock )
    return 1;
  v5 = this->fields.userServantEntity;
  if ( !v5 || UserServantEntity__IsLeave(v5, 0) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_11;
  if ( UserServantEntity__IsCombineMaterial(userServantEntity, 0) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_11:
    sub_1C7BD40(userServantEntity, method);
  return UserServantEntity__IsStatusUp(userServantEntity, 0);
}


bool EventServantFatigueListViewItem__get_IsChoice(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool EventServantFatigueListViewItem__get_IsDispChoice(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool EventServantFatigueListViewItem__get_IsDispLock(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool EventServantFatigueListViewItem__get_IsFatigueRecover(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFatigueRecover;
}


bool EventServantFatigueListViewItem__get_IsHeroineSvt(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHeroineSvt;
}


bool EventServantFatigueListViewItem__get_IsLock(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool EventServantFatigueListViewItem__get_IsParty(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isParty;
}


bool EventServantFatigueListViewItem__get_IsPush(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool EventServantFatigueListViewItem__get_IsSwapChoice(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool EventServantFatigueListViewItem__get_IsSwapLock(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


int32_t EventServantFatigueListViewItem__get_Rarity(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}


ServantEntity_o *EventServantFatigueListViewItem__get_ServantEntity(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


UserServantEntity_o *EventServantFatigueListViewItem__get_UserServantEntity(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


void EventServantFatigueListViewItem__set_IsCanNotLock(
        EventServantFatigueListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}