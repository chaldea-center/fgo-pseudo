// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardOverlayEffectPerformance___ctor(
        WarBoardOverlayEffectPerformance_o *this,
        UnityEngine_Transform_o *parent,
        UnityEngine_GameObject_o *effectPrefab,
        System_Nullable_Vector3__o position,
        System_Nullable_Vector3__o angle,
        System_Nullable_Vector3__o scale,
        bool isLocal,
        bool isDestroy,
        System_String_o *text,
        const MethodInfo *method)
{
  bool hasValue; // w21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x1
  Il2CppObject *v34; // x0
  struct UnityEngine_GameObject_o **p_effectObject; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  UnityEngine_GameObject_o *effectObject; // x0
  Il2CppObject *Component_object; // x0
  struct CommonEffectComponent_o **p_commonEffect; // x22
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_36C2D44 *v53; // x2
  int v54; // s0
  UnityEngine_Transform_o *v57; // x21
  const MethodInfo_36C2D44 *v58; // x2
  int v59; // s0
  UnityEngine_Transform_o *v62; // x21
  const MethodInfo_36C2D44 *v63; // x2
  int v64; // s0
  Il2CppObject *v67; // x0
  struct WarBoardOverlayEffectComponent_o **p_overlayEffect; // x21
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct WarBoardOverlayEffectComponent_o *v75; // x8
  UnityEngine_GameObject_o *v76; // x8
  CommonUI_o *v77; // x20
  Il2CppObject *v78; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInformationComponent; // x20
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  ScreenTouchInformationComponent_o *screenTouchInformationComponent; // x21
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  System_Action_o *v90; // x22
  System_Nullable_Vector3__o v91; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v92; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v93; // [xsp+20h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v94; // 0:x0.16
  System_Nullable_Vector3__o v95; // 0:x0.16
  System_Nullable_Vector3__o v96; // 0:x0.16

  v93 = position;
  v92 = angle;
  v91 = scale;
  hasValue = position.fields.hasValue;
  if ( (byte_4B1407C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, parent, effectPrefab);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___, v18, v19);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_HasValue__, v20, v21);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_Value__, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924656, v24, v25);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v28, v29);
    sub_1BCA7E0(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__, v30, v31);
    byte_4B1407C = 1;
  }
  this->fields.screenTouchInfoDispWaitTime = 2.0;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)parent);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effectPrefab, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
    v34 = UnityEngine_Object__Instantiate_object__49903928(
            (Il2CppObject *)effectPrefab,
            parent,
            0,
            (const MethodInfo_2F97938 *)Method_UnityEngine_Object_Instantiate_GameObject____76924656);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v34;
    p_effectObject = &this->fields.effectObject;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectObject, (int64_t)v34, v36, v37, v38, v39, v40, v41);
    effectObject = this->fields.effectObject;
    if ( !effectObject )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         effectObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = (struct CommonEffectComponent_o *)Component_object;
    p_commonEffect = &this->fields.commonEffect;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.commonEffect,
      (int64_t)Component_object,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.commonEffect, 0LL, 0LL) )
    {
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_42;
      CommonEffectComponent__Init((CommonEffectComponent_o *)effectObject, 0, 1, 0LL);
      if ( hasValue )
      {
        effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
        if ( !*p_commonEffect )
          goto LABEL_42;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
        *(_QWORD *)&v94.fields.hasValue = &v93;
        *(_QWORD *)&v94.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
        *(UnityEngine_Vector3_o *)&v54 = System_Nullable_Vector3___get_Value(v94, v53);
        if ( !transform )
          goto LABEL_42;
        if ( isLocal )
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v54, 0LL);
        else
          UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v54, 0LL);
      }
      if ( !v92.fields.hasValue )
        goto LABEL_22;
      effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
      if ( !*p_commonEffect )
        goto LABEL_42;
      v57 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
      *(_QWORD *)&v95.fields.hasValue = &v92;
      *(_QWORD *)&v95.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v59 = System_Nullable_Vector3___get_Value(v95, v58);
      if ( !v57 )
        goto LABEL_42;
      if ( isLocal )
      {
        UnityEngine_Transform__set_localEulerAngles(v57, *(UnityEngine_Vector3_o *)&v59, 0LL);
LABEL_22:
        if ( v91.fields.hasValue && isLocal )
        {
          effectObject = (UnityEngine_GameObject_o *)*p_commonEffect;
          if ( !*p_commonEffect )
            goto LABEL_42;
          v62 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)effectObject, 0LL);
          *(_QWORD *)&v96.fields.hasValue = &v91;
          *(_QWORD *)&v96.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
          *(UnityEngine_Vector3_o *)&v64 = System_Nullable_Vector3___get_Value(v96, v63);
          if ( !v62 )
            goto LABEL_42;
          UnityEngine_Transform__set_localScale(v62, *(UnityEngine_Vector3_o *)&v64, 0LL);
        }
        goto LABEL_28;
      }
      UnityEngine_Transform__set_eulerAngles(v57, *(UnityEngine_Vector3_o *)&v59, 0LL);
    }
