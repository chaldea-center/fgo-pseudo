void BattleAdjustPopupPosInScreenComponent___ctor(
        BattleAdjustPopupPosInScreenComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct BattleAdjustPopupPosInScreenComponent_AdjustPosData_array **v14; // x8
  struct BattleAdjustPopupPosInScreenComponent_AdjustPosData_array *v15; // x1

  if ( (byte_593BCCE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    byte_593BCCE = 1;
  }
  v10 = Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___;
  v11 = *((_QWORD *)Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___ + 7);
  if ( !v11 )
  {
    sub_2237B54(Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_2237AF8(v8);
  if ( !*(_DWORD *)(v12 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v12, method);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_2237AF8(v8);
  v14 = *(struct BattleAdjustPopupPosInScreenComponent_AdjustPosData_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.AdjustPosDataArray = *v14;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.AdjustPosDataArray,
    (int32_t)v15,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t BattleAdjustPopupPosInScreenComponent__ConvertPhaseToApplyScene(
        BattleAdjustPopupPosInScreenComponent_o *this,
        ChangeBattlePhaseNotify_o *phaseNotify,
        const MethodInfo *method)
{
  if ( !phaseNotify )
    sub_21FFECC(this, 0);
  if ( phaseNotify->fields._DetailPhase_k__BackingField == 4 )
    return 2;
  else
    return 1;
}


UnityEngine_Vector3_o BattleAdjustPopupPosInScreenComponent__GetAdjustedWorldPos(
        BattleAdjustPopupPosInScreenComponent_o *this,
        AdjustPopupPosInScreenArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Camera_o *Camera_k__BackingField; // x0
  const MethodInfo *v7; // x1
  float x; // s9
  float y; // s10
  float z; // s8
  System_Func_object__bool__o *v11; // x23
  System_Collections_Generic_IEnumerable_TSource__o *AdjustPosDataArray; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_Camera_c *klass; // x8
  UnityEngine_Camera_o *v20; // x20
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 i; // x20
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *v36; // x0
  const MethodInfo *v37; // x1
  int32_t AdjustDirection; // w8
  float v39; // s0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  float v44; // s2
  float v45; // s0
  float v46; // s1
  __int64 v47; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector3_o ViewPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593BCCD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    sub_21FFC50(&System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0__GetAdjustedWorldPos_b__0__);
    sub_21FFC50(&BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0_TypeInfo);
    byte_593BCCD = 1;
  }
  v5 = sub_21FFEBC(BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !arg )
    goto LABEL_50;
  ViewPos = AdjustPopupPosInScreenArgument__get_ViewPos(arg, v7);
  if ( !v5 )
    goto LABEL_50;
  x = ViewPos.fields.x;
  y = ViewPos.fields.y;
  z = ViewPos.fields.z;
  v11 = *(System_Func_object__bool__o **)(v5 + 32);
  *(UnityEngine_Vector3_o *)(v5 + 16) = ViewPos;
  AdjustPosDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.AdjustPosDataArray;
  if ( !v11 )
  {
    v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v11,
      (Il2CppObject *)v5,
      Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0__GetAdjustedWorldPos_b__0__,
      0);
    *(_QWORD *)(v5 + 32) = v11;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v11, v13, v14, v15, v16, v17, v18);
  }
  Camera_k__BackingField = (UnityEngine_Camera_o *)System_Linq_Enumerable__Where_object_(
                                                     AdjustPosDataArray,
                                                     (System_Func_TSource__bool__o *)v11,
                                                     (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
  if ( !Camera_k__BackingField )
    goto LABEL_50;
  klass = Camera_k__BackingField->klass;
  v20 = Camera_k__BackingField;
  v21 = *(unsigned __int16 *)&Camera_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&Camera_k__BackingField->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__c **)p_offset
            - 1) != System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_12;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_12:
    v23 = sub_2237E2C(
            Camera_k__BackingField,
            System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo,
            0);
  }
  v24 = (*(__int64 (__fastcall **)(UnityEngine_Camera_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  v47 = v24;
  if ( !v24 )
    sub_21FFECC(v24, v25);
  for ( i = v24; ; i = v47 )
  {
    v27 = *(_QWORD *)i;
    v28 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_20;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_20:
      v30 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(i, *(_QWORD *)(v30 + 8));
    if ( (v31 & 1) == 0 )
      break;
    if ( !v47 )
      sub_21FFECC(v31, v7);
    v32 = *(_QWORD *)v47;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__c **)v34 - 1) != System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_28;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_28:
      v35 = sub_2237E2C(
              v47,
              System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo,
              0);
    }
    v36 = (BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(
                                                                     v47,
                                                                     *(_QWORD *)(v35 + 8));
    if ( !v36 )
      sub_21FFECC(0, v37);
    AdjustDirection = v36->fields.AdjustDirection;
    if ( AdjustDirection )
    {
      if ( AdjustDirection != 1 )
        continue;
      v39 = 0.0;
    }
    else
    {
      v39 = 1.0;
    }
    y = BattleAdjustPopupPosInScreenComponent_AdjustPosData__GetThresholdY(v36, v39, v37);
  }
  if ( v47 )
  {
    v40 = *(_QWORD *)v47;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_43;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_43:
      v43 = sub_2237E2C(v47, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v43)(v47, *(_QWORD *)(v43 + 8));
  }
  Camera_k__BackingField = arg->fields._Camera_k__BackingField;
  if ( !Camera_k__BackingField )
LABEL_50:
    sub_21FFECC(Camera_k__BackingField, v7);
  v49.fields.x = x;
  v49.fields.y = y;
  v49.fields.z = z;
  v50 = UnityEngine_Camera__ViewportToWorldPoint_82984916(Camera_k__BackingField, v49, 0);
  v44 = v50.fields.z + arg->fields._AdjustAfterOffset_k__BackingField.fields.z;
  v45 = v50.fields.x + arg->fields._AdjustAfterOffset_k__BackingField.fields.x;
  v46 = v50.fields.y + arg->fields._AdjustAfterOffset_k__BackingField.fields.y;
  result.fields.z = v44;
  result.fields.y = v46;
  result.fields.x = v45;
  return result;
}


bool BattleAdjustPopupPosInScreenComponent__IsMatchCond(
        BattleAdjustPopupPosInScreenComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t ApplyScene; // w8
  struct ChangeBattlePhaseNotify_o *changePhaseNotify; // x9
  int v5; // w9

  ApplyScene = this->fields.ApplyScene;
  if ( !ApplyScene )
    return 1;
  if ( !data || (changePhaseNotify = data->fields.changePhaseNotify) == 0 )
    sub_21FFECC(this, data);
  if ( changePhaseNotify->fields._DetailPhase_k__BackingField == 4 )
    v5 = 2;
  else
    v5 = 1;
  return v5 == ApplyScene;
}


bool BattleAdjustPopupPosInScreenComponent__IsOffScreen(
        BattleAdjustPopupPosInScreenComponent_o *this,
        UnityEngine_Vector3_o viewPos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_Object_array *AdjustPosDataArray; // x19
  System_Func_object__bool__o *v11; // x21

  z = viewPos.fields.z;
  y = viewPos.fields.y;
  x = viewPos.fields.x;
  if ( (byte_593BCCC & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    sub_21FFC50(&System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
    sub_21FFC50(&Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0__IsOffScreen_b__0__);
    sub_21FFC50(&BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0_TypeInfo);
    byte_593BCCC = 1;
  }
  v7 = sub_21FFEBC(BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(float *)(v7 + 16) = x;
  *(float *)(v7 + 20) = y;
  *(float *)(v7 + 24) = z;
  AdjustPosDataArray = (System_Object_array *)this->fields.AdjustPosDataArray;
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0__IsOffScreen_b__0__,
    0);
  return BasicHelper__Any_object__58575580(
           AdjustPosDataArray,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_37DCADC *)Method_BasicHelper_Any_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
}


void BattleAdjustPopupPosInScreenComponent_AdjustPosData___ctor(
        BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float BattleAdjustPopupPosInScreenComponent_AdjustPosData__GetThresholdY(
        BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *this,
        float baseY,
        const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0
  int32_t ScreenOffset; // w19

  if ( (byte_593BCCF & 1) == 0 )
  {
    sub_21FFC50(&ManagerConfig_TypeInfo);
    byte_593BCCF = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  ScreenOffset = this->fields.ScreenOffset;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v5 = ManagerConfig_TypeInfo;
  }
  return (float)((float)ScreenOffset / (float)v5->static_fields->HEIGHT) + baseY;
}


bool BattleAdjustPopupPosInScreenComponent_AdjustPosData__IsOffScreen(
        BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *this,
        UnityEngine_Vector3_o viewPos,
        const MethodInfo *method)
{
  float y; // s8
  int32_t AdjustDirection; // w8
  float v5; // s1
  float ThresholdY; // s0

  y = viewPos.fields.y;
  AdjustDirection = this->fields.AdjustDirection;
  if ( AdjustDirection == 1 )
  {
    ThresholdY = BattleAdjustPopupPosInScreenComponent_AdjustPosData__GetThresholdY(this, 0.0, method);
    return y < ThresholdY;
  }
  if ( !AdjustDirection )
  {
    v5 = BattleAdjustPopupPosInScreenComponent_AdjustPosData__GetThresholdY(this, 1.0, method);
    ThresholdY = y;
    y = v5;
    return y < ThresholdY;
  }
  return 0;
}


void BattleAdjustPopupPosInScreenComponent_AdjustPosData__RoundingOverPos(
        BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *this,
        UnityEngine_Vector3_o *viewPos,
        const MethodInfo *method)
{
  int32_t AdjustDirection; // w8
  float v4; // s0

  AdjustDirection = this->fields.AdjustDirection;
  if ( AdjustDirection )
  {
    if ( AdjustDirection != 1 )
      return;
    v4 = 0.0;
  }
  else
  {
    v4 = 1.0;
  }
  viewPos->fields.y = BattleAdjustPopupPosInScreenComponent_AdjustPosData__GetThresholdY(
                        this,
                        v4,
                        (const MethodInfo *)viewPos);
}


void BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0___ctor(
        BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0___IsOffScreen_b__0(
        BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0_o *this,
        BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleAdjustPopupPosInScreenComponent_AdjustPosData__IsOffScreen(
           x,
           this->fields.viewPos,
           (const MethodInfo *)x);
}


void BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0___ctor(
        BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0___GetAdjustedWorldPos_b__0(
        BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0_o *this,
        BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleAdjustPopupPosInScreenComponent_AdjustPosData__IsOffScreen(
           x,
           this->fields.originalViewPos,
           (const MethodInfo *)x);
}