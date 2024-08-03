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
  GameObjectAdjustAssort___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *adjustParamArray; // x19
  System_Func_object__bool__o *_9__2_0; // x21
  Il2CppObject *v15; // x22
  struct GameObjectAdjustAssort___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v25; // x19
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  GameObjectAdjustAssort_o *v34; // x0
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0

  if ( (byte_49FBA03 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___, *(_QWORD *)&index);
    sub_1B640C8(&System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&Method_GameObjectAdjustAssort___c__Apply_b__2_0__, v10);
    sub_1B640C8(&GameObjectAdjustAssort___c_TypeInfo, v11);
    byte_49FBA03 = 1;
  }
  v12 = GameObjectAdjustAssort___c_TypeInfo;
  adjustParamArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.adjustParamArray;
  if ( !GameObjectAdjustAssort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GameObjectAdjustAssort___c_TypeInfo);
    v12 = GameObjectAdjustAssort___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__bool__o *)v12->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = GameObjectAdjustAssort___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_1B64314(
                                               System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo,
                                               *(_QWORD *)&index,
                                               method);
    System_Func_object__bool____ctor(_9__2_0, v15, Method_GameObjectAdjustAssort___c__Apply_b__2_0__, 0LL);
    static_fields = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_GameObjectAdjustAssort_AdjustParam__bool__o *)_9__2_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          adjustParamArray,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
  if ( !v19 )
    sub_1B64324(0LL);
  klass = v19->klass;
  v21 = v19;
  v22 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BB60A8(
                 v19,
                 System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo,
                 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v21,
          *(_QWORD *)(p_method + 8));
  if ( !v25 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_21;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_21:
      v29 = sub_1BB60A8(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__c **)v32 - 1) != System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_28;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_28:
      v33 = sub_1BB60A8(v25, System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo, 0LL);
    }
    v34 = (GameObjectAdjustAssort_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    GameObjectAdjustAssort__ApplyLocalPosition(v34, (GameObjectAdjustAssort_AdjustParam_o *)v34, index, v35);
  }
  v36 = *(_QWORD *)v25;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_35;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_35:
    v39 = sub_1BB60A8(v25, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v25, *(_QWORD *)(v39 + 8));
}


void __fastcall GameObjectAdjustAssort__ApplyLocalPosition(
        GameObjectAdjustAssort_o *this,
        GameObjectAdjustAssort_AdjustParam_o *adjustParam,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct UnityEngine_Vector3_array *localPosArray; // x8

  if ( (byte_49FBA04 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort_o *)sub_1B640C8(&Method_BasicHelper_IsValidIndex_Vector3___, adjustParam);
    byte_49FBA04 = 1;
  }
  if ( !adjustParam )
    goto LABEL_9;
  this = (GameObjectAdjustAssort_o *)BasicHelper__IsValidIndex_Vector3_(
                                       adjustParam->fields.localPosArray,
                                       index,
                                       (const MethodInfo_2E28608 *)Method_BasicHelper_IsValidIndex_Vector3___);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  localPosArray = adjustParam->fields.localPosArray;
  if ( !localPosArray )
LABEL_9:
    sub_1B64324(this);
  if ( localPosArray->max_length <= index )
    sub_1B6432C(this, v6);
  GameObjectExtensions__SetLocalPosition(
    adjustParam->fields.target,
    *(UnityEngine_Vector3_o *)&localPosArray->m_Items[index].fields.y,
    0LL);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBA05 & 1) == 0 )
  {
    sub_1B640C8(&GameObjectAdjustAssort___c_TypeInfo, v1);
    byte_49FBA05 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(GameObjectAdjustAssort___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  GameObjectAdjustAssort___c_TypeInfo->static_fields->__9 = (struct GameObjectAdjustAssort___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)GameObjectAdjustAssort___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FBA06 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort___c_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, x);
    byte_49FBA06 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  target = (UnityEngine_Object_o *)x->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(target, 0LL, 0LL);
}