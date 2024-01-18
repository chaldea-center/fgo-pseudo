void __fastcall CommonEffectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  struct CommonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_4183E3E & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectComponent_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo, v4);
    sub_B2C35C(&StringLiteral_22266/*"start"*/, v5);
    sub_B2C35C(&StringLiteral_18342/*"end"*/, v6);
    sub_B2C35C(&StringLiteral_22737/*"touch"*/, v7);
    sub_B2C35C(&StringLiteral_20322/*"loop"*/, v8);
    byte_4183E3E = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v9,
    (const MethodInfo_2E457D0 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
  if ( !v9 )
    sub_B2C434(v10, v11);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v9,
    3,
    (System_String_o *)StringLiteral_22266/*"start"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v9,
    4,
    (System_String_o *)StringLiteral_20322/*"loop"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v9,
    5,
    (System_String_o *)StringLiteral_22737/*"touch"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v9,
    6,
    (System_String_o *)StringLiteral_18342/*"end"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  static_fields = CommonEffectComponent_TypeInfo->static_fields;
  static_fields->ANIMATION_NAME_TABLE = (struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *)v9;
  sub_B2C2F8(static_fields, v9);
  CommonEffectComponent_TypeInfo->static_fields->DEFAULT_TOUCH_START_TIME = -1.0;
}


void __fastcall CommonEffectComponent___ctor(CommonEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent_c *v8; // x0

  if ( (byte_4183E3D & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectComponent_TypeInfo, method);
    byte_4183E3D = 1;
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

  if ( (byte_4183E31 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    byte_4183E31 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animationComponent = Component_WebViewObject;
  sub_B2C2F8(&this->fields.animationComponent, Component_WebViewObject);
  v5 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = v5;
  sub_B2C2F8(&this->fields.simpleAnimationComponent, v5);
}


void __fastcall CommonEffectComponent__ForceLoop(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_ForceLoop.method)(
    this,
    0LL,
    this->klass->vtable._8_Stop.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__ForceLoop_17903472(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t status; // w8
  long double v9; // q0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v11; // x1
  SimpleAnimation_o *v12; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v14; // x20
  SimpleAnimation_o *v15; // x20
  SimpleAnimation_State_o *Item; // x0
  __int64 v17; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v19; // x20
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *v23; // x20
  UnityEngine_Animation_o *v24; // x20
  UnityEngine_TrackedReference_o *v25; // x20

  if ( (byte_4183E2D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_16154/*"_loop"*/, v7);
    byte_4183E2D = 1;
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
        v12 = this->fields.simpleAnimationComponent;
        if ( !v12 )
          goto LABEL_46;
        SimpleAnimation__Stop(v12, 0LL);
      }
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_45;
      v12 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v12 )
        goto LABEL_46;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v12, 0LL);
    }
LABEL_45:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer, long double))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr,
      v9);
    return;
  }
  if ( status != 2 )
  {
    v14 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    {
      v15 = this->fields.simpleAnimationComponent;
      v12 = (SimpleAnimation_o *)System_String__Concat_44305532(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16154/*"_loop"*/,
                                   0LL);
      if ( v15 )
      {
        Item = SimpleAnimation__get_Item(v15, (System_String_o *)v12, 0LL);
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
                goto LABEL_29;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_29:
            p_method = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 18LL, v17);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
            v19,
            2LL,
            *(_QWORD *)(p_method + 8));
        }
        v12 = this->fields.simpleAnimationComponent;
        if ( v12 )
        {
          SimpleAnimation__Stop(v12, 0LL);
          goto LABEL_44;
        }
      }
    }
    else
    {
      v23 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
        goto LABEL_44;
      v24 = this->fields.animationComponent;
      v12 = (SimpleAnimation_o *)System_String__Concat_44305532(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16154/*"_loop"*/,
                                   0LL);
      if ( v24 )
      {
        v25 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v24, (System_String_o *)v12, 0LL);
        v12 = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v25, 0LL, 0LL);
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_46;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v25, 2, 0LL);
        }
        v12 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v12 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v12, 0LL);
LABEL_44:
          this->fields.totaltime = 0.0;
          *(&this->fields.loop + 4) = 1;
          this->fields.playAnimation = 0LL;
          *(__n128 *)&v9 = sub_B2C2F8(&this->fields.playAnimation, 0LL);
          goto LABEL_45;
        }
      }
    }
