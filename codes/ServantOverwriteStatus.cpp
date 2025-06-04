void __fastcall ServantOverwriteStatus___ctor(
        ServantOverwriteStatus_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t selectedLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w22
  int32_t v12; // w0
  const MethodInfo *v13; // x5
  int32_t v14; // w22
  int32_t v15; // w0
  const MethodInfo *v16; // x7
  UserServantGrandInfo_o *GrandInfo; // x1
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4AFD739 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
    byte_4AFD739 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !userServantEntity )
    sub_1BC3264(v7, v8);
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v10;
  *(_QWORD *)&v19.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(userServantEntity->fields.limitCount, 0LL);
  ServantOverwriteStatus__Set(this, v11, v12, userServantEntity->fields.hp, userServantEntity->fields.atk, v13);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(userServantEntity->fields.svtId, 0LL);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(userServantEntity->fields.limitCount, 0LL);
  ServantOverwriteStatus__Overwrite_32953212(
    this,
    v14,
    v15,
    selectedLimitCount,
    userServantEntity->fields.lv,
    userServantEntity->fields.adjustHp,
    userServantEntity->fields.adjustAtk,
    v16);
  GrandInfo = UserServantEntity__get_GrandInfo(userServantEntity, 0LL);
  ServantOverwriteStatus__ApplyGrandServantEffect(this, GrandInfo, v18);
}


void __fastcall ServantOverwriteStatus___ctor_32953748(
        ServantOverwriteStatus_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t selectedLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w0
  const MethodInfo *v12; // x5
  int32_t v13; // w0
  const MethodInfo *v14; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4AFD73A & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, servantLeaderInfo);
    byte_4AFD73A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !servantLeaderInfo )
    sub_1BC3264(v7, v8);
  v10 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v15, 0LL);
  ServantOverwriteStatus__Set(
    this,
    v11,
    servantLeaderInfo->fields.limitCount,
    servantLeaderInfo->fields.hp,
    servantLeaderInfo->fields.atk,
    v12);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(servantLeaderInfo->fields.svtId, 0LL);
  ServantOverwriteStatus__Overwrite(this, v13, servantLeaderInfo->fields.limitCount, selectedLimitCount, v14);
}


void __fastcall ServantOverwriteStatus___ctor_32954288(
        ServantOverwriteStatus_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t selectedLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w0
  const MethodInfo *v12; // x5
  int32_t v13; // w0
  const MethodInfo *v14; // x7
  int32_t atk; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t hp[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4AFD73B & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtCollectionEntity);
    byte_4AFD73B = 1;
  }
  *(_QWORD *)hp = 0LL;
  atk = 0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !userSvtCollectionEntity )
    sub_1BC3264(v7, v8);
  UserServantCollectionEntity__getCollectionStatus(userSvtCollectionEntity, &hp[1], hp, &atk, 0LL);
  v10 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v17, 0LL);
  ServantOverwriteStatus__Set(this, v11, userSvtCollectionEntity->fields.maxLimitCount, hp[0], atk, v12);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(userSvtCollectionEntity->fields.svtId, 0LL);
  ServantOverwriteStatus__Overwrite_32953212(
    this,
    v13,
    userSvtCollectionEntity->fields.maxLimitCount,
    selectedLimitCount,
    hp[1],
    0,
    0,
    v14);
}


void __fastcall ServantOverwriteStatus___ctor_32954528(
        ServantOverwriteStatus_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t selectedLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x5
  const MethodInfo *v10; // x4

  System_Object___ctor((Il2CppObject *)this, 0LL);
  ServantOverwriteStatus__Set(this, svtId, limitCount, 0, 0, v9);
  ServantOverwriteStatus__Overwrite(this, svtId, limitCount, selectedLimitCount, v10);
}


