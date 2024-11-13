// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  IconLabelInfo_o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  IconLabelInfo_o *v43; // x21
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  struct UserServantEntity_o **p_userServantEntity; // x21
  __int64 Instance; // x0
  __int64 v47; // x1
  struct UserServantEntity_o *v48; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x26
  __int64 v50; // x27
  __int64 v51; // x28
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o *v53; // x8
  ServantEntity_o *servantEntity; // x26
  struct System_String_o *Name; // x0
  UserServantEntity_o *v56; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v58; // x8
  struct UserServantEntity_o *v59; // x8
  __int128 v60; // q1
  __int64 v61; // x26
  bool v62; // w8
  struct UserServantEntity_o *v63; // x8
  UserEventServantFatigueMaster_o *v64; // x24
  __int64 v65; // x25
  __int64 v66; // x26
  int64_t v67; // x25
  struct UserServantEntity_o *v68; // x8
  __int128 v69; // q0
  int64_t v70; // x0
  struct UserServantEntity_o *v71; // x8
  __int128 v72; // q0
  UserServantCollectionMaster_o *v73; // x22
  struct UserServantEntity_o *v74; // x8
  int64_t v75; // x23
  __int64 v76; // x24
  __int64 v77; // x25
  __int64 v78; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v80; // x23
  __int64 v81; // x22
  unsigned int v82; // w24
  __int64 v83; // x25
  __int64 v84; // x8
  unsigned int v85; // w26
  __int64 v86; // x8
  unsigned int v87; // w9
  __int64 v88; // x8
  struct UserServantEntity_o *v89; // x9
  __int128 v90; // q0
  __int64 v91; // x28
  UserServantEntity_o *v92; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int v95; // w22
  BalanceConfig_c *v96; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct System_String_o *v98; // x1
  __int64 v99; // x23
  int64_t v100; // x8
  struct ServantEntity_o *v101; // x9
  struct UserServantEntity_o *v102; // x8
  __int64 v103; // x21
  __int64 v104; // x22
  int32_t v105; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+90h] [xbp-90h]
  int64_t recoverAt; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_4B111CB & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userServantEntity, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v27, v28);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v37, v38);
    byte_4B111CB = 1;
  }
  recoverAt = 0LL;
  v39 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, userServantEntity, *(_QWORD *)&eventId, baseUserSvtId);
  IconLabelInfo___ctor(v39, 0LL);
  this->fields.iconLabelInfo1 = v39;
  sub_1BCA784(&this->fields.iconLabelInfo1, v39);
  v43 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v40, v41, v42);
  IconLabelInfo___ctor(v43, 0LL);
  this->fields.iconLabelInfo2 = v43;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BCA784(&this->fields.iconLabelInfo2, v43);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784(&this->fields.userServantEntity, userServantEntity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v48 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v51 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
  *(_QWORD *)&v112.fields.currentCryptoKey = v51;
  *(_QWORD *)&v112.fields.fakeValue = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v112, 0LL);
  if ( !v49 )
    goto LABEL_92;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v49,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  Instance = sub_1BCA784(&this->fields.servantEntity, Entity);
  v53 = this->fields.userServantEntity;
  if ( !v53 )
    goto LABEL_92;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_92;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0LL);
  this->fields.servantName = Name;
  sub_1BCA784(&this->fields.servantName, Name);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_92;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
  v56 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v56 )
    goto LABEL_92;
  Rarity = UserServantEntity__getRarity(v56, 0LL);
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_92;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v58 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v58 )
    goto LABEL_92;
  this->fields.isChoice = UserServantEntity__IsChoice(v58, 0LL);
  Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_92;
  v59 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v60 = *(_OWORD *)&v59->fields.id.fields.fakeValue;
  v61 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&v59->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v110.fields.fakeValue = v60;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47);
  v109 = v110;
  v62 = v61 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v109, 0LL);
  this->fields.baseUserSvtId = baseUserSvtId;
  this->fields.isPush = v62;
  this->fields.targetRecoveryFatigueItem = targetRecoveryFatigueItem;
  sub_1BCA784(&this->fields.targetRecoveryFatigueItem, targetRecoveryFatigueItem);
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  this->fields.isFatigueRecover = 0;
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.fatigueTime = -1LL;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_92;
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    this->fields.isHeroineSvt = 1;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  v63 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v64 = (UserEventServantFatigueMaster_o *)Instance;
  v66 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
  *(_QWORD *)&v113.fields.currentCryptoKey = v66;
  *(_QWORD *)&v113.fields.fakeValue = v65;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v113, 0LL);
  if ( !v64 )
    goto LABEL_92;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v64,
         &recoverAt,
         &this->fields.isFatigueRecover,
         eventId,
         Instance,
         0LL) )
  {
    v67 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v47);
    Instance = NetworkManager__getTime(0LL);
    if ( v67 > Instance )
      this->fields.fatigueTime = recoverAt;
    if ( this->fields.isFatigueRecover )
    {
      v68 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_92;
      v69 = *(_OWORD *)&v68->fields.id.fields.fakeValue;
      *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&v68->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v110.fields.fakeValue = v69;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47);
      v108 = v110;
      v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v108, 0LL);
      this->fields.isCanNotSelect = !UserEventServantFatigueMaster__IsRecoverUserServant(v64, eventId, v70, 0LL);
    }
  }
  if ( this->fields.isHeroineSvt )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v47);
    if ( TutorialFlag__Get_38402052(126, 0LL) )
      this->fields.isCanNotSelect = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v71 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v72 = *(_OWORD *)&v71->fields.userId.fields.fakeValue;
  v73 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&v71->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v110.fields.fakeValue = v72;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47);
  v107 = v110;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v107, 0LL);
  v74 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  v75 = Instance;
  v77 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
  v76 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
  *(_QWORD *)&v114.fields.currentCryptoKey = v77;
  *(_QWORD *)&v114.fields.fakeValue = v76;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v114, 0LL);
  if ( !v73 )
    goto LABEL_92;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v73, v75, Instance, 0LL);
  if ( !Instance )
    goto LABEL_92;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v78);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_92;
  Instance = (__int64)UserDeckMaster__getDeckList((UserDeckMaster_o *)MasterData_object, Instance, 0LL);
  if ( !Instance )
    goto LABEL_92;
  v80 = *(_QWORD *)(Instance + 24);
  v81 = Instance;
  if ( (int)v80 < 1 )
    goto LABEL_75;
  v82 = 0;
