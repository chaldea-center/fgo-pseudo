void WarBoardTapWaitEffectPerformance___ctor(
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
  bool hasValue; // w22
  bool v10; // w23
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  UnityEngine_GameObject_o **p_effectObject; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x21
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  UnityEngine_Transform_o *transform; // x22
  const MethodInfo_45E916C *v37; // x2
  UnityEngine_Transform_o *v38; // x22
  const MethodInfo_45E916C *v39; // x2
  UnityEngine_Transform_o *v40; // x21
  const MethodInfo_45E916C *v41; // x2
  UnityEngine_Transform_o *v42; // x22
  const MethodInfo_45E916C *v43; // x2
  UnityEngine_Transform_o *v44; // x21
  const MethodInfo_45E916C *v45; // x2
  CommonUI_o *v46; // x21
  Il2CppObject *v47; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfomationComponent; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  ScreenTouchInformationComponent_o *screenTouchInfomationComponent; // x22
  System_Action_o *v56; // x23
  System_Nullable_Vector3__o v57; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v58; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v59; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v60; // 0:x0.16
  System_Nullable_Vector3__o v61; // 0:x0.16
  System_Nullable_Vector3__o v62; // 0:x0.16
  System_Nullable_Vector3__o v63; // 0:x0.16
  System_Nullable_Vector3__o v64; // 0:x0.16
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  v59 = position;
  v58 = angle;
  hasValue = angle.fields.hasValue;
  v10 = position.fields.hasValue;
  v57 = scale;
  if ( (byte_596E3B9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_2213A60(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_Vector3__get_Value__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801592);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
    byte_596E3B9 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effetctPrefab, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    v18 = UnityEngine_Object__Instantiate_object__59717228(
            (Il2CppObject *)effetctPrefab,
            parent,
            0,
            (const MethodInfo_38F366C *)Method_UnityEngine_Object_Instantiate_GameObject____91801592);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v18;
    p_effectObject = &this->fields.effectObject;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectObject,
      (int32_t)v18,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_41;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.commonEffect,
      (int32_t)Component_object,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    effectObject = (UnityEngine_GameObject_o *)this->fields.commonEffect;
    if ( !effectObject )
      goto LABEL_41;
    CommonEffectComponent__Init((CommonEffectComponent_o *)effectObject, 0, 1, 0);
    this->fields.isDestroy = isDestroy;
    if ( v10 )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( isLocal )
      {
        if ( !effectObject )
          goto LABEL_41;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
        *(_QWORD *)&v60.fields.hasValue = &v59;
        *(_QWORD *)&v60.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
        Value = System_Nullable_Vector3___get_Value(v60, v37);
        if ( !transform )
          goto LABEL_41;
        UnityEngine_Transform__set_localPosition(transform, Value, 0);
        if ( !v58.fields.hasValue )
          goto LABEL_21;
        goto LABEL_18;
      }
      if ( !effectObject )
        goto LABEL_41;
      v42 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v63.fields.hasValue = &v59;
      *(_QWORD *)&v63.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      v68 = System_Nullable_Vector3___get_Value(v63, v43);
      if ( !v42 )
        goto LABEL_41;
      UnityEngine_Transform__set_position(v42, v68, 0);
      if ( !v58.fields.hasValue )
        goto LABEL_32;
    }
    else
    {
      if ( !hasValue )
      {
LABEL_21:
        if ( scale.fields.hasValue && isLocal )
        {
          effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
          if ( !*p_commonEffect )
            goto LABEL_41;
          v40 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
          *(_QWORD *)&v62.fields.hasValue = &v57;
          *(_QWORD *)&v62.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
          v67 = System_Nullable_Vector3___get_Value(v62, v41);
          if ( !v40 )
            goto LABEL_41;
          UnityEngine_Transform__set_localScale(v40, v67, 0);
        }
LABEL_32:
        effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( *p_effectObject )
        {
          v46 = (CommonUI_o *)effectObject;
          effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(*p_effectObject, 0);
          if ( v46 )
          {
            effectObject = CommonUI__CreateScreeenTouchInfo(v46, (UnityEngine_Transform_o *)effectObject, 1, 0);
            if ( effectObject )
            {
              v47 = UnityEngine_GameObject__GetComponent_object_(
                      effectObject,
                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
              this->fields.screenTouchInfomationComponent = (struct ScreenTouchInformationComponent_o *)v47;
              p_screenTouchInfomationComponent = &this->fields.screenTouchInfomationComponent;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.screenTouchInfomationComponent,
                (int32_t)v47,
                v49,
                v50,
                v51,
                v52,
                v53,
                v54);
              screenTouchInfomationComponent = this->fields.screenTouchInfomationComponent;
              this->fields.isTouch = 0;
              v56 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(
                v56,
                (Il2CppObject *)this,
                (intptr_t)Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__,
                0);
              if ( screenTouchInfomationComponent )
              {
                ScreenTouchInformationComponent__Setup(screenTouchInfomationComponent, v56, 0);
                effectObject = (UnityEngine_GameObject_o *)*p_screenTouchInfomationComponent;
                if ( *p_screenTouchInfomationComponent )
                {
                  effectObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObject, 0);
                  if ( effectObject )
                  {
                    UnityEngine_GameObject__SetActive(effectObject, 0, 0);
                    effectObject = *p_effectObject;
                    if ( *p_effectObject )
                    {
                      UnityEngine_GameObject__SetActive(effectObject, 0, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_41:
        sub_2213CDC(effectObject, v26);
      }
      if ( isLocal )
      {
LABEL_18:
        effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
        if ( !*p_commonEffect )
          goto LABEL_41;
        v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
        *(_QWORD *)&v61.fields.hasValue = &v58;
        *(_QWORD *)&v61.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
        v66 = System_Nullable_Vector3___get_Value(v61, v39);
        if ( !v38 )
          goto LABEL_41;
        UnityEngine_Transform__set_localEulerAngles(v38, v66, 0);
        goto LABEL_21;
      }
    }
    effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
    if ( !*p_commonEffect )
      goto LABEL_41;
    v44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
    *(_QWORD *)&v64.fields.hasValue = &v58;
    *(_QWORD *)&v64.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    v69 = System_Nullable_Vector3___get_Value(v64, v45);
    if ( !v44 )
      goto LABEL_41;
    UnityEngine_Transform__set_eulerAngles(v44, v69, 0);
    goto LABEL_32;
  }
}


void WarBoardTapWaitEffectPerformance__AnimantionEndCallback(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  this->fields.animationPlay = 0;
}


void WarBoardTapWaitEffectPerformance__AnimantionEndStartCallback(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596E3BB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__);
    byte_596E3BB = 1;
  }
  commonEffect = this->fields.commonEffect;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, 0);
  if ( !commonEffect )
    sub_2213CDC(v5, v6);
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))commonEffect->klass->vtable._8_Stop.methodPtr)(
    commonEffect,
    0,
    v4,
    commonEffect->klass->vtable._8_Stop.method);
}


bool WarBoardTapWaitEffectPerformance__CheckAnimationEnd(
        WarBoardTapWaitEffectPerformance_o *this,
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

  if ( (byte_596E3BE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AnimationState_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E3BE = 1;
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


System_Collections_IEnumerator_o *WarBoardTapWaitEffectPerformance__Execute(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E3BC & 1) == 0 )
  {
    sub_2213A60(&WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
    byte_596E3BC = 1;
  }
  v3 = sub_2213CCC(WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardTapWaitEffectPerformance__OnEnd(WarBoardTapWaitEffectPerformance_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_596E3BD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E3BD = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0, 0) && this->fields.isDestroy )
  {
    v8 = (UnityEngine_Object_o *)*p_effectObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    UnityEngine_Object__Destroy_83459800(v8, 0);
    *p_effectObject = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectObject, 0, v9, v10, v11, v12, v13, v14);
  }
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardTapWaitEffectPerformance__OnStart(WarBoardTapWaitEffectPerformance_o *this, const MethodInfo *method)
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

  if ( (byte_596E3BA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__);
    byte_596E3BA = 1;
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
      Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__,
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


void WarBoardTapWaitEffectPerformance____ctor_b__6_0(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_596E3BF & 1) == 0 )
  {
    sub_2213A60(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
    byte_596E3BF = 1;
  }
  v3 = Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__;
  if ( (*((_BYTE *)Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  this->fields.isTouch = 1;
}


void WarBoardTapWaitEffectPerformance__Execute_d__10___ctor(
        WarBoardTapWaitEffectPerformance__Execute_d__10_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardTapWaitEffectPerformance__Execute_d__10__MoveNext(
        WarBoardTapWaitEffectPerformance__Execute_d__10_o *this,
        const MethodInfo *method)
{
  MethodInfo *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  WarBoardTapWaitEffectPerformance__Execute_d__10_o *v8; // x19
  int32_t _1__state; // w8
  struct WarBoardTapWaitEffectPerformance_o *_4__this; // x20
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *commonEffect; // x21
  int v22; // w20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19

  v8 = this;
  if ( (byte_596E3C0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E3C0 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_19;
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
                                                                  0);
    if ( !this )
      goto LABEL_24;
    ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    v8->fields._mAnimation_5__2 = (struct UnityEngine_Animation_o *)ComponentInChildren_object__58855044;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v8->fields._mAnimation_5__2,
      (int32_t)ComponentInChildren_object__58855044,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    if ( !UnityEngine_Object__op_Inequality(commonEffect, 0, 0) )
      return 0;
  }
  if ( !WarBoardTapWaitEffectPerformance__CheckAnimationEnd(_4__this, v8->fields._mAnimation_5__2, v2) )
  {
    v22 = 1;
    goto LABEL_23;
  }
  this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)_4__this->fields.screenTouchInfomationComponent;
  if ( !this
    || (this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0)) == 0 )
  {
LABEL_24:
    sub_2213CDC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
LABEL_19:
  if ( _4__this->fields.isTouch )
    return 0;
  v22 = 2;
LABEL_23:
  v8->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_2213A04(p__2__current, 0, (System_String_o *)v2, v3, v4, v5, v6, v7);
  p__2__current[-1].fields._BoardType_k__BackingField = v22;
  return 1;
}


Il2CppObject *WarBoardTapWaitEffectPerformance__Execute_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardTapWaitEffectPerformance__Execute_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardTapWaitEffectPerformance__Execute_d__10__System_Collections_IEnumerator_Reset(
        WarBoardTapWaitEffectPerformance__Execute_d__10_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WarBoardTapWaitEffectPerformance__Execute_d__10_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *WarBoardTapWaitEffectPerformance__Execute_d__10__System_Collections_IEnumerator_get_Current(
        WarBoardTapWaitEffectPerformance__Execute_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardTapWaitEffectPerformance__Execute_d__10__System_IDisposable_Dispose(
        WarBoardTapWaitEffectPerformance__Execute_d__10_o *this,
        const MethodInfo *method)
{
  ;
}