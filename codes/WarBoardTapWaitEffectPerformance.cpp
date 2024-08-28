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
  bool hasValue; // w21
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
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_35DD3F0 *v32; // x2
  int v33; // s0
  UnityEngine_Transform_o *v36; // x21
  const MethodInfo_35DD3F0 *v37; // x2
  int v38; // s0
  UnityEngine_Transform_o *v41; // x21
  const MethodInfo_35DD3F0 *v42; // x2
  int v43; // s0
  CommonUI_o *v46; // x21
  Il2CppObject *v47; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfomationComponent; // x21
  int32_t v49; // w2
  int32_t v50; // w3
  ScreenTouchInformationComponent_o *screenTouchInfomationComponent; // x22
  System_Action_o *v52; // x23
  System_Nullable_Vector3__o v53; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v54; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v55; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v56; // 0:x0.16
  System_Nullable_Vector3__o v57; // 0:x0.16
  System_Nullable_Vector3__o v58; // 0:x0.16

  v55 = position;
  v54 = angle;
  v53 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_4A06B83 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, parent);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v13);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v14);
    sub_1B686D4(&Method_System_Nullable_Vector3__get_HasValue__, v15);
    sub_1B686D4(&Method_System_Nullable_Vector3__get_Value__, v16);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject____75841296, v17);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v18);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1B686D4(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__, v20);
    byte_4A06B83 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effetctPrefab, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__Instantiate_object__49072308(
            (Il2CppObject *)effetctPrefab,
            parent,
            0,
            (const MethodInfo_2ECC8B4 *)Method_UnityEngine_Object_Instantiate_GameObject____75841296);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v21;
    p_effectObject = &this->fields.effectObject;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.effectObject, (int32_t)v21, v23, v24);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.commonEffect, (int32_t)Component_object, v29, v30);
    effectObject = (UnityEngine_GameObject_o *)this->fields.commonEffect;
    if ( !effectObject )
      goto LABEL_36;
    CommonEffectComponent__Init((CommonEffectComponent_o *)effectObject, 0, 1, 0LL);
    this->fields.isDestroy = isDestroy;
    if ( hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_36;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v56.fields.hasValue = &v55;
      *(_QWORD *)&v56.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v33 = System_Nullable_Vector3___get_Value(v56, v32);
      if ( !transform )
        goto LABEL_36;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v33, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v33, 0LL);
    }
    if ( v54.fields.hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_36;
      v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v57.fields.hasValue = &v54;
      *(_QWORD *)&v57.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v38 = System_Nullable_Vector3___get_Value(v57, v37);
      if ( !v36 )
        goto LABEL_36;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v36, *(UnityEngine_Vector3_o *)&v38, 0LL);
LABEL_27:
        effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( *p_effectObject )
        {
          v46 = (CommonUI_o *)effectObject;
          effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(*p_effectObject, 0LL);
          if ( v46 )
          {
            effectObject = CommonUI__CreateScreeenTouchInfo(v46, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( effectObject )
            {
              v47 = UnityEngine_GameObject__GetComponent_object_(
                      effectObject,
                      (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
              this->fields.screenTouchInfomationComponent = (struct ScreenTouchInformationComponent_o *)v47;
              p_screenTouchInfomationComponent = &this->fields.screenTouchInfomationComponent;
              sub_1B68678(
                (ServantStatusBattleListViewItem_o *)&this->fields.screenTouchInfomationComponent,
                (int32_t)v47,
                v49,
                v50);
              this->fields.isTouch = 0;
              screenTouchInfomationComponent = this->fields.screenTouchInfomationComponent;
              v52 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
              System_Action___ctor(
                v52,
                (Il2CppObject *)this,
                (intptr_t)Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__,
                0LL);
              if ( screenTouchInfomationComponent )
              {
                ScreenTouchInformationComponent__Setup(screenTouchInfomationComponent, v52, 0LL);
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
LABEL_36:
        sub_1B68930(effectObject, v25);
      }
      UnityEngine_Transform__set_localEulerAngles(v36, *(UnityEngine_Vector3_o *)&v38, 0LL);
    }
    if ( v53.fields.hasValue && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_36;
      v41 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v58.fields.hasValue = &v53;
      *(_QWORD *)&v58.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v43 = System_Nullable_Vector3___get_Value(v58, v42);
      if ( !v41 )
        goto LABEL_36;
      UnityEngine_Transform__set_localScale(v41, *(UnityEngine_Vector3_o *)&v43, 0LL);
    }
    goto LABEL_27;
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

  if ( (byte_4A06B85 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, v3);
    byte_4A06B85 = 1;
  }
  commonEffect = this->fields.commonEffect;
  v5 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_1B68930(v6, v7);
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
  System_Collections_IEnumerator_o *v14; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  UnityEngine_AnimationState_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *clip; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x21
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4A06B88 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_AnimationState_TypeInfo, animation);
    sub_1B686D4(&System_IDisposable_TypeInfo, v5);
    sub_1B686D4(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_1/*""*/, v8);
    byte_4A06B88 = 1;
  }
  if ( this->fields.animationPlay )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)animation,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !animation )
        goto LABEL_39;
      Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
      v14 = Enumerator;
      if ( !Enumerator )
        sub_1B68930(0LL, v13);
      klass = Enumerator->klass;
      v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          p_offset += 4;
          if ( !v16 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1BBA6B4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              v14,
              *(_QWORD *)(p_method + 8)) & 1) != 0 )
      {
        v20 = v14->klass;
        v21 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
        {
          v22 = (System_Collections_IEnumerator_c **)&v20->_1.interfaceOffsets->offset;
          while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v21;
            v22 += 2;
            if ( !v21 )
              goto LABEL_21;
          }
          v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1].method;
        }
        else
        {
LABEL_21:
          v23 = sub_1BBA6B4(v14, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v24 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(
                                                v14,
                                                *(_QWORD *)(v23 + 8));
        if ( !v24 )
          sub_1B68930(0LL, v25);
        if ( v24->klass == UnityEngine_AnimationState_TypeInfo )
        {
          clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v24, 0LL);
          if ( clip )
          {
            name = UnityEngine_Object__get_name(clip, 0LL);
            goto LABEL_28;
          }
        }
        else
        {
          sub_1B68BF0(v24);
        }
        sub_1B68930(clip, v27);
      }
