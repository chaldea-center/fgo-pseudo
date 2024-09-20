// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardOverlayEffectPerformance___ctor(
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
  int32_t v17; // w3
  __int64 v18; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_361E564 *v25; // x2
  int v26; // s0
  UnityEngine_Transform_o *v29; // x21
  const MethodInfo_361E564 *v30; // x2
  int v31; // s0
  UnityEngine_Transform_o *v34; // x21
  const MethodInfo_361E564 *v35; // x2
  int v36; // s0
  Il2CppObject *v39; // x0
  struct WarBoardOverlayEffectComponent_o **p_overlayEffect; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  struct WarBoardOverlayEffectComponent_o *v43; // x8
  UnityEngine_GameObject_o *v44; // x8
  CommonUI_o *v45; // x20
  Il2CppObject *v46; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInformationComponent; // x20
  int32_t v48; // w2
  int32_t v49; // w3
  ScreenTouchInformationComponent_o *screenTouchInformationComponent; // x21
  System_Action_o *v51; // x22
  System_Nullable_Vector3__o v52; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v53; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v54; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v55; // 0:x0.16
  System_Nullable_Vector3__o v56; // 0:x0.16
  System_Nullable_Vector3__o v57; // 0:x0.16

  v54 = position;
  v53 = angle;
  v52 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_4A590F1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
    sub_1B885B0(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_Vector3__get_Value__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76172008);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__);
    byte_4A590F1 = 1;
  }
  this->fields.screenTouchInfoDispWaitTime = 2.0;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effectPrefab, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__Instantiate_object__49297912(
            (Il2CppObject *)effectPrefab,
            parent,
            0,
            (const MethodInfo_2F039F8 *)Method_UnityEngine_Object_Instantiate_GameObject____76172008);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v14;
    p_effectObject = &this->fields.effectObject;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectObject, (int32_t)v14, v16, v17);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commonEffect, (int32_t)Component_object, v22, v23);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.commonEffect, 0LL, 0LL) )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_42;
      CommonEffectComponent__Init((CommonEffectComponent_o *)effectObject, 0, 1, 0LL);
      if ( hasValue )
      {
        effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
        if ( !*p_commonEffect )
          goto LABEL_42;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
        *(_QWORD *)&v55.fields.hasValue = &v54;
        *(_QWORD *)&v55.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
        *(UnityEngine_Vector3_o *)&v26 = System_Nullable_Vector3___get_Value(v55, v25);
        if ( !transform )
          goto LABEL_42;
        if ( isLocal )
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v26, 0LL);
        else
          UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v26, 0LL);
      }
      if ( !v53.fields.hasValue )
        goto LABEL_22;
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_42;
      v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v56.fields.hasValue = &v53;
      *(_QWORD *)&v56.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v31 = System_Nullable_Vector3___get_Value(v56, v30);
      if ( !v29 )
        goto LABEL_42;
      if ( isLocal )
      {
        UnityEngine_Transform__set_localEulerAngles(v29, *(UnityEngine_Vector3_o *)&v31, 0LL);
LABEL_22:
        if ( v52.fields.hasValue && isLocal )
        {
          effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
          if ( !*p_commonEffect )
            goto LABEL_42;
          v34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
          *(_QWORD *)&v57.fields.hasValue = &v52;
          *(_QWORD *)&v57.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
          *(UnityEngine_Vector3_o *)&v36 = System_Nullable_Vector3___get_Value(v57, v35);
          if ( !v34 )
            goto LABEL_42;
          UnityEngine_Transform__set_localScale(v34, *(UnityEngine_Vector3_o *)&v36, 0LL);
        }
        goto LABEL_28;
      }
      UnityEngine_Transform__set_eulerAngles(v29, *(UnityEngine_Vector3_o *)&v31, 0LL);
    }
