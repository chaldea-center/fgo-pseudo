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
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo_35D202C *v29; // x2
  int v30; // s0
  UnityEngine_Transform_o *v33; // x20
  const MethodInfo_35D202C *v34; // x2
  int v35; // s0
  UnityEngine_Transform_o *v38; // x20
  const MethodInfo_35D202C *v39; // x2
  int v40; // s0
  System_Nullable_Vector3__o v43; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v44; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v45; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v46; // 0:x0.16
  System_Nullable_Vector3__o v47; // 0:x0.16
  System_Nullable_Vector3__o v48; // 0:x0.16

  v45 = position;
  v44 = angle;
  v43 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_49FA31A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, parent);
    sub_1B640C8(&Method_System_Nullable_Vector3__get_HasValue__, v14);
    sub_1B640C8(&Method_System_Nullable_Vector3__get_Value__, v15);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791912, v16);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v17);
    byte_49FA31A = 1;
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
      v20 = UnityEngine_Object__Instantiate_object__49004092(
              (Il2CppObject *)effetctPrefab,
              parent,
              0,
              (const MethodInfo_2EBBE3C *)Method_UnityEngine_Object_Instantiate_GameObject____75791912);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_effectObject, v21, v18, v19);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_33;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commonEffect, (int32_t)Component_object, v26, v27);
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
      *(_QWORD *)&v46.fields.hasValue = &v45;
      *(_QWORD *)&v46.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v30 = System_Nullable_Vector3___get_Value(v46, v29);
      if ( !transform )
        goto LABEL_33;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
    }
    if ( v44.fields.hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_33;
      v33 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v47.fields.hasValue = &v44;
      *(_QWORD *)&v47.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v35 = System_Nullable_Vector3___get_Value(v47, v34);
      if ( !v33 )
        goto LABEL_33;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v33, *(UnityEngine_Vector3_o *)&v35, 0LL);
LABEL_30:
        effectObject = this->fields.effectObject;
        this->fields.destroyOnEnd = destroyOnEnd;
        if ( effectObject )
        {
          UnityEngine_GameObject__SetActive(effectObject, 0, 0LL);
          return;
        }
LABEL_33:
        sub_1B64324(effectObject);
      }
      UnityEngine_Transform__set_localEulerAngles(v33, *(UnityEngine_Vector3_o *)&v35, 0LL);
    }
    if ( v43.fields.hasValue && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_33;
      v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v48.fields.hasValue = &v43;
      *(_QWORD *)&v48.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v40 = System_Nullable_Vector3___get_Value(v48, v39);
      if ( !v38 )
        goto LABEL_33;
      UnityEngine_Transform__set_localScale(v38, *(UnityEngine_Vector3_o *)&v40, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49FA31C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, v4);
    byte_49FA31C = 1;
  }
  commonEffect = this->fields.commonEffect;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_1B64324(v7);
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))commonEffect->klass->vtable._8_Stop.method)(
    commonEffect,
    0LL,
    v6,
    commonEffect->klass->vtable._9_ForceStop.methodPtr);
  ActionExtensions__Call(this->fields.animantionStartEndCallback, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardCommonEffectPerformance__Execute(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FA31D & 1) == 0 )
  {
    sub_1B640C8(&WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo, method);
    byte_49FA31D = 1;
  }
  v4 = sub_1B64314(WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall WarBoardCommonEffectPerformance__OnEnd(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_GameObject_o *v7; // x21
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_49FA31E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FA31E = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) )
  {
    if ( !*p_effectObject )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( this->fields.destroyOnEnd )
    {
      v7 = *p_effectObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)v7, 0LL);
    }
    *p_effectObject = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectObject, 0, v5, v6);
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
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Object_o *commonEffect; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  struct CommonEffectComponent_o *v11; // x20
  System_Action_o *v12; // x21

  if ( (byte_49FA31B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__, v4);
    byte_49FA31B = 1;
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
    v7 = this->fields.effectObject;
    if ( !v7 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v7, 1, 0LL);
  }
  this->fields.animationPlay = 0;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
  {
    v11 = this->fields.commonEffect;
    v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__,
      0LL);
    if ( v11 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v11->klass->vtable._6_ForceStart.method)(
        v11,
        0LL,
        v12,
        v11->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_1B64324(v7);
  }
}


void __fastcall WarBoardCommonEffectPerformance__SetAnimantionEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.animantionEndCallback = callback;
  sub_1B6406C(
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
  sub_1B6406C(
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Func_bool__o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_WaitWhile_o *v14; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  bool result; // w0

  v2 = this;
  if ( (byte_49FA31F & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_WaitWhile_TypeInfo, v4);
    this = (WarBoardCommonEffectPerformance__Execute_d__12_o *)sub_1B640C8(
                                                                 &Method_WarBoardCommonEffectPerformance__Execute_b__12_0__,
                                                                 v5);
    byte_49FA31F = 1;
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
      sub_1B64324(this);
    klass = (UnityEngine_Object_o *)_4__this[4].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      return 0;
    }
    else
    {
      v11 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v9, v10);
      System_Func_bool____ctor(v11, _4__this, Method_WarBoardCommonEffectPerformance__Execute_b__12_0__, 0LL);
      v14 = (UnityEngine_WaitWhile_o *)sub_1B64314(UnityEngine_WaitWhile_TypeInfo, v12, v13);
      UnityEngine_WaitWhile___ctor(v14, v11, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v14;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v14, v16, v17);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_WarBoardCommonEffectPerformance__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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