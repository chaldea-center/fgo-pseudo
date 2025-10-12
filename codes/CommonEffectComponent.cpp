void CommonEffectComponent___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4C39038 & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectComponent_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
    sub_1C32C20(&StringLiteral_23647/*"start"*/);
    sub_1C32C20(&StringLiteral_19004/*"end"*/);
    sub_1C32C20(&StringLiteral_24130/*"touch"*/);
    sub_1C32C20(&StringLiteral_21350/*"loop"*/);
    byte_4C39038 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34223E4 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
  if ( !v1 )
    sub_1C32E7C(v2);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_23647/*"start"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_21350/*"loop"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_24130/*"touch"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_19004/*"end"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  CommonEffectComponent_TypeInfo->static_fields->ANIMATION_NAME_TABLE = (struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)CommonEffectComponent_TypeInfo->static_fields, (int32_t)v1, v3, v4);
  CommonEffectComponent_TypeInfo->static_fields->DEFAULT_TOUCH_START_TIME = -1.0;
}


void CommonEffectComponent___ctor(CommonEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent_c *v8; // x0

  if ( (byte_4C39037 & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectComponent_TypeInfo);
    byte_4C39037 = 1;
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
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommonEffectComponent__Awake(CommonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C39022 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    byte_4C39022 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animationComponent, (int32_t)Component_object, v4, v5);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.simpleAnimationComponent, (int32_t)v6, v7, v8);
}


System_Collections_IEnumerator_o *CommonEffectComponent__DelayFrameCoroutine(
        CommonEffectComponent_o *this,
        int32_t frame,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C39030 & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectComponent__DelayFrameCoroutine_d__83_TypeInfo);
    byte_4C39030 = 1;
  }
  v6 = sub_1C32E6C(CommonEffectComponent__DelayFrameCoroutine_d__83_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 32) = frame;
  *(_QWORD *)(v6 + 40) = action;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 40), (int32_t)action, v7, v8);
  return (System_Collections_IEnumerator_o *)v6;
}


void CommonEffectComponent__ForceLoop(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_ForceLoop.methodPtr)(
    this,
    0,
    this->klass->vtable._7_ForceLoop.method);
}


void CommonEffectComponent__ForceLoop_43632716(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t status; // w8
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v8; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v10; // x20
  SimpleAnimation_o *v11; // x20
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x20
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Object_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Animation_o *v21; // x20
  UnityEngine_TrackedReference_o *v22; // x20

  if ( (byte_4C3901E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    sub_1C32C20(&StringLiteral_16562/*"_loop"*/);
    byte_4C3901E = 1;
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
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
      {
        v8 = this->fields.simpleAnimationComponent;
        if ( !v8 )
          goto LABEL_42;
        SimpleAnimation__Stop(v8, 0);
      }
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
        goto LABEL_41;
      v8 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v8 )
        goto LABEL_42;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v8, 0);
    }
LABEL_41:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, const MethodInfo *))this->klass->vtable._5_NextPlayAnimation.methodPtr)(
      this,
      4,
      this->klass->vtable._5_NextPlayAnimation.method);
    return;
  }
  if ( status != 2 )
  {
    v10 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
    {
      v11 = this->fields.simpleAnimationComponent;
      v8 = (SimpleAnimation_o *)System_String__Concat_63518544(
                                  this->fields.baseName,
                                  (System_String_o *)StringLiteral_16562/*"_loop"*/,
                                  0);
      if ( v11 )
      {
        Item = SimpleAnimation__get_Item(v11, (System_String_o *)v8, 0);
        if ( Item )
        {
          klass = Item->klass;
          v14 = Item;
          v15 = *(unsigned __int16 *)&Item->klass->_2.rank;
          if ( *(_WORD *)&Item->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v15;
              p_offset += 2;
              if ( !v15 )
                goto LABEL_26;
            }
            v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
          }
          else
          {
LABEL_26:
            v17 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 18);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v17)(v14, 2, *(_QWORD *)(v17 + 8));
        }
        v8 = this->fields.simpleAnimationComponent;
        if ( v8 )
        {
          SimpleAnimation__Stop(v8, 0);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v18 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v18, 0, 0) )
        goto LABEL_40;
      v21 = this->fields.animationComponent;
      v8 = (SimpleAnimation_o *)System_String__Concat_63518544(
                                  this->fields.baseName,
                                  (System_String_o *)StringLiteral_16562/*"_loop"*/,
                                  0);
      if ( v21 )
      {
        v22 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v21, (System_String_o *)v8, 0);
        v8 = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v22, 0, 0);
        if ( ((unsigned __int8)v8 & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v22, 2, 0);
        }
        v8 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v8 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v8, 0);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playAnimation, 0, v19, v20);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1C32E7C(v8);
  }
}


void CommonEffectComponent__ForceStart(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._6_ForceStart.methodPtr)(
    this,
    0,
    0,
    this->klass->vtable._6_ForceStart.method);
}


void CommonEffectComponent__ForceStart_43632024(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v9; // x20
  UnityEngine_Animation_o *v10; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Animation_o *v21; // x20
  UnityEngine_TrackedReference_o *v22; // x20

  if ( (byte_4C3901D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    sub_1C32C20(&StringLiteral_16562/*"_loop"*/);
    byte_4C3901D = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callAfterStart, (int32_t)callback, (int32_t)callback, method);
  if ( !this->fields.status )
  {
    if ( isOverWrite )
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
      {
        v10 = this->fields.animationComponent;
        if ( !v10 )
          goto LABEL_37;
        UnityEngine_Animation__Stop(v10, 0);
      }
    }
    CommonEffectComponent__Init(this, 0, 0, v7);
    return;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v9 = this->fields.simpleAnimationComponent;
    v10 = (UnityEngine_Animation_o *)System_String__Concat_63518544(
                                       this->fields.baseName,
                                       (System_String_o *)StringLiteral_16562/*"_loop"*/,
                                       0);
    if ( v9 )
    {
      Item = SimpleAnimation__get_Item(v9, (System_String_o *)v10, 0);
      if ( Item )
      {
        klass = Item->klass;
        v13 = Item;
        v14 = *(unsigned __int16 *)&Item->klass->_2.rank;
        if ( *(_WORD *)&Item->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v14;
            p_offset += 2;
            if ( !v14 )
              goto LABEL_15;
          }
          v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
        }
        else
        {
LABEL_15:
          v16 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 18);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v16)(v13, 2, *(_QWORD *)(v16 + 8));
      }
      v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v10 )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)v10, 0);
        goto LABEL_36;
      }
    }
    goto LABEL_37;
  }
  v18 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v18, 0, 0) )
    goto LABEL_36;
  v21 = this->fields.animationComponent;
  v10 = (UnityEngine_Animation_o *)System_String__Concat_63518544(
                                     this->fields.baseName,
                                     (System_String_o *)StringLiteral_16562/*"_loop"*/,
                                     0);
  if ( !v21 )
    goto LABEL_37;
  v22 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v21, (System_String_o *)v10, 0);
  v10 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(v22, 0, 0);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_37;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v22, 2, 0);
  }
  v10 = this->fields.animationComponent;
  if ( !v10 )
LABEL_37:
    sub_1C32E7C(v10);
  UnityEngine_Animation__Stop(v10, 0);
LABEL_36:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playAnimation, 0, v19, v20);
  ((void (__fastcall *)(CommonEffectComponent_o *, __int64, const MethodInfo *))this->klass->vtable._5_NextPlayAnimation.methodPtr)(
    this,
    3,
    this->klass->vtable._5_NextPlayAnimation.method);
}


