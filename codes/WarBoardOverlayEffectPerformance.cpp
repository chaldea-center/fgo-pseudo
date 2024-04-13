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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  Il2CppObject *v41; // x0
  struct UnityEngine_GameObject_o **p_effectObject; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_234ED58 *v60; // x2
  int v61; // s0
  UnityEngine_Transform_o *v64; // x21
  const MethodInfo_234ED58 *v65; // x2
  int v66; // s0
  UnityEngine_Transform_o *v69; // x21
  const MethodInfo_234ED58 *v70; // x2
  int v71; // s0
  srcLineSprite_o *v74; // x0
  struct WarBoardOverlayEffectComponent_o **p_overlayEffect; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  const MethodInfo *v82; // x2
  struct WarBoardOverlayEffectComponent_o *v83; // x8
  UnityEngine_GameObject_o *v84; // x8
  CommonUI_o *v85; // x20
  struct ScreenTouchInformationComponent_o *v86; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInformationComponent; // x20
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  ScreenTouchInformationComponent_o *screenTouchInformationComponent; // x21
  System_Action_o *v95; // x22
  System_Nullable_Vector3__o v96; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v97; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v98; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v99; // 0:x0.16
  System_Nullable_Vector3__o v100; // 0:x0.16
  System_Nullable_Vector3__o v101; // 0:x0.16

  v10 = *(_QWORD *)&position.fields.value.fields.z;
  v98 = position;
  v97 = angle;
  v96 = scale;
  if ( (byte_42E75DB & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Action_TypeInfo,
      (_DWORD)parent,
      (_DWORD)effectPrefab,
      *(_QWORD *)&position.fields.value.fields.x);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_HasValue__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_Value__, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882832, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__, v38, v39, v40);
    byte_42E75DB = 1;
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
    v41 = UnityEngine_Object__Instantiate_object__31876248(
            (Il2CppObject *)effectPrefab,
            parent,
            0,
            (const MethodInfo_1E66498 *)Method_UnityEngine_Object_Instantiate_GameObject____68882832);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v41;
    p_effectObject = &this->fields.effectObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.effectObject,
      (System_Int32_array **)v41,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_44;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  effectObject,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = &this->fields.commonEffect;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
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
        *(_QWORD *)&v99.fields.value.fields.x = &v98;
        *(_QWORD *)&v99.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
        *(UnityEngine_Vector3_o *)&v61 = System_Nullable_Vector3___get_Value(v99, v60);
        if ( !transform )
          goto LABEL_44;
        if ( isLocal )
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v61, 0LL);
        else
          UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v61, 0LL);
      }
      if ( !v97.fields.has_value )
        goto LABEL_24;
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_44;
      v64 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v100.fields.value.fields.x = &v97;
      *(_QWORD *)&v100.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v66 = System_Nullable_Vector3___get_Value(v100, v65);
      if ( !v64 )
        goto LABEL_44;
      if ( isLocal )
      {
        UnityEngine_Transform__set_localEulerAngles(v64, *(UnityEngine_Vector3_o *)&v66, 0LL);
LABEL_24:
        if ( v96.fields.has_value && isLocal )
        {
          effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
          if ( !*p_commonEffect )
            goto LABEL_44;
          v69 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
          *(_QWORD *)&v101.fields.value.fields.x = &v96;
          *(_QWORD *)&v101.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
          *(UnityEngine_Vector3_o *)&v71 = System_Nullable_Vector3___get_Value(v101, v70);
          if ( !v69 )
            goto LABEL_44;
          UnityEngine_Transform__set_localScale(v69, *(UnityEngine_Vector3_o *)&v71, 0LL);
        }
        goto LABEL_30;
      }
      UnityEngine_Transform__set_eulerAngles(v64, *(UnityEngine_Vector3_o *)&v66, 0LL);
    }
