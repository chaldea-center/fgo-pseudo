void __fastcall CommonEffectComponent___ctor(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #5.0 }
  *(_QWORD *)&this->fields.losttime = _D0;
  *(&this->fields.isStart + 4) = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectComponent__Awake(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_String_o *Component_WebViewObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UnityEngine_Animation_o *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F656E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    byte_40F656E = 1;
  }
  Component_WebViewObject = (struct System_String_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.settedVoiceStr = Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.settedVoiceStr,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.animationComponent = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animationComponent,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall CommonEffectComponent__ForceLoop(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_ForceLoop.method)(
    this,
    0LL,
    this->klass->vtable._8_Stop.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__ForceLoop_18171892(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  int requestAnimation; // w8
  UnityEngine_Object_o *animationComponent; // x20
  struct UnityEngine_Animation_o *v10; // x0
  struct System_String_o *settedVoiceStr; // x20
  struct System_String_o *v12; // x0
  UnityEngine_Object_o *v13; // x20
  struct UnityEngine_Animation_o *v14; // x20
  System_String_o *v15; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v18; // x20
  unsigned __int64 v19; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_String_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_String_o *v29; // x20
  System_String_o *v30; // x0
  UnityEngine_AnimationState_o *v31; // x20
  struct System_String_o *v32; // x0
  struct UnityEngine_Animation_o *v33; // x0

  if ( (byte_40F656A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_16090, v7);
    byte_40F656A = 1;
  }
  requestAnimation = (int)this->fields.requestAnimation;
  if ( !requestAnimation )
  {
    CommonEffectComponent__Init(this, 0, 0, v3);
    if ( isOverWrite )
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
        v10 = this->fields.animationComponent;
        if ( !v10 )
          goto LABEL_46;
        SimpleAnimation__Stop((SimpleAnimation_o *)v10, 0LL);
      }
      settedVoiceStr = this->fields.settedVoiceStr;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)settedVoiceStr, 0LL, 0LL) )
        goto LABEL_45;
      v12 = this->fields.settedVoiceStr;
      if ( !v12 )
        goto LABEL_46;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v12, 0LL);
    }
LABEL_45:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  if ( requestAnimation != 2 )
  {
    v13 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    {
      v14 = this->fields.animationComponent;
      v15 = System_String__Concat_43743732(
              (System_String_o *)this->fields.asset,
              (System_String_o *)StringLiteral_16090,
              0LL);
      if ( v14 )
      {
        Item = SimpleAnimation__get_Item((SimpleAnimation_o *)v14, v15, 0LL);
        if ( Item )
        {
          klass = Item->klass;
          v18 = Item;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v19 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v19;
              p_offset += 2;
              if ( v19 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_29;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_29:
            p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 18LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
            v18,
            2LL,
            *(_QWORD *)(p_method + 8));
        }
        v33 = this->fields.animationComponent;
        if ( v33 )
        {
          SimpleAnimation__Stop((SimpleAnimation_o *)v33, 0LL);
          goto LABEL_44;
        }
      }
    }
    else
    {
      v22 = this->fields.settedVoiceStr;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
        goto LABEL_44;
      v29 = this->fields.settedVoiceStr;
      v30 = System_String__Concat_43743732(
              (System_String_o *)this->fields.asset,
              (System_String_o *)StringLiteral_16090,
              0LL);
      if ( v29 )
      {
        v31 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v29, v30, 0LL);
        if ( UnityEngine_TrackedReference__op_Inequality((UnityEngine_TrackedReference_o *)v31, 0LL, 0LL) )
        {
          if ( !v31 )
            goto LABEL_46;
          UnityEngine_AnimationState__set_wrapMode(v31, 2, 0LL);
        }
        v32 = this->fields.settedVoiceStr;
        if ( v32 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v32, 0LL);
LABEL_44:
          *(_DWORD *)&this->fields.isStart = 0;
          LOBYTE(this->fields.particlelist) = 1;
          this->fields.effectName = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.effectName, 0LL, v23, v24, v25, v26, v27, v28);
          goto LABEL_45;
        }
      }
    }
LABEL_46:
    sub_B170D4();
  }
}


void __fastcall CommonEffectComponent__ForceStart(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_ForceStart.method)(
    this,
    0LL,
    0LL,
    this->klass->vtable._7_ForceLoop.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__ForceStart_18171164(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *animationComponent; // x20
  struct UnityEngine_Animation_o *v15; // x20
  System_String_o *v16; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v19; // x20
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_String_o *settedVoiceStr; // x20
  struct System_String_o *v24; // x0
  struct System_String_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_String_o *v32; // x20
  System_String_o *v33; // x0
  UnityEngine_AnimationState_o *v34; // x20
  struct System_String_o *v35; // x0
  struct UnityEngine_Animation_o *v36; // x0

  if ( (byte_40F6569 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_16090, v12);
    byte_40F6569 = 1;
  }
  if ( LODWORD(this->fields.requestAnimation) == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStop = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callAfterStop,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !LODWORD(this->fields.requestAnimation) )
  {
    if ( isOverWrite )
    {
      settedVoiceStr = this->fields.settedVoiceStr;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)settedVoiceStr, 0LL, 0LL) )
      {
        v24 = this->fields.settedVoiceStr;
        if ( !v24 )
          goto LABEL_40;
        UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v24, 0LL);
      }
    }
    CommonEffectComponent__Init(this, 0, 0, v13);
    return;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v15 = this->fields.animationComponent;
    v16 = System_String__Concat_43743732(
            (System_String_o *)this->fields.asset,
            (System_String_o *)StringLiteral_16090,
            0LL);
    if ( v15 )
    {
      Item = SimpleAnimation__get_Item((SimpleAnimation_o *)v15, v16, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v19 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v20 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v20;
            p_offset += 2;
            if ( v20 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_16;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_16:
          p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 18LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
          v19,
          2LL,
          *(_QWORD *)(p_method + 8));
      }
      v36 = this->fields.animationComponent;
      if ( v36 )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)v36, 0LL);
        goto LABEL_39;
      }
    }
    goto LABEL_40;
  }
  v25 = this->fields.settedVoiceStr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL) )
    goto LABEL_39;
  v32 = this->fields.settedVoiceStr;
  v33 = System_String__Concat_43743732(
          (System_String_o *)this->fields.asset,
          (System_String_o *)StringLiteral_16090,
          0LL);
  if ( !v32 )
    goto LABEL_40;
  v34 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v32, v33, 0LL);
  if ( UnityEngine_TrackedReference__op_Inequality((UnityEngine_TrackedReference_o *)v34, 0LL, 0LL) )
  {
    if ( !v34 )
      goto LABEL_40;
    UnityEngine_AnimationState__set_wrapMode(v34, 2, 0LL);
  }
  v35 = this->fields.settedVoiceStr;
  if ( !v35 )
