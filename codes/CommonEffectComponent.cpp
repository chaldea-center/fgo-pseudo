void __fastcall CommonEffectComponent___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  struct CommonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_434DF6C & 1) == 0 )
  {
    sub_B70694(&CommonEffectComponent_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
    sub_B70694(&StringLiteral_22638/*"start"*/);
    sub_B70694(&StringLiteral_18621/*"end"*/);
    sub_B70694(&StringLiteral_23114/*"touch"*/);
    sub_B70694(&StringLiteral_20641/*"loop"*/);
    byte_434DF6C = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B70764(System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F71470 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
  if ( !v1 )
    sub_B7076C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    3,
    (System_String_o *)StringLiteral_22638/*"start"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    4,
    (System_String_o *)StringLiteral_20641/*"loop"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    5,
    (System_String_o *)StringLiteral_23114/*"touch"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    6,
    (System_String_o *)StringLiteral_18621/*"end"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  static_fields = CommonEffectComponent_TypeInfo->static_fields;
  static_fields->ANIMATION_NAME_TABLE = (struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *)v1;
  sub_B70630(static_fields);
  CommonEffectComponent_TypeInfo->static_fields->DEFAULT_TOUCH_START_TIME = -1.0;
}


void __fastcall CommonEffectComponent___ctor(CommonEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent_c *v8; // x0

  if ( (byte_434DF6B & 1) == 0 )
  {
    sub_B70694(&CommonEffectComponent_TypeInfo);
    byte_434DF6B = 1;
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
  if ( (byte_434DF5D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    byte_434DF5D = 1;
  }
  this->fields.animationComponent = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                        (UnityEngine_Component_o *)this,
                                                                        (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  sub_B70630(&this->fields.animationComponent);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                        (UnityEngine_Component_o *)this,
                                                                        (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  sub_B70630(&this->fields.simpleAnimationComponent);
}


System_Collections_IEnumerator_o *__fastcall CommonEffectComponent__DelayFrameCoroutine(
        CommonEffectComponent_o *this,
        int32_t frame,
        System_Action_o *action,
        const MethodInfo *method)
{
  CommonEffectComponent__DelayFrameCoroutine_d__75_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_434DF66 & 1) == 0 )
  {
    sub_B70694(&CommonEffectComponent__DelayFrameCoroutine_d__75_TypeInfo);
    byte_434DF66 = 1;
  }
  v6 = (CommonEffectComponent__DelayFrameCoroutine_d__75_o *)sub_B70764(CommonEffectComponent__DelayFrameCoroutine_d__75_TypeInfo);
  CommonEffectComponent__DelayFrameCoroutine_d__75___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B7076C(v7, v8);
  v6->fields.frame = frame;
  v6->fields.action = action;
  sub_B70630(&v6->fields.action);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall CommonEffectComponent__ForceLoop(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_ForceLoop.method)(
    this,
    0LL,
    this->klass->vtable._8_Stop.methodPtr);
}


void __fastcall CommonEffectComponent__ForceLoop_17836080(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t status; // w8
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v8; // x1
  SimpleAnimation_o *v9; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v11; // x20
  SimpleAnimation_o *v12; // x20
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v15; // x20
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *v19; // x20
  UnityEngine_Animation_o *v20; // x20
  UnityEngine_TrackedReference_o *v21; // x20

  if ( (byte_434DF59 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    sub_B70694(&StringLiteral_16391/*"_loop"*/);
    byte_434DF59 = 1;
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
        v9 = this->fields.simpleAnimationComponent;
        if ( !v9 )
          goto LABEL_46;
        SimpleAnimation__Stop(v9, 0LL);
      }
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_45;
      v9 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v9 )
        goto LABEL_46;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v9, 0LL);
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
    v11 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      v12 = this->fields.simpleAnimationComponent;
      v9 = (SimpleAnimation_o *)System_String__Concat_44758168(
                                  this->fields.baseName,
                                  (System_String_o *)StringLiteral_16391/*"_loop"*/,
                                  0LL);
      if ( v12 )
      {
        Item = SimpleAnimation__get_Item(v12, (System_String_o *)v9, 0LL);
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
                goto LABEL_29;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_29:
            p_method = sub_B08590(Item, SimpleAnimation_State_TypeInfo, 18LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
            v15,
            2LL,
            *(_QWORD *)(p_method + 8));
        }
        v9 = this->fields.simpleAnimationComponent;
        if ( v9 )
        {
          SimpleAnimation__Stop(v9, 0LL);
          goto LABEL_44;
        }
      }
    }
    else
    {
      v19 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
        goto LABEL_44;
      v20 = this->fields.animationComponent;
      v9 = (SimpleAnimation_o *)System_String__Concat_44758168(
                                  this->fields.baseName,
                                  (System_String_o *)StringLiteral_16391/*"_loop"*/,
                                  0LL);
      if ( v20 )
      {
        v21 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v20, (System_String_o *)v9, 0LL);
        v9 = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v21, 0LL, 0LL);
        if ( ((unsigned __int8)v9 & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_46;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v21, 2, 0LL);
        }
        v9 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v9 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v9, 0LL);
