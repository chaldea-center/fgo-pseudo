void ServantLeaderInfo___ctor(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  this->fields.supportDeckId = 1;
  this->fields._IsUserServant_k__BackingField = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantLeaderInfo___ctor_50583572(
        ServantLeaderInfo_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v9; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v10; // x0
  int v11; // w8
  const MethodInfo_47A29F8 *v12; // x0
  void *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x21
  const MethodInfo *v16; // x2
  int32_t v17; // w8
  int32_t v18; // w9
  int32_t MaxLimitCountStage; // w0
  const MethodInfo *v20; // x2
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v22; // w0
  long double v23; // q0
  _QWORD *v24; // x8
  int32_t v25; // w22
  __int64 v26; // x8
  __int64 v27; // x0
  Il2CppObject *MasterData_object; // x23
  unsigned int v29; // w8
  __int64 v30; // x9
  __int64 v31; // x9
  __int64 v32; // x8
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  long double v39; // q0
  __int64 v40; // x0
  __int64 v41; // x0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  const MethodInfo *v49; // x2

  if ( (byte_5971D87 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971D87 = 1;
  }
  this->fields.supportDeckId = 1;
  this->fields._IsUserServant_k__BackingField = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.userId = 1;
  this->fields.classId = 0;
  v11 = *(&v10->_2.cctor_finished + 1);
  this->fields.userSvtId = 1;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(v10, v9);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  v12 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.exceedCount = 0;
  this->fields.limitCount = limitCnt;
  this->fields.lv = level;
  this->fields.exp = 0;
  this->fields.npcFlag = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v12);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, this->fields.limitCount, 0);
  if ( !Instance )
    goto LABEL_39;
  v17 = *((_DWORD *)Instance + 9);
  v18 = *((_DWORD *)Instance + 11);
  this->fields.adjustHp = 0;
  this->fields.hp = v17;
  this->fields.atk = v18;
  this->fields.adjustAtk = 0;
  this->fields._IsUserServant_k__BackingField = 0;
  MaxLimitCountStage = ServantLeaderInfo__GetMaxLimitCountStage(this, 0, v16);
  this->fields.portraitLimitCount = MaxLimitCountStage;
  *(int32x4_t *)&this->fields.imageLimitCount = vdupq_n_s32(MaxLimitCountStage);
  DispLimitCountStageSealAfter = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, v20);
  v22 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  *(_QWORD *)&v23 = 0x100000001LL;
  v24 = Method_SingletonMonoBehaviour_DataManager__getInstance__;
  this->fields.skillLv3 = 1;
  v25 = v22;
  v26 = v24[4];
  *(_QWORD *)&this->fields.skillLv1 = 0x100000001LL;
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_224B908(v23);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
    v27 = sub_224B908(v23);
  Instance = **(void ***)(v27 + 184);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(this->fields.svtId, 0);
  if ( !MasterData_object )
    goto LABEL_39;
  Instance = ServantSkillMaster__getUseEntityList(
               (ServantSkillMaster_o *)MasterData_object,
               (int32_t)Instance,
               this->fields.userId,
               this->fields.lv,
               this->fields.limitCount,
               v25,
               -1,
               -1,
               0);
  if ( !Instance )
    goto LABEL_39;
  v29 = *((_DWORD *)Instance + 6);
  if ( !v29 )
    goto LABEL_40;
  v30 = *((_QWORD *)Instance + 4);
  if ( v30 )
    LODWORD(v30) = *(_DWORD *)(v30 + 28);
  this->fields.skillId1 = v30;
  if ( v29 == 1 )
    goto LABEL_40;
  v31 = *((_QWORD *)Instance + 5);
  if ( v31 )
    LODWORD(v31) = *(_DWORD *)(v31 + 28);
  this->fields.skillId2 = v31;
  if ( v29 <= 2 )
LABEL_40:
    sub_2213CE4(Instance);
  v32 = *((_QWORD *)Instance + 6);
  if ( v32 )
    LODWORD(v32) = *(_DWORD *)(v32 + 28);
  this->fields.skillId3 = v32;
  *(_QWORD *)&this->fields.treasureDeviceId = 0x100000000LL;
  if ( !Entity )
    goto LABEL_39;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0) )
    goto LABEL_36;
  v40 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v40 + 309) & 1) == 0 )
    v40 = sub_224B908(v39);
  v41 = *(_QWORD *)(*(_QWORD *)(v40 + 192) + 16LL);
  if ( (*(_WORD *)(v41 + 309) & 1) == 0 )
    v41 = sub_224B908(v39);
  Instance = **(void ***)(v41 + 184);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0 )
  {
LABEL_39:
    sub_2213CDC(Instance, v14);
  }
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                (ServantTreasureDvcMaster_o *)Instance,
                svtId,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v25,
                0,
                -1,
                0);
  if ( UseEntity )
    this->fields.treasureDeviceId = UseEntity->fields.treasureDeviceId;
LABEL_36:
  this->fields.equipTarget1 = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipTarget1, 0, v33, v34, v35, v36, v37, v38);
  this->fields.imagePartsGroupInfo = 0;
  this->fields.updatedAt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.imagePartsGroupInfo, 0, v43, v44, v45, v46, v47, v48);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0) )
    ServantLeaderInfo__SetTransformData(this, 0, v49);
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
  __int64 v10; // x1
  int32_t v11; // w22
  void *Master_object; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x23
  ServantLimitMaster_o *v15; // x24
  Il2CppClass *klass; // x25
  void *monitor; // x26
  ServantLimitEntity_o *v18; // x24
  _DWORD *v19; // x25
  int32_t v20; // w2
  int32_t adjustHp; // w3
  int32_t hpMax; // w1
  int32_t hpBase; // w8
  int32_t v24; // w0
  const MethodInfo_3856318 *v25; // x8
  Il2CppObject *v26; // x24
  unsigned int v27; // w8
  __int64 v28; // x9
  __int64 v29; // x9
  __int64 v30; // x8
  DataManager_c *v31; // x0
  int v32; // w9
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  Il2CppClass *v35; // x24
  void *v36; // x25
  ServantTreasureDvcMaster_o *v37; // x23
  ServantTreasureDvcEntity_o *UseEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_5971D89 & 1) == 0 )
  {
    sub_2213A60(&AfterTransformSvtInfo_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D89 = 1;
  }
  v9 = (AfterTransformSvtInfo_o *)sub_2213CCC(AfterTransformSvtInfo_TypeInfo);
  AfterTransformSvtInfo___ctor(v9, 0);
  v11 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(limitCountStage, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             svtId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !Entity )
    goto LABEL_33;
  v15 = (ServantLimitMaster_o *)Master_object;
  klass = Entity[1].klass;
  monitor = Entity[1].monitor;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v40.fields.currentCryptoKey = klass;
  *(_QWORD *)&v40.fields.fakeValue = monitor;
  Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v40, 0);
  if ( !v15 )
    goto LABEL_33;
  v18 = ServantLimitMaster__GetEntity(v15, (int32_t)Master_object, this->fields.limitCount, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExpMaster___);
  if ( !Master_object )
    goto LABEL_33;
  Master_object = ServantExpMaster__GetEntity(
                    (ServantExpMaster_o *)Master_object,
                    HIDWORD(Entity[8].klass),
                    this->fields.lv,
                    0);
  if ( !v18 )
    goto LABEL_33;
  v19 = Master_object;
  if ( !Master_object )
    goto LABEL_33;
  Master_object = (void *)CombineUtility__CalculateAtk(
                            v18->fields.atkBase,
                            v18->fields.atkMax,
                            *((_DWORD *)Master_object + 7),
                            this->fields.adjustAtk,
                            0);
  if ( !v9 )
    goto LABEL_33;
  v20 = v19[7];
  adjustHp = this->fields.adjustHp;
  hpBase = v18->fields.hpBase;
  hpMax = v18->fields.hpMax;
  v9->fields.atk = (int)Master_object;
  v24 = CombineUtility__CalculateHp(hpBase, hpMax, v20, adjustHp, 0);
  v25 = (const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___;
  v9->fields.hp = v24;
  v26 = DataManager__GetMaster_object_(v25);
  Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[1],
                            0);
  if ( !v26 )
    goto LABEL_33;
  Master_object = ServantSkillMaster__getUseEntityList(
                    (ServantSkillMaster_o *)v26,
                    (int32_t)Master_object,
                    this->fields.userId,
                    this->fields.lv,
                    this->fields.limitCount,
                    v11,
                    -1,
                    -1,
                    0);
  if ( !Master_object )
    goto LABEL_33;
  v27 = *((_DWORD *)Master_object + 6);
  if ( !v27 )
    goto LABEL_34;
  v28 = *((_QWORD *)Master_object + 4);
  if ( v28 )
    LODWORD(v28) = *(_DWORD *)(v28 + 28);
  v9->fields.skillId1 = v28;
  if ( v27 == 1 )
    goto LABEL_34;
  v29 = *((_QWORD *)Master_object + 5);
  if ( v29 )
    LODWORD(v29) = *(_DWORD *)(v29 + 28);
  v9->fields.skillId2 = v29;
  if ( v27 <= 2 )
LABEL_34:
    sub_2213CE4(Master_object);
  v30 = *((_QWORD *)Master_object + 6);
  if ( v30 )
    LODWORD(v30) = *(_DWORD *)(v30 + 28);
  v31 = DataManager_TypeInfo;
  v32 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v9->fields.skillId3 = v30;
  if ( !v32 )
    j_il2cpp_runtime_class_init_0(v31, v13);
  v33 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v35 = Entity[1].klass;
  v36 = Entity[1].monitor;
  v37 = (ServantTreasureDvcMaster_o *)v33;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
  *(_QWORD *)&v41.fields.currentCryptoKey = v35;
  *(_QWORD *)&v41.fields.fakeValue = v36;
  Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v41, 0);
  if ( !v37 )
LABEL_33:
    sub_2213CDC(Master_object, v13);
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v37,
                (int32_t)Master_object,
                this->fields.userId,
                this->fields.lv,
                this->fields.limitCount,
                v11,
                friendshipRank,
                -1,
                0);
  if ( UseEntity )
    v9->fields.treasureDeviceId = UseEntity->fields.treasureDeviceId;
  return v9;
}


void ServantLeaderInfo__Finalize(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.equipTarget1 = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipTarget1, 0, v2, v3, v4, v5, v6, v7);
  System_Object__Finalize((Il2CppObject *)this, 0);
}


bool ServantLeaderInfo__GetAdjustMax(
        ServantLeaderInfo_o *this,
        int32_t *maxAjustHp,
        int32_t *maxAjustAtk,
        int32_t *secondMaxAdjustHp,
        int32_t *secondMaxAdjustAtk,
        int32_t *addParamMaxAdjust1,
        int32_t *addParamMaxAdjust2,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x1
  __int64 v19; // x27
  __int64 v20; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x26
  Il2CppObject *v22; // x26
  const MethodInfo *v23; // x1
  int32_t *Entity; // x0
  int32_t v25; // w8
  int32_t v26; // w8
  int32_t v27; // w9
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_5971D8D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantRarityMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971D8D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v29.fields.currentCryptoKey = v19;
  *(_QWORD *)&v29.fields.fakeValue = v20;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v29, 0);
  if ( !v21 )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v21,
               (int32_t)Instance,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_19;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0) )
  {
LABEL_17:
    v26 = 0;
    result = 0;
    *maxAjustHp = 0;
    *maxAjustAtk = 0;
    *secondMaxAdjustHp = 0;
    *secondMaxAdjustAtk = 0;
    *addParamMaxAdjust1 = 0;
    goto LABEL_18;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v22 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantRarityMaster___),
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(this, v23),
        !v22) )
  {
LABEL_19:
    sub_2213CDC(Instance, v16);
  }
  Entity = (int32_t *)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                        (int32_t)Instance,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_17;
  *maxAjustHp = Entity[5];
  *maxAjustAtk = Entity[6];
  *secondMaxAdjustHp = Entity[7];
  *secondMaxAdjustAtk = Entity[8];
  v25 = Entity[9];
  if ( !v25 )
    v25 = Entity[7];
  *addParamMaxAdjust1 = v25;
  v26 = Entity[10];
  v27 = Entity[8];
  result = 1;
  if ( !v26 )
    v26 = v27;
