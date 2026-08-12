void GameObjectAdjustAssort___ctor(GameObjectAdjustAssort_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void GameObjectAdjustAssort__Apply(GameObjectAdjustAssort_o *this, int32_t index, const MethodInfo *method)
{
  GameObjectAdjustAssort___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *adjustParamArray; // x20
  struct GameObjectAdjustAssort___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__2_0; // x21
  Il2CppObject *v9; // x22
  struct GameObjectAdjustAssort___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
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
  __int64 v40; // [xsp+18h] [xbp-38h]

  if ( (byte_596FD7C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
    sub_2213A60(&System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_GameObjectAdjustAssort___c__Apply_b__2_0__);
    sub_2213A60(&GameObjectAdjustAssort___c_TypeInfo);
    byte_596FD7C = 1;
  }
  v5 = GameObjectAdjustAssort___c_TypeInfo;
  adjustParamArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.adjustParamArray;
  if ( !*(&GameObjectAdjustAssort___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GameObjectAdjustAssort___c_TypeInfo, *(_QWORD *)&index);
    v5 = GameObjectAdjustAssort___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__2_0 = (System_Func_object__bool__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&index);
      static_fields = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__2_0, v9, Method_GameObjectAdjustAssort___c__Apply_b__2_0__, 0);
    v10 = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    v10->__9__2_0 = (struct System_Func_GameObjectAdjustAssort_AdjustParam__bool__o *)_9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__2_0, (int32_t)_9__2_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          adjustParamArray,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
  if ( !v17 )
    sub_2213CDC(0, v18);
  klass = v17->klass;
  v20 = v17;
  v21 = *(unsigned __int16 *)&v17->klass->_2.rank;
  if ( *(_WORD *)&v17->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_14;
    }
    v23 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v23 = sub_224BC3C(v17, System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo, 0);
  }
  v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v23)(
          v20,
          *(_QWORD *)(v23 + 8));
  v40 = v24;
  while ( 1 )
  {
    if ( !v40 )
      sub_2213CDC(v24, v25);
    v26 = *(_QWORD *)v40;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_22;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_22:
      v29 = sub_224BC3C(v40, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v40, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v40;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__c **)v32 - 1) != System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_29;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_29:
      v33 = sub_224BC3C(v40, System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo, 0);
    }
    v34 = (GameObjectAdjustAssort_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v40, *(_QWORD *)(v33 + 8));
    GameObjectAdjustAssort__ApplyLocalPosition(v34, (GameObjectAdjustAssort_AdjustParam_o *)v34, index, v35);
  }
  v36 = *(_QWORD *)v40;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
  {
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_36;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_36:
    v39 = sub_224BC3C(v40, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v40, *(_QWORD *)(v39 + 8));
}


void GameObjectAdjustAssort__ApplyLocalPosition(
        GameObjectAdjustAssort_o *this,
        GameObjectAdjustAssort_AdjustParam_o *adjustParam,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *localPosArray; // x8

  if ( (byte_596FD7D & 1) == 0 )
  {
    this = (GameObjectAdjustAssort_o *)sub_2213A60(&Method_BasicHelper_IsValidIndex_Vector3___);
    byte_596FD7D = 1;
  }
  if ( !adjustParam )
    goto LABEL_9;
  this = (GameObjectAdjustAssort_o *)BasicHelper__IsValidIndex_Vector3_(
                                       adjustParam->fields.localPosArray,
                                       index,
                                       (const MethodInfo_3814FF0 *)Method_BasicHelper_IsValidIndex_Vector3___);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  localPosArray = adjustParam->fields.localPosArray;
  if ( !localPosArray )
LABEL_9:
    sub_2213CDC(this, adjustParam);
  if ( LODWORD(localPosArray->max_length) <= index )
    sub_2213CE4(this);
  GameObjectExtensions__SetLocalPosition(adjustParam->fields.target, localPosArray->m_Items[index], 0);
}


void GameObjectAdjustAssort_AdjustParam___ctor(GameObjectAdjustAssort_AdjustParam_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GameObjectAdjustAssort___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596FD7E & 1) == 0 )
  {
    sub_2213A60(&GameObjectAdjustAssort___c_TypeInfo);
    byte_596FD7E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(GameObjectAdjustAssort___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GameObjectAdjustAssort___c_TypeInfo->static_fields->__9 = (struct GameObjectAdjustAssort___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GameObjectAdjustAssort___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_596FD7F & 1) == 0 )
  {
    this = (GameObjectAdjustAssort___c_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FD7F = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  target = (UnityEngine_Object_o *)x->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  return UnityEngine_Object__op_Inequality(target, 0, 0);
}