void __fastcall ServantOverwriteStatus___ctor_32954620(
        ServantOverwriteStatus_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t selectedLimitCount,
        int32_t hp,
        int32_t atk,
        int32_t level,
        int32_t adjustHp,
        int32_t adjustAtk,
        UserServantGrandInfo_o *grandInfo,
        const MethodInfo *method)
{
  const MethodInfo *v19; // x5
  const MethodInfo *v20; // x7
  const MethodInfo *v21; // x2

  System_Object___ctor((Il2CppObject *)this, 0LL);
  ServantOverwriteStatus__Set(this, svtId, limitCount, hp, atk, v19);
  ServantOverwriteStatus__Overwrite_32953212(
    this,
    svtId,
    limitCount,
    selectedLimitCount,
    level,
    adjustHp,
    adjustAtk,
    v20);
  ServantOverwriteStatus__ApplyGrandServantEffect(this, grandInfo, v21);
}


void __fastcall ServantOverwriteStatus__ApplyGrandServantEffect(
        ServantOverwriteStatus_o *this,
        UserServantGrandInfo_o *grandInfo,
        const MethodInfo *method)
{
  int32_t Hp_k__BackingField; // w21
  int32_t AddedHp; // w0
  int32_t Atk_k__BackingField; // w22

  if ( !grandInfo )
    sub_1BC3264(this, 0LL);
  Hp_k__BackingField = this->fields._Hp_k__BackingField;
  AddedHp = UserServantGrandInfo__get_AddedHp(grandInfo, 0LL);
  Atk_k__BackingField = this->fields._Atk_k__BackingField;
  this->fields._Hp_k__BackingField = AddedHp + Hp_k__BackingField;
  this->fields._Atk_k__BackingField = UserServantGrandInfo__get_AddedAtk(grandInfo, 0LL) + Atk_k__BackingField;
}


bool __fastcall ServantOverwriteStatus__Equals(
        ServantOverwriteStatus_o *this,
        ServantOverwriteStatus_o *targetStatus,
        const MethodInfo *method)
{
  ServantOverwriteStatus_o *v4; // x20
  bool v5; // w0
  int32_t Hp_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4AFD741 & 1) == 0 )
  {
    this = (ServantOverwriteStatus_o *)sub_1BC3008(&Method_System_Linq_Enumerable_SequenceEqual_int___, targetStatus);
    byte_4AFD741 = 1;
  }
  Hp_k__BackingField = v4->fields._Hp_k__BackingField;
  if ( !targetStatus )
    sub_1BC3264(this, targetStatus);
  v5 = System_Int32__Equals_63857188((int32_t)&Hp_k__BackingField, targetStatus->fields._Hp_k__BackingField, 0LL)
    && (Hp_k__BackingField = v4->fields._Atk_k__BackingField,
        System_Int32__Equals_63857188((int32_t)&Hp_k__BackingField, targetStatus->fields._Atk_k__BackingField, 0LL))
    && (Hp_k__BackingField = v4->fields._Cost_k__BackingField,
        System_Int32__Equals_63857188((int32_t)&Hp_k__BackingField, targetStatus->fields._Cost_k__BackingField, 0LL))
    && (Hp_k__BackingField = v4->fields._Rarity_k__BackingField,
        System_Int32__Equals_63857188((int32_t)&Hp_k__BackingField, targetStatus->fields._Rarity_k__BackingField, 0LL))
    && System_Linq_Enumerable__SequenceEqual_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields._ClassPassive_k__BackingField,
         (System_Collections_Generic_IEnumerable_TSource__o *)targetStatus->fields._ClassPassive_k__BackingField,
         (const MethodInfo_3038F70 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  return v5;
}


bool __fastcall ServantOverwriteStatus__IsEqualForSort(
        ServantOverwriteStatus_o *this,
        ServantOverwriteStatus_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1BC3264(this, 0LL);
  return this->fields._Hp_k__BackingField == target->fields._Hp_k__BackingField
      && this->fields._Atk_k__BackingField == target->fields._Atk_k__BackingField
      && this->fields._Rarity_k__BackingField == target->fields._Rarity_k__BackingField
      && this->fields._Cost_k__BackingField == target->fields._Cost_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOverwriteStatus__Overwrite(
        ServantOverwriteStatus_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t selectedLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x22
  ServantLimitEntity_o *v16; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AFD73D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1BC3008(&DataManager_TypeInfo, v11);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    byte_4AFD73D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)Master_object,
          &entity,
          svtId,
          selectedLimitCount,
          0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object
    || (v15 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                svtId,
                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitMaster___)) == 0LL) )
  {
LABEL_13:
    sub_1BC3264(Master_object, v14);
  }
  v16 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, limitCount, 0LL);
  ServantOverwriteStatus__OverwriteRarity(this, v16, entity, v17);
  ServantOverwriteStatus__OverwriteCost(this, (ServantEntity_o *)v15, entity, v18);
  ServantOverwriteStatus__OverwriteClassPassive(this, (ServantEntity_o *)v15, entity, v19);
}


