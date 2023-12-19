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
  __int64 v10; // x21
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  Il2CppObject *v23; // x0
  UnityEngine_GameObject_o **p_effectObject; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  CommonEffectComponent_o **p_commonEffect; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo_29CF794 *v40; // x2
  int v41; // s0
  UnityEngine_Transform_o *v44; // x21
  const MethodInfo_29CF794 *v45; // x2
  int v46; // s0
  UnityEngine_Transform_o *v49; // x21
  const MethodInfo_29CF794 *v50; // x2
  int v51; // s0
  srcLineSprite_o *v54; // x0
  struct WarBoardOverlayEffectComponent_o **p_overlayEffect; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x2
  struct WarBoardOverlayEffectComponent_o *v63; // x8
  WebViewManager_o *Instance; // x0
  UnityEngine_GameObject_o *v65; // x8
  CommonUI_o *v66; // x20
  UnityEngine_Transform_o *v67; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  struct ScreenTouchInformationComponent_o *v69; // x0
  UnityEngine_Component_o **p_screenTouchInformationComponent; // x20
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  ScreenTouchInformationComponent_o *screenTouchInformationComponent; // x21
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_Action_o *v82; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *effectObject; // x0
  System_Nullable_Vector3__o v85; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v86; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v87; // [xsp+20h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v88; // 0:x0.16
  System_Nullable_Vector3__o v89; // 0:x0.16
  System_Nullable_Vector3__o v90; // 0:x0.16

  v10 = *(_QWORD *)&position.fields.value.fields.z;
  v87 = position;
  v86 = angle;
  v85 = scale;
  if ( (byte_40F859E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, parent);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___, v16);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_HasValue__, v17);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_Value__, v18);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874912, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B16FFC(&Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__, v22);
    byte_40F859E = 1;
  }
  this->fields.screenTouchInfoDispWaitTime = 2.0;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)effectPrefab, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v23 = UnityEngine_Object__Instantiate_object__27124684(
            (Il2CppObject *)effectPrefab,
            parent,
            0,
            (const MethodInfo_19DE3CC *)Method_UnityEngine_Object_Instantiate_GameObject____66874912);
    this->fields.effectObject = (struct UnityEngine_GameObject_o *)v23;
    p_effectObject = &this->fields.effectObject;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.effectObject,
      (System_Int32_array **)v23,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    if ( !this->fields.effectObject )
      goto LABEL_44;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  this->fields.effectObject,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.commonEffect = Component_srcLineSprite;
    p_commonEffect = &this->fields.commonEffect;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.commonEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.commonEffect, 0LL, 0LL) )
    {
      if ( !*p_commonEffect )
        goto LABEL_44;
      CommonEffectComponent__Init(*p_commonEffect, 0, 1, 0LL);
      if ( (v10 & 0xFF00000000LL) != 0 )
      {
        if ( !*p_commonEffect )
          goto LABEL_44;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)*p_commonEffect, 0LL);
        *(_QWORD *)&v88.fields.value.fields.x = &v87;
        *(_QWORD *)&v88.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
        *(UnityEngine_Vector3_o *)&v41 = System_Nullable_Vector3___get_Value(v88, v40);
        if ( !transform )
          goto LABEL_44;
        if ( isLocal )
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v41, 0LL);
        else
          UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v41, 0LL);
      }
      if ( !v86.fields.has_value )
        goto LABEL_24;
      if ( !*p_commonEffect )
        goto LABEL_44;
      v44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)*p_commonEffect, 0LL);
      *(_QWORD *)&v89.fields.value.fields.x = &v86;
      *(_QWORD *)&v89.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
      *(UnityEngine_Vector3_o *)&v46 = System_Nullable_Vector3___get_Value(v89, v45);
      if ( !v44 )
        goto LABEL_44;
      if ( isLocal )
      {
        UnityEngine_Transform__set_localEulerAngles(v44, *(UnityEngine_Vector3_o *)&v46, 0LL);
LABEL_24:
        if ( v85.fields.has_value && isLocal )
        {
          if ( !*p_commonEffect )
            goto LABEL_44;
          v49 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)*p_commonEffect, 0LL);
          *(_QWORD *)&v90.fields.value.fields.x = &v85;
          *(_QWORD *)&v90.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
          *(UnityEngine_Vector3_o *)&v51 = System_Nullable_Vector3___get_Value(v90, v50);
          if ( !v49 )
            goto LABEL_44;
          UnityEngine_Transform__set_localScale(v49, *(UnityEngine_Vector3_o *)&v51, 0LL);
        }
        goto LABEL_30;
      }
      UnityEngine_Transform__set_eulerAngles(v44, *(UnityEngine_Vector3_o *)&v46, 0LL);
    }
