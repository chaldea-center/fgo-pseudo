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
  __int64 v17; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_38B3EE4 *v24; // x2
  UnityEngine_Transform_o *v25; // x21
  const MethodInfo_38B3EE4 *v26; // x2
  UnityEngine_Transform_o *v27; // x21
  const MethodInfo_38B3EE4 *v28; // x2
  CommonUI_o *v29; // x21
  Il2CppObject *v30; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfomationComponent; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  ScreenTouchInformationComponent_o *screenTouchInfomationComponent; // x22
  System_Action_o *v35; // x23
  System_Nullable_Vector3__o v36; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v37; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v38; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v39; // 0:x0.16
  System_Nullable_Vector3__o v40; // 0:x0.16
  System_Nullable_Vector3__o v41; // 0:x0.16
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  v38 = position;
  v37 = angle;
  v36 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_4C24F94 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C2D490(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C2D490(&Method_System_Nullable_Vector3__get_Value__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081712);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
    byte_4C24F94 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effetctPrefab, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__Instantiate_object__51752532(
            (Il2CppObject *)effetctPrefab,
            parent,
            0,
            (const MethodInfo_315AE54 *)Method_UnityEngine_Object_Instantiate_GameObject____78081712);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v13;
    p_effectObject = &this->fields.effectObject;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effectObject, (int32_t)v13, v15, v16);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commonEffect, (int32_t)Component_object, v21, v22);
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
      *(_QWORD *)&v39.fields.hasValue = &v38;
      *(_QWORD *)&v39.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      Value = System_Nullable_Vector3___get_Value(v39, v24);
      if ( !transform )
        goto LABEL_36;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, Value, 0);
      else
        UnityEngine_Transform__set_position(transform, Value, 0);
    }
    if ( v37.fields.hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_36;
      v25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v40.fields.hasValue = &v37;
      *(_QWORD *)&v40.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      v43 = System_Nullable_Vector3___get_Value(v40, v26);
      if ( !v25 )
        goto LABEL_36;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v25, v43, 0);