LABEL_30:
    effectObject = *p_effectObject;
    if ( *p_effectObject )
    {
      v74 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
              effectObject,
              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
      this->fields.overlayEffect = (struct WarBoardOverlayEffectComponent_o *)v74;
      p_overlayEffect = &this->fields.overlayEffect;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.overlayEffect,
        (System_Int32_array **)v74,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
      effectObject = (UnityEngine_GameObject_o *)this->fields.overlayEffect;
      if ( effectObject )
      {
        WarBoardOverlayEffectComponent__Init((WarBoardOverlayEffectComponent_o *)effectObject, text, v82);
        v83 = *p_overlayEffect;
        if ( *p_overlayEffect )
        {
          this->fields.isLoop = v83->fields.isLoop;
          if ( !v83->fields.kind )
          {
            effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v84 = *p_effectObject;
            if ( !*p_effectObject )
              goto LABEL_44;
            v85 = (CommonUI_o *)effectObject;
            effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v84, 0LL);
            if ( !v85 )
              goto LABEL_44;
            effectObject = CommonUI__CreateScreeenTouchInfo(v85, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( !effectObject )
              goto LABEL_44;
            v86 = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                effectObject,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
            this->fields.screenTouchInformationComponent = v86;
            p_screenTouchInformationComponent = &this->fields.screenTouchInformationComponent;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.screenTouchInformationComponent,
              (System_Int32_array **)v86,
              v88,
              v89,
              v90,
              v91,
              v92,
              v93);
            this->fields.isTouch = 0;
            screenTouchInformationComponent = this->fields.screenTouchInformationComponent;
            v95 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v95,
              (Il2CppObject *)this,
              Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__,
              0LL);
            if ( !screenTouchInformationComponent )
              goto LABEL_44;
            ScreenTouchInformationComponent__Setup(screenTouchInformationComponent, v95, 0LL);
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
    sub_B5D69C(effectObject, v49);
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
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_String_o *name; // x20
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v20; // x1
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_IEnumerator_o *v24; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v30; // x3
  System_Collections_IEnumerator_c *v31; // x8
  unsigned __int64 v32; // x10
  System_Collections_IEnumerator_c **v33; // x11
  __int64 v34; // x0
  UnityEngine_AnimationState_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_Object_o *clip; // x0
  __int64 v38; // x1
  __int64 v39; // x0
  __int64 v40; // x3
  __int64 v41; // x8
  __int64 v42; // x21
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0

  if ( (byte_42E75DF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AnimationState_TypeInfo, (_DWORD)animation, (_DWORD)method, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42E75DF = 1;
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
    sub_B5D69C(Item, v20);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  v24 = Enumerator;
  if ( !Enumerator )
    sub_B5D69C(0LL, v22);
  klass = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v26;
      p_offset += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(v24, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v31 = v24->klass;
    if ( *(_WORD *)&v24->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = (System_Collections_IEnumerator_c **)&v31->_1.interfaceOffsets->offset;
      while ( *(v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        v33 += 2;
        if ( v32 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v34 = (__int64)&v31->vtable[*(_DWORD *)v33 + 1].method;
    }
    else
    {
LABEL_22:
      v34 = sub_AF54C0(v24, System_Collections_IEnumerator_TypeInfo, 1LL, v30);
    }
    v35 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v34)(
                                            v24,
                                            *(_QWORD *)(v34 + 8));
    if ( !v35 )
      sub_B5D69C(0LL, v36);
    if ( v35->klass == UnityEngine_AnimationState_TypeInfo )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v35, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        goto LABEL_29;
      }
    }
    else
    {
      clip = (UnityEngine_Object_o *)sub_B5D990(v35);
    }
    sub_B5D69C(clip, v38);
  }
LABEL_29:
  v39 = sub_B5D684(v24, System_IDisposable_TypeInfo);
  if ( v39 )
  {
    v41 = *(_QWORD *)v39;
    v42 = v39;
    if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
    {
      v43 = 0LL;
      v44 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
          goto LABEL_34;
      }
      v45 = v41 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_34:
      v45 = sub_AF54C0(v39, System_IDisposable_TypeInfo, 0LL, v40);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_String_o *v30; // x20
  void *State; // x0
  __int64 v32; // x1
  System_Collections_Generic_IEnumerable_TSource__o *States; // x21
  WarBoardOverlayEffectPerformance___c_c *v34; // x8
  struct WarBoardOverlayEffectPerformance___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_0; // x22
  Il2CppObject *v37; // x23
  struct WarBoardOverlayEffectPerformance___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  __int64 v46; // x3
  __int64 v47; // x8
  void *v48; // x19
  unsigned __int64 v49; // x10
  SimpleAnimation_State_c **v50; // x11
  __int64 v51; // x0

  if ( (byte_42E75E0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___,
      (_DWORD)simpleAnimation,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_string___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_SimpleAnimation_State__string___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_SimpleAnimation_State__string__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__, v21, v22, v23);
    sub_B5D5C4(&WarBoardOverlayEffectPerformance___c_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1/*""*/, v27, v28, v29);
    byte_42E75E0 = 1;
  }
  if ( !this->fields.animationPlay )
    return 1;
  v30 = (System_String_o *)StringLiteral_1/*""*/;
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
  v34 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  if ( (BYTE3(WarBoardOverlayEffectPerformance___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardOverlayEffectPerformance___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOverlayEffectPerformance___c_TypeInfo);
    v34 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__16_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_SimpleAnimation_State__string__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__16_0,
      v37,
      Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_SimpleAnimation_State__string___ctor__);
    v38 = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    v38->__9__16_0 = (struct System_Func_SimpleAnimation_State__string__o *)_9__16_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v38->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               States,
                                                               (System_Func_TSource__TResult__o *)_9__16_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
  State = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v45,
            (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !State )
    goto LABEL_29;
  if ( *((int *)State + 6) >= 1 )
    v30 = (System_String_o *)*((_QWORD *)State + 4);
  State = SimpleAnimation__GetState(simpleAnimation, v30, 0LL);
  if ( !State )
LABEL_29:
    sub_B5D69C(State, v32);
  v47 = *(_QWORD *)State;
  v48 = State;
  if ( *(_WORD *)(*(_QWORD *)State + 298LL) )
  {
    v49 = 0LL;
    v50 = (SimpleAnimation_State_c **)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *(v50 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v49;
      v50 += 2;
      if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)State + 298LL) )
        goto LABEL_25;
    }
    v51 = v47 + 16LL * (*(_DWORD *)v50 + 5) + 312;
  }
  else
  {
LABEL_25:
    v51 = sub_AF54C0(State, SimpleAnimation_State_TypeInfo, 5LL, v46);
  }
  return (*(float (__fastcall **)(void *, _QWORD))v51)(v48, *(_QWORD *)(v51 + 8)) >= 1.0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardOverlayEffectPerformance__Execute(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E75DD & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E75DD = 1;
  }
  v5 = sub_B5D694(WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo);
  WarBoardOverlayEffectPerformance__Execute_d__13___ctor(
    (WarBoardOverlayEffectPerformance__Execute_d__13_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardOverlayEffectPerformance__OnEnd(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E75DE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E75DE = 1;
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
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( !this->fields.isLoop )
    {
      v8 = *p_effectObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)v8, 0LL);
      *p_effectObject = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v9, v10, v11, v12, v13, v14);
    }
  }
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardOverlayEffectPerformance__OnStart(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *effectObject; // x20
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v15; // x20
  System_Action_o *v16; // x21

  if ( (byte_42E75DC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__, v8, v9, v10);
    byte_42E75DC = 1;
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
    v13 = this->fields.effectObject;
    if ( !v13 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v13, 1, 0LL);
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
    v15 = this->fields.commonEffect;
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__,
      0LL);
    if ( v15 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v15->klass->vtable._6_ForceStart.method)(
        v15,
        0LL,
        v16,
        v15->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_B5D69C(v13, v12);
  }
}


void __fastcall WarBoardOverlayEffectPerformance____ctor_b__9_0(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E75E1 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E75E1 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardOverlayEffectPerformance__Execute_d__13_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct WarBoardOverlayEffectPerformance_o *_4__this; // x20
  struct WarBoardOverlayEffectComponent_o *overlayEffect; // x8
  int32_t kind; // w8
  float v20; // s0
  UnityEngine_Animation_o **p_mAnimation_5__3; // x21
  float waitTime_5__2; // s8
  float v23; // s8
  struct WarBoardOverlayEffectComponent_o *v24; // x8
  UnityEngine_Object_o *commonEffect; // x21
  struct CommonEffectComponent_o *v26; // x21
  System_Action_o *v27; // x22
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  int v30; // w8
  Il2CppObject **v31; // x19

  v4 = this;
  if ( (byte_42E5FA7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)sub_B5D5C4(
                                                                  &Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
                                                                  v14,
                                                                  v15,
                                                                  v16);
    byte_42E5FA7 = 1;
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
      v20 = 0.0;
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
          v26 = _4__this->fields.commonEffect;
          v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v27,
            (Il2CppObject *)_4__this,
            Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
            0LL);
          if ( v26 )
          {
            ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, void *))v26->klass->vtable._9_ForceStop.method)(
              v26,
              0LL,
              v27,
              v26->klass[1]._1.image);
            this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
            if ( this )
            {
              this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
              if ( this )
              {
                v4->fields._mAnimation_5__3 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                                  (UnityEngine_Component_o *)this,
                                                                                  (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                p_mAnimation_5__3 = &v4->fields._mAnimation_5__3;
                sub_B5D560(&v4->fields._mAnimation_5__3);
                this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
                if ( this )
                {
                  this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
                  if ( this )
                  {
                    v4->fields._mSimpleAnimation_5__4 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
                    sub_B5D560(&v4->fields._mSimpleAnimation_5__4);
LABEL_34:
                    if ( WarBoardOverlayEffectPerformance__CheckAnimationEnd(_4__this, *p_mAnimation_5__3, 0LL)
                      && WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(
                           _4__this,
                           v4->fields._mSimpleAnimation_5__4,
                           0LL) )
                    {
                      *p_mAnimation_5__3 = 0LL;
                      sub_B5D560(p_mAnimation_5__3);
                      v4->fields._mSimpleAnimation_5__4 = 0LL;
                      sub_B5D560(&v4->fields._mSimpleAnimation_5__4);
                      return 0;
                    }
                    v4->fields.__2__current = 0LL;
                    p__2__current = &v4->fields.__2__current;
                    sub_B5D560(p__2__current);
                    v30 = 4;
                    goto LABEL_42;
                  }
                }
              }
            }
          }
LABEL_43:
          sub_B5D69C(this, method);
        }
