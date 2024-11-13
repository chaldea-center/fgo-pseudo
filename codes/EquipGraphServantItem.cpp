void __fastcall EquipGraphServantItem___ctor(
        EquipGraphServantItem_o *this,
        PartyOrganizationListViewItem_o *baseItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  IconLabelInfo_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 MaxLevel; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct ServantEntity_o *servantEntity; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t Level; // w22
  int64_t EquipUserSvtId; // x1
  const MethodInfo *v38; // x2

  if ( (byte_4B159E7 & 1) == 0 )
  {
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, baseItem, method);
    byte_4B159E7 = 1;
  }
  v6 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, baseItem, method, v3);
  IconLabelInfo___ctor(v6, 0LL);
  this->fields.iconLabelInfo = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.baseItem = baseItem;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)baseItem, v13, v14, v15, v16, v17, v18);
  if ( !baseItem )
    goto LABEL_6;
  userServantEntity = baseItem->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  servantEntity = baseItem->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)servantEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  iconLabelInfo = this->fields.iconLabelInfo;
  *(_QWORD *)&this->fields.classId = *(_QWORD *)&baseItem->fields.classId;
  Level = PartyOrganizationListViewItem__get_Level(baseItem, 0LL);
  MaxLevel = PartyOrganizationListViewItem__get_MaxLevel(baseItem, 0LL);
  if ( !iconLabelInfo )
LABEL_6:
    sub_1BCAA3C(MaxLevel, v20);
  IconLabelInfo__Set_38850420(iconLabelInfo, 2, Level, MaxLevel, 0, 0, 0, 0, 0LL);
  this->fields.oldEquipTargetId = PartyOrganizationListViewItem__get_EquipUserSvtId(baseItem, 0LL);
  EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(baseItem, 0LL);
  EquipGraphServantItem__SetEquipTarget(this, EquipUserSvtId, v38);
}


bool __fastcall EquipGraphServantItem__GetNpInfo(
        EquipGraphServantItem_o *this,
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

  if ( (byte_4B159ED & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, tdInfo, method);
    byte_4B159ED = 1;
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


QuestRestrictionInfo_o *__fastcall EquipGraphServantItem__GetQuestRestrictionInfo(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  if ( !baseItem )
    sub_1BCAA3C(this, method);
  return baseItem->fields.questRestrictionInfo;
}


int32_t __fastcall EquipGraphServantItem__GetTreasureDeviceLevelIcon(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    LODWORD(userServantEntity) = UserServantEntity__getTreasureDeviceLevelIcon(userServantEntity, 0LL);
  return (int)userServantEntity;
}


void __fastcall EquipGraphServantItem__SetEquipTarget(
        EquipGraphServantItem_o *this,
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

  if ( (byte_4B159E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, equipUserSvtId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B159E8 = 1;
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


int32_t __fastcall EquipGraphServantItem__get_AdjustAtk(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t __fastcall EquipGraphServantItem__get_AdjustHp(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.adjustHp;
  else
    return 0;
}


int32_t __fastcall EquipGraphServantItem__get_Atk(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.atk;
  else
    return 0;
}


System_String_o *__fastcall EquipGraphServantItem__get_ClassName(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x0
  System_String_o **p_monitor; // x8
  LocalizationManager_c *v14; // x0

  if ( (byte_4B159EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B159EA = 1;
  }
  if ( this->fields.classId < 1 )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.classId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( Entity )
  {
    p_monitor = (System_String_o **)&Entity[1].monitor;
  }
  else
  {
LABEL_19:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    if ( !byte_4B1194D )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
      byte_4B1194D = 1;
    }
    v14 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v14 = LocalizationManager_TypeInfo;
    }
    p_monitor = &v14->static_fields->unknownNameText;
  }
  return *p_monitor;
}


int32_t __fastcall EquipGraphServantItem__get_Cost(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
    return servantEntity->fields.cost;
  else
    return 0;
}


int32_t __fastcall EquipGraphServantItem__get_EquipAtk(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.atk;
  else
    return 0;
}


int32_t __fastcall EquipGraphServantItem__get_EquipCost(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return equipServantEntity->fields.cost;
  else
    return 0;
}


int32_t __fastcall EquipGraphServantItem__get_EquipHp(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.hp;
  else
    return 0;
}


int32_t __fastcall EquipGraphServantItem__get_EquipLimitCount(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4B159EC & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B159EC = 1;
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


int32_t __fastcall EquipGraphServantItem__get_EquipLimitCountMax(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return equipServantEntity->fields.limitMax;
  else
    return 0;
}


UserServantEntity_o *__fastcall EquipGraphServantItem__get_EquipUserServant(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipUserSvtEntity;
}


int64_t __fastcall EquipGraphServantItem__get_EquipUserSvtId(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int128 v5; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+40h] [xbp-40h]

  if ( (byte_4B159EB & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B159EB = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    v5 = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v9.fields.fakeValue = v5;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v8, 0LL, 0LL);
    v9 = v8;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
}


int32_t __fastcall EquipGraphServantItem__get_Hp(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.hp;
  else
    return 0;
}


IconLabelInfo_o *__fastcall EquipGraphServantItem__get_IconInfo(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo;
}


bool __fastcall EquipGraphServantItem__get_IsEquip(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.equipUserSvtEntity != 0LL;
}


System_String_o *__fastcall EquipGraphServantItem__get_NameText(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v15; // x20
  __int64 v16; // x21
  __int64 v17; // x1
  int32_t maxLimitCount; // w20
  __int64 v20; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  struct ServantEntity_o *servantEntity; // x8
  int64_t v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  struct ServantEntity_o *v27; // x8
  ServantLimitImageMaster_o *v28; // x19
  __int64 v29; // x21
  __int64 v30; // x22
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B159E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v12, v13);
    byte_4B159E9 = 1;
  }
  entity = 0LL;
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_19249/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v16 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v15 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v32.fields.currentCryptoKey = v16;
    *(_QWORD *)&v32.fields.fakeValue = v15;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
    goto LABEL_20;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
  UserId = NetworkManager__get_UserId(0LL);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_30;
  v24 = UserId;
  v26 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v25 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v33.fields.currentCryptoKey = v26;
  *(_QWORD *)&v33.fields.fakeValue = v25;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v33, 0LL);
  if ( !Master_object )
LABEL_30:
    sub_1BCAA3C(UserId, v17);
  UserId = UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             v24,
             UserId,
             0LL);
  if ( (UserId & 1) == 0 )
  {
    UserId = (int64_t)this->fields.servantEntity;
    if ( UserId )
      return ServantEntity__getName((ServantEntity_o *)UserId, -1, -1, 0LL);
    goto LABEL_30;
  }
  if ( !entity )
    goto LABEL_30;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_20:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v27 = this->fields.servantEntity;
  if ( !v27 )
    goto LABEL_30;
  v28 = (ServantLimitImageMaster_o *)UserId;
  v30 = *(_QWORD *)&v27->fields.id.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v27->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v34.fields.currentCryptoKey = v30;
  *(_QWORD *)&v34.fields.fakeValue = v29;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v34, 0LL);
  if ( !v28 )
    goto LABEL_30;
  return ServantLimitImageMaster__GetLimitCountSealedServantName(v28, UserId, maxLimitCount, 0LL);
}


int64_t __fastcall EquipGraphServantItem__get_OldEquipUserSvtId(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.oldEquipTargetId;
}


UserServantEntity_o *__fastcall EquipGraphServantItem__get_UserServant(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}