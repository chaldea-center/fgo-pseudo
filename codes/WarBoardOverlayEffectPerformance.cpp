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
  bool v11; // w23
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x0
  struct UnityEngine_GameObject_o **p_effectObject; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_45E916C *v38; // x2
  UnityEngine_Transform_o *v39; // x21
  const MethodInfo_45E916C *v40; // x2
  UnityEngine_Transform_o *v41; // x21
  const MethodInfo_45E916C *v42; // x2
  UnityEngine_Transform_o *v43; // x21
  const MethodInfo_45E916C *v44; // x2
  UnityEngine_Transform_o *v45; // x21
  const MethodInfo_45E916C *v46; // x2
  Il2CppObject *v47; // x0
  struct WarBoardOverlayEffectComponent_o **p_overlayEffect; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct WarBoardOverlayEffectComponent_o *v55; // x8
  bool isLoop; // w9
  int32_t kind; // w8
  UnityEngine_GameObject_o *v58; // x8
  CommonUI_o *v59; // x20
  Il2CppObject *v60; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInformationComponent; // x20
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  ScreenTouchInformationComponent_o *screenTouchInformationComponent; // x21
  System_Action_o *v69; // x22
  System_Nullable_Vector3__o v70; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v71; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v72; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v73; // 0:x0.16
  System_Nullable_Vector3__o v74; // 0:x0.16
  System_Nullable_Vector3__o v75; // 0:x0.16
  System_Nullable_Vector3__o v76; // 0:x0.16
  System_Nullable_Vector3__o v77; // 0:x0.16
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  v72 = position;
  v71 = angle;
  hasValue = angle.fields.hasValue;
  v11 = position.fields.hasValue;
  v70 = scale;
  if ( (byte_596E3A6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
    sub_2213A60(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_Vector3__get_Value__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801592);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__);
    byte_596E3A6 = 1;
  }
  this->fields.screenTouchInfoDispWaitTime = 2.0;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effectPrefab, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    v19 = UnityEngine_Object__Instantiate_object__59717228(
            (Il2CppObject *)effectPrefab,
            parent,
            0,
            (const MethodInfo_38F366C *)Method_UnityEngine_Object_Instantiate_GameObject____91801592);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v19;
    p_effectObject = &this->fields.effectObject;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectObject,
      (int32_t)v19,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_47;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.commonEffect,
      (int32_t)Component_object,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.commonEffect, 0, 0) )
    {
LABEL_33:
      effectObject = *p_effectObject;
      if ( *p_effectObject )
      {
        v47 = UnityEngine_GameObject__GetComponent_object_(
                effectObject,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
        this->fields.overlayEffect = (struct WarBoardOverlayEffectComponent_o *)v47;
        p_overlayEffect = &this->fields.overlayEffect;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.overlayEffect,
          (int32_t)v47,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        effectObject = (UnityEngine_GameObject_o *)this->fields.overlayEffect;
        if ( effectObject )
        {
          WarBoardOverlayEffectComponent__Init((WarBoardOverlayEffectComponent_o *)effectObject, text, 0);
          v55 = *p_overlayEffect;
          if ( *p_overlayEffect )
          {
            isLoop = v55->fields.isLoop;
            kind = v55->fields.kind;
            this->fields.isLoop = isLoop;
            if ( !kind )
            {
              effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v58 = *p_effectObject;
              if ( !*p_effectObject )
                goto LABEL_47;
              v59 = (CommonUI_o *)effectObject;
              effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v58, 0);
              if ( !v59 )
                goto LABEL_47;
              effectObject = CommonUI__CreateScreeenTouchInfo(v59, (UnityEngine_Transform_o *)effectObject, 1, 0);
              if ( !effectObject )
                goto LABEL_47;
              v60 = UnityEngine_GameObject__GetComponent_object_(
                      effectObject,
                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
              this->fields.screenTouchInformationComponent = (struct ScreenTouchInformationComponent_o *)v60;
              p_screenTouchInformationComponent = &this->fields.screenTouchInformationComponent;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.screenTouchInformationComponent,
                (int32_t)v60,
                v62,
                v63,
                v64,
                v65,
                v66,
                v67);
              screenTouchInformationComponent = this->fields.screenTouchInformationComponent;
              this->fields.isTouch = 0;
              v69 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(
                v69,
                (Il2CppObject *)this,
                (intptr_t)Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__,
                0);
              if ( !screenTouchInformationComponent )
                goto LABEL_47;
              ScreenTouchInformationComponent__Setup(screenTouchInformationComponent, v69, 0);
              effectObject = (UnityEngine_GameObject_o *)*p_screenTouchInformationComponent;
              if ( !*p_screenTouchInformationComponent )
                goto LABEL_47;
              effectObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObject, 0);
              if ( !effectObject )
                goto LABEL_47;
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
LABEL_47:
      sub_2213CDC(effectObject, v27);
    }
    effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
    if ( !*p_commonEffect )
      goto LABEL_47;
    CommonEffectComponent__Init((CommonEffectComponent_o *)effectObject, 0, 1, 0);
    if ( v11 )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( isLocal )
      {
        if ( !effectObject )
          goto LABEL_47;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
        *(_QWORD *)&v73.fields.hasValue = &v72;
        *(_QWORD *)&v73.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
        Value = System_Nullable_Vector3___get_Value(v73, v38);
        if ( !transform )
          goto LABEL_47;
        UnityEngine_Transform__set_localPosition(transform, Value, 0);
        if ( !v71.fields.hasValue )
          goto LABEL_22;
        goto LABEL_19;
      }
      if ( !effectObject )
        goto LABEL_47;
      v43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v76.fields.hasValue = &v72;
      *(_QWORD *)&v76.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      v81 = System_Nullable_Vector3___get_Value(v76, v44);
      if ( !v43 )
        goto LABEL_47;
      UnityEngine_Transform__set_position(v43, v81, 0);
      if ( !v71.fields.hasValue )
        goto LABEL_33;
    }
    else
    {
      if ( !hasValue )
      {
LABEL_22:
        if ( scale.fields.hasValue && isLocal )
        {
          effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
          if ( !*p_commonEffect )
            goto LABEL_47;
          v41 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
          *(_QWORD *)&v75.fields.hasValue = &v70;
          *(_QWORD *)&v75.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
          v80 = System_Nullable_Vector3___get_Value(v75, v42);
          if ( !v41 )
            goto LABEL_47;
          UnityEngine_Transform__set_localScale(v41, v80, 0);
        }
        goto LABEL_33;
      }
      if ( isLocal )
      {
LABEL_19:
        effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
        if ( !*p_commonEffect )
          goto LABEL_47;
        v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
        *(_QWORD *)&v74.fields.hasValue = &v71;
        *(_QWORD *)&v74.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
        v79 = System_Nullable_Vector3___get_Value(v74, v40);
        if ( !v39 )
          goto LABEL_47;
        UnityEngine_Transform__set_localEulerAngles(v39, v79, 0);
        goto LABEL_22;
      }
    }
    effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
    if ( !*p_commonEffect )
      goto LABEL_47;
    v45 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
    *(_QWORD *)&v77.fields.hasValue = &v71;
    *(_QWORD *)&v77.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    v82 = System_Nullable_Vector3___get_Value(v77, v46);
    if ( !v45 )
      goto LABEL_47;
    UnityEngine_Transform__set_eulerAngles(v45, v82, 0);
    goto LABEL_33;
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
    sub_2213CDC(0, method);
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
  System_Collections_IEnumerator_c *klass; // x8
  System_Collections_IEnumerator_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_IEnumerator_c *v18; // x8
  __int64 v19; // x9
  System_Collections_IEnumerator_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_AnimationState_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  UnityEngine_Object_o *clip; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x22
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  System_Collections_IEnumerator_o *v35; // [xsp+28h] [xbp-48h]

  if ( (byte_596E3AA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AnimationState_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E3AA = 1;
  }
  if ( this->fields.animationPlay )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, animation, method);
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)animation, 0, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !animation )
        goto LABEL_40;
      Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0);
      v35 = Enumerator;
      if ( !Enumerator )
        sub_2213CDC(0, v9);
      klass = Enumerator->klass;
      v11 = Enumerator;
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
        v14 = sub_224BC3C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v16 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
      if ( (v16 & 1) != 0 )
      {
        if ( !v35 )
          sub_2213CDC(v16, v17);
        v18 = v35->klass;
        v19 = *(unsigned __int16 *)&v35->klass->_2.rank;
        if ( *(_WORD *)&v35->klass->_2.rank )
        {
          v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
          while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v19;
            v20 += 2;
            if ( !v19 )
              goto LABEL_22;
          }
          v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1];
        }
        else
        {
LABEL_22:
          v21 = sub_224BC3C(v35, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v22 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                                v35,
                                                *(_QWORD *)(v21 + 8));
        if ( !v22 )
          sub_2213CDC(0, v23);
        if ( v22->klass == UnityEngine_AnimationState_TypeInfo )
        {
          clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v22, 0);
          if ( clip )
          {
            name = UnityEngine_Object__get_name(clip, 0);
            goto LABEL_29;
          }
        }
        else
        {
          sub_221405C(v22, UnityEngine_AnimationState_TypeInfo, v24, v25);
        }
        sub_2213CDC(clip, v27);
      }
