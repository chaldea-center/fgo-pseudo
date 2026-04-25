void ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  this->fields._IsUserServant_k__BackingField = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantLeaderInfo___ctor_44692796(
        ServantLeaderInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x21
  const MethodInfo *v12; // x2
  int32_t v13; // w8
  int32_t MaxLimitCountStage; // w0
  const MethodInfo *v15; // x2
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v17; // w0
  long double v18; // q0
  int32_t v19; // w22
  __int64 v20; // x8
  __int64 v21; // x0
  Il2CppObject *MasterData_object; // x23
  unsigned int v23; // w8
  __int64 v24; // x9
  __int64 v25; // x9
  __int64 v26; // x8
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  long double v33; // q0
  __int64 v34; // x0
  __int64 v35; // x0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  const MethodInfo *v43; // x2

  if ( (byte_4E05ED1 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05ED1 = 1;
  }
  this->fields.supportDeckId = 1;
  this->fields._IsUserServant_k__BackingField = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userId = 1;
  this->fields.classId = 0;
  this->fields.userSvtId = 1;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  this->fields.exceedCount = 0;
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  this->fields.npcFlag = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, 0);
  if ( !Instance )
    goto LABEL_39;
  this->fields.hp = *((_DWORD *)Instance + 9);
  v13 = *((_DWORD *)Instance + 11);
  this->fields.adjustHp = 0;
  this->fields.adjustAtk = 0;
  this->fields.atk = v13;
  this->fields._IsUserServant_k__BackingField = 0;
  MaxLimitCountStage = ServantLeaderInfo__GetMaxLimitCountStage(this, 0, v12);
  this->fields.portraitLimitCount = MaxLimitCountStage;
  *(int32x4_t *)&this->fields.imageLimitCount = vdupq_n_s32(MaxLimitCountStage);
  DispLimitCountStageSealAfter = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, v15);
  v17 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  *(_QWORD *)&v18 = 0x100000001LL;
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  this->fields.skillLv3 = 1;
  v19 = v17;
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1CBC788(v18);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1CBC788(v18);
  Instance = **(void ***)(v21 + 184);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(this->fields.svtId, 0);
  if ( !MasterData_object )
    goto LABEL_39;
  Instance = ServantSkillMaster__getUseEntityList(
               (ServantSkillMaster_o *)MasterData_object,
               (int32_t)Instance,
               this->fields.userId,
               this->fields.lv,
               this->fields.limitCount,
               v19,
               -1,
               -1,
               0);
  if ( !Instance )
    goto LABEL_39;
  v23 = *((_DWORD *)Instance + 6);
  if ( !v23 )
    goto LABEL_40;
  v24 = *((_QWORD *)Instance + 4);
  if ( v24 )
    LODWORD(v24) = *(_DWORD *)(v24 + 28);
  this->fields.skillId1 = v24;
  if ( v23 <= 1 )
    goto LABEL_40;
  v25 = *((_QWORD *)Instance + 5);
  if ( v25 )
    LODWORD(v25) = *(_DWORD *)(v25 + 28);
  this->fields.skillId2 = v25;
  if ( v23 <= 2 )
LABEL_40:
    sub_1CE6960(Instance);
  v26 = *((_QWORD *)Instance + 6);
  if ( v26 )
    LODWORD(v26) = *(_DWORD *)(v26 + 28);
  this->fields.skillId3 = v26;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_39;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0) )
    goto LABEL_36;
  v34 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1CBC788(v33);
  v35 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1CBC788(v33);
  Instance = **(void ***)(v35 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0 )
  {
LABEL_39:
    sub_1CE6958(Instance, v10);
  }
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)Instance,
                svtId,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v19,
                0,
                -1,
                0);
  if ( UseEntity )
    this->fields.treasureDeviceId = UseEntity->fields.treasureDeviceId;
LABEL_36:
  this->fields.equipTarget1 = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.equipTarget1, 0, v27, v28, v29, v30, v31, v32);
  this->fields.imagePartsGroupInfo = 0;
  this->fields.updatedAt = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.imagePartsGroupInfo, 0, v37, v38, v39, v40, v41, v42);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0) )
    ServantLeaderInfo__SetTransformData(this, 0, v43);
}


bool ServantLeaderInfo__CheckBaseServant(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8

  if ( overrideTransformVal < 0 )
  {
    afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
    if ( afterTransformSvtInfo )
      overrideTransformVal = afterTransformSvtInfo->fields.transformVal;
    else
      overrideTransformVal = 0;
  }
  return overrideTransformVal == 0;
}


bool ServantLeaderInfo__CheckEnableRandomLimitCount(
        ServantLeaderInfo_o *this,
        int32_t transformVal,
        const MethodInfo *method)
{
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  struct AfterTransformSvtInfo_o *v4; // x8
  struct System_Int32_array **p_randomLimitCountTargets; // x8
  struct System_Int32_array *v6; // x8

  if ( transformVal < 0 )
  {
    afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
    if ( !afterTransformSvtInfo || !afterTransformSvtInfo->fields.transformVal )
      goto LABEL_8;
  }
  else if ( !transformVal )
  {
LABEL_8:
    p_randomLimitCountTargets = &this->fields.randomLimitCountTargets;
    goto LABEL_9;
  }
  v4 = this->fields.afterTransformSvtInfo;
  if ( !v4 )
    return 0;
  p_randomLimitCountTargets = &v4->fields.randomLimitCountTargets;
LABEL_9:
  v6 = *p_randomLimitCountTargets;
  if ( v6 )
    return SLODWORD(v6->max_length) > 0;
  return 0;
}


AfterTransformSvtInfo_o *ServantLeaderInfo__CreateAfterTransformSvtInfo(
        ServantLeaderInfo_o *this,
        int32_t svtId,
        int32_t limitCountStage,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  AfterTransformSvtInfo_o *v9; // x21
  int32_t v10; // w22
  void *Master_object; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x23
  ServantLimitMaster_o *v14; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  ServantLimitEntity_o *v17; // x24
  _DWORD *v18; // x25
  Il2CppObject *v19; // x24
  unsigned int v20; // w8
  __int64 v21; // x9
  __int64 v22; // x9
  __int64 v23; // x8
  Il2CppObject *v24; // x0
  void *v25; // x24
  Il2CppClass *v26; // x25
  ServantTreasureDvcMaster_o *v27; // x23
  ServantTreasureDvcEntity_o *UseEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4E05ED3 & 1) == 0 )
  {
    sub_1CE6700(&AfterTransformSvtInfo_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05ED3 = 1;
  }
  v9 = (AfterTransformSvtInfo_o *)sub_1CE694C(AfterTransformSvtInfo_TypeInfo);
  AfterTransformSvtInfo___ctor(v9, 0);
  v10 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(limitCountStage, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             svtId,
             (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !Entity )
    goto LABEL_33;
  v14 = (ServantLimitMaster_o *)Master_object;
  klass = Entity[1].klass;
  monitor = Entity[1].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = klass;
  *(_QWORD *)&v30.fields.fakeValue = monitor;
  Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v30, 0);
  if ( !v14 )
    goto LABEL_33;
  v17 = ServantLimitMaster__GetEntity(v14, (int32_t)Master_object, this->fields.limitCount, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantExpMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Master_object = ServantExpMaster__GetEntity(
                    (ServantExpMaster_o *)Master_object,
                    HIDWORD(Entity[8].klass),
                    this->fields.lv,
                    0);
  if ( !v17 )
    goto LABEL_33;
  v18 = Master_object;
  if ( !Master_object )
    goto LABEL_33;
  Master_object = (void *)CombineUtility__CalculateAtk(
                            v17->fields.atkBase,
                            v17->fields.atkMax,
                            *((_DWORD *)Master_object + 7),
                            this->fields.adjustAtk,
                            0);
  if ( !v9 )
    goto LABEL_33;
  v9->fields.atk = (int)Master_object;
  v9->fields.hp = CombineUtility__CalculateHp(v17->fields.hpBase, v17->fields.hpMax, v18[7], this->fields.adjustHp, 0);
  v19 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[1],
                            0);
  if ( !v19 )
    goto LABEL_33;
  Master_object = ServantSkillMaster__getUseEntityList(
                    (ServantSkillMaster_o *)v19,
                    (int32_t)Master_object,
                    this->fields.userId,
                    this->fields.lv,
                    this->fields.limitCount,
                    v10,
                    -1,
                    -1,
                    0);
  if ( !Master_object )
    goto LABEL_33;
  v20 = *((_DWORD *)Master_object + 6);
  if ( !v20 )
    goto LABEL_34;
  v21 = *((_QWORD *)Master_object + 4);
  if ( v21 )
    LODWORD(v21) = *(_DWORD *)(v21 + 28);
  v9->fields.skillId1 = v21;
  if ( v20 <= 1 )
    goto LABEL_34;
  v22 = *((_QWORD *)Master_object + 5);
  if ( v22 )
    LODWORD(v22) = *(_DWORD *)(v22 + 28);
  v9->fields.skillId2 = v22;
  if ( v20 <= 2 )
LABEL_34:
    sub_1CE6960(Master_object);
  v23 = *((_QWORD *)Master_object + 6);
  if ( v23 )
    LODWORD(v23) = *(_DWORD *)(v23 + 28);
  v9->fields.skillId3 = v23;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v24 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v26 = Entity[1].klass;
  v25 = Entity[1].monitor;
  v27 = (ServantTreasureDvcMaster_o *)v24;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v26;
  *(_QWORD *)&v31.fields.fakeValue = v25;
  Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v31, 0);
  if ( !v27 )
LABEL_33:
    sub_1CE6958(Master_object, v12);
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v27,
                (int32_t)Master_object,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v10,
                friendshipRank,
                -1,
                0);
  if ( UseEntity )
    v9->fields.treasureDeviceId = UseEntity->fields.treasureDeviceId;
  return v9;
}


// positive sp value has been detected, the output may be wrong!
void ServantLeaderInfo__Finalize(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.equipTarget1 = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.equipTarget1, 0, v2, v3, v4, v5, v6, v7);
  System_Object__Finalize((Il2CppObject *)this, 0);
}