LABEL_57:
  v83 = *(_QWORD *)(v81 + 8LL * (int)v82 + 32);
  if ( !v83 )
    goto LABEL_92;
  v84 = *(_QWORD *)(v83 + 48);
  if ( !v84 )
    goto LABEL_92;
  v85 = 0;
  while ( 1 )
  {
    v86 = *(_QWORD *)(v84 + 16);
    if ( !v86 )
      goto LABEL_92;
    v87 = *(_DWORD *)(v86 + 24);
    if ( (int)v85 >= (int)v87 )
    {
      if ( this->fields.isParty )
        goto LABEL_75;
      if ( ++v82 == (_DWORD)v80 )
        goto LABEL_75;
      if ( v82 >= *(_DWORD *)(v81 + 24) )
LABEL_73:
        sub_1BCAA44(Instance, v47);
      goto LABEL_57;
    }
    if ( v85 >= v87 )
      goto LABEL_73;
    v88 = *(_QWORD *)(v86 + 8LL * (int)v85 + 32);
    if ( !v88 )
      goto LABEL_92;
    v89 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_92;
    v90 = *(_OWORD *)&v89->fields.id.fields.fakeValue;
    v91 = *(_QWORD *)(v88 + 24);
    *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&v89->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v110.fields.fakeValue = v90;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47);
    v106 = v110;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v106, 0LL);
    if ( v91 == Instance )
      break;
    v84 = *(_QWORD *)(v83 + 48);
    ++v85;
    if ( !v84 )
      goto LABEL_92;
  }
  this->fields.isParty = 1;
