void __fastcall BattleAdjustPopupPosInScreenComponent___ctor(
        BattleAdjustPopupPosInScreenComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct BattleAdjustPopupPosInScreenComponent_AdjustPosData_array **v14; // x8
  struct BattleAdjustPopupPosInScreenComponent_AdjustPosData_array *v15; // x1

  if ( (byte_4C00731 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___, method);
    byte_4C00731 = 1;
  }
  v10 = Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___;
  v11 = *((_QWORD *)Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___ + 7);
  if ( !v11 )
  {
    sub_1C80064(Method_System_Array_Empty_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C80008(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C80008(inited);
  v14 = *(struct BattleAdjustPopupPosInScreenComponent_AdjustPosData_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.AdjustPosDataArray = *v14;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.AdjustPosDataArray, (int64_t)v15, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall BattleAdjustPopupPosInScreenComponent__ConvertPhaseToApplyScene(
        BattleAdjustPopupPosInScreenComponent_o *this,
        ChangeBattlePhaseNotify_o *phaseNotify,
        const MethodInfo *method)
{
  if ( !phaseNotify )
    sub_1C2E388(this, 0LL);
  if ( phaseNotify->fields._DetailPhase_k__BackingField == 4 )
    return 2;
  else
    return 1;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BattleAdjustPopupPosInScreenComponent__GetAdjustedWorldPos(
        BattleAdjustPopupPosInScreenComponent_o *this,
        AdjustPopupPosInScreenArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  UnityEngine_Camera_o *Camera_k__BackingField; // x0
  const MethodInfo *v14; // x1
  int v15; // s0
  int v16; // s1
  int v17; // s2
  __int64 v18; // x9
  System_Collections_Generic_IEnumerable_TSource__o *AdjustPosDataArray; // x20
  System_Func_object__bool__o *v20; // x23
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Camera_c *klass; // x8
  UnityEngine_Camera_o *v28; // x20
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x20
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *v42; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  float v49; // s0
  float v50; // s1
  float v51; // s2
  UnityEngine_Vector3_o position; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C00730 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_BattleAdjustPopupPosInScreenComponent_AdjustPosData___, arg);
    sub_1C2E12C(&System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo, v5);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v6);
    sub_1C2E12C(
      &System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo,
      v7);
    sub_1C2E12C(
      &System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo,
      v8);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C2E12C(&Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0__GetAdjustedWorldPos_b__0__, v10);
    sub_1C2E12C(&BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0_TypeInfo, v11);
    byte_4C00730 = 1;
  }
  v12 = sub_1C2E378(BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !arg )
    goto LABEL_39;
  *(UnityEngine_Vector3_o *)&v15 = AdjustPopupPosInScreenArgument__get_ViewPos(arg, v14);
  if ( !v12 )
    goto LABEL_39;
  *(_DWORD *)(v12 + 16) = v15;
  *(_DWORD *)(v12 + 20) = v16;
  *(_DWORD *)(v12 + 24) = v17;
  v18 = *(_QWORD *)(v12 + 16);
  position.fields.z = *(float *)(v12 + 24);
  *(_QWORD *)&position.fields.x = v18;
  AdjustPosDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.AdjustPosDataArray;
  v20 = *(System_Func_object__bool__o **)(v12 + 32);
  if ( !v20 )
  {
    v20 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v12,
      Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0__GetAdjustedWorldPos_b__0__,
      0LL);
    *(_QWORD *)(v12 + 32) = v20;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)v20, v21, v22, v23, v24, v25, v26);
  }
  Camera_k__BackingField = (UnityEngine_Camera_o *)System_Linq_Enumerable__Where_object_(
                                                     AdjustPosDataArray,
                                                     (System_Func_TSource__bool__o *)v20,
                                                     (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
  if ( !Camera_k__BackingField )
    goto LABEL_39;
  klass = Camera_k__BackingField->klass;
  v28 = Camera_k__BackingField;
  v29 = *(unsigned __int16 *)(&Camera_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Camera_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__c **)p_offset
            - 1) != System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_12;
    }
    v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v31 = sub_1C8010C(
            Camera_k__BackingField,
            System_Collections_Generic_IEnumerable_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo,
            0LL);
  }
  v33 = (*(__int64 (__fastcall **)(UnityEngine_Camera_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  if ( !v33 )
    sub_1C2E388(0LL, v32);
  while ( 1 )
  {
    v34 = *(_QWORD *)v33;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_19;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_19:
      v37 = sub_1C8010C(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v33;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_26;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_26:
      v41 = sub_1C8010C(
              v33,
              System_Collections_Generic_IEnumerator_BattleAdjustPopupPosInScreenComponent_AdjustPosData__TypeInfo,
              0LL);
    }
    v42 = (BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(
                                                                     v33,
                                                                     *(_QWORD *)(v41 + 8));
    if ( !v42 )
      sub_1C2E388(0LL, v43);
    BattleAdjustPopupPosInScreenComponent_AdjustPosData__RoundingOverPos(v42, &position, v44);
  }
  v45 = *(_QWORD *)v33;
  v46 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_34;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_34:
    v48 = sub_1C8010C(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v48)(v33, *(_QWORD *)(v48 + 8));
  Camera_k__BackingField = arg->fields._Camera_k__BackingField;
  if ( !Camera_k__BackingField )
LABEL_39:
    sub_1C2E388(Camera_k__BackingField, v14);
  v53 = UnityEngine_Camera__ViewportToWorldPoint_70795708(Camera_k__BackingField, position, 0LL);
  v49 = v53.fields.x + arg->fields._AdjustAfterOffset_k__BackingField.fields.x;
  v50 = v53.fields.y + arg->fields._AdjustAfterOffset_k__BackingField.fields.y;
  v51 = v53.fields.z + arg->fields._AdjustAfterOffset_k__BackingField.fields.z;
  result.fields.z = v51;
  result.fields.y = v50;
  result.fields.x = v49;
  return result;
}


bool __fastcall BattleAdjustPopupPosInScreenComponent__IsMatchCond(
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
  if ( !data || (changePhaseNotify = data->fields.changePhaseNotify) == 0LL )
    sub_1C2E388(this, data);
  if ( changePhaseNotify->fields._DetailPhase_k__BackingField == 4 )
    v5 = 2;
  else
    v5 = 1;
  return v5 == ApplyScene;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleAdjustPopupPosInScreenComponent__IsOffScreen(
        BattleAdjustPopupPosInScreenComponent_o *this,
        UnityEngine_Vector3_o viewPos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_Object_array *AdjustPosDataArray; // x19
  System_Func_object__bool__o *v14; // x21

  z = viewPos.fields.z;
  y = viewPos.fields.y;
  x = viewPos.fields.x;
  if ( (byte_4C0072F & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Any_BattleAdjustPopupPosInScreenComponent_AdjustPosData___, method);
    sub_1C2E12C(&System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo, v7);
    sub_1C2E12C(&Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0__IsOffScreen_b__0__, v8);
    sub_1C2E12C(&BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0_TypeInfo, v9);
    byte_4C0072F = 1;
  }
  v10 = sub_1C2E378(BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1C2E388(v11, v12);
  *(float *)(v10 + 16) = x;
  *(float *)(v10 + 20) = y;
  *(float *)(v10 + 24) = z;
  AdjustPosDataArray = (System_Object_array *)this->fields.AdjustPosDataArray;
  v14 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_BattleAdjustPopupPosInScreenComponent_AdjustPosData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0__IsOffScreen_b__0__,
    0LL);
  return BasicHelper__Any_object__50053864(
           AdjustPosDataArray,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_2FBC2E8 *)Method_BasicHelper_Any_BattleAdjustPopupPosInScreenComponent_AdjustPosData___);
}


void __fastcall BattleAdjustPopupPosInScreenComponent_AdjustPosData___ctor(
        BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall BattleAdjustPopupPosInScreenComponent_AdjustPosData__GetThresholdY(
        BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *this,
        float baseY,
        const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0
  int32_t ScreenOffset; // w19

  if ( (byte_4C00732 & 1) == 0 )
  {
    sub_1C2E12C(&ManagerConfig_TypeInfo, method);
    byte_4C00732 = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleAdjustPopupPosInScreenComponent_AdjustPosData__IsOffScreen(
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


void __fastcall BattleAdjustPopupPosInScreenComponent_AdjustPosData__RoundingOverPos(
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


void __fastcall BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0___ctor(
        BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0___IsOffScreen_b__0(
        BattleAdjustPopupPosInScreenComponent___c__DisplayClass6_0_o *this,
        BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return BattleAdjustPopupPosInScreenComponent_AdjustPosData__IsOffScreen(
           x,
           this->fields.viewPos,
           (const MethodInfo *)x);
}


void __fastcall BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0___ctor(
        BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0___GetAdjustedWorldPos_b__0(
        BattleAdjustPopupPosInScreenComponent___c__DisplayClass8_0_o *this,
        BattleAdjustPopupPosInScreenComponent_AdjustPosData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return BattleAdjustPopupPosInScreenComponent_AdjustPosData__IsOffScreen(
           x,
           this->fields.originalViewPos,
           (const MethodInfo *)x);
}