LABEL_46:
    sub_B2C434(v12, v11);
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
void __fastcall CommonEffectComponent__ForceStart_17902744(
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
  __int64 v13; // x1
  SimpleAnimation_State_o *Item; // x0
  __int64 v15; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v17; // x20
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v22; // x20
  UnityEngine_Animation_o *v23; // x20
  UnityEngine_TrackedReference_o *v24; // x20
  long double v25; // q0

  if ( (byte_4183E2C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_16154/*"_loop"*/, v8);
    byte_4183E2C = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_B2C2F8(&this->fields.callAfterStart, callback);
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
    v12 = (UnityEngine_Animation_o *)System_String__Concat_44305532(
                                       this->fields.baseName,
                                       (System_String_o *)StringLiteral_16154/*"_loop"*/,
                                       0LL);
    if ( v11 )
    {
      Item = SimpleAnimation__get_Item(v11, (System_String_o *)v12, 0LL);
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
              goto LABEL_16;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_16:
          p_method = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 18LL, v15);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
          v17,
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
  v22 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    goto LABEL_39;
  v23 = this->fields.animationComponent;
  v12 = (UnityEngine_Animation_o *)System_String__Concat_44305532(
                                     this->fields.baseName,
                                     (System_String_o *)StringLiteral_16154/*"_loop"*/,
                                     0LL);
  if ( !v23 )
    goto LABEL_40;
  v24 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v23, (System_String_o *)v12, 0LL);
  v12 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(v24, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_40;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v24, 2, 0LL);
  }
  v12 = this->fields.animationComponent;
  if ( !v12 )
LABEL_40:
    sub_B2C434(v12, v13);
  UnityEngine_Animation__Stop(v12, 0LL);
LABEL_39:
  this->fields.totaltime = 0.0;
  *(&this->fields.loop + 4) = 1;
  this->fields.playAnimation = 0LL;
  *(__n128 *)&v25 = sub_B2C2F8(&this->fields.playAnimation, 0LL);
  ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer, long double))this->klass->vtable._5_NextPlayAnimation.method)(
    this,
    3LL,
    this->klass->vtable._6_ForceStart.methodPtr,
    v25);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  CommonEffectComponent_c *v8; // x0
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *ANIMATION_NAME_TABLE; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *klass; // x8
  unsigned __int64 v11; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_String_o *baseName; // x20
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *v16; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *v17; // x8
  unsigned __int64 v18; // x10
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **v19; // x11
  __int64 v20; // x0
  System_String_o *v22; // x2

  if ( (byte_4183E3B & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectComponent_TypeInfo, *(_QWORD *)&status);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo, v6);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v7);
    byte_4183E3B = 1;
  }
  v8 = CommonEffectComponent_TypeInfo;
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v8 = CommonEffectComponent_TypeInfo;
  }
  ANIMATION_NAME_TABLE = v8->static_fields->ANIMATION_NAME_TABLE;
  if ( !ANIMATION_NAME_TABLE )
    goto LABEL_26;
  klass = ANIMATION_NAME_TABLE->klass;
  if ( *(_WORD *)&ANIMATION_NAME_TABLE->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&ANIMATION_NAME_TABLE->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AC5258(
                 ANIMATION_NAME_TABLE,
                 System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
                 0LL,
                 v3);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))p_method)(
          ANIMATION_NAME_TABLE,
          (unsigned int)status,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  v8 = CommonEffectComponent_TypeInfo;
  baseName = this->fields.baseName;
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v8 = CommonEffectComponent_TypeInfo;
  }
  v16 = v8->static_fields->ANIMATION_NAME_TABLE;
  if ( !v16 )
LABEL_26:
    sub_B2C434(v8, *(_QWORD *)&status);
  v17 = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = (System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      ++v18;
      v19 += 2;
      if ( v18 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 2].method;
  }
  else
  {
LABEL_22:
    v20 = sub_AC5258(
            v16,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            2LL,
            v14);
  }
  v22 = (System_String_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v20)(
                             v16,
                             (unsigned int)status,
                             *(_QWORD *)(v20 + 8));
  return System_String__Concat_44307816(baseName, (System_String_o *)StringLiteral_15905/*"_"*/, v22, 0LL);
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
  __int64 v13; // x1
  System_String_o *name; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x23
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  System_String_o **p_baseName; // x23
  struct System_String_o *v20; // x1
  System_String_o *v21; // x0
  UnityEngine_Object_o *v22; // x22
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *transform; // x22
  int32_t layer; // w0
  const MethodInfo *v26; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x19

  if ( (byte_4183E29 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isSkip);
    sub_B2C35C(&StringLiteral_5811/*"Effect("*/, v7);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v8);
    sub_B2C35C(&StringLiteral_652/*")"*/, v9);
    sub_B2C35C(&StringLiteral_609/*"(Clone)"*/, v10);
    byte_4183E29 = 1;
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
    sub_B2C2F8(&this->fields.effectName, name);
    gameObject = (UnityEngine_Object_o *)*p_effectName;
    if ( !*p_effectName )
      goto LABEL_39;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_609/*"(Clone)"*/, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)*p_effectName;
      if ( !*p_effectName )
        goto LABEL_39;
      v15 = System_String__Substring_44369268((System_String_o *)gameObject, 0, gameObject->fields.m_CachedPtr - 7, 0LL);
      *p_effectName = v15;
      sub_B2C2F8(&this->fields.effectName, v15);
    }
  }
  if ( this->fields.useAnimNum >= 1 )
  {
    v16 = *p_effectName;
    v17 = System_Int32__ToString((int)this + 128, 0LL);
    v18 = System_String__Concat_44307816(v16, (System_String_o *)StringLiteral_15905/*"_"*/, v17, 0LL);
    *p_effectName = v18;
    sub_B2C2F8(&this->fields.effectName, v18);
  }
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    v20 = *p_effectName;
    *p_baseName = *p_effectName;
    sub_B2C2F8(&this->fields.baseName, v20);
    gameObject = (UnityEngine_Object_o *)*p_baseName;
    if ( !*p_baseName )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)System_String__LastIndexOf((System_String_o *)gameObject, 0x2Fu, 0LL);
    if ( ((unsigned int)gameObject & 0x80000000) == 0 )
    {
      if ( !*p_baseName )
        goto LABEL_39;
      v21 = System_String__Substring(*p_baseName, (int)gameObject + 1, 0LL);
      *p_baseName = v21;
      sub_B2C2F8(&this->fields.baseName, v21);
    }
  }
  v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  gameObject = (UnityEngine_Object_o *)System_String__Concat_44307816(
                                         (System_String_o *)StringLiteral_5811/*"Effect("*/,
                                         this->fields.effectName,
                                         (System_String_o *)StringLiteral_652/*")"*/,
                                         0LL);
  if ( !v22 )
    goto LABEL_39;
  UnityEngine_Object__set_name(v22, (System_String_o *)gameObject, 0LL);
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
    sub_B2C434(gameObject, v13);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  CommonEffectComponent__SetChildInit(this, transform, layer, v26);
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
    v28 = 3LL;
    goto LABEL_34;
  }
  if ( *(&this->fields.loop + 4) )
  {
    klass = this->klass;
    v28 = 4LL;
LABEL_34:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))klass->vtable._5_NextPlayAnimation.method)(
      this,
      v28,
      klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(v29, 0LL);
}