LABEL_75:
  Instance = (__int64)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v92 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v92 )
    goto LABEL_92;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v92, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BCA784(&this->fields.skillCategoryIdList, SkillCategoryIdList);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_92;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BCA784(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
  Instance = (__int64)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_92;
  v95 = *(_DWORD *)(Instance + 276);
  v96 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v47);
    v96 = BalanceConfig_TypeInfo;
    Instance = (__int64)*p_userServantEntity;
  }
  static_fields = v96->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v95;
  if ( !Instance )
    goto LABEL_92;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_92;
  v98 = *(struct System_String_o **)(Instance + 24);
  v99 = Instance;
  this->fields.className = v98;
  Instance = sub_1BCA784(&this->fields.className, v98);
  v100 = *(int *)(v99 + 52);
  v101 = this->fields.servantEntity;
  this->fields.priority = v100;
  this->fields.sortValue1B = v100;
  if ( !v101 )
    goto LABEL_92;
  v102 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_92;
  this->fields.sortValue2 = ((__int64)v101->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v102->fields.lv;
  v104 = *(_QWORD *)&v102->fields.svtId.fields.currentCryptoKey;
  v103 = *(_QWORD *)&v102->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
  *(_QWORD *)&v115.fields.currentCryptoKey = v104;
  *(_QWORD *)&v115.fields.fakeValue = v103;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v115, 0LL);
  Instance = (__int64)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v105;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (__int64)*p_iconLabelInfo2) == 0) )
  {
LABEL_92:
    sub_1BCAA3C(Instance, v47);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned int bonusKind2; // w8
  int32_t bonusKindId; // w2
  int32_t bonusKind2Id; // w9
  struct ServantEntity_o *servantEntity; // x8
  __int64 v29; // x20
  __int64 v30; // x21
  __int64 v31; // x1
  struct ServantEntity_o *v32; // x8
  EventServantFatigueMaster_o *v33; // x20
  int32_t v34; // w19
  __int64 v35; // x21
  __int64 v36; // x22
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  __int64 v38; // x2
  __int64 v39; // x3
  System_Func_object__bool__o *v40; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v42; // x20
  __int64 v43; // x21
  __int64 v44; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v45; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v4 = this;
  if ( (byte_4B111CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventGroupEntity___, sort, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventGroupMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantFatigueMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_EventServantFatigueListViewItem__GetIsEventUpValShow_b__44_0__, v15, v16);
    sub_1BCA7E0(&System_Func_EventGroupEntity__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22);
    this = (EventServantFatigueListViewItem_o *)sub_1BCA7E0(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v23,
                                                  v24);
    byte_4B111CF = 1;
  }
  if ( !sort )
LABEL_47:
    sub_1BCAA3C(this, sort);
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
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
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
            v40 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_EventGroupEntity__bool__TypeInfo,
                                                   sort,
                                                   v38,
                                                   v39);
            System_Func_object__bool____ctor(
              v40,
              (Il2CppObject *)v4,
              Method_EventServantFatigueListViewItem__GetIsEventUpValShow_b__44_0__,
              0LL);
            LOBYTE(this) = BasicHelper__Any_object_(
                             (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                             (System_Func_T__bool__o *)v40,
                             (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventGroupEntity___);
            return (char)this;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
            userServantEntity = v4->fields.userServantEntity;
            if ( !userServantEntity )
              goto LABEL_47;
            v42 = (EventCampaignMaster_o *)this;
            v44 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
            v43 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
            *(_QWORD *)&v49.fields.currentCryptoKey = v44;
            *(_QWORD *)&v49.fields.fakeValue = v43;
            this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                          v49,
                                                          0LL);
            if ( !v42 )
              goto LABEL_47;
            LOBYTE(this) = EventCampaignMaster__IsEnableServant(v42, (int32_t)this, v4->fields.bonusKindId, 0LL);
            return (char)this;
          case 4u:
          case 5u:
            this = (EventServantFatigueListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_47;
            this = (EventServantFatigueListViewItem_o *)UserServantEntity__getEventUpVal_40936552(
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
            v30 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
            v29 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
            *(_QWORD *)&v47.fields.currentCryptoKey = v30;
            *(_QWORD *)&v47.fields.fakeValue = v29;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v47, 0LL) < 1 )
              goto LABEL_34;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantFatigueMaster___);
            v32 = v4->fields.servantEntity;
            if ( !v32 )
              goto LABEL_47;
            v33 = (EventServantFatigueMaster_o *)this;
            v34 = v4->fields.bonusKindId;
            v36 = *(_QWORD *)&v32->fields.id.fields.currentCryptoKey;
            v35 = *(_QWORD *)&v32->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
            *(_QWORD *)&v48.fields.currentCryptoKey = v36;
            *(_QWORD *)&v48.fields.fakeValue = v35;
            this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                          v48,
                                                          0LL);
            if ( !v33 )
              goto LABEL_47;
            if ( EventServantFatigueMaster__IsBonusFilterTarget(v33, v34, (int32_t)this, 0LL) )
              goto LABEL_26;
