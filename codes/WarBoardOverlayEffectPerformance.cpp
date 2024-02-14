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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *effectObject; // x0
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_299B960 *v41; // x2
  int v42; // s0
  UnityEngine_Transform_o *v45; // x21
  const MethodInfo_299B960 *v46; // x2
  int v47; // s0
  UnityEngine_Transform_o *v50; // x21
  const MethodInfo_299B960 *v51; // x2
  int v52; // s0
  srcLineSprite_o *v55; // x0
  struct WarBoardOverlayEffectComponent_o **p_overlayEffect; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x2
  struct WarBoardOverlayEffectComponent_o *v64; // x8
  UnityEngine_GameObject_o *v65; // x8
  CommonUI_o *v66; // x20
  struct ScreenTouchInformationComponent_o *v67; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInformationComponent; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  ScreenTouchInformationComponent_o *screenTouchInformationComponent; // x21
  __int64 v76; // x1
  __int64 v77; // x2
  System_Action_o *v78; // x22
  System_Nullable_Vector3__o v79; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v80; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v81; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v82; // 0:x0.16
  System_Nullable_Vector3__o v83; // 0:x0.16
  System_Nullable_Vector3__o v84; // 0:x0.16

  v10 = *(_QWORD *)&position.fields.value.fields.z;
  v81 = position;
  v80 = angle;
  v79 = scale;
  if ( (byte_4213307 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, parent);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___, v16);
    sub_B0D8A4(&Method_System_Nullable_Vector3__get_HasValue__, v17);
    sub_B0D8A4(&Method_System_Nullable_Vector3__get_Value__, v18);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025360, v19);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B0D8A4(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__, v22);
    byte_4213307 = 1;
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
    v23 = UnityEngine_Object__Instantiate_object__33860420(
            (Il2CppObject *)effectPrefab,
            parent,
            0,
            (const MethodInfo_204AB44 *)Method_UnityEngine_Object_Instantiate_GameObject____68025360);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v23;
    p_effectObject = &this->fields.effectObject;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.effectObject,
      (System_Int32_array **)v23,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_44;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  effectObject,
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = &this->fields.commonEffect;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
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
        *(_QWORD *)&v82.fields.value.fields.x = &v81;
        *(_QWORD *)&v82.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
        *(UnityEngine_Vector3_o *)&v42 = System_Nullable_Vector3___get_Value(v82, v41);
        if ( !transform )
          goto LABEL_44;
        if ( isLocal )
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v42, 0LL);
        else
          UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v42, 0LL);
      }
      if ( !v80.fields.has_value )
        goto LABEL_24;
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_44;
      v45 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v83.fields.value.fields.x = &v80;
      *(_QWORD *)&v83.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v47 = System_Nullable_Vector3___get_Value(v83, v46);
      if ( !v45 )
        goto LABEL_44;
      if ( isLocal )
      {
        UnityEngine_Transform__set_localEulerAngles(v45, *(UnityEngine_Vector3_o *)&v47, 0LL);
LABEL_24:
        if ( v79.fields.has_value && isLocal )
        {
          effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
          if ( !*p_commonEffect )
            goto LABEL_44;
          v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
          *(_QWORD *)&v84.fields.value.fields.x = &v79;
          *(_QWORD *)&v84.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
          *(UnityEngine_Vector3_o *)&v52 = System_Nullable_Vector3___get_Value(v84, v51);
          if ( !v50 )
            goto LABEL_44;
          UnityEngine_Transform__set_localScale(v50, *(UnityEngine_Vector3_o *)&v52, 0LL);
        }
        goto LABEL_30;
      }
      UnityEngine_Transform__set_eulerAngles(v45, *(UnityEngine_Vector3_o *)&v47, 0LL);
    }
