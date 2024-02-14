void __fastcall CommonEffectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v10; // x19
  __int64 v11; // x0
  struct CommonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_42108E5 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectComponent_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_22341/*"start"*/, v6);
    sub_B0D8A4(&StringLiteral_18399/*"end"*/, v7);
    sub_B0D8A4(&StringLiteral_22813/*"touch"*/, v8);
    sub_B0D8A4(&StringLiteral_20385/*"loop"*/, v9);
    byte_42108E5 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo,
                                                                           v1,
                                                                           v2);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v10,
    (const MethodInfo_2EA610C *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
  if ( !v10 )
    sub_B0D97C(v11);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v10,
    3,
    (System_String_o *)StringLiteral_22341/*"start"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v10,
    4,
    (System_String_o *)StringLiteral_20385/*"loop"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v10,
    5,
    (System_String_o *)StringLiteral_22813/*"touch"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v10,
    6,
    (System_String_o *)StringLiteral_18399/*"end"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  static_fields = CommonEffectComponent_TypeInfo->static_fields;
  static_fields->ANIMATION_NAME_TABLE = (struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *)v10;
  sub_B0D840(static_fields, v10);
  CommonEffectComponent_TypeInfo->static_fields->DEFAULT_TOUCH_START_TIME = -1.0;
}


void __fastcall CommonEffectComponent___ctor(CommonEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent_c *v8; // x0

  if ( (byte_42108E4 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectComponent_TypeInfo, method);
    byte_42108E4 = 1;
  }
  __asm { FMOV            V0.2S, #5.0 }
  *(_QWORD *)&this->fields.losttime = _D0;
  this->fields.isDestroy = 1;
  v8 = CommonEffectComponent_TypeInfo;
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v8 = CommonEffectComponent_TypeInfo;
  }
  this->fields.touchStartTime = v8->static_fields->DEFAULT_TOUCH_START_TIME;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectComponent__Awake(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  struct SimpleAnimation_o *v5; // x1

  if ( (byte_42108D6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    byte_42108D6 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animationComponent = Component_WebViewObject;
  sub_B0D840(&this->fields.animationComponent, Component_WebViewObject);
  v5 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = v5;
  sub_B0D840(&this->fields.simpleAnimationComponent, v5);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall CommonEffectComponent__DelayFrameCoroutine(
        CommonEffectComponent_o *this,
        int32_t frame,
        System_Action_o *action,
        const MethodInfo *method)
{
  CommonEffectComponent__DelayFrameCoroutine_d__75_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42108DF & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectComponent__DelayFrameCoroutine_d__75_TypeInfo, *(_QWORD *)&frame);
    byte_42108DF = 1;
  }
  v6 = (CommonEffectComponent__DelayFrameCoroutine_d__75_o *)sub_B0D974(
                                                               CommonEffectComponent__DelayFrameCoroutine_d__75_TypeInfo,
                                                               *(_QWORD *)&frame,
                                                               action);
  CommonEffectComponent__DelayFrameCoroutine_d__75___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B0D97C(v7);
  v6->fields.frame = frame;
  v6->fields.action = action;
  sub_B0D840(&v6->fields.action, action);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall CommonEffectComponent__ForceLoop(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_ForceLoop.method)(
    this,
    0LL,
    this->klass->vtable._8_Stop.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__ForceLoop_16948752(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t status; // w8
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v10; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v12; // x20
  SimpleAnimation_o *v13; // x20
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v16; // x20
  unsigned __int64 v17; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Animation_o *v21; // x20
  UnityEngine_TrackedReference_o *v22; // x20

  if ( (byte_42108D2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_16202/*"_loop"*/, v7);
    byte_42108D2 = 1;
  }
  status = this->fields.status;
  if ( !status )
  {
    CommonEffectComponent__Init(this, 0, 0, v3);
    if ( isOverWrite )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      {
        v10 = this->fields.simpleAnimationComponent;
        if ( !v10 )
          goto LABEL_46;
        SimpleAnimation__Stop(v10, 0LL);
      }
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_45;
      v10 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v10 )
        goto LABEL_46;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v10, 0LL);
    }
LABEL_45:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  if ( status != 2 )
  {
    v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      v13 = this->fields.simpleAnimationComponent;
      v10 = (SimpleAnimation_o *)System_String__Concat_43849904(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16202/*"_loop"*/,
                                   0LL);
      if ( v13 )
      {
        Item = SimpleAnimation__get_Item(v13, (System_String_o *)v10, 0LL);
        if ( Item )
        {
          klass = Item->klass;
          v16 = Item;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v17 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v17;
              p_offset += 2;
              if ( v17 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_29;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_29:
            p_method = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 18LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
            v16,
            2LL,
            *(_QWORD *)(p_method + 8));
        }
        v10 = this->fields.simpleAnimationComponent;
        if ( v10 )
        {
          SimpleAnimation__Stop(v10, 0LL);
          goto LABEL_44;
        }
      }
    }
    else
    {
      v20 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
        goto LABEL_44;
      v21 = this->fields.animationComponent;
      v10 = (SimpleAnimation_o *)System_String__Concat_43849904(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16202/*"_loop"*/,
                                   0LL);
      if ( v21 )
      {
        v22 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v21, (System_String_o *)v10, 0LL);
        v10 = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)v10 & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_46;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v22, 2, 0LL);
        }
        v10 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v10 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v10, 0LL);
LABEL_44:
          this->fields.totaltime = 0.0;
          *(&this->fields.loop + 4) = 1;
          this->fields.playAnimation = 0LL;
          sub_B0D840(&this->fields.playAnimation, 0LL);
          goto LABEL_45;
        }
      }
    }