LABEL_28:
    effectObject = *p_effectObject;
    if ( *p_effectObject )
    {
      v39 = UnityEngine_GameObject__GetComponent_object_(
              effectObject,
              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
      this->fields.overlayEffect = (struct WarBoardOverlayEffectComponent_o *)v39;
      p_overlayEffect = &this->fields.overlayEffect;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overlayEffect, (int32_t)v39, v41, v42);
      effectObject = (UnityEngine_GameObject_o *)this->fields.overlayEffect;
      if ( effectObject )
      {
        WarBoardOverlayEffectComponent__Init((WarBoardOverlayEffectComponent_o *)effectObject, text, 0LL);
        v43 = *p_overlayEffect;
        if ( *p_overlayEffect )
        {
          this->fields.isLoop = v43->fields.isLoop;
          if ( !v43->fields.kind )
          {
            effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v44 = *p_effectObject;
            if ( !*p_effectObject )
              goto LABEL_42;
            v45 = (CommonUI_o *)effectObject;
            effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v44, 0LL);
            if ( !v45 )
              goto LABEL_42;
            effectObject = CommonUI__CreateScreeenTouchInfo(v45, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( !effectObject )
              goto LABEL_42;
            v46 = UnityEngine_GameObject__GetComponent_object_(
                    effectObject,
                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
            this->fields.screenTouchInformationComponent = (struct ScreenTouchInformationComponent_o *)v46;
            p_screenTouchInformationComponent = &this->fields.screenTouchInformationComponent;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&this->fields.screenTouchInformationComponent,
              (int32_t)v46,
              v48,
              v49);
            this->fields.isTouch = 0;
            screenTouchInformationComponent = this->fields.screenTouchInformationComponent;
            v51 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v51,
              (Il2CppObject *)this,
              Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__,
              0LL);
            if ( !screenTouchInformationComponent )
              goto LABEL_42;
            ScreenTouchInformationComponent__Setup(screenTouchInformationComponent, v51, 0LL);
            effectObject = (UnityEngine_GameObject_o *)*p_screenTouchInformationComponent;
            if ( !*p_screenTouchInformationComponent )
              goto LABEL_42;
            effectObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObject, 0LL);
            if ( !effectObject )
              goto LABEL_42;
            UnityEngine_GameObject__SetActive(effectObject, 0, 0LL);
          }
          effectObject = this->fields.effectObject;
          this->fields.isDestroy = isDestroy;
          if ( effectObject )
          {
            UnityEngine_GameObject__SetActive(effectObject, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_42:
    sub_1B8880C(effectObject, v18);
  }
}


void __fastcall WarBoardOverlayEffectPerformance__AnimationEndCallback(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  this->fields.animationPlay = 0;
}


void __fastcall WarBoardOverlayEffectPerformance__AnimationEndStartCallback(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  struct CommonEffectComponent_o *commonEffect; // x0

  commonEffect = this->fields.commonEffect;
  if ( !commonEffect )
    sub_1B8880C(0LL, method);
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, Il2CppMethodPointer))commonEffect->klass->vtable._7_ForceLoop.method)(
    commonEffect,
    0LL,
    commonEffect->klass->vtable._8_Stop.methodPtr);
}


bool __fastcall WarBoardOverlayEffectPerformance__CheckAnimationEnd(
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
  __int64 p_method; // x0
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

  if ( (byte_4A590F5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AnimationState_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A590F5 = 1;
  }
  if ( this->fields.animationPlay )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)animation,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !animation )
        goto LABEL_39;
      Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
      v10 = Enumerator;
      if ( !Enumerator )
        sub_1B8880C(0LL, v9);
      klass = Enumerator->klass;
      v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              v10,
              *(_QWORD *)(p_method + 8)) & 1) != 0 )
      {
        v16 = v10->klass;
        v17 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
        {
          v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
          while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v17;
            v18 += 2;
            if ( !v17 )
              goto LABEL_21;
          }
          v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
        }
        else
        {
LABEL_21:
          v19 = sub_1BDA590(v10, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v20 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                                v10,
                                                *(_QWORD *)(v19 + 8));
        if ( !v20 )
          sub_1B8880C(0LL, v21);
        if ( v20->klass == UnityEngine_AnimationState_TypeInfo )
        {
          clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v20, 0LL);
          if ( clip )
          {
            name = UnityEngine_Object__get_name(clip, 0LL);
            goto LABEL_28;
          }
        }
        else
        {
          sub_1B88ACC(v20);
        }
        sub_1B8880C(clip, v23);
      }
