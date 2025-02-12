void __fastcall SupportServantEquipServantItem___ctor(
        SupportServantEquipServantItem_o *this,
        UserServantEntity_o *entity,
        int64_t equipSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  IconLabelInfo_o *v11; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  SupportServantEquipServantItem_Fields *p_fields; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  __int64 v35; // x22
  __int64 v36; // x23
  Il2CppObject *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t nowLoadCount; // w22
  const MethodInfo *v46; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4BC4437 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, entity);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1C1ABD4(&IconLabelInfo_TypeInfo, v8);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BC4437 = 1;
  }
  v11 = (IconLabelInfo_o *)sub_1C1AE20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0LL);
  this->fields.iconLabelInfo = v11;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userServantEntity = entity;
  p_fields = &this->fields;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)entity, v19, v20, v21, v22, v23, v24);
  if ( this->fields.userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
    userServantEntity = p_fields->userServantEntity;
    if ( !p_fields->userServantEntity )
      goto LABEL_14;
    v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v36 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v35 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v47.fields.currentCryptoKey = v36;
    *(_QWORD *)&v47.fields.fakeValue = v35;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v47, 0LL);
    if ( !v34
      || (v37 = DataMasterBase_object__object__int___GetEntity(
                  v34,
                  (int32_t)Instance,
                  (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          this->fields.servantEntity = (struct ServantEntity_o *)v37,
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields.servantEntity,
            (int64_t)v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43),
          (Instance = (DataManager_o *)this->fields.userServantEntity) == 0LL)
      || (iconLabelInfo = this->fields.iconLabelInfo,
          nowLoadCount = Instance[1].fields.nowLoadCount,
          Instance = (DataManager_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL),
          !iconLabelInfo) )
    {
LABEL_14:
      sub_1C1AE30(Instance, v32);
    }
    IconLabelInfo__Set_39335328(iconLabelInfo, 2, nowLoadCount, (int32_t)Instance, 0, 0, 0, 0, 0LL);
  }
  else
  {
    this->fields.servantEntity = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.servantEntity, 0LL, v25, v26, v27, v28, v29, v30);
  }
  this->fields.oldEquipTargetId = equipSvtId;
  SupportServantEquipServantItem__SetEquipTarget(this, equipSvtId, v46);
}


bool __fastcall SupportServantEquipServantItem__GetNpInfo(
        SupportServantEquipServantItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BC443C & 1) == 0 )
  {
    sub_1C1ABD4(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4BC443C = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1C1AE20(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1C1AB78((PartyOrganizationUtility_o *)tdInfo, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  PartyOrganizationUtility_o *p_equipUserSvtEntity; // x20
  struct ServantEntity_o **p_equipServantEntity; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *Entity; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  PartyOrganizationUtility_c *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  PartyOrganizationUtility_c *v35; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x20
  Il2CppClass *v37; // x21
  Il2CppClass *v38; // x22
  Il2CppObject *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4BC4438 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, equipUserSvtId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BC4438 = 1;
  }
  this->fields.equipTargetId = equipUserSvtId;
  this->fields.equipUserSvtEntity = 0LL;
  p_equipUserSvtEntity = (PartyOrganizationUtility_o *)&this->fields.equipUserSvtEntity;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.equipUserSvtEntity, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.equipServantEntity = 0LL;
  p_equipServantEntity = &this->fields.equipServantEntity;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_equipServantEntity, 0LL, v17, v18, v19, v20, v21, v22);
  if ( equipUserSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_17;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               equipUserSvtId,
               (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity->klass = (PartyOrganizationUtility_c *)Entity;
    sub_1C1AB78(p_equipUserSvtEntity, (int64_t)Entity, v26, v27, v28, v29, v30, v31);
    klass = p_equipUserSvtEntity->klass;
    if ( !p_equipUserSvtEntity->klass )
      goto LABEL_17;
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v46.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v46.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v46, 0LL) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
        v35 = p_equipUserSvtEntity->klass;
        if ( p_equipUserSvtEntity->klass )
        {
          v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v38 = v35->_1.declaringType;
          v37 = v35->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v47.fields.currentCryptoKey = v38;
          *(_QWORD *)&v47.fields.fakeValue = v37;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v47, 0LL);
          if ( v36 )
          {
            v39 = DataMasterBase_object__object__int___GetEntity(
                    v36,
                    (int32_t)Instance,
                    (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            *p_equipServantEntity = (struct ServantEntity_o *)v39;
            sub_1C1AB78((PartyOrganizationUtility_o *)p_equipServantEntity, (int64_t)v39, v40, v41, v42, v43, v44, v45);
            return;
          }
        }
      }
LABEL_17:
      sub_1C1AE30(Instance, v24);
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

  if ( (byte_4BC443B & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BC443B = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v7, 0LL);
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
    sub_1C1AE30(this, method);
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

  if ( (byte_4BC443A & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4BC443A = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v6, 0LL);
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
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4BC4439 & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_19365/*"error"*/, v3);
    byte_4BC4439 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19365/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(servantEntity, v8, -1, 0, 0LL);
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