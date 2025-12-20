void ServantOverwriteStatus___ctor(
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

  if ( (byte_4D288B6 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D288B6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !userServantEntity )
    sub_1C942F0(v7, v8);
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v10;
  *(_QWORD *)&v19.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v19, 0);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userServantEntity->fields.limitCount, 0);
  ServantOverwriteStatus__Set(this, v11, v12, userServantEntity->fields.hp, userServantEntity->fields.atk, v13);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userServantEntity->fields.svtId, 0);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userServantEntity->fields.limitCount, 0);
  ServantOverwriteStatus__Overwrite_35768260(
    this,
    v14,
    v15,
    selectedLimitCount,
    userServantEntity->fields.lv,
    userServantEntity->fields.adjustHp,
    userServantEntity->fields.adjustAtk,
    v16);
  GrandInfo = UserServantEntity__get_GrandInfo(userServantEntity, 0);
  ServantOverwriteStatus__ApplyGrandServantEffect(this, GrandInfo, v18);
}


void ServantOverwriteStatus___ctor_35768796(
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

  if ( (byte_4D288B7 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D288B7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !servantLeaderInfo )
    sub_1C942F0(v7, v8);
  v10 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v15, 0);
  ServantOverwriteStatus__Set(
    this,
    v11,
    servantLeaderInfo->fields.limitCount,
    servantLeaderInfo->fields.hp,
    servantLeaderInfo->fields.atk,
    v12);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(servantLeaderInfo->fields.svtId, 0);
  ServantOverwriteStatus__Overwrite(this, v13, servantLeaderInfo->fields.limitCount, selectedLimitCount, v14);
}


void ServantOverwriteStatus___ctor_35769336(
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

  if ( (byte_4D288B8 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D288B8 = 1;
  }
  *(_QWORD *)hp = 0;
  atk = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !userSvtCollectionEntity )
    sub_1C942F0(v7, v8);
  UserServantCollectionEntity__getCollectionStatus(userSvtCollectionEntity, &hp[1], hp, &atk, 0);
  v10 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v17, 0);
  ServantOverwriteStatus__Set(this, v11, userSvtCollectionEntity->fields.maxLimitCount, hp[0], atk, v12);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userSvtCollectionEntity->fields.svtId, 0);
  ServantOverwriteStatus__Overwrite_35768260(
    this,
    v13,
    userSvtCollectionEntity->fields.maxLimitCount,
    selectedLimitCount,
    hp[1],
    0,
    0,
    v14);
}


void ServantOverwriteStatus___ctor_35769576(
        ServantOverwriteStatus_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t selectedLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x5
  const MethodInfo *v10; // x4

  System_Object___ctor((Il2CppObject *)this, 0);
  ServantOverwriteStatus__Set(this, svtId, limitCount, 0, 0, v9);
  ServantOverwriteStatus__Overwrite(this, svtId, limitCount, selectedLimitCount, v10);
}


