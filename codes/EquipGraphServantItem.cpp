void EquipGraphServantItem___ctor(
        EquipGraphServantItem_o *this,
        PartyOrganizationListViewItem_o *baseItem,
        int32_t type,
        bool isTempGrand,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 MaxLevel; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct UserServantEntity_o *userServantEntity; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x1
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t MainAtk; // w0
  IconLabelInfo_o *v40; // x20
  int32_t Level; // w21

  if ( (byte_59709EA & 1) == 0 )
  {
    sub_2213A60(&IconLabelInfo_TypeInfo);
    byte_59709EA = 1;
  }
  v9 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  this->fields.iconLabelInfo = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.baseItem = baseItem;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)baseItem, v16, v17, v18, v19, v20, v21);
  if ( !baseItem )
    goto LABEL_6;
  userServantEntity = baseItem->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ServantEntity_k__BackingField = baseItem->fields._ServantEntity_k__BackingField;
  this->fields.servantEntity = ServantEntity_k__BackingField;
  p_servantEntity = &this->fields.servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_servantEntity,
    (int32_t)ServantEntity_k__BackingField,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  p_servantEntity[2] = *(struct ServantEntity_o **)&baseItem->fields.classId;
  *((_DWORD *)p_servantEntity + 6) = PartyOrganizationListViewItem__get_MainCost(baseItem, 0);
  *((_DWORD *)p_servantEntity + 7) = PartyOrganizationListViewItem__get_MainHp(baseItem, 0);
  MainAtk = PartyOrganizationListViewItem__get_MainAtk(baseItem, 0);
  *((_DWORD *)p_servantEntity + 12) = type;
  v40 = (IconLabelInfo_o *)p_servantEntity[1];
  *((_DWORD *)p_servantEntity + 8) = MainAtk;
  *((_BYTE *)p_servantEntity + 72) = isTempGrand;
  Level = PartyOrganizationListViewItem__get_Level(baseItem, 0);
  MaxLevel = PartyOrganizationListViewItem__get_MaxLevel(baseItem, 0);
  if ( !v40 )
LABEL_6:
    sub_2213CDC(MaxLevel, v23);
  IconLabelInfo__Set_47880948(v40, 2, Level, MaxLevel, 0, 0, 0, 0, 0, 0);
}


QuestRestrictionInfo_o *EquipGraphServantItem__GetQuestRestrictionInfo(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  if ( !baseItem )
    sub_2213CDC(this, method);
  return baseItem->fields.questRestrictionInfo;
}


void EquipGraphServantItem__SetEquipTarget(
        EquipGraphServantItem_o *this,
        int64_t equipUserSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_equipUserSvtEntity; // x20
  struct ServantEntity_o **p_equipServantEntity; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *Entity; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  MissionNaviTransitionBoardItem_c *klass; // x8
  Il2CppClass *declaringType; // x21
  Il2CppClass *parent; // x22
  MissionNaviTransitionBoardItem_c *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x20
  Il2CppClass *v32; // x21
  Il2CppClass *v33; // x22
  Il2CppObject *v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_59709EB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59709EB = 1;
  }
  this->fields.equipTargetId = equipUserSvtId;
  this->fields.equipUserSvtEntity = 0;
  p_equipUserSvtEntity = (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserSvtEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserSvtEntity,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.equipServantEntity = 0;
  p_equipServantEntity = &this->fields.equipServantEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_equipServantEntity, 0, v12, v13, v14, v15, v16, v17);
  if ( equipUserSvtId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_17;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               equipUserSvtId,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity->klass = (MissionNaviTransitionBoardItem_c *)Entity;
    sub_2213A04(p_equipUserSvtEntity, (int32_t)Entity, v21, v22, v23, v24, v25, v26);
    klass = p_equipUserSvtEntity->klass;
    if ( !p_equipUserSvtEntity->klass )
      goto LABEL_17;
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    *(_QWORD *)&v41.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v41.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v41, 0) >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
        v30 = p_equipUserSvtEntity->klass;
        if ( p_equipUserSvtEntity->klass )
        {
          v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v32 = v30->_1.declaringType;
          v33 = v30->_1.parent;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
          *(_QWORD *)&v42.fields.currentCryptoKey = v32;
          *(_QWORD *)&v42.fields.fakeValue = v33;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v42, 0);
          if ( v31 )
          {
            v34 = DataMasterBase_object__object__int___GetEntity(
                    v31,
                    (int32_t)Instance,
                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            *p_equipServantEntity = (struct ServantEntity_o *)v34;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)p_equipServantEntity,
              (int32_t)v34,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            return;
          }
        }
      }
