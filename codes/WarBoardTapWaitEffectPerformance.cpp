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
  __int64 v29; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_2155684 *v40; // x2
  int v41; // s0
  UnityEngine_Transform_o *v44; // x21
  const MethodInfo_2155684 *v45; // x2
  int v46; // s0
  UnityEngine_Transform_o *v49; // x21
  const MethodInfo_2155684 *v50; // x2
  int v51; // s0
  CommonUI_o *v54; // x21
  struct ScreenTouchInformationComponent_o *v55; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfomationComponent; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  ScreenTouchInformationComponent_o *screenTouchInfomationComponent; // x22
  System_Action_o *v64; // x23
  System_Nullable_Vector3__o v65; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v66; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v67; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v68; // 0:x0.16
  System_Nullable_Vector3__o v69; // 0:x0.16
  System_Nullable_Vector3__o v70; // 0:x0.16

  v9 = *(_QWORD *)&position.fields.value.fields.z;
  v67 = position;
  v66 = angle;
  v65 = scale;
  if ( (byte_418932A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, parent);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v14);
    sub_B2C35C(&Method_System_Nullable_Vector3__get_HasValue__, v15);
    sub_B2C35C(&Method_System_Nullable_Vector3__get_Value__, v16);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450624, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B2C35C(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__, v20);
    byte_418932A = 1;
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
    v21 = UnityEngine_Object__Instantiate_object__34168824(
            (Il2CppObject *)effetctPrefab,
            parent,
            0,
            (const MethodInfo_2095FF8 *)Method_UnityEngine_Object_Instantiate_GameObject____67450624);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v21;
    p_effectObject = &this->fields.effectObject;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.effectObject,
      (System_Int32_array **)v21,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_38;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  effectObject,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = &this->fields.commonEffect;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
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
      *(_QWORD *)&v68.fields.value.fields.x = &v67;
      *(_QWORD *)&v68.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v41 = System_Nullable_Vector3___get_Value(v68, v40);
      if ( !transform )
        goto LABEL_38;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v41, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v41, 0LL);
    }
    if ( v66.fields.has_value )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_38;
      v44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v69.fields.value.fields.x = &v66;
      *(_QWORD *)&v69.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v46 = System_Nullable_Vector3___get_Value(v69, v45);
      if ( !v44 )
        goto LABEL_38;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v44, *(UnityEngine_Vector3_o *)&v46, 0LL);
LABEL_29:
        effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( *p_effectObject )
        {
          v54 = (CommonUI_o *)effectObject;
          effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(*p_effectObject, 0LL);
          if ( v54 )
          {
            effectObject = CommonUI__CreateScreeenTouchInfo(v54, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( effectObject )
            {
              v55 = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  effectObject,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
              this->fields.screenTouchInfomationComponent = v55;
              p_screenTouchInfomationComponent = &this->fields.screenTouchInfomationComponent;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields.screenTouchInfomationComponent,
                (System_Int32_array **)v55,
                v57,
                v58,
                v59,
                v60,
                v61,
                v62);
              this->fields.isTouch = 0;
              screenTouchInfomationComponent = this->fields.screenTouchInfomationComponent;
              v64 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(
                v64,
                (Il2CppObject *)this,
                Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__,
                0LL);
              if ( screenTouchInfomationComponent )
              {
                ScreenTouchInformationComponent__Setup(screenTouchInfomationComponent, v64, 0LL);
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
        sub_B2C434(effectObject, v29);
      }
      UnityEngine_Transform__set_localEulerAngles(v44, *(UnityEngine_Vector3_o *)&v46, 0LL);
    }
    if ( v65.fields.has_value && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_38;
      v49 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v70.fields.value.fields.x = &v65;
      *(_QWORD *)&v70.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v51 = System_Nullable_Vector3___get_Value(v70, v50);
      if ( !v49 )
        goto LABEL_38;
      UnityEngine_Transform__set_localScale(v49, *(UnityEngine_Vector3_o *)&v51, 0LL);
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
  __int64 v3; // x1
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_418932C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, v3);
    byte_418932C = 1;
  }
  commonEffect = this->fields.commonEffect;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_B2C434(v6, v7);
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))commonEffect->klass->vtable._8_Stop.method)(
    commonEffect,
    0LL,
    v5,
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

  if ( (byte_418932F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AnimationState_TypeInfo, animation);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418932F = 1;
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

  if ( (byte_418932D & 1) == 0 )
  {
    sub_B2C35C(&WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo, method);
    byte_418932D = 1;
  }
  v3 = sub_B2C42C(WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
  WarBoardTapWaitEffectPerformance__Execute_d__10___ctor(
    (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_418932E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418932E = 1;
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
    UnityEngine_Object__Destroy_35314896(v5, 0LL);
    *p_effectObject = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_418932B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__, v4);
    byte_418932B = 1;
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
    v8 = this->fields.effectObject;
    if ( !v8 )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(v8, 1, 0LL);
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
    v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__,
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
LABEL_18:
    sub_B2C434(v8, v7);
  }
}


void __fastcall WarBoardTapWaitEffectPerformance____ctor_b__6_0(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189330 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189330 = 1;
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
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct WarBoardTapWaitEffectPerformance_o *_4__this; // x20
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *commonEffect; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  bool result; // w0
  BattleServantConfConponent_o *p__2__current; // x19
  BattleServantConfConponent_o *v28; // x19

  v8 = this;
  if ( (byte_418672F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method);
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_418672F = 1;
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
                                                            (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    v8->fields._mAnimation_5__2 = (struct UnityEngine_Animation_o *)ComponentInChildren_UIWidget;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v8->fields._mAnimation_5__2,
      ComponentInChildren_UIWidget,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
    sub_B2C2F8(p__2__current, 0LL, v20, v21, v22, v23, v24, v25);
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
    sub_B2C434(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_20:
  if ( _4__this->fields.isTouch )
    return 0;
  v8->fields.__2__current = 0LL;
  v28 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B2C2F8(v28, 0LL, v2, v3, v4, v5, v6, v7);
  *(_DWORD *)&v28[-1].fields.isOpenAfter = 2;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardTapWaitEffectPerformance__Execute_d__10_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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