bool ServantLeaderInfo__GetAdjustMax(
        ServantLeaderInfo_o *this,
        int32_t *maxAjustHp,
        int32_t *maxAjustAtk,
        int32_t *secondMaxAdjustHp,
        int32_t *secondMaxAdjustAtk,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x25
  __int64 v15; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x24
  Il2CppObject *v17; // x24
  const MethodInfo *v18; // x1
  int32_t *Entity; // x0
  int32_t v20; // w8
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4E05ED7 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05ED7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v22, 0);
  if ( !v16 )
    goto LABEL_15;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v16,
               (int32_t)Instance,
               (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0) )
  {
LABEL_13:
    v20 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v17 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v18),
        !v17) )
  {
LABEL_15:
    sub_1CE6958(Instance, v12);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                        (int32_t)Instance,
                        (const MethodInfo_34E925C *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_13;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  v20 = Entity[8];
  result = 1;
LABEL_14:
  *secondMaxAdjustAtk = v20;
  return result;
}


void ServantLeaderInfo__GetAppendPassiveSkillInfo(
        ServantLeaderInfo_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v11; // x26
  __int64 v12; // x27
  ServantAppendPassiveSkillMaster_o *v13; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *EntityListFromSvtId; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_String_o *MasterName_k__BackingField; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x25
  System_Int32_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_String_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_String_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Boolean_array *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Int32_array *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x27
  unsigned int v60; // w19
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x11
  int max_length; // w8
  __int64 v63; // x9
  __int64 v64; // x10
  AppendPassiveSkillInfo_o **m_Items; // x11
  AppendPassiveSkillInfo_o *v66; // x29
  __int64 v67; // x20
  __int64 v68; // x8
  System_Int32_array *v69; // x9
  SkillEntity_o *v70; // x28
  System_Int32_array *v71; // x8
  System_String_array *v72; // x22
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v79; // x1
  Il2CppClass **v80; // x0
  System_String_array *v81; // x22
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v88; // x1
  Il2CppClass **v89; // x0
  System_Boolean_array *v90; // x8
  char v91; // w9
  System_String_array *v92; // x22
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v99; // x1
  Il2CppClass **v100; // x0
  System_String_array *v101; // x28
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v108; // x1
  Il2CppClass **v109; // x0
  System_String_array *v110; // x8
  System_String_array *v111; // x8
  GrandQuestFolderBoardItem_o *v112; // x28
  System_String_o *sortValue0; // t1
  System_String_o *v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  System_String_array *v121; // x8
  Il2CppClass **v122; // x28
  GrandQuestFolderBoardItem_o *v123; // x28
  System_String_o *v124; // x29
  System_String_o *v125; // t1
  System_String_o *v126; // x0
  System_String_o *v127; // x0
  int32_t v128; // w2
  int32_t v129; // w3
  System_String_o *v130; // x4
  int32_t v131; // w5
  int64_t v132; // x6
  System_String_o *v133; // x7
  struct AppendPassiveSkillInfo_array *v134; // x8
  int32_t v135; // w2
  int32_t v136; // w3
  System_String_o *v137; // x4
  int32_t v138; // w5
  int64_t v139; // x6
  System_String_o *v140; // x7
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  int32_t v147; // w2
  int32_t v148; // w3
  System_String_o *v149; // x4
  int32_t v150; // w5
  int64_t v151; // x6
  System_String_o *v152; // x7
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16

  if ( (byte_4E05EF6 & 1) == 0 )
  {
    sub_1CE6700(&bool___TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1CE6700(&int___TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&string___TypeInfo);
    sub_1CE6700(&StringLiteral_43/*"\n"*/);
    sub_1CE6700(&StringLiteral_3764/*"COND_TYPE_TITLE"*/);
    sub_1CE6700(&StringLiteral_3752/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05EF6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v162.fields.currentCryptoKey = v12;
  *(_QWORD *)&v162.fields.fakeValue = v11;
  EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                                        v162,
                                                                        0);
  if ( !v13
    || (EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                                                              v13,
                                                                              (int32_t)EntityListFromSvtId,
                                                                              0)) == 0 )
  {
LABEL_67:
    sub_1CE6958(EntityListFromSvtId, v15);
  }
  MasterName_k__BackingField = EntityListFromSvtId->fields._MasterName_k__BackingField;
  v23 = EntityListFromSvtId;
  if ( MasterName_k__BackingField || (v134 = this->fields.appendPassiveSkill) != 0 && v134->max_length )
  {
    v24 = (System_Int32_array *)sub_1CE67A8(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *idList = v24;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)idList, (int32_t)v24, v25, v26, v27, v28, v29, v30);
    v31 = (System_String_array *)sub_1CE67A8(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *titleList = v31;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)titleList, (int32_t)v31, v32, v33, v34, v35, v36, v37);
    v38 = (System_String_array *)sub_1CE67A8(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *explanationList = v38;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = (System_Boolean_array *)sub_1CE67A8(bool___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *releaseStateList = v45;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)releaseStateList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
    v52 = (System_Int32_array *)sub_1CE67A8(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
    *lvList = v52;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)lvList, (int32_t)v52, v53, v54, v55, v56, v57, v58);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      v59 = EntityListFromSvtId;
      v60 = 0;
      while ( 1 )
      {
        appendPassiveSkill = this->fields.appendPassiveSkill;
        if ( appendPassiveSkill )
        {
          max_length = appendPassiveSkill->max_length;
          if ( max_length >= 1 )
            break;
        }
LABEL_23:
        v66 = 0;
LABEL_24:
        if ( v60 >= LODWORD(v23->fields._MasterName_k__BackingField) )
          goto LABEL_68;
        v67 = (int)v60;
        v68 = *((_QWORD *)&v23->fields.revision + (int)v60);
        if ( !v68 )
          goto LABEL_67;
        v69 = *idList;
        if ( !*idList )
          goto LABEL_67;
        if ( v60 >= LODWORD(v69->max_length) )
          goto LABEL_68;
        v15 = *(unsigned int *)(v68 + 28);
        v69->m_Items[v60] = v15;
        if ( !v59 )
          goto LABEL_67;
        EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                              v59,
                                                                              v15,
                                                                              (const MethodInfo_34E925C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v70 = (SkillEntity_o *)EntityListFromSvtId;
        v71 = *lvList;
        if ( v66 )
        {
          if ( !v71 )
            goto LABEL_67;
          if ( v60 >= LODWORD(v71->max_length) )
            goto LABEL_68;
          v71->m_Items[v60] = v66->fields.skillLv;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v72 = *titleList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                                (SkillEntity_o *)EntityListFromSvtId,
                                                                                v66->fields.skillLv,
                                                                                0);
          if ( !v72 )
            goto LABEL_67;
          if ( v60 >= LODWORD(v72->max_length) )
            goto LABEL_68;
          v79 = EntityListFromSvtId;
          v80 = &v72->obj.klass + (int)v60;
          v80[4] = (Il2CppClass *)v79;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v80 + 4), (int32_t)v79, v73, v74, v75, v76, v77, v78);
          v81 = *explanationList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                                v70,
                                                                                v66->fields.skillLv,
                                                                                0);
          if ( !v81 )
            goto LABEL_67;
          if ( v60 >= LODWORD(v81->max_length) )
            goto LABEL_68;
          v88 = EntityListFromSvtId;
          v89 = &v81->obj.klass + (int)v60;
          v89[4] = (Il2CppClass *)v88;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v89 + 4), (int32_t)v88, v82, v83, v84, v85, v86, v87);
          v90 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v60 >= LODWORD(v90->max_length) )
            goto LABEL_68;
          v91 = 1;
        }
        else
        {
          if ( !v71 )
            goto LABEL_67;
          if ( v60 >= LODWORD(v71->max_length) )
            goto LABEL_68;
          v71->m_Items[v60] = -1;
          if ( !EntityListFromSvtId )
            goto LABEL_67;
          v92 = *titleList;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                                (SkillEntity_o *)EntityListFromSvtId,
                                                                                -1,
                                                                                0);
          if ( !v92 )
            goto LABEL_67;
          if ( v60 >= LODWORD(v92->max_length) )
            goto LABEL_68;
          v99 = EntityListFromSvtId;
          v100 = &v92->obj.klass + (int)v60;
          v100[4] = (Il2CppClass *)v99;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v100 + 4), (int32_t)v99, v93, v94, v95, v96, v97, v98);
          v101 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3764/*"COND_TYPE_TITLE"*/,
                                                                                0);
          if ( !v101 )
            goto LABEL_67;
          if ( v60 >= LODWORD(v101->max_length) )
            goto LABEL_68;
          v108 = EntityListFromSvtId;
          v109 = &v101->obj.klass + (int)v60;
          v109[4] = (Il2CppClass *)v108;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v109 + 4), (int32_t)v108, v102, v103, v104, v105, v106, v107);
          v110 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v60 >= LODWORD(v110->max_length) )
            goto LABEL_68;
          EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                                v110->m_Items[v60],
                                                                                (System_String_o *)StringLiteral_1/*""*/,
                                                                                0);
          if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
          {
            v111 = *explanationList;
            if ( !*explanationList )
              goto LABEL_67;
            if ( v60 >= LODWORD(v111->max_length) )
              goto LABEL_68;
            v112 = (GrandQuestFolderBoardItem_o *)(&v111->obj.klass + (int)v60);
            sortValue0 = (System_String_o *)v112->fields.sortValue0;
            v112 = (GrandQuestFolderBoardItem_o *)((char *)v112 + 32);
            v114 = System_String__Concat_65122828(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            v112->klass = (GrandQuestFolderBoardItem_c *)v114;
            sub_1CE66A4(v112, (int32_t)v114, v115, v116, v117, v118, v119, v120);
          }
          v121 = *explanationList;
          if ( !*explanationList )
            goto LABEL_67;
          if ( v60 >= LODWORD(v121->max_length) )
            goto LABEL_68;
          v122 = &v121->obj.klass + (int)v60;
          v125 = (System_String_o *)v122[4];
          v123 = (GrandQuestFolderBoardItem_o *)(v122 + 4);
          v124 = v125;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v126 = LocalizationManager__Get((System_String_o *)StringLiteral_3752/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v127 = System_String__Concat_65122828(v124, v126, 0);
          v123->klass = (GrandQuestFolderBoardItem_c *)v127;
          sub_1CE66A4(v123, (int32_t)v127, v128, v129, v130, v131, v132, v133);
          v90 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_67;
          if ( v60 >= LODWORD(v90->max_length) )
            goto LABEL_68;
          v91 = 0;
        }
        ++v60;
        v90->m_Items[v67] = v91;
        if ( v60 == (_DWORD)MasterName_k__BackingField )
          return;
      }
      v63 = 0;
      v64 = (__int64)(&v23->fields.revision + 2 * (int)v60);
      m_Items = appendPassiveSkill->m_Items;
      while ( (unsigned int)v63 < max_length )
      {
        v66 = m_Items[v63];
        if ( !v66 )
          goto LABEL_67;
        if ( v60 >= LODWORD(v23->fields._MasterName_k__BackingField) )
          break;
        if ( !*(_QWORD *)v64 )
          goto LABEL_67;
        if ( v66->fields.skillId == *(_DWORD *)(*(_QWORD *)v64 + 28LL) )
          goto LABEL_24;
        if ( (int)++v63 >= max_length )
          goto LABEL_23;
      }
LABEL_68:
      sub_1CE6960(EntityListFromSvtId);
    }
  }
  else
  {
    *idList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)idList, 0, v16, v17, v18, v19, v20, v21);
    *titleList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)titleList, 0, v135, v136, v137, v138, v139, v140);
    *explanationList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)explanationList, 0, v141, v142, v143, v144, v145, v146);
    *releaseStateList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)releaseStateList, 0, v147, v148, v149, v150, v151, v152);
    *lvList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)lvList, 0, v153, v154, v155, v156, v157, v158);
  }
}


void ServantLeaderInfo__GetAppendPassiveSkillInfoForNpc(
        ServantLeaderInfo_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x8
  il2cpp_array_size_t max_length; // x25
  System_Int32_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_String_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Boolean_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Int32_array *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 skillId; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // x26
  unsigned int v53; // w29
  struct AppendPassiveSkillInfo_array *v54; // x8
  __int64 v55; // x19
  AppendPassiveSkillInfo_o *v56; // x8
  System_Int32_array *v57; // x9
  struct AppendPassiveSkillInfo_array *v58; // x8
  AppendPassiveSkillInfo_o *v59; // x8
  int skillLv; // w10
  SkillEntity_o *v61; // x27
  System_Int32_array *v62; // x9
  System_String_array *v63; // x28
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x1
  Il2CppClass **v71; // x0
  struct AppendPassiveSkillInfo_array *v72; // x8
  AppendPassiveSkillInfo_o *v73; // x8
  System_String_array *v74; // x28
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v81; // x1
  Il2CppClass **v82; // x0
  System_Boolean_array *v83; // x8
  char v84; // w9
  System_String_array *v85; // x28
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // x1
  Il2CppClass **v93; // x0
  System_String_array *v94; // x27
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v101; // x1
  Il2CppClass **v102; // x0
  System_String_array *v103; // x8
  System_String_array *v104; // x8
  GrandQuestFolderBoardItem_o *v105; // x27
  System_String_o *sortValue0; // t1
  System_String_o *v107; // x0
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  System_String_array *v114; // x8
  Il2CppClass **v115; // x27
  GrandQuestFolderBoardItem_o *v116; // x27
  System_String_o *v117; // x28
  System_String_o *v118; // t1
  System_String_o *v119; // x0
  System_String_o *v120; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7

  if ( (byte_4E05EF7 & 1) == 0 )
  {
    sub_1CE6700(&bool___TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1CE6700(&int___TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&string___TypeInfo);
    sub_1CE6700(&StringLiteral_43/*"\n"*/);
    sub_1CE6700(&StringLiteral_3764/*"COND_TYPE_TITLE"*/);
    sub_1CE6700(&StringLiteral_3752/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05EF7 = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (max_length = appendPassiveSkill->max_length) != 0 )
  {
    v15 = (System_Int32_array *)sub_1CE67A8(int___TypeInfo, (unsigned int)max_length);
    *idList = v15;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)idList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
    v22 = (System_String_array *)sub_1CE67A8(string___TypeInfo, (unsigned int)max_length);
    *titleList = v22;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)titleList, (int32_t)v22, v23, v24, v25, v26, v27, v28);
    v29 = (System_String_array *)sub_1CE67A8(string___TypeInfo, (unsigned int)max_length);
    *explanationList = v29;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v29, v30, v31, v32, v33, v34, v35);
    v36 = (System_Boolean_array *)sub_1CE67A8(bool___TypeInfo, (unsigned int)max_length);
    *releaseStateList = v36;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)releaseStateList, (int32_t)v36, v37, v38, v39, v40, v41, v42);
    v43 = (System_Int32_array *)sub_1CE67A8(int___TypeInfo, (unsigned int)max_length);
    *lvList = v43;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)lvList, (int32_t)v43, v44, v45, v46, v47, v48, v49);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)max_length >= 1 )
    {
      v52 = Master_object;
      v53 = 0;
      while ( 1 )
      {
        v54 = this->fields.appendPassiveSkill;
        if ( !v54 )
          break;
        if ( v53 >= LODWORD(v54->max_length) )
          goto LABEL_58;
        v55 = (int)v53;
        v56 = v54->m_Items[v53];
        if ( !v56 )
          break;
        v57 = *idList;
        if ( !*idList )
          break;
        if ( v53 >= LODWORD(v57->max_length) )
          goto LABEL_58;
        skillId = (unsigned int)v56->fields.skillId;
        v57->m_Items[v53] = skillId;
        if ( !v52 )
          break;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v52,
                                                                        skillId,
                                                                        (const MethodInfo_34E925C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v58 = this->fields.appendPassiveSkill;
        if ( !v58 )
          break;
        if ( v53 >= LODWORD(v58->max_length) )
          goto LABEL_58;
        v59 = v58->m_Items[v53];
        if ( !v59 )
          break;
        skillLv = v59->fields.skillLv;
        v61 = (SkillEntity_o *)Master_object;
        v62 = *lvList;
        if ( skillLv < 1 )
        {
          if ( !v62 )
            break;
          if ( v53 >= LODWORD(v62->max_length) )
            goto LABEL_58;
          v62->m_Items[v53] = -1;
          if ( !Master_object )
            break;
          v85 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          -1,
                                                                          0);
          if ( !v85 )
            break;
          if ( v53 >= LODWORD(v85->max_length) )
            goto LABEL_58;
          v92 = Master_object;
          v93 = &v85->obj.klass + (int)v53;
          v93[4] = (Il2CppClass *)v92;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v93 + 4), (int32_t)v92, v86, v87, v88, v89, v90, v91);
          v94 = *explanationList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_3764/*"COND_TYPE_TITLE"*/,
                                                                          0);
          if ( !v94 )
            break;
          if ( v53 >= LODWORD(v94->max_length) )
            goto LABEL_58;
          v101 = Master_object;
          v102 = &v94->obj.klass + (int)v53;
          v102[4] = (Il2CppClass *)v101;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v102 + 4), (int32_t)v101, v95, v96, v97, v98, v99, v100);
          v103 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v53 >= LODWORD(v103->max_length) )
            goto LABEL_58;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                          v103->m_Items[v53],
                                                                          (System_String_o *)StringLiteral_1/*""*/,
                                                                          0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v104 = *explanationList;
            if ( !*explanationList )
              break;
            if ( v53 >= LODWORD(v104->max_length) )
              goto LABEL_58;
            v105 = (GrandQuestFolderBoardItem_o *)(&v104->obj.klass + (int)v53);
            sortValue0 = (System_String_o *)v105->fields.sortValue0;
            v105 = (GrandQuestFolderBoardItem_o *)((char *)v105 + 32);
            v107 = System_String__Concat_65122828(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            v105->klass = (GrandQuestFolderBoardItem_c *)v107;
            sub_1CE66A4(v105, (int32_t)v107, v108, v109, v110, v111, v112, v113);
          }
          v114 = *explanationList;
          if ( !*explanationList )
            break;
          if ( v53 >= LODWORD(v114->max_length) )
LABEL_58:
            sub_1CE6960(Master_object);
          v115 = &v114->obj.klass + (int)v53;
          v118 = (System_String_o *)v115[4];
          v116 = (GrandQuestFolderBoardItem_o *)(v115 + 4);
          v117 = v118;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v119 = LocalizationManager__Get((System_String_o *)StringLiteral_3752/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v120 = System_String__Concat_65122828(v117, v119, 0);
          v116->klass = (GrandQuestFolderBoardItem_c *)v120;
          sub_1CE66A4(v116, (int32_t)v120, v121, v122, v123, v124, v125, v126);
          v83 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v53 >= LODWORD(v83->max_length) )
            goto LABEL_58;
          v84 = 0;
        }
        else
        {
          if ( !v62 )
            break;
          if ( v53 >= LODWORD(v62->max_length) )
            goto LABEL_58;
          v62->m_Items[v53] = skillLv;
          if ( !Master_object )
            break;
          v63 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          v59->fields.skillLv,
                                                                          0);
          if ( !v63 )
            break;
          if ( v53 >= LODWORD(v63->max_length) )
            goto LABEL_58;
          v70 = Master_object;
          v71 = &v63->obj.klass + (int)v53;
          v71[4] = (Il2CppClass *)v70;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v71 + 4), (int32_t)v70, v64, v65, v66, v67, v68, v69);
          v72 = this->fields.appendPassiveSkill;
          if ( !v72 )
            break;
          if ( v53 >= LODWORD(v72->max_length) )
            goto LABEL_58;
          v73 = v72->m_Items[v53];
          if ( !v73 )
            break;
          v74 = *explanationList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                          v61,
                                                                          v73->fields.skillLv,
                                                                          0);
          if ( !v74 )
            break;
          if ( v53 >= LODWORD(v74->max_length) )
            goto LABEL_58;
          v81 = Master_object;
          v82 = &v74->obj.klass + (int)v53;
          v82[4] = (Il2CppClass *)v81;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v82 + 4), (int32_t)v81, v75, v76, v77, v78, v79, v80);
          v83 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( v53 >= LODWORD(v83->max_length) )
            goto LABEL_58;
          v84 = 1;
        }
        ++v53;
        v83->m_Items[v55] = v84;
        if ( (_DWORD)max_length == v53 )
          return;
      }
      sub_1CE6958(Master_object, skillId);
    }
  }
  else
  {
    *idList = 0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)idList,
      0,
      (int32_t)titleList,
      (int32_t)explanationList,
      (System_String_o *)releaseStateList,
      (int32_t)lvList,
      (int64_t)method,
      v7);
    *titleList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)titleList, 0, v127, v128, v129, v130, v131, v132);
    *explanationList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)explanationList, 0, v133, v134, v135, v136, v137, v138);
    *releaseStateList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)releaseStateList, 0, v139, v140, v141, v142, v143, v144);
    *lvList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)lvList, 0, v145, v146, v147, v148, v149, v150);
  }
}


