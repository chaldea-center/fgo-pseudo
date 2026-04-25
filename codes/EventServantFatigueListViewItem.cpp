void EventServantFatigueListViewItem___ctor(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem,
        const MethodInfo *method)
{
  IconLabelInfo_o *v12; // x20
  IconLabelInfo_o *v13; // x21
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  struct UserServantEntity_o **p_userServantEntity; // x21
  __int64 Master_object; // x0
  __int64 v17; // x1
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  struct UserServantEntity_o *v20; // x8
  ServantEntity_o *v21; // x28
  __int64 v22; // x23
  __int64 v23; // x29
  struct System_String_o *Name; // x0
  struct ServantEntity_o *v25; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v26; // x8
  ServantLimitMaster_o *v27; // x27
  int32_t v28; // w28
  int32_t v29; // w8
  UserServantEntity_o *v30; // x8
  struct UserServantEntity_o *v31; // x8
  __int128 v32; // q1
  __int64 v33; // x23
  bool v34; // w8
  struct UserServantEntity_o *v35; // x8
  UserEventServantFatigueMaster_o *v36; // x25
  __int64 v37; // x23
  __int64 v38; // x26
  int64_t v39; // x23
  struct UserServantEntity_o *v40; // x8
  __int128 v41; // q0
  int64_t v42; // x0
  struct UserServantEntity_o *v43; // x8
  __int128 v44; // q0
  UserServantCollectionMaster_o *v45; // x23
  struct UserServantEntity_o *v46; // x8
  int64_t v47; // x24
  __int64 v48; // x25
  __int64 v49; // x26
  Il2CppObject *MasterData_object; // x23
  __int64 v51; // x24
  __int64 v52; // x23
  unsigned int v53; // w25
  __int64 v54; // x26
  __int64 v55; // x8
  unsigned int v56; // w29
  __int64 v57; // x8
  unsigned int v58; // w9
  __int64 v59; // x8
  struct UserServantEntity_o *v60; // x9
  __int128 v61; // q0
  __int64 v62; // x28
  bool v63; // w8
  UserServantEntity_o *v64; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int v67; // w22
  BalanceConfig_c *v68; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct System_String_o *v70; // x1
  __int64 v71; // x23
  int64_t v72; // x8
  __int64 rarity; // x22
  struct UserServantEntity_o *v74; // x8
  __int64 v75; // x21
  __int64 v76; // x22
  struct UserServantEntity_o *v77; // x8
  __int128 v78; // q0
  int64_t v79; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+10h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+50h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+90h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+B0h] [xbp-90h]
  int64_t recoverAt; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_4DFF1B8 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&IconLabelInfo_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    byte_4DFF1B8 = 1;
  }
  recoverAt = 0;
  v12 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0);
  this->fields.iconLabelInfo1 = v12;
  sub_1CE66A4(&this->fields.iconLabelInfo1, v12);
  v13 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0);
  this->fields.iconLabelInfo2 = v13;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1CE66A4(&this->fields.iconLabelInfo2, v13);
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  Master_object = sub_1CE66A4(&this->fields.userServantEntity, userServantEntity);
  if ( !userServantEntity )
    goto LABEL_104;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  Master_object = sub_1CE66A4(&this->fields.servantEntity, ServantEntity);
  v20 = this->fields.userServantEntity;
  if ( !v20 )
    goto LABEL_104;
  v21 = *p_servantEntity;
  v22 = *(_QWORD *)&v20->fields.limitCount.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v20->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v88.fields.currentCryptoKey = v22;
  *(_QWORD *)&v88.fields.fakeValue = v23;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v88, 0);
  if ( !v21 )
    goto LABEL_104;
  Name = ServantEntity__getName(v21, Master_object, -1, 0, 0, 0);
  this->fields.servantName = Name;
  Master_object = sub_1CE66A4(&this->fields.servantName, Name);
  v25 = this->fields.servantEntity;
  if ( !v25 )
    goto LABEL_104;
  this->fields.classId = v25->fields.classId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v26 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_104;
  v27 = (ServantLimitMaster_o *)Master_object;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v26[1], 0);
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                    userServantEntity->fields.limitCount,
                    0);
  if ( !v27 )
    goto LABEL_104;
  Master_object = (__int64)ServantLimitMaster__GetEntity(v27, v28, Master_object, 0);
  if ( !Master_object )
    goto LABEL_104;
  v29 = *(_DWORD *)(Master_object + 24);
  Master_object = (__int64)this->fields.userServantEntity;
  this->fields.isParty = 0;
  this->fields.rarity = v29;
  if ( !Master_object )
    goto LABEL_104;
  Master_object = UserServantEntity__IsLock((UserServantEntity_o *)Master_object, 0);
  v30 = this->fields.userServantEntity;
  this->fields.isLock = Master_object & 1;
  if ( !v30 )
    goto LABEL_104;
  this->fields.isChoice = UserServantEntity__IsChoice(v30, 0);
  Master_object = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !Master_object )
    goto LABEL_104;
  v31 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v32 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
  v33 = *(_QWORD *)(Master_object + 128);
  *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v86.fields.fakeValue = v32;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v85 = v86;
  v34 = v33 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v85, 0);
  this->fields.baseUserSvtId = baseUserSvtId;
  this->fields.isPush = v34;
  this->fields.targetRecoveryFatigueItem = targetRecoveryFatigueItem;
  sub_1CE66A4(&this->fields.targetRecoveryFatigueItem, targetRecoveryFatigueItem);
  this->fields.setupInfo = setupInfo;
  sub_1CE66A4(&this->fields.setupInfo, setupInfo);
  this->fields.isFatigueRecover = 0;
  Master_object = (__int64)this->fields.userServantEntity;
  this->fields.fatigueTime = -1;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Master_object )
    goto LABEL_104;
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Master_object, 0) )
    this->fields.isHeroineSvt = 1;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_104;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  v35 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v36 = (UserEventServantFatigueMaster_o *)Master_object;
  v37 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v89.fields.currentCryptoKey = v37;
  *(_QWORD *)&v89.fields.fakeValue = v38;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v89, 0);
  if ( !v36 )
    goto LABEL_104;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v36,
         &recoverAt,
         &this->fields.isFatigueRecover,
         eventId,
         Master_object,
         0) )
  {
    v39 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager__getTime(0);
    if ( v39 > Master_object )
      this->fields.fatigueTime = recoverAt;
    if ( this->fields.isFatigueRecover )
    {
      v40 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_104;
      v41 = *(_OWORD *)&v40->fields.id.fields.fakeValue;
      *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v40->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v86.fields.fakeValue = v41;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v84 = v86;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v84, 0);
      this->fields.isCanNotSelect = !UserEventServantFatigueMaster__IsRecoverUserServant(v36, eventId, v42, 0);
    }
  }
  if ( this->fields.isHeroineSvt )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_41569468(126, 0) )
      this->fields.isCanNotSelect = 1;
  }
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_104;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v43 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v44 = *(_OWORD *)&v43->fields.userId.fields.fakeValue;
  v45 = (UserServantCollectionMaster_o *)Master_object;
  *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v43->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v86.fields.fakeValue = v44;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v83 = v86;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v83, 0);
  v46 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v47 = Master_object;
  v49 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
  v48 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v90.fields.currentCryptoKey = v49;
  *(_QWORD *)&v90.fields.fakeValue = v48;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v90, 0);
  if ( !v45 )
    goto LABEL_104;
  Master_object = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v45, v47, Master_object, 0);
  if ( !Master_object )
    goto LABEL_104;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Master_object,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_104;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4DFE4CA )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4DFE4CA = 1;
  }
  Master_object = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object
    || (Master_object = (__int64)UserDeckMaster__getDeckList(
                                   (UserDeckMaster_o *)MasterData_object,
                                   *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                                   0)) == 0 )
  {
LABEL_104:
    sub_1CE6958(Master_object, v17);
  }
  v51 = *(_QWORD *)(Master_object + 24);
  v52 = Master_object;
  if ( (int)v51 >= 1 )
  {
    v53 = 0;
    while ( 1 )
    {
      v54 = *(_QWORD *)(v52 + 8LL * (int)v53 + 32);
      if ( !v54 )
        goto LABEL_104;
      v55 = *(_QWORD *)(v54 + 48);
      if ( !v55 )
        goto LABEL_104;
      v56 = 0;
      while ( 1 )
      {
        v57 = *(_QWORD *)(v55 + 16);
        if ( !v57 )
          goto LABEL_104;
        v58 = *(_DWORD *)(v57 + 24);
        if ( (int)v56 >= (int)v58 )
          break;
        if ( v56 >= v58 )
          goto LABEL_79;
        v59 = *(_QWORD *)(v57 + 8LL * (int)v56 + 32);
        if ( !v59 )
          goto LABEL_104;
        v60 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_104;
        v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
        v62 = *(_QWORD *)(v59 + 24);
        *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v86.fields.fakeValue = v61;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v82 = v86;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v82, 0);
        if ( v62 == Master_object )
        {
          this->fields.isParty = 1;
          goto LABEL_81;
        }
        v55 = *(_QWORD *)(v54 + 48);
        ++v56;
        if ( !v55 )
          goto LABEL_104;
      }
      if ( this->fields.isParty )
        break;
      if ( ++v53 == (_DWORD)v51 )
        break;
      if ( v53 >= *(_DWORD *)(v52 + 24) )
LABEL_79:
        sub_1CE6960(Master_object);
    }
  }