void __fastcall CommonEffectComponent__Init_17899744(
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
    sub_B2C2F8(&this->fields.effectName, effectName);
    CommonEffectComponent__Init(this, isSkip, isPause, v8);
  }
}


void __fastcall CommonEffectComponent__Init_17899820(
        CommonEffectComponent_o *this,
        AssetData_o *data,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_String_o *name; // x1
  const MethodInfo *v12; // x3

  if ( !this->fields.status )
  {
    this->fields.asset = data;
    sub_B2C2F8(&this->fields.asset, data);
    if ( !data )
      sub_B2C434(v9, v10);
    name = data->fields.name;
    this->fields.effectName = name;
    sub_B2C2F8(&this->fields.effectName, name);
    CommonEffectComponent__Init(this, isSkip, isPause, v12);
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
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  struct System_String_o *v16; // x1
  __int64 name; // x0
  __int64 v18; // x3
  __int64 v19; // x8
  __int64 v20; // x21
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  UnityEngine_Object_o *animationComponent; // x21
  __int64 v25; // x1
  __int64 v26; // x3
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x3
  System_Collections_IEnumerator_c *v33; // x8
  unsigned __int64 v34; // x10
  System_Collections_IEnumerator_c **v35; // x11
  __int64 v36; // x0
  UnityEngine_AnimationState_o *v37; // x0
  __int64 v38; // x1
  struct System_Action_o **p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  __int64 v41; // x0
  __int64 v42; // x3
  __int64 v43; // x8
  __int64 v44; // x21
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x3
  __int64 v50; // x21
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x3
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x3
  __int64 v63; // x22
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  SimpleAnimation_State_c **v66; // x11
  __int64 v67; // x0
  __int64 v68; // x8
  unsigned __int64 v69; // x10
  int *v70; // x11
  __int64 v71; // x0
  SimpleAnimation_o *v72; // x20
  __int64 v73; // x3
  SimpleAnimation_State_o *v74; // x21
  struct System_Action_o **v75; // x0
  System_Action_o *v76; // x20
  SimpleAnimation_o *v77; // x20
  SimpleAnimation_State_o *v78; // x0
  CommonEffectComponent_o *v79; // x22
  SimpleAnimation_o *v80; // x20
  SimpleAnimation_State_c *v81; // x8
  unsigned __int64 v82; // x10
  SimpleAnimation_State_c **v83; // x11
  __int64 v84; // x0
  struct System_String_o **p_requestAnimation; // x0
  UnityEngine_Animation_o *v86; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  struct System_Action_o **v88; // x0
  System_Action_o *v89; // x20
  UnityEngine_Animation_o *v90; // x20
  UnityEngine_Animation_o *v91; // x20

  v3 = next;
  if ( (byte_4183E2B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AnimationState_TypeInfo, *(_QWORD *)&next);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_16154/*"_loop"*/, v11);
    sub_B2C35C(&StringLiteral_16178/*"_start"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    sub_B2C35C(&StringLiteral_16141/*"_end"*/, v14);
    byte_4183E2B = 1;
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
          sub_B2C2F8(p_callAfterStart, 0LL);
          ActionExtensions__Call(callAfterStart, 0LL);
        }
        v3 = 3;
      }
      v16 = (struct System_String_o *)StringLiteral_1/*""*/;
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
      sub_B2C434(0LL, v25);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v29 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v29;
          p_offset += 4;
          if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_26;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_26:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v26);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v33 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v34 = 0LL;
        v35 = (System_Collections_IEnumerator_c **)&v33->_1.interfaceOffsets->offset;
        while ( *(v35 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v34;
          v35 += 2;
          if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_33;
        }
        v36 = (__int64)&v33->vtable[*(_DWORD *)v35 + 1].method;
      }
      else
      {
LABEL_33:
        v36 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v32);
      }
      v37 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v36)(
                                              Enumerator,
                                              *(_QWORD *)(v36 + 8));
      if ( !v37 )
        sub_B2C434(0LL, v38);
      if ( v37->klass != UnityEngine_AnimationState_TypeInfo )
      {
        name = sub_B2C728(v37);
        goto LABEL_139;
      }
      UnityEngine_AnimationState__get_name(v37, 0LL);
    }
    v41 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
    if ( v41 )
    {
      v43 = *(_QWORD *)v41;
      v44 = v41;
      if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
      {
        v45 = 0LL;
        v46 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
        {
          ++v45;
          v46 += 4;
          if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
            goto LABEL_48;
        }
        v47 = v43 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_48:
        v47 = sub_AC5258(v41, System_IDisposable_TypeInfo, 0LL, v42);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v47)(v44, *(_QWORD *)(v47 + 8));
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
      v86 = this->fields.animationComponent;
      name = (__int64)System_String__Concat_44305532(this->fields.baseName, (System_String_o *)StringLiteral_16178/*"_start"*/, 0LL);
      if ( !v86 )
        goto LABEL_139;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v86, (System_String_o *)name, 0LL);
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
    v88 = &this->fields.callAfterStart;
    v89 = this->fields.callAfterStart;
    if ( v89 )
    {
      *v88 = 0LL;
      sub_B2C2F8(v88, 0LL);
      ActionExtensions__Call(v89, 0LL);
    }
    if ( !*(&this->fields.loop + 4) )
      goto LABEL_124;
    v90 = this->fields.animationComponent;
    name = (__int64)System_String__Concat_44305532(this->fields.baseName, (System_String_o *)StringLiteral_16154/*"_loop"*/, 0LL);
    if ( !v90 )
      goto LABEL_139;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v90, (System_String_o *)name, 0LL);
    if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
    {
LABEL_124:
      v91 = this->fields.animationComponent;
      name = (__int64)System_String__Concat_44305532(this->fields.baseName, (System_String_o *)StringLiteral_16141/*"_end"*/, 0LL);
      if ( !v91 )
        goto LABEL_139;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v91, (System_String_o *)name, 0LL);
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
      v16 = (struct System_String_o *)name;
      if ( !this )
        goto LABEL_139;
    }
    else
    {
      v16 = (struct System_String_o *)StringLiteral_1/*""*/;
      if ( !this )
        goto LABEL_139;
    }
