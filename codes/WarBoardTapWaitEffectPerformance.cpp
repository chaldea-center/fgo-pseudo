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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *v21; // x0
  UnityEngine_GameObject_o **p_effectObject; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o **p_commonEffect; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_29CF794 *v38; // x2
  int v39; // s0
  UnityEngine_Transform_o *v42; // x21
  const MethodInfo_29CF794 *v43; // x2
  int v44; // s0
  UnityEngine_Transform_o *v47; // x21
  const MethodInfo_29CF794 *v48; // x2
  int v49; // s0
  WebViewManager_o *Instance; // x0
  CommonUI_o *v53; // x21
  UnityEngine_Transform_o *v54; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  struct ScreenTouchInformationComponent_o *v56; // x0
  UnityEngine_Component_o **p_screenTouchInfomationComponent; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  ScreenTouchInformationComponent_o *screenTouchInfomationComponent; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Action_o *v69; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  System_Nullable_Vector3__o v71; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v72; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v73; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v74; // 0:x0.16
  System_Nullable_Vector3__o v75; // 0:x0.16
  System_Nullable_Vector3__o v76; // 0:x0.16

  v9 = *(_QWORD *)&position.fields.value.fields.z;
  v73 = position;
  v72 = angle;
  v71 = scale;
  if ( (byte_40FBB3D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, parent);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v14);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_HasValue__, v15);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_Value__, v16);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874912, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B16FFC(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__, v20);
    byte_40FBB3D = 1;
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
    v21 = UnityEngine_Object__Instantiate_object__27124684(
            (Il2CppObject *)effetctPrefab,
            parent,
            0,
            (const MethodInfo_19DE3CC *)Method_UnityEngine_Object_Instantiate_GameObject____66874912);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v21;
    p_effectObject = &this->fields.effectObject;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.effectObject,
      (System_Int32_array **)v21,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    if ( !this->fields.effectObject )
      goto LABEL_38;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  this->fields.effectObject,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = (UnityEngine_Component_o **)&this->fields.commonEffect;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    if ( !this->fields.commonEffect )
      goto LABEL_38;
    CommonEffectComponent__Init(this->fields.commonEffect, 0, 1, 0LL);
    this->fields.isDestroy = isDestroy;
    if ( (v9 & 0xFF00000000LL) != 0 )
    {
      if ( !*p_commonEffect )
        goto LABEL_38;
      transform = UnityEngine_Component__get_transform(*p_commonEffect, 0LL);
      *(_QWORD *)&v74.fields.value.fields.x = &v73;
      *(_QWORD *)&v74.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v39 = System_Nullable_Vector3___get_Value(v74, v38);
      if ( !transform )
        goto LABEL_38;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
    }
    if ( v72.fields.has_value )
    {
      if ( !*p_commonEffect )
        goto LABEL_38;
      v42 = UnityEngine_Component__get_transform(*p_commonEffect, 0LL);
      *(_QWORD *)&v75.fields.value.fields.x = &v72;
      *(_QWORD *)&v75.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v44 = System_Nullable_Vector3___get_Value(v75, v43);
      if ( !v42 )
        goto LABEL_38;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v42, *(UnityEngine_Vector3_o *)&v44, 0LL);
LABEL_29:
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( *p_effectObject )
        {
          v53 = (CommonUI_o *)Instance;
          v54 = UnityEngine_GameObject__get_transform(*p_effectObject, 0LL);
          if ( v53 )
          {
            ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v53, v54, 1, 0LL);
            if ( ScreeenTouchInfo )
            {
              v56 = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  ScreeenTouchInfo,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
              this->fields.screenTouchInfomationComponent = v56;
              p_screenTouchInfomationComponent = (UnityEngine_Component_o **)&this->fields.screenTouchInfomationComponent;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.screenTouchInfomationComponent,
                (System_Int32_array **)v56,
                v58,
                v59,
                v60,
                v61,
                v62,
                v63);
              this->fields.isTouch = 0;
              screenTouchInfomationComponent = this->fields.screenTouchInfomationComponent;
              v69 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v65, v66, v67, v68);
              System_Action___ctor(
                v69,
                (Il2CppObject *)this,
                Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__,
                0LL);
              if ( screenTouchInfomationComponent )
              {
                ScreenTouchInformationComponent__Setup(screenTouchInfomationComponent, v69, 0LL);
                if ( *p_screenTouchInfomationComponent )
                {
                  gameObject = UnityEngine_Component__get_gameObject(*p_screenTouchInfomationComponent, 0LL);
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                    if ( *p_effectObject )
                    {
                      UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_38:
        sub_B170D4();
      }
      UnityEngine_Transform__set_localEulerAngles(v42, *(UnityEngine_Vector3_o *)&v44, 0LL);
    }
    if ( v71.fields.has_value && isLocal )
    {
      if ( !*p_commonEffect )
        goto LABEL_38;
      v47 = UnityEngine_Component__get_transform(*p_commonEffect, 0LL);
      *(_QWORD *)&v76.fields.value.fields.x = &v71;
      *(_QWORD *)&v76.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v49 = System_Nullable_Vector3___get_Value(v76, v48);
      if ( !v47 )
        goto LABEL_38;
      UnityEngine_Transform__set_localScale(v47, *(UnityEngine_Vector3_o *)&v49, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v8; // x21

  if ( (byte_40FBB3F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, v6);
    byte_40FBB3F = 1;
  }
  commonEffect = this->fields.commonEffect;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_B170D4();
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))commonEffect->klass->vtable._8_Stop.method)(
    commonEffect,
    0LL,
    v8,
    commonEffect->klass->vtable._9_ForceStop.methodPtr);
}