LABEL_44:
          this->fields.totaltime = 0.0;
          *(&this->fields.loop + 4) = 1;
          this->fields.playAnimation = 0LL;
          sub_B70630(&this->fields.playAnimation);
          goto LABEL_45;
        }
      }
    }
LABEL_46:
    sub_B7076C(v9, v8);
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


void __fastcall CommonEffectComponent__ForceStart_17835352(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v9; // x20
  UnityEngine_Animation_o *v10; // x0
  __int64 v11; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x20
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v19; // x20
  UnityEngine_Animation_o *v20; // x20
  UnityEngine_TrackedReference_o *v21; // x20

  if ( (byte_434DF58 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    sub_B70694(&StringLiteral_16391/*"_loop"*/);
    byte_434DF58 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_B70630(&this->fields.callAfterStart);
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
        v10 = this->fields.animationComponent;
        if ( !v10 )
          goto LABEL_40;
        UnityEngine_Animation__Stop(v10, 0LL);
      }
    }
    CommonEffectComponent__Init(this, 0, 0, v7);
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
    v9 = this->fields.simpleAnimationComponent;
    v10 = (UnityEngine_Animation_o *)System_String__Concat_44758168(
                                       this->fields.baseName,
                                       (System_String_o *)StringLiteral_16391/*"_loop"*/,
                                       0LL);
    if ( v9 )
    {
      Item = SimpleAnimation__get_Item(v9, (System_String_o *)v10, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v14 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v15 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v15;
            p_offset += 2;
            if ( v15 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_16;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_16:
          p_method = sub_B08590(Item, SimpleAnimation_State_TypeInfo, 18LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
          v14,
          2LL,
          *(_QWORD *)(p_method + 8));
      }
      v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v10 )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)v10, 0LL);
        goto LABEL_39;
      }
    }
    goto LABEL_40;
  }
  v19 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    goto LABEL_39;
  v20 = this->fields.animationComponent;
  v10 = (UnityEngine_Animation_o *)System_String__Concat_44758168(
                                     this->fields.baseName,
                                     (System_String_o *)StringLiteral_16391/*"_loop"*/,
                                     0LL);
  if ( !v20 )
    goto LABEL_40;
  v21 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v20, (System_String_o *)v10, 0LL);
  v10 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(v21, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_40;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v21, 2, 0LL);
  }
  v10 = this->fields.animationComponent;
  if ( !v10 )
LABEL_40:
    sub_B7076C(v10, v11);
  UnityEngine_Animation__Stop(v10, 0LL);
LABEL_39:
  this->fields.totaltime = 0.0;
  *(&this->fields.loop + 4) = 1;
  this->fields.playAnimation = 0LL;
  sub_B70630(&this->fields.playAnimation);
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
  CommonEffectComponent_c *v5; // x0
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *ANIMATION_NAME_TABLE; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *klass; // x8
  unsigned __int64 v8; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  System_String_o *baseName; // x20
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *v12; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *v13; // x8
  unsigned __int64 v14; // x10
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **v15; // x11
  __int64 v16; // x0
  System_String_o *v18; // x2

  if ( (byte_434DF69 & 1) == 0 )
  {
    sub_B70694(&CommonEffectComponent_TypeInfo);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_434DF69 = 1;
  }
  v5 = CommonEffectComponent_TypeInfo;
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v5 = CommonEffectComponent_TypeInfo;
  }
  ANIMATION_NAME_TABLE = v5->static_fields->ANIMATION_NAME_TABLE;
  if ( !ANIMATION_NAME_TABLE )
    goto LABEL_26;
  klass = ANIMATION_NAME_TABLE->klass;
  if ( *(_WORD *)&ANIMATION_NAME_TABLE->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&ANIMATION_NAME_TABLE->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_B08590(
                 ANIMATION_NAME_TABLE,
                 System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
                 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))p_method)(
          ANIMATION_NAME_TABLE,
          (unsigned int)status,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  v5 = CommonEffectComponent_TypeInfo;
  baseName = this->fields.baseName;
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v5 = CommonEffectComponent_TypeInfo;
  }
  v12 = v5->static_fields->ANIMATION_NAME_TABLE;
  if ( !v12 )
LABEL_26:
    sub_B7076C(v5, *(_QWORD *)&status);
  v13 = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = (System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 2].method;
  }
  else
  {
LABEL_22:
    v16 = sub_B08590(
            v12,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            2LL);
  }
  v18 = (System_String_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v16)(
                             v12,
                             (unsigned int)status,
                             *(_QWORD *)(v16 + 8));
  return System_String__Concat_44760452(baseName, (System_String_o *)StringLiteral_16127/*"_"*/, v18, 0LL);
}


