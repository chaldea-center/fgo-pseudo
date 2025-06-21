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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B1DB22 & 1) == 0 )
  {
    sub_1BCAFF8(&CommonEffectComponent_TypeInfo, v1);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__, v2);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_23440/*"start"*/, v5);
    sub_1BCAFF8(&StringLiteral_18841/*"end"*/, v6);
    sub_1BCAFF8(&StringLiteral_23918/*"touch"*/, v7);
    sub_1BCAFF8(&StringLiteral_21160/*"loop"*/, v8);
    byte_4B1DB22 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCB244(System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v9,
    (const MethodInfo_3352184 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v9,
    3,
    (Il2CppObject *)StringLiteral_23440/*"start"*/,
    (const MethodInfo_3352B58 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v9,
    4,
    (Il2CppObject *)StringLiteral_21160/*"loop"*/,
    (const MethodInfo_3352B58 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v9,
    5,
    (Il2CppObject *)StringLiteral_23918/*"touch"*/,
    (const MethodInfo_3352B58 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v9,
    6,
    (Il2CppObject *)StringLiteral_18841/*"end"*/,
    (const MethodInfo_3352B58 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  CommonEffectComponent_TypeInfo->static_fields->ANIMATION_NAME_TABLE = (struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *)v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)CommonEffectComponent_TypeInfo->static_fields, (int32_t)v9, v12, v13);
  CommonEffectComponent_TypeInfo->static_fields->DEFAULT_TOUCH_START_TIME = -1.0;
}


void __fastcall CommonEffectComponent___ctor(CommonEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent_c *v8; // x0

  if ( (byte_4B1DB21 & 1) == 0 )
  {
    sub_1BCAFF8(&CommonEffectComponent_TypeInfo, method);
    byte_4B1DB21 = 1;
  }
  __asm { FMOV            V0.2S, #5.0 }
  *(_QWORD *)&this->fields.endtime = _D0;
  this->fields.isDestroy = 1;
  v8 = CommonEffectComponent_TypeInfo;
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v8 = CommonEffectComponent_TypeInfo;
  }
  this->fields.touchStartTime = v8->static_fields->DEFAULT_TOUCH_START_TIME;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectComponent__Awake(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1DB0D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    byte_4B1DB0D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.animationComponent, (int32_t)Component_object, v5, v6);
  v7 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.simpleAnimationComponent, (int32_t)v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall CommonEffectComponent__DelayFrameCoroutine(
        CommonEffectComponent_o *this,
        int32_t frame,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B1DB1A & 1) == 0 )
  {
    sub_1BCAFF8(&CommonEffectComponent__DelayFrameCoroutine_d__82_TypeInfo, *(_QWORD *)&frame);
    byte_4B1DB1A = 1;
  }
  v6 = sub_1BCB244(CommonEffectComponent__DelayFrameCoroutine_d__82_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 32) = frame;
  *(_QWORD *)(v6 + 40) = action;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v6 + 40), (int32_t)action, v7, v8);
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
void __fastcall CommonEffectComponent__ForceLoop_42863468(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t status; // w8
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v10; // x1
  SimpleAnimation_o *v11; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v13; // x20
  SimpleAnimation_o *v14; // x20
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v17; // x20
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Animation_o *v24; // x20
  UnityEngine_TrackedReference_o *v25; // x20

  if ( (byte_4B1DB09 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_16427/*"_loop"*/, v7);
    byte_4B1DB09 = 1;
  }
  status = this->fields.status;
  if ( !status )
  {
    CommonEffectComponent__Init(this, 0, 0, v3);
    if ( isOverWrite )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      {
        v11 = this->fields.simpleAnimationComponent;
        if ( !v11 )
          goto LABEL_42;
        SimpleAnimation__Stop(v11, 0LL);
      }
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_41;
      v11 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v11 )
        goto LABEL_42;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v11, 0LL);
    }
LABEL_41:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  if ( status != 2 )
  {
    v13 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    {
      v14 = this->fields.simpleAnimationComponent;
      v11 = (SimpleAnimation_o *)System_String__Concat_62450424(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16427/*"_loop"*/,
                                   0LL);
      if ( v14 )
      {
        Item = SimpleAnimation__get_Item(v14, (System_String_o *)v11, 0LL);
        if ( Item )
        {
          klass = Item->klass;
          v17 = Item;
          v18 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v18;
              p_offset += 2;
              if ( !v18 )
                goto LABEL_26;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_26:
            p_method = sub_1C1B560(Item, SimpleAnimation_State_TypeInfo, 18LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
            v17,
            2LL,
            *(_QWORD *)(p_method + 8));
        }
        v11 = this->fields.simpleAnimationComponent;
        if ( v11 )
        {
          SimpleAnimation__Stop(v11, 0LL);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v21 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
        goto LABEL_40;
      v24 = this->fields.animationComponent;
      v11 = (SimpleAnimation_o *)System_String__Concat_62450424(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16427/*"_loop"*/,
                                   0LL);
      if ( v24 )
      {
        v25 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v24, (System_String_o *)v11, 0LL);
        v11 = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v25, 0LL, 0LL);
        if ( ((unsigned __int8)v11 & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v25, 2, 0LL);
        }
        v11 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v11 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v11, 0LL);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.playAnimation, 0, v22, v23);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1BCB254(v11, v10);
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
void __fastcall CommonEffectComponent__ForceStart_42862776(
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
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v16; // x20
  __int64 v17; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Animation_o *v24; // x20
  UnityEngine_TrackedReference_o *v25; // x20

  if ( (byte_4B1DB08 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_16427/*"_loop"*/, v8);
    byte_4B1DB08 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callAfterStart, (int32_t)callback, (int32_t)callback, method);
  if ( !this->fields.status )
  {
    if ( isOverWrite )
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
        v12 = this->fields.animationComponent;
        if ( !v12 )
          goto LABEL_37;
        UnityEngine_Animation__Stop(v12, 0LL);
      }
    }
    CommonEffectComponent__Init(this, 0, 0, v9);
    return;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v11 = this->fields.simpleAnimationComponent;
    v12 = (UnityEngine_Animation_o *)System_String__Concat_62450424(
                                       this->fields.baseName,
                                       (System_String_o *)StringLiteral_16427/*"_loop"*/,
                                       0LL);
    if ( v11 )
    {
      Item = SimpleAnimation__get_Item(v11, (System_String_o *)v12, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v16 = Item;
        v17 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v17;
            p_offset += 2;
            if ( !v17 )
              goto LABEL_15;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_15:
          p_method = sub_1C1B560(Item, SimpleAnimation_State_TypeInfo, 18LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
          v16,
          2LL,
          *(_QWORD *)(p_method + 8));
      }
      v12 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v12 )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)v12, 0LL);
        goto LABEL_36;
      }
    }
    goto LABEL_37;
  }
  v21 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    goto LABEL_36;
  v24 = this->fields.animationComponent;
  v12 = (UnityEngine_Animation_o *)System_String__Concat_62450424(
                                     this->fields.baseName,
                                     (System_String_o *)StringLiteral_16427/*"_loop"*/,
                                     0LL);
  if ( !v24 )
    goto LABEL_37;
  v25 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v24, (System_String_o *)v12, 0LL);
  v12 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(v25, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    if ( !v25 )
      goto LABEL_37;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v25, 2, 0LL);
  }
  v12 = this->fields.animationComponent;
  if ( !v12 )
