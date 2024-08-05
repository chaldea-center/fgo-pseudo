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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  Il2CppObject *v23; // x0
  struct UnityEngine_GameObject_o **p_effectObject; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_35D4308 *v34; // x2
  int v35; // s0
  UnityEngine_Transform_o *v38; // x21
  const MethodInfo_35D4308 *v39; // x2
  int v40; // s0
  UnityEngine_Transform_o *v43; // x21
  const MethodInfo_35D4308 *v44; // x2
  int v45; // s0
  Il2CppObject *v48; // x0
  struct WarBoardOverlayEffectComponent_o **p_overlayEffect; // x21
  int32_t v50; // w2
  int32_t v51; // w3
  struct WarBoardOverlayEffectComponent_o *v52; // x8
  UnityEngine_GameObject_o *v53; // x8
  CommonUI_o *v54; // x20
  Il2CppObject *v55; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInformationComponent; // x20
  int32_t v57; // w2
  int32_t v58; // w3
  ScreenTouchInformationComponent_o *screenTouchInformationComponent; // x21
  System_Action_o *v60; // x22
  System_Nullable_Vector3__o v61; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v62; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v63; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v64; // 0:x0.16
  System_Nullable_Vector3__o v65; // 0:x0.16
  System_Nullable_Vector3__o v66; // 0:x0.16

  v63 = position;
  v62 = angle;
  v61 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_49FC428 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, parent);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___, v16);
    sub_1B64870(&Method_System_Nullable_Vector3__get_HasValue__, v17);
    sub_1B64870(&Method_System_Nullable_Vector3__get_Value__, v18);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject____75800368, v19);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v20);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_1B64870(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__, v22);
    byte_49FC428 = 1;
  }
  this->fields.screenTouchInfoDispWaitTime = 2.0;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effectPrefab, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v23 = UnityEngine_Object__Instantiate_object__49013016(
            (Il2CppObject *)effectPrefab,
            parent,
            0,
            (const MethodInfo_2EBE118 *)Method_UnityEngine_Object_Instantiate_GameObject____75800368);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v23;
    p_effectObject = &this->fields.effectObject;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.effectObject, (int32_t)v23, v25, v26);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.commonEffect, (int32_t)Component_object, v31, v32);
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
        *(_QWORD *)&v64.fields.hasValue = &v63;
        *(_QWORD *)&v64.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
        *(UnityEngine_Vector3_o *)&v35 = System_Nullable_Vector3___get_Value(v64, v34);
        if ( !transform )
          goto LABEL_42;
        if ( isLocal )
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v35, 0LL);
        else
          UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v35, 0LL);
      }
      if ( !v62.fields.hasValue )
        goto LABEL_22;
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_42;
      v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v65.fields.hasValue = &v62;
      *(_QWORD *)&v65.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v40 = System_Nullable_Vector3___get_Value(v65, v39);
      if ( !v38 )
        goto LABEL_42;
      if ( isLocal )
      {
        UnityEngine_Transform__set_localEulerAngles(v38, *(UnityEngine_Vector3_o *)&v40, 0LL);
LABEL_22:
        if ( v61.fields.hasValue && isLocal )
        {
          effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
          if ( !*p_commonEffect )
            goto LABEL_42;
          v43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
          *(_QWORD *)&v66.fields.hasValue = &v61;
          *(_QWORD *)&v66.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
          *(UnityEngine_Vector3_o *)&v45 = System_Nullable_Vector3___get_Value(v66, v44);
          if ( !v43 )
            goto LABEL_42;
          UnityEngine_Transform__set_localScale(v43, *(UnityEngine_Vector3_o *)&v45, 0LL);
        }
        goto LABEL_28;
      }
      UnityEngine_Transform__set_eulerAngles(v38, *(UnityEngine_Vector3_o *)&v40, 0LL);
    }
