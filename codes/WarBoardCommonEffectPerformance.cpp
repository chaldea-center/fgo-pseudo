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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UnityEngine_GameObject_o *v24; // x1
  struct UnityEngine_GameObject_o **p_effectObject; // x22
  struct UnityEngine_GameObject_o **v26; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *commonEffect; // x0
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo_2155684 *v38; // x2
  int v39; // s0
  UnityEngine_Transform_o *v42; // x20
  const MethodInfo_2155684 *v43; // x2
  int v44; // s0
  UnityEngine_Transform_o *v47; // x20
  const MethodInfo_2155684 *v48; // x2
  int v49; // s0
  System_Nullable_Vector3__o v52; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v53; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v54; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v55; // 0:x0.16
  System_Nullable_Vector3__o v56; // 0:x0.16
  System_Nullable_Vector3__o v57; // 0:x0.16

  v10 = *(_QWORD *)&position.fields.value.fields.z;
  v54 = position;
  v53 = angle;
  v52 = scale;
  if ( (byte_41865ED & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, parent);
    sub_B2C35C(&Method_System_Nullable_Vector3__get_HasValue__, v14);
    sub_B2C35C(&Method_System_Nullable_Vector3__get_Value__, v15);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450624, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    byte_41865ED = 1;
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
      v24 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__34168824(
                                                 (Il2CppObject *)effetctPrefab,
                                                 parent,
                                                 0,
                                                 (const MethodInfo_2095FF8 *)Method_UnityEngine_Object_Instantiate_GameObject____67450624);
      this->fields.effectObject = v24;
      p_effectObject = &this->fields.effectObject;
      v26 = &this->fields.effectObject;
    }
    else
    {
      this->fields.effectObject = effetctPrefab;
      p_effectObject = &this->fields.effectObject;
      v26 = &this->fields.effectObject;
      v24 = effetctPrefab;
    }
    sub_B2C2F8((BattleServantConfConponent_o *)v26, (System_Int32_array **)v24, v18, v19, v20, v21, v22, v23);
    commonEffect = *p_effectObject;
    if ( !*p_effectObject )
      goto LABEL_35;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  commonEffect,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = &this->fields.commonEffect;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
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
      *(_QWORD *)&v55.fields.value.fields.x = &v54;
      *(_QWORD *)&v55.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v39 = System_Nullable_Vector3___get_Value(v55, v38);
      if ( !transform )
        goto LABEL_35;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
    }
    if ( v53.fields.has_value )
    {
      commonEffect = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_35;
      v42 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)commonEffect, 0LL);
      *(_QWORD *)&v56.fields.value.fields.x = &v53;
      *(_QWORD *)&v56.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v44 = System_Nullable_Vector3___get_Value(v56, v43);
      if ( !v42 )
        goto LABEL_35;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v42, *(UnityEngine_Vector3_o *)&v44, 0LL);
LABEL_32:
        commonEffect = this->fields.effectObject;
        this->fields.destroyOnEnd = destroyOnEnd;
        if ( commonEffect )
        {
          UnityEngine_GameObject__SetActive(commonEffect, 0, 0LL);
          return;
        }
LABEL_35:
        sub_B2C434(commonEffect, v27);
      }
      UnityEngine_Transform__set_localEulerAngles(v42, *(UnityEngine_Vector3_o *)&v44, 0LL);
    }
    if ( v52.fields.has_value && isLocal )
    {
      commonEffect = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_35;
      v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)commonEffect, 0LL);
      *(_QWORD *)&v57.fields.value.fields.x = &v52;
      *(_QWORD *)&v57.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v49 = System_Nullable_Vector3___get_Value(v57, v48);
      if ( !v47 )
        goto LABEL_35;
      UnityEngine_Transform__set_localScale(v47, *(UnityEngine_Vector3_o *)&v49, 0LL);
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
  __int64 v3; // x1
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_41865EF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, v3);
    byte_41865EF = 1;
  }
  commonEffect = this->fields.commonEffect;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_B2C434(v6, v7);
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))commonEffect->klass->vtable._8_Stop.method)(
    commonEffect,
    0LL,
    v5,
    commonEffect->klass->vtable._9_ForceStop.methodPtr);
  ActionExtensions__Call(this->fields.animantionStartEndCallback, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardCommonEffectPerformance__Execute(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_41865F0 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo, method);
    byte_41865F0 = 1;
  }
  v3 = sub_B2C42C(WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo);
  WarBoardCommonEffectPerformance__Execute_d__12___ctor((WarBoardCommonEffectPerformance__Execute_d__12_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardCommonEffectPerformance__OnEnd(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_GameObject_o *v12; // x21

  if ( (byte_41865F1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41865F1 = 1;
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
      sub_B2C434(0LL, v5);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( this->fields.destroyOnEnd )
    {
      v12 = *p_effectObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)v12, 0LL);
    }
    *p_effectObject = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v6, v7, v8, v9, v10, v11);
  }
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardCommonEffectPerformance__OnStart(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *effectObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v9; // x20
  System_Action_o *v10; // x21

  if ( (byte_41865EE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__, v4);
    byte_41865EE = 1;
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
    v7 = this->fields.effectObject;
    if ( !v7 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v7, 1, 0LL);
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
    v9 = this->fields.commonEffect;
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__,
      0LL);
    if ( v9 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v9->klass->vtable._6_ForceStart.method)(
        v9,
        0LL,
        v10,
        v9->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_B2C434(v7, v6);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  WarBoardCommonEffectPerformance__Execute_d__12_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  UnityEngine_Object_o *klass; // x21
  System_Func_bool__o *v10; // x21
  UnityEngine_WaitWhile_o *v11; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4185726 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_WaitWhile_TypeInfo, v5);
    this = (WarBoardCommonEffectPerformance__Execute_d__12_o *)sub_B2C35C(
                                                                 &Method_WarBoardCommonEffectPerformance__Execute_b__12_0__,
                                                                 v6);
    byte_4185726 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = (Il2CppObject *)v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_B2C434(this, method);
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
      v10 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v10,
        _4__this,
        Method_WarBoardCommonEffectPerformance__Execute_b__12_0__,
        (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
      v11 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v11, v10, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v11;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v11);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardCommonEffectPerformance__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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