LABEL_34:
            LOBYTE(this) = 0;
            break;
          case 7u:
            this = (EventServantFatigueListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_47;
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            v45 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
            if ( !v45 || !this )
              goto LABEL_47;
            LOBYTE(this) = ServantFilterMaster__IsEnableServant(
                             (ServantFilterMaster_o *)this,
                             v45[5],
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
  __int64 v2; // x2
  EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  EventServantRecoveryFatigueItem_o *v6; // x20
  bool v7; // w25
  unsigned __int64 v8; // x26
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v10; // w21
  ServantEntity_o *servantEntity; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  struct UserServantEntity_o *v14; // x8
  int32_t v15; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B111D2 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B111D2 = 1;
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
  v6 = targetRecoveryFatigueItem;
  v7 = (int)m_CancellationTokenSource > 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(targetRecoveryFatigueItem, method);
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        break;
      v10 = *((_DWORD *)&v6->fields.baseButton + v8);
      servantEntity = this->fields.servantEntity;
      v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
      *(_QWORD *)&v17.fields.currentCryptoKey = v13;
      *(_QWORD *)&v17.fields.fakeValue = v12;
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                         v17,
                                                                         0LL);
      v14 = this->fields.userServantEntity;
      if ( !v14 )
        break;
      v15 = (int)targetRecoveryFatigueItem;
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                         v14->fields.dispLimitCount,
                                                                         0LL);
      if ( !servantEntity )
        break;
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)ServantEntity__IsIndividuality(
                                                                         servantEntity,
                                                                         v15,
                                                                         (int32_t)targetRecoveryFatigueItem,
                                                                         v10,
                                                                         0LL);
      if ( ((unsigned __int8)targetRecoveryFatigueItem & 1) == 0 )
      {
        LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
        v7 = (__int64)++v8 < (int)m_CancellationTokenSource;
        if ( (__int64)v8 < (int)m_CancellationTokenSource )
          continue;
      }
      return v7;
    }
LABEL_16:
    sub_1BCAA3C(targetRecoveryFatigueItem, method);
  }
  return v7;
}


bool __fastcall EventServantFatigueListViewItem__IsMatchIndividuality_31192900(
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
  if ( (byte_4B111D3 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1BCA7E0(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                  targetRecoveryFatigueItem,
                                                  method);
    byte_4B111D3 = 1;
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
        sub_1BCAA44(this, targetRecoveryFatigueItem);
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        break;
      v10 = *((_DWORD *)&v6->fields.sortValue0 + v8);
      servantEntity = v4->fields.servantEntity;
      v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, targetRecoveryFatigueItem);
      *(_QWORD *)&v17.fields.currentCryptoKey = v13;
      *(_QWORD *)&v17.fields.fakeValue = v12;
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                    v17,
                                                    0LL);
      v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
      if ( !v14 )
        break;
      v15 = (int)this;
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
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
    sub_1BCAA3C(this, targetRecoveryFatigueItem);
  }
  return v7;
}


bool __fastcall EventServantFatigueListViewItem__IsMatchServantFilter(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  __int64 v19; // x1
  UserServantEntity_o *userServantEntity; // x21
  __int64 v21; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v23; // x0
  ListViewSort_FilterKind_array *v24; // x21
  UserServantEntity_o *v26; // x0
  int32_t dispLimitCount; // w22
  UserServantEntity_o *v28; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v32; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v34; // w0

  if ( (byte_4B111CE & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    sub_1BCA7E0(&ServantEventBonusFilterController_TypeInfo, v9, v10);
    byte_4B111CE = 1;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_62;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v13 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v13->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v19);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0LL) )
      return 0;
  }
  ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_62:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  v21 = ClassGroupFilterKindList;
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
  v26 = this->fields.userServantEntity;
  if ( v26 )
  {
    dispLimitCount = this->fields.dispLimitCount;
    if ( dispLimitCount != UserServantEntity__getDispLimitCount(v26, 0, 0LL) )
    {
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_62;
      ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                   (UserServantEntity_o *)ClassGroupFilterKindList,
                                   0,
                                   0LL);
      v28 = this->fields.userServantEntity;
      this->fields.dispLimitCount = ClassGroupFilterKindList;
      if ( !v28 )
        goto LABEL_62;
      SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v28, -1, 0LL);
      this->fields.skillCategoryIdList = SkillCategoryIdList;
      sub_1BCA784(&this->fields.skillCategoryIdList, SkillCategoryIdList);
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_62;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)ClassGroupFilterKindList,
                                       0,
                                       0LL);
      this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_1BCA784(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
    }
  }
  ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v21 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_63;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0LL);
  ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v21 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
    sub_1BCAA44(ClassGroupFilterKindList, v21);
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
  v32 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0LL);
  v34 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
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
LABEL_37:
  v23 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v23 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v23->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v24 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v24, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v24, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall EventServantFatigueListViewItem__ModifyChoiceItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BCAA3C(0LL, method);
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
  sub_1BCA784(&this->fields.userServantEntity, userServantEntity);
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
    sub_1BCAA3C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EventServantFatigueListViewItem__ModifyPushItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v7; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4B111CC & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B111CC = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_1BCAA3C(SelfUserGame, v5);
  v7 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
  v9 = v10;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v9, 0LL);
}