LABEL_37:
    sub_1BCB254(v12, v13);
  UnityEngine_Animation__Stop(v12, 0LL);
LABEL_36:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.playAnimation, 0, v22, v23);
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
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_String_o *baseName; // x20
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *v14; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *v15; // x8
  __int64 v16; // x9
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **v17; // x10
  __int64 v18; // x0
  System_String_o *v20; // x2

  if ( (byte_4B1DB1D & 1) == 0 )
  {
    sub_1BCAFF8(&CommonEffectComponent_TypeInfo, *(_QWORD *)&status);
    sub_1BCAFF8(&System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v6);
    byte_4B1DB1D = 1;
  }
  v7 = CommonEffectComponent_TypeInfo;
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v7 = CommonEffectComponent_TypeInfo;
  }
  ANIMATION_NAME_TABLE = v7->static_fields->ANIMATION_NAME_TABLE;
  if ( !ANIMATION_NAME_TABLE )
    goto LABEL_24;
  klass = ANIMATION_NAME_TABLE->klass;
  v10 = *(unsigned __int16 *)(&ANIMATION_NAME_TABLE->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&ANIMATION_NAME_TABLE->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1B560(
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
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v7 = CommonEffectComponent_TypeInfo;
  }
  v14 = v7->static_fields->ANIMATION_NAME_TABLE;
  if ( !v14 )
LABEL_24:
    sub_1BCB254(v7, *(_QWORD *)&status);
  v15 = v14->klass;
  v16 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    v17 = (System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v17 - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      --v16;
      v17 += 2;
      if ( !v16 )
        goto LABEL_20;
    }
    v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 2].method;
  }
  else
  {
LABEL_20:
    v18 = sub_1C1B560(
            v14,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            2LL);
  }
  v20 = (System_String_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v18)(
                             v14,
                             (unsigned int)status,
                             *(_QWORD *)(v18 + 8));
  return System_String__Concat_62488672(baseName, (System_String_o *)StringLiteral_15973/*"_"*/, v20, 0LL);
}


void __fastcall CommonEffectComponent__GetAnimationStateInfo(
        CommonEffectComponent_o *this,
        System_String_o **name,
        float *time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_String_o *AnimationName; // x22
  UnityEngine_Object_o *animationComponent; // x23
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Animation_o *v14; // x0
  UnityEngine_TrackedReference_o *Item; // x22
  System_String_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_String_o *baseName; // x1

  if ( (byte_4B1DB1E & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, name);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v7);
    byte_4B1DB1E = 1;
  }
  *name = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)name, (int32_t)StringLiteral_1/*""*/, (int32_t)time, method);
  *time = -1.0;
  AnimationName = CommonEffectComponent__GetAnimationName(this, this->fields.status, v8);
  if ( AnimationName || (AnimationName = this->fields.baseName) != 0LL )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
    {
      v14 = this->fields.animationComponent;
      if ( !v14 )
        goto LABEL_14;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v14, AnimationName, 0LL);
      v14 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
      if ( ((unsigned __int8)v14 & 1) != 0 )
      {
        if ( Item )
        {
          v16 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
          *name = v16;
          sub_1BCAF9C((CGThumbnailListItem_o *)name, (int32_t)v16, v17, v18);
          *time = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)Item, 0LL);
          return;
        }
LABEL_14:
        sub_1BCB254(v14, v11);
      }
    }
    baseName = this->fields.baseName;
    *name = baseName;
    sub_1BCAF9C((CGThumbnailListItem_o *)name, (int32_t)baseName, v12, v13);
  }
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
  char v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  char v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x23
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  char v23; // w2
  const MethodInfo *v24; // x3
  System_String_o **p_baseName; // x23
  struct System_String_o *v26; // x1
  System_String_o *v27; // x0
  char v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *v30; // x22
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *transform; // x22
  int32_t layer; // w0
  const MethodInfo *v34; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v36; // x1
  UnityEngine_Object_o *v37; // x20

  if ( (byte_4B1DB05 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isSkip);
    sub_1BCAFF8(&StringLiteral_5799/*"Effect("*/, v7);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v8);
    sub_1BCAFF8(&StringLiteral_754/*")"*/, v9);
    sub_1BCAFF8(&StringLiteral_680/*"(Clone)"*/, v10);
    byte_4B1DB05 = 1;
  }
  if ( this->fields.status )
    return;
  p_effectName = &this->fields.effectName;
  if ( !this->fields.effectName )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_37;
    name = UnityEngine_Object__get_name(gameObject, 0LL);
    *p_effectName = name;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.effectName, (int32_t)name, v15, v16);
    gameObject = (UnityEngine_Object_o *)*p_effectName;
    if ( !*p_effectName )
      goto LABEL_37;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_680/*"(Clone)"*/, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)*p_effectName;
      if ( !*p_effectName )
        goto LABEL_37;
      v17 = System_String__Substring_62496348((System_String_o *)gameObject, 0, gameObject->fields.m_CachedPtr - 7, 0LL);
      *p_effectName = v17;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.effectName, (int32_t)v17, v18, v19);
    }
  }
  if ( this->fields.useAnimNum >= 1 )
  {
    v20 = *p_effectName;
    v21 = System_Int32__ToString((int)this + 136, 0LL);
    v22 = System_String__Concat_62488672(v20, (System_String_o *)StringLiteral_15973/*"_"*/, v21, 0LL);
    *p_effectName = v22;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.effectName, (int32_t)v22, v23, v24);
  }
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    v26 = *p_effectName;
    *p_baseName = *p_effectName;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseName, (int32_t)v26, isPause, method);
    gameObject = (UnityEngine_Object_o *)*p_baseName;
    if ( !*p_baseName )
      goto LABEL_37;
    gameObject = (UnityEngine_Object_o *)System_String__LastIndexOf((System_String_o *)gameObject, 0x2Fu, 0LL);
    if ( ((unsigned int)gameObject & 0x80000000) == 0 )
    {
      if ( !*p_baseName )
        goto LABEL_37;
      v27 = System_String__Substring(*p_baseName, (int)gameObject + 1, 0LL);
      *p_baseName = v27;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseName, (int32_t)v27, v28, v29);
    }
  }
  v30 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  gameObject = (UnityEngine_Object_o *)System_String__Concat_62488672(
                                         (System_String_o *)StringLiteral_5799/*"Effect("*/,
                                         this->fields.effectName,
                                         (System_String_o *)StringLiteral_754/*")"*/,
                                         0LL);
  if ( !v30 )
    goto LABEL_37;
  UnityEngine_Object__set_name(v30, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(parent, 0LL, 0LL) )
    goto LABEL_26;
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
LABEL_37:
    sub_1BCB254(gameObject, v13);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  CommonEffectComponent__SetChildInit(this, transform, layer, v34);