void ServantLeaderInfo__GetAppendPassiveSkillInfo_44711028(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x20
  SkillInfo_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x21
  __int64 v23; // x22
  __int64 v24; // x23
  __int64 v25; // x20
  const MethodInfo *v26; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  unsigned __int64 v35; // x25
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 v43; // x1
  unsigned int *v44; // x26
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  __int64 v51; // x0
  System_Int32_array *v52; // [xsp+0h] [xbp-70h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4E05EF8 & 1) == 0 )
  {
    sub_1CE6700(&SkillInfo___TypeInfo);
    sub_1CE6700(&SkillInfo_TypeInfo);
    byte_4E05EF8 = 1;
  }
  idList = 0;
  explanationList = 0;
  titleList = 0;
  v52 = 0;
  releaseStateList = 0;
  if ( isNpc )
    ServantLeaderInfo__GetAppendPassiveSkillInfoForNpc(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v52,
      v4);
  else
    ServantLeaderInfo__GetAppendPassiveSkillInfo(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v52,
      v4);
  if ( idList && (v14 = *(__int64 *)((char *)&off_18 + (_QWORD)idList)) != 0 )
  {
    v15 = (SkillInfo_array *)sub_1CE67A8(SkillInfo___TypeInfo, (unsigned int)v14);
    *skillInfoList = v15;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
    if ( (int)v14 >= 1 )
    {
      v22 = -(__int64)(unsigned int)v14;
      v23 = 8;
      v24 = 8;
      do
      {
        v25 = sub_1CE694C(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v25, v26);
        if ( !v25 )
          goto LABEL_26;
        *(_DWORD *)(v25 + 48) = 0;
        if ( !idList )
          goto LABEL_26;
        v35 = v23 - 8;
        if ( v23 - 8 >= (unsigned __int64)*(unsigned int *)((char *)&off_18 + (_QWORD)idList) )
          goto LABEL_27;
        *(_DWORD *)(v25 + 16) = *((_DWORD *)&idList->obj.klass + v23);
        if ( !v52 )
          goto LABEL_26;
        if ( v35 >= LODWORD(v52->max_length) )
          goto LABEL_27;
        *(_DWORD *)(v25 + 20) = *((_DWORD *)&v52->obj.klass + v23);
        if ( !titleList )
          goto LABEL_26;
        if ( v35 >= LODWORD(titleList->max_length) )
          goto LABEL_27;
        v36 = *(__int64 *)((char *)&titleList->obj.klass + v24 * 4);
        *(_QWORD *)(v25 + 32) = v36;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v25 + 32), v36, v29, v30, v31, v32, v33, v34);
        if ( !explanationList )
          goto LABEL_26;
        if ( v35 >= LODWORD(explanationList->max_length) )
          goto LABEL_27;
        v43 = *(__int64 *)((char *)&explanationList->obj.klass + v24 * 4);
        *(_QWORD *)(v25 + 40) = v43;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v25 + 40), v43, v37, v38, v39, v40, v41, v42);
        v44 = (unsigned int *)*skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_1CE6958(v27, v28);
        v27 = sub_1CE683C(v25, *(_QWORD *)(*(_QWORD *)v44 + 64LL));
        if ( !v27 )
        {
          v51 = sub_1CE697C(0);
          sub_1CE6828(v51, 0);
        }
        if ( v35 >= v44[6] )
LABEL_27:
          sub_1CE6960(v27);
        *(_QWORD *)&v44[v24] = v25;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v44[v24], v25, v45, v46, v47, v48, v49, v50);
        ++v23;
        v24 += 2;
      }
      while ( v22 + v23 != 8 );
    }
  }
  else
  {
    *skillInfoList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)skillInfoList, 0, v8, v9, v10, v11, v12, v13);
  }
}


System_Nullable_ValueTuple_FuncList_TYPE__int___o ServantLeaderInfo__GetBaseFriendPointUpTypeVal(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  Il2CppObject *Master_object; // x19
  const MethodInfo *v6; // x4
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v8; // x1
  __int128 v9; // x0
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  int32_t v12; // w2
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4E05EE3 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EE3 = 1;
  }
  entity = 0;
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v4;
  *(_QWORD *)&v15.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v15, 0) >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__GetSkillIdList(
                    (ServantLeaderInfo_o *)Master_object,
                    this->fields.skillId1,
                    this->fields.skillId2,
                    this->fields.skillId3,
                    v6);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v8);
    for ( i = 0; ; ++i )
    {
      *(_QWORD *)&v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        *(_QWORD *)&v9 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= *(int *)(*(_QWORD *)(v9 + 184) + 40LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_25;
      if ( i >= LODWORD(SkillIdList->max_length) )
        goto LABEL_26;
      v12 = SkillIdList->m_Items[i];
      if ( v12 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_25;
        if ( i >= LODWORD(SkillLevelList->max_length) )
LABEL_26:
          sub_1CE6960(v9);
        if ( !Master_object )
          goto LABEL_25;
        if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, v12, SkillLevelList->m_Items[i], 0) )
        {
          *(_QWORD *)&v9 = entity;
          if ( !entity )
LABEL_25:
            sub_1CE6958(v9, *((_QWORD *)&v9 + 1));
          *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v9 = SkillLvEntity__GetFriendPointUpTypeVal(entity, 0);
          if ( (_BYTE)v9 )
            return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v9;
        }
      }
    }
  }
  *(_QWORD *)&v9 = 0;
  DWORD2(v9) = 0;
  return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v9;
}


int32_t ServantLeaderInfo__GetCardImageLimitCountStage(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  struct OtherUserServantLimitCountManager_LimitCountStageData_o *AfterTransform_k__BackingField; // x8

  if ( (byte_4E05EF1 & 1) == 0 )
  {
    sub_1CE6700(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E05EF1 = 1;
  }
  if ( !this->fields._IsUserServant_k__BackingField )
    return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.imageLimitCount, 1, 0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( (overrideTransformVal & 0x80000000) == 0 )
    goto LABEL_9;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
  {
    overrideTransformVal = afterTransformSvtInfo->fields.transformVal;
LABEL_9:
    if ( !LimitCountStageData )
      goto LABEL_16;
    if ( overrideTransformVal )
    {
      AfterTransform_k__BackingField = LimitCountStageData->fields._AfterTransform_k__BackingField;
      if ( AfterTransform_k__BackingField )
        return AfterTransform_k__BackingField->fields._ImageStage_k__BackingField;
LABEL_16:
      sub_1CE6958(LimitCountStageData, v6);
    }
    return LimitCountStageData->fields._ImageStage_k__BackingField;
  }
  if ( !LimitCountStageData )
    goto LABEL_16;
  return LimitCountStageData->fields._ImageStage_k__BackingField;
}


int32_t ServantLeaderInfo__GetCardImageLimitCountStageSealAfter(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t ServantId; // w0
  int32_t limitCount; // w20
  int32_t v6; // w21
  const MethodInfo *v7; // x2
  int32_t CardImageLimitCountStage; // w0

  if ( !this->fields._IsUserServant_k__BackingField )
    return ServantLeaderInfo__GetCardImageLimitCountStage(this, -1, v2);
  ServantId = ServantLeaderInfo__GetServantId(this, -1, v2);
  limitCount = this->fields.limitCount;
  v6 = ServantId;
  CardImageLimitCountStage = ServantLeaderInfo__GetCardImageLimitCountStage(this, -1, v7);
  return LimitCountUtility__GetSealAfter(v6, limitCount, CardImageLimitCountStage, 1, 0);
}


int32_t ServantLeaderInfo__GetCommandCardLimitCountStage(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  struct OtherUserServantLimitCountManager_LimitCountStageData_o *AfterTransform_k__BackingField; // x8

  if ( (byte_4E05EF0 & 1) == 0 )
  {
    sub_1CE6700(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E05EF0 = 1;
  }
  if ( !this->fields._IsUserServant_k__BackingField )
    return LimitCountUtility__GetLimitCountStageCheckZero(
             this->fields.limitCount,
             this->fields.commandCardLimitCount,
             0,
             0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( (overrideTransformVal & 0x80000000) == 0 )
    goto LABEL_9;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
  {
    overrideTransformVal = afterTransformSvtInfo->fields.transformVal;
LABEL_9:
    if ( !LimitCountStageData )
      goto LABEL_16;
    if ( overrideTransformVal )
    {
      AfterTransform_k__BackingField = LimitCountStageData->fields._AfterTransform_k__BackingField;
      if ( AfterTransform_k__BackingField )
        return AfterTransform_k__BackingField->fields._CommandCardStage_k__BackingField;
LABEL_16:
      sub_1CE6958(LimitCountStageData, v6);
    }
    return LimitCountStageData->fields._CommandCardStage_k__BackingField;
  }
  if ( !LimitCountStageData )
    goto LABEL_16;
  return LimitCountStageData->fields._CommandCardStage_k__BackingField;
}


int32_t ServantLeaderInfo__GetDispLimitCountStage(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  struct OtherUserServantLimitCountManager_LimitCountStageData_o *AfterTransform_k__BackingField; // x8

  if ( (byte_4E05EEF & 1) == 0 )
  {
    sub_1CE6700(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E05EEF = 1;
  }
  if ( !this->fields._IsUserServant_k__BackingField )
    return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.dispLimitCount, 0, 0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( (overrideTransformVal & 0x80000000) == 0 )
    goto LABEL_9;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
  {
    overrideTransformVal = afterTransformSvtInfo->fields.transformVal;
LABEL_9:
    if ( !LimitCountStageData )
      goto LABEL_16;
    if ( overrideTransformVal )
    {
      AfterTransform_k__BackingField = LimitCountStageData->fields._AfterTransform_k__BackingField;
      if ( AfterTransform_k__BackingField )
        return AfterTransform_k__BackingField->fields._DispStage_k__BackingField;
LABEL_16:
      sub_1CE6958(LimitCountStageData, v6);
    }
    return LimitCountStageData->fields._DispStage_k__BackingField;
  }
  if ( !LimitCountStageData )
    goto LABEL_16;
  return LimitCountStageData->fields._DispStage_k__BackingField;
}


int32_t ServantLeaderInfo__GetDispLimitCountStageSealAfter(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  int32_t limitCount; // w21
  int32_t v7; // w22
  const MethodInfo *v8; // x2
  int32_t DispLimitCountStage; // w2

  if ( !this->fields._IsUserServant_k__BackingField )
    return ServantLeaderInfo__GetDispLimitCountStage(this, overrideTransformVal, method);
  ServantId = ServantLeaderInfo__GetServantId(this, -1, method);
  limitCount = this->fields.limitCount;
  v7 = ServantId;
  DispLimitCountStage = ServantLeaderInfo__GetDispLimitCountStage(this, overrideTransformVal, v8);
  return LimitCountUtility__GetSealAfter(v7, limitCount, DispLimitCountStage, 0, 0);
}


int32_t ServantLeaderInfo__GetDispLimitCountStageSealAfterAtStageLimitCount(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t limitCount; // w19
  int32_t DispLimitCountStageSealAfter; // w1

  limitCount = this->fields.limitCount;
  DispLimitCountStageSealAfter = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, v2);
  return LimitCountUtility__ConvertStageToLimitCount(limitCount, DispLimitCountStageSealAfter, 0, 0);
}


int32_t ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  int32_t DispLimitCountStageSealAfter; // w0

  DispLimitCountStageSealAfter = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, overrideTransformVal, method);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
}


int32_t ServantLeaderInfo__GetEquipLimitCount(ServantLeaderInfo_o *this, int32_t idx, const MethodInfo *method)
{
  struct EquipTargetInfo_o **p_equipTarget3; // x8
  struct EquipTargetInfo_o *v4; // x8

  if ( idx == 2 )
  {
    p_equipTarget3 = &this->fields.equipTarget3;
  }
  else if ( idx == 1 )
  {
    p_equipTarget3 = &this->fields.equipTarget2;
  }
  else
  {
    p_equipTarget3 = &this->fields.equipTarget1;
  }
  v4 = *p_equipTarget3;
  if ( v4 )
    return v4->fields.limitCount;
  else
    return 0;
}


EquipTargetInfo_o *ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
        ServantLeaderInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  EquipTargetInfo_o **p_equipTarget3; // x8

  if ( idx == 2 )
  {
    p_equipTarget3 = &this->fields.equipTarget3;
  }
  else if ( idx == 1 )
  {
    p_equipTarget3 = &this->fields.equipTarget2;
  }
  else
  {
    p_equipTarget3 = &this->fields.equipTarget1;
  }
  return *p_equipTarget3;
}


System_Collections_Generic_List_EquipTargetInfo__o *ServantLeaderInfo__GetEquipTargetInfoList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *equipTarget1; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4E05EFC & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipTargetInfo__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
    byte_4E05EFC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget1;
  if ( equipTarget1 )
  {
    if ( !v3 )
      goto LABEL_22;
    items = v3->fields._items;
    v13 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_22;
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        equipTarget1,
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v15[4] = (Il2CppClass *)equipTarget1;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)equipTarget1, v5, v6, v7, v8, v9, v10);
    }
  }
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget2;
  if ( equipTarget1 )
  {
    if ( !v3 )
      goto LABEL_22;
    v16 = v3->fields._items;
    v17 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
    ++v3->fields._version;
    if ( !v16 )
      goto LABEL_22;
    v18 = v3->fields._size;
    if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        equipTarget1,
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &v16->obj.klass + v18;
      v3->fields._size = v18 + 1;
      v19[4] = (Il2CppClass *)equipTarget1;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)equipTarget1, v5, v6, v7, v8, v9, v10);
    }
  }
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget3;
  if ( !equipTarget1 )
    return (System_Collections_Generic_List_EquipTargetInfo__o *)v3;
  if ( !v3
    || (v20 = v3->fields._items,
        v21 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__,
        ++v3->fields._version,
        !v20) )
  {
LABEL_22:
    sub_1CE6958(v4, equipTarget1);
  }
  v22 = v3->fields._size;
  if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      equipTarget1,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v3->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)equipTarget1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)equipTarget1, v5, v6, v7, v8, v9, v10);
  }
  return (System_Collections_Generic_List_EquipTargetInfo__o *)v3;
}