LABEL_28:
    effectObject = *p_effectObject;
    if ( *p_effectObject )
    {
      v67 = UnityEngine_GameObject__GetComponent_object_(
              effectObject,
              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
      this->fields.overlayEffect = (struct WarBoardOverlayEffectComponent_o *)v67;
      p_overlayEffect = &this->fields.overlayEffect;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.overlayEffect, (int64_t)v67, v69, v70, v71, v72, v73, v74);
      effectObject = (UnityEngine_GameObject_o *)this->fields.overlayEffect;
      if ( effectObject )
      {
        WarBoardOverlayEffectComponent__Init((WarBoardOverlayEffectComponent_o *)effectObject, text, 0LL);
        v75 = *p_overlayEffect;
        if ( *p_overlayEffect )
        {
          this->fields.isLoop = v75->fields.isLoop;
          if ( !v75->fields.kind )
          {
            effectObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v76 = *p_effectObject;
            if ( !*p_effectObject )
              goto LABEL_42;
            v77 = (CommonUI_o *)effectObject;
            effectObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v76, 0LL);
            if ( !v77 )
              goto LABEL_42;
            effectObject = CommonUI__CreateScreeenTouchInfo(v77, (UnityEngine_Transform_o *)effectObject, 1, 0LL);
            if ( !effectObject )
              goto LABEL_42;
            v78 = UnityEngine_GameObject__GetComponent_object_(
                    effectObject,
                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
            this->fields.screenTouchInformationComponent = (struct ScreenTouchInformationComponent_o *)v78;
            p_screenTouchInformationComponent = &this->fields.screenTouchInformationComponent;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.screenTouchInformationComponent,
              (int64_t)v78,
              v80,
              v81,
              v82,
              v83,
              v84,
              v85);
            this->fields.isTouch = 0;
            screenTouchInformationComponent = this->fields.screenTouchInformationComponent;
            v90 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v87, v88, v89);
            System_Action___ctor(
              v90,
              (Il2CppObject *)this,
              Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__,
              0LL);
            if ( !screenTouchInformationComponent )
              goto LABEL_42;
            ScreenTouchInformationComponent__Setup(screenTouchInformationComponent, v90, 0LL);
            effectObject = (UnityEngine_GameObject_o *)*p_screenTouchInformationComponent;
            if ( !*p_screenTouchInformationComponent )
              goto LABEL_42;
            effectObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObject, 0LL);
            if ( !effectObject )
              goto LABEL_42;
            UnityEngine_GameObject__SetActive(effectObject, 0, 0LL);
          }
          effectObject = this->fields.effectObject;
          this->fields.isDestroy = isDestroy;
          if ( effectObject )
          {
            UnityEngine_GameObject__SetActive(effectObject, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_42:
    sub_1BCAA3C(effectObject, v42);
  }
}


void __fastcall WarBoardOverlayEffectPerformance__AnimationEndCallback(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  this->fields.animationPlay = 0;
}


void __fastcall WarBoardOverlayEffectPerformance__AnimationEndStartCallback(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  struct CommonEffectComponent_o *commonEffect; // x0

  commonEffect = this->fields.commonEffect;
  if ( !commonEffect )
    sub_1BCAA3C(0LL, method);
  ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, Il2CppMethodPointer))commonEffect->klass->vtable._7_ForceLoop.method)(
    commonEffect,
    0LL,
    commonEffect->klass->vtable._8_Stop.methodPtr);
}


