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
    UserServantEntity__getTreasureDeviceInfo_21659764(userServantEntity, tdLv, tdMaxLv, 0LL);
  }
  else
  {
    notHaveServantEntity = this->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_B2C434(0LL, tdLv);
    ServantLeaderInfo__getTreasureDeviceInfo_29340648(notHaveServantEntity, tdLv, tdMaxLv, 0LL);
  }
}


void __fastcall ServantCostumeItemInfo__ModifyUserSvtData(
        ServantCostumeItemInfo_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userServantEntity = userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)userSvtEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantCostumeItemInfo__SetNotHaveSevantData(
        ServantCostumeItemInfo_o *this,
        ServantLeaderInfo_o *svtData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  this->fields.isCanRelease = 0;
  this->fields.userServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  this->fields.notHaveServantEntity = svtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.notHaveServantEntity,
    (System_Int32_array **)svtData,
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x20
  __int64 v13; // x21
  int32_t v14; // w20
  ServantLeaderInfo_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct ServantLeaderInfo_o **p_notHaveServantEntity; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v4 = this;
  if ( (byte_4189F39 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    this = (ServantCostumeItemInfo_o *)sub_B2C35C(&ServantLeaderInfo_TypeInfo, v5);
    byte_4189F39 = 1;
  }
  if ( !userSvtEntity )
    sub_B2C434(this, userSvtEntity);
  if ( UserServantEntity__IsWithdrawal(userSvtEntity, 0LL) )
  {
    v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v35.fields.currentCryptoKey = v13;
    *(_QWORD *)&v35.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v35, 0LL);
    v15 = (ServantLeaderInfo_o *)sub_B2C42C(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_29329736(v15, v14, 0, 1, 0LL);
    v4->fields.isCanRelease = 0;
    v4->fields.userServantEntity = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields, 0LL, v16, v17, v18, v19, v20, v21);
    v4->fields.notHaveServantEntity = v15;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v4->fields.notHaveServantEntity,
      (System_Int32_array **)v15,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    v4->fields.isCanRelease = 0;
    *(_DWORD *)&v4->fields.isCostumeGet = 0;
    *(_QWORD *)&v4->fields.allCostumeNum = 0LL;
    *(_QWORD *)&v4->fields.notHavingCostumeNum = 0LL;
  }
  else
  {
    v4->fields.isCanRelease = 0;
    v4->fields.userServantEntity = userSvtEntity;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v4->fields,
      (System_Int32_array **)userSvtEntity,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v4->fields.notHaveServantEntity = 0LL;
    p_notHaveServantEntity = &v4->fields.notHaveServantEntity;
    sub_B2C2F8((BattleServantConfConponent_o *)p_notHaveServantEntity, 0LL, v29, v30, v31, v32, v33, v34);
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
      sub_B2C434(this, method);
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
      sub_B2C434(this, method);
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
      sub_B2C434(this, method);
    p_atk = &notHaveServantEntity->fields.atk;
  }
  return *p_atk;
}


int32_t __fastcall ServantCostumeItemInfo__get_ClassId(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantEntity_o *userServantEntity; // x0
  void *Instance; // x0
  __int64 v9; // x1
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  __int64 v12; // x20
  __int64 v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4189F3B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4189F3B = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getSvtClassId(userServantEntity, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  notHaveServantEntity = this->fields.notHaveServantEntity;
  if ( !notHaveServantEntity )
    goto LABEL_13;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v13 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v13;
  *(_QWORD *)&v14.fields.fakeValue = v12;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v14, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_B2C434(Instance, v9);
  }
  return *((_DWORD *)Instance + 20);
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
      sub_B2C434(this, method);
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
      sub_B2C434(this, method);
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
      sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
  return ServantLeaderInfo__getLevelMax(notHaveServantEntity, 0LL);
}


int32_t __fastcall ServantCostumeItemInfo__get_MaxLimitCount(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantEntity_o *userServantEntity; // x0
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  __int64 v12; // x20
  __int64 v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4189F3E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4189F3E = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getLimitCntMax(userServantEntity, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  notHaveServantEntity = this->fields.notHaveServantEntity;
  if ( !notHaveServantEntity )
    goto LABEL_13;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v13 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v13;
  *(_QWORD *)&v14.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v14, 0LL);
  if ( !v11
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_B2C434(Instance, v9);
  }
  return Instance->fields.nowLoadCount;
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
  if ( (byte_4189F3D & 1) == 0 )
  {
    this = (ServantCostumeItemInfo_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4189F3D = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( userServantEntity )
  {
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v4 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v8.fields.currentCryptoKey = v5;
    *(_QWORD *)&v8.fields.fakeValue = v4;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v8, 0LL);
  }
  else
  {
    notHaveServantEntity = v2->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
  return ServantLeaderInfo__getRarity(notHaveServantEntity, 0LL);
}


int32_t __fastcall ServantCostumeItemInfo__get_SvtId(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  ServantCostumeItemInfo_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v2 = this;
  if ( (byte_4189F3A & 1) == 0 )
  {
    this = (ServantCostumeItemInfo_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4189F3A = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( userServantEntity )
  {
    v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v4 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  }
  else
  {
    notHaveServantEntity = v2->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_B2C434(this, method);
    v5 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.currentCryptoKey;
    v4 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.fakeValue;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v8, 0LL);
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
      sub_B2C434(this, method);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_4189F3C & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4189F3C = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    return 0LL;
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v6, 0LL);
}