int32_t ServantLeaderInfo__GetFrameType(ServantLeaderInfo_o *this, int32_t actualRarity, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  ServantExceedMaster_o *v8; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t FrameTypeFixRarity; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4E05EEE & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EEE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantExceedMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  v9 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v13, 0);
  if ( !v8
    || (FrameTypeFixRarity = ServantExceedMaster__GetFrameTypeFixRarity(
                               v8,
                               (int32_t)v9,
                               this->fields.exceedCount,
                               actualRarity,
                               this->fields.grandSvt != 0,
                               0),
        (v9 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0) )
  {
    sub_1CE6958(v9, v10);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v9,
           actualRarity,
           this->fields.lv,
           FrameTypeFixRarity,
           this->fields.grandSvt != 0,
           0);
}


System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *ServantLeaderInfo__GetFriendPointUpTypeVals(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x19
  __int64 v4; // x21
  __int64 v5; // x22
  const MethodInfo *v6; // x1
  __int128 v7; // x0
  const MethodInfo_3A29400 *v8; // x2
  System_Collections_Generic_List_EquipTargetInfo__o *Value; // x0
  System_ValueTuple_Int32Enum__int__o v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  __int64 v14; // x1
  const MethodInfo_3A29400 *v15; // x2
  Il2CppObject *v16; // x0
  System_ValueTuple_Int32Enum__int__o v17; // x1
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_ValueTuple_FuncList_TYPE__int___o v24; // [xsp+40h] [xbp-40h] BYREF
  System_Nullable_ValueTuple_FuncList_TYPE__int___o FriendPointUpTypeVal; // 0:x0.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  System_Nullable_T__o v27; // 0:x0.16
  System_Nullable_T__o v28; // 0:x0.16

  if ( (byte_4E05EE2 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__);
    sub_1CE6700(&System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo);
    sub_1CE6700(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_1CE6700(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EE2 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_T__o *)sub_1CE694C(System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int_____ctor(
    v3,
    (const MethodInfo_38AF8B0 *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v5;
  *(_QWORD *)&v26.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v26, 0) >= 1 )
  {
    *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v7 = ServantLeaderInfo__GetBaseFriendPointUpTypeVal(this, v6);
    *(_QWORD *)&v24.fields.hasValue = v7;
    v24.fields.value.fields.Item2 = DWORD2(v7);
    if ( (_BYTE)v7 )
    {
      v27.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
      *(_QWORD *)&v27.fields.hasValue = &v24;
      Value = (System_Collections_Generic_List_EquipTargetInfo__o *)System_Nullable_ValueTuple_Int32Enum__int____get_Value(
                                                                      v27,
                                                                      v8);
      if ( !v3 )
        goto LABEL_27;
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_27;
      size = v3->fields._size;
      *((_QWORD *)&v7 + 1) = Value;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
          v3,
          *(System_ValueTuple_Int32Enum__int__o *)((char *)&v7 + 8),
          *(const MethodInfo_38B0104 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = (Il2CppObject *)Value;
      }
    }
    Value = ServantLeaderInfo__GetEquipTargetInfoList(this, *((const MethodInfo **)&v7 + 1));
    if ( Value )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)Value,
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
      v23 = v22;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v23,
                (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__) )
      {
        if ( !v23.fields._current )
          sub_1CE6958(0, v14);
        FriendPointUpTypeVal = EquipTargetInfo__GetFriendPointUpTypeVal((EquipTargetInfo_o *)v23.fields._current, 0);
        v24 = FriendPointUpTypeVal;
        if ( FriendPointUpTypeVal.fields.hasValue )
        {
          v28.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
          *(_QWORD *)&v28.fields.hasValue = &v24;
          v16 = (Il2CppObject *)System_Nullable_ValueTuple_Int32Enum__int____get_Value(v28, v15);
          v17 = (System_ValueTuple_Int32Enum__int__o)v16;
          if ( !v3 )
            sub_1CE6958(v16, v16);
          v18 = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__;
          ++v3->fields._version;
          if ( !v18 )
            sub_1CE6958(v16, v16);
          v20 = v3->fields._size;
          if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
          {
            System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
              v3,
              v17,
              *(const MethodInfo_38B0104 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = v20 + 1;
            v18->m_Items[v20] = v16;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v23,
        (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
      return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v3;
    }
LABEL_27:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1CE6958)(Value, v10);
  }
  return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v3;
}


int32_t ServantLeaderInfo__GetIconLimitCountStage(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  struct OtherUserServantLimitCountManager_LimitCountStageData_o *AfterTransform_k__BackingField; // x8

  if ( (byte_4E05EF2 & 1) == 0 )
  {
    sub_1CE6700(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E05EF2 = 1;
  }
  if ( !this->fields._IsUserServant_k__BackingField )
    return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.iconLimitCount, 1, 0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( (overrideTransformVal & 0x80000000) == 0 )
    goto LABEL_9;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
  {
    overrideTransformVal = afterTransformSvtInfo->fields.transformVal;
LABEL_9:
    if ( !LimitCountStageData )
      goto LABEL_16;
    if ( overrideTransformVal )
    {
      AfterTransform_k__BackingField = LimitCountStageData->fields._AfterTransform_k__BackingField;
      if ( AfterTransform_k__BackingField )
        return AfterTransform_k__BackingField->fields._IconStage_k__BackingField;
LABEL_16:
      sub_1CE6958(LimitCountStageData, v6);
    }
    return LimitCountStageData->fields._IconStage_k__BackingField;
  }
  if ( !LimitCountStageData )
    goto LABEL_16;
  return LimitCountStageData->fields._IconStage_k__BackingField;
}


int32_t ServantLeaderInfo__GetIconLimitCountStageSealAfter(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t ServantId; // w0
  int32_t limitCount; // w20
  int32_t v6; // w21
  const MethodInfo *v7; // x2
  int32_t IconLimitCountStage; // w0

  if ( !this->fields._IsUserServant_k__BackingField )
    return ServantLeaderInfo__GetIconLimitCountStage(this, -1, v2);
  ServantId = ServantLeaderInfo__GetServantId(this, -1, v2);
  limitCount = this->fields.limitCount;
  v6 = ServantId;
  IconLimitCountStage = ServantLeaderInfo__GetIconLimitCountStage(this, -1, v7);
  return LimitCountUtility__GetSealAfter(v6, limitCount, IconLimitCountStage, 1, 0);
}


int32_t ServantLeaderInfo__GetIconLimitCountStageSealAfterIndexZero(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  int32_t IconLimitCountStageSealAfter; // w0

  IconLimitCountStageSealAfter = ServantLeaderInfo__GetIconLimitCountStageSealAfter(this, method);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(IconLimitCountStageSealAfter, 0);
}


int32_t ServantLeaderInfo__GetMaxLimitCountStage(
        ServantLeaderInfo_o *this,
        bool hasRewardStage,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1

  if ( (byte_4E05EFF & 1) == 0 )
  {
    sub_1CE6700(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E05EFF = 1;
  }
  if ( !this->fields._IsUserServant_k__BackingField )
    return LimitCountUtility__ConvertLimitCountToStage(this->fields.limitCount, 0, 0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( !LimitCountStageData )
    sub_1CE6958(0, v6);
  return OtherUserServantLimitCountManager_LimitCountStageData__GetMax(LimitCountStageData, hasRewardStage, 0);
}


System_String_o *ServantLeaderInfo__GetName(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantEntity_o *ServantEntity; // x0
  int32_t limitCount; // w21
  ServantEntity_o *v6; // x19
  const MethodInfo *v7; // x2
  int32_t DispLimitCountStageSealAfter; // w0
  __int64 v9; // x0
  __int64 v10; // x1

  ServantEntity = ServantLeaderInfo__GetServantEntity(this, -1, v2);
  limitCount = this->fields.limitCount;
  v6 = ServantEntity;
  DispLimitCountStageSealAfter = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, v7);
  v9 = LimitCountUtility__ConvertStageToLimitCount(limitCount, DispLimitCountStageSealAfter, 0, 0);
  if ( !v6 )
    sub_1CE6958(v9, v10);
  return ServantEntity__getName(v6, v9, -1, 0, 0, 0);
}


ServantOverwriteStatus_o *ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w20
  int32_t v5; // w0
  int32_t v6; // w20
  ServantOverwriteStatus_o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct ServantOverwriteStatus_o **p_overwriteStatus; // x0
  int32_t v15; // w1
  int32_t limitCount; // w20
  int32_t DispLimitCountStageSealAfter; // w0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  __int64 v21; // x0
  __int64 v22; // x1
  struct ServantEntity_o *saveTransformServantEntity; // x8
  __int64 v24; // x21
  __int64 v25; // x22
  int32_t v26; // w22
  ServantOverwriteStatus_o *v27; // x21
  int32_t v28; // w21
  int32_t v29; // w0
  int32_t v30; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4E05ED5 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&ServantOverwriteStatus_TypeInfo);
    byte_4E05ED5 = 1;
  }
  if ( !NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0) )
  {
    limitCount = this->fields.limitCount;
    DispLimitCountStageSealAfter = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, v3);
    v6 = LimitCountUtility__ConvertStageToLimitCount(limitCount, DispLimitCountStageSealAfter, 0, 0);
    if ( this->fields.overwriteStatus && this->fields.overwriteStatusLimitCount == v6 )
      goto LABEL_17;
    afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
    if ( afterTransformSvtInfo && afterTransformSvtInfo->fields.transformVal )
    {
      ServantLeaderInfo__Init(this, v18);
      saveTransformServantEntity = this->fields.saveTransformServantEntity;
      if ( !saveTransformServantEntity )
        sub_1CE6958(v21, v22);
      v25 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.currentCryptoKey;
      v24 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v32.fields.currentCryptoKey = v25;
      *(_QWORD *)&v32.fields.fakeValue = v24;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v32, 0);
      v27 = (ServantOverwriteStatus_o *)sub_1CE694C(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_35036868(v27, this, v26, v6, 0);
    }
    else
    {
      v28 = this->fields.limitCount;
      v29 = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, v19);
      v30 = LimitCountUtility__ConvertStageToLimitCount(v28, v29, 0, 0);
      v27 = (ServantOverwriteStatus_o *)sub_1CE694C(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_35036328(v27, this, v30, 0);
    }
    p_overwriteStatus = &this->fields.overwriteStatus;
    v15 = (int)v27;
    this->fields.overwriteStatus = v27;
LABEL_16:
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)p_overwriteStatus, v15, v8, v9, v10, v11, v12, v13);
LABEL_17:
    this->fields.overwriteStatusLimitCount = v6;
    return this->fields.overwriteStatus;
  }
  if ( !this->fields.overwriteStatus )
  {
    v4 = this->fields.limitCount;
    v5 = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, v3);
    v6 = LimitCountUtility__ConvertStageToLimitCount(v4, v5, 0, 0);
    v7 = (ServantOverwriteStatus_o *)sub_1CE694C(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_35036328(v7, this, v6, 0);
    this->fields.overwriteStatus = v7;
    p_overwriteStatus = &this->fields.overwriteStatus;
    v15 = (int)v7;
    goto LABEL_16;
  }
  return this->fields.overwriteStatus;
}


System_Int32_array *ServantLeaderInfo__GetPassiveSkillIdList(
        ServantLeaderInfo_o *this,
        int32_t dispSvtId,
        System_Int32_array *classPassive,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4E05EDB & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05EDB = 1;
  }
  if ( !classPassive )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0 )
    {
      sub_1CE6958(Instance, v7);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               dispSvtId,
               (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( Entity )
      return (System_Int32_array *)Entity[10].monitor;
    else
      return 0;
  }
  return classPassive;
}


void ServantLeaderInfo__GetPassiveSkillInfo(
        ServantLeaderInfo_o *this,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  il2cpp_array_size_t max_length; // x23
  System_String_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_String_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x1
  long double v27; // q0
  __int64 v28; // x0
  __int64 v29; // x0
  DataManager_o *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x22
  unsigned __int64 v32; // x25
  unsigned int v33; // w24
  __int64 v34; // x26
  int32_t *m_Items; // x27
  System_String_array *v36; // x28
  SkillEntity_o *v37; // x23
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  DataManager_o *v44; // x1
  Il2CppClass **v45; // x0
  System_String_array *v46; // x28
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  DataManager_o *v53; // x1
  Il2CppClass **v54; // x0
  unsigned __int64 max_length_low; // x8
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7

  if ( (byte_4E05EE1 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1CE6700(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1CE6700(&string___TypeInfo);
    byte_4E05EE1 = 1;
  }
  if ( !idList )
    goto LABEL_29;
  max_length = idList->max_length;
  if ( !max_length )
    goto LABEL_29;
  v12 = (System_String_array *)sub_1CE67A8(string___TypeInfo, (unsigned int)max_length);
  *titleList = v12;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)titleList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_String_array *)sub_1CE67A8(string___TypeInfo, (unsigned int)max_length);
  *explanationList = v19;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1CBC788(v27);
  v29 = *(_QWORD *)(*(_QWORD *)(v28 + 192) + 16LL);
  if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    v29 = sub_1CBC788(v27);
  MasterData_object = **(DataManager_o ***)(v29 + 184);
  if ( !MasterData_object )
LABEL_31:
    sub_1CE6958(MasterData_object, v26);
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( (int)max_length < 1 )
    goto LABEL_29;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  v32 = 0;
  v33 = 0;
  v34 = (unsigned int)max_length;
  m_Items = idList->m_Items;
  do
  {
    if ( v32 >= LODWORD(idList->max_length) )
LABEL_30:
      sub_1CE6960(MasterData_object);
    v26 = (unsigned int)m_Items[v32];
    if ( (int)v26 >= 1 )
    {
      if ( !v31 )
        goto LABEL_31;
      MasterData_object = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                             v31,
                                             v26,
                                             (const MethodInfo_34E925C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( MasterData_object )
      {
        v36 = *titleList;
        v37 = (SkillEntity_o *)MasterData_object;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectTitle((SkillEntity_o *)MasterData_object, 0, 0);
        if ( !v36 )
          goto LABEL_31;
        if ( v33 >= LODWORD(v36->max_length) )
          goto LABEL_30;
        v44 = MasterData_object;
        v45 = &v36->obj.klass + (int)v33;
        v45[4] = (Il2CppClass *)v44;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)v44, v38, v39, v40, v41, v42, v43);
        v46 = *explanationList;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectExplanation(v37, 0, 0);
        if ( !v46 )
          goto LABEL_31;
        if ( v33 >= LODWORD(v46->max_length) )
          goto LABEL_30;
        v53 = MasterData_object;
        v54 = &v46->obj.klass + (int)v33;
        v54[4] = (Il2CppClass *)v53;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v54 + 4), (int32_t)v53, v47, v48, v49, v50, v51, v52);
        if ( v32 != v33 )
        {
          max_length_low = LODWORD(idList->max_length);
          if ( v32 >= max_length_low || v33 >= (unsigned int)max_length_low )
            goto LABEL_30;
          idList->m_Items[v33] = m_Items[v32];
          m_Items[v32] = 0;
        }
        ++v33;
      }
      else
      {
        if ( v32 >= LODWORD(idList->max_length) )
          goto LABEL_30;
        m_Items[v32] = 0;
      }
    }
    ++v32;
  }
  while ( v34 != v32 );
  if ( !v33 )
  {
LABEL_29:
    *titleList = 0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)titleList,
      0,
      (int32_t)explanationList,
      (int32_t)idList,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    *explanationList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)explanationList, 0, v56, v57, v58, v59, v60, v61);
  }
}


