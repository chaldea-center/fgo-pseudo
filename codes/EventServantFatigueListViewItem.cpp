void __fastcall EventServantFatigueListViewItem___ctor(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem,
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  IconLabelInfo_o *v26; // x20
  IconLabelInfo_o *v27; // x21
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  struct UserServantEntity_o **p_userServantEntity; // x21
  __int64 Instance; // x0
  __int64 v31; // x1
  struct UserServantEntity_o *v32; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x26
  __int64 v34; // x27
  __int64 v35; // x28
  struct UserServantEntity_o *v36; // x8
  ServantEntity_o *servantEntity; // x26
  UserServantEntity_o *v38; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v40; // x8
  struct UserServantEntity_o *v41; // x8
  __int128 v42; // q1
  __int64 v43; // x26
  bool v44; // w8
  struct UserServantEntity_o *v45; // x8
  UserEventServantFatigueMaster_o *v46; // x24
  __int64 v47; // x25
  __int64 v48; // x26
  int64_t v49; // x25
  struct UserServantEntity_o *v50; // x8
  __int128 v51; // q0
  int64_t v52; // x0
  struct UserServantEntity_o *v53; // x8
  __int128 v54; // q0
  UserServantCollectionMaster_o *v55; // x22
  struct UserServantEntity_o *v56; // x8
  int64_t v57; // x23
  __int64 v58; // x24
  __int64 v59; // x25
  Il2CppObject *MasterData_object; // x22
  __int64 v61; // x23
  __int64 v62; // x22
  unsigned int v63; // w24
  __int64 v64; // x25
  __int64 v65; // x8
  unsigned int v66; // w26
  __int64 v67; // x8
  unsigned int v68; // w9
  __int64 v69; // x8
  struct UserServantEntity_o *v70; // x9
  __int128 v71; // q0
  __int64 v72; // x28
  UserServantEntity_o *v73; // x8
  int v74; // w22
  BalanceConfig_c *v75; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v77; // x23
  int64_t v78; // x8
  struct ServantEntity_o *v79; // x9
  struct UserServantEntity_o *v80; // x8
  __int64 v81; // x21
  __int64 v82; // x22
  int32_t v83; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+90h] [xbp-90h]
  int64_t recoverAt; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_49B5BD2 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, userServantEntity);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantClassMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserDeckMaster___, v15);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_1B4CF90(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v19);
    sub_1B4CF90(&IconLabelInfo_TypeInfo, v20);
    sub_1B4CF90(&NetworkManager_TypeInfo, v21);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v25);
    byte_49B5BD2 = 1;
  }
  recoverAt = 0LL;
  v26 = (IconLabelInfo_o *)sub_1B4D1DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_1B4CF34(&this->fields.iconLabelInfo1);
  v27 = (IconLabelInfo_o *)sub_1B4D1DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v27, 0LL);
  this->fields.iconLabelInfo2 = v27;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B4CF34(&this->fields.iconLabelInfo2);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B4CF34(&this->fields.userServantEntity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  v32 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v35 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v90.fields.currentCryptoKey = v35;
  *(_QWORD *)&v90.fields.fakeValue = v34;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v90, 0LL);
  if ( !v33 )
    goto LABEL_96;
  this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                           v33,
                                                           Instance,
                                                           (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = sub_1B4CF34(&this->fields.servantEntity);
  v36 = this->fields.userServantEntity;
  if ( !v36 )
    goto LABEL_96;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v36->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_96;
  this->fields.servantName = ServantEntity__getName(servantEntity, Instance, -1, 0, 0LL);
  sub_1B4CF34(&this->fields.servantName);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_96;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
  v38 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v38 )
    goto LABEL_96;
  Rarity = UserServantEntity__getRarity(v38, 0LL);
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_96;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v40 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v40 )
    goto LABEL_96;
  this->fields.isChoice = UserServantEntity__IsChoice(v40, 0LL);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_96;
  v41 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  v42 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
  v43 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v88.fields.fakeValue = v42;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v87 = v88;
  v44 = v43 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v87, 0LL);
  this->fields.baseUserSvtId = baseUserSvtId;
  this->fields.isPush = v44;
  this->fields.targetRecoveryFatigueItem = targetRecoveryFatigueItem;
  sub_1B4CF34(&this->fields.targetRecoveryFatigueItem);
  this->fields.setupInfo = setupInfo;
  sub_1B4CF34(&this->fields.setupInfo);
  this->fields.isFatigueRecover = 0;
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.fatigueTime = -1LL;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_96;
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    this->fields.isHeroineSvt = 1;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  v45 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  v46 = (UserEventServantFatigueMaster_o *)Instance;
  v48 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v91.fields.currentCryptoKey = v48;
  *(_QWORD *)&v91.fields.fakeValue = v47;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v91, 0LL);
  if ( !v46 )
    goto LABEL_96;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v46,
         &recoverAt,
         &this->fields.isFatigueRecover,
         eventId,
         Instance,
         0LL) )
  {
    v49 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getTime(0LL);
    if ( v49 > Instance )
      this->fields.fatigueTime = recoverAt;
    if ( this->fields.isFatigueRecover )
    {
      v50 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_96;
      v51 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
      *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v88.fields.fakeValue = v51;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v86 = v88;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v86, 0LL);
      this->fields.isCanNotSelect = !UserEventServantFatigueMaster__IsRecoverUserServant(v46, eventId, v52, 0LL);
    }
  }
  if ( this->fields.isHeroineSvt )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38224448(126, 0LL) )
      this->fields.isCanNotSelect = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v53 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  v54 = *(_OWORD *)&v53->fields.userId.fields.fakeValue;
  v55 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v53->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v88.fields.fakeValue = v54;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v85 = v88;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v85, 0LL);
  v56 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  v57 = Instance;
  v59 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
  v58 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v92.fields.currentCryptoKey = v59;
  *(_QWORD *)&v92.fields.fakeValue = v58;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v92, 0LL);
  if ( !v55 )
    goto LABEL_96;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v55, v57, Instance, 0LL);
  if ( !Instance )
    goto LABEL_96;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v31);
    byte_49B57A5 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_96;
  Instance = (__int64)UserDeckMaster__getDeckList(
                        (UserDeckMaster_o *)MasterData_object,
                        *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                        0LL);
  if ( !Instance )
    goto LABEL_96;
  v61 = *(_QWORD *)(Instance + 24);
  v62 = Instance;
  if ( (int)v61 < 1 )
    goto LABEL_79;
  v63 = 0;
