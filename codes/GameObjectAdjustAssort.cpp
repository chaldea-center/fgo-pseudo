void __fastcall GameObjectAdjustAssort___ctor(GameObjectAdjustAssort_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GameObjectAdjustAssort__Apply(GameObjectAdjustAssort_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *adjustParamArray; // x20
  GameObjectAdjustAssort___c_c *v6; // x0
  struct GameObjectAdjustAssort___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2_0; // x21
  Il2CppObject *v9; // x22
  struct GameObjectAdjustAssort___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x3
  __int64 v27; // x20
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x3
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  GameObjectAdjustAssort_o *v37; // x0
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0

  if ( (byte_42B3B50 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
    sub_B52984(&Method_System_Func_GameObjectAdjustAssort_AdjustParam__bool___ctor__);
    sub_B52984(&System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_GameObjectAdjustAssort___c__Apply_b__2_0__);
    sub_B52984(&GameObjectAdjustAssort___c_TypeInfo);
    byte_42B3B50 = 1;
  }
  adjustParamArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.adjustParamArray;
  v6 = GameObjectAdjustAssort___c_TypeInfo;
  if ( (BYTE3(GameObjectAdjustAssort___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GameObjectAdjustAssort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GameObjectAdjustAssort___c_TypeInfo);
    v6 = GameObjectAdjustAssort___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__2_0,
      v9,
      Method_GameObjectAdjustAssort___c__Apply_b__2_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_GameObjectAdjustAssort_AdjustParam__bool___ctor__);
    v10 = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    v10->__9__2_0 = (struct System_Func_GameObjectAdjustAssort_AdjustParam__bool__o *)_9__2_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v10->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          adjustParamArray,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
  if ( !v17 )
    sub_B52A5C(0LL, v18);
  klass = v17->klass;
  v21 = v17;
  if ( *(_WORD *)&v17->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AEB880(
                 v17,
                 System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo,
                 0LL,
                 v19);
  }
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v21,
          *(_QWORD *)(p_method + 8));
  if ( !v27 )
    sub_B52A5C(0LL, v25);
  while ( 1 )
  {
    v28 = *(_QWORD *)v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_23;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_23:
      v31 = sub_AEB880(v27, System_Collections_IEnumerator_TypeInfo, 0LL, v26);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__c **)v35 - 1) != System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_30;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_30:
      v36 = sub_AEB880(
              v27,
              System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo,
              0LL,
              v32);
    }
    v37 = (GameObjectAdjustAssort_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v27, *(_QWORD *)(v36 + 8));
    GameObjectAdjustAssort__ApplyLocalPosition(v37, (GameObjectAdjustAssort_AdjustParam_o *)v37, index, v38);
  }
  v39 = *(_QWORD *)v27;
  if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
  {
    v40 = 0LL;
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
        goto LABEL_37;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_37:
    v42 = sub_AEB880(v27, System_IDisposable_TypeInfo, 0LL, v32);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v27, *(_QWORD *)(v42 + 8));
}


void __fastcall GameObjectAdjustAssort__ApplyLocalPosition(
        GameObjectAdjustAssort_o *this,
        GameObjectAdjustAssort_AdjustParam_o *adjustParam,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *localPosArray; // x8
  __int64 v7; // x0

  if ( (byte_42B3B51 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort_o *)sub_B52984(&Method_BasicHelper_IsValidIndex_Vector3___);
    byte_42B3B51 = 1;
  }
  if ( !adjustParam )
    goto LABEL_9;
  this = (GameObjectAdjustAssort_o *)BasicHelper__IsValidIndex_Vector3_(
                                       adjustParam->fields.localPosArray,
                                       index,
                                       (const MethodInfo_1A4414C *)Method_BasicHelper_IsValidIndex_Vector3___);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  localPosArray = adjustParam->fields.localPosArray;
  if ( !localPosArray )
LABEL_9:
    sub_B52A5C(this, adjustParam);
  if ( localPosArray->max_length <= index )
  {
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
  }
  GameObjectExtensions__SetLocalPosition(
    adjustParam->fields.target,
    *(UnityEngine_Vector3_o *)&localPosArray->m_Items[index].fields.y,
    (const MethodInfo *)adjustParam);
}


void __fastcall GameObjectAdjustAssort_AdjustParam___ctor(
        GameObjectAdjustAssort_AdjustParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GameObjectAdjustAssort___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct GameObjectAdjustAssort___c_StaticFields *static_fields; // x0

  if ( (byte_42ACE38 & 1) == 0 )
  {
    sub_B52984(&GameObjectAdjustAssort___c_TypeInfo);
    byte_42ACE38 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(GameObjectAdjustAssort___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = GameObjectAdjustAssort___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GameObjectAdjustAssort___c_o *)v1;
  sub_B52920(static_fields);
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

  if ( (byte_42ACE39 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort___c_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACE39 = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  target = (UnityEngine_Object_o *)x->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(target, 0LL, 0LL);
}