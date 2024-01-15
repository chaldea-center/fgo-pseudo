void __fastcall BattlePerformanceEnemy___ctor(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FC31A & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40FC31A = 1;
  }
  this->fields.raidY = -82.0;
  v4 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, v2);
  this->fields.list_ID = v4;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.list_ID, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall BattlePerformanceEnemy__ExistsFieldNormalEnemy(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *svtParamList; // x0
  int32_t v5; // w20
  UnityEngine_Component_o *v6; // x21
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC315 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_BattleServantParamComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FC315 = 1;
  }
  svtParamList = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.svtParamList;
  if ( !svtParamList )
LABEL_14:
    sub_B170D4();
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= (signed int)svtParamList->max_length )
      return 0;
    v6 = (UnityEngine_Component_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                      svtParamList,
                                      v5,
                                      0LL,
                                      (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
    {
      if ( !v6 )
        goto LABEL_14;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      if ( !gameObject )
        goto LABEL_14;
      if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
        return 1;
    }
    svtParamList = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.svtParamList;
    ++v5;
    if ( !svtParamList )
      goto LABEL_14;
  }
}


bool __fastcall BattlePerformanceEnemy__ExistsFrontRow(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int v4; // w21
  UnityEngine_Component_o *v5; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC314 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_BattleServantParamComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FC314 = 1;
  }
  v4 = -1;
  while ( 1 )
  {
    v5 = (UnityEngine_Component_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.svtParamList,
                                      v4 + 1,
                                      0LL,
                                      (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
    {
      if ( !v5 || (gameObject = UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL )
        sub_B170D4();
      if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
        break;
    }
    if ( (unsigned int)++v4 >= 2 )
      return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
BattleServantParamComponent_o *__fastcall BattlePerformanceEnemy__GetSvtParamComponent(
        BattlePerformanceEnemy_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattlePerformanceEnemy___c__DisplayClass40_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct BattleServantParamComponent_array *svtParamList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40FC319 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Find_BattleServantParamComponent___, *(_QWORD *)&uniqueId);
    sub_B16FFC(&Method_System_Predicate_BattleServantParamComponent___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleServantParamComponent__TypeInfo, v8);
    sub_B16FFC(&Method_BattlePerformanceEnemy___c__DisplayClass40_0__GetSvtParamComponent_b__0__, v9);
    sub_B16FFC(&BattlePerformanceEnemy___c__DisplayClass40_0_TypeInfo, v10);
    byte_40FC319 = 1;
  }
  v11 = (BattlePerformanceEnemy___c__DisplayClass40_0_o *)sub_B170CC(
                                                            BattlePerformanceEnemy___c__DisplayClass40_0_TypeInfo,
                                                            *(_QWORD *)&uniqueId,
                                                            method,
                                                            v3,
                                                            v4);
  BattlePerformanceEnemy___c__DisplayClass40_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.uniqueId = uniqueId;
  svtParamList = this->fields.svtParamList;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleServantParamComponent__TypeInfo,
                                                                   v12,
                                                                   v13,
                                                                   v14,
                                                                   v15);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_BattlePerformanceEnemy___c__DisplayClass40_0__GetSvtParamComponent_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleServantParamComponent___ctor__);
  return (BattleServantParamComponent_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                            (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)svtParamList,
                                            (System_Predicate_T__o *)v17,
                                            (const MethodInfo_20441E8 *)Method_System_Array_Find_BattleServantParamComponent___);
}


BattleServantParamComponent_o *__fastcall BattlePerformanceEnemy__GetSvtSuperBossParamComponent(
        BattlePerformanceEnemy_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *superbossParam; // x0
  bool v5; // w8
  BattleServantParamComponent_o *result; // x0

  superbossParam = (BattleServantParamComponent_o *)this->fields.superbossParam;
  if ( !superbossParam )
    sub_B170D4();
  v5 = BattleServantParamComponent__checkId(superbossParam, uniqueId, 0LL);
  result = 0LL;
  if ( v5 )
    return (BattleServantParamComponent_o *)this->fields.superbossParam;
  return result;
}


void __fastcall BattlePerformanceEnemy__Initialize(
        BattlePerformanceEnemy_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattlePerformance_o **p_perf; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct BattleServantParamComponent_array *svtParamList; // x8
  __int64 v27; // x21
  int max_length; // w9
  BattleServantParamComponent_o *v29; // x8
  System_Int32_array **v30; // x1
  struct BattleServantRaidParamComponent_o *raidParam; // x8
  System_Int32_array **perf; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct BattleServantSuperBossParamComponent_o *superbossParam; // x8
  System_Int32_array **v40; // x1
  __int64 v41; // x2
  struct BattleServantParamComponent_array *v42; // x8
  struct System_Int32_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_40FC311 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, inperf);
    byte_40FC311 = 1;
  }
  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)indata,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.bdata = indata;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bdata,
    (System_Int32_array **)indata,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_9;
  v27 = 0LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v27 >= max_length )
      break;
    if ( (unsigned int)v27 >= max_length )
    {
      sub_B17100(v18, v19, v20);
      sub_B170A0();
    }
    v29 = svtParamList->m_Items[v27];
    if ( v29 )
    {
      v30 = (System_Int32_array **)*p_perf;
      v29->fields.perf = *p_perf;
      sub_B16F98((BattleServantConfConponent_o *)&v29->fields.perf, v30, v20, v21, v22, v23, v24, v25);
      svtParamList = this->fields.svtParamList;
      ++v27;
      if ( svtParamList )
        continue;
    }
    goto LABEL_9;
  }
  raidParam = this->fields.raidParam;
  if ( !raidParam )
    goto LABEL_9;
  perf = (System_Int32_array **)this->fields.perf;
  raidParam->fields.perf = (struct BattlePerformance_o *)perf;
  sub_B16F98((BattleServantConfConponent_o *)&raidParam->fields.perf, perf, v20, v21, v22, v23, v24, v25);
  superbossParam = this->fields.superbossParam;
  if ( !superbossParam
    || (v40 = (System_Int32_array **)this->fields.perf,
        superbossParam->fields.perf = (struct BattlePerformance_o *)v40,
        sub_B16F98((BattleServantConfConponent_o *)&superbossParam->fields.perf, v40, v33, v34, v35, v36, v37, v38),
        (v42 = this->fields.svtParamList) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  v43 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, v42->max_length, v41);
  this->fields.list_ID = v43;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.list_ID,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
}