LABEL_81:
  v63 = UserServantEntity__get_IsSaveTransformServant(userServantEntity, 0)
     && !UserServantEntity__CheckBaseServant(userServantEntity, -1, 0);
  this->fields.isTransformed = v63;
  Master_object = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userServantEntity, -1, 0, 0);
  v64 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Master_object;
  if ( !v64 )
    goto LABEL_104;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v64, -1, Master_object, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1CE66A4(&this->fields.skillCategoryIdList, SkillCategoryIdList);
  Master_object = (__int64)this->fields.userServantEntity;
  if ( !Master_object )
    goto LABEL_104;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Master_object,
                                   0,
                                   this->fields.dispLimitCount,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1CE66A4(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
  Master_object = (__int64)this->fields.userServantEntity;
  if ( !Master_object )
    goto LABEL_104;
  v67 = *(_DWORD *)(Master_object + 420);
  v68 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v68 = BalanceConfig_TypeInfo;
    Master_object = (__int64)*p_userServantEntity;
  }
  static_fields = v68->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v67;
  if ( !Master_object )
    goto LABEL_104;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Master_object + 416);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Master_object,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_104;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_104;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             this->fields.classId,
                             (const MethodInfo_34E925C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_104;
  v70 = *(struct System_String_o **)(Master_object + 24);
  v71 = Master_object;
  this->fields.className = v70;
  sub_1CE66A4(&this->fields.className, v70);
  v72 = *(int *)(v71 + 52);
  Master_object = (__int64)this->fields.userServantEntity;
  this->fields.priority = v72;
  this->fields.sortValue1B = v72;
  if ( !Master_object )
    goto LABEL_104;
  rarity = (unsigned int)this->fields.rarity;
  Master_object = (__int64)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_104;
  v74 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  this->fields.sortValue2 = ((__int64)*(int *)(Master_object + 208) << 16) | (rarity << 48) | v74->fields.lv;
  v76 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
  v75 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v91.fields.currentCryptoKey = v76;
  *(_QWORD *)&v91.fields.fakeValue = v75;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v91, 0);
  v77 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Master_object;
  if ( !v77 )
    goto LABEL_104;
  v78 = *(_OWORD *)&v77->fields.id.fields.fakeValue;
  *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v77->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v86.fields.fakeValue = v78;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v81 = v86;
  v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v81, 0);
  Master_object = (__int64)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v79;
  this->fields.amountSortValue = -1;
  if ( !Master_object )
    goto LABEL_104;
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0);
  Master_object = (__int64)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_104;
  IconLabelInfo__Clear((IconLabelInfo_o *)Master_object, 0);
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
  if ( (byte_4DFF1BC & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventServantFatigueMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_EventServantFatigueListViewItem__GetIsEventUpValShow_b__44_0__);
    sub_1CE6700(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EventServantFatigueListViewItem_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFF1BC = 1;
  }
  if ( !sort )
LABEL_47:
    sub_1CE6958(this, sort);
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
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
            v17 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v17,
              (Il2CppObject *)v4,
              Method_EventServantFatigueListViewItem__GetIsEventUpValShow_b__44_0__,
              0);
            LOBYTE(this) = BasicHelper__Any_object_(
                             (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                             (System_Func_T__bool__o *)v17,
                             (const MethodInfo_31ED4DC *)Method_BasicHelper_Any_EventGroupEntity___);
            return (char)this;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
            this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
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
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v24, 0) < 1 )
              goto LABEL_34;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventServantFatigueMaster___);
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
            this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
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
            this = (EventServantFatigueListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_47;
            this = (EventServantFatigueListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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

  if ( (byte_4DFF1BE & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4DFF1BE = 1;
  }
  targetRecoveryFatigueItem = this->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem )
    goto LABEL_16;
  targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)EventServantRecoveryFatigueItem__get_Individuality(
                                                                     targetRecoveryFatigueItem,
                                                                     0);
  if ( !targetRecoveryFatigueItem )
    goto LABEL_16;
  m_CancellationTokenSource = targetRecoveryFatigueItem->fields.m_CancellationTokenSource;
  v5 = targetRecoveryFatigueItem;
  v6 = (int)m_CancellationTokenSource > 0;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)m_CancellationTokenSource )
        sub_1CE6960(targetRecoveryFatigueItem);
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
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                                         v16,
                                                                         0);
      v13 = this->fields.userServantEntity;
      if ( !v13 )
        break;
      v14 = (int)targetRecoveryFatigueItem;
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                                         v13->fields.dispLimitCount,
                                                                         0);
      if ( !servantEntity )
        break;
      targetRecoveryFatigueItem = (EventServantRecoveryFatigueItem_o *)ServantEntity__IsIndividuality(
                                                                         servantEntity,
                                                                         v14,
                                                                         (int32_t)targetRecoveryFatigueItem,
                                                                         v9,
                                                                         0);
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
    sub_1CE6958(targetRecoveryFatigueItem, method);
  }
  return v6;
}


