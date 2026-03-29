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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *v20; // x0
  int32_t v21; // w1
  struct UnityEngine_GameObject_o **p_effectObject; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo_39A43EC *v34; // x2
  UnityEngine_Transform_o *v35; // x20
  const MethodInfo_39A43EC *v36; // x2
  UnityEngine_Transform_o *v37; // x20
  const MethodInfo_39A43EC *v38; // x2
  System_Nullable_Vector3__o v39; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v40; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v41; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v42; // 0:x0.16
  System_Nullable_Vector3__o v43; // 0:x0.16
  System_Nullable_Vector3__o v44; // 0:x0.16
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  v41 = position;
  v40 = angle;
  v39 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_4D2E618 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C93AD4(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_Vector3__get_Value__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146680);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E618 = 1;
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
      v20 = UnityEngine_Object__Instantiate_object__52629512(
              (Il2CppObject *)effetctPrefab,
              parent,
              0,
              (const MethodInfo_3231008 *)Method_UnityEngine_Object_Instantiate_GameObject____79146680);
      v21 = (int)v20;
      this->fields.effectObject = (struct UnityEngine_GameObject_o *)v20;
      p_effectObject = &this->fields.effectObject;
    }
    else
    {
      this->fields.effectObject = effetctPrefab;
      p_effectObject = &this->fields.effectObject;
      v21 = (int)effetctPrefab;
    }
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_effectObject, v21, v14, v15, v16, v17, v18, v19);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_33;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.commonEffect,
      (int32_t)Component_object,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
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
      *(_QWORD *)&v42.fields.hasValue = &v41;
      *(_QWORD *)&v42.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      Value = System_Nullable_Vector3___get_Value(v42, v34);
      if ( !transform )
        goto LABEL_33;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, Value, 0);
      else
        UnityEngine_Transform__set_position(transform, Value, 0);
    }
    if ( v40.fields.hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_33;
      v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v43.fields.hasValue = &v40;
      *(_QWORD *)&v43.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      v46 = System_Nullable_Vector3___get_Value(v43, v36);
      if ( !v35 )
        goto LABEL_33;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v35, v46, 0);
LABEL_30:
        effectObject = this->fields.effectObject;
        this->fields.destroyOnEnd = destroyOnEnd;
        if ( effectObject )
        {
          UnityEngine_GameObject__SetActive(effectObject, 0, 0);
          return;
        }
LABEL_33:
        sub_1C93D2C(effectObject, v23);
      }
      UnityEngine_Transform__set_localEulerAngles(v35, v46, 0);
    }
    if ( v39.fields.hasValue && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_33;
      v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v44.fields.hasValue = &v39;
      *(_QWORD *)&v44.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      v47 = System_Nullable_Vector3___get_Value(v44, v38);
      if ( !v37 )
        goto LABEL_33;
      UnityEngine_Transform__set_localScale(v37, v47, 0);
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

  if ( (byte_4D2E61A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__);
    byte_4D2E61A = 1;
  }
  commonEffect = this->fields.commonEffect;
  v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, 0);
  if ( !commonEffect )
    sub_1C93D2C(v5, v6);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E61B & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo);
    byte_4D2E61B = 1;
  }
  v3 = sub_1C93D20(WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardCommonEffectPerformance__OnEnd(WarBoardCommonEffectPerformance_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_GameObject_o *v12; // x21
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4D2E61C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E61C = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0, 0) )
  {
    if ( !*p_effectObject )
      sub_1C93D2C(0, v5);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0);
    if ( this->fields.destroyOnEnd )
    {
      v12 = *p_effectObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)v12, 0);
    }
    *p_effectObject = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.effectObject, 0, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4D2E619 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__);
    byte_4D2E619 = 1;
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
    v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
    sub_1C93D2C(v6, v5);
  }
}


void WarBoardCommonEffectPerformance__SetAnimantionEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.animantionEndCallback = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.animantionEndCallback,
    (int32_t)callback,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.animantionStartEndCallback = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.animantionStartEndCallback,
    (int32_t)callback,
    (int32_t)method,
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
  WarBoardCommonEffectPerformance__Execute_d__12_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  UnityEngine_Object_o *klass; // x21
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitWhile_o *v7; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v2 = this;
  if ( (byte_4D2E61D & 1) == 0 )
  {
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitWhile_TypeInfo);
    this = (WarBoardCommonEffectPerformance__Execute_d__12_o *)sub_1C93AD4(&Method_WarBoardCommonEffectPerformance__Execute_b__12_0__);
    byte_4D2E61D = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    return 0;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = (Il2CppObject *)v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C93D2C(this, method);
    klass = (UnityEngine_Object_o *)_4__this[4].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(klass, 0, 0) )
    {
      return 0;
    }
    else
    {
      v6 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(v6, _4__this, Method_WarBoardCommonEffectPerformance__Execute_b__12_0__, 0);
      v7 = (UnityEngine_WaitWhile_o *)sub_1C93D20(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v7, v6, 0);
      v2->fields.__2__current = (Il2CppObject *)v7;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C93A78(p__2__current, (int32_t)v7, v9, v10, v11, v12, v13, v14);
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return 1;
    }
  }
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_WarBoardCommonEffectPerformance__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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