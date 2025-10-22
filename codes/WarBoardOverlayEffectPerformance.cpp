void WarBoardOverlayEffectPerformance___ctor(
        WarBoardOverlayEffectPerformance_o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_GameObject_o *effectPrefab,
        System_Nullable_Vector3__o position,
        System_Nullable_Vector3__o angle,
        System_Nullable_Vector3__o scale,
        bool isLocal,
        bool isDestroy,
        System_String_o *text,
        const MethodInfo *method)
{
  bool hasValue; // w21
  Il2CppObject *v14; // x0
  struct UnityEngine_GameObject_o **p_effectObject; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_38DF7C0 *v25; // x2
  UnityEngine_Transform_o *v26; // x21
  const MethodInfo_38DF7C0 *v27; // x2
  UnityEngine_Transform_o *v28; // x21
  const MethodInfo_38DF7C0 *v29; // x2
  Il2CppObject *v30; // x0
  struct WarBoardOverlayEffectComponent_o **p_overlayEffect; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct WarBoardOverlayEffectComponent_o *v34; // x8
  UnityEngine_GameObject_o *v35; // x8
  CommonUI_o *v36; // x20
  Il2CppObject *v37; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInformationComponent; // x20
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  ScreenTouchInformationComponent_o *screenTouchInformationComponent; // x21
  System_Action_o *v42; // x22
  System_Nullable_Vector3__o v43; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v44; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v45; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v46; // 0:x0.16
  System_Nullable_Vector3__o v47; // 0:x0.16
  System_Nullable_Vector3__o v48; // 0:x0.16
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  v45 = position;
  v44 = angle;
  v43 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_4C549DE & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
    sub_1C3E564(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C3E564(&Method_System_Nullable_Vector3__get_Value__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78273032);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__);
    byte_4C549DE = 1;
  }
  this->fields.screenTouchInfoDispWaitTime = 2.0;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effectPrefab, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__Instantiate_object__51929168(
            (Il2CppObject *)effectPrefab,
            parent,
            0,
            (const MethodInfo_3186050 *)Method_UnityEngine_Object_Instantiate_GameObject____78273032);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v14;
    p_effectObject = &this->fields.effectObject;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.effectObject, (int32_t)v14, v16, v17);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.commonEffect, (int32_t)Component_object, v22, v23);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.commonEffect, 0, 0) )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_42;
      CommonEffectComponent__Init((CommonEffectComponent_o *)effectObject, 0, 1, 0);
      if ( hasValue )
      {
        effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
        if ( !*p_commonEffect )
          goto LABEL_42;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
        *(_QWORD *)&v46.fields.hasValue = &v45;
        *(_QWORD *)&v46.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
        Value = System_Nullable_Vector3___get_Value(v46, v25);
        if ( !transform )
          goto LABEL_42;
        if ( isLocal )
          UnityEngine_Transform__set_localPosition(transform, Value, 0);
        else
          UnityEngine_Transform__set_position(transform, Value, 0);
      }
      if ( !v44.fields.hasValue )
        goto LABEL_22;
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_42;
      v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v47.fields.hasValue = &v44;
      *(_QWORD *)&v47.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      v50 = System_Nullable_Vector3___get_Value(v47, v27);
      if ( !v26 )
        goto LABEL_42;
      if ( isLocal )
      {
        UnityEngine_Transform__set_localEulerAngles(v26, v50, 0);
LABEL_22:
        if ( v43.fields.hasValue && isLocal )
        {
          effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
          if ( !*p_commonEffect )
            goto LABEL_42;
          v28 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
          *(_QWORD *)&v48.fields.hasValue = &v43;
          *(_QWORD *)&v48.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
          v51 = System_Nullable_Vector3___get_Value(v48, v29);
          if ( !v28 )
            goto LABEL_42;
          UnityEngine_Transform__set_localScale(v28, v51, 0);
        }
        goto LABEL_28;
      }
      UnityEngine_Transform__set_eulerAngles(v26, v50, 0);
    }