void __fastcall CommonEffectComponent__Init(
        CommonEffectComponent_o *this,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  struct System_String_o **p_effectName; // x22
  UnityEngine_Object_o *gameObject; // x0
  __int64 v9; // x1
  System_String_o *v10; // x23
  System_String_o *v11; // x0
  System_String_o **p_baseName; // x23
  UnityEngine_Object_o *v13; // x22
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *transform; // x22
  int32_t layer; // w0
  const MethodInfo *v17; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x19

  if ( (byte_434DF55 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_5901/*"Effect("*/);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    sub_B70694(&StringLiteral_663/*")"*/);
    sub_B70694(&StringLiteral_619/*"(Clone)"*/);
    byte_434DF55 = 1;
  }
  if ( this->fields.status )
    return;
  p_effectName = &this->fields.effectName;
  if ( !this->fields.effectName )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_39;
    *p_effectName = UnityEngine_Object__get_name(gameObject, 0LL);
    sub_B70630(&this->fields.effectName);
    gameObject = (UnityEngine_Object_o *)*p_effectName;
    if ( !*p_effectName )
      goto LABEL_39;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_619/*"(Clone)"*/, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)*p_effectName;
      if ( !*p_effectName )
        goto LABEL_39;
      *p_effectName = System_String__Substring_44821904(
                        (System_String_o *)gameObject,
                        0,
                        gameObject->fields.m_CachedPtr - 7,
                        0LL);
      sub_B70630(&this->fields.effectName);
    }
  }
  if ( this->fields.useAnimNum >= 1 )
  {
    v10 = *p_effectName;
    v11 = System_Int32__ToString((int)this + 128, 0LL);
    *p_effectName = System_String__Concat_44760452(v10, (System_String_o *)StringLiteral_16127/*"_"*/, v11, 0LL);
    sub_B70630(&this->fields.effectName);
  }
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    *p_baseName = *p_effectName;
    sub_B70630(&this->fields.baseName);
    gameObject = (UnityEngine_Object_o *)*p_baseName;
    if ( !*p_baseName )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)System_String__LastIndexOf((System_String_o *)gameObject, 0x2Fu, 0LL);
    if ( ((unsigned int)gameObject & 0x80000000) == 0 )
    {
      if ( !*p_baseName )
        goto LABEL_39;
      *p_baseName = System_String__Substring(*p_baseName, (int)gameObject + 1, 0LL);
      sub_B70630(&this->fields.baseName);
    }
  }
  v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  gameObject = (UnityEngine_Object_o *)System_String__Concat_44760452(
                                         (System_String_o *)StringLiteral_5901/*"Effect("*/,
                                         this->fields.effectName,
                                         (System_String_o *)StringLiteral_663/*")"*/,
                                         0LL);
  if ( !v13 )
    goto LABEL_39;
  UnityEngine_Object__set_name(v13, (System_String_o *)gameObject, 0LL);
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
    sub_B7076C(gameObject, v9);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  CommonEffectComponent__SetChildInit(this, transform, layer, v17);
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
    v19 = 3LL;
    goto LABEL_34;
  }
  if ( *(&this->fields.loop + 4) )
  {
    klass = this->klass;
    v19 = 4LL;
LABEL_34:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))klass->vtable._5_NextPlayAnimation.method)(
      this,
      v19,
      klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(v20, 0LL);
}


void __fastcall CommonEffectComponent__Init_17832352(
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
    sub_B70630(&this->fields.effectName);
    CommonEffectComponent__Init(this, isSkip, isPause, v8);
  }
}


void __fastcall CommonEffectComponent__Init_17832428(
        CommonEffectComponent_o *this,
        AssetData_o *data,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( !this->fields.status )
  {
    this->fields.asset = data;
    v9 = sub_B70630(&this->fields.asset);
    if ( !data )
      sub_B7076C(v9, v10);
    this->fields.effectName = data->fields.name;
    sub_B70630(&this->fields.effectName);
    CommonEffectComponent__Init(this, isSkip, isPause, v11);
  }
}


bool __fastcall CommonEffectComponent__IsTouched(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isTouched;
}


