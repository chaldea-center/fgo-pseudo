void SupportServantEquipServantItem___ctor(
        SupportServantEquipServantItem_o *this,
        UserServantEntity_o *entity,
        int64_t equipSvtId,
        const MethodInfo *method)
{
  IconLabelInfo_o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  SupportServantEquipServantItem_Fields *p_fields; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  __int64 v31; // x22
  __int64 v32; // x23
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t nowLoadCount; // w22
  const MethodInfo *v42; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4D28E75 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&IconLabelInfo_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28E75 = 1;
  }
  v7 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v7, 0);
  this->fields.iconLabelInfo = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userServantEntity = entity;
  p_fields = &this->fields;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)entity, v15, v16, v17, v18, v19, v20);
  if ( this->fields.userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
    userServantEntity = p_fields->userServantEntity;
    if ( !p_fields->userServantEntity )
      goto LABEL_14;
    v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v32 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v31 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v32;
    *(_QWORD *)&v43.fields.fakeValue = v31;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v43, 0);
    if ( !v30
      || (v33 = DataMasterBase_object__object__int___GetEntity(
                  v30,
                  (int32_t)Instance,
                  (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          this->fields.servantEntity = (struct ServantEntity_o *)v33,
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
            (int32_t)v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39),
          (Instance = (DataManager_o *)this->fields.userServantEntity) == 0)
      || (iconLabelInfo = this->fields.iconLabelInfo,
          nowLoadCount = Instance[1].fields.nowLoadCount,
          Instance = (DataManager_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0),
          !iconLabelInfo) )
    {
LABEL_14:
      sub_1C942F0(Instance, v28);
    }
    IconLabelInfo__Set_41670428(iconLabelInfo, 2, nowLoadCount, (int32_t)Instance, 0, 0, 0, 0, 0, 0);
  }
  else
  {
    this->fields.servantEntity = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, 0, v21, v22, v23, v24, v25, v26);
  }
  this->fields.oldEquipTargetId = equipSvtId;
  SupportServantEquipServantItem__SetEquipTarget(this, equipSvtId, v42);
}


bool SupportServantEquipServantItem__GetNpInfo(
        SupportServantEquipServantItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D28E7A & 1) == 0 )
  {
    sub_1C94098(&TreasureDvcInfo_TypeInfo);
    byte_4D28E7A = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0);
  v7 = (TreasureDvcInfo_o *)sub_1C942E4(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  *tdInfo = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


int32_t SupportServantEquipServantItem__GetTreasureDeviceLevelIcon(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    LODWORD(userServantEntity) = UserServantEntity__getTreasureDeviceLevelIcon(userServantEntity, 0);
  return (int)userServantEntity;
}


void SupportServantEquipServantItem__SetEquipTarget(
        SupportServantEquipServantItem_o *this,
        int64_t equipUserSvtId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_equipUserSvtEntity; // x20
  struct ServantEntity_o **p_equipServantEntity; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *Entity; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  GrandQuestFolderBoardItem_c *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  GrandQuestFolderBoardItem_c *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x20
  Il2CppClass *v32; // x21
  Il2CppClass *v33; // x22
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4D28E76 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28E76 = 1;
  }
  this->fields.equipTargetId = equipUserSvtId;
  this->fields.equipUserSvtEntity = 0;
  p_equipUserSvtEntity = (GrandQuestFolderBoardItem_o *)&this->fields.equipUserSvtEntity;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.equipUserSvtEntity, 0, (int32_t)method, v3, v4, v5, v6, v7);
  this->fields.equipServantEntity = 0;
  p_equipServantEntity = &this->fields.equipServantEntity;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_equipServantEntity, 0, v12, v13, v14, v15, v16, v17);
  if ( equipUserSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_17;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               equipUserSvtId,
               (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity->klass = (GrandQuestFolderBoardItem_c *)Entity;
    sub_1C9403C(p_equipUserSvtEntity, (int32_t)Entity, v21, v22, v23, v24, v25, v26);
    klass = p_equipUserSvtEntity->klass;
    if ( !p_equipUserSvtEntity->klass )
      goto LABEL_17;
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v41.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v41.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v41, 0) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
        v30 = p_equipUserSvtEntity->klass;
        if ( p_equipUserSvtEntity->klass )
        {
          v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v33 = v30->_1.declaringType;
          v32 = v30->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v42.fields.currentCryptoKey = v33;
          *(_QWORD *)&v42.fields.fakeValue = v32;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v42, 0);
          if ( v31 )
          {
            v34 = DataMasterBase_object__object__int___GetEntity(
                    v31,
                    (int32_t)Instance,
                    (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            *p_equipServantEntity = (struct ServantEntity_o *)v34;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)p_equipServantEntity, (int32_t)v34, v35, v36, v37, v38, v39, v40);
            return;
          }
        }
      }
LABEL_17:
      sub_1C942F0(Instance, v19);
    }
  }
}


int32_t SupportServantEquipServantItem__get_AdjustAtk(SupportServantEquipServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t SupportServantEquipServantItem__get_AdjustHp(SupportServantEquipServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.adjustHp;
  else
    return 0;
}


int32_t SupportServantEquipServantItem__get_Atk(SupportServantEquipServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.atk;
  else
    return 0;
}


int32_t SupportServantEquipServantItem__get_AtkBoostValue(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    LODWORD(userServantEntity) = UserServantEntity__get_AtkBoostValue(userServantEntity, 0);
  return (int)userServantEntity;
}


int32_t SupportServantEquipServantItem__get_EquipAtk(SupportServantEquipServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.atk;
  else
    return 0;
}


int32_t SupportServantEquipServantItem__get_EquipHp(SupportServantEquipServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.hp;
  else
    return 0;
}


int32_t SupportServantEquipServantItem__get_EquipLimitCount(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4D28E79 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D28E79 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v7, 0);
}


int32_t SupportServantEquipServantItem__get_EquipLimitCountMax(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  if ( !this->fields.equipUserSvtEntity )
    return 0;
  equipServantEntity = this->fields.equipServantEntity;
  if ( !equipServantEntity )
    sub_1C942F0(this, method);
  return equipServantEntity->fields.limitMax;
}


UserServantEntity_o *SupportServantEquipServantItem__get_EquipUserServant(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipUserSvtEntity;
}


int64_t SupportServantEquipServantItem__get_EquipUserSvtId(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4D28E78 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D28E78 = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( !equipUserSvtEntity )
    return 0;
  v4 = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v6, 0);
}


int32_t SupportServantEquipServantItem__get_Hp(SupportServantEquipServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.hp;
  else
    return 0;
}


int32_t SupportServantEquipServantItem__get_HpBoostValue(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    LODWORD(userServantEntity) = UserServantEntity__get_HpBoostValue(userServantEntity, 0);
  return (int)userServantEntity;
}


IconLabelInfo_o *SupportServantEquipServantItem__get_IconInfo(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool SupportServantEquipServantItem__get_IsEquip(SupportServantEquipServantItem_o *this, const MethodInfo *method)
{
  return this->fields.equipUserSvtEntity != 0;
}


System_String_o *SupportServantEquipServantItem__get_NameText(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4D28E77 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&StringLiteral_19212/*"error"*/);
    byte_4D28E77 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19212/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v9, 0);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0, 0);
}


int64_t SupportServantEquipServantItem__get_OldEquipUserSvtId(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.oldEquipTargetId;
}


UserServantEntity_o *SupportServantEquipServantItem__get_UserServant(
        SupportServantEquipServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}