LABEL_18:
  *addParamMaxAdjust2 = v26;
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
  __int64 v11; // x1
  __int64 v12; // x26
  __int64 v13; // x27
  ServantAppendPassiveSkillMaster_o *v14; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *EntityListFromSvtId; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_String_o *MasterName_k__BackingField; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x25
  System_Int32_array *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_array *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_array *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Boolean_array *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Int32_array *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // x27
  unsigned int v62; // w19
  struct AppendPassiveSkillInfo_array *v63; // x10
  int max_length; // w8
  AppendPassiveSkillInfo_o **m_Items; // x10
  AppendPassiveSkillInfo_o *v66; // x29
  __int64 v67; // x11
  __int64 v68; // x20
  __int64 v69; // x8
  System_Int32_array *v70; // x9
  SkillEntity_o *v71; // x28
  System_Int32_array *v72; // x8
  System_String_array *v73; // x22
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *v80; // x1
  Il2CppClass **v81; // x0
  System_String_array *v82; // x22
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *v89; // x1
  Il2CppClass **v90; // x0
  System_Boolean_array *v91; // x8
  char v92; // w9
  System_String_array *v93; // x22
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *v100; // x1
  Il2CppClass **v101; // x0
  __int64 v102; // x1
  System_String_array *v103; // x28
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *v110; // x1
  Il2CppClass **v111; // x0
  System_String_array *v112; // x8
  System_String_array *v113; // x8
  MissionNaviTransitionBoardItem_o *v114; // x28
  System_String_o *sortValue0; // t1
  System_String_o *v116; // x0
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  System_String_array *v123; // x8
  Il2CppClass **v124; // x28
  MissionNaviTransitionBoardItem_o *v125; // x28
  System_String_o *v126; // x29
  System_String_o *v127; // t1
  System_String_o *v128; // x0
  System_String_o *v129; // x0
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x8
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  System_String_o *v143; // x2
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  System_String_o *v149; // x2
  System_String_o *v150; // x3
  int32_t v151; // w4
  int32_t v152; // w5
  bool v153; // w6
  bool v154; // w7
  System_String_o *v155; // x2
  System_String_o *v156; // x3
  int32_t v157; // w4
  int32_t v158; // w5
  bool v159; // w6
  bool v160; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16

  if ( (byte_5971DAC & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_3878/*"COND_TYPE_TITLE"*/);
    sub_2213A60(&StringLiteral_3866/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971DAC = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, idList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (ServantAppendPassiveSkillMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v164.fields.currentCryptoKey = v12;
  *(_QWORD *)&v164.fields.fakeValue = v13;
  EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                        v164,
                                                                        0);
  if ( !v14 )
    goto LABEL_66;
  EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantAppendPassiveSkillMaster__GetEntityListFromSvtId(
                                                                        v14,
                                                                        (int32_t)EntityListFromSvtId,
                                                                        0);
  if ( !EntityListFromSvtId )
    goto LABEL_66;
  MasterName_k__BackingField = EntityListFromSvtId->fields._MasterName_k__BackingField;
  v24 = EntityListFromSvtId;
  if ( !MasterName_k__BackingField )
  {
    appendPassiveSkill = this->fields.appendPassiveSkill;
    if ( !appendPassiveSkill || !appendPassiveSkill->max_length )
    {
      *idList = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, 0, v17, v18, v19, v20, v21, v22);
      *titleList = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, 0, v137, v138, v139, v140, v141, v142);
      *explanationList = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, 0, v143, v144, v145, v146, v147, v148);
      *releaseStateList = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)releaseStateList, 0, v149, v150, v151, v152, v153, v154);
      *lvList = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)lvList, 0, v155, v156, v157, v158, v159, v160);
      return;
    }
  }
  v25 = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
  *idList = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (System_String_array *)sub_2213B20(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
  *titleList = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_String_array *)sub_2213B20(string___TypeInfo, (unsigned int)MasterName_k__BackingField);
  *explanationList = v39;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  v46 = (System_Boolean_array *)sub_2213B20(bool___TypeInfo, (unsigned int)MasterName_k__BackingField);
  *releaseStateList = v46;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)releaseStateList, (int32_t)v46, v47, v48, v49, v50, v51, v52);
  v53 = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)MasterName_k__BackingField);
  *lvList = v53;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)lvList, (int32_t)v53, v54, v55, v56, v57, v58, v59);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v60);
  EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v61 = EntityListFromSvtId;
    v62 = 0;
    while ( 1 )
    {
      v63 = this->fields.appendPassiveSkill;
      if ( v63 )
      {
        max_length = v63->max_length;
        if ( max_length >= 1 )
          break;
      }
LABEL_22:
      v66 = 0;
LABEL_23:
      if ( v62 >= LODWORD(v24->fields._MasterName_k__BackingField) )
        goto LABEL_67;
      v68 = v62;
      v69 = *((_QWORD *)&v24->fields.revision + v62);
      if ( !v69 )
        goto LABEL_66;
      v70 = *idList;
      if ( !*idList )
        goto LABEL_66;
      if ( v62 >= LODWORD(v70->max_length) )
        goto LABEL_67;
      v16 = *(unsigned int *)(v69 + 28);
      v70->m_Items[v62] = v16;
      if ( !v61 )
        goto LABEL_66;
      EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                            v61,
                                                                            v16,
                                                                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      v71 = (SkillEntity_o *)EntityListFromSvtId;
      v72 = *lvList;
      if ( v66 )
      {
        if ( !v72 )
          goto LABEL_66;
        if ( v62 >= LODWORD(v72->max_length) )
          goto LABEL_67;
        v72->m_Items[v62] = v66->fields.skillLv;
        if ( !EntityListFromSvtId )
          goto LABEL_66;
        v73 = *titleList;
        EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                              (SkillEntity_o *)EntityListFromSvtId,
                                                                              v66->fields.skillLv,
                                                                              0);
        if ( !v73 )
          goto LABEL_66;
        if ( v62 >= LODWORD(v73->max_length) )
          goto LABEL_67;
        v80 = EntityListFromSvtId;
        v81 = &v73->obj.klass + v62;
        v81[4] = (Il2CppClass *)v80;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v81 + 4), (int32_t)v80, v74, v75, v76, v77, v78, v79);
        v82 = *explanationList;
        EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                              v71,
                                                                              v66->fields.skillLv,
                                                                              0);
        if ( !v82 )
          goto LABEL_66;
        if ( v62 >= LODWORD(v82->max_length) )
          goto LABEL_67;
        v89 = EntityListFromSvtId;
        v90 = &v82->obj.klass + v62;
        v90[4] = (Il2CppClass *)v89;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v90 + 4), (int32_t)v89, v83, v84, v85, v86, v87, v88);
        v91 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_66;
        if ( v62 >= LODWORD(v91->max_length) )
          goto LABEL_67;
        v92 = 1;
      }
      else
      {
        if ( !v72 )
          goto LABEL_66;
        if ( v62 >= LODWORD(v72->max_length) )
          goto LABEL_67;
        v72->m_Items[v62] = -1;
        if ( !EntityListFromSvtId )
          goto LABEL_66;
        v93 = *titleList;
        EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                              (SkillEntity_o *)EntityListFromSvtId,
                                                                              -1,
                                                                              0);
        if ( !v93 )
          goto LABEL_66;
        if ( v62 >= LODWORD(v93->max_length) )
          goto LABEL_67;
        v100 = EntityListFromSvtId;
        v101 = &v93->obj.klass + v62;
        v101[4] = (Il2CppClass *)v100;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v101 + 4), (int32_t)v100, v94, v95, v96, v97, v98, v99);
        v103 = *explanationList;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v102);
        EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_3878/*"COND_TYPE_TITLE"*/,
                                                                              0);
        if ( !v103 )
          goto LABEL_66;
        if ( v62 >= LODWORD(v103->max_length) )
          goto LABEL_67;
        v110 = EntityListFromSvtId;
        v111 = &v103->obj.klass + v62;
        v111[4] = (Il2CppClass *)v110;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v111 + 4), (int32_t)v110, v104, v105, v106, v107, v108, v109);
        v112 = *explanationList;
        if ( !*explanationList )
          goto LABEL_66;
        if ( v62 >= LODWORD(v112->max_length) )
          goto LABEL_67;
        EntityListFromSvtId = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                              v112->m_Items[v62],
                                                                              (System_String_o *)StringLiteral_1/*""*/,
                                                                              0);
        if ( ((unsigned __int8)EntityListFromSvtId & 1) != 0 )
        {
          v113 = *explanationList;
          if ( !*explanationList )
            goto LABEL_66;
          if ( v62 >= LODWORD(v113->max_length) )
            goto LABEL_67;
          v114 = (MissionNaviTransitionBoardItem_o *)(&v113->obj.klass + v62);
          sortValue0 = (System_String_o *)v114->fields.sortValue0;
          v114 = (MissionNaviTransitionBoardItem_o *)((char *)v114 + 32);
          v116 = System_String__Concat_75651716(sortValue0, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
          v114->klass = (MissionNaviTransitionBoardItem_c *)v116;
          sub_2213A04(v114, (int32_t)v116, v117, v118, v119, v120, v121, v122);
        }
        v123 = *explanationList;
        if ( !*explanationList )
          goto LABEL_66;
        if ( v62 >= LODWORD(v123->max_length) )
LABEL_67:
          sub_2213CE4(EntityListFromSvtId);
        v124 = &v123->obj.klass + v62;
        v127 = (System_String_o *)v124[4];
        v125 = (MissionNaviTransitionBoardItem_o *)(v124 + 4);
        v126 = v127;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
        v128 = LocalizationManager__Get((System_String_o *)StringLiteral_3866/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
        v129 = System_String__Concat_75651716(v126, v128, 0);
        v125->klass = (MissionNaviTransitionBoardItem_c *)v129;
        sub_2213A04(v125, (int32_t)v129, v130, v131, v132, v133, v134, v135);
        v91 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_66;
        if ( v62 >= LODWORD(v91->max_length) )
          goto LABEL_67;
        v92 = 0;
      }
      ++v62;
      v91->m_Items[v68] = v92;
      if ( v62 == (_DWORD)MasterName_k__BackingField )
        return;
    }
    m_Items = v63->m_Items;
    while ( 1 )
    {
      v66 = *m_Items;
      if ( !*m_Items )
        break;
      if ( v62 >= LODWORD(v24->fields._MasterName_k__BackingField) )
        goto LABEL_67;
      v67 = *((_QWORD *)&v24->fields.revision + v62);
      if ( !v67 )
        break;
      if ( v66->fields.skillId == *(_DWORD *)(v67 + 28) )
        goto LABEL_23;
      --max_length;
      ++m_Items;
      if ( !max_length )
        goto LABEL_22;
    }