LABEL_40:
    sub_B170D4();
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v35, 0LL);
LABEL_39:
  *(_DWORD *)&this->fields.isStart = 0;
  LOBYTE(this->fields.particlelist) = 1;
  this->fields.effectName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.effectName, 0LL, v26, v27, v28, v29, v30, v31);
  ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
    this,
    3LL,
    this->klass->vtable._6_ForceStart.methodPtr);
}


void __fastcall CommonEffectComponent__ForceStop(
        CommonEffectComponent_o *this,
        bool isDestroy,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  CommonEffectComponent__StopInternal(this, 1, isDestroy, callback, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__Init(
        CommonEffectComponent_o *this,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o **p_baseName; // x22
  UnityEngine_Object_o *gameObject; // x0
  System_Int32_array **name; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *v31; // x23
  System_String_o *v32; // x0
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_o **p_asset; // x23
  System_String_o *v41; // x1
  int32_t IndexOf; // w0
  System_Int32_array **v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Object_o *v50; // x22
  System_String_o *v51; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *v54; // x22
  UnityEngine_Transform_o *v55; // x0
  UnityEngine_Component_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  int32_t layer; // w0
  const MethodInfo *v59; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v61; // x1
  UnityEngine_Object_o *v62; // x19

  if ( (byte_40F6566 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isSkip);
    sub_B16FFC(&StringLiteral_5794, v11);
    sub_B16FFC(&StringLiteral_15842, v12);
    sub_B16FFC(&StringLiteral_651, v13);
    sub_B16FFC(&StringLiteral_608, v14);
    byte_40F6566 = 1;
  }
  if ( LODWORD(this->fields.requestAnimation) )
    return;
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_39;
    name = (System_Int32_array **)UnityEngine_Object__get_name(gameObject, 0LL);
    *p_baseName = (System_String_o *)name;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseName, name, v18, v19, v20, v21, v22, v23);
    if ( !*p_baseName )
      goto LABEL_39;
    if ( System_String__EndsWith(*p_baseName, (System_String_o *)StringLiteral_608, 0LL) )
    {
      if ( !*p_baseName )
        goto LABEL_39;
      v24 = (System_Int32_array **)System_String__Substring_43807468(
                                     *p_baseName,
                                     0,
                                     (*p_baseName)->fields.m_stringLength - 7,
                                     0LL);
      *p_baseName = (System_String_o *)v24;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseName, v24, v25, v26, v27, v28, v29, v30);
    }
  }
  if ( SLODWORD(this->fields.simpleAnimationComponent) >= 1 )
  {
    v31 = *p_baseName;
    v32 = System_Int32__ToString((int)this + 128, 0LL);
    v33 = (System_Int32_array **)System_String__Concat_43746016(v31, (System_String_o *)StringLiteral_15842, v32, 0LL);
    *p_baseName = (System_String_o *)v33;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseName, v33, v34, v35, v36, v37, v38, v39);
  }
  p_asset = (System_String_o **)&this->fields.asset;
  if ( !this->fields.asset )
  {
    v41 = *p_baseName;
    *p_asset = *p_baseName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.asset,
      (System_Int32_array **)v41,
      (System_String_array **)isPause,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    if ( !*p_asset )
      goto LABEL_39;
    IndexOf = System_String__LastIndexOf(*p_asset, 0x2Fu, 0LL);
    if ( (IndexOf & 0x80000000) == 0 )
    {
      if ( !*p_asset )
        goto LABEL_39;
      v43 = (System_Int32_array **)System_String__Substring(*p_asset, IndexOf + 1, 0LL);
      *p_asset = (System_String_o *)v43;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.asset, v43, v44, v45, v46, v47, v48, v49);
    }
  }
  v50 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v51 = System_String__Concat_43746016(
          (System_String_o *)StringLiteral_5794,
          this->fields.baseName,
          (System_String_o *)StringLiteral_651,
          0LL);
  if ( !v50 )
    goto LABEL_39;
  UnityEngine_Object__set_name(v50, v51, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_39;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(parent, 0LL, 0LL) )
    goto LABEL_27;
  v54 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v55 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v55
    || (v56 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v55, 0LL)) == 0LL
    || (v57 = UnityEngine_Component__get_gameObject(v56, 0LL)) == 0LL )
  {
LABEL_39:
    sub_B170D4();
  }
  layer = UnityEngine_GameObject__get_layer(v57, 0LL);
  CommonEffectComponent__SetChildInit(this, v54, layer, v59);