void __fastcall ServantOverwriteStatus__OverwriteAtk(
        ServantOverwriteStatus_o *this,
        ServantEntity_o *servantEntity,
        ServantLimitEntity_o *servantLimitEntity,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        int32_t level,
        int32_t adjustAtk,
        const MethodInfo *method)
{
  ServantOverwriteStatus_o *v12; // x20
  __int64 v13; // x1
  int32_t v14; // w24
  int32_t OverwriteAtkMax; // w0
  int32_t atkBase; // w1
  int32_t v17; // w23
  int32_t OverwriteAtkBase; // w22

  v12 = this;
  if ( (byte_4AFD740 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantExpMaster___, servantEntity);
    this = (ServantOverwriteStatus_o *)sub_1BC3008(&DataManager_TypeInfo, v13);
    byte_4AFD740 = 1;
  }
  if ( !servantLimitAddEntity )
    goto LABEL_15;
  if ( ServantLimitAddEntity__HasKeyOverwriteExpType(servantLimitAddEntity, 0LL)
    && ServantLimitAddEntity__HasKeyOverwriteAtkMax(servantLimitAddEntity, 0LL) )
  {
    this = (ServantOverwriteStatus_o *)ServantLimitAddEntity__HasKeyOverwriteAtkBase(servantLimitAddEntity, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( servantEntity )
      {
        this = (ServantOverwriteStatus_o *)ServantLimitAddEntity__GetOverwriteExpType(
                                             servantLimitAddEntity,
                                             servantEntity->fields.expType,
                                             0LL);
        if ( servantLimitEntity )
        {
          v14 = (int)this;
          OverwriteAtkMax = ServantLimitAddEntity__GetOverwriteAtkMax(
                              servantLimitAddEntity,
                              servantLimitEntity->fields.atkMax,
                              0LL);
          atkBase = servantLimitEntity->fields.atkBase;
          v17 = OverwriteAtkMax;
          OverwriteAtkBase = ServantLimitAddEntity__GetOverwriteAtkBase(servantLimitAddEntity, atkBase, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (ServantOverwriteStatus_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantExpMaster___);
          if ( this )
          {
            this = (ServantOverwriteStatus_o *)ServantExpMaster__GetEntity((ServantExpMaster_o *)this, v14, level, 0LL);
            if ( this )
            {
              v12->fields._Atk_k__BackingField = CombineUtility__CalculateAtk(
                                                   OverwriteAtkBase,
                                                   v17,
                                                   this->fields._Cost_k__BackingField,
                                                   adjustAtk,
                                                   0LL);
              return;
            }
          }
        }
      }
LABEL_15:
      sub_1BC3264(this, servantEntity);
    }
  }
}


void __fastcall ServantOverwriteStatus__OverwriteClassPassive(
        ServantOverwriteStatus_o *this,
        ServantEntity_o *servantEntity,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        const MethodInfo *method)
{
  struct System_Int32_array *OverwriteClassPassive; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( !servantEntity || !servantLimitAddEntity )
    sub_1BC3264(this, servantEntity);
  OverwriteClassPassive = ServantLimitAddEntity__GetOverwriteClassPassive(
                            servantLimitAddEntity,
                            servantEntity->fields.classPassive,
                            0LL);
  this->fields._ClassPassive_k__BackingField = OverwriteClassPassive;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._ClassPassive_k__BackingField,
    (int32_t)OverwriteClassPassive,
    v6,
    v7);
}


