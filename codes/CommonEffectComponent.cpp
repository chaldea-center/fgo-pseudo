void __fastcall CommonEffectComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v25; // x19
  __int64 v26; // x0
  __int64 v27; // x1
  struct CommonEffectComponent_StaticFields *static_fields; // x0

  if ( (byte_42E4D0B & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_22568/*"start"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_18571/*"end"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_23042/*"touch"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_20581/*"loop"*/, v22, v23, v24);
    byte_42E4D0B = 1;
  }
  v25 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B5D694(System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v25,
    (const MethodInfo_2F48DA8 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
  if ( !v25 )
    sub_B5D69C(v26, v27);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v25,
    3,
    (System_String_o *)StringLiteral_22568/*"start"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v25,
    4,
    (System_String_o *)StringLiteral_20581/*"loop"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v25,
    5,
    (System_String_o *)StringLiteral_23042/*"touch"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v25,
    6,
    (System_String_o *)StringLiteral_18571/*"end"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  static_fields = CommonEffectComponent_TypeInfo->static_fields;
  static_fields->ANIMATION_NAME_TABLE = (struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *)v25;
  sub_B5D560(static_fields);
  CommonEffectComponent_TypeInfo->static_fields->DEFAULT_TOUCH_START_TIME = -1.0;
}


void __fastcall CommonEffectComponent___ctor(CommonEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonEffectComponent_c *v10; // x0

  if ( (byte_42E4D0A & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4D0A = 1;
  }
  __asm { FMOV            V0.2S, #5.0 }
  *(_QWORD *)&this->fields.losttime = _D0;
  this->fields.isDestroy = 1;
  v10 = CommonEffectComponent_TypeInfo;
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v10 = CommonEffectComponent_TypeInfo;
  }
  this->fields.touchStartTime = v10->static_fields->DEFAULT_TOUCH_START_TIME;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectComponent__Awake(CommonEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E4CFC & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5, v6, v7);
    byte_42E4CFC = 1;
  }
  this->fields.animationComponent = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                        (UnityEngine_Component_o *)this,
                                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  sub_B5D560(&this->fields.animationComponent);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                        (UnityEngine_Component_o *)this,
                                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  sub_B5D560(&this->fields.simpleAnimationComponent);
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

  if ( (byte_42E4D05 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectComponent__DelayFrameCoroutine_d__75_TypeInfo, frame, (_DWORD)action, method);
    byte_42E4D05 = 1;
  }
  v6 = (CommonEffectComponent__DelayFrameCoroutine_d__75_o *)sub_B5D694(CommonEffectComponent__DelayFrameCoroutine_d__75_TypeInfo);
  CommonEffectComponent__DelayFrameCoroutine_d__75___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  v6->fields.frame = frame;
  v6->fields.action = action;
  sub_B5D560(&v6->fields.action);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall CommonEffectComponent__ForceLoop(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_ForceLoop.method)(
    this,
    0LL,
    this->klass->vtable._8_Stop.methodPtr);
}


void __fastcall CommonEffectComponent__ForceLoop_18133904(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t status; // w8
  long double v13; // q0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v15; // x1
  SimpleAnimation_o *v16; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v18; // x20
  SimpleAnimation_o *v19; // x20
  SimpleAnimation_State_o *Item; // x0
  __int64 v21; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v23; // x20
  unsigned __int64 v24; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Animation_o *v28; // x20
  UnityEngine_TrackedReference_o *v29; // x20

  if ( (byte_42E4CF8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isOverWrite, (_DWORD)method, v3);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_16347/*"_loop"*/, v9, v10, v11);
    byte_42E4CF8 = 1;
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
        v16 = this->fields.simpleAnimationComponent;
        if ( !v16 )
          goto LABEL_46;
        SimpleAnimation__Stop(v16, 0LL);
      }
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_45;
      v16 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v16 )
        goto LABEL_46;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v16, 0LL);
    }
LABEL_45:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer, long double))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr,
      v13);
    return;
  }
  if ( status != 2 )
  {
    v18 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      v19 = this->fields.simpleAnimationComponent;
      v16 = (SimpleAnimation_o *)System_String__Concat_44577788(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16347/*"_loop"*/,
                                   0LL);
      if ( v19 )
      {
        Item = SimpleAnimation__get_Item(v19, (System_String_o *)v16, 0LL);
        if ( Item )
        {
          klass = Item->klass;
          v23 = Item;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v24 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v24;
              p_offset += 2;
              if ( v24 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_29;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_29:
            p_method = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 18LL, v21);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
            v23,
            2LL,
            *(_QWORD *)(p_method + 8));
        }
        v16 = this->fields.simpleAnimationComponent;
        if ( v16 )
        {
          SimpleAnimation__Stop(v16, 0LL);
          goto LABEL_44;
        }
      }
    }
    else
    {
      v27 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
        goto LABEL_44;
      v28 = this->fields.animationComponent;
      v16 = (SimpleAnimation_o *)System_String__Concat_44577788(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16347/*"_loop"*/,
                                   0LL);
      if ( v28 )
      {
        v29 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v28, (System_String_o *)v16, 0LL);
        v16 = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v29, 0LL, 0LL);
        if ( ((unsigned __int8)v16 & 1) != 0 )
        {
          if ( !v29 )
            goto LABEL_46;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v29, 2, 0LL);
        }
        v16 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v16 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v16, 0LL);
LABEL_44:
          this->fields.totaltime = 0.0;
          *(&this->fields.loop + 4) = 1;
          this->fields.playAnimation = 0LL;
          *(__n128 *)&v13 = sub_B5D560(&this->fields.playAnimation);
          goto LABEL_45;
        }
      }
    }
LABEL_46:
    sub_B5D69C(v16, v15);
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