bool __fastcall EventServantFatigueListViewItem__SetSortValue(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t *p_sortValue0; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  int64_t IsBaseSvt; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  _BOOL4 isChoice; // w8
  const MethodInfo *v16; // x2
  __int64 v17; // x8
  EventServantRecoveryFatigueItem_o **manager; // x8
  __int64 methodPtr_low; // x11
  int64_t fatigueTime; // x22
  bool IsMatchIndividuality_31192900; // w0
  int64_t v22; // x8
  __int64 v23; // x9
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v26; // x21
  __int64 v27; // x22
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q1
  struct UserServantEntity_o *v30; // x8
  int64_t rarity; // x8
  int64_t v32; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v36; // w1
  struct UserServantEntity_o *v37; // x8
  struct UserServantEntity_o *v38; // x8
  struct ServantEntity_o *v39; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *v42; // x8
  __int64 v43; // x11
  struct ListViewManager_o *v44; // x20
  int32_t lv; // w20
  int64_t priority; // x9
  struct ServantEntity_o *v47; // x8
  struct UserServantEntity_o *v48; // x8
  __int64 v49; // x21
  __int64 v50; // x22
  const MethodInfo *v51; // x2
  struct ServantEntity_o *v52; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v54; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4B111CD & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantFatigueListViewManager_TypeInfo, sort, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    byte_4B111CD = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventServantFatigueListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventServantFatigueListViewItem__IsMatchServantFilter(this, sort, v11)
    || (IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v10), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventServantFatigueListViewItem__GetIsEventUpValShow(this, sort, v14), (IsBaseSvt & 1) == 0) )
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
  IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v13);
  if ( (IsBaseSvt & 1) != 0 )
  {
    v17 = 30LL;
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
    IsMatchIndividuality_31192900 = EventServantFatigueListViewItem__IsMatchIndividuality_31192900(
                                      this,
                                      manager[67],
                                      v16);
    v22 = 10LL;
    if ( IsMatchIndividuality_31192900 )
      v22 = 20LL;
    if ( IsMatchIndividuality_31192900 )
      v23 = -10LL;
    else
      v23 = -20LL;
    if ( fatigueTime < 1 )
      v22 = v23;
    this->fields.sortValue0 = v22;
    if ( sort->fields.isChoiceSort && this->fields.isChoice )
      this->fields.sortValue0B = 10LL;
    if ( !this->fields.isCanNotSelect )
      goto LABEL_35;
    v17 = -30LL;
  }
  *p_sortValue0 = v17;
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
  v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v59.fields.currentCryptoKey = v27;
  *(_QWORD *)&v59.fields.fakeValue = v26;
  IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v59, 0LL);
  this->fields.sortValue2B = (int)IsBaseSvt;
  if ( !sort )
