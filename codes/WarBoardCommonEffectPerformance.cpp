// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardCommonEffectPerformance___ctor(
        WarBoardCommonEffectPerformance_o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_GameObject_o *effetctPrefab,
        System_Nullable_Vector3__o position,
        System_Nullable_Vector3__o angle,
        System_Nullable_Vector3__o scale,
        bool isLocal,
        bool doInstantiate,
        bool destroyOnEnd,
        const MethodInfo *method)
{
  __int64 v10; // x20
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UnityEngine_GameObject_o *v32; // x1
  struct UnityEngine_GameObject_o **p_effectObject; // x22
  struct UnityEngine_GameObject_o **v34; // x0
  __int64 v35; // x1
  UnityEngine_GameObject_o *commonEffect; // x0
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo_234ED58 *v46; // x2
  int v47; // s0
  UnityEngine_Transform_o *v50; // x20
  const MethodInfo_234ED58 *v51; // x2
  int v52; // s0
  UnityEngine_Transform_o *v55; // x20
  const MethodInfo_234ED58 *v56; // x2
  int v57; // s0
  System_Nullable_Vector3__o v60; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v61; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v62; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v63; // 0:x0.16
  System_Nullable_Vector3__o v64; // 0:x0.16
  System_Nullable_Vector3__o v65; // 0:x0.16

  v10 = *(_QWORD *)&position.fields.value.fields.z;
  v62 = position;
  v61 = angle;
  v60 = scale;
  if ( (byte_42E76EF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___,
      (_DWORD)parent,
      (_DWORD)effetctPrefab,
      *(_QWORD *)&position.fields.value.fields.x);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_HasValue__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_Value__, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882832, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    byte_42E76EF = 1;
  }
  this->fields.destroyOnEnd = 1;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effetctPrefab, 0LL, 0LL) )
  {
    if ( doInstantiate )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v32 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__31876248(
                                                 (Il2CppObject *)effetctPrefab,
                                                 parent,
                                                 0,
                                                 (const MethodInfo_1E66498 *)Method_UnityEngine_Object_Instantiate_GameObject____68882832);
      this->fields.effectObject = v32;
      p_effectObject = &this->fields.effectObject;
      v34 = &this->fields.effectObject;
    }
    else
    {
      this->fields.effectObject = effetctPrefab;
      p_effectObject = &this->fields.effectObject;
      v34 = &this->fields.effectObject;
      v32 = effetctPrefab;
    }
    sub_B5D560((BattleServantConfConponent_o *)v34, (System_Int32_array **)v32, v26, v27, v28, v29, v30, v31);
    commonEffect = *p_effectObject;
    if ( !*p_effectObject )
      goto LABEL_35;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  commonEffect,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = &this->fields.commonEffect;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    commonEffect = (UnityEngine_GameObject_o *)this->fields.commonEffect;
    if ( !commonEffect )
      goto LABEL_35;
    CommonEffectComponent__Init((CommonEffectComponent_o *)commonEffect, 0, 1, 0LL);
    if ( (v10 & 0xFF00000000LL) != 0 )
    {
      commonEffect = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_35;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)commonEffect, 0LL);
      *(_QWORD *)&v63.fields.value.fields.x = &v62;
      *(_QWORD *)&v63.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v47 = System_Nullable_Vector3___get_Value(v63, v46);
      if ( !transform )
        goto LABEL_35;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v47, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v47, 0LL);
    }
    if ( v61.fields.has_value )
    {
      commonEffect = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_35;
      v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)commonEffect, 0LL);
      *(_QWORD *)&v64.fields.value.fields.x = &v61;
      *(_QWORD *)&v64.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v52 = System_Nullable_Vector3___get_Value(v64, v51);
      if ( !v50 )
        goto LABEL_35;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v50, *(UnityEngine_Vector3_o *)&v52, 0LL);
LABEL_32:
        commonEffect = this->fields.effectObject;
        this->fields.destroyOnEnd = destroyOnEnd;
        if ( commonEffect )
        {
          UnityEngine_GameObject__SetActive(commonEffect, 0, 0LL);
          return;
        }
LABEL_35:
        sub_B5D69C(commonEffect, v35);
      }
      UnityEngine_Transform__set_localEulerAngles(v50, *(UnityEngine_Vector3_o *)&v52, 0LL);
    }
    if ( v60.fields.has_value && isLocal )
    {
      commonEffect = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_35;
      v55 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)commonEffect, 0LL);
      *(_QWORD *)&v65.fields.value.fields.x = &v60;
      *(_QWORD *)&v65.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v57 = System_Nullable_Vector3___get_Value(v65, v56);
      if ( !v55 )
        goto LABEL_35;
      UnityEngine_Transform__set_localScale(v55, *(UnityEngine_Vector3_o *)&v57, 0LL);
    }
    goto LABEL_32;
  }
}