LABEL_22:
        v24 = _4__this->fields.overlayEffect;
        if ( !v24 )
          goto LABEL_43;
        if ( v20 >= v24->fields.waitTime )
          goto LABEL_24;
        v4->fields.__2__current = 0LL;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        v30 = 3;
      }
      else
      {
LABEL_12:
        if ( v20 < _4__this->fields.screenTouchInfoDispWaitTime )
        {
          v4->fields.__2__current = 0LL;
          v31 = &v4->fields.__2__current;
          sub_B5D560(v31);
          result = 1;
          *((_DWORD *)v31 - 2) = 1;
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
        v4->fields.__2__current = 0LL;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        v30 = 2;
      }
LABEL_42:
      *((_DWORD *)p__2__current - 2) = v30;
      return 1;
    case 1:
      waitTime_5__2 = v4->fields._waitTime_5__2;
      v4->fields.__1__state = -1;
      v20 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
      v4->fields._waitTime_5__2 = v20;
      if ( _4__this )
        goto LABEL_12;
      goto LABEL_43;
    case 2:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_17;
      goto LABEL_43;
    case 3:
      v23 = v4->fields._waitTime_5__2;
      v4->fields.__1__state = -1;
      v20 = v23 + UnityEngine_Time__get_deltaTime(0LL);
      v4->fields._waitTime_5__2 = v20;
      if ( _4__this )
        goto LABEL_22;
      goto LABEL_43;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      p_mAnimation_5__3 = &v4->fields._mAnimation_5__3;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardOverlayEffectPerformance__Execute_d__13_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardOverlayEffectPerformance___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FA5 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardOverlayEffectPerformance___c_TypeInfo, v1, v2, v3);
    byte_42E5FA5 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardOverlayEffectPerformance___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardOverlayEffectPerformance___c_o *)v4;
  sub_B5D560(static_fields);
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

  if ( (byte_42E5FA6 & 1) == 0 )
  {
    this = (WarBoardOverlayEffectPerformance___c_o *)sub_B5D5C4(
                                                       &SimpleAnimation_State_TypeInfo,
                                                       (_DWORD)state,
                                                       (_DWORD)method,
                                                       v3);
    byte_42E5FA6 = 1;
  }
  if ( !state )
    sub_B5D69C(this, state);
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
    p_method = sub_AF54C0(state, SimpleAnimation_State_TypeInfo, 9LL, v3);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                              state,
                              *(_QWORD *)(p_method + 8));
}