LABEL_46:
    sub_B0D97C(v10);
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
void __fastcall CommonEffectComponent__ForceStart_16948024(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v11; // x20
  UnityEngine_Animation_o *v12; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v15; // x20
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Animation_o *v21; // x20
  UnityEngine_TrackedReference_o *v22; // x20

  if ( (byte_42108D1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_16202/*"_loop"*/, v8);
    byte_42108D1 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_B0D840(&this->fields.callAfterStart, callback);
  if ( !this->fields.status )
  {
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
        v12 = this->fields.animationComponent;
        if ( !v12 )
          goto LABEL_40;
        UnityEngine_Animation__Stop(v12, 0LL);
      }
    }
    CommonEffectComponent__Init(this, 0, 0, v9);
    return;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v11 = this->fields.simpleAnimationComponent;
    v12 = (UnityEngine_Animation_o *)System_String__Concat_43849904(
                                       this->fields.baseName,
                                       (System_String_o *)StringLiteral_16202/*"_loop"*/,
                                       0LL);
    if ( v11 )
    {
      Item = SimpleAnimation__get_Item(v11, (System_String_o *)v12, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v15 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v16 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v16;
            p_offset += 2;
            if ( v16 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_16;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_16:
          p_method = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 18LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
          v15,
          2LL,
          *(_QWORD *)(p_method + 8));
      }
      v12 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v12 )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)v12, 0LL);
        goto LABEL_39;
      }
    }
    goto LABEL_40;
  }
  v20 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    goto LABEL_39;
  v21 = this->fields.animationComponent;
  v12 = (UnityEngine_Animation_o *)System_String__Concat_43849904(
                                     this->fields.baseName,
                                     (System_String_o *)StringLiteral_16202/*"_loop"*/,
                                     0LL);
  if ( !v21 )
    goto LABEL_40;
  v22 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v21, (System_String_o *)v12, 0LL);
  v12 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(v22, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_40;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v22, 2, 0LL);
  }
  v12 = this->fields.animationComponent;
  if ( !v12 )
LABEL_40:
    sub_B0D97C(v12);
  UnityEngine_Animation__Stop(v12, 0LL);
LABEL_39:
  this->fields.totaltime = 0.0;
  *(&this->fields.loop + 4) = 1;
  this->fields.playAnimation = 0LL;
  sub_B0D840(&this->fields.playAnimation, 0LL);
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
System_String_o *__fastcall CommonEffectComponent__GetAnimationName(
        CommonEffectComponent_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonEffectComponent_c *v7; // x0
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *ANIMATION_NAME_TABLE; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *klass; // x8
  unsigned __int64 v10; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  System_String_o *baseName; // x20
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *v14; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *v15; // x8
  unsigned __int64 v16; // x10
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **v17; // x11
  __int64 v18; // x0
  System_String_o *v20; // x2

  if ( (byte_42108E2 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectComponent_TypeInfo, *(_QWORD *)&status);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v6);
    byte_42108E2 = 1;
  }
  v7 = CommonEffectComponent_TypeInfo;
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v7 = CommonEffectComponent_TypeInfo;
  }
  ANIMATION_NAME_TABLE = v7->static_fields->ANIMATION_NAME_TABLE;
  if ( !ANIMATION_NAME_TABLE )
    goto LABEL_26;
  klass = ANIMATION_NAME_TABLE->klass;
  if ( *(_WORD *)&ANIMATION_NAME_TABLE->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&ANIMATION_NAME_TABLE->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AA67A0(
                 ANIMATION_NAME_TABLE,
                 System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
                 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))p_method)(
          ANIMATION_NAME_TABLE,
          (unsigned int)status,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  v7 = CommonEffectComponent_TypeInfo;
  baseName = this->fields.baseName;
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v7 = CommonEffectComponent_TypeInfo;
  }
  v14 = v7->static_fields->ANIMATION_NAME_TABLE;
  if ( !v14 )
LABEL_26:
    sub_B0D97C(v7);
  v15 = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    v17 = (System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v17 - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      ++v16;
      v17 += 2;
      if ( v16 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 2].method;
  }
  else
  {
LABEL_22:
    v18 = sub_AA67A0(
            v14,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            2LL);
  }
  v20 = (System_String_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v18)(
                             v14,
                             (unsigned int)status,
                             *(_QWORD *)(v18 + 8));
  return System_String__Concat_43852188(baseName, (System_String_o *)StringLiteral_15952/*"_"*/, v20, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__Init(
        CommonEffectComponent_o *this,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_String_o **p_effectName; // x22
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x23
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  System_String_o **p_baseName; // x23
  struct System_String_o *v19; // x1
  System_String_o *v20; // x0
  UnityEngine_Object_o *v21; // x22
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *transform; // x22
  int32_t layer; // w0
  const MethodInfo *v25; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x19

  if ( (byte_42108CE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isSkip);
    sub_B0D8A4(&StringLiteral_5827/*"Effect("*/, v7);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v8);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v9);
    sub_B0D8A4(&StringLiteral_614/*"(Clone)"*/, v10);
    byte_42108CE = 1;
  }
  if ( this->fields.status )
    return;
  p_effectName = &this->fields.effectName;
  if ( !this->fields.effectName )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_39;
    name = UnityEngine_Object__get_name(gameObject, 0LL);
    *p_effectName = name;
    sub_B0D840(&this->fields.effectName, name);
    gameObject = (UnityEngine_Object_o *)*p_effectName;
    if ( !*p_effectName )
      goto LABEL_39;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_614/*"(Clone)"*/, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)*p_effectName;
      if ( !*p_effectName )
        goto LABEL_39;
      v14 = System_String__Substring_43913640((System_String_o *)gameObject, 0, gameObject->fields.m_CachedPtr - 7, 0LL);
      *p_effectName = v14;
      sub_B0D840(&this->fields.effectName, v14);
    }
  }
  if ( this->fields.useAnimNum >= 1 )
  {
    v15 = *p_effectName;
    v16 = System_Int32__ToString((int)this + 128, 0LL);
    v17 = System_String__Concat_43852188(v15, (System_String_o *)StringLiteral_15952/*"_"*/, v16, 0LL);
    *p_effectName = v17;
    sub_B0D840(&this->fields.effectName, v17);
  }
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    v19 = *p_effectName;
    *p_baseName = *p_effectName;
    sub_B0D840(&this->fields.baseName, v19);
    gameObject = (UnityEngine_Object_o *)*p_baseName;
    if ( !*p_baseName )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)System_String__LastIndexOf((System_String_o *)gameObject, 0x2Fu, 0LL);
    if ( ((unsigned int)gameObject & 0x80000000) == 0 )
    {
      if ( !*p_baseName )
        goto LABEL_39;
      v20 = System_String__Substring(*p_baseName, (int)gameObject + 1, 0LL);
      *p_baseName = v20;
      sub_B0D840(&this->fields.baseName, v20);
    }
  }
  v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  gameObject = (UnityEngine_Object_o *)System_String__Concat_43852188(
                                         (System_String_o *)StringLiteral_5827/*"Effect("*/,
                                         this->fields.effectName,
                                         (System_String_o *)StringLiteral_658/*")"*/,
                                         0LL);
  if ( !v21 )
    goto LABEL_39;
  UnityEngine_Object__set_name(v21, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(parent, 0LL, 0LL) )
    goto LABEL_27;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL)) == 0LL
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL)) == 0LL )
  {
LABEL_39:
    sub_B0D97C(gameObject);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  CommonEffectComponent__SetChildInit(this, transform, layer, v25);
LABEL_27:
  this->fields.isStart = 1;
  this->fields.isSkip = isSkip;
  this->fields.isPause = isPause;
  if ( isPause )
  {
    this->fields.status = 1;
    return;
  }
  if ( !isSkip )
  {
    klass = this->klass;
    v27 = 3LL;
    goto LABEL_34;
  }
  if ( *(&this->fields.loop + 4) )
  {
    klass = this->klass;
    v27 = 4LL;
LABEL_34:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))klass->vtable._5_NextPlayAnimation.method)(
      this,
      v27,
      klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(v28, 0LL);
}


