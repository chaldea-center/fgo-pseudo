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
  __int64 v31; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_2155684 *v42; // x2
  int v43; // s0
  UnityEngine_Transform_o *v46; // x21
  const MethodInfo_2155684 *v47; // x2
  int v48; // s0
  UnityEngine_Transform_o *v51; // x21
  const MethodInfo_2155684 *v52; // x2
  int v53; // s0
  srcLineSprite_o *v56; // x0
  struct WarBoardOverlayEffectComponent_o **p_overlayEffect; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  const MethodInfo *v64; // x2
  struct WarBoardOverlayEffectComponent_o *v65; // x8
  UnityEngine_GameObject_o *v66; // x8
  CommonUI_o *v67; // x20
  struct ScreenTouchInformationComponent_o *v68; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInformationComponent; // x20
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  ScreenTouchInformationComponent_o *screenTouchInformationComponent; // x21
  System_Action_o *v77; // x22
  System_Nullable_Vector3__o v78; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v79; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v80; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v81; // 0:x0.16
  System_Nullable_Vector3__o v82; // 0:x0.16
  System_Nullable_Vector3__o v83; // 0:x0.16

  v10 = *(_QWORD *)&position.fields.value.fields.z;
  v80 = position;
  v79 = angle;
  v78 = scale;
  if ( (byte_4186555 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, parent);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___, v16);
    sub_B2C35C(&Method_System_Nullable_Vector3__get_HasValue__, v17);
    sub_B2C35C(&Method_System_Nullable_Vector3__get_Value__, v18);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450624, v19);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B2C35C(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__, v22);
    byte_4186555 = 1;
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
    v23 = UnityEngine_Object__Instantiate_object__34168824(
            (Il2CppObject *)effectPrefab,
            parent,
            0,
            (const MethodInfo_2095FF8 *)Method_UnityEngine_Object_Instantiate_GameObject____67450624);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v23;
    p_effectObject = &this->fields.effectObject;
    sub_B2C2F8(
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
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = &this->fields.commonEffect;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
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
        *(_QWORD *)&v81.fields.value.fields.x = &v80;
        *(_QWORD *)&v81.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
        *(UnityEngine_Vector3_o *)&v43 = System_Nullable_Vector3___get_Value(v81, v42);
        if ( !transform )
          goto LABEL_44;
        if ( isLocal )
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v43, 0LL);
        else
          UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v43, 0LL);
      }
      if ( !v79.fields.has_value )
        goto LABEL_24;
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_44;
      v46 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v82.fields.value.fields.x = &v79;
      *(_QWORD *)&v82.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v48 = System_Nullable_Vector3___get_Value(v82, v47);
      if ( !v46 )
        goto LABEL_44;
      if ( isLocal )
      {
        UnityEngine_Transform__set_localEulerAngles(v46, *(UnityEngine_Vector3_o *)&v48, 0LL);
LABEL_24:
        if ( v78.fields.has_value && isLocal )
        {
          effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
          if ( !*p_commonEffect )
            goto LABEL_44;
          v51 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
          *(_QWORD *)&v83.fields.value.fields.x = &v78;
          *(_QWORD *)&v83.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
          *(UnityEngine_Vector3_o *)&v53 = System_Nullable_Vector3___get_Value(v83, v52);
          if ( !v51 )
            goto LABEL_44;
          UnityEngine_Transform__set_localScale(v51, *(UnityEngine_Vector3_o *)&v53, 0LL);
        }
        goto LABEL_30;
      }
      UnityEngine_Transform__set_eulerAngles(v46, *(UnityEngine_Vector3_o *)&v48, 0LL);
    }