LABEL_28:
      v24 = sub_1B886EC(v10, System_IDisposable_TypeInfo);
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
          v29 = sub_1BDA590(v24, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
      }
      Item = UnityEngine_Animation__get_Item(animation, name, 0LL);
      if ( Item )
        return UnityEngine_AnimationState__get_normalizedTime(Item, 0LL) >= 1.0;
LABEL_39:
      sub_1B8880C(Item, v7);
    }
  }
  return 1;
}


bool __fastcall WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(
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
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x8
  void *v17; // x19
  __int64 v18; // x9
  SimpleAnimation_State_c **v19; // x10
  __int64 v20; // x0

  if ( (byte_4A590F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1B885B0(&System_Func_SimpleAnimation_State__string__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__);
    sub_1B885B0(&WarBoardOverlayEffectPerformance___c_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A590F6 = 1;
  }
  if ( !this->fields.animationPlay )
    return 1;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  State = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)State & 1) == 0 )
    return 1;
  if ( !simpleAnimation )
    goto LABEL_26;
  States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(simpleAnimation, 0LL);
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
    _9__16_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_SimpleAnimation_State__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__16_0,
      v11,
      Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__,
      0LL);
    static_fields = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_SimpleAnimation_State__string__o *)_9__16_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               States,
                                                               (System_Func_TSource__TResult__o *)_9__16_0,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
  State = System_Linq_Enumerable__ToArray_object_(
            v15,
            (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !State )
    goto LABEL_26;
  if ( *((int *)State + 6) >= 1 )
    v5 = (System_String_o *)*((_QWORD *)State + 4);
  State = SimpleAnimation__GetState(simpleAnimation, v5, 0LL);
  if ( !State )
LABEL_26:
    sub_1B8880C(State, v7);
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
    v20 = sub_1BDA590(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  return (*(float (__fastcall **)(void *, _QWORD))v20)(v17, *(_QWORD *)(v20 + 8)) >= 1.0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardOverlayEffectPerformance__Execute(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A590F3 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
    byte_4A590F3 = 1;
  }
  v3 = sub_1B887FC(WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardOverlayEffectPerformance__OnEnd(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4A590F4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A590F4 = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) && this->fields.isDestroy )
  {
    if ( !*p_effectObject )
      sub_1B8880C(0LL, v5);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( !this->fields.isLoop )
    {
      v6 = *p_effectObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v6, 0LL);
      *p_effectObject = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectObject, 0, v7, v8);
    }
  }
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardOverlayEffectPerformance__OnStart(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *effectObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v8; // x20
  System_Action_o *v9; // x21

  if ( (byte_4A590F2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__);
    byte_4A590F2 = 1;
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
    v6 = this->fields.effectObject;
    if ( !v6 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v6, 1, 0LL);
  }
  this->fields.animationPlay = 0;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
  {
    v8 = this->fields.commonEffect;
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__,
      0LL);
    if ( v8 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v8->klass->vtable._6_ForceStart.method)(
        v8,
        0LL,
        v9,
        v8->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_1B8880C(v6, v5);
  }
}


void __fastcall WarBoardOverlayEffectPerformance____ctor_b__9_0(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A590F7 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A590F7 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isTouch = 1;
}