void CommonEffectComponent__ForceStop(
        CommonEffectComponent_o *this,
        bool isDestroy,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  CommonEffectComponent__StopInternal(this, 1, isDestroy, callback, v4);
}


System_String_o *CommonEffectComponent__GetAnimationName(
        CommonEffectComponent_o *this,
        int32_t status,
        const MethodInfo *method)
{
  CommonEffectComponent_c *v5; // x0
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *ANIMATION_NAME_TABLE; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 v10; // x0
  System_String_o *baseName; // x20
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *v12; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *v13; // x8
  __int64 v14; // x9
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **v15; // x10
  __int64 v16; // x0
  System_String_o *v18; // x2

  if ( (byte_4C39033 & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectComponent_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C39033 = 1;
  }
  v5 = CommonEffectComponent_TypeInfo;
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v5 = CommonEffectComponent_TypeInfo;
  }
  ANIMATION_NAME_TABLE = v5->static_fields->ANIMATION_NAME_TABLE;
  if ( !ANIMATION_NAME_TABLE )
    goto LABEL_24;
  klass = ANIMATION_NAME_TABLE->klass;
  v8 = *(unsigned __int16 *)&ANIMATION_NAME_TABLE->klass->_2.rank;
  if ( *(_WORD *)&ANIMATION_NAME_TABLE->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    v10 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v10 = sub_1C83438(
            ANIMATION_NAME_TABLE,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            0);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v10)(
          ANIMATION_NAME_TABLE,
          (unsigned int)status,
          *(_QWORD *)(v10 + 8))
      & 1) == 0 )
    return 0;
  v5 = CommonEffectComponent_TypeInfo;
  baseName = this->fields.baseName;
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v5 = CommonEffectComponent_TypeInfo;
  }
  v12 = v5->static_fields->ANIMATION_NAME_TABLE;
  if ( !v12 )
LABEL_24:
    sub_1C32E7C(v5);
  v13 = v12->klass;
  v14 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    v15 = (System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_20;
    }
    v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 2];
  }
  else
  {
LABEL_20:
    v16 = sub_1C83438(
            v12,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            2);
  }
  v18 = (System_String_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v16)(
                             v12,
                             (unsigned int)status,
                             *(_QWORD *)(v16 + 8));
  return System_String__Concat_63556792(baseName, (System_String_o *)StringLiteral_16107/*"_"*/, v18, 0);
}


void CommonEffectComponent__GetAnimationStateInfo(
        CommonEffectComponent_o *this,
        System_String_o **name,
        float *time,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  System_String_o *AnimationName; // x22
  UnityEngine_Object_o *animationComponent; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Animation_o *v12; // x0
  UnityEngine_TrackedReference_o *Item; // x22
  System_String_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *baseName; // x1

  if ( (byte_4C39034 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39034 = 1;
  }
  *name = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)name, StringLiteral_1/*""*/, (int32_t)time, method);
  *time = -1.0;
  AnimationName = CommonEffectComponent__GetAnimationName(this, this->fields.status, v7);
  if ( AnimationName || (AnimationName = this->fields.baseName) != 0 )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
    {
      v12 = this->fields.animationComponent;
      if ( !v12 )
        goto LABEL_14;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v12, AnimationName, 0);
      v12 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        if ( Item )
        {
          v14 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0);
          *name = v14;
          sub_1C32BC4((CGThumbnailListItem_o *)name, (int32_t)v14, v15, v16);
          *time = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)Item, 0);
          return;
        }
LABEL_14:
        sub_1C32E7C(v12);
      }
    }
    baseName = this->fields.baseName;
    *name = baseName;
    sub_1C32BC4((CGThumbnailListItem_o *)name, (int32_t)baseName, v10, v11);
  }
}


void CommonEffectComponent__Init(CommonEffectComponent_o *this, bool isSkip, bool isPause, const MethodInfo *method)
{
  struct System_String_o **p_effectName; // x22
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x0
  char v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x0
  char v13; // w2
  const MethodInfo *v14; // x3
  System_String_o *v15; // x23
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  char v18; // w2
  const MethodInfo *v19; // x3
  System_String_o **p_baseName; // x23
  struct System_String_o *v21; // x1
  System_String_o *v22; // x0
  char v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Object_o *v25; // x22
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *transform; // x22
  int32_t layer; // w0
  const MethodInfo *v29; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v31; // x1
  UnityEngine_Object_o *v32; // x20

  if ( (byte_4C3901A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_5848/*"Effect("*/);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    sub_1C32C20(&StringLiteral_759/*")"*/);
    sub_1C32C20(&StringLiteral_685/*"(Clone)"*/);
    byte_4C3901A = 1;
  }
  if ( this->fields.status )
    return;
  p_effectName = &this->fields.effectName;
  if ( !this->fields.effectName )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_37;
    name = UnityEngine_Object__get_name(gameObject, 0);
    *p_effectName = name;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectName, (int32_t)name, v10, v11);
    gameObject = (UnityEngine_Object_o *)*p_effectName;
    if ( !*p_effectName )
      goto LABEL_37;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_685/*"(Clone)"*/, 0) )
    {
      gameObject = (UnityEngine_Object_o *)*p_effectName;
      if ( !*p_effectName )
        goto LABEL_37;
      v12 = System_String__Substring_63564468(
              (System_String_o *)gameObject,
              0,
              LODWORD(gameObject->fields.m_CachedPtr) - 7,
              0);
      *p_effectName = v12;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectName, (int32_t)v12, v13, v14);
    }
  }
  if ( this->fields.useAnimNum >= 1 )
  {
    v15 = *p_effectName;
    v16 = System_Int32__ToString((int)this + 136, 0);
    v17 = System_String__Concat_63556792(v15, (System_String_o *)StringLiteral_16107/*"_"*/, v16, 0);
    *p_effectName = v17;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectName, (int32_t)v17, v18, v19);
  }
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    v21 = *p_effectName;
    *p_baseName = *p_effectName;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseName, (int32_t)v21, isPause, method);
    gameObject = (UnityEngine_Object_o *)*p_baseName;
    if ( !*p_baseName )
      goto LABEL_37;
    gameObject = (UnityEngine_Object_o *)System_String__LastIndexOf((System_String_o *)gameObject, 0x2Fu, 0);
    if ( ((unsigned int)gameObject & 0x80000000) == 0 )
    {
      if ( !*p_baseName )
        goto LABEL_37;
      v22 = System_String__Substring(*p_baseName, (int)gameObject + 1, 0);
      *p_baseName = v22;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseName, (int32_t)v22, v23, v24);
    }
  }
  v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  gameObject = (UnityEngine_Object_o *)System_String__Concat_63556792(
                                         (System_String_o *)StringLiteral_5848/*"Effect("*/,
                                         this->fields.effectName,
                                         (System_String_o *)StringLiteral_759/*")"*/,
                                         0);
  if ( !v25 )
    goto LABEL_37;
  UnityEngine_Object__set_name(v25, (System_String_o *)gameObject, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_37;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(parent, 0, 0) )
    goto LABEL_26;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0)) == 0
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)gameObject,
                                               0)) == 0 )
  {
LABEL_37:
    sub_1C32E7C(gameObject);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0);
  CommonEffectComponent__SetChildInit(this, transform, layer, v29);
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
    v31 = 3;
    goto LABEL_33;
  }
  if ( this->fields.loop )
  {
    klass = this->klass;
    v31 = 4;
LABEL_33:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, const MethodInfo *))klass->vtable._5_NextPlayAnimation.methodPtr)(
      this,
      v31,
      klass->vtable._5_NextPlayAnimation.method);
    return;
  }
  v32 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(v32, 0);
  ((void (__fastcall *)(CommonEffectComponent_o *, const MethodInfo *))this->klass->vtable._10_PlayDestroyEffectCallback.methodPtr)(
    this,
    this->klass->vtable._10_PlayDestroyEffectCallback.method);
}