void __fastcall CommonEffectComponent__Init_16945024(
        CommonEffectComponent_o *this,
        System_String_o *effectName,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3

  if ( !this->fields.status )
  {
    this->fields.effectName = effectName;
    sub_B0D840(&this->fields.effectName, effectName);
    CommonEffectComponent__Init(this, isSkip, isPause, v8);
  }
}


void __fastcall CommonEffectComponent__Init_16945100(
        CommonEffectComponent_o *this,
        AssetData_o *data,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  __int64 v9; // x0
  struct System_String_o *name; // x1
  const MethodInfo *v11; // x3

  if ( !this->fields.status )
  {
    this->fields.asset = data;
    v9 = sub_B0D840(&this->fields.asset, data);
    if ( !data )
      sub_B0D97C(v9);
    name = data->fields.name;
    this->fields.effectName = name;
    sub_B0D840(&this->fields.effectName, name);
    CommonEffectComponent__Init(this, isSkip, isPause, v11);
  }
}


bool __fastcall CommonEffectComponent__IsTouched(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isTouched;
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
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  __int64 name; // x0
  __int64 v17; // x8
  __int64 v18; // x21
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  UnityEngine_Object_o *animationComponent; // x21
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v28; // x8
  unsigned __int64 v29; // x10
  System_Collections_IEnumerator_c **v30; // x11
  __int64 v31; // x0
  UnityEngine_AnimationState_o *v32; // x0
  struct System_Action_o **p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x21
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x21
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x22
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  SimpleAnimation_State_c **v54; // x11
  __int64 v55; // x0
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  SimpleAnimation_o *v60; // x20
  SimpleAnimation_State_o *v61; // x21
  struct System_Action_o **v62; // x0
  System_Action_o *v63; // x20
  SimpleAnimation_o *v64; // x20
  SimpleAnimation_State_o *v65; // x0
  CommonEffectComponent_o *v66; // x22
  SimpleAnimation_o *v67; // x20
  SimpleAnimation_State_c *v68; // x8
  unsigned __int64 v69; // x10
  SimpleAnimation_State_c **v70; // x11
  __int64 v71; // x0
  struct System_String_o *v72; // x1
  struct System_String_o **p_requestAnimation; // x0
  UnityEngine_Animation_o *v74; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  struct System_Action_o **v76; // x0
  System_Action_o *v77; // x20
  UnityEngine_Animation_o *v78; // x20
  UnityEngine_Animation_o *v79; // x20

  v3 = next;
  if ( (byte_42108D0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AnimationState_TypeInfo, *(_QWORD *)&next);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_16202/*"_loop"*/, v11);
    sub_B0D8A4(&StringLiteral_16226/*"_start"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    sub_B0D8A4(&StringLiteral_16189/*"_end"*/, v14);
    byte_42108D0 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
    {
      if ( v3 == 4 )
      {
        if ( *(&this->fields.loop + 4) )
          v3 = 4;
        else
          v3 = 6;
      }
      else if ( v3 == 3 )
      {
        p_callAfterStart = &this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          *p_callAfterStart = 0LL;
          sub_B0D840(p_callAfterStart, 0LL);
          ActionExtensions__Call(callAfterStart, 0LL);
        }
        v3 = 3;
      }
      v72 = (struct System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_134;
    }
    name = (__int64)this->fields.animationComponent;
    if ( !name )
      goto LABEL_139;
    UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)name, 0LL);
    name = (__int64)this->fields.animationComponent;
    if ( !name )
      goto LABEL_139;
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)name, 0LL);
    if ( !Enumerator )
      sub_B0D97C(0LL);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v25 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v25;
          p_offset += 4;
          if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_26;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_26:
        p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v28 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v29 = 0LL;
        v30 = (System_Collections_IEnumerator_c **)&v28->_1.interfaceOffsets->offset;
        while ( *(v30 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v29;
          v30 += 2;
          if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_33;
        }
        v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 1].method;
      }
      else
      {
LABEL_33:
        v31 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v32 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v31)(
                                              Enumerator,
                                              *(_QWORD *)(v31 + 8));
      if ( !v32 )
        sub_B0D97C(0LL);
      if ( v32->klass != UnityEngine_AnimationState_TypeInfo )
      {
        name = sub_B0DC70(v32);
        goto LABEL_139;
      }
      UnityEngine_AnimationState__get_name(v32, 0LL);
    }
    v35 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
    if ( v35 )
    {
      v36 = *(_QWORD *)v35;
      v37 = v35;
      if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
      {
        v38 = 0LL;
        v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
            goto LABEL_48;
        }
        v40 = v36 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_48:
        v40 = sub_AA67A0(v35, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
    }
    if ( v3 == 6 )
      goto LABEL_124;
    if ( v3 != 4 )
    {
      if ( v3 != 3 )
      {
        Item = 0LL;
        goto LABEL_129;
      }
      v74 = this->fields.animationComponent;
      name = (__int64)System_String__Concat_43849904(this->fields.baseName, (System_String_o *)StringLiteral_16226/*"_start"*/, 0LL);
      if ( !v74 )
        goto LABEL_139;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v74, (System_String_o *)name, 0LL);
      if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        name = (__int64)this->fields.animationComponent;
        if ( !name )
          goto LABEL_139;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)name,
                                                   this->fields.baseName,
                                                   0LL);
      }
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        this->fields.losttime = 0.0;
        v3 = 3;
        goto LABEL_129;
      }
    }
    v76 = &this->fields.callAfterStart;
    v77 = this->fields.callAfterStart;
    if ( v77 )
    {
      *v76 = 0LL;
      sub_B0D840(v76, 0LL);
      ActionExtensions__Call(v77, 0LL);
    }
    if ( !*(&this->fields.loop + 4) )
      goto LABEL_124;
    v78 = this->fields.animationComponent;
    name = (__int64)System_String__Concat_43849904(this->fields.baseName, (System_String_o *)StringLiteral_16202/*"_loop"*/, 0LL);
    if ( !v78 )
      goto LABEL_139;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v78, (System_String_o *)name, 0LL);
    if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
    {
LABEL_124:
      v79 = this->fields.animationComponent;
      name = (__int64)System_String__Concat_43849904(this->fields.baseName, (System_String_o *)StringLiteral_16189/*"_end"*/, 0LL);
      if ( !v79 )
        goto LABEL_139;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v79, (System_String_o *)name, 0LL);
      v3 = 6;
    }
    else
    {
      v3 = 4;
    }