LABEL_29:
      v28 = sub_2213BB4(v35, System_IDisposable_TypeInfo);
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
              goto LABEL_34;
          }
          v33 = v29 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_34:
          v33 = sub_224BC3C(v28, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
      }
      Item = UnityEngine_Animation__get_Item(animation, name, 0);
      if ( Item )
        return UnityEngine_AnimationState__get_normalizedTime(Item, 0) >= 1.0;
LABEL_40:
      sub_2213CDC(Item, v7);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_TSource__o *States; // x21
  WarBoardOverlayEffectPerformance___c_c *v11; // x8
  struct WarBoardOverlayEffectPerformance___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__16_0; // x22
  Il2CppObject *v14; // x23
  struct WarBoardOverlayEffectPerformance___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  __int64 v23; // x8
  void *v24; // x19
  __int64 v25; // x9
  SimpleAnimation_State_c **v26; // x10
  __int64 v27; // x0

  if ( (byte_596E3AB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_2213A60(&System_Func_SimpleAnimation_State__string__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__);
    sub_2213A60(&WarBoardOverlayEffectPerformance___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E3AB = 1;
  }
  if ( !this->fields.animationPlay )
    return 1;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, simpleAnimation, method);
  State = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)simpleAnimation, 0, 0);
  if ( ((unsigned __int8)State & 1) == 0 )
    return 1;
  if ( !simpleAnimation )
    goto LABEL_26;
  States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(simpleAnimation, 0);
  v11 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  if ( !*(&WarBoardOverlayEffectPerformance___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOverlayEffectPerformance___c_TypeInfo, v8, v9);
    v11 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__16_0 = (System_Func_object__object__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v8, v9);
      static_fields = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_SimpleAnimation_State__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__16_0,
      v14,
      Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__,
      0);
    v15 = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    v15->__9__16_0 = (struct System_Func_SimpleAnimation_State__string__o *)_9__16_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__16_0, (int32_t)_9__16_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               States,
                                                               (System_Func_TSource__TResult__o *)_9__16_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
  State = System_Linq_Enumerable__ToArray_object_(
            v22,
            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !State )
    goto LABEL_26;
  if ( *((int *)State + 6) >= 1 )
    v5 = (System_String_o *)*((_QWORD *)State + 4);
  State = SimpleAnimation__GetState(simpleAnimation, v5, 0);
  if ( !State )