LABEL_26:
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
    v36 = 3LL;
    goto LABEL_33;
  }
  if ( this->fields.loop )
  {
    klass = this->klass;
    v36 = 4LL;
LABEL_33:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))klass->vtable._5_NextPlayAnimation.method)(
      this,
      v36,
      klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(v37, 0LL);
  ((void (__fastcall *)(CommonEffectComponent_o *, void *))this->klass->vtable._10_PlayDestroyEffectCallback.method)(
    this,
    this->klass[1]._1.image);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__Init_42859688(
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
    sub_1BCAF9C(
      (CGThumbnailListItem_o *)&this->fields.effectName,
      (int32_t)effectName,
      isSkip,
      (const MethodInfo *)isPause);
    CommonEffectComponent__Init(this, isSkip, isPause, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__Init_42859760(
        CommonEffectComponent_o *this,
        AssetData_o *data,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  char v11; // w2
  const MethodInfo *v12; // x3
  struct System_String_o *name; // x1
  const MethodInfo *v14; // x3

  if ( !this->fields.status )
  {
    this->fields.asset = data;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.asset, (int32_t)data, isSkip, (const MethodInfo *)isPause);
    if ( !data )
      sub_1BCB254(v9, v10);
    name = data->fields.name;
    this->fields.effectName = name;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.effectName, (int32_t)name, v11, v12);
    CommonEffectComponent__Init(this, isSkip, isPause, v14);
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
  struct System_String_o *name; // x1
  __int64 States; // x0
  __int64 v18; // x8
  __int64 v19; // x21
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  UnityEngine_Object_o *animationComponent; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v32; // x8
  __int64 v33; // x9
  System_Collections_IEnumerator_c **v34; // x10
  __int64 v35; // x0
  UnityEngine_AnimationState_o *v36; // x0
  __int64 v37; // x1
  CGThumbnailListItem_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  __int64 v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x8
  __int64 v44; // x21
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x21
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x22
  __int64 v61; // x8
  __int64 v62; // x9
  SimpleAnimation_State_c **v63; // x10
  __int64 v64; // x0
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  SimpleAnimation_o *v69; // x20
  SimpleAnimation_State_o *v70; // x21
  CGThumbnailListItem_o *v71; // x0
  System_Action_o *v72; // x20
  SimpleAnimation_o *v73; // x20
  SimpleAnimation_State_o *v74; // x0
  SimpleAnimation_o *v75; // x20
  SimpleAnimation_State_c *v76; // x8
  __int64 v77; // x9
  SimpleAnimation_State_c **v78; // x10
  __int64 v79; // x0
  UnityEngine_Animation_o *v80; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  CGThumbnailListItem_o *v82; // x0
  System_Action_o *v83; // x20
  UnityEngine_Animation_o *v84; // x20
  UnityEngine_Animation_o *v85; // x20

  v3 = next;
  if ( (byte_4B1DB07 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_AnimationState_TypeInfo, *(_QWORD *)&next);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v5);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_16427/*"_loop"*/, v11);
    sub_1BCAFF8(&StringLiteral_16446/*"_start"*/, v12);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v13);
    sub_1BCAFF8(&StringLiteral_16412/*"_end"*/, v14);
    byte_4B1DB07 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
    {
      if ( v3 == 4 )
      {
        if ( this->fields.loop )
          v3 = 4;
        else
          v3 = 6;
      }
      else if ( v3 == 3 )
      {
        p_callAfterStart = (CGThumbnailListItem_o *)&this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          p_callAfterStart->klass = 0LL;
          sub_1BCAF9C(p_callAfterStart, 0, v24, v25);
          ActionExtensions__Call(callAfterStart, 0LL);
        }
        v3 = 3;
      }
      goto LABEL_129;
    }
    States = (__int64)this->fields.animationComponent;
    if ( !States
      || (UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)States, 0LL),
          (States = (__int64)this->fields.animationComponent) == 0) )
    {
LABEL_136:
      sub_1BCB254(States, name);
    }
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
    if ( !Enumerator )
      sub_1BCB254(0LL, v26);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v29;
          p_offset += 4;
          if ( !v29 )
            goto LABEL_24;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_24:
        p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v32 = Enumerator->klass;
      v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v34 = (System_Collections_IEnumerator_c **)&v32->_1.interfaceOffsets->offset;
        while ( *(v34 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v33;
          v34 += 2;
          if ( !v33 )
            goto LABEL_31;
        }
        v35 = (__int64)&v32->vtable[*(_DWORD *)v34 + 1].method;
      }
      else
      {
LABEL_31:
        v35 = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v36 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v35)(
                                              Enumerator,
                                              *(_QWORD *)(v35 + 8));
      if ( !v36 )
        goto LABEL_135;
      if ( v36->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1BCB514(v36);
LABEL_135:
        sub_1BCB254(v36, v37);
      }
      UnityEngine_AnimationState__get_name(v36, 0LL);
    }
    v40 = sub_1BCB134(Enumerator, System_IDisposable_TypeInfo);
    if ( v40 )
    {
      v43 = *(_QWORD *)v40;
      v44 = v40;
      v45 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
      {
        v46 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
        {
          --v45;
          v46 += 4;
          if ( !v45 )
            goto LABEL_46;
        }
        v47 = v43 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_46:
        v47 = sub_1C1B560(v40, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v47)(v44, *(_QWORD *)(v47 + 8));
    }
    switch ( v3 )
    {
      case 3:
        v80 = this->fields.animationComponent;
        States = (__int64)System_String__Concat_62450424(
                            this->fields.baseName,
                            (System_String_o *)StringLiteral_16446/*"_start"*/,
                            0LL);
        if ( !v80 )
          goto LABEL_136;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v80, (System_String_o *)States, 0LL);
        if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
        {
          States = (__int64)this->fields.animationComponent;
          if ( !States )
            goto LABEL_136;
          Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                     (UnityEngine_Animation_o *)States,
                                                     this->fields.baseName,
                                                     0LL);
        }
        if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
        {
          this->fields.endtime = 0.0;
          v3 = 3;
          goto LABEL_126;
        }
        break;
      case 4:
        break;
      case 6:
        goto LABEL_124;
      default:
        States = UnityEngine_TrackedReference__op_Inequality(0LL, 0LL, 0LL);
        if ( (States & 1) != 0 || !this )
          goto LABEL_136;
LABEL_129:
        name = (struct System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_130;
    }
    v82 = (CGThumbnailListItem_o *)&this->fields.callAfterStart;
    v83 = this->fields.callAfterStart;
    if ( v83 )
    {
      v82->klass = 0LL;
      sub_1BCAF9C(v82, 0, v41, v42);
      ActionExtensions__Call(v83, 0LL);
    }
    if ( this->fields.loop )
    {
      v84 = this->fields.animationComponent;
      States = (__int64)System_String__Concat_62450424(
                          this->fields.baseName,
                          (System_String_o *)StringLiteral_16427/*"_loop"*/,
                          0LL);
      if ( !v84 )
        goto LABEL_136;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v84, (System_String_o *)States, 0LL);
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        v3 = 4;
        goto LABEL_126;
      }
    }
