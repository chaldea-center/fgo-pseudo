void __fastcall GameObjectAdjustAssort___ctor(GameObjectAdjustAssort_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameObjectAdjustAssort__Apply(GameObjectAdjustAssort_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  GameObjectAdjustAssort___c_c *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *adjustParamArray; // x19
  System_Func_object__bool__o *_9__2_0; // x21
  Il2CppObject *v23; // x22
  struct GameObjectAdjustAssort___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v38; // x1
  __int64 v39; // x19
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  GameObjectAdjustAssort_o *v48; // x0
  const MethodInfo *v49; // x3
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0

  if ( (byte_4B157A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_GameObjectAdjustAssort___c__Apply_b__2_0__, v16, v17);
    sub_1BCA7E0(&GameObjectAdjustAssort___c_TypeInfo, v18, v19);
    byte_4B157A6 = 1;
  }
  v20 = GameObjectAdjustAssort___c_TypeInfo;
  adjustParamArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.adjustParamArray;
  if ( !GameObjectAdjustAssort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GameObjectAdjustAssort___c_TypeInfo, *(_QWORD *)&index);
    v20 = GameObjectAdjustAssort___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__bool__o *)v20->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, *(_QWORD *)&index);
      v20 = GameObjectAdjustAssort___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__2_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo,
                                               *(_QWORD *)&index,
                                               method,
                                               v3);
    System_Func_object__bool____ctor(_9__2_0, v23, Method_GameObjectAdjustAssort___c__Apply_b__2_0__, 0LL);
    static_fields = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_GameObjectAdjustAssort_AdjustParam__bool__o *)_9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v25, v26, v27, v28, v29, v30);
  }
  v31 = System_Linq_Enumerable__Where_object_(
          adjustParamArray,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
  if ( !v31 )
    sub_1BCAA3C(0LL, v32);
  klass = v31->klass;
  v34 = v31;
  v35 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo )
    {
      --v35;
      p_offset += 4;
      if ( !v35 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C1C7C0(
                 v31,
                 System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo,
                 0LL);
  }
  v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v34,
          *(_QWORD *)(p_method + 8));
  if ( !v39 )
    sub_1BCAA3C(0LL, v38);
  while ( 1 )
  {
    v40 = *(_QWORD *)v39;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_21;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_21:
      v43 = sub_1C1C7C0(v39, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8)) & 1) == 0 )
      break;
    v44 = *(_QWORD *)v39;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__c **)v46 - 1) != System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_28;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_28:
      v47 = sub_1C1C7C0(v39, System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo, 0LL);
    }
    v48 = (GameObjectAdjustAssort_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v39, *(_QWORD *)(v47 + 8));
    GameObjectAdjustAssort__ApplyLocalPosition(v48, (GameObjectAdjustAssort_AdjustParam_o *)v48, index, v49);
  }
  v50 = *(_QWORD *)v39;
  v51 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
  {
    v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_35;
    }
    v53 = v50 + 16LL * *v52 + 312;
  }
  else
  {
LABEL_35:
    v53 = sub_1C1C7C0(v39, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v53)(v39, *(_QWORD *)(v53 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameObjectAdjustAssort__ApplyLocalPosition(
        GameObjectAdjustAssort_o *this,
        GameObjectAdjustAssort_AdjustParam_o *adjustParam,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *localPosArray; // x8

  if ( (byte_4B157A7 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort_o *)sub_1BCA7E0(
                                         &Method_BasicHelper_IsValidIndex_Vector3___,
                                         adjustParam,
                                         *(_QWORD *)&index);
    byte_4B157A7 = 1;
  }
  if ( !adjustParam )
    goto LABEL_9;
  this = (GameObjectAdjustAssort_o *)BasicHelper__IsValidIndex_Vector3_(
                                       adjustParam->fields.localPosArray,
                                       index,
                                       (const MethodInfo_2F01C28 *)Method_BasicHelper_IsValidIndex_Vector3___);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  localPosArray = adjustParam->fields.localPosArray;
  if ( !localPosArray )
LABEL_9:
    sub_1BCAA3C(this, adjustParam);
  if ( localPosArray->max_length <= index )
    sub_1BCAA44(this, adjustParam);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B157A8 & 1) == 0 )
  {
    sub_1BCA7E0(&GameObjectAdjustAssort___c_TypeInfo, v1, v2);
    byte_4B157A8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(GameObjectAdjustAssort___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  GameObjectAdjustAssort___c_TypeInfo->static_fields->__9 = (struct GameObjectAdjustAssort___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)GameObjectAdjustAssort___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B157A9 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort___c_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B157A9 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  target = (UnityEngine_Object_o *)x->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  return UnityEngine_Object__op_Inequality(target, 0LL, 0LL);
}