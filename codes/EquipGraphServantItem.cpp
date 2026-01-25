void EquipGraphServantItem___ctor(
        EquipGraphServantItem_o *this,
        PartyOrganizationListViewItem_o *baseItem,
        int32_t type,
        bool isTempGrand,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 MaxLevel; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  bool v31; // w23
  struct ServantEntity_o *servantEntity; // x1
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t MainAtk; // w0
  IconLabelInfo_o *v41; // x22
  int32_t Level; // w20

  if ( (byte_4CEE862 & 1) == 0 )
  {
    sub_1C7BAE8(&IconLabelInfo_TypeInfo);
    byte_4CEE862 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo = v9;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.baseItem = baseItem;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)baseItem, v16, v17, v18, v19, v20, v21);
  if ( !baseItem )
    goto LABEL_6;
  userServantEntity = baseItem->fields.userServantEntity;
  v31 = isTempGrand;
  this->fields.userServantEntity = userServantEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  servantEntity = baseItem->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_servantEntity, (int32_t)servantEntity, v34, v35, v36, v37, v38, v39);
  p_servantEntity[2] = *(struct ServantEntity_o **)&baseItem->fields.classId;
  *((_DWORD *)p_servantEntity + 6) = PartyOrganizationListViewItem__get_MainCost(baseItem, 0);
  *((_DWORD *)p_servantEntity + 7) = PartyOrganizationListViewItem__get_MainHp(baseItem, 0);
  MainAtk = PartyOrganizationListViewItem__get_MainAtk(baseItem, 0);
  v41 = (IconLabelInfo_o *)p_servantEntity[1];
  *((_DWORD *)p_servantEntity + 8) = MainAtk;
  *((_DWORD *)p_servantEntity + 12) = type;
  *((_BYTE *)p_servantEntity + 72) = v31;
  Level = PartyOrganizationListViewItem__get_Level(baseItem, 0);
  MaxLevel = PartyOrganizationListViewItem__get_MaxLevel(baseItem, 0);
  if ( !v41 )
LABEL_6:
    sub_1C7BD40(MaxLevel, v23);
  IconLabelInfo__Set_41483756(v41, 2, Level, MaxLevel, 0, 0, 0, 0, 0, 0);
}


bool EquipGraphServantItem__GetNpInfo(
        EquipGraphServantItem_o *this,
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

  if ( (byte_4CEE86A & 1) == 0 )
  {
    sub_1C7BAE8(&TreasureDvcInfo_TypeInfo);
    byte_4CEE86A = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0);
  v7 = (TreasureDvcInfo_o *)sub_1C7BD34(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  *tdInfo = v7;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


QuestRestrictionInfo_o *EquipGraphServantItem__GetQuestRestrictionInfo(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  if ( !baseItem )
    sub_1C7BD40(this, method);
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

  if ( (byte_4CEE863 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE863 = 1;
  }
  this->fields.equipTargetId = equipUserSvtId;
  this->fields.equipUserSvtEntity = 0;
  p_equipUserSvtEntity = (GrandQuestFolderBoardItem_o *)&this->fields.equipUserSvtEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipUserSvtEntity, 0, (int32_t)method, v3, v4, v5, v6, v7);
  this->fields.equipServantEntity = 0;
  p_equipServantEntity = &this->fields.equipServantEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_equipServantEntity, 0, v12, v13, v14, v15, v16, v17);
  if ( equipUserSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_17;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               equipUserSvtId,
               (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity->klass = (GrandQuestFolderBoardItem_c *)Entity;
    sub_1C7BA8C(p_equipUserSvtEntity, (int32_t)Entity, v21, v22, v23, v24, v25, v26);
    klass = p_equipUserSvtEntity->klass;
    if ( !p_equipUserSvtEntity->klass )
      goto LABEL_17;
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v41.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v41.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v41, 0) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
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
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v42, 0);
          if ( v31 )
          {
            v34 = DataMasterBase_object__object__int___GetEntity(
                    v31,
                    (int32_t)Instance,
                    (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            *p_equipServantEntity = (struct ServantEntity_o *)v34;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_equipServantEntity, (int32_t)v34, v35, v36, v37, v38, v39, v40);
            return;
          }
        }
      }
LABEL_17:
      sub_1C7BD40(Instance, v19);
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
  __int64 v7; // x1

  if ( (byte_4CEE866 & 1) == 0 )
  {
    sub_1C7BAE8(&UserServantGrandInfo_TypeInfo);
    byte_4CEE866 = 1;
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
      sub_1C7BD40(0, v7);
    AtkBoostValue += UserServantGrandInfo__get_AddedAtk(v6, 0);
  }
  return AtkBoostValue;
}