LABEL_134:
    this->fields.requestAnimation = v16;
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
  v19 = *(_QWORD *)name;
  v20 = name;
  if ( *(_WORD *)(*(_QWORD *)name + 298LL) )
  {
    v21 = 0LL;
    v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)v22 - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)name + 298LL) )
        goto LABEL_14;
    }
    v23 = v19 + 16LL * *v22 + 312;
  }
  else
  {
LABEL_14:
    v23 = sub_AC5258(name, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v18);
  }
  v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v50 )
    sub_B2C434(0LL, v48);
  while ( 1 )
  {
    v51 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v52 = 0LL;
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v52;
        v53 += 4;
        if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_55;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_55:
      v54 = sub_AC5258(v50, System_Collections_IEnumerator_TypeInfo, 0LL, v49);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
      break;
    v56 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v57 = 0LL;
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v58 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v57;
        v58 += 4;
        if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_62;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_62:
      v59 = sub_AC5258(v50, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v55);
    }
    v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v50, *(_QWORD *)(v59 + 8));
    v63 = v60;
    if ( !v60 )
      sub_B2C434(0LL, v61);
    v64 = *(_QWORD *)v60;
    if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
    {
      v65 = 0LL;
      v66 = (SimpleAnimation_State_c **)(*(_QWORD *)(v64 + 176) + 8LL);
      while ( *(v66 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v65;
        v66 += 2;
        if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
          goto LABEL_69;
      }
      v67 = v64 + 16LL * (*(_DWORD *)v66 + 9) + 312;
    }
    else
    {
LABEL_69:
      v67 = sub_AC5258(v60, SimpleAnimation_State_TypeInfo, 9LL, v62);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8));
  }
  v68 = *(_QWORD *)v50;
  if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
  {
    v69 = 0LL;
    v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      ++v69;
      v70 += 4;
      if ( v69 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
        goto LABEL_76;
    }
    v71 = v68 + 16LL * *v70 + 312;
  }
  else
  {
LABEL_76:
    v71 = sub_AC5258(v50, System_IDisposable_TypeInfo, 0LL, v55);
  }
  name = (*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v50, *(_QWORD *)(v71 + 8));
  if ( v3 != 6 )
  {
    if ( v3 != 4 )
    {
      if ( v3 != 3 )
        goto LABEL_100;
      v72 = this->fields.simpleAnimationComponent;
      name = (__int64)System_String__Concat_44305532(this->fields.baseName, (System_String_o *)StringLiteral_16178/*"_start"*/, 0LL);
      if ( !v72 )
        goto LABEL_139;
      v74 = SimpleAnimation__get_Item(v72, (System_String_o *)name, 0LL);
      if ( v74 )
        goto LABEL_85;
      name = (__int64)this->fields.simpleAnimationComponent;
      if ( !name )
        goto LABEL_139;
      v74 = SimpleAnimation__get_Item((SimpleAnimation_o *)name, this->fields.baseName, 0LL);
      if ( v74 )
      {
LABEL_85:
        this->fields.losttime = 0.0;
        v3 = 3;
LABEL_92:
        v79 = this;
        goto LABEL_95;
      }
    }
    v75 = &this->fields.callAfterStart;
    v76 = this->fields.callAfterStart;
    if ( v76 )
    {
      *v75 = 0LL;
      sub_B2C2F8(v75, 0LL);
      ActionExtensions__Call(v76, 0LL);
    }
    if ( *(&this->fields.loop + 4) )
    {
      v77 = this->fields.simpleAnimationComponent;
      name = (__int64)System_String__Concat_44305532(this->fields.baseName, (System_String_o *)StringLiteral_16154/*"_loop"*/, 0LL);
      if ( !v77 )
        goto LABEL_139;
      v78 = SimpleAnimation__get_Item(v77, (System_String_o *)name, 0LL);
      if ( v78 )
      {
        v74 = v78;
        v3 = 4;
        goto LABEL_92;
      }
    }
  }
  v80 = this->fields.simpleAnimationComponent;
  name = (__int64)System_String__Concat_44305532(this->fields.baseName, (System_String_o *)StringLiteral_16141/*"_end"*/, 0LL);
  if ( !v80 )
    goto LABEL_139;
  name = (__int64)SimpleAnimation__get_Item(v80, (System_String_o *)name, 0LL);
  v74 = (SimpleAnimation_State_o *)name;
  v3 = 6;
  v79 = this;
  if ( name )
  {
LABEL_95:
    v81 = v74->klass;
    if ( *(_WORD *)&v74->klass->_2.bitflags1 )
    {
      v82 = 0LL;
      v83 = (SimpleAnimation_State_c **)&v81->_1.interfaceOffsets->offset;
      while ( *(v83 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v82;
        v83 += 2;
        if ( v82 >= *(unsigned __int16 *)&v74->klass->_2.bitflags1 )
          goto LABEL_99;
      }
      v84 = (__int64)&v81->vtable[*(_DWORD *)v83 + 9].method;
    }
    else
    {
LABEL_99:
      v84 = sub_AC5258(v74, SimpleAnimation_State_TypeInfo, 9LL, v73);
    }
    name = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v84)(v74, *(_QWORD *)(v84 + 8));
    v16 = (struct System_String_o *)name;
    if ( v79 )
      goto LABEL_104;
LABEL_139:
    sub_B2C434(name, v16);
  }