LABEL_30:
    if ( *p_effectObject )
    {
      v54 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
              *p_effectObject,
              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardOverlayEffectComponent___);
      this->fields.overlayEffect = (struct WarBoardOverlayEffectComponent_o *)v54;
      p_overlayEffect = &this->fields.overlayEffect;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.overlayEffect,
        (System_Int32_array **)v54,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      if ( this->fields.overlayEffect )
      {
        WarBoardOverlayEffectComponent__Init(this->fields.overlayEffect, text, v62);
        v63 = *p_overlayEffect;
        if ( *p_overlayEffect )
        {
          this->fields.isLoop = v63->fields.isLoop;
          if ( !v63->fields.kind )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v65 = *p_effectObject;
            if ( !*p_effectObject )
              goto LABEL_44;
            v66 = (CommonUI_o *)Instance;
            v67 = UnityEngine_GameObject__get_transform(v65, 0LL);
            if ( !v66 )
              goto LABEL_44;
            ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(v66, v67, 1, 0LL);
            if ( !ScreeenTouchInfo )
              goto LABEL_44;
            v69 = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                ScreeenTouchInfo,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
            this->fields.screenTouchInformationComponent = v69;
            p_screenTouchInformationComponent = (UnityEngine_Component_o **)&this->fields.screenTouchInformationComponent;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.screenTouchInformationComponent,
              (System_Int32_array **)v69,
              v71,
              v72,
              v73,
              v74,
              v75,
              v76);
            this->fields.isTouch = 0;
            screenTouchInformationComponent = this->fields.screenTouchInformationComponent;
            v82 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v78, v79, v80, v81);
            System_Action___ctor(
              v82,
              (Il2CppObject *)this,
              Method_WarBoardOverlayEffectPerformance___ctor_b__9_0__,
              0LL);
            if ( !screenTouchInformationComponent )
              goto LABEL_44;
            ScreenTouchInformationComponent__Setup(screenTouchInformationComponent, v82, 0LL);
            if ( !*p_screenTouchInformationComponent )
              goto LABEL_44;
            gameObject = UnityEngine_Component__get_gameObject(*p_screenTouchInformationComponent, 0LL);
            if ( !gameObject )
              goto LABEL_44;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
LABEL_44:
    sub_B170D4();
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
    sub_B170D4();
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

  if ( (byte_40F85A2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AnimationState_TypeInfo, animation);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40F85A2 = 1;
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


bool __fastcall WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(
        WarBoardOverlayEffectPerformance_o *this,
        SimpleAnimation_o *simpleAnimation,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_IEnumerable_TSource__o *States; // x21
  WarBoardOverlayEffectPerformance___c_c *v19; // x8
  struct WarBoardOverlayEffectPerformance___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_0; // x22
  Il2CppObject *v22; // x23
  struct WarBoardOverlayEffectPerformance___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v31; // x0
  SimpleAnimation_State_o *State; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v34; // x19
  unsigned __int64 v35; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F85A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___, simpleAnimation);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_B16FFC(&Method_System_Func_SimpleAnimation_State__string___ctor__, v6);
    sub_B16FFC(&System_Func_SimpleAnimation_State__string__TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__, v10);
    sub_B16FFC(&WarBoardOverlayEffectPerformance___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40F85A3 = 1;
  }
  if ( !this->fields.animationPlay )
    return 1;
  v13 = (System_String_o *)StringLiteral_1;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)simpleAnimation, 0LL, 0LL) )
    return 1;
  if ( !simpleAnimation )
    goto LABEL_29;
  States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(simpleAnimation, 0LL);
  v19 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  if ( (BYTE3(WarBoardOverlayEffectPerformance___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardOverlayEffectPerformance___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOverlayEffectPerformance___c_TypeInfo);
    v19 = WarBoardOverlayEffectPerformance___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__16_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                 System_Func_SimpleAnimation_State__string__TypeInfo,
                                                                                                 v14,
                                                                                                 v15,
                                                                                                 v16,
                                                                                                 v17);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__16_0,
      v22,
      Method_WarBoardOverlayEffectPerformance___c__CheckSimpleAnimationEnd_b__16_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_SimpleAnimation_State__string___ctor__);
    v23 = WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
    v23->__9__16_0 = (struct System_Func_SimpleAnimation_State__string__o *)_9__16_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v23->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               States,
                                                               (System_Func_TSource__TResult__o *)_9__16_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_SimpleAnimation_State__string___);
  v31 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v30,
          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !v31 )
    goto LABEL_29;
  if ( (int)v31->max_length >= 1 )
    v13 = (System_String_o *)v31->m_Items[0];
  State = SimpleAnimation__GetState(simpleAnimation, v13, 0LL);
  if ( !State )