BaseEnemyParamPosData_o *__fastcall BattlePerformanceEnemy__MakeEnemyParamPosData(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *bdata; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  PosCountNormalEnemyParamPosData_o *v9; // x19

  if ( (byte_40FC313 & 1) == 0 )
  {
    sub_B16FFC(&PosCountNormalEnemyParamPosData_TypeInfo, method);
    sub_B16FFC(&PosCountSpEnemyParamPosData_TypeInfo, v3);
    byte_40FC313 = 1;
  }
  bdata = this->fields.bdata;
  if ( !bdata )
    sub_B170D4();
  if ( BattleData__get_IsEnemyPosCountNormal(bdata, 0LL) )
  {
    v9 = (PosCountNormalEnemyParamPosData_o *)sub_B170CC(PosCountNormalEnemyParamPosData_TypeInfo, v5, v6, v7, v8);
    PosCountNormalEnemyParamPosData___ctor(v9, 0LL);
  }
  else
  {
    v9 = (PosCountNormalEnemyParamPosData_o *)sub_B170CC(PosCountSpEnemyParamPosData_TypeInfo, v5, v6, v7, v8);
    PosCountSpEnemyParamPosData___ctor((PosCountSpEnemyParamPosData_o *)v9, 0LL);
  }
  return (BaseEnemyParamPosData_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__SetNormalEnemyStatusUI(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleServantParamComponent_array *svtParamList; // x8
  UnityEngine_Object_o *v13; // x22
  struct BattleServantParamComponent_array *v14; // x8
  BattleServantParamComponent_o *v15; // x0
  struct BattleServantParamComponent_array *v16; // x8
  BattleServantParamComponent_o *v17; // x8
  struct BattleServantParamComponent_array *v18; // x8
  BattleServantParamComponent_o *v19; // x0
  struct BattleServantParamComponent_array *v20; // x8
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC316 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_40FC316 = 1;
  }
  BattlePerformanceEnemy__setTargetIcon(this, svtdata, target, index, method);
  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_24;
  if ( svtParamList->max_length <= index )
  {
LABEL_25:
    sub_B17100(v9, v10, v11);
    sub_B170A0();
  }
  v13 = (UnityEngine_Object_o *)svtParamList->m_Items[index];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( (v9 & 1) != 0 )
  {
    v14 = this->fields.svtParamList;
    if ( !v14 )
      goto LABEL_24;
    if ( v14->max_length > index )
    {
      v15 = v14->m_Items[index];
      if ( !v15 )
        goto LABEL_24;
      v9 = ((__int64 (__fastcall *)(BattleServantParamComponent_o *, BattleServantData_o *, Il2CppMethodPointer))v15->klass->vtable._6_setData.method)(
             v15,
             svtdata,
             v15->klass->vtable._7_SetEnemyParamPosition.methodPtr);
      v16 = this->fields.svtParamList;
      if ( !v16 )
        goto LABEL_24;
      if ( v16->max_length > index )
      {
        v17 = v16->m_Items[index];
        if ( !v17 )
          goto LABEL_24;
        v17->fields.index = index;
        v18 = this->fields.svtParamList;
        if ( !v18 )
          goto LABEL_24;
        if ( v18->max_length > index )
        {
          v19 = v18->m_Items[index];
          if ( !v19 )
            goto LABEL_24;
          BattleServantParamComponent__setTouch(v19, 1, 0LL);
          v20 = this->fields.svtParamList;
          if ( !v20 )
            goto LABEL_24;
          if ( v20->max_length > index )
          {
            v21 = (UnityEngine_Component_o *)v20->m_Items[index];
            if ( v21 )
            {
              gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
              if ( svtdata )
              {
                BattleServantData__addParamObject(svtdata, gameObject, 0LL);
                return;
              }
            }
LABEL_24:
            sub_B170D4();
          }
        }
      }
    }
    goto LABEL_25;
  }
}


bool __fastcall BattlePerformanceEnemy__checkRaidUpdateHp(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantRaidParamComponent_o *raidParam; // x8

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_B170D4();
  return raidParam->fields.flgUpdate;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__deleteStatus(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v4; // x20
  __int64 v5; // x1
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  UnityEngine_Object_o *v7; // x21
  struct BattleServantHeadUpComponent_array *v8; // x8
  BattleServantHeadUpComponent_o *v9; // x0
  struct System_Int32_array *list_ID; // x8
  struct BattleServantHeadUpComponent_array *v11; // x8
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TrackingMoveCtCComponent_o *Component_srcLineSprite; // x0
  struct BattleServantParamComponent_array *svtParamList; // x8
  UnityEngine_Object_o *v16; // x21
  struct BattleServantParamComponent_array *v17; // x8
  BattleServantParamComponent_o *v18; // x0

  v4 = this;
  if ( (byte_40FC312 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___, *(_QWORD *)&index);
    this = (BattlePerformanceEnemy_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FC312 = 1;
  }
  svtHeadUpList = v4->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_31;
  if ( svtHeadUpList->max_length <= index )
  {
LABEL_32:
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
  }
  v7 = (UnityEngine_Object_o *)svtHeadUpList->m_Items[index];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattlePerformanceEnemy_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v4->fields.svtHeadUpList;
    if ( !v8 )
      goto LABEL_31;
    if ( v8->max_length <= index )
      goto LABEL_32;
    v9 = v8->m_Items[index];
    if ( !v9 )
      goto LABEL_31;
    BattleServantHeadUpComponent__setData(v9, 0LL, 0LL);
    list_ID = v4->fields.list_ID;
    if ( !list_ID )
      goto LABEL_31;
    if ( list_ID->max_length <= index )
      goto LABEL_32;
    list_ID->m_Items[index + 1] = -1;
    v11 = v4->fields.svtHeadUpList;
    if ( !v11 )
      goto LABEL_31;
    if ( v11->max_length <= index )
      goto LABEL_32;
    v12 = (UnityEngine_Component_o *)v11->m_Items[index];
    if ( !v12 )
      goto LABEL_31;
    gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    Component_srcLineSprite = (TrackingMoveCtCComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              gameObject,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_31;
    TrackingMoveCtCComponent__stopAct(Component_srcLineSprite, 0LL);
  }
  svtParamList = v4->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_31;
  if ( svtParamList->max_length <= index )
    goto LABEL_32;
  v16 = (UnityEngine_Object_o *)svtParamList->m_Items[index];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattlePerformanceEnemy_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = v4->fields.svtParamList;
    if ( !v17 )
      goto LABEL_31;
    if ( v17->max_length > index )
    {
      v18 = v17->m_Items[index];
      if ( v18 )
      {
        ((void (__fastcall *)(BattleServantParamComponent_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._6_setData.method)(
          v18,
          0LL,
          v18->klass->vtable._7_SetEnemyParamPosition.methodPtr);
        return;
      }
LABEL_31:
      sub_B170D4();
    }
    goto LABEL_32;
  }
}


void __fastcall BattlePerformanceEnemy__endSkill(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleServantHeadUpComponent_o *v7; // x0

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = svtHeadUpList->m_Items[v5];
    if ( v7 )
    {
      BattleServantHeadUpComponent__setTargetRoot(v7, 1, 0LL);
      svtHeadUpList = this->fields.svtHeadUpList;
      ++v5;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


int64_t __fastcall BattlePerformanceEnemy__getTurnSituationParam(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *raidParam; // x0

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_B170D4();
  return BattleServantRaidParamComponent__getTurnSituationParam(raidParam, 0LL);
}


void __fastcall BattlePerformanceEnemy__playAddition(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantParamComponent_array *svtParamList; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleServantParamComponent_o *v7; // x0

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = svtParamList->m_Items[v5];
    if ( v7 )
    {
      BattleServantParamComponent__playAddition(v7, 0LL);
      svtParamList = this->fields.svtParamList;
      ++v5;
      if ( svtParamList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__setOffTarget(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleServantHeadUpComponent_o *v7; // x0
  struct BattleServantParamComponent_array *svtParamList; // x8
  __int64 v9; // x20
  int v10; // w9
  BattleServantParamComponent_o *v11; // x0
  BattleServantParamComponent_o *raidParam; // x0
  BattleServantParamComponent_o *superbossParam; // x0

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_18;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
LABEL_19:
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = svtHeadUpList->m_Items[v5];
    if ( v7 )
    {
      BattleServantHeadUpComponent__setTargetMark(v7, -1, 0, 0LL);
      svtHeadUpList = this->fields.svtHeadUpList;
      ++v5;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_18;
  }
  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_18;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = svtParamList->max_length;
    if ( (int)v9 >= v10 )
      break;
    if ( (unsigned int)v9 >= v10 )
      goto LABEL_19;
    v11 = svtParamList->m_Items[v9];
    if ( v11 )
    {
      BattleServantParamComponent__setTargetMark(v11, -1, 0, 0LL);
      svtParamList = this->fields.svtParamList;
      ++v9;
      if ( svtParamList )
        continue;
    }
    goto LABEL_18;
  }
  raidParam = (BattleServantParamComponent_o *)this->fields.raidParam;
  if ( !raidParam
    || (BattleServantParamComponent__setTargetMark(raidParam, -1, 0, 0LL),
        (superbossParam = (BattleServantParamComponent_o *)this->fields.superbossParam) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  BattleServantParamComponent__setTargetMark(superbossParam, -1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__setParam(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct BattlePerformance_o *perf; // x8
  BattleData_o *data; // x0
  StageEntity_o *StageEntity; // x0
  const MethodInfo *v13; // x4
  struct BattleServantRaidParamComponent_o *raidParam; // x0
  struct BattleData_o *bdata; // x8
  BattleEntity_o *battle_ent; // x0
  struct BattleServantRaidParamComponent_o *v17; // x23
  bool isDefeatCount; // w0
  struct BattlePerformance_o *v19; // x8
  BattleData_o *v20; // x0
  __int64 v21; // x2
  EventRaidEntity_o *v22; // x8
  struct BattleServantRaidParamComponent_o *v23; // x9
  System_Int64_array *splitHp; // x23
  struct BattleServantSuperBossParamComponent_o *superbossParam; // x0
  const MethodInfo *v26; // x4
  struct BattlePerformance_o *v27; // x8
  BattleData_o *v28; // x0
  BattleServantSuperBossParamComponent_o *v29; // x23
  System_Int64_array *SuperBossSplitHp; // x0
  struct BattlePerformance_o *v31; // x8
  System_Int64_array *v32; // x24
  BattleData_o *v33; // x0
  int64_t SuperBossMaxHp; // x0
  struct BattleServantSuperBossParamComponent_o *v35; // x8
  UnityEngine_Object_o *v36; // x22
  struct BattleServantSuperBossParamComponent_o *v37; // x0
  struct BattleServantSuperBossParamComponent_o *v38; // x8
  BattleServantParamComponent_o *v39; // x0
  UnityEngine_Component_o *v40; // x0
  struct BattlePerformance_o *v41; // x8
  BattleData_o *v42; // x0
  BattleServantRaidParamComponent_o *v43; // x24
  int64_t RaidBossMaxHp; // x0
  const MethodInfo *v45; // x4
  struct BattleServantRaidParamComponent_o *v46; // x8
  UnityEngine_Object_o *v47; // x22
  struct BattleServantRaidParamComponent_o *v48; // x0
  struct BattleServantRaidParamComponent_o *v49; // x8
  BattleServantParamComponent_o *v50; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  EventRaidEntity_o *raidEnt; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC317 & 1) == 0 )
  {
    sub_B16FFC(&long___TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FC317 = 1;
  }
  raidEnt = 0LL;
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_54;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_54;
  StageEntity = BattleData__getStageEntity(data, 0LL);
  if ( !StageEntity )
    goto LABEL_54;
  if ( StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity, 0LL) )
  {
LABEL_7:
    BattlePerformanceEnemy__SetNormalEnemyStatusUI(this, index, svtdata, target, v13);
    return;
  }
  if ( !svtdata )
    goto LABEL_54;
  if ( svtdata->fields.isRaid )
  {
    raidParam = this->fields.raidParam;
    if ( !raidParam )
      goto LABEL_54;
    ((void (__fastcall *)(struct BattleServantRaidParamComponent_o *, BattleServantData_o *, Il2CppMethodPointer))raidParam->klass->vtable._6_setData.method)(
      raidParam,
      svtdata,
      raidParam->klass->vtable._7_SetEnemyParamPosition.methodPtr);
    bdata = this->fields.bdata;
    if ( !bdata )
      goto LABEL_54;
    battle_ent = bdata->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_54;
    v17 = this->fields.raidParam;
    isDefeatCount = BattleEntity__isDefeatCount(battle_ent, 0LL);
    if ( !v17 )
      goto LABEL_54;
    v17->fields.isDefeatCount = isDefeatCount;
    v19 = this->fields.perf;
    if ( !v19 )
      goto LABEL_54;
    v20 = v19->fields.data;
    if ( !v20 )
      goto LABEL_54;
    if ( BattleData__TryGetRaidEntity(v20, &raidEnt, svtdata->fields.raidId, 0LL) )
    {
      v22 = raidEnt;
      if ( !raidEnt )
        goto LABEL_54;
      v23 = this->fields.raidParam;
      if ( !v23 )
        goto LABEL_54;
      v23->fields.isJumbleRaid = raidEnt->fields.groupIndex > 0;
      splitHp = v22->fields.splitHp;
    }
    else
    {
      splitHp = (System_Int64_array *)sub_B17014(long___TypeInfo, 0LL, v21);
    }
    v41 = this->fields.perf;
    if ( !v41 )
      goto LABEL_54;
    v42 = v41->fields.data;
    if ( !v42 )
      goto LABEL_54;
    v43 = this->fields.raidParam;
    RaidBossMaxHp = BattleData__getRaidBossMaxHp(v42, svtdata->fields.raidId, 0LL);
    if ( !v43 )
      goto LABEL_54;
    BattleServantRaidParamComponent__setSplitHp(v43, splitHp, RaidBossMaxHp, 0LL);
    v46 = this->fields.raidParam;
    if ( !v46 )
      goto LABEL_54;
    v46->fields.index = index;
    BattlePerformanceEnemy__setTargetIcon(this, svtdata, target, index, v45);
    v47 = (UnityEngine_Object_o *)this->fields.raidParam;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
    {
      v48 = this->fields.raidParam;
      if ( v48 )
      {
        ((void (__fastcall *)(struct BattleServantRaidParamComponent_o *, BattleServantData_o *, Il2CppMethodPointer))v48->klass->vtable._6_setData.method)(
          v48,
          svtdata,
          v48->klass->vtable._7_SetEnemyParamPosition.methodPtr);
        v49 = this->fields.raidParam;
        if ( v49 )
        {
          v49->fields.index = index;
          v50 = (BattleServantParamComponent_o *)this->fields.raidParam;
          if ( v50 )
          {
            BattleServantParamComponent__setTouch(v50, 1, 0LL);
            v40 = (UnityEngine_Component_o *)this->fields.raidParam;
            if ( v40 )
            {
LABEL_52:
              gameObject = UnityEngine_Component__get_gameObject(v40, 0LL);
              BattleServantData__addParamObject(svtdata, gameObject, 0LL);
              return;
            }
          }
        }
      }
LABEL_54:
      sub_B170D4();
    }
  }
  else
  {
    if ( !BattleServantData__get_IsSuperBossUi(svtdata, 0LL) )
      goto LABEL_7;
    superbossParam = this->fields.superbossParam;
    if ( !superbossParam )
      goto LABEL_54;
    ((void (__fastcall *)(struct BattleServantSuperBossParamComponent_o *, BattleServantData_o *, Il2CppMethodPointer))superbossParam->klass->vtable._6_setData.method)(
      superbossParam,
      svtdata,
      superbossParam->klass->vtable._7_SetEnemyParamPosition.methodPtr);
    if ( svtdata->fields.isSuperBoss )
    {
      v27 = this->fields.perf;
      if ( !v27 )
        goto LABEL_54;
      v28 = v27->fields.data;
      if ( !v28 )
        goto LABEL_54;
      v29 = this->fields.superbossParam;
      SuperBossSplitHp = BattleData__getSuperBossSplitHp(v28, svtdata->fields.superBossId, 0LL);
      v31 = this->fields.perf;
      if ( !v31 )
        goto LABEL_54;
      v32 = SuperBossSplitHp;
      v33 = v31->fields.data;
      if ( !v33 )
        goto LABEL_54;
      SuperBossMaxHp = BattleData__getSuperBossMaxHp(v33, svtdata->fields.superBossId, 0LL);
      if ( !v29 )
        goto LABEL_54;
      BattleServantSuperBossParamComponent__setSplitHp(v29, v32, SuperBossMaxHp, 0LL);
    }
    v35 = this->fields.superbossParam;
    if ( !v35 )
      goto LABEL_54;
    v35->fields.index = index;
    BattlePerformanceEnemy__setTargetIcon(this, svtdata, target, index, v26);
    v36 = (UnityEngine_Object_o *)this->fields.superbossParam;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    {
      v37 = this->fields.superbossParam;
      if ( v37 )
      {
        ((void (__fastcall *)(struct BattleServantSuperBossParamComponent_o *, BattleServantData_o *, Il2CppMethodPointer))v37->klass->vtable._6_setData.method)(
          v37,
          svtdata,
          v37->klass->vtable._7_SetEnemyParamPosition.methodPtr);
        v38 = this->fields.superbossParam;
        if ( v38 )
        {
          v38->fields.index = index;
          v39 = (BattleServantParamComponent_o *)this->fields.superbossParam;
          if ( v39 )
          {
            BattleServantParamComponent__setTouch(v39, 1, 0LL);
            v40 = (UnityEngine_Component_o *)this->fields.superbossParam;
            if ( v40 )
              goto LABEL_52;
          }
        }
      }
      goto LABEL_54;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__setParamPosition(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattleData_o *data; // x0
  StageEntity_o *StageEntity; // x0
  struct BattlePerformance_o *v6; // x8
  BattleData_o *v7; // x0
  BattleServantData_array *EnemyServantList; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  BattleServantData_array *v12; // x20
  unsigned int v13; // w21
  BattleServantData_o *v14; // x0
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x1
  BaseEnemyParamPosData_o *EnemyParamPosData; // x0
  UnityEngine_Transform_o *v19; // x21
  BaseEnemyParamPosData_o *v20; // x20
  int v21; // s0
  UnityEngine_Transform_o *v24; // x21
  int v25; // s0
  struct BattleServantParamComponent_array *svtParamList; // x19
  int v29; // w8
  unsigned int v30; // w21
  BattleServantParamComponent_o *v31; // x0
  UnityEngine_Transform_o *v32; // x0
  UnityEngine_Transform_o *raidTr; // x0
  int v34; // s0
  int v35; // s1
  UnityEngine_Transform_o *superBossTr; // x0
  int v37; // s2
  UnityEngine_Transform_o *nomalTr; // x0
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_35;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_35;
  StageEntity = BattleData__getStageEntity(data, 0LL);
  if ( !StageEntity )
    goto LABEL_35;
  if ( !StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity, 0LL) )
  {
    v6 = this->fields.perf;
    if ( !v6 )
      goto LABEL_35;
    v7 = v6->fields.data;
    if ( !v7 )
      goto LABEL_35;
    EnemyServantList = BattleData__getEnemyServantList(v7, 0LL);
    if ( !EnemyServantList )
      goto LABEL_35;
    max_length = EnemyServantList->max_length;
    v12 = EnemyServantList;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          goto LABEL_36;
        v14 = v12->m_Items[v13];
        if ( !v14 )
          goto LABEL_35;
        if ( v14->fields.isRaid )
          break;
        EnemyServantList = (BattleServantData_array *)BattleServantData__get_IsSuperBossUi(v14, 0LL);
        if ( ((unsigned __int8)EnemyServantList & 1) != 0 )
        {
          superBossTr = this->fields.superBossTr;
          if ( superBossTr )
          {
            v42.fields.x = 0.0;
            v42.fields.y = 0.0;
            v42.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(superBossTr, v42, 0LL);
            raidTr = this->fields.raidTr;
            if ( raidTr )
            {
              v35 = 1119092736;
              v34 = 0;
LABEL_33:
              v37 = 0;
              UnityEngine_Transform__set_localPosition(raidTr, *(UnityEngine_Vector3_o *)&v34, 0LL);
              nomalTr = this->fields.nomalTr;
              if ( nomalTr )
              {
                v43.fields.y = this->fields.raidY;
                v43.fields.x = 0.0;
                v43.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition(nomalTr, v43, 0LL);
                return;
              }
            }
          }
LABEL_35:
          sub_B170D4();
        }
        max_length = v12->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_15;
      }
      v32 = this->fields.superBossTr;
      if ( v32 )
      {
        v41.fields.y = 90.0;
        v41.fields.x = 0.0;
        v41.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v32, v41, 0LL);
        raidTr = this->fields.raidTr;
        if ( raidTr )
        {
          v34 = 0;
          v35 = 0;
          goto LABEL_33;
        }
      }
      goto LABEL_35;
    }
  }
LABEL_15:
  v15 = this->fields.superBossTr;
  if ( !v15 )
    goto LABEL_35;
  v39.fields.x = 0.0;
  v39.fields.z = 0.0;
  v39.fields.y = 90.0;
  UnityEngine_Transform__set_localPosition(v15, v39, 0LL);
  v16 = this->fields.raidTr;
  if ( !v16 )
    goto LABEL_35;
  v40.fields.x = 0.0;
  v40.fields.z = 0.0;
  v40.fields.y = 90.0;
  UnityEngine_Transform__set_localPosition(v16, v40, 0LL);
  EnemyParamPosData = BattlePerformanceEnemy__MakeEnemyParamPosData(this, v17);
  if ( !EnemyParamPosData )
    goto LABEL_35;
  v19 = this->fields.nomalTr;
  v20 = EnemyParamPosData;
  ((void (__fastcall *)(BaseEnemyParamPosData_o *, Il2CppMethodPointer))EnemyParamPosData->klass->vtable._4_get_NormalTrLocalPos.method)(
    EnemyParamPosData,
    EnemyParamPosData->klass->vtable._5_get_NormalTrLocalScale.methodPtr);
  if ( !v19 )
    goto LABEL_35;
  UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v21, 0LL);
  v24 = this->fields.nomalTr;
  ((void (__fastcall *)(BaseEnemyParamPosData_o *, Il2CppMethodPointer))v20->klass->vtable._5_get_NormalTrLocalScale.method)(
    v20,
    v20->klass->vtable._6_GetSvtBuffLocalPos.methodPtr);
  if ( !v24 )
    goto LABEL_35;
  UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_35;
  v29 = svtParamList->max_length;
  if ( v29 >= 1 )
  {
    v30 = 0;
    while ( v30 < v29 )
    {
      v31 = svtParamList->m_Items[v30];
      if ( !v31 )
        goto LABEL_35;
      EnemyServantList = (BattleServantData_array *)((__int64 (__fastcall *)(BattleServantParamComponent_o *, BaseEnemyParamPosData_o *, Il2CppMethodPointer))v31->klass->vtable._7_SetEnemyParamPosition.method)(
                                                      v31,
                                                      v20,
                                                      v31->klass->vtable._8_changeHp.methodPtr);
      v29 = svtParamList->max_length;
      if ( (int)++v30 >= v29 )
        return;
    }
LABEL_36:
    sub_B17100(EnemyServantList, v9, v10);
    sub_B170A0();
  }
}


void __fastcall BattlePerformanceEnemy__setTarget(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattleLogic_o *logic; // x0
  struct BattlePerformance_o *v7; // x8
  BattleData_o *data; // x0
  _BOOL8 isTargetLock; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  bool v13; // w21
  __int64 v14; // x22
  int max_length; // w9
  BattleServantHeadUpComponent_o *v16; // x0
  struct BattleServantParamComponent_array *svtParamList; // x8
  __int64 v18; // x22
  int v19; // w9
  BattleServantParamComponent_o *v20; // x0
  BattleServantParamComponent_o *raidParam; // x0
  bool v22; // w21
  BattleServantParamComponent_o *superbossParam; // x0

  if ( svtData )
  {
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_24;
    logic = perf->fields.logic;
    if ( !logic )
      goto LABEL_24;
    BattleLogic__updateEnemyTargetLogic(logic, 0LL);
    v7 = this->fields.perf;
    if ( !v7 )
      goto LABEL_24;
    data = v7->fields.data;
    if ( !data )
      goto LABEL_24;
    isTargetLock = BattleData__isTargetLock(data, 0LL);
    svtHeadUpList = this->fields.svtHeadUpList;
    if ( !svtHeadUpList )
      goto LABEL_24;
    v13 = isTargetLock;
    v14 = 0LL;
    while ( 1 )
    {
      max_length = svtHeadUpList->max_length;
      if ( (int)v14 >= max_length )
        break;
      if ( (unsigned int)v14 >= max_length )
      {
LABEL_25:
        sub_B17100(isTargetLock, v10, v11);
        sub_B170A0();
      }
      v16 = svtHeadUpList->m_Items[v14];
      if ( v16 )
      {
        BattleServantHeadUpComponent__setTargetMark(v16, svtData->fields.uniqueId, v13, 0LL);
        svtHeadUpList = this->fields.svtHeadUpList;
        ++v14;
        if ( svtHeadUpList )
          continue;
      }
      goto LABEL_24;
    }
    svtParamList = this->fields.svtParamList;
    if ( !svtParamList )
      goto LABEL_24;
    v18 = 0LL;
    while ( 1 )
    {
      v19 = svtParamList->max_length;
      if ( (int)v18 >= v19 )
        break;
      if ( (unsigned int)v18 >= v19 )
        goto LABEL_25;
      v20 = svtParamList->m_Items[v18];
      if ( v20 )
      {
        BattleServantParamComponent__setTargetMark(v20, svtData->fields.uniqueId, v13, 0LL);
        svtParamList = this->fields.svtParamList;
        ++v18;
        if ( svtParamList )
          continue;
      }
      goto LABEL_24;
    }
    raidParam = (BattleServantParamComponent_o *)this->fields.raidParam;
    if ( !raidParam
      || (v22 = v13,
          BattleServantParamComponent__setTargetMark(raidParam, svtData->fields.uniqueId, v22, 0LL),
          (superbossParam = (BattleServantParamComponent_o *)this->fields.superbossParam) == 0LL) )
    {
LABEL_24:
      sub_B170D4();
    }
    BattleServantParamComponent__setTargetMark(superbossParam, svtData->fields.uniqueId, v22, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__setTargetIcon(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtdata,
        UnityEngine_GameObject_o *target,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v8; // x19
  __int64 v9; // x1
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattleServantHeadUpComponent_o *v11; // x0
  struct BattleServantHeadUpComponent_array *v12; // x8
  BattleServantHeadUpComponent_o *v13; // x8
  struct System_Int32_array *list_ID; // x8
  BattleActorControl_o *Component_srcLineSprite; // x22
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantHeadUpComponent_array *v17; // x8
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Component_o *v19; // x0
  BattlePerformance_o *perf; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x20
  int v23; // s0
  UnityEngine_Vector3_o v26; // 0:s3.4,4:s4.4,8:s5.4

  v8 = this;
  if ( (byte_40FC318 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, svtdata);
    this = (BattlePerformanceEnemy_o *)sub_B16FFC(&StringLiteral_18255/*"en_target01"*/, v9);
    byte_40FC318 = 1;
  }
  svtHeadUpList = v8->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_19;
  if ( svtHeadUpList->max_length <= index )
    goto LABEL_20;
  v11 = svtHeadUpList->m_Items[index];
  if ( !v11 )
    goto LABEL_19;
  BattleServantHeadUpComponent__setData(v11, svtdata, 0LL);
  v12 = v8->fields.svtHeadUpList;
  if ( !v12 )
    goto LABEL_19;
  if ( v12->max_length <= index )
    goto LABEL_20;
  v13 = v12->m_Items[index];
  if ( !v13 )
    goto LABEL_19;
  v13->fields.index = index;
  if ( !svtdata )
    goto LABEL_19;
  list_ID = v8->fields.list_ID;
  if ( !list_ID )
    goto LABEL_19;
  if ( list_ID->max_length <= index )
    goto LABEL_20;
  list_ID->m_Items[index + 1] = svtdata->fields.uniqueId;
  if ( !target
    || (Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            target,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___),
        transform = UnityEngine_GameObject__get_transform(target, 0LL),
        this = (BattlePerformanceEnemy_o *)TransformHelper__getNodeFromLvName(
                                             transform,
                                             (System_String_o *)StringLiteral_18255/*"en_target01"*/,
                                             -1,
                                             0,
                                             0LL),
        (v17 = v8->fields.svtHeadUpList) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  if ( v17->max_length <= index )
  {
LABEL_20:
    sub_B17100(this, svtdata, target);
    sub_B170A0();
  }
  v18 = (UnityEngine_Transform_o *)this;
  v19 = (UnityEngine_Component_o *)v17->m_Items[index];
  if ( !v19 )
    goto LABEL_19;
  perf = v8->fields.perf;
  gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  v22 = gameObject;
  *(UnityEngine_Vector3_o *)&v23 = BattleActorControl__getHeadUpY(Component_srcLineSprite, 0LL);
  if ( !perf )
    goto LABEL_19;
  v26.fields.x = 0.0;
  v26.fields.y = 0.0;
  v26.fields.z = 0.0;
  BattlePerformance__SetPopUpNodeObjectPosition(
    perf,
    Component_srcLineSprite,
    v22,
    *(UnityEngine_Vector3_o *)&v23,
    v18,
    v26,
    0LL);
}


void __fastcall BattlePerformanceEnemy__setWinView(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9
  BattleServantParamComponent_o *v7; // x0
  struct BattleServantRaidParamComponent_o *raidParam; // x0
  struct BattleServantSuperBossParamComponent_o *superbossParam; // x0

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_7;
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = svtParamList->m_Items[v5];
    if ( v7 )
    {
      this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattleServantParamComponent_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._6_setData.method)(
                                           v7,
                                           0LL,
                                           v7->klass->vtable._7_SetEnemyParamPosition.methodPtr);
      svtParamList = v4->fields.svtParamList;
      ++v5;
      if ( svtParamList )
        continue;
    }
    goto LABEL_7;
  }
  raidParam = v4->fields.raidParam;
  if ( !raidParam
    || (((void (__fastcall *)(struct BattleServantRaidParamComponent_o *, _QWORD, Il2CppMethodPointer))raidParam->klass->vtable._6_setData.method)(
          raidParam,
          0LL,
          raidParam->klass->vtable._7_SetEnemyParamPosition.methodPtr),
        (superbossParam = v4->fields.superbossParam) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleServantSuperBossParamComponent_o *, _QWORD, Il2CppMethodPointer))superbossParam->klass->vtable._6_setData.method)(
    superbossParam,
    0LL,
    superbossParam->klass->vtable._7_SetEnemyParamPosition.methodPtr);
}


void __fastcall BattlePerformanceEnemy__showSideEffect(
        BattlePerformanceEnemy_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v4; // x20
  __int64 v6; // x21
  int max_length; // w9
  unsigned int v8; // w22
  BattleServantParamComponent_o *v9; // x0
  struct BattleServantParamComponent_array *v10; // x8
  BattleServantParamComponent_o *v11; // x0
  BattleServantParamComponent_o *raidParam; // x0
  BattleServantParamComponent_o *v13; // x0
  BattleServantParamComponent_o *superbossParam; // x0
  BattleServantParamComponent_o *v15; // x0

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_13;
  v4 = this;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_24;
    if ( !buffData )
      goto LABEL_13;
    v9 = (BattleServantParamComponent_o *)*((_QWORD *)&svtParamList->obj.klass + v6);
    if ( !v9 )
      goto LABEL_13;
    this = (BattlePerformanceEnemy_o *)BattleServantParamComponent__checkId(v9, buffData->fields.targetId, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = v4->fields.svtParamList;
      if ( !v10 )
        goto LABEL_13;
      if ( v8 >= v10->max_length )
      {
LABEL_24:
        sub_B17100(this, buffData, method);
        sub_B170A0();
      }
      v11 = (BattleServantParamComponent_o *)*((_QWORD *)&v10->obj.klass + v6);
      if ( !v11 )
        goto LABEL_13;
      BattleServantParamComponent__showSideEffect(v11, buffData, 0LL);
    }
    svtParamList = v4->fields.svtParamList;
    ++v6;
    if ( !svtParamList )
      goto LABEL_13;
  }
  if ( !buffData )
    goto LABEL_13;
  raidParam = (BattleServantParamComponent_o *)v4->fields.raidParam;
  if ( !raidParam )
    goto LABEL_13;
  if ( BattleServantParamComponent__checkId(raidParam, buffData->fields.targetId, 0LL) )
  {
    v13 = (BattleServantParamComponent_o *)v4->fields.raidParam;
    if ( !v13 )
      goto LABEL_13;
    BattleServantParamComponent__showSideEffect(v13, buffData, 0LL);
  }
  superbossParam = (BattleServantParamComponent_o *)v4->fields.superbossParam;
  if ( !superbossParam )
LABEL_13:
    sub_B170D4();
  if ( BattleServantParamComponent__checkId(superbossParam, buffData->fields.targetId, 0LL) )
  {
    v15 = (BattleServantParamComponent_o *)v4->fields.superbossParam;
    if ( v15 )
    {
      BattleServantParamComponent__showSideEffect(v15, buffData, 0LL);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall BattlePerformanceEnemy__startAction(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleServantHeadUpComponent_o *v7; // x0

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = svtHeadUpList->m_Items[v5];
    if ( v7 )
    {
      BattleServantHeadUpComponent__setModeAction(v7, 0LL);
      svtHeadUpList = this->fields.svtHeadUpList;
      ++v5;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__startCommand(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleServantHeadUpComponent_o *v7; // x0

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = svtHeadUpList->m_Items[v5];
    if ( v7 )
    {
      BattleServantHeadUpComponent__setModeCommand(v7, 0LL);
      svtHeadUpList = this->fields.svtHeadUpList;
      ++v5;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__startSkill(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleServantHeadUpComponent_o *v7; // x0

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = svtHeadUpList->m_Items[v5];
    if ( v7 )
    {
      BattleServantHeadUpComponent__setTargetRoot(v7, 0, 0LL);
      svtHeadUpList = this->fields.svtHeadUpList;
      ++v5;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__startTac(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleServantHeadUpComponent_o *v7; // x0

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = svtHeadUpList->m_Items[v5];
    if ( v7 )
    {
      BattleServantHeadUpComponent__setModeTac(v7, 0LL);
      svtHeadUpList = this->fields.svtHeadUpList;
      ++v5;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__startWave(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleServantHeadUpComponent_o *v7; // x0

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = svtHeadUpList->m_Items[v5];
    if ( v7 )
    {
      BattleServantHeadUpComponent__setModeWaveStart(v7, 0LL);
      svtHeadUpList = this->fields.svtHeadUpList;
      ++v5;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__updateBuff(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceEnemy__updateRaidHp(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *raidParam; // x0

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_B170D4();
  BattleServantRaidParamComponent__updateRaidHp(raidParam, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__updateRaidInfos(
        BattlePerformanceEnemy_o *this,
        BattleRaidInfo_array *infos,
        bool fixUpdate,
        const MethodInfo *method)
{
  struct BattleServantRaidParamComponent_o *raidParam; // x8
  struct BattleServantData_o *data; // x22
  BattleRaidInfo_array *v6; // x20
  signed int max_length; // w8
  unsigned int v9; // w23
  bool v10; // w21
  BattleServantRaidParamComponent_o *v11; // x0

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    goto LABEL_13;
  data = raidParam->fields.data;
  if ( data )
  {
    v6 = infos;
    if ( !infos )
      goto LABEL_13;
    max_length = infos->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      v10 = fixUpdate;
      while ( 1 )
      {
        if ( v9 >= max_length )
        {
          sub_B17100(this, infos, fixUpdate);
          sub_B170A0();
        }
        infos = (BattleRaidInfo_array *)v6->m_Items[v9];
        if ( !infos )
          break;
        if ( HIDWORD(infos->bounds) == data->fields.uniqueId )
        {
          v11 = this->fields.raidParam;
          if ( !v11 )
            break;
          BattleServantRaidParamComponent__updateRaidInfo(v11, (BattleRaidInfo_o *)infos, v10, 0LL);
        }
        max_length = v6->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
}


void __fastcall BattlePerformanceEnemy__updateStateString(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattleServantSuperBossParamComponent_o *superbossParam; // x0

  superbossParam = this->fields.superbossParam;
  if ( !superbossParam )
    sub_B170D4();
  BattleServantSuperBossParamComponent__updateStateString(superbossParam, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__updateSuperBossInfos(
        BattlePerformanceEnemy_o *this,
        BattleSuperBossInfo_array *infos,
        bool fixUpdate,
        const MethodInfo *method)
{
  struct BattleServantSuperBossParamComponent_o *superbossParam; // x8
  struct BattleServantData_o *data; // x22
  BattleSuperBossInfo_array *v6; // x20
  signed int max_length; // w8
  unsigned int v9; // w23
  bool v10; // w21
  BattleServantSuperBossParamComponent_o *v11; // x0

  superbossParam = this->fields.superbossParam;
  if ( !superbossParam )
    goto LABEL_13;
  data = superbossParam->fields.data;
  if ( data )
  {
    v6 = infos;
    if ( !infos )
      goto LABEL_13;
    max_length = infos->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      v10 = fixUpdate;
      while ( 1 )
      {
        if ( v9 >= max_length )
        {
          sub_B17100(this, infos, fixUpdate);
          sub_B170A0();
        }
        infos = (BattleSuperBossInfo_array *)v6->m_Items[v9];
        if ( !infos )
          break;
        if ( HIDWORD(infos->bounds) == data->fields.uniqueId )
        {
          v11 = this->fields.superbossParam;
          if ( !v11 )
            break;
          BattleServantSuperBossParamComponent__updateSuperBossInfo(v11, (BattleSuperBossInfo_o *)infos, v10, 0LL);
        }
        max_length = v6->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__updateView(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9
  BattleServantParamComponent_o *v7; // x0
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v9; // x20
  int v10; // w9
  BattleServantHeadUpComponent_o *v11; // x0
  BattleServantParamComponent_o *raidParam; // x0
  BattleServantParamComponent_o *superbossParam; // x0
  BattleData_o *bdata; // x0
  struct BattleData_o *v15; // x8
  struct BattleServantParamComponent_array *v16; // x8
  __int64 v17; // x21
  int v18; // w9
  unsigned int v19; // w22
  UnityEngine_Component_o *v20; // x0
  struct BattleServantParamComponent_array *v21; // x8
  UnityEngine_Transform_o *v22; // x20
  UnityEngine_Component_o *v23; // x0
  UnityEngine_Transform_o *transform; // x0
  int v25; // s1
  struct BattleServantParamComponent_array *v26; // x8
  UnityEngine_Component_o *v27; // x0
  int v28; // s8
  UnityEngine_Transform_o *v29; // x0
  int v30; // s2
  float v31; // s0
  int v32; // s1

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_36;
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
LABEL_38:
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = svtParamList->m_Items[v5];
    if ( v7 )
    {
      BattleServantParamComponent__updateView(v7, 0LL);
      svtParamList = v4->fields.svtParamList;
      ++v5;
      if ( svtParamList )
        continue;
    }
    goto LABEL_36;
  }
  svtHeadUpList = v4->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_36;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = svtHeadUpList->max_length;
    if ( (int)v9 >= v10 )
      break;
    if ( (unsigned int)v9 >= v10 )
      goto LABEL_38;
    v11 = svtHeadUpList->m_Items[v9];
    if ( v11 )
    {
      BattleServantHeadUpComponent__updateView(v11, 0LL);
      svtHeadUpList = v4->fields.svtHeadUpList;
      ++v9;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_36;
  }
  raidParam = (BattleServantParamComponent_o *)v4->fields.raidParam;
  if ( !raidParam )
    goto LABEL_36;
  BattleServantParamComponent__updateView(raidParam, 0LL);
  superbossParam = (BattleServantParamComponent_o *)v4->fields.superbossParam;
  if ( !superbossParam )
    goto LABEL_36;
  BattleServantParamComponent__updateView(superbossParam, 0LL);
  bdata = v4->fields.bdata;
  if ( !bdata )
    goto LABEL_36;
  this = (BattlePerformanceEnemy_o *)BattleData__IsWarBoard(bdata, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v15 = v4->fields.bdata;
  if ( !v15 )
    goto LABEL_36;
  if ( !v15->fields.enemyMasterInfo )
    return;
  v16 = v4->fields.svtParamList;
  if ( !v16 )
LABEL_36:
    sub_B170D4();
  v17 = 4LL;
  while ( 1 )
  {
    v18 = v16->max_length;
    v19 = v17 - 4;
    if ( (int)v17 - 4 >= v18 )
      break;
    if ( v19 >= v18 )
      goto LABEL_38;
    v20 = (UnityEngine_Component_o *)*((_QWORD *)&v16->obj.klass + v17);
    if ( v20 )
    {
      this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_transform(v20, 0LL);
      v21 = v4->fields.svtParamList;
      if ( v21 )
      {
        if ( v19 >= v21->max_length )
          goto LABEL_38;
        v22 = (UnityEngine_Transform_o *)this;
        v23 = (UnityEngine_Component_o *)*((_QWORD *)&v21->obj.klass + v17);
        if ( v23 )
        {
          transform = UnityEngine_Component__get_transform(v23, 0LL);
          if ( transform )
          {
            *(UnityEngine_Vector3_o *)(&v25 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
            v26 = v4->fields.svtParamList;
            if ( v26 )
            {
              if ( v19 >= v26->max_length )
                goto LABEL_38;
              v27 = (UnityEngine_Component_o *)*((_QWORD *)&v26->obj.klass + v17);
              if ( v27 )
              {
                v28 = v25;
                v29 = UnityEngine_Component__get_transform(v27, 0LL);
                if ( v29 )
                {
                  *(UnityEngine_Vector3_o *)(&v30 - 2) = UnityEngine_Transform__get_localPosition(v29, 0LL);
                  if ( v22 )
                  {
                    v31 = (float)((float)(int)v19 * -200.0) + 178.0;
                    v32 = v28;
                    UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)(&v30 - 2), 0LL);
                    v16 = v4->fields.svtParamList;
                    ++v17;
                    if ( v16 )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_36;
  }
}


void __fastcall BattlePerformanceEnemy___c__DisplayClass40_0___ctor(
        BattlePerformanceEnemy___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceEnemy___c__DisplayClass40_0___GetSvtParamComponent_b__0(
        BattlePerformanceEnemy___c__DisplayClass40_0_o *this,
        BattleServantParamComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return BattleServantParamComponent__checkId(x, this->fields.uniqueId, 0LL);
}