LABEL_66:
    sub_2213CDC(EntityListFromSvtId, v16);
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
  bool v7; // w7
  struct AppendPassiveSkillInfo_array *appendPassiveSkill; // x8
  il2cpp_array_size_t max_length; // x25
  System_Int32_array *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_array *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_array *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Boolean_array *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Int32_array *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v52; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v53; // x26
  __int64 v54; // x28
  __int64 i; // x29
  struct AppendPassiveSkillInfo_array *v56; // x8
  __int64 v57; // x8
  System_Int32_array *v58; // x9
  struct AppendPassiveSkillInfo_array *v59; // x8
  __int64 v60; // x8
  int v61; // w10
  SkillEntity_o *v62; // x27
  System_Int32_array *v63; // x9
  System_String_array *v64; // x19
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct AppendPassiveSkillInfo_array *v71; // x8
  __int64 v72; // x8
  System_String_array *v73; // x19
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Boolean_array *v80; // x8
  char v81; // w9
  System_String_array *v82; // x19
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  __int64 v89; // x1
  System_String_array *v90; // x19
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_String_array *v97; // x8
  System_String_array *v98; // x19
  System_String_o *v99; // x0
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  System_String_array *v106; // x19
  System_String_o *v107; // x27
  System_String_o *v108; // x0
  System_String_o *v109; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  char *v116; // x8
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  System_String_o *v135; // x2
  System_String_o *v136; // x3
  int32_t v137; // w4
  int32_t v138; // w5
  bool v139; // w6
  bool v140; // w7

  if ( (byte_5971DAD & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_3878/*"COND_TYPE_TITLE"*/);
    sub_2213A60(&StringLiteral_3866/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971DAD = 1;
  }
  appendPassiveSkill = this->fields.appendPassiveSkill;
  if ( appendPassiveSkill && (max_length = appendPassiveSkill->max_length) != 0 )
  {
    v15 = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)max_length);
    *idList = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
    v22 = (System_String_array *)sub_2213B20(string___TypeInfo, (unsigned int)max_length);
    *titleList = v22;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, (int32_t)v22, v23, v24, v25, v26, v27, v28);
    v29 = (System_String_array *)sub_2213B20(string___TypeInfo, (unsigned int)max_length);
    *explanationList = v29;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, (int32_t)v29, v30, v31, v32, v33, v34, v35);
    v36 = (System_Boolean_array *)sub_2213B20(bool___TypeInfo, (unsigned int)max_length);
    *releaseStateList = v36;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)releaseStateList, (int32_t)v36, v37, v38, v39, v40, v41, v42);
    v43 = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)max_length);
    *lvList = v43;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lvList, (int32_t)v43, v44, v45, v46, v47, v48, v49);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v50);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( (int)max_length >= 1 )
    {
      v53 = Master_object;
      v54 = 0;
      for ( i = 32; ; i += 8 )
      {
        v56 = this->fields.appendPassiveSkill;
        if ( !v56 )
          break;
        if ( (unsigned int)v54 >= LODWORD(v56->max_length) )
          goto LABEL_58;
        v57 = *(__int64 *)((char *)&v56->obj.klass + i);
        if ( !v57 )
          break;
        v58 = *idList;
        if ( !*idList )
          break;
        if ( (unsigned int)v54 >= LODWORD(v58->max_length) )
          goto LABEL_58;
        v52 = *(unsigned int *)(v57 + 16);
        v58->m_Items[v54] = v52;
        if ( !v53 )
          break;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v53,
                                                                        v52,
                                                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v59 = this->fields.appendPassiveSkill;
        if ( !v59 )
          break;
        if ( (unsigned int)v54 >= LODWORD(v59->max_length) )
          goto LABEL_58;
        v60 = *(__int64 *)((char *)&v59->obj.klass + i);
        if ( !v60 )
          break;
        v61 = *(_DWORD *)(v60 + 20);
        v62 = (SkillEntity_o *)Master_object;
        v63 = *lvList;
        if ( v61 < 1 )
        {
          if ( !v63 )
            break;
          if ( (unsigned int)v54 >= LODWORD(v63->max_length) )
            goto LABEL_58;
          v63->m_Items[v54] = -1;
          if ( !Master_object )
            break;
          v82 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          -1,
                                                                          0);
          if ( !v82 )
            break;
          if ( (unsigned int)v54 >= LODWORD(v82->max_length) )
            goto LABEL_58;
          *(Il2CppClass **)((char *)&v82->obj.klass + i) = (Il2CppClass *)Master_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v82 + i),
            (int32_t)Master_object,
            v83,
            v84,
            v85,
            v86,
            v87,
            v88);
          v90 = *explanationList;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v89);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_3878/*"COND_TYPE_TITLE"*/,
                                                                          0);
          if ( !v90 )
            break;
          if ( (unsigned int)v54 >= LODWORD(v90->max_length) )
            goto LABEL_58;
          *(Il2CppClass **)((char *)&v90->obj.klass + i) = (Il2CppClass *)Master_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v90 + i),
            (int32_t)Master_object,
            v91,
            v92,
            v93,
            v94,
            v95,
            v96);
          v97 = *explanationList;
          if ( !*explanationList )
            break;
          if ( (unsigned int)v54 >= LODWORD(v97->max_length) )
            goto LABEL_58;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                          *(System_String_o **)((char *)&v97->obj.klass
                                                                                              + i),
                                                                          (System_String_o *)StringLiteral_1/*""*/,
                                                                          0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v98 = *explanationList;
            if ( !*explanationList )
              break;
            if ( (unsigned int)v54 >= LODWORD(v98->max_length) )
              goto LABEL_58;
            v99 = System_String__Concat_75651716(
                    *(System_String_o **)((char *)&v98->obj.klass + i),
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    0);
            *(Il2CppClass **)((char *)&v98->obj.klass + i) = (Il2CppClass *)v99;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)((char *)v98 + i),
              (int32_t)v99,
              v100,
              v101,
              v102,
              v103,
              v104,
              v105);
          }
          v106 = *explanationList;
          if ( !*explanationList )
            break;
          if ( (unsigned int)v54 >= LODWORD(v106->max_length) )
LABEL_58:
            sub_2213CE4(Master_object);
          v107 = *(System_String_o **)((char *)&v106->obj.klass + i);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
          v108 = LocalizationManager__Get((System_String_o *)StringLiteral_3866/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
          v109 = System_String__Concat_75651716(v107, v108, 0);
          *(Il2CppClass **)((char *)&v106->obj.klass + i) = (Il2CppClass *)v109;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v106 + i),
            (int32_t)v109,
            v110,
            v111,
            v112,
            v113,
            v114,
            v115);
          v80 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( (unsigned int)v54 >= LODWORD(v80->max_length) )
            goto LABEL_58;
          v81 = 0;
        }
        else
        {
          if ( !v63 )
            break;
          if ( (unsigned int)v54 >= LODWORD(v63->max_length) )
            goto LABEL_58;
          v63->m_Items[v54] = v61;
          if ( !Master_object )
            break;
          v64 = *titleList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                          (SkillEntity_o *)Master_object,
                                                                          *(_DWORD *)(v60 + 20),
                                                                          0);
          if ( !v64 )
            break;
          if ( (unsigned int)v54 >= LODWORD(v64->max_length) )
            goto LABEL_58;
          *(Il2CppClass **)((char *)&v64->obj.klass + i) = (Il2CppClass *)Master_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v64 + i),
            (int32_t)Master_object,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70);
          v71 = this->fields.appendPassiveSkill;
          if ( !v71 )
            break;
          if ( (unsigned int)v54 >= LODWORD(v71->max_length) )
            goto LABEL_58;
          v72 = *(__int64 *)((char *)&v71->obj.klass + i);
          if ( !v72 )
            break;
          v73 = *explanationList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                          v62,
                                                                          *(_DWORD *)(v72 + 20),
                                                                          0);
          if ( !v73 )
            break;
          if ( (unsigned int)v54 >= LODWORD(v73->max_length) )
            goto LABEL_58;
          *(Il2CppClass **)((char *)&v73->obj.klass + i) = (Il2CppClass *)Master_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)v73 + i),
            (int32_t)Master_object,
            v74,
            v75,
            v76,
            v77,
            v78,
            v79);
          v80 = *releaseStateList;
          if ( !*releaseStateList )
            break;
          if ( (unsigned int)v54 >= LODWORD(v80->max_length) )
            goto LABEL_58;
          v81 = 1;
        }
        v116 = (char *)v80 + v54++;
        v116[32] = v81;
        if ( (_DWORD)max_length == (_DWORD)v54 )
          return;
      }
      sub_2213CDC(Master_object, v52);
    }
  }
  else
  {
    *idList = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)idList,
      0,
      (System_String_o *)titleList,
      (System_String_o *)explanationList,
      (int32_t)releaseStateList,
      (int32_t)lvList,
      (bool)method,
      v7);
    *titleList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, 0, v117, v118, v119, v120, v121, v122);
    *explanationList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, 0, v123, v124, v125, v126, v127, v128);
    *releaseStateList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)releaseStateList, 0, v129, v130, v131, v132, v133, v134);
    *lvList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lvList, 0, v135, v136, v137, v138, v139, v140);
  }
}


void ServantLeaderInfo__GetAppendPassiveSkillInfo_50601788(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        bool isNpc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x20
  SkillInfo_array *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x23
  __int64 v23; // x22
  __int64 v24; // x24
  __int64 v25; // x20
  const MethodInfo *v26; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Int32_array *v35; // x8
  unsigned __int64 v36; // x25
  int v37; // w9
  System_Int32_array *v38; // x8
  int v39; // w9
  System_String_array *v40; // x8
  __int64 v41; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  unsigned int *v49; // x26
  __int64 v50; // x1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  __int64 v57; // x0
  System_Int32_array *v58; // [xsp+0h] [xbp-70h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+8h] [xbp-68h] BYREF
  System_String_array *explanationList; // [xsp+10h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_5971DAE & 1) == 0 )
  {
    sub_2213A60(&SkillInfo___TypeInfo);
    sub_2213A60(&SkillInfo_TypeInfo);
    byte_5971DAE = 1;
  }
  idList = 0;
  explanationList = 0;
  titleList = 0;
  v58 = 0;
  releaseStateList = 0;
  if ( isNpc )
    ServantLeaderInfo__GetAppendPassiveSkillInfoForNpc(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v58,
      v4);
  else
    ServantLeaderInfo__GetAppendPassiveSkillInfo(
      this,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &v58,
      v4);
  if ( idList && (v14 = *(__int64 *)((char *)off_18 + (_QWORD)idList)) != 0 )
  {
    v15 = (SkillInfo_array *)sub_2213B20(SkillInfo___TypeInfo, (unsigned int)v14);
    *skillInfoList = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
    if ( (int)v14 >= 1 )
    {
      v22 = 8;
      v23 = -(__int64)(unsigned int)v14;
      v24 = 8;
      do
      {
        v25 = sub_2213CCC(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v25, v26);
        if ( !v25 )
          goto LABEL_26;
        v35 = idList;
        *(_DWORD *)(v25 + 48) = 0;
        if ( !v35 )
          goto LABEL_26;
        v36 = v22 - 8;
        if ( v22 - 8 >= (unsigned __int64)*(unsigned int *)((char *)off_18 + (_QWORD)v35) )
          goto LABEL_27;
        v37 = *((_DWORD *)&v35->obj.klass + v22);
        v38 = v58;
        *(_DWORD *)(v25 + 16) = v37;
        if ( !v38 )
          goto LABEL_26;
        if ( v36 >= LODWORD(v38->max_length) )
          goto LABEL_27;
        v39 = *((_DWORD *)&v38->obj.klass + v22);
        v40 = titleList;
        *(_DWORD *)(v25 + 20) = v39;
        if ( !v40 )
          goto LABEL_26;
        if ( v36 >= LODWORD(v40->max_length) )
          goto LABEL_27;
        v41 = *(__int64 *)((char *)&v40->obj.klass + v24 * 4);
        *(_QWORD *)(v25 + 32) = v41;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 32), v41, v29, v30, v31, v32, v33, v34);
        if ( !explanationList )
          goto LABEL_26;
        if ( v36 >= LODWORD(explanationList->max_length) )
          goto LABEL_27;
        v48 = *(__int64 *)((char *)&explanationList->obj.klass + v24 * 4);
        *(_QWORD *)(v25 + 40) = v48;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 40), v48, v42, v43, v44, v45, v46, v47);
        v49 = (unsigned int *)*skillInfoList;
        if ( !*skillInfoList )
LABEL_26:
          sub_2213CDC(v27, v28);
        v27 = sub_2213BB4(v25, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
        if ( !v27 )
        {
          v57 = sub_2213D00(0, v50);
          sub_2213BA0(v57, 0);
        }
        if ( v36 >= v49[6] )
LABEL_27:
          sub_2213CE4(v27);
        *(_QWORD *)&v49[v24] = v25;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49[v24], v25, v51, v52, v53, v54, v55, v56);
        ++v22;
        v24 += 2;
      }
      while ( v23 + v22 != 8 );
    }
  }
  else
  {
    *skillInfoList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)skillInfoList, 0, v8, v9, v10, v11, v12, v13);
  }
}