LABEL_30:
    effectObject = *p_effectObject;
    if ( *p_effectObject )
    {
      v56 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
              effectObject,
              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
      this->fields.overlayEffect = (struct WarBoardOverlayEffectComponent_o *)v56;
      p_overlayEffect = &this->fields.overlayEffect;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.overlayEffect,
        (System_Int32_array **)v56,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      effectObject = (UnityEngine_GameObject_o *)this->fields.overlayEffect;
      if ( effectObject )
      {
        WarBoardOverlayEffectComponent__Init((WarBoardOverlayEffectComponent_o *)effectObject, text, v64);
        v65 = *p_overlayEffect;
        if ( *p_overlayEffect )
        {
          this->fields.isLoop = v65->fields.isLoop;
          if ( !v65->fields.kind )
          {
            effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v66 = *p_effectObject;
            if ( !*p_effectObject )
              goto LABEL_44;
            v67 = (CommonUI_o *)effectObject;
            effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v66, 0LL);
            if ( !v67 )
              goto LABEL_44;
            effectObject = CommonUI__CreateScreeenTouchInfo(v67, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( !effectObject )
              goto LABEL_44;
            v68 = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                effectObject,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
            this->fields.screenTouchInformationComponent = v68;
            p_screenTouchInformationComponent = &this->fields.screenTouchInformationComponent;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.screenTouchInformationComponent,
              (System_Int32_array **)v68,
              v70,
              v71,
              v72,
              v73,
              v74,
              v75);
            this->fields.isTouch = 0;
            screenTouchInformationComponent = this->fields.screenTouchInformationComponent;
            v77 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v77,
              (Il2CppObject *)this,
              Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__,
              0LL);
            if ( !screenTouchInformationComponent )
              goto LABEL_44;
            ScreenTouchInformationComponent__Setup(screenTouchInformationComponent, v77, 0LL);
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
    sub_B2C434(effectObject, v31);
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
    sub_B2C434(0LL, method);
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
  __int64 v14; // x3
  System_Collections_IEnumerator_o *v15; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_IEnumerator_c *v22; // x8
  unsigned __int64 v23; // x10
  System_Collections_IEnumerator_c **v24; // x11
  __int64 v25; // x0
  UnityEngine_AnimationState_o *v26; // x0
  __int64 v27; // x1
  UnityEngine_Object_o *clip; // x0
  __int64 v29; // x1
  __int64 v30; // x0
  __int64 v31; // x3
  __int64 v32; // x8
  __int64 v33; // x21
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0

  if ( (byte_4186559 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AnimationState_TypeInfo, animation);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4186559 = 1;
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
    sub_B2C434(Item, v11);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  v15 = Enumerator;
  if ( !Enumerator )
    sub_B2C434(0LL, v13);
  klass = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(v15, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v22 = v15->klass;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = (System_Collections_IEnumerator_c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        v24 += 2;
        if ( v23 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 1].method;
    }
    else
    {
LABEL_22:
      v25 = sub_AC5258(v15, System_Collections_IEnumerator_TypeInfo, 1LL, v21);
    }
    v26 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v25)(
                                            v15,
                                            *(_QWORD *)(v25 + 8));
    if ( !v26 )
      sub_B2C434(0LL, v27);
    if ( v26->klass == UnityEngine_AnimationState_TypeInfo )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v26, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        goto LABEL_29;
      }
    }
    else
    {
      clip = (UnityEngine_Object_o *)sub_B2C728(v26);
    }
    sub_B2C434(clip, v29);
  }
