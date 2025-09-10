void BattleAdjustPopupPosInScreenComponent___ctor(
        BattleAdjustPopupPosInScreenComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  struct BattleAdjustPopupPosInScreenComponent_AdjustPosData_array **v10; // x8
  struct BattleAdjustPopupPosInScreenComponent_AdjustPosData_array *v11; // x1

  if ( (byte_4C2A69B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    byte_4C2A69B = 1;
  }
  v6 = Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___;
  v7 = *((_QWORD *)Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___ + 7);
  if ( !v7 )
  {
    sub_1C7DC00(Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C7DBA4(inited);
  v10 = *(struct BattleAdjustPopupPosInScreenComponent_AdjustPosData_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.AdjustPosDataArray = *v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.AdjustPosDataArray, (int32_t)v11, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t BattleAdjustPopupPosInScreenComponent__ConvertPhaseToApplyScene(
        BattleAdjustPopupPosInScreenComponent_o *this,
        ChangeBattlePhaseNotify_o *phaseNotify,
        const MethodInfo *method)
{
  if ( !phaseNotify )
    sub_1C2D6EC(this, 0);
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
  const MethodInfo *v12; // x3
  UnityEngine_Camera_c *klass; // x8
  UnityEngine_Camera_o *v14; // x20
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x20
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  float v35; // s0
  float v36; // s1
  float v37; // s2
  UnityEngine_Vector3_o position; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o ViewPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2A69A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    sub_1C2D490(&System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0__GetAdjustedWorldPos_b__0__);
    sub_1C2D490(&BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0_TypeInfo);
    byte_4C2A69A = 1;
  }
  v5 = sub_1C2D6DC(BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0_TypeInfo);
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
    v10 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      (Il2CppObject *)v5,
      Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0__GetAdjustedWorldPos_b__0__,
      0);
    *(_QWORD *)(v5 + 32) = v10;
    sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v10, v11, v12);
  }
  Camera_k__BackingField = (UnityEngine_Camera_o *)System_Linq_Enumerable__Where_object_(
                                                     AdjustPosDataArray,
                                                     (System_Func_TSource__bool__o *)v10,
                                                     (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
  if ( !Camera_k__BackingField )
    goto LABEL_39;
  klass = Camera_k__BackingField->klass;
  v14 = Camera_k__BackingField;
  v15 = *(unsigned __int16 *)&Camera_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&Camera_k__BackingField->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__c **)p_offset
            - 1) != System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_12;
    }
    v17 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_12:
    v17 = sub_1C7DCA8(
            Camera_k__BackingField,
            System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo,
            0);
  }
  v19 = (*(__int64 (__fastcall **)(UnityEngine_Camera_o *, _QWORD))v17)(v14, *(_QWORD *)(v17 + 8));
  if ( !v19 )
    sub_1C2D6EC(0, v18);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_19;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_19:
      v23 = sub_1C7DCA8(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__c **)v26 - 1) != System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_26;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_26:
      v27 = sub_1C7DCA8(
              v19,
              System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo,
              0);
    }
    v28 = (BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(
                                                                     v19,
                                                                     *(_QWORD *)(v27 + 8));
    if ( !v28 )
      sub_1C2D6EC(0, v29);
    BattleAdjustPopupPosInScreenComponent_AdjustPosData__RoundingOverPos(v28, &position, v30);
  }
  v31 = *(_QWORD *)v19;
  v32 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_34;
    }
    v34 = v31 + 16LL * *v33 + 312;
  }
  else
  {
LABEL_34:
    v34 = sub_1C7DCA8(v19, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v34)(v19, *(_QWORD *)(v34 + 8));
  Camera_k__BackingField = arg->fields._Camera_k__BackingField;
  if ( !Camera_k__BackingField )
LABEL_39:
    sub_1C2D6EC(Camera_k__BackingField, v7);
  v40 = UnityEngine_Camera__ViewportToWorldPoint_70969988(Camera_k__BackingField, position, 0);
  v35 = v40.fields.x + arg->fields._AdjustAfterOffset_k__BackingField.fields.x;
  v36 = v40.fields.y + arg->fields._AdjustAfterOffset_k__BackingField.fields.y;
  v37 = v40.fields.z + arg->fields._AdjustAfterOffset_k__BackingField.fields.z;
  result.fields.z = v37;
  result.fields.y = v36;
  result.fields.x = v35;
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
    sub_1C2D6EC(this, data);
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
  if ( (byte_4C2A699 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    sub_1C2D490(&System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
    sub_1C2D490(&Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0__IsOffScreen_b__0__);
    sub_1C2D490(&BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0_TypeInfo);
    byte_4C2A699 = 1;
  }
  v7 = sub_1C2D6DC(BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(float *)(v7 + 16) = x;
  *(float *)(v7 + 20) = y;
  *(float *)(v7 + 24) = z;
  AdjustPosDataArray = (System_Object_array *)this->fields.AdjustPosDataArray;
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0__IsOffScreen_b__0__,
    0);
  return BasicHelper__Any_object__51084700(
           AdjustPosDataArray,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
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

  if ( (byte_4C2A69C & 1) == 0 )
  {
    sub_1C2D490(&ManagerConfig_TypeInfo);
    byte_4C2A69C = 1;
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return BattleAdjustPopupPosInScreenComponent_AdjustPosData__IsOffScreen(
           x,
           this->fields.originalViewPos,
           (const MethodInfo *)x);
}