bool EventServantFatigueListViewItem__IsMatchIndividuality_33404764(
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
  if ( (byte_4DFF1BF & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4DFF1BF = 1;
  }
  if ( !targetRecoveryFatigueItem )
    goto LABEL_16;
  this = (EventServantFatigueListViewItem_o *)EventServantRecoveryFatigueItem__get_Individuality(
                                                targetRecoveryFatigueItem,
                                                0);
  if ( !this )
    goto LABEL_16;
  v5 = *(_QWORD *)&this->fields.sortIndex;
  v6 = this;
  v7 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v5 )
        sub_1CE6960(this);
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
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                    v17,
                                                    0);
      v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
      if ( !v14 )
        break;
      v15 = (int)this;
      this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
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
        LODWORD(v5) = v6->fields.sortIndex;
        v7 = (__int64)++v8 < (int)v5;
        if ( (__int64)v8 < (int)v5 )
          continue;
      }
      return v7;
    }
LABEL_16:
    sub_1CE6958(this, targetRecoveryFatigueItem);
  }
  return v7;
}


bool EventServantFatigueListViewItem__IsMatchServantFilter(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
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
  _BOOL4 v19; // w22
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v24; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v26; // w0

  if ( (byte_4DFF1BB & 1) == 0 )
  {
    sub_1CE6700(&FilterKindList_TypeInfo);
    sub_1CE6700(&ListViewSort_FilterKind___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1CE6700(&ServantEventBonusFilterController_TypeInfo);
    byte_4DFF1BB = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            ClassGroupFilterKindList,
                                            (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_70;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 39;
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
  if ( !v18 )
    goto LABEL_57;
  if ( UserServantEntity__get_IsSaveTransformServant(v18, 0) )
  {
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v19 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)ClassGroupFilterKindList, -1, 0);
  }
  else
  {
    v19 = 0;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
  if ( !ClassGroupFilterKindList )
LABEL_69:
    sub_1CE6958(ClassGroupFilterKindList, sort);
  DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                            (UserServantEntity_o *)ClassGroupFilterKindList,
                                            -1,
                                            0,
                                            0);
  if ( v19 != this->fields.isTransformed || this->fields.dispLimitCount != DispLimitCountStageSealAfterIndexZero )
  {
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
    this->fields.isTransformed = v19;
    this->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                            (UserServantEntity_o *)ClassGroupFilterKindList,
                            -1,
                            DispLimitCountStageSealAfterIndexZero,
                            0);
    this->fields.skillCategoryIdList = SkillCategoryIdList;
    sub_1CE66A4(&this->fields.skillCategoryIdList, SkillCategoryIdList);
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     this->fields.dispLimitCount,
                                     0);
    this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
    sub_1CE66A4(&this->fields.tdCategoryIdList, TreasureDeviceCategoryIdList);
  }