bool __fastcall WarBoardTapWaitEffectPerformance__CheckAnimationEnd(
        WarBoardTapWaitEffectPerformance_o *this,
        UnityEngine_Animation_o *animation,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *name; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  System_Collections_IEnumerator_o *v11; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  unsigned __int64 v18; // x10
  System_Collections_IEnumerator_c **v19; // x11
  __int64 v20; // x0
  UnityEngine_AnimationState_o *v21; // x0
  UnityEngine_Object_o *clip; // x0
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x21
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  UnityEngine_AnimationState_o *Item; // x0

  if ( (byte_40FBB42 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AnimationState_TypeInfo, animation);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40FBB42 = 1;
  }
  if ( !this->fields.animationPlay )
    return 1;
  name = (System_String_o *)StringLiteral_1;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)animation, 0LL, 0LL) )
    return 1;
  if ( !animation )
LABEL_39:
    sub_B170D4();
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  v11 = Enumerator;
  if ( !Enumerator )
    sub_B170D4();
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
    p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(v11, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v17 = v11->klass;
    if ( *(_WORD *)&v11->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        v19 += 2;
        if ( v18 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_22:
      v20 = sub_AAFEF8(v11, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v21 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                            v11,
                                            *(_QWORD *)(v20 + 8));
    if ( !v21 )
      sub_B170D4();
    if ( v21->klass == UnityEngine_AnimationState_TypeInfo )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v21, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        goto LABEL_29;
      }
    }
    else
    {
      sub_B173C8(v21);
    }
    sub_B170D4();
  }
LABEL_29:
  v23 = sub_B170BC(v11, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v24 = *(_QWORD *)v23;
    v25 = v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_34;
      }
      v28 = v24 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_34:
      v28 = sub_AAFEF8(v23, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FBB40 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo, method);
    byte_40FBB40 = 1;
  }
  v6 = sub_B170CC(WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo, method, v2, v3, v4);
  WarBoardTapWaitEffectPerformance__Execute_d__10___ctor(
    (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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

  if ( (byte_40FBB41 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBB41 = 1;
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
    UnityEngine_Object__Destroy_34809464(v5, 0LL);
    *p_effectObject = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x1
  __int64 v4; // x1
  WarBoardTaskBase_TaskCallback_o *StartCallback; // x0
  UnityEngine_Object_o *effectObject; // x20
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Object_o *commonEffect; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct CommonEffectComponent_o *v13; // x20
  System_Action_o *v14; // x21

  if ( (byte_40FBB3E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__, v4);
    byte_40FBB3E = 1;
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
    v7 = this->fields.effectObject;
    if ( !v7 )
      goto LABEL_18;
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
    v13 = this->fields.commonEffect;
    v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__,
      0LL);
    if ( v13 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v13->klass->vtable._6_ForceStart.method)(
        v13,
        0LL,
        v14,
        v13->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_18:
    sub_B170D4();
  }
}


void __fastcall WarBoardTapWaitEffectPerformance____ctor_b__6_0(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FBB43 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBB43 = 1;
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
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct WarBoardTapWaitEffectPerformance_o *_4__this; // x20
  UnityEngine_Component_o *commonEffect; // x0
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Component_o *screenTouchInfomationComponent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  Il2CppObject **v32; // x19

  if ( (byte_40F7883 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F7883 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_20;
    goto LABEL_24;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
    commonEffect = (UnityEngine_Component_o *)_4__this->fields.commonEffect;
    if ( !commonEffect )
      goto LABEL_24;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(commonEffect, 0LL);
    if ( !transform )
      goto LABEL_24;
    ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                       transform,
                                                                       (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    this->fields._mAnimation_5__2 = ComponentInChildren_UIWidget;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._mAnimation_5__2,
      (System_Int32_array **)ComponentInChildren_UIWidget,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v21 = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
      return 0;
  }
  if ( !WarBoardTapWaitEffectPerformance__CheckAnimationEnd(_4__this, this->fields._mAnimation_5__2, 0LL) )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v22, v23, v24, v25, v26, v27);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  screenTouchInfomationComponent = (UnityEngine_Component_o *)_4__this->fields.screenTouchInfomationComponent;
  if ( !screenTouchInfomationComponent
    || (gameObject = UnityEngine_Component__get_gameObject(screenTouchInfomationComponent, 0LL)) == 0LL )
  {
LABEL_24:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
LABEL_20:
  if ( _4__this->fields.isTouch )
    return 0;
  this->fields.__2__current = 0LL;
  v32 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v32, 0LL, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)v32 - 2) = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardTapWaitEffectPerformance__Execute_d__10_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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