LABEL_28:
    effectObject = *p_effectObject;
    if ( *p_effectObject )
    {
      v30 = UnityEngine_GameObject__GetComponent_object_(
              effectObject,
              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
      this->fields.overlayEffect = (struct WarBoardOverlayEffectComponent_o *)v30;
      p_overlayEffect = &this->fields.overlayEffect;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.overlayEffect, (int32_t)v30, v32, v33);
      effectObject = (UnityEngine_GameObject_o *)this->fields.overlayEffect;
      if ( effectObject )
      {
        WarBoardOverlayEffectComponent__Init((WarBoardOverlayEffectComponent_o *)effectObject, text, 0);
        v34 = *p_overlayEffect;
        if ( *p_overlayEffect )
        {
          this->fields.isLoop = v34->fields.isLoop;
          if ( !v34->fields.kind )
          {
            effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v35 = *p_effectObject;
            if ( !*p_effectObject )
              goto LABEL_42;
            v36 = (CommonUI_o *)effectObject;
            effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v35, 0);
            if ( !v36 )
              goto LABEL_42;
            effectObject = CommonUI__CreateScreeenTouchInfo(v36, (UnityEngine_Transform_o *)effectObject, 1, 0);
            if ( !effectObject )
              goto LABEL_42;
            v37 = UnityEngine_GameObject__GetComponent_object_(
                    effectObject,
                    (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
            this->fields.screenTouchInformationComponent = (struct ScreenTouchInformationComponent_o *)v37;
            p_screenTouchInformationComponent = &this->fields.screenTouchInformationComponent;
            sub_1C3E508((CGThumbnailListItem_o *)&this->fields.screenTouchInformationComponent, (int32_t)v37, v39, v40);
            this->fields.isTouch = 0;
            screenTouchInformationComponent = this->fields.screenTouchInformationComponent;
            v42 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
            System_Action___ctor(
              v42,
              (Il2CppObject *)this,
              (intptr_t)Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__,
              0);
            if ( !screenTouchInformationComponent )
              goto LABEL_42;
            ScreenTouchInformationComponent__Setup(screenTouchInformationComponent, v42, 0);
            effectObject = (UnityEngine_GameObject_o *)*p_screenTouchInformationComponent;
            if ( !*p_screenTouchInformationComponent )
              goto LABEL_42;
            effectObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObject, 0);
            if ( !effectObject )
              goto LABEL_42;
            UnityEngine_GameObject__SetActive(effectObject, 0, 0);
          }
          effectObject = this->fields.effectObject;
          this->fields.isDestroy = isDestroy;
          if ( effectObject )
          {
            UnityEngine_GameObject__SetActive(effectObject, 0, 0);
            return;
          }
        }
      }
    }
LABEL_42:
    sub_1C3E7C0(effectObject, v18);
  }
}


void WarBoardOverlayEffectPerformance__AnimationEndCallback(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  this->fields.animationPlay = 0;
}


void WarBoardOverlayEffectPerformance__AnimationEndStartCallback(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  struct CommonEffectComponent_o *commonEffect; // x0

  commonEffect = this->fields.commonEffect;
  if ( !commonEffect )
    sub_1C3E7C0(0, method);
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, const MethodInfo *))commonEffect->klass->vtable._7_ForceLoop.methodPtr)(
    commonEffect,
    0,
    commonEffect->klass->vtable._7_ForceLoop.method);
}


bool WarBoardOverlayEffectPerformance__CheckAnimationEnd(
        WarBoardOverlayEffectPerformance_o *this,
        UnityEngine_Animation_o *animation,
        const MethodInfo *method)
{
  System_String_o *name; // x20
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_IEnumerator_o *v10; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_AnimationState_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *clip; // x0
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x21
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  if ( (byte_4C549E2 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_AnimationState_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C549E2 = 1;
  }
  if ( this->fields.animationPlay )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)animation, 0, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !animation )
        goto LABEL_39;
      Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0);
      v10 = Enumerator;
      if ( !Enumerator )
        sub_1C3E7C0(0, v9);
      klass = Enumerator->klass;
      v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_13;
        }
        v14 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_13:
        v14 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) != 0 )
      {
        v16 = v10->klass;
        v17 = *(unsigned __int16 *)&v10->klass->_2.rank;
        if ( *(_WORD *)&v10->klass->_2.rank )
        {
          v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
          while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v17;
            v18 += 2;
            if ( !v17 )
              goto LABEL_21;
          }
          v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1];
        }
        else
        {
LABEL_21:
          v19 = sub_1C8ED7C(v10, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v20 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                                v10,
                                                *(_QWORD *)(v19 + 8));
        if ( !v20 )
          sub_1C3E7C0(0, v21);
        if ( v20->klass == UnityEngine_AnimationState_TypeInfo )
        {
          clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v20, 0);
          if ( clip )
          {
            name = UnityEngine_Object__get_name(clip, 0);
            goto LABEL_28;
          }
        }
        else
        {
          sub_1C3EA80(v20);
        }
        sub_1C3E7C0(clip, v23);
      }