void ServantOverwriteStatus___ctor_35769668(
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

  System_Object___ctor((Il2CppObject *)this, 0);
  ServantOverwriteStatus__Set(this, svtId, limitCount, hp, atk, v19);
  ServantOverwriteStatus__Overwrite_35768260(
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


void ServantOverwriteStatus__ApplyGrandServantEffect(
        ServantOverwriteStatus_o *this,
        UserServantGrandInfo_o *grandInfo,
        const MethodInfo *method)
{
  int32_t Hp_k__BackingField; // w21
  int32_t AddedHp; // w0
  int32_t Atk_k__BackingField; // w22

  if ( !grandInfo )
    sub_1C942F0(this, 0);
  Hp_k__BackingField = this->fields._Hp_k__BackingField;
  AddedHp = UserServantGrandInfo__get_AddedHp(grandInfo, 0);
  Atk_k__BackingField = this->fields._Atk_k__BackingField;
  this->fields._Hp_k__BackingField = AddedHp + Hp_k__BackingField;
  this->fields._Atk_k__BackingField = UserServantGrandInfo__get_AddedAtk(grandInfo, 0) + Atk_k__BackingField;
}


bool ServantOverwriteStatus__Equals(
        ServantOverwriteStatus_o *this,
        ServantOverwriteStatus_o *targetStatus,
        const MethodInfo *method)
{
  ServantOverwriteStatus_o *v4; // x20
  bool v5; // w0
  int32_t Hp_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4D288BE & 1) == 0 )
  {
    this = (ServantOverwriteStatus_o *)sub_1C94098(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_4D288BE = 1;
  }
  Hp_k__BackingField = v4->fields._Hp_k__BackingField;
  if ( !targetStatus )
    sub_1C942F0(this, targetStatus);
  v5 = System_Int32__Equals_65926068((int32_t)&Hp_k__BackingField, targetStatus->fields._Hp_k__BackingField, 0)
    && (Hp_k__BackingField = v4->fields._Atk_k__BackingField,
        System_Int32__Equals_65926068((int32_t)&Hp_k__BackingField, targetStatus->fields._Atk_k__BackingField, 0))
    && (Hp_k__BackingField = v4->fields._Cost_k__BackingField,
        System_Int32__Equals_65926068((int32_t)&Hp_k__BackingField, targetStatus->fields._Cost_k__BackingField, 0))
    && (Hp_k__BackingField = v4->fields._Rarity_k__BackingField,
        System_Int32__Equals_65926068((int32_t)&Hp_k__BackingField, targetStatus->fields._Rarity_k__BackingField, 0))
    && System_Linq_Enumerable__SequenceEqual_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields._ClassPassive_k__BackingField,
         (System_Collections_Generic_IEnumerable_TSource__o *)targetStatus->fields._ClassPassive_k__BackingField,
         (const MethodInfo_31D66A0 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  return v5;
}


bool ServantOverwriteStatus__IsEqualForSort(
        ServantOverwriteStatus_o *this,
        ServantOverwriteStatus_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1C942F0(this, 0);
  return this->fields._Hp_k__BackingField == target->fields._Hp_k__BackingField
      && this->fields._Atk_k__BackingField == target->fields._Atk_k__BackingField
      && this->fields._Rarity_k__BackingField == target->fields._Rarity_k__BackingField
      && this->fields._Cost_k__BackingField == target->fields._Cost_k__BackingField;
}


void ServantOverwriteStatus__Overwrite(
        ServantOverwriteStatus_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t selectedLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x22
  ServantLimitEntity_o *v12; // x0
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D288BA & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4D288BA = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)Master_object,
          &entity,
          svtId,
          selectedLimitCount,
          0) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object
    || (v11 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                svtId,
                (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitMaster___)) == 0) )
  {
LABEL_13:
    sub_1C942F0(Master_object, v10);
  }
  v12 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, limitCount, 0);
  ServantOverwriteStatus__OverwriteRarity(this, v12, entity, v13);
  ServantOverwriteStatus__OverwriteCost(this, (ServantEntity_o *)v11, entity, v14);
  ServantOverwriteStatus__OverwriteClassPassive(this, (ServantEntity_o *)v11, entity, v15);
}