LABEL_61:
  v64 = *(_QWORD *)(v62 + 8LL * (int)v63 + 32);
  if ( !v64 )
    goto LABEL_96;
  v65 = *(_QWORD *)(v64 + 48);
  if ( !v65 )
    goto LABEL_96;
  v66 = 0;
  while ( 1 )
  {
    v67 = *(_QWORD *)(v65 + 16);
    if ( !v67 )
      goto LABEL_96;
    v68 = *(_DWORD *)(v67 + 24);
    if ( (int)v66 >= (int)v68 )
    {
      if ( this->fields.isParty )
        goto LABEL_79;
      if ( ++v63 == (_DWORD)v61 )
        goto LABEL_79;
      if ( v63 >= *(_DWORD *)(v62 + 24) )
LABEL_77:
        sub_1B4D1F4(Instance, v31);
      goto LABEL_61;
    }
    if ( v66 >= v68 )
      goto LABEL_77;
    v69 = *(_QWORD *)(v67 + 8LL * (int)v66 + 32);
    if ( !v69 )
      goto LABEL_96;
    v70 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_96;
    v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
    v72 = *(_QWORD *)(v69 + 24);
    *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v88.fields.fakeValue = v71;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v84 = v88;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v84, 0LL);
    if ( v72 == Instance )
      break;
    v65 = *(_QWORD *)(v64 + 48);
    ++v66;
    if ( !v65 )
      goto LABEL_96;
  }
  this->fields.isParty = 1;
