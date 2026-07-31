void WarBoardCommonEffectPerformance___ctor(
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
  bool hasValue; // w21
  bool v11; // w22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x0
  int32_t v25; // w1
  struct UnityEngine_GameObject_o **p_effectObject; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_45B5034 *v38; // x2
  UnityEngine_Transform_o *v39; // x21
  const MethodInfo_45B5034 *v40; // x2
  UnityEngine_Transform_o *v41; // x20
  const MethodInfo_45B5034 *v42; // x2
  UnityEngine_Transform_o *v43; // x21
  const MethodInfo_45B5034 *v44; // x2
  UnityEngine_Transform_o *v45; // x20
  const MethodInfo_45B5034 *v46; // x2
  System_Nullable_Vector3__o v47; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v48; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v49; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v50; // 0:x0.16
  System_Nullable_Vector3__o v51; // 0:x0.16
  System_Nullable_Vector3__o v52; // 0:x0.16
  System_Nullable_Vector3__o v53; // 0:x0.16
  System_Nullable_Vector3__o v54; // 0:x0.16
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  v49 = position;
  v48 = angle;
  hasValue = angle.fields.hasValue;
  v11 = position.fields.hasValue;
  v47 = scale;
  if ( (byte_5936233 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_Vector3__get_Value__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575184);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936233 = 1;
  }
  this->fields.destroyOnEnd = 1;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effetctPrefab, 0, 0) )
  {
    if ( doInstantiate )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
      v24 = UnityEngine_Object__Instantiate_object__59507108(
              (Il2CppObject *)effetctPrefab,
              parent,
              0,
              (const MethodInfo_38C01A4 *)Method_UnityEngine_Object_Instantiate_GameObject____91575184);
      v25 = (int)v24;
      this->fields.effectObject = (struct UnityEngine_GameObject_o *)v24;
      p_effectObject = &this->fields.effectObject;
    }
    else
    {
      v25 = (int)effetctPrefab;
      this->fields.effectObject = effetctPrefab;
      p_effectObject = &this->fields.effectObject;
    }
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_effectObject, v25, v18, v19, v20, v21, v22, v23);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_38;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.commonEffect,
      (int32_t)Component_object,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    effectObject = (UnityEngine_GameObject_o *)this->fields.commonEffect;
    if ( !effectObject )
      goto LABEL_38;
    CommonEffectComponent__Init((CommonEffectComponent_o *)effectObject, 0, 1, 0);
    if ( v11 )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( isLocal )
      {
        if ( !effectObject )
          goto LABEL_38;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
        *(_QWORD *)&v50.fields.hasValue = &v49;
        *(_QWORD *)&v50.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
        Value = System_Nullable_Vector3___get_Value(v50, v38);
        if ( !transform )
          goto LABEL_38;
        UnityEngine_Transform__set_localPosition(transform, Value, 0);
        if ( !v48.fields.hasValue )
          goto LABEL_24;
        goto LABEL_21;
      }
      if ( !effectObject )
        goto LABEL_38;
      v43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v53.fields.hasValue = &v49;
      *(_QWORD *)&v53.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      v58 = System_Nullable_Vector3___get_Value(v53, v44);
      if ( !v43 )
        goto LABEL_38;
      UnityEngine_Transform__set_position(v43, v58, 0);
      if ( !v48.fields.hasValue )
        goto LABEL_35;
    }
    else
    {
      if ( !hasValue )
      {
LABEL_24:
        if ( scale.fields.hasValue && isLocal )
        {
          effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
          if ( !*p_commonEffect )
            goto LABEL_38;
          v41 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
          *(_QWORD *)&v52.fields.hasValue = &v47;
          *(_QWORD *)&v52.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
          v57 = System_Nullable_Vector3___get_Value(v52, v42);
          if ( !v41 )
            goto LABEL_38;
          UnityEngine_Transform__set_localScale(v41, v57, 0);
        }
LABEL_35:
        effectObject = this->fields.effectObject;
        this->fields.destroyOnEnd = destroyOnEnd;
        if ( effectObject )
        {
          UnityEngine_GameObject__SetActive(effectObject, 0, 0);
          return;
        }
LABEL_38:
        sub_21FFECC(effectObject, v27);
      }
      if ( isLocal )
      {
LABEL_21:
        effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
        if ( !*p_commonEffect )
          goto LABEL_38;
        v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
        *(_QWORD *)&v51.fields.hasValue = &v48;
        *(_QWORD *)&v51.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
        v56 = System_Nullable_Vector3___get_Value(v51, v40);
        if ( !v39 )
          goto LABEL_38;
        UnityEngine_Transform__set_localEulerAngles(v39, v56, 0);
        goto LABEL_24;
      }
    }
    effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
    if ( !*p_commonEffect )
      goto LABEL_38;
    v45 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
    *(_QWORD *)&v54.fields.hasValue = &v48;
    *(_QWORD *)&v54.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    v59 = System_Nullable_Vector3___get_Value(v54, v46);
    if ( !v45 )
      goto LABEL_38;
    UnityEngine_Transform__set_eulerAngles(v45, v59, 0);
    goto LABEL_35;
  }
}