LABEL_28:
      v24 = sub_1C3E6A0(v10, System_IDisposable_TypeInfo);
      if ( v24 )
      {
        v25 = *(_QWORD *)v24;
        v26 = v24;
        v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
          {
            --v27;
            v28 += 4;
            if ( !v27 )
              goto LABEL_33;
          }
          v29 = v25 + 16LL * *v28 + 312;
        }
        else
        {
LABEL_33:
          v29 = sub_1C8ED7C(v24, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
      }
      Item = UnityEngine_Animation__get_Item(animation, name, 0);
      if ( Item )
        return UnityEngine_AnimationState__get_normalizedTime(Item, 0) >= 1.0;
LABEL_39:
      sub_1C3E7C0(Item, v7);
    }
  }
  return 1;
}


bool WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(
        WarBoardOverlayEffectPerformance_o *this,
        SimpleAnimation_o *simpleAnimation,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  void *State; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *States; // x21
  WarBoardOverlayEffectPerformance___c_c *v9; // x8
  System_Func_object__object__o *_9__16_0; // x22
  Il2CppObject *v11; // x23
  struct WarBoardOverlayEffectPerformance___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x8
  void *v17; // x19
  __int64 v18; // x9
  SimpleAnimation_State_c **v19; // x10
  __int64 v20; // x0

  if ( (byte_4C549E3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C3E564(&System_Func_SimpleAnimation_State__string__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__);
    sub_1C3E564(&WarBoardOverlayEffectPerformance___c_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C549E3 = 1;
  }
  if ( !this->fields.animationPlay )
    return 1;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  State = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)simpleAnimation, 0, 0);
  if ( ((unsigned __int8)State & 1) == 0 )
    return 1;
  if ( !simpleAnimation )
    goto LABEL_26;
  States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(simpleAnimation, 0);
  v9 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  if ( !WarBoardOverlayEffectPerformance___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOverlayEffectPerformance___c_TypeInfo);
    v9 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  }
  _9__16_0 = (System_Func_object__object__o *)v9->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = WarBoardOverlayEffectPerformance___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_SimpleAnimation_State__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__16_0,
      v11,
      Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__,
      0);
    static_fields = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_SimpleAnimation_State__string__o *)_9__16_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               States,
                                                               (System_Func_TSource__TResult__o *)_9__16_0,
                                                               (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
  State = System_Linq_Enumerable__ToArray_object_(
            v15,
            (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !State )
    goto LABEL_26;
  if ( *((int *)State + 6) >= 1 )
    v5 = (System_String_o *)*((_QWORD *)State + 4);
  State = SimpleAnimation__GetState(simpleAnimation, v5, 0);
  if ( !State )
LABEL_26:
    sub_1C3E7C0(State, v7);
  v16 = *(_QWORD *)State;
  v17 = State;
  v18 = *(unsigned __int16 *)(*(_QWORD *)State + 302LL);
  if ( *(_WORD *)(*(_QWORD *)State + 302LL) )
  {
    v19 = (SimpleAnimation_State_c **)(*(_QWORD *)(v16 + 176) + 8LL);
    while ( *(v19 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_22;
    }
    v20 = v16 + 16LL * (*(_DWORD *)v19 + 5) + 312;
  }
  else
  {
LABEL_22:
    v20 = sub_1C8ED7C(State, SimpleAnimation_State_TypeInfo, 5);
  }
  return (*(float (__fastcall **)(void *, _QWORD))v20)(v17, *(_QWORD *)(v20 + 8)) >= 1.0;
}


System_Collections_IEnumerator_o *WarBoardOverlayEffectPerformance__Execute(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C549E0 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
    byte_4C549E0 = 1;
  }
  v3 = sub_1C3E7B0(WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardOverlayEffectPerformance__OnEnd(WarBoardOverlayEffectPerformance_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4C549E1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C549E1 = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0, 0) && this->fields.isDestroy )
  {
    if ( !*p_effectObject )
      sub_1C3E7C0(0, v5);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0);
    if ( !this->fields.isLoop )
    {
      v6 = *p_effectObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)v6, 0);
      *p_effectObject = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.effectObject, 0, v7, v8);
    }
  }
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardOverlayEffectPerformance__OnStart(WarBoardOverlayEffectPerformance_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *effectObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v8; // x20
  System_Action_o *v9; // x21

  if ( (byte_4C549DF & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__);
    byte_4C549DF = 1;
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
      Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__,
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


void WarBoardOverlayEffectPerformance____ctor_b__9_0(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C549E4 & 1) == 0 )
  {
    sub_1C3E564(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__);
    byte_4C549E4 = 1;
  }
  v3 = Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__;
  if ( (*((_BYTE *)Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  this->fields.isTouch = 1;
}


void WarBoardOverlayEffectPerformance__Execute_d__13___ctor(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardOverlayEffectPerformance__Execute_d__13__MoveNext(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  WarBoardOverlayEffectPerformance__Execute_d__13_o *v4; // x19
  struct WarBoardOverlayEffectPerformance_o *_4__this; // x20
  struct WarBoardOverlayEffectComponent_o *overlayEffect; // x8
  int32_t kind; // w8
  float v8; // s0
  float waitTime_5__2; // s8
  CGThumbnailListItem_o *v10; // x19
  bool result; // w0
  float v12; // s8
  struct WarBoardOverlayEffectComponent_o *v13; // x8
  CGThumbnailListItem_o *p__2__current; // x19
  int v15; // w8
  UnityEngine_Object_o *commonEffect; // x21
  struct CommonEffectComponent_o *v17; // x21
  System_Action_o *v18; // x22
  Il2CppObject *ComponentInChildren_object__51315876; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  v4 = this;
  if ( (byte_4C549E7 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)sub_1C3E564(&Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__);
    byte_4C549E7 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v4->fields._waitTime_5__2 = 0.0;
      if ( !_4__this )
        goto LABEL_43;
      overlayEffect = _4__this->fields.overlayEffect;
      if ( !overlayEffect )
        goto LABEL_43;
      kind = overlayEffect->fields.kind;
      v8 = 0.0;
      if ( kind )
      {
        if ( kind == 1 )
        {
LABEL_15:
          v13 = _4__this->fields.overlayEffect;
          if ( !v13 )
            goto LABEL_43;
          if ( v8 < v13->fields.waitTime )
          {
            v4->fields.__2__current = 0;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C3E508(p__2__current, 0, (int32_t)v2, v3);
            v15 = 3;
            goto LABEL_42;
          }
        }
      }
      else
      {
LABEL_10:
        if ( v8 < _4__this->fields.screenTouchInfoDispWaitTime )
        {
          v4->fields.__2__current = 0;
          v10 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C3E508(v10, 0, (int32_t)v2, v3);
          result = 1;
          LODWORD(v10[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
        this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.screenTouchInformationComponent;
        if ( !this )
          goto LABEL_43;
        this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0);
        if ( !this )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
LABEL_23:
        if ( !_4__this->fields.isTouch )
        {
          v4->fields.__2__current = 0;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C3E508(p__2__current, 0, (int32_t)v2, v3);
          v15 = 2;
          goto LABEL_42;
        }
        this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.screenTouchInformationComponent;
        if ( !this
          || (this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0)) == 0 )
        {
LABEL_43:
          sub_1C3E7C0(this, method);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(commonEffect, 0, 0) )
        return 0;
      v17 = _4__this->fields.commonEffect;
      v18 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)_4__this,
        Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
        0);
      if ( !v17 )
        goto LABEL_43;
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))v17->klass->vtable._9_ForceStop.methodPtr)(
        v17,
        0,
        v18,
        v17->klass->vtable._9_ForceStop.method);
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
      if ( !this )
        goto LABEL_43;
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
      if ( !this )
        goto LABEL_43;
      ComponentInChildren_object__51315876 = UnityEngine_Component__GetComponentInChildren_object__51315876(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
      v4->fields._mAnimation_5__3 = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51315876;
      sub_1C3E508(
        (CGThumbnailListItem_o *)&v4->fields._mAnimation_5__3,
        (int32_t)ComponentInChildren_object__51315876,
        v20,
        v21);
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
      if ( !this )
        goto LABEL_43;
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
      if ( !this )
        goto LABEL_43;
      v22 = UnityEngine_Component__GetComponentInChildren_object__51315876(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
      v4->fields._mSimpleAnimation_5__4 = (struct SimpleAnimation_o *)v22;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._mSimpleAnimation_5__4, (int32_t)v22, v23, v24);
LABEL_36:
      if ( WarBoardOverlayEffectPerformance__CheckAnimationEnd(_4__this, v4->fields._mAnimation_5__3, v2)
        && WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(_4__this, v4->fields._mSimpleAnimation_5__4, v25) )
      {
        v4->fields._mAnimation_5__3 = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._mAnimation_5__3, 0, (int32_t)v25, v26);
        v4->fields._mSimpleAnimation_5__4 = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._mSimpleAnimation_5__4, 0, v27, v28);
        return 0;
      }
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(p__2__current, 0, (int32_t)v25, v26);
      v15 = 4;
LABEL_42:
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v15;
      return 1;
    case 1:
      waitTime_5__2 = v4->fields._waitTime_5__2;
      v4->fields.__1__state = -1;
      v8 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0);
      v4->fields._waitTime_5__2 = v8;
      if ( _4__this )
        goto LABEL_10;
      goto LABEL_43;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      goto LABEL_23;
    case 3:
      v12 = v4->fields._waitTime_5__2;
      v4->fields.__1__state = -1;
      v8 = v12 + UnityEngine_Time__get_deltaTime(0);
      v4->fields._waitTime_5__2 = v8;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_43;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      goto LABEL_36;
    default:
      return 0;
  }
}