void __fastcall ServantOverwriteStatus__OverwriteCost(
        ServantOverwriteStatus_o *this,
        ServantEntity_o *servantEntity,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        const MethodInfo *method)
{
  if ( !servantEntity || !servantLimitAddEntity )
    sub_1BC3264(this, servantEntity);
  this->fields._Cost_k__BackingField = ServantLimitAddEntity__GetOverwriteCost(
                                         servantLimitAddEntity,
                                         servantEntity->fields.cost,
                                         0LL);
}


void __fastcall ServantOverwriteStatus__OverwriteHp(
        ServantOverwriteStatus_o *this,
        ServantEntity_o *servantEntity,
        ServantLimitEntity_o *servantLimitEntity,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        int32_t level,
        int32_t adjustHp,
        const MethodInfo *method)
{
  ServantOverwriteStatus_o *v12; // x20
  __int64 v13; // x1
  int32_t v14; // w24
  int32_t OverwriteHpMax; // w0
  int32_t hpBase; // w1
  int32_t v17; // w23
  int32_t OverwriteHpBase; // w22

  v12 = this;
  if ( (byte_4AFD73F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantExpMaster___, servantEntity);
    this = (ServantOverwriteStatus_o *)sub_1BC3008(&DataManager_TypeInfo, v13);
    byte_4AFD73F = 1;
  }
  if ( !servantLimitAddEntity )
    goto LABEL_15;
  if ( ServantLimitAddEntity__HasKeyOverwriteExpType(servantLimitAddEntity, 0LL)
    && ServantLimitAddEntity__HasKeyOverwriteHpMax(servantLimitAddEntity, 0LL) )
  {
    this = (ServantOverwriteStatus_o *)ServantLimitAddEntity__HasKeyOverwriteHpBase(servantLimitAddEntity, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( servantEntity )
      {
        this = (ServantOverwriteStatus_o *)ServantLimitAddEntity__GetOverwriteExpType(
                                             servantLimitAddEntity,
                                             servantEntity->fields.expType,
                                             0LL);
        if ( servantLimitEntity )
        {
          v14 = (int)this;
          OverwriteHpMax = ServantLimitAddEntity__GetOverwriteHpMax(
                             servantLimitAddEntity,
                             servantLimitEntity->fields.hpMax,
                             0LL);
          hpBase = servantLimitEntity->fields.hpBase;
          v17 = OverwriteHpMax;
          OverwriteHpBase = ServantLimitAddEntity__GetOverwriteHpBase(servantLimitAddEntity, hpBase, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (ServantOverwriteStatus_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantExpMaster___);
          if ( this )
          {
            this = (ServantOverwriteStatus_o *)ServantExpMaster__GetEntity((ServantExpMaster_o *)this, v14, level, 0LL);
            if ( this )
            {
              v12->fields._Hp_k__BackingField = CombineUtility__CalculateHp(
                                                  OverwriteHpBase,
                                                  v17,
                                                  this->fields._Cost_k__BackingField,
                                                  adjustHp,
                                                  0LL);
              return;
            }
          }
        }
      }
LABEL_15:
      sub_1BC3264(this, servantEntity);
    }
  }
}


void __fastcall ServantOverwriteStatus__OverwriteRarity(
        ServantOverwriteStatus_o *this,
        ServantLimitEntity_o *servantLimitEntity,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        const MethodInfo *method)
{
  if ( !servantLimitEntity || !servantLimitAddEntity )
    sub_1BC3264(this, servantLimitEntity);
  this->fields._Rarity_k__BackingField = ServantLimitAddEntity__GetOverwriteRarity(
                                           servantLimitAddEntity,
                                           servantLimitEntity->fields.rarity,
                                           0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOverwriteStatus__Overwrite_32953212(
        ServantOverwriteStatus_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t selectedLimitCount,
        int32_t level,
        int32_t adjustHp,
        int32_t adjustAtk,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x25
  ServantLimitEntity_o *v22; // x23
  const MethodInfo *v23; // x6
  const MethodInfo *v24; // x6
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AFD73E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitMaster___, v15);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v16);
    sub_1BC3008(&DataManager_TypeInfo, v17);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    byte_4AFD73E = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)Master_object,
          &entity,
          svtId,
          selectedLimitCount,
          0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object
    || (v21 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                svtId,
                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitMaster___)) == 0LL) )
  {
LABEL_13:
    sub_1BC3264(Master_object, v20);
  }
  v22 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, limitCount, 0LL);
  ServantOverwriteStatus__OverwriteHp(this, (ServantEntity_o *)v21, v22, entity, level, adjustHp, v23);
  ServantOverwriteStatus__OverwriteAtk(this, (ServantEntity_o *)v21, v22, entity, level, adjustAtk, v24);
  ServantOverwriteStatus__OverwriteRarity(this, v22, entity, v25);
  ServantOverwriteStatus__OverwriteCost(this, (ServantEntity_o *)v21, entity, v26);
  ServantOverwriteStatus__OverwriteClassPassive(this, (ServantEntity_o *)v21, entity, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOverwriteStatus__Set(
        ServantOverwriteStatus_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t hp,
        int32_t atk,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *Master_object; // x0
  __int64 v15; // x1
  Il2CppObject *Entity; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w8
  struct System_Int32_array *monitor; // x1

  if ( (byte_4AFD73C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    byte_4AFD73C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             svtId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !Master_object
    || (Master_object = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, limitCount, 0LL),
        this->fields._Hp_k__BackingField = hp,
        this->fields._Atk_k__BackingField = atk,
        !Master_object)
    || (v19 = *((_DWORD *)Master_object + 6),
        this->fields._ActualRarity_k__BackingField = v19,
        this->fields._Rarity_k__BackingField = v19,
        !Entity) )
  {
LABEL_10:
    sub_1BC3264(Master_object, v15);
  }
  this->fields._Cost_k__BackingField = (int32_t)Entity[9].monitor;
  monitor = (struct System_Int32_array *)Entity[10].monitor;
  this->fields._ClassPassive_k__BackingField = monitor;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._ClassPassive_k__BackingField, (int32_t)monitor, v17, v18);
}