LABEL_57:
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_70;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_70:
    sub_1CE6960(ClassGroupFilterKindList);
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 51;
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v15->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1CE6958(0, method);
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
  const MethodInfo *v7; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1CE66A4(&this->fields.userServantEntity, userServantEntity);
  EventServantFatigueListViewItem__UpdateServantInfoAndSortInfo(this, v4);
  EventServantFatigueListViewItem__ModifyLockItem(this, v5);
  EventServantFatigueListViewItem__ModifyChoiceItem(this, v6);
  EventServantFatigueListViewItem__ModifyPushItem(this, v7);
}


void EventServantFatigueListViewItem__ModifyLockItem(EventServantFatigueListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1CE6958(0, method);
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

  if ( (byte_4DFF1B9 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4DFF1B9 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0 )
    sub_1CE6958(SelfUserGame, v4);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v8, 0);
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
  bool IsMatchIndividuality_33404764; // w0
  int64_t v18; // x8
  __int64 v19; // x9
  __int64 rarity; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v22; // x21
  __int64 v23; // x22
  struct UserServantEntity_o *v24; // x8
  __int128 v25; // q1
  struct UserServantEntity_o *v26; // x8
  int64_t v27; // x8
  int64_t v28; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v32; // w1
  int64_t v33; // x20
  IconLabelInfo_o *v34; // x21
  int32_t v35; // w3
  int32_t v36; // w1
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  int64_t amountSortValue; // x21
  struct ListViewManager_o *v40; // x8
  __int64 v41; // x11
  struct ListViewManager_o *v42; // x20
  IconLabelInfo_o *iconLabelInfo2; // x19
  int64_t priority; // x9
  __int64 v45; // x22
  int64_t v46; // x8
  struct UserServantEntity_o *v47; // x8
  __int64 v48; // x21
  __int64 v49; // x22
  const MethodInfo *v50; // x2
  __int64 v51; // x20
  __int64 v52; // x8
  int32_t v53; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4DFF1BA & 1) == 0 )
  {
    sub_1CE6700(&EventServantFatigueListViewManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4DFF1BA = 1;
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
      goto LABEL_99;
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
      goto LABEL_99;
    if ( !sort->fields.isSmartSort )
      goto LABEL_33;
    manager = (EventServantRecoveryFatigueItem_o **)sort->fields.manager;
    if ( !manager )
      goto LABEL_99;
    naturalAligment = EventServantFatigueListViewManager_TypeInfo->_2.naturalAligment;
    if ( LOBYTE((*manager)[2].klass) < (unsigned int)naturalAligment
      || *((EventServantFatigueListViewManager_c **)(*manager)[1].fields.emptySprite + naturalAligment - 1) != EventServantFatigueListViewManager_TypeInfo )
    {
      goto LABEL_99;
    }
    fatigueTime = this->fields.fatigueTime;
    IsMatchIndividuality_33404764 = EventServantFatigueListViewItem__IsMatchIndividuality_33404764(
                                      this,
                                      manager[67],
                                      v12);
    v18 = 10;
    if ( IsMatchIndividuality_33404764 )
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
    goto LABEL_99;
  IconLabelInfo__Clear((IconLabelInfo_o *)IsBaseSvt, 0);
  IsBaseSvt = (int64_t)this->fields.userServantEntity;
  this->fields.sortValue1B = this->fields.priority;
  if ( !IsBaseSvt )
    goto LABEL_99;
  rarity = (unsigned int)this->fields.rarity;
  IsBaseSvt = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)IsBaseSvt, 0);
  if ( !IsBaseSvt )
    goto LABEL_99;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_99;
  this->fields.sortValue2 = ((__int64)*(int *)(IsBaseSvt + 208) << 16) | (rarity << 48) | userServantEntity->fields.lv;
  v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v58.fields.currentCryptoKey = v23;
  *(_QWORD *)&v58.fields.fakeValue = v22;
  IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v58, 0);
  this->fields.sortValue2B = (int)IsBaseSvt;
  if ( !sort )