LABEL_124:
    v85 = this->fields.animationComponent;
    States = (__int64)System_String__Concat_62450424(this->fields.baseName, (System_String_o *)StringLiteral_16412/*"_end"*/, 0LL);
    if ( !v85 )
      goto LABEL_136;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v85, (System_String_o *)States, 0LL);
    v3 = 6;
LABEL_126:
    States = UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
    if ( (States & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_136;
      name = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
      goto LABEL_130;
    }
    goto LABEL_129;
  }
  States = (__int64)this->fields.simpleAnimationComponent;
  if ( !States )
    goto LABEL_136;
  SimpleAnimation__GetClipCount((SimpleAnimation_o *)States, 0LL);
  States = (__int64)this->fields.simpleAnimationComponent;
  if ( !States )
    goto LABEL_136;
  States = (__int64)SimpleAnimation__GetStates((SimpleAnimation_o *)States, 0LL);
  if ( !States )
    goto LABEL_136;
  v18 = *(_QWORD *)States;
  v19 = States;
  v20 = *(unsigned __int16 *)(*(_QWORD *)States + 302LL);
  if ( *(_WORD *)(*(_QWORD *)States + 302LL) )
  {
    v21 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)v21 - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_13;
    }
    v22 = v18 + 16LL * *v21 + 312;
  }
  else
  {
LABEL_13:
    v22 = sub_1C1B560(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  if ( !v49 )
    sub_1BCB254(0LL, v48);
  while ( 1 )
  {
    v50 = *(_QWORD *)v49;
    v51 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v52 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_53;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_53:
      v53 = sub_1C1B560(v49, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8)) & 1) == 0 )
      break;
    v54 = *(_QWORD *)v49;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v56 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_60;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_60:
      v57 = sub_1C1B560(v49, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v49, *(_QWORD *)(v57 + 8));
    v60 = v58;
    if ( !v58 )
      sub_1BCB254(0LL, v59);
    v61 = *(_QWORD *)v58;
    v62 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
    {
      v63 = (SimpleAnimation_State_c **)(*(_QWORD *)(v61 + 176) + 8LL);
      while ( *(v63 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v62;
        v63 += 2;
        if ( !v62 )
          goto LABEL_67;
      }
      v64 = v61 + 16LL * (*(_DWORD *)v63 + 9) + 312;
    }
    else
    {
LABEL_67:
      v64 = sub_1C1B560(v58, SimpleAnimation_State_TypeInfo, 9LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v64)(v60, *(_QWORD *)(v64 + 8));
  }
  v65 = *(_QWORD *)v49;
  v66 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
  {
    v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_74;
    }
    v68 = v65 + 16LL * *v67 + 312;
  }
  else
  {
LABEL_74:
    v68 = sub_1C1B560(v49, System_IDisposable_TypeInfo, 0LL);
  }
  States = (*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v49, *(_QWORD *)(v68 + 8));
  if ( v3 == 3 )
  {
    v69 = this->fields.simpleAnimationComponent;
    States = (__int64)System_String__Concat_62450424(this->fields.baseName, (System_String_o *)StringLiteral_16446/*"_start"*/, 0LL);
    if ( !v69 )
      goto LABEL_136;
    v70 = SimpleAnimation__get_Item(v69, (System_String_o *)States, 0LL);
    if ( v70 )
      goto LABEL_87;
    States = (__int64)this->fields.simpleAnimationComponent;
    if ( !States )
      goto LABEL_136;
    v70 = SimpleAnimation__get_Item((SimpleAnimation_o *)States, this->fields.baseName, 0LL);
    if ( v70 )
    {
LABEL_87:
      this->fields.endtime = 0.0;
      v3 = 3;
      goto LABEL_96;
    }
    goto LABEL_88;
  }
  if ( v3 == 4 )
  {
LABEL_88:
    v71 = (CGThumbnailListItem_o *)&this->fields.callAfterStart;
    v72 = this->fields.callAfterStart;
    if ( v72 )
    {
      v71->klass = 0LL;
      sub_1BCAF9C(v71, 0, v24, v25);
      ActionExtensions__Call(v72, 0LL);
    }
    if ( this->fields.loop )
    {
      v73 = this->fields.simpleAnimationComponent;
      States = (__int64)System_String__Concat_62450424(
                          this->fields.baseName,
                          (System_String_o *)StringLiteral_16427/*"_loop"*/,
                          0LL);
      if ( !v73 )
        goto LABEL_136;
      v74 = SimpleAnimation__get_Item(v73, (System_String_o *)States, 0LL);
      if ( v74 )
      {
        v70 = v74;
        v3 = 4;
        goto LABEL_96;
      }
    }
    goto LABEL_94;
  }
  if ( v3 != 6 )
  {
LABEL_101:
    name = (struct System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_104;
  }
LABEL_94:
  v75 = this->fields.simpleAnimationComponent;
  States = (__int64)System_String__Concat_62450424(this->fields.baseName, (System_String_o *)StringLiteral_16412/*"_end"*/, 0LL);
  if ( !v75 )
    goto LABEL_136;
  States = (__int64)SimpleAnimation__get_Item(v75, (System_String_o *)States, 0LL);
  v70 = (SimpleAnimation_State_o *)States;
  v3 = 6;
  if ( !States )
    goto LABEL_101;
LABEL_96:
  v76 = v70->klass;
  v77 = *(unsigned __int16 *)(&v70->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v70->klass->_2.bitflags2 + 3) )
  {
    v78 = (SimpleAnimation_State_c **)&v76->_1.interfaceOffsets->offset;
    while ( *(v78 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v77;
      v78 += 2;
      if ( !v77 )
        goto LABEL_100;
    }
    v79 = (__int64)&v76->vtable[*(_DWORD *)v78 + 9].method;
  }
  else
  {
LABEL_100:
    v79 = sub_1C1B560(v70, SimpleAnimation_State_TypeInfo, 9LL);
  }
  States = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v79)(v70, *(_QWORD *)(v79 + 8));
  name = (struct System_String_o *)States;
LABEL_104:
  if ( !this )
    goto LABEL_136;
LABEL_130:
  this->fields.requestAnimation = name;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.requestAnimation, (int32_t)name, v24, v25);
  this->fields.status = v3;
}


void __fastcall CommonEffectComponent__NotifyEvent(
        CommonEffectComponent_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  if ( (byte_4B1DB10 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_string___, eventName);
    byte_4B1DB10 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.notifyEventCallback,
    (Il2CppObject *)eventName,
    (const MethodInfo_2F6A0EC *)Method_ActionExtensions_Call_string___);
}


void __fastcall CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *asset; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1DB0F & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    byte_4B1DB0F = 1;
  }
  asset = this->fields.asset;
  if ( asset )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39722652(asset, 0LL);
    this->fields.asset = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.asset, 0, v4, v5);
  }
  this->fields.status = 2;
}