LABEL_27:
  LOBYTE(this->fields.callAfterStart) = 1;
  *(&this->fields.isStart + 6) = isSkip;
  *(&this->fields.isStart + 7) = isPause;
  if ( isPause )
  {
    LODWORD(this->fields.requestAnimation) = 1;
    return;
  }
  if ( !isSkip )
  {
    klass = this->klass;
    v61 = 3LL;
    goto LABEL_34;
  }
  if ( LOBYTE(this->fields.particlelist) )
  {
    klass = this->klass;
    v61 = 4LL;
LABEL_34:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))klass->vtable._5_NextPlayAnimation.method)(
      this,
      v61,
      klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  v62 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(v62, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__Init_18168168(
        CommonEffectComponent_o *this,
        System_String_o *effectName,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v11; // x3

  if ( !LODWORD(this->fields.requestAnimation) )
  {
    this->fields.baseName = effectName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseName,
      (System_Int32_array **)effectName,
      (System_String_array **)isSkip,
      (System_String_array **)isPause,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    CommonEffectComponent__Init(this, isSkip, isPause, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__Init_18168244(
        CommonEffectComponent_o *this,
        AssetData_o *data,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_String_o *name; // x1
  const MethodInfo *v19; // x3

  if ( !LODWORD(this->fields.requestAnimation) )
  {
    *(_QWORD *)&this->fields.totaltime = data;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.totaltime,
      (System_Int32_array **)data,
      (System_String_array **)isSkip,
      (System_String_array **)isPause,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    if ( !data )
      sub_B170D4();
    name = data->fields.name;
    this->fields.baseName = name;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseName,
      (System_Int32_array **)name,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    CommonEffectComponent__Init(this, isSkip, isPause, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__NextPlayAnimation(
        CommonEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *animationComponent; // x21
  struct UnityEngine_Animation_o *v16; // x0
  struct UnityEngine_Animation_o *v17; // x0
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *States; // x0
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__c *v19; // x8
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *v20; // x21
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  struct System_String_o *settedVoiceStr; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_String_o *v31; // x0
  struct System_String_o *v32; // x0
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v38; // x8
  unsigned __int64 v39; // x10
  System_Collections_IEnumerator_c **v40; // x11
  __int64 v41; // x0
  UnityEngine_AnimationState_o *v42; // x0
  BattleServantConfConponent_o *p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  __int64 v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x8
  __int64 v53; // x21
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x21
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x8
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x22
  __int64 v68; // x8
  unsigned __int64 v69; // x10
  SimpleAnimation_State_c **v70; // x11
  __int64 v71; // x0
  __int64 v72; // x8
  unsigned __int64 v73; // x10
  int *v74; // x11
  __int64 v75; // x0
  struct UnityEngine_Animation_o *v76; // x20
  System_String_o *v77; // x0
  SimpleAnimation_State_o *v78; // x21
  struct UnityEngine_Animation_o *v79; // x0
  BattleServantConfConponent_o *v80; // x0
  System_Action_o *v81; // x20
  struct UnityEngine_Animation_o *v82; // x20
  System_String_o *v83; // x0
  SimpleAnimation_State_o *v84; // x0
  CommonEffectComponent_o *v85; // x22
  struct UnityEngine_Animation_o *v86; // x20
  System_String_o *v87; // x0
  SimpleAnimation_State_c *v88; // x8
  unsigned __int64 v89; // x10
  SimpleAnimation_State_c **v90; // x11
  __int64 v91; // x0
  struct System_String_o *name; // x1
  struct System_String_o **p_playAnimation; // x0
  struct System_String_o *v94; // x20
  System_String_o *v95; // x0
  UnityEngine_TrackedReference_o *Item; // x21
  struct System_String_o *v97; // x0
  BattleServantConfConponent_o *v98; // x0
  System_Action_o *v99; // x20
  struct System_String_o *v100; // x20
  System_String_o *v101; // x0
  struct System_String_o *v102; // x20
  System_String_o *v103; // x0

  v3 = next;
  if ( (byte_40F6568 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AnimationState_TypeInfo, *(_QWORD *)&next);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_16090, v11);
    sub_B16FFC(&StringLiteral_16113, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    sub_B16FFC(&StringLiteral_16078, v14);
    byte_40F6568 = 1;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    settedVoiceStr = this->fields.settedVoiceStr;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)settedVoiceStr, 0LL, 0LL) )
    {
      if ( v3 == 4 )
      {
        if ( LOBYTE(this->fields.particlelist) )
          v3 = 4;
        else
          v3 = 5;
      }
      else if ( v3 == 3 )
      {
        p_callAfterStop = (BattleServantConfConponent_o *)&this->fields.callAfterStop;
        callAfterStop = this->fields.callAfterStop;
        if ( callAfterStop )
        {
          p_callAfterStop->klass = 0LL;
          sub_B16F98(p_callAfterStop, 0LL, v25, v26, v27, v28, v29, v30);
          ActionExtensions__Call(callAfterStop, 0LL);
        }
        v3 = 3;
      }
      name = (struct System_String_o *)StringLiteral_1;
      goto LABEL_134;
    }
    v31 = this->fields.settedVoiceStr;
    if ( !v31 )
      goto LABEL_139;
    UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)v31, 0LL);
    v32 = this->fields.settedVoiceStr;
    if ( !v32 )
      goto LABEL_139;
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v32, 0LL);
    if ( !Enumerator )
      sub_B170D4();
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v35 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v35;
          p_offset += 4;
          if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_26;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_26:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v38 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v39 = 0LL;
        v40 = (System_Collections_IEnumerator_c **)&v38->_1.interfaceOffsets->offset;
        while ( *(v40 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v39;
          v40 += 2;
          if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_33;
        }
        v41 = (__int64)&v38->vtable[*(_DWORD *)v40 + 1].method;
      }
      else
      {
LABEL_33:
        v41 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v42 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v41)(
                                              Enumerator,
                                              *(_QWORD *)(v41 + 8));
      if ( !v42 )
        sub_B170D4();
      if ( v42->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_B173C8(v42);
        goto LABEL_139;
      }
      UnityEngine_AnimationState__get_name(v42, 0LL);
    }
    v45 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
    if ( v45 )
    {
      v52 = *(_QWORD *)v45;
      v53 = v45;
      if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
      {
        v54 = 0LL;
        v55 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
        {
          ++v54;
          v55 += 4;
          if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
            goto LABEL_48;
        }
        v56 = v52 + 16LL * *v55 + 312;
      }
      else
      {
LABEL_48:
        v56 = sub_AAFEF8(v45, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v56)(v53, *(_QWORD *)(v56 + 8));
    }
    if ( v3 == 5 )
      goto LABEL_124;
    if ( v3 != 4 )
    {
      if ( v3 != 3 )
      {
        Item = 0LL;
        goto LABEL_129;
      }
      v94 = this->fields.settedVoiceStr;
      v95 = System_String__Concat_43743732(
              (System_String_o *)this->fields.asset,
              (System_String_o *)StringLiteral_16113,
              0LL);
      if ( !v94 )
        goto LABEL_139;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v94, v95, 0LL);
      if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        v97 = this->fields.settedVoiceStr;
        if ( !v97 )
          goto LABEL_139;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)v97,
                                                   (System_String_o *)this->fields.asset,
                                                   0LL);
      }
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        this->fields.losttime = 0.0;
        v3 = 3;
        goto LABEL_129;
      }
    }
    v98 = (BattleServantConfConponent_o *)&this->fields.callAfterStop;
    v99 = this->fields.callAfterStop;
    if ( v99 )
    {
      v98->klass = 0LL;
      sub_B16F98(v98, 0LL, v46, v47, v48, v49, v50, v51);
      ActionExtensions__Call(v99, 0LL);
    }
    if ( !LOBYTE(this->fields.particlelist) )
      goto LABEL_124;
    v100 = this->fields.settedVoiceStr;
    v101 = System_String__Concat_43743732(
             (System_String_o *)this->fields.asset,
             (System_String_o *)StringLiteral_16090,
             0LL);
    if ( !v100 )
      goto LABEL_139;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v100, v101, 0LL);
    if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
    {
LABEL_124:
      v102 = this->fields.settedVoiceStr;
      v103 = System_String__Concat_43743732(
               (System_String_o *)this->fields.asset,
               (System_String_o *)StringLiteral_16078,
               0LL);
      if ( !v102 )
        goto LABEL_139;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v102,
                                                 v103,
                                                 0LL);
      v3 = 5;
    }
    else
    {
      v3 = 4;
    }