LABEL_30:
    effectObject = *p_effectObject;
    if ( *p_effectObject )
    {
      v55 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
              effectObject,
              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
      this->fields.overlayEffect = (struct WarBoardOverlayEffectComponent_o *)v55;
      p_overlayEffect = &this->fields.overlayEffect;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.overlayEffect,
        (System_Int32_array **)v55,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
      effectObject = (UnityEngine_GameObject_o *)this->fields.overlayEffect;
      if ( effectObject )
      {
        WarBoardOverlayEffectComponent__Init((WarBoardOverlayEffectComponent_o *)effectObject, text, v63);
        v64 = *p_overlayEffect;
        if ( *p_overlayEffect )
        {
          this->fields.isLoop = v64->fields.isLoop;
          if ( !v64->fields.kind )
          {
            effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v65 = *p_effectObject;
            if ( !*p_effectObject )
              goto LABEL_44;
            v66 = (CommonUI_o *)effectObject;
            effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v65, 0LL);
            if ( !v66 )
              goto LABEL_44;
            effectObject = CommonUI__CreateScreeenTouchInfo(v66, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( !effectObject )
              goto LABEL_44;
            v67 = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                effectObject,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
            this->fields.screenTouchInformationComponent = v67;
            p_screenTouchInformationComponent = &this->fields.screenTouchInformationComponent;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.screenTouchInformationComponent,
              (System_Int32_array **)v67,
              v69,
              v70,
              v71,
              v72,
              v73,
              v74);
            this->fields.isTouch = 0;
            screenTouchInformationComponent = this->fields.screenTouchInformationComponent;
            v78 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v76, v77);
            System_Action___ctor(
              v78,
              (Il2CppObject *)this,
              Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__,
              0LL);
            if ( !screenTouchInformationComponent )
              goto LABEL_44;
            ScreenTouchInformationComponent__Setup(screenTouchInformationComponent, v78, 0LL);
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
    sub_B0D97C(effectObject);
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
    sub_B0D97C(0LL);
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
  System_Collections_IEnumerator_o *Enumerator; // x0
  System_Collections_IEnumerator_o *v12; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v18; // x8
  unsigned __int64 v19; // x10
  System_Collections_IEnumerator_c **v20; // x11
  __int64 v21; // x0
  UnityEngine_AnimationState_o *v22; // x0
  UnityEngine_Object_o *clip; // x0
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x21
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0

  if ( (byte_421330B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AnimationState_TypeInfo, animation);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_421330B = 1;
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
    sub_B0D97C(Item);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  v12 = Enumerator;
  if ( !Enumerator )
    sub_B0D97C(0LL);
  klass = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(v12, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v18 = v12->klass;
    if ( *(_WORD *)&v12->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
      while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        v20 += 2;
        if ( v19 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1].method;
    }
    else
    {
LABEL_22:
      v21 = sub_AA67A0(v12, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v22 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                            v12,
                                            *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_B0D97C(0LL);
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
      clip = (UnityEngine_Object_o *)sub_B0DC70(v22);
    }
    sub_B0D97C(clip);
  }
LABEL_29:
  v24 = sub_B0D964(v12, System_IDisposable_TypeInfo);
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
      v29 = sub_AA67A0(v24, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x20
  void *State; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_IEnumerable_TSource__o *States; // x21
  WarBoardOverlayEffectPerformance___c_c *v18; // x8
  struct WarBoardOverlayEffectPerformance___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_0; // x22
  Il2CppObject *v21; // x23
  struct WarBoardOverlayEffectPerformance___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  __int64 v30; // x8
  void *v31; // x19
  unsigned __int64 v32; // x10
  SimpleAnimation_State_c **v33; // x11
  __int64 v34; // x0

  if ( (byte_421330C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___, simpleAnimation);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_B0D8A4(&Method_System_Func_SimpleAnimation_State__string___ctor__, v6);
    sub_B0D8A4(&System_Func_SimpleAnimation_State__string__TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v9);
    sub_B0D8A4(&Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__, v10);
    sub_B0D8A4(&WarBoardOverlayEffectPerformance___c_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_421330C = 1;
  }
  if ( !this->fields.animationPlay )
    return 1;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
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
  v18 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  if ( (BYTE3(WarBoardOverlayEffectPerformance___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardOverlayEffectPerformance___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOverlayEffectPerformance___c_TypeInfo);
    v18 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__16_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                 System_Func_SimpleAnimation_State__string__TypeInfo,
                                                                                                 v15,
                                                                                                 v16);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__16_0,
      v21,
      Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__,
      (const MethodInfo_261A104 *)Method_System_Func_SimpleAnimation_State__string___ctor__);
    v22 = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    v22->__9__16_0 = (struct System_Func_SimpleAnimation_State__string__o *)_9__16_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v22->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               States,
                                                               (System_Func_TSource__TResult__o *)_9__16_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
  State = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v29,
            (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !State )
    goto LABEL_29;
  if ( *((int *)State + 6) >= 1 )
    v13 = (System_String_o *)*((_QWORD *)State + 4);
  State = SimpleAnimation__GetState(simpleAnimation, v13, 0LL);
  if ( !State )
LABEL_29:
    sub_B0D97C(State);
  v30 = *(_QWORD *)State;
  v31 = State;
  if ( *(_WORD *)(*(_QWORD *)State + 298LL) )
  {
    v32 = 0LL;
    v33 = (SimpleAnimation_State_c **)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v32;
      v33 += 2;
      if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)State + 298LL) )
        goto LABEL_25;
    }
    v34 = v30 + 16LL * (*(_DWORD *)v33 + 5) + 312;
  }
  else
  {
LABEL_25:
    v34 = sub_AA67A0(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  return (*(float (__fastcall **)(void *, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8)) >= 1.0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardOverlayEffectPerformance__Execute(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4213309 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo, method);
    byte_4213309 = 1;
  }
  v4 = sub_B0D974(WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo, method, v2);
  WarBoardOverlayEffectPerformance__Execute_d__13___ctor(
    (WarBoardOverlayEffectPerformance__Execute_d__13_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall WarBoardOverlayEffectPerformance__OnEnd(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  UnityEngine_GameObject_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421330A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421330A = 1;
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
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( !this->fields.isLoop )
    {
      v5 = *p_effectObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)v5, 0LL);
      *p_effectObject = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardOverlayEffectPerformance__OnStart(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *effectObject; // x20
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Object_o *commonEffect; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  struct CommonEffectComponent_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_4213308 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__, v4);
    byte_4213308 = 1;
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
    v6 = this->fields.effectObject;
    if ( !v6 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v6, 1, 0LL);
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
    v10 = this->fields.commonEffect;
    v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
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
    sub_B0D97C(v6);
  }
}


void __fastcall WarBoardOverlayEffectPerformance____ctor_b__9_0(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  if ( (byte_421330D & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421330D = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct WarBoardOverlayEffectPerformance_o *_4__this; // x20
  struct WarBoardOverlayEffectComponent_o *overlayEffect; // x8
  int32_t kind; // w8
  float v16; // s0
  BattleServantConfConponent_o *p_mAnimation_5__3; // x21
  float waitTime_5__2; // s8
  float v19; // s8
  struct WarBoardOverlayEffectComponent_o *v20; // x8
  UnityEngine_Object_o *commonEffect; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  struct CommonEffectComponent_o *v24; // x21
  System_Action_o *v25; // x22
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x0
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
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  bool result; // w0
  BattleServantConfConponent_o *p__2__current; // x19
  int v54; // w8
  BattleServantConfConponent_o *v55; // x19

  v8 = this;
  if ( (byte_4213873 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v9);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)sub_B0D8A4(
                                                                  &Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
                                                                  v12);
    byte_4213873 = 1;
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
      v16 = 0.0;
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
          v24 = _4__this->fields.commonEffect;
          v25 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
          System_Action___ctor(
            v25,
            (Il2CppObject *)_4__this,
            Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
            0LL);
          if ( v24 )
          {
            ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, void *))v24->klass->vtable._9_ForceStop.method)(
              v24,
              0LL,
              v25,
              v24->klass[1]._1.image);
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
                                                                        (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                v8->fields._mAnimation_5__3 = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
                p_mAnimation_5__3 = (BattleServantConfConponent_o *)&v8->fields._mAnimation_5__3;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&v8->fields._mAnimation_5__3,
                  ComponentInChildren_UIWidget,
                  v27,
                  v28,
                  v29,
                  v30,
                  v31,
                  v32);
                this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
                if ( this )
                {
                  this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
                  if ( this )
                  {
                    v33 = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
                    v8->fields._mSimpleAnimation_5__4 = (struct SimpleAnimation_o *)v33;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&v8->fields._mSimpleAnimation_5__4,
                      v33,
                      v34,
                      v35,
                      v36,
                      v37,
                      v38,
                      v39);
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
                      sub_B0D840(p_mAnimation_5__3, 0LL, v40, v41, v42, v43, v44, v45);
                      v8->fields._mSimpleAnimation_5__4 = 0LL;
                      sub_B0D840(
                        (BattleServantConfConponent_o *)&v8->fields._mSimpleAnimation_5__4,
                        0LL,
                        v46,
                        v47,
                        v48,
                        v49,
                        v50,
                        v51);
                      return 0;
                    }
                    v8->fields.__2__current = 0LL;
                    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
                    sub_B0D840(p__2__current, 0LL, v40, v41, v42, v43, v44, v45);
                    v54 = 4;
                    goto LABEL_42;
                  }
                }
              }
            }
          }