void __fastcall CommonEffectComponent__OnRelease(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  CommonEffectComponent_o *v5; // x0
  const MethodInfo *v6; // x3
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4B1DB19 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_CommonEffectComponent__OnRelease_b__81_0__, v3);
    byte_4B1DB19 = 1;
  }
  *(_WORD *)&this->fields.isTouching = 256;
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_CommonEffectComponent__OnRelease_b__81_0__, 0LL);
  v7 = CommonEffectComponent__DelayFrameCoroutine(v5, 1, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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


void __fastcall CommonEffectComponent__PlayDestroyEffectCallback(
        CommonEffectComponent_o *this,
        const MethodInfo *method)
{
  ;
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B1DB1C & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    byte_4B1DB1C = 1;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(animationComponent, 0LL, 0LL) )
    return 0;
  AnimationName = CommonEffectComponent__GetAnimationName(this, next, v6);
  if ( System_String__IsNullOrEmpty(AnimationName, 0LL) )
    return 0;
  name = this->fields.animationComponent;
  if ( !name )
    goto LABEL_13;
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
LABEL_13:
    sub_1BCB254(name, v8);
  }
  UnityEngine_Animation__Play_69881360(v12, (System_String_o *)name, 0LL);
  v13 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
  this->fields.playAnimation = v13;
  p_playAnimation = &this->fields.playAnimation;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_playAnimation, (int32_t)v13, v15, v16);
  result = 1;
  *((_DWORD *)p_playAnimation - 4) = next;
  return result;
}


void __fastcall CommonEffectComponent__PlaySe(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_array *IsNullOrEmpty; // x0
  __int64 v5; // x1
  System_String_array *v6; // x19
  int max_length; // w20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_String_o *v10; // x1
  __int64 v11; // x2
  unsigned int v12; // w8
  SePlayer_o *v13; // x0
  SePlayer_o *v14; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B1DB11 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CommonEffectComponent_PlaySe__, name);
    byte_4B1DB11 = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name )
      goto LABEL_17;
    IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_17;
    v6 = IsNullOrEmpty;
    max_length = IsNullOrEmpty->max_length;
    v8 = Method_CommonEffectComponent_PlaySe__;
    if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySe__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCB010(Method_CommonEffectComponent_PlaySe__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v8, v8[4]);
    v12 = v6->max_length;
    if ( !v12 )
      goto LABEL_18;
    v10 = v6->m_Items[0];
    if ( max_length < 2 )
    {
      OverwriteAssetSoundName__PlaySe(v9, v10, 0, 0LL);
      return;
    }
    if ( v12 <= 1 )
LABEL_18:
      sub_1BCB25C(v9, v10, v11);
    v13 = OverwriteAssetSoundName__PlaySe_40595740(v9, v10, v6->m_Items[1], 1.0, 0LL, 0, 0LL);
    result = 0.0;
    if ( (int)v6->max_length >= 3 )
    {
      v14 = v13;
      IsNullOrEmpty = (System_String_array *)System_Single__TryParse(v6->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v14 )
        {
          SePlayer__set_Pitch(v14, result, 0LL);
          return;
        }
LABEL_17:
        sub_1BCB254(IsNullOrEmpty, v5);
      }
    }
  }
}