System_Nullable_ValueTuple_FuncList_TYPE__int___o ServantLeaderInfo__GetBaseFriendPointUpTypeVal(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  __int64 v5; // x1
  Il2CppObject *Master_object; // x19
  const MethodInfo *v7; // x4
  System_Int32_array *SkillIdList; // x20
  const MethodInfo *v9; // x1
  __int128 v10; // x0
  System_Int32_array *SkillLevelList; // x21
  unsigned __int64 i; // x23
  int32_t v13; // w2
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_5971D99 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D99 = 1;
  }
  v3 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  entity = 0;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v16.fields.currentCryptoKey = v3;
  *(_QWORD *)&v16.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0) >= 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillIdList = ServantLeaderInfo__GetSkillIdList(
                    (ServantLeaderInfo_o *)Master_object,
                    this->fields.skillId1,
                    this->fields.skillId2,
                    this->fields.skillId3,
                    v7);
    SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v9);
    for ( i = 0; ; ++i )
    {
      *(_QWORD *)&v10 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *((_QWORD *)&v10 + 1));
        *(_QWORD *)&v10 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= *(int *)(*(_QWORD *)(v10 + 184) + 40LL) )
        break;
      if ( !SkillIdList )
        goto LABEL_25;
      if ( i >= LODWORD(SkillIdList->max_length) )
        goto LABEL_26;
      v13 = SkillIdList->m_Items[i];
      if ( v13 >= 1 )
      {
        if ( !SkillLevelList )
          goto LABEL_25;
        if ( i >= LODWORD(SkillLevelList->max_length) )
LABEL_26:
          sub_2213CE4(v10);
        if ( !Master_object )
          goto LABEL_25;
        if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, v13, SkillLevelList->m_Items[i], 0) )
        {
          *(_QWORD *)&v10 = entity;
          if ( !entity )
LABEL_25:
            sub_2213CDC(v10, *((_QWORD *)&v10 + 1));
          *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v10 = SkillLvEntity__GetFriendPointUpTypeVal(entity, 0);
          if ( (_BYTE)v10 )
            return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v10;
        }
      }
    }
  }
  *(_QWORD *)&v10 = 0;
  DWORD2(v10) = 0;
  return (System_Nullable_ValueTuple_FuncList_TYPE__int___o)v10;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLeaderInfo__GetCardImageLimitCountStage(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  struct OtherUserServantLimitCountManager_LimitCountStageData_o *AfterTransform_k__BackingField; // x8

  if ( (byte_5971DA7 & 1) == 0 )
  {
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5971DA7 = 1;
  }
  if ( !this->fields._IsUserServant_k__BackingField )
    return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.imageLimitCount, 1, 0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, *(_QWORD *)&overrideTransformVal);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( (overrideTransformVal & 0x80000000) == 0 )
  {
    if ( !overrideTransformVal )
      goto LABEL_15;
LABEL_12:
    if ( LimitCountStageData )
    {
      AfterTransform_k__BackingField = LimitCountStageData->fields._AfterTransform_k__BackingField;
      if ( AfterTransform_k__BackingField )
        return AfterTransform_k__BackingField->fields._ImageStage_k__BackingField;
    }
LABEL_17:
    sub_2213CDC(LimitCountStageData, v6);
  }
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo && afterTransformSvtInfo->fields.transformVal )
    goto LABEL_12;
LABEL_15:
  if ( !LimitCountStageData )
    goto LABEL_17;
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


// local variable allocation has failed, the output may be wrong!
int32_t ServantLeaderInfo__GetCommandCardLimitCountStage(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  struct OtherUserServantLimitCountManager_LimitCountStageData_o *AfterTransform_k__BackingField; // x8

  if ( (byte_5971DA6 & 1) == 0 )
  {
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5971DA6 = 1;
  }
  if ( !this->fields._IsUserServant_k__BackingField )
    return LimitCountUtility__GetLimitCountStageCheckZero(
             this->fields.limitCount,
             this->fields.commandCardLimitCount,
             0,
             0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, *(_QWORD *)&overrideTransformVal);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( (overrideTransformVal & 0x80000000) == 0 )
  {
    if ( !overrideTransformVal )
      goto LABEL_15;
LABEL_12:
    if ( LimitCountStageData )
    {
      AfterTransform_k__BackingField = LimitCountStageData->fields._AfterTransform_k__BackingField;
      if ( AfterTransform_k__BackingField )
        return AfterTransform_k__BackingField->fields._CommandCardStage_k__BackingField;
    }
LABEL_17:
    sub_2213CDC(LimitCountStageData, v6);
  }
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo && afterTransformSvtInfo->fields.transformVal )
    goto LABEL_12;
LABEL_15:
  if ( !LimitCountStageData )
    goto LABEL_17;
  return LimitCountStageData->fields._CommandCardStage_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLeaderInfo__GetDispLimitCountStage(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  struct OtherUserServantLimitCountManager_LimitCountStageData_o *AfterTransform_k__BackingField; // x8

  if ( (byte_5971DA5 & 1) == 0 )
  {
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5971DA5 = 1;
  }
  if ( !this->fields._IsUserServant_k__BackingField )
    return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.dispLimitCount, 0, 0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, *(_QWORD *)&overrideTransformVal);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( (overrideTransformVal & 0x80000000) == 0 )
  {
    if ( !overrideTransformVal )
      goto LABEL_15;
LABEL_12:
    if ( LimitCountStageData )
    {
      AfterTransform_k__BackingField = LimitCountStageData->fields._AfterTransform_k__BackingField;
      if ( AfterTransform_k__BackingField )
        return AfterTransform_k__BackingField->fields._DispStage_k__BackingField;
    }
LABEL_17:
    sub_2213CDC(LimitCountStageData, v6);
  }
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo && afterTransformSvtInfo->fields.transformVal )
    goto LABEL_12;
LABEL_15:
  if ( !LimitCountStageData )
    goto LABEL_17;
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
  EquipTargetInfo_o **p_equipTarget1; // x8

  p_equipTarget1 = &this->fields.equipTarget1;
  if ( idx == 1 )
    p_equipTarget1 = &this->fields.equipTarget2;
  if ( idx == 2 )
    p_equipTarget1 = &this->fields.equipTarget3;
  return *p_equipTarget1;
}


System_Collections_Generic_List_EquipTargetInfo__o *ServantLeaderInfo__GetEquipTargetInfoList(
        ServantLeaderInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
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

  if ( (byte_5971DB2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EquipTargetInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
    byte_5971DB2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
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
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v15[4] = (Il2CppClass *)equipTarget1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 4), (int32_t)equipTarget1, v5, v6, v7, v8, v9, v10);
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
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &v16->obj.klass + v18;
      v3->fields._size = v18 + 1;
      v19[4] = (Il2CppClass *)equipTarget1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)equipTarget1, v5, v6, v7, v8, v9, v10);
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
    sub_2213CDC(v4, equipTarget1);
  }
  v22 = v3->fields._size;
  if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      equipTarget1,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v3->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)equipTarget1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)equipTarget1, v5, v6, v7, v8, v9, v10);
  }
  return (System_Collections_Generic_List_EquipTargetInfo__o *)v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLeaderInfo__GetFrameType(ServantLeaderInfo_o *this, int32_t actualRarity, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x22
  __int64 v8; // x23
  ServantExceedMaster_o *v9; // x21
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  int32_t FrameTypeFixRarity; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_5971DA4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971DA4 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&actualRarity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantExceedMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v10 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14, 0);
  if ( !v9
    || (FrameTypeFixRarity = ServantExceedMaster__GetFrameTypeFixRarity(
                               v9,
                               (int32_t)v10,
                               this->fields.exceedCount,
                               actualRarity,
                               this->fields.grandSvt != 0,
                               0),
        (v10 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0) )
  {
    sub_2213CDC(v10, v11);
  }
  return ServantLvDetailMaster__GetFrameType(
           (ServantLvDetailMaster_o *)v10,
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
  __int64 v4; // x1
  __int64 v5; // x21
  __int64 v6; // x22
  const MethodInfo *v7; // x1
  __int128 v8; // x0
  const MethodInfo_45DF1F0 *v9; // x2
  System_Collections_Generic_List_EquipTargetInfo__o *Value; // x0
  System_ValueTuple_Int32Enum__int__o v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  __int64 v15; // x1
  const MethodInfo_45DF1F0 *v16; // x2
  Il2CppObject *v17; // x0
  System_ValueTuple_Int32Enum__int__o v18; // x1
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_ValueTuple_FuncList_TYPE__int___o v25; // [xsp+40h] [xbp-40h] BYREF
  System_Nullable_ValueTuple_FuncList_TYPE__int___o FriendPointUpTypeVal; // 0:x0.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  System_Nullable_T__o v28; // 0:x0.16
  System_Nullable_T__o v29; // 0:x0.16

  if ( (byte_5971D98 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo);
    sub_2213A60(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_HasValue__);
    sub_2213A60(&Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D98 = 1;
  }
  v25.fields.value.fields.Item2 = 0;
  *(_QWORD *)&v25.fields.hasValue = 0;
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___TypeInfo);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int_____ctor(
    v3,
    (const MethodInfo_43F966C *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int____ctor__);
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v27.fields.currentCryptoKey = v5;
  *(_QWORD *)&v27.fields.fakeValue = v6;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v27, 0) >= 1 )
  {
    *(System_Nullable_ValueTuple_FuncList_TYPE__int___o *)&v8 = ServantLeaderInfo__GetBaseFriendPointUpTypeVal(this, v7);
    *(_QWORD *)&v25.fields.hasValue = v8;
    v25.fields.value.fields.Item2 = DWORD2(v8);
    if ( (_BYTE)v8 )
    {
      v28.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
      *(_QWORD *)&v28.fields.hasValue = &v25;
      Value = (System_Collections_Generic_List_EquipTargetInfo__o *)System_Nullable_ValueTuple_Int32Enum__int____get_Value(
                                                                      v28,
                                                                      v9);
      if ( !v3 )
        goto LABEL_26;
      items = v3->fields._items;
      v13 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_26;
      size = v3->fields._size;
      *((_QWORD *)&v8 + 1) = Value;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
          v3,
          *(System_ValueTuple_Int32Enum__int__o *)((char *)&v8 + 8),
          *(const MethodInfo_43F9EF8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = (Il2CppObject *)Value;
      }
    }
    Value = ServantLeaderInfo__GetEquipTargetInfoList(this, *((const MethodInfo **)&v8 + 1));
    if ( Value )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v23,
        (System_Collections_Generic_List_object__o *)Value,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
      v24 = v23;
      v23.fields._list = 0;
      *(_QWORD *)&v23.fields._index = &v24;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__) )
      {
        if ( !v24.fields._current )
          sub_2213CDC(0, v15);
        FriendPointUpTypeVal = EquipTargetInfo__GetFriendPointUpTypeVal((EquipTargetInfo_o *)v24.fields._current, 0);
        v25 = FriendPointUpTypeVal;
        if ( FriendPointUpTypeVal.fields.hasValue )
        {
          v29.fields.value = (Il2CppObject *)Method_System_Nullable_ValueTuple_FuncList_TYPE__int___get_Value__;
          *(_QWORD *)&v29.fields.hasValue = &v25;
          v17 = (Il2CppObject *)System_Nullable_ValueTuple_Int32Enum__int____get_Value(v29, v16);
          v18 = (System_ValueTuple_Int32Enum__int__o)v17;
          if ( !v3
            || (v19 = v3->fields._items,
                v20 = Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___Add__,
                ++v3->fields._version,
                !v19) )
          {
            sub_2213CDC(v17, v17);
          }
          v21 = v3->fields._size;
          if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
          {
            System_Collections_Generic_List_ValueTuple_Int32Enum__int____AddWithResize(
              v3,
              v18,
              *(const MethodInfo_43F9EF8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = v21 + 1;
            v19->m_Items[v21] = v17;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
      return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v3;
    }
LABEL_26:
    sub_2213CDC(Value, v11);
  }
  return (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLeaderInfo__GetIconLimitCountStage(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  struct OtherUserServantLimitCountManager_LimitCountStageData_o *AfterTransform_k__BackingField; // x8

  if ( (byte_5971DA8 & 1) == 0 )
  {
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5971DA8 = 1;
  }
  if ( !this->fields._IsUserServant_k__BackingField )
    return LimitCountUtility__GetLimitCountStageCheckZero(this->fields.limitCount, this->fields.iconLimitCount, 1, 0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, *(_QWORD *)&overrideTransformVal);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( (overrideTransformVal & 0x80000000) == 0 )
  {
    if ( !overrideTransformVal )
      goto LABEL_15;
LABEL_12:
    if ( LimitCountStageData )
    {
      AfterTransform_k__BackingField = LimitCountStageData->fields._AfterTransform_k__BackingField;
      if ( AfterTransform_k__BackingField )
        return AfterTransform_k__BackingField->fields._IconStage_k__BackingField;
    }
LABEL_17:
    sub_2213CDC(LimitCountStageData, v6);
  }
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo && afterTransformSvtInfo->fields.transformVal )
    goto LABEL_12;
LABEL_15:
  if ( !LimitCountStageData )
    goto LABEL_17;
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


// local variable allocation has failed, the output may be wrong!
int32_t ServantLeaderInfo__GetMaxLimitCountStage(
        ServantLeaderInfo_o *this,
        bool hasRewardStage,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1

  if ( (byte_5971DB5 & 1) == 0 )
  {
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5971DB5 = 1;
  }
  if ( !this->fields._IsUserServant_k__BackingField )
    return LimitCountUtility__ConvertLimitCountToStage(this->fields.limitCount, 0, 0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, hasRewardStage);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( !LimitCountStageData )
    sub_2213CDC(0, v6);
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
    sub_2213CDC(v9, v10);
  return ServantEntity__getName(v6, v9, -1, 0, 0, 0);
}


ServantOverwriteStatus_o *ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w20
  int32_t v5; // w0
  int32_t v6; // w20
  ServantOverwriteStatus_o *v7; // x0
  ServantOverwriteStatus_o *v8; // x21
  ServantLeaderInfo_o *v9; // x1
  int32_t v10; // w2
  int32_t limitCount; // w20
  int32_t DispLimitCountStageSealAfter; // w0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  __int64 v16; // x0
  __int64 v17; // x1
  struct ServantEntity_o *saveTransformServantEntity; // x8
  __int64 v19; // x21
  __int64 v20; // x22
  int32_t v21; // w22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w21
  int32_t v29; // w0
  int32_t v30; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_5971D8B & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantOverwriteStatus_TypeInfo);
    byte_5971D8B = 1;
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
      ServantLeaderInfo__Init(this, v13);
      saveTransformServantEntity = this->fields.saveTransformServantEntity;
      if ( !saveTransformServantEntity )
        sub_2213CDC(v16, v17);
      v19 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.currentCryptoKey;
      v20 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
      *(_QWORD *)&v32.fields.currentCryptoKey = v19;
      *(_QWORD *)&v32.fields.fakeValue = v20;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v32, 0);
      v8 = (ServantOverwriteStatus_o *)sub_2213CCC(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_40472156(v8, this, v21, v6, 0);
      goto LABEL_16;
    }
    v28 = this->fields.limitCount;
    v29 = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, v14);
    v30 = LimitCountUtility__ConvertStageToLimitCount(v28, v29, 0, 0);
    v7 = (ServantOverwriteStatus_o *)sub_2213CCC(ServantOverwriteStatus_TypeInfo);
    v8 = v7;
    v9 = this;
    v10 = v30;
LABEL_15:
    ServantOverwriteStatus___ctor_40471616(v7, v9, v10, 0);
LABEL_16:
    this->fields.overwriteStatus = v8;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteStatus,
      (int32_t)v8,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
LABEL_17:
    this->fields.overwriteStatusLimitCount = v6;
    return this->fields.overwriteStatus;
  }
  if ( !this->fields.overwriteStatus )
  {
    v4 = this->fields.limitCount;
    v5 = ServantLeaderInfo__GetDispLimitCountStageSealAfter(this, -1, v3);
    v6 = LimitCountUtility__ConvertStageToLimitCount(v4, v5, 0, 0);
    v7 = (ServantOverwriteStatus_o *)sub_2213CCC(ServantOverwriteStatus_TypeInfo);
    v8 = v7;
    v9 = this;
    v10 = v6;
    goto LABEL_15;
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

  if ( (byte_5971D91 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971D91 = 1;
  }
  if ( !classPassive )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v7);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               dispSvtId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  bool v6; // w6
  bool v7; // w7
  il2cpp_array_size_t max_length; // x23
  System_String_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  long double v27; // q0
  __int64 v28; // x0
  __int64 v29; // x0
  DataManager_o *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x22
  unsigned __int64 v32; // x25
  unsigned int v33; // w24
  __int64 v34; // x27
  int32_t *m_Items; // x28
  System_String_array *v36; // x26
  SkillEntity_o *v37; // x23
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  DataManager_o *v44; // x1
  Il2CppClass **v45; // x0
  System_String_array *v46; // x26
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  DataManager_o *v53; // x1
  Il2CppClass **v54; // x0
  unsigned __int64 max_length_low; // x8
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7

  if ( (byte_5971D97 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&string___TypeInfo);
    byte_5971D97 = 1;
  }
  if ( !idList )
    goto LABEL_29;
  max_length = idList->max_length;
  if ( !max_length )
    goto LABEL_29;
  v12 = (System_String_array *)sub_2213B20(string___TypeInfo, (unsigned int)max_length);
  *titleList = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_String_array *)sub_2213B20(string___TypeInfo, (unsigned int)max_length);
  *explanationList = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v28 + 309) & 1) == 0 )
    v28 = sub_224B908(v27);
  v29 = *(_QWORD *)(*(_QWORD *)(v28 + 192) + 16LL);
  if ( (*(_WORD *)(v29 + 309) & 1) == 0 )
    v29 = sub_224B908(v27);
  MasterData_object = **(DataManager_o ***)(v29 + 184);
  if ( !MasterData_object )