// local variable allocation has failed, the output may be wrong!
void CommonEffectComponent__Init_43628936(
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
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields.effectName,
      (int32_t)effectName,
      isSkip,
      (const MethodInfo *)isPause);
    CommonEffectComponent__Init(this, isSkip, isPause, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void CommonEffectComponent__Init_43629008(
        CommonEffectComponent_o *this,
        AssetData_o *data,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  __int64 v9; // x0
  char v10; // w2
  const MethodInfo *v11; // x3
  struct System_String_o *name; // x1
  const MethodInfo *v13; // x3

  if ( !this->fields.status )
  {
    this->fields.asset = data;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.asset, (int32_t)data, isSkip, (const MethodInfo *)isPause);
    if ( !data )
      sub_1C32E7C(v9);
    name = data->fields.name;
    this->fields.effectName = name;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectName, (int32_t)name, v10, v11);
    CommonEffectComponent__Init(this, isSkip, isPause, v13);
  }
}


bool CommonEffectComponent__IsTouched(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isTouched;
}


void CommonEffectComponent__NextPlayAnimation(CommonEffectComponent_o *this, int32_t next, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  __int64 States; // x0
  __int64 v7; // x8
  __int64 v8; // x21
  __int64 v9; // x9
  int *v10; // x10
  __int64 v11; // x0
  UnityEngine_Object_o *animationComponent; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  System_Collections_IEnumerator_c *v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  UnityEngine_AnimationState_o *v24; // x0
  CGThumbnailListItem_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  __int64 v31; // x21
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x21
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x22
  __int64 v46; // x8
  __int64 v47; // x9
  SimpleAnimation_State_c **v48; // x10
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  SimpleAnimation_o *v54; // x20
  SimpleAnimation_State_o *v55; // x21
  CGThumbnailListItem_o *v56; // x0
  System_Action_o *v57; // x20
  SimpleAnimation_o *v58; // x20
  SimpleAnimation_State_o *v59; // x0
  SimpleAnimation_o *v60; // x20
  SimpleAnimation_State_c *v61; // x8
  __int64 v62; // x9
  SimpleAnimation_State_c **v63; // x10
  __int64 v64; // x0
  struct System_String_o *name; // x1
  UnityEngine_Animation_o *v66; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  CGThumbnailListItem_o *v68; // x0
  System_Action_o *v69; // x20
  UnityEngine_Animation_o *v70; // x20
  UnityEngine_Animation_o *v71; // x20

  if ( (byte_4C3901C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AnimationState_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    sub_1C32C20(&StringLiteral_16562/*"_loop"*/);
    sub_1C32C20(&StringLiteral_16581/*"_start"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_16546/*"_end"*/);
    byte_4C3901C = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
    {
      if ( next == 4 )
      {
        if ( this->fields.loop )
          next = 4;
        else
          next = 6;
      }
      else if ( next == 3 )
      {
        p_callAfterStart = (CGThumbnailListItem_o *)&this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          p_callAfterStart->klass = 0;
          sub_1C32BC4(p_callAfterStart, 0, v13, v14);
          ActionExtensions__Call(callAfterStart, 0);
        }
        next = 3;
      }
      goto LABEL_129;
    }
    States = (__int64)this->fields.animationComponent;
    if ( !States
      || (UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)States, 0),
          (States = (__int64)this->fields.animationComponent) == 0) )
    {
LABEL_136:
      sub_1C32E7C(States);
    }
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
    if ( !Enumerator )
      sub_1C32E7C(0);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v17;
          p_offset += 4;
          if ( !v17 )
            goto LABEL_24;
        }
        v19 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_24:
        v19 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
              Enumerator,
              *(_QWORD *)(v19 + 8))
          & 1) == 0 )
        break;
      v20 = Enumerator->klass;
      v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v22 = (System_Collections_IEnumerator_c **)&v20->_1.interfaceOffsets->offset;
        while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v21;
          v22 += 2;
          if ( !v21 )
            goto LABEL_31;
        }
        v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1];
      }
      else
      {
LABEL_31:
        v23 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v24 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(
                                              Enumerator,
                                              *(_QWORD *)(v23 + 8));
      if ( !v24 )
        goto LABEL_135;
      if ( v24->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1C3313C(v24);
LABEL_135:
        sub_1C32E7C(v24);
      }
      UnityEngine_AnimationState__get_name(v24, 0);
    }
    v27 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
    if ( v27 )
    {
      v30 = *(_QWORD *)v27;
      v31 = v27;
      v32 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
      {
        v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_46;
        }
        v34 = v30 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_46:
        v34 = sub_1C83438(v27, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
    }
    switch ( next )
    {
      case 3:
        v66 = this->fields.animationComponent;
        States = (__int64)System_String__Concat_63518544(
                            this->fields.baseName,
                            (System_String_o *)StringLiteral_16581/*"_start"*/,
                            0);
        if ( !v66 )
          goto LABEL_136;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v66, (System_String_o *)States, 0);
        if ( UnityEngine_TrackedReference__op_Equality(Item, 0, 0) )
        {
          States = (__int64)this->fields.animationComponent;
          if ( !States )
            goto LABEL_136;
          Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                     (UnityEngine_Animation_o *)States,
                                                     this->fields.baseName,
                                                     0);
        }
        if ( !UnityEngine_TrackedReference__op_Equality(Item, 0, 0) )
        {
          this->fields.endtime = 0.0;
          next = 3;
          goto LABEL_126;
        }
        break;
      case 4:
        break;
      case 6:
        goto LABEL_124;
      default:
        States = UnityEngine_TrackedReference__op_Inequality(0, 0, 0);
        if ( (States & 1) != 0 || !this )
          goto LABEL_136;
LABEL_129:
        name = (struct System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_130;
    }
    v68 = (CGThumbnailListItem_o *)&this->fields.callAfterStart;
    v69 = this->fields.callAfterStart;
    if ( v69 )
    {
      v68->klass = 0;
      sub_1C32BC4(v68, 0, v28, v29);
      ActionExtensions__Call(v69, 0);
    }
    if ( this->fields.loop )
    {
      v70 = this->fields.animationComponent;
      States = (__int64)System_String__Concat_63518544(this->fields.baseName, (System_String_o *)StringLiteral_16562/*"_loop"*/, 0);
      if ( !v70 )
        goto LABEL_136;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v70, (System_String_o *)States, 0);
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0, 0) )
      {
        next = 4;
        goto LABEL_126;
      }
    }
LABEL_124:
    v71 = this->fields.animationComponent;
    States = (__int64)System_String__Concat_63518544(this->fields.baseName, (System_String_o *)StringLiteral_16546/*"_end"*/, 0);
    if ( !v71 )
      goto LABEL_136;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v71, (System_String_o *)States, 0);
    next = 6;