LABEL_28:
      v28 = sub_1B68810(v14, System_IDisposable_TypeInfo);
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
              goto LABEL_33;
          }
          v33 = v29 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_33:
          v33 = sub_1BBA6B4(v28, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
      }
      Item = UnityEngine_Animation__get_Item(animation, name, 0LL);
      if ( Item )
        return UnityEngine_AnimationState__get_normalizedTime(Item, 0LL) >= 1.0;
LABEL_39:
      sub_1B68930(Item, v11);
    }
  }
  return 1;
}


System_Collections_IEnumerator_o *__fastcall WarBoardTapWaitEffectPerformance__Execute(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A06B86 & 1) == 0 )
  {
    sub_1B686D4(&WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo, method);
    byte_4A06B86 = 1;
  }
  v3 = sub_1B68920(WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardTapWaitEffectPerformance__OnEnd(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  UnityEngine_Object_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4A06B87 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A06B87 = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) && this->fields.isDestroy )
  {
    v5 = (UnityEngine_Object_o *)*p_effectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69171816(v5, 0LL);
    *p_effectObject = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.effectObject, 0, v6, v7);
  }
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardTapWaitEffectPerformance__OnStart(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *effectObject; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_4A06B84 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    sub_1B686D4(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__, v4);
    byte_4A06B84 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) )
  {
    v8 = this->fields.effectObject;
    if ( !v8 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v8, 1, 0LL);
  }
  this->fields.animationPlay = 0;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
  {
    v10 = this->fields.commonEffect;
    v11 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
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
LABEL_16:
    sub_1B68930(v8, v7);
  }
}


void __fastcall WarBoardTapWaitEffectPerformance____ctor_b__6_0(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4A06B89 & 1) == 0 )
  {
    sub_1B686D4(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__, method);
    byte_4A06B89 = 1;
  }
  v3 = Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__;
  if ( (*((_BYTE *)Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  WarBoardTapWaitEffectPerformance__Execute_d__10_o *v4; // x19
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct WarBoardTapWaitEffectPerformance_o *_4__this; // x20
  Il2CppObject *ComponentInChildren_object__48499288; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_Object_o *commonEffect; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  ServantStatusBattleListViewItem_o *v16; // x19

  v4 = this;
  if ( (byte_4A06B8A & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method);
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    byte_4A06B8A = 1;
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
                                                                    0LL);
      if ( !this )
        goto LABEL_24;
      ComponentInChildren_object__48499288 = UnityEngine_Component__GetComponentInChildren_object__48499288(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_2E40A58 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
      v4->fields._mAnimation_5__2 = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48499288;
      sub_1B68678(
        (ServantStatusBattleListViewItem_o *)&v4->fields._mAnimation_5__2,
        (int32_t)ComponentInChildren_object__48499288,
        v9,
        v10);
      commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
        return 0;
    }
    if ( !WarBoardTapWaitEffectPerformance__CheckAnimationEnd(_4__this, v4->fields._mAnimation_5__2, v2) )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B68678(p__2__current, 0, v12, v13);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)_4__this->fields.screenTouchInfomationComponent;
    if ( this )
    {
      this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        goto LABEL_20;
      }
    }
LABEL_24:
    sub_1B68930(this, method);
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_24;
LABEL_20:
  if ( _4__this->fields.isTouch )
    return 0;
  v4->fields.__2__current = 0LL;
  v16 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B68678(v16, 0, (int32_t)v2, v3);
  *(_DWORD *)&v16[-1].fields.isMine = 2;
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_WarBoardTapWaitEffectPerformance__Execute_d__10_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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