LABEL_100:
  v79 = this;
  v16 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !this )
    goto LABEL_139;
LABEL_104:
  v79->fields.requestAnimation = v16;
  p_requestAnimation = &v79->fields.requestAnimation;
LABEL_135:
  sub_B2C2F8(p_requestAnimation, v16);
  this->fields.status = v3;
}


void __fastcall CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *asset; // x21

  if ( (byte_4183E33 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_4183E33 = 1;
  }
  asset = this->fields.asset;
  if ( asset )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30152684(asset, 0LL);
    this->fields.asset = 0LL;
    sub_B2C2F8(&this->fields.asset, 0LL);
  }
  this->fields.status = 2;
}


void __fastcall CommonEffectComponent__OnRelease(CommonEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isTouching = 0;
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
  __int64 v8; // x1
  UnityEngine_Animation_o *name; // x0
  UnityEngine_TrackedReference_o *Item; // x21
  bool result; // w0
  UnityEngine_Animation_o *v12; // x22
  struct System_String_o *v13; // x0
  struct System_String_o **p_playAnimation; // x20

  if ( (byte_4183E3A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    byte_4183E3A = 1;
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
    sub_B2C434(name, v8);
  }
  UnityEngine_Animation__Play_50201580(v12, (System_String_o *)name, 0LL);
  v13 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
  this->fields.playAnimation = v13;
  p_playAnimation = &this->fields.playAnimation;
  sub_B2C2F8(p_playAnimation, v13);
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
  System_String_array *v6; // x1
  int max_length; // w8
  System_String_array *v8; // x19
  System_String_o *v9; // x20
  System_String_o *v10; // x21
  SePlayer_o *v11; // x0
  SePlayer_o *v12; // x20
  __int64 v13; // x0
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4183E34 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, name);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4183E34 = 1;
  }
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v5 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v5 )
      goto LABEL_22;
    v6 = v5;
    if ( !v5->max_length )
      goto LABEL_23;
    LOWORD(v5->m_Items[0]) = 58;
    if ( !name )
      goto LABEL_22;
    v5 = System_String__Split(name, (System_Char_array *)v5, 0LL);
    if ( !v5 )
      goto LABEL_22;
    max_length = v5->max_length;
    v8 = v5;
    if ( !max_length )
    {
LABEL_23:
      v13 = sub_B2C460(v5);
      sub_B2C400(v13, 0LL);
    }
    v9 = v5->m_Items[0];
    if ( max_length < 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v9, 0LL);
      return;
    }
    v10 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v11 = SoundManager__playSe_24786276(v9, v10, 0LL);
    result = 0.0;
    if ( (int)v8->max_length >= 3 )
    {
      v12 = v11;
      v5 = (System_String_array *)System_Single__TryParse(v8->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( v12 )
        {
          SePlayer__set_Pitch(v12, result, 0LL);
          return;
        }
LABEL_22:
        sub_B2C434(v5, v6);
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
  System_String_array *v6; // x1
  int max_length; // w8
  System_String_o *v8; // x19
  System_String_o *v9; // x20
  __int64 v10; // x0

  if ( (byte_4183E35 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, name);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4183E35 = 1;
  }
  v5 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_17;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_18;
  LOWORD(v5->m_Items[0]) = 58;
  if ( !name || (v5 = System_String__Split(name, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_17:
    sub_B2C434(v5, v6);
  max_length = v5->max_length;
  if ( !max_length )
  {
LABEL_18:
    v10 = sub_B2C460(v5);
    sub_B2C400(v10, 0LL);
  }
  v8 = v5->m_Items[0];
  if ( max_length >= 2 )
  {
    v9 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue_24809436(v8, v9, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue(v8, 0LL);
  }
}


void __fastcall CommonEffectComponent__PlaySettedVoice(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *settedVoiceStr; // x1

  settedVoiceStr = this->fields.settedVoiceStr;
  if ( settedVoiceStr )
    CommonEffectComponent__PlayVoice_17907432(this, settedVoiceStr, this->fields.voiceCallback, v2);
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
  __int64 v9; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_o *v11; // x0
  __int64 v12; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_o *v14; // x22
  SimpleAnimation_State_o *v15; // x21
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  SimpleAnimation_State_c *v20; // x8
  unsigned __int64 v21; // x10
  SimpleAnimation_State_c **v22; // x11
  __int64 v23; // x0
  struct System_String_o *v24; // x0
  struct System_String_o **p_playAnimation; // x20

  if ( (byte_4183E39 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v5);
    byte_4183E39 = 1;
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
    v11 = this->fields.simpleAnimationComponent;
    if ( !v11 )
      goto LABEL_26;
    Item = SimpleAnimation__get_Item(v11, AnimationName, 0LL);
    if ( !Item )
      return (char)Item;
    klass = Item->klass;
    v14 = this->fields.simpleAnimationComponent;
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
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
    }
    else
    {
LABEL_16:
      p_method = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 9LL, v12);
    }
    v11 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v15,
                                 *(_QWORD *)(p_method + 8));
    if ( !v14 )
LABEL_26:
      sub_B2C434(v11, v9);
    SimpleAnimation__Play_16486620(v14, (System_String_o *)v11, 0LL);
    v20 = v15->klass;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = (SimpleAnimation_State_c **)&v20->_1.interfaceOffsets->offset;
      while ( *(v22 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v21;
        v22 += 2;
        if ( v21 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 9].method;
    }
    else
    {
LABEL_23:
      v23 = sub_AC5258(v15, SimpleAnimation_State_TypeInfo, 9LL, v19);
    }
    v24 = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v23)(
                                      v15,
                                      *(_QWORD *)(v23 + 8));
    this->fields.playAnimation = v24;
    p_playAnimation = &this->fields.playAnimation;
    sub_B2C2F8(p_playAnimation, v24);
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

  CommonEffectComponent__PlayVoice_17907432(this, name, 0LL, v3);
}


void __fastcall CommonEffectComponent__PlayVoice_17907432(
        CommonEffectComponent_o *this,
        System_String_o *name,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_String_array *v7; // x0
  System_String_array *v8; // x1
  __int64 v9; // x8
  System_String_array *v10; // x20
  System_String_o *v11; // x20
  float v12; // s8
  float v13; // s0
  System_String_o *v14; // x20
  System_String_o *v15; // x21
  __int64 v16; // x0

  if ( (byte_4183E36 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, name);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_4183E36 = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v7 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v7 )
      goto LABEL_23;
    v8 = v7;
    if ( !v7->max_length )
      goto LABEL_24;
    LOWORD(v7->m_Items[0]) = 58;
    if ( !name || (v7 = System_String__Split(name, (System_Char_array *)v7, 0LL)) == 0LL )
LABEL_23:
      sub_B2C434(v7, v8);
    v9 = *(_QWORD *)&v7->max_length;
    v10 = v7;
    if ( (int)v9 < 2 )
    {
      if ( (_DWORD)v9 )
      {
        v11 = v7->m_Items[0];
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playVoice_24812364(v11, callback, 0LL);
        return;
      }
LABEL_24:
      v16 = sub_B2C460(v7);
      sub_B2C400(v16, 0LL);
    }
    if ( (_DWORD)v9 == 2 )
    {
      v12 = 1.0;
    }
    else
    {
      v13 = System_Single__Parse(v7->m_Items[2], 0LL);
      v9 = *(_QWORD *)&v10->max_length;
      v12 = v13;
      if ( !(_DWORD)v9 )
        goto LABEL_24;
    }
    if ( (_DWORD)v9 == 1 )
      goto LABEL_24;
    v15 = v10->m_Items[0];
    v14 = v10->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playVoice_24786800(v15, v14, v12, callback, 0LL);
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
  if ( (byte_4183E38 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4183E38 = 1;
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
            v8 = sub_B2C460(this);
            sub_B2C400(v8, 0LL);
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
              sub_B2C434(this, v7);
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
                UnityEngine_ParticleSystem__Simulate_50258940((UnityEngine_ParticleSystem_o *)v6, 1.0, 0LL);
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

  if ( (byte_4183E2A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isSkip);
    byte_4183E2A = 1;
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
          UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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

  if ( (byte_4183E2F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4183E2F = 1;
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
      sub_B2C434(0LL, v4);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_IEnumerator_c *v17; // x8
  unsigned __int64 v18; // x10
  System_Collections_IEnumerator_c **v19; // x11
  __int64 v20; // x0
  UnityEngine_Transform_o *v21; // x0
  const MethodInfo *v22; // x3
  __int64 v23; // x10
  __int64 v24; // x0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x19
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0

  v6 = this;
  if ( (byte_4183E30 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, tf);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (CommonEffectComponent_o *)sub_B2C35C(&UnityEngine_Transform_TypeInfo, v8);
    byte_4183E30 = 1;
  }
  if ( !tf
    || (this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_B2C434(this, tf);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_B2C434(0LL, v9);
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
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v17 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v18 = 0LL;
        v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
        while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v18;
          v19 += 2;
          if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
      }
      else
      {
LABEL_19:
        v20 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v16);
      }
      v21 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                         Enumerator,
                                         *(_QWORD *)(v20 + 8));
      if ( v21 )
      {
        v23 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v23
          || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[v23 - 1] != UnityEngine_Transform_TypeInfo )
        {
          this = (CommonEffectComponent_o *)sub_B2C728(v21);
          goto LABEL_35;
        }
      }
      CommonEffectComponent__SetChildInit(v6, v21, layer, v22);
    }
    v24 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
    if ( v24 )
    {
      v26 = *(_QWORD *)v24;
      v27 = v24;
      if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
      {
        v28 = 0LL;
        v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
            goto LABEL_30;
        }
        v30 = v26 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_30:
        v30 = sub_AC5258(v24, System_IDisposable_TypeInfo, 0LL, v25);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
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
  System_String_array *v6; // x1
  System_String_o *v7; // x19
  float v8; // s8
  __int64 v9; // x0

  if ( (byte_4183E37 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, str);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4183E37 = 1;
  }
  v5 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_13;
  v6 = v5;
  if ( !v5->max_length )
  {
    v9 = sub_B2C460(v5);
    sub_B2C400(v9, 0LL);
  }
  LOWORD(v5->m_Items[0]) = 58;
  if ( !str || (v5 = System_String__Split(str, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_13:
    sub_B2C434(v5, v6);
  if ( (int)v5->max_length >= 2 )
  {
    v7 = v5->m_Items[0];
    v8 = System_Single__Parse(v5->m_Items[1], 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__setPitchSe(v7, v8, 0LL);
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
  sub_B2C2F8(&this->fields.touchCallback, inputTouchCallback);
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
  sub_B2C2F8(&this->fields.settedVoiceStr, voiceStr);
  this->fields.voiceCallback = 0LL;
  sub_B2C2F8(&this->fields.voiceCallback, 0LL);
}


void __fastcall CommonEffectComponent__SetVoice_17907880(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields.settedVoiceStr = voiceStr;
  sub_B2C2F8(&this->fields.settedVoiceStr, voiceStr);
  this->fields.voiceCallback = callback;
  sub_B2C2F8(&this->fields.voiceCallback, callback);
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
  __int64 v13; // x1
  SimpleAnimation_o *v14; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v16; // x21
  SimpleAnimation_State_o *Item; // x0
  __int64 v18; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v20; // x19
  unsigned __int64 v21; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_TrackedReference_o *v24; // x19

  if ( (byte_4183E2E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, force);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_16154/*"_loop"*/, v10);
    byte_4183E2E = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0LL);
    return;
  }
  this->fields.callAfterStop = onStoppedCallback;
  *(&this->fields.loop + 4) = 0;
  this->fields.isDestroy = isDestroy;
  sub_B2C2F8(&this->fields.callAfterStop, onStoppedCallback);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (System_String_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    v14 = this->fields.simpleAnimationComponent;
    if ( force )
    {
      if ( v14 )
      {
        SimpleAnimation__Stop(this->fields.simpleAnimationComponent, 0LL);
        return;
      }
LABEL_33:
      sub_B2C434(v12, v13);
    }
    v12 = System_String__Concat_44305532(this->fields.baseName, (System_String_o *)StringLiteral_16154/*"_loop"*/, 0LL);
    if ( !v14 )
      goto LABEL_33;
    Item = SimpleAnimation__get_Item(v14, v12, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v20 = Item;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v21 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v21;
          p_offset += 2;
          if ( v21 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_25:
        p_method = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 18LL, v18);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v20, 1LL, *(_QWORD *)(p_method + 8));
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
      v16 = this->fields.animationComponent;
      if ( force )
      {
        if ( !v16 )
          goto LABEL_33;
        UnityEngine_Animation__Stop(this->fields.animationComponent, 0LL);
      }
      else
      {
        v12 = System_String__Concat_44305532(this->fields.baseName, (System_String_o *)StringLiteral_16154/*"_loop"*/, 0LL);
        if ( !v16 )
          goto LABEL_33;
        v24 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v16, v12, 0LL);
        v12 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v24, 0LL, 0LL);
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
          if ( !v24 )
            goto LABEL_33;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v24, 1, 0LL);
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
  __int64 v8; // x1
  SimpleAnimation_o *v9; // x0
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  struct System_String_o **p_playAnimation; // x21
  long double v14; // q0
  UnityEngine_Object_o *animationComponent; // x21
  int32_t status; // w8
  struct System_String_o **v17; // x0
  struct System_String_o *requestAnimation; // x1
  UnityEngine_Object_o *v19; // x21
  struct UnityEngine_ParticleSystem_array *particlelist; // x23
  __int64 v21; // x8
  unsigned __int64 v22; // x24
  UnityEngine_Object_o *v23; // x21
  float v24; // s0
  struct System_Action_o **p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  UnityEngine_Object_o *gameObject; // x19
  __int64 v28; // x0

  if ( (byte_4183E32 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4183E32 = 1;
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
      v9 = this->fields.simpleAnimationComponent;
      if ( !v9 )
        goto LABEL_90;
      if ( SimpleAnimation__CheckPlaying(v9, 0LL) )
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
      v9 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v9 )
        goto LABEL_90;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v9, 0LL) )
        return;
    }
    status = this->fields.status;
    if ( status != 6 )
      goto LABEL_47;
    *p_playAnimation = 0LL;
    *(__n128 *)&v14 = sub_B2C2F8(p_playAnimation, 0LL);
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
            sub_B2C2F8(p_callAfterStop, 0LL);
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
            UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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
      *(float *)&v14 = this->fields.losttime;
      if ( *(float *)&v14 > this->fields.totaltime )
        return;
    }
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer, long double))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr,
      v14);
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
    v9 = this->fields.simpleAnimationComponent;
    if ( !v9 )
      goto LABEL_90;
    if ( SimpleAnimation__CheckPlaying(v9, 0LL) )
      return;
  }
  else
  {
    v10 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
      v9 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v9 )
        goto LABEL_90;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v9, 0LL) )
        return;
    }
  }
  if ( System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v11 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      v9 = this->fields.simpleAnimationComponent;
      if ( v9 )
      {
        SimpleAnimation__Play_16486620(v9, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_62;
        v9 = this->fields.simpleAnimationComponent;
        if ( v9 )
        {
          SimpleAnimation__Sample(v9, 0LL);
LABEL_62:
          requestAnimation = this->fields.requestAnimation;
          v17 = &this->fields.playAnimation;
          this->fields.playAnimation = requestAnimation;
          goto LABEL_63;
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
        goto LABEL_62;
      v9 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v9 )
      {
        UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)v9, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_62;
        v9 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v9 )
        {
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v9, 0LL);
          goto LABEL_62;
        }
      }
    }
