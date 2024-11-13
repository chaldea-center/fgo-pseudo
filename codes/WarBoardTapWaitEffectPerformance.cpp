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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *v31; // x0
  UnityEngine_GameObject_o **p_effectObject; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_36C2D44 *v50; // x2
  int v51; // s0
  UnityEngine_Transform_o *v54; // x21
  const MethodInfo_36C2D44 *v55; // x2
  int v56; // s0
  UnityEngine_Transform_o *v59; // x21
  const MethodInfo_36C2D44 *v60; // x2
  int v61; // s0
  CommonUI_o *v64; // x21
  Il2CppObject *v65; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfomationComponent; // x21
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  ScreenTouchInformationComponent_o *screenTouchInfomationComponent; // x22
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Action_o *v77; // x23
  System_Nullable_Vector3__o v78; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v79; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v80; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v81; // 0:x0.16
  System_Nullable_Vector3__o v82; // 0:x0.16
  System_Nullable_Vector3__o v83; // 0:x0.16

  v80 = position;
  v79 = angle;
  v78 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_4B1408F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, parent, effetctPrefab);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15, v16);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_HasValue__, v17, v18);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_Value__, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924656, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__, v27, v28);
    byte_4B1408F = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effetctPrefab, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    v31 = UnityEngine_Object__Instantiate_object__49903928(
            (Il2CppObject *)effetctPrefab,
            parent,
            0,
            (const MethodInfo_2F97938 *)Method_UnityEngine_Object_Instantiate_GameObject____76924656);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v31;
    p_effectObject = &this->fields.effectObject;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectObject, (int64_t)v31, v33, v34, v35, v36, v37, v38);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.commonEffect,
      (int64_t)Component_object,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
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
      *(_QWORD *)&v81.fields.hasValue = &v80;
      *(_QWORD *)&v81.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v51 = System_Nullable_Vector3___get_Value(v81, v50);
      if ( !transform )
        goto LABEL_36;
      if ( isLocal )
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v51, 0LL);
      else
        UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v51, 0LL);
    }
    if ( v79.fields.hasValue )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_36;
      v54 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v82.fields.hasValue = &v79;
      *(_QWORD *)&v82.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v56 = System_Nullable_Vector3___get_Value(v82, v55);
      if ( !v54 )
        goto LABEL_36;
      if ( !isLocal )
      {
        UnityEngine_Transform__set_eulerAngles(v54, *(UnityEngine_Vector3_o *)&v56, 0LL);
LABEL_27:
        effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( *p_effectObject )
        {
          v64 = (CommonUI_o *)effectObject;
          effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(*p_effectObject, 0LL);
          if ( v64 )
          {
            effectObject = CommonUI__CreateScreeenTouchInfo(v64, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( effectObject )
            {
              v65 = UnityEngine_GameObject__GetComponent_object_(
                      effectObject,
                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
              this->fields.screenTouchInfomationComponent = (struct ScreenTouchInformationComponent_o *)v65;
              p_screenTouchInfomationComponent = &this->fields.screenTouchInfomationComponent;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.screenTouchInfomationComponent,
                (int64_t)v65,
                v67,
                v68,
                v69,
                v70,
                v71,
                v72);
              this->fields.isTouch = 0;
              screenTouchInfomationComponent = this->fields.screenTouchInfomationComponent;
              v77 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v74, v75, v76);
              System_Action___ctor(
                v77,
                (Il2CppObject *)this,
                (intptr_t)Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__,
                0LL);
              if ( screenTouchInfomationComponent )
              {
                ScreenTouchInformationComponent__Setup(screenTouchInfomationComponent, v77, 0LL);
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
        sub_1BCAA3C(effectObject, v39);
      }
      UnityEngine_Transform__set_localEulerAngles(v54, *(UnityEngine_Vector3_o *)&v56, 0LL);
    }
    if ( v78.fields.hasValue && isLocal )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_36;
      v59 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v83.fields.hasValue = &v78;
      *(_QWORD *)&v83.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v61 = System_Nullable_Vector3___get_Value(v83, v60);
      if ( !v59 )
        goto LABEL_36;
      UnityEngine_Transform__set_localScale(v59, *(UnityEngine_Vector3_o *)&v61, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct CommonEffectComponent_o *commonEffect; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B14091 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, v5, v6);
    byte_4B14091 = 1;
  }
  commonEffect = this->fields.commonEffect;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarBoardTapWaitEffectPerformance_AnimantionEndCallback__, 0LL);
  if ( !commonEffect )
    sub_1BCAA3C(v9, v10);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *name; // x20
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v15; // x1
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v17; // x1
  System_Collections_IEnumerator_o *v18; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v24; // x8
  __int64 v25; // x9
  System_Collections_IEnumerator_c **v26; // x10
  __int64 v27; // x0
  UnityEngine_AnimationState_o *v28; // x0
  __int64 v29; // x1
  UnityEngine_Object_o *clip; // x0
  __int64 v31; // x1
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x21
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0

  if ( (byte_4B14094 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationState_TypeInfo, animation, method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B14094 = 1;
  }
  if ( this->fields.animationPlay )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, animation);
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)animation,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !animation )
        goto LABEL_39;
      Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
      v18 = Enumerator;
      if ( !Enumerator )
        sub_1BCAA3C(0LL, v17);
      klass = Enumerator->klass;
      v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          p_offset += 4;
          if ( !v20 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              v18,
              *(_QWORD *)(p_method + 8)) & 1) != 0 )
      {
        v24 = v18->klass;
        v25 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
        {
          v26 = (System_Collections_IEnumerator_c **)&v24->_1.interfaceOffsets->offset;
          while ( *(v26 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v25;
            v26 += 2;
            if ( !v25 )
              goto LABEL_21;
          }
          v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 1].method;
        }
        else
        {
LABEL_21:
          v27 = sub_1C1C7C0(v18, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v28 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v27)(
                                                v18,
                                                *(_QWORD *)(v27 + 8));
        if ( !v28 )
          sub_1BCAA3C(0LL, v29);
        if ( v28->klass == UnityEngine_AnimationState_TypeInfo )
        {
          clip = (UnityEngine_Object_o *)UnityEngine_AnimationState__get_clip(v28, 0LL);
          if ( clip )
          {
            name = UnityEngine_Object__get_name(clip, 0LL);
            goto LABEL_28;
          }
        }
        else
        {
          sub_1BCACFC(v28);
        }
        sub_1BCAA3C(clip, v31);
      }
LABEL_28:
      v32 = sub_1BCA91C(v18, System_IDisposable_TypeInfo);
      if ( v32 )
      {
        v33 = *(_QWORD *)v32;
        v34 = v32;
        v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
        {
          v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
          {
            --v35;
            v36 += 4;
            if ( !v35 )
              goto LABEL_33;
          }
          v37 = v33 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_33:
          v37 = sub_1C1C7C0(v32, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
      }
      Item = UnityEngine_Animation__get_Item(animation, name, 0LL);
      if ( Item )
        return UnityEngine_AnimationState__get_normalizedTime(Item, 0LL) >= 1.0;
LABEL_39:
      sub_1BCAA3C(Item, v15);
    }
  }
  return 1;
}