LABEL_31:
    sub_2213CDC(MasterData_object, v26);
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
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
      sub_2213CE4(MasterData_object);
    v26 = (unsigned int)m_Items[v32];
    if ( (int)v26 >= 1 )
    {
      if ( !v31 )
        goto LABEL_31;
      MasterData_object = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                             v31,
                                             v26,
                                             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 4), (int32_t)v44, v38, v39, v40, v41, v42, v43);
        v46 = *explanationList;
        MasterData_object = (DataManager_o *)SkillEntity__getEffectExplanation(v37, 0, 0);
        if ( !v46 )
          goto LABEL_31;
        if ( v33 >= LODWORD(v46->max_length) )
          goto LABEL_30;
        v53 = MasterData_object;
        v54 = &v46->obj.klass + (int)v33;
        v54[4] = (Il2CppClass *)v53;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 4), (int32_t)v53, v47, v48, v49, v50, v51, v52);
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)titleList,
      0,
      (System_String_o *)explanationList,
      (System_String_o *)idList,
      (int32_t)method,
      v5,
      v6,
      v7);
    *explanationList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, 0, v56, v57, v58, v59, v60, v61);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLeaderInfo__GetPortraitLimitCountStage(
        ServantLeaderInfo_o *this,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  OtherUserServantLimitCountManager_LimitCountStageData_o *LimitCountStageData; // x0
  __int64 v6; // x1
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  struct OtherUserServantLimitCountManager_LimitCountStageData_o *AfterTransform_k__BackingField; // x8

  if ( (byte_5971DA9 & 1) == 0 )
  {
    sub_2213A60(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5971DA9 = 1;
  }
  if ( !this->fields._IsUserServant_k__BackingField )
    return LimitCountUtility__GetLimitCountStageCheckZero(
             this->fields.limitCount,
             this->fields.portraitLimitCount,
             0,
             0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, *(_QWORD *)&overrideTransformVal);
  LimitCountStageData = OtherUserServantLimitCountManager__GetLimitCountStageData(this, 0);
  if ( (overrideTransformVal & 0x80000000) == 0 )
  {
    if ( !overrideTransformVal )
      goto LABEL_15;
LABEL_12:
    if ( LimitCountStageData )
    {
      AfterTransform_k__BackingField = LimitCountStageData->fields._AfterTransform_k__BackingField;
      if ( AfterTransform_k__BackingField )
        return AfterTransform_k__BackingField->fields._PortraitStage_k__BackingField;
    }
LABEL_17:
    sub_2213CDC(LimitCountStageData, v6);
  }
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( afterTransformSvtInfo && afterTransformSvtInfo->fields.transformVal )
    goto LABEL_12;
LABEL_15:
  if ( !LimitCountStageData )
    goto LABEL_17;
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

  if ( (byte_5971D86 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D86 = 1;
  }
  ServantEntity = ServantLeaderInfo__GetServantEntity(this, overrideTransformVal, method);
  if ( !ServantEntity )
    sub_2213CDC(0, v6);
  v7 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v10, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5971D8E & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_5971D8E = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&id1);
    v8 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)v8->static_fields->SvtSkillListMax);
  if ( !result )
    sub_2213CDC(0, v10);
  max_length = result->max_length;
  if ( !max_length || (result->m_Items[0] = id1, max_length == 1) || (result->m_Items[1] = id2, max_length <= 2) )
    sub_2213CE4(result);
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
  Il2CppObject *MasterData_object; // x23
  long double v12; // q0
  __int64 v13; // x8
  __int64 v14; // x0
  BalanceConfig_c **v15; // x25
  Il2CppObject *v16; // x27
  const MethodInfo *v17; // x1
  System_Int32_array *SkillLevelList; // x0
  __int64 v19; // x1
  BalanceConfig_c *v20; // x8
  System_Int32_array *v21; // x22
  __int64 v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  unsigned __int64 v29; // x20
  unsigned int v30; // w21
  int32_t *m_Items; // x28
  SkillEntity_o *v32; // x26
  BalanceConfig_c **v33; // x24
  Il2CppObject *v34; // x23
  ServantSkillEntity_o *EntityFromSkillId; // x27
  __int64 v36; // x25
  const MethodInfo *v37; // x1
  int32_t v38; // w1
  unsigned __int64 max_length_low; // x8
  System_String_o *EffectTitle; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *EffectExplanation; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t skillNum; // w8
  MissionNaviTransitionBoardItem_c *klass; // x26
  __int64 v56; // x1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  void **v63; // x0
  __int64 i; // x20
  __int64 v65; // x0
  Il2CppObject *v66; // [xsp+0h] [xbp-80h]
  int32_t *v67; // [xsp+8h] [xbp-78h]
  MissionNaviTransitionBoardItem_o *v69; // [xsp+18h] [xbp-68h]

  v69 = (MissionNaviTransitionBoardItem_o *)skillInfoList;
  if ( (byte_5971D94 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&SkillInfo___TypeInfo);
    sub_2213A60(&SkillInfo_TypeInfo);
    byte_5971D94 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_224B908(v5);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_224B908(v5);
  Entity = **(DataManager_o ***)(v9 + 184);
  if ( !Entity )
    goto LABEL_51;
  MasterData_object = DataManager__GetMasterData_object_(
                        Entity,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v12);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v12);
  Entity = **(DataManager_o ***)(v14 + 184);
  if ( !Entity )