LABEL_129:
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
    {
      if ( !Item )
        goto LABEL_139;
      name = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
      if ( !this )
        goto LABEL_139;
    }
    else
    {
      name = (struct System_String_o *)StringLiteral_1;
      if ( !this )
        goto LABEL_139;
    }
LABEL_134:
    this->fields.playAnimation = name;
    p_playAnimation = &this->fields.playAnimation;
    goto LABEL_135;
  }
  v16 = this->fields.animationComponent;
  if ( !v16 )
    goto LABEL_139;
  SimpleAnimation__GetClipCount((SimpleAnimation_o *)v16, 0LL);
  v17 = this->fields.animationComponent;
  if ( !v17 )
    goto LABEL_139;
  States = SimpleAnimation__GetStates((SimpleAnimation_o *)v17, 0LL);
  if ( !States )
    goto LABEL_139;
  v19 = States->klass;
  v20 = States;
  if ( *(_WORD *)&States->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)v22 - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
        goto LABEL_14;
    }
    v23 = (__int64)&v19->vtable[*v22].method;
  }
  else
  {
LABEL_14:
    v23 = sub_AAFEF8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v57 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *, _QWORD))v23)(
          v20,
          *(_QWORD *)(v23 + 8));
  if ( !v57 )
    sub_B170D4();
  while ( 1 )
  {
    v58 = *(_QWORD *)v57;
    if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
    {
      v59 = 0LL;
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v59;
        v60 += 4;
        if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
          goto LABEL_55;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_55:
      v61 = sub_AAFEF8(v57, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8)) & 1) == 0 )
      break;
    v62 = *(_QWORD *)v57;
    if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
    {
      v63 = 0LL;
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v64 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v63;
        v64 += 4;
        if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
          goto LABEL_62;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_62:
      v65 = sub_AAFEF8(v57, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v66 = (*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v57, *(_QWORD *)(v65 + 8));
    v67 = v66;
    if ( !v66 )
      sub_B170D4();
    v68 = *(_QWORD *)v66;
    if ( *(_WORD *)(*(_QWORD *)v66 + 298LL) )
    {
      v69 = 0LL;
      v70 = (SimpleAnimation_State_c **)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *(v70 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v69;
        v70 += 2;
        if ( v69 >= *(unsigned __int16 *)(*(_QWORD *)v66 + 298LL) )
          goto LABEL_69;
      }
      v71 = v68 + 16LL * (*(_DWORD *)v70 + 9) + 312;
    }
    else
    {
LABEL_69:
      v71 = sub_AAFEF8(v66, SimpleAnimation_State_TypeInfo, 9LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8));
  }
  v72 = *(_QWORD *)v57;
  if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
  {
    v73 = 0LL;
    v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
    {
      ++v73;
      v74 += 4;
      if ( v73 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
        goto LABEL_76;
    }
    v75 = v72 + 16LL * *v74 + 312;
  }
  else
  {
LABEL_76:
    v75 = sub_AAFEF8(v57, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v75)(v57, *(_QWORD *)(v75 + 8));
  if ( v3 != 5 )
  {
    if ( v3 != 4 )
    {
      if ( v3 != 3 )
        goto LABEL_100;
      v76 = this->fields.animationComponent;
      v77 = System_String__Concat_43743732(
              (System_String_o *)this->fields.asset,
              (System_String_o *)StringLiteral_16113,
              0LL);
      if ( !v76 )
        goto LABEL_139;
      v78 = SimpleAnimation__get_Item((SimpleAnimation_o *)v76, v77, 0LL);
      if ( v78 )
        goto LABEL_85;
      v79 = this->fields.animationComponent;
      if ( !v79 )
        goto LABEL_139;
      v78 = SimpleAnimation__get_Item((SimpleAnimation_o *)v79, (System_String_o *)this->fields.asset, 0LL);
      if ( v78 )
      {
LABEL_85:
        this->fields.losttime = 0.0;
        v3 = 3;
LABEL_92:
        v85 = this;
        goto LABEL_95;
      }
    }
    v80 = (BattleServantConfConponent_o *)&this->fields.callAfterStop;
    v81 = this->fields.callAfterStop;
    if ( v81 )
    {
      v80->klass = 0LL;
      sub_B16F98(v80, 0LL, v25, v26, v27, v28, v29, v30);
      ActionExtensions__Call(v81, 0LL);
    }
    if ( LOBYTE(this->fields.particlelist) )
    {
      v82 = this->fields.animationComponent;
      v83 = System_String__Concat_43743732(
              (System_String_o *)this->fields.asset,
              (System_String_o *)StringLiteral_16090,
              0LL);
      if ( !v82 )
        goto LABEL_139;
      v84 = SimpleAnimation__get_Item((SimpleAnimation_o *)v82, v83, 0LL);
      if ( v84 )
      {
        v78 = v84;
        v3 = 4;
        goto LABEL_92;
      }
    }
  }
  v86 = this->fields.animationComponent;
  v87 = System_String__Concat_43743732(
          (System_String_o *)this->fields.asset,
          (System_String_o *)StringLiteral_16078,
          0LL);
  if ( !v86 )
    goto LABEL_139;
  v78 = SimpleAnimation__get_Item((SimpleAnimation_o *)v86, v87, 0LL);
  v3 = 5;
  v85 = this;
  if ( v78 )
  {
LABEL_95:
    v88 = v78->klass;
    if ( *(_WORD *)&v78->klass->_2.bitflags1 )
    {
      v89 = 0LL;
      v90 = (SimpleAnimation_State_c **)&v88->_1.interfaceOffsets->offset;
      while ( *(v90 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v89;
        v90 += 2;
        if ( v89 >= *(unsigned __int16 *)&v78->klass->_2.bitflags1 )
          goto LABEL_99;
      }
      v91 = (__int64)&v88->vtable[*(_DWORD *)v90 + 9].method;
    }
    else
    {
LABEL_99:
      v91 = sub_AAFEF8(v78, SimpleAnimation_State_TypeInfo, 9LL);
    }
    name = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v91)(
                                       v78,
                                       *(_QWORD *)(v91 + 8));
    if ( v85 )
      goto LABEL_104;
LABEL_139:
    sub_B170D4();
  }
LABEL_100:
  v85 = this;
  name = (struct System_String_o *)StringLiteral_1;
  if ( !this )
    goto LABEL_139;
LABEL_104:
  v85->fields.playAnimation = name;
  p_playAnimation = &v85->fields.playAnimation;
LABEL_135:
  sub_B16F98((BattleServantConfConponent_o *)p_playAnimation, (System_Int32_array **)name, v25, v26, v27, v28, v29, v30);
  LODWORD(this->fields.requestAnimation) = v3;
}


void __fastcall CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *v3; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_40F6570 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40F6570 = 1;
  }
  v3 = *(AssetData_o **)&this->fields.totaltime;
  if ( v3 )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29947376(v3, 0LL);
    *(_QWORD *)&this->fields.totaltime = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.totaltime, 0LL, v4, v5, v6, v7, v8, v9);
  }
  LODWORD(this->fields.requestAnimation) = 2;
}