LABEL_26:
    sub_2213CDC(State, v7);
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
    v27 = sub_224BC3C(State, SimpleAnimation_State_TypeInfo, 5);
  }
  return (*(float (__fastcall **)(void *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8)) >= 1.0;
}


System_Collections_IEnumerator_o *WarBoardOverlayEffectPerformance__Execute(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E3A8 & 1) == 0 )
  {
    sub_2213A60(&WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
    byte_596E3A8 = 1;
  }
  v3 = sub_2213CCC(WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardOverlayEffectPerformance__OnEnd(WarBoardOverlayEffectPerformance_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_596E3A9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E3A9 = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0, 0) && this->fields.isDestroy )
  {
    if ( !*p_effectObject )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0);
    if ( !this->fields.isLoop )
    {
      v9 = *p_effectObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v9, 0);
      *p_effectObject = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectObject, 0, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_596E3A7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__);
    byte_596E3A7 = 1;
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
    v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__,
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
    sub_2213CDC(v8, v6);
  }
}


void WarBoardOverlayEffectPerformance____ctor_b__9_0(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_596E3AC & 1) == 0 )
  {
    sub_2213A60(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__);
    byte_596E3AC = 1;
  }
  v3 = Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__;
  if ( (*((_BYTE *)Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct WarBoardOverlayEffectPerformance_o *_4__this; // x20
  UnityEngine_Component_o *transform; // x0
  float v12; // s8
  float v13; // s0
  float waitTime_5__2; // s8
  struct WarBoardOverlayEffectComponent_o *overlayEffect; // x8
  int32_t kind; // w9
  Il2CppObject **p__2__current; // x19
  int v18; // w8
  Il2CppObject **v19; // x19
  UnityEngine_Object_o *commonEffect; // x21
  struct CommonEffectComponent_o *v21; // x21
  System_Action_o *v22; // x22
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7

  if ( (byte_596E3AF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__);
    byte_596E3AF = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  transform = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state != 2 )
    {
      if ( _1__state != 3 )
      {
        if ( _1__state != 4 )
          return (char)transform;
        this->fields.__1__state = -1;
        if ( !_4__this )
          goto LABEL_50;
        goto LABEL_42;
      }
      waitTime_5__2 = this->fields._waitTime_5__2;
      this->fields.__1__state = -1;
      v13 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0);
      this->fields._waitTime_5__2 = v13;
      if ( !_4__this || (overlayEffect = _4__this->fields.overlayEffect) == 0 )
LABEL_50:
        sub_2213CDC(transform, method);
LABEL_22:
      if ( v13 < overlayEffect->fields.waitTime )
      {
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
        v18 = 3;
        goto LABEL_48;
      }
LABEL_33:
      commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( !UnityEngine_Object__op_Inequality(commonEffect, 0, 0) )
        goto LABEL_45;
      v21 = _4__this->fields.commonEffect;
      v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)_4__this,
        Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
        0);
      if ( v21 )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))v21->klass->vtable._9_ForceStop.methodPtr)(
          v21,
          0,
          v22,
          v21->klass->vtable._9_ForceStop.method);
        transform = (UnityEngine_Component_o *)_4__this->fields.commonEffect;
        if ( transform )
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( transform )
          {
            ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                     transform,
                                                     (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
            this->fields._mAnimation_5__3 = (struct UnityEngine_Animation_o *)ComponentInChildren_object__58855044;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields._mAnimation_5__3,
              (int32_t)ComponentInChildren_object__58855044,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
            transform = (UnityEngine_Component_o *)_4__this->fields.commonEffect;
            if ( transform )
            {
              transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
              if ( transform )
              {
                v30 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                        transform,
                        (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
                this->fields._mSimpleAnimation_5__4 = (struct SimpleAnimation_o *)v30;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields._mSimpleAnimation_5__4,
                  (int32_t)v30,
                  v31,
                  v32,
                  v33,
                  v34,
                  v35,
                  v36);
LABEL_42:
                if ( WarBoardOverlayEffectPerformance__CheckAnimationEnd(
                       _4__this,
                       this->fields._mAnimation_5__3,
                       (const MethodInfo *)v2)
                  && WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(
                       _4__this,
                       this->fields._mSimpleAnimation_5__4,
                       (const MethodInfo *)v37) )
                {
                  this->fields._mAnimation_5__3 = 0;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields._mAnimation_5__3,
                    0,
                    v37,
                    v38,
                    v39,
                    v40,
                    v41,
                    v42);
                  this->fields._mSimpleAnimation_5__4 = 0;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields._mSimpleAnimation_5__4,
                    0,
                    v43,
                    v44,
                    v45,
                    v46,
                    v47,
                    v48);
LABEL_45:
                  LOBYTE(transform) = 0;
                  return (char)transform;
                }
                this->fields.__2__current = 0;
                p__2__current = &this->fields.__2__current;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v37, v38, v39, v40, v41, v42);
                v18 = 4;
LABEL_48:
                *((_DWORD *)p__2__current - 2) = v18;
                LOBYTE(transform) = 1;
                return (char)transform;
              }
            }
          }
        }
      }
      goto LABEL_50;
    }
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_50;
LABEL_29:
    if ( !_4__this->fields.isTouch )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
      v18 = 2;
      goto LABEL_48;
    }
    transform = (UnityEngine_Component_o *)_4__this->fields.screenTouchInformationComponent;
    if ( !transform )
      goto LABEL_50;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
    if ( !transform )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
    goto LABEL_33;
  }
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return (char)transform;
    v12 = this->fields._waitTime_5__2;
    this->fields.__1__state = -1;
    v13 = v12 + UnityEngine_Time__get_deltaTime(0);
    this->fields._waitTime_5__2 = v13;
    if ( !_4__this )
      goto LABEL_50;
  }
  else
  {
    this->fields._waitTime_5__2 = 0.0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_50;
    overlayEffect = _4__this->fields.overlayEffect;
    if ( !overlayEffect )
      goto LABEL_50;
    v13 = 0.0;
    kind = overlayEffect->fields.kind;
    if ( kind )
    {
      if ( kind != 1 )
        goto LABEL_33;
      goto LABEL_22;
    }
  }
  if ( v13 >= _4__this->fields.screenTouchInfoDispWaitTime )
  {
    transform = (UnityEngine_Component_o *)_4__this->fields.screenTouchInformationComponent;
    if ( !transform )
      goto LABEL_50;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
    if ( !transform )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    goto LABEL_29;
  }
  this->fields.__2__current = 0;
  v19 = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v19, 0, v2, v3, v4, v5, v6, v7);
  LOBYTE(transform) = 1;
  *((_DWORD *)v19 - 2) = 1;
  return (char)transform;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WarBoardOverlayEffectPerformance__Execute_d__13_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596E3AD & 1) == 0 )
  {
    sub_2213A60(&WarBoardOverlayEffectPerformance___c_TypeInfo);
    byte_596E3AD = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarBoardOverlayEffectPerformance___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields->__9 = (struct WarBoardOverlayEffectPerformance___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_596E3AE & 1) == 0 )
  {
    this = (WarBoardOverlayEffectPerformance___c_o *)sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596E3AE = 1;
  }
  if ( !state )
    sub_2213CDC(this, state);
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
    v7 = sub_224BC3C(state, SimpleAnimation_State_TypeInfo, 9);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v7)(
                              state,
                              *(_QWORD *)(v7 + 8));
}