LABEL_126:
    States = UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
    if ( (States & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_136;
      name = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0);
      goto LABEL_130;
    }
    goto LABEL_129;
  }
  States = (__int64)this->fields.simpleAnimationComponent;
  if ( !States )
    goto LABEL_136;
  SimpleAnimation__GetClipCount((SimpleAnimation_o *)States, 0);
  States = (__int64)this->fields.simpleAnimationComponent;
  if ( !States )
    goto LABEL_136;
  States = (__int64)SimpleAnimation__GetStates((SimpleAnimation_o *)States, 0);
  if ( !States )
    goto LABEL_136;
  v7 = *(_QWORD *)States;
  v8 = States;
  v9 = *(unsigned __int16 *)(*(_QWORD *)States + 302LL);
  if ( *(_WORD *)(*(_QWORD *)States + 302LL) )
  {
    v10 = (int *)(*(_QWORD *)(v7 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)v10 - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_13;
    }
    v11 = v7 + 16LL * *v10 + 312;
  }
  else
  {
LABEL_13:
    v11 = sub_1C83438(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
  }
  v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v11)(v8, *(_QWORD *)(v11 + 8));
  if ( !v35 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v36 = *(_QWORD *)v35;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_53;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_53:
      v39 = sub_1C83438(v35, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v35;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v42 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_60;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_60:
      v43 = sub_1C83438(v35, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
    v45 = v44;
    if ( !v44 )
      sub_1C32E7C(0);
    v46 = *(_QWORD *)v44;
    v47 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v48 = (SimpleAnimation_State_c **)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v47;
        v48 += 2;
        if ( !v47 )
          goto LABEL_67;
      }
      v49 = v46 + 16LL * (*(_DWORD *)v48 + 9) + 312;
    }
    else
    {
LABEL_67:
      v49 = sub_1C83438(v44, SimpleAnimation_State_TypeInfo, 9);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8));
  }
  v50 = *(_QWORD *)v35;
  v51 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
  {
    v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_74;
    }
    v53 = v50 + 16LL * *v52 + 312;
  }
  else
  {
LABEL_74:
    v53 = sub_1C83438(v35, System_IDisposable_TypeInfo, 0);
  }
  States = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v35, *(_QWORD *)(v53 + 8));
  if ( next == 3 )
  {
    v54 = this->fields.simpleAnimationComponent;
    States = (__int64)System_String__Concat_63518544(this->fields.baseName, (System_String_o *)StringLiteral_16581/*"_start"*/, 0);
    if ( !v54 )
      goto LABEL_136;
    v55 = SimpleAnimation__get_Item(v54, (System_String_o *)States, 0);
    if ( v55 )
      goto LABEL_87;
    States = (__int64)this->fields.simpleAnimationComponent;
    if ( !States )
      goto LABEL_136;
    v55 = SimpleAnimation__get_Item((SimpleAnimation_o *)States, this->fields.baseName, 0);
    if ( v55 )
    {
LABEL_87:
      this->fields.endtime = 0.0;
      next = 3;
      goto LABEL_96;
    }
    goto LABEL_88;
  }
  if ( next == 4 )
  {
LABEL_88:
    v56 = (CGThumbnailListItem_o *)&this->fields.callAfterStart;
    v57 = this->fields.callAfterStart;
    if ( v57 )
    {
      v56->klass = 0;
      sub_1C32BC4(v56, 0, v13, v14);
      ActionExtensions__Call(v57, 0);
    }
    if ( this->fields.loop )
    {
      v58 = this->fields.simpleAnimationComponent;
      States = (__int64)System_String__Concat_63518544(this->fields.baseName, (System_String_o *)StringLiteral_16562/*"_loop"*/, 0);
      if ( !v58 )
        goto LABEL_136;
      v59 = SimpleAnimation__get_Item(v58, (System_String_o *)States, 0);
      if ( v59 )
      {
        v55 = v59;
        next = 4;
        goto LABEL_96;
      }
    }
    goto LABEL_94;
  }
  if ( next != 6 )
  {
LABEL_101:
    name = (struct System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_104;
  }
LABEL_94:
  v60 = this->fields.simpleAnimationComponent;
  States = (__int64)System_String__Concat_63518544(this->fields.baseName, (System_String_o *)StringLiteral_16546/*"_end"*/, 0);
  if ( !v60 )
    goto LABEL_136;
  States = (__int64)SimpleAnimation__get_Item(v60, (System_String_o *)States, 0);
  v55 = (SimpleAnimation_State_o *)States;
  next = 6;
  if ( !States )
    goto LABEL_101;
LABEL_96:
  v61 = v55->klass;
  v62 = *(unsigned __int16 *)&v55->klass->_2.rank;
  if ( *(_WORD *)&v55->klass->_2.rank )
  {
    v63 = (SimpleAnimation_State_c **)&v61->_1.interfaceOffsets->offset;
    while ( *(v63 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v62;
      v63 += 2;
      if ( !v62 )
        goto LABEL_100;
    }
    v64 = (__int64)&v61->vtable[*(_DWORD *)v63 + 9];
  }
  else
  {
LABEL_100:
    v64 = sub_1C83438(v55, SimpleAnimation_State_TypeInfo, 9);
  }
  States = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v64)(v55, *(_QWORD *)(v64 + 8));
  name = (struct System_String_o *)States;
LABEL_104:
  if ( !this )
    goto LABEL_136;
LABEL_130:
  this->fields.requestAnimation = name;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.requestAnimation, (int32_t)name, v13, v14);
  this->fields.status = next;
}


void CommonEffectComponent__NotifyEvent(
        CommonEffectComponent_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  if ( (byte_4C39025 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_string___);
    byte_4C39025 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.notifyEventCallback,
    (Il2CppObject *)eventName,
    (const MethodInfo_3029CE0 *)Method_ActionExtensions_Call_string___);
}


void CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *asset; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C39024 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C39024 = 1;
  }
  asset = this->fields.asset;
  if ( asset )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40435328(asset, 0);
    this->fields.asset = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.asset, 0, v4, v5);
  }
  this->fields.status = 2;
}


void CommonEffectComponent__OnRelease(CommonEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  CommonEffectComponent_o *v4; // x0
  const MethodInfo *v5; // x3
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4C3902F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CommonEffectComponent__OnRelease_b__82_0__);
    byte_4C3902F = 1;
  }
  *(_WORD *)&this->fields.isTouching = 256;
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_CommonEffectComponent__OnRelease_b__82_0__, 0);
  v6 = CommonEffectComponent__DelayFrameCoroutine(v4, 1, v3, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v6, 0);
}


void CommonEffectComponent__OnTouch(CommonEffectComponent_o *this, const MethodInfo *method)
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
    ActionExtensions__Call(touchCallback, 0);
  }
}


bool CommonEffectComponent__PlayAnimation(CommonEffectComponent_o *this, int32_t next, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  return CommonEffectComponent__PlaySimpleAnimation(this, next, method)
      || CommonEffectComponent__PlayNormalAnimation(this, next, v5);
}


void CommonEffectComponent__PlayDestroyEffectCallback(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ;
}


bool CommonEffectComponent__PlayNormalAnimation(CommonEffectComponent_o *this, int32_t next, const MethodInfo *method)
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C39032 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39032 = 1;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(animationComponent, 0, 0) )
    return 0;
  AnimationName = CommonEffectComponent__GetAnimationName(this, next, v6);
  if ( System_String__IsNullOrEmpty(AnimationName, 0) )
    return 0;
  name = this->fields.animationComponent;
  if ( !name )
    goto LABEL_13;
  Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(name, AnimationName, 0);
  name = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Equality(Item, 0, 0);
  if ( ((unsigned __int8)name & 1) != 0 )
    return 0;
  if ( !Item
    || (v11 = this->fields.animationComponent,
        name = (UnityEngine_Animation_o *)UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0),
        !v11) )
  {
LABEL_13:
    sub_1C32E7C(name);
  }
  UnityEngine_Animation__Play_70968924(v11, (System_String_o *)name, 0);
  v12 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0);
  this->fields.playAnimation = v12;
  p_playAnimation = &this->fields.playAnimation;
  sub_1C32BC4((CGThumbnailListItem_o *)p_playAnimation, (int32_t)v12, v14, v15);
  result = 1;
  *((_DWORD *)p_playAnimation - 4) = next;
  return result;
}