LABEL_79:
  Instance = (__int64)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v73 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v73 )
    goto LABEL_96;
  this->fields.skillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v73, -1, 0LL);
  sub_1B4CF34(&this->fields.skillCategoryIdList);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_96;
  this->fields.tdCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                    (UserServantEntity_o *)Instance,
                                    0,
                                    0LL);
  sub_1B4CF34(&this->fields.tdCategoryIdList);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_96;
  v74 = *(_DWORD *)(Instance + 276);
  v75 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v75 = BalanceConfig_TypeInfo;
    Instance = (__int64)*p_userServantEntity;
  }
  static_fields = v75->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v74;
  if ( !Instance )
    goto LABEL_96;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_96;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_319D99C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_96;
  v77 = Instance;
  this->fields.className = *(struct System_String_o **)(Instance + 24);
  Instance = sub_1B4CF34(&this->fields.className);
  v78 = *(int *)(v77 + 52);
  v79 = this->fields.servantEntity;
  this->fields.priority = v78;
  this->fields.sortValue1B = v78;
  if ( !v79 )
    goto LABEL_96;
  v80 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  this->fields.sortValue2 = ((__int64)v79->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v80->fields.lv;
  v82 = *(_QWORD *)&v80->fields.svtId.fields.currentCryptoKey;
  v81 = *(_QWORD *)&v80->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v93.fields.currentCryptoKey = v82;
  *(_QWORD *)&v93.fields.fakeValue = v81;
  v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v93, 0LL);
  Instance = (__int64)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v83;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (__int64)*p_iconLabelInfo2) == 0) )
  {
LABEL_96:
    sub_1B4D1EC(Instance, v31);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  unsigned int bonusKind2; // w8
  int32_t bonusKindId; // w2
  int32_t bonusKind2Id; // w9
  struct ServantEntity_o *servantEntity; // x8
  __int64 v19; // x20
  __int64 v20; // x21
  struct ServantEntity_o *v21; // x8
  EventServantFatigueMaster_o *v22; // x20
  int32_t v23; // w19
  __int64 v24; // x21
  __int64 v25; // x22
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  System_Func_object__bool__o *v27; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v29; // x20
  __int64 v30; // x21
  __int64 v31; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v32; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v4 = this;
  if ( (byte_49B5BD6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventGroupMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventServantFatigueMaster___, v8);
    sub_1B4CF90(&DataManager_TypeInfo, v9);
    sub_1B4CF90(&Method_EventServantFatigueListViewItem__GetIsEventUpValShow_b__44_0__, v10);
    sub_1B4CF90(&System_Func_EventGroupEntity__bool__TypeInfo, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v12);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    this = (EventServantFatigueListViewItem_o *)sub_1B4CF90(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v14);
    byte_49B5BD6 = 1;
  }
  if ( !sort )
LABEL_47:
    sub_1B4D1EC(this, sort);
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
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
            v27 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v27,
              (Il2CppObject *)v4,
              Method_EventServantFatigueListViewItem__GetIsEventUpValShow_b__44_0__,
              0LL);
            LOBYTE(this) = BasicHelper__Any_object_(
                             (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                             (System_Func_T__bool__o *)v27,
                             (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_EventGroupEntity___);
            return (char)this;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
            userServantEntity = v4->fields.userServantEntity;
            if ( !userServantEntity )
              goto LABEL_47;
            v29 = (EventCampaignMaster_o *)this;
            v31 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
            v30 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v36.fields.currentCryptoKey = v31;
            *(_QWORD *)&v36.fields.fakeValue = v30;
            this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                          v36,
                                                          0LL);
            if ( !v29 )
              goto LABEL_47;
            LOBYTE(this) = EventCampaignMaster__IsEnableServant(v29, (int32_t)this, v4->fields.bonusKindId, 0LL);
            return (char)this;
          case 4u:
          case 5u:
            this = (EventServantFatigueListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_47;
            this = (EventServantFatigueListViewItem_o *)UserServantEntity__getEventUpVal_40806396(
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
            v20 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v19 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v34.fields.currentCryptoKey = v20;
            *(_QWORD *)&v34.fields.fakeValue = v19;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v34, 0LL) < 1 )
              goto LABEL_34;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventServantFatigueMaster___);
            v21 = v4->fields.servantEntity;
            if ( !v21 )
              goto LABEL_47;
            v22 = (EventServantFatigueMaster_o *)this;
            v23 = v4->fields.bonusKindId;
            v25 = *(_QWORD *)&v21->fields.id.fields.currentCryptoKey;
            v24 = *(_QWORD *)&v21->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v35.fields.currentCryptoKey = v25;
            *(_QWORD *)&v35.fields.fakeValue = v24;
            this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                          v35,
                                                          0LL);
            if ( !v22 )
              goto LABEL_47;
            if ( EventServantFatigueMaster__IsBonusFilterTarget(v22, v23, (int32_t)this, 0LL) )
              goto LABEL_26;