LABEL_129:
    name = UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
    if ( (name & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_139;
      name = (__int64)UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
      v72 = (struct System_String_o *)name;
      if ( !this )
        goto LABEL_139;
    }
    else
    {
      v72 = (struct System_String_o *)StringLiteral_1/*""*/;
      if ( !this )
        goto LABEL_139;
    }
LABEL_134:
    this->fields.requestAnimation = v72;
    p_requestAnimation = &this->fields.requestAnimation;
    goto LABEL_135;
  }
  name = (__int64)this->fields.simpleAnimationComponent;
  if ( !name )
    goto LABEL_139;
  SimpleAnimation__GetClipCount((SimpleAnimation_o *)name, 0LL);
  name = (__int64)this->fields.simpleAnimationComponent;
  if ( !name )
    goto LABEL_139;
  name = (__int64)SimpleAnimation__GetStates((SimpleAnimation_o *)name, 0LL);
  if ( !name )
    goto LABEL_139;
  v17 = *(_QWORD *)name;
  v18 = name;
  if ( *(_WORD *)(*(_QWORD *)name + 298LL) )
  {
    v19 = 0LL;
    v20 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)v20 - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v19;
      v20 += 4;
      if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)name + 298LL) )
        goto LABEL_14;
    }
    v21 = v17 + 16LL * *v20 + 312;
  }
  else
  {
LABEL_14:
    v21 = sub_AA67A0(name, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
  if ( !v41 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v42 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v43 = 0LL;
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_55;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_55:
      v45 = sub_AA67A0(v41, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
      break;
    v46 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v47 = 0LL;
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v48 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_62;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_62:
      v49 = sub_AA67A0(v41, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
    v51 = v50;
    if ( !v50 )
      sub_B0D97C(0LL);
    v52 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v53 = 0LL;
      v54 = (SimpleAnimation_State_c **)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *(v54 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v53;
        v54 += 2;
        if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_69;
      }
      v55 = v52 + 16LL * (*(_DWORD *)v54 + 9) + 312;
    }
    else
    {
LABEL_69:
      v55 = sub_AA67A0(v50, SimpleAnimation_State_TypeInfo, 9LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8));
  }
  v56 = *(_QWORD *)v41;
  if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
  {
    v57 = 0LL;
    v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
        goto LABEL_76;
    }
    v59 = v56 + 16LL * *v58 + 312;
  }
  else
  {
LABEL_76:
    v59 = sub_AA67A0(v41, System_IDisposable_TypeInfo, 0LL);
  }
  name = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v41, *(_QWORD *)(v59 + 8));
  if ( v3 != 6 )
  {
    if ( v3 != 4 )
    {
      if ( v3 != 3 )
        goto LABEL_100;
      v60 = this->fields.simpleAnimationComponent;
      name = (__int64)System_String__Concat_43849904(this->fields.baseName, (System_String_o *)StringLiteral_16226/*"_start"*/, 0LL);
      if ( !v60 )
        goto LABEL_139;
      v61 = SimpleAnimation__get_Item(v60, (System_String_o *)name, 0LL);
      if ( v61 )
        goto LABEL_85;
      name = (__int64)this->fields.simpleAnimationComponent;
      if ( !name )
        goto LABEL_139;
      v61 = SimpleAnimation__get_Item((SimpleAnimation_o *)name, this->fields.baseName, 0LL);
      if ( v61 )
      {
LABEL_85:
        this->fields.losttime = 0.0;
        v3 = 3;
LABEL_92:
        v66 = this;
        goto LABEL_95;
      }
    }
    v62 = &this->fields.callAfterStart;
    v63 = this->fields.callAfterStart;
    if ( v63 )
    {
      *v62 = 0LL;
      sub_B0D840(v62, 0LL);
      ActionExtensions__Call(v63, 0LL);
    }
    if ( *(&this->fields.loop + 4) )
    {
      v64 = this->fields.simpleAnimationComponent;
      name = (__int64)System_String__Concat_43849904(this->fields.baseName, (System_String_o *)StringLiteral_16202/*"_loop"*/, 0LL);
      if ( !v64 )
        goto LABEL_139;
      v65 = SimpleAnimation__get_Item(v64, (System_String_o *)name, 0LL);
      if ( v65 )
      {
        v61 = v65;
        v3 = 4;
        goto LABEL_92;
      }
    }
  }
  v67 = this->fields.simpleAnimationComponent;
  name = (__int64)System_String__Concat_43849904(this->fields.baseName, (System_String_o *)StringLiteral_16189/*"_end"*/, 0LL);
  if ( !v67 )
    goto LABEL_139;
  name = (__int64)SimpleAnimation__get_Item(v67, (System_String_o *)name, 0LL);
  v61 = (SimpleAnimation_State_o *)name;
  v3 = 6;
  v66 = this;
  if ( name )
  {
LABEL_95:
    v68 = v61->klass;
    if ( *(_WORD *)&v61->klass->_2.bitflags1 )
    {
      v69 = 0LL;
      v70 = (SimpleAnimation_State_c **)&v68->_1.interfaceOffsets->offset;
      while ( *(v70 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v69;
        v70 += 2;
        if ( v69 >= *(unsigned __int16 *)&v61->klass->_2.bitflags1 )
          goto LABEL_99;
      }
      v71 = (__int64)&v68->vtable[*(_DWORD *)v70 + 9].method;
    }
    else
    {
LABEL_99:
      v71 = sub_AA67A0(v61, SimpleAnimation_State_TypeInfo, 9LL);
    }
    name = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v71)(v61, *(_QWORD *)(v71 + 8));
    v72 = (struct System_String_o *)name;
    if ( v66 )
      goto LABEL_104;
LABEL_139:
    sub_B0D97C(name);
  }
LABEL_100:
  v66 = this;
  v72 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !this )
    goto LABEL_139;
LABEL_104:
  v66->fields.requestAnimation = v72;
  p_requestAnimation = &v66->fields.requestAnimation;
LABEL_135:
  sub_B0D840(p_requestAnimation, v72);
  this->fields.status = v3;
}


