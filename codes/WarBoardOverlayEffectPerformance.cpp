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
  const MethodInfo_217535C *v33; // x2
  int v34; // s0
  UnityEngine_Transform_o *v37; // x21
  const MethodInfo_217535C *v38; // x2
  int v39; // s0
  UnityEngine_Transform_o *v42; // x21
  const MethodInfo_217535C *v43; // x2
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
  if ( (byte_42AEA83 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
    sub_B52984(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_B52984(&Method_System_Nullable_Vector3__get_Value__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654688);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__);
    byte_42AEA83 = 1;
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
    v14 = UnityEngine_Object__Instantiate_object__32969592(
            (Il2CppObject *)effectPrefab,
            parent,
            0,
            (const MethodInfo_1F71378 *)Method_UnityEngine_Object_Instantiate_GameObject____68654688);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v14;
    p_effectObject = &this->fields.effectObject;
    sub_B52920(
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
                                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = &this->fields.commonEffect;
    sub_B52920(
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
              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
      this->fields.overlayEffect = (struct WarBoardOverlayEffectComponent_o *)v47;
      p_overlayEffect = &this->fields.overlayEffect;
      sub_B52920(
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
            effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
            this->fields.screenTouchInformationComponent = v59;
            p_screenTouchInformationComponent = &this->fields.screenTouchInformationComponent;
            sub_B52920(
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
            v68 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
    sub_B52A5C(effectObject, v22);
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
    sub_B52A5C(0LL, method);
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
  __int64 v10; // x3
  System_Collections_IEnumerator_o *v11; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_IEnumerator_c *v18; // x8
  unsigned __int64 v19; // x10
  System_Collections_IEnumerator_c **v20; // x11
  __int64 v21; // x0
  UnityEngine_AnimationState_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *clip; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x21
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0

  if ( (byte_42AEA87 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_AnimationState_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEA87 = 1;
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
    sub_B52A5C(Item, v7);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  v11 = Enumerator;
  if ( !Enumerator )
    sub_B52A5C(0LL, v9);
  klass = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(v11, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v18 = v11->klass;
    if ( *(_WORD *)&v11->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
      while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        v20 += 2;
        if ( v19 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1].method;
    }
    else
    {
LABEL_22:
      v21 = sub_AEB880(v11, System_Collections_IEnumerator_TypeInfo, 1LL, v17);
    }
    v22 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                            v11,
                                            *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_B52A5C(0LL, v23);
    if ( v22->klass == UnityEngine_AnimationState_TypeInfo )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v22, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        goto LABEL_29;
      }
    }
    else
    {
      clip = (UnityEngine_Object_o *)sub_B52D50(v22);
    }
    sub_B52A5C(clip, v25);
  }
LABEL_29:
  v26 = sub_B52A44(v11, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v28 = *(_QWORD *)v26;
    v29 = v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_34;
      }
      v32 = v28 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_34:
      v32 = sub_AEB880(v26, System_IDisposable_TypeInfo, 0LL, v27);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
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
  __int64 v21; // x3
  __int64 v22; // x8
  void *v23; // x19
  unsigned __int64 v24; // x10
  SimpleAnimation_State_c **v25; // x11
  __int64 v26; // x0

  if ( (byte_42AEA88 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_B52984(&Method_System_Func_SimpleAnimation_State__string___ctor__);
    sub_B52984(&System_Func_SimpleAnimation_State__string__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    sub_B52984(&Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__);
    sub_B52984(&WarBoardOverlayEffectPerformance___c_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEA88 = 1;
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
    _9__16_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_SimpleAnimation_State__string__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__16_0,
      v12,
      Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_SimpleAnimation_State__string___ctor__);
    v13 = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    v13->__9__16_0 = (struct System_Func_SimpleAnimation_State__string__o *)_9__16_0;
    sub_B52920(
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
                                                               (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
  State = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v20,
            (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !State )
    goto LABEL_29;
  if ( *((int *)State + 6) >= 1 )
    v5 = (System_String_o *)*((_QWORD *)State + 4);
  State = SimpleAnimation__GetState(simpleAnimation, v5, 0LL);
  if ( !State )
LABEL_29:
    sub_B52A5C(State, v7);
  v22 = *(_QWORD *)State;
  v23 = State;
  if ( *(_WORD *)(*(_QWORD *)State + 298LL) )
  {
    v24 = 0LL;
    v25 = (SimpleAnimation_State_c **)(*(_QWORD *)(v22 + 176) + 8LL);
    while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v24;
      v25 += 2;
      if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)State + 298LL) )
        goto LABEL_25;
    }
    v26 = v22 + 16LL * (*(_DWORD *)v25 + 5) + 312;
  }
  else
  {
LABEL_25:
    v26 = sub_AEB880(State, SimpleAnimation_State_TypeInfo, 5LL, v21);
  }
  return (*(float (__fastcall **)(void *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8)) >= 1.0;
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

  if ( (byte_42AEA85 & 1) == 0 )
  {
    sub_B52984(&WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
    byte_42AEA85 = 1;
  }
  v3 = sub_B52A54(WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
  WarBoardOverlayEffectPerformance__Execute_d__13___ctor(
    (WarBoardOverlayEffectPerformance__Execute_d__13_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_42AEA86 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEA86 = 1;
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
      sub_B52A5C(0LL, v5);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( !this->fields.isLoop )
    {
      v6 = *p_effectObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)v6, 0LL);
      *p_effectObject = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_42AEA84 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__);
    byte_42AEA84 = 1;
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
    v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
    sub_B52A5C(v5, v4);
  }
}


void __fastcall WarBoardOverlayEffectPerformance____ctor_b__9_0(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AEA89 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AEA89 = 1;
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
  WarBoardOverlayEffectPerformance__Execute_d__13_o *v2; // x19
  struct WarBoardOverlayEffectPerformance_o *_4__this; // x20
  struct WarBoardOverlayEffectComponent_o *overlayEffect; // x8
  int32_t kind; // w8
  float v6; // s0
  UnityEngine_Animation_o **p_mAnimation_5__3; // x21
  float waitTime_5__2; // s8
  float v9; // s8
  struct WarBoardOverlayEffectComponent_o *v10; // x8
  UnityEngine_Object_o *commonEffect; // x21
  struct CommonEffectComponent_o *v12; // x21
  System_Action_o *v13; // x22
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  int v16; // w8
  Il2CppObject **v17; // x19

  v2 = this;
  if ( (byte_42AD72E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)sub_B52984(&Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__);
    byte_42AD72E = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v2->fields._waitTime_5__2 = 0.0;
      if ( !_4__this )
        goto LABEL_43;
      overlayEffect = _4__this->fields.overlayEffect;
      if ( !overlayEffect )
        goto LABEL_43;
      kind = overlayEffect->fields.kind;
      v6 = 0.0;
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
          v12 = _4__this->fields.commonEffect;
          v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v13,
            (Il2CppObject *)_4__this,
            Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
            0LL);
          if ( v12 )
          {
            ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, void *))v12->klass->vtable._9_ForceStop.method)(
              v12,
              0LL,
              v13,
              v12->klass[1]._1.image);
            this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
            if ( this )
            {
              this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
              if ( this )
              {
                v2->fields._mAnimation_5__3 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                                  (UnityEngine_Component_o *)this,
                                                                                  (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                p_mAnimation_5__3 = &v2->fields._mAnimation_5__3;
                sub_B52920(&v2->fields._mAnimation_5__3);
                this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
                if ( this )
                {
                  this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
                  if ( this )
                  {
                    v2->fields._mSimpleAnimation_5__4 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
                    sub_B52920(&v2->fields._mSimpleAnimation_5__4);
LABEL_34:
                    if ( WarBoardOverlayEffectPerformance__CheckAnimationEnd(_4__this, *p_mAnimation_5__3, 0LL)
                      && WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(
                           _4__this,
                           v2->fields._mSimpleAnimation_5__4,
                           0LL) )
                    {
                      *p_mAnimation_5__3 = 0LL;
                      sub_B52920(p_mAnimation_5__3);
                      v2->fields._mSimpleAnimation_5__4 = 0LL;
                      sub_B52920(&v2->fields._mSimpleAnimation_5__4);
                      return 0;
                    }
                    v2->fields.__2__current = 0LL;
                    p__2__current = &v2->fields.__2__current;
                    sub_B52920(p__2__current);
                    v16 = 4;
                    goto LABEL_42;
                  }
                }
              }
            }
          }
LABEL_43:
          sub_B52A5C(this, method);
        }
LABEL_22:
        v10 = _4__this->fields.overlayEffect;
        if ( !v10 )
          goto LABEL_43;
        if ( v6 >= v10->fields.waitTime )
          goto LABEL_24;
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_B52920(p__2__current);
        v16 = 3;
      }
      else
      {
LABEL_12:
        if ( v6 < _4__this->fields.screenTouchInfoDispWaitTime )
        {
          v2->fields.__2__current = 0LL;
          v17 = &v2->fields.__2__current;
          sub_B52920(v17);
          result = 1;
          *((_DWORD *)v17 - 2) = 1;
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
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_B52920(p__2__current);
        v16 = 2;
      }
LABEL_42:
      *((_DWORD *)p__2__current - 2) = v16;
      return 1;
    case 1:
      waitTime_5__2 = v2->fields._waitTime_5__2;
      v2->fields.__1__state = -1;
      v6 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
      v2->fields._waitTime_5__2 = v6;
      if ( _4__this )
        goto LABEL_12;
      goto LABEL_43;
    case 2:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_17;
      goto LABEL_43;
    case 3:
      v9 = v2->fields._waitTime_5__2;
      v2->fields.__1__state = -1;
      v6 = v9 + UnityEngine_Time__get_deltaTime(0LL);
      v2->fields._waitTime_5__2 = v6;
      if ( _4__this )
        goto LABEL_22;
      goto LABEL_43;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      p_mAnimation_5__3 = &v2->fields._mAnimation_5__3;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_WarBoardOverlayEffectPerformance__Execute_d__13_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  struct WarBoardOverlayEffectPerformance___c_StaticFields *static_fields; // x0

  if ( (byte_42AD72C & 1) == 0 )
  {
    sub_B52984(&WarBoardOverlayEffectPerformance___c_TypeInfo);
    byte_42AD72C = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardOverlayEffectPerformance___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardOverlayEffectPerformance___c_o *)v1;
  sub_B52920(static_fields);
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
  __int64 v3; // x3
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42AD72D & 1) == 0 )
  {
    this = (WarBoardOverlayEffectPerformance___c_o *)sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42AD72D = 1;
  }
  if ( !state )
    sub_B52A5C(this, state);
  klass = state->klass;
  if ( *(_WORD *)&state->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&state->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(state, SimpleAnimation_State_TypeInfo, 9LL, v3);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                              state,
                              *(_QWORD *)(p_method + 8));
}