Il2CppObject *WarBoardOverlayEffectPerformance__Execute_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardOverlayEffectPerformance__Execute_d__13__System_Collections_IEnumerator_Reset(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_WarBoardOverlayEffectPerformance__Execute_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *WarBoardOverlayEffectPerformance__Execute_d__13__System_Collections_IEnumerator_get_Current(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardOverlayEffectPerformance__Execute_d__13__System_IDisposable_Dispose(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardOverlayEffectPerformance___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C549E5 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardOverlayEffectPerformance___c_TypeInfo);
    byte_4C549E5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(WarBoardOverlayEffectPerformance___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields->__9 = (struct WarBoardOverlayEffectPerformance___c_o *)v1;
  sub_1C3E508(
    (CGThumbnailListItem_o *)WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void WarBoardOverlayEffectPerformance___c___ctor(
        WarBoardOverlayEffectPerformance___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *WarBoardOverlayEffectPerformance___c___CheckSimpleAnimationEnd_b__16_0(
        WarBoardOverlayEffectPerformance___c_o *this,
        SimpleAnimation_State_o *state,
        const MethodInfo *method)
{
  SimpleAnimation_State_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C549E6 & 1) == 0 )
  {
    this = (WarBoardOverlayEffectPerformance___c_o *)sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    byte_4C549E6 = 1;
  }
  if ( !state )
    sub_1C3E7C0(this, state);
  klass = state->klass;
  v5 = *(unsigned __int16 *)&state->klass->_2.rank;
  if ( *(_WORD *)&state->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset + 9];
  }
  else
  {
LABEL_8:
    v7 = sub_1C8ED7C(state, SimpleAnimation_State_TypeInfo, 9);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v7)(
                              state,
                              *(_QWORD *)(v7 + 8));
}