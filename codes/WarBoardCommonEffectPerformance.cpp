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
  bool hasValue; // w20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x0
  int32_t v17; // w1
  struct UnityEngine_GameObject_o **p_effectObject; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo_38DF7C0 *v26; // x2
  UnityEngine_Transform_o *v27; // x20
  const MethodInfo_38DF7C0 *v28; // x2
  UnityEngine_Transform_o *v29; // x20
  const MethodInfo_38DF7C0 *v30; // x2
  System_Nullable_Vector3__o v31; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v32; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v33; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v34; // 0:x0.16
  System_Nullable_Vector3__o v35; // 0:x0.16
  System_Nullable_Vector3__o v36; // 0:x0.16
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  v33 = position;
  v32 = angle;
  v31 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_4C549C5 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C3E564(&Method_System_Nullable_Vector3__get_Value__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78273032);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C549C5 = 1;
  }
  this->fields.destroyOnEnd = 1;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effetctPrefab, 0, 0) )
  {
    if ( doInstantiate )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__Instantiate_object__51929168(
              (Il2CppObject *)effetctPrefab,
              parent,
              0,
              (const MethodInfo_3186050 *)Method_UnityEngine_Object_Instantiate_GameObject____78273032);
      v17 = (int)v16;
      this->fields.effectObject = (struct UnityEngine_GameObject_o *)v16;
      p_effectObject = &this->fields.effectObject;
    }
    else
    {
      this->fields.effectObject = effetctPrefab;
      p_effectObject = &this->fields.effectObject;
      v17 = (int)effetctPrefab;
    }
    sub_1C3E508((CGThumbnailListItem_o *)p_effectObject, v17, v14, v15);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_33;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.commonEffect, (int32_t)Component_object, v23, v24);
    effectObject = (UnityEngine_GameObject_o *)this->fields.commonEffect;
    if ( !effectObject )
      goto LABEL_33;
    CommonEffectComponent__Init((CommonEffectComponent_o *)effectObject, 0, 1, 0);
    if ( hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_33;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v34.fields.hasValue = &v33;
      *(_QWORD *)&v34.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      Value = System_Nullable_Vector3___get_Value(v34, v26);
      if ( !transform )
        goto LABEL_33;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, Value, 0);
      else
        UnityEngine_Transform__set_position(transform, Value, 0);
    }
    if ( v32.fields.hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_33;
      v27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v35.fields.hasValue = &v32;
      *(_QWORD *)&v35.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      v38 = System_Nullable_Vector3___get_Value(v35, v28);
      if ( !v27 )
        goto LABEL_33;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v27, v38, 0);
LABEL_30:
        effectObject = this->fields.effectObject;
        this->fields.destroyOnEnd = destroyOnEnd;
        if ( effectObject )
        {
          UnityEngine_GameObject__SetActive(effectObject, 0, 0);
          return;
        }
LABEL_33:
        sub_1C3E7C0(effectObject, v19);
      }
      UnityEngine_Transform__set_localEulerAngles(v27, v38, 0);
    }
    if ( v31.fields.hasValue && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_33;
      v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v36.fields.hasValue = &v31;
      *(_QWORD *)&v36.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      v39 = System_Nullable_Vector3___get_Value(v36, v30);
      if ( !v29 )
        goto LABEL_33;
      UnityEngine_Transform__set_localScale(v29, v39, 0);
    }
    goto LABEL_30;
  }
}


void WarBoardCommonEffectPerformance__AnimantionEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  System_Action_o *animantionEndCallback; // x8

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

  if ( (byte_4C549C7 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__);
    byte_4C549C7 = 1;
  }
  commonEffect = this->fields.commonEffect;
  v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, 0);
  if ( !commonEffect )
    sub_1C3E7C0(v5, v6);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C549C8 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo);
    byte_4C549C8 = 1;
  }
  v3 = sub_1C3E7B0(WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardCommonEffectPerformance__OnEnd(WarBoardCommonEffectPerformance_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_GameObject_o *v8; // x21
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4C549C9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C549C9 = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0, 0) )
  {
    if ( !*p_effectObject )
      sub_1C3E7C0(0, v5);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0);
    if ( this->fields.destroyOnEnd )
    {
      v8 = *p_effectObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)v8, 0);
    }
    *p_effectObject = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.effectObject, 0, v6, v7);
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
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *effectObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v8; // x20
  System_Action_o *v9; // x21

  if ( (byte_4C549C6 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__);
    byte_4C549C6 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0, 0) )
  {
    v6 = this->fields.effectObject;
    if ( !v6 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v6, 1, 0);
  }
  this->fields.animationPlay = 0;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0, 0) )
  {
    v8 = this->fields.commonEffect;
    v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__,
      0);
    if ( v8 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))v8->klass->vtable._6_ForceStart.methodPtr)(
        v8,
        0,
        v9,
        v8->klass->vtable._6_ForceStart.method);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_1C3E7C0(v6, v5);
  }
}


void WarBoardCommonEffectPerformance__SetAnimantionEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.animantionEndCallback = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.animantionEndCallback, (int32_t)callback, (int32_t)method, v3);
}


void WarBoardCommonEffectPerformance__SetAnimantionStartEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.animantionStartEndCallback = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.animantionStartEndCallback, (int32_t)callback, (int32_t)method, v3);
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
  WarBoardCommonEffectPerformance__Execute_d__12_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  UnityEngine_Object_o *klass; // x21
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitWhile_o *v7; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  bool result; // w0

  v2 = this;
  if ( (byte_4C549CA & 1) == 0 )
  {
    sub_1C3E564(&System_Func_bool__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitWhile_TypeInfo);
    this = (WarBoardCommonEffectPerformance__Execute_d__12_o *)sub_1C3E564(&Method_WarBoardCommonEffectPerformance__Execute_b__12_0__);
    byte_4C549CA = 1;
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
      sub_1C3E7C0(this, method);
    klass = (UnityEngine_Object_o *)_4__this[4].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(klass, 0, 0) )
    {
      return 0;
    }
    else
    {
      v6 = (System_Func_bool__o *)sub_1C3E7B0(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(v6, _4__this, Method_WarBoardCommonEffectPerformance__Execute_b__12_0__, 0);
      v7 = (UnityEngine_WaitWhile_o *)sub_1C3E7B0(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v7, v6, 0);
      v2->fields.__2__current = (Il2CppObject *)v7;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C3E508(p__2__current, (int32_t)v7, v9, v10);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    }
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_WarBoardCommonEffectPerformance__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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