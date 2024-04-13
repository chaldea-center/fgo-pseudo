void __fastcall EquipGraphServantItem___ctor(
        EquipGraphServantItem_o *this,
        PartyOrganizationListViewItem_o *baseItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  IconLabelInfo_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 MaxLevel; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct ServantEntity_o *servantEntity; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  IconLabelInfo_o *iconLabelInfo; // x21
  int32_t Level; // w22
  int64_t EquipUserSvtId; // x1
  const MethodInfo *v38; // x2

  if ( (byte_42EB835 & 1) == 0 )
  {
    sub_B5D5C4(&IconLabelInfo_TypeInfo, (_DWORD)baseItem, (_DWORD)method, v3);
    byte_42EB835 = 1;
  }
  v6 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v6, 0LL);
  this->fields.iconLabelInfo = v6;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.baseItem = baseItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)baseItem,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !baseItem )
    goto LABEL_6;
  userServantEntity = baseItem->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  servantEntity = baseItem->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  iconLabelInfo = this->fields.iconLabelInfo;
  this->fields.classId = baseItem->fields.classId;
  this->fields.rarityId = baseItem->fields.rarityId;
  Level = PartyOrganizationListViewItem__get_Level(baseItem, 0LL);
  MaxLevel = PartyOrganizationListViewItem__get_MaxLevel(baseItem, 0LL);
  if ( !iconLabelInfo )
LABEL_6:
    sub_B5D69C(MaxLevel, v20);
  IconLabelInfo__Set_28463004(iconLabelInfo, 2, Level, MaxLevel, 0, 0, 0, 0, 0LL);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EB83B & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, (_DWORD)tdInfo, (_DWORD)method, v3);
    byte_42EB83B = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v8 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v8, 0LL);
  *tdInfo = v8;
  sub_B5D560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  return 0;
}


QuestRestrictionInfo_o *__fastcall EquipGraphServantItem__GetQuestRestrictionInfo(
        EquipGraphServantItem_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  if ( !baseItem )
    sub_B5D69C(this, method);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  BattleServantConfConponent_o *p_equipUserSvtEntity; // x20
  struct ServantEntity_o **p_equipServantEntity; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  System_Int32_array **Entity; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BattleServantConfConponent_c *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  BattleServantConfConponent_c *v45; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x20
  Il2CppClass *v47; // x21
  Il2CppClass *v48; // x22
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_42EB836 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, equipUserSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    byte_42EB836 = 1;
  }
  this->fields.equipTargetId = equipUserSvtId;
  this->fields.equipUserSvtEntity = 0LL;
  p_equipUserSvtEntity = (BattleServantConfConponent_o *)&this->fields.equipUserSvtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipUserSvtEntity,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.equipServantEntity = 0LL;
  p_equipServantEntity = &this->fields.equipServantEntity;
  sub_B5D560((BattleServantConfConponent_o *)p_equipServantEntity, 0LL, v27, v28, v29, v30, v31, v32);
  if ( equipUserSvtId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_19;
    Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                      equipUserSvtId,
                                      (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity->klass = (BattleServantConfConponent_c *)Entity;
    sub_B5D560(p_equipUserSvtEntity, Entity, v36, v37, v38, v39, v40, v41);
    klass = p_equipUserSvtEntity->klass;
    if ( !p_equipUserSvtEntity->klass )
      goto LABEL_19;
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v56.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v56.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v56, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        v45 = p_equipUserSvtEntity->klass;
        if ( p_equipUserSvtEntity->klass )
        {
          v46 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
          v48 = v45->_1.declaringType;
          v47 = v45->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v57.fields.currentCryptoKey = v48;
          *(_QWORD *)&v57.fields.fakeValue = v47;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v57, 0LL);
          if ( v46 )
          {
            v49 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v46,
                                           (int32_t)Instance,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            *p_equipServantEntity = (struct ServantEntity_o *)v49;
            sub_B5D560((BattleServantConfConponent_o *)p_equipServantEntity, v49, v50, v51, v52, v53, v54, v55);
            return;
          }
        }
      }
LABEL_19:
      sub_B5D69C(Instance, v34);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarEntity_o *Entity; // x0
  System_String_o **p_age; // x8
  LocalizationManager_c *v18; // x0

  if ( (byte_42EB838 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB838 = 1;
  }
  if ( this->fields.classId < 1 )
    goto LABEL_21;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.classId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( Entity )
  {
    p_age = &Entity->fields.age;
  }
  else
  {
LABEL_21:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E6772 )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
      byte_42E6772 = 1;
    }
    v18 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager_TypeInfo;
    }
    p_age = &v18->static_fields->unknownNameText;
  }
  return *p_age;
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
  int v2; // w2
  __int64 v3; // x3
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42EB83A & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB83A = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( !equipUserSvtEntity )
    return 0;
  v7 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v6 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int128 v6; // q0
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10[2]; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EB839 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB839 = 1;
  }
  memset(&v10[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    v7 = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.currentCryptoKey;
    v6 = *(_OWORD *)&equipUserSvtEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v10, 0LL, 0LL);
    v7 = *(_OWORD *)&v10[0].fields.currentCryptoKey;
    v6 = *(_OWORD *)&v10[0].fields.fakeValue;
  }
  *(_OWORD *)&v10[1].fields.currentCryptoKey = v7;
  *(_OWORD *)&v10[1].fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10[1];
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v9, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v21; // x20
  __int64 v22; // x21
  int32_t maxLimitCount; // w20
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v27; // x1
  struct ServantEntity_o *servantEntity; // x8
  int64_t v29; // x21
  __int64 v30; // x22
  __int64 v31; // x23
  struct ServantEntity_o *v32; // x8
  ServantLimitImageMaster_o *v33; // x21
  __int64 v34; // x22
  __int64 v35; // x23
  int32_t v36; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_42EB837 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v17, v18, v19);
    byte_42EB837 = 1;
  }
  entity = 0LL;
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_18624/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v22 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v21 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v38.fields.currentCryptoKey = v22;
    *(_QWORD *)&v38.fields.fakeValue = v21;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v38, 0LL);
    goto LABEL_24;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_37;
  v29 = UserId;
  v31 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v30 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v31;
  *(_QWORD *)&v39.fields.fakeValue = v30;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v39, 0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_37:
    sub_B5D69C(UserId, v27);
  UserId = UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v29, UserId, 0LL);
  if ( (UserId & 1) == 0 )
  {
    UserId = (int64_t)this->fields.servantEntity;
    if ( UserId )
    {
      v36 = -1;
      return ServantEntity__getName((ServantEntity_o *)UserId, v36, -1, 0LL);
    }
    goto LABEL_37;
  }
  if ( !entity )
    goto LABEL_37;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_24:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v32 = this->fields.servantEntity;
  if ( !v32 )
    goto LABEL_37;
  v33 = (ServantLimitImageMaster_o *)UserId;
  v35 = *(_QWORD *)&v32->fields.id.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v32->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v35;
  *(_QWORD *)&v40.fields.fakeValue = v34;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v40, 0LL);
  if ( !v33 )
    goto LABEL_37;
  UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v33, UserId, maxLimitCount, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_37;
  v36 = UserId;
  UserId = (int64_t)this->fields.servantEntity;
  return ServantEntity__getName((ServantEntity_o *)UserId, v36, -1, 0LL);
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