void __fastcall CommonEffectComponent__NextPlayAnimation(
        CommonEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  struct System_String_o *v6; // x1
  __int64 name; // x0
  __int64 v8; // x8
  __int64 v9; // x21
  unsigned __int64 v10; // x10
  int *v11; // x11
  __int64 v12; // x0
  UnityEngine_Object_o *animationComponent; // x21
  __int64 v14; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v20; // x8
  unsigned __int64 v21; // x10
  System_Collections_IEnumerator_c **v22; // x11
  __int64 v23; // x0
  UnityEngine_AnimationState_o *v24; // x0
  __int64 v25; // x1
  struct System_Action_o **p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x21
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x21
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x22
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  SimpleAnimation_State_c **v49; // x11
  __int64 v50; // x0
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  SimpleAnimation_o *v55; // x20
  SimpleAnimation_State_o *v56; // x21
  struct System_Action_o **v57; // x0
  System_Action_o *v58; // x20
  SimpleAnimation_o *v59; // x20
  SimpleAnimation_State_o *v60; // x0
  CommonEffectComponent_o *v61; // x22
  SimpleAnimation_o *v62; // x20
  SimpleAnimation_State_c *v63; // x8
  unsigned __int64 v64; // x10
  SimpleAnimation_State_c **v65; // x11
  __int64 v66; // x0
  struct System_String_o **p_requestAnimation; // x0
  UnityEngine_Animation_o *v68; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  struct System_Action_o **v70; // x0
  System_Action_o *v71; // x20
  UnityEngine_Animation_o *v72; // x20
  UnityEngine_Animation_o *v73; // x20

  if ( (byte_434DF57 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_AnimationState_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    sub_B70694(&StringLiteral_16391/*"_loop"*/);
    sub_B70694(&StringLiteral_16415/*"_start"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_16378/*"_end"*/);
    byte_434DF57 = 1;
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
      if ( next == 4 )
      {
        if ( *(&this->fields.loop + 4) )
          next = 4;
        else
          next = 6;
      }
      else if ( next == 3 )
      {
        p_callAfterStart = &this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          *p_callAfterStart = 0LL;
          sub_B70630(p_callAfterStart);
          ActionExtensions__Call(callAfterStart, 0LL);
        }
        next = 3;
      }
      v6 = (struct System_String_o *)StringLiteral_1/*""*/;
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
      sub_B7076C(0LL, v14);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v17;
          p_offset += 4;
          if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_26;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_26:
        p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v20 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v21 = 0LL;
        v22 = (System_Collections_IEnumerator_c **)&v20->_1.interfaceOffsets->offset;
        while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v21;
          v22 += 2;
          if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_33;
        }
        v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1].method;
      }
      else
      {
LABEL_33:
        v23 = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v24 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(
                                              Enumerator,
                                              *(_QWORD *)(v23 + 8));
      if ( !v24 )
        sub_B7076C(0LL, v25);
      if ( v24->klass != UnityEngine_AnimationState_TypeInfo )
      {
        name = sub_B70A60(v24);
        goto LABEL_139;
      }
      UnityEngine_AnimationState__get_name(v24, 0LL);
    }
    v28 = sub_B70754(Enumerator, System_IDisposable_TypeInfo);
    if ( v28 )
    {
      v29 = *(_QWORD *)v28;
      v30 = v28;
      if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
      {
        v31 = 0LL;
        v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
        {
          ++v31;
          v32 += 4;
          if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
            goto LABEL_48;
        }
        v33 = v29 + 16LL * *v32 + 312;
      }
      else
      {
LABEL_48:
        v33 = sub_B08590(v28, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
    }
    if ( next == 6 )
      goto LABEL_124;
    if ( next != 4 )
    {
      if ( next != 3 )
      {
        Item = 0LL;
        goto LABEL_129;
      }
      v68 = this->fields.animationComponent;
      name = (__int64)System_String__Concat_44758168(this->fields.baseName, (System_String_o *)StringLiteral_16415/*"_start"*/, 0LL);
      if ( !v68 )
        goto LABEL_139;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v68, (System_String_o *)name, 0LL);
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
        next = 3;
        goto LABEL_129;
      }
    }
    v70 = &this->fields.callAfterStart;
    v71 = this->fields.callAfterStart;
    if ( v71 )
    {
      *v70 = 0LL;
      sub_B70630(v70);
      ActionExtensions__Call(v71, 0LL);
    }
    if ( !*(&this->fields.loop + 4) )
      goto LABEL_124;
    v72 = this->fields.animationComponent;
    name = (__int64)System_String__Concat_44758168(this->fields.baseName, (System_String_o *)StringLiteral_16391/*"_loop"*/, 0LL);
    if ( !v72 )
      goto LABEL_139;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v72, (System_String_o *)name, 0LL);
    if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
    {
LABEL_124:
      v73 = this->fields.animationComponent;
      name = (__int64)System_String__Concat_44758168(this->fields.baseName, (System_String_o *)StringLiteral_16378/*"_end"*/, 0LL);
      if ( !v73 )
        goto LABEL_139;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v73, (System_String_o *)name, 0LL);
      next = 6;
    }
    else
    {
      next = 4;
    }