void __fastcall CommonEffectComponent__PlaySe(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_array *v6; // x0
  __int64 v7; // x2
  System_String_array *v8; // x1
  int max_length; // w8
  System_String_array *v10; // x19
  System_String_o *v11; // x20
  System_String_o *v12; // x21
  SePlayer_o *v13; // x0
  SePlayer_o *v14; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F6571 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, name);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F6571 = 1;
  }
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v6 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v5);
    if ( !v6 )
      goto LABEL_22;
    v8 = v6;
    if ( !v6->max_length )
      goto LABEL_23;
    LOWORD(v6->m_Items[0]) = 58;
    if ( !name )
      goto LABEL_22;
    v6 = System_String__Split(name, (System_Char_array *)v6, 0LL);
    if ( !v6 )
      goto LABEL_22;
    max_length = v6->max_length;
    v10 = v6;
    if ( !max_length )
    {
LABEL_23:
      sub_B17100(v6, v8, v7);
      sub_B170A0();
    }
    v11 = v6->m_Items[0];
    if ( max_length < 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v11, 0LL);
      return;
    }
    v12 = v6->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v13 = SoundManager__playSe_24823480(v11, v12, 0LL);
    result = 0.0;
    if ( (int)v10->max_length >= 3 )
    {
      v14 = v13;
      if ( System_Single__TryParse(v10->m_Items[2], &result, 0LL) )
      {
        if ( v14 )
        {
          SePlayer__set_Pitch(v14, result, 0LL);
          return;
        }
LABEL_22:
        sub_B170D4();
      }
    }
  }
}


