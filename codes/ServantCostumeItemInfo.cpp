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
    UserServantEntity__getTreasureDeviceInfo_21848072(userServantEntity, tdLv, tdMaxLv, 0LL);
  }
  else
  {
    notHaveServantEntity = this->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_B5D69C(0LL, tdLv);
    ServantLeaderInfo__getTreasureDeviceInfo_29359808(notHaveServantEntity, tdLv, tdMaxLv, 0LL);
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
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  this->fields.notHaveServantEntity = svtData;
  sub_B5D560(
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
  __int64 v3; // x3
  ServantCostumeItemInfo_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x20
  __int64 v16; // x21
  int32_t v17; // w20
  ServantLeaderInfo_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct ServantLeaderInfo_o **p_notHaveServantEntity; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v5 = this;
  if ( (byte_42EB8E5 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)userSvtEntity, (_DWORD)method, v3);
    this = (ServantCostumeItemInfo_o *)sub_B5D5C4(&ServantLeaderInfo_TypeInfo, v6, v7, v8);
    byte_42EB8E5 = 1;
  }
  if ( !userSvtEntity )
    sub_B5D69C(this, userSvtEntity);
  if ( UserServantEntity__IsWithdrawal(userSvtEntity, 0LL) )
  {
    v16 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v38.fields.currentCryptoKey = v16;
    *(_QWORD *)&v38.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v38, 0LL);
    v18 = (ServantLeaderInfo_o *)sub_B5D694(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_29348816(v18, v17, 0, 1, 0LL);
    v5->fields.isCanRelease = 0;
    v5->fields.userServantEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v5->fields, 0LL, v19, v20, v21, v22, v23, v24);
    v5->fields.notHaveServantEntity = v18;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v5->fields.notHaveServantEntity,
      (System_Int32_array **)v18,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v5->fields.isCanRelease = 0;
    *(_DWORD *)&v5->fields.isCostumeGet = 0;
    *(_QWORD *)&v5->fields.allCostumeNum = 0LL;
    *(_QWORD *)&v5->fields.notHavingCostumeNum = 0LL;
  }
  else
  {
    v5->fields.isCanRelease = 0;
    v5->fields.userServantEntity = userSvtEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v5->fields,
      (System_Int32_array **)userSvtEntity,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v5->fields.notHaveServantEntity = 0LL;
    p_notHaveServantEntity = &v5->fields.notHaveServantEntity;
    sub_B5D560((BattleServantConfConponent_o *)p_notHaveServantEntity, 0LL, v32, v33, v34, v35, v36, v37);
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
      sub_B5D69C(this, method);
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
      sub_B5D69C(this, method);
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
      sub_B5D69C(this, method);
    p_atk = &notHaveServantEntity->fields.atk;
  }
  return *p_atk;
}


int32_t __fastcall ServantCostumeItemInfo__get_ClassId(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UserServantEntity_o *userServantEntity; // x0
  void *Instance; // x0
  __int64 v17; // x1
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  __int64 v20; // x20
  __int64 v21; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_42EB8E7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB8E7 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getSvtClassId(userServantEntity, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  notHaveServantEntity = this->fields.notHaveServantEntity;
  if ( !notHaveServantEntity )
    goto LABEL_13;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v21 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v21;
  *(_QWORD *)&v22.fields.fakeValue = v20;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v22, 0LL);
  if ( !v19
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v19,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(Instance, v17);
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
      sub_B5D69C(this, method);
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
      sub_B5D69C(this, method);
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
      sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
  return ServantLeaderInfo__getLevelMax(notHaveServantEntity, 0LL);
}


int32_t __fastcall ServantCostumeItemInfo__get_MaxLimitCount(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UserServantEntity_o *userServantEntity; // x0
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  __int64 v20; // x20
  __int64 v21; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_42EB8EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB8EA = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getLimitCntMax(userServantEntity, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  notHaveServantEntity = this->fields.notHaveServantEntity;
  if ( !notHaveServantEntity )
    goto LABEL_13;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v21 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v21;
  *(_QWORD *)&v22.fields.fakeValue = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v22, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(Instance, v17);
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
  int v2; // w2
  __int64 v3; // x3
  ServantCostumeItemInfo_o *v4; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x19
  __int64 v7; // x20
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_42EB8E9 & 1) == 0 )
  {
    this = (ServantCostumeItemInfo_o *)sub_B5D5C4(
                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                         (_DWORD)method,
                                         v2,
                                         v3);
    byte_42EB8E9 = 1;
  }
  userServantEntity = v4->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v10, 0LL);
  }
  else
  {
    notHaveServantEntity = v4->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
  return ServantLeaderInfo__getRarity(notHaveServantEntity, 0LL);
}


int32_t __fastcall ServantCostumeItemInfo__get_SvtId(ServantCostumeItemInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantCostumeItemInfo_o *v4; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x19
  __int64 v7; // x20
  struct ServantLeaderInfo_o *notHaveServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_42EB8E6 & 1) == 0 )
  {
    this = (ServantCostumeItemInfo_o *)sub_B5D5C4(
                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                         (_DWORD)method,
                                         v2,
                                         v3);
    byte_42EB8E6 = 1;
  }
  userServantEntity = v4->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  }
  else
  {
    notHaveServantEntity = v4->fields.notHaveServantEntity;
    if ( !notHaveServantEntity )
      sub_B5D69C(this, method);
    v7 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&notHaveServantEntity->fields.svtId.fields.fakeValue;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v10, 0LL);
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
      sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  if ( (byte_42EB8E8 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB8E8 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    return 0LL;
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v8, 0LL);
}