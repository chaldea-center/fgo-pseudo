void ServantOverwriteStatus___ctor(
        ServantOverwriteStatus_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t stageLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w22
  int32_t v13; // w0
  const MethodInfo *v14; // x5
  int32_t v15; // w22
  int32_t v16; // w2
  const MethodInfo *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_596BB1A & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596BB1A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !userServantEntity )
    sub_2213CDC(v7, v8);
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(userServantEntity->fields.limitCount, 0);
  ServantOverwriteStatus__Set(this, v12, v13, userServantEntity->fields.hp, userServantEntity->fields.atk, v14);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(userServantEntity->fields.svtId, 0);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(userServantEntity->fields.limitCount, 0);
  ServantOverwriteStatus__Overwrite_40470648(
    this,
    v15,
    v16,
    stageLimitCount,
    userServantEntity->fields.lv,
    userServantEntity->fields.adjustHp,
    userServantEntity->fields.adjustAtk,
    v17);
}


void ServantOverwriteStatus___ctor_40471092(
        ServantOverwriteStatus_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t svtId,
        int32_t stageLimitCount,
        const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t v14; // w0
  const MethodInfo *v15; // x5
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Entity; // x23
  Il2CppObject *v19; // x24
  ServantLimitEntity_o *v20; // x24
  _DWORD *v21; // x23
  int32_t v22; // w0
  int32_t atkMax; // w1
  int32_t atkBase; // w8
  int32_t v25; // w2
  int32_t adjustAtk; // w3
  int32_t v27; // w2
  const MethodInfo *v28; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_596BB1B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596BB1B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !userServantEntity )
    goto LABEL_15;
  v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
  *(_QWORD *)&v29.fields.currentCryptoKey = v12;
  *(_QWORD *)&v29.fields.fakeValue = v13;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v29, 0);
  ServantOverwriteStatus__Set(this, svtId, v14, userServantEntity->fields.hp, userServantEntity->fields.atk, v15);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   svtId,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        v19 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___),
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                  userServantEntity->fields.limitCount,
                                  0),
        !v19)
    || (v20 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v19, svtId, (int32_t)Master_object, 0),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExpMaster___),
        !Entity)
    || !Master_object
    || (Master_object = ServantExpMaster__GetEntity(
                          (ServantExpMaster_o *)Master_object,
                          HIDWORD(Entity[8].klass),
                          userServantEntity->fields.lv,
                          0),
        !v20)
    || (v21 = Master_object) == 0 )
  {
LABEL_15:
    sub_2213CDC(Master_object, v10);
  }
  v22 = CombineUtility__CalculateHp(
          v20->fields.hpBase,
          v20->fields.hpMax,
          *((_DWORD *)Master_object + 7),
          userServantEntity->fields.adjustHp,
          0);
  atkBase = v20->fields.atkBase;
  atkMax = v20->fields.atkMax;
  v25 = v21[7];
  adjustAtk = userServantEntity->fields.adjustAtk;
  this->fields._Hp_k__BackingField = v22;
  this->fields._Atk_k__BackingField = CombineUtility__CalculateAtk(atkBase, atkMax, v25, adjustAtk, 0);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(userServantEntity->fields.limitCount, 0);
  ServantOverwriteStatus__Overwrite_40470648(
    this,
    svtId,
    v27,
    stageLimitCount,
    userServantEntity->fields.lv,
    userServantEntity->fields.adjustHp,
    userServantEntity->fields.adjustAtk,
    v28);
}


void ServantOverwriteStatus___ctor_40471616(
        ServantOverwriteStatus_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t stageLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w0
  const MethodInfo *v13; // x5
  int32_t v14; // w0
  const MethodInfo *v15; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_596BB1C & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596BB1C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !servantLeaderInfo )
    sub_2213CDC(v7, v8);
  v10 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  ServantOverwriteStatus__Set(
    this,
    v12,
    servantLeaderInfo->fields.limitCount,
    servantLeaderInfo->fields.hp,
    servantLeaderInfo->fields.atk,
    v13);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(servantLeaderInfo->fields.svtId, 0);
  ServantOverwriteStatus__Overwrite(this, v14, servantLeaderInfo->fields.limitCount, stageLimitCount, v15);
}


void ServantOverwriteStatus___ctor_40472156(
        ServantOverwriteStatus_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t svtId,
        int32_t stageLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  const MethodInfo *v13; // x4

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !servantLeaderInfo || (afterTransformSvtInfo = servantLeaderInfo->fields.afterTransformSvtInfo) == 0 )
    sub_2213CDC(v9, v10);
  ServantOverwriteStatus__Set(
    this,
    svtId,
    servantLeaderInfo->fields.limitCount,
    afterTransformSvtInfo->fields.hp,
    afterTransformSvtInfo->fields.atk,
    v11);
  ServantOverwriteStatus__Overwrite(this, svtId, servantLeaderInfo->fields.limitCount, stageLimitCount, v13);
}