void __fastcall CommonEffectComponent__PlaySeContinue(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_array *v5; // x0
  __int64 v6; // x2
  System_String_array *v7; // x1
  int max_length; // w8
  System_String_o *v9; // x19
  System_String_o *v10; // x20

  if ( (byte_40F6572 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, name);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F6572 = 1;
  }
  v5 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v5 )
    goto LABEL_17;
  v7 = v5;
  if ( !v5->max_length )
    goto LABEL_18;
  LOWORD(v5->m_Items[0]) = 58;
  if ( !name || (v5 = System_String__Split(name, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_17:
    sub_B170D4();
  max_length = v5->max_length;
  if ( !max_length )
  {
LABEL_18:
    sub_B17100(v5, v7, v6);
    sub_B170A0();
  }
  v9 = v5->m_Items[0];
  if ( max_length >= 2 )
  {
    v10 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue_24846640(v9, v10, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue(v9, 0LL);
  }
}


void __fastcall CommonEffectComponent__PlaySettedVoice(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Action_o *voiceCallback; // x1

  voiceCallback = this->fields.voiceCallback;
  if ( voiceCallback )
    CommonEffectComponent__PlayVoice_18175620(
      this,
      (System_String_o *)voiceCallback,
      *(System_Action_o **)&this->fields._IsOnSublayer_k__BackingField,
      v2);
}


void __fastcall CommonEffectComponent__PlayVoice(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CommonEffectComponent__PlayVoice_18175620(this, name, 0LL, v3);
}


void __fastcall CommonEffectComponent__PlayVoice_18175620(
        CommonEffectComponent_o *this,
        System_String_o *name,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_array *v8; // x0
  __int64 v9; // x2
  System_String_array *v10; // x1
  __int64 v11; // x8
  System_String_array *v12; // x20
  System_String_o *v13; // x20
  float v14; // s8
  float v15; // s0
  System_String_o *v16; // x20
  System_String_o *v17; // x21

  if ( (byte_40F6573 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, name);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40F6573 = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v8 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v7);
    if ( !v8 )
      goto LABEL_23;
    v10 = v8;
    if ( !v8->max_length )
      goto LABEL_24;
    LOWORD(v8->m_Items[0]) = 58;
    if ( !name || (v8 = System_String__Split(name, (System_Char_array *)v8, 0LL)) == 0LL )
LABEL_23:
      sub_B170D4();
    v11 = *(_QWORD *)&v8->max_length;
    v12 = v8;
    if ( (int)v11 < 2 )
    {
      if ( (_DWORD)v11 )
      {
        v13 = v8->m_Items[0];
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playVoice_24849568(v13, callback, 0LL);
        return;
      }
LABEL_24:
      sub_B17100(v8, v10, v9);
      sub_B170A0();
    }
    if ( (_DWORD)v11 == 2 )
    {
      v14 = 1.0;
    }
    else
    {
      v15 = System_Single__Parse(v8->m_Items[2], 0LL);
      v11 = *(_QWORD *)&v12->max_length;
      v14 = v15;
      if ( !(_DWORD)v11 )
        goto LABEL_24;
    }
    if ( (_DWORD)v11 == 1 )
      goto LABEL_24;
    v17 = v12->m_Items[0];
    v16 = v12->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playVoice_24824004(v17, v16, v14, callback, 0LL);
  }
}


void __fastcall CommonEffectComponent__ResetPrewarmParticleList(
        CommonEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonEffectComponent_o *v3; // x19
  __int64 v4; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x19
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v9; // 0:x0.8

  v3 = this;
  if ( (byte_40F6575 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6575 = 1;
  }
  m_ParticleSystem = 0LL;
  v4 = *(_QWORD *)&v3->fields.status;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 24);
    if ( v5 )
    {
      if ( (int)v5 >= 1 )
      {
        v6 = 0LL;
        do
        {
          if ( v6 >= (unsigned int)v5 )
          {
            sub_B17100(this, method, v2);
            sub_B170A0();
          }
          v7 = *(UnityEngine_Object_o **)(v4 + 32 + 8 * v6);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (CommonEffectComponent_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v7 )
              sub_B170D4();
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v7, 0LL).fields.m_ParticleSystem;
            v9.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem_MainModule__get_prewarm(v9, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem__get_isPlaying(
                                                  (UnityEngine_ParticleSystem_o *)v7,
                                                  0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                UnityEngine_ParticleSystem__Simulate_49805036((UnityEngine_ParticleSystem_o *)v7, 1.0, 0LL);
                UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)v7, 1, 0LL);
              }
            }
          }
          LODWORD(v5) = *(_DWORD *)(v4 + 24);
          ++v6;
        }
        while ( (__int64)v6 < (int)v5 );
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__Resume(CommonEffectComponent_o *this, bool isSkip, const MethodInfo *method)
{
  int callAfterStart_low; // w8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F6567 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isSkip);
    byte_40F6567 = 1;
  }
  callAfterStart_low = LOBYTE(this->fields.callAfterStart);
  *(&this->fields.isStart + 6) = isSkip;
  if ( callAfterStart_low )
  {
    if ( *(&this->fields.isStart + 7) )
    {
      *(&this->fields.isStart + 7) = 0;
      if ( isSkip )
      {
        if ( LOBYTE(this->fields.particlelist) )
        {
          ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
            this,
            4LL,
            this->klass->vtable._6_ForceStart.methodPtr);
        }
        else
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
        }
      }
      else
      {
        ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_ForceStart.method)(
          this,
          0LL,
          0LL,
          this->klass->vtable._7_ForceLoop.methodPtr);
      }
    }
  }
  else
  {
    *(&this->fields.isStart + 7) = 0;
  }
}


void __fastcall CommonEffectComponent__Rewind(CommonEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *animationComponent; // x20
  struct UnityEngine_Animation_o *v4; // x0

  if ( (byte_40F656C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F656C = 1;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v4 = this->fields.animationComponent;
    if ( !v4 )
      sub_B170D4();
    SimpleAnimation__Rewind((SimpleAnimation_o *)v4, 0LL);
  }
}


void __fastcall CommonEffectComponent__SetChildInit(
        CommonEffectComponent_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  unsigned __int64 v17; // x10
  System_Collections_IEnumerator_c **v18; // x11
  __int64 v19; // x0
  UnityEngine_Transform_o *v20; // x0
  const MethodInfo *v21; // x3
  __int64 v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x19
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0

  if ( (byte_40F656D & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, tf);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v8);
    byte_40F656D = 1;
  }
  if ( !tf || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
LABEL_35:
    sub_B170D4();
  if ( UnityEngine_GameObject__get_layer(gameObject, 0LL) != layer )
  {
    v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !v10 )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer(v10, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_B170D4();
    while ( 1 )
    {
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
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v16 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
        while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v17;
          v18 += 2;
          if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
      }
      else
      {
LABEL_19:
        v19 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v20 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                         Enumerator,
                                         *(_QWORD *)(v19 + 8));
      if ( v20 )
      {
        v22 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
          || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[v22 - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_B173C8(v20);
          goto LABEL_35;
        }
      }
      CommonEffectComponent__SetChildInit(this, v20, layer, v21);
    }
    v23 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
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
            goto LABEL_30;
        }
        v28 = v24 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_30:
        v28 = sub_AAFEF8(v23, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
    }
  }
}


void __fastcall CommonEffectComponent__SetEndlessEnable(
        CommonEffectComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  *(&this->fields.isStart + 5) = isEnable;
}


void __fastcall CommonEffectComponent__SetParam(
        CommonEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  ;
}


void __fastcall CommonEffectComponent__SetSePitch(
        CommonEffectComponent_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Char_array *v5; // x0
  __int64 v6; // x2
  System_String_array *v7; // x0
  System_String_o *v8; // x19
  float v9; // s8

  if ( (byte_40F6574 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, str);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F6574 = 1;
  }
  v5 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v5 )
    goto LABEL_13;
  if ( !v5->max_length )
  {
    sub_B17100(v5, v5, v6);
    sub_B170A0();
  }
  v5->m_Items[2] = 58;
  if ( !str || (v7 = System_String__Split(str, v5, 0LL)) == 0LL )
