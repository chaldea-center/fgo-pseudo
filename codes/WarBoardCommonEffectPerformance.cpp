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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UnityEngine_GameObject_o *v20; // x1
  struct UnityEngine_GameObject_o **p_effectObject; // x22
  struct UnityEngine_GameObject_o **v22; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *commonEffect; // x0
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo_217535C *v34; // x2
  int v35; // s0
  UnityEngine_Transform_o *v38; // x20
  const MethodInfo_217535C *v39; // x2
  int v40; // s0
  UnityEngine_Transform_o *v43; // x20
  const MethodInfo_217535C *v44; // x2
  int v45; // s0
  System_Nullable_Vector3__o v48; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v49; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v50; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v51; // 0:x0.16
  System_Nullable_Vector3__o v52; // 0:x0.16
  System_Nullable_Vector3__o v53; // 0:x0.16

  v10 = *(_QWORD *)&position.fields.value.fields.z;
  v50 = position;
  v49 = angle;
  v48 = scale;
  if ( (byte_42AEB1B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_B52984(&Method_System_Nullable_Vector3__get_Value__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654688);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEB1B = 1;
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
      v20 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__32969592(
                                                 (Il2CppObject *)effetctPrefab,
                                                 parent,
                                                 0,
                                                 (const MethodInfo_1F71378 *)Method_UnityEngine_Object_Instantiate_GameObject____68654688);
      this->fields.effectObject = v20;
      p_effectObject = &this->fields.effectObject;
      v22 = &this->fields.effectObject;
    }
    else
    {
      this->fields.effectObject = effetctPrefab;
      p_effectObject = &this->fields.effectObject;
      v22 = &this->fields.effectObject;
      v20 = effetctPrefab;
    }
    sub_B52920((BattleServantConfConponent_o *)v22, (System_Int32_array **)v20, v14, v15, v16, v17, v18, v19);
    commonEffect = *p_effectObject;
    if ( !*p_effectObject )
      goto LABEL_35;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  commonEffect,
                                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = &this->fields.commonEffect;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
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
      *(_QWORD *)&v51.fields.value.fields.x = &v50;
      *(_QWORD *)&v51.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v35 = System_Nullable_Vector3___get_Value(v51, v34);
      if ( !transform )
        goto LABEL_35;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v35, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v35, 0LL);
    }
    if ( v49.fields.has_value )
    {
      commonEffect = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_35;
      v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)commonEffect, 0LL);
      *(_QWORD *)&v52.fields.value.fields.x = &v49;
      *(_QWORD *)&v52.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v40 = System_Nullable_Vector3___get_Value(v52, v39);
      if ( !v38 )
        goto LABEL_35;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v38, *(UnityEngine_Vector3_o *)&v40, 0LL);
LABEL_32:
        commonEffect = this->fields.effectObject;
        this->fields.destroyOnEnd = destroyOnEnd;
        if ( commonEffect )
        {
          UnityEngine_GameObject__SetActive(commonEffect, 0, 0LL);
          return;
        }
LABEL_35:
        sub_B52A5C(commonEffect, v23);
      }
      UnityEngine_Transform__set_localEulerAngles(v38, *(UnityEngine_Vector3_o *)&v40, 0LL);
    }
    if ( v48.fields.has_value && isLocal )
    {
      commonEffect = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_35;
      v43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)commonEffect, 0LL);
      *(_QWORD *)&v53.fields.value.fields.x = &v48;
      *(_QWORD *)&v53.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v45 = System_Nullable_Vector3___get_Value(v53, v44);
      if ( !v43 )
        goto LABEL_35;
      UnityEngine_Transform__set_localScale(v43, *(UnityEngine_Vector3_o *)&v45, 0LL);
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
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AEB1D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__);
    byte_42AEB1D = 1;
  }
  commonEffect = this->fields.commonEffect;
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_B52A5C(v5, v6);
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))commonEffect->klass->vtable._8_Stop.method)(
    commonEffect,
    0LL,
    v4,
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

  if ( (byte_42AEB1E & 1) == 0 )
  {
    sub_B52984(&WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo);
    byte_42AEB1E = 1;
  }
  v3 = sub_B52A54(WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo);
  WarBoardCommonEffectPerformance__Execute_d__12___ctor((WarBoardCommonEffectPerformance__Execute_d__12_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_42AEB1F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEB1F = 1;
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
      sub_B52A5C(0LL, v5);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( this->fields.destroyOnEnd )
    {
      v12 = *p_effectObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)v12, 0LL);
    }
    *p_effectObject = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v6, v7, v8, v9, v10, v11);
  }
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardCommonEffectPerformance__OnStart(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v7; // x20
  System_Action_o *v8; // x21

  if ( (byte_42AEB1C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__);
    byte_42AEB1C = 1;
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
    v5 = this->fields.effectObject;
    if ( !v5 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v5, 1, 0LL);
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
    v7 = this->fields.commonEffect;
    v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__,
      0LL);
    if ( v7 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v7->klass->vtable._6_ForceStart.method)(
        v7,
        0LL,
        v8,
        v7->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_B52A5C(v5, v4);
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
  sub_B52920(
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
  sub_B52920(
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  UnityEngine_Object_o *klass; // x21
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitWhile_o *v7; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  bool result; // w0

  v2 = this;
  if ( (byte_42AE605 & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_WaitWhile_TypeInfo);
    this = (WarBoardCommonEffectPerformance__Execute_d__12_o *)sub_B52984(&Method_WarBoardCommonEffectPerformance__Execute_b__12_0__);
    byte_42AE605 = 1;
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
      sub_B52A5C(this, method);
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
      v6 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v6,
        _4__this,
        Method_WarBoardCommonEffectPerformance__Execute_b__12_0__,
        (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
      v7 = (UnityEngine_WaitWhile_o *)sub_B52A54(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v7, v6, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v7;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B52920(p__2__current, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_WarBoardCommonEffectPerformance__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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