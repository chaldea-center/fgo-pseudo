void __fastcall EquipGraphServantItem___ctor(
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
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UserServantEntity_o *userServantEntity; // x1
  bool v19; // w23
  struct ServantEntity_o *servantEntity; // x1
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t MainAtk; // w0
  IconLabelInfo_o *v25; // x22
  int32_t Level; // w20

  if ( (byte_4B0255B & 1) == 0 )
  {
    sub_1BC3008(&IconLabelInfo_TypeInfo, baseItem);
    byte_4B0255B = 1;
  }
  v9 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  this->fields.iconLabelInfo = v9;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.baseItem = baseItem;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)baseItem, v12, v13);
  if ( !baseItem )
    goto LABEL_6;
  userServantEntity = baseItem->fields.userServantEntity;
  v19 = isTempGrand;
  this->fields.userServantEntity = userServantEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v16, v17);
  servantEntity = baseItem->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_servantEntity, (int32_t)servantEntity, v22, v23);
  p_servantEntity[2] = *(struct ServantEntity_o **)&baseItem->fields.classId;
  *((_DWORD *)p_servantEntity + 6) = PartyOrganizationListViewItem__get_MainCost(baseItem, 0LL);
  *((_DWORD *)p_servantEntity + 7) = PartyOrganizationListViewItem__get_MainHp(baseItem, 0LL);
  MainAtk = PartyOrganizationListViewItem__get_MainAtk(baseItem, 0LL);
  v25 = (IconLabelInfo_o *)p_servantEntity[1];
  *((_DWORD *)p_servantEntity + 8) = MainAtk;
  *((_DWORD *)p_servantEntity + 12) = type;
  *((_BYTE *)p_servantEntity + 72) = v19;
  Level = PartyOrganizationListViewItem__get_Level(baseItem, 0LL);
  MaxLevel = PartyOrganizationListViewItem__get_MaxLevel(baseItem, 0LL);
  if ( !v25 )
LABEL_6:
    sub_1BC3264(MaxLevel, v15);
  IconLabelInfo__Set_39947860(v25, 2, Level, MaxLevel, 0, 0, 0, 0, 0, 0LL);
}


bool __fastcall EquipGraphServantItem__GetNpInfo(
        EquipGraphServantItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B02563 & 1) == 0 )
  {
    sub_1BC3008(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4B02563 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1BC3254(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


QuestRestrictionInfo_o *__fastcall EquipGraphServantItem__GetQuestRestrictionInfo(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  if ( !baseItem )
    sub_1BC3264(this, method);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CGThumbnailListItem_o *p_equipUserSvtEntity; // x20
  struct ServantEntity_o **p_equipServantEntity; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *Entity; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CGThumbnailListItem_c *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  CGThumbnailListItem_c *v23; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x20
  Il2CppClass *v25; // x21
  Il2CppClass *v26; // x22
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B0255C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, equipUserSvtId);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B0255C = 1;
  }
  this->fields.equipTargetId = equipUserSvtId;
  this->fields.equipUserSvtEntity = 0LL;
  p_equipUserSvtEntity = (CGThumbnailListItem_o *)&this->fields.equipUserSvtEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipUserSvtEntity, 0, (int32_t)method, v3);
  this->fields.equipServantEntity = 0LL;
  p_equipServantEntity = &this->fields.equipServantEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_equipServantEntity, 0, v13, v14);
  if ( equipUserSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_17;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               equipUserSvtId,
               (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity->klass = (CGThumbnailListItem_c *)Entity;
    sub_1BC2FAC(p_equipUserSvtEntity, (int32_t)Entity, v18, v19);
    klass = p_equipUserSvtEntity->klass;
    if ( !p_equipUserSvtEntity->klass )
      goto LABEL_17;
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v30.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v30, 0LL) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
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
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v31, 0LL);
          if ( v24 )
          {
            v27 = DataMasterBase_object__object__int___GetEntity(
                    v24,
                    (int32_t)Instance,
                    (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            *p_equipServantEntity = (struct ServantEntity_o *)v27;
            sub_1BC2FAC((CGThumbnailListItem_o *)p_equipServantEntity, (int32_t)v27, v28, v29);
            return;
          }
        }
      }