void ServantOverwriteStatus__OverwriteAtk(
        ServantOverwriteStatus_o *this,
        ServantEntity_o *servantEntity,
        ServantLimitEntity_o *servantLimitEntity,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        int32_t level,
        int32_t adjustAtk,
        const MethodInfo *method)
{
  ServantOverwriteStatus_o *v12; // x20
  int32_t v13; // w24
  int32_t OverwriteAtkMax; // w0
  int32_t atkBase; // w1
  int32_t v16; // w23
  int32_t OverwriteAtkBase; // w22

  v12 = this;
  if ( (byte_4D288BD & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantExpMaster___);
    this = (ServantOverwriteStatus_o *)sub_1C94098(&DataManager_TypeInfo);
    byte_4D288BD = 1;
  }
  if ( !servantLimitAddEntity )
    goto LABEL_15;
  if ( ServantLimitAddEntity__HasKeyOverwriteExpType(servantLimitAddEntity, 0)
    && ServantLimitAddEntity__HasKeyOverwriteAtkMax(servantLimitAddEntity, 0) )
  {
    this = (ServantOverwriteStatus_o *)ServantLimitAddEntity__HasKeyOverwriteAtkBase(servantLimitAddEntity, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( servantEntity )
      {
        this = (ServantOverwriteStatus_o *)ServantLimitAddEntity__GetOverwriteExpType(
                                             servantLimitAddEntity,
                                             servantEntity->fields.expType,
                                             0);
        if ( servantLimitEntity )
        {
          v13 = (int)this;
          OverwriteAtkMax = ServantLimitAddEntity__GetOverwriteAtkMax(
                              servantLimitAddEntity,
                              servantLimitEntity->fields.atkMax,
                              0);
          atkBase = servantLimitEntity->fields.atkBase;
          v16 = OverwriteAtkMax;
          OverwriteAtkBase = ServantLimitAddEntity__GetOverwriteAtkBase(servantLimitAddEntity, atkBase, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (ServantOverwriteStatus_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantExpMaster___);
          if ( this )
          {
            this = (ServantOverwriteStatus_o *)ServantExpMaster__GetEntity((ServantExpMaster_o *)this, v13, level, 0);
            if ( this )
            {
              v12->fields._Atk_k__BackingField = CombineUtility__CalculateAtk(
                                                   OverwriteAtkBase,
                                                   v16,
                                                   this->fields._Cost_k__BackingField,
                                                   adjustAtk,
                                                   0);
              return;
            }
          }
        }
      }
LABEL_15:
      sub_1C942F0(this, servantEntity);
    }
  }
}


void ServantOverwriteStatus__OverwriteClassPassive(
        ServantOverwriteStatus_o *this,
        ServantEntity_o *servantEntity,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        const MethodInfo *method)
{
  struct System_Int32_array *OverwriteClassPassive; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( !servantEntity || !servantLimitAddEntity )
    sub_1C942F0(this, servantEntity);
  OverwriteClassPassive = ServantLimitAddEntity__GetOverwriteClassPassive(
                            servantLimitAddEntity,
                            servantEntity->fields.classPassive,
                            0);
  this->fields._ClassPassive_k__BackingField = OverwriteClassPassive;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClassPassive_k__BackingField,
    (int32_t)OverwriteClassPassive,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void ServantOverwriteStatus__OverwriteCost(
        ServantOverwriteStatus_o *this,
        ServantEntity_o *servantEntity,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        const MethodInfo *method)
{
  if ( !servantEntity || !servantLimitAddEntity )
    sub_1C942F0(this, servantEntity);
  this->fields._Cost_k__BackingField = ServantLimitAddEntity__GetOverwriteCost(
                                         servantLimitAddEntity,
                                         servantEntity->fields.cost,
                                         0);
}


void ServantOverwriteStatus__OverwriteHp(
        ServantOverwriteStatus_o *this,
        ServantEntity_o *servantEntity,
        ServantLimitEntity_o *servantLimitEntity,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        int32_t level,
        int32_t adjustHp,
        const MethodInfo *method)
{
  ServantOverwriteStatus_o *v12; // x20
  int32_t v13; // w24
  int32_t OverwriteHpMax; // w0
  int32_t hpBase; // w1
  int32_t v16; // w23
  int32_t OverwriteHpBase; // w22

  v12 = this;
  if ( (byte_4D288BC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantExpMaster___);
    this = (ServantOverwriteStatus_o *)sub_1C94098(&DataManager_TypeInfo);
    byte_4D288BC = 1;
  }
  if ( !servantLimitAddEntity )
    goto LABEL_15;
  if ( ServantLimitAddEntity__HasKeyOverwriteExpType(servantLimitAddEntity, 0)
    && ServantLimitAddEntity__HasKeyOverwriteHpMax(servantLimitAddEntity, 0) )
  {
    this = (ServantOverwriteStatus_o *)ServantLimitAddEntity__HasKeyOverwriteHpBase(servantLimitAddEntity, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( servantEntity )
      {
        this = (ServantOverwriteStatus_o *)ServantLimitAddEntity__GetOverwriteExpType(
                                             servantLimitAddEntity,
                                             servantEntity->fields.expType,
                                             0);
        if ( servantLimitEntity )
        {
          v13 = (int)this;
          OverwriteHpMax = ServantLimitAddEntity__GetOverwriteHpMax(
                             servantLimitAddEntity,
                             servantLimitEntity->fields.hpMax,
                             0);
          hpBase = servantLimitEntity->fields.hpBase;
          v16 = OverwriteHpMax;
          OverwriteHpBase = ServantLimitAddEntity__GetOverwriteHpBase(servantLimitAddEntity, hpBase, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (ServantOverwriteStatus_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantExpMaster___);
          if ( this )
          {
            this = (ServantOverwriteStatus_o *)ServantExpMaster__GetEntity((ServantExpMaster_o *)this, v13, level, 0);
            if ( this )
            {
              v12->fields._Hp_k__BackingField = CombineUtility__CalculateHp(
                                                  OverwriteHpBase,
                                                  v16,
                                                  this->fields._Cost_k__BackingField,
                                                  adjustHp,
                                                  0);
              return;
            }
          }
        }
      }
LABEL_15:
      sub_1C942F0(this, servantEntity);
    }
  }
}


void ServantOverwriteStatus__OverwriteRarity(
        ServantOverwriteStatus_o *this,
        ServantLimitEntity_o *servantLimitEntity,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        const MethodInfo *method)
{
  if ( !servantLimitEntity || !servantLimitAddEntity )
    sub_1C942F0(this, servantLimitEntity);
  this->fields._Rarity_k__BackingField = ServantLimitAddEntity__GetOverwriteRarity(
                                           servantLimitAddEntity,
                                           servantLimitEntity->fields.rarity,
                                           0);
}


void ServantOverwriteStatus__Overwrite_35768260(
        ServantOverwriteStatus_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t selectedLimitCount,
        int32_t level,
        int32_t adjustHp,
        int32_t adjustAtk,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x25
  ServantLimitEntity_o *v18; // x23
  const MethodInfo *v19; // x6
  const MethodInfo *v20; // x6
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D288BB & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4D288BB = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)Master_object,
          &entity,
          svtId,
          selectedLimitCount,
          0) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object
    || (v17 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                svtId,
                (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitMaster___)) == 0) )
  {
LABEL_13:
    sub_1C942F0(Master_object, v16);
  }
  v18 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, limitCount, 0);
  ServantOverwriteStatus__OverwriteHp(this, (ServantEntity_o *)v17, v18, entity, level, adjustHp, v19);
  ServantOverwriteStatus__OverwriteAtk(this, (ServantEntity_o *)v17, v18, entity, level, adjustAtk, v20);
  ServantOverwriteStatus__OverwriteRarity(this, v18, entity, v21);
  ServantOverwriteStatus__OverwriteCost(this, (ServantEntity_o *)v17, entity, v22);
  ServantOverwriteStatus__OverwriteClassPassive(this, (ServantEntity_o *)v17, entity, v23);
}