LABEL_129:
    name = UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
    if ( (name & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_139;
      name = (__int64)UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
      v6 = (struct System_String_o *)name;
      if ( !this )
        goto LABEL_139;
    }
    else
    {
      v6 = (struct System_String_o *)StringLiteral_1/*""*/;
      if ( !this )
        goto LABEL_139;
    }
LABEL_134:
    this->fields.requestAnimation = v6;
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
  v8 = *(_QWORD *)name;
  v9 = name;
  if ( *(_WORD *)(*(_QWORD *)name + 298LL) )
  {
    v10 = 0LL;
    v11 = (int *)(*(_QWORD *)(v8 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)v11 - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v10;
      v11 += 4;
      if ( v10 >= *(unsigned __int16 *)(*(_QWORD *)name + 298LL) )
        goto LABEL_14;
    }
    v12 = v8 + 16LL * *v11 + 312;
  }
  else
  {
LABEL_14:
    v12 = sub_B08590(name, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
  if ( !v35 )
    sub_B7076C(0LL, v34);
  while ( 1 )
  {
    v36 = *(_QWORD *)v35;
    if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
          goto LABEL_55;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_55:
      v39 = sub_B08590(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v35;
    if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
    {
      v41 = 0LL;
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v42 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
          goto LABEL_62;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_62:
      v43 = sub_B08590(v35, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
    v46 = v44;
    if ( !v44 )
      sub_B7076C(0LL, v45);
    v47 = *(_QWORD *)v44;
    if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
    {
      v48 = 0LL;
      v49 = (SimpleAnimation_State_c **)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v48;
        v49 += 2;
        if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
          goto LABEL_69;
      }
      v50 = v47 + 16LL * (*(_DWORD *)v49 + 9) + 312;
    }
    else
    {
LABEL_69:
      v50 = sub_B08590(v44, SimpleAnimation_State_TypeInfo, 9LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8));
  }
  v51 = *(_QWORD *)v35;
  if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
  {
    v52 = 0LL;
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
        goto LABEL_76;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_76:
    v54 = sub_B08590(v35, System_IDisposable_TypeInfo, 0LL);
  }
  name = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v35, *(_QWORD *)(v54 + 8));
  if ( next != 6 )
  {
    if ( next != 4 )
    {
      if ( next != 3 )
        goto LABEL_100;
      v55 = this->fields.simpleAnimationComponent;
      name = (__int64)System_String__Concat_44758168(this->fields.baseName, (System_String_o *)StringLiteral_16415/*"_start"*/, 0LL);
      if ( !v55 )
        goto LABEL_139;
      v56 = SimpleAnimation__get_Item(v55, (System_String_o *)name, 0LL);
      if ( v56 )
        goto LABEL_85;
      name = (__int64)this->fields.simpleAnimationComponent;
      if ( !name )
        goto LABEL_139;
      v56 = SimpleAnimation__get_Item((SimpleAnimation_o *)name, this->fields.baseName, 0LL);
      if ( v56 )
      {
LABEL_85:
        this->fields.losttime = 0.0;
        next = 3;
LABEL_92:
        v61 = this;
        goto LABEL_95;
      }
    }
    v57 = &this->fields.callAfterStart;
    v58 = this->fields.callAfterStart;
    if ( v58 )
    {
      *v57 = 0LL;
      sub_B70630(v57);
      ActionExtensions__Call(v58, 0LL);
    }
    if ( *(&this->fields.loop + 4) )
    {
      v59 = this->fields.simpleAnimationComponent;
      name = (__int64)System_String__Concat_44758168(this->fields.baseName, (System_String_o *)StringLiteral_16391/*"_loop"*/, 0LL);
      if ( !v59 )
        goto LABEL_139;
      v60 = SimpleAnimation__get_Item(v59, (System_String_o *)name, 0LL);
      if ( v60 )
      {
        v56 = v60;
        next = 4;
        goto LABEL_92;
      }
    }
  }
  v62 = this->fields.simpleAnimationComponent;
  name = (__int64)System_String__Concat_44758168(this->fields.baseName, (System_String_o *)StringLiteral_16378/*"_end"*/, 0LL);
  if ( !v62 )
    goto LABEL_139;
  name = (__int64)SimpleAnimation__get_Item(v62, (System_String_o *)name, 0LL);
  v56 = (SimpleAnimation_State_o *)name;
  next = 6;
  v61 = this;
  if ( name )
  {
LABEL_95:
    v63 = v56->klass;
    if ( *(_WORD *)&v56->klass->_2.bitflags1 )
    {
      v64 = 0LL;
      v65 = (SimpleAnimation_State_c **)&v63->_1.interfaceOffsets->offset;
      while ( *(v65 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v64;
        v65 += 2;
        if ( v64 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
          goto LABEL_99;
      }
      v66 = (__int64)&v63->vtable[*(_DWORD *)v65 + 9].method;
    }
    else
    {
LABEL_99:
      v66 = sub_B08590(v56, SimpleAnimation_State_TypeInfo, 9LL);
    }
    name = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v66)(v56, *(_QWORD *)(v66 + 8));
    v6 = (struct System_String_o *)name;
    if ( v61 )
      goto LABEL_104;
LABEL_139:
    sub_B7076C(name, v6);
  }
LABEL_100:
  v61 = this;
  v6 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !this )
    goto LABEL_139;
LABEL_104:
  v61->fields.requestAnimation = v6;
  p_requestAnimation = &v61->fields.requestAnimation;
LABEL_135:
  sub_B70630(p_requestAnimation);
  this->fields.status = next;
}


void __fastcall CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *asset; // x21

  if ( (byte_434DF5F & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_434DF5F = 1;
  }
  asset = this->fields.asset;
  if ( asset )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_31197044(asset, 0LL);
    this->fields.asset = 0LL;
    sub_B70630(&this->fields.asset);
  }
  this->fields.status = 2;
}


void __fastcall CommonEffectComponent__OnRelease(CommonEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  CommonEffectComponent_o *v4; // x0
  const MethodInfo *v5; // x3
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_434DF65 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_CommonEffectComponent__OnRelease_b__74_0__);
    byte_434DF65 = 1;
  }
  *(_WORD *)&this->fields.isTouching = 256;
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_CommonEffectComponent__OnRelease_b__74_0__, 0LL);
  v6 = CommonEffectComponent__DelayFrameCoroutine(v4, 1, v3, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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


bool __fastcall CommonEffectComponent__PlayNormalAnimation(
        CommonEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  UnityEngine_Object_o *animationComponent; // x21
  const MethodInfo *v6; // x2
  System_String_o *AnimationName; // x21
  __int64 v8; // x1
  UnityEngine_Animation_o *name; // x0
  UnityEngine_TrackedReference_o *Item; // x21
  bool result; // w0
  UnityEngine_Animation_o *v12; // x22
  struct System_String_o **p_playAnimation; // x20

  if ( (byte_434DF68 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434DF68 = 1;
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
    || (v12 = this->fields.animationComponent,
        name = (UnityEngine_Animation_o *)UnityEngine_AnimationState__get_name(
                                            (UnityEngine_AnimationState_o *)Item,
                                            0LL),
        !v12) )
  {
LABEL_14:
    sub_B7076C(name, v8);
  }
  UnityEngine_Animation__Play_51542184(v12, (System_String_o *)name, 0LL);
  this->fields.playAnimation = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
  p_playAnimation = &this->fields.playAnimation;
  sub_B70630(p_playAnimation);
  result = 1;
  *((_DWORD *)p_playAnimation - 4) = next;
  return result;
}


void __fastcall CommonEffectComponent__PlaySe(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  int max_length; // w8
  System_String_array *v7; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x21
  SePlayer_o *v10; // x0
  SePlayer_o *v11; // x20
  __int64 v12; // x0
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_434DF60 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434DF60 = 1;
  }
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v4 = (System_String_array *)sub_B706AC(char___TypeInfo, 1LL);
    if ( !v4 )
      goto LABEL_22;
    v5 = v4;
    if ( !v4->max_length )
      goto LABEL_23;
    LOWORD(v4->m_Items[0]) = 58;
    if ( !name )
      goto LABEL_22;
    v4 = System_String__Split(name, (System_Char_array *)v4, 0LL);
    if ( !v4 )
      goto LABEL_22;
    max_length = v4->max_length;
    v7 = v4;
    if ( !max_length )
    {
LABEL_23:
      v12 = sub_B70798(v4);
      sub_B70738(v12, 0LL);
    }
    v8 = v4->m_Items[0];
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
    v9 = v4->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v10 = SoundManager__playSe_23182708(v8, v9, 0LL);
    result = 0.0;
    if ( (int)v7->max_length >= 3 )
    {
      v11 = v10;
      v4 = (System_String_array *)System_Single__TryParse(v7->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        if ( v11 )
        {
          SePlayer__set_Pitch(v11, result, 0LL);
          return;
        }
LABEL_22:
        sub_B7076C(v4, v5);
      }
    }
  }
}