void __fastcall CommonEffectComponent__PlaySeContinue(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_String_o *v8; // x1
  __int64 v9; // x2
  unsigned int v10; // w8

  if ( (byte_4B1DB12 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1BCAFF8(&Method_CommonEffectComponent_PlaySeContinue__, name);
    byte_4B1DB12 = 1;
  }
  if ( !name || (this = (CommonEffectComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCB254(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeContinue__;
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeContinue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCB010(Method_CommonEffectComponent_PlaySeContinue__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
  v10 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_13;
  v8 = *(System_String_o **)&v4->fields.endtime;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, v8, 0, 0LL);
    return;
  }
  if ( v10 <= 1 )
LABEL_13:
    sub_1BCB25C(v7, v8, v9);
  OverwriteAssetSoundName__PlaySeContinue_40594888(v7, v8, *(System_String_o **)&v4->fields.touchEffectTime, 0, 0LL);
}


void __fastcall CommonEffectComponent__PlaySeContinueIgnorePreDelay(
        CommonEffectComponent_o *this,
        System_String_o *soundInfo,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_String_o *v8; // x1
  __int64 v9; // x2
  unsigned int v10; // w8

  if ( (byte_4B1DB14 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1BCAFF8(
                                        &Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__,
                                        soundInfo);
    byte_4B1DB14 = 1;
  }
  if ( !soundInfo || (this = (CommonEffectComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCB254(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__;
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCB010(Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
  v10 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_13;
  v8 = *(System_String_o **)&v4->fields.endtime;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, v8, 1, 0LL);
    return;
  }
  if ( v10 <= 1 )
LABEL_13:
    sub_1BCB25C(v7, v8, v9);
  OverwriteAssetSoundName__PlaySeContinue_40594888(v7, v8, *(System_String_o **)&v4->fields.touchEffectTime, 1, 0LL);
}


void __fastcall CommonEffectComponent__PlaySeIgnorePreDelay(
        CommonEffectComponent_o *this,
        System_String_o *soundInfo,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_String_o *v8; // x1
  __int64 v9; // x2
  unsigned int v10; // w8

  if ( (byte_4B1DB13 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1BCAFF8(&Method_CommonEffectComponent_PlaySeIgnorePreDelay__, soundInfo);
    byte_4B1DB13 = 1;
  }
  if ( !soundInfo || (this = (CommonEffectComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCB254(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeIgnorePreDelay__;
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCB010(Method_CommonEffectComponent_PlaySeIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
  v10 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_13;
  v8 = *(System_String_o **)&v4->fields.endtime;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, v8, 1, 0LL);
    return;
  }
  if ( v10 <= 1 )
LABEL_13:
    sub_1BCB25C(v7, v8, v9);
  OverwriteAssetSoundName__PlaySe_40595740(v7, v8, *(System_String_o **)&v4->fields.touchEffectTime, 1.0, 0LL, 1, 0LL);
}


void __fastcall CommonEffectComponent__PlaySettedVoice(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *settedVoiceStr; // x1

  settedVoiceStr = this->fields.settedVoiceStr;
  if ( settedVoiceStr )
    CommonEffectComponent__PlayVoice_42867524(this, settedVoiceStr, this->fields.voiceCallback, v2);
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
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_o *v13; // x22
  SimpleAnimation_State_o *v14; // x21
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  SimpleAnimation_State_c *v18; // x8
  __int64 v19; // x9
  SimpleAnimation_State_c **v20; // x10
  __int64 v21; // x0
  struct System_String_o *v22; // x0
  struct System_String_o **p_playAnimation; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4B1DB1B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, v5);
    byte_4B1DB1B = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      goto LABEL_25;
    Item = SimpleAnimation__get_Item(v11, AnimationName, 0LL);
    if ( !Item )
      return (char)Item;
    klass = Item->klass;
    v13 = this->fields.simpleAnimationComponent;
    v14 = Item;
    v15 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v15;
        p_offset += 2;
        if ( !v15 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1C1B560(Item, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v11 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v14,
                                 *(_QWORD *)(p_method + 8));
    if ( !v13 )
LABEL_25:
      sub_1BCB254(v11, v9);
    SimpleAnimation__Play_65395744(v13, (System_String_o *)v11, 0LL);
    v18 = v14->klass;
    v19 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
    {
      v20 = (SimpleAnimation_State_c **)&v18->_1.interfaceOffsets->offset;
      while ( *(v20 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v19;
        v20 += 2;
        if ( !v19 )
          goto LABEL_22;
      }
      v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 9].method;
    }
    else
    {
LABEL_22:
      v21 = sub_1C1B560(v14, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v22 = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v21)(
                                      v14,
                                      *(_QWORD *)(v21 + 8));
    this->fields.playAnimation = v22;
    p_playAnimation = &this->fields.playAnimation;
    sub_1BCAF9C((CGThumbnailListItem_o *)p_playAnimation, (int32_t)v22, v24, v25);
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

  CommonEffectComponent__PlayVoice_42867524(this, name, 0LL, v3);
}


void __fastcall CommonEffectComponent__PlayVoice_42867524(
        CommonEffectComponent_o *this,
        System_String_o *name,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *IsNullOrEmpty; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  System_String_array *v10; // x20
  System_String_o *v11; // x20
  float v12; // s0
  float v13; // s8
  System_String_o *v14; // x20
  System_String_o *v15; // x21

  if ( (byte_4B1DB15 & 1) == 0 )
  {
    sub_1BCAFF8(&SoundManager_TypeInfo, name);
    byte_4B1DB15 = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name || (IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
      sub_1BCB254(IsNullOrEmpty, v7);
    v9 = *(_QWORD *)&IsNullOrEmpty->max_length;
    v10 = IsNullOrEmpty;
    if ( (int)v9 < 2 )
    {
      if ( (_DWORD)v9 )
      {
        v11 = IsNullOrEmpty->m_Items[0];
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playVoice_40693676(v11, callback, 0, 0LL);
        return;
      }
LABEL_19:
      sub_1BCB25C(IsNullOrEmpty, v7, v8);
    }
    if ( (_DWORD)v9 == 2 )
    {
      v13 = 1.0;
    }
    else
    {
      v12 = System_Single__Parse(IsNullOrEmpty->m_Items[2], 0LL);
      v9 = *(_QWORD *)&v10->max_length;
      v13 = v12;
    }
    if ( (unsigned int)v9 < 2 )
      goto LABEL_19;
    v15 = v10->m_Items[0];
    v14 = v10->m_Items[1];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_40693920(v15, v14, v13, callback, 0, 0LL);
  }
}


void __fastcall CommonEffectComponent__ResetPrewarmParticleList(
        CommonEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonEffectComponent_o *v3; // x19
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x19
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v9; // 0:x0.8

  v3 = this;
  if ( (byte_4B1DB18 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1DB18 = 1;
  }
  m_ParticleSystem = 0LL;
  particlelist = v3->fields.particlelist;
  if ( particlelist )
  {
    v5 = *(_QWORD *)&particlelist->max_length;
    if ( v5 )
    {
      if ( (int)v5 >= 1 )
      {
        v6 = 0LL;
        do
        {
          if ( v6 >= (unsigned int)v5 )
            sub_1BCB25C(this, method, v2);
          v7 = (UnityEngine_Object_o *)particlelist->m_Items[v6];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (CommonEffectComponent_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v7 )
              sub_1BCB254(this, method);
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
                UnityEngine_ParticleSystem__Simulate_70419328((UnityEngine_ParticleSystem_o *)v7, 1.0, 0LL);
                UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)v7, 1, 0LL);
              }
            }
          }
          LODWORD(v5) = particlelist->max_length;
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
  bool v5; // w21
  _BOOL4 isStart; // w8
  UnityEngine_Object_o *gameObject; // x20

  v5 = isSkip;
  if ( (byte_4B1DB06 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isSkip);
    byte_4B1DB06 = 1;
  }
  isStart = this->fields.isStart;
  this->fields.isSkip = v5;
  if ( isStart )
  {
    if ( this->fields.isPause )
    {
      this->fields.isPause = 0;
      if ( isSkip )
      {
        if ( this->fields.loop )
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
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
          ((void (__fastcall *)(CommonEffectComponent_o *, void *))this->klass->vtable._10_PlayDestroyEffectCallback.method)(
            this,
            this->klass[1]._1.image);
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

  if ( (byte_4B1DB0B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1DB0B = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_1BCB254(0LL, v4);
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Transform_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 methodPtr_low; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x19
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  v6 = this;
  if ( (byte_4B1DB0C & 1) == 0 )
  {
    sub_1BCAFF8(&System_IDisposable_TypeInfo, tf);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (CommonEffectComponent_o *)sub_1BCAFF8(&UnityEngine_Transform_TypeInfo, v8);
    byte_4B1DB0C = 1;
  }
  if ( !tf
    || (this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_1BCB254(this, tf);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_1BCB254(0LL, v9);
    while ( 1 )
    {
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
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v15 = Enumerator->klass;
      v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
        while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 2;
          if ( !v16 )
            goto LABEL_19;
        }
        v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
      }
      else
      {
LABEL_19:
        v18 = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v19 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                         Enumerator,
                                         *(_QWORD *)(v18 + 8));
      if ( v19 )
      {
        methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_1BCB514(v19);
          goto LABEL_35;
        }
      }
      CommonEffectComponent__SetChildInit(v6, v19, layer, v20);
    }
    v22 = sub_1BCB134(Enumerator, System_IDisposable_TypeInfo);
    if ( v22 )
    {
      v23 = *(_QWORD *)v22;
      v24 = v22;
      v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
      {
        v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
        {
          --v25;
          v26 += 4;
          if ( !v25 )
            goto LABEL_30;
        }
        v27 = v23 + 16LL * *v26 + 312;
      }
      else
      {
LABEL_30:
        v27 = sub_1C1B560(v22, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
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


void __fastcall CommonEffectComponent__SetNotifyEventCallback(
        CommonEffectComponent_o *this,
        System_Action_string__o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.notifyEventCallback = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.notifyEventCallback, (int32_t)callback, (int32_t)method, v3);
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
  System_String_o *v4; // x19
  float v5; // s8

  if ( (byte_4B1DB17 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1BCAFF8(&SoundManager_TypeInfo, str);
    byte_4B1DB17 = 1;
  }
  if ( !str || (this = (CommonEffectComponent_o *)System_String__Split(str, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCB254(this, str);
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
  {
    v4 = *(System_String_o **)&this->fields.endtime;
    v5 = System_Single__Parse(*(System_String_o **)&this->fields.touchEffectTime, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__setPitchSe(v4, v5, 0LL);
  }
}


void __fastcall CommonEffectComponent__SetTime(
        CommonEffectComponent_o *this,
        float endTime,
        float lostTime,
        const MethodInfo *method)
{
  this->fields.endtime = endTime;
  this->fields.losttime = lostTime;
}


void __fastcall CommonEffectComponent__SetTouchCallback(
        CommonEffectComponent_o *this,
        System_Action_o *inputTouchCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.touchCallback = inputTouchCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.touchCallback, (int32_t)inputTouchCallback, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__SetUseAnimNum(
        CommonEffectComponent_o *this,
        int32_t num,
        bool isUpdateName,
        const MethodInfo *method)
{
  System_String_o *effectName; // x21
  System_String_o *v8; // x0
  struct System_String_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B1DB16 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, *(_QWORD *)&num);
    byte_4B1DB16 = 1;
  }
  this->fields.useAnimNum = num;
  if ( isUpdateName )
  {
    if ( this->fields.baseName )
    {
      effectName = this->fields.effectName;
      v8 = System_Int32__ToString((int)this + 136, 0LL);
      v9 = System_String__Concat_62488672(effectName, (System_String_o *)StringLiteral_15973/*"_"*/, v8, 0LL);
      this->fields.baseName = v9;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseName, (int32_t)v9, v10, v11);
    }
  }
}


void __fastcall CommonEffectComponent__SetUseDeltaTimeInActive(
        CommonEffectComponent_o *this,
        bool isUse,
        const MethodInfo *method)
{
  this->fields.useDeltaTimeInActive = isUse;
}


void __fastcall CommonEffectComponent__SetVoice(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.settedVoiceStr = voiceStr;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.settedVoiceStr, (int32_t)voiceStr, (int32_t)method, v3);
  this->fields.voiceCallback = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voiceCallback, 0, v5, v6);
}


void __fastcall CommonEffectComponent__SetVoice_42867872(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.settedVoiceStr = voiceStr;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.settedVoiceStr, (int32_t)voiceStr, (int32_t)callback, method);
  this->fields.voiceCallback = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voiceCallback, (int32_t)callback, v6, v7);
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
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v19; // x19
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_TrackedReference_o *v23; // x19

  if ( (byte_4B1DB0A & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, force);
    sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_16427/*"_loop"*/, v10);
    byte_4B1DB0A = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0LL);
    return;
  }
  this->fields.callAfterStop = onStoppedCallback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.callAfterStop,
    (int32_t)onStoppedCallback,
    isDestroy,
    (const MethodInfo *)onStoppedCallback);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_31:
      sub_1BCB254(v12, v13);
    }
    v12 = System_String__Concat_62450424(this->fields.baseName, (System_String_o *)StringLiteral_16427/*"_loop"*/, 0LL);
    if ( !v14 )
      goto LABEL_31;
    Item = SimpleAnimation__get_Item(v14, v12, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v19 = Item;
      v20 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v20;
          p_offset += 2;
          if ( !v20 )
            goto LABEL_23;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_23:
        p_method = sub_1C1B560(Item, SimpleAnimation_State_TypeInfo, 18LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v19, 1LL, *(_QWORD *)(p_method + 8));
    }
  }
  else
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = (System_String_o *)UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL);
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      v16 = this->fields.animationComponent;
      if ( force )
      {
        if ( !v16 )
          goto LABEL_31;
        UnityEngine_Animation__Stop(this->fields.animationComponent, 0LL);
      }
      else
      {
        v12 = System_String__Concat_62450424(this->fields.baseName, (System_String_o *)StringLiteral_16427/*"_loop"*/, 0LL);
        if ( !v16 )
          goto LABEL_31;
        v23 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v16, v12, 0LL);
        v12 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v23, 0LL, 0LL);
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_31;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v23, 1, 0LL);
        }
      }
    }
  }
}


bool __fastcall CommonEffectComponent__StopOrLoopEnd(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v5; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  SimpleAnimation_o *v8; // x20
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Animation_o *v10; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v12; // x20
  bool v13; // w20

  if ( (byte_4B1DB20 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_16427/*"_loop"*/, v3);
    byte_4B1DB20 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      goto LABEL_19;
    v10 = this->fields.animationComponent;
    v6 = System_String__Concat_62450424(this->fields.baseName, (System_String_o *)StringLiteral_16427/*"_loop"*/, 0LL);
    if ( v10 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v10, v6, 0LL);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
        goto LABEL_19;
      v12 = this->fields.animationComponent;
      v6 = System_String__Concat_62450424(this->fields.baseName, (System_String_o *)StringLiteral_16427/*"_loop"*/, 0LL);
      if ( v12 )
      {
        if ( !UnityEngine_Animation__IsPlaying(v12, v6, 0LL) )
          goto LABEL_19;
LABEL_18:
        v13 = 1;
        ((void (__fastcall *)(CommonEffectComponent_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_Stop.method)(
          this,
          1LL,
          0LL,
          this->klass->vtable._9_ForceStop.methodPtr);
        return v13;
      }
    }
LABEL_24:
    sub_1BCB254(v6, v7);
  }
  v5 = this->fields.simpleAnimationComponent;
  v6 = System_String__Concat_62450424(this->fields.baseName, (System_String_o *)StringLiteral_16427/*"_loop"*/, 0LL);
  if ( !v5 )
    goto LABEL_24;
  if ( !SimpleAnimation__get_Item(v5, v6, 0LL) )
    goto LABEL_19;
  v8 = this->fields.simpleAnimationComponent;
  v6 = System_String__Concat_62450424(this->fields.baseName, (System_String_o *)StringLiteral_16427/*"_loop"*/, 0LL);
  if ( !v8 )
    goto LABEL_24;
  if ( SimpleAnimation__IsPlaying(v8, v6, 0LL) )
    goto LABEL_18;
LABEL_19:
  if ( this->fields.status == 4 && this->fields.loop )
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_ForceStop.method)(
      this,
      1LL,
      0LL,
      this->klass->vtable._10_PlayDestroyEffectCallback.methodPtr);
  return 0;
}


void __fastcall CommonEffectComponent__Update(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float totaltime; // s8
  const MethodInfo *v5; // x1
  float DeltaTimeInActive; // s0
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *v8; // x21
  __int64 v9; // x1
  SimpleAnimation_o *v10; // x0
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  CGThumbnailListItem_o *p_playAnimation; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *animationComponent; // x21
  int32_t status; // w8
  struct System_String_o **v21; // x0
  struct System_String_o *requestAnimation; // x1
  UnityEngine_Object_o *v23; // x21
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  struct UnityEngine_ParticleSystem_array *particlelist; // x23
  __int64 v27; // x8
  unsigned __int64 v28; // x24
  UnityEngine_Object_o *v29; // x21
  float v30; // s0
  CGThumbnailListItem_o *p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B1DB0E & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v3);
    byte_4B1DB0E = 1;
  }
  if ( this->fields.status < 3u )
    return;
  totaltime = this->fields.totaltime;
  if ( this->fields.useDeltaTimeInActive )
    DeltaTimeInActive = RealTime__get_DeltaTimeInActive(0LL);
  else
    DeltaTimeInActive = RealTime__get_deltaTime(0LL);
  this->fields.totaltime = totaltime + DeltaTimeInActive;
  CommonEffectComponent__UpdateTouchAnimation(this, v5);
  p_requestAnimation = &this->fields.requestAnimation;
  if ( !this->fields.requestAnimation )
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL)
      && (p_playAnimation = (CGThumbnailListItem_o *)&this->fields.playAnimation, this->fields.playAnimation) )
    {
      v10 = this->fields.simpleAnimationComponent;
      if ( !v10 )
        goto LABEL_85;
      if ( SimpleAnimation__CheckPlaying(v10, 0LL) )
        return;
    }
    else
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_44;
      p_playAnimation = (CGThumbnailListItem_o *)&this->fields.playAnimation;
      if ( !this->fields.playAnimation )
        goto LABEL_44;
      v10 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v10 )
        goto LABEL_85;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v10, 0LL) )
        return;
    }
    status = this->fields.status;
    if ( status != 6 )
      goto LABEL_45;
    p_playAnimation->klass = 0LL;
    sub_1BCAF9C(p_playAnimation, 0, v17, v18);
LABEL_44:
    status = this->fields.status;
LABEL_45:
    if ( status == 6 )
    {
      if ( !this->fields.isEndless )
      {
        if ( (float)(this->fields.endtime + this->fields.losttime) < this->fields.totaltime )
        {
          p_callAfterStop = (CGThumbnailListItem_o *)&this->fields.callAfterStop;
          callAfterStop = this->fields.callAfterStop;
          if ( callAfterStop )
          {
            p_callAfterStop->klass = 0LL;
            sub_1BCAF9C(p_callAfterStop, 0, v17, v18);
            ActionExtensions__Call(callAfterStop, 0LL);
          }
          if ( this->fields.isDestroy )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
            ((void (__fastcall *)(CommonEffectComponent_o *, void *))this->klass->vtable._10_PlayDestroyEffectCallback.method)(
              this,
              this->klass[1]._1.image);
          }
        }
        return;
      }
      goto LABEL_75;
    }
    if ( status != 4 )
    {
      if ( status != 3 )
        goto LABEL_75;
      if ( this->fields.endtime > this->fields.totaltime )
        return;
    }
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr);
LABEL_75:
    if ( !*p_requestAnimation )
      return;
  }
  v8 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
  {
    v10 = this->fields.simpleAnimationComponent;
    if ( !v10 )
      goto LABEL_85;
    if ( SimpleAnimation__CheckPlaying(v10, 0LL) )
      return;
  }
  else
  {
    v11 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      v10 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v10 )
        goto LABEL_85;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v10, 0LL) )
        return;
    }
  }
  if ( System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v14 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    {
      v10 = this->fields.simpleAnimationComponent;
      if ( v10 )
      {
        SimpleAnimation__Play_65395744(v10, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_59;
        v10 = this->fields.simpleAnimationComponent;
        if ( v10 )
        {
          SimpleAnimation__Sample(v10, 0LL);
LABEL_59:
          requestAnimation = this->fields.requestAnimation;
          this->fields.playAnimation = requestAnimation;
          v21 = &this->fields.playAnimation;
          goto LABEL_60;
        }
      }
    }
    else
    {
      v23 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
        goto LABEL_59;
      v10 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v10 )
      {
        UnityEngine_Animation__Play_69881360((UnityEngine_Animation_o *)v10, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_59;
        v10 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v10 )
        {
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v10, 0LL);
          goto LABEL_59;
        }
      }
    }
