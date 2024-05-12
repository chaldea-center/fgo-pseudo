// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTapWaitEffectPerformance___ctor(
        WarBoardTapWaitEffectPerformance_o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_GameObject_o *effetctPrefab,
        System_Nullable_Vector3__o position,
        System_Nullable_Vector3__o angle,
        System_Nullable_Vector3__o scale,
        bool isLocal,
        bool isDestroy,
        const MethodInfo *method)
{
  __int64 v9; // x21
  Il2CppObject *v13; // x0
  UnityEngine_GameObject_o **p_effectObject; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_247A020 *v32; // x2
  int v33; // s0
  UnityEngine_Transform_o *v36; // x21
  const MethodInfo_247A020 *v37; // x2
  int v38; // s0
  UnityEngine_Transform_o *v41; // x21
  const MethodInfo_247A020 *v42; // x2
  int v43; // s0
  CommonUI_o *v46; // x21
  struct ScreenTouchInformationComponent_o *v47; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfomationComponent; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  ScreenTouchInformationComponent_o *screenTouchInfomationComponent; // x22
  System_Action_o *v56; // x23
  System_Nullable_Vector3__o v57; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v58; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v59; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v60; // 0:x0.16
  System_Nullable_Vector3__o v61; // 0:x0.16
  System_Nullable_Vector3__o v62; // 0:x0.16

  v9 = *(_QWORD *)&position.fields.value.fields.z;
  v59 = position;
  v58 = angle;
  v57 = scale;
  if ( (byte_438D2EE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B775C4(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_B775C4(&Method_System_Nullable_Vector3__get_Value__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541616);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
    byte_438D2EE = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effetctPrefab, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__Instantiate_object__31431360(
            (Il2CppObject *)effetctPrefab,
            parent,
            0,
            (const MethodInfo_1DF9AC0 *)Method_UnityEngine_Object_Instantiate_GameObject____69541616);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v13;
    p_effectObject = &this->fields.effectObject;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.effectObject,
      (System_Int32_array **)v13,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_38;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  effectObject,
                                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = &this->fields.commonEffect;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    effectObject = (UnityEngine_GameObject_o *)this->fields.commonEffect;
    if ( !effectObject )
      goto LABEL_38;
    CommonEffectComponent__Init((CommonEffectComponent_o *)effectObject, 0, 1, 0LL);
    this->fields.isDestroy = isDestroy;
    if ( (v9 & 0xFF00000000LL) != 0 )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_38;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v60.fields.value.fields.x = &v59;
      *(_QWORD *)&v60.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v33 = System_Nullable_Vector3___get_Value(v60, v32);
      if ( !transform )
        goto LABEL_38;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v33, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v33, 0LL);
    }
    if ( v58.fields.has_value )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_38;
      v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v61.fields.value.fields.x = &v58;
      *(_QWORD *)&v61.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v38 = System_Nullable_Vector3___get_Value(v61, v37);
      if ( !v36 )
        goto LABEL_38;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v36, *(UnityEngine_Vector3_o *)&v38, 0LL);
LABEL_29:
        effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( *p_effectObject )
        {
          v46 = (CommonUI_o *)effectObject;
          effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(*p_effectObject, 0LL);
          if ( v46 )
          {
            effectObject = CommonUI__CreateScreeenTouchInfo(v46, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( effectObject )
            {
              v47 = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  effectObject,
                                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
              this->fields.screenTouchInfomationComponent = v47;
              p_screenTouchInfomationComponent = &this->fields.screenTouchInfomationComponent;
              sub_B77560(
                (BattleServantConfConponent_o *)&this->fields.screenTouchInfomationComponent,
                (System_Int32_array **)v47,
                v49,
                v50,
                v51,
                v52,
                v53,
                v54);
              this->fields.isTouch = 0;
              screenTouchInfomationComponent = this->fields.screenTouchInfomationComponent;
              v56 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
              System_Action___ctor(
                v56,
                (Il2CppObject *)this,
                Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__,
                0LL);
              if ( screenTouchInfomationComponent )
              {
                ScreenTouchInformationComponent__Setup(screenTouchInfomationComponent, v56, 0LL);
                effectObject = (UnityEngine_GameObject_o *)*p_screenTouchInfomationComponent;
                if ( *p_screenTouchInfomationComponent )
                {
                  effectObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObject, 0LL);
                  if ( effectObject )
                  {
                    UnityEngine_GameObject__SetActive(effectObject, 0, 0LL);
                    effectObject = *p_effectObject;
                    if ( *p_effectObject )
                    {
                      UnityEngine_GameObject__SetActive(effectObject, 0, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_38:
        sub_B7769C(effectObject, v21);
      }
      UnityEngine_Transform__set_localEulerAngles(v36, *(UnityEngine_Vector3_o *)&v38, 0LL);
    }
    if ( v57.fields.has_value && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_38;
      v41 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v62.fields.value.fields.x = &v57;
      *(_QWORD *)&v62.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v43 = System_Nullable_Vector3___get_Value(v62, v42);
      if ( !v41 )
        goto LABEL_38;
      UnityEngine_Transform__set_localScale(v41, *(UnityEngine_Vector3_o *)&v43, 0LL);
    }
    goto LABEL_29;
  }
}


void __fastcall WarBoardTapWaitEffectPerformance__AnimantionEndCallback(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  this->fields.animationPlay = 0;
}


void __fastcall WarBoardTapWaitEffectPerformance__AnimantionEndStartCallback(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438D2F0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__);
    byte_438D2F0 = 1;
  }
  commonEffect = this->fields.commonEffect;
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_B7769C(v5, v6);
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))commonEffect->klass->vtable._8_Stop.method)(
    commonEffect,
    0LL,
    v4,
    commonEffect->klass->vtable._9_ForceStop.methodPtr);
}