void ServantOverwriteStatus___ctor_40472260(
        ServantOverwriteStatus_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t stageLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w0
  const MethodInfo *v14; // x5
  int32_t v15; // w0
  const MethodInfo *v16; // x7
  int32_t atk; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t hp[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_596BB1D & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596BB1D = 1;
  }
  *(_QWORD *)hp = 0;
  atk = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !userSvtCollectionEntity )
    sub_2213CDC(v7, v8);
  UserServantCollectionEntity__getCollectionStatus(userSvtCollectionEntity, &hp[1], hp, &atk, 0);
  v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v19, 0);
  ServantOverwriteStatus__Set(this, v13, userSvtCollectionEntity->fields.maxLimitCount, hp[0], atk, v14);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(userSvtCollectionEntity->fields.svtId, 0);
  ServantOverwriteStatus__Overwrite_40470648(
    this,
    v15,
    userSvtCollectionEntity->fields.maxLimitCount,
    stageLimitCount,
    hp[1],
    0,
    0,
    v16);
}


void ServantOverwriteStatus___ctor_40472500(
        ServantOverwriteStatus_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t svtId,
        int32_t stageLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  const MethodInfo *v12; // x7
  int32_t atk; // [xsp+Ch] [xbp-34h] BYREF
  int32_t hp; // [xsp+18h] [xbp-28h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-24h] BYREF

  atk = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !userSvtCollectionEntity )
    sub_2213CDC(v9, v10);
  UserServantCollectionEntity__getCollectionStatus_50148372(userSvtCollectionEntity, svtId, &lv, &hp, &atk, 0);
  ServantOverwriteStatus__Set(this, svtId, userSvtCollectionEntity->fields.maxLimitCount, hp, atk, v11);
  ServantOverwriteStatus__Overwrite_40470648(
    this,
    svtId,
    userSvtCollectionEntity->fields.maxLimitCount,
    stageLimitCount,
    lv,
    0,
    0,
    v12);
}