int32_t ServantLeaderInfo__GetPortraitLimitCountStage(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  struct OtherUserServantLimitCountManager_LimitCountStageData_o *AfterTransform_k__BackingField; // x8

  if ( (byte_4E05EF3 & 1) == 0 )
  {
    sub_1CE6700(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E05EF3 = 1;
  }
  if ( !this->fields._IsUserServant_k__BackingField )
    return LimitCountUtility__GetLimitCountStageCheckZero(
             this->fields.limitCount,
             this->fields.portraitLimitCount,
             0,
             0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( (overrideTransformVal & 0x80000000) == 0 )
    goto LABEL_9;
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
  {
    overrideTransformVal = afterTransformSvtInfo->fields.transformVal;
LABEL_9:
    if ( !LimitCountStageData )
      goto LABEL_16;
    if ( overrideTransformVal )
    {
      AfterTransform_k__BackingField = LimitCountStageData->fields._AfterTransform_k__BackingField;
      if ( AfterTransform_k__BackingField )
        return AfterTransform_k__BackingField->fields._PortraitStage_k__BackingField;
LABEL_16:
      sub_1CE6958(LimitCountStageData, v6);
    }
    return LimitCountStageData->fields._PortraitStage_k__BackingField;
  }
  if ( !LimitCountStageData )
    goto LABEL_16;
  return LimitCountStageData->fields._PortraitStage_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *ServantLeaderInfo__GetServantEntity(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  ServantEntity_o **p_baseServantEntity; // x8

  if ( overrideTransformVal < 0 )
  {
    afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
    if ( !afterTransformSvtInfo )
      goto LABEL_7;
    *(_QWORD *)&overrideTransformVal = (unsigned int)afterTransformSvtInfo->fields.transformVal;
    if ( !overrideTransformVal )
      goto LABEL_7;
  }
  else if ( !overrideTransformVal )
  {
LABEL_7:
    ServantLeaderInfo__Init(this, *(const MethodInfo **)&overrideTransformVal);
    p_baseServantEntity = &this->fields.baseServantEntity;
    return *p_baseServantEntity;
  }
  ServantLeaderInfo__Init(this, *(const MethodInfo **)&overrideTransformVal);
  p_baseServantEntity = &this->fields.saveTransformServantEntity;
  return *p_baseServantEntity;
}


int32_t ServantLeaderInfo__GetServantId(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  ServantEntity_o *ServantEntity; // x0
  __int64 v6; // x1
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E05ED0 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05ED0 = 1;
  }
  ServantEntity = ServantLeaderInfo__GetServantEntity(this, overrideTransformVal, method);
  if ( !ServantEntity )
    sub_1CE6958(0, v6);
  v8 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v10, 0);
}


System_Int32_array *ServantLeaderInfo__GetSkillIdList(
        ServantLeaderInfo_o *this,
        int32_t id1,
        int32_t id2,
        int32_t id3,
        const MethodInfo *method)
{
  BalanceConfig_c *v8; // x0
  System_Int32_array *result; // x0
  __int64 v10; // x1
  unsigned int max_length; // w8

  if ( (byte_4E05ED8 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&int___TypeInfo);
    byte_4E05ED8 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1CE67A8(int___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1CE6958(0, v10);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[0] = id1, max_length == 1) || (result->m_Items[1] = id2, max_length <= 2) )
    sub_1CE6960(result);
  result->m_Items[2] = id3;
  return result;
}


void ServantLeaderInfo__GetSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispSvtId,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  long double v5; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  DataManager_o *Entity; // x0
  Il2CppObject *MasterData_object; // x26
  long double v12; // q0
  __int64 v13; // x8
  __int64 v14; // x0
  BalanceConfig_c **v15; // x25
  const MethodInfo *v16; // x1
  System_Int32_array *SkillLevelList; // x0
  BalanceConfig_c *v18; // x8
  System_Int32_array *v19; // x22
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  unsigned __int64 v27; // x21
  __int64 v28; // x23
  unsigned int v29; // w29
  int32_t *m_Items; // x24
  SkillEntity_o *v31; // x27
  BalanceConfig_c **v32; // x20
  ServantSkillEntity_o *EntityFromSkillId; // x26
  __int64 v34; // x25
  const MethodInfo *v35; // x1
  System_String_o *EffectTitle; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_String_o *EffectExplanation; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  __int64 v50; // x8
  int32_t skillNum; // w8
  GrandQuestFolderBoardItem_c *klass; // x26
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  void **v59; // x0
  int32_t *v60; // x20
  int32_t *i; // x21
  __int64 v62; // x0
  Il2CppObject *v63; // [xsp+0h] [xbp-90h]
  int32_t *v64; // [xsp+8h] [xbp-88h]
  ServantSkillMaster_o *v66; // [xsp+18h] [xbp-78h]
  GrandQuestFolderBoardItem_o *v67; // [xsp+20h] [xbp-70h]
  __int64 v68; // [xsp+28h] [xbp-68h]

  v67 = (GrandQuestFolderBoardItem_o *)skillInfoList;
  if ( (byte_4E05EDE & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1CE6700(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1CE6700(&SkillInfo___TypeInfo);
    sub_1CE6700(&SkillInfo_TypeInfo);
    byte_4E05EDE = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1CBC788(v5);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1CBC788(v5);
  Entity = **(DataManager_o ***)(v9 + 184);
  if ( !Entity )
    goto LABEL_55;
  MasterData_object = DataManager__GetMasterData_object_(
                        Entity,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1CBC788(v12);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1CBC788(v12);
  Entity = **(DataManager_o ***)(v14 + 184);
  if ( !Entity )
LABEL_55:
    sub_1CE6958(Entity, skillInfoList);
  v15 = &BalanceConfig_TypeInfo;
  v66 = (ServantSkillMaster_o *)DataManager__GetMasterData_object_(
                                  Entity,
                                  (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v16);
  v18 = BalanceConfig_TypeInfo;
  v19 = SkillLevelList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v20 = sub_1CE67A8(SkillInfo___TypeInfo, (unsigned int)v18->static_fields->SvtSkillListMax);
  v67->klass = (GrandQuestFolderBoardItem_c *)v20;
  sub_1CE66A4(v67, v20, v21, v22, v23, v24, v25, v26);
  v27 = 0;
  v68 = 0;
  v28 = 0;
  v29 = 0;
  m_Items = idList->m_Items;
  v63 = MasterData_object;
  v64 = v19->m_Items;
  while ( 1 )
  {
    Entity = (DataManager_o *)*v15;
    if ( !(*v15)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v15;
    }
    if ( (__int64)v27 >= *(int *)(*(_QWORD *)&Entity[1].fields._DispLog + 40LL) )
      break;
    if ( !idList )
      goto LABEL_55;
    if ( v27 >= LODWORD(idList->max_length) )
LABEL_56:
      sub_1CE6960(Entity);
    skillInfoList = (SkillInfo_array **)(unsigned int)m_Items[v27];
    if ( (int)skillInfoList >= 1 )
    {
      if ( !MasterData_object )
        goto LABEL_55;
      Entity = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)skillInfoList,
                                  (const MethodInfo_34E925C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( v27 >= LODWORD(idList->max_length) )
          goto LABEL_56;
        v31 = (SkillEntity_o *)Entity;
        Entity = (DataManager_o *)v66;
        if ( !v66 )
          goto LABEL_55;
        v32 = v15;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v66, dispSvtId, (int)v27 + 1, m_Items[v27], 0);
        v34 = sub_1CE694C(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v34, v35);
        if ( v27 >= LODWORD(idList->max_length) )
          goto LABEL_56;
        if ( !v34 )
          goto LABEL_55;
        *(_DWORD *)(v34 + 16) = m_Items[v27];
        if ( !v19 )
          goto LABEL_55;
        if ( v27 >= LODWORD(v19->max_length) )
          goto LABEL_56;
        *(_DWORD *)(v34 + 20) = v64[v27];
        Entity = (DataManager_o *)SkillEntity__getEffectChargeTurn(v31, v64[v27], 0);
        *(_DWORD *)(v34 + 24) = (_DWORD)Entity;
        if ( v27 >= LODWORD(v19->max_length) )
          goto LABEL_56;
        EffectTitle = SkillEntity__getEffectTitle(v31, v64[v27], 0);
        *(_QWORD *)(v34 + 32) = EffectTitle;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v34 + 32), (int32_t)EffectTitle, v37, v38, v39, v40, v41, v42);
        if ( v27 >= LODWORD(v19->max_length) )
          goto LABEL_56;
        EffectExplanation = SkillEntity__getEffectExplanation(v31, v64[v27], 0);
        *(_QWORD *)(v34 + 40) = EffectExplanation;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v34 + 40), (int32_t)EffectExplanation, v44, v45, v46, v47, v48, v49);
        v50 = v68;
        if ( EntityFromSkillId )
          v28 = v34;
        else
          v50 = v34;
        v68 = v50;
        if ( EntityFromSkillId )
        {
          Entity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, -1, 0);
          if ( !v28 )
            goto LABEL_55;
          *(_DWORD *)(v28 + 48) = (_DWORD)Entity;
          skillNum = EntityFromSkillId->fields.skillNum;
        }
        else
        {
          if ( !v50 )
            goto LABEL_55;
          skillNum = 0;
          *(_DWORD *)(v68 + 48) = 0;
        }
        *(_DWORD *)(v34 + 52) = skillNum;
        *(_BYTE *)(v34 + 56) = 1;
        klass = v67->klass;
        if ( !v67->klass )
          goto LABEL_55;
        Entity = (DataManager_o *)sub_1CE683C(v34, *((_QWORD *)klass->_1.image + 8));
        if ( !Entity )
        {
          v62 = sub_1CE697C(0);
          sub_1CE6828(v62, 0);
        }
        if ( v29 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_56;
        v59 = &klass->_1.image + (int)v29;
        v59[4] = (void *)v34;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v59 + 4), v34, v53, v54, v55, v56, v57, v58);
        MasterData_object = v63;
        ++v29;
        v15 = v32;
      }
    }
    ++v27;
  }
  v60 = &v19->m_Items[v29];
  for ( i = &idList->m_Items[v29]; ; ++i )
  {
    if ( !LODWORD(Entity[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Entity);
      Entity = (DataManager_o *)*v15;
    }
    if ( (signed int)v29 >= *(_DWORD *)(*(_QWORD *)&Entity[1].fields._DispLog + 40LL) )
      break;
    if ( !idList )
      goto LABEL_55;
    if ( v29 >= LODWORD(idList->max_length) )
      goto LABEL_56;
    *i = 0;
    if ( !v19 )
      goto LABEL_55;
    if ( v29 >= LODWORD(v19->max_length) )
      goto LABEL_56;
    *v60++ = -1;
    ++v29;
  }
}


int32_t ServantLeaderInfo__GetSvtClassId(
        ServantLeaderInfo_o *this,
        bool isPlayableBeastToBase,
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  Il2CppObject *Master_object; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  Il2CppObject *Entity; // x0
  __int64 v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4E05EFE & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EFE = 1;
  }
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v16, 0) < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v10;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v17, 0);
  if ( !v12
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v12,
                   (int32_t)Entity,
                   (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1CE6958(Entity, v14);
  }
  return ServantEntity__GetClassId((ServantEntity_o *)Entity, isPlayableBeastToBase, isGrandServant, 0);
}


int32_t ServantLeaderInfo__GetTimesToRestart(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v7; // x0
  UserEventDataLostEntity_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x19
  __int64 v13; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4E05EFA & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EFA = 1;
  }
  entity = 0;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4DFE4CA )
    {
      sub_1CE6700(&NetworkManager_TypeInfo);
      byte_4DFE4CA = 1;
    }
    v7 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v7 = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_25;
    if ( UserEventDataLostMaster__TryGetEntity(
           (UserEventDataLostMaster_o *)Master_object,
           &entity,
           v7->static_fields->userIdNumber,
           questRestrictionInfo->fields.dataLostBattleId,
           0) )
    {
      v8 = entity;
      v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = v10;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      v7 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v16, 0);
      if ( !v8 )
        goto LABEL_25;
      if ( UserEventDataLostEntity__IsRestart(v8, (int32_t)v7, 0) )
      {
        v11 = entity;
        v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v17.fields.currentCryptoKey = v13;
        *(_QWORD *)&v17.fields.fakeValue = v12;
        v7 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v17, 0);
        if ( v11 )
          return UserEventDataLostEntity__GetTimesToRestart(v11, (int32_t)v7, 0);
LABEL_25:
        sub_1CE6958(v7, v5);
      }
    }
  }
  return 0;
}


System_Int32_array *ServantLeaderInfo__GetTransformedPassiveSkillIdList(
        ServantLeaderInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x20
  GrandQuestFolderBoardItem_o *p_classPassive; // x20
  System_Int32_array *classPassive; // t1
  System_Int32_array *PassiveSkillIdList; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  struct AfterTransformSvtInfo_o *v17; // x8

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( !afterTransformSvtInfo )
    return ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, 0, v3);
  classPassive = afterTransformSvtInfo->fields.classPassive;
  p_classPassive = (GrandQuestFolderBoardItem_o *)&afterTransformSvtInfo->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, classPassive, v3);
  p_classPassive->klass = (GrandQuestFolderBoardItem_c *)PassiveSkillIdList;
  sub_1CE66A4(p_classPassive, (int32_t)PassiveSkillIdList, v9, v10, v11, v12, v13, v14);
  v17 = this->fields.afterTransformSvtInfo;
  if ( !v17 )
    sub_1CE6958(v15, v16);
  return v17->fields.classPassive;
}


void ServantLeaderInfo__GetTransformedPassiveSkillInfo(
        ServantLeaderInfo_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Int32_array *TransformedPassiveSkillIdList; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  ServantLeaderInfo_o *v16; // x0
  const MethodInfo *v17; // x4

  TransformedPassiveSkillIdList = ServantLeaderInfo__GetTransformedPassiveSkillIdList(
                                    this,
                                    svtId,
                                    (const MethodInfo *)titleList);
  *idList = TransformedPassiveSkillIdList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)idList,
    (int32_t)TransformedPassiveSkillIdList,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ServantLeaderInfo__GetPassiveSkillInfo(v16, titleList, explanationList, *idList, v17);
}


System_Int32_array *ServantLeaderInfo__GetTransformedSkillIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  int32_t skillId1; // w1
  int32_t skillId2; // w2
  int32_t skillId3; // w3

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
  {
    skillId1 = afterTransformSvtInfo->fields.skillId1;
    skillId2 = afterTransformSvtInfo->fields.skillId2;
    skillId3 = afterTransformSvtInfo->fields.skillId3;
  }
  else
  {
    skillId1 = 0;
    skillId2 = 0;
    skillId3 = 0;
  }
  return ServantLeaderInfo__GetSkillIdList(this, skillId1, skillId2, skillId3, v2);
}


void ServantLeaderInfo__GetTransformedSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Int32_array *TransformedSkillIdList; // x0
  const MethodInfo *v8; // x4

  TransformedSkillIdList = ServantLeaderInfo__GetTransformedSkillIdList(this, (const MethodInfo *)skillInfoList);
  ServantLeaderInfo__GetSkillInfo(this, skillInfoList, svtId, TransformedSkillIdList, v8);
}


