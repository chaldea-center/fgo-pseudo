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
  bool hasValue; // w21
  Il2CppObject *v13; // x0
  UnityEngine_GameObject_o **p_effectObject; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_38C2B1C *v23; // x2
  UnityEngine_Transform_o *v24; // x21
  const MethodInfo_38C2B1C *v25; // x2
  UnityEngine_Transform_o *v26; // x21
  const MethodInfo_38C2B1C *v27; // x2
  CommonUI_o *v28; // x21
  Il2CppObject *v29; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfomationComponent; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  ScreenTouchInformationComponent_o *screenTouchInfomationComponent; // x22
  System_Action_o *v34; // x23
  System_Nullable_Vector3__o v35; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v36; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v37; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v38; // 0:x0.16
  System_Nullable_Vector3__o v39; // 0:x0.16
  System_Nullable_Vector3__o v40; // 0:x0.16
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  v37 = position;
  v36 = angle;
  v35 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_4C35669 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C32C20(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C32C20(&Method_System_Nullable_Vector3__get_Value__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147224);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
    byte_4C35669 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effetctPrefab, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__Instantiate_object__51812596(
            (Il2CppObject *)effetctPrefab,
            parent,
            0,
            (const MethodInfo_31698F4 *)Method_UnityEngine_Object_Instantiate_GameObject____78147224);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v13;
    p_effectObject = &this->fields.effectObject;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectObject, (int32_t)v13, v15, v16);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commonEffect, (int32_t)Component_object, v20, v21);
    effectObject = (UnityEngine_GameObject_o *)this->fields.commonEffect;
    if ( !effectObject )
      goto LABEL_36;
    CommonEffectComponent__Init((CommonEffectComponent_o *)effectObject, 0, 1, 0);
    this->fields.isDestroy = isDestroy;
    if ( hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_36;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v38.fields.hasValue = &v37;
      *(_QWORD *)&v38.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      Value = System_Nullable_Vector3___get_Value(v38, v23);
      if ( !transform )
        goto LABEL_36;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, Value, 0);
      else
        UnityEngine_Transform__set_position(transform, Value, 0);
    }
    if ( v36.fields.hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_36;
      v24 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v39.fields.hasValue = &v36;
      *(_QWORD *)&v39.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      v42 = System_Nullable_Vector3___get_Value(v39, v25);
      if ( !v24 )
        goto LABEL_36;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v24, v42, 0);
LABEL_27:
        effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( *p_effectObject )
        {
          v28 = (CommonUI_o *)effectObject;
          effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(*p_effectObject, 0);
          if ( v28 )
          {
            effectObject = CommonUI__CreateScreeenTouchInfo(v28, (UnityEngine_Transform_o *)effectObject, 1, 0);
            if ( effectObject )
            {
              v29 = UnityEngine_GameObject__GetComponent_object_(
                      effectObject,
                      (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
              this->fields.screenTouchInfomationComponent = (struct ScreenTouchInformationComponent_o *)v29;
              p_screenTouchInfomationComponent = &this->fields.screenTouchInfomationComponent;
              sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.screenTouchInfomationComponent, (int32_t)v29, v31, v32);
              this->fields.isTouch = 0;
              screenTouchInfomationComponent = this->fields.screenTouchInfomationComponent;
              v34 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
              System_Action___ctor(
                v34,
                (Il2CppObject *)this,
                (intptr_t)Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__,
                0);
              if ( screenTouchInfomationComponent )
              {
                ScreenTouchInformationComponent__Setup(screenTouchInfomationComponent, v34, 0);
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
LABEL_36:
        sub_1C32E7C(effectObject);
      }
      UnityEngine_Transform__set_localEulerAngles(v24, v42, 0);
    }
    if ( v35.fields.hasValue && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_36;
      v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v40.fields.hasValue = &v35;
      *(_QWORD *)&v40.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      v43 = System_Nullable_Vector3___get_Value(v40, v27);
      if ( !v26 )
        goto LABEL_36;
      UnityEngine_Transform__set_localScale(v26, v43, 0);
    }
    goto LABEL_27;
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

  if ( (byte_4C3566B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__);
    byte_4C3566B = 1;
  }
  commonEffect = this->fields.commonEffect;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, 0);
  if ( !commonEffect )
    sub_1C32E7C(v5);
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
  System_Collections_IEnumerator_o *Enumerator; // x0
  System_Collections_IEnumerator_o *v8; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_AnimationState_o *v18; // x0
  UnityEngine_Object_o *clip; // x0
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x21
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C3566E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AnimationState_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3566E = 1;
  }
  if ( this->fields.animationPlay )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)animation, 0, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !animation )
        goto LABEL_39;
      Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0);
      v8 = Enumerator;
      if ( !Enumerator )
        sub_1C32E7C(0);
      klass = Enumerator->klass;
      v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_13;
        }
        v12 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_13:
        v12 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(v8, *(_QWORD *)(v12 + 8)) & 1) != 0 )
      {
        v14 = v8->klass;
        v15 = *(unsigned __int16 *)&v8->klass->_2.rank;
        if ( *(_WORD *)&v8->klass->_2.rank )
        {
          v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
          while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v15;
            v16 += 2;
            if ( !v15 )
              goto LABEL_21;
          }
          v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1];
        }
        else
        {
LABEL_21:
          v17 = sub_1C83438(v8, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v18 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                                v8,
                                                *(_QWORD *)(v17 + 8));
        if ( !v18 )
          sub_1C32E7C(0);
        if ( v18->klass == UnityEngine_AnimationState_TypeInfo )
        {
          clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v18, 0);
          if ( clip )
          {
            name = UnityEngine_Object__get_name(clip, 0);
            goto LABEL_28;
          }
        }
        else
        {
          sub_1C3313C(v18);
        }
        sub_1C32E7C(clip);
      }