bool __fastcall WarBoardOverlayEffectPerformance__CheckAnimationEnd(
        WarBoardOverlayEffectPerformance_o *this,
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

  if ( (byte_4B14080 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationState_TypeInfo, animation, method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B14080 = 1;
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


bool __fastcall WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(
        WarBoardOverlayEffectPerformance_o *this,
        SimpleAnimation_o *simpleAnimation,
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x20
  void *State; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *States; // x21
  WarBoardOverlayEffectPerformance___c_c *v26; // x8
  System_Func_object__object__o *_9__16_0; // x22
  Il2CppObject *v28; // x23
  struct WarBoardOverlayEffectPerformance___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  __int64 v37; // x8
  void *v38; // x19
  __int64 v39; // x9
  SimpleAnimation_State_c **v40; // x10
  __int64 v41; // x0

  if ( (byte_4B14081 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___, simpleAnimation, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_string___, v5, v6);
    sub_1BCA7E0(&System_Func_SimpleAnimation_State__string__TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__, v13, v14);
    sub_1BCA7E0(&WarBoardOverlayEffectPerformance___c_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B14081 = 1;
  }
  if ( !this->fields.animationPlay )
    return 1;
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, simpleAnimation);
  State = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)State & 1) == 0 )
    return 1;
  if ( !simpleAnimation )
    goto LABEL_26;
  States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(simpleAnimation, 0LL);
  v26 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  if ( !WarBoardOverlayEffectPerformance___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOverlayEffectPerformance___c_TypeInfo, v22);
    v26 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  }
  _9__16_0 = (System_Func_object__object__o *)v26->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v22);
      v26 = WarBoardOverlayEffectPerformance___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__16_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_SimpleAnimation_State__string__TypeInfo,
                                                  v22,
                                                  v23,
                                                  v24);
    System_Func_object__object____ctor(
      _9__16_0,
      v28,
      Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__,
      0LL);
    static_fields = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_SimpleAnimation_State__string__o *)_9__16_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               States,
                                                               (System_Func_TSource__TResult__o *)_9__16_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
  State = System_Linq_Enumerable__ToArray_object_(
            v36,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !State )
    goto LABEL_26;
  if ( *((int *)State + 6) >= 1 )
    v19 = (System_String_o *)*((_QWORD *)State + 4);
  State = SimpleAnimation__GetState(simpleAnimation, v19, 0LL);
  if ( !State )