void ServantOverwriteStatus___ctor_40472656(
        ServantOverwriteStatus_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t stageLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x5
  const MethodInfo *v10; // x4

  System_Object___ctor((Il2CppObject *)this, 0);
  ServantOverwriteStatus__Set(this, svtId, limitCount, 0, 0, v9);
  ServantOverwriteStatus__Overwrite(this, svtId, limitCount, stageLimitCount, v10);
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
    sub_2213CDC(this, 0);
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
  int32_t Atk_k__BackingField; // w1
  int32_t Cost_k__BackingField; // w1
  int32_t Rarity_k__BackingField; // w1
  bool v8; // w0
  int32_t Hp_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_596BB23 & 1) == 0 )
  {
    this = (ServantOverwriteStatus_o *)sub_2213A60(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_596BB23 = 1;
  }
  Hp_k__BackingField = v4->fields._Hp_k__BackingField;
  if ( !targetStatus )
    sub_2213CDC(this, targetStatus);
  v8 = System_Int32__Equals_77138484((int32_t)&Hp_k__BackingField, targetStatus->fields._Hp_k__BackingField, 0)
    && (Atk_k__BackingField = targetStatus->fields._Atk_k__BackingField,
        Hp_k__BackingField = v4->fields._Atk_k__BackingField,
        System_Int32__Equals_77138484((int32_t)&Hp_k__BackingField, Atk_k__BackingField, 0))
    && (Cost_k__BackingField = targetStatus->fields._Cost_k__BackingField,
        Hp_k__BackingField = v4->fields._Cost_k__BackingField,
        System_Int32__Equals_77138484((int32_t)&Hp_k__BackingField, Cost_k__BackingField, 0))
    && (Rarity_k__BackingField = targetStatus->fields._Rarity_k__BackingField,
        Hp_k__BackingField = v4->fields._Rarity_k__BackingField,
        System_Int32__Equals_77138484((int32_t)&Hp_k__BackingField, Rarity_k__BackingField, 0))
    && System_Linq_Enumerable__SequenceEqual_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields._ClassPassive_k__BackingField,
         (System_Collections_Generic_IEnumerable_TSource__o *)targetStatus->fields._ClassPassive_k__BackingField,
         (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  return v8;
}


bool ServantOverwriteStatus__IsEqualForSort(
        ServantOverwriteStatus_o *this,
        ServantOverwriteStatus_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_2213CDC(this, 0);
  return this->fields._Hp_k__BackingField == target->fields._Hp_k__BackingField
      && this->fields._Atk_k__BackingField == target->fields._Atk_k__BackingField
      && this->fields._Rarity_k__BackingField == target->fields._Rarity_k__BackingField
      && this->fields._Cost_k__BackingField == target->fields._Cost_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void ServantOverwriteStatus__Overwrite(
        ServantOverwriteStatus_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t stageLimitCount,
        const MethodInfo *method)
{
  int v9; // w8
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *v14; // x22
  ServantLimitEntity_o *v15; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596BB1F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_596BB1F = 1;
  }
  v9 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)Master_object,
          &entity,
          svtId,
          stageLimitCount,
          0) )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object
    || (v14 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                svtId,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___)) == 0) )
  {
LABEL_13:
    sub_2213CDC(Master_object, v11);
  }
  v15 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, limitCount, 0);
  ServantOverwriteStatus__OverwriteRarity(this, v15, entity, v16);
  ServantOverwriteStatus__OverwriteCost(this, (ServantEntity_o *)v14, entity, v17);
  ServantOverwriteStatus__OverwriteClassPassive(this, (ServantEntity_o *)v14, entity, v18);
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
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t OverwriteAtkBase; // w22

  v12 = this;
  if ( (byte_596BB22 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantExpMaster___);
    this = (ServantOverwriteStatus_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_596BB22 = 1;
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
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v18);
          this = (ServantOverwriteStatus_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExpMaster___);
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
      sub_2213CDC(this, servantEntity);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( !servantEntity || !servantLimitAddEntity )
    sub_2213CDC(this, servantEntity);
  OverwriteClassPassive = ServantLimitAddEntity__GetOverwriteClassPassive(
                            servantLimitAddEntity,
                            servantEntity->fields.classPassive,
                            0);
  this->fields._ClassPassive_k__BackingField = OverwriteClassPassive;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClassPassive_k__BackingField,
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
    sub_2213CDC(this, servantEntity);
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
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t OverwriteHpBase; // w22

  v12 = this;
  if ( (byte_596BB21 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantExpMaster___);
    this = (ServantOverwriteStatus_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_596BB21 = 1;
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
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v18);
          this = (ServantOverwriteStatus_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExpMaster___);
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
      sub_2213CDC(this, servantEntity);
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
    sub_2213CDC(this, servantLimitEntity);
  this->fields._Rarity_k__BackingField = ServantLimitAddEntity__GetOverwriteRarity(
                                           servantLimitAddEntity,
                                           servantLimitEntity->fields.rarity,
                                           0);
}


// local variable allocation has failed, the output may be wrong!
void ServantOverwriteStatus__Overwrite_40470648(
        ServantOverwriteStatus_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t stageLimitCount,
        int32_t level,
        int32_t adjustHp,
        int32_t adjustAtk,
        const MethodInfo *method)
{
  int v15; // w8
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *v20; // x25
  ServantLimitEntity_o *v21; // x23
  const MethodInfo *v22; // x6
  const MethodInfo *v23; // x6
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596BB20 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_596BB20 = 1;
  }
  v15 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v15 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)Master_object,
          &entity,
          svtId,
          stageLimitCount,
          0) )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v19);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object
    || (v20 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                svtId,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___)) == 0) )
  {
LABEL_13:
    sub_2213CDC(Master_object, v17);
  }
  v21 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, svtId, limitCount, 0);
  ServantOverwriteStatus__OverwriteHp(this, (ServantEntity_o *)v20, v21, entity, level, adjustHp, v22);
  ServantOverwriteStatus__OverwriteAtk(this, (ServantEntity_o *)v20, v21, entity, level, adjustAtk, v23);
  ServantOverwriteStatus__OverwriteRarity(this, v21, entity, v24);
  ServantOverwriteStatus__OverwriteCost(this, (ServantEntity_o *)v20, entity, v25);
  ServantOverwriteStatus__OverwriteClassPassive(this, (ServantEntity_o *)v20, entity, v26);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w8
  struct System_Int32_array *monitor; // x1
  int32_t v22; // w8

  if ( (byte_596BB1E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_596BB1E = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             svtId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
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
    sub_2213CDC(Master_object, v12);
  }
  monitor = (struct System_Int32_array *)Entity[10].monitor;
  v22 = (int32_t)Entity[9].monitor;
  this->fields._ClassPassive_k__BackingField = monitor;
  this->fields._Cost_k__BackingField = v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClassPassive_k__BackingField,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ClassPassive_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClassPassive_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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