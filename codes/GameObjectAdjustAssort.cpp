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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  GameObjectAdjustAssort_o *v33; // x0
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0

  if ( (byte_4D2BE13 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
    sub_1C94098(&System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_GameObjectAdjustAssort___c__Apply_b__2_0__);
    sub_1C94098(&GameObjectAdjustAssort___c_TypeInfo);
    byte_4D2BE13 = 1;
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
    _9__2_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__2_0, v8, Method_GameObjectAdjustAssort___c__Apply_b__2_0__, 0);
    static_fields = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_GameObjectAdjustAssort_AdjustParam__bool__o *)_9__2_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          adjustParamArray,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
  if ( !v16 )
    sub_1C942F0(0, v17);
  klass = v16->klass;
  v19 = v16;
  v20 = *(unsigned __int16 *)&v16->klass->_2.rank;
  if ( *(_WORD *)&v16->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_14;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v22 = sub_1C6A420(v16, System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo, 0);
  }
  v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v22)(
          v19,
          *(_QWORD *)(v22 + 8));
  if ( !v24 )
    sub_1C942F0(0, v23);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_21;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_21:
      v28 = sub_1C6A420(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__c **)v31 - 1) != System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_28;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_28:
      v32 = sub_1C6A420(v24, System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo, 0);
    }
    v33 = (GameObjectAdjustAssort_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
    GameObjectAdjustAssort__ApplyLocalPosition(v33, (GameObjectAdjustAssort_AdjustParam_o *)v33, index, v34);
  }
  v35 = *(_QWORD *)v24;
  v36 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_35;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_35:
    v38 = sub_1C6A420(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v24, *(_QWORD *)(v38 + 8));
}


void GameObjectAdjustAssort__ApplyLocalPosition(
        GameObjectAdjustAssort_o *this,
        GameObjectAdjustAssort_AdjustParam_o *adjustParam,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *localPosArray; // x8

  if ( (byte_4D2BE14 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort_o *)sub_1C94098(&Method_BasicHelper_IsValidIndex_Vector3___);
    byte_4D2BE14 = 1;
  }
  if ( !adjustParam )
    goto LABEL_9;
  this = (GameObjectAdjustAssort_o *)BasicHelper__IsValidIndex_Vector3_(
                                       adjustParam->fields.localPosArray,
                                       index,
                                       (const MethodInfo_318AA38 *)Method_BasicHelper_IsValidIndex_Vector3___);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  localPosArray = adjustParam->fields.localPosArray;
  if ( !localPosArray )
LABEL_9:
    sub_1C942F0(this, adjustParam);
  if ( LODWORD(localPosArray->max_length) <= index )
    sub_1C942F8(this);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2BE15 & 1) == 0 )
  {
    sub_1C94098(&GameObjectAdjustAssort___c_TypeInfo);
    byte_4D2BE15 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(GameObjectAdjustAssort___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GameObjectAdjustAssort___c_TypeInfo->static_fields->__9 = (struct GameObjectAdjustAssort___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)GameObjectAdjustAssort___c_TypeInfo->static_fields,
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

  if ( (byte_4D2BE16 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort___c_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BE16 = 1;
  }
  if ( !x )
    sub_1C942F0(this, x);
  target = (UnityEngine_Object_o *)x->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(target, 0, 0);
}