void __fastcall CommonEffectComponent__PlaySeContinue(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  int max_length; // w8
  System_String_o *v7; // x19
  System_String_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_434DF61 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434DF61 = 1;
  }
  v4 = (System_String_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_17;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_18;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !name || (v4 = System_String__Split(name, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_17:
    sub_B7076C(v4, v5);
  max_length = v4->max_length;
  if ( !max_length )
  {
LABEL_18:
    v9 = sub_B70798(v4);
    sub_B70738(v9, 0LL);
  }
  v7 = v4->m_Items[0];
  if ( max_length >= 2 )
  {
    v8 = v4->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue_23206044(v7, v8, 0LL);
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
    CommonEffectComponent__PlayVoice_17840040(this, settedVoiceStr, this->fields.voiceCallback, v2);
}


bool __fastcall CommonEffectComponent__PlaySimpleAnimation(
        CommonEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v6; // x2
  System_String_o *AnimationName; // x21
  __int64 v8; // x1
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
  struct System_String_o **p_playAnimation; // x20

  if ( (byte_434DF67 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_434DF67 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(simpleAnimationComponent, 0LL, 0LL)
    || (AnimationName = CommonEffectComponent__GetAnimationName(this, next, v6),
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
      p_method = sub_B08590(Item, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v10 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v13,
                                 *(_QWORD *)(p_method + 8));
    if ( !v12 )
LABEL_26:
      sub_B7076C(v10, v8);
    SimpleAnimation__Play_16672920(v12, (System_String_o *)v10, 0LL);
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
      v20 = sub_B08590(v13, SimpleAnimation_State_TypeInfo, 9LL);
    }
    this->fields.playAnimation = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v20)(
                                                             v13,
                                                             *(_QWORD *)(v20 + 8));
    p_playAnimation = &this->fields.playAnimation;
    sub_B70630(p_playAnimation);
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

  CommonEffectComponent__PlayVoice_17840040(this, name, 0LL, v3);
}


void __fastcall CommonEffectComponent__PlayVoice_17840040(
        CommonEffectComponent_o *this,
        System_String_o *name,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *v6; // x0
  System_String_array *v7; // x1
  __int64 v8; // x8
  System_String_array *v9; // x20
  System_String_o *v10; // x20
  float v11; // s8
  float v12; // s0
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  __int64 v15; // x0

  if ( (byte_434DF62 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434DF62 = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v6 = (System_String_array *)sub_B706AC(char___TypeInfo, 1LL);
    if ( !v6 )
      goto LABEL_23;
    v7 = v6;
    if ( !v6->max_length )
      goto LABEL_24;
    LOWORD(v6->m_Items[0]) = 58;
    if ( !name || (v6 = System_String__Split(name, (System_Char_array *)v6, 0LL)) == 0LL )
LABEL_23:
      sub_B7076C(v6, v7);
    v8 = *(_QWORD *)&v6->max_length;
    v9 = v6;
    if ( (int)v8 < 2 )
    {
      if ( (_DWORD)v8 )
      {
        v10 = v6->m_Items[0];
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playVoice_23208972(v10, callback, 0LL);
        return;
      }
LABEL_24:
      v15 = sub_B70798(v6);
      sub_B70738(v15, 0LL);
    }
    if ( (_DWORD)v8 == 2 )
    {
      v11 = 1.0;
    }
    else
    {
      v12 = System_Single__Parse(v6->m_Items[2], 0LL);
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
    SoundManager__playVoice_23183232(v14, v13, v11, callback, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v10; // 0:x0.8

  v2 = this;
  if ( (byte_434DF64 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434DF64 = 1;
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
            v8 = sub_B70798(this);
            sub_B70738(v8, 0LL);
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
              sub_B7076C(this, v7);
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v6, 0LL).fields.m_ParticleSystem;
            v10.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem_MainModule__get_prewarm(v10, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem__get_isPlaying(
                                                  (UnityEngine_ParticleSystem_o *)v6,
                                                  0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                UnityEngine_ParticleSystem__Simulate_51599544((UnityEngine_ParticleSystem_o *)v6, 1.0, 0LL);
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


void __fastcall CommonEffectComponent__Resume(CommonEffectComponent_o *this, bool isSkip, const MethodInfo *method)
{
  _BOOL4 isStart; // w8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_434DF56 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434DF56 = 1;
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
          UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
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
  __int64 v4; // x1
  SimpleAnimation_o *v5; // x0

  if ( (byte_434DF5B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434DF5B = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_B7076C(0LL, v4);
    SimpleAnimation__Rewind(v5, 0LL);
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  unsigned __int64 v14; // x10
  System_Collections_IEnumerator_c **v15; // x11
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0

  v6 = this;
  if ( (byte_434DF5C & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    this = (CommonEffectComponent_o *)sub_B70694(&UnityEngine_Transform_TypeInfo);
    byte_434DF5C = 1;
  }
  if ( !tf
    || (this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_B7076C(this, tf);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_B7076C(0LL, v7);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v10 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v10;
          p_offset += 4;
          if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v13 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v14 = 0LL;
        v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
        while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v14;
          v15 += 2;
          if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
      }
      else
      {
LABEL_19:
        v16 = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                         Enumerator,
                                         *(_QWORD *)(v16 + 8));
      if ( v17 )
      {
        v19 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
          || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[v19 - 1] != UnityEngine_Transform_TypeInfo )
        {
          this = (CommonEffectComponent_o *)sub_B70A60(v17);
          goto LABEL_35;
        }
      }
      CommonEffectComponent__SetChildInit(v6, v17, layer, v18);
    }
    v20 = sub_B70754(Enumerator, System_IDisposable_TypeInfo);
    if ( v20 )
    {
      v21 = *(_QWORD *)v20;
      v22 = v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v23 = 0LL;
        v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
        {
          ++v23;
          v24 += 4;
          if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_30;
        }
        v25 = v21 + 16LL * *v24 + 312;
      }
      else
      {
LABEL_30:
        v25 = sub_B08590(v20, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
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
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  System_String_o *v6; // x19
  float v7; // s8
  __int64 v8; // x0

  if ( (byte_434DF63 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434DF63 = 1;
  }
  v4 = (System_String_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_13;
  v5 = v4;
  if ( !v4->max_length )
  {
    v8 = sub_B70798(v4);
    sub_B70738(v8, 0LL);
  }
  LOWORD(v4->m_Items[0]) = 58;
  if ( !str || (v4 = System_String__Split(str, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_13:
    sub_B7076C(v4, v5);
  if ( (int)v4->max_length >= 2 )
  {
    v6 = v4->m_Items[0];
    v7 = System_Single__Parse(v4->m_Items[1], 0LL);
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
  sub_B70630(&this->fields.touchCallback);
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
  sub_B70630(&this->fields.settedVoiceStr);
  this->fields.voiceCallback = 0LL;
  sub_B70630(&this->fields.voiceCallback);
}


void __fastcall CommonEffectComponent__SetVoice_17840488(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields.settedVoiceStr = voiceStr;
  sub_B70630(&this->fields.settedVoiceStr);
  this->fields.voiceCallback = callback;
  sub_B70630(&this->fields.voiceCallback);
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


void __fastcall CommonEffectComponent__StopInternal(
        CommonEffectComponent_o *this,
        bool force,
        bool isDestroy,
        System_Action_o *onStoppedCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *v10; // x0
  __int64 v11; // x1
  SimpleAnimation_o *v12; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v14; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v17; // x19
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_TrackedReference_o *v21; // x19

  if ( (byte_434DF5A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    sub_B70694(&StringLiteral_16391/*"_loop"*/);
    byte_434DF5A = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0LL);
    return;
  }
  this->fields.callAfterStop = onStoppedCallback;
  *(&this->fields.loop + 4) = 0;
  this->fields.isDestroy = isDestroy;
  sub_B70630(&this->fields.callAfterStop);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (System_String_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v12 = this->fields.simpleAnimationComponent;
    if ( force )
    {
      if ( v12 )
      {
        SimpleAnimation__Stop(this->fields.simpleAnimationComponent, 0LL);
        return;
      }
LABEL_33:
      sub_B7076C(v10, v11);
    }
    v10 = System_String__Concat_44758168(this->fields.baseName, (System_String_o *)StringLiteral_16391/*"_loop"*/, 0LL);
    if ( !v12 )
      goto LABEL_33;
    Item = SimpleAnimation__get_Item(v12, v10, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v17 = Item;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v18 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v18;
          p_offset += 2;
          if ( v18 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_25:
        p_method = sub_B08590(Item, SimpleAnimation_State_TypeInfo, 18LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v17, 1LL, *(_QWORD *)(p_method + 8));
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
    v10 = (System_String_o *)UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      v14 = this->fields.animationComponent;
      if ( force )
      {
        if ( !v14 )
          goto LABEL_33;
        UnityEngine_Animation__Stop(this->fields.animationComponent, 0LL);
      }
      else
      {
        v10 = System_String__Concat_44758168(this->fields.baseName, (System_String_o *)StringLiteral_16391/*"_loop"*/, 0LL);
        if ( !v14 )
          goto LABEL_33;
        v21 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v14, v10, 0LL);
        v10 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v21, 0LL, 0LL);
        if ( ((unsigned __int8)v10 & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_33;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v21, 1, 0LL);
        }
      }
    }
  }
}


void __fastcall CommonEffectComponent__Update(CommonEffectComponent_o *this, const MethodInfo *method)
{
  float totaltime; // s8
  const MethodInfo *v4; // x1
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *v6; // x21
  __int64 v7; // x1
  SimpleAnimation_o *v8; // x0
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  struct System_String_o **p_playAnimation; // x21
  UnityEngine_Object_o *animationComponent; // x21
  int32_t status; // w8
  struct System_String_o **v15; // x0
  UnityEngine_Object_o *v16; // x21
  struct UnityEngine_ParticleSystem_array *particlelist; // x23
  __int64 v18; // x8
  unsigned __int64 v19; // x24
  UnityEngine_Object_o *v20; // x21
  float v21; // s0
  struct System_Action_o **p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  UnityEngine_Object_o *gameObject; // x19
  __int64 v25; // x0

  if ( (byte_434DF5E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434DF5E = 1;
  }
  if ( this->fields.status < 3u )
    return;
  totaltime = this->fields.totaltime;
  this->fields.totaltime = totaltime + RealTime__get_deltaTime(0LL);
  CommonEffectComponent__UpdateTouchAnimation(this, v4);
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
    sub_B70630(p_playAnimation);
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
            sub_B70630(p_callAfterStop);
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
            UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
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
  v6 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
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
        SimpleAnimation__Play_16672920(v8, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_62;
        v8 = this->fields.simpleAnimationComponent;
        if ( v8 )
        {
          SimpleAnimation__Sample(v8, 0LL);
LABEL_62:
          v15 = &this->fields.playAnimation;
          this->fields.playAnimation = this->fields.requestAnimation;
          goto LABEL_63;
        }
      }
    }
    else
    {
      v16 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
        goto LABEL_62;
      v8 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v8 )
      {
        UnityEngine_Animation__Play_51542184((UnityEngine_Animation_o *)v8, this->fields.requestAnimation, 0LL);
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
    sub_B7076C(v8, v7);
  }
  this->fields.playAnimation = 0LL;
  v15 = &this->fields.playAnimation;
LABEL_63:
  v8 = (SimpleAnimation_o *)sub_B70630(v15);
  if ( this->fields.status == 6 )
  {
    particlelist = this->fields.particlelist;
    if ( particlelist )
    {
      v18 = *(_QWORD *)&particlelist->max_length;
      if ( (int)v18 >= 1 )
      {
        v19 = 0LL;
        do
        {
          if ( v19 >= (unsigned int)v18 )
          {
            v25 = sub_B70798(v8);
            sub_B70738(v25, 0LL);
          }
          v20 = (UnityEngine_Object_o *)particlelist->m_Items[v19];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v8 = (SimpleAnimation_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
          if ( ((unsigned __int8)v8 & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_90;
            UnityEngine_ParticleSystem__Stop_51600104((UnityEngine_ParticleSystem_o *)v20, 0LL);
          }
          LODWORD(v18) = particlelist->max_length;
          ++v19;
        }
        while ( (__int64)v19 < (int)v18 );
      }
    }
    v21 = this->fields.totaltime;
    if ( v21 > this->fields.losttime )
      this->fields.losttime = v21;
  }
  *p_requestAnimation = 0LL;
  sub_B70630(&this->fields.requestAnimation);
}


void __fastcall CommonEffectComponent__UpdateTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float touchStartTime; // s8
  CommonEffectComponent_c *v5; // x0
  CommonEffectComponent_c *v6; // x0

  if ( (byte_434DF6A & 1) == 0 )
  {
    sub_B70694(&CommonEffectComponent_TypeInfo);
    byte_434DF6A = 1;
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
    sub_B70630((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_CommonEffectComponent__DelayFrameCoroutine_d__75_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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