LABEL_26:
    sub_1BCAA3C(State, v21);
  v37 = *(_QWORD *)State;
  v38 = State;
  v39 = *(unsigned __int16 *)(*(_QWORD *)State + 302LL);
  if ( *(_WORD *)(*(_QWORD *)State + 302LL) )
  {
    v40 = (SimpleAnimation_State_c **)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v39;
      v40 += 2;
      if ( !v39 )
        goto LABEL_22;
    }
    v41 = v37 + 16LL * (*(_DWORD *)v40 + 5) + 312;
  }
  else
  {
LABEL_22:
    v41 = sub_1C1C7C0(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  return (*(float (__fastcall **)(void *, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8)) >= 1.0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardOverlayEffectPerformance__Execute(
        WarBoardOverlayEffectPerformance_o *this,
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

  if ( (byte_4B1407E & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo, method, v2);
    byte_4B1407E = 1;
  }
  v5 = sub_1BCAA2C(WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardOverlayEffectPerformance__OnEnd(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4B1407F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1407F = 1;
  }
  p_effectObject = &this->fields.effectObject;
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) && this->fields.isDestroy )
  {
    if ( !*p_effectObject )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( !this->fields.isLoop )
    {
      v8 = *p_effectObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v8, 0LL);
      *p_effectObject = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectObject, 0LL, v9, v10, v11, v12, v13, v14);
    }
  }
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardOverlayEffectPerformance__OnStart(
        WarBoardOverlayEffectPerformance_o *this,
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

  if ( (byte_4B1407D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__, v6, v7);
    byte_4B1407D = 1;
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
      Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__,
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


void __fastcall WarBoardOverlayEffectPerformance____ctor_b__9_0(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14082 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B14082 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isTouch = 1;
}


void __fastcall WarBoardOverlayEffectPerformance__Execute_d__13___ctor(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardOverlayEffectPerformance__Execute_d__13__MoveNext(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  WarBoardOverlayEffectPerformance__Execute_d__13_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct WarBoardOverlayEffectPerformance_o *_4__this; // x20
  struct WarBoardOverlayEffectComponent_o *overlayEffect; // x8
  int32_t kind; // w8
  float v20; // s0
  float waitTime_5__2; // s8
  PartyOrganizationUtility_o *v22; // x19
  bool result; // w0
  float v24; // s8
  struct WarBoardOverlayEffectComponent_o *v25; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  int v27; // w8
  UnityEngine_Object_o *commonEffect; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  struct CommonEffectComponent_o *v32; // x21
  System_Action_o *v33; // x22
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  const MethodInfo *v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  v8 = this;
  if ( (byte_4B14085 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)sub_1BCA7E0(
                                                                  &Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
                                                                  v15,
                                                                  v16);
    byte_4B14085 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v8->fields._waitTime_5__2 = 0.0;
      if ( !_4__this )
        goto LABEL_43;
      overlayEffect = _4__this->fields.overlayEffect;
      if ( !overlayEffect )
        goto LABEL_43;
      kind = overlayEffect->fields.kind;
      v20 = 0.0;
      if ( kind )
      {
        if ( kind == 1 )
        {
LABEL_15:
          v25 = _4__this->fields.overlayEffect;
          if ( !v25 )
            goto LABEL_43;
          if ( v20 < v25->fields.waitTime )
          {
            v8->fields.__2__current = 0LL;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(p__2__current, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
            v27 = 3;
            goto LABEL_42;
          }
        }
      }
      else
      {
LABEL_10:
        if ( v20 < _4__this->fields.screenTouchInfoDispWaitTime )
        {
          v8->fields.__2__current = 0LL;
          v22 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(v22, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
          result = 1;
          *(_DWORD *)&v22[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
        this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.screenTouchInformationComponent;
        if ( !this )
          goto LABEL_43;
        this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0LL);
        if ( !this )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_23:
        if ( !_4__this->fields.isTouch )
        {
          v8->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(p__2__current, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
          v27 = 2;
          goto LABEL_42;
        }
        this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.screenTouchInformationComponent;
        if ( !this
          || (this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL)) == 0LL )
        {
LABEL_43:
          sub_1BCAA3C(this, method);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
        return 0;
      v32 = _4__this->fields.commonEffect;
      v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
      System_Action___ctor(
        v33,
        (Il2CppObject *)_4__this,
        Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
        0LL);
      if ( !v32 )
        goto LABEL_43;
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v32->klass->vtable._9_ForceStop.method)(
        v32,
        0LL,
        v33,
        v32->klass->vtable._10_PlayDestroyEffectCallback.methodPtr);
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
      if ( !this )
        goto LABEL_43;
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
      if ( !this )
        goto LABEL_43;
      ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
      v8->fields._mAnimation_5__3 = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49322392;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._mAnimation_5__3,
        (int64_t)ComponentInChildren_object__49322392,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)_4__this->fields.commonEffect;
      if ( !this )
        goto LABEL_43;
      this = (WarBoardOverlayEffectPerformance__Execute_d__13_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
      if ( !this )
        goto LABEL_43;
      v41 = UnityEngine_Component__GetComponentInChildren_object__49322392(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
      v8->fields._mSimpleAnimation_5__4 = (struct SimpleAnimation_o *)v41;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._mSimpleAnimation_5__4,
        (int64_t)v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
LABEL_36:
      if ( WarBoardOverlayEffectPerformance__CheckAnimationEnd(_4__this, v8->fields._mAnimation_5__3, v2)
        && WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(_4__this, v8->fields._mSimpleAnimation_5__4, v48) )
      {
        v8->fields._mAnimation_5__3 = 0LL;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._mAnimation_5__3,
          0LL,
          (int64_t)v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        v8->fields._mSimpleAnimation_5__4 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._mSimpleAnimation_5__4, 0LL, v54, v55, v56, v57, v58, v59);
        return 0;
      }
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, (int64_t)v48, v49, v50, v51, v52, v53);
      v27 = 4;
LABEL_42:
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v27;
      return 1;
    case 1:
      waitTime_5__2 = v8->fields._waitTime_5__2;
      v8->fields.__1__state = -1;
      v20 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
      v8->fields._waitTime_5__2 = v20;
      if ( _4__this )
        goto LABEL_10;
      goto LABEL_43;
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      goto LABEL_23;
    case 3:
      v24 = v8->fields._waitTime_5__2;
      v8->fields.__1__state = -1;
      v20 = v24 + UnityEngine_Time__get_deltaTime(0LL);
      v8->fields._waitTime_5__2 = v20;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_43;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      goto LABEL_36;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall WarBoardOverlayEffectPerformance__Execute_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardOverlayEffectPerformance__Execute_d__13__System_Collections_IEnumerator_Reset(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
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
  v8 = sub_1BCA7F4(&Method_WarBoardOverlayEffectPerformance__Execute_d__13_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall WarBoardOverlayEffectPerformance__Execute_d__13__System_Collections_IEnumerator_get_Current(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardOverlayEffectPerformance__Execute_d__13__System_IDisposable_Dispose(
        WarBoardOverlayEffectPerformance__Execute_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardOverlayEffectPerformance___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B14083 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardOverlayEffectPerformance___c_TypeInfo, v1, v2);
    byte_4B14083 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardOverlayEffectPerformance___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields->__9 = (struct WarBoardOverlayEffectPerformance___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardOverlayEffectPerformance___c___ctor(
        WarBoardOverlayEffectPerformance___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall WarBoardOverlayEffectPerformance___c___CheckSimpleAnimationEnd_b__16_0(
        WarBoardOverlayEffectPerformance___c_o *this,
        SimpleAnimation_State_o *state,
        const MethodInfo *method)
{
  SimpleAnimation_State_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B14084 & 1) == 0 )
  {
    this = (WarBoardOverlayEffectPerformance___c_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, state, method);
    byte_4B14084 = 1;
  }
  if ( !state )
    sub_1BCAA3C(this, state);
  klass = state->klass;
  v5 = *(unsigned __int16 *)(&state->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&state->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(state, SimpleAnimation_State_TypeInfo, 9LL);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                              state,
                              *(_QWORD *)(p_method + 8));
}