void WarBoardCommonEffectPerformance__AnimantionEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  System_Action_o *animantionEndCallback; // x0

  animantionEndCallback = this->fields.animantionEndCallback;
  this->fields.animationPlay = 0;
  ActionExtensions__Call(animantionEndCallback, 0);
}


void WarBoardCommonEffectPerformance__AnimantionEndStartCallback(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5936235 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__);
    byte_5936235 = 1;
  }
  commonEffect = this->fields.commonEffect;
  v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, 0);
  if ( !commonEffect )
    sub_21FFECC(v5, v6);
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))commonEffect->klass->vtable._8_Stop.methodPtr)(
    commonEffect,
    0,
    v4,
    commonEffect->klass->vtable._8_Stop.method);
  ActionExtensions__Call(this->fields.animantionStartEndCallback, 0);
}


System_Collections_IEnumerator_o *WarBoardCommonEffectPerformance__Execute(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5936236 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo);
    byte_5936236 = 1;
  }
  v3 = sub_21FFEBC(WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardCommonEffectPerformance__OnEnd(WarBoardCommonEffectPerformance_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_GameObject_o *v14; // x21
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_5936237 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936237 = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0, 0) )
  {
    if ( !*p_effectObject )
      sub_21FFECC(0, v6);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0);
    if ( this->fields.destroyOnEnd )
    {
      v14 = *p_effectObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)v14, 0);
    }
    *p_effectObject = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.effectObject, 0, v8, v9, v10, v11, v12, v13);
  }
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardCommonEffectPerformance__OnStart(WarBoardCommonEffectPerformance_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *effectObject; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_c *v9; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v11; // x20
  System_Action_o *v12; // x21

  if ( (byte_5936234 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__);
    byte_5936234 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0, 0) )
  {
    v8 = this->fields.effectObject;
    if ( !v8 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v8, 1, 0);
  }
  v9 = UnityEngine_Object_TypeInfo;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  this->fields.animationPlay = 0;
  if ( !*(&v9->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v9, v6, v7);
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0, 0) )
  {
    v11 = this->fields.commonEffect;
    v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__,
      0);
    if ( v11 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))v11->klass->vtable._6_ForceStart.methodPtr)(
        v11,
        0,
        v12,
        v11->klass->vtable._6_ForceStart.method);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_21FFECC(v8, v6);
  }
}


void WarBoardCommonEffectPerformance__SetAnimantionEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.animantionEndCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animantionEndCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardCommonEffectPerformance__SetAnimantionStartEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.animantionStartEndCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animantionStartEndCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool WarBoardCommonEffectPerformance___Execute_b__12_0(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  return this->fields.animationPlay;
}


void WarBoardCommonEffectPerformance__Execute_d__12___ctor(
        WarBoardCommonEffectPerformance__Execute_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardCommonEffectPerformance__Execute_d__12__MoveNext(
        WarBoardCommonEffectPerformance__Execute_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  UnityEngine_Object_o *klass; // x21
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitWhile_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w8

  if ( (byte_5936238 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    sub_21FFC50(&Method_WarBoardCommonEffectPerformance__Execute_b__12_0__);
    byte_5936238 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v16 = -1;
    goto LABEL_11;
  }
  if ( !_1__state )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(0, method);
    klass = (UnityEngine_Object_o *)_4__this[4].klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
    {
      v8 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(v8, _4__this, Method_WarBoardCommonEffectPerformance__Execute_b__12_0__, 0);
      v9 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v9, v8, 0);
      this->fields.__2__current = (Il2CppObject *)v9;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
        (int32_t)v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v16 = 1;
      result = 1;
LABEL_11:
      this->fields.__1__state = v16;
      return result;
    }
    return 0;
  }
  return result;
}


Il2CppObject *WarBoardCommonEffectPerformance__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardCommonEffectPerformance__Execute_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardCommonEffectPerformance__Execute_d__12__System_Collections_IEnumerator_Reset(
        WarBoardCommonEffectPerformance__Execute_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardCommonEffectPerformance__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *WarBoardCommonEffectPerformance__Execute_d__12__System_Collections_IEnumerator_get_Current(
        WarBoardCommonEffectPerformance__Execute_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardCommonEffectPerformance__Execute_d__12__System_IDisposable_Dispose(
        WarBoardCommonEffectPerformance__Execute_d__12_o *this,
        const MethodInfo *method)
{
  ;
}