void __fastcall WarBoardCommonEffectPerformance__AnimantionEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  System_Action_o *animantionEndCallback; // x8

  animantionEndCallback = this->fields.animantionEndCallback;
  this->fields.animationPlay = 0;
  ActionExtensions__Call(animantionEndCallback, 0LL);
}


void __fastcall WarBoardCommonEffectPerformance__AnimantionEndStartCallback(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E76F1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, v5, v6, v7);
    byte_42E76F1 = 1;
  }
  commonEffect = this->fields.commonEffect;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))commonEffect->klass->vtable._8_Stop.method)(
    commonEffect,
    0LL,
    v9,
    commonEffect->klass->vtable._9_ForceStop.methodPtr);
  ActionExtensions__Call(this->fields.animantionStartEndCallback, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardCommonEffectPerformance__Execute(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E76F2 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E76F2 = 1;
  }
  v5 = sub_B5D694(WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo);
  WarBoardCommonEffectPerformance__Execute_d__12___ctor((WarBoardCommonEffectPerformance__Execute_d__12_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardCommonEffectPerformance__OnEnd(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *v14; // x21

  if ( (byte_42E76F3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E76F3 = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) )
  {
    if ( !*p_effectObject )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( this->fields.destroyOnEnd )
    {
      v14 = *p_effectObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)v14, 0LL);
    }
    *p_effectObject = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardCommonEffectPerformance__OnStart(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *effectObject; // x20
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v15; // x20
  System_Action_o *v16; // x21

  if ( (byte_42E76F0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__, v8, v9, v10);
    byte_42E76F0 = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) )
  {
    v13 = this->fields.effectObject;
    if ( !v13 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v13, 1, 0LL);
  }
  this->fields.animationPlay = 0;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
  {
    v15 = this->fields.commonEffect;
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__,
      0LL);
    if ( v15 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v15->klass->vtable._6_ForceStart.method)(
        v15,
        0LL,
        v16,
        v15->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_B5D69C(v13, v12);
  }
}


void __fastcall WarBoardCommonEffectPerformance__SetAnimantionEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.animantionEndCallback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animantionEndCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardCommonEffectPerformance__SetAnimantionStartEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.animantionStartEndCallback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animantionStartEndCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall WarBoardCommonEffectPerformance___Execute_b__12_0(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  return this->fields.animationPlay;
}


void __fastcall WarBoardCommonEffectPerformance__Execute_d__12___ctor(
        WarBoardCommonEffectPerformance__Execute_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardCommonEffectPerformance__Execute_d__12__MoveNext(
        WarBoardCommonEffectPerformance__Execute_d__12_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardCommonEffectPerformance__Execute_d__12_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  UnityEngine_Object_o *klass; // x21
  System_Func_bool__o *v20; // x21
  UnityEngine_WaitWhile_o *v21; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  bool result; // w0

  v4 = this;
  if ( (byte_42E7079 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_WaitWhile_TypeInfo, v11, v12, v13);
    this = (WarBoardCommonEffectPerformance__Execute_d__12_o *)sub_B5D5C4(
                                                                 &Method_WarBoardCommonEffectPerformance__Execute_b__12_0__,
                                                                 v14,
                                                                 v15,
                                                                 v16);
    byte_42E7079 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = (Il2CppObject *)v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      sub_B5D69C(this, method);
    klass = (UnityEngine_Object_o *)_4__this[4].klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      return 0;
    }
    else
    {
      v20 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v20,
        _4__this,
        Method_WarBoardCommonEffectPerformance__Execute_b__12_0__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v21 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v21, v20, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v21;
      p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(p__2__current, (System_Int32_array **)v21, v23, v24, v25, v26, v27, v28);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall WarBoardCommonEffectPerformance__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardCommonEffectPerformance__Execute_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardCommonEffectPerformance__Execute_d__12__System_Collections_IEnumerator_Reset(
        WarBoardCommonEffectPerformance__Execute_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardCommonEffectPerformance__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall WarBoardCommonEffectPerformance__Execute_d__12__System_Collections_IEnumerator_get_Current(
        WarBoardCommonEffectPerformance__Execute_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardCommonEffectPerformance__Execute_d__12__System_IDisposable_Dispose(
        WarBoardCommonEffectPerformance__Execute_d__12_o *this,
        const MethodInfo *method)
{
  ;
}