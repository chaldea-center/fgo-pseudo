void __fastcall SupportServantEquipServantItem___ctor(
        SupportServantEquipServantItem_o *this,
        UserServantEntity_o *entity,
        int64_t equipSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  IconLabelInfo_o *v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  SupportServantEquipServantItem_Fields *p_fields; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x21
  __int64 v39; // x22
  __int64 v40; // x23
  Il2CppObject *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t nowLoadCount; // w22
  const MethodInfo *v50; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4B12BF3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, entity, equipSvtId);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B12BF3 = 1;
  }
  v15 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, entity, equipSvtId, method);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields.iconLabelInfo = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userServantEntity = entity;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)entity, v23, v24, v25, v26, v27, v28);
  if ( this->fields.userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    userServantEntity = p_fields->userServantEntity;
    if ( !p_fields->userServantEntity )
      goto LABEL_14;
    v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v40 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36);
    *(_QWORD *)&v51.fields.currentCryptoKey = v40;
    *(_QWORD *)&v51.fields.fakeValue = v39;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v51, 0LL);
    if ( !v38
      || (v41 = DataMasterBase_object__object__int___GetEntity(
                  v38,
                  (int32_t)Instance,
                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          this->fields.servantEntity = (struct ServantEntity_o *)v41,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.servantEntity,
            (int64_t)v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47),
          (Instance = (DataManager_o *)this->fields.userServantEntity) == 0LL)
      || (iconLabelInfo = this->fields.iconLabelInfo,
          nowLoadCount = Instance[1].fields.nowLoadCount,
          Instance = (DataManager_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL),
          !iconLabelInfo) )
    {
LABEL_14:
      sub_1BCAA3C(Instance, v36);
    }
    IconLabelInfo__Set_38850420(iconLabelInfo, 2, nowLoadCount, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  }
  else
  {
    this->fields.servantEntity = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantEntity, 0LL, v29, v30, v31, v32, v33, v34);
  }
  this->fields.oldEquipTargetId = equipSvtId;
  SupportServantEquipServantItem__SetEquipTarget(this, equipSvtId, v50);
}


bool __fastcall SupportServantEquipServantItem__GetNpInfo(
        SupportServantEquipServantItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B12BF8 & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, tdInfo, method);
    byte_4B12BF8 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v8 = (TreasureDvcInfo_o *)sub_1BCAA2C(TreasureDvcInfo_TypeInfo, tdInfo, method, v3);
  TreasureDvcInfo___ctor(v8, 0LL);
  *tdInfo = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  PartyOrganizationUtility_o *p_equipUserSvtEntity; // x20
  struct ServantEntity_o **p_equipServantEntity; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *Instance; // x0
  __int64 v29; // x1
  Il2CppObject *Entity; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  PartyOrganizationUtility_c *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  PartyOrganizationUtility_c *v40; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x20
  Il2CppClass *v42; // x21
  Il2CppClass *v43; // x22
  Il2CppObject *v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4B12BF4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, equipUserSvtId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B12BF4 = 1;
  }
  this->fields.equipTargetId = equipUserSvtId;
  this->fields.equipUserSvtEntity = 0LL;
  p_equipUserSvtEntity = (PartyOrganizationUtility_o *)&this->fields.equipUserSvtEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipUserSvtEntity, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.equipServantEntity = 0LL;
  p_equipServantEntity = &this->fields.equipServantEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)p_equipServantEntity, 0LL, v22, v23, v24, v25, v26, v27);
  if ( equipUserSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_17;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               equipUserSvtId,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity->klass = (PartyOrganizationUtility_c *)Entity;
    sub_1BCA784(p_equipUserSvtEntity, (int64_t)Entity, v31, v32, v33, v34, v35, v36);
    klass = p_equipUserSvtEntity->klass;
    if ( !p_equipUserSvtEntity->klass )
      goto LABEL_17;
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
    *(_QWORD *)&v51.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v51.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v51, 0LL) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        v40 = p_equipUserSvtEntity->klass;
        if ( p_equipUserSvtEntity->klass )
        {
          v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v43 = v40->_1.declaringType;
          v42 = v40->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
          *(_QWORD *)&v52.fields.currentCryptoKey = v43;
          *(_QWORD *)&v52.fields.fakeValue = v42;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52, 0LL);
          if ( v41 )
          {
            v44 = DataMasterBase_object__object__int___GetEntity(
                    v41,
                    (int32_t)Instance,
                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            *p_equipServantEntity = (struct ServantEntity_o *)v44;
            sub_1BCA784((PartyOrganizationUtility_o *)p_equipServantEntity, (int64_t)v44, v45, v46, v47, v48, v49, v50);
            return;
          }
        }
      }
LABEL_17:
      sub_1BCAA3C(Instance, v29);
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
  __int64 v2; // x2
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4B12BF7 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B12BF7 = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( !equipUserSvtEntity )
    return 0;
  v6 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_4B12BF6 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B12BF6 = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( !equipUserSvtEntity )
    return 0LL;
  v5 = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B12BF5 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v4, v5);
    byte_4B12BF5 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19249/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v12.fields.currentCryptoKey = v9;
    *(_QWORD *)&v12.fields.fakeValue = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
  }
  else
  {
    v10 = -1;
  }
  return ServantEntity__getName(servantEntity, v10, -1, 0LL);
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