LABEL_43:
          sub_B0D97C(this);
        }
LABEL_22:
        v20 = _4__this->fields.overlayEffect;
        if ( !v20 )
          goto LABEL_43;
        if ( v16 >= v20->fields.waitTime )
          goto LABEL_24;
        v8->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B0D840(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v54 = 3;
      }
      else
      {
LABEL_12:
        if ( v16 < _4__this->fields.screenTouchInfoDispWaitTime )
        {
          v8->fields.__2__current = 0LL;
          v55 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B0D840(v55, 0LL, v2, v3, v4, v5, v6, v7);
          result = 1;
          *(_DWORD *)&v55[-1].fields.isOpenAfter = 1;
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
        sub_B0D840(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v54 = 2;
      }
LABEL_42:
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v54;
      return 1;
    case 1:
      waitTime_5__2 = v8->fields._waitTime_5__2;
      v8->fields.__1__state = -1;
      v16 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
      v8->fields._waitTime_5__2 = v16;
      if ( _4__this )
        goto LABEL_12;
      goto LABEL_43;
    case 2:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_17;
      goto LABEL_43;
    case 3:
      v19 = v8->fields._waitTime_5__2;
      v8->fields.__1__state = -1;
      v16 = v19 + UnityEngine_Time__get_deltaTime(0LL);
      v8->fields._waitTime_5__2 = v16;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardOverlayEffectPerformance__Execute_d__13_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213871 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardOverlayEffectPerformance___c_TypeInfo, v1);
    byte_4213871 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardOverlayEffectPerformance___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4213872 & 1) == 0 )
  {
    this = (WarBoardOverlayEffectPerformance___c_o *)sub_B0D8A4(&SimpleAnimation_State_TypeInfo, state);
    byte_4213872 = 1;
  }
  if ( !state )
    sub_B0D97C(this);
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
    p_method = sub_AA67A0(state, SimpleAnimation_State_TypeInfo, 9LL);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                              state,
                              *(_QWORD *)(p_method + 8));
}