void __fastcall CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *asset; // x21

  if ( (byte_42108D8 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    byte_42108D8 = 1;
  }
  asset = this->fields.asset;
  if ( asset )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29516400(asset, 0LL);
    this->fields.asset = 0LL;
    sub_B0D840(&this->fields.asset, 0LL);
  }
  this->fields.status = 2;
}


void __fastcall CommonEffectComponent__OnRelease(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  CommonEffectComponent_o *v6; // x0
  const MethodInfo *v7; // x3
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_42108DE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CommonEffectComponent__OnRelease_b__74_0__, v4);
    byte_42108DE = 1;
  }
  *(_WORD *)&this->fields.isTouching = 256;
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CommonEffectComponent__OnRelease_b__74_0__, 0LL);
  v8 = CommonEffectComponent__DelayFrameCoroutine(v6, 1, v5, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall CommonEffectComponent__OnTouch(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t status; // w8
  System_Action_o *touchCallback; // x0

  status = this->fields.status;
  this->fields.isTouching = 1;
  if ( status != 5 && CommonEffectComponent__PlayAnimation(this, 5, v2) )
  {
    touchCallback = this->fields.touchCallback;
    this->fields.touchStartTime = this->fields.totaltime;
    ActionExtensions__Call(touchCallback, 0LL);
  }
}


bool __fastcall CommonEffectComponent__PlayAnimation(
        CommonEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  return CommonEffectComponent__PlaySimpleAnimation(this, next, method)
      || CommonEffectComponent__PlayNormalAnimation(this, next, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectComponent__PlayNormalAnimation(
        CommonEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  UnityEngine_Object_o *animationComponent; // x21
  const MethodInfo *v6; // x2
  System_String_o *AnimationName; // x21
  UnityEngine_Animation_o *name; // x0
  UnityEngine_TrackedReference_o *Item; // x21
  bool result; // w0
  UnityEngine_Animation_o *v11; // x22
  struct System_String_o *v12; // x0
  struct System_String_o **p_playAnimation; // x20

  if ( (byte_42108E1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    byte_42108E1 = 1;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(animationComponent, 0LL, 0LL) )
    return 0;
  AnimationName = CommonEffectComponent__GetAnimationName(this, next, v6);
  if ( System_String__IsNullOrEmpty(AnimationName, 0LL) )
    return 0;
  name = this->fields.animationComponent;
  if ( !name )
    goto LABEL_14;
  Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(name, AnimationName, 0LL);
  name = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL);
  if ( ((unsigned __int8)name & 1) != 0 )
    return 0;
  if ( !Item
    || (v11 = this->fields.animationComponent,
        name = (UnityEngine_Animation_o *)UnityEngine_AnimationState__get_name(
                                            (UnityEngine_AnimationState_o *)Item,
                                            0LL),
        !v11) )
  {
LABEL_14:
    sub_B0D97C(name);
  }
  UnityEngine_Animation__Play_50564840(v11, (System_String_o *)name, 0LL);
  v12 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
  this->fields.playAnimation = v12;
  p_playAnimation = &this->fields.playAnimation;
  sub_B0D840(p_playAnimation, v12);
  result = 1;
  *((_DWORD *)p_playAnimation - 4) = next;
  return result;
}


void __fastcall CommonEffectComponent__PlaySe(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_array *v5; // x0
  int max_length; // w8
  System_String_array *v7; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x21
  SePlayer_o *v10; // x0
  SePlayer_o *v11; // x20
  __int64 v12; // x0
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42108D9 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, name);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_42108D9 = 1;
  }
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v5 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v5 )
      goto LABEL_22;
    if ( !v5->max_length )
      goto LABEL_23;
    LOWORD(v5->m_Items[0]) = 58;
    if ( !name )
      goto LABEL_22;
    v5 = System_String__Split(name, (System_Char_array *)v5, 0LL);
    if ( !v5 )
      goto LABEL_22;
    max_length = v5->max_length;
    v7 = v5;
    if ( !max_length )
    {
LABEL_23:
      v12 = sub_B0D9A8(v5);
      sub_B0D948(v12, 0LL);
    }
    v8 = v5->m_Items[0];
    if ( max_length < 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v8, 0LL);
      return;
    }
    v9 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v10 = SoundManager__playSe_24977004(v8, v9, 0LL);
    result = 0.0;
    if ( (int)v7->max_length >= 3 )
    {
      v11 = v10;
      v5 = (System_String_array *)System_Single__TryParse(v7->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( v11 )
        {
          SePlayer__set_Pitch(v11, result, 0LL);
          return;
        }
LABEL_22:
        sub_B0D97C(v5);
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
  int max_length; // w8
  System_String_o *v7; // x19
  System_String_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_42108DA & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, name);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_42108DA = 1;
  }
  v5 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_17;
  if ( !v5->max_length )
    goto LABEL_18;
  LOWORD(v5->m_Items[0]) = 58;
  if ( !name || (v5 = System_String__Split(name, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_17:
    sub_B0D97C(v5);
  max_length = v5->max_length;
  if ( !max_length )
  {
LABEL_18:
    v9 = sub_B0D9A8(v5);
    sub_B0D948(v9, 0LL);
  }
  v7 = v5->m_Items[0];
  if ( max_length >= 2 )
  {
    v8 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue_25000064(v7, v8, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue(v7, 0LL);
  }
}


void __fastcall CommonEffectComponent__PlaySettedVoice(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *settedVoiceStr; // x1

  settedVoiceStr = this->fields.settedVoiceStr;
  if ( settedVoiceStr )
    CommonEffectComponent__PlayVoice_16952712(this, settedVoiceStr, this->fields.voiceCallback, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectComponent__PlaySimpleAnimation(
        CommonEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v7; // x2
  System_String_o *AnimationName; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_o *v10; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_o *v12; // x22
  SimpleAnimation_State_o *v13; // x21
  unsigned __int64 v14; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_State_c *v17; // x8
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **v19; // x11
  __int64 v20; // x0
  struct System_String_o *v21; // x0
  struct System_String_o **p_playAnimation; // x20

  if ( (byte_42108E0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v5);
    byte_42108E0 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(simpleAnimationComponent, 0LL, 0LL)
    || (AnimationName = CommonEffectComponent__GetAnimationName(this, next, v7),
        System_String__IsNullOrEmpty(AnimationName, 0LL)) )
  {
    LOBYTE(Item) = 0;
  }
  else
  {
    v10 = this->fields.simpleAnimationComponent;
    if ( !v10 )
      goto LABEL_26;
    Item = SimpleAnimation__get_Item(v10, AnimationName, 0LL);
    if ( !Item )
      return (char)Item;
    klass = Item->klass;
    v12 = this->fields.simpleAnimationComponent;
    v13 = Item;
    if ( *(_WORD *)&Item->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v14;
        p_offset += 2;
        if ( v14 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
    }
    else
    {
LABEL_16:
      p_method = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v10 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v13,
                                 *(_QWORD *)(p_method + 8));
    if ( !v12 )
LABEL_26:
      sub_B0D97C(v10);
    SimpleAnimation__Play_50482404(v12, (System_String_o *)v10, 0LL);
    v17 = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = (SimpleAnimation_State_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v18;
        v19 += 2;
        if ( v18 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 9].method;
    }
    else
    {
LABEL_23:
      v20 = sub_AA67A0(v13, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v21 = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v20)(
                                      v13,
                                      *(_QWORD *)(v20 + 8));
    this->fields.playAnimation = v21;
    p_playAnimation = &this->fields.playAnimation;
    sub_B0D840(p_playAnimation, v21);
    LOBYTE(Item) = 1;
    *((_DWORD *)p_playAnimation - 4) = next;
  }
  return (char)Item;
}


void __fastcall CommonEffectComponent__PlayVoice(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CommonEffectComponent__PlayVoice_16952712(this, name, 0LL, v3);
}


void __fastcall CommonEffectComponent__PlayVoice_16952712(
        CommonEffectComponent_o *this,
        System_String_o *name,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_String_array *v7; // x0
  __int64 v8; // x8
  System_String_array *v9; // x20
  System_String_o *v10; // x20
  float v11; // s8
  float v12; // s0
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  __int64 v15; // x0

  if ( (byte_42108DB & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, name);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_42108DB = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v7 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v7 )
      goto LABEL_23;
    if ( !v7->max_length )
      goto LABEL_24;
    LOWORD(v7->m_Items[0]) = 58;
    if ( !name || (v7 = System_String__Split(name, (System_Char_array *)v7, 0LL)) == 0LL )
LABEL_23:
      sub_B0D97C(v7);
    v8 = *(_QWORD *)&v7->max_length;
    v9 = v7;
    if ( (int)v8 < 2 )
    {
      if ( (_DWORD)v8 )
      {
        v10 = v7->m_Items[0];
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playVoice_25002992(v10, callback, 0LL);
        return;
      }
LABEL_24:
      v15 = sub_B0D9A8(v7);
      sub_B0D948(v15, 0LL);
    }
    if ( (_DWORD)v8 == 2 )
    {
      v11 = 1.0;
    }
    else
    {
      v12 = System_Single__Parse(v7->m_Items[2], 0LL);
      v8 = *(_QWORD *)&v9->max_length;
      v11 = v12;
      if ( !(_DWORD)v8 )
        goto LABEL_24;
    }
    if ( (_DWORD)v8 == 1 )
      goto LABEL_24;
    v14 = v9->m_Items[0];
    v13 = v9->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playVoice_24977528(v14, v13, v11, callback, 0LL);
  }
}


void __fastcall CommonEffectComponent__ResetPrewarmParticleList(
        CommonEffectComponent_o *this,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v2; // x19
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v9; // 0:x0.8

  v2 = this;
  if ( (byte_42108DD & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42108DD = 1;
  }
  m_ParticleSystem = 0LL;
  particlelist = v2->fields.particlelist;
  if ( particlelist )
  {
    v4 = *(_QWORD *)&particlelist->max_length;
    if ( v4 )
    {
      if ( (int)v4 >= 1 )
      {
        v5 = 0LL;
        do
        {
          if ( v5 >= (unsigned int)v4 )
          {
            v7 = sub_B0D9A8(this);
            sub_B0D948(v7, 0LL);
          }
          v6 = (UnityEngine_Object_o *)particlelist->m_Items[v5];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (CommonEffectComponent_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v6 )
              sub_B0D97C(this);
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v6, 0LL).fields.m_ParticleSystem;
            v9.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem_MainModule__get_prewarm(v9, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem__get_isPlaying(
                                                  (UnityEngine_ParticleSystem_o *)v6,
                                                  0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                UnityEngine_ParticleSystem__Simulate_50661320((UnityEngine_ParticleSystem_o *)v6, 1.0, 0LL);
                UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)v6, 1, 0LL);
              }
            }
          }
          LODWORD(v4) = particlelist->max_length;
          ++v5;
        }
        while ( (__int64)v5 < (int)v4 );
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__Resume(CommonEffectComponent_o *this, bool isSkip, const MethodInfo *method)
{
  _BOOL4 isStart; // w8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42108CF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isSkip);
    byte_42108CF = 1;
  }
  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
    {
      this->fields.isPause = 0;
      if ( isSkip )
      {
        if ( *(&this->fields.loop + 4) )
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
          UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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
    this->fields.isPause = 0;
  }
}


void __fastcall CommonEffectComponent__Rewind(CommonEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v4; // x0

  if ( (byte_42108D4 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42108D4 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v4 = this->fields.simpleAnimationComponent;
    if ( !v4 )
      sub_B0D97C(0LL);
    SimpleAnimation__Rewind(v4, 0LL);
  }
}


void __fastcall CommonEffectComponent__SetChildInit(
        CommonEffectComponent_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  unsigned __int64 v15; // x10
  System_Collections_IEnumerator_c **v16; // x11
  __int64 v17; // x0
  UnityEngine_Transform_o *v18; // x0
  const MethodInfo *v19; // x3
  __int64 v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x19
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0

  v6 = this;
  if ( (byte_42108D5 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, tf);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (CommonEffectComponent_o *)sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v8);
    byte_42108D5 = 1;
  }
  if ( !tf
    || (this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_B0D97C(this);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_B0D97C(0LL);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v11 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v11;
          p_offset += 4;
          if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v14 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
        while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v15;
          v16 += 2;
          if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
      }
      else
      {
LABEL_19:
        v17 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v18 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                         Enumerator,
                                         *(_QWORD *)(v17 + 8));
      if ( v18 )
      {
        v20 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
          || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[v20 - 1] != UnityEngine_Transform_TypeInfo )
        {
          this = (CommonEffectComponent_o *)sub_B0DC70(v18);
          goto LABEL_35;
        }
      }
      CommonEffectComponent__SetChildInit(v6, v18, layer, v19);
    }
    v21 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
    if ( v21 )
    {
      v22 = *(_QWORD *)v21;
      v23 = v21;
      if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
      {
        v24 = 0LL;
        v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
        {
          ++v24;
          v25 += 4;
          if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
            goto LABEL_30;
        }
        v26 = v22 + 16LL * *v25 + 312;
      }
      else
      {
LABEL_30:
        v26 = sub_AA67A0(v21, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
    }
  }
}


void __fastcall CommonEffectComponent__SetEndlessEnable(
        CommonEffectComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  this->fields.isEndless = isEnable;
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
  System_String_array *v5; // x0
  System_String_o *v6; // x19
  float v7; // s8
  __int64 v8; // x0

  if ( (byte_42108DC & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, str);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_42108DC = 1;
  }
  v5 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_13;
  if ( !v5->max_length )
  {
    v8 = sub_B0D9A8(v5);
    sub_B0D948(v8, 0LL);
  }
  LOWORD(v5->m_Items[0]) = 58;
  if ( !str || (v5 = System_String__Split(str, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_13:
    sub_B0D97C(v5);
  if ( (int)v5->max_length >= 2 )
  {
    v6 = v5->m_Items[0];
    v7 = System_Single__Parse(v5->m_Items[1], 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__setPitchSe(v6, v7, 0LL);
  }
}


void __fastcall CommonEffectComponent__SetTime(
        CommonEffectComponent_o *this,
        float endTime,
        float lostTime,
        const MethodInfo *method)
{
  this->fields.losttime = endTime;
  this->fields.touchEffectTime = lostTime;
}


void __fastcall CommonEffectComponent__SetTouchCallback(
        CommonEffectComponent_o *this,
        System_Action_o *inputTouchCallback,
        const MethodInfo *method)
{
  this->fields.touchCallback = inputTouchCallback;
  sub_B0D840(&this->fields.touchCallback, inputTouchCallback);
}


void __fastcall CommonEffectComponent__SetUseAnimNum(
        CommonEffectComponent_o *this,
        int32_t num,
        const MethodInfo *method)
{
  this->fields.useAnimNum = num;
}


void __fastcall CommonEffectComponent__SetVoice(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  this->fields.settedVoiceStr = voiceStr;
  sub_B0D840(&this->fields.settedVoiceStr, voiceStr);
  this->fields.voiceCallback = 0LL;
  sub_B0D840(&this->fields.voiceCallback, 0LL);
}


void __fastcall CommonEffectComponent__SetVoice_16953160(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields.settedVoiceStr = voiceStr;
  sub_B0D840(&this->fields.settedVoiceStr, voiceStr);
  this->fields.voiceCallback = callback;
  sub_B0D840(&this->fields.voiceCallback, callback);
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
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *v12; // x0
  SimpleAnimation_o *v13; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v15; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v18; // x19
  unsigned __int64 v19; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_TrackedReference_o *v22; // x19

  if ( (byte_42108D3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, force);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_16202/*"_loop"*/, v10);
    byte_42108D3 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0LL);
    return;
  }
  this->fields.callAfterStop = onStoppedCallback;
  *(&this->fields.loop + 4) = 0;
  this->fields.isDestroy = isDestroy;
  sub_B0D840(&this->fields.callAfterStop, onStoppedCallback);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (System_String_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    v13 = this->fields.simpleAnimationComponent;
    if ( force )
    {
      if ( v13 )
      {
        SimpleAnimation__Stop(this->fields.simpleAnimationComponent, 0LL);
        return;
      }
LABEL_33:
      sub_B0D97C(v12);
    }
    v12 = System_String__Concat_43849904(this->fields.baseName, (System_String_o *)StringLiteral_16202/*"_loop"*/, 0LL);
    if ( !v13 )
      goto LABEL_33;
    Item = SimpleAnimation__get_Item(v13, v12, 0LL);
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
            goto LABEL_25;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_25:
        p_method = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 18LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v18, 1LL, *(_QWORD *)(p_method + 8));
    }
  }
  else
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (System_String_o *)UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL);
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      v15 = this->fields.animationComponent;
      if ( force )
      {
        if ( !v15 )
          goto LABEL_33;
        UnityEngine_Animation__Stop(this->fields.animationComponent, 0LL);
      }
      else
      {
        v12 = System_String__Concat_43849904(this->fields.baseName, (System_String_o *)StringLiteral_16202/*"_loop"*/, 0LL);
        if ( !v15 )
          goto LABEL_33;
        v22 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v15, v12, 0LL);
        v12 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_33;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v22, 1, 0LL);
        }
      }
    }
  }
}


void __fastcall CommonEffectComponent__Update(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float totaltime; // s8
  const MethodInfo *v5; // x1
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *v7; // x21
  SimpleAnimation_o *v8; // x0
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  struct System_String_o **p_playAnimation; // x21
  UnityEngine_Object_o *animationComponent; // x21
  int32_t status; // w8
  struct System_String_o **v15; // x0
  struct System_String_o *requestAnimation; // x1
  UnityEngine_Object_o *v17; // x21
  struct UnityEngine_ParticleSystem_array *particlelist; // x23
  __int64 v19; // x8
  unsigned __int64 v20; // x24
  UnityEngine_Object_o *v21; // x21
  float v22; // s0
  struct System_Action_o **p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  UnityEngine_Object_o *gameObject; // x19
  __int64 v26; // x0

  if ( (byte_42108D7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_42108D7 = 1;
  }
  if ( this->fields.status < 3u )
    return;
  totaltime = this->fields.totaltime;
  this->fields.totaltime = totaltime + RealTime__get_deltaTime(0LL);
  CommonEffectComponent__UpdateTouchAnimation(this, v5);
  p_requestAnimation = &this->fields.requestAnimation;
  if ( !this->fields.requestAnimation )
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL)
      && (p_playAnimation = &this->fields.playAnimation, this->fields.playAnimation) )
    {
      v8 = this->fields.simpleAnimationComponent;
      if ( !v8 )
        goto LABEL_90;
      if ( SimpleAnimation__CheckPlaying(v8, 0LL) )
        return;
    }
    else
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_46;
      p_playAnimation = &this->fields.playAnimation;
      if ( !this->fields.playAnimation )
        goto LABEL_46;
      v8 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v8 )
        goto LABEL_90;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v8, 0LL) )
        return;
    }
    status = this->fields.status;
    if ( status != 6 )
      goto LABEL_47;
    *p_playAnimation = 0LL;
    sub_B0D840(p_playAnimation, 0LL);