LABEL_13:
    sub_B170D4();
  if ( (int)v7->max_length >= 2 )
  {
    v8 = v7->m_Items[0];
    v9 = System_Single__Parse(v7->m_Items[1], 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__setPitchSe(v8, v9, 0LL);
  }
}


void __fastcall CommonEffectComponent__SetTime(
        CommonEffectComponent_o *this,
        float endTime,
        float lostTime,
        const MethodInfo *method)
{
  this->fields.losttime = endTime;
  *(float *)&this->fields.loop = lostTime;
}


void __fastcall CommonEffectComponent__SetUseAnimNum(
        CommonEffectComponent_o *this,
        int32_t num,
        const MethodInfo *method)
{
  LODWORD(this->fields.simpleAnimationComponent) = num;
}


void __fastcall CommonEffectComponent__SetVoice(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  this->fields.voiceCallback = (struct System_Action_o *)voiceStr;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voiceCallback,
    (System_Int32_array **)voiceStr,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_QWORD *)&this->fields._IsOnSublayer_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._IsOnSublayer_k__BackingField,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall CommonEffectComponent__SetVoice_18176068(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  this->fields.voiceCallback = (struct System_Action_o *)voiceStr;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voiceCallback,
    (System_Int32_array **)voiceStr,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  *(_QWORD *)&this->fields._IsOnSublayer_k__BackingField = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._IsOnSublayer_k__BackingField,
    (System_Int32_array **)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall CommonEffectComponent__Start(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  CommonEffectComponent__Init(this, 0, 0, v2);
}


void __fastcall CommonEffectComponent__Stop(
        CommonEffectComponent_o *this,
        bool isDestroy,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  CommonEffectComponent__StopInternal(this, 0, isDestroy, callback, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__StopInternal(
        CommonEffectComponent_o *this,
        bool force,
        bool isDestroy,
        System_Action_o *onStoppedCallback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *animationComponent; // x21
  struct UnityEngine_Animation_o *v15; // x21
  struct System_String_o *settedVoiceStr; // x21
  struct System_String_o *v17; // x21
  System_String_o *v18; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v21; // x19
  unsigned __int64 v22; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  System_String_o *v25; // x0
  UnityEngine_AnimationState_o *v26; // x19

  if ( (byte_40F656B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, force);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_16090, v13);
    byte_40F656B = 1;
  }
  if ( LODWORD(this->fields.requestAnimation) == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0LL);
    return;
  }
  *(_QWORD *)&this->fields.useAnimNum = onStoppedCallback;
  LOBYTE(this->fields.particlelist) = 0;
  *(&this->fields.isStart + 4) = isDestroy;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.useAnimNum,
    (System_Int32_array **)onStoppedCallback,
    (System_String_array **)isDestroy,
    (System_String_array **)onStoppedCallback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v15 = this->fields.animationComponent;
    if ( force )
    {
      if ( v15 )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)this->fields.animationComponent, 0LL);
        return;
      }
LABEL_33:
      sub_B170D4();
    }
    v18 = System_String__Concat_43743732(
            (System_String_o *)this->fields.asset,
            (System_String_o *)StringLiteral_16090,
            0LL);
    if ( !v15 )
      goto LABEL_33;
    Item = SimpleAnimation__get_Item((SimpleAnimation_o *)v15, v18, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v21 = Item;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v22;
          p_offset += 2;
          if ( v22 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_25:
        p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 18LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v21, 1LL, *(_QWORD *)(p_method + 8));
    }
  }
  else
  {
    settedVoiceStr = this->fields.settedVoiceStr;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)settedVoiceStr, 0LL, 0LL) )
    {
      v17 = this->fields.settedVoiceStr;
      if ( force )
      {
        if ( !v17 )
          goto LABEL_33;
        UnityEngine_Animation__Stop((UnityEngine_Animation_o *)this->fields.settedVoiceStr, 0LL);
      }
      else
      {
        v25 = System_String__Concat_43743732(
                (System_String_o *)this->fields.asset,
                (System_String_o *)StringLiteral_16090,
                0LL);
        if ( !v17 )
          goto LABEL_33;
        v26 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v17, v25, 0LL);
        if ( UnityEngine_TrackedReference__op_Inequality((UnityEngine_TrackedReference_o *)v26, 0LL, 0LL) )
        {
          if ( !v26 )
            goto LABEL_33;
          UnityEngine_AnimationState__set_wrapMode(v26, 1, 0LL);
        }
      }
    }
  }
}


void __fastcall CommonEffectComponent__Update(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float v4; // s8
  System_String_o **p_playAnimation; // x20
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Animation_o *v7; // x0
  struct System_String_o *v8; // x21
  struct System_String_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *v16; // x21
  struct UnityEngine_Animation_o *v17; // x0
  struct UnityEngine_Animation_o *v18; // x0
  UnityEngine_Object_o *animationComponent; // x21
  BattleServantConfConponent_o *p_effectName; // x21
  struct UnityEngine_Animation_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_String_o *settedVoiceStr; // x21
  struct System_String_o *v29; // x0
  int requestAnimation; // w8
  struct System_String_o **v31; // x0
  struct System_String_o *playAnimation; // x1
  struct System_String_o *v33; // x21
  struct System_String_o *v34; // x0
  struct System_String_o *v35; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x23
  __int64 v45; // x8
  unsigned __int64 v46; // x24
  UnityEngine_Object_o *v47; // x21
  float v48; // s0
  BattleServantConfConponent_o *p_useAnimNum; // x0
  System_Action_o *v50; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F656F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40F656F = 1;
  }
  if ( LODWORD(this->fields.requestAnimation) < 3 )
    return;
  v4 = *(float *)&this->fields.isStart;
  *(float *)&this->fields.isStart = v4 + RealTime__get_deltaTime(0LL);
  p_playAnimation = &this->fields.playAnimation;
  if ( !this->fields.playAnimation )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL)
      && (p_effectName = (BattleServantConfConponent_o *)&this->fields.effectName, this->fields.effectName) )
    {
      v21 = this->fields.animationComponent;
      if ( !v21 )
        goto LABEL_90;
      if ( SimpleAnimation__CheckPlaying((SimpleAnimation_o *)v21, 0LL) )
        return;
    }
    else
    {
      settedVoiceStr = this->fields.settedVoiceStr;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)settedVoiceStr, 0LL, 0LL) )
        goto LABEL_46;
      p_effectName = (BattleServantConfConponent_o *)&this->fields.effectName;
      if ( !this->fields.effectName )
        goto LABEL_46;
      v29 = this->fields.settedVoiceStr;
      if ( !v29 )
        goto LABEL_90;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v29, 0LL) )
        return;
    }
    requestAnimation = (int)this->fields.requestAnimation;
    if ( requestAnimation != 5 )
      goto LABEL_47;
    p_effectName->klass = 0LL;
    sub_B16F98(p_effectName, 0LL, v22, v23, v24, v25, v26, v27);
