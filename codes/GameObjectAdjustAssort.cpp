void __fastcall GameObjectAdjustAssort___ctor(GameObjectAdjustAssort_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GameObjectAdjustAssort__Apply(GameObjectAdjustAssort_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *adjustParamArray; // x20
  GameObjectAdjustAssort___c_c *v31; // x0
  struct GameObjectAdjustAssort___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2_0; // x21
  Il2CppObject *v34; // x22
  struct GameObjectAdjustAssort___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v50; // x1
  __int64 v51; // x3
  __int64 v52; // x20
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x3
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  GameObjectAdjustAssort_o *v62; // x0
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0

  if ( (byte_42EC640 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_GameObjectAdjustAssort_AdjustParam__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_GameObjectAdjustAssort___c__Apply_b__2_0__, v24, v25, v26);
    sub_B5D5C4(&GameObjectAdjustAssort___c_TypeInfo, v27, v28, v29);
    byte_42EC640 = 1;
  }
  adjustParamArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.adjustParamArray;
  v31 = GameObjectAdjustAssort___c_TypeInfo;
  if ( (BYTE3(GameObjectAdjustAssort___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GameObjectAdjustAssort___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GameObjectAdjustAssort___c_TypeInfo);
    v31 = GameObjectAdjustAssort___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_GameObjectAdjustAssort_AdjustParam__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__2_0,
      v34,
      Method_GameObjectAdjustAssort___c__Apply_b__2_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_GameObjectAdjustAssort_AdjustParam__bool___ctor__);
    v35 = GameObjectAdjustAssort___c_TypeInfo->static_fields;
    v35->__9__2_0 = (struct System_Func_GameObjectAdjustAssort_AdjustParam__bool__o *)_9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v35->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          adjustParamArray,
          (System_Func_TSource__bool__o *)_9__2_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_GameObjectAdjustAssort_AdjustParam___);
  if ( !v42 )
    sub_B5D69C(0LL, v43);
  klass = v42->klass;
  v46 = v42;
  if ( *(_WORD *)&v42->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo )
    {
      ++v47;
      p_offset += 4;
      if ( v47 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AF54C0(
                 v42,
                 System_Collections_Generic_IEnumerable_GameObjectAdjustAssort_AdjustParam__TypeInfo,
                 0LL,
                 v44);
  }
  v52 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v46,
          *(_QWORD *)(p_method + 8));
  if ( !v52 )
    sub_B5D69C(0LL, v50);
  while ( 1 )
  {
    v53 = *(_QWORD *)v52;
    if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
    {
      v54 = 0LL;
      v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
          goto LABEL_23;
      }
      v56 = v53 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_23:
      v56 = sub_AF54C0(v52, System_Collections_IEnumerator_TypeInfo, 0LL, v51);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) & 1) == 0 )
      break;
    v58 = *(_QWORD *)v52;
    if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
    {
      v59 = 0LL;
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__c **)v60 - 1) != System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo )
      {
        ++v59;
        v60 += 4;
        if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
          goto LABEL_30;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_30:
      v61 = sub_AF54C0(
              v52,
              System_Collections_Generic_IEnumerator_GameObjectAdjustAssort_AdjustParam__TypeInfo,
              0LL,
              v57);
    }
    v62 = (GameObjectAdjustAssort_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v52, *(_QWORD *)(v61 + 8));
    GameObjectAdjustAssort__ApplyLocalPosition(v62, (GameObjectAdjustAssort_AdjustParam_o *)v62, index, v63);
  }
  v64 = *(_QWORD *)v52;
  if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
  {
    v65 = 0LL;
    v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      ++v65;
      v66 += 4;
      if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
        goto LABEL_37;
    }
    v67 = v64 + 16LL * *v66 + 312;
  }
  else
  {
LABEL_37:
    v67 = sub_AF54C0(v52, System_IDisposable_TypeInfo, 0LL, v57);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v67)(v52, *(_QWORD *)(v67 + 8));
}


void __fastcall GameObjectAdjustAssort__ApplyLocalPosition(
        GameObjectAdjustAssort_o *this,
        GameObjectAdjustAssort_AdjustParam_o *adjustParam,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *localPosArray; // x8
  __int64 v7; // x0

  if ( (byte_42EC641 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort_o *)sub_B5D5C4(
                                         &Method_BasicHelper_IsValidIndex_Vector3___,
                                         (_DWORD)adjustParam,
                                         index,
                                         method);
    byte_42EC641 = 1;
  }
  if ( !adjustParam )
    goto LABEL_9;
  this = (GameObjectAdjustAssort_o *)BasicHelper__IsValidIndex_Vector3_(
                                       adjustParam->fields.localPosArray,
                                       index,
                                       (const MethodInfo_1AD9214 *)Method_BasicHelper_IsValidIndex_Vector3___);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  localPosArray = adjustParam->fields.localPosArray;
  if ( !localPosArray )
LABEL_9:
    sub_B5D69C(this, adjustParam);
  if ( localPosArray->max_length <= index )
  {
    v7 = sub_B5D6C8(this);
    sub_B5D668(v7, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct GameObjectAdjustAssort___c_StaticFields *static_fields; // x0

  if ( (byte_42E56F0 & 1) == 0 )
  {
    sub_B5D5C4(&GameObjectAdjustAssort___c_TypeInfo, v1, v2, v3);
    byte_42E56F0 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(GameObjectAdjustAssort___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = GameObjectAdjustAssort___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GameObjectAdjustAssort___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  UnityEngine_Object_o *target; // x19

  if ( (byte_42E56F1 & 1) == 0 )
  {
    this = (GameObjectAdjustAssort___c_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E56F1 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  target = (UnityEngine_Object_o *)x->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(target, 0LL, 0LL);
}