void __fastcall CommonEffectComponent__ForceStart_18133176(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v15; // x20
  UnityEngine_Animation_o *v16; // x0
  __int64 v17; // x1
  SimpleAnimation_State_o *Item; // x0
  __int64 v19; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v21; // x20
  unsigned __int64 v22; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Animation_o *v27; // x20
  UnityEngine_TrackedReference_o *v28; // x20
  long double v29; // q0

  if ( (byte_42E4CF7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isOverWrite, (_DWORD)callback, method);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_16347/*"_loop"*/, v10, v11, v12);
    byte_42E4CF7 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_B5D560(&this->fields.callAfterStart);
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
        v16 = this->fields.animationComponent;
        if ( !v16 )
          goto LABEL_40;
        UnityEngine_Animation__Stop(v16, 0LL);
      }
    }
    CommonEffectComponent__Init(this, 0, 0, v13);
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
    v15 = this->fields.simpleAnimationComponent;
    v16 = (UnityEngine_Animation_o *)System_String__Concat_44577788(
                                       this->fields.baseName,
                                       (System_String_o *)StringLiteral_16347/*"_loop"*/,
                                       0LL);
    if ( v15 )
    {
      Item = SimpleAnimation__get_Item(v15, (System_String_o *)v16, 0LL);
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
              goto LABEL_16;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_16:
          p_method = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 18LL, v19);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
          v21,
          2LL,
          *(_QWORD *)(p_method + 8));
      }
      v16 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v16 )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)v16, 0LL);
        goto LABEL_39;
      }
    }
    goto LABEL_40;
  }
  v26 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
    goto LABEL_39;
  v27 = this->fields.animationComponent;
  v16 = (UnityEngine_Animation_o *)System_String__Concat_44577788(
                                     this->fields.baseName,
                                     (System_String_o *)StringLiteral_16347/*"_loop"*/,
                                     0LL);
  if ( !v27 )
    goto LABEL_40;
  v28 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v27, (System_String_o *)v16, 0LL);
  v16 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(v28, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    if ( !v28 )
      goto LABEL_40;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v28, 2, 0LL);
  }
  v16 = this->fields.animationComponent;
  if ( !v16 )
LABEL_40:
    sub_B5D69C(v16, v17);
  UnityEngine_Animation__Stop(v16, 0LL);
LABEL_39:
  this->fields.totaltime = 0.0;
  *(&this->fields.loop + 4) = 1;
  this->fields.playAnimation = 0LL;
  *(__n128 *)&v29 = sub_B5D560(&this->fields.playAnimation);
  ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer, long double))this->klass->vtable._5_NextPlayAnimation.method)(
    this,
    3LL,
    this->klass->vtable._6_ForceStart.methodPtr,
    v29);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonEffectComponent_c *v12; // x0
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *ANIMATION_NAME_TABLE; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *klass; // x8
  unsigned __int64 v15; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x3
  System_String_o *baseName; // x20
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *v20; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *v21; // x8
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **v23; // x11
  __int64 v24; // x0
  System_String_o *v26; // x2

  if ( (byte_42E4D08 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectComponent_TypeInfo, status, (_DWORD)method, v3);
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
      v6,
      v7,
      v8);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v9, v10, v11);
    byte_42E4D08 = 1;
  }
  v12 = CommonEffectComponent_TypeInfo;
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v12 = CommonEffectComponent_TypeInfo;
  }
  ANIMATION_NAME_TABLE = v12->static_fields->ANIMATION_NAME_TABLE;
  if ( !ANIMATION_NAME_TABLE )
    goto LABEL_26;
  klass = ANIMATION_NAME_TABLE->klass;
  if ( *(_WORD *)&ANIMATION_NAME_TABLE->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&ANIMATION_NAME_TABLE->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AF54C0(
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
  v12 = CommonEffectComponent_TypeInfo;
  baseName = this->fields.baseName;
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v12 = CommonEffectComponent_TypeInfo;
  }
  v20 = v12->static_fields->ANIMATION_NAME_TABLE;
  if ( !v20 )
LABEL_26:
    sub_B5D69C(v12, *(_QWORD *)&status);
  v21 = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = (System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)&v21->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      ++v22;
      v23 += 2;
      if ( v22 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 2].method;
  }
  else
  {
LABEL_22:
    v24 = sub_AF54C0(
            v20,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            2LL,
            v18);
  }
  v26 = (System_String_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v24)(
                             v20,
                             (unsigned int)status,
                             *(_QWORD *)(v24 + 8));
  return System_String__Concat_44580072(baseName, (System_String_o *)StringLiteral_16096/*"_"*/, v26, 0LL);
}


void __fastcall CommonEffectComponent__Init(
        CommonEffectComponent_o *this,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  char v7; // w1
  char v8; // w2
  __int64 v9; // x3
  char v10; // w1
  char v11; // w2
  __int64 v12; // x3
  char v13; // w1
  char v14; // w2
  __int64 v15; // x3
  char v16; // w1
  char v17; // w2
  __int64 v18; // x3
  struct System_String_o **p_effectName; // x22
  UnityEngine_Object_o *gameObject; // x0
  __int64 v21; // x1
  System_String_o *v22; // x23
  System_String_o *v23; // x0
  System_String_o **p_baseName; // x23
  UnityEngine_Object_o *v25; // x22
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *transform; // x22
  int32_t layer; // w0
  const MethodInfo *v29; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v31; // x1
  UnityEngine_Object_o *v32; // x19

  if ( (byte_42E4CF4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isSkip, isPause, method);
    sub_B5D5C4(&StringLiteral_5889/*"Effect("*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_615/*"(Clone)"*/, v16, v17, v18);
    byte_42E4CF4 = 1;
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
    sub_B5D560(&this->fields.effectName);
    gameObject = (UnityEngine_Object_o *)*p_effectName;
    if ( !*p_effectName )
      goto LABEL_39;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_615/*"(Clone)"*/, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)*p_effectName;
      if ( !*p_effectName )
        goto LABEL_39;
      *p_effectName = System_String__Substring_44641524(
                        (System_String_o *)gameObject,
                        0,
                        gameObject->fields.m_CachedPtr - 7,
                        0LL);
      sub_B5D560(&this->fields.effectName);
    }
  }
  if ( this->fields.useAnimNum >= 1 )
  {
    v22 = *p_effectName;
    v23 = System_Int32__ToString((int)this + 128, 0LL);
    *p_effectName = System_String__Concat_44580072(v22, (System_String_o *)StringLiteral_16096/*"_"*/, v23, 0LL);
    sub_B5D560(&this->fields.effectName);
  }
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    *p_baseName = *p_effectName;
    sub_B5D560(&this->fields.baseName);
    gameObject = (UnityEngine_Object_o *)*p_baseName;
    if ( !*p_baseName )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)System_String__LastIndexOf((System_String_o *)gameObject, 0x2Fu, 0LL);
    if ( ((unsigned int)gameObject & 0x80000000) == 0 )
    {
      if ( !*p_baseName )
        goto LABEL_39;
      *p_baseName = System_String__Substring(*p_baseName, (int)gameObject + 1, 0LL);
      sub_B5D560(&this->fields.baseName);
    }
  }
  v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  gameObject = (UnityEngine_Object_o *)System_String__Concat_44580072(
                                         (System_String_o *)StringLiteral_5889/*"Effect("*/,
                                         this->fields.effectName,
                                         (System_String_o *)StringLiteral_659/*")"*/,
                                         0LL);
  if ( !v25 )
    goto LABEL_39;
  UnityEngine_Object__set_name(v25, (System_String_o *)gameObject, 0LL);
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
    sub_B5D69C(gameObject, v21);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  CommonEffectComponent__SetChildInit(this, transform, layer, v29);
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
    v31 = 3LL;
    goto LABEL_34;
  }
  if ( *(&this->fields.loop + 4) )
  {
    klass = this->klass;
    v31 = 4LL;
LABEL_34:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))klass->vtable._5_NextPlayAnimation.method)(
      this,
      v31,
      klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  v32 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(v32, 0LL);
}


