void EquipGraphServantItem___ctor(
        EquipGraphServantItem_o *this,
        PartyOrganizationListViewItem_o *baseItem,
        int32_t type,
        bool isTempGrand,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 MaxLevel; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UserServantEntity_o *userServantEntity; // x1
  bool v18; // w23
  struct ServantEntity_o *servantEntity; // x1
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t MainAtk; // w0
  IconLabelInfo_o *v24; // x22
  int32_t Level; // w20

  if ( (byte_4C37D02 & 1) == 0 )
  {
    sub_1C32C20(&IconLabelInfo_TypeInfo);
    byte_4C37D02 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconLabelInfo, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.baseItem = baseItem;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)baseItem, v12, v13);
  if ( !baseItem )
    goto LABEL_6;
  userServantEntity = baseItem->fields.userServantEntity;
  v18 = isTempGrand;
  this->fields.userServantEntity = userServantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v15, v16);
  servantEntity = baseItem->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)p_servantEntity, (int32_t)servantEntity, v21, v22);
  p_servantEntity[2] = *(struct ServantEntity_o **)&baseItem->fields.classId;
  *((_DWORD *)p_servantEntity + 6) = PartyOrganizationListViewItem__get_MainCost(baseItem, 0);
  *((_DWORD *)p_servantEntity + 7) = PartyOrganizationListViewItem__get_MainHp(baseItem, 0);
  MainAtk = PartyOrganizationListViewItem__get_MainAtk(baseItem, 0);
  v24 = (IconLabelInfo_o *)p_servantEntity[1];
  *((_DWORD *)p_servantEntity + 8) = MainAtk;
  *((_DWORD *)p_servantEntity + 12) = type;
  *((_BYTE *)p_servantEntity + 72) = v18;
  Level = PartyOrganizationListViewItem__get_Level(baseItem, 0);
  MaxLevel = PartyOrganizationListViewItem__get_MaxLevel(baseItem, 0);
  if ( !v24 )
LABEL_6:
    sub_1C32E7C(MaxLevel);
  IconLabelInfo__Set_40818388(v24, 2, Level, MaxLevel, 0, 0, 0, 0, 0, 0);
}


bool EquipGraphServantItem__GetNpInfo(
        EquipGraphServantItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C37D0A & 1) == 0 )
  {
    sub_1C32C20(&TreasureDvcInfo_TypeInfo);
    byte_4C37D0A = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0);
  v7 = (TreasureDvcInfo_o *)sub_1C32E6C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  *tdInfo = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


QuestRestrictionInfo_o *EquipGraphServantItem__GetQuestRestrictionInfo(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  if ( !baseItem )
    sub_1C32E7C(this);
  return baseItem->fields.questRestrictionInfo;
}


int32_t EquipGraphServantItem__GetTreasureDeviceLevelIcon(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    LODWORD(userServantEntity) = UserServantEntity__getTreasureDeviceLevelIcon(userServantEntity, 0);
  return (int)userServantEntity;
}