System_Collections_IEnumerator_o *__fastcall WarBoardTapWaitEffectPerformance__Execute(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B14092 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo, method, v2);
    byte_4B14092 = 1;
  }
  v5 = sub_1BCAA2C(WarBoardTapWaitEffectPerformance__Execute_d__10_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardTapWaitEffectPerformance__OnEnd(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4B14093 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14093 = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) && this->fields.isDestroy )
  {
    v7 = (UnityEngine_Object_o *)*p_effectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_70154244(v7, 0LL);
    *p_effectObject = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectObject, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *effectObject; // x20
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Object_o *commonEffect; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  struct CommonEffectComponent_o *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_4B14090 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_WarBoardTapWaitEffectPerformance_AnimantionEndStartCallback__, v6, v7);
    byte_4B14090 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) )
  {
    v11 = this->fields.effectObject;
    if ( !v11 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v11, 1, 0LL);
  }
  this->fields.animationPlay = 0;
  commonEffect = (UnityEngine_Object_o *)this->fields.commonEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
  {
    v16 = this->fields.commonEffect;
    v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
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
LABEL_16:
    sub_1BCAA3C(v11, v10);
  }
}


void __fastcall WarBoardTapWaitEffectPerformance____ctor_b__6_0(
        WarBoardTapWaitEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B14095 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__, method, v2);
    byte_4B14095 = 1;
  }
  v4 = Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__;
  if ( (*((_BYTE *)Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_WarBoardTapWaitEffectPerformance___ctor_b__6_0__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  WarBoardTapWaitEffectPerformance__Execute_d__10_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  struct WarBoardTapWaitEffectPerformance_o *_4__this; // x20
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  UnityEngine_Object_o *commonEffect; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  bool result; // w0
  PartyOrganizationUtility_o *p__2__current; // x19
  PartyOrganizationUtility_o *v30; // x19

  v8 = this;
  if ( (byte_4B14096 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method, v2);
    this = (WarBoardTapWaitEffectPerformance__Execute_d__10_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B14096 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state != 2 )
  {
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
      ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
      v8->fields._mAnimation_5__2 = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49322392;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._mAnimation_5__2,
        (int64_t)ComponentInChildren_object__49322392,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      if ( !UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
        return 0;
    }
    if ( !WarBoardTapWaitEffectPerformance__CheckAnimationEnd(_4__this, v8->fields._mAnimation_5__2, v2) )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, v22, v23, v24, v25, v26, v27);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
    sub_1BCAA3C(this, method);
  }
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_24;
LABEL_20:
  if ( _4__this->fields.isTouch )
    return 0;
  v8->fields.__2__current = 0LL;
  v30 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(v30, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
  *(_DWORD *)&v30[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardTapWaitEffectPerformance__Execute_d__10_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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