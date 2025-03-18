void __fastcall EquipGraphServantItem___ctor(
        EquipGraphServantItem_o *this,
        PartyOrganizationListViewItem_o *baseItem,
        const MethodInfo *method)
{
  IconLabelInfo_o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 MaxLevel; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct ServantEntity_o *servantEntity; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t Level; // w22
  int64_t EquipUserSvtId; // x1
  const MethodInfo *v37; // x2

  if ( (byte_4C2173A & 1) == 0 )
  {
    sub_1C3B764(&IconLabelInfo_TypeInfo, baseItem);
    byte_4C2173A = 1;
  }
  v5 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v5, 0LL);
  this->fields.iconLabelInfo = v5;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.baseItem = baseItem;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)baseItem, v12, v13, v14, v15, v16, v17);
  if ( !baseItem )
    goto LABEL_6;
  userServantEntity = baseItem->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  servantEntity = baseItem->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)servantEntity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  iconLabelInfo = this->fields.iconLabelInfo;
  *(_QWORD *)&this->fields.classId = *(_QWORD *)&baseItem->fields.classId;
  Level = PartyOrganizationListViewItem__get_Level(baseItem, 0LL);
  MaxLevel = PartyOrganizationListViewItem__get_MaxLevel(baseItem, 0LL);
  if ( !iconLabelInfo )
LABEL_6:
    sub_1C3B9C0(MaxLevel, v19);
  IconLabelInfo__Set_39561332(iconLabelInfo, 2, Level, MaxLevel, 0, 0, 0, 0, 0LL);
  this->fields.oldEquipTargetId = PartyOrganizationListViewItem__get_EquipUserSvtId(baseItem, 0LL);
  EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(baseItem, 0LL);
  EquipGraphServantItem__SetEquipTarget(this, EquipUserSvtId, v37);
}


bool __fastcall EquipGraphServantItem__GetNpInfo(
        EquipGraphServantItem_o *this,
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

  if ( (byte_4C21740 & 1) == 0 )
  {
    sub_1C3B764(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4C21740 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1C3B9B0(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1C3B708((PartyOrganizationUtility_o *)tdInfo, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


QuestRestrictionInfo_o *__fastcall EquipGraphServantItem__GetQuestRestrictionInfo(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  if ( !baseItem )
    sub_1C3B9C0(this, method);
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

  if ( (byte_4C2173B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, equipUserSvtId);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4C2173B = 1;
  }
  this->fields.equipTargetId = equipUserSvtId;
  this->fields.equipUserSvtEntity = 0LL;
  p_equipUserSvtEntity = (PartyOrganizationUtility_o *)&this->fields.equipUserSvtEntity;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.equipUserSvtEntity, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.equipServantEntity = 0LL;
  p_equipServantEntity = &this->fields.equipServantEntity;
  sub_1C3B708((PartyOrganizationUtility_o *)p_equipServantEntity, 0LL, v17, v18, v19, v20, v21, v22);
  if ( equipUserSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_17;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               equipUserSvtId,
               (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity->klass = (PartyOrganizationUtility_c *)Entity;
    sub_1C3B708(p_equipUserSvtEntity, (int64_t)Entity, v26, v27, v28, v29, v30, v31);
    klass = p_equipUserSvtEntity->klass;
    if ( !p_equipUserSvtEntity->klass )
      goto LABEL_17;
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v46.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v46.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v46, 0LL) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
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
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v47, 0LL);
          if ( v36 )
          {
            v39 = DataMasterBase_object__object__int___GetEntity(
                    v36,
                    (int32_t)Instance,
                    (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            *p_equipServantEntity = (struct ServantEntity_o *)v39;
            sub_1C3B708((PartyOrganizationUtility_o *)p_equipServantEntity, (int64_t)v39, v40, v41, v42, v43, v44, v45);
            return;
          }
        }
      }
LABEL_17:
      sub_1C3B9C0(Instance, v24);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0
  System_String_o **p_monitor; // x8
  LocalizationManager_c *v10; // x0

  if ( (byte_4C2173D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C2173D = 1;
  }
  if ( this->fields.classId < 1 )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.classId,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( Entity )
  {
    p_monitor = (System_String_o **)&Entity[1].monitor;
  }
  else
  {
LABEL_19:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C1D52E )
    {
      sub_1C3B764(&LocalizationManager_TypeInfo, method);
      byte_4C1D52E = 1;
    }
    v10 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager_TypeInfo;
    }
    p_monitor = &v10->static_fields->unknownNameText;
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
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4C2173F & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4C2173F = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v7, 0LL);
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
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int128 v4; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+40h] [xbp-40h]

  if ( (byte_4C2173E & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4C2173E = 1;
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
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v7, 0LL, 0LL);
    v8 = v7;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v6, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  int32_t maxLimitCount; // w20
  __int64 v13; // x1
  Il2CppObject *Master_object; // x20
  ServantEntity_o *v15; // x0
  struct ServantEntity_o *servantEntity; // x8
  __int64 v17; // x22
  __int64 v18; // x23
  int64_t v19; // x21
  struct ServantEntity_o *v20; // x8
  ServantLimitImageMaster_o *v21; // x19
  __int64 v22; // x21
  __int64 v23; // x22
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4C2173C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_19427/*"getNotificationColor"*/, v7);
    byte_4C2173C = 1;
  }
  entity = 0LL;
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_19427/*"getNotificationColor"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v10;
    *(_QWORD *)&v25.fields.fakeValue = v9;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v25, 0LL);
    goto LABEL_24;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v13);
    byte_4C1C955 = 1;
  }
  v15 = (ServantEntity_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = (ServantEntity_o *)NetworkManager_TypeInfo;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_34;
  v18 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v19 = *(_QWORD *)(*(_QWORD *)&v15->fields.starRate + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v18;
  *(_QWORD *)&v26.fields.fakeValue = v17;
  v15 = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v26, 0LL);
  if ( !Master_object )
LABEL_34:
    sub_1C3B9C0(v15, v13);
  v15 = (ServantEntity_o *)UserServantCollectionMaster__TryGetEntity(
                             (UserServantCollectionMaster_o *)Master_object,
                             &entity,
                             v19,
                             (int32_t)v15,
                             0LL);
  if ( ((unsigned __int8)v15 & 1) == 0 )
  {
    v15 = this->fields.servantEntity;
    if ( v15 )
      return ServantEntity__getName(v15, -1, -1, 1, 0LL);
    goto LABEL_34;
  }
  if ( !entity )
    goto LABEL_34;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_24:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v15 = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v20 = this->fields.servantEntity;
  if ( !v20 )
    goto LABEL_34;
  v21 = (ServantLimitImageMaster_o *)v15;
  v23 = *(_QWORD *)&v20->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v20->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v23;
  *(_QWORD *)&v27.fields.fakeValue = v22;
  v15 = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v27, 0LL);
  if ( !v21 )
    goto LABEL_34;
  return ServantLimitImageMaster__GetLimitCountSealedServantName(v21, (int32_t)v15, maxLimitCount, 1, 0LL);
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