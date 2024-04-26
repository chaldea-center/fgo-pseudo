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
  __int64 v10; // x21
  Il2CppObject *v14; // x0
  struct UnityEngine_GameObject_o **p_effectObject; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_243BBCC *v33; // x2
  int v34; // s0
  UnityEngine_Transform_o *v37; // x21
  const MethodInfo_243BBCC *v38; // x2
  int v39; // s0
  UnityEngine_Transform_o *v42; // x21
  const MethodInfo_243BBCC *v43; // x2
  int v44; // s0
  srcLineSprite_o *v47; // x0
  struct WarBoardOverlayEffectComponent_o **p_overlayEffect; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  const MethodInfo *v55; // x2
  struct WarBoardOverlayEffectComponent_o *v56; // x8
  UnityEngine_GameObject_o *v57; // x8
  CommonUI_o *v58; // x20
  struct ScreenTouchInformationComponent_o *v59; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInformationComponent; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  ScreenTouchInformationComponent_o *screenTouchInformationComponent; // x21
  System_Action_o *v68; // x22
  System_Nullable_Vector3__o v69; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v70; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v71; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v72; // 0:x0.16
  System_Nullable_Vector3__o v73; // 0:x0.16
  System_Nullable_Vector3__o v74; // 0:x0.16

  v10 = *(_QWORD *)&position.fields.value.fields.z;
  v71 = position;
  v70 = angle;
  v69 = scale;
  if ( (byte_4351741 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
    sub_B70694(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_B70694(&Method_System_Nullable_Vector3__get_Value__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308744);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__);
    byte_4351741 = 1;
  }
  this->fields.screenTouchInfoDispWaitTime = 2.0;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effectPrefab, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = UnityEngine_Object__Instantiate_object__30771492(
            (Il2CppObject *)effectPrefab,
            parent,
            0,
            (const MethodInfo_1D58924 *)Method_UnityEngine_Object_Instantiate_GameObject____69308744);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v14;
    p_effectObject = &this->fields.effectObject;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.effectObject,
      (System_Int32_array **)v14,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_44;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  effectObject,
                                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = &this->fields.commonEffect;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.commonEffect, 0LL, 0LL) )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_44;
      CommonEffectComponent__Init((CommonEffectComponent_o *)effectObject, 0, 1, 0LL);
      if ( (v10 & 0xFF00000000LL) != 0 )
      {
        effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
        if ( !*p_commonEffect )
          goto LABEL_44;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
        *(_QWORD *)&v72.fields.value.fields.x = &v71;
        *(_QWORD *)&v72.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
        *(UnityEngine_Vector3_o *)&v34 = System_Nullable_Vector3___get_Value(v72, v33);
        if ( !transform )
          goto LABEL_44;
        if ( isLocal )
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v34, 0LL);
        else
          UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v34, 0LL);
      }
      if ( !v70.fields.has_value )
        goto LABEL_24;
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_44;
      v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v73.fields.value.fields.x = &v70;
      *(_QWORD *)&v73.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v39 = System_Nullable_Vector3___get_Value(v73, v38);
      if ( !v37 )
        goto LABEL_44;
      if ( isLocal )
      {
        UnityEngine_Transform__set_localEulerAngles(v37, *(UnityEngine_Vector3_o *)&v39, 0LL);
LABEL_24:
        if ( v69.fields.has_value && isLocal )
        {
          effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
          if ( !*p_commonEffect )
            goto LABEL_44;
          v42 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
          *(_QWORD *)&v74.fields.value.fields.x = &v69;
          *(_QWORD *)&v74.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
          *(UnityEngine_Vector3_o *)&v44 = System_Nullable_Vector3___get_Value(v74, v43);
          if ( !v42 )
            goto LABEL_44;
          UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v44, 0LL);
        }
        goto LABEL_30;
      }
      UnityEngine_Transform__set_eulerAngles(v37, *(UnityEngine_Vector3_o *)&v39, 0LL);
    }