LABEL_99:
    sub_1CE6958(IsBaseSvt, v9);
  IsBaseSvt = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v24 = this->fields.userServantEntity;
      if ( !v24 )
        goto LABEL_99;
      v25 = *(_OWORD *)&v24->fields.id.fields.fakeValue;
      *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&v24->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v56.fields.fakeValue = v25;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v55 = v56;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v55, 0);
      v26 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v26 )
        goto LABEL_99;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_99;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v26->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_75;
    case 2:
      v27 = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_94;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      v28 = *(int *)(IsBaseSvt + 400);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v28;
      goto LABEL_81;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 436);
      UserServantEntity__getTreasureDeviceInfo_44310656((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0);
      LODWORD(friendship) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_99;
      friendshipMax = tdMaxLv[0];
      v32 = 33;
      goto LABEL_74;
    case 5:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      v33 = *(int *)(IsBaseSvt + 412);
      v34 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v33;
      IsBaseSvt = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v34 )
        goto LABEL_99;
      v35 = IsBaseSvt;
      v36 = 3;
      goto LABEL_59;
    case 6:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      v33 = *(int *)(IsBaseSvt + 408);
      v34 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v33;
      IsBaseSvt = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !v34 )
        goto LABEL_99;
      v35 = IsBaseSvt;
      v36 = 5;