LABEL_28:
      v20 = sub_1C32D5C(v8, System_IDisposable_TypeInfo);
      if ( v20 )
      {
        v21 = *(_QWORD *)v20;
        v22 = v20;
        v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
        {
          v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
          {
            --v23;
            v24 += 4;
            if ( !v23 )
              goto LABEL_33;
          }
          v25 = v21 + 16LL * *v24 + 312;
        }
        else
        {
LABEL_33:
          v25 = sub_1C83438(v20, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
      }
      Item = UnityEngine_Animation__get_Item(animation, name, 0);
      if ( Item )
        return UnityEngine_AnimationState__get_normalizedTime(Item, 0) >= 1.0;
LABEL_39:
      sub_1C32E7C(Item);
    }
  }
  return 1;
}


System_Collections_IEnumerator_o *WarBoardTapWaitEffectPerformance__Execute(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3566C & 1) == 0 )
  {
    sub_1C32C20(&WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
    byte_4C3566C = 1;
  }
  v3 = sub_1C32E6C(WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardTapWaitEffectPerformance__OnEnd(WarBoardTapWaitEffectPerformance_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  UnityEngine_Object_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4C3566D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3566D = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0, 0) && this->fields.isDestroy )
  {
    v5 = (UnityEngine_Object_o *)*p_effectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v5, 0);
    *p_effectObject = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectObject, 0, v6, v7);
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
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *effectObject; // x20
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v7; // x20
  System_Action_o *v8; // x21

  if ( (byte_4C3566A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__);
    byte_4C3566A = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0, 0) )
  {
    v5 = this->fields.effectObject;
    if ( !v5 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v5, 1, 0);
  }
  this->fields.animationPlay = 0;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0, 0) )
  {
    v7 = this->fields.commonEffect;
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__,
      0);
    if ( v7 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))v7->klass->vtable._6_ForceStart.methodPtr)(
        v7,
        0,
        v8,
        v7->klass->vtable._6_ForceStart.method);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_1C32E7C(v5);
  }
}


void WarBoardTapWaitEffectPerformance____ctor_b__6_0(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C3566F & 1) == 0 )
  {
    sub_1C32C20(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
    byte_4C3566F = 1;
  }
  v3 = Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__;
  if ( (*((_BYTE *)Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  WarBoardTapWaitEffectPerformance__Execute_d__10_o *v4; // x19
  int32_t _1__state; // w8
  struct WarBoardTapWaitEffectPerformance_o *_4__this; // x20
  Il2CppObject *ComponentInChildren_object__51199524; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *commonEffect; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool result; // w0
  CGThumbnailListItem_o *p__2__current; // x19
  CGThumbnailListItem_o *v15; // x19

  v4 = this;
  if ( (byte_4C35670 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35670 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state != 2 )
  {
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
                                                                    0);
      if ( !this )
        goto LABEL_24;
      ComponentInChildren_object__51199524 = UnityEngine_Component__GetComponentInChildren_object__51199524(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
      v4->fields._mAnimation_5__2 = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51199524;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)&v4->fields._mAnimation_5__2,
        (int32_t)ComponentInChildren_object__51199524,
        v8,
        v9);
      commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(commonEffect, 0, 0) )
        return 0;
    }
    if ( !WarBoardTapWaitEffectPerformance__CheckAnimationEnd(_4__this, v4->fields._mAnimation_5__2, v2) )
    {
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C32BC4(p__2__current, 0, v11, v12);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)_4__this->fields.screenTouchInfomationComponent;
    if ( this )
    {
      this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        goto LABEL_20;
      }
    }
LABEL_24:
    sub_1C32E7C(this);
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_24;
LABEL_20:
  if ( _4__this->fields.isTouch )
    return 0;
  v4->fields.__2__current = 0;
  v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C32BC4(v15, 0, (int32_t)v2, v3);
  LODWORD(v15[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_WarBoardTapWaitEffectPerformance__Execute_d__10_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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