bool __fastcall WarBoardTapWaitEffectPerformance__CheckAnimationEnd(
        WarBoardTapWaitEffectPerformance_o *this,
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

  if ( (byte_438D2F3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_AnimationState_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D2F3 = 1;
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
    sub_B7769C(Item, v7);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  v10 = Enumerator;
  if ( !Enumerator )
    sub_B7769C(0LL, v9);
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
    p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v19 = sub_B0F4C0(v10, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                            v10,
                                            *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_B7769C(0LL, v21);
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
      sub_B77990(v20);
    }
    sub_B7769C(clip, v23);
  }
LABEL_29:
  v24 = sub_B77684(v10, System_IDisposable_TypeInfo);
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
      v29 = sub_B0F4C0(v24, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
  Item = UnityEngine_Animation__get_Item(animation, name, 0LL);
  if ( !Item )
    goto LABEL_39;
  return UnityEngine_AnimationState__get_normalizedTime(Item, 0LL) >= 1.0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardTapWaitEffectPerformance__Execute(
        WarBoardTapWaitEffectPerformance_o *this,
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

  if ( (byte_438D2F1 & 1) == 0 )
  {
    sub_B775C4(&WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
    byte_438D2F1 = 1;
  }
  v3 = sub_B77694(WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
  WarBoardTapWaitEffectPerformance__Execute_d__10___ctor(
    (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardTapWaitEffectPerformance__OnEnd(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  UnityEngine_Object_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  WarBoardTaskBase_TaskCallback_o *EndCallback; // x0

  if ( (byte_438D2F2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D2F2 = 1;
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
    v5 = (UnityEngine_Object_o *)*p_effectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v5, 0LL);
    *p_effectObject = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v6, v7, v8, v9, v10, v11);
  }
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    WarBoardTaskBase_TaskCallback__Invoke(EndCallback, 0LL);
}


void __fastcall WarBoardTapWaitEffectPerformance__OnStart(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  WarBoardTaskBase_TaskCallback_o *StartCallback; // x0
  UnityEngine_Object_o *effectObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v8; // x20
  System_Action_o *v9; // x21

  if ( (byte_438D2EF & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__);
    byte_438D2EF = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    WarBoardTaskBase_TaskCallback__Invoke(StartCallback, 0LL);
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
      goto LABEL_18;
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
    v8 = this->fields.commonEffect;
    v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__,
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
LABEL_18:
    sub_B7769C(v6, v5);
  }
}


void __fastcall WarBoardTapWaitEffectPerformance____ctor_b__6_0(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D2F4 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438D2F4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isTouch = 1;
}


void __fastcall WarBoardTapWaitEffectPerformance__Execute_d__10___ctor(
        WarBoardTapWaitEffectPerformance__Execute_d__10_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardTapWaitEffectPerformance__Execute_d__10__MoveNext(
        WarBoardTapWaitEffectPerformance__Execute_d__10_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WarBoardTapWaitEffectPerformance__Execute_d__10_o *v8; // x19
  int32_t _1__state; // w8
  struct WarBoardTapWaitEffectPerformance_o *_4__this; // x20
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *commonEffect; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  bool result; // w0
  BattleServantConfConponent_o *p__2__current; // x19
  BattleServantConfConponent_o *v27; // x19

  v8 = this;
  if ( (byte_4389292 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389292 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_20;
    goto LABEL_24;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)_4__this->fields.commonEffect;
    if ( !this )
      goto LABEL_24;
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
    if ( !this )
      goto LABEL_24;
    ComponentInChildren_UIWidget = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    v8->fields._mAnimation_5__2 = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->fields._mAnimation_5__2,
      ComponentInChildren_UIWidget,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
      return 0;
  }
  if ( !WarBoardTapWaitEffectPerformance__CheckAnimationEnd(_4__this, v8->fields._mAnimation_5__2, 0LL) )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    sub_B77560(p__2__current, 0LL, v19, v20, v21, v22, v23, v24);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
    return result;
  }
  this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)_4__this->fields.screenTouchInfomationComponent;
  if ( !this
    || (this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0LL)) == 0LL )
  {
LABEL_24:
    sub_B7769C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_20:
  if ( _4__this->fields.isTouch )
    return 0;
  v8->fields.__2__current = 0LL;
  v27 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B77560(v27, 0LL, v2, v3, v4, v5, v6, v7);
  *(_DWORD *)&v27[-1].fields.isOpenAfter = 2;
  return 1;
}


Il2CppObject *__fastcall WarBoardTapWaitEffectPerformance__Execute_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardTapWaitEffectPerformance__Execute_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardTapWaitEffectPerformance__Execute_d__10__System_Collections_IEnumerator_Reset(
        WarBoardTapWaitEffectPerformance__Execute_d__10_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardTapWaitEffectPerformance__Execute_d__10_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall WarBoardTapWaitEffectPerformance__Execute_d__10__System_Collections_IEnumerator_get_Current(
        WarBoardTapWaitEffectPerformance__Execute_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardTapWaitEffectPerformance__Execute_d__10__System_IDisposable_Dispose(
        WarBoardTapWaitEffectPerformance__Execute_d__10_o *this,
        const MethodInfo *method)
{
  ;
}