LABEL_46:
    status = this->fields.status;
LABEL_47:
    if ( status == 6 )
    {
      if ( !this->fields.isEndless )
      {
        if ( (float)(this->fields.losttime + this->fields.touchEffectTime) < this->fields.totaltime )
        {
          p_callAfterStop = &this->fields.callAfterStop;
          callAfterStop = this->fields.callAfterStop;
          if ( callAfterStop )
          {
            *p_callAfterStop = 0LL;
            sub_B0D840(p_callAfterStop, 0LL);
            ActionExtensions__Call(callAfterStop, 0LL);
          }
          if ( this->fields.isDestroy )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
          }
        }
        return;
      }
      goto LABEL_79;
    }
    if ( status != 4 )
    {
      if ( status != 3 )
        goto LABEL_79;
      if ( this->fields.losttime > this->fields.totaltime )
        return;
    }
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr);
LABEL_79:
    if ( !*p_requestAnimation )
      return;
  }
  v7 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    v8 = this->fields.simpleAnimationComponent;
    if ( !v8 )
      goto LABEL_90;
    if ( SimpleAnimation__CheckPlaying(v8, 0LL) )
      return;
  }
  else
  {
    v9 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    {
      v8 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v8 )
        goto LABEL_90;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v8, 0LL) )
        return;
    }
  }
  if ( System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v10 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
      v8 = this->fields.simpleAnimationComponent;
      if ( v8 )
      {
        SimpleAnimation__Play_50482404(v8, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_62;
        v8 = this->fields.simpleAnimationComponent;
        if ( v8 )
        {
          SimpleAnimation__Sample(v8, 0LL);
LABEL_62:
          requestAnimation = this->fields.requestAnimation;
          v15 = &this->fields.playAnimation;
          this->fields.playAnimation = requestAnimation;
          goto LABEL_63;
        }
      }
    }
    else
    {
      v17 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
        goto LABEL_62;
      v8 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v8 )
      {
        UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)v8, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_62;
        v8 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v8 )
        {
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v8, 0LL);
          goto LABEL_62;
        }
      }
    }
