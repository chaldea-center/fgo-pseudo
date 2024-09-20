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
    UserServantEntity__getTreasureDeviceInfo_40212352(userServantEntity, tdLv, tdMaxLv, 0LL);
  }
  else
  {
    notHaveServantEntity = this->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1B8880C(0LL, tdLv);
    ServantLeaderInfo__getTreasureDeviceInfo_40497284(notHaveServantEntity, tdLv, tdMaxLv, 0LL);
  }
}


void __fastcall ServantCostumeItemInfo__ModifyUserSvtData(
        ServantCostumeItemInfo_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.userServantEntity = userSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)userSvtEntity, (int32_t)method, v3);
}


void __fastcall ServantCostumeItemInfo__SetNotHaveSevantData(
        ServantCostumeItemInfo_o *this,
        ServantLeaderInfo_o *svtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t v6; // w2
  int32_t v7; // w3

  this->fields.isCanRelease = 0;
  this->fields.userServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, (int32_t)method, v3);
  this->fields.notHaveServantEntity = svtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.notHaveServantEntity, (int32_t)svtData, v6, v7);
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
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x20
  __int64 v8; // x21
  int32_t v9; // w20
  ServantLeaderInfo_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  struct ServantLeaderInfo_o **p_notHaveServantEntity; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_4A5ECF1 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantCostumeItemInfo_o *)sub_1B885B0(&ServantLeaderInfo_TypeInfo);
    byte_4A5ECF1 = 1;
  }
  if ( !userSvtEntity )
    sub_1B8880C(this, userSvtEntity);
  if ( UserServantEntity__IsWithdrawal(userSvtEntity, 0LL) )
  {
    v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v8;
    *(_QWORD *)&v18.fields.fakeValue = v7;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
    v10 = (ServantLeaderInfo_o *)sub_1B887FC(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_40485696(v10, v9, 0, 1, 0LL);
    v4->fields.isCanRelease = 0;
    v4->fields.userServantEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields, 0, v11, v12);
    v4->fields.notHaveServantEntity = v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.notHaveServantEntity, (int32_t)v10, v13, v14);
    v4->fields.isCanRelease = 0;
    *(_DWORD *)&v4->fields.isCostumeGet = 0;
    *(_QWORD *)&v4->fields.allCostumeNum = 0LL;
    *(_QWORD *)&v4->fields.notHavingCostumeNum = 0LL;
  }
  else
  {
    v4->fields.isCanRelease = 0;
    v4->fields.userServantEntity = userSvtEntity;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields, (int32_t)userSvtEntity, v5, v6);
    v4->fields.notHaveServantEntity = 0LL;
    p_notHaveServantEntity = &v4->fields.notHaveServantEntity;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_notHaveServantEntity, 0, v16, v17);
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
      sub_1B8880C(this, method);
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
      sub_1B8880C(this, method);
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
      sub_1B8880C(this, method);
    p_atk = &notHaveServantEntity->fields.atk;
  }
  return *p_atk;
}


int32_t __fastcall ServantCostumeItemInfo__get_ClassId(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  __int64 v9; // x20
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4A5ECF3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ECF3 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getSvtClassId(userServantEntity, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  notHaveServantEntity = this->fields.notHaveServantEntity;
  if ( !notHaveServantEntity )
    goto LABEL_12;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v10;
  *(_QWORD *)&v11.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(Instance, v6);
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
      sub_1B8880C(this, method);
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
      sub_1B8880C(this, method);
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
      sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, method);
  return ServantLeaderInfo__getLevelMax(notHaveServantEntity, 0LL);
}


int32_t __fastcall ServantCostumeItemInfo__get_MaxLimitCount(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  __int64 v9; // x20
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4A5ECF6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ECF6 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getLimitCntMax(userServantEntity, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  notHaveServantEntity = this->fields.notHaveServantEntity;
  if ( !notHaveServantEntity )
    goto LABEL_12;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v10;
  *(_QWORD *)&v11.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(Instance, v6);
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
  ServantCostumeItemInfo_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v2 = this;
  if ( (byte_4A5ECF5 & 1) == 0 )
  {
    this = (ServantCostumeItemInfo_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5ECF5 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( userServantEntity )
  {
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v4 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v8.fields.currentCryptoKey = v5;
    *(_QWORD *)&v8.fields.fakeValue = v4;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL);
  }
  else
  {
    notHaveServantEntity = v2->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, method);
  return ServantLeaderInfo__getRarity(notHaveServantEntity, 0LL);
}


int32_t __fastcall ServantCostumeItemInfo__get_SvtId(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  ServantCostumeItemInfo_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v4; // x0
  __int64 v5; // x19
  __int64 v6; // x20
  struct ServantLeaderInfo_o *notHaveServantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v2 = this;
  if ( (byte_4A5ECF2 & 1) == 0 )
  {
    this = (ServantCostumeItemInfo_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5ECF2 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( userServantEntity )
  {
    v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  }
  else
  {
    notHaveServantEntity = v2->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_1B8880C(this, method);
    v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v6 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.fakeValue;
  }
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
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
      sub_1B8880C(this, method);
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
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4A5ECF4 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5ECF4 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    return 0LL;
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v6, 0LL);
}