bool ServantLeaderInfo__GetTransformedTreasureDeviceInfo(
        ServantLeaderInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  int32_t treasureDeviceId; // w3

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
    treasureDeviceId = afterTransformSvtInfo->fields.treasureDeviceId;
  else
    treasureDeviceId = 0;
  return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, svtId, treasureDeviceId, v4);
}


bool ServantLeaderInfo__GetTreasureDeviceInfo(
        ServantLeaderInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispSvtId,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  long double v5; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *MasterData_object; // x0
  ServantTreasureDvcEntity_o *EntityFromSvtIdDvcId; // x22
  TreasureDvcInfo_o *v14; // x23
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  TreasureDvcInfo_o *v22; // x8
  int32_t tdLv; // w9

  if ( (byte_4E05EEA & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1CE6700(&TreasureDvcInfo_TypeInfo);
    byte_4E05EEA = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1CBC788(v5);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1CBC788(v5);
  MasterData_object = **(Il2CppObject ***)(v11 + 184);
  if ( !MasterData_object )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !MasterData_object )
    goto LABEL_13;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           (ServantTreasureDvcMaster_o *)MasterData_object,
                           dispSvtId,
                           treasureDeviceId,
                           0);
  v14 = (TreasureDvcInfo_o *)sub_1CE694C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v14, v15);
  *tdInfo = v14;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  if ( EntityFromSvtIdDvcId )
  {
    v22 = *tdInfo;
    if ( *tdInfo )
    {
      v22->fields.id = treasureDeviceId;
      tdLv = this->fields.treasureDeviceLv;
      v22->fields.lv = tdLv;
      ServantTreasureDvcEntity__getEffectExplanation(
        EntityFromSvtIdDvcId,
        &v22->fields.name,
        &v22->fields.explanation,
        &v22->fields.maxLv,
        &v22->fields.guageCount,
        &v22->fields.cardId,
        &v22->fields.strengthStatus,
        &v22->fields.treasureDeviceNum,
        tdLv,
        0);
      return EntityFromSvtIdDvcId != 0;
    }
LABEL_13:
    sub_1CE6958(MasterData_object, tdInfo);
  }
  return EntityFromSvtIdDvcId != 0;
}


void ServantLeaderInfo__Init(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x21
  __int64 v5; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  ServantEntity_o *baseServantEntity; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  ServantEntity_TransformInfo_o *v17; // x20
  Il2CppObject *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4E05ECF & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05ECF = 1;
  }
  if ( !this->fields.baseServantEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
    v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v5;
    *(_QWORD *)&v25.fields.fakeValue = v4;
    baseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v25, 0);
    if ( v6 )
    {
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v6,
                 (int32_t)baseServantEntity,
                 (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.baseServantEntity = (struct ServantEntity_o *)Entity;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields.baseServantEntity,
        (int32_t)Entity,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      baseServantEntity = this->fields.baseServantEntity;
      if ( baseServantEntity )
      {
        TransformInfo = ServantEntity__GetTransformInfo(baseServantEntity, 0);
        if ( !TransformInfo )
          return;
        v17 = TransformInfo;
        if ( TransformInfo->fields.saveTransform < 1 )
          return;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        baseServantEntity = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( baseServantEntity )
        {
          v18 = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)baseServantEntity,
                  v17->fields.saveTransform,
                  (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          this->fields.saveTransformServantEntity = (struct ServantEntity_o *)v18;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&this->fields.saveTransformServantEntity,
            (int32_t)v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          return;
        }
      }
    }
    sub_1CE6958(baseServantEntity, v8);
  }
}


int32_t ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4E05EFD & 1) == 0 )
  {
    sub_1CE6700(&System_Convert_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1CE6700(&StringLiteral_19317/*"equipTarget2SkillChange"*/);
    byte_4E05EFD = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19317/*"equipTarget2SkillChange"*/,
           &value,
           (const MethodInfo_35B619C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v4 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LODWORD(script) = System_Convert__ToInt32(v4, 0);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


bool ServantLeaderInfo__IsDataLost(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v7; // x0
  UserEventDataLostEntity_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x19
  __int64 v13; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4E05EF9 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EF9 = 1;
  }
  entity = 0;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4DFE4CA )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4DFE4CA = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_26;
  if ( !UserEventDataLostMaster__TryGetEntity(
          (UserEventDataLostMaster_o *)Master_object,
          &entity,
          v7->static_fields->userIdNumber,
          questRestrictionInfo->fields.dataLostBattleId,
          0) )
    return 0;
  v8 = entity;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  v7 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v16, 0);
  if ( !v8 )
    goto LABEL_26;
  if ( UserEventDataLostEntity__IsRestart(v8, (int32_t)v7, 0) )
    return 0;
  v11 = entity;
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  v7 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v17, 0);
  if ( !v11 )
LABEL_26:
    sub_1CE6958(v7, v5);
  return UserEventDataLostEntity__IsDataLost(v11, (int32_t)v7, 0);
}


bool ServantLeaderInfo__IsHideEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsHideEquip(this->fields.npcFlag, 0);
}


bool ServantLeaderInfo__IsHideSupport(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsHideSupport(this->fields.npcFlag, 0);
}


bool ServantLeaderInfo__IsNotClassBoardNpc(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsNotClassBoard(this->fields.npcFlag, 0);
}


bool ServantLeaderInfo__IsNotUsedTreasureDeice(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsNotUsedTreasureDevice(this->fields.npcFlag, 0);
}


bool ServantLeaderInfo__IsNpc(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0);
}


bool ServantLeaderInfo__IsSlotRestriction(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  int32_t limitCount; // w21
  int32_t v7; // w22
  const MethodInfo *v8; // x2
  int32_t DispLimitCountStage; // w0
  int32_t v10; // w3

  if ( !questRestrictionInfo )
    return 0;
  ServantId = ServantLeaderInfo__GetServantId(this, -1, method);
  limitCount = this->fields.limitCount;
  v7 = ServantId;
  DispLimitCountStage = ServantLeaderInfo__GetDispLimitCountStage(this, -1, v8);
  v10 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  return QuestRestrictionInfo__IsSlotRestrictionForSupport(questRestrictionInfo, v7, limitCount, v10, 0);
}


bool ServantLeaderInfo__IsUniqueIndividualityRestriction(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        FollowerInfo_o *npcFollowerInfo,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  int32_t limitCount; // w22
  int32_t v9; // w23
  const MethodInfo *v10; // x2
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v12; // w3

  if ( !questRestrictionInfo )
    return 0;
  ServantId = ServantLeaderInfo__GetServantId(this, -1, (const MethodInfo *)npcFollowerInfo);
  limitCount = this->fields.limitCount;
  v9 = ServantId;
  DispLimitCountStageSealAfter = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, v10);
  v12 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  return QuestRestrictionInfo__IsUniqueIndividuality_44556952(
           questRestrictionInfo,
           v9,
           limitCount,
           v12,
           npcFollowerInfo,
           0);
}


bool ServantLeaderInfo__IsUniqueIndividualityRestriction_44704332(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyListViewItem_o *partyItem,
        int32_t num,
        FollowerInfo_o *npcFollowerInfo,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  int32_t limitCount; // w24
  int32_t v13; // w25
  const MethodInfo *v14; // x2
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v16; // w0

  if ( !questRestrictionInfo )
    return 0;
  ServantId = ServantLeaderInfo__GetServantId(this, -1, (const MethodInfo *)partyItem);
  limitCount = this->fields.limitCount;
  v13 = ServantId;
  DispLimitCountStageSealAfter = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, v14);
  v16 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  return QuestRestrictionInfo__IsUniqueIndividuality_44558264(
           questRestrictionInfo,
           v13,
           limitCount,
           v16,
           partyItem,
           num,
           -1,
           npcFollowerInfo,
           0);
}


void ServantLeaderInfo__SetEquipImagePartsGroupIdxs(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.imagePartsGroupInfo, 0) )
  {
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs_44712604(this, this->fields.equipTarget1, v3);
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs_44712604(this, this->fields.equipTarget2, v4);
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs_44712604(this, this->fields.equipTarget3, v5);
  }
}


void ServantLeaderInfo__SetEquipImagePartsGroupIdxs_44712604(
        ServantLeaderInfo_o *this,
        EquipTargetInfo_o *equipTarget,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Master_object; // x0
  __int64 v7; // x23
  __int64 v8; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  Il2CppObject *IntValue; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *imagePartsGroupInfo; // x20
  System_Func_object__bool__o *v13; // x22
  Il2CppObject *v14; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4E05EFB & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Single_UserImagePartsGroupEntity___);
    sub_1CE6700(&System_Func_UserImagePartsGroupEntity__bool__TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_ServantLeaderInfo___c__DisplayClass153_0__SetEquipImagePartsGroupIdxs_b__0__);
    sub_1CE6700(&ServantLeaderInfo___c__DisplayClass153_0_TypeInfo);
    sub_1CE6700(&StringLiteral_20585/*"imagePartsGroupId"*/);
    byte_4E05EFB = 1;
  }
  entity = 0;
  v5 = sub_1CE694C(ServantLeaderInfo___c__DisplayClass153_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( equipTarget )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
    v8 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v8;
    *(_QWORD *)&v16.fields.fakeValue = v7;
    IntValue = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v16, 0);
    if ( !v9 )
      goto LABEL_17;
    IntValue = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 v9,
                                 &entity,
                                 (int32_t)IntValue,
                                 (const MethodInfo_34E92A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)IntValue & 1) == 0 )
      return;
    if ( !entity )
      goto LABEL_17;
    IntValue = (Il2CppObject *)EntityScriptUtil__GetIntValue(
                                 (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                                 (System_String_o *)StringLiteral_20585/*"imagePartsGroupId"*/,
                                 0,
                                 0);
    if ( !v5 )
      goto LABEL_17;
    *(_DWORD *)(v5 + 16) = (_DWORD)IntValue;
    if ( !(_DWORD)IntValue )
      return;
    imagePartsGroupInfo = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.imagePartsGroupInfo;
    v13 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_UserImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v5,
      Method_ServantLeaderInfo___c__DisplayClass153_0__SetEquipImagePartsGroupIdxs_b__0__,
      0);
    IntValue = System_Linq_Enumerable__Single_object__52690412(
                 imagePartsGroupInfo,
                 (System_Func_TSource__bool__o *)v13,
                 (const MethodInfo_323FDEC *)Method_System_Linq_Enumerable_Single_UserImagePartsGroupEntity___);
    if ( !IntValue )
LABEL_17:
      sub_1CE6958(IntValue, v11);
    v14 = IntValue;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntValue[1].monitor, 0) )
      EquipTargetInfo__SetImagePartsGroupIdxs(equipTarget, (System_Int32_array *)v14[1].monitor, 0);
  }
}


void ServantLeaderInfo__SetSkillChangeInfo(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  EquipTargetInfo_o *equipTarget2; // x19
  bool v3; // w1

  equipTarget2 = this->fields.equipTarget2;
  if ( equipTarget2 )
  {
    v3 = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(this, method) > 0;
    EquipTargetInfo__SetSkillChangeFlag(equipTarget2, v3, 0);
  }
}


void ServantLeaderInfo__SetTransformData(ServantLeaderInfo_o *this, int32_t friendshipRank, const MethodInfo *method)
{
  int32_t DispLimitCountStageSealAfter; // w21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  struct ServantEntity_o *saveTransformServantEntity; // x8
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w0
  const MethodInfo *v14; // x4
  struct AfterTransformSvtInfo_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32x4_t *afterTransformSvtInfo; // x8
  Il2CppObject *Master_object; // x0
  __int64 v24; // x23
  __int64 v25; // x24
  ServantTransformMaster_o *v26; // x22
  const MethodInfo *v27; // x4
  struct AfterTransformSvtInfo_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4E05ED2 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05ED2 = 1;
  }
  entity = 0;
  DispLimitCountStageSealAfter = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, method);
  ServantLeaderInfo__Init(this, v6);
  if ( this->fields.saveTransformServantEntity )
  {
    ServantLeaderInfo__Init(this, v7);
    saveTransformServantEntity = this->fields.saveTransformServantEntity;
    if ( saveTransformServantEntity )
    {
      v12 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.currentCryptoKey;
      v11 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v36.fields.currentCryptoKey = v12;
      *(_QWORD *)&v36.fields.fakeValue = v11;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v36, 0);
      v15 = ServantLeaderInfo__CreateAfterTransformSvtInfo(this, v13, DispLimitCountStageSealAfter, friendshipRank, v14);
      this->fields.afterTransformSvtInfo = v15;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields.afterTransformSvtInfo,
        (int32_t)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      afterTransformSvtInfo = (int32x4_t *)this->fields.afterTransformSvtInfo;
      if ( afterTransformSvtInfo )
      {
        afterTransformSvtInfo[2].n128_u32[0] = DispLimitCountStageSealAfter;
        afterTransformSvtInfo[1] = vdupq_n_s32(DispLimitCountStageSealAfter);
        return;
      }
    }