LABEL_17:
      sub_1BC3264(Instance, v16);
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
  return this->fields.atk;
}


int32_t __fastcall EquipGraphServantItem__get_AtkBoostValue(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  int32_t AtkBoostValue; // w19
  UserServantEntity_o *v5; // x20
  UserServantGrandInfo_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4B0255F & 1) == 0 )
  {
    sub_1BC3008(&UserServantGrandInfo_TypeInfo, method);
    byte_4B0255F = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    AtkBoostValue = UserServantEntity__get_AtkBoostValue(userServantEntity, 0LL);
  else
    AtkBoostValue = 0;
  if ( this->fields._IsTempGrand_k__BackingField )
  {
    v5 = this->fields.userServantEntity;
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    v6 = UserServantGrandInfo__Make(v5, 1, 0LL);
    if ( !v6 )
      sub_1BC3264(0LL, v7);
    AtkBoostValue += UserServantGrandInfo__get_AddedAtk(v6, 0LL);
  }
  return AtkBoostValue;
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

  if ( (byte_4B0255E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_1BC3008(&LocalizationManager_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B0255E = 1;
  }
  if ( this->fields.classId < 1 )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.classId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( Entity )
  {
    p_monitor = (System_String_o **)&Entity[1].monitor;
  }
  else
  {
LABEL_19:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4AFD46D )
    {
      sub_1BC3008(&LocalizationManager_TypeInfo, method);
      byte_4AFD46D = 1;
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
  if ( this->fields.servantEntity )
    return this->fields.cost;
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
  if ( equipServantEntity && !this->fields.equipType )
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

  if ( (byte_4B02562 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B02562 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v7, 0LL);
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

  if ( (byte_4B02561 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B02561 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v6, 0LL);
}


int32_t __fastcall EquipGraphServantItem__get_Hp(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.hp;
}


int32_t __fastcall EquipGraphServantItem__get_HpBoostValue(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  int32_t HpBoostValue; // w19
  UserServantEntity_o *v5; // x20
  UserServantGrandInfo_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4B02560 & 1) == 0 )
  {
    sub_1BC3008(&UserServantGrandInfo_TypeInfo, method);
    byte_4B02560 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    HpBoostValue = UserServantEntity__get_HpBoostValue(userServantEntity, 0LL);
  else
    HpBoostValue = 0;
  if ( this->fields._IsTempGrand_k__BackingField )
  {
    v5 = this->fields.userServantEntity;
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    v6 = UserServantGrandInfo__Make(v5, 1, 0LL);
    if ( !v6 )
      sub_1BC3264(0LL, v7);
    HpBoostValue += UserServantGrandInfo__get_AddedHp(v6, 0LL);
  }
  return HpBoostValue;
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


bool __fastcall EquipGraphServantItem__get_IsTempGrand(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields._IsTempGrand_k__BackingField;
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

  if ( (byte_4B0255D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v3);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(&NetworkManager_TypeInfo, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_18886/*"error"*/, v7);
    byte_4B0255D = 1;
  }
  entity = 0LL;
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_18886/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v10;
    *(_QWORD *)&v25.fields.fakeValue = v9;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v25, 0LL);
    goto LABEL_24;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v13);
    byte_4AFC1F1 = 1;
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
  v15 = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v26, 0LL);
  if ( !Master_object )
LABEL_34:
    sub_1BC3264(v15, v13);
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
  v15 = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  v15 = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v27, 0LL);
  if ( !v21 )
    goto LABEL_34;
  return ServantLimitImageMaster__GetLimitCountSealedServantName(v21, (int32_t)v15, maxLimitCount, 1, 0LL);
}


int32_t __fastcall EquipGraphServantItem__get_RarityId(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.rarityId;
}


UserServantEntity_o *__fastcall EquipGraphServantItem__get_UserServant(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}