LABEL_59:
      IconLabelInfo__Set_42060700(v34, v36, v33, v35, 0, 0, 0, 0, 0, 0);
      goto LABEL_75;
    case 7:
      servantEntity = this->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_99;
      cost = servantEntity->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_99;
      IconLabelInfo__Set_42060700((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0, 0);
      goto LABEL_75;
    case 8:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      v27 = -this->fields.priority;
      goto LABEL_94;
    case 0xA:
      friendship = this->fields.friendship;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_99;
      friendshipMax = this->fields.friendshipMax;
      v32 = 32;
      goto LABEL_74;
    case 0xE:
      amountSortValue = this->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_91;
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
      v47 = this->fields.userServantEntity;
      if ( !v47 )
        goto LABEL_99;
      v49 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
      v48 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v59.fields.currentCryptoKey = v49;
      *(_QWORD *)&v59.fields.fakeValue = v48;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v59, 0);
      if ( !v42 )
        goto LABEL_99;
      amountSortValue = EventServantFatigueListViewManager__GetAmountSortValue(
                          (EventServantFatigueListViewManager_o *)v42,
                          IsBaseSvt,
                          v50);
      this->fields.amountSortValue = amountSortValue;
LABEL_91:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      v51 = (unsigned int)this->fields.rarity;
      IsBaseSvt = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !IsBaseSvt )
        goto LABEL_99;
      v52 = *(int *)(IsBaseSvt + 208);
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      v27 = ((v51 << 32) + (amountSortValue << 48)) | v52;
LABEL_94:
      this->fields.sortValue1 = v27;
      if ( !IsBaseSvt )
        goto LABEL_99;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      goto LABEL_96;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_99;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v32 = 44;
      goto LABEL_74;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_99;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v32 = 45;
LABEL_74:
      IconLabelInfo__Set_42060700((IconLabelInfo_o *)IsBaseSvt, v32, friendship, friendshipMax, 0, 0, 0, 0, 0, 0);
LABEL_75:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      iconLabelInfo2 = this->fields.iconLabelInfo2;
LABEL_96:
      v53 = *(_DWORD *)(IsBaseSvt + 400);
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_99;
      IconLabelInfo__Set_42060700(iconLabelInfo2, 2, v53, IsBaseSvt, 0, 0, 0, 0, 0, 0);
