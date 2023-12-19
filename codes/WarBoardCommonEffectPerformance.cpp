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
  UnityEngine_GameObject_o **p_effectObject; // x22
  struct UnityEngine_GameObject_o **v26; // x0
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o **p_commonEffect; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo_29CF794 *v36; // x2
  int v37; // s0
  UnityEngine_Transform_o *v40; // x20
  const MethodInfo_29CF794 *v41; // x2
  int v42; // s0
  UnityEngine_Transform_o *v45; // x20
  const MethodInfo_29CF794 *v46; // x2
  int v47; // s0
  UnityEngine_GameObject_o *effectObject; // x0
  System_Nullable_Vector3__o v51; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v52; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v53; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v54; // 0:x0.16
  System_Nullable_Vector3__o v55; // 0:x0.16
  System_Nullable_Vector3__o v56; // 0:x0.16

  v10 = *(_QWORD *)&position.fields.value.fields.z;
  v53 = position;
  v52 = angle;
  v51 = scale;
  if ( (byte_40F893C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, parent);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_HasValue__, v14);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_Value__, v15);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874912, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    byte_40F893C = 1;
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
      v24 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__27124684(
                                                 (Il2CppObject *)effetctPrefab,
                                                 parent,
                                                 0,
                                                 (const MethodInfo_19DE3CC *)Method_UnityEngine_Object_Instantiate_GameObject____66874912);
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
    sub_B16F98((BattleServantConfConponent_o *)v26, (System_Int32_array **)v24, v18, v19, v20, v21, v22, v23);
    if ( !*p_effectObject )
      goto LABEL_35;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  *p_effectObject,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = (UnityEngine_Component_o **)&this->fields.commonEffect;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    if ( !this->fields.commonEffect )
      goto LABEL_35;
    CommonEffectComponent__Init(this->fields.commonEffect, 0, 1, 0LL);
    if ( (v10 & 0xFF00000000LL) != 0 )
    {
      if ( !*p_commonEffect )
        goto LABEL_35;
      transform = UnityEngine_Component__get_transform(*p_commonEffect, 0LL);
      *(_QWORD *)&v54.fields.value.fields.x = &v53;
      *(_QWORD *)&v54.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v37 = System_Nullable_Vector3___get_Value(v54, v36);
      if ( !transform )
        goto LABEL_35;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v37, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v37, 0LL);
    }
    if ( v52.fields.has_value )
    {
      if ( !*p_commonEffect )
        goto LABEL_35;
      v40 = UnityEngine_Component__get_transform(*p_commonEffect, 0LL);
      *(_QWORD *)&v55.fields.value.fields.x = &v52;
      *(_QWORD *)&v55.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v42 = System_Nullable_Vector3___get_Value(v55, v41);
      if ( !v40 )
        goto LABEL_35;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v40, *(UnityEngine_Vector3_o *)&v42, 0LL);
LABEL_32:
        effectObject = this->fields.effectObject;
        this->fields.destroyOnEnd = destroyOnEnd;
        if ( effectObject )
        {
          UnityEngine_GameObject__SetActive(effectObject, 0, 0LL);
          return;
        }
LABEL_35:
        sub_B170D4();
      }
      UnityEngine_Transform__set_localEulerAngles(v40, *(UnityEngine_Vector3_o *)&v42, 0LL);
    }
    if ( v51.fields.has_value && isLocal )
    {
      if ( !*p_commonEffect )
        goto LABEL_35;
      v45 = UnityEngine_Component__get_transform(*p_commonEffect, 0LL);
      *(_QWORD *)&v56.fields.value.fields.x = &v51;
      *(_QWORD *)&v56.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v47 = System_Nullable_Vector3___get_Value(v56, v46);
      if ( !v45 )
        goto LABEL_35;
      UnityEngine_Transform__set_localScale(v45, *(UnityEngine_Vector3_o *)&v47, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v8; // x21

  if ( (byte_40F893E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, v6);
    byte_40F893E = 1;
  }
  commonEffect = this->fields.commonEffect;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_B170D4();
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))commonEffect->klass->vtable._8_Stop.method)(
    commonEffect,
    0LL,
    v8,
    commonEffect->klass->vtable._9_ForceStop.methodPtr);
  ActionExtensions__Call(this->fields.animantionStartEndCallback, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardCommonEffectPerformance__Execute(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F893F & 1) == 0 )
  {
    sub_B16FFC(&WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo, method);
    byte_40F893F = 1;
  }
  v6 = sub_B170CC(WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo, method, v2, v3, v4);
  WarBoardCommonEffectPerformance__Execute_d__12___ctor((WarBoardCommonEffectPerformance__Execute_d__12_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardCommonEffectPerformance__OnEnd(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_GameObject_o *v11; // x21

  if ( (byte_40F8940 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8940 = 1;
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
      sub_B170D4();
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( this->fields.destroyOnEnd )
    {
      v11 = *p_effectObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v11, 0LL);
    }
    *p_effectObject = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v5, v6, v7, v8, v9, v10);
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
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Object_o *commonEffect; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct CommonEffectComponent_o *v12; // x20
  System_Action_o *v13; // x21

  if ( (byte_40F893D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__, v4);
    byte_40F893D = 1;
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
    v6 = this->fields.effectObject;
    if ( !v6 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v6, 1, 0LL);
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
    v12 = this->fields.commonEffect;
    v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__,
      0LL);
    if ( v12 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v12->klass->vtable._6_ForceStart.method)(
        v12,
        0LL,
        v13,
        v12->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_B170D4();
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
  sub_B16F98(
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
  sub_B16F98(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  UnityEngine_Object_o *klass; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Func_bool__o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UnityEngine_WaitWhile_o *v19; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  bool result; // w0

  if ( (byte_40F7AC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_WaitWhile_TypeInfo, v5);
    sub_B16FFC(&Method_WarBoardCommonEffectPerformance__Execute_b__12_0__, v6);
    byte_40F7AC8 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B170D4();
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
      v14 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v10, v11, v12, v13);
      System_Func_bool____ctor(
        v14,
        _4__this,
        Method_WarBoardCommonEffectPerformance__Execute_b__12_0__,
        (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
      v19 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v15, v16, v17, v18);
      UnityEngine_WaitWhile___ctor(v19, v14, 0LL);
      this->fields.__2__current = (Il2CppObject *)v19;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v19,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardCommonEffectPerformance__Execute_d__12_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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