void EquipGraphServantItem__SetEquipTarget(
        EquipGraphServantItem_o *this,
        int64_t equipUserSvtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_equipUserSvtEntity; // x20
  struct ServantEntity_o **p_equipServantEntity; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CGThumbnailListItem_c *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  CGThumbnailListItem_c *v17; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x20
  Il2CppClass *v19; // x21
  Il2CppClass *v20; // x22
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4C37D03 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37D03 = 1;
  }
  this->fields.equipTargetId = equipUserSvtId;
  this->fields.equipUserSvtEntity = 0;
  p_equipUserSvtEntity = (CGThumbnailListItem_o *)&this->fields.equipUserSvtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserSvtEntity, 0, (int32_t)method, v3);
  this->fields.equipServantEntity = 0;
  p_equipServantEntity = &this->fields.equipServantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)p_equipServantEntity, 0, v8, v9);
  if ( equipUserSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_17;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               equipUserSvtId,
               (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity->klass = (CGThumbnailListItem_c *)Entity;
    sub_1C32BC4(p_equipUserSvtEntity, (int32_t)Entity, v12, v13);
    klass = p_equipUserSvtEntity->klass;
    if ( !p_equipUserSvtEntity->klass )
      goto LABEL_17;
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v24.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v24.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v24, 0) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
        v17 = p_equipUserSvtEntity->klass;
        if ( p_equipUserSvtEntity->klass )
        {
          v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v20 = v17->_1.declaringType;
          v19 = v17->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v25.fields.currentCryptoKey = v20;
          *(_QWORD *)&v25.fields.fakeValue = v19;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v25, 0);
          if ( v18 )
          {
            v21 = DataMasterBase_object__object__int___GetEntity(
                    v18,
                    (int32_t)Instance,
                    (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            *p_equipServantEntity = (struct ServantEntity_o *)v21;
            sub_1C32BC4((CGThumbnailListItem_o *)p_equipServantEntity, (int32_t)v21, v22, v23);
            return;
          }
        }
      }
LABEL_17:
      sub_1C32E7C(Instance);
    }
  }
}


int32_t EquipGraphServantItem__get_AdjustAtk(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t EquipGraphServantItem__get_AdjustHp(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.adjustHp;
  else
    return 0;
}


int32_t EquipGraphServantItem__get_Atk(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.atk;
}


int32_t EquipGraphServantItem__get_AtkBoostValue(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  int32_t AtkBoostValue; // w19
  UserServantEntity_o *v5; // x20
  UserServantGrandInfo_o *v6; // x0

  if ( (byte_4C37D06 & 1) == 0 )
  {
    sub_1C32C20(&UserServantGrandInfo_TypeInfo);
    byte_4C37D06 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    AtkBoostValue = UserServantEntity__get_AtkBoostValue(userServantEntity, 0);
  else
    AtkBoostValue = 0;
  if ( this->fields._IsTempGrand_k__BackingField )
  {
    v5 = this->fields.userServantEntity;
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    v6 = UserServantGrandInfo__Make(v5, 1, 0);
    if ( !v6 )
      sub_1C32E7C(0);
    AtkBoostValue += UserServantGrandInfo__get_AddedAtk(v6, 0);
  }
  return AtkBoostValue;
}


System_String_o *EquipGraphServantItem__get_ClassName(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  System_String_o **p_monitor; // x8
  LocalizationManager_c *v6; // x0

  if ( (byte_4C37D05 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37D05 = 1;
  }
  if ( this->fields.classId < 1 )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.classId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( Entity )
  {
    p_monitor = (System_String_o **)&Entity[1].monitor;
  }
  else
  {
LABEL_19:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C32D4C )
    {
      sub_1C32C20(&LocalizationManager_TypeInfo);
      byte_4C32D4C = 1;
    }
    v6 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = LocalizationManager_TypeInfo;
    }
    p_monitor = &v6->static_fields->unknownNameText;
  }
  return *p_monitor;
}


int32_t EquipGraphServantItem__get_Cost(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  if ( this->fields.servantEntity )
    return this->fields.cost;
  else
    return 0;
}


int32_t EquipGraphServantItem__get_EquipAtk(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.atk;
  else
    return 0;
}


int32_t EquipGraphServantItem__get_EquipCost(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity && !this->fields.equipType )
    return equipServantEntity->fields.cost;
  else
    return 0;
}


int32_t EquipGraphServantItem__get_EquipHp(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.hp;
  else
    return 0;
}


int32_t EquipGraphServantItem__get_EquipLimitCount(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4C37D09 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C37D09 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v7, 0);
}


int32_t EquipGraphServantItem__get_EquipLimitCountMax(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return equipServantEntity->fields.limitMax;
  else
    return 0;
}


UserServantEntity_o *EquipGraphServantItem__get_EquipUserServant(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipUserSvtEntity;
}


