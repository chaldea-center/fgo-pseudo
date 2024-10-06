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
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v26; // x1
  __int64 v27; // x19
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  GameObjectAdjustAssort_o *v36; // x0
  const MethodInfo *v37; // x3
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0

  if ( (byte_4A6F444 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___, *(_QWORD *)&index);
    sub_1B90010(&System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo, v5);
    sub_1B90010(&System_IDisposable_TypeInfo, v6);
    sub_1B90010(&System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo, v8);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B90010(&Method_GameObjectAdjustAssort___c__Apply_b__2_0__, v10);
    sub_1B90010(&GameObjectAdjustAssort___c_TypeInfo, v11);
    byte_4A6F444 = 1;
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
    _9__2_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__2_0, v15, Method_GameObjectAdjustAssort___c__Apply_b__2_0__, 0LL);
    static_fields = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_GameObjectAdjustAssort_AdjustParam__bool__o *)_9__2_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          adjustParamArray,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
  if ( !v19 )
    sub_1B9026C(0LL, v20);
  klass = v19->klass;
  v22 = v19;
  v23 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BE1FF0(
                 v19,
                 System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo,
                 0LL);
  }
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v22,
          *(_QWORD *)(p_method + 8));
  if ( !v27 )
    sub_1B9026C(0LL, v26);
  while ( 1 )
  {
    v28 = *(_QWORD *)v27;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_21;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_21:
      v31 = sub_1BE1FF0(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    v32 = *(_QWORD *)v27;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__c **)v34 - 1) != System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo )
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
      v35 = sub_1BE1FF0(v27, System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo, 0LL);
    }
    v36 = (GameObjectAdjustAssort_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
    GameObjectAdjustAssort__ApplyLocalPosition(v36, (GameObjectAdjustAssort_AdjustParam_o *)v36, index, v37);
  }
  v38 = *(_QWORD *)v27;
  v39 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
  {
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_35;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_35:
    v41 = sub_1BE1FF0(v27, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v41)(v27, *(_QWORD *)(v41 + 8));
}


void __fastcall GameObjectAdjustAssort__ApplyLocalPosition(
        GameObjectAdjustAssort_o *this,
        GameObjectAdjustAssort_AdjustParam_o *adjustParam,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *localPosArray; // x8

  if ( (byte_4A6F445 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort_o *)sub_1B90010(&Method_BasicHelper_IsValidIndex_Vector3___, adjustParam);
    byte_4A6F445 = 1;
  }
  if ( !adjustParam )
    goto LABEL_9;
  this = (GameObjectAdjustAssort_o *)BasicHelper__IsValidIndex_Vector3_(
                                       adjustParam->fields.localPosArray,
                                       index,
                                       (const MethodInfo_2E7D438 *)Method_BasicHelper_IsValidIndex_Vector3___);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  localPosArray = adjustParam->fields.localPosArray;
  if ( !localPosArray )
LABEL_9:
    sub_1B9026C(this, adjustParam);
  if ( localPosArray->max_length <= index )
    sub_1B90274(this, adjustParam);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6F446 & 1) == 0 )
  {
    sub_1B90010(&GameObjectAdjustAssort___c_TypeInfo, v1);
    byte_4A6F446 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(GameObjectAdjustAssort___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GameObjectAdjustAssort___c_TypeInfo->static_fields->__9 = (struct GameObjectAdjustAssort___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)GameObjectAdjustAssort___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4A6F447 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort___c_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, x);
    byte_4A6F447 = 1;
  }
  if ( !x )
    sub_1B9026C(this, x);
  target = (UnityEngine_Object_o *)x->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(target, 0LL, 0LL);
}