LABEL_18:
    sub_1CE6958(v8, v9);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v25 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v26 = (ServantTransformMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v25;
  *(_QWORD *)&v37.fields.fakeValue = v24;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v37, 0);
  if ( !v26 )
    goto LABEL_18;
  v8 = ServantTransformMaster__TryGetEntity(v26, &entity, v8, DispLimitCountStageSealAfter, 0);
  if ( (v8 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    v28 = ServantLeaderInfo__CreateAfterTransformSvtInfo(
            this,
            entity->fields.aftSvtId,
            entity->fields.aftDispLimitCount,
            friendshipRank,
            v27);
    this->fields.afterTransformSvtInfo = v28;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.afterTransformSvtInfo,
      (int32_t)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
}


void ServantLeaderInfo__SetupLimitCountStageByMax(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t MaxLimitCountStage; // w0

  this->fields._IsUserServant_k__BackingField = 0;
  MaxLimitCountStage = ServantLeaderInfo__GetMaxLimitCountStage(this, 0, v2);
  this->fields.portraitLimitCount = MaxLimitCountStage;
  *(int32x4_t *)&this->fields.imageLimitCount = vdupq_n_s32(MaxLimitCountStage);
}


void ServantLeaderInfo__SetupLimitCountStageForNpc(
        ServantLeaderInfo_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t MaxLimitCountStage; // w0
  int32_t v6; // w20

  this->fields._IsUserServant_k__BackingField = 0;
  MaxLimitCountStage = ServantLeaderInfo__GetMaxLimitCountStage(this, 0, method);
  v6 = MaxLimitCountStage;
  if ( dispLimitCount > 0 )
    MaxLimitCountStage = dispLimitCount;
  this->fields.dispLimitCount = MaxLimitCountStage;
  if ( LimitCountUtility__IsCostume(MaxLimitCountStage, 0) )
    v6 = this->fields.dispLimitCount;
  this->fields.iconLimitCount = v6;
  this->fields.portraitLimitCount = v6;
  this->fields.commandCardLimitCount = v6;
  this->fields.imageLimitCount = v6;
}


// local variable allocation has failed, the output may be wrong!
bool ServantLeaderInfo__getBaseEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool otherValidEventIdFilter,
        const MethodInfo *method)
{
  DataManager_o *ServantId; // x0
  unsigned __int64 v8; // x1
  int32_t v9; // w24
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  SkillLvMaster_o *v15; // x20
  const MethodInfo *v16; // x4
  DataManager_o *v17; // x22
  DataManager_o *v18; // x23
  __int64 m_CancellationTokenSource; // x26
  bool v20; // w25
  unsigned __int64 v21; // x27
  SkillLvEntity_o *v22; // x24
  int32_t v23; // w7
  struct System_Threading_CancellationTokenSource_o *v24; // x8
  __int64 v25; // x29
  struct AfterTransformSvtInfo_o *v26; // x8
  System_Int32_array *TransformedSkillIdList; // x0
  const MethodInfo *v28; // x1
  System_Int32_array *v29; // x22
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  SkillLvEntity_o *Entity; // x0
  int32_t otherValidEventId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4E05EE6 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05EE6 = 1;
  }
  otherValidEventId = 0;
  ServantId = (DataManager_o *)ServantLeaderInfo__GetServantId(this, -1, (const MethodInfo *)otherValidEventIdFilter);
  if ( (int)ServantId < 1 )
    return 0;
  if ( !*eventUpVallInfo )
    goto LABEL_61;
  v9 = (int)ServantId;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0) )
    return 0;
  ServantId = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantId )
    goto LABEL_61;
  MasterData_object = DataManager__GetMasterData_object_(
                        ServantId,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  v15 = (SkillLvMaster_o *)MasterData_object;
  if ( afterTransformSvtInfo && afterTransformSvtInfo->fields.transformVal )
    ServantId = (DataManager_o *)ServantLeaderInfo__GetTransformedPassiveSkillIdList(this, v9, v13);
  else
    ServantId = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v12);
  v17 = ServantId;
  if ( !ServantId )
    goto LABEL_41;
  if ( otherValidEventIdFilter )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ServantId = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    if ( ServantId )
    {
      ServantId = (DataManager_o *)ServantPassiveSkillMaster__getServantSkillList(
                                     (ServantPassiveSkillMaster_o *)ServantId,
                                     v9,
                                     0);
      v18 = ServantId;
      goto LABEL_19;
    }
LABEL_61:
    sub_1CE6958(ServantId, v8);
  }
  v18 = 0;
LABEL_19:
  if ( (int)v17->fields.m_CancellationTokenSource >= 1 )
  {
    m_CancellationTokenSource = (unsigned int)v17->fields.m_CancellationTokenSource;
    if ( !(unsigned int)v17->fields.m_CancellationTokenSource )
LABEL_40:
      sub_1CE6960(ServantId);
    v20 = 0;
    v21 = 0;
    while ( 1 )
    {
      v8 = *((unsigned int *)&v17->fields._DispLog + v21);
      if ( (int)v8 >= 1 )
      {
        if ( !v15 )
          goto LABEL_61;
        ServantId = (DataManager_o *)SkillLvMaster__GetEntity(v15, v8, 1, 0);
        if ( ServantId )
        {
          v22 = (SkillLvEntity_o *)ServantId;
          v23 = -1;
          otherValidEventId = -1;
          if ( v18 )
          {
            v24 = v18->fields.m_CancellationTokenSource;
            if ( (int)v24 < 1 )
            {
              v23 = -1;
            }
            else
            {
              v25 = 0;
              do
              {
                if ( (unsigned int)v25 >= (unsigned int)v24 )
                  goto LABEL_40;
                ServantId = (DataManager_o *)*((_QWORD *)&v18->fields._DispLog + v25);
                if ( !ServantId )
                  goto LABEL_61;
                if ( HIDWORD(ServantId->fields.m_CancellationTokenSource) == v22->fields.skillId )
                {
                  ServantId = (DataManager_o *)ServantPassiveSkillEntity__TryGetOtherValidEventId(
                                                 (ServantPassiveSkillEntity_o *)ServantId,
                                                 &otherValidEventId,
                                                 0);
                  if ( ((unsigned __int8)ServantId & 1) != 0 )
                    break;
                  v24 = v18->fields.m_CancellationTokenSource;
                }
                ++v25;
              }
              while ( (int)v25 < (int)v24 );
              v23 = otherValidEventId;
            }
          }
          ServantId = (DataManager_o *)SkillLvEntity__getEventUpVal_44037976(
                                         v22,
                                         eventUpVallInfo,
                                         1,
                                         0,
                                         1,
                                         0,
                                         0,
                                         v23,
                                         0);
          if ( ((unsigned __int8)ServantId & 1) != 0 )
            v20 = 1;
        }
      }
      if ( ++v21 == m_CancellationTokenSource )
        goto LABEL_42;
      if ( v21 >= LODWORD(v17->fields.m_CancellationTokenSource) )
        goto LABEL_40;
    }
  }
LABEL_41:
  v20 = 0;
LABEL_42:
  v26 = this->fields.afterTransformSvtInfo;
  if ( v26 && v26->fields.transformVal )
    TransformedSkillIdList = ServantLeaderInfo__GetTransformedSkillIdList(this, (const MethodInfo *)v8);
  else
    TransformedSkillIdList = ServantLeaderInfo__GetSkillIdList(
                               (ServantLeaderInfo_o *)ServantId,
                               this->fields.skillId1,
                               this->fields.skillId2,
                               this->fields.skillId3,
                               v16);
  v29 = TransformedSkillIdList;
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v28);
  for ( i = 0; ; ++i )
  {
    ServantId = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      ServantId = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&ServantId[1].fields._DispLog + 40LL) )
      break;
    if ( !v29 )
      goto LABEL_61;
    if ( i >= LODWORD(v29->max_length) )
      goto LABEL_40;
    v8 = (unsigned int)v29->m_Items[i];
    if ( (int)v8 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_61;
      if ( i >= LODWORD(SkillLevelList->max_length) )
        goto LABEL_40;
      if ( !v15 )
        goto LABEL_61;
      Entity = SkillLvMaster__GetEntity(v15, v8, SkillLevelList->m_Items[i], 0);
      if ( Entity )
      {
        if ( SkillLvEntity__getEventUpVal_44037976(Entity, eventUpVallInfo, 1, 0, 1, 0, 0, -1, 0) )
          v20 = 1;
      }
    }
  }
  return v20;
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEntity_o *ServantLeaderInfo__getCommandCodeEntity(
        ServantLeaderInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *v4; // x20
  struct CommandCodeStatus_array *commandCode; // x10
  int max_length; // w8
  __int64 v7; // x9
  CommandCodeStatus_o **m_Items; // x10
  CommandCodeStatus_o *v9; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_4E05EF5 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1CE6700(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantLeaderInfo_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05EF5 = 1;
  }
  commandCode = v4->fields.commandCode;
  if ( !commandCode )
    return 0;
  max_length = commandCode->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  m_Items = commandCode->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= max_length )
      sub_1CE6960(this);
    v9 = m_Items[v7];
    if ( !v9 )
      goto LABEL_16;
    if ( v9->fields.idx == index )
      break;
    if ( (int)++v7 >= max_length )
      return 0;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v13 = *(_QWORD *)&v9->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v9->fields.commandCodeId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v13;
  *(_QWORD *)&v15.fields.fakeValue = v12;
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v15, 0);
  if ( !v14 )
LABEL_16:
    sub_1CE6958(this, *(_QWORD *)&index);
  return (CommandCodeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  v14,
                                  (int32_t)this,
                                  (const MethodInfo_34E925C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
}


System_Int32_array *ServantLeaderInfo__getCommandCodeIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  struct CommandCodeStatus_array *commandCode; // x23
  int max_length; // w8
  BalanceConfig_c *v8; // x19
  int i; // w24
  CommandCodeStatus_o *v10; // x20
  int32_t idx; // w21
  __int64 v12; // x26
  __int64 v13; // x20
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4E05EF4 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&int___TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EF4 = 1;
  }
  if ( !this->fields.commandCode )
    return 0;
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1CE67A8(int___TypeInfo, (unsigned int)v3->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_23:
    sub_1CE6958(v4, v5);
  max_length = commandCode->max_length;
  v8 = v4;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_24:
        sub_1CE6960(v4);
      v10 = commandCode->m_Items[i];
      if ( !v10 )
        goto LABEL_23;
      v4 = BalanceConfig_TypeInfo;
      idx = v10->fields.idx;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v4 = BalanceConfig_TypeInfo;
      }
      if ( idx < v4->static_fields->SvtCommandCardMax )
      {
        v12 = v10->fields.idx;
        v14 = *(_QWORD *)&v10->fields.commandCodeId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&v10->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v16.fields.currentCryptoKey = v14;
        *(_QWORD *)&v16.fields.fakeValue = v13;
        v4 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v16, 0);
        if ( !v8 )
          goto LABEL_23;
        if ( (unsigned int)v12 >= LODWORD(v8->_1.namespaze) )
          goto LABEL_24;
        *((_DWORD *)&v8->_1.byval_arg.data + v12) = (_DWORD)v4;
      }
      max_length = commandCode->max_length;
    }
  }
  return (System_Int32_array *)v8;
}


int32_t ServantLeaderInfo__getDispLimitCount(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t DispLimitCountStage; // w0

  DispLimitCountStage = ServantLeaderInfo__GetDispLimitCountStage(this, -1, v2);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
}


bool ServantLeaderInfo__getEquipExpInfo(
        ServantLeaderInfo_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v10; // x23
  __int64 v11; // x24
  __int64 v12; // x1
  EquipTargetInfo_o *v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4E05EED & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EED = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_9;
  v11 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v15, 0) >= 1 )
  {
    v13 = this->fields.equipTarget1;
    if ( !v13 )
      sub_1CE6958(0, v12);
    return EquipTargetInfo__getExpInfo(v13, exp, lateExp, barExp, 0);
  }
  else
  {
LABEL_9:
    *exp = 0;
    *lateExp = 0;
    *barExp = 0.0;
    return 0;
  }
}


void ServantLeaderInfo__getEquipSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x1
  EquipTargetInfo_o *v9; // x0
  BalanceConfig_c *v10; // x0
  SkillInfo_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4E05EDF & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&SkillInfo___TypeInfo);
    byte_4E05EDF = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_9;
  v7 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v18, 0) >= 1 )
  {
    v9 = this->fields.equipTarget1;
    if ( !v9 )
      sub_1CE6958(0, v8);
    EquipTargetInfo__getSkillInfo(v9, skillInfoList, 0);
  }
  else
  {
LABEL_9:
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    v11 = (SkillInfo_array *)sub_1CE67A8(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v11;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  }
}


bool ServantLeaderInfo__getEventUpVal(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        EventUpValSetupInfo_o *setupInfo,
        bool otherValidEventIdFilter,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  int32_t limitCount; // w23
  int32_t v11; // w24
  const MethodInfo *v12; // x2
  int32_t DispLimitCountStage; // w0
  int32_t v14; // w0
  int32_t npcFlag; // w25
  int32_t v16; // w26
  EventUpValInfo_o *v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x3
  bool BaseEventUpVal; // w0
  struct EquipTargetInfo_o *equipTarget1; // x8
  bool v27; // w21
  EventUpValInfo_o *v28; // x24
  __int64 v29; // x22
  __int64 v30; // x23
  EquipTargetInfo_o *v31; // x0
  __int64 v32; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4E05EE4 & 1) == 0 )
  {
    sub_1CE6700(&EventUpValInfo_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EE4 = 1;
  }
  ServantId = ServantLeaderInfo__GetServantId(this, -1, (const MethodInfo *)setupInfo);
  limitCount = this->fields.limitCount;
  v11 = ServantId;
  DispLimitCountStage = ServantLeaderInfo__GetDispLimitCountStage(this, -1, v12);
  v14 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  npcFlag = this->fields.npcFlag;
  v16 = v14;
  v17 = (EventUpValInfo_o *)sub_1CE694C(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v17, setupInfo, v11, limitCount, v16, npcFlag, 0);
  *eventUpVallInfo = v17;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)eventUpVallInfo, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  if ( v11 < 1 )
    return 0;
  BaseEventUpVal = ServantLeaderInfo__getBaseEventUpVal(this, eventUpVallInfo, otherValidEventIdFilter, v24);
  equipTarget1 = this->fields.equipTarget1;
  v27 = BaseEventUpVal;
  if ( !equipTarget1 )
    return v27;
  v28 = *eventUpVallInfo;
  v30 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v30;
  *(_QWORD *)&v34.fields.fakeValue = v29;
  v31 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v34, 0);
  if ( !v28 || (v28->fields.equipSvtId = (int)v31, (v31 = this->fields.equipTarget1) == 0) )
    sub_1CE6958(v31, v32);
  return (v27 | EquipTargetInfo__getEventUpVal_42868712(v31, eventUpVallInfo, 1, 0)) & 1;
}


bool ServantLeaderInfo__getEventUpVal_44703348(
        ServantLeaderInfo_o *this,
        EventUpValInfo_o **eventUpVallInfo,
        bool *isServantEventUpVal,
        bool *isEquipEventUpVal,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32_t ServantId; // w0
  int32_t limitCount; // w24
  int32_t v13; // w25
  const MethodInfo *v14; // x2
  int32_t DispLimitCountStage; // w0
  int32_t v16; // w0
  int32_t npcFlag; // w26
  int32_t v18; // w27
  EventUpValInfo_o *v19; // x28
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x3
  struct EquipTargetInfo_o *equipTarget1; // x8
  EventUpValInfo_o *v28; // x25
  __int64 v29; // x23
  __int64 v30; // x24
  EquipTargetInfo_o *v31; // x0
  __int64 v32; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4E05EE5 & 1) == 0 )
  {
    sub_1CE6700(&EventUpValInfo_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EE5 = 1;
  }
  ServantId = ServantLeaderInfo__GetServantId(this, -1, (const MethodInfo *)isServantEventUpVal);
  limitCount = this->fields.limitCount;
  v13 = ServantId;
  DispLimitCountStage = ServantLeaderInfo__GetDispLimitCountStage(this, -1, v14);
  v16 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  npcFlag = this->fields.npcFlag;
  v18 = v16;
  v19 = (EventUpValInfo_o *)sub_1CE694C(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v19, setupInfo, v13, limitCount, v18, npcFlag, 0);
  *eventUpVallInfo = v19;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)eventUpVallInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( v13 >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal(this, eventUpVallInfo, 0, v26) )
      *isServantEventUpVal = 1;
    equipTarget1 = this->fields.equipTarget1;
    if ( equipTarget1 )
    {
      v28 = *eventUpVallInfo;
      v30 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = v30;
      *(_QWORD *)&v34.fields.fakeValue = v29;
      v31 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v34, 0);
      if ( !v28 || (v28->fields.equipSvtId = (int)v31, (v31 = this->fields.equipTarget1) == 0) )
        sub_1CE6958(v31, v32);
      if ( EquipTargetInfo__getEventUpVal_42868712(v31, eventUpVallInfo, 1, 0) )
        *isEquipEventUpVal = 1;
    }
  }
  return *isEquipEventUpVal || *isServantEventUpVal;
}