LABEL_85:
    sub_1BCB254(v10, v9);
  }
  this->fields.playAnimation = 0LL;
  v21 = &this->fields.playAnimation;
  LODWORD(requestAnimation) = 0;
LABEL_60:
  sub_1BCAF9C((CGThumbnailListItem_o *)v21, (int32_t)requestAnimation, v12, v13);
  if ( this->fields.status == 6 )
  {
    particlelist = this->fields.particlelist;
    if ( particlelist )
    {
      v27 = *(_QWORD *)&particlelist->max_length;
      if ( (int)v27 >= 1 )
      {
        v28 = 0LL;
        do
        {
          if ( v28 >= (unsigned int)v27 )
            sub_1BCB25C(v10, v9, v24);
          v29 = (UnityEngine_Object_o *)particlelist->m_Items[v28];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v10 = (SimpleAnimation_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
          if ( ((unsigned __int8)v10 & 1) != 0 )
          {
            if ( !v29 )
              goto LABEL_85;
            UnityEngine_ParticleSystem__Stop_70419836((UnityEngine_ParticleSystem_o *)v29, 0LL);
          }
          LODWORD(v27) = particlelist->max_length;
          ++v28;
        }
        while ( (__int64)v28 < (int)v27 );
      }
    }
    v30 = this->fields.totaltime;
    if ( v30 > this->fields.endtime )
      this->fields.endtime = v30;
  }
  *p_requestAnimation = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.requestAnimation, 0, v24, v25);
}