System_String_o *EquipGraphServantItem__get_ClassName(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  System_String_o **p_monitor; // x8
  LocalizationManager_c *v7; // x0

  if ( (byte_4CEE865 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE865 = 1;
  }
  if ( this->fields.classId < 1 )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.classId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( Entity )
  {
    p_monitor = (System_String_o **)&Entity[1].monitor;
  }
  else
  {
LABEL_19:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4CE9782 )
    {
      sub_1C7BAE8(&LocalizationManager_TypeInfo);
      byte_4CE9782 = 1;
    }
    v7 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = LocalizationManager_TypeInfo;
    }
    p_monitor = &v7->static_fields->unknownNameText;
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

  if ( (byte_4CEE869 & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEE869 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v7, 0);
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

  if ( (byte_4CEE868 & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CEE868 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v6, 0);
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
  __int64 v7; // x1

  if ( (byte_4CEE867 & 1) == 0 )
  {
    sub_1C7BAE8(&UserServantGrandInfo_TypeInfo);
    byte_4CEE867 = 1;
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
      sub_1C7BD40(0, v7);
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
  __int64 v8; // x1
  Il2CppObject *Master_object; // x20
  ServantEntity_o *v10; // x0
  struct ServantEntity_o *servantEntity; // x8
  __int64 v12; // x22
  __int64 v13; // x23
  int64_t v14; // x21
  struct ServantEntity_o *v15; // x8
  ServantLimitImageMaster_o *v16; // x19
  __int64 v17; // x21
  __int64 v18; // x22
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4CEE864 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19209/*"error"*/);
    byte_4CEE864 = 1;
  }
  entity = 0;
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_19209/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v4 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v5;
    *(_QWORD *)&v20.fields.fakeValue = v4;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v20, 0);
    goto LABEL_24;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v10 = (ServantEntity_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = (ServantEntity_o *)NetworkManager_TypeInfo;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_34;
  v13 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v14 = *(_QWORD *)(*(_QWORD *)&v10->fields.starRate + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v13;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v10 = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v21, 0);
  if ( !Master_object )
LABEL_34:
    sub_1C7BD40(v10, v8);
  v10 = (ServantEntity_o *)UserServantCollectionMaster__TryGetEntity(
                             (UserServantCollectionMaster_o *)Master_object,
                             &entity,
                             v14,
                             (int32_t)v10,
                             0);
  if ( ((unsigned __int8)v10 & 1) == 0 )
  {
    v10 = this->fields.servantEntity;
    if ( v10 )
      return ServantEntity__getName(v10, -1, -1, 1, 0);
    goto LABEL_34;
  }
  if ( !entity )
    goto LABEL_34;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_24:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v15 = this->fields.servantEntity;
  if ( !v15 )
    goto LABEL_34;
  v16 = (ServantLimitImageMaster_o *)v10;
  v18 = *(_QWORD *)&v15->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v18;
  *(_QWORD *)&v22.fields.fakeValue = v17;
  v10 = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v22, 0);
  if ( !v16 )
    goto LABEL_34;
  return ServantLimitImageMaster__GetLimitCountSealedServantName(v16, (int32_t)v10, maxLimitCount, 1, 0);
}


int32_t EquipGraphServantItem__get_RarityId(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.rarityId;
}


UserServantEntity_o *EquipGraphServantItem__get_UserServant(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.userServantEntity;
}