LABEL_90:
    sub_B0D97C(v8);
  }
  this->fields.playAnimation = 0LL;
  v15 = &this->fields.playAnimation;
  requestAnimation = 0LL;
LABEL_63:
  v8 = (SimpleAnimation_o *)sub_B0D840(v15, requestAnimation);
  if ( this->fields.status == 6 )
  {
    particlelist = this->fields.particlelist;
    if ( particlelist )
    {
      v19 = *(_QWORD *)&particlelist->max_length;
      if ( (int)v19 >= 1 )
      {
        v20 = 0LL;
        do
        {
          if ( v20 >= (unsigned int)v19 )
          {
            v26 = sub_B0D9A8(v8);
            sub_B0D948(v26, 0LL);
          }
          v21 = (UnityEngine_Object_o *)particlelist->m_Items[v20];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v8 = (SimpleAnimation_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
          if ( ((unsigned __int8)v8 & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_90;
            UnityEngine_ParticleSystem__Stop_50661880((UnityEngine_ParticleSystem_o *)v21, 0LL);
          }
          LODWORD(v19) = particlelist->max_length;
          ++v20;
        }
        while ( (__int64)v20 < (int)v19 );
      }
    }
    v22 = this->fields.totaltime;
    if ( v22 > this->fields.losttime )
      this->fields.losttime = v22;
  }
  *p_requestAnimation = 0LL;
  sub_B0D840(&this->fields.requestAnimation, 0LL);
}


void __fastcall CommonEffectComponent__UpdateTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float touchStartTime; // s8
  CommonEffectComponent_c *v5; // x0
  CommonEffectComponent_c *v6; // x0

  if ( (byte_42108E3 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectComponent_TypeInfo, method);
    byte_42108E3 = 1;
  }
  if ( this->fields.status == 5 )
  {
    touchStartTime = this->fields.touchStartTime;
    v5 = CommonEffectComponent_TypeInfo;
    if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
      v5 = CommonEffectComponent_TypeInfo;
    }
    if ( touchStartTime > v5->static_fields->DEFAULT_TOUCH_START_TIME
      && !this->fields.isTouching
      && *(float *)&this->fields.loop < (float)(this->fields.totaltime - this->fields.touchStartTime)
      && CommonEffectComponent__PlayAnimation(this, 4, v2) )
    {
      v6 = CommonEffectComponent_TypeInfo;
      if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
        v6 = CommonEffectComponent_TypeInfo;
      }
      this->fields.touchStartTime = v6->static_fields->DEFAULT_TOUCH_START_TIME;
    }
  }
}


