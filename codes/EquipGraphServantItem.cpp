void __fastcall EquipGraphServantItem___ctor(
        EquipGraphServantItem_o *this,
        PartyOrganizationListViewItem_o *baseItem,
        const MethodInfo *method)
{
  IconLabelInfo_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 MaxLevel; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct UserServantEntity_o *userServantEntity; // x1
  struct ServantEntity_o *servantEntity; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t Level; // w22
  int64_t EquipUserSvtId; // x1
  const MethodInfo *v21; // x2

  if ( (byte_4AB554B & 1) == 0 )
  {
    sub_1BAB41C(&IconLabelInfo_TypeInfo, baseItem);
    byte_4AB554B = 1;
  }
  v5 = (IconLabelInfo_o *)sub_1BAB668(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v5, 0LL);
  this->fields.iconLabelInfo = v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.baseItem = baseItem;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)baseItem, v8, v9);
  if ( !baseItem )
    goto LABEL_6;
  userServantEntity = baseItem->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v12,
    v13);
  servantEntity = baseItem->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v16, v17);
  iconLabelInfo = this->fields.iconLabelInfo;
  *(_QWORD *)&this->fields.classId = *(_QWORD *)&baseItem->fields.classId;
  Level = PartyOrganizationListViewItem__get_Level(baseItem, 0LL);
  MaxLevel = PartyOrganizationListViewItem__get_MaxLevel(baseItem, 0LL);
  if ( !iconLabelInfo )
LABEL_6:
    sub_1BAB678(MaxLevel, v11);
  IconLabelInfo__Set_38519944(iconLabelInfo, 2, Level, MaxLevel, 0, 0, 0, 0, 0LL);
  this->fields.oldEquipTargetId = PartyOrganizationListViewItem__get_EquipUserSvtId(baseItem, 0LL);
  EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(baseItem, 0LL);
  EquipGraphServantItem__SetEquipTarget(this, EquipUserSvtId, v21);
}


bool __fastcall EquipGraphServantItem__GetNpInfo(
        EquipGraphServantItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4AB5551 & 1) == 0 )
  {
    sub_1BAB41C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4AB5551 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1BAB668(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


QuestRestrictionInfo_o *__fastcall EquipGraphServantItem__GetQuestRestrictionInfo(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  if ( !baseItem )
    sub_1BAB678(this, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ServantStatusBattleListViewItem_o *p_equipUserSvtEntity; // x20
  struct ServantEntity_o **p_equipServantEntity; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *Entity; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  ServantStatusBattleListViewItem_c *v23; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x20
  Il2CppClass *v25; // x21
  Il2CppClass *v26; // x22
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4AB554C & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, equipUserSvtId);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4AB554C = 1;
  }
  this->fields.equipTargetId = equipUserSvtId;
  this->fields.equipUserSvtEntity = 0LL;
  p_equipUserSvtEntity = (ServantStatusBattleListViewItem_o *)&this->fields.equipUserSvtEntity;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.equipUserSvtEntity, 0, (int32_t)method, v3);
  this->fields.equipServantEntity = 0LL;
  p_equipServantEntity = &this->fields.equipServantEntity;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_equipServantEntity, 0, v13, v14);
  if ( equipUserSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_17;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               equipUserSvtId,
               (const MethodInfo_3163F3C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
    sub_1BAB3C0(p_equipUserSvtEntity, (int32_t)Entity, v18, v19);
    klass = p_equipUserSvtEntity->klass;
    if ( !p_equipUserSvtEntity->klass )
      goto LABEL_17;
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v30.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v30, 0LL) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
        v23 = p_equipUserSvtEntity->klass;
        if ( p_equipUserSvtEntity->klass )
        {
          v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v26 = v23->_1.declaringType;
          v25 = v23->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v31.fields.currentCryptoKey = v26;
          *(_QWORD *)&v31.fields.fakeValue = v25;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v31, 0LL);
          if ( v24 )
          {
            v27 = DataMasterBase_object__object__int___GetEntity(
                    v24,
                    (int32_t)Instance,
                    (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            *p_equipServantEntity = (struct ServantEntity_o *)v27;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_equipServantEntity, (int32_t)v27, v28, v29);
            return;
          }
        }
      }
LABEL_17:
      sub_1BAB678(Instance, v16);
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

  if ( (byte_4AB554E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1BAB41C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4AB554E = 1;
  }
  if ( this->fields.classId < 1 )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1BAB678(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.classId,
             (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( Entity )
  {
    p_monitor = (System_String_o **)&Entity[1].monitor;
  }
  else
  {
LABEL_19:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4AB1560 )
    {
      sub_1BAB41C(&LocalizationManager_TypeInfo, method);
      byte_4AB1560 = 1;
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

  if ( (byte_4AB5550 & 1) == 0 )
  {
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4AB5550 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v7, 0LL);
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

  if ( (byte_4AB554F & 1) == 0 )
  {
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4AB554F = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v6, 0LL);
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
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v15; // x1
  struct ServantEntity_o *servantEntity; // x8
  int64_t v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  struct ServantEntity_o *v20; // x8
  ServantLimitImageMaster_o *v21; // x21
  __int64 v22; // x22
  __int64 v23; // x23
  int32_t v24; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4AB554D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v3);
    sub_1BAB41C(&DataManager_TypeInfo, v4);
    sub_1BAB41C(&NetworkManager_TypeInfo, v5);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BAB41C(&StringLiteral_19082/*"error"*/, v7);
    byte_4AB554D = 1;
  }
  entity = 0LL;
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_19082/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v26.fields.currentCryptoKey = v10;
    *(_QWORD *)&v26.fields.fakeValue = v9;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v26, 0LL);
    goto LABEL_20;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_32;
  v17 = UserId;
  v19 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v19;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v27, 0LL);
  if ( !Master_object )
LABEL_32:
    sub_1BAB678(UserId, v15);
  UserId = UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             v17,
             UserId,
             0LL);
  if ( (UserId & 1) == 0 )
  {
    UserId = (int64_t)this->fields.servantEntity;
    if ( UserId )
    {
      v24 = -1;
      return ServantEntity__getName((ServantEntity_o *)UserId, v24, -1, 0LL);
    }
    goto LABEL_32;
  }
  if ( !entity )
    goto LABEL_32;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_20:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v20 = this->fields.servantEntity;
  if ( !v20 )
    goto LABEL_32;
  v21 = (ServantLimitImageMaster_o *)UserId;
  v23 = *(_QWORD *)&v20->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v20->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v23;
  *(_QWORD *)&v28.fields.fakeValue = v22;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v28, 0LL);
  if ( !v21 )
    goto LABEL_32;
  UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v21, UserId, maxLimitCount, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_32;
  v24 = UserId;
  UserId = (int64_t)this->fields.servantEntity;
  return ServantEntity__getName((ServantEntity_o *)UserId, v24, -1, 0LL);
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