int64_t EquipGraphServantItem__get_EquipUserSvtId(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int128 v4; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+40h] [xbp-40h]

  if ( (byte_4C37D08 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C37D08 = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    v4 = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v8.fields.fakeValue = v4;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v7, 0, 0);
    v8 = v7;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v6, 0);
}


int32_t EquipGraphServantItem__get_Hp(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.hp;
}


int32_t EquipGraphServantItem__get_HpBoostValue(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  int32_t HpBoostValue; // w19
  UserServantEntity_o *v5; // x20
  UserServantGrandInfo_o *v6; // x0

  if ( (byte_4C37D07 & 1) == 0 )
  {
    sub_1C32C20(&UserServantGrandInfo_TypeInfo);
    byte_4C37D07 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    HpBoostValue = UserServantEntity__get_HpBoostValue(userServantEntity, 0);
  else
    HpBoostValue = 0;
  if ( this->fields._IsTempGrand_k__BackingField )
  {
    v5 = this->fields.userServantEntity;
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    v6 = UserServantGrandInfo__Make(v5, 1, 0);
    if ( !v6 )
      sub_1C32E7C(0);
    HpBoostValue += UserServantGrandInfo__get_AddedHp(v6, 0);
  }
  return HpBoostValue;
}


IconLabelInfo_o *EquipGraphServantItem__get_IconInfo(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool EquipGraphServantItem__get_IsEquip(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.equipUserSvtEntity != 0;
}


bool EquipGraphServantItem__get_IsTempGrand(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields._IsTempGrand_k__BackingField;
}


System_String_o *EquipGraphServantItem__get_NameText(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t maxLimitCount; // w20
  Il2CppObject *Master_object; // x20
  ServantEntity_o *v9; // x0
  struct ServantEntity_o *servantEntity; // x8
  __int64 v11; // x22
  __int64 v12; // x23
  int64_t v13; // x21
  struct ServantEntity_o *v14; // x8
  ServantLimitImageMaster_o *v15; // x19
  __int64 v16; // x21
  __int64 v17; // x22
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C37D04 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&StringLiteral_19066/*"error"*/);
    byte_4C37D04 = 1;
  }
  entity = 0;
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_19066/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v4 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v19.fields.currentCryptoKey = v5;
    *(_QWORD *)&v19.fields.fakeValue = v4;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v19, 0);
    goto LABEL_24;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v9 = (ServantEntity_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = (ServantEntity_o *)NetworkManager_TypeInfo;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_34;
  v12 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v13 = *(_QWORD *)(*(_QWORD *)&v9->fields.starRate + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  v9 = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v20, 0);
  if ( !Master_object )
LABEL_34:
    sub_1C32E7C(v9);
  v9 = (ServantEntity_o *)UserServantCollectionMaster__TryGetEntity(
                            (UserServantCollectionMaster_o *)Master_object,
                            &entity,
                            v13,
                            (int32_t)v9,
                            0);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    v9 = this->fields.servantEntity;
    if ( v9 )
      return ServantEntity__getName(v9, -1, -1, 1, 0);
    goto LABEL_34;
  }
  if ( !entity )
    goto LABEL_34;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_24:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v14 = this->fields.servantEntity;
  if ( !v14 )
    goto LABEL_34;
  v15 = (ServantLimitImageMaster_o *)v9;
  v17 = *(_QWORD *)&v14->fields.id.fields.currentCryptoKey;
  v16 = *(_QWORD *)&v14->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  v9 = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v21, 0);
  if ( !v15 )
    goto LABEL_34;
  return ServantLimitImageMaster__GetLimitCountSealedServantName(v15, (int32_t)v9, maxLimitCount, 1, 0);
}


int32_t EquipGraphServantItem__get_RarityId(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.rarityId;
}


UserServantEntity_o *EquipGraphServantItem__get_UserServant(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.userServantEntity;
}