LABEL_51:
    sub_2213CDC(Entity, skillInfoList);
  v15 = &BalanceConfig_TypeInfo;
  v16 = DataManager__GetMasterData_object_(
          Entity,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v17);
  v20 = BalanceConfig_TypeInfo;
  v21 = SkillLevelList;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
    v20 = BalanceConfig_TypeInfo;
  }
  v22 = sub_2213B20(SkillInfo___TypeInfo, (unsigned int)v20->static_fields->SvtSkillListMax);
  v69->klass = (MissionNaviTransitionBoardItem_c *)v22;
  sub_2213A04(v69, v22, v23, v24, v25, v26, v27, v28);
  v29 = 0;
  v30 = 0;
  m_Items = idList->m_Items;
  v66 = MasterData_object;
  v67 = v21->m_Items;
  while ( 1 )
  {
    Entity = (DataManager_o *)*v15;
    if ( !*(&(*v15)->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Entity, skillInfoList);
      Entity = (DataManager_o *)*v15;
    }
    if ( (__int64)v29 >= *(int *)(*(_QWORD *)&Entity[1].fields._DispLog + 40LL) )
      break;
    if ( !idList )
      goto LABEL_51;
    if ( v29 >= LODWORD(idList->max_length) )
LABEL_50:
      sub_2213CE4(Entity);
    skillInfoList = (SkillInfo_array **)(unsigned int)m_Items[v29];
    if ( (int)skillInfoList >= 1 )
    {
      if ( !MasterData_object )
        goto LABEL_51;
      Entity = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)skillInfoList,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( v29 >= LODWORD(idList->max_length) )
          goto LABEL_50;
        if ( !v16 )
          goto LABEL_51;
        v32 = (SkillEntity_o *)Entity;
        v33 = v15;
        v34 = v16;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(
                              (ServantSkillMaster_o *)v16,
                              dispSvtId,
                              (int)v29 + 1,
                              m_Items[v29],
                              0);
        v36 = sub_2213CCC(SkillInfo_TypeInfo);
        SkillInfo___ctor((SkillInfo_o *)v36, v37);
        if ( v29 >= LODWORD(idList->max_length) )
          goto LABEL_50;
        if ( !v36 )
          goto LABEL_51;
        *(_DWORD *)(v36 + 16) = m_Items[v29];
        if ( !v21 )
          goto LABEL_51;
        if ( v29 >= LODWORD(v21->max_length) )
          goto LABEL_50;
        v38 = v67[v29];
        *(_DWORD *)(v36 + 20) = v38;
        Entity = (DataManager_o *)SkillEntity__getEffectChargeTurn(v32, v38, 0);
        max_length_low = LODWORD(v21->max_length);
        *(_DWORD *)(v36 + 24) = (_DWORD)Entity;
        if ( v29 >= max_length_low )
          goto LABEL_50;
        EffectTitle = SkillEntity__getEffectTitle(v32, v67[v29], 0);
        *(_QWORD *)(v36 + 32) = EffectTitle;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 32), (int32_t)EffectTitle, v41, v42, v43, v44, v45, v46);
        if ( v29 >= LODWORD(v21->max_length) )
          goto LABEL_50;
        EffectExplanation = SkillEntity__getEffectExplanation(v32, v67[v29], 0);
        *(_QWORD *)(v36 + 40) = EffectExplanation;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v36 + 40),
          (int32_t)EffectExplanation,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        if ( EntityFromSkillId )
        {
          Entity = (DataManager_o *)ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, -1, 0);
          skillNum = EntityFromSkillId->fields.skillNum;
          *(_DWORD *)(v36 + 48) = (_DWORD)Entity;
        }
        else
        {
          skillNum = 0;
          *(_DWORD *)(v36 + 48) = 0;
        }
        v16 = v34;
        *(_DWORD *)(v36 + 52) = skillNum;
        klass = v69->klass;
        *(_BYTE *)(v36 + 56) = 1;
        if ( !klass )
          goto LABEL_51;
        Entity = (DataManager_o *)sub_2213BB4(v36, *((_QWORD *)klass->_1.image + 8));
        if ( !Entity )
        {
          v65 = sub_2213D00(0, v56);
          sub_2213BA0(v65, 0);
        }
        if ( v30 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_50;
        v63 = &klass->_1.image + (int)v30;
        v63[4] = (void *)v36;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v63 + 4), v36, v57, v58, v59, v60, v61, v62);
        MasterData_object = v66;
        ++v30;
        v15 = v33;
      }
    }
    ++v29;
  }
  for ( i = (int)v30; ; ++i )
  {
    if ( !HIDWORD(Entity[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Entity, skillInfoList);
      Entity = (DataManager_o *)*v15;
    }
    if ( i >= *(int *)(*(_QWORD *)&Entity[1].fields._DispLog + 40LL) )
      break;
    if ( !idList )
      goto LABEL_51;
    if ( (unsigned int)i >= LODWORD(idList->max_length) )
      goto LABEL_50;
    idList->m_Items[i] = 0;
    if ( !v21 )
      goto LABEL_51;
    if ( (unsigned int)i >= LODWORD(v21->max_length) )
      goto LABEL_50;
    v21->m_Items[i] = -1;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLeaderInfo__GetSvtClassId(
        ServantLeaderInfo_o *this,
        bool isPlayableBeastToBase,
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  Il2CppObject *Entity; // x0
  __int64 v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_5971DB4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971DB4 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isPlayableBeastToBase);
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v8;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0) < 1 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v19, 0);
  if ( !v14
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v14,
                   (int32_t)Entity,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Entity, v16);
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
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x21
  UserEventDataLostEntity_o *v15; // x20
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_5971DB0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971DB0 = 1;
  }
  entity = 0;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questRestrictionInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v7 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
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
      v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v11 = entity;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
      *(_QWORD *)&v18.fields.currentCryptoKey = v9;
      *(_QWORD *)&v18.fields.fakeValue = v10;
      v7 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
      if ( !v11 )
        goto LABEL_25;
      if ( UserEventDataLostEntity__IsRestart(v11, (int32_t)v7, 0) )
      {
        v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v15 = entity;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
        *(_QWORD *)&v19.fields.currentCryptoKey = v14;
        *(_QWORD *)&v19.fields.fakeValue = v13;
        v7 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v19, 0);
        if ( v15 )
          return UserEventDataLostEntity__GetTimesToRestart(v15, (int32_t)v7, 0);
LABEL_25:
        sub_2213CDC(v7, v5);
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
  MissionNaviTransitionBoardItem_o *p_classPassive; // x20
  System_Int32_array *classPassive; // t1
  System_Int32_array *PassiveSkillIdList; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x0
  __int64 v16; // x1
  struct AfterTransformSvtInfo_o *v17; // x8

  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  if ( !afterTransformSvtInfo )
    return ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, 0, v3);
  classPassive = afterTransformSvtInfo->fields.classPassive;
  p_classPassive = (MissionNaviTransitionBoardItem_o *)&afterTransformSvtInfo->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(this, svtId, classPassive, v3);
  p_classPassive->klass = (MissionNaviTransitionBoardItem_c *)PassiveSkillIdList;
  sub_2213A04(p_classPassive, (int32_t)PassiveSkillIdList, v9, v10, v11, v12, v13, v14);
  v17 = this->fields.afterTransformSvtInfo;
  if ( !v17 )
    sub_2213CDC(v15, v16);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  ServantLeaderInfo_o *v16; // x0
  const MethodInfo *v17; // x4

  TransformedPassiveSkillIdList = ServantLeaderInfo__GetTransformedPassiveSkillIdList(
                                    this,
                                    svtId,
                                    (const MethodInfo *)titleList);
  *idList = TransformedPassiveSkillIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)idList,
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  TreasureDvcInfo_o *v22; // x8
  int32_t tdLv; // w9

  if ( (byte_5971DA0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&TreasureDvcInfo_TypeInfo);
    byte_5971DA0 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_224B908(v5);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908(v5);
  MasterData_object = **(Il2CppObject ***)(v11 + 184);
  if ( !MasterData_object )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !MasterData_object )
    goto LABEL_13;
  EntityFromSvtIdDvcId = ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
                           (ServantTreasureDvcMaster_o *)MasterData_object,
                           dispSvtId,
                           treasureDeviceId,
                           0);
  v14 = (TreasureDvcInfo_o *)sub_2213CCC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v14, v15);
  *tdInfo = v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)tdInfo, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  if ( EntityFromSvtIdDvcId )
  {
    v22 = *tdInfo;
    if ( *tdInfo )
    {
      tdLv = this->fields.treasureDeviceLv;
      v22->fields.id = treasureDeviceId;
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
    sub_2213CDC(MasterData_object, tdInfo);
  }
  return EntityFromSvtIdDvcId != 0;
}


void ServantLeaderInfo__Init(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  ServantEntity_o *baseServantEntity; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  __int64 v17; // x1
  ServantEntity_TransformInfo_o *v18; // x20
  Il2CppObject *v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_5971D85 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D85 = 1;
  }
  if ( !this->fields.baseServantEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
    v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    *(_QWORD *)&v26.fields.currentCryptoKey = v5;
    *(_QWORD *)&v26.fields.fakeValue = v6;
    baseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v26, 0);
    if ( Master_object )
    {
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (int32_t)baseServantEntity,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.baseServantEntity = (struct ServantEntity_o *)Entity;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseServantEntity,
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
        v18 = TransformInfo;
        if ( TransformInfo->fields.saveTransform < 1 )
          return;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
        baseServantEntity = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( baseServantEntity )
        {
          v19 = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)baseServantEntity,
                  v18->fields.saveTransform,
                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          this->fields.saveTransformServantEntity = (struct ServantEntity_o *)v19;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.saveTransformServantEntity,
            (int32_t)v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          return;
        }
      }
    }
    sub_2213CDC(baseServantEntity, v8);
  }
}


int32_t ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5971DB3 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_19953/*"equipTarget2SkillChange"*/);
    byte_5971DB3 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19953/*"equipTarget2SkillChange"*/,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v5 = value;
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v4);
      LODWORD(script) = System_Convert__ToInt32(v5, 0);
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
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  UserEventDataLostEntity_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x21
  UserEventDataLostEntity_o *v15; // x20
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_5971DAF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971DAF = 1;
  }
  entity = 0;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questRestrictionInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
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
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = entity;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v18.fields.currentCryptoKey = v9;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v7 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  if ( !v11 )
    goto LABEL_26;
  if ( UserEventDataLostEntity__IsRestart(v11, (int32_t)v7, 0) )
    return 0;
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = entity;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  v7 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v19, 0);
  if ( !v15 )
LABEL_26:
    sub_2213CDC(v7, v5);
  return UserEventDataLostEntity__IsDataLost(v15, (int32_t)v7, 0);
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
  return QuestRestrictionInfo__IsUniqueIndividuality_50440424(
           questRestrictionInfo,
           v9,
           limitCount,
           v12,
           npcFollowerInfo,
           0);
}


bool ServantLeaderInfo__IsUniqueIndividualityRestriction_50595084(
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
  return QuestRestrictionInfo__IsUniqueIndividuality_50441720(
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
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs_50603364(this, this->fields.equipTarget1, v3);
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs_50603364(this, this->fields.equipTarget2, v4);
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs_50603364(this, this->fields.equipTarget3, v5);
  }
}


void ServantLeaderInfo__SetEquipImagePartsGroupIdxs_50603364(
        ServantLeaderInfo_o *this,
        EquipTargetInfo_o *equipTarget,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x23
  __int64 v10; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  Il2CppObject *IntValue; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *imagePartsGroupInfo; // x20
  System_Func_object__bool__o *v15; // x22
  Il2CppObject *v16; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_5971DB1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Single_UserImagePartsGroupEntity___);
    sub_2213A60(&System_Func_UserImagePartsGroupEntity__bool__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ServantLeaderInfo___c__DisplayClass153_0__SetEquipImagePartsGroupIdxs_b__0__);
    sub_2213A60(&ServantLeaderInfo___c__DisplayClass153_0_TypeInfo);
    sub_2213A60(&StringLiteral_21272/*"imagePartsGroupId"*/);
    byte_5971DB1 = 1;
  }
  entity = 0;
  v5 = sub_2213CCC(ServantLeaderInfo___c__DisplayClass153_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( equipTarget )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
    v9 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    *(_QWORD *)&v18.fields.currentCryptoKey = v9;
    *(_QWORD *)&v18.fields.fakeValue = v10;
    IntValue = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
    if ( !v11 )
      goto LABEL_17;
    IntValue = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 v11,
                                 &entity,
                                 (int32_t)IntValue,
                                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)IntValue & 1) == 0 )
      return;
    if ( !entity )
      goto LABEL_17;
    IntValue = (Il2CppObject *)EntityScriptUtil__GetIntValue(
                                 (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                                 (System_String_o *)StringLiteral_21272/*"imagePartsGroupId"*/,
                                 0,
                                 0);
    if ( !v5 )
      goto LABEL_17;
    *(_DWORD *)(v5 + 16) = (_DWORD)IntValue;
    if ( !(_DWORD)IntValue )
      return;
    imagePartsGroupInfo = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.imagePartsGroupInfo;
    v15 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_ServantLeaderInfo___c__DisplayClass153_0__SetEquipImagePartsGroupIdxs_b__0__,
      0);
    IntValue = System_Linq_Enumerable__Single_object__59342384(
                 imagePartsGroupInfo,
                 (System_Func_TSource__bool__o *)v15,
                 (const MethodInfo_3897E30 *)Method_System_Linq_Enumerable_Single_UserImagePartsGroupEntity___);
    if ( !IntValue )