int32_t ServantLeaderInfo__getLevelMax(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitMaster_o *v10; // x20
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v12; // x0
  int32_t lvMax; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4E05ED4 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05ED4 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v4;
  *(_QWORD *)&v15.fields.fakeValue = v3;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v15, 0) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v16, 0);
  if ( !v10
    || (Entity = ServantLimitMaster__GetEntity(v10, (int32_t)Instance, this->fields.limitCount, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_17:
    sub_1CE6958(Instance, v6);
  }
  v12 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0);
  lvMax = Entity->fields.lvMax;
  if ( v12 )
    lvMax += v12->fields.addLvMax;
  return lvMax;
}


System_Int32_array *ServantLeaderInfo__getPassiveSkillIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  ServantLeaderInfo_o *v5; // x0
  GrandQuestFolderBoardItem_o *p_classPassive; // x19
  System_Int32_array *classPassive; // t1
  const MethodInfo *v8; // x3
  System_Int32_array *PassiveSkillIdList; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4E05EDA & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EDA = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v4;
  *(_QWORD *)&v17.fields.fakeValue = v3;
  v5 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v17, 0);
  classPassive = this->fields.classPassive;
  p_classPassive = (GrandQuestFolderBoardItem_o *)&this->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(v5, (int32_t)v5, classPassive, v8);
  p_classPassive->klass = (GrandQuestFolderBoardItem_c *)PassiveSkillIdList;
  sub_1CE66A4(p_classPassive, (int32_t)PassiveSkillIdList, v10, v11, v12, v13, v14, v15);
  return (System_Int32_array *)p_classPassive->klass;
}


void ServantLeaderInfo__getPassiveSkillInfo(
        ServantLeaderInfo_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  __int64 v12; // x0
  __int64 v13; // x1
  struct ServantEntity_o *saveTransformServantEntity; // x8
  __int64 v15; // x23
  __int64 v16; // x24
  int32_t v17; // w0
  const MethodInfo *v18; // x2
  System_Int32_array *PassiveSkillIdList; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  ServantLeaderInfo_o *v26; // x0
  const MethodInfo *v27; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4E05EE0 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EE0 = 1;
  }
  if ( overrideTransformVal < 0 )
  {
    afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
    if ( !afterTransformSvtInfo || !afterTransformSvtInfo->fields.transformVal )
      goto LABEL_12;
  }
  else if ( !overrideTransformVal )
  {
LABEL_12:
    PassiveSkillIdList = ServantLeaderInfo__getPassiveSkillIdList(this, (const MethodInfo *)idList);
    goto LABEL_13;
  }
  ServantLeaderInfo__Init(this, (const MethodInfo *)idList);
  saveTransformServantEntity = this->fields.saveTransformServantEntity;
  if ( !saveTransformServantEntity )
    sub_1CE6958(v12, v13);
  v16 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.currentCryptoKey;
  v15 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v16;
  *(_QWORD *)&v28.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v28, 0);
  PassiveSkillIdList = ServantLeaderInfo__GetTransformedPassiveSkillIdList(this, v17, v18);
LABEL_13:
  *idList = PassiveSkillIdList;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)idList, (int32_t)PassiveSkillIdList, v20, v21, v22, v23, v24, v25);
  ServantLeaderInfo__GetPassiveSkillInfo(v26, titleList, explanationList, *idList, v27);
}


bool ServantLeaderInfo__getQuestRestriction(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t ServantId; // w0
  int32_t limitCount; // w21
  int32_t v9; // w22
  const MethodInfo *v10; // x2
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v12; // w23
  const MethodInfo *v13; // x1
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v15; // x1

  if ( !questRestrictionInfo || NpcServantFollowerEntity__IsNpc(this->fields.npcFlag, 0) )
    return 0;
  ServantId = ServantLeaderInfo__GetServantId(this, -1, v5);
  limitCount = this->fields.limitCount;
  v9 = ServantId;
  DispLimitCountStageSealAfter = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, v10);
  v12 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  OverwriteStatus = ServantLeaderInfo__GetOverwriteStatus(this, v13);
  if ( !OverwriteStatus )
    sub_1CE6958(0, v15);
  return QuestRestrictionInfo__IsRestriction_44552640(
           questRestrictionInfo,
           v9,
           limitCount,
           v12,
           OverwriteStatus->fields._Rarity_k__BackingField,
           this->fields.lv,
           2,
           0);
}


int32_t ServantLeaderInfo__getRarity(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantLimitMaster_o *v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4E05ED6 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05ED6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (ServantLimitMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v10, 0);
  if ( !v8 || (Instance = ServantLimitMaster__GetEntity(v8, (int32_t)Instance, this->fields.limitCount, 0)) == 0 )
LABEL_9:
    sub_1CE6958(Instance, v4);
  return *((_DWORD *)Instance + 6);
}


System_Int32_array *ServantLeaderInfo__getSkillIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ServantLeaderInfo__GetSkillIdList(
           this,
           this->fields.skillId1,
           this->fields.skillId2,
           this->fields.skillId3,
           v2);
}


void ServantLeaderInfo__getSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  __int64 v8; // x0
  __int64 v9; // x1
  struct ServantEntity_o *saveTransformServantEntity; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w21
  const MethodInfo *v14; // x1
  System_Int32_array *SkillIdList; // x0
  const MethodInfo *v16; // x4
  __int64 v17; // x21
  __int64 v18; // x22
  ServantLeaderInfo_o *v19; // x0
  const MethodInfo *v20; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4E05EDD & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EDD = 1;
  }
  if ( overrideTransformVal < 0 )
  {
    afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
    if ( !afterTransformSvtInfo || !afterTransformSvtInfo->fields.transformVal )
      goto LABEL_12;
  }
  else if ( !overrideTransformVal )
  {
LABEL_12:
    v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = v18;
    *(_QWORD *)&v22.fields.fakeValue = v17;
    v19 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v22, 0);
    v13 = (int)v19;
    SkillIdList = ServantLeaderInfo__GetSkillIdList(
                    v19,
                    this->fields.skillId1,
                    this->fields.skillId2,
                    this->fields.skillId3,
                    v20);
    goto LABEL_15;
  }
  ServantLeaderInfo__Init(this, (const MethodInfo *)skillInfoList);
  saveTransformServantEntity = this->fields.saveTransformServantEntity;
  if ( !saveTransformServantEntity )
    sub_1CE6958(v8, v9);
  v12 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v21, 0);
  SkillIdList = ServantLeaderInfo__GetTransformedSkillIdList(this, v14);
LABEL_15:
  ServantLeaderInfo__GetSkillInfo(this, skillInfoList, v13, SkillIdList, v16);
}


System_Int32_array *ServantLeaderInfo__getSkillLevelList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  System_Int32_array *result; // x0
  __int64 v5; // x1
  unsigned int max_length; // w8

  if ( (byte_4E05ED9 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&int___TypeInfo);
    byte_4E05ED9 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_1CE67A8(int___TypeInfo, (unsigned int)v3->static_fields->SvtSkillListMax);
  if ( !result )
    sub_1CE6958(0, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[0] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[1] = this->fields.skillLv2, max_length <= 2) )
  {
    sub_1CE6960(result);
  }
  result->m_Items[2] = this->fields.skillLv3;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool ServantLeaderInfo__getTreasureDeviceInfo(
        ServantLeaderInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  int32_t ServantId; // w2
  const MethodInfo *v9; // x3
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w0
  const MethodInfo *v14; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4E05EE9 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EE9 = 1;
  }
  if ( (overrideTransformVal & 0x80000000) == 0 )
  {
    if ( !overrideTransformVal )
      goto LABEL_9;
LABEL_8:
    ServantId = ServantLeaderInfo__GetServantId(this, overrideTransformVal, *(const MethodInfo **)&overrideTransformVal);
    return ServantLeaderInfo__GetTransformedTreasureDeviceInfo(this, tdInfo, ServantId, v9);
  }
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo && afterTransformSvtInfo->fields.transformVal )
    goto LABEL_8;
LABEL_9:
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v15, 0);
  return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, v13, this->fields.treasureDeviceId, v14);
}


bool ServantLeaderInfo__getTreasureDeviceInfo_44705180(
        ServantLeaderInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  long double v4; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t klass; // w8

  if ( (byte_4E05EEB & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1CE6700(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4E05EEB = 1;
  }
  *tdLv = this->fields.treasureDeviceLv;
  if ( this->fields.treasureDeviceId < 1 )
  {
    klass = 0;
    LOBYTE(Entity) = 0;
  }
  else
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1CBC788(v4);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1CBC788(v4);
    MasterData_object = **(Il2CppObject ***)(v9 + 184);
    if ( !MasterData_object
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)MasterData_object,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0 )
    {
      sub_1CE6958(MasterData_object, tdLv);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               this->fields.treasureDeviceId,
               (const MethodInfo_34E925C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    if ( Entity )
    {
      klass = (int32_t)Entity[3].klass;
      LOBYTE(Entity) = 1;
    }
    else
    {
      klass = 0;
    }
  }
  *tdMaxLv = klass;
  return (char)Entity;
}


int32_t ServantLeaderInfo__getTreasureDeviceLevelIcon(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t treasureDeviceLv; // w8

  if ( (byte_4E05EEC & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1CE6700(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4E05EEC = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1CBC788(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1CBC788(v2);
  MasterData_object = **(Il2CppObject ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0 )
  {
    sub_1CE6958(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.treasureDeviceId,
             (const MethodInfo_34E925C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  if ( treasureDeviceLv >= SLODWORD(Entity[3].klass) )
    return 2;
  return treasureDeviceLv > 1;
}


bool ServantLeaderInfo__getUniqueSvtRestriction(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4E05EE7 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EE7 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v9, 0);
  return QuestRestrictionInfo__IsUniqueServant_44556376(questRestrictionInfo, v7, 0);
}


bool ServantLeaderInfo__getUniqueSvtRestriction_44704052(
        ServantLeaderInfo_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4E05EE8 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EE8 = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v13, 0);
  return QuestRestrictionInfo__IsUniqueServant_44556700(questRestrictionInfo, v11, partyItem, num, -1, 0);
}


int32_t ServantLeaderInfo__get_AtkBoostValue(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t adjustAtk; // w20
  int32_t StatusUpAdjustAtk; // w21
  UserServantGrandInfo_o *GrandInfo; // x0
  __int64 v7; // x1
  struct GrandGraphDetailEntity_o *svtGrandDetailEntity; // x8

  if ( (byte_4E05ECE & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    byte_4E05ECE = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  adjustAtk = this->fields.adjustAtk;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  StatusUpAdjustAtk = v3->static_fields->StatusUpAdjustAtk;
  GrandInfo = ServantLeaderInfo__get_GrandInfo(this, method);
  if ( !GrandInfo )
    sub_1CE6958(0, v7);
  svtGrandDetailEntity = GrandInfo->fields.svtGrandDetailEntity;
  if ( svtGrandDetailEntity )
    LODWORD(svtGrandDetailEntity) = svtGrandDetailEntity->fields.adjustAtk;
  return (_DWORD)svtGrandDetailEntity + StatusUpAdjustAtk * adjustAtk;
}


ServantEntity_o *ServantLeaderInfo__get_BaseServantEntity(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  ServantLeaderInfo__Init(this, method);
  return this->fields.baseServantEntity;
}


int32_t ServantLeaderInfo__get_CommandCardLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return LimitCountUtility__GetLimitCountStageCheckZero(
           this->fields.limitCount,
           this->fields.commandCardLimitCount,
           0,
           0);
}


int32_t ServantLeaderInfo__get_DispLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.dispLimitCount, 0, 0);
}


UserServantGrandInfo_o *ServantLeaderInfo__get_GrandInfo(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct UserServantGrandInfo_o *grandInfo; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E05ECC & 1) == 0 )
  {
    sub_1CE6700(&UserServantGrandInfo_TypeInfo);
    byte_4E05ECC = 1;
  }
  grandInfo = this->fields.grandInfo;
  if ( !grandInfo )
  {
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    grandInfo = UserServantGrandInfo__Make_44691464(this, method);
    this->fields.grandInfo = grandInfo;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.grandInfo, (int32_t)grandInfo, v4, v5, v6, v7, v8, v9);
  }
  return grandInfo;
}


int32_t ServantLeaderInfo__get_HpBoostValue(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t adjustHp; // w20
  int32_t StatusUpAdjustHp; // w21
  UserServantGrandInfo_o *GrandInfo; // x0
  __int64 v7; // x1
  struct GrandGraphDetailEntity_o *svtGrandDetailEntity; // x8

  if ( (byte_4E05ECD & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    byte_4E05ECD = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  adjustHp = this->fields.adjustHp;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  StatusUpAdjustHp = v3->static_fields->StatusUpAdjustHp;
  GrandInfo = ServantLeaderInfo__get_GrandInfo(this, method);
  if ( !GrandInfo )
    sub_1CE6958(0, v7);
  svtGrandDetailEntity = GrandInfo->fields.svtGrandDetailEntity;
  if ( svtGrandDetailEntity )
    LODWORD(svtGrandDetailEntity) = svtGrandDetailEntity->fields.adjustHp;
  return (_DWORD)svtGrandDetailEntity + StatusUpAdjustHp * adjustHp;
}


int32_t ServantLeaderInfo__get_IconLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.iconLimitCount, 1, 0);
}


int32_t ServantLeaderInfo__get_ImageLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.imageLimitCount, 1, 0);
}


bool ServantLeaderInfo__get_IsEquip(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4E05EDC & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05EDC = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v5 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v7, 0) > 0;
}


bool ServantLeaderInfo__get_IsGrandSvt(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return this->fields.grandSvt != 0;
}


bool ServantLeaderInfo__get_IsSaveTransformServant(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  ServantLeaderInfo__Init(this, method);
  return this->fields.saveTransformServantEntity != 0;
}


bool ServantLeaderInfo__get_IsUserServant(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsUserServant_k__BackingField;
}


int32_t ServantLeaderInfo__get_PortraitLimitCountStage(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.portraitLimitCount, 0, 0);
}


ServantEntity_o *ServantLeaderInfo__get_SaveTransformServantEntity(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  ServantLeaderInfo__Init(this, method);
  return this->fields.saveTransformServantEntity;
}


int32_t ServantLeaderInfo__get_TransformVal(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo )
    return afterTransformSvtInfo->fields.transformVal;
  else
    return 0;
}


void ServantLeaderInfo__set_BaseServantEntity(
        ServantLeaderInfo_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.baseServantEntity = value;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseServantEntity,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantLeaderInfo__set_IsUserServant(ServantLeaderInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsUserServant_k__BackingField = value;
}


void ServantLeaderInfo__set_SaveTransformServantEntity(
        ServantLeaderInfo_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.saveTransformServantEntity = value;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.saveTransformServantEntity,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantLeaderInfo___c__DisplayClass153_0___ctor(
        ServantLeaderInfo___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantLeaderInfo___c__DisplayClass153_0___SetEquipImagePartsGroupIdxs_b__0(
        ServantLeaderInfo___c__DisplayClass153_0_o *this,
        UserImagePartsGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1CE6958(this, 0);
  return entity->fields.id == this->fields.scriptImageValue;
}