void CommonEffectComponent__PlaySe(CommonEffectComponent_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_array *IsNullOrEmpty; // x0
  System_String_array *v5; // x19
  int max_length; // w20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  unsigned int v9; // w8
  System_String_o *v10; // x1
  SePlayer_o *v11; // x0
  SePlayer_o *v12; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C39026 & 1) == 0 )
  {
    sub_1C32C20(&Method_CommonEffectComponent_PlaySe__);
    byte_4C39026 = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name )
      goto LABEL_17;
    IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_17;
    v5 = IsNullOrEmpty;
    max_length = IsNullOrEmpty->max_length;
    v7 = Method_CommonEffectComponent_PlaySe__;
    if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySe__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C32C38(Method_CommonEffectComponent_PlaySe__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
    v9 = v5->max_length;
    if ( !v9 )
      goto LABEL_18;
    v10 = v5->m_Items[0];
    if ( max_length < 2 )
    {
      OverwriteAssetSoundName__PlaySe(v8, v10, 0, 0);
      return;
    }
    if ( v9 <= 1 )
LABEL_18:
      sub_1C32E84(v8);
    v11 = OverwriteAssetSoundName__PlaySe_41320752(v8, v10, v5->m_Items[1], 1.0, 0, 0, 0);
    result = 0.0;
    if ( SLODWORD(v5->max_length) >= 3 )
    {
      v12 = v11;
      IsNullOrEmpty = (System_String_array *)System_Single__TryParse(v5->m_Items[2], &result, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v12 )
        {
          SePlayer__set_Pitch(v12, result, 0);
          return;
        }
LABEL_17:
        sub_1C32E7C(IsNullOrEmpty);
      }
    }
  }
}


void CommonEffectComponent__PlaySeContinue(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  unsigned int v8; // w8
  System_String_o *v9; // x1

  if ( (byte_4C39027 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C32C20(&Method_CommonEffectComponent_PlaySeContinue__);
    byte_4C39027 = 1;
  }
  if ( !name || (this = (CommonEffectComponent_o *)System_String__Split(name, 0x3Au, 0, 0)) == 0 )
    sub_1C32E7C(this);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeContinue__;
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeContinue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C32C38(Method_CommonEffectComponent_PlaySeContinue__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
  v8 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v8 )
    goto LABEL_13;
  v9 = *(System_String_o **)&v4->fields.endtime;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, v9, 0, 0);
    return;
  }
  if ( v8 <= 1 )
LABEL_13:
    sub_1C32E84(v7);
  OverwriteAssetSoundName__PlaySeContinue_41319900(v7, v9, *(System_String_o **)&v4->fields.touchEffectTime, 0, 0);
}


void CommonEffectComponent__PlaySeContinueIgnorePreDelay(
        CommonEffectComponent_o *this,
        System_String_o *soundInfo,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  unsigned int v8; // w8
  System_String_o *v9; // x1

  if ( (byte_4C39029 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C32C20(&Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__);
    byte_4C39029 = 1;
  }
  if ( !soundInfo || (this = (CommonEffectComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0)) == 0 )
    sub_1C32E7C(this);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__;
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C32C38(Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
  v8 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v8 )
    goto LABEL_13;
  v9 = *(System_String_o **)&v4->fields.endtime;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, v9, 1, 0);
    return;
  }
  if ( v8 <= 1 )
LABEL_13:
    sub_1C32E84(v7);
  OverwriteAssetSoundName__PlaySeContinue_41319900(v7, v9, *(System_String_o **)&v4->fields.touchEffectTime, 1, 0);
}


void CommonEffectComponent__PlaySeIgnorePreDelay(
        CommonEffectComponent_o *this,
        System_String_o *soundInfo,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  unsigned int v8; // w8
  System_String_o *v9; // x1

  if ( (byte_4C39028 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C32C20(&Method_CommonEffectComponent_PlaySeIgnorePreDelay__);
    byte_4C39028 = 1;
  }
  if ( !soundInfo || (this = (CommonEffectComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0)) == 0 )
    sub_1C32E7C(this);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeIgnorePreDelay__;
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C32C38(Method_CommonEffectComponent_PlaySeIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
  v8 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v8 )
    goto LABEL_13;
  v9 = *(System_String_o **)&v4->fields.endtime;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, v9, 1, 0);
    return;
  }
  if ( v8 <= 1 )
LABEL_13:
    sub_1C32E84(v7);
  OverwriteAssetSoundName__PlaySe_41320752(v7, v9, *(System_String_o **)&v4->fields.touchEffectTime, 1.0, 0, 1, 0);
}


void CommonEffectComponent__PlaySettedVoice(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *settedVoiceStr; // x1

  settedVoiceStr = this->fields.settedVoiceStr;
  if ( settedVoiceStr )
    CommonEffectComponent__PlayVoice_43636772(this, settedVoiceStr, this->fields.voiceCallback, v2);
}


bool CommonEffectComponent__PlaySimpleAnimation(CommonEffectComponent_o *this, int32_t next, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v6; // x2
  System_String_o *AnimationName; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_o *v9; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_o *v11; // x22
  SimpleAnimation_State_o *v12; // x21
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  SimpleAnimation_State_c *v16; // x8
  __int64 v17; // x9
  SimpleAnimation_State_c **v18; // x10
  __int64 v19; // x0
  struct System_String_o *v20; // x0
  struct System_String_o **p_playAnimation; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C39031 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C39031 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(simpleAnimationComponent, 0, 0)
    || (AnimationName = CommonEffectComponent__GetAnimationName(this, next, v6),
        System_String__IsNullOrEmpty(AnimationName, 0)) )
  {
    LOBYTE(Item) = 0;
  }
  else
  {
    v9 = this->fields.simpleAnimationComponent;
    if ( !v9 )
      goto LABEL_25;
    Item = SimpleAnimation__get_Item(v9, AnimationName, 0);
    if ( !Item )
      return (char)Item;
    klass = Item->klass;
    v11 = this->fields.simpleAnimationComponent;
    v12 = Item;
    v13 = *(unsigned __int16 *)&Item->klass->_2.rank;
    if ( *(_WORD *)&Item->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v13;
        p_offset += 2;
        if ( !v13 )
          goto LABEL_15;
      }
      v15 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9];
    }
    else
    {
LABEL_15:
      v15 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 9);
    }
    v9 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v15)(
                                v12,
                                *(_QWORD *)(v15 + 8));
    if ( !v11 )
LABEL_25:
      sub_1C32E7C(v9);
    SimpleAnimation__Play_66464300(v11, (System_String_o *)v9, 0);
    v16 = v12->klass;
    v17 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      v18 = (SimpleAnimation_State_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_22;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 9];
    }
    else
    {
LABEL_22:
      v19 = sub_1C83438(v12, SimpleAnimation_State_TypeInfo, 9);
    }
    v20 = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v19)(
                                      v12,
                                      *(_QWORD *)(v19 + 8));
    this->fields.playAnimation = v20;
    p_playAnimation = &this->fields.playAnimation;
    sub_1C32BC4((CGThumbnailListItem_o *)p_playAnimation, (int32_t)v20, v22, v23);
    LOBYTE(Item) = 1;
    *((_DWORD *)p_playAnimation - 4) = next;
  }
  return (char)Item;
}