int32_t __fastcall ServantOverwriteStatus__get_ActualRarity(ServantOverwriteStatus_o *this, const MethodInfo *method)
{
  return this->fields._ActualRarity_k__BackingField;
}


int32_t __fastcall ServantOverwriteStatus__get_Atk(ServantOverwriteStatus_o *this, const MethodInfo *method)
{
  return this->fields._Atk_k__BackingField;
}


System_Int32_array *__fastcall ServantOverwriteStatus__get_ClassPassive(
        ServantOverwriteStatus_o *this,
        const MethodInfo *method)
{
  return this->fields._ClassPassive_k__BackingField;
}


int32_t __fastcall ServantOverwriteStatus__get_Cost(ServantOverwriteStatus_o *this, const MethodInfo *method)
{
  return this->fields._Cost_k__BackingField;
}


int32_t __fastcall ServantOverwriteStatus__get_Hp(ServantOverwriteStatus_o *this, const MethodInfo *method)
{
  return this->fields._Hp_k__BackingField;
}


int32_t __fastcall ServantOverwriteStatus__get_Rarity(ServantOverwriteStatus_o *this, const MethodInfo *method)
{
  return this->fields._Rarity_k__BackingField;
}


void __fastcall ServantOverwriteStatus__set_ActualRarity(
        ServantOverwriteStatus_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ActualRarity_k__BackingField = value;
}


void __fastcall ServantOverwriteStatus__set_Atk(
        ServantOverwriteStatus_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Atk_k__BackingField = value;
}


void __fastcall ServantOverwriteStatus__set_ClassPassive(
        ServantOverwriteStatus_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ClassPassive_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._ClassPassive_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ServantOverwriteStatus__set_Cost(
        ServantOverwriteStatus_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Cost_k__BackingField = value;
}


void __fastcall ServantOverwriteStatus__set_Hp(ServantOverwriteStatus_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Hp_k__BackingField = value;
}


void __fastcall ServantOverwriteStatus__set_Rarity(
        ServantOverwriteStatus_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Rarity_k__BackingField = value;
}