void ServantOverwriteStatus__Set(
        ServantOverwriteStatus_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t hp,
        int32_t atk,
        const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w8
  struct System_Int32_array *monitor; // x1

  if ( (byte_4D288B9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4D288B9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             svtId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !Master_object
    || (Master_object = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, limitCount, 0),
        this->fields._Hp_k__BackingField = hp,
        this->fields._Atk_k__BackingField = atk,
        !Master_object)
    || (v20 = *((_DWORD *)Master_object + 6),
        this->fields._ActualRarity_k__BackingField = v20,
        this->fields._Rarity_k__BackingField = v20,
        !Entity) )
  {
LABEL_10:
    sub_1C942F0(Master_object, v12);
  }
  this->fields._Cost_k__BackingField = (int32_t)Entity[9].monitor;
  monitor = (struct System_Int32_array *)Entity[10].monitor;
  this->fields._ClassPassive_k__BackingField = monitor;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClassPassive_k__BackingField,
    (int32_t)monitor,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


int32_t ServantOverwriteStatus__get_ActualRarity(ServantOverwriteStatus_o *this, const MethodInfo *method)
{
  return this->fields._ActualRarity_k__BackingField;
}


int32_t ServantOverwriteStatus__get_Atk(ServantOverwriteStatus_o *this, const MethodInfo *method)
{
  return this->fields._Atk_k__BackingField;
}


System_Int32_array *ServantOverwriteStatus__get_ClassPassive(ServantOverwriteStatus_o *this, const MethodInfo *method)
{
  return this->fields._ClassPassive_k__BackingField;
}


int32_t ServantOverwriteStatus__get_Cost(ServantOverwriteStatus_o *this, const MethodInfo *method)
{
  return this->fields._Cost_k__BackingField;
}


int32_t ServantOverwriteStatus__get_Hp(ServantOverwriteStatus_o *this, const MethodInfo *method)
{
  return this->fields._Hp_k__BackingField;
}


int32_t ServantOverwriteStatus__get_Rarity(ServantOverwriteStatus_o *this, const MethodInfo *method)
{
  return this->fields._Rarity_k__BackingField;
}


void ServantOverwriteStatus__set_ActualRarity(ServantOverwriteStatus_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ActualRarity_k__BackingField = value;
}


void ServantOverwriteStatus__set_Atk(ServantOverwriteStatus_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Atk_k__BackingField = value;
}


void ServantOverwriteStatus__set_ClassPassive(
        ServantOverwriteStatus_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ClassPassive_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClassPassive_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantOverwriteStatus__set_Cost(ServantOverwriteStatus_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Cost_k__BackingField = value;
}


void ServantOverwriteStatus__set_Hp(ServantOverwriteStatus_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Hp_k__BackingField = value;
}


void ServantOverwriteStatus__set_Rarity(ServantOverwriteStatus_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Rarity_k__BackingField = value;
}