void __fastcall CommonEffectComponent__UpdateTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float touchStartTime; // s8
  CommonEffectComponent_c *v5; // x0
  CommonEffectComponent_c *v6; // x0

  if ( (byte_4B1DB1F & 1) == 0 )
  {
    sub_1BCAFF8(&CommonEffectComponent_TypeInfo, method);
    byte_4B1DB1F = 1;
  }
  if ( this->fields.status == 5 )
  {
    touchStartTime = this->fields.touchStartTime;
    v5 = CommonEffectComponent_TypeInfo;
    if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
      v5 = CommonEffectComponent_TypeInfo;
    }
    if ( touchStartTime > v5->static_fields->DEFAULT_TOUCH_START_TIME
      && !this->fields.isTouching
      && this->fields.touchEffectTime < (float)(this->fields.totaltime - this->fields.touchStartTime)
      && CommonEffectComponent__PlayAnimation(this, 4, v2) )
    {
      v6 = CommonEffectComponent_TypeInfo;
      if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
        v6 = CommonEffectComponent_TypeInfo;
      }
      this->fields.touchStartTime = v6->static_fields->DEFAULT_TOUCH_START_TIME;
    }
  }
}


void __fastcall CommonEffectComponent___OnRelease_b__81_0(CommonEffectComponent_o *this, const MethodInfo *method)
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


void __fastcall CommonEffectComponent__DelayFrameCoroutine_d__82___ctor(
        CommonEffectComponent__DelayFrameCoroutine_d__82_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CommonEffectComponent__DelayFrameCoroutine_d__82__MoveNext(
        CommonEffectComponent__DelayFrameCoroutine_d__82_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
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
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.action, 0LL);
  return 0;
}


Il2CppObject *__fastcall CommonEffectComponent__DelayFrameCoroutine_d__82__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CommonEffectComponent__DelayFrameCoroutine_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CommonEffectComponent__DelayFrameCoroutine_d__82__System_Collections_IEnumerator_Reset(
        CommonEffectComponent__DelayFrameCoroutine_d__82_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_CommonEffectComponent__DelayFrameCoroutine_d__82_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall CommonEffectComponent__DelayFrameCoroutine_d__82__System_Collections_IEnumerator_get_Current(
        CommonEffectComponent__DelayFrameCoroutine_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CommonEffectComponent__DelayFrameCoroutine_d__82__System_IDisposable_Dispose(
        CommonEffectComponent__DelayFrameCoroutine_d__82_o *this,
        const MethodInfo *method)
{
  ;
}