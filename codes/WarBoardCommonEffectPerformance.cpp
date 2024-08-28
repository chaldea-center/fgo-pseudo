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
  bool hasValue; // w20
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x0
  int32_t v21; // w1
  struct UnityEngine_GameObject_o **p_effectObject; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo_35DD3F0 *v30; // x2
  int v31; // s0
  UnityEngine_Transform_o *v34; // x20
  const MethodInfo_35DD3F0 *v35; // x2
  int v36; // s0
  UnityEngine_Transform_o *v39; // x20
  const MethodInfo_35DD3F0 *v40; // x2
  int v41; // s0
  System_Nullable_Vector3__o v44; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v45; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v46; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v47; // 0:x0.16
  System_Nullable_Vector3__o v48; // 0:x0.16
  System_Nullable_Vector3__o v49; // 0:x0.16

  v46 = position;
  v45 = angle;
  v44 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_4A06B57 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, parent);
    sub_1B686D4(&Method_System_Nullable_Vector3__get_HasValue__, v14);
    sub_1B686D4(&Method_System_Nullable_Vector3__get_Value__, v15);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject____75841296, v16);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v17);
    byte_4A06B57 = 1;
  }
  this->fields.destroyOnEnd = 1;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effetctPrefab, 0LL, 0LL) )
  {
    if ( doInstantiate )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v20 = UnityEngine_Object__Instantiate_object__49072308(
              (Il2CppObject *)effetctPrefab,
              parent,
              0,
              (const MethodInfo_2ECC8B4 *)Method_UnityEngine_Object_Instantiate_GameObject____75841296);
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
    sub_1B68678((ServantStatusBattleListViewItem_o *)p_effectObject, v21, v18, v19);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_33;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.commonEffect, (int32_t)Component_object, v27, v28);
    effectObject = (UnityEngine_GameObject_o *)this->fields.commonEffect;
    if ( !effectObject )
      goto LABEL_33;
    CommonEffectComponent__Init((CommonEffectComponent_o *)effectObject, 0, 1, 0LL);
    if ( hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_33;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v47.fields.hasValue = &v46;
      *(_QWORD *)&v47.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v31 = System_Nullable_Vector3___get_Value(v47, v30);
      if ( !transform )
        goto LABEL_33;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
    }
    if ( v45.fields.hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_33;
      v34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v48.fields.hasValue = &v45;
      *(_QWORD *)&v48.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v36 = System_Nullable_Vector3___get_Value(v48, v35);
      if ( !v34 )
        goto LABEL_33;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v34, *(UnityEngine_Vector3_o *)&v36, 0LL);
LABEL_30:
        effectObject = this->fields.effectObject;
        this->fields.destroyOnEnd = destroyOnEnd;
        if ( effectObject )
        {
          UnityEngine_GameObject__SetActive(effectObject, 0, 0LL);
          return;
        }
LABEL_33:
        sub_1B68930(effectObject, v23);
      }
      UnityEngine_Transform__set_localEulerAngles(v34, *(UnityEngine_Vector3_o *)&v36, 0LL);
    }
    if ( v44.fields.hasValue && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_33;
      v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v49.fields.hasValue = &v44;
      *(_QWORD *)&v49.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v41 = System_Nullable_Vector3___get_Value(v49, v40);
      if ( !v39 )
        goto LABEL_33;
      UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v41, 0LL);
    }
    goto LABEL_30;
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

  if ( (byte_4A06B59 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, v3);
    byte_4A06B59 = 1;
  }
  commonEffect = this->fields.commonEffect;
  v5 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_1B68930(v6, v7);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A06B5A & 1) == 0 )
  {
    sub_1B686D4(&WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo, method);
    byte_4A06B5A = 1;
  }
  v3 = sub_1B68920(WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardCommonEffectPerformance__OnEnd(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_GameObject_o *v8; // x21
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4A06B5B & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A06B5B = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) )
  {
    if ( !*p_effectObject )
      sub_1B68930(0LL, v5);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( this->fields.destroyOnEnd )
    {
      v8 = *p_effectObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69171816((UnityEngine_Object_o *)v8, 0LL);
    }
    *p_effectObject = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.effectObject, 0, v6, v7);
  }
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardCommonEffectPerformance__OnStart(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *effectObject; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_4A06B58 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    sub_1B686D4(&Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__, v4);
    byte_4A06B58 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) )
  {
    v8 = this->fields.effectObject;
    if ( !v8 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v8, 1, 0LL);
  }
  this->fields.animationPlay = 0;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
  {
    v10 = this->fields.commonEffect;
    v11 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__,
      0LL);
    if ( v10 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v10->klass->vtable._6_ForceStart.method)(
        v10,
        0LL,
        v11,
        v10->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_1B68930(v8, v7);
  }
}


void __fastcall WarBoardCommonEffectPerformance__SetAnimantionEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.animantionEndCallback = callback;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.animantionEndCallback,
    (int32_t)callback,
    (int32_t)method,
    v3);
}


void __fastcall WarBoardCommonEffectPerformance__SetAnimantionStartEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.animantionStartEndCallback = callback;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.animantionStartEndCallback,
    (int32_t)callback,
    (int32_t)method,
    v3);
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  UnityEngine_Object_o *klass; // x21
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitWhile_o *v10; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  bool result; // w0

  v2 = this;
  if ( (byte_4A06B5C & 1) == 0 )
  {
    sub_1B686D4(&System_Func_bool__TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    sub_1B686D4(&UnityEngine_WaitWhile_TypeInfo, v4);
    this = (WarBoardCommonEffectPerformance__Execute_d__12_o *)sub_1B686D4(
                                                                 &Method_WarBoardCommonEffectPerformance__Execute_b__12_0__,
                                                                 v5);
    byte_4A06B5C = 1;
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
      sub_1B68930(this, method);
    klass = (UnityEngine_Object_o *)_4__this[4].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      return 0;
    }
    else
    {
      v9 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(v9, _4__this, Method_WarBoardCommonEffectPerformance__Execute_b__12_0__, 0LL);
      v10 = (UnityEngine_WaitWhile_o *)sub_1B68920(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v10, v9, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v10;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B68678(p__2__current, (int32_t)v10, v12, v13);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_WarBoardCommonEffectPerformance__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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