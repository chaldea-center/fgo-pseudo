void __fastcall ServantCostumeItemInfo___ctor(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCostumeItemInfo__GetTreasureDeviceInfo(
        ServantCostumeItemInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  ServantLeaderInfo_o *notHaveServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    UserServantEntity__getTreasureDeviceInfo_40943792(userServantEntity, tdLv, tdMaxLv, 0LL);
  }
  else
  {
    notHaveServantEntity = this->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1BCAA3C(0LL, tdLv);
    ServantLeaderInfo__getTreasureDeviceInfo_41235708(notHaveServantEntity, tdLv, tdMaxLv, 0LL);
  }
}


void __fastcall ServantCostumeItemInfo__ModifyUserSvtData(
        ServantCostumeItemInfo_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.userServantEntity = userSvtEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)userSvtEntity, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall ServantCostumeItemInfo__SetNotHaveSevantData(
        ServantCostumeItemInfo_o *this,
        ServantLeaderInfo_o *svtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  this->fields.isCanRelease = 0;
  this->fields.userServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.notHaveServantEntity = svtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.notHaveServantEntity,
    (int64_t)svtData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.isCanRelease = 0;
  *(_DWORD *)&this->fields.isCostumeGet = 0;
  *(_QWORD *)&this->fields.allCostumeNum = 0LL;
  *(_QWORD *)&this->fields.notHavingCostumeNum = 0LL;
}


void __fastcall ServantCostumeItemInfo__SetUserSvtData(
        ServantCostumeItemInfo_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  ServantCostumeItemInfo_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x20
  __int64 v15; // x21
  int32_t v16; // w20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ServantLeaderInfo_o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct ServantLeaderInfo_o **p_notHaveServantEntity; // x19
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v4 = this;
  if ( (byte_4B19E5D & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity, method);
    this = (ServantCostumeItemInfo_o *)sub_1BCA7E0(&ServantLeaderInfo_TypeInfo, v5, v6);
    byte_4B19E5D = 1;
  }
  if ( !userSvtEntity )
    sub_1BCAA3C(this, userSvtEntity);
  if ( UserServantEntity__IsWithdrawal(userSvtEntity, 0LL) )
  {
    v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    *(_QWORD *)&v40.fields.currentCryptoKey = v15;
    *(_QWORD *)&v40.fields.fakeValue = v14;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v40, 0LL);
    v20 = (ServantLeaderInfo_o *)sub_1BCAA2C(ServantLeaderInfo_TypeInfo, v17, v18, v19);
    ServantLeaderInfo___ctor_41224104(v20, v16, 0, 1, 0LL);
    v4->fields.isCanRelease = 0;
    v4->fields.userServantEntity = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields, 0LL, v21, v22, v23, v24, v25, v26);
    v4->fields.notHaveServantEntity = v20;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v4->fields.notHaveServantEntity,
      (int64_t)v20,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v4->fields.isCanRelease = 0;
    *(_DWORD *)&v4->fields.isCostumeGet = 0;
    *(_QWORD *)&v4->fields.allCostumeNum = 0LL;
    *(_QWORD *)&v4->fields.notHavingCostumeNum = 0LL;
  }
  else
  {
    v4->fields.isCanRelease = 0;
    v4->fields.userServantEntity = userSvtEntity;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields, (int64_t)userSvtEntity, v8, v9, v10, v11, v12, v13);
    v4->fields.notHaveServantEntity = 0LL;
    p_notHaveServantEntity = &v4->fields.notHaveServantEntity;
    sub_1BCA784((PartyOrganizationUtility_o *)p_notHaveServantEntity, 0LL, v34, v35, v36, v37, v38, v39);
    *((_BYTE *)p_notHaveServantEntity + 14) = 0;
  }
}


int32_t __fastcall ServantCostumeItemInfo__get_AdjustAtk(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t *p_adjustAtk; // x8
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    p_adjustAtk = &userServantEntity->fields.adjustAtk;
  }
  else
  {
    notHaveServantEntity = this->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1BCAA3C(this, method);
    p_adjustAtk = &notHaveServantEntity->fields.adjustAtk;
  }
  return *p_adjustAtk;
}


int32_t __fastcall ServantCostumeItemInfo__get_AdjustHp(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t *p_adjustHp; // x8
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    p_adjustHp = &userServantEntity->fields.adjustHp;
  }
  else
  {
    notHaveServantEntity = this->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1BCAA3C(this, method);
    p_adjustHp = &notHaveServantEntity->fields.adjustHp;
  }
  return *p_adjustHp;
}


int32_t __fastcall ServantCostumeItemInfo__get_Atk(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t *p_atk; // x8
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    p_atk = &userServantEntity->fields.atk;
  }
  else
  {
    notHaveServantEntity = this->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1BCAA3C(this, method);
    p_atk = &notHaveServantEntity->fields.atk;
  }
  return *p_atk;
}