LABEL_29:
  v30 = sub_B2C41C(v15, System_IDisposable_TypeInfo);
  if ( v30 )
  {
    v32 = *(_QWORD *)v30;
    v33 = v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_34;
      }
      v36 = v32 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_34:
      v36 = sub_AC5258(v30, System_IDisposable_TypeInfo, 0LL, v31);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
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
  System_Collections_Generic_IEnumerable_TSource__o *States; // x21
  WarBoardOverlayEffectPerformance___c_c *v17; // x8
  struct WarBoardOverlayEffectPerformance___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_0; // x22
  Il2CppObject *v20; // x23
  struct WarBoardOverlayEffectPerformance___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  __int64 v29; // x3
  __int64 v30; // x8
  void *v31; // x19
  unsigned __int64 v32; // x10
  SimpleAnimation_State_c **v33; // x11
  __int64 v34; // x0

  if ( (byte_418655A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___, simpleAnimation);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_B2C35C(&Method_System_Func_SimpleAnimation_State__string___ctor__, v6);
    sub_B2C35C(&System_Func_SimpleAnimation_State__string__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v9);
    sub_B2C35C(&Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__, v10);
    sub_B2C35C(&WarBoardOverlayEffectPerformance___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_418655A = 1;
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
  v17 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  if ( (BYTE3(WarBoardOverlayEffectPerformance___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardOverlayEffectPerformance___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOverlayEffectPerformance___c_TypeInfo);
    v17 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__16_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_SimpleAnimation_State__string__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__16_0,
      v20,
      Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__,
      (const MethodInfo_2713350 *)Method_System_Func_SimpleAnimation_State__string___ctor__);
    v21 = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    v21->__9__16_0 = (struct System_Func_SimpleAnimation_State__string__o *)_9__16_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v21->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               States,
                                                               (System_Func_TSource__TResult__o *)_9__16_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
  State = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v28,
            (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !State )
    goto LABEL_29;
  if ( *((int *)State + 6) >= 1 )
    v13 = (System_String_o *)*((_QWORD *)State + 4);
  State = SimpleAnimation__GetState(simpleAnimation, v13, 0LL);
  if ( !State )
LABEL_29:
    sub_B2C434(State, v15);
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
    v34 = sub_AC5258(State, SimpleAnimation_State_TypeInfo, 5LL, v29);
  }
  return (*(float (__fastcall **)(void *, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8)) >= 1.0;
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

  if ( (byte_4186557 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo, method);
    byte_4186557 = 1;
  }
  v3 = sub_B2C42C(WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
  WarBoardOverlayEffectPerformance__Execute_d__13___ctor(
    (WarBoardOverlayEffectPerformance__Execute_d__13_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4186558 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186558 = 1;
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
      sub_B2C434(0LL, v5);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( !this->fields.isLoop )
    {
      v6 = *p_effectObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)v6, 0LL);
      *p_effectObject = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v9; // x20
  System_Action_o *v10; // x21

  if ( (byte_4186556 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__, v4);
    byte_4186556 = 1;
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
    v7 = this->fields.effectObject;
    if ( !v7 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v7, 1, 0LL);
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
    v9 = this->fields.commonEffect;
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__,
      0LL);
    if ( v9 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v9->klass->vtable._6_ForceStart.method)(
        v9,
        0LL,
        v10,
        v9->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_B2C434(v7, v6);
  }
}


void __fastcall WarBoardOverlayEffectPerformance____ctor_b__9_0(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  if ( (byte_418655B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418655B = 1;
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
  struct CommonEffectComponent_o *v22; // x21
  System_Action_o *v23; // x22
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  bool result; // w0
  BattleServantConfConponent_o *p__2__current; // x19
  int v52; // w8
  BattleServantConfConponent_o *v53; // x19

  v8 = this;
  if ( (byte_41866F8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v9);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)sub_B2C35C(
                                                                  &Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
                                                                  v12);
    byte_41866F8 = 1;
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
          v22 = _4__this->fields.commonEffect;
          v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v23,
            (Il2CppObject *)_4__this,
            Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
            0LL);
          if ( v22 )
          {
            ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, void *))v22->klass->vtable._9_ForceStop.method)(
              v22,
              0LL,
              v23,
              v22->klass[1]._1.image);
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
                                                                        (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                v8->fields._mAnimation_5__3 = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
                p_mAnimation_5__3 = (BattleServantConfConponent_o *)&v8->fields._mAnimation_5__3;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&v8->fields._mAnimation_5__3,
                  ComponentInChildren_UIWidget,
                  v25,
                  v26,
                  v27,
                  v28,
                  v29,
                  v30);
                this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
                if ( this )
                {
                  this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
                  if ( this )
                  {
                    v31 = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
                    v8->fields._mSimpleAnimation_5__4 = (struct SimpleAnimation_o *)v31;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&v8->fields._mSimpleAnimation_5__4,
                      v31,
                      v32,
                      v33,
                      v34,
                      v35,
                      v36,
                      v37);
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
                      sub_B2C2F8(p_mAnimation_5__3, 0LL, v38, v39, v40, v41, v42, v43);
                      v8->fields._mSimpleAnimation_5__4 = 0LL;
                      sub_B2C2F8(
                        (BattleServantConfConponent_o *)&v8->fields._mSimpleAnimation_5__4,
                        0LL,
                        v44,
                        v45,
                        v46,
                        v47,
                        v48,
                        v49);
                      return 0;
                    }
                    v8->fields.__2__current = 0LL;
                    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
                    sub_B2C2F8(p__2__current, 0LL, v38, v39, v40, v41, v42, v43);
                    v52 = 4;
                    goto LABEL_42;
                  }
                }
              }
            }
          }
LABEL_43:
          sub_B2C434(this, method);
        }
LABEL_22:
        v20 = _4__this->fields.overlayEffect;
        if ( !v20 )
          goto LABEL_43;
        if ( v16 >= v20->fields.waitTime )
          goto LABEL_24;
        v8->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B2C2F8(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v52 = 3;
      }
      else
      {
LABEL_12:
        if ( v16 < _4__this->fields.screenTouchInfoDispWaitTime )
        {
          v8->fields.__2__current = 0LL;
          v53 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B2C2F8(v53, 0LL, v2, v3, v4, v5, v6, v7);
          result = 1;
          *(_DWORD *)&v53[-1].fields.isOpenAfter = 1;
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
        sub_B2C2F8(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v52 = 2;
      }
LABEL_42:
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v52;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardOverlayEffectPerformance__Execute_d__13_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41866F6 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardOverlayEffectPerformance___c_TypeInfo, v1);
    byte_41866F6 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardOverlayEffectPerformance___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_41866F7 & 1) == 0 )
  {
    this = (WarBoardOverlayEffectPerformance___c_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, state);
    byte_41866F7 = 1;
  }
  if ( !state )
    sub_B2C434(this, state);
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
    p_method = sub_AC5258(state, SimpleAnimation_State_TypeInfo, 9LL, v3);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                              state,
                              *(_QWORD *)(p_method + 8));
}