LABEL_28:
    effectObject = *p_effectObject;
    if ( *p_effectObject )
    {
      v48 = UnityEngine_GameObject__GetComponent_object_(
              effectObject,
              (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
      this->fields.overlayEffect = (struct WarBoardOverlayEffectComponent_o *)v48;
      p_overlayEffect = &this->fields.overlayEffect;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.overlayEffect, (int32_t)v48, v50, v51);
      effectObject = (UnityEngine_GameObject_o *)this->fields.overlayEffect;
      if ( effectObject )
      {
        WarBoardOverlayEffectComponent__Init((WarBoardOverlayEffectComponent_o *)effectObject, text, 0LL);
        v52 = *p_overlayEffect;
        if ( *p_overlayEffect )
        {
          this->fields.isLoop = v52->fields.isLoop;
          if ( !v52->fields.kind )
          {
            effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v53 = *p_effectObject;
            if ( !*p_effectObject )
              goto LABEL_42;
            v54 = (CommonUI_o *)effectObject;
            effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v53, 0LL);
            if ( !v54 )
              goto LABEL_42;
            effectObject = CommonUI__CreateScreeenTouchInfo(v54, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( !effectObject )
              goto LABEL_42;
            v55 = UnityEngine_GameObject__GetComponent_object_(
                    effectObject,
                    (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
            this->fields.screenTouchInformationComponent = (struct ScreenTouchInformationComponent_o *)v55;
            p_screenTouchInformationComponent = &this->fields.screenTouchInformationComponent;
            sub_1B64814(
              (ServantStatusBattleListViewItem_o *)&this->fields.screenTouchInformationComponent,
              (int32_t)v55,
              v57,
              v58);
            this->fields.isTouch = 0;
            screenTouchInformationComponent = this->fields.screenTouchInformationComponent;
            v60 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            System_Action___ctor(
              v60,
              (Il2CppObject *)this,
              Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__,
              0LL);
            if ( !screenTouchInformationComponent )
              goto LABEL_42;
            ScreenTouchInformationComponent__Setup(screenTouchInformationComponent, v60, 0LL);
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
    sub_1B64ACC(effectObject, v27);
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
    sub_1B64ACC(0LL, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *name; // x20
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v13; // x1
  System_Collections_IEnumerator_o *v14; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  UnityEngine_AnimationState_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *clip; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x21
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_49FC42C & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_AnimationState_TypeInfo, animation);
    sub_1B64870(&System_IDisposable_TypeInfo, v5);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64870(&StringLiteral_1/*""*/, v8);
    byte_49FC42C = 1;
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
      v14 = Enumerator;
      if ( !Enumerator )
        sub_1B64ACC(0LL, v13);
      klass = Enumerator->klass;
      v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          p_offset += 4;
          if ( !v16 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              v14,
              *(_QWORD *)(p_method + 8)) & 1) != 0 )
      {
        v20 = v14->klass;
        v21 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
        {
          v22 = (System_Collections_IEnumerator_c **)&v20->_1.interfaceOffsets->offset;
          while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v21;
            v22 += 2;
            if ( !v21 )
              goto LABEL_21;
          }
          v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1].method;
        }
        else
        {
LABEL_21:
          v23 = sub_1BB6850(v14, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v24 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(
                                                v14,
                                                *(_QWORD *)(v23 + 8));
        if ( !v24 )
          sub_1B64ACC(0LL, v25);
        if ( v24->klass == UnityEngine_AnimationState_TypeInfo )
        {
          clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v24, 0LL);
          if ( clip )
          {
            name = UnityEngine_Object__get_name(clip, 0LL);
            goto LABEL_28;
          }
        }
        else
        {
          sub_1B64D8C(v24);
        }
        sub_1B64ACC(clip, v27);
      }
LABEL_28:
      v28 = sub_1B649AC(v14, System_IDisposable_TypeInfo);
      if ( v28 )
      {
        v29 = *(_QWORD *)v28;
        v30 = v28;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
        {
          v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
          {
            --v31;
            v32 += 4;
            if ( !v31 )
              goto LABEL_33;
          }
          v33 = v29 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_33:
          v33 = sub_1BB6850(v28, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
      }
      Item = UnityEngine_Animation__get_Item(animation, name, 0LL);
      if ( Item )
        return UnityEngine_AnimationState__get_normalizedTime(Item, 0LL) >= 1.0;
LABEL_39:
      sub_1B64ACC(Item, v11);
    }
  }
  return 1;
}


bool __fastcall WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(
        WarBoardOverlayEffectPerformance_o *this,
        SimpleAnimation_o *simpleAnimation,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x20
  void *State; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *States; // x21
  WarBoardOverlayEffectPerformance___c_c *v16; // x8
  System_Func_object__object__o *_9__16_0; // x22
  Il2CppObject *v18; // x23
  struct WarBoardOverlayEffectPerformance___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  __int64 v23; // x8
  void *v24; // x19
  __int64 v25; // x9
  SimpleAnimation_State_c **v26; // x10
  __int64 v27; // x0

  if ( (byte_49FC42D & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___, simpleAnimation);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_1B64870(&System_Func_SimpleAnimation_State__string__TypeInfo, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64870(&SimpleAnimation_State_TypeInfo, v8);
    sub_1B64870(&Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__, v9);
    sub_1B64870(&WarBoardOverlayEffectPerformance___c_TypeInfo, v10);
    sub_1B64870(&StringLiteral_1/*""*/, v11);
    byte_49FC42D = 1;
  }
  if ( !this->fields.animationPlay )
    return 1;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  State = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)State & 1) == 0 )
    return 1;
  if ( !simpleAnimation )
    goto LABEL_26;
  States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(simpleAnimation, 0LL);
  v16 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  if ( !WarBoardOverlayEffectPerformance___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOverlayEffectPerformance___c_TypeInfo);
    v16 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  }
  _9__16_0 = (System_Func_object__object__o *)v16->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = WarBoardOverlayEffectPerformance___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__16_0 = (System_Func_object__object__o *)sub_1B64ABC(System_Func_SimpleAnimation_State__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__16_0,
      v18,
      Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__,
      0LL);
    static_fields = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_SimpleAnimation_State__string__o *)_9__16_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               States,
                                                               (System_Func_TSource__TResult__o *)_9__16_0,
                                                               (const MethodInfo_2E6B688 *)Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
  State = System_Linq_Enumerable__ToArray_object_(
            v22,
            (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !State )
    goto LABEL_26;
  if ( *((int *)State + 6) >= 1 )
    v12 = (System_String_o *)*((_QWORD *)State + 4);
  State = SimpleAnimation__GetState(simpleAnimation, v12, 0LL);
  if ( !State )
LABEL_26:
    sub_1B64ACC(State, v14);
  v23 = *(_QWORD *)State;
  v24 = State;
  v25 = *(unsigned __int16 *)(*(_QWORD *)State + 302LL);
  if ( *(_WORD *)(*(_QWORD *)State + 302LL) )
  {
    v26 = (SimpleAnimation_State_c **)(*(_QWORD *)(v23 + 176) + 8LL);
    while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v25;
      v26 += 2;
      if ( !v25 )
        goto LABEL_22;
    }
    v27 = v23 + 16LL * (*(_DWORD *)v26 + 5) + 312;
  }
  else
  {
LABEL_22:
    v27 = sub_1BB6850(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  return (*(float (__fastcall **)(void *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8)) >= 1.0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardOverlayEffectPerformance__Execute(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC42A & 1) == 0 )
  {
    sub_1B64870(&WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo, method);
    byte_49FC42A = 1;
  }
  v3 = sub_1B64ABC(WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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

  if ( (byte_49FC42B & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FC42B = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) && this->fields.isDestroy )
  {
    if ( !*p_effectObject )
      sub_1B64ACC(0LL, v5);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( !this->fields.isLoop )
    {
      v6 = *p_effectObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69135916((UnityEngine_Object_o *)v6, 0LL);
      *p_effectObject = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.effectObject, 0, v7, v8);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *effectObject; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_49FC429 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64870(&Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__, v4);
    byte_49FC429 = 1;
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
    v11 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__,
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
    sub_1B64ACC(v8, v7);
  }
}


void __fastcall WarBoardOverlayEffectPerformance____ctor_b__9_0(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC42E & 1) == 0 )
  {
    sub_1B64870(&SoundManager_TypeInfo, method);
    byte_49FC42E = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct WarBoardOverlayEffectPerformance_o *_4__this; // x20
  struct WarBoardOverlayEffectComponent_o *overlayEffect; // x8
  int32_t kind; // w8
  float v12; // s0
  float waitTime_5__2; // s8
  ServantStatusBattleListViewItem_o *v14; // x19
  bool result; // w0
  float v16; // s8
  struct WarBoardOverlayEffectComponent_o *v17; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int v19; // w8
  UnityEngine_Object_o *commonEffect; // x21
  struct CommonEffectComponent_o *v21; // x21
  System_Action_o *v22; // x22
  Il2CppObject *ComponentInChildren_object__48440272; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3

  v4 = this;
  if ( (byte_49FC431 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v5);
    sub_1B64870(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)sub_1B64870(
                                                                  &Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
                                                                  v8);
    byte_49FC431 = 1;
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
      v12 = 0.0;
      if ( kind )
      {
        if ( kind == 1 )
        {
LABEL_15:
          v17 = _4__this->fields.overlayEffect;
          if ( !v17 )
            goto LABEL_43;
          if ( v12 < v17->fields.waitTime )
          {
            v4->fields.__2__current = 0LL;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B64814(p__2__current, 0, (int32_t)v2, v3);
            v19 = 3;
            goto LABEL_42;
          }
        }
      }
      else
      {
LABEL_10:
        if ( v12 < _4__this->fields.screenTouchInfoDispWaitTime )
        {
          v4->fields.__2__current = 0LL;
          v14 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B64814(v14, 0, (int32_t)v2, v3);
          result = 1;
          *(_DWORD *)&v14[-1].fields.isMine = 1;
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
          sub_1B64814(p__2__current, 0, (int32_t)v2, v3);
          v19 = 2;
          goto LABEL_42;
        }
        this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.screenTouchInformationComponent;
        if ( !this
          || (this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL)) == 0LL )
        {
LABEL_43:
          sub_1B64ACC(this, method);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
        return 0;
      v21 = _4__this->fields.commonEffect;
      v22 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)_4__this,
        Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
        0LL);
      if ( !v21 )
        goto LABEL_43;
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, void *))v21->klass->vtable._9_ForceStop.method)(
        v21,
        0LL,
        v22,
        v21->klass[1]._1.image);
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
      if ( !this )
        goto LABEL_43;
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
      if ( !this )
        goto LABEL_43;
      ComponentInChildren_object__48440272 = UnityEngine_Component__GetComponentInChildren_object__48440272(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_2E323D0 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
      v4->fields._mAnimation_5__3 = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48440272;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&v4->fields._mAnimation_5__3,
        (int32_t)ComponentInChildren_object__48440272,
        v24,
        v25);
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
      if ( !this )
        goto LABEL_43;
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
      if ( !this )
        goto LABEL_43;
      v26 = UnityEngine_Component__GetComponentInChildren_object__48440272(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_2E323D0 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
      v4->fields._mSimpleAnimation_5__4 = (struct SimpleAnimation_o *)v26;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields._mSimpleAnimation_5__4, (int32_t)v26, v27, v28);