void __fastcall CommonEffectComponent__Init_18130176(
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
    sub_B5D560(&this->fields.effectName);
    CommonEffectComponent__Init(this, isSkip, isPause, v8);
  }
}


void __fastcall CommonEffectComponent__Init_18130252(
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
    sub_B5D560(&this->fields.asset);
    if ( !data )
      sub_B5D69C(v9, v10);
    this->fields.effectName = data->fields.name;
    sub_B5D560(&this->fields.effectName);
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
  __int64 v3; // x3
  int32_t v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  struct System_String_o *v37; // x1
  __int64 name; // x0
  __int64 v39; // x3
  __int64 v40; // x8
  __int64 v41; // x21
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  UnityEngine_Object_o *animationComponent; // x21
  __int64 v46; // x1
  __int64 v47; // x3
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v53; // x3
  System_Collections_IEnumerator_c *v54; // x8
  unsigned __int64 v55; // x10
  System_Collections_IEnumerator_c **v56; // x11
  __int64 v57; // x0
  UnityEngine_AnimationState_o *v58; // x0
  __int64 v59; // x1
  struct System_Action_o **p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  __int64 v62; // x0
  __int64 v63; // x3
  __int64 v64; // x8
  __int64 v65; // x21
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x3
  __int64 v71; // x21
  __int64 v72; // x8
  unsigned __int64 v73; // x10
  int *v74; // x11
  __int64 v75; // x0
  __int64 v76; // x3
  __int64 v77; // x8
  unsigned __int64 v78; // x10
  int *v79; // x11
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x3
  __int64 v84; // x22
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  SimpleAnimation_State_c **v87; // x11
  __int64 v88; // x0
  __int64 v89; // x8
  unsigned __int64 v90; // x10
  int *v91; // x11
  __int64 v92; // x0
  SimpleAnimation_o *v93; // x20
  __int64 v94; // x3
  SimpleAnimation_State_o *v95; // x21
  struct System_Action_o **v96; // x0
  System_Action_o *v97; // x20
  SimpleAnimation_o *v98; // x20
  SimpleAnimation_State_o *v99; // x0
  CommonEffectComponent_o *v100; // x22
  SimpleAnimation_o *v101; // x20
  SimpleAnimation_State_c *v102; // x8
  unsigned __int64 v103; // x10
  SimpleAnimation_State_c **v104; // x11
  __int64 v105; // x0
  struct System_String_o **p_requestAnimation; // x0
  UnityEngine_Animation_o *v107; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  struct System_Action_o **v109; // x0
  System_Action_o *v110; // x20
  UnityEngine_Animation_o *v111; // x20
  UnityEngine_Animation_o *v112; // x20

  v4 = next;
  if ( (byte_42E4CF6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AnimationState_TypeInfo, next, (_DWORD)method, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_16347/*"_loop"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_16371/*"_start"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_16334/*"_end"*/, v33, v34, v35);
    byte_42E4CF6 = 1;
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
      if ( v4 == 4 )
      {
        if ( *(&this->fields.loop + 4) )
          v4 = 4;
        else
          v4 = 6;
      }
      else if ( v4 == 3 )
      {
        p_callAfterStart = &this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          *p_callAfterStart = 0LL;
          sub_B5D560(p_callAfterStart);
          ActionExtensions__Call(callAfterStart, 0LL);
        }
        v4 = 3;
      }
      v37 = (struct System_String_o *)StringLiteral_1/*""*/;
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
      sub_B5D69C(0LL, v46);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v50 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v50;
          p_offset += 4;
          if ( v50 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_26;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_26:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v47);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v54 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v55 = 0LL;
        v56 = (System_Collections_IEnumerator_c **)&v54->_1.interfaceOffsets->offset;
        while ( *(v56 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v55;
          v56 += 2;
          if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_33;
        }
        v57 = (__int64)&v54->vtable[*(_DWORD *)v56 + 1].method;
      }
      else
      {
LABEL_33:
        v57 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v53);
      }
      v58 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v57)(
                                              Enumerator,
                                              *(_QWORD *)(v57 + 8));
      if ( !v58 )
        sub_B5D69C(0LL, v59);
      if ( v58->klass != UnityEngine_AnimationState_TypeInfo )
      {
        name = sub_B5D990(v58);
        goto LABEL_139;
      }
      UnityEngine_AnimationState__get_name(v58, 0LL);
    }
    v62 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
    if ( v62 )
    {
      v64 = *(_QWORD *)v62;
      v65 = v62;
      if ( *(_WORD *)(*(_QWORD *)v62 + 298LL) )
      {
        v66 = 0LL;
        v67 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
        {
          ++v66;
          v67 += 4;
          if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)v62 + 298LL) )
            goto LABEL_48;
        }
        v68 = v64 + 16LL * *v67 + 312;
      }
      else
      {
LABEL_48:
        v68 = sub_AF54C0(v62, System_IDisposable_TypeInfo, 0LL, v63);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
    }
    if ( v4 == 6 )
      goto LABEL_124;
    if ( v4 != 4 )
    {
      if ( v4 != 3 )
      {
        Item = 0LL;
        goto LABEL_129;
      }
      v107 = this->fields.animationComponent;
      name = (__int64)System_String__Concat_44577788(this->fields.baseName, (System_String_o *)StringLiteral_16371/*"_start"*/, 0LL);
      if ( !v107 )
        goto LABEL_139;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v107, (System_String_o *)name, 0LL);
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
        v4 = 3;
        goto LABEL_129;
      }
    }
    v109 = &this->fields.callAfterStart;
    v110 = this->fields.callAfterStart;
    if ( v110 )
    {
      *v109 = 0LL;
      sub_B5D560(v109);
      ActionExtensions__Call(v110, 0LL);
    }
    if ( !*(&this->fields.loop + 4) )
      goto LABEL_124;
    v111 = this->fields.animationComponent;
    name = (__int64)System_String__Concat_44577788(this->fields.baseName, (System_String_o *)StringLiteral_16347/*"_loop"*/, 0LL);
    if ( !v111 )
      goto LABEL_139;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v111, (System_String_o *)name, 0LL);
    if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
    {
LABEL_124:
      v112 = this->fields.animationComponent;
      name = (__int64)System_String__Concat_44577788(this->fields.baseName, (System_String_o *)StringLiteral_16334/*"_end"*/, 0LL);
      if ( !v112 )
        goto LABEL_139;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v112, (System_String_o *)name, 0LL);
      v4 = 6;
    }
    else
    {
      v4 = 4;
    }