LABEL_46:
    requestAnimation = (int)this->fields.requestAnimation;
LABEL_47:
    if ( requestAnimation == 5 )
    {
      if ( !*(&this->fields.isStart + 5) )
      {
        if ( (float)(this->fields.losttime + *(float *)&this->fields.loop) < *(float *)&this->fields.isStart )
        {
          p_useAnimNum = (BattleServantConfConponent_o *)&this->fields.useAnimNum;
          v50 = *(System_Action_o **)&this->fields.useAnimNum;
          if ( v50 )
          {
            p_useAnimNum->klass = 0LL;
            sub_B16F98(p_useAnimNum, 0LL, v22, v23, v24, v25, v26, v27);
            ActionExtensions__Call(v50, 0LL);
          }
          if ( *(&this->fields.isStart + 4) )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
          }
        }
        return;
      }
      goto LABEL_79;
    }
    if ( requestAnimation != 4 )
    {
      if ( requestAnimation != 3 )
        goto LABEL_79;
      if ( this->fields.losttime > *(float *)&this->fields.isStart )
        return;
    }
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr);
LABEL_79:
    if ( !*p_playAnimation )
      return;
  }
  v6 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    v7 = this->fields.animationComponent;
    if ( !v7 )
      goto LABEL_90;
    if ( SimpleAnimation__CheckPlaying((SimpleAnimation_o *)v7, 0LL) )
      return;
  }
  else
  {
    v8 = this->fields.settedVoiceStr;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
    {
      v9 = this->fields.settedVoiceStr;
      if ( !v9 )
        goto LABEL_90;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v9, 0LL) )
        return;
    }
  }
  if ( System_String__op_Inequality(*p_playAnimation, (System_String_o *)StringLiteral_1, 0LL) )
  {
    v16 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    {
      v17 = this->fields.animationComponent;
      if ( v17 )
      {
        SimpleAnimation__Play_16380456((SimpleAnimation_o *)v17, this->fields.playAnimation, 0LL);
        if ( LODWORD(this->fields.requestAnimation) != 3 || !LOBYTE(this[1].klass) )
          goto LABEL_62;
        v18 = this->fields.animationComponent;
        if ( v18 )
        {
          SimpleAnimation__Sample((SimpleAnimation_o *)v18, 0LL);
LABEL_62:
          playAnimation = this->fields.playAnimation;
          v31 = &this->fields.effectName;
          this->fields.effectName = playAnimation;
          goto LABEL_63;
        }
      }
    }
    else
    {
      v33 = this->fields.settedVoiceStr;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
        goto LABEL_62;
      v34 = this->fields.settedVoiceStr;
      if ( v34 )
      {
        UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)v34, this->fields.playAnimation, 0LL);
        if ( LODWORD(this->fields.requestAnimation) != 3 || !LOBYTE(this[1].klass) )
          goto LABEL_62;
        v35 = this->fields.settedVoiceStr;
        if ( v35 )
        {
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v35, 0LL);
          goto LABEL_62;
        }
      }
    }
LABEL_90:
    sub_B170D4();
  }
  this->fields.effectName = 0LL;
  v31 = &this->fields.effectName;
  playAnimation = 0LL;
LABEL_63:
  sub_B16F98((BattleServantConfConponent_o *)v31, (System_Int32_array **)playAnimation, v10, v11, v12, v13, v14, v15);
  if ( LODWORD(this->fields.requestAnimation) == 5 )
  {
    v44 = *(_QWORD *)&this->fields.status;
    if ( v44 )
    {
      v45 = *(_QWORD *)(v44 + 24);
      if ( (int)v45 >= 1 )
      {
        v46 = 0LL;
        do
        {
          if ( v46 >= (unsigned int)v45 )
          {
            sub_B17100(v36, v37, v38);
            sub_B170A0();
          }
          v47 = *(UnityEngine_Object_o **)(v44 + 32 + 8 * v46);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v36 = UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
          if ( v36 )
          {
            if ( !v47 )
              goto LABEL_90;
            UnityEngine_ParticleSystem__Stop_49805596((UnityEngine_ParticleSystem_o *)v47, 0LL);
          }
          LODWORD(v45) = *(_DWORD *)(v44 + 24);
          ++v46;
        }
        while ( (__int64)v46 < (int)v45 );
      }
    }
    v48 = *(float *)&this->fields.isStart;
    if ( v48 > this->fields.losttime )
      this->fields.losttime = v48;
  }
  *p_playAnimation = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.playAnimation, 0LL, v38, v39, v40, v41, v42, v43);
}


System_String_o *__fastcall CommonEffectComponent__get_EffectName(
        CommonEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.baseName;
}


bool __fastcall CommonEffectComponent__get_IsEndStatus(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return LODWORD(this->fields.requestAnimation) == 5;
}


bool __fastcall CommonEffectComponent__get_IsOnSublayer(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return (bool)this[1].klass;
}


bool __fastcall CommonEffectComponent__get_IsStart(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return (bool)this->fields.callAfterStart;
}


void __fastcall CommonEffectComponent__set_IsOnSublayer(
        CommonEffectComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  LOBYTE(this[1].klass) = value;
}