LABEL_34:
            LOBYTE(this) = 0;
            break;
          case 7u:
            this = (EventServantFatigueListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_47;
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
            if ( !v32 || !this )
              goto LABEL_47;
            LOBYTE(this) = ServantFilterMaster__IsEnableServant(
                             (ServantFilterMaster_o *)this,
                             v32[5],
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

  if ( (byte_49B5BD9 & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49B5BD9 = 1;
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
        sub_1B4D1F4(targetRecoveryFatigueItem, method);
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
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                                         v16,
                                                                         0LL);
      v13 = this->fields.userServantEntity;
      if ( !v13 )
        break;
      v14 = (int)targetRecoveryFatigueItem;
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
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
    sub_1B4D1EC(targetRecoveryFatigueItem, method);
  }
  return v6;
}


bool __fastcall EventServantFatigueListViewItem__IsMatchIndividuality_30682996(
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
  if ( (byte_49B5BDA & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1B4CF90(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                  targetRecoveryFatigueItem);
    byte_49B5BDA = 1;
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
        sub_1B4D1F4(this, targetRecoveryFatigueItem);
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
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                    v17,
                                                    0LL);
      v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
      if ( !v14 )
        break;
      v15 = (int)this;
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
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
    sub_1B4D1EC(this, targetRecoveryFatigueItem);
  }
  return v7;
}


bool __fastcall EventServantFatigueListViewItem__IsMatchServantFilter(
        EventServantFatigueListViewItem_o *this,
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
  UserServantEntity_o *userServantEntity; // x21
  __int64 v17; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  UserServantEntity_o *v22; // x0
  int32_t dispLimitCount; // w22
  UserServantEntity_o *v24; // x8
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v26; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v28; // w0

  if ( (byte_49B5BD5 & 1) == 0 )
  {
    sub_1B4CF90(&FilterKindList_TypeInfo, sort);
    sub_1B4CF90(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1B4CF90(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_49B5BD5 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_64;
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
      goto LABEL_64;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_64;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
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
    goto LABEL_64;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
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
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          0LL) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_64:
    sub_1B4D1EC(ClassGroupFilterKindList, sort);
  v17 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_65;
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
    goto LABEL_39;
  v22 = this->fields.userServantEntity;
  if ( v22 )
  {
    dispLimitCount = this->fields.dispLimitCount;
    if ( dispLimitCount != UserServantEntity__getDispLimitCount(v22, 0, 0LL) )
    {
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_64;
      ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                   (UserServantEntity_o *)ClassGroupFilterKindList,
                                   0,
                                   0LL);
      v24 = this->fields.userServantEntity;
      this->fields.dispLimitCount = ClassGroupFilterKindList;
      if ( !v24 )
        goto LABEL_64;
      this->fields.skillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v24, -1, 0LL);
      sub_1B4CF34(&this->fields.skillCategoryIdList);
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_64;
      this->fields.tdCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                        (UserServantEntity_o *)ClassGroupFilterKindList,
                                        0,
                                        0LL);
      sub_1B4CF34(&this->fields.tdCategoryIdList);
    }
  }
  ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v17 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_65;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0LL);
  ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v17 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_65:
    sub_1B4D1F4(ClassGroupFilterKindList, v17);
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
  v26 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0LL);
  v28 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
  if ( ((IsUnSelectedAllTargetFilters ^ v26) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v28 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v28 )
  {
    return 0;
  }
LABEL_39:
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_64;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall EventServantFatigueListViewItem__ModifyChoiceItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B4D1EC(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EventServantFatigueListViewItem__ModifyItem(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1B4CF34(&this->fields.userServantEntity);
  EventServantFatigueListViewItem__ModifyLockItem(this, v4);
  EventServantFatigueListViewItem__ModifyChoiceItem(this, v5);
  EventServantFatigueListViewItem__ModifyPushItem(this, v6);
}


void __fastcall EventServantFatigueListViewItem__ModifyLockItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B4D1EC(0LL, method);
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

  if ( (byte_49B5BD3 & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49B5BD3 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_1B4D1EC(SelfUserGame, v4);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v8, 0LL);
}


bool __fastcall EventServantFatigueListViewItem__SetSortValue(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t *p_sortValue0; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  int64_t IsBaseSvt; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  _BOOL4 isChoice; // w8
  const MethodInfo *v14; // x2
  __int64 v15; // x8
  EventServantRecoveryFatigueItem_o **manager; // x8
  __int64 methodPtr_low; // x11
  int64_t fatigueTime; // x22
  bool IsMatchIndividuality_30682996; // w0
  int64_t v20; // x8
  __int64 v21; // x9
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v24; // x21
  __int64 v25; // x22
  struct UserServantEntity_o *v26; // x8
  __int128 v27; // q1
  struct UserServantEntity_o *v28; // x8
  int64_t rarity; // x8
  int64_t v30; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v34; // w1
  struct UserServantEntity_o *v35; // x8
  struct UserServantEntity_o *v36; // x8
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
  struct ServantEntity_o *v49; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v51; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_49B5BD4 & 1) == 0 )
  {
    sub_1B4CF90(&EventServantFatigueListViewManager_TypeInfo, sort);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_49B5BD4 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventServantFatigueListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventServantFatigueListViewItem__IsMatchServantFilter(this, sort, v9)
    || (IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v8), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventServantFatigueListViewItem__GetIsEventUpValShow(this, sort, v12), (IsBaseSvt & 1) == 0) )
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
  IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v11);
  if ( (IsBaseSvt & 1) != 0 )
  {
    v15 = 30LL;
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
    IsMatchIndividuality_30682996 = EventServantFatigueListViewItem__IsMatchIndividuality_30682996(
                                      this,
                                      manager[67],
                                      v14);
    v20 = 10LL;
    if ( IsMatchIndividuality_30682996 )
      v20 = 20LL;
    if ( IsMatchIndividuality_30682996 )
      v21 = -10LL;
    else
      v21 = -20LL;
    if ( fatigueTime < 1 )
      v20 = v21;
    this->fields.sortValue0 = v20;
    if ( sort->fields.isChoiceSort && this->fields.isChoice )
      this->fields.sortValue0B = 10LL;
    if ( !this->fields.isCanNotSelect )
      goto LABEL_35;
    v15 = -30LL;
  }
  *p_sortValue0 = v15;
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
  v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v56.fields.currentCryptoKey = v25;
  *(_QWORD *)&v56.fields.fakeValue = v24;
  IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v56, 0LL);
  this->fields.sortValue2B = (int)IsBaseSvt;
  if ( !sort )