void __fastcall CommonEffectComponent___OnRelease_b__74_0(CommonEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isTouched = 0;
}


System_String_o *__fastcall CommonEffectComponent__get_EffectName(
        CommonEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.effectName;
}


bool __fastcall CommonEffectComponent__get_IsEndStatus(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.status == 6;
}


bool __fastcall CommonEffectComponent__get_IsOnSublayer(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsOnSublayer_k__BackingField;
}


bool __fastcall CommonEffectComponent__get_IsStart(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isStart;
}


void __fastcall CommonEffectComponent__set_IsOnSublayer(
        CommonEffectComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsOnSublayer_k__BackingField = value;
}


void __fastcall CommonEffectComponent__DelayFrameCoroutine_d__75___ctor(
        CommonEffectComponent__DelayFrameCoroutine_d__75_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CommonEffectComponent__DelayFrameCoroutine_d__75__MoveNext(
        CommonEffectComponent__DelayFrameCoroutine_d__75_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  int32_t currentFrame_5__2; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    currentFrame_5__2 = this->fields._currentFrame_5__2;
    this->fields.__1__state = -1;
    _1__state = currentFrame_5__2 + 1;
    this->fields._currentFrame_5__2 = _1__state;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    this->fields._currentFrame_5__2 = 0;
  }
  if ( _1__state < this->fields.frame )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B0D840(&this->fields.__2__current, 0LL);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.action, 0LL);
  return 0;
}


Il2CppObject *__fastcall CommonEffectComponent__DelayFrameCoroutine_d__75__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CommonEffectComponent__DelayFrameCoroutine_d__75_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CommonEffectComponent__DelayFrameCoroutine_d__75__System_Collections_IEnumerator_Reset(
        CommonEffectComponent__DelayFrameCoroutine_d__75_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_CommonEffectComponent__DelayFrameCoroutine_d__75_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall CommonEffectComponent__DelayFrameCoroutine_d__75__System_Collections_IEnumerator_get_Current(
        CommonEffectComponent__DelayFrameCoroutine_d__75_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CommonEffectComponent__DelayFrameCoroutine_d__75__System_IDisposable_Dispose(
        CommonEffectComponent__DelayFrameCoroutine_d__75_o *this,
        const MethodInfo *method)
{
  ;
}