LABEL_129:
    name = UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
    if ( (name & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_139;
      name = (__int64)UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
      v37 = (struct System_String_o *)name;
      if ( !this )
        goto LABEL_139;
    }
    else
    {
      v37 = (struct System_String_o *)StringLiteral_1/*""*/;
      if ( !this )
        goto LABEL_139;
    }
LABEL_134:
    this->fields.requestAnimation = v37;
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
  v40 = *(_QWORD *)name;
  v41 = name;
  if ( *(_WORD *)(*(_QWORD *)name + 298LL) )
  {
    v42 = 0LL;
    v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)v43 - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)name + 298LL) )
        goto LABEL_14;
    }
    v44 = v40 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_14:
    v44 = sub_AF54C0(name, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v39);
  }
  v71 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
  if ( !v71 )
    sub_B5D69C(0LL, v69);
  while ( 1 )
  {
    v72 = *(_QWORD *)v71;
    if ( *(_WORD *)(*(_QWORD *)v71 + 298LL) )
    {
      v73 = 0LL;
      v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v74 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v73;
        v74 += 4;
        if ( v73 >= *(unsigned __int16 *)(*(_QWORD *)v71 + 298LL) )
          goto LABEL_55;
      }
      v75 = v72 + 16LL * *v74 + 312;
    }
    else
    {
LABEL_55:
      v75 = sub_AF54C0(v71, System_Collections_IEnumerator_TypeInfo, 0LL, v70);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v71, *(_QWORD *)(v75 + 8)) & 1) == 0 )
      break;
    v77 = *(_QWORD *)v71;
    if ( *(_WORD *)(*(_QWORD *)v71 + 298LL) )
    {
      v78 = 0LL;
      v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v79 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v78;
        v79 += 4;
        if ( v78 >= *(unsigned __int16 *)(*(_QWORD *)v71 + 298LL) )
          goto LABEL_62;
      }
      v80 = v77 + 16LL * *v79 + 312;
    }
    else
    {
LABEL_62:
      v80 = sub_AF54C0(v71, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v76);
    }
    v81 = (*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v71, *(_QWORD *)(v80 + 8));
    v84 = v81;
    if ( !v81 )
      sub_B5D69C(0LL, v82);
    v85 = *(_QWORD *)v81;
    if ( *(_WORD *)(*(_QWORD *)v81 + 298LL) )
    {
      v86 = 0LL;
      v87 = (SimpleAnimation_State_c **)(*(_QWORD *)(v85 + 176) + 8LL);
      while ( *(v87 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v86;
        v87 += 2;
        if ( v86 >= *(unsigned __int16 *)(*(_QWORD *)v81 + 298LL) )
          goto LABEL_69;
      }
      v88 = v85 + 16LL * (*(_DWORD *)v87 + 9) + 312;
    }
    else
    {
LABEL_69:
      v88 = sub_AF54C0(v81, SimpleAnimation_State_TypeInfo, 9LL, v83);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v88)(v84, *(_QWORD *)(v88 + 8));
  }
  v89 = *(_QWORD *)v71;
  if ( *(_WORD *)(*(_QWORD *)v71 + 298LL) )
  {
    v90 = 0LL;
    v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
    {
      ++v90;
      v91 += 4;
      if ( v90 >= *(unsigned __int16 *)(*(_QWORD *)v71 + 298LL) )
        goto LABEL_76;
    }
    v92 = v89 + 16LL * *v91 + 312;
  }
  else
  {
LABEL_76:
    v92 = sub_AF54C0(v71, System_IDisposable_TypeInfo, 0LL, v76);
  }
  name = (*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v71, *(_QWORD *)(v92 + 8));
  if ( v4 != 6 )
  {
    if ( v4 != 4 )
    {
      if ( v4 != 3 )
        goto LABEL_100;
      v93 = this->fields.simpleAnimationComponent;
      name = (__int64)System_String__Concat_44577788(this->fields.baseName, (System_String_o *)StringLiteral_16371/*"_start"*/, 0LL);
      if ( !v93 )
        goto LABEL_139;
      v95 = SimpleAnimation__get_Item(v93, (System_String_o *)name, 0LL);
      if ( v95 )
        goto LABEL_85;
      name = (__int64)this->fields.simpleAnimationComponent;
      if ( !name )
        goto LABEL_139;
      v95 = SimpleAnimation__get_Item((SimpleAnimation_o *)name, this->fields.baseName, 0LL);
      if ( v95 )
      {
LABEL_85:
        this->fields.losttime = 0.0;
        v4 = 3;
LABEL_92:
        v100 = this;
        goto LABEL_95;
      }
    }
    v96 = &this->fields.callAfterStart;
    v97 = this->fields.callAfterStart;
    if ( v97 )
    {
      *v96 = 0LL;
      sub_B5D560(v96);
      ActionExtensions__Call(v97, 0LL);
    }
    if ( *(&this->fields.loop + 4) )
    {
      v98 = this->fields.simpleAnimationComponent;
      name = (__int64)System_String__Concat_44577788(this->fields.baseName, (System_String_o *)StringLiteral_16347/*"_loop"*/, 0LL);
      if ( !v98 )
        goto LABEL_139;
      v99 = SimpleAnimation__get_Item(v98, (System_String_o *)name, 0LL);
      if ( v99 )
      {
        v95 = v99;
        v4 = 4;
        goto LABEL_92;
      }
    }
  }
  v101 = this->fields.simpleAnimationComponent;
  name = (__int64)System_String__Concat_44577788(this->fields.baseName, (System_String_o *)StringLiteral_16334/*"_end"*/, 0LL);
  if ( !v101 )
    goto LABEL_139;
  name = (__int64)SimpleAnimation__get_Item(v101, (System_String_o *)name, 0LL);
  v95 = (SimpleAnimation_State_o *)name;
  v4 = 6;
  v100 = this;
  if ( name )
  {
LABEL_95:
    v102 = v95->klass;
    if ( *(_WORD *)&v95->klass->_2.bitflags1 )
    {
      v103 = 0LL;
      v104 = (SimpleAnimation_State_c **)&v102->_1.interfaceOffsets->offset;
      while ( *(v104 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v103;
        v104 += 2;
        if ( v103 >= *(unsigned __int16 *)&v95->klass->_2.bitflags1 )
          goto LABEL_99;
      }
      v105 = (__int64)&v102->vtable[*(_DWORD *)v104 + 9].method;
    }
    else
    {
LABEL_99:
      v105 = sub_AF54C0(v95, SimpleAnimation_State_TypeInfo, 9LL, v94);
    }
    name = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v105)(v95, *(_QWORD *)(v105 + 8));
    v37 = (struct System_String_o *)name;
    if ( v100 )
      goto LABEL_104;
LABEL_139:
    sub_B5D69C(name, v37);
  }