LABEL_30:
    effectObject = *p_effectObject;
    if ( *p_effectObject )
    {
      v47 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
              effectObject,
              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
      this->fields.overlayEffect = (struct WarBoardOverlayEffectComponent_o *)v47;
      p_overlayEffect = &this->fields.overlayEffect;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.overlayEffect,
        (System_Int32_array **)v47,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      effectObject = (UnityEngine_GameObject_o *)this->fields.overlayEffect;
      if ( effectObject )
      {
        WarBoardOverlayEffectComponent__Init((WarBoardOverlayEffectComponent_o *)effectObject, text, v55);
        v56 = *p_overlayEffect;
        if ( *p_overlayEffect )
        {
          this->fields.isLoop = v56->fields.isLoop;
          if ( !v56->fields.kind )
          {
            effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v57 = *p_effectObject;
            if ( !*p_effectObject )
              goto LABEL_44;
            v58 = (CommonUI_o *)effectObject;
            effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v57, 0LL);
            if ( !v58 )
              goto LABEL_44;
            effectObject = CommonUI__CreateScreeenTouchInfo(v58, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( !effectObject )
              goto LABEL_44;
            v59 = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                effectObject,
                                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
            this->fields.screenTouchInformationComponent = v59;
            p_screenTouchInformationComponent = &this->fields.screenTouchInformationComponent;
            sub_B70630(
              (BattleServantConfConponent_o *)&this->fields.screenTouchInformationComponent,
              (System_Int32_array **)v59,
              v61,
              v62,
              v63,
              v64,
              v65,
              v66);
            this->fields.isTouch = 0;
            screenTouchInformationComponent = this->fields.screenTouchInformationComponent;
            v68 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(
              v68,
              (Il2CppObject *)this,
              Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__,
              0LL);
            if ( !screenTouchInformationComponent )
              goto LABEL_44;
            ScreenTouchInformationComponent__Setup(screenTouchInformationComponent, v68, 0LL);
            effectObject = (UnityEngine_GameObject_o *)*p_screenTouchInformationComponent;
            if ( !*p_screenTouchInformationComponent )
              goto LABEL_44;
            effectObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObject, 0LL);
            if ( !effectObject )
              goto LABEL_44;
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
LABEL_44:
    sub_B7076C(effectObject, v22);
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
    sub_B7076C(0LL, method);
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
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  unsigned __int64 v17; // x10
  System_Collections_IEnumerator_c **v18; // x11
  __int64 v19; // x0
  UnityEngine_AnimationState_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *clip; // x0
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x21
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0

  if ( (byte_4351745 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_AnimationState_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351745 = 1;
  }
  if ( !this->fields.animationPlay )
    return 1;
  name = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)animation, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) == 0 )
    return 1;
  if ( !animation )
LABEL_39:
    sub_B7076C(Item, v7);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  v10 = Enumerator;
  if ( !Enumerator )
    sub_B7076C(0LL, v9);
  klass = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(v10, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v16 = v10->klass;
    if ( *(_WORD *)&v10->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        v18 += 2;
        if ( v17 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_22:
      v19 = sub_B08590(v10, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                            v10,
                                            *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_B7076C(0LL, v21);
    if ( v20->klass == UnityEngine_AnimationState_TypeInfo )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v20, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        goto LABEL_29;
      }
    }
    else
    {
      clip = (UnityEngine_Object_o *)sub_B70A60(v20);
    }
    sub_B7076C(clip, v23);
  }
LABEL_29:
  v24 = sub_B70754(v10, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v25 = *(_QWORD *)v24;
    v26 = v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_34;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_34:
      v29 = sub_B08590(v24, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
  Item = UnityEngine_Animation__get_Item(animation, name, 0LL);
  if ( !Item )
    goto LABEL_39;
  return UnityEngine_AnimationState__get_normalizedTime(Item, 0LL) >= 1.0;
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
  struct WarBoardOverlayEffectPerformance___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_0; // x22
  Il2CppObject *v12; // x23
  struct WarBoardOverlayEffectPerformance___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x8
  void *v22; // x19
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **v24; // x11
  __int64 v25; // x0

  if ( (byte_4351746 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_B70694(&Method_System_Func_SimpleAnimation_State__string___ctor__);
    sub_B70694(&System_Func_SimpleAnimation_State__string__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    sub_B70694(&Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__);
    sub_B70694(&WarBoardOverlayEffectPerformance___c_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351746 = 1;
  }
  if ( !this->fields.animationPlay )
    return 1;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  State = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)State & 1) == 0 )
    return 1;
  if ( !simpleAnimation )
    goto LABEL_29;
  States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(simpleAnimation, 0LL);
  v9 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  if ( (BYTE3(WarBoardOverlayEffectPerformance___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardOverlayEffectPerformance___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOverlayEffectPerformance___c_TypeInfo);
    v9 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__16_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_SimpleAnimation_State__string__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__16_0,
      v12,
      Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__,
      (const MethodInfo_29ADCC4 *)Method_System_Func_SimpleAnimation_State__string___ctor__);
    v13 = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    v13->__9__16_0 = (struct System_Func_SimpleAnimation_State__string__o *)_9__16_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v13->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               States,
                                                               (System_Func_TSource__TResult__o *)_9__16_0,
                                                               (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
  State = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v20,
            (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !State )
    goto LABEL_29;
  if ( *((int *)State + 6) >= 1 )
    v5 = (System_String_o *)*((_QWORD *)State + 4);
  State = SimpleAnimation__GetState(simpleAnimation, v5, 0LL);
  if ( !State )
LABEL_29:
    sub_B7076C(State, v7);
  v21 = *(_QWORD *)State;
  v22 = State;
  if ( *(_WORD *)(*(_QWORD *)State + 298LL) )
  {
    v23 = 0LL;
    v24 = (SimpleAnimation_State_c **)(*(_QWORD *)(v21 + 176) + 8LL);
    while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v23;
      v24 += 2;
      if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)State + 298LL) )
        goto LABEL_25;
    }
    v25 = v21 + 16LL * (*(_DWORD *)v24 + 5) + 312;
  }
  else
  {
LABEL_25:
    v25 = sub_B08590(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  return (*(float (__fastcall **)(void *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8)) >= 1.0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardOverlayEffectPerformance__Execute(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4351743 & 1) == 0 )
  {
    sub_B70694(&WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
    byte_4351743 = 1;
  }
  v3 = sub_B70764(WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
  WarBoardOverlayEffectPerformance__Execute_d__13___ctor(
    (WarBoardOverlayEffectPerformance__Execute_d__13_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4351744 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351744 = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) && this->fields.isDestroy )
  {
    if ( !*p_effectObject )
      sub_B7076C(0LL, v5);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( !this->fields.isLoop )
    {
      v6 = *p_effectObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)v6, 0LL);
      *p_effectObject = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v7, v8, v9, v10, v11, v12);
    }
  }
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardOverlayEffectPerformance__OnStart(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v7; // x20
  System_Action_o *v8; // x21

  if ( (byte_4351742 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__);
    byte_4351742 = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) )
  {
    v5 = this->fields.effectObject;
    if ( !v5 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v5, 1, 0LL);
  }
  this->fields.animationPlay = 0;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
  {
    v7 = this->fields.commonEffect;
    v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__,
      0LL);
    if ( v7 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v7->klass->vtable._6_ForceStart.method)(
        v7,
        0LL,
        v8,
        v7->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_B7076C(v5, v4);
  }
}


void __fastcall WarBoardOverlayEffectPerformance____ctor_b__9_0(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  if ( (byte_4351747 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4351747 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WarBoardOverlayEffectPerformance__Execute_d__13_o *v8; // x19
  struct WarBoardOverlayEffectPerformance_o *_4__this; // x20
  struct WarBoardOverlayEffectComponent_o *overlayEffect; // x8
  int32_t kind; // w8
  float v12; // s0
  BattleServantConfConponent_o *p_mAnimation_5__3; // x21
  float waitTime_5__2; // s8
  float v15; // s8
  struct WarBoardOverlayEffectComponent_o *v16; // x8
  UnityEngine_Object_o *commonEffect; // x21
  struct CommonEffectComponent_o *v18; // x21
  System_Action_o *v19; // x22
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  bool result; // w0
  BattleServantConfConponent_o *p__2__current; // x19
  int v48; // w8
  BattleServantConfConponent_o *v49; // x19

  v8 = this;
  if ( (byte_434FC72 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)sub_B70694(&Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__);
    byte_434FC72 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v8->fields._waitTime_5__2 = 0.0;
      if ( !_4__this )
        goto LABEL_43;
      overlayEffect = _4__this->fields.overlayEffect;
      if ( !overlayEffect )
        goto LABEL_43;
      kind = overlayEffect->fields.kind;
      v12 = 0.0;
      if ( kind )
      {
        if ( kind != 1 )
        {
LABEL_24:
          commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
            return 0;
          v18 = _4__this->fields.commonEffect;
          v19 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v19,
            (Il2CppObject *)_4__this,
            Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
            0LL);
          if ( v18 )
          {
            ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, void *))v18->klass->vtable._9_ForceStop.method)(
              v18,
              0LL,
              v19,
              v18->klass[1]._1.image);
            this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
            if ( this )
            {
              this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
              if ( this )
              {
                ComponentInChildren_UIWidget = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                        (UnityEngine_Component_o *)this,
                                                                        (const MethodInfo_1BE40A0 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                v8->fields._mAnimation_5__3 = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
                p_mAnimation_5__3 = (BattleServantConfConponent_o *)&v8->fields._mAnimation_5__3;
                sub_B70630(
                  (BattleServantConfConponent_o *)&v8->fields._mAnimation_5__3,
                  ComponentInChildren_UIWidget,
                  v21,
                  v22,
                  v23,
                  v24,
                  v25,
                  v26);
                this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
                if ( this )
                {
                  this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
                  if ( this )
                  {
                    v27 = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_1BE40A0 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
                    v8->fields._mSimpleAnimation_5__4 = (struct SimpleAnimation_o *)v27;
                    sub_B70630(
                      (BattleServantConfConponent_o *)&v8->fields._mSimpleAnimation_5__4,
                      v27,
                      v28,
                      v29,
                      v30,
                      v31,
                      v32,
                      v33);
LABEL_34:
                    if ( WarBoardOverlayEffectPerformance__CheckAnimationEnd(
                           _4__this,
                           (UnityEngine_Animation_o *)p_mAnimation_5__3->klass,
                           0LL)
                      && WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(
                           _4__this,
                           v8->fields._mSimpleAnimation_5__4,
                           0LL) )
                    {
                      p_mAnimation_5__3->klass = 0LL;
                      sub_B70630(p_mAnimation_5__3, 0LL, v34, v35, v36, v37, v38, v39);
                      v8->fields._mSimpleAnimation_5__4 = 0LL;
                      sub_B70630(
                        (BattleServantConfConponent_o *)&v8->fields._mSimpleAnimation_5__4,
                        0LL,
                        v40,
                        v41,
                        v42,
                        v43,
                        v44,
                        v45);
                      return 0;
                    }
                    v8->fields.__2__current = 0LL;
                    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
                    sub_B70630(p__2__current, 0LL, v34, v35, v36, v37, v38, v39);
                    v48 = 4;
                    goto LABEL_42;
                  }
                }
              }
            }
          }
LABEL_43:
          sub_B7076C(this, method);
        }
LABEL_22:
        v16 = _4__this->fields.overlayEffect;
        if ( !v16 )
          goto LABEL_43;
        if ( v12 >= v16->fields.waitTime )
          goto LABEL_24;
        v8->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B70630(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v48 = 3;
      }
      else
      {
LABEL_12:
        if ( v12 < _4__this->fields.screenTouchInfoDispWaitTime )
        {
          v8->fields.__2__current = 0LL;
          v49 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B70630(v49, 0LL, v2, v3, v4, v5, v6, v7);
          result = 1;
          *(_DWORD *)&v49[-1].fields.isOpenAfter = 1;
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
LABEL_17:
        if ( _4__this->fields.isTouch )
        {
          this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.screenTouchInformationComponent;
          if ( !this )
            goto LABEL_43;
          this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL);
          if ( !this )
            goto LABEL_43;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          goto LABEL_24;
        }
        v8->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B70630(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v48 = 2;
      }
LABEL_42:
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v48;
      return 1;
    case 1:
      waitTime_5__2 = v8->fields._waitTime_5__2;
      v8->fields.__1__state = -1;
      v12 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
      v8->fields._waitTime_5__2 = v12;
      if ( _4__this )
        goto LABEL_12;
      goto LABEL_43;
    case 2:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_17;
      goto LABEL_43;
    case 3:
      v15 = v8->fields._waitTime_5__2;
      v8->fields.__1__state = -1;
      v12 = v15 + UnityEngine_Time__get_deltaTime(0LL);
      v8->fields._waitTime_5__2 = v12;
      if ( _4__this )
        goto LABEL_22;
      goto LABEL_43;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      p_mAnimation_5__3 = (BattleServantConfConponent_o *)&v8->fields._mAnimation_5__3;
      goto LABEL_34;
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_WarBoardOverlayEffectPerformance__Execute_d__13_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FC70 & 1) == 0 )
  {
    sub_B70694(&WarBoardOverlayEffectPerformance___c_TypeInfo);
    byte_434FC70 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(WarBoardOverlayEffectPerformance___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_434FC71 & 1) == 0 )
  {
    this = (WarBoardOverlayEffectPerformance___c_o *)sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_434FC71 = 1;
  }
  if ( !state )
    sub_B7076C(this, state);
  klass = state->klass;
  if ( *(_WORD *)&state->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&state->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(state, SimpleAnimation_State_TypeInfo, 9LL);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                              state,
                              *(_QWORD *)(p_method + 8));
}