LABEL_36:
      if ( WarBoardOverlayEffectPerformance__CheckAnimationEnd(_4__this, v4->fields._mAnimation_5__3, v2)
        && WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(_4__this, v4->fields._mSimpleAnimation_5__4, v29) )
      {
        v4->fields._mAnimation_5__3 = 0LL;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields._mAnimation_5__3, 0, (int32_t)v29, v30);
        v4->fields._mSimpleAnimation_5__4 = 0LL;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields._mSimpleAnimation_5__4, 0, v31, v32);
        return 0;
      }
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B64814(p__2__current, 0, (int32_t)v29, v30);
      v19 = 4;
LABEL_42:
      *(_DWORD *)&p__2__current[-1].fields.isMine = v19;
      return 1;
    case 1:
      waitTime_5__2 = v4->fields._waitTime_5__2;
      v4->fields.__1__state = -1;
      v12 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
      v4->fields._waitTime_5__2 = v12;
      if ( _4__this )
        goto LABEL_10;
      goto LABEL_43;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      goto LABEL_23;
    case 3:
      v16 = v4->fields._waitTime_5__2;
      v4->fields.__1__state = -1;
      v12 = v16 + UnityEngine_Time__get_deltaTime(0LL);
      v4->fields._waitTime_5__2 = v12;
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

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_WarBoardOverlayEffectPerformance__Execute_d__13_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FC42F & 1) == 0 )
  {
    sub_1B64870(&WarBoardOverlayEffectPerformance___c_TypeInfo, v1);
    byte_49FC42F = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(WarBoardOverlayEffectPerformance___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields->__9 = (struct WarBoardOverlayEffectPerformance___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_49FC430 & 1) == 0 )
  {
    this = (WarBoardOverlayEffectPerformance___c_o *)sub_1B64870(&SimpleAnimation_State_TypeInfo, state);
    byte_49FC430 = 1;
  }
  if ( !state )
    sub_1B64ACC(this, state);
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
    p_method = sub_1BB6850(state, SimpleAnimation_State_TypeInfo, 9LL);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                              state,
                              *(_QWORD *)(p_method + 8));
}