LABEL_90:
    sub_B2C434(v9, v8);
  }
  this->fields.playAnimation = 0LL;
  v17 = &this->fields.playAnimation;
  requestAnimation = 0LL;
LABEL_63:
  sub_B2C2F8(v17, requestAnimation);
  if ( this->fields.status == 6 )
  {
    particlelist = this->fields.particlelist;
    if ( particlelist )
    {
      v21 = *(_QWORD *)&particlelist->max_length;
      if ( (int)v21 >= 1 )
      {
        v22 = 0LL;
        do
        {
          if ( v22 >= (unsigned int)v21 )
          {
            v28 = sub_B2C460(v9);
            sub_B2C400(v28, 0LL);
          }
          v23 = (UnityEngine_Object_o *)particlelist->m_Items[v22];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v9 = (SimpleAnimation_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
          if ( ((unsigned __int8)v9 & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_90;
            UnityEngine_ParticleSystem__Stop_50259500((UnityEngine_ParticleSystem_o *)v23, 0LL);
          }
          LODWORD(v21) = particlelist->max_length;
          ++v22;
        }
        while ( (__int64)v22 < (int)v21 );
      }
    }
    v24 = this->fields.totaltime;
    if ( v24 > this->fields.losttime )
      this->fields.losttime = v24;
  }
  *p_requestAnimation = 0LL;
  sub_B2C2F8(&this->fields.requestAnimation, 0LL);
}


void __fastcall CommonEffectComponent__UpdateTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float touchStartTime; // s8
  CommonEffectComponent_c *v5; // x0
  CommonEffectComponent_c *v6; // x0

  if ( (byte_4183E3C & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectComponent_TypeInfo, method);
    byte_4183E3C = 1;
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