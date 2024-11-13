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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct UnityEngine_GameObject_o *v30; // x1
  struct UnityEngine_GameObject_o **p_effectObject; // x0
  __int64 v32; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo_36C2D44 *v43; // x2
  int v44; // s0
  UnityEngine_Transform_o *v47; // x20
  const MethodInfo_36C2D44 *v48; // x2
  int v49; // s0
  UnityEngine_Transform_o *v52; // x20
  const MethodInfo_36C2D44 *v53; // x2
  int v54; // s0
  System_Nullable_Vector3__o v57; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v58; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v59; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v60; // 0:x0.16
  System_Nullable_Vector3__o v61; // 0:x0.16
  System_Nullable_Vector3__o v62; // 0:x0.16

  v59 = position;
  v58 = angle;
  v57 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_4B14063 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, parent, effetctPrefab);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_HasValue__, v14, v15);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_Value__, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924656, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    byte_4B14063 = 1;
  }
  this->fields.destroyOnEnd = 1;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effetctPrefab, 0LL, 0LL) )
  {
    if ( doInstantiate )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      v30 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49903928(
                                                 (Il2CppObject *)effetctPrefab,
                                                 parent,
                                                 0,
                                                 (const MethodInfo_2F97938 *)Method_UnityEngine_Object_Instantiate_GameObject____76924656);
      this->fields.effectObject = v30;
      p_effectObject = &this->fields.effectObject;
    }
    else
    {
      this->fields.effectObject = effetctPrefab;
      p_effectObject = &this->fields.effectObject;
      v30 = effetctPrefab;
    }
    sub_1BCA784((PartyOrganizationUtility_o *)p_effectObject, (int64_t)v30, v24, v25, v26, v27, v28, v29);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_33;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.commonEffect,
      (int64_t)Component_object,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
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
      *(_QWORD *)&v60.fields.hasValue = &v59;
      *(_QWORD *)&v60.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v44 = System_Nullable_Vector3___get_Value(v60, v43);
      if ( !transform )
        goto LABEL_33;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v44, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v44, 0LL);
    }
    if ( v58.fields.hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_33;
      v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v61.fields.hasValue = &v58;
      *(_QWORD *)&v61.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v49 = System_Nullable_Vector3___get_Value(v61, v48);
      if ( !v47 )
        goto LABEL_33;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v47, *(UnityEngine_Vector3_o *)&v49, 0LL);
LABEL_30:
        effectObject = this->fields.effectObject;
        this->fields.destroyOnEnd = destroyOnEnd;
        if ( effectObject )
        {
          UnityEngine_GameObject__SetActive(effectObject, 0, 0LL);
          return;
        }
LABEL_33:
        sub_1BCAA3C(effectObject, v32);
      }
      UnityEngine_Transform__set_localEulerAngles(v47, *(UnityEngine_Vector3_o *)&v49, 0LL);
    }
    if ( v57.fields.hasValue && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_33;
      v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v62.fields.hasValue = &v57;
      *(_QWORD *)&v62.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v54 = System_Nullable_Vector3___get_Value(v62, v53);
      if ( !v52 )
        goto LABEL_33;
      UnityEngine_Transform__set_localScale(v52, *(UnityEngine_Vector3_o *)&v54, 0LL);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B14065 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, v5, v6);
    byte_4B14065 = 1;
  }
  commonEffect = this->fields.commonEffect;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarBoardCommonEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_1BCAA3C(v9, v10);
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
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B14066 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo, method, v2);
    byte_4B14066 = 1;
  }
  v5 = sub_1BCAA2C(WarBoardCommonEffectPerformance__Execute_d__12_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardCommonEffectPerformance__OnEnd(
        WarBoardCommonEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UnityEngine_GameObject_o *v14; // x21
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4B14067 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14067 = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) )
  {
    if ( !*p_effectObject )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( this->fields.destroyOnEnd )
    {
      v14 = *p_effectObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v14, 0LL);
    }
    *p_effectObject = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectObject, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *effectObject; // x20
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Object_o *commonEffect; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  struct CommonEffectComponent_o *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_4B14064 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__, v6, v7);
    byte_4B14064 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) )
  {
    v11 = this->fields.effectObject;
    if ( !v11 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v11, 1, 0LL);
  }
  this->fields.animationPlay = 0;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
  {
    v16 = this->fields.commonEffect;
    v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
    System_Action___ctor(
      v17,
      (Il2CppObject *)this,
      Method_WarBoardCommonEffectPerformance_AnimantionEndStartCallback__,
      0LL);
    if ( v16 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v16->klass->vtable._6_ForceStart.method)(
        v16,
        0LL,
        v17,
        v16->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_1BCAA3C(v11, v10);
  }
}


void __fastcall WarBoardCommonEffectPerformance__SetAnimantionEndCallback(
        WarBoardCommonEffectPerformance_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.animantionEndCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animantionEndCallback,
    (int64_t)callback,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.animantionStartEndCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animantionStartEndCallback,
    (int64_t)callback,
    (int64_t)method,
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
  __int64 v2; // x2
  WarBoardCommonEffectPerformance__Execute_d__12_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  UnityEngine_Object_o *klass; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Func_bool__o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  UnityEngine_WaitWhile_o *v20; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  bool result; // w0

  v3 = this;
  if ( (byte_4B14068 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_WaitWhile_TypeInfo, v6, v7);
    this = (WarBoardCommonEffectPerformance__Execute_d__12_o *)sub_1BCA7E0(
                                                                 &Method_WarBoardCommonEffectPerformance__Execute_b__12_0__,
                                                                 v8,
                                                                 v9);
    byte_4B14068 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = (Il2CppObject *)v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCAA3C(this, method);
    klass = (UnityEngine_Object_o *)_4__this[4].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      return 0;
    }
    else
    {
      v16 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v13, v14, v15);
      System_Func_bool____ctor(v16, _4__this, Method_WarBoardCommonEffectPerformance__Execute_b__12_0__, 0LL);
      v20 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v17, v18, v19);
      UnityEngine_WaitWhile___ctor(v20, v16, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v20;
      p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)v20, v22, v23, v24, v25, v26, v27);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardCommonEffectPerformance__Execute_d__12_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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