LABEL_29:
    sub_B170D4();
  klass = State->klass;
  v34 = State;
  if ( *(_WORD *)&State->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v35;
      p_offset += 2;
      if ( v35 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_25:
    p_method = sub_AAFEF8(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  return (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v34, *(_QWORD *)(p_method + 8)) >= 1.0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardOverlayEffectPerformance__Execute(
        WarBoardOverlayEffectPerformance_o *this,
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

  if ( (byte_40F85A0 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo, method);
    byte_40F85A0 = 1;
  }
  v6 = sub_B170CC(WarBoardOverlayEffectPerformance__Execute_d__13_TypeInfo, method, v2, v3, v4);
  WarBoardOverlayEffectPerformance__Execute_d__13___ctor(
    (WarBoardOverlayEffectPerformance__Execute_d__13_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardOverlayEffectPerformance__OnEnd(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_effectObject; // x20
  UnityEngine_Object_o *effectObject; // x21
  UnityEngine_GameObject_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F85A1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F85A1 = 1;
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
    if ( !*p_effectObject )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(*p_effectObject, 0, 0LL);
    if ( !this->fields.isLoop )
    {
      v5 = *p_effectObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v5, 0LL);
      *p_effectObject = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.effectObject, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardOverlayEffectPerformance__OnStart(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *effectObject; // x20
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Object_o *commonEffect; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct CommonEffectComponent_o *v12; // x20
  System_Action_o *v13; // x21

  if ( (byte_40F859F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__, v4);
    byte_40F859F = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  effectObject = (UnityEngine_Object_o *)this->fields.effectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectObject, 0LL, 0LL) )
  {
    v6 = this->fields.effectObject;
    if ( !v6 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v6, 1, 0LL);
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
    v12 = this->fields.commonEffect;
    v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_WarBoardOverlayEffectPerformance_AnimationEndStartCallback__,
      0LL);
    if ( v12 )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v12->klass->vtable._6_ForceStart.method)(
        v12,
        0LL,
        v13,
        v12->klass->vtable._7_ForceLoop.methodPtr);
      this->fields.animationPlay = 1;
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall WarBoardOverlayEffectPerformance____ctor_b__9_0(
        WarBoardOverlayEffectPerformance_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F85A4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F85A4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct WarBoardOverlayEffectPerformance_o *_4__this; // x20
  struct WarBoardOverlayEffectComponent_o *overlayEffect; // x8
  int32_t kind; // w8
  float v16; // s0
  BattleServantConfConponent_o *p_mAnimation_5__3; // x21
  float waitTime_5__2; // s8
  UnityEngine_Component_o *screenTouchInformationComponent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  float v23; // s8
  struct WarBoardOverlayEffectComponent_o *v24; // x8
  UnityEngine_Object_o *commonEffect; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct CommonEffectComponent_o *v30; // x21
  System_Action_o *v31; // x22
  UnityEngine_Component_o *v32; // x0
  UnityEngine_Component_o *transform; // x0
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Component_o *v41; // x0
  UnityEngine_Component_o *v42; // x0
  struct SimpleAnimation_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  bool result; // w0
  Il2CppObject **p__2__current; // x19
  int v64; // w8
  Il2CppObject **v65; // x19

  if ( (byte_40F784C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v9);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__, v12);
    byte_40F784C = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      this->fields._waitTime_5__2 = 0.0;
      if ( !_4__this )
        goto LABEL_43;
      overlayEffect = _4__this->fields.overlayEffect;
      if ( !overlayEffect )
        goto LABEL_43;
      kind = overlayEffect->fields.kind;
      v16 = 0.0;
      if ( kind )
      {
        if ( kind != 1 )
        {
LABEL_24:
          commonEffect = (UnityEngine_Object_o *)_4__this->fields.commonEffect;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(commonEffect, 0LL, 0LL) )
            return 0;
          v30 = _4__this->fields.commonEffect;
          v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
          System_Action___ctor(
            v31,
            (Il2CppObject *)_4__this,
            Method_WarBoardOverlayEffectPerformance_AnimationEndCallback__,
            0LL);
          if ( v30 )
          {
            ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, void *))v30->klass->vtable._9_ForceStop.method)(
              v30,
              0LL,
              v31,
              v30->klass[1]._1.image);
            v32 = (UnityEngine_Component_o *)_4__this->fields.commonEffect;
            if ( v32 )
            {
              transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v32, 0LL);
              if ( transform )
              {
                ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                                   transform,
                                                                                   (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
                this->fields._mAnimation_5__3 = ComponentInChildren_UIWidget;
                p_mAnimation_5__3 = (BattleServantConfConponent_o *)&this->fields._mAnimation_5__3;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields._mAnimation_5__3,
                  (System_Int32_array **)ComponentInChildren_UIWidget,
                  v35,
                  v36,
                  v37,
                  v38,
                  v39,
                  v40);
                v41 = (UnityEngine_Component_o *)_4__this->fields.commonEffect;
                if ( v41 )
                {
                  v42 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v41, 0LL);
                  if ( v42 )
                  {
                    v43 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                        v42,
                                                        (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
                    this->fields._mSimpleAnimation_5__4 = v43;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&this->fields._mSimpleAnimation_5__4,
                      (System_Int32_array **)v43,
                      v44,
                      v45,
                      v46,
                      v47,
                      v48,
                      v49);
LABEL_34:
                    if ( WarBoardOverlayEffectPerformance__CheckAnimationEnd(
                           _4__this,
                           (UnityEngine_Animation_o *)p_mAnimation_5__3->klass,
                           0LL)
                      && WarBoardOverlayEffectPerformance__CheckSimpleAnimationEnd(
                           _4__this,
                           this->fields._mSimpleAnimation_5__4,
                           0LL) )
                    {
                      p_mAnimation_5__3->klass = 0LL;
                      sub_B16F98(p_mAnimation_5__3, 0LL, v50, v51, v52, v53, v54, v55);
                      this->fields._mSimpleAnimation_5__4 = 0LL;
                      sub_B16F98(
                        (BattleServantConfConponent_o *)&this->fields._mSimpleAnimation_5__4,
                        0LL,
                        v56,
                        v57,
                        v58,
                        v59,
                        v60,
                        v61);
                      return 0;
                    }
                    this->fields.__2__current = 0LL;
                    p__2__current = &this->fields.__2__current;
                    sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v50, v51, v52, v53, v54, v55);
                    v64 = 4;
                    goto LABEL_42;
                  }
                }
              }
            }
          }
LABEL_43:
          sub_B170D4();
        }
LABEL_22:
        v24 = _4__this->fields.overlayEffect;
        if ( !v24 )
          goto LABEL_43;
        if ( v16 >= v24->fields.waitTime )
          goto LABEL_24;
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v64 = 3;
      }
      else
      {
LABEL_12:
        if ( v16 < _4__this->fields.screenTouchInfoDispWaitTime )
        {
          this->fields.__2__current = 0LL;
          v65 = &this->fields.__2__current;
          sub_B16F98((BattleServantConfConponent_o *)v65, 0LL, v2, v3, v4, v5, v6, v7);
          result = 1;
          *((_DWORD *)v65 - 2) = 1;
          return result;
        }
        screenTouchInformationComponent = (UnityEngine_Component_o *)_4__this->fields.screenTouchInformationComponent;
        if ( !screenTouchInformationComponent )
          goto LABEL_43;
        gameObject = UnityEngine_Component__get_gameObject(screenTouchInformationComponent, 0LL);
        if ( !gameObject )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
LABEL_17:
        if ( _4__this->fields.isTouch )
        {
          v21 = (UnityEngine_Component_o *)_4__this->fields.screenTouchInformationComponent;
          if ( !v21 )
            goto LABEL_43;
          v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
          if ( !v22 )
            goto LABEL_43;
          UnityEngine_GameObject__SetActive(v22, 0, 0LL);
          goto LABEL_24;
        }
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v64 = 2;
      }