LABEL_27:
        effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( *p_effectObject )
        {
          v29 = (CommonUI_o *)effectObject;
          effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(*p_effectObject, 0);
          if ( v29 )
          {
            effectObject = CommonUI__CreateScreeenTouchInfo(v29, (UnityEngine_Transform_o *)effectObject, 1, 0);
            if ( effectObject )
            {
              v30 = UnityEngine_GameObject__GetComponent_object_(
                      effectObject,
                      (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
              this->fields.screenTouchInfomationComponent = (struct ScreenTouchInformationComponent_o *)v30;
              p_screenTouchInfomationComponent = &this->fields.screenTouchInfomationComponent;
              sub_1C2D434((CGThumbnailListItem_o *)&this->fields.screenTouchInfomationComponent, (int32_t)v30, v32, v33);
              this->fields.isTouch = 0;
              screenTouchInfomationComponent = this->fields.screenTouchInfomationComponent;
              v35 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(
                v35,
                (Il2CppObject *)this,
                (intptr_t)Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__,
                0);
              if ( screenTouchInfomationComponent )
              {
                ScreenTouchInformationComponent__Setup(screenTouchInfomationComponent, v35, 0);
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
        sub_1C2D6EC(effectObject, v17);
      }
      UnityEngine_Transform__set_localEulerAngles(v25, v43, 0);
    }
    if ( v36.fields.hasValue && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_36;
      v27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0);
      *(_QWORD *)&v41.fields.hasValue = &v36;
      *(_QWORD *)&v41.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      v44 = System_Nullable_Vector3___get_Value(v41, v28);
      if ( !v27 )
        goto LABEL_36;
      UnityEngine_Transform__set_localScale(v27, v44, 0);
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
  __int64 v6; // x1

  if ( (byte_4C24F96 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__);
    byte_4C24F96 = 1;
  }
  commonEffect = this->fields.commonEffect;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, 0);
  if ( !commonEffect )
    sub_1C2D6EC(v5, v6);
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
  System_Collections_IEnumerator_o *v10; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_AnimationState_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *clip; // x0
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x21
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  if ( (byte_4C24F99 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_AnimationState_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24F99 = 1;
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
      v10 = Enumerator;
      if ( !Enumerator )
        sub_1C2D6EC(0, v9);
      klass = Enumerator->klass;
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
        v14 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) != 0 )
      {
        v16 = v10->klass;
        v17 = *(unsigned __int16 *)&v10->klass->_2.rank;
        if ( *(_WORD *)&v10->klass->_2.rank )
        {
          v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
          while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v17;
            v18 += 2;
            if ( !v17 )
              goto LABEL_21;
          }
          v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1];
        }
        else
        {
LABEL_21:
          v19 = sub_1C7DCA8(v10, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v20 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                                v10,
                                                *(_QWORD *)(v19 + 8));
        if ( !v20 )
          sub_1C2D6EC(0, v21);
        if ( v20->klass == UnityEngine_AnimationState_TypeInfo )
        {
          clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v20, 0);
          if ( clip )
          {
            name = UnityEngine_Object__get_name(clip, 0);
            goto LABEL_28;
          }
        }
        else
        {
          sub_1C2D9AC(v20);
        }
        sub_1C2D6EC(clip, v23);
      }
LABEL_28:
      v24 = sub_1C2D5CC(v10, System_IDisposable_TypeInfo);
      if ( v24 )
      {
        v25 = *(_QWORD *)v24;
        v26 = v24;
        v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
          {
            --v27;
            v28 += 4;
            if ( !v27 )
              goto LABEL_33;
          }
          v29 = v25 + 16LL * *v28 + 312;
        }
        else
        {
LABEL_33:
          v29 = sub_1C7DCA8(v24, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
      }
      Item = UnityEngine_Animation__get_Item(animation, name, 0);
      if ( Item )
        return UnityEngine_AnimationState__get_normalizedTime(Item, 0) >= 1.0;
LABEL_39:
      sub_1C2D6EC(Item, v7);
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

  if ( (byte_4C24F97 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
    byte_4C24F97 = 1;
  }
  v3 = sub_1C2D6DC(WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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

  if ( (byte_4C24F98 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24F98 = 1;
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
    UnityEngine_Object__Destroy_71163704(v5, 0);
    *p_effectObject = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effectObject, 0, v6, v7);
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v8; // x20
  System_Action_o *v9; // x21

  if ( (byte_4C24F95 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__);
    byte_4C24F95 = 1;
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
    v6 = this->fields.effectObject;
    if ( !v6 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v6, 1, 0);
  }
  this->fields.animationPlay = 0;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0, 0) )
  {
    v8 = this->fields.commonEffect;
    v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__,
      0);
    if ( v8 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))v8->klass->vtable._6_ForceStart.methodPtr)(
        v8,
        0,
        v9,
        v8->klass->vtable._6_ForceStart.method);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_1C2D6EC(v6, v5);
  }
}


void WarBoardTapWaitEffectPerformance____ctor_b__6_0(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C24F9A & 1) == 0 )
  {
    sub_1C2D490(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
    byte_4C24F9A = 1;
  }
  v3 = Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__;
  if ( (*((_BYTE *)Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  Il2CppObject *ComponentInChildren_object__51139460; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *commonEffect; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool result; // w0
  CGThumbnailListItem_o *p__2__current; // x19
  CGThumbnailListItem_o *v15; // x19

  v4 = this;
  if ( (byte_4C24F9B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24F9B = 1;
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
      ComponentInChildren_object__51139460 = UnityEngine_Component__GetComponentInChildren_object__51139460(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
      v4->fields._mAnimation_5__2 = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51139460;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&v4->fields._mAnimation_5__2,
        (int32_t)ComponentInChildren_object__51139460,
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
      sub_1C2D434(p__2__current, 0, v11, v12);
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
    sub_1C2D6EC(this, method);
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_24;
LABEL_20:
  if ( _4__this->fields.isTouch )
    return 0;
  v4->fields.__2__current = 0;
  v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C2D434(v15, 0, (int32_t)v2, v3);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_WarBoardTapWaitEffectPerformance__Execute_d__10_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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