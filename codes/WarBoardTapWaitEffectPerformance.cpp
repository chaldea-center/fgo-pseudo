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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  Il2CppObject *v37; // x0
  UnityEngine_GameObject_o **p_effectObject; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_234ED58 *v56; // x2
  int v57; // s0
  UnityEngine_Transform_o *v60; // x21
  const MethodInfo_234ED58 *v61; // x2
  int v62; // s0
  UnityEngine_Transform_o *v65; // x21
  const MethodInfo_234ED58 *v66; // x2
  int v67; // s0
  CommonUI_o *v70; // x21
  struct ScreenTouchInformationComponent_o *v71; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfomationComponent; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  ScreenTouchInformationComponent_o *screenTouchInfomationComponent; // x22
  System_Action_o *v80; // x23
  System_Nullable_Vector3__o v81; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v82; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v83; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v84; // 0:x0.16
  System_Nullable_Vector3__o v85; // 0:x0.16
  System_Nullable_Vector3__o v86; // 0:x0.16

  v9 = *(_QWORD *)&position.fields.value.fields.z;
  v83 = position;
  v82 = angle;
  v81 = scale;
  if ( (byte_42EAC0C & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Action_TypeInfo,
      (_DWORD)parent,
      (_DWORD)effetctPrefab,
      *(_QWORD *)&position.fields.value.fields.x);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_HasValue__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_Value__, v22, v23, v24);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882832, v25, v26, v27);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__, v34, v35, v36);
    byte_42EAC0C = 1;
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
    v37 = UnityEngine_Object__Instantiate_object__31876248(
            (Il2CppObject *)effetctPrefab,
            parent,
            0,
            (const MethodInfo_1E66498 *)Method_UnityEngine_Object_Instantiate_GameObject____68882832);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v37;
    p_effectObject = &this->fields.effectObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.effectObject,
      (System_Int32_array **)v37,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_38;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  effectObject,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = &this->fields.commonEffect;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
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
      *(_QWORD *)&v84.fields.value.fields.x = &v83;
      *(_QWORD *)&v84.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v57 = System_Nullable_Vector3___get_Value(v84, v56);
      if ( !transform )
        goto LABEL_38;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v57, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v57, 0LL);
    }
    if ( v82.fields.has_value )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_38;
      v60 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v85.fields.value.fields.x = &v82;
      *(_QWORD *)&v85.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v62 = System_Nullable_Vector3___get_Value(v85, v61);
      if ( !v60 )
        goto LABEL_38;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v60, *(UnityEngine_Vector3_o *)&v62, 0LL);
LABEL_29:
        effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( *p_effectObject )
        {
          v70 = (CommonUI_o *)effectObject;
          effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(*p_effectObject, 0LL);
          if ( v70 )
          {
            effectObject = CommonUI__CreateScreeenTouchInfo(v70, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( effectObject )
            {
              v71 = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  effectObject,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
              this->fields.screenTouchInfomationComponent = v71;
              p_screenTouchInfomationComponent = &this->fields.screenTouchInfomationComponent;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.screenTouchInfomationComponent,
                (System_Int32_array **)v71,
                v73,
                v74,
                v75,
                v76,
                v77,
                v78);
              this->fields.isTouch = 0;
              screenTouchInfomationComponent = this->fields.screenTouchInfomationComponent;
              v80 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(
                v80,
                (Il2CppObject *)this,
                Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__,
                0LL);
              if ( screenTouchInfomationComponent )
              {
                ScreenTouchInformationComponent__Setup(screenTouchInfomationComponent, v80, 0LL);
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
        sub_B5D69C(effectObject, v45);
      }
      UnityEngine_Transform__set_localEulerAngles(v60, *(UnityEngine_Vector3_o *)&v62, 0LL);
    }
    if ( v81.fields.has_value && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_38;
      v65 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v86.fields.value.fields.x = &v81;
      *(_QWORD *)&v86.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v67 = System_Nullable_Vector3___get_Value(v86, v66);
      if ( !v65 )
        goto LABEL_38;
      UnityEngine_Transform__set_localScale(v65, *(UnityEngine_Vector3_o *)&v67, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42EAC0E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, v5, v6, v7);
    byte_42EAC0E = 1;
  }
  commonEffect = this->fields.commonEffect;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))commonEffect->klass->vtable._8_Stop.method)(
    commonEffect,
    0LL,
    v9,
    commonEffect->klass->vtable._9_ForceStop.methodPtr);
}


bool __fastcall WarBoardTapWaitEffectPerformance__CheckAnimationEnd(
        WarBoardTapWaitEffectPerformance_o *this,
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

  if ( (byte_42EAC11 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AnimationState_TypeInfo, (_DWORD)animation, (_DWORD)method, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EAC11 = 1;
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
      sub_B5D990(v35);
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


System_Collections_IEnumerator_o *__fastcall WarBoardTapWaitEffectPerformance__Execute(
        WarBoardTapWaitEffectPerformance_o *this,
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

  if ( (byte_42EAC0F & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAC0F = 1;
  }
  v5 = sub_B5D694(WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
  WarBoardTapWaitEffectPerformance__Execute_d__10___ctor(
    (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardTapWaitEffectPerformance__OnEnd(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  UnityEngine_Object_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  WarBoardTaskBase_TaskCallback_o *EndCallback; // x0

  if ( (byte_42EAC10 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAC10 = 1;
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
    v7 = (UnityEngine_Object_o *)*p_effectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v7, 0LL);
    *p_effectObject = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v8, v9, v10, v11, v12, v13);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarBoardTaskBase_TaskCallback_o *StartCallback; // x0
  UnityEngine_Object_o *effectObject; // x20
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_42EAC0D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__, v8, v9, v10);
    byte_42EAC0D = 1;
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
    v14 = this->fields.effectObject;
    if ( !v14 )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(v14, 1, 0LL);
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
    v16 = this->fields.commonEffect;
    v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)this,
      Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__,
      0LL);
    if ( v16 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v16->klass->vtable._6_ForceStart.method)(
        v16,
        0LL,
        v17,
        v16->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_18:
    sub_B5D69C(v14, v13);
  }
}


void __fastcall WarBoardTapWaitEffectPerformance____ctor_b__6_0(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAC12 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAC12 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardTapWaitEffectPerformance__Execute_d__10_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t _1__state; // w8
  struct WarBoardTapWaitEffectPerformance_o *_4__this; // x20
  UnityEngine_Object_o *commonEffect; // x21
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  Il2CppObject **v13; // x19

  v4 = this;
  if ( (byte_42E5FDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, (_DWORD)method, v2, v3);
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E5FDE = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_20;
    goto LABEL_24;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
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
    v4->fields._mAnimation_5__2 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                      (UnityEngine_Component_o *)this,
                                                                      (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B5D560(&v4->fields._mAnimation_5__2);
    commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
      return 0;
  }
  if ( !WarBoardTapWaitEffectPerformance__CheckAnimationEnd(_4__this, v4->fields._mAnimation_5__2, 0LL) )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = &v4->fields.__2__current;
    sub_B5D560(p__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)_4__this->fields.screenTouchInfomationComponent;
  if ( !this
    || (this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0LL)) == 0LL )
  {
LABEL_24:
    sub_B5D69C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_20:
  if ( _4__this->fields.isTouch )
    return 0;
  v4->fields.__2__current = 0LL;
  v13 = &v4->fields.__2__current;
  sub_B5D560(v13);
  *((_DWORD *)v13 - 2) = 2;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardTapWaitEffectPerformance__Execute_d__10_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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