LABEL_99:
    sub_1B4D1EC(IsBaseSvt, v11);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v26 = this->fields.userServantEntity;
      if ( !v26 )
        goto LABEL_99;
      v27 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
      *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v54.fields.fakeValue = v27;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v53 = v54;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v53, 0LL);
      v28 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v28 )
        goto LABEL_99;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_99;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v28->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_77;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_64;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      v30 = *(int *)(IsBaseSvt + 256);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v30;
      goto LABEL_86;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_40813636((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = tdMaxLv[0];
      v34 = 33;
      goto LABEL_76;
    case 5:
      v35 = this->fields.userServantEntity;
      if ( !v35 )
        goto LABEL_99;
      hp = v35->fields.hp;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = v35->fields.adjustHp;
      v34 = 3;
      goto LABEL_76;
    case 6:
      v36 = this->fields.userServantEntity;
      if ( !v36 )
        goto LABEL_99;
      hp = v36->fields.atk;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = v36->fields.adjustAtk;
      v34 = 5;
      goto LABEL_76;
    case 7:
      v37 = this->fields.servantEntity;
      if ( !v37 )
        goto LABEL_99;
      cost = v37->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_99;
      IconLabelInfo__Set_38677548((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0LL);
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
      v34 = 32;
      goto LABEL_76;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_96;
      v40 = sort->fields.manager;
      if ( v40
        && (v41 = LOBYTE(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v40->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v41) )
      {
        if ( (EventServantFatigueListViewManager_c *)v40->klass->_2.typeHierarchy[v41 - 1] == EventServantFatigueListViewManager_TypeInfo )
          v42 = sort->fields.manager;
        else
          v42 = 0LL;
      }
      else
      {
        v42 = 0LL;
      }
      v46 = this->fields.userServantEntity;
      if ( !v46 )
        goto LABEL_99;
      v48 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v57.fields.currentCryptoKey = v48;
      *(_QWORD *)&v57.fields.fakeValue = v47;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v57, 0LL);
      if ( !v42 )
        goto LABEL_99;
      IsBaseSvt = EventServantFatigueListViewManager__GetAmountSortValue(
                    (EventServantFatigueListViewManager_o *)v42,
                    IsBaseSvt,
                    0LL);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_96:
      v49 = this->fields.servantEntity;
      if ( !v49 )
        goto LABEL_99;
      collectionNo = v49->fields.collectionNo;
      v51 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48)) | collectionNo;
      if ( !v51 )
        goto LABEL_99;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      lv = v51->fields.lv;
      IsBaseSvt = (int64_t)v51;
      goto LABEL_80;
    case 0xF:
      hp = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = this->fields.nowMaxHpReinforceValue;
      v34 = 44;
      goto LABEL_76;
    case 0x10:
      hp = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = this->fields.nowMaxAtkReinforceValue;
      v34 = 45;
LABEL_76:
      IconLabelInfo__Set_38677548((IconLabelInfo_o *)IsBaseSvt, v34, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_38677548(iconLabelInfo2, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0LL);
LABEL_82:
      LOBYTE(IsBaseSvt) = 1;
      break;
    case 0x19:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      this->fields.sortValue1 = this->fields.fatigueTime;
      if ( !IsBaseSvt )
        goto LABEL_99;
      v30 = *(int *)(IsBaseSvt + 256);
      priority = this->fields.priority;
      v45 = this->fields.servantEntity;
      this->fields.sortValue1B = v30;
      this->fields.sortValue2 = priority;
      if ( !v45 )
        goto LABEL_99;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue2B = v30 | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | ((__int64)v45->fields.collectionNo << 16);
LABEL_86:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_99;
      IconLabelInfo__Set_38677548(iconLabelInfo1, 2, v30, IsBaseSvt, 0, 0, 0, 0, 0LL);
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
  this->fields.userServantEntity = userServantEntity;
  sub_1B4CF34(&this->fields.userServantEntity);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventCampaignMaster_o *Master_object; // x0
  __int64 v9; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  struct UserServantEntity_o *v14; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49B5BDB & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49B5BDB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_19;
  v11 = Master_object;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v13;
  *(_QWORD *)&v16.fields.fakeValue = v12;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v16, 0LL);
  if ( !entity || !v11 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v11, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v14 = this->fields.userServantEntity;
  if ( !v14 || !Master_object )
    goto LABEL_19;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Master_object,
         v14->fields.svtId,
         entity->fields.eventId,
         0LL) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_19:
    sub_1B4D1EC(Master_object, v9);
  return UserServantEntity__getEventUpVal_40806396(
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
  if ( (byte_49B5BD8 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1B4CF90(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  method);
    byte_49B5BD8 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B4D1EC(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v7, 0LL);
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
    sub_1B4D1EC(userServantEntity, method);
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
  if ( (byte_49B5BD7 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1B4CF90(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  method);
    byte_49B5BD7 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B4D1EC(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v6, 0LL);
}


void __fastcall EventServantFatigueListViewItem__set_IsCanNotLock(
        EventServantFatigueListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}