LABEL_17:
      sub_2213CDC(IntValue, v13);
    v16 = IntValue;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)IntValue[1].monitor, 0) )
      EquipTargetInfo__SetImagePartsGroupIdxs(equipTarget, (System_Int32_array *)v16[1].monitor, 0);
  }
}


void ServantLeaderInfo__SetSkillChangeInfo(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  EquipTargetInfo_o *equipTarget2; // x19
  int32_t v3; // w8

  equipTarget2 = this->fields.equipTarget2;
  if ( equipTarget2 )
  {
    v3 = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(this, method);
    EquipTargetInfo__SetSkillChangeFlag(equipTarget2, v3 > 0, 0);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32x4_t *afterTransformSvtInfo; // x8
  Il2CppObject *Master_object; // x0
  __int64 v24; // x1
  __int64 v25; // x23
  __int64 v26; // x24
  ServantTransformMaster_o *v27; // x22
  const MethodInfo *v28; // x4
  struct AfterTransformSvtInfo_o *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_5971D88 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D88 = 1;
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
      v11 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.currentCryptoKey;
      v12 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
      *(_QWORD *)&v37.fields.currentCryptoKey = v11;
      *(_QWORD *)&v37.fields.fakeValue = v12;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v37, 0);
      v15 = ServantLeaderInfo__CreateAfterTransformSvtInfo(this, v13, DispLimitCountStageSealAfter, friendshipRank, v14);
      this->fields.afterTransformSvtInfo = v15;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.afterTransformSvtInfo,
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
    sub_2213CDC(v8, v9);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v25 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v27 = (ServantTransformMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v38.fields.currentCryptoKey = v25;
  *(_QWORD *)&v38.fields.fakeValue = v26;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v38, 0);
  if ( !v27 )
    goto LABEL_18;
  v8 = ServantTransformMaster__TryGetEntity(v27, &entity, v8, DispLimitCountStageSealAfter, 0);
  if ( (v8 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    v29 = ServantLeaderInfo__CreateAfterTransformSvtInfo(
            this,
            entity->fields.aftSvtId,
            entity->fields.aftDispLimitCount,
            friendshipRank,
            v28);
    this->fields.afterTransformSvtInfo = v29;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.afterTransformSvtInfo,
      (int32_t)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
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
  int v10; // w25
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  struct AfterTransformSvtInfo_o *afterTransformSvtInfo; // x8
  SkillLvMaster_o *v16; // x20
  const MethodInfo *v17; // x4
  DataManager_o *v18; // x22
  DataManager_o *v19; // x23
  unsigned __int64 v20; // x26
  __int64 m_CancellationTokenSource; // x27
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

  if ( (byte_5971D9C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971D9C = 1;
  }
  otherValidEventId = 0;
  ServantId = (DataManager_o *)ServantLeaderInfo__GetServantId(this, -1, (const MethodInfo *)otherValidEventIdFilter);
  if ( (int)ServantId < 1 )
    goto LABEL_6;
  if ( !*eventUpVallInfo )
    goto LABEL_57;
  v9 = (int)ServantId;
  if ( NpcServantFollowerEntity__IsNoDisplayBonusIcon((*eventUpVallInfo)->fields.npcFlag, 0) )
  {
LABEL_6:
    LOBYTE(v10) = 0;
    return v10 & 1;
  }
  ServantId = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ServantId )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        ServantId,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
  v16 = (SkillLvMaster_o *)MasterData_object;
  if ( afterTransformSvtInfo && afterTransformSvtInfo->fields.transformVal )
    ServantId = (DataManager_o *)ServantLeaderInfo__GetTransformedPassiveSkillIdList(this, v9, v14);
  else
    ServantId = (DataManager_o *)ServantLeaderInfo__getPassiveSkillIdList(this, v13);
  v18 = ServantId;
  if ( !ServantId )
    goto LABEL_39;
  if ( otherValidEventIdFilter )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
    ServantId = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    if ( ServantId )
    {
      ServantId = (DataManager_o *)ServantPassiveSkillMaster__getServantSkillList(
                                     (ServantPassiveSkillMaster_o *)ServantId,
                                     v9,
                                     0);
      v19 = ServantId;
      goto LABEL_20;
    }
LABEL_57:
    sub_2213CDC(ServantId, v8);
  }
  v19 = 0;
LABEL_20:
  if ( (int)v18->fields.m_CancellationTokenSource >= 1 )
  {
    v20 = 0;
    v10 = 0;
    m_CancellationTokenSource = (unsigned int)v18->fields.m_CancellationTokenSource;
    do
    {
      if ( v20 >= LODWORD(v18->fields.m_CancellationTokenSource) )
LABEL_58:
        sub_2213CE4(ServantId);
      v8 = *((unsigned int *)&v18->fields._DispLog + v20);
      if ( (int)v8 >= 1 )
      {
        if ( !v16 )
          goto LABEL_57;
        ServantId = (DataManager_o *)SkillLvMaster__GetEntity(v16, v8, 1, 0);
        if ( ServantId )
        {
          v22 = (SkillLvEntity_o *)ServantId;
          v23 = -1;
          otherValidEventId = -1;
          if ( v19 )
          {
            v24 = v19->fields.m_CancellationTokenSource;
            if ( (int)v24 >= 1 )
            {
              v25 = 0;
              do
              {
                if ( (unsigned int)v25 >= (unsigned int)v24 )
                  goto LABEL_58;
                ServantId = (DataManager_o *)*((_QWORD *)&v19->fields._DispLog + v25);
                if ( !ServantId )
                  goto LABEL_57;
                if ( HIDWORD(ServantId->fields.m_CancellationTokenSource) == v22->fields.skillId )
                {
                  ServantId = (DataManager_o *)ServantPassiveSkillEntity__TryGetOtherValidEventId(
                                                 (ServantPassiveSkillEntity_o *)ServantId,
                                                 &otherValidEventId,
                                                 0);
                  if ( ((unsigned __int8)ServantId & 1) != 0 )
                    break;
                  v24 = v19->fields.m_CancellationTokenSource;
                }
                ++v25;
              }
              while ( (int)v25 < (int)v24 );
              v23 = otherValidEventId;
            }
          }
          ServantId = (DataManager_o *)SkillLvEntity__getEventUpVal_49920836(
                                         v22,
                                         eventUpVallInfo,
                                         1,
                                         0,
                                         1,
                                         0,
                                         0,
                                         v23,
                                         0);
          v10 |= (unsigned int)ServantId;
        }
      }
      ++v20;
    }
    while ( v20 != m_CancellationTokenSource );
    goto LABEL_40;
  }
LABEL_39:
  v10 = 0;
LABEL_40:
  v26 = this->fields.afterTransformSvtInfo;
  if ( v26 && v26->fields.transformVal )
    TransformedSkillIdList = ServantLeaderInfo__GetTransformedSkillIdList(this, (const MethodInfo *)v8);
  else
    TransformedSkillIdList = ServantLeaderInfo__GetSkillIdList(
                               (ServantLeaderInfo_o *)ServantId,
                               this->fields.skillId1,
                               this->fields.skillId2,
                               this->fields.skillId3,
                               v17);
  v29 = TransformedSkillIdList;
  SkillLevelList = ServantLeaderInfo__getSkillLevelList(this, v28);
  for ( i = 0; ; ++i )
  {
    ServantId = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
      ServantId = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&ServantId[1].fields._DispLog + 40LL) )
      break;
    if ( !v29 )
      goto LABEL_57;
    if ( i >= LODWORD(v29->max_length) )
      goto LABEL_58;
    v8 = (unsigned int)v29->m_Items[i];
    if ( (int)v8 >= 1 )
    {
      if ( !SkillLevelList )
        goto LABEL_57;
      if ( i >= LODWORD(SkillLevelList->max_length) )
        goto LABEL_58;
      if ( !v16 )
        goto LABEL_57;
      Entity = SkillLvMaster__GetEntity(v16, v8, SkillLevelList->m_Items[i], 0);
      if ( Entity )
        v10 |= SkillLvEntity__getEventUpVal_49920836(Entity, eventUpVallInfo, 1, 0, 1, 0, 0, -1, 0);
    }
  }
  return v10 & 1;
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEntity_o *ServantLeaderInfo__getCommandCodeEntity(
        ServantLeaderInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *v4; // x20
  struct CommandCodeStatus_array *commandCode; // x9
  int max_length; // w8
  CommandCodeStatus_o **i; // x9
  CommandCodeStatus_o *v8; // x21
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x19
  __int64 v12; // x20
  __int64 v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v4 = this;
  if ( (byte_5971DAB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantLeaderInfo_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971DAB = 1;
  }
  commandCode = v4->fields.commandCode;
  if ( !commandCode )
    return 0;
  max_length = commandCode->max_length;
  if ( max_length < 1 )
    return 0;
  for ( i = commandCode->m_Items; ; ++i )
  {
    v8 = *i;
    if ( !*i )
      goto LABEL_15;
    if ( v8->fields.idx == index )
      break;
    if ( !--max_length )
      return 0;
  }
  this = (ServantLeaderInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v12 = *(_QWORD *)&v8->fields.commandCodeId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v8->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v14.fields.currentCryptoKey = v12;
  *(_QWORD *)&v14.fields.fakeValue = v13;
  this = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14, 0);
  if ( !MasterData_object )
LABEL_15:
    sub_2213CDC(this, *(_QWORD *)&index);
  return (CommandCodeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (int32_t)this,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
}


System_Int32_array *ServantLeaderInfo__getCommandCodeIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  struct CommandCodeStatus_array *commandCode; // x23
  int max_length; // w8
  BalanceConfig_c *v8; // x19
  int i; // w25
  CommandCodeStatus_o *v10; // x21
  int32_t idx; // w20
  __int64 v12; // x26
  __int64 v13; // x20
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_5971DAA & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971DAA = 1;
  }
  if ( !this->fields.commandCode )
    return 0;
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_2213B20(int___TypeInfo, (unsigned int)v3->static_fields->SvtCommandCardMax);
  commandCode = this->fields.commandCode;
  if ( !commandCode )
LABEL_23:
    sub_2213CDC(v4, v5);
  max_length = commandCode->max_length;
  v8 = v4;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
LABEL_24:
        sub_2213CE4(v4);
      v10 = commandCode->m_Items[i];
      if ( !v10 )
        goto LABEL_23;
      v4 = BalanceConfig_TypeInfo;
      idx = v10->fields.idx;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
        v4 = BalanceConfig_TypeInfo;
      }
      if ( idx < v4->static_fields->SvtCommandCardMax )
      {
        v12 = v10->fields.idx;
        v13 = *(_QWORD *)&v10->fields.commandCodeId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v10->fields.commandCodeId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
        *(_QWORD *)&v16.fields.currentCryptoKey = v13;
        *(_QWORD *)&v16.fields.fakeValue = v14;
        v4 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
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
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_5971DA3 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971DA3 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_9;
  v10 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, exp);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0) >= 1 )
  {
    v13 = this->fields.equipTarget1;
    if ( !v13 )
      sub_2213CDC(0, v12);
    return EquipTargetInfo__getExpInfo(v13, exp, lateExp, barExp, 0);
  }
  else
  {
LABEL_9:
    *exp = 0;
    *lateExp = 0;
    result = 0;
    *barExp = 0.0;
  }
  return result;
}