LABEL_98:
      LOBYTE(IsBaseSvt) = 1;
      break;
    case 0x19:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      this->fields.sortValue1 = this->fields.fatigueTime;
      if ( !IsBaseSvt )
        goto LABEL_99;
      priority = this->fields.priority;
      v45 = (unsigned int)this->fields.rarity;
      this->fields.sortValue1B = *(int *)(IsBaseSvt + 400);
      this->fields.sortValue2 = priority;
      IsBaseSvt = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !IsBaseSvt )
        goto LABEL_99;
      v46 = IsBaseSvt;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      v28 = *(int *)(IsBaseSvt + 400);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue2B = ((__int64)*(int *)(v46 + 208) << 16) | (v45 << 48) | v28;
LABEL_81:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_99;
      IconLabelInfo__Set_42060700(iconLabelInfo1, 2, v28, IsBaseSvt, 0, 0, 0, 0, 0, 0);
      goto LABEL_98;
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
  const MethodInfo *v4; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1CE66A4(&this->fields.userServantEntity, userServantEntity);
  EventServantFatigueListViewItem__UpdateServantInfoAndSortInfo(this, v4);
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


void EventServantFatigueListViewItem__UpdateServantInfoAndSortInfo(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 userServantEntity; // x0
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x20
  struct ServantEntity_o *v6; // x8
  ServantLimitMaster_o *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  struct UserServantEntity_o *v10; // x8
  int32_t v11; // w21
  int64_t v12; // x8
  __int64 rarity; // x20
  struct UserServantEntity_o *v14; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4DFF1C0 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFF1C0 = 1;
  }
  userServantEntity = (__int64)this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_20;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  userServantEntity = sub_1CE66A4(&this->fields.servantEntity, ServantEntity);
  if ( !this->fields.servantEntity )
    goto LABEL_20;
  this->fields.classId = this->fields.servantEntity->fields.classId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v6 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_20;
  v7 = (ServantLimitMaster_o *)userServantEntity;
  v9 = *(_QWORD *)&v6->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&v6->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  userServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v15, 0);
  v10 = this->fields.userServantEntity;
  if ( !v10 )
    goto LABEL_20;
  v11 = userServantEntity;
  userServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v10->fields.limitCount, 0);
  if ( !v7 )
    goto LABEL_20;
  userServantEntity = (__int64)ServantLimitMaster__GetEntity(v7, v11, userServantEntity, 0);
  if ( !userServantEntity )
    goto LABEL_20;
  this->fields.rarity = *(_DWORD *)(userServantEntity + 24);
  userServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userServantEntity )
    goto LABEL_20;
  userServantEntity = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)userServantEntity,
                                 (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !userServantEntity )
    goto LABEL_20;
  userServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)userServantEntity,
                                 this->fields.classId,
                                 (const MethodInfo_34E925C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !userServantEntity
    || (v12 = *(int *)(userServantEntity + 52),
        userServantEntity = (__int64)this->fields.userServantEntity,
        this->fields.priority = v12,
        this->fields.sortValue1B = v12,
        !userServantEntity)
    || (rarity = (unsigned int)this->fields.rarity,
        (userServantEntity = (__int64)UserServantEntity__get_BaseServantEntity(
                                        (UserServantEntity_o *)userServantEntity,
                                        0)) == 0)
    || (v14 = this->fields.userServantEntity) == 0 )
  {
LABEL_20:
    sub_1CE6958(userServantEntity, method);
  }
  this->fields.sortValue2 = ((__int64)*(int *)(userServantEntity + 208) << 16) | (rarity << 48) | v14->fields.lv;
}


bool EventServantFatigueListViewItem___GetIsEventUpValShow_b__44_0(
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

  if ( (byte_4DFF1C1 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4DFF1C1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v13, 0);
  if ( !entity || !v8 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Master_object, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
    sub_1CE6958(Master_object, v6);
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
  if ( (byte_4DFF1BD & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4DFF1BD = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1CE6958(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v7, 0);
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
    sub_1CE6958(userServantEntity, method);
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