void CommonEffectComponent__PlayVoice(CommonEffectComponent_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CommonEffectComponent__PlayVoice_43636772(this, name, 0, v3);
}


void CommonEffectComponent__PlayVoice_43636772(
        CommonEffectComponent_o *this,
        System_String_o *name,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *IsNullOrEmpty; // x0
  il2cpp_array_size_t max_length; // x8
  System_String_array *v8; // x20
  System_String_o *v9; // x20
  float v10; // s0
  float v11; // s8
  System_String_o *v12; // x20
  System_String_o *v13; // x21

  if ( (byte_4C3902A & 1) == 0 )
  {
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C3902A = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name || (IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0)) == 0 )
      sub_1C32E7C(IsNullOrEmpty);
    max_length = IsNullOrEmpty->max_length;
    v8 = IsNullOrEmpty;
    if ( (int)max_length < 2 )
    {
      if ( (_DWORD)max_length )
      {
        v9 = IsNullOrEmpty->m_Items[0];
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playVoice_41418688(v9, callback, 0, 0);
        return;
      }
LABEL_19:
      sub_1C32E84(IsNullOrEmpty);
    }
    if ( (_DWORD)max_length == 2 )
    {
      v11 = 1.0;
    }
    else
    {
      v10 = System_Single__Parse(IsNullOrEmpty->m_Items[2], 0);
      max_length = v8->max_length;
      v11 = v10;
    }
    if ( (unsigned int)max_length < 2 )
      goto LABEL_19;
    v13 = v8->m_Items[0];
    v12 = v8->m_Items[1];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_41418932(v13, v12, v11, callback, 0, 0);
  }
}


void CommonEffectComponent__ResetPrewarmParticleList(CommonEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent_o *v2; // x19
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19
  UnityEngine_ParticleSystem_MainModule_o v7; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4C3902D & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3902D = 1;
  }
  m_ParticleSystem = 0;
  particlelist = v2->fields.particlelist;
  if ( particlelist )
  {
    max_length = particlelist->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v5 = 0;
        do
        {
          if ( v5 >= (unsigned int)max_length )
            sub_1C32E84(this);
          v6 = (UnityEngine_Object_o *)particlelist->m_Items[v5];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (CommonEffectComponent_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v6 )
              sub_1C32E7C(this);
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v6, 0).fields.m_ParticleSystem;
            v7.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem_MainModule__get_prewarm(v7, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem__get_isPlaying(
                                                  (UnityEngine_ParticleSystem_o *)v6,
                                                  0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                UnityEngine_ParticleSystem__Simulate_71506892((UnityEngine_ParticleSystem_o *)v6, 1.0, 0);
                UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)v6, 1, 0);
              }
            }
          }
          LODWORD(max_length) = particlelist->max_length;
          ++v5;
        }
        while ( (__int64)v5 < (int)max_length );
      }
    }
  }
}


void CommonEffectComponent__Resume(CommonEffectComponent_o *this, bool isSkip, const MethodInfo *method)
{
  bool v5; // w21
  _BOOL4 isStart; // w8
  UnityEngine_Object_o *gameObject; // x20

  v5 = isSkip;
  if ( (byte_4C3901B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3901B = 1;
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
          ((void (__fastcall *)(CommonEffectComponent_o *, __int64, const MethodInfo *))this->klass->vtable._5_NextPlayAnimation.methodPtr)(
            this,
            4,
            this->klass->vtable._5_NextPlayAnimation.method);
        }
        else
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71223640(gameObject, 0);
          ((void (__fastcall *)(CommonEffectComponent_o *, const MethodInfo *))this->klass->vtable._10_PlayDestroyEffectCallback.methodPtr)(
            this,
            this->klass->vtable._10_PlayDestroyEffectCallback.method);
        }
      }
      else
      {
        ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._6_ForceStart.methodPtr)(
          this,
          0,
          0,
          this->klass->vtable._6_ForceStart.method);
      }
    }
  }
  else
  {
    this->fields.isPause = 0;
  }
}


void CommonEffectComponent__Rewind(CommonEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v4; // x0

  if ( (byte_4C39020 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39020 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v4 = this->fields.simpleAnimationComponent;
    if ( !v4 )
      sub_1C32E7C(0);
    SimpleAnimation__Rewind(v4, 0);
  }
}


void CommonEffectComponent__SetChildInit(
        CommonEffectComponent_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v6; // x21
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x3
  __int64 naturalAligment; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x19
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0

  v6 = this;
  if ( (byte_4C39021 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    this = (CommonEffectComponent_o *)sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    byte_4C39021 = 1;
  }
  if ( !tf
    || (this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_35:
    sub_1C32E7C(this);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0) != layer )
  {
    this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
    if ( !Enumerator )
      sub_1C32E7C(0);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v9;
          p_offset += 4;
          if ( !v9 )
            goto LABEL_12;
        }
        v11 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_12:
        v11 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(
              Enumerator,
              *(_QWORD *)(v11 + 8))
          & 1) == 0 )
        break;
      v12 = Enumerator->klass;
      v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
        while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v13;
          v14 += 2;
          if ( !v13 )
            goto LABEL_19;
        }
        v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
      }
      else
      {
LABEL_19:
        v15 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v16 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                         Enumerator,
                                         *(_QWORD *)(v15 + 8));
      if ( v16 )
      {
        naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
        if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_1C3313C(v16);
          goto LABEL_35;
        }
      }
      CommonEffectComponent__SetChildInit(v6, v16, layer, v17);
    }
    v19 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
    if ( v19 )
    {
      v20 = *(_QWORD *)v19;
      v21 = v19;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_30;
        }
        v24 = v20 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_30:
        v24 = sub_1C83438(v19, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
    }
  }
}


void CommonEffectComponent__SetEndlessEnable(CommonEffectComponent_o *this, bool isEnable, const MethodInfo *method)
{
  this->fields.isEndless = isEnable;
}


void CommonEffectComponent__SetNotifyEventCallback(
        CommonEffectComponent_o *this,
        System_Action_string__o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.notifyEventCallback = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.notifyEventCallback, (int32_t)callback, (int32_t)method, v3);
}


void CommonEffectComponent__SetParam(CommonEffectComponent_o *this, Il2CppObject *param, const MethodInfo *method)
{
  ;
}


void CommonEffectComponent__SetSePitch(CommonEffectComponent_o *this, System_String_o *str, const MethodInfo *method)
{
  System_String_o *v4; // x19
  float v5; // s8

  if ( (byte_4C3902C & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C3902C = 1;
  }
  if ( !str || (this = (CommonEffectComponent_o *)System_String__Split(str, 0x3Au, 0, 0)) == 0 )
    sub_1C32E7C(this);
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
  {
    v4 = *(System_String_o **)&this->fields.endtime;
    v5 = System_Single__Parse(*(System_String_o **)&this->fields.touchEffectTime, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__setPitchSe(v4, v5, 0);
  }
}


void CommonEffectComponent__SetTime(
        CommonEffectComponent_o *this,
        float endTime,
        float lostTime,
        const MethodInfo *method)
{
  this->fields.endtime = endTime;
  this->fields.losttime = lostTime;
}


void CommonEffectComponent__SetTouchCallback(
        CommonEffectComponent_o *this,
        System_Action_o *inputTouchCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.touchCallback = inputTouchCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.touchCallback, (int32_t)inputTouchCallback, (int32_t)method, v3);
}


void CommonEffectComponent__SetUseAnimNum(
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

  if ( (byte_4C3902B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C3902B = 1;
  }
  this->fields.useAnimNum = num;
  if ( isUpdateName )
  {
    if ( this->fields.baseName )
    {
      effectName = this->fields.effectName;
      v8 = System_Int32__ToString((int)this + 136, 0);
      v9 = System_String__Concat_63556792(effectName, (System_String_o *)StringLiteral_16107/*"_"*/, v8, 0);
      this->fields.baseName = v9;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseName, (int32_t)v9, v10, v11);
    }
  }
}


void CommonEffectComponent__SetUseDeltaTimeInActive(
        CommonEffectComponent_o *this,
        bool isUse,
        const MethodInfo *method)
{
  this->fields.useDeltaTimeInActive = isUse;
}


void CommonEffectComponent__SetVoice(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.settedVoiceStr = voiceStr;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.settedVoiceStr, (int32_t)voiceStr, (int32_t)method, v3);
  this->fields.voiceCallback = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.voiceCallback, 0, v5, v6);
}