LABEL_100:
  v100 = this;
  v37 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !this )
    goto LABEL_139;
LABEL_104:
  v100->fields.requestAnimation = v37;
  p_requestAnimation = &v100->fields.requestAnimation;
LABEL_135:
  sub_B5D560(p_requestAnimation);
  this->fields.status = v4;
}


void __fastcall CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssetData_o *asset; // x21

  if ( (byte_42E4CFE & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4CFE = 1;
  }
  asset = this->fields.asset;
  if ( asset )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657564(asset, 0LL);
    this->fields.asset = 0LL;
    sub_B5D560(&this->fields.asset);
  }
  this->fields.status = 2;
}


void __fastcall CommonEffectComponent__OnRelease(CommonEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  CommonEffectComponent_o *v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_42E4D04 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CommonEffectComponent__OnRelease_b__74_0__, v5, v6, v7);
    byte_42E4D04 = 1;
  }
  *(_WORD *)&this->fields.isTouching = 256;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CommonEffectComponent__OnRelease_b__74_0__, 0LL);
  v11 = CommonEffectComponent__DelayFrameCoroutine(v9, 1, v8, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
  __int64 v3; // x3
  UnityEngine_Object_o *animationComponent; // x21
  const MethodInfo *v7; // x2
  System_String_o *AnimationName; // x21
  __int64 v9; // x1
  UnityEngine_Animation_o *name; // x0
  UnityEngine_TrackedReference_o *Item; // x21
  bool result; // w0
  UnityEngine_Animation_o *v13; // x22
  struct System_String_o **p_playAnimation; // x20

  if ( (byte_42E4D07 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, next, (_DWORD)method, v3);
    byte_42E4D07 = 1;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(animationComponent, 0LL, 0LL) )
    return 0;
  AnimationName = CommonEffectComponent__GetAnimationName(this, next, v7);
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
    || (v13 = this->fields.animationComponent,
        name = (UnityEngine_Animation_o *)UnityEngine_AnimationState__get_name(
                                            (UnityEngine_AnimationState_o *)Item,
                                            0LL),
        !v13) )
  {
LABEL_14:
    sub_B5D69C(name, v9);
  }
  UnityEngine_Animation__Play_51249124(v13, (System_String_o *)name, 0LL);
  this->fields.playAnimation = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
  p_playAnimation = &this->fields.playAnimation;
  sub_B5D560(p_playAnimation);
  result = 1;
  *((_DWORD *)p_playAnimation - 4) = next;
  return result;
}


void __fastcall CommonEffectComponent__PlaySe(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array *v8; // x0
  System_String_array *v9; // x1
  int max_length; // w8
  System_String_array *v11; // x19
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  SePlayer_o *v14; // x0
  SePlayer_o *v15; // x20
  __int64 v16; // x0
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E4CFF & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E4CFF = 1;
  }
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v8 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v8 )
      goto LABEL_22;
    v9 = v8;
    if ( !v8->max_length )
      goto LABEL_23;
    LOWORD(v8->m_Items[0]) = 58;
    if ( !name )
      goto LABEL_22;
    v8 = System_String__Split(name, (System_Char_array *)v8, 0LL);
    if ( !v8 )
      goto LABEL_22;
    max_length = v8->max_length;
    v11 = v8;
    if ( !max_length )
    {
LABEL_23:
      v16 = sub_B5D6C8(v8);
      sub_B5D668(v16, 0LL);
    }
    v12 = v8->m_Items[0];
    if ( max_length < 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe(v12, 0LL);
      return;
    }
    v13 = v8->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v14 = SoundManager__playSe_23390804(v12, v13, 0LL);
    result = 0.0;
    if ( (int)v11->max_length >= 3 )
    {
      v15 = v14;
      v8 = (System_String_array *)System_Single__TryParse(v11->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        if ( v15 )
        {
          SePlayer__set_Pitch(v15, result, 0LL);
          return;
        }
LABEL_22:
        sub_B5D69C(v8, v9);
      }
    }
  }
}