LABEL_99:
    sub_1BCAA3C(IsBaseSvt, v13);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v28 = this->fields.userServantEntity;
      if ( !v28 )
        goto LABEL_99;
      v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
      *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v57.fields.fakeValue = v29;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
      v56 = v57;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v56, 0LL);
      v30 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v30 )
        goto LABEL_99;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_99;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v30->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_77;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_64;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      v32 = *(int *)(IsBaseSvt + 256);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v32;
      goto LABEL_86;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_40943792((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = tdMaxLv[0];
      v36 = 33;
      goto LABEL_76;
    case 5:
      v37 = this->fields.userServantEntity;
      if ( !v37 )
        goto LABEL_99;
      hp = v37->fields.hp;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = v37->fields.adjustHp;
      v36 = 3;
      goto LABEL_76;
    case 6:
      v38 = this->fields.userServantEntity;
      if ( !v38 )
        goto LABEL_99;
      hp = v38->fields.atk;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = v38->fields.adjustAtk;
      v36 = 5;
      goto LABEL_76;
    case 7:
      v39 = this->fields.servantEntity;
      if ( !v39 )
        goto LABEL_99;
      cost = v39->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_99;
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0LL);
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
      v36 = 32;
      goto LABEL_76;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_96;
      v42 = sort->fields.manager;
      if ( v42
        && (v43 = LOBYTE(EventServantFatigueListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v42->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v43) )
      {
        if ( (EventServantFatigueListViewManager_c *)v42->klass->_2.typeHierarchy[v43 - 1] == EventServantFatigueListViewManager_TypeInfo )
          v44 = sort->fields.manager;
        else
          v44 = 0LL;
      }
      else
      {
        v44 = 0LL;
      }
      v48 = this->fields.userServantEntity;
      if ( !v48 )
        goto LABEL_99;
      v50 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
      v49 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
      *(_QWORD *)&v60.fields.currentCryptoKey = v50;
      *(_QWORD *)&v60.fields.fakeValue = v49;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v60, 0LL);
      if ( !v44 )
        goto LABEL_99;
      IsBaseSvt = EventServantFatigueListViewManager__GetAmountSortValue(
                    (EventServantFatigueListViewManager_o *)v44,
                    IsBaseSvt,
                    v51);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_96:
      v52 = this->fields.servantEntity;
      if ( !v52 )
        goto LABEL_99;
      collectionNo = v52->fields.collectionNo;
      v54 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48)) | collectionNo;
      if ( !v54 )
        goto LABEL_99;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      lv = v54->fields.lv;
      IsBaseSvt = (int64_t)v54;
      goto LABEL_80;
    case 0xF:
      hp = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = this->fields.nowMaxHpReinforceValue;
      v36 = 44;
      goto LABEL_76;
    case 0x10:
      hp = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = this->fields.nowMaxAtkReinforceValue;
      v36 = 45;
LABEL_76:
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)IsBaseSvt, v36, hp, adjustHp, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_38850420(iconLabelInfo2, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0LL);
LABEL_82:
      LOBYTE(IsBaseSvt) = 1;
      break;
    case 0x19:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      this->fields.sortValue1 = this->fields.fatigueTime;
      if ( !IsBaseSvt )
        goto LABEL_99;
      v32 = *(int *)(IsBaseSvt + 256);
      priority = this->fields.priority;
      v47 = this->fields.servantEntity;
      this->fields.sortValue1B = v32;
      this->fields.sortValue2 = priority;
      if ( !v47 )
        goto LABEL_99;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue2B = v32 | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | ((__int64)v47->fields.collectionNo << 16);
LABEL_86:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_99;
      IconLabelInfo__Set_38850420(iconLabelInfo1, 2, v32, IsBaseSvt, 0, 0, 0, 0, 0LL);
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
  sub_1BCA784(&this->fields.userServantEntity, userServantEntity);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventCampaignMaster_o *Master_object; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  __int64 v17; // x1
  struct UserServantEntity_o *v18; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B111D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B111D4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_19;
  v14 = Master_object;
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  *(_QWORD *)&v20.fields.fakeValue = v15;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  if ( !entity || !v14 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v14, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v18 = this->fields.userServantEntity;
  if ( !v18 || !Master_object )
    goto LABEL_19;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Master_object,
         v18->fields.svtId,
         entity->fields.eventId,
         0LL) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_19:
    sub_1BCAA3C(Master_object, v12);
  return UserServantEntity__getEventUpVal_40936552(
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
  __int64 v2; // x2
  EventServantFatigueListViewItem_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B111D1 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1BCA7E0(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  method,
                                                  v2);
    byte_4B111D1 = 1;
  }
  userServantEntity = v3->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BCAA3C(this, method);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v3->fields.baseUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v8 = v9;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v8, 0LL);
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
    sub_1BCAA3C(userServantEntity, method);
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
  __int64 v2; // x2
  EventServantFatigueListViewItem_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B111D0 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1BCA7E0(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  method,
                                                  v2);
    byte_4B111D0 = 1;
  }
  userServantEntity = v3->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BCAA3C(this, method);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
}


void __fastcall EventServantFatigueListViewItem__set_IsCanNotLock(
        EventServantFatigueListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}