void CommonEffectComponent__SetVoice_43637120(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.settedVoiceStr = voiceStr;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.settedVoiceStr, (int32_t)voiceStr, (int32_t)callback, method);
  this->fields.voiceCallback = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.voiceCallback, (int32_t)callback, v6, v7);
}


void CommonEffectComponent__Start(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  CommonEffectComponent__Init(this, 0, 0, v2);
}


void CommonEffectComponent__Stop(
        CommonEffectComponent_o *this,
        bool isDestroy,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  CommonEffectComponent__StopInternal(this, 0, isDestroy, callback, v4);
}


void CommonEffectComponent__StopInternal(
        CommonEffectComponent_o *this,
        bool force,
        bool isDestroy,
        System_Action_o *onStoppedCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *v10; // x0
  SimpleAnimation_o *v11; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v13; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v16; // x19
  __int64 v17; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v19; // x0
  UnityEngine_TrackedReference_o *v20; // x19

  if ( (byte_4C3901F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    sub_1C32C20(&StringLiteral_16562/*"_loop"*/);
    byte_4C3901F = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0);
    return;
  }
  this->fields.callAfterStop = onStoppedCallback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.callAfterStop,
    (int32_t)onStoppedCallback,
    isDestroy,
    (const MethodInfo *)onStoppedCallback);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (System_String_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v11 = this->fields.simpleAnimationComponent;
    if ( force )
    {
      if ( v11 )
      {
        SimpleAnimation__Stop(this->fields.simpleAnimationComponent, 0);
        return;
      }
LABEL_31:
      sub_1C32E7C(v10);
    }
    v10 = System_String__Concat_63518544(this->fields.baseName, (System_String_o *)StringLiteral_16562/*"_loop"*/, 0);
    if ( !v11 )
      goto LABEL_31;
    Item = SimpleAnimation__get_Item(v11, v10, 0);
    if ( Item )
    {
      klass = Item->klass;
      v16 = Item;
      v17 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v17;
          p_offset += 2;
          if ( !v17 )
            goto LABEL_23;
        }
        v19 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
      }
      else
      {
LABEL_23:
        v19 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 18);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v19)(v16, 1, *(_QWORD *)(v19 + 8));
    }
  }
  else
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = (System_String_o *)UnityEngine_Object__op_Inequality(animationComponent, 0, 0);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      v13 = this->fields.animationComponent;
      if ( force )
      {
        if ( !v13 )
          goto LABEL_31;
        UnityEngine_Animation__Stop(this->fields.animationComponent, 0);
      }
      else
      {
        v10 = System_String__Concat_63518544(this->fields.baseName, (System_String_o *)StringLiteral_16562/*"_loop"*/, 0);
        if ( !v13 )
          goto LABEL_31;
        v20 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v13, v10, 0);
        v10 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v20, 0, 0);
        if ( ((unsigned __int8)v10 & 1) != 0 )
        {
          if ( !v20 )
            goto LABEL_31;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v20, 1, 0);
        }
      }
    }
  }
}


bool CommonEffectComponent__StopOrLoopEnd(CommonEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v4; // x20
  System_String_o *v5; // x0
  SimpleAnimation_o *v6; // x20
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Animation_o *v8; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v10; // x20
  bool v11; // w20

  if ( (byte_4C39036 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_16562/*"_loop"*/);
    byte_4C39036 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
      goto LABEL_19;
    v8 = this->fields.animationComponent;
    v5 = System_String__Concat_63518544(this->fields.baseName, (System_String_o *)StringLiteral_16562/*"_loop"*/, 0);
    if ( v8 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v8, v5, 0);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0, 0) )
        goto LABEL_19;
      v10 = this->fields.animationComponent;
      v5 = System_String__Concat_63518544(this->fields.baseName, (System_String_o *)StringLiteral_16562/*"_loop"*/, 0);
      if ( v10 )
      {
        if ( !UnityEngine_Animation__IsPlaying(v10, v5, 0) )
          goto LABEL_19;
LABEL_18:
        v11 = 1;
        ((void (__fastcall *)(CommonEffectComponent_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._8_Stop.methodPtr)(
          this,
          1,
          0,
          this->klass->vtable._8_Stop.method);
        return v11;
      }
    }
LABEL_24:
    sub_1C32E7C(v5);
  }
  v4 = this->fields.simpleAnimationComponent;
  v5 = System_String__Concat_63518544(this->fields.baseName, (System_String_o *)StringLiteral_16562/*"_loop"*/, 0);
  if ( !v4 )
    goto LABEL_24;
  if ( !SimpleAnimation__get_Item(v4, v5, 0) )
    goto LABEL_19;
  v6 = this->fields.simpleAnimationComponent;
  v5 = System_String__Concat_63518544(this->fields.baseName, (System_String_o *)StringLiteral_16562/*"_loop"*/, 0);
  if ( !v6 )
    goto LABEL_24;
  if ( SimpleAnimation__IsPlaying(v6, v5, 0) )
    goto LABEL_18;
LABEL_19:
  if ( this->fields.status == 4 && this->fields.loop )
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._9_ForceStop.methodPtr)(
      this,
      1,
      0,
      this->klass->vtable._9_ForceStop.method);
  return 0;
}


void CommonEffectComponent__SyncParticleList(CommonEffectComponent_o *this, float syncTime, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x21
  UnityEngine_Object_o *v9; // x19

  if ( (byte_4C3902E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3902E = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.particlelist, 0);
  if ( !IsNullOrEmpty )
  {
    particlelist = this->fields.particlelist;
    if ( !particlelist )
LABEL_18:
      sub_1C32E7C(IsNullOrEmpty);
    max_length = particlelist->max_length;
    if ( max_length && (int)max_length >= 1 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_1C32E84(IsNullOrEmpty);
        v9 = (UnityEngine_Object_o *)particlelist->m_Items[v8];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        IsNullOrEmpty = UnityEngine_Object__op_Equality(v9, 0, 0);
        if ( !IsNullOrEmpty )
        {
          if ( !v9 )
            goto LABEL_18;
          IsNullOrEmpty = UnityEngine_ParticleSystem__get_isPlaying((UnityEngine_ParticleSystem_o *)v9, 0);
          if ( IsNullOrEmpty )
          {
            UnityEngine_ParticleSystem__Simulate_71506892((UnityEngine_ParticleSystem_o *)v9, syncTime, 0);
            UnityEngine_ParticleSystem__Play_71507048((UnityEngine_ParticleSystem_o *)v9, 0);
          }
        }
        LODWORD(max_length) = particlelist->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)max_length );
    }
  }
}