void __fastcall CommonEffectComponent__PlaySeContinue(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array *v8; // x0
  System_String_array *v9; // x1
  int max_length; // w8
  System_String_o *v11; // x19
  System_String_o *v12; // x20
  __int64 v13; // x0

  if ( (byte_42E4D00 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E4D00 = 1;
  }
  v8 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_17;
  v9 = v8;
  if ( !v8->max_length )
    goto LABEL_18;
  LOWORD(v8->m_Items[0]) = 58;
  if ( !name || (v8 = System_String__Split(name, (System_Char_array *)v8, 0LL)) == 0LL )
LABEL_17:
    sub_B5D69C(v8, v9);
  max_length = v8->max_length;
  if ( !max_length )
  {
LABEL_18:
    v13 = sub_B5D6C8(v8);
    sub_B5D668(v13, 0LL);
  }
  v11 = v8->m_Items[0];
  if ( max_length >= 2 )
  {
    v12 = v8->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue_23413920(v11, v12, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue(v11, 0LL);
  }
}


void __fastcall CommonEffectComponent__PlaySettedVoice(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *settedVoiceStr; // x1

  settedVoiceStr = this->fields.settedVoiceStr;
  if ( settedVoiceStr )
    CommonEffectComponent__PlayVoice_18137864(this, settedVoiceStr, this->fields.voiceCallback, v2);
}


bool __fastcall CommonEffectComponent__PlaySimpleAnimation(
        CommonEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v10; // x2
  System_String_o *AnimationName; // x21
  __int64 v12; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_o *v14; // x0
  __int64 v15; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_o *v17; // x22
  SimpleAnimation_State_o *v18; // x21
  unsigned __int64 v19; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  SimpleAnimation_State_c *v23; // x8
  unsigned __int64 v24; // x10
  SimpleAnimation_State_c **v25; // x11
  __int64 v26; // x0
  struct System_String_o **p_playAnimation; // x20

  if ( (byte_42E4D06 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, next, (_DWORD)method, v3);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v6, v7, v8);
    byte_42E4D06 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(simpleAnimationComponent, 0LL, 0LL)
    || (AnimationName = CommonEffectComponent__GetAnimationName(this, next, v10),
        System_String__IsNullOrEmpty(AnimationName, 0LL)) )
  {
    LOBYTE(Item) = 0;
  }
  else
  {
    v14 = this->fields.simpleAnimationComponent;
    if ( !v14 )
      goto LABEL_26;
    Item = SimpleAnimation__get_Item(v14, AnimationName, 0LL);
    if ( !Item )
      return (char)Item;
    klass = Item->klass;
    v17 = this->fields.simpleAnimationComponent;
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
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
    }
    else
    {
LABEL_16:
      p_method = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 9LL, v15);
    }
    v14 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v18,
                                 *(_QWORD *)(p_method + 8));
    if ( !v17 )
LABEL_26:
      sub_B5D69C(v14, v12);
    SimpleAnimation__Play_16676044(v17, (System_String_o *)v14, 0LL);
    v23 = v18->klass;
    if ( *(_WORD *)&v18->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v24;
        v25 += 2;
        if ( v24 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      v26 = (__int64)&v23->vtable[*(_DWORD *)v25 + 9].method;
    }
    else
    {
LABEL_23:
      v26 = sub_AF54C0(v18, SimpleAnimation_State_TypeInfo, 9LL, v22);
    }
    this->fields.playAnimation = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v26)(
                                                             v18,
                                                             *(_QWORD *)(v26 + 8));
    p_playAnimation = &this->fields.playAnimation;
    sub_B5D560(p_playAnimation);
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

  CommonEffectComponent__PlayVoice_18137864(this, name, 0LL, v3);
}


void __fastcall CommonEffectComponent__PlayVoice_18137864(
        CommonEffectComponent_o *this,
        System_String_o *name,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_array *v9; // x0
  System_String_array *v10; // x1
  __int64 v11; // x8
  System_String_array *v12; // x20
  System_String_o *v13; // x20
  float v14; // s8
  float v15; // s0
  System_String_o *v16; // x20
  System_String_o *v17; // x21
  __int64 v18; // x0

  if ( (byte_42E4D01 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)name, (_DWORD)callback, method);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    byte_42E4D01 = 1;
  }
  if ( !System_String__IsNullOrEmpty(name, 0LL) )
  {
    v9 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v9 )
      goto LABEL_23;
    v10 = v9;
    if ( !v9->max_length )
      goto LABEL_24;
    LOWORD(v9->m_Items[0]) = 58;
    if ( !name || (v9 = System_String__Split(name, (System_Char_array *)v9, 0LL)) == 0LL )
LABEL_23:
      sub_B5D69C(v9, v10);
    v11 = *(_QWORD *)&v9->max_length;
    v12 = v9;
    if ( (int)v11 < 2 )
    {
      if ( (_DWORD)v11 )
      {
        v13 = v9->m_Items[0];
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playVoice_23416848(v13, callback, 0LL);
        return;
      }
LABEL_24:
      v18 = sub_B5D6C8(v9);
      sub_B5D668(v18, 0LL);
    }
    if ( (_DWORD)v11 == 2 )
    {
      v14 = 1.0;
    }
    else
    {
      v15 = System_Single__Parse(v9->m_Items[2], 0LL);
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
    SoundManager__playVoice_23391328(v17, v16, v14, callback, 0LL);
  }
}


void __fastcall CommonEffectComponent__ResetPrewarmParticleList(
        CommonEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonEffectComponent_o *v4; // x19
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v12; // 0:x0.8

  v4 = this;
  if ( (byte_42E4D03 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4D03 = 1;
  }
  m_ParticleSystem = 0LL;
  particlelist = v4->fields.particlelist;
  if ( particlelist )
  {
    v6 = *(_QWORD *)&particlelist->max_length;
    if ( v6 )
    {
      if ( (int)v6 >= 1 )
      {
        v7 = 0LL;
        do
        {
          if ( v7 >= (unsigned int)v6 )
          {
            v10 = sub_B5D6C8(this);
            sub_B5D668(v10, 0LL);
          }
          v8 = (UnityEngine_Object_o *)particlelist->m_Items[v7];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (CommonEffectComponent_o *)UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v8 )
              sub_B5D69C(this, v9);
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v8, 0LL).fields.m_ParticleSystem;
            v12.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem_MainModule__get_prewarm(v12, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem__get_isPlaying(
                                                  (UnityEngine_ParticleSystem_o *)v8,
                                                  0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                UnityEngine_ParticleSystem__Simulate_51306484((UnityEngine_ParticleSystem_o *)v8, 1.0, 0LL);
                UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)v8, 1, 0LL);
              }
            }
          }
          LODWORD(v6) = particlelist->max_length;
          ++v7;
        }
        while ( (__int64)v7 < (int)v6 );
      }
    }
  }
}


