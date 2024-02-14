void __fastcall GameObjectAdjustAssort___ctor(GameObjectAdjustAssort_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameObjectAdjustAssort__Apply(GameObjectAdjustAssort_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *adjustParamArray; // x20
  GameObjectAdjustAssort___c_c *v14; // x0
  struct GameObjectAdjustAssort___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2_0; // x21
  Il2CppObject *v17; // x22
  struct GameObjectAdjustAssort___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x20
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  GameObjectAdjustAssort_o *v40; // x0
  const MethodInfo *v41; // x3
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0

  if ( (byte_4218093 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Func_GameObjectAdjustAssort_AdjustParam__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&Method_GameObjectAdjustAssort___c__Apply_b__2_0__, v11);
    sub_B0D8A4(&GameObjectAdjustAssort___c_TypeInfo, v12);
    byte_4218093 = 1;
  }
  adjustParamArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.adjustParamArray;
  v14 = GameObjectAdjustAssort___c_TypeInfo;
  if ( (BYTE3(GameObjectAdjustAssort___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GameObjectAdjustAssort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GameObjectAdjustAssort___c_TypeInfo);
    v14 = GameObjectAdjustAssort___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo,
                                                                                   *(_QWORD *)&index,
                                                                                   method);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__2_0,
      v17,
      Method_GameObjectAdjustAssort___c__Apply_b__2_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_GameObjectAdjustAssort_AdjustParam__bool___ctor__);
    v18 = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    v18->__9__2_0 = (struct System_Func_GameObjectAdjustAssort_AdjustParam__bool__o *)_9__2_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v18->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          adjustParamArray,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
  if ( !v25 )
    sub_B0D97C(0LL);
  klass = v25->klass;
  v27 = v25;
  if ( *(_WORD *)&v25->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AA67A0(v25, System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo, 0LL);
  }
  v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v27,
          *(_QWORD *)(p_method + 8));
  if ( !v31 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v32 = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_23;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_23:
      v35 = sub_AA67A0(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v36 = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__c **)v38 - 1) != System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_30;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_30:
      v39 = sub_AA67A0(v31, System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo, 0LL);
    }
    v40 = (GameObjectAdjustAssort_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
    GameObjectAdjustAssort__ApplyLocalPosition(v40, (GameObjectAdjustAssort_AdjustParam_o *)v40, index, v41);
  }
  v42 = *(_QWORD *)v31;
  if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
  {
    v43 = 0LL;
    v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
        goto LABEL_37;
    }
    v45 = v42 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_37:
    v45 = sub_AA67A0(v31, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v45)(v31, *(_QWORD *)(v45 + 8));
}


void __fastcall GameObjectAdjustAssort__ApplyLocalPosition(
        GameObjectAdjustAssort_o *this,
        GameObjectAdjustAssort_AdjustParam_o *adjustParam,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  struct UnityEngine_Vector3_array *localPosArray; // x8
  __int64 v8; // x0

  if ( (byte_4218094 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort_o *)sub_B0D8A4(&Method_BasicHelper_IsValidIndex_Vector3___, adjustParam);
    byte_4218094 = 1;
  }
  if ( !adjustParam )
    goto LABEL_9;
  this = (GameObjectAdjustAssort_o *)BasicHelper__IsValidIndex_Vector3_(
                                       adjustParam->fields.localPosArray,
                                       index,
                                       (const MethodInfo_1709618 *)Method_BasicHelper_IsValidIndex_Vector3___);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  localPosArray = adjustParam->fields.localPosArray;
  if ( !localPosArray )
LABEL_9:
    sub_B0D97C(this);
  if ( localPosArray->max_length <= index )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  GameObjectExtensions__SetLocalPosition(
    adjustParam->fields.target,
    *(UnityEngine_Vector3_o *)&localPosArray->m_Items[index].fields.y,
    v6);
}


void __fastcall GameObjectAdjustAssort_AdjustParam___ctor(
        GameObjectAdjustAssort_AdjustParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GameObjectAdjustAssort___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct GameObjectAdjustAssort___c_StaticFields *static_fields; // x0

  if ( (byte_4210F6C & 1) == 0 )
  {
    sub_B0D8A4(&GameObjectAdjustAssort___c_TypeInfo, v1);
    byte_4210F6C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(GameObjectAdjustAssort___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = GameObjectAdjustAssort___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GameObjectAdjustAssort___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall GameObjectAdjustAssort___c___ctor(GameObjectAdjustAssort___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GameObjectAdjustAssort___c___Apply_b__2_0(
        GameObjectAdjustAssort___c_o *this,
        GameObjectAdjustAssort_AdjustParam_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x19

  if ( (byte_4210F6D & 1) == 0 )
  {
    this = (GameObjectAdjustAssort___c_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, x);
    byte_4210F6D = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  target = (UnityEngine_Object_o *)x->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(target, 0LL, 0LL);
}