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
  Il2CppObject *v13; // x0
  UnityEngine_GameObject_o **p_effectObject; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_361E564 *v24; // x2
  int v25; // s0
  UnityEngine_Transform_o *v28; // x21
  const MethodInfo_361E564 *v29; // x2
  int v30; // s0
  UnityEngine_Transform_o *v33; // x21
  const MethodInfo_361E564 *v34; // x2
  int v35; // s0
  CommonUI_o *v38; // x21
  Il2CppObject *v39; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfomationComponent; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  ScreenTouchInformationComponent_o *screenTouchInfomationComponent; // x22
  System_Action_o *v44; // x23
  System_Nullable_Vector3__o v45; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v46; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v47; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v48; // 0:x0.16
  System_Nullable_Vector3__o v49; // 0:x0.16
  System_Nullable_Vector3__o v50; // 0:x0.16

  v47 = position;
  v46 = angle;
  v45 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_4A59104 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1B885B0(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_Vector3__get_Value__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76172008);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
    byte_4A59104 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effetctPrefab, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__Instantiate_object__49297912(
            (Il2CppObject *)effetctPrefab,
            parent,
            0,
            (const MethodInfo_2F039F8 *)Method_UnityEngine_Object_Instantiate_GameObject____76172008);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v13;
    p_effectObject = &this->fields.effectObject;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectObject, (int32_t)v13, v15, v16);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commonEffect, (int32_t)Component_object, v21, v22);
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
      *(_QWORD *)&v48.fields.hasValue = &v47;
      *(_QWORD *)&v48.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v25 = System_Nullable_Vector3___get_Value(v48, v24);
      if ( !transform )
        goto LABEL_36;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
    }
    if ( v46.fields.hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_36;
      v28 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v49.fields.hasValue = &v46;
      *(_QWORD *)&v49.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v30 = System_Nullable_Vector3___get_Value(v49, v29);
      if ( !v28 )
        goto LABEL_36;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v28, *(UnityEngine_Vector3_o *)&v30, 0LL);
LABEL_27:
        effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( *p_effectObject )
        {
          v38 = (CommonUI_o *)effectObject;
          effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(*p_effectObject, 0LL);
          if ( v38 )
          {
            effectObject = CommonUI__CreateScreeenTouchInfo(v38, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( effectObject )
            {
              v39 = UnityEngine_GameObject__GetComponent_object_(
                      effectObject,
                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
              this->fields.screenTouchInfomationComponent = (struct ScreenTouchInformationComponent_o *)v39;
              p_screenTouchInfomationComponent = &this->fields.screenTouchInfomationComponent;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&this->fields.screenTouchInfomationComponent,
                (int32_t)v39,
                v41,
                v42);
              this->fields.isTouch = 0;
              screenTouchInfomationComponent = this->fields.screenTouchInfomationComponent;
              v44 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(
                v44,
                (Il2CppObject *)this,
                (intptr_t)Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__,
                0LL);
              if ( screenTouchInfomationComponent )
              {
                ScreenTouchInformationComponent__Setup(screenTouchInfomationComponent, v44, 0LL);
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
        sub_1B8880C(effectObject, v17);
      }
      UnityEngine_Transform__set_localEulerAngles(v28, *(UnityEngine_Vector3_o *)&v30, 0LL);
    }
    if ( v45.fields.hasValue && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_36;
      v33 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v50.fields.hasValue = &v45;
      *(_QWORD *)&v50.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v35 = System_Nullable_Vector3___get_Value(v50, v34);
      if ( !v33 )
        goto LABEL_36;
      UnityEngine_Transform__set_localScale(v33, *(UnityEngine_Vector3_o *)&v35, 0LL);
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
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A59106 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__);
    byte_4A59106 = 1;
  }
  commonEffect = this->fields.commonEffect;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_1B8880C(v5, v6);
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
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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

  if ( (byte_4A59109 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AnimationState_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59109 = 1;
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
      v10 = Enumerator;
      if ( !Enumerator )
        sub_1B8880C(0LL, v9);
      klass = Enumerator->klass;
      v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              v10,
              *(_QWORD *)(p_method + 8)) & 1) != 0 )
      {
        v16 = v10->klass;
        v17 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
        {
          v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
          while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v17;
            v18 += 2;
            if ( !v17 )
              goto LABEL_21;
          }
          v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
        }
        else
        {
LABEL_21:
          v19 = sub_1BDA590(v10, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v20 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                                v10,
                                                *(_QWORD *)(v19 + 8));
        if ( !v20 )
          sub_1B8880C(0LL, v21);
        if ( v20->klass == UnityEngine_AnimationState_TypeInfo )
        {
          clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v20, 0LL);
          if ( clip )
          {
            name = UnityEngine_Object__get_name(clip, 0LL);
            goto LABEL_28;
          }
        }
        else
        {
          sub_1B88ACC(v20);
        }
        sub_1B8880C(clip, v23);
      }
LABEL_28:
      v24 = sub_1B886EC(v10, System_IDisposable_TypeInfo);
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
          v29 = sub_1BDA590(v24, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
      }
      Item = UnityEngine_Animation__get_Item(animation, name, 0LL);
      if ( Item )
        return UnityEngine_AnimationState__get_normalizedTime(Item, 0LL) >= 1.0;
LABEL_39:
      sub_1B8880C(Item, v7);
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

  if ( (byte_4A59107 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
    byte_4A59107 = 1;
  }
  v3 = sub_1B887FC(WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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

  if ( (byte_4A59108 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59108 = 1;
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
    UnityEngine_Object__Destroy_69459380(v5, 0LL);
    *p_effectObject = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectObject, 0, v6, v7);
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
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *effectObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Object_o *commonEffect; // x20
  struct CommonEffectComponent_o *v8; // x20
  System_Action_o *v9; // x21

  if ( (byte_4A59105 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__);
    byte_4A59105 = 1;
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
    v6 = this->fields.effectObject;
    if ( !v6 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v6, 1, 0LL);
  }
  this->fields.animationPlay = 0;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
  {
    v8 = this->fields.commonEffect;
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
LABEL_16:
    sub_1B8880C(v6, v5);
  }
}


void __fastcall WarBoardTapWaitEffectPerformance____ctor_b__6_0(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4A5910A & 1) == 0 )
  {
    sub_1B885B0(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
    byte_4A5910A = 1;
  }
  v3 = Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__;
  if ( (*((_BYTE *)Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  int32_t _1__state; // w8
  struct WarBoardTapWaitEffectPerformance_o *_4__this; // x20
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Object_o *commonEffect; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  ServantStatusBattleListViewItem_o *v15; // x19

  v4 = this;
  if ( (byte_4A5910B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5910B = 1;
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
      ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
      v4->fields._mAnimation_5__2 = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48719376;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v4->fields._mAnimation_5__2,
        (int32_t)ComponentInChildren_object__48719376,
        v8,
        v9);
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
      sub_1B88554(p__2__current, 0, v11, v12);
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
    sub_1B8880C(this, method);
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_24;
LABEL_20:
  if ( _4__this->fields.isTouch )
    return 0;
  v4->fields.__2__current = 0LL;
  v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B88554(v15, 0, (int32_t)v2, v3);
  *(_DWORD *)&v15[-1].fields.isMine = 2;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardTapWaitEffectPerformance__Execute_d__10_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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