LABEL_17:
      sub_2213CDC(Instance, v19);
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

  if ( (byte_59709EE & 1) == 0 )
  {
    sub_2213A60(&UserServantGrandInfo_TypeInfo);
    byte_59709EE = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    AtkBoostValue = UserServantEntity__get_AtkBoostValue(userServantEntity, 0);
  else
    AtkBoostValue = 0;
  if ( this->fields._IsTempGrand_k__BackingField )
  {
    v5 = this->fields.userServantEntity;
    if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, method);
    v6 = UserServantGrandInfo__Make(v5, 1, 0);
    if ( !v6 )
      sub_2213CDC(0, v7);
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

  if ( (byte_59709ED & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59709ED = 1;
  }
  if ( this->fields.classId < 1 )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.classId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( Entity )
  {
    p_monitor = (System_String_o **)&Entity[1].monitor;
  }
  else
  {
LABEL_19:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    if ( !byte_596B976 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596B976 = 1;
    }
    v7 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
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

  if ( (byte_59709F1 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59709F1 = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( !equipUserSvtEntity )
    return 0;
  v4 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v4;
  *(_QWORD *)&v7.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v7, 0);
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
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_59709F0 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59709F0 = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  memset(&v7, 0, sizeof(v7));
  if ( equipUserSvtEntity )
  {
    v4 = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v7.fields.fakeValue = v4;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v7, 0, 0);
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v6, 0);
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

  if ( (byte_59709EF & 1) == 0 )
  {
    sub_2213A60(&UserServantGrandInfo_TypeInfo);
    byte_59709EF = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    HpBoostValue = UserServantEntity__get_HpBoostValue(userServantEntity, 0);
  else
    HpBoostValue = 0;
  if ( this->fields._IsTempGrand_k__BackingField )
  {
    v5 = this->fields.userServantEntity;
    if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, method);
    v6 = UserServantGrandInfo__Make(v5, 1, 0);
    if ( !v6 )
      sub_2213CDC(0, v7);
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
  struct ServantEntity_o *servantEntity; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x1
  int32_t maxLimitCount; // w20
  Il2CppObject *Master_object; // x20
  ServantEntity_o *v11; // x0
  struct ServantEntity_o *v12; // x9
  __int64 v13; // x22
  __int64 v14; // x23
  int64_t v15; // x21
  struct ServantEntity_o *v16; // x8
  ServantLimitImageMaster_o *v17; // x19
  __int64 v18; // x21
  __int64 v19; // x22
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_59709EC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_19957/*"error"*/);
    byte_59709EC = 1;
  }
  servantEntity = this->fields.servantEntity;
  entity = 0;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19957/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v21.fields.currentCryptoKey = v5;
    *(_QWORD *)&v21.fields.fakeValue = v6;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
    goto LABEL_24;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v11 = (ServantEntity_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
    v11 = (ServantEntity_o *)NetworkManager_TypeInfo;
  }
  v12 = this->fields.servantEntity;
  if ( !v12 )
    goto LABEL_34;
  v13 = *(_QWORD *)&v12->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v12->fields.id.fields.fakeValue;
  v15 = *(_QWORD *)(*(_QWORD *)&v11->fields.starRate + 64LL);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  v11 = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0);
  if ( !Master_object )
LABEL_34:
    sub_2213CDC(v11, v7);
  v11 = (ServantEntity_o *)UserServantCollectionMaster__TryGetEntity(
                             (UserServantCollectionMaster_o *)Master_object,
                             &entity,
                             v15,
                             (int32_t)v11,
                             0);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    v11 = this->fields.servantEntity;
    if ( v11 )
      return ServantEntity__getName(v11, -1, -1, 1, 1, 0);
    goto LABEL_34;
  }
  if ( !entity )
    goto LABEL_34;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_24:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  v11 = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v16 = this->fields.servantEntity;
  if ( !v16 )
    goto LABEL_34;
  v17 = (ServantLimitImageMaster_o *)v11;
  v18 = *(_QWORD *)&v16->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v16->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v19;
  v11 = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v23, 0);
  if ( !v17 )
    goto LABEL_34;
  return ServantLimitImageMaster__GetLimitCountSealedServantName(v17, (int32_t)v11, maxLimitCount, 1, 1, 0);
}


int32_t EquipGraphServantItem__get_RarityId(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.rarityId;
}


UserServantEntity_o *EquipGraphServantItem__get_UserServant(EquipGraphServantItem_o *this, const MethodInfo *method)
{
  return this->fields.userServantEntity;
}