void CommonEffectComponent__Update(CommonEffectComponent_o *this, const MethodInfo *method)
{
  float totaltime; // s8
  const MethodInfo *v4; // x1
  float DeltaTimeInActive; // s0
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *v7; // x21
  SimpleAnimation_o *v8; // x0
  UnityEngine_Object_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x21
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  CGThumbnailListItem_o *p_playAnimation; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *animationComponent; // x21
  int32_t status; // w8
  struct System_String_o **v19; // x0
  struct System_String_o *requestAnimation; // x1
  UnityEngine_Object_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UnityEngine_ParticleSystem_array *particlelist; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v26; // x24
  UnityEngine_Object_o *v27; // x21
  float v28; // s0
  CGThumbnailListItem_o *p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4C39023 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39023 = 1;
  }
  if ( this->fields.status < 3u )
    return;
  totaltime = this->fields.totaltime;
  if ( this->fields.useDeltaTimeInActive )
    DeltaTimeInActive = RealTime__get_DeltaTimeInActive(0);
  else
    DeltaTimeInActive = RealTime__get_deltaTime(0);
  this->fields.totaltime = totaltime + DeltaTimeInActive;
  CommonEffectComponent__UpdateTouchAnimation(this, v4);
  p_requestAnimation = &this->fields.requestAnimation;
  if ( !this->fields.requestAnimation )
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0)
      && (p_playAnimation = (CGThumbnailListItem_o *)&this->fields.playAnimation, this->fields.playAnimation) )
    {
      v8 = this->fields.simpleAnimationComponent;
      if ( !v8 )
        goto LABEL_85;
      if ( SimpleAnimation__CheckPlaying(v8, 0) )
        return;
    }
    else
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
        goto LABEL_44;
      p_playAnimation = (CGThumbnailListItem_o *)&this->fields.playAnimation;
      if ( !this->fields.playAnimation )
        goto LABEL_44;
      v8 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v8 )
        goto LABEL_85;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v8, 0) )
        return;
    }
    status = this->fields.status;
    if ( status != 6 )
      goto LABEL_45;
    p_playAnimation->klass = 0;
    sub_1C32BC4(p_playAnimation, 0, v15, v16);
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
            p_callAfterStop->klass = 0;
            sub_1C32BC4(p_callAfterStop, 0, v15, v16);
            ActionExtensions__Call(callAfterStop, 0);
          }
          if ( this->fields.isDestroy )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_71223640(gameObject, 0);
            ((void (__fastcall *)(CommonEffectComponent_o *, const MethodInfo *))this->klass->vtable._10_PlayDestroyEffectCallback.methodPtr)(
              this,
              this->klass->vtable._10_PlayDestroyEffectCallback.method);
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
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, const MethodInfo *))this->klass->vtable._5_NextPlayAnimation.methodPtr)(
      this,
      4,
      this->klass->vtable._5_NextPlayAnimation.method);
LABEL_75:
    if ( !*p_requestAnimation )
      return;
  }
  v7 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    v8 = this->fields.simpleAnimationComponent;
    if ( !v8 )
      goto LABEL_85;
    if ( SimpleAnimation__CheckPlaying(v8, 0) )
      return;
  }
  else
  {
    v9 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
    {
      v8 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v8 )
        goto LABEL_85;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v8, 0) )
        return;
    }
  }
  if ( System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
    {
      v8 = this->fields.simpleAnimationComponent;
      if ( v8 )
      {
        SimpleAnimation__Play_66464300(v8, this->fields.requestAnimation, 0);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_59;
        v8 = this->fields.simpleAnimationComponent;
        if ( v8 )
        {
          SimpleAnimation__Sample(v8, 0);
LABEL_59:
          requestAnimation = this->fields.requestAnimation;
          this->fields.playAnimation = requestAnimation;
          v19 = &this->fields.playAnimation;
          goto LABEL_60;
        }
      }
    }
    else
    {
      v21 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v21, 0, 0) )
        goto LABEL_59;
      v8 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v8 )
      {
        UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)v8, this->fields.requestAnimation, 0);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_59;
        v8 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v8 )
        {
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v8, 0);
          goto LABEL_59;
        }
      }
    }
LABEL_85:
    sub_1C32E7C(v8);
  }
  this->fields.playAnimation = 0;
  v19 = &this->fields.playAnimation;
  LODWORD(requestAnimation) = 0;
LABEL_60:
  sub_1C32BC4((CGThumbnailListItem_o *)v19, (int32_t)requestAnimation, v10, v11);
  if ( this->fields.status == 6 )
  {
    particlelist = this->fields.particlelist;
    if ( particlelist )
    {
      max_length = particlelist->max_length;
      if ( (int)max_length >= 1 )
      {
        v26 = 0;
        do
        {
          if ( v26 >= (unsigned int)max_length )
            sub_1C32E84(v8);
          v27 = (UnityEngine_Object_o *)particlelist->m_Items[v26];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v8 = (SimpleAnimation_o *)UnityEngine_Object__op_Inequality(v27, 0, 0);
          if ( ((unsigned __int8)v8 & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_85;
            UnityEngine_ParticleSystem__Stop_71507400((UnityEngine_ParticleSystem_o *)v27, 0);
          }
          LODWORD(max_length) = particlelist->max_length;
          ++v26;
        }
        while ( (__int64)v26 < (int)max_length );
      }
    }
    v28 = this->fields.totaltime;
    if ( v28 > this->fields.endtime )
      this->fields.endtime = v28;
  }
  *p_requestAnimation = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.requestAnimation, 0, v22, v23);
}


void CommonEffectComponent__UpdateTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float touchStartTime; // s8
  CommonEffectComponent_c *v5; // x0
  CommonEffectComponent_c *v6; // x0

  if ( (byte_4C39035 & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectComponent_TypeInfo);
    byte_4C39035 = 1;
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


void CommonEffectComponent___OnRelease_b__82_0(CommonEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isTouched = 0;
}


System_String_o *CommonEffectComponent__get_EffectName(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.effectName;
}


bool CommonEffectComponent__get_IsEndStatus(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.status == 6;
}


bool CommonEffectComponent__get_IsOnSublayer(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsOnSublayer_k__BackingField;
}


bool CommonEffectComponent__get_IsStart(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isStart;
}


void CommonEffectComponent__set_IsOnSublayer(CommonEffectComponent_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsOnSublayer_k__BackingField = value;
}


void CommonEffectComponent__DelayFrameCoroutine_d__83___ctor(
        CommonEffectComponent__DelayFrameCoroutine_d__83_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CommonEffectComponent__DelayFrameCoroutine_d__83__MoveNext(
        CommonEffectComponent__DelayFrameCoroutine_d__83_o *this,
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
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.action, 0);
  return 0;
}


Il2CppObject *CommonEffectComponent__DelayFrameCoroutine_d__83__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CommonEffectComponent__DelayFrameCoroutine_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CommonEffectComponent__DelayFrameCoroutine_d__83__System_Collections_IEnumerator_Reset(
        CommonEffectComponent__DelayFrameCoroutine_d__83_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_CommonEffectComponent__DelayFrameCoroutine_d__83_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *CommonEffectComponent__DelayFrameCoroutine_d__83__System_Collections_IEnumerator_get_Current(
        CommonEffectComponent__DelayFrameCoroutine_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CommonEffectComponent__DelayFrameCoroutine_d__83__System_IDisposable_Dispose(
        CommonEffectComponent__DelayFrameCoroutine_d__83_o *this,
        const MethodInfo *method)
{
  ;
}