void __fastcall CommonEffectComponent__Resume(CommonEffectComponent_o *this, bool isSkip, const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL4 isStart; // w8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E4CF5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isSkip, (_DWORD)method, v3);
    byte_42E4CF5 = 1;
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
          UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v6; // x1
  SimpleAnimation_o *v7; // x0

  if ( (byte_42E4CFA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4CFA = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v7 = this->fields.simpleAnimationComponent;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    SimpleAnimation__Rewind(v7, 0LL);
  }
}


void __fastcall CommonEffectComponent__SetChildInit(
        CommonEffectComponent_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  System_Collections_IEnumerator_c *v21; // x8
  unsigned __int64 v22; // x10
  System_Collections_IEnumerator_c **v23; // x11
  __int64 v24; // x0
  UnityEngine_Transform_o *v25; // x0
  const MethodInfo *v26; // x3
  __int64 v27; // x10
  __int64 v28; // x0
  __int64 v29; // x3
  __int64 v30; // x8
  __int64 v31; // x19
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0

  v6 = this;
  if ( (byte_42E4CFB & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)tf, layer, method);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v7, v8, v9);
    this = (CommonEffectComponent_o *)sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v10, v11, v12);
    byte_42E4CFB = 1;
  }
  if ( !tf
    || (this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_B5D69C(this, tf);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_B5D69C(0LL, v13);
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
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v21 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        v23 = (System_Collections_IEnumerator_c **)&v21->_1.interfaceOffsets->offset;
        while ( *(v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v22;
          v23 += 2;
          if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 1].method;
      }
      else
      {
LABEL_19:
        v24 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v20);
      }
      v25 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v24)(
                                         Enumerator,
                                         *(_QWORD *)(v24 + 8));
      if ( v25 )
      {
        v27 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v27
          || (UnityEngine_Transform_c *)v25->klass->_2.typeHierarchy[v27 - 1] != UnityEngine_Transform_TypeInfo )
        {
          this = (CommonEffectComponent_o *)sub_B5D990(v25);
          goto LABEL_35;
        }
      }
      CommonEffectComponent__SetChildInit(v6, v25, layer, v26);
    }
    v28 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
    if ( v28 )
    {
      v30 = *(_QWORD *)v28;
      v31 = v28;
      if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
      {
        v32 = 0LL;
        v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
            goto LABEL_30;
        }
        v34 = v30 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_30:
        v34 = sub_AF54C0(v28, System_IDisposable_TypeInfo, 0LL, v29);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array *v8; // x0
  System_String_array *v9; // x1
  System_String_o *v10; // x19
  float v11; // s8
  __int64 v12; // x0

  if ( (byte_42E4D02 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)str, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E4D02 = 1;
  }
  v8 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_13;
  v9 = v8;
  if ( !v8->max_length )
  {
    v12 = sub_B5D6C8(v8);
    sub_B5D668(v12, 0LL);
  }
  LOWORD(v8->m_Items[0]) = 58;
  if ( !str || (v8 = System_String__Split(str, (System_Char_array *)v8, 0LL)) == 0LL )
LABEL_13:
    sub_B5D69C(v8, v9);
  if ( (int)v8->max_length >= 2 )
  {
    v10 = v8->m_Items[0];
    v11 = System_Single__Parse(v8->m_Items[1], 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__setPitchSe(v10, v11, 0LL);
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
  sub_B5D560(&this->fields.touchCallback);
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
  sub_B5D560(&this->fields.settedVoiceStr);
  this->fields.voiceCallback = 0LL;
  sub_B5D560(&this->fields.voiceCallback);
}


void __fastcall CommonEffectComponent__SetVoice_18138312(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields.settedVoiceStr = voiceStr;
  sub_B5D560(&this->fields.settedVoiceStr);
  this->fields.voiceCallback = callback;
  sub_B5D560(&this->fields.voiceCallback);
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
  char v9; // w1
  char v10; // w2
  __int64 v11; // x3
  char v12; // w1
  char v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *v16; // x0
  __int64 v17; // x1
  SimpleAnimation_o *v18; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v20; // x21
  SimpleAnimation_State_o *Item; // x0
  __int64 v22; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v24; // x19
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_TrackedReference_o *v28; // x19

  if ( (byte_42E4CF9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, force, isDestroy, onStoppedCallback);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16347/*"_loop"*/, v12, v13, v14);
    byte_42E4CF9 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0LL);
    return;
  }
  this->fields.callAfterStop = onStoppedCallback;
  *(&this->fields.loop + 4) = 0;
  this->fields.isDestroy = isDestroy;
  sub_B5D560(&this->fields.callAfterStop);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (System_String_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    v18 = this->fields.simpleAnimationComponent;
    if ( force )
    {
      if ( v18 )
      {
        SimpleAnimation__Stop(this->fields.simpleAnimationComponent, 0LL);
        return;
      }
LABEL_33:
      sub_B5D69C(v16, v17);
    }
    v16 = System_String__Concat_44577788(this->fields.baseName, (System_String_o *)StringLiteral_16347/*"_loop"*/, 0LL);
    if ( !v18 )
      goto LABEL_33;
    Item = SimpleAnimation__get_Item(v18, v16, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v24 = Item;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v25 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v25;
          p_offset += 2;
          if ( v25 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_25:
        p_method = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 18LL, v22);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v24, 1LL, *(_QWORD *)(p_method + 8));
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
    v16 = (System_String_o *)UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL);
    if ( ((unsigned __int8)v16 & 1) != 0 )
    {
      v20 = this->fields.animationComponent;
      if ( force )
      {
        if ( !v20 )
          goto LABEL_33;
        UnityEngine_Animation__Stop(this->fields.animationComponent, 0LL);
      }
      else
      {
        v16 = System_String__Concat_44577788(this->fields.baseName, (System_String_o *)StringLiteral_16347/*"_loop"*/, 0LL);
        if ( !v20 )
          goto LABEL_33;
        v28 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v20, v16, 0LL);
        v16 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v28, 0LL, 0LL);
        if ( ((unsigned __int8)v16 & 1) != 0 )
        {
          if ( !v28 )
            goto LABEL_33;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v28, 1, 0LL);
        }
      }
    }
  }
}


