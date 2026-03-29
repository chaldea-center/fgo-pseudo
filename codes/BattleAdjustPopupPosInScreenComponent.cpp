void BattleAdjustPopupPosInScreenComponent___ctor(
        BattleAdjustPopupPosInScreenComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct BattleAdjustPopupPosInScreenComponent_AdjustPosData_array **v14; // x8
  struct BattleAdjustPopupPosInScreenComponent_AdjustPosData_array *v15; // x1

  if ( (byte_4D33EF8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    byte_4D33EF8 = 1;
  }
  v10 = Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___;
  v11 = *((_QWORD *)Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___ + 7);
  if ( !v11 )
  {
    sub_1C69BC4(Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C69B68(inited);
  v14 = *(struct BattleAdjustPopupPosInScreenComponent_AdjustPosData_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.AdjustPosDataArray = *v14;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.AdjustPosDataArray, (int32_t)v15, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t BattleAdjustPopupPosInScreenComponent__ConvertPhaseToApplyScene(
        BattleAdjustPopupPosInScreenComponent_o *this,
        ChangeBattlePhaseNotify_o *phaseNotify,
        const MethodInfo *method)
{
  if ( !phaseNotify )
    sub_1C93D2C(this, 0);
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
  __int64 v8; // x9
  System_Collections_Generic_IEnumerable_TSource__o *AdjustPosDataArray; // x20
  System_Func_object__bool__o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_Camera_c *klass; // x8
  UnityEngine_Camera_o *v18; // x20
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  UnityEngine_Vector3_o position; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o ViewPos; // 0:kr00_12.12
  UnityEngine_Vector3_o v44; // 0:kr14_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D33EF7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    sub_1C93AD4(&System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0__GetAdjustedWorldPos_b__0__);
    sub_1C93AD4(&BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0_TypeInfo);
    byte_4D33EF7 = 1;
  }
  v5 = sub_1C93D20(BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !arg )
    goto LABEL_39;
  ViewPos = AdjustPopupPosInScreenArgument__get_ViewPos(arg, v7);
  if ( !v5 )
    goto LABEL_39;
  *(UnityEngine_Vector3_o *)(v5 + 16) = ViewPos;
  v8 = *(_QWORD *)(v5 + 16);
  position.fields.z = *(float *)(v5 + 24);
  *(_QWORD *)&position.fields.x = v8;
  AdjustPosDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.AdjustPosDataArray;
  v10 = *(System_Func_object__bool__o **)(v5 + 32);
  if ( !v10 )
  {
    v10 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      (Il2CppObject *)v5,
      Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0__GetAdjustedWorldPos_b__0__,
      0);
    *(_QWORD *)(v5 + 32) = v10;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v10, v11, v12, v13, v14, v15, v16);
  }
  Camera_k__BackingField = (UnityEngine_Camera_o *)System_Linq_Enumerable__Where_object_(
                                                     AdjustPosDataArray,
                                                     (System_Func_TSource__bool__o *)v10,
                                                     (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
  if ( !Camera_k__BackingField )
    goto LABEL_39;
  klass = Camera_k__BackingField->klass;
  v18 = Camera_k__BackingField;
  v19 = *(unsigned __int16 *)&Camera_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&Camera_k__BackingField->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__c **)p_offset
            - 1) != System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_12;
    }
    v21 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_12:
    v21 = sub_1C69E5C(
            Camera_k__BackingField,
            System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo,
            0);
  }
  v23 = (*(__int64 (__fastcall **)(UnityEngine_Camera_o *, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
  if ( !v23 )
    sub_1C93D2C(0, v22);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_19;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_19:
      v27 = sub_1C69E5C(v23, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__c **)v30 - 1) != System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_26;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_26:
      v31 = sub_1C69E5C(
              v23,
              System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo,
              0);
    }
    v32 = (BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(
                                                                     v23,
                                                                     *(_QWORD *)(v31 + 8));
    if ( !v32 )
      sub_1C93D2C(0, v33);
    BattleAdjustPopupPosInScreenComponent_AdjustPosData__RoundingOverPos(v32, &position, v34);
  }
  v35 = *(_QWORD *)v23;
  v36 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_34;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_34:
    v38 = sub_1C69E5C(v23, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v23, *(_QWORD *)(v38 + 8));
  Camera_k__BackingField = arg->fields._Camera_k__BackingField;
  if ( !Camera_k__BackingField )
LABEL_39:
    sub_1C93D2C(Camera_k__BackingField, v7);
  v44 = UnityEngine_Camera__ViewportToWorldPoint_71924496(Camera_k__BackingField, position, 0);
  result.fields.x = v44.fields.x + arg->fields._AdjustAfterOffset_k__BackingField.fields.x;
  result.fields.y = v44.fields.y + arg->fields._AdjustAfterOffset_k__BackingField.fields.y;
  result.fields.z = v44.fields.z + arg->fields._AdjustAfterOffset_k__BackingField.fields.z;
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
    sub_1C93D2C(this, data);
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
  if ( (byte_4D33EF6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    sub_1C93AD4(&System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
    sub_1C93AD4(&Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0__IsOffScreen_b__0__);
    sub_1C93AD4(&BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0_TypeInfo);
    byte_4D33EF6 = 1;
  }
  v7 = sub_1C93D20(BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(float *)(v7 + 16) = x;
  *(float *)(v7 + 20) = y;
  *(float *)(v7 + 24) = z;
  AdjustPosDataArray = (System_Object_array *)this->fields.AdjustPosDataArray;
  v11 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0__IsOffScreen_b__0__,
    0);
  return BasicHelper__Any_object__51960868(
           AdjustPosDataArray,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_318DC24 *)Method_BasicHelper_Any_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
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

  if ( (byte_4D33EF9 & 1) == 0 )
  {
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    byte_4D33EF9 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  ScreenOffset = this->fields.ScreenOffset;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  return (float)((float)ScreenOffset / (float)v5->static_fields->HEIGHT) + baseY;
}


bool BattleAdjustPopupPosInScreenComponent_AdjustPosData__IsOffScreen(
        BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *this,
        UnityEngine_Vector3_o viewPos,
        const MethodInfo *method)
{
  int32_t AdjustDirection; // w8
  float y; // s8
  float v5; // s1
  float ThresholdY; // s0

  AdjustDirection = this->fields.AdjustDirection;
  y = viewPos.fields.y;
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
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, 0);
  return BattleAdjustPopupPosInScreenComponent_AdjustPosData__IsOffScreen(
           x,
           this->fields.originalViewPos,
           (const MethodInfo *)x);
}