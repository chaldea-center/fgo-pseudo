void __fastcall SupportServantEquipServantItem___ctor(
        SupportServantEquipServantItem_o *this,
        UserServantEntity_o *entity,
        int64_t equipSvtId,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  SupportServantEquipServantItem_Fields *p_fields; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t nowLoadCount; // w22
  const MethodInfo *v26; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4A57BF0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57BF0 = 1;
  }
  v7 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0LL);
  this->fields.iconLabelInfo = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userServantEntity = entity;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)entity, v11, v12);
  if ( this->fields.userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    userServantEntity = p_fields->userServantEntity;
    if ( !p_fields->userServantEntity )
      goto LABEL_14;
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v20;
    *(_QWORD *)&v27.fields.fakeValue = v19;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27, 0LL);
    if ( !v18
      || (v21 = DataMasterBase_object__object__int___GetEntity(
                  v18,
                  (int32_t)Instance,
                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          this->fields.servantEntity = (struct ServantEntity_o *)v21,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v21, v22, v23),
          (Instance = (DataManager_o *)this->fields.userServantEntity) == 0LL)
      || (iconLabelInfo = this->fields.iconLabelInfo,
          nowLoadCount = Instance[1].fields.nowLoadCount,
          Instance = (DataManager_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL),
          !iconLabelInfo) )
    {
LABEL_14:
      sub_1B8880C(Instance, v16);
    }
    IconLabelInfo__Set_38140136(iconLabelInfo, 2, nowLoadCount, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  }
  else
  {
    this->fields.servantEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, v13, v14);
  }
  this->fields.oldEquipTargetId = equipSvtId;
  SupportServantEquipServantItem__SetEquipTarget(this, equipSvtId, v26);
}


bool __fastcall SupportServantEquipServantItem__GetNpInfo(
        SupportServantEquipServantItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57BF5 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A57BF5 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


int32_t __fastcall SupportServantEquipServantItem__GetTreasureDeviceLevelIcon(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    LODWORD(userServantEntity) = UserServantEntity__getTreasureDeviceLevelIcon(userServantEntity, 0LL);
  return (int)userServantEntity;
}


void __fastcall SupportServantEquipServantItem__SetEquipTarget(
        SupportServantEquipServantItem_o *this,
        int64_t equipUserSvtId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_equipUserSvtEntity; // x20
  struct ServantEntity_o **p_equipServantEntity; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  ServantStatusBattleListViewItem_c *v18; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x20
  Il2CppClass *v20; // x21
  Il2CppClass *v21; // x22
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4A57BF1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57BF1 = 1;
  }
  this->fields.equipTargetId = equipUserSvtId;
  this->fields.equipUserSvtEntity = 0LL;
  p_equipUserSvtEntity = (ServantStatusBattleListViewItem_o *)&this->fields.equipUserSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipUserSvtEntity, 0, (int32_t)method, v3);
  this->fields.equipServantEntity = 0LL;
  p_equipServantEntity = &this->fields.equipServantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_equipServantEntity, 0, v8, v9);
  if ( equipUserSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_17;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               equipUserSvtId,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
    sub_1B88554(p_equipUserSvtEntity, (int32_t)Entity, v13, v14);
    klass = p_equipUserSvtEntity->klass;
    if ( !p_equipUserSvtEntity->klass )
      goto LABEL_17;
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v25.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
        v18 = p_equipUserSvtEntity->klass;
        if ( p_equipUserSvtEntity->klass )
        {
          v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v21 = v18->_1.declaringType;
          v20 = v18->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v26.fields.currentCryptoKey = v21;
          *(_QWORD *)&v26.fields.fakeValue = v20;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v26, 0LL);
          if ( v19 )
          {
            v22 = DataMasterBase_object__object__int___GetEntity(
                    v19,
                    (int32_t)Instance,
                    (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            *p_equipServantEntity = (struct ServantEntity_o *)v22;
            sub_1B88554((ServantStatusBattleListViewItem_o *)p_equipServantEntity, (int32_t)v22, v23, v24);
            return;
          }
        }
      }
LABEL_17:
      sub_1B8880C(Instance, v11);
    }
  }
}


int32_t __fastcall SupportServantEquipServantItem__get_AdjustAtk(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipServantItem__get_AdjustHp(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.adjustHp;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipServantItem__get_Atk(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.atk;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipServantItem__get_EquipAtk(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.atk;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipServantItem__get_EquipHp(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.hp;
  else
    return 0;
}


int32_t __fastcall SupportServantEquipServantItem__get_EquipLimitCount(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4A57BF4 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57BF4 = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( !equipUserSvtEntity )
    return 0;
  v5 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v7, 0LL);
}


int32_t __fastcall SupportServantEquipServantItem__get_EquipLimitCountMax(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  if ( !this->fields.equipUserSvtEntity )
    return 0;
  equipServantEntity = this->fields.equipServantEntity;
  if ( !equipServantEntity )
    sub_1B8880C(this, method);
  return equipServantEntity->fields.limitMax;
}


UserServantEntity_o *__fastcall SupportServantEquipServantItem__get_EquipUserServant(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipUserSvtEntity;
}


int64_t __fastcall SupportServantEquipServantItem__get_EquipUserSvtId(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4A57BF3 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A57BF3 = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( !equipUserSvtEntity )
    return 0LL;
  v4 = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v6, 0LL);
}


int32_t __fastcall SupportServantEquipServantItem__get_Hp(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.hp;
  else
    return 0;
}


IconLabelInfo_o *__fastcall SupportServantEquipServantItem__get_IconInfo(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool __fastcall SupportServantEquipServantItem__get_IsEquip(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipUserSvtEntity != 0LL;
}


System_String_o *__fastcall SupportServantEquipServantItem__get_NameText(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A57BF2 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A57BF2 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19052/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0LL);
}


int64_t __fastcall SupportServantEquipServantItem__get_OldEquipUserSvtId(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.oldEquipTargetId;
}


UserServantEntity_o *__fastcall SupportServantEquipServantItem__get_UserServant(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}