LABEL_42:
      *((_DWORD *)p__2__current - 2) = v64;
      return 1;
    case 1:
      waitTime_5__2 = this->fields._waitTime_5__2;
      this->fields.__1__state = -1;
      v16 = waitTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
      this->fields._waitTime_5__2 = v16;
      if ( _4__this )
        goto LABEL_12;
      goto LABEL_43;
    case 2:
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_17;
      goto LABEL_43;
    case 3:
      v23 = this->fields._waitTime_5__2;
      this->fields.__1__state = -1;
      v16 = v23 + UnityEngine_Time__get_deltaTime(0LL);
      this->fields._waitTime_5__2 = v16;
      if ( _4__this )
        goto LABEL_22;
      goto LABEL_43;
    case 4:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      p_mAnimation_5__3 = (BattleServantConfConponent_o *)&this->fields._mAnimation_5__3;
      goto LABEL_34;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardOverlayEffectPerformance__Execute_d__13_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F784A & 1) == 0 )
  {
    sub_B16FFC(&WarBoardOverlayEffectPerformance___c_TypeInfo, v1);
    byte_40F784A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardOverlayEffectPerformance___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardOverlayEffectPerformance___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F784B & 1) == 0 )
  {
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, state);
    byte_40F784B = 1;
  }
  if ( !state )
    sub_B170D4();
  klass = state->klass;
  if ( *(_WORD *)&state->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&state->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(state, SimpleAnimation_State_TypeInfo, 9LL);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                              state,
                              *(_QWORD *)(p_method + 8));
}