void __fastcall WarBoardOverlayEffectPerformance__Execute_d__13___ctor(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardOverlayEffectPerformance__Execute_d__13__MoveNext(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  WarBoardOverlayEffectPerformance__Execute_d__13_o *v4; // x19
  struct WarBoardOverlayEffectPerformance_o *_4__this; // x20
  struct WarBoardOverlayEffectComponent_o *overlayEffect; // x8
  int32_t kind; // w8
  float v8; // s0
  float waitTime_5__2; // s8
  ServantStatusBattleListViewItem_o *v10; // x19
  bool result; // w0
  float v12; // s8
  struct WarBoardOverlayEffectComponent_o *v13; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int v15; // w8
  UnityEngine_Object_o *commonEffect; // x21
  struct CommonEffectComponent_o *v17; // x21
  System_Action_o *v18; // x22
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3

  v4 = this;
  if ( (byte_4A590FA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)sub_1B885B0(&Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__);
    byte_4A590FA = 1;
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
            v4->fields.__2__current = 0LL;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(p__2__current, 0, (int32_t)v2, v3);
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
          v4->fields.__2__current = 0LL;
          v10 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(v10, 0, (int32_t)v2, v3);
          result = 1;
          *(_DWORD *)&v10[-1].fields.isMine = 1;
          return result;
        }
        this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.screenTouchInformationComponent;
        if ( !this )
          goto LABEL_43;
        this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0LL);
        if ( !this )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_23:
        if ( !_4__this->fields.isTouch )
        {
          v4->fields.__2__current = 0LL;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(p__2__current, 0, (int32_t)v2, v3);
          v15 = 2;
          goto LABEL_42;
        }
        this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.screenTouchInformationComponent;
        if ( !this
          || (this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL)) == 0LL )
        {
LABEL_43:
          sub_1B8880C(this, method);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
        return 0;
      v17 = _4__this->fields.commonEffect;
      v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)_4__this,
        Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
        0LL);
      if ( !v17 )
        goto LABEL_43;
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, void *))v17->klass->vtable._9_ForceStop.method)(
        v17,
        0LL,
        v18,
        v17->klass[1]._1.image);
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
      if ( !this )
        goto LABEL_43;
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
      if ( !this )
        goto LABEL_43;
      ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
      v4->fields._mAnimation_5__3 = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48719376;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v4->fields._mAnimation_5__3,
        (int32_t)ComponentInChildren_object__48719376,
        v20,
        v21);
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
      if ( !this )
        goto LABEL_43;
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
      if ( !this )
        goto LABEL_43;
      v22 = UnityEngine_Component__GetComponentInChildren_object__48719376(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
      v4->fields._mSimpleAnimation_5__4 = (struct SimpleAnimation_o *)v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._mSimpleAnimation_5__4, (int32_t)v22, v23, v24);
LABEL_36:
      if ( WarBoardOverlayEffectPerformance__CheckAnimationEnd(_4__this, v4->fields._mAnimation_5__3, v2)
        && WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(_4__this, v4->fields._mSimpleAnimation_5__4, v25) )
      {
        v4->fields._mAnimation_5__3 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._mAnimation_5__3, 0, (int32_t)v25, v26);
        v4->fields._mSimpleAnimation_5__4 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._mSimpleAnimation_5__4, 0, v27, v28);
        return 0;
      }
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, 0, (int32_t)v25, v26);
      v15 = 4;
LABEL_42:
      *(_DWORD *)&p__2__current[-1].fields.isMine = v15;
      return 1;
    case 1:
      waitTime_5__2 = v4->fields._waitTime_5__2;
      v4->fields.__1__state = -1;
      v8 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
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
      v8 = v12 + UnityEngine_Time__get_deltaTime(0LL);
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


Il2CppObject *__fastcall WarBoardOverlayEffectPerformance__Execute_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardOverlayEffectPerformance__Execute_d__13__System_Collections_IEnumerator_Reset(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardOverlayEffectPerformance__Execute_d__13_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall WarBoardOverlayEffectPerformance__Execute_d__13__System_Collections_IEnumerator_get_Current(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardOverlayEffectPerformance__Execute_d__13__System_IDisposable_Dispose(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardOverlayEffectPerformance___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A590F8 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardOverlayEffectPerformance___c_TypeInfo);
    byte_4A590F8 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardOverlayEffectPerformance___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields->__9 = (struct WarBoardOverlayEffectPerformance___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall WarBoardOverlayEffectPerformance___c___ctor(
        WarBoardOverlayEffectPerformance___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall WarBoardOverlayEffectPerformance___c___CheckSimpleAnimationEnd_b__16_0(
        WarBoardOverlayEffectPerformance___c_o *this,
        SimpleAnimation_State_o *state,
        const MethodInfo *method)
{
  SimpleAnimation_State_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4A590F9 & 1) == 0 )
  {
    this = (WarBoardOverlayEffectPerformance___c_o *)sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A590F9 = 1;
  }
  if ( !state )
    sub_1B8880C(this, state);
  klass = state->klass;
  v5 = *(unsigned __int16 *)(&state->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&state->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(state, SimpleAnimation_State_TypeInfo, 9LL);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                              state,
                              *(_QWORD *)(p_method + 8));
}