void __fastcall CommonEffectComponent__Update(CommonEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  float totaltime; // s8
  const MethodInfo *v9; // x1
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *v11; // x21
  __int64 v12; // x1
  SimpleAnimation_o *v13; // x0
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Object_o *v15; // x21
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  struct System_String_o **p_playAnimation; // x21
  long double v18; // q0
  UnityEngine_Object_o *animationComponent; // x21
  int32_t status; // w8
  struct System_String_o **v21; // x0
  UnityEngine_Object_o *v22; // x21
  struct UnityEngine_ParticleSystem_array *particlelist; // x23
  __int64 v24; // x8
  unsigned __int64 v25; // x24
  UnityEngine_Object_o *v26; // x21
  float v27; // s0
  struct System_Action_o **p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  UnityEngine_Object_o *gameObject; // x19
  __int64 v31; // x0

  if ( (byte_42E4CFD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E4CFD = 1;
  }
  if ( this->fields.status < 3u )
    return;
  totaltime = this->fields.totaltime;
  this->fields.totaltime = totaltime + RealTime__get_deltaTime(0LL);
  CommonEffectComponent__UpdateTouchAnimation(this, v9);
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
      v13 = this->fields.simpleAnimationComponent;
      if ( !v13 )
        goto LABEL_90;
      if ( SimpleAnimation__CheckPlaying(v13, 0LL) )
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
      v13 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v13 )
        goto LABEL_90;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v13, 0LL) )
        return;
    }
    status = this->fields.status;
    if ( status != 6 )
      goto LABEL_47;
    *p_playAnimation = 0LL;
    *(__n128 *)&v18 = sub_B5D560(p_playAnimation);
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
            sub_B5D560(p_callAfterStop);
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
            UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
      *(float *)&v18 = this->fields.losttime;
      if ( *(float *)&v18 > this->fields.totaltime )
        return;
    }
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer, long double))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr,
      v18);
LABEL_79:
    if ( !*p_requestAnimation )
      return;
  }
  v11 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
  {
    v13 = this->fields.simpleAnimationComponent;
    if ( !v13 )
      goto LABEL_90;
    if ( SimpleAnimation__CheckPlaying(v13, 0LL) )
      return;
  }
  else
  {
    v14 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    {
      v13 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v13 )
        goto LABEL_90;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v13, 0LL) )
        return;
    }
  }
  if ( System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v15 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      v13 = this->fields.simpleAnimationComponent;
      if ( v13 )
      {
        SimpleAnimation__Play_16676044(v13, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_62;
        v13 = this->fields.simpleAnimationComponent;
        if ( v13 )
        {
          SimpleAnimation__Sample(v13, 0LL);
LABEL_62:
          v21 = &this->fields.playAnimation;
          this->fields.playAnimation = this->fields.requestAnimation;
          goto LABEL_63;
        }
      }
    }
    else
    {
      v22 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
        goto LABEL_62;
      v13 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v13 )
      {
        UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v13, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_62;
        v13 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v13 )
        {
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v13, 0LL);
          goto LABEL_62;
        }
      }
    }
LABEL_90:
    sub_B5D69C(v13, v12);
  }
  this->fields.playAnimation = 0LL;
  v21 = &this->fields.playAnimation;
LABEL_63:
  sub_B5D560(v21);
  if ( this->fields.status == 6 )
  {
    particlelist = this->fields.particlelist;
    if ( particlelist )
    {
      v24 = *(_QWORD *)&particlelist->max_length;
      if ( (int)v24 >= 1 )
      {
        v25 = 0LL;
        do
        {
          if ( v25 >= (unsigned int)v24 )
          {
            v31 = sub_B5D6C8(v13);
            sub_B5D668(v31, 0LL);
          }
          v26 = (UnityEngine_Object_o *)particlelist->m_Items[v25];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v13 = (SimpleAnimation_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
          if ( ((unsigned __int8)v13 & 1) != 0 )
          {
            if ( !v26 )
              goto LABEL_90;
            UnityEngine_ParticleSystem__Stop_51307044((UnityEngine_ParticleSystem_o *)v26, 0LL);
          }
          LODWORD(v24) = particlelist->max_length;
          ++v25;
        }
        while ( (__int64)v25 < (int)v24 );
      }
    }
    v27 = this->fields.totaltime;
    if ( v27 > this->fields.losttime )
      this->fields.losttime = v27;
  }
  *p_requestAnimation = 0LL;
  sub_B5D560(&this->fields.requestAnimation);
}


void __fastcall CommonEffectComponent__UpdateTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  float touchStartTime; // s8
  CommonEffectComponent_c *v6; // x0
  CommonEffectComponent_c *v7; // x0

  if ( (byte_42E4D09 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectComponent_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E4D09 = 1;
  }
  if ( this->fields.status == 5 )
  {
    touchStartTime = this->fields.touchStartTime;
    v6 = CommonEffectComponent_TypeInfo;
    if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
      v6 = CommonEffectComponent_TypeInfo;
    }
    if ( touchStartTime > v6->static_fields->DEFAULT_TOUCH_START_TIME
      && !this->fields.isTouching
      && *(float *)&this->fields.loop < (float)(this->fields.totaltime - this->fields.touchStartTime)
      && CommonEffectComponent__PlayAnimation(this, 4, v2) )
    {
      v7 = CommonEffectComponent_TypeInfo;
      if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
        v7 = CommonEffectComponent_TypeInfo;
      }
      this->fields.touchStartTime = v7->static_fields->DEFAULT_TOUCH_START_TIME;
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_CommonEffectComponent__DelayFrameCoroutine_d__75_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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