int32_t __fastcall ServantCostumeItemInfo__get_ClassId(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UserServantEntity_o *userServantEntity; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x19
  __int64 v16; // x20
  __int64 v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B19E5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19E5F = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getSvtClassId(userServantEntity, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  notHaveServantEntity = this->fields.notHaveServantEntity;
  if ( !notHaveServantEntity )
    goto LABEL_12;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v17 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v17;
  *(_QWORD *)&v18.fields.fakeValue = v16;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v15
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v13);
  }
  return (int32_t)Instance[5].klass;
}


int64_t __fastcall ServantCostumeItemInfo__get_CreatedAt(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.createdAt;
  else
    return 0LL;
}


int32_t __fastcall ServantCostumeItemInfo__get_ExceedCount(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t *p_exceedCount; // x8
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    p_exceedCount = &userServantEntity->fields.exceedCount;
  }
  else
  {
    notHaveServantEntity = this->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1BCAA3C(this, method);
    p_exceedCount = &notHaveServantEntity->fields.exceedCount;
  }
  return *p_exceedCount;
}


int32_t __fastcall ServantCostumeItemInfo__get_Hp(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t *p_hp; // x8
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    p_hp = &userServantEntity->fields.hp;
  }
  else
  {
    notHaveServantEntity = this->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1BCAA3C(this, method);
    p_hp = &notHaveServantEntity->fields.hp;
  }
  return *p_hp;
}


int32_t __fastcall ServantCostumeItemInfo__get_Level(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t *p_lv; // x8
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    p_lv = &userServantEntity->fields.lv;
  }
  else
  {
    notHaveServantEntity = this->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1BCAA3C(this, method);
    p_lv = &notHaveServantEntity->fields.lv;
  }
  return *p_lv;
}


int32_t __fastcall ServantCostumeItemInfo__get_MaxLevel(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  ServantLeaderInfo_o *notHaveServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getLevelMax(userServantEntity, 0LL);
  notHaveServantEntity = this->fields.notHaveServantEntity;
  if ( !notHaveServantEntity )
    sub_1BCAA3C(0LL, method);
  return ServantLeaderInfo__getLevelMax(notHaveServantEntity, 0LL);
}


int32_t __fastcall ServantCostumeItemInfo__get_MaxLimitCount(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UserServantEntity_o *userServantEntity; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x19
  __int64 v16; // x20
  __int64 v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B19E62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19E62 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getLimitCntMax(userServantEntity, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  notHaveServantEntity = this->fields.notHaveServantEntity;
  if ( !notHaveServantEntity )
    goto LABEL_12;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v17 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v18.fields.currentCryptoKey = v17;
  *(_QWORD *)&v18.fields.fakeValue = v16;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  if ( !v15
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v13);
  }
  return (int32_t)Instance[5].monitor;
}


ServantLeaderInfo_o *__fastcall ServantCostumeItemInfo__get_NotHaveSvtData(
        ServantCostumeItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.notHaveServantEntity;
}


int32_t __fastcall ServantCostumeItemInfo__get_NowLimitCount(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCostumeItemInfo_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v3 = this;
  if ( (byte_4B19E61 & 1) == 0 )
  {
    this = (ServantCostumeItemInfo_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B19E61 = 1;
  }
  userServantEntity = v3->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL);
  }
  else
  {
    notHaveServantEntity = v3->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1BCAA3C(this, method);
    return notHaveServantEntity->fields.limitCount;
  }
}


int32_t __fastcall ServantCostumeItemInfo__get_Rarity(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  ServantLeaderInfo_o *notHaveServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getRarity(userServantEntity, 0LL);
  notHaveServantEntity = this->fields.notHaveServantEntity;
  if ( !notHaveServantEntity )
    sub_1BCAA3C(0LL, method);
  return ServantLeaderInfo__getRarity(notHaveServantEntity, 0LL);
}


int32_t __fastcall ServantCostumeItemInfo__get_SvtId(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCostumeItemInfo_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v5; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  struct ServantLeaderInfo_o *notHaveServantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v3 = this;
  if ( (byte_4B19E5E & 1) == 0 )
  {
    this = (ServantCostumeItemInfo_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B19E5E = 1;
  }
  userServantEntity = v3->fields.userServantEntity;
  if ( userServantEntity )
  {
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v7 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  }
  else
  {
    notHaveServantEntity = v3->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1BCAA3C(this, method);
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v7 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.fakeValue;
  }
  if ( !v5->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v5, method);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
}


int32_t __fastcall ServantCostumeItemInfo__get_TreasureDeviceLv(
        ServantCostumeItemInfo_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t *p_treasureDeviceLv1; // x8
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    p_treasureDeviceLv1 = &userServantEntity->fields.treasureDeviceLv1;
  }
  else
  {
    notHaveServantEntity = this->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1BCAA3C(this, method);
    p_treasureDeviceLv1 = &notHaveServantEntity->fields.treasureDeviceLv;
  }
  return *p_treasureDeviceLv1;
}


UserServantEntity_o *__fastcall ServantCostumeItemInfo__get_UserServantEntity(
        ServantCostumeItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t __fastcall ServantCostumeItemInfo__get_UserSvtId(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_4B19E60 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B19E60 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    return 0LL;
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
}