void ServantLeaderInfo__getEquipSkillInfo(
        ServantLeaderInfo_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  EquipTargetInfo_o *v8; // x0
  BalanceConfig_c *v9; // x0
  SkillInfo_array *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_5971D95 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&SkillInfo___TypeInfo);
    byte_5971D95 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    goto LABEL_9;
  v6 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0) >= 1 )
  {
    v8 = this->fields.equipTarget1;
    if ( !v8 )
      sub_2213CDC(0, skillInfoList);
    EquipTargetInfo__getSkillInfo(v8, skillInfoList, 0);
  }
  else
  {
LABEL_9:
    v9 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = (SkillInfo_array *)sub_2213B20(SkillInfo___TypeInfo, (unsigned int)v9->static_fields->SvtEquipSkillListMax);
    *skillInfoList = v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x3
  bool BaseEventUpVal; // w0
  __int64 v26; // x1
  struct EquipTargetInfo_o *equipTarget1; // x8
  char v28; // w21
  __int64 v29; // x22
  __int64 v30; // x23
  EventUpValInfo_o *v31; // x24
  EquipTargetInfo_o *v32; // x0
  __int64 v33; // x1
  int32_t v34; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_5971D9A & 1) == 0 )
  {
    sub_2213A60(&EventUpValInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D9A = 1;
  }
  ServantId = ServantLeaderInfo__GetServantId(this, -1, (const MethodInfo *)setupInfo);
  limitCount = this->fields.limitCount;
  v11 = ServantId;
  DispLimitCountStage = ServantLeaderInfo__GetDispLimitCountStage(this, -1, v12);
  v14 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  npcFlag = this->fields.npcFlag;
  v16 = v14;
  v17 = (EventUpValInfo_o *)sub_2213CCC(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v17, setupInfo, v11, limitCount, v16, npcFlag, 0);
  *eventUpVallInfo = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)eventUpVallInfo, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  if ( v11 < 1 )
  {
    v28 = 0;
  }
  else
  {
    BaseEventUpVal = ServantLeaderInfo__getBaseEventUpVal(this, eventUpVallInfo, otherValidEventIdFilter, v24);
    equipTarget1 = this->fields.equipTarget1;
    v28 = BaseEventUpVal;
    if ( equipTarget1 )
    {
      v29 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      v31 = *eventUpVallInfo;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
      *(_QWORD *)&v36.fields.currentCryptoKey = v29;
      *(_QWORD *)&v36.fields.fakeValue = v30;
      v32 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0);
      if ( !v31 || (v34 = (int)v32, v32 = this->fields.equipTarget1, v31->fields.equipSvtId = v34, !v32) )
        sub_2213CDC(v32, v33);
      v28 |= EquipTargetInfo__getEventUpVal_48720064(v32, eventUpVallInfo, 1, 0);
    }
  }
  return v28 & 1;
}


bool ServantLeaderInfo__getEventUpVal_50594096(
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v29; // x23
  __int64 v30; // x24
  EventUpValInfo_o *v31; // x25
  EquipTargetInfo_o *v32; // x0
  __int64 v33; // x1
  int32_t v34; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_5971D9B & 1) == 0 )
  {
    sub_2213A60(&EventUpValInfo_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D9B = 1;
  }
  ServantId = ServantLeaderInfo__GetServantId(this, -1, (const MethodInfo *)isServantEventUpVal);
  limitCount = this->fields.limitCount;
  v13 = ServantId;
  DispLimitCountStage = ServantLeaderInfo__GetDispLimitCountStage(this, -1, v14);
  v16 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
  npcFlag = this->fields.npcFlag;
  v18 = v16;
  v19 = (EventUpValInfo_o *)sub_2213CCC(EventUpValInfo_TypeInfo);
  EventUpValInfo___ctor(v19, setupInfo, v13, limitCount, v18, npcFlag, 0);
  *eventUpVallInfo = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)eventUpVallInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  *isServantEventUpVal = 0;
  *isEquipEventUpVal = 0;
  if ( v13 >= 1 )
  {
    if ( ServantLeaderInfo__getBaseEventUpVal(this, eventUpVallInfo, 0, v26) )
      *isServantEventUpVal = 1;
    equipTarget1 = this->fields.equipTarget1;
    if ( equipTarget1 )
    {
      v29 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      v31 = *eventUpVallInfo;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
      *(_QWORD *)&v36.fields.currentCryptoKey = v29;
      *(_QWORD *)&v36.fields.fakeValue = v30;
      v32 = (EquipTargetInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0);
      if ( !v31 || (v34 = (int)v32, v32 = this->fields.equipTarget1, v31->fields.equipSvtId = v34, !v32) )
        sub_2213CDC(v32, v33);
      if ( EquipTargetInfo__getEventUpVal_48720064(v32, eventUpVallInfo, 1, 0) )
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
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  ServantLimitMaster_o *v11; // x20
  ServantLimitEntity_o *Entity; // x20
  ServantExceedEntity_o *v13; // x8
  int32_t result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_5971D8A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971D8A = 1;
  }
  v3 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v15.fields.currentCryptoKey = v3;
  *(_QWORD *)&v15.fields.fakeValue = v4;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0) < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (ServantLimitMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  if ( !v11
    || (Entity = ServantLimitMaster__GetEntity(v11, (int32_t)Instance, this->fields.limitCount, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExceedMaster___),
        !Entity)
    || !Instance )
  {
LABEL_17:
    sub_2213CDC(Instance, v6);
  }
  v13 = ServantExceedMaster__GetEntity(
          (ServantExceedMaster_o *)Instance,
          Entity->fields.rarity,
          this->fields.exceedCount,
          0);
  result = Entity->fields.lvMax;
  if ( v13 )
    result += v13->fields.addLvMax;
  return result;
}


System_Int32_array *ServantLeaderInfo__getPassiveSkillIdList(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  ServantLeaderInfo_o *v5; // x0
  MissionNaviTransitionBoardItem_o *p_classPassive; // x19
  System_Int32_array *classPassive; // t1
  const MethodInfo *v8; // x3
  System_Int32_array *PassiveSkillIdList; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_5971D90 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D90 = 1;
  }
  v3 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v17.fields.currentCryptoKey = v3;
  *(_QWORD *)&v17.fields.fakeValue = v4;
  v5 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0);
  classPassive = this->fields.classPassive;
  p_classPassive = (MissionNaviTransitionBoardItem_o *)&this->fields.classPassive;
  PassiveSkillIdList = ServantLeaderInfo__GetPassiveSkillIdList(v5, (int32_t)v5, classPassive, v8);
  p_classPassive->klass = (MissionNaviTransitionBoardItem_c *)PassiveSkillIdList;
  sub_2213A04(p_classPassive, (int32_t)PassiveSkillIdList, v10, v11, v12, v13, v14, v15);
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  ServantLeaderInfo_o *v26; // x0
  const MethodInfo *v27; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_5971D96 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D96 = 1;
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
    sub_2213CDC(v12, v13);
  v15 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.currentCryptoKey;
  v16 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v28.fields.currentCryptoKey = v15;
  *(_QWORD *)&v28.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v28, 0);
  PassiveSkillIdList = ServantLeaderInfo__GetTransformedPassiveSkillIdList(this, v17, v18);
LABEL_13:
  *idList = PassiveSkillIdList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, (int32_t)PassiveSkillIdList, v20, v21, v22, v23, v24, v25);
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
    sub_2213CDC(0, v15);
  return QuestRestrictionInfo__IsRestriction_50436376(
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
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  ServantLimitMaster_o *v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_5971D8C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971D8C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9 || (Instance = ServantLimitMaster__GetEntity(v9, (int32_t)Instance, this->fields.limitCount, 0)) == 0 )
LABEL_9:
    sub_2213CDC(Instance, v4);
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

  if ( (byte_5971D93 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D93 = 1;
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
    v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, skillInfoList);
    *(_QWORD *)&v22.fields.currentCryptoKey = v17;
    *(_QWORD *)&v22.fields.fakeValue = v18;
    v19 = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0);
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
    sub_2213CDC(v8, v9);
  v11 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&saveTransformServantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
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

  if ( (byte_5971D8F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_5971D8F = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  result = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)v3->static_fields->SvtSkillListMax);
  if ( !result )
    sub_2213CDC(0, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[0] = this->fields.skillLv1, max_length == 1)
    || (result->m_Items[1] = this->fields.skillLv2, max_length <= 2) )
  {
    sub_2213CE4(result);
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
  int32_t ServantId; // w0
  const MethodInfo *v9; // x4
  struct AfterTransformSvtInfo_o *v10; // x8
  int32_t v11; // w2
  int32_t treasureDeviceId; // w3
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t v15; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_5971D9F & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D9F = 1;
  }
  if ( overrideTransformVal < 0 )
  {
    afterTransformSvtInfo = this->fields.afterTransformSvtInfo;
    if ( !afterTransformSvtInfo || !afterTransformSvtInfo->fields.transformVal )
      goto LABEL_10;
LABEL_8:
    ServantId = ServantLeaderInfo__GetServantId(this, overrideTransformVal, *(const MethodInfo **)&overrideTransformVal);
    v10 = this->fields.afterTransformSvtInfo;
    v11 = ServantId;
    if ( v10 )
      treasureDeviceId = v10->fields.treasureDeviceId;
    else
      treasureDeviceId = 0;
    return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, v11, treasureDeviceId, v9);
  }
  if ( overrideTransformVal )
    goto LABEL_8;
LABEL_10:
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, tdInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0);
  treasureDeviceId = this->fields.treasureDeviceId;
  v11 = v15;
  return ServantLeaderInfo__GetTreasureDeviceInfo(this, tdInfo, v11, treasureDeviceId, v9);
}


bool ServantLeaderInfo__getTreasureDeviceInfo_50595936(
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

  if ( (byte_5971DA1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_2213A60(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_5971DA1 = 1;
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
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_224B908(v4);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_224B908(v4);
    MasterData_object = **(Il2CppObject ***)(v9 + 184);
    if ( !MasterData_object
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)MasterData_object,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0 )
    {
      sub_2213CDC(MasterData_object, tdLv);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               this->fields.treasureDeviceId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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

  if ( (byte_5971DA2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_2213A60(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_5971DA2 = 1;
  }
  if ( this->fields.treasureDeviceId < 1 )
    return 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  MasterData_object = **(Il2CppObject ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0 )
  {
    sub_2213CDC(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.treasureDeviceId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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

  if ( (byte_5971D9D & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D9D = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v9, 0);
  return QuestRestrictionInfo__IsUniqueServant_50439864(questRestrictionInfo, v7, 0);
}


bool ServantLeaderInfo__getUniqueSvtRestriction_50594804(
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

  if ( (byte_5971D9E & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D9E = 1;
  }
  if ( !questRestrictionInfo )
    return 0;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, questRestrictionInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  return QuestRestrictionInfo__IsUniqueServant_50440168(questRestrictionInfo, v11, partyItem, num, -1, 0);
}


int32_t ServantLeaderInfo__get_AtkBoostValue(ServantLeaderInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t adjustAtk; // w20
  int32_t StatusUpAdjustAtk; // w21
  UserServantGrandInfo_o *GrandInfo; // x0
  __int64 v7; // x1
  struct GrandGraphDetailEntity_o *svtGrandDetailEntity; // x8

  if ( (byte_5971D84 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5971D84 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  adjustAtk = this->fields.adjustAtk;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  StatusUpAdjustAtk = v3->static_fields->StatusUpAdjustAtk;
  GrandInfo = ServantLeaderInfo__get_GrandInfo(this, method);
  if ( !GrandInfo )
    sub_2213CDC(0, v7);
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
  struct UserServantGrandInfo_o *grandInfo; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971D82 & 1) == 0 )
  {
    sub_2213A60(&UserServantGrandInfo_TypeInfo);
    byte_5971D82 = 1;
  }
  grandInfo = this->fields.grandInfo;
  if ( !grandInfo )
  {
    if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, method);
    grandInfo = UserServantGrandInfo__Make_50582324(this, method);
    this->fields.grandInfo = grandInfo;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.grandInfo, (int32_t)grandInfo, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_5971D83 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5971D83 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  adjustHp = this->fields.adjustHp;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  StatusUpAdjustHp = v3->static_fields->StatusUpAdjustHp;
  GrandInfo = ServantLeaderInfo__get_GrandInfo(this, method);
  if ( !GrandInfo )
    sub_2213CDC(0, v7);
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

  if ( (byte_5971D92 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971D92 = 1;
  }
  equipTarget1 = this->fields.equipTarget1;
  if ( !equipTarget1 )
    return 0;
  v4 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v4;
  *(_QWORD *)&v7.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v7, 0) > 0;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.baseServantEntity = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseServantEntity,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.saveTransformServantEntity = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.saveTransformServantEntity,
    (int32_t)value,
    (System_String_o *)method,
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
    sub_2213CDC(this, 0);
  return entity->fields.id == this->fields.scriptImageValue;
}