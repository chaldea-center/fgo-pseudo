void GameObjectAdjustAssort___ctor(GameObjectAdjustAssort_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GameObjectAdjustAssort__Apply(GameObjectAdjustAssort_o *this, int32_t index, const MethodInfo *method)
{
  GameObjectAdjustAssort___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *adjustParamArray; // x19
  System_Func_object__bool__o *_9__2_0; // x21
  Il2CppObject *v8; // x22
  struct GameObjectAdjustAssort___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x19
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  GameObjectAdjustAssort_o *v29; // x0
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0

  if ( (byte_4CB588D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
    sub_1C6BA08(&System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_GameObjectAdjustAssort___c__Apply_b__2_0__);
    sub_1C6BA08(&GameObjectAdjustAssort___c_TypeInfo);
    byte_4CB588D = 1;
  }
  v5 = GameObjectAdjustAssort___c_TypeInfo;
  adjustParamArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.adjustParamArray;
  if ( !GameObjectAdjustAssort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GameObjectAdjustAssort___c_TypeInfo);
    v5 = GameObjectAdjustAssort___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__bool__o *)v5->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = GameObjectAdjustAssort___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__2_0, v8, Method_GameObjectAdjustAssort___c__Apply_b__2_0__, 0);
    static_fields = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_GameObjectAdjustAssort_AdjustParam__bool__o *)_9__2_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11);
  }
  v12 = System_Linq_Enumerable__Where_object_(
          adjustParamArray,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
  if ( !v12 )
    sub_1C6BC60(0, v13);
  klass = v12->klass;
  v15 = v12;
  v16 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_14;
    }
    v18 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v18 = sub_1C41D90(v12, System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo, 0);
  }
  v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v18)(
          v15,
          *(_QWORD *)(v18 + 8));
  if ( !v20 )
    sub_1C6BC60(0, v19);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_21;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_21:
      v24 = sub_1C41D90(v20, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__c **)v27 - 1) != System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_28;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_28:
      v28 = sub_1C41D90(v20, System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo, 0);
    }
    v29 = (GameObjectAdjustAssort_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    GameObjectAdjustAssort__ApplyLocalPosition(v29, (GameObjectAdjustAssort_AdjustParam_o *)v29, index, v30);
  }
  v31 = *(_QWORD *)v20;
  v32 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_35;
    }
    v34 = v31 + 16LL * *v33 + 312;
  }
  else
  {
LABEL_35:
    v34 = sub_1C41D90(v20, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v34)(v20, *(_QWORD *)(v34 + 8));
}


void GameObjectAdjustAssort__ApplyLocalPosition(
        GameObjectAdjustAssort_o *this,
        GameObjectAdjustAssort_AdjustParam_o *adjustParam,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *localPosArray; // x8

  if ( (byte_4CB588E & 1) == 0 )
  {
    this = (GameObjectAdjustAssort_o *)sub_1C6BA08(&Method_BasicHelper_IsValidIndex_Vector3___);
    byte_4CB588E = 1;
  }
  if ( !adjustParam )
    goto LABEL_9;
  this = (GameObjectAdjustAssort_o *)BasicHelper__IsValidIndex_Vector3_(
                                       adjustParam->fields.localPosArray,
                                       index,
                                       (const MethodInfo_3129A00 *)Method_BasicHelper_IsValidIndex_Vector3___);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  localPosArray = adjustParam->fields.localPosArray;
  if ( !localPosArray )
LABEL_9:
    sub_1C6BC60(this, adjustParam);
  if ( LODWORD(localPosArray->max_length) <= index )
    sub_1C6BC68(this);
  GameObjectExtensions__SetLocalPosition(adjustParam->fields.target, localPosArray->m_Items[index], 0);
}


void GameObjectAdjustAssort_AdjustParam___ctor(GameObjectAdjustAssort_AdjustParam_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GameObjectAdjustAssort___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB588F & 1) == 0 )
  {
    sub_1C6BA08(&GameObjectAdjustAssort___c_TypeInfo);
    byte_4CB588F = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(GameObjectAdjustAssort___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GameObjectAdjustAssort___c_TypeInfo->static_fields->__9 = (struct GameObjectAdjustAssort___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)GameObjectAdjustAssort___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void GameObjectAdjustAssort___c___ctor(GameObjectAdjustAssort___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GameObjectAdjustAssort___c___Apply_b__2_0(
        GameObjectAdjustAssort___c_o *this,
        GameObjectAdjustAssort_AdjustParam_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x19

  if ( (byte_4CB5890 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort___c_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5890 = 1;
  }
  if ( !x )
    sub_1C6BC60(this, x);
  target = (UnityEngine_Object_o *)x->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(target, 0, 0);
}