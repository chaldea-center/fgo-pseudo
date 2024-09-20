void __fastcall CommonEffectComponent___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5C4C2 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectComponent_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
    sub_1B885B0(&StringLiteral_23480/*"start"*/);
    sub_1B885B0(&StringLiteral_18999/*"end"*/);
    sub_1B885B0(&StringLiteral_23996/*"touch"*/);
    sub_1B885B0(&StringLiteral_21213/*"loop"*/);
    byte_4A5C4C2 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_319C86C *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
  if ( !v1 )
    sub_1B8880C(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_23480/*"start"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_21213/*"loop"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_23996/*"touch"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_18999/*"end"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  CommonEffectComponent_TypeInfo->static_fields->ANIMATION_NAME_TABLE = (struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)CommonEffectComponent_TypeInfo->static_fields, (int32_t)v1, v4, v5);
  CommonEffectComponent_TypeInfo->static_fields->DEFAULT_TOUCH_START_TIME = -1.0;
}


void __fastcall CommonEffectComponent___ctor(CommonEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent_c *v8; // x0

  if ( (byte_4A5C4C1 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectComponent_TypeInfo);
    byte_4A5C4C1 = 1;
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
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectComponent__Awake(CommonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5C4B2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    byte_4A5C4B2 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animationComponent, (int32_t)Component_object, v4, v5);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationComponent, (int32_t)v6, v7, v8);
}


System_Collections_IEnumerator_o *__fastcall CommonEffectComponent__DelayFrameCoroutine(
        CommonEffectComponent_o *this,
        int32_t frame,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5C4BC & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectComponent__DelayFrameCoroutine_d__78_TypeInfo);
    byte_4A5C4BC = 1;
  }
  v6 = sub_1B887FC(CommonEffectComponent__DelayFrameCoroutine_d__78_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 32) = frame;
  *(_QWORD *)(v6 + 40) = action;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)action, v7, v8);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall CommonEffectComponent__ForceLoop(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_ForceLoop.method)(
    this,
    0LL,
    this->klass->vtable._8_Stop.methodPtr);
}


void __fastcall CommonEffectComponent__ForceLoop_40644760(
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
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Animation_o *v22; // x20
  UnityEngine_TrackedReference_o *v23; // x20

  if ( (byte_4A5C4AE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_16552/*"_loop"*/);
    byte_4A5C4AE = 1;
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
        v9 = this->fields.simpleAnimationComponent;
        if ( !v9 )
          goto LABEL_42;
        SimpleAnimation__Stop(v9, 0LL);
      }
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_41;
      v9 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v9 )
        goto LABEL_42;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v9, 0LL);
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
    v11 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      v12 = this->fields.simpleAnimationComponent;
      v9 = (SimpleAnimation_o *)System_String__Concat_61707032(
                                  this->fields.baseName,
                                  (System_String_o *)StringLiteral_16552/*"_loop"*/,
                                  0LL);
      if ( v12 )
      {
        Item = SimpleAnimation__get_Item(v12, (System_String_o *)v9, 0LL);
        if ( Item )
        {
          klass = Item->klass;
          v15 = Item;
          v16 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v16;
              p_offset += 2;
              if ( !v16 )
                goto LABEL_26;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_26:
            p_method = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 18LL);
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
          goto LABEL_40;
        }
      }
    }
    else
    {
      v19 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
        goto LABEL_40;
      v22 = this->fields.animationComponent;
      v9 = (SimpleAnimation_o *)System_String__Concat_61707032(
                                  this->fields.baseName,
                                  (System_String_o *)StringLiteral_16552/*"_loop"*/,
                                  0LL);
      if ( v22 )
      {
        v23 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v22, (System_String_o *)v9, 0LL);
        v9 = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v23, 0LL, 0LL);
        if ( ((unsigned __int8)v9 & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v23, 2, 0LL);
        }
        v9 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v9 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v9, 0LL);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playAnimation, 0, v20, v21);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1B8880C(v9, v8);
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


void __fastcall CommonEffectComponent__ForceStart_40644068(
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
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Animation_o *v22; // x20
  UnityEngine_TrackedReference_o *v23; // x20

  if ( (byte_4A5C4AD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_16552/*"_loop"*/);
    byte_4A5C4AD = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStart,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  if ( !this->fields.status )
  {
    if ( isOverWrite )
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
        v10 = this->fields.animationComponent;
        if ( !v10 )
          goto LABEL_37;
        UnityEngine_Animation__Stop(v10, 0LL);
      }
    }
    CommonEffectComponent__Init(this, 0, 0, v7);
    return;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v9 = this->fields.simpleAnimationComponent;
    v10 = (UnityEngine_Animation_o *)System_String__Concat_61707032(
                                       this->fields.baseName,
                                       (System_String_o *)StringLiteral_16552/*"_loop"*/,
                                       0LL);
    if ( v9 )
    {
      Item = SimpleAnimation__get_Item(v9, (System_String_o *)v10, 0LL);
      if ( Item )
      {
        klass = Item->klass;
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
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_15:
          p_method = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 18LL);
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
        goto LABEL_36;
      }
    }
    goto LABEL_37;
  }
  v19 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    goto LABEL_36;
  v22 = this->fields.animationComponent;
  v10 = (UnityEngine_Animation_o *)System_String__Concat_61707032(
                                     this->fields.baseName,
                                     (System_String_o *)StringLiteral_16552/*"_loop"*/,
                                     0LL);
  if ( !v22 )
    goto LABEL_37;
  v23 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v22, (System_String_o *)v10, 0LL);
  v10 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(v23, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_37;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v23, 2, 0LL);
  }
  v10 = this->fields.animationComponent;
  if ( !v10 )
LABEL_37:
    sub_1B8880C(v10, v11);
  UnityEngine_Animation__Stop(v10, 0LL);
LABEL_36:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playAnimation, 0, v20, v21);
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
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_String_o *baseName; // x20
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *v12; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *v13; // x8
  __int64 v14; // x9
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **v15; // x10
  __int64 v16; // x0
  System_String_o *v18; // x2

  if ( (byte_4A5C4BF & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectComponent_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5C4BF = 1;
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
  v8 = *(unsigned __int16 *)(&ANIMATION_NAME_TABLE->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&ANIMATION_NAME_TABLE->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BDA590(
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
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
    v5 = CommonEffectComponent_TypeInfo;
  }
  v12 = v5->static_fields->ANIMATION_NAME_TABLE;
  if ( !v12 )
LABEL_24:
    sub_1B8880C(v5, *(_QWORD *)&status);
  v13 = v12->klass;
  v14 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    v15 = (System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_20;
    }
    v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 2].method;
  }
  else
  {
LABEL_20:
    v16 = sub_1BDA590(
            v12,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            2LL);
  }
  v18 = (System_String_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v16)(
                             v12,
                             (unsigned int)status,
                             *(_QWORD *)(v16 + 8));
  return System_String__Concat_61718292(baseName, (System_String_o *)StringLiteral_16123/*"_"*/, v18, 0LL);
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
  System_String_o *name; // x0
  char v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x0
  char v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x23
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  char v19; // w2
  int32_t v20; // w3
  System_String_o **p_baseName; // x23
  struct System_String_o *v22; // x1
  System_String_o *v23; // x0
  char v24; // w2
  int32_t v25; // w3
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *transform; // x22
  int32_t layer; // w0
  const MethodInfo *v30; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v32; // x1
  UnityEngine_Object_o *v33; // x19

  if ( (byte_4A5C4AA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5811/*"Effect("*/);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    sub_1B885B0(&StringLiteral_731/*"(Clone)"*/);
    byte_4A5C4AA = 1;
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectName, (int32_t)name, v11, v12);
    gameObject = (UnityEngine_Object_o *)*p_effectName;
    if ( !*p_effectName )
      goto LABEL_37;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_731/*"(Clone)"*/, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)*p_effectName;
      if ( !*p_effectName )
        goto LABEL_37;
      v13 = System_String__Substring_61726036((System_String_o *)gameObject, 0, gameObject->fields.m_CachedPtr - 7, 0LL);
      *p_effectName = v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectName, (int32_t)v13, v14, v15);
    }
  }
  if ( this->fields.useAnimNum >= 1 )
  {
    v16 = *p_effectName;
    v17 = System_Int32__ToString((int)this + 136, 0LL);
    v18 = System_String__Concat_61718292(v16, (System_String_o *)StringLiteral_16123/*"_"*/, v17, 0LL);
    *p_effectName = v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectName, (int32_t)v18, v19, v20);
  }
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    v22 = *p_effectName;
    *p_baseName = *p_effectName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseName, (int32_t)v22, isPause, (int32_t)method);
    gameObject = (UnityEngine_Object_o *)*p_baseName;
    if ( !*p_baseName )
      goto LABEL_37;
    gameObject = (UnityEngine_Object_o *)System_String__LastIndexOf((System_String_o *)gameObject, 0x2Fu, 0LL);
    if ( ((unsigned int)gameObject & 0x80000000) == 0 )
    {
      if ( !*p_baseName )
        goto LABEL_37;
      v23 = System_String__Substring(*p_baseName, (int)gameObject + 1, 0LL);
      *p_baseName = v23;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseName, (int32_t)v23, v24, v25);
    }
  }
  v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  gameObject = (UnityEngine_Object_o *)System_String__Concat_61718292(
                                         (System_String_o *)StringLiteral_5811/*"Effect("*/,
                                         this->fields.effectName,
                                         (System_String_o *)StringLiteral_814/*")"*/,
                                         0LL);
  if ( !v26 )
    goto LABEL_37;
  UnityEngine_Object__set_name(v26, (System_String_o *)gameObject, 0LL);
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
    sub_1B8880C(gameObject, v9);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  CommonEffectComponent__SetChildInit(this, transform, layer, v30);
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
    v32 = 3LL;
    goto LABEL_33;
  }
  if ( this->fields.loop )
  {
    klass = this->klass;
    v32 = 4LL;
LABEL_33:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))klass->vtable._5_NextPlayAnimation.method)(
      this,
      v32,
      klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(v33, 0LL);
}


void __fastcall CommonEffectComponent__Init_40640996(
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectName, (int32_t)effectName, isSkip, isPause);
    CommonEffectComponent__Init(this, isSkip, isPause, v8);
  }
}


void __fastcall CommonEffectComponent__Init_40641068(
        CommonEffectComponent_o *this,
        AssetData_o *data,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  char v11; // w2
  char v12; // w3
  struct System_String_o *name; // x1
  const MethodInfo *v14; // x3

  if ( !this->fields.status )
  {
    this->fields.asset = data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.asset, (int32_t)data, isSkip, isPause);
    if ( !data )
      sub_1B8880C(v9, v10);
    name = data->fields.name;
    this->fields.effectName = name;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectName, (int32_t)name, v11, v12);
    CommonEffectComponent__Init(this, isSkip, isPause, v14);
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
  struct System_String_o *name; // x1
  __int64 States; // x0
  __int64 v8; // x8
  __int64 v9; // x21
  __int64 v10; // x9
  int *v11; // x10
  __int64 v12; // x0
  UnityEngine_Object_o *animationComponent; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v22; // x8
  __int64 v23; // x9
  System_Collections_IEnumerator_c **v24; // x10
  __int64 v25; // x0
  UnityEngine_AnimationState_o *v26; // x0
  __int64 v27; // x1
  ServantStatusBattleListViewItem_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  __int64 v34; // x21
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x21
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x22
  __int64 v51; // x8
  __int64 v52; // x9
  SimpleAnimation_State_c **v53; // x10
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  SimpleAnimation_o *v59; // x20
  SimpleAnimation_State_o *v60; // x21
  ServantStatusBattleListViewItem_o *v61; // x0
  System_Action_o *v62; // x20
  SimpleAnimation_o *v63; // x20
  SimpleAnimation_State_o *v64; // x0
  SimpleAnimation_o *v65; // x20
  SimpleAnimation_State_c *v66; // x8
  __int64 v67; // x9
  SimpleAnimation_State_c **v68; // x10
  __int64 v69; // x0
  UnityEngine_Animation_o *v70; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  ServantStatusBattleListViewItem_o *v72; // x0
  System_Action_o *v73; // x20
  UnityEngine_Animation_o *v74; // x20
  UnityEngine_Animation_o *v75; // x20

  if ( (byte_4A5C4AC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AnimationState_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_16552/*"_loop"*/);
    sub_1B885B0(&StringLiteral_16573/*"_start"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16537/*"_end"*/);
    byte_4A5C4AC = 1;
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
      if ( next == 4 )
      {
        if ( this->fields.loop )
          next = 4;
        else
          next = 6;
      }
      else if ( next == 3 )
      {
        p_callAfterStart = (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          p_callAfterStart->klass = 0LL;
          sub_1B88554(p_callAfterStart, 0, v14, v15);
          ActionExtensions__Call(callAfterStart, 0LL);
        }
        next = 3;
      }
      goto LABEL_129;
    }
    States = (__int64)this->fields.animationComponent;
    if ( !States
      || (UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)States, 0LL),
          (States = (__int64)this->fields.animationComponent) == 0) )
    {
LABEL_136:
      sub_1B8880C(States, name);
    }
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
    if ( !Enumerator )
      sub_1B8880C(0LL, v16);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          p_offset += 4;
          if ( !v19 )
            goto LABEL_24;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_24:
        p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v22 = Enumerator->klass;
      v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v24 = (System_Collections_IEnumerator_c **)&v22->_1.interfaceOffsets->offset;
        while ( *(v24 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v23;
          v24 += 2;
          if ( !v23 )
            goto LABEL_31;
        }
        v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 1].method;
      }
      else
      {
LABEL_31:
        v25 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v26 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v25)(
                                              Enumerator,
                                              *(_QWORD *)(v25 + 8));
      if ( !v26 )
        goto LABEL_135;
      if ( v26->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1B88ACC(v26);
LABEL_135:
        sub_1B8880C(v26, v27);
      }
      UnityEngine_AnimationState__get_name(v26, 0LL);
    }
    v30 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
    if ( v30 )
    {
      v33 = *(_QWORD *)v30;
      v34 = v30;
      v35 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_46;
        }
        v37 = v33 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_46:
        v37 = sub_1BDA590(v30, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
    }
    switch ( next )
    {
      case 3:
        v70 = this->fields.animationComponent;
        States = (__int64)System_String__Concat_61707032(
                            this->fields.baseName,
                            (System_String_o *)StringLiteral_16573/*"_start"*/,
                            0LL);
        if ( !v70 )
          goto LABEL_136;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v70, (System_String_o *)States, 0LL);
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
          next = 3;
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
    v72 = (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStart;
    v73 = this->fields.callAfterStart;
    if ( v73 )
    {
      v72->klass = 0LL;
      sub_1B88554(v72, 0, v31, v32);
      ActionExtensions__Call(v73, 0LL);
    }
    if ( this->fields.loop )
    {
      v74 = this->fields.animationComponent;
      States = (__int64)System_String__Concat_61707032(
                          this->fields.baseName,
                          (System_String_o *)StringLiteral_16552/*"_loop"*/,
                          0LL);
      if ( !v74 )
        goto LABEL_136;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v74, (System_String_o *)States, 0LL);
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        next = 4;
        goto LABEL_126;
      }
    }
LABEL_124:
    v75 = this->fields.animationComponent;
    States = (__int64)System_String__Concat_61707032(this->fields.baseName, (System_String_o *)StringLiteral_16537/*"_end"*/, 0LL);
    if ( !v75 )
      goto LABEL_136;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v75, (System_String_o *)States, 0LL);
    next = 6;
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
  v8 = *(_QWORD *)States;
  v9 = States;
  v10 = *(unsigned __int16 *)(*(_QWORD *)States + 302LL);
  if ( *(_WORD *)(*(_QWORD *)States + 302LL) )
  {
    v11 = (int *)(*(_QWORD *)(v8 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)v11 - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      --v10;
      v11 += 4;
      if ( !v10 )
        goto LABEL_13;
    }
    v12 = v8 + 16LL * *v11 + 312;
  }
  else
  {
LABEL_13:
    v12 = sub_1BDA590(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
  if ( !v39 )
    sub_1B8880C(0LL, v38);
  while ( 1 )
  {
    v40 = *(_QWORD *)v39;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_53;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_53:
      v43 = sub_1BDA590(v39, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8)) & 1) == 0 )
      break;
    v44 = *(_QWORD *)v39;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v46 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_60;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_60:
      v47 = sub_1BDA590(v39, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v39, *(_QWORD *)(v47 + 8));
    v50 = v48;
    if ( !v48 )
      sub_1B8880C(0LL, v49);
    v51 = *(_QWORD *)v48;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
    {
      v53 = (SimpleAnimation_State_c **)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *(v53 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v52;
        v53 += 2;
        if ( !v52 )
          goto LABEL_67;
      }
      v54 = v51 + 16LL * (*(_DWORD *)v53 + 9) + 312;
    }
    else
    {
LABEL_67:
      v54 = sub_1BDA590(v48, SimpleAnimation_State_TypeInfo, 9LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8));
  }
  v55 = *(_QWORD *)v39;
  v56 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
  {
    v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_74;
    }
    v58 = v55 + 16LL * *v57 + 312;
  }
  else
  {
LABEL_74:
    v58 = sub_1BDA590(v39, System_IDisposable_TypeInfo, 0LL);
  }
  States = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v39, *(_QWORD *)(v58 + 8));
  if ( next == 3 )
  {
    v59 = this->fields.simpleAnimationComponent;
    States = (__int64)System_String__Concat_61707032(this->fields.baseName, (System_String_o *)StringLiteral_16573/*"_start"*/, 0LL);
    if ( !v59 )
      goto LABEL_136;
    v60 = SimpleAnimation__get_Item(v59, (System_String_o *)States, 0LL);
    if ( v60 )
      goto LABEL_87;
    States = (__int64)this->fields.simpleAnimationComponent;
    if ( !States )
      goto LABEL_136;
    v60 = SimpleAnimation__get_Item((SimpleAnimation_o *)States, this->fields.baseName, 0LL);
    if ( v60 )
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
    v61 = (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStart;
    v62 = this->fields.callAfterStart;
    if ( v62 )
    {
      v61->klass = 0LL;
      sub_1B88554(v61, 0, v14, v15);
      ActionExtensions__Call(v62, 0LL);
    }
    if ( this->fields.loop )
    {
      v63 = this->fields.simpleAnimationComponent;
      States = (__int64)System_String__Concat_61707032(
                          this->fields.baseName,
                          (System_String_o *)StringLiteral_16552/*"_loop"*/,
                          0LL);
      if ( !v63 )
        goto LABEL_136;
      v64 = SimpleAnimation__get_Item(v63, (System_String_o *)States, 0LL);
      if ( v64 )
      {
        v60 = v64;
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
  v65 = this->fields.simpleAnimationComponent;
  States = (__int64)System_String__Concat_61707032(this->fields.baseName, (System_String_o *)StringLiteral_16537/*"_end"*/, 0LL);
  if ( !v65 )
    goto LABEL_136;
  States = (__int64)SimpleAnimation__get_Item(v65, (System_String_o *)States, 0LL);
  v60 = (SimpleAnimation_State_o *)States;
  next = 6;
  if ( !States )
    goto LABEL_101;
LABEL_96:
  v66 = v60->klass;
  v67 = *(unsigned __int16 *)(&v60->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v60->klass->_2.bitflags2 + 3) )
  {
    v68 = (SimpleAnimation_State_c **)&v66->_1.interfaceOffsets->offset;
    while ( *(v68 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v67;
      v68 += 2;
      if ( !v67 )
        goto LABEL_100;
    }
    v69 = (__int64)&v66->vtable[*(_DWORD *)v68 + 9].method;
  }
  else
  {
LABEL_100:
    v69 = sub_1BDA590(v60, SimpleAnimation_State_TypeInfo, 9LL);
  }
  States = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v69)(v60, *(_QWORD *)(v69 + 8));
  name = (struct System_String_o *)States;
LABEL_104:
  if ( !this )
    goto LABEL_136;
LABEL_130:
  this->fields.requestAnimation = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestAnimation, (int32_t)name, v14, v15);
  this->fields.status = next;
}


void __fastcall CommonEffectComponent__NotifyEvent(
        CommonEffectComponent_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  if ( (byte_4A5C4B5 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_string___);
    byte_4A5C4B5 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.notifyEventCallback,
    (Il2CppObject *)eventName,
    (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_string___);
}


void __fastcall CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *asset; // x21
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5C4B4 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5C4B4 = 1;
  }
  asset = this->fields.asset;
  if ( asset )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790656(asset, 0LL);
    this->fields.asset = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.asset, 0, v4, v5);
  }
  this->fields.status = 2;
}


void __fastcall CommonEffectComponent__OnRelease(CommonEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  CommonEffectComponent_o *v4; // x0
  const MethodInfo *v5; // x3
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4A5C4BB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CommonEffectComponent__OnRelease_b__77_0__);
    byte_4A5C4BB = 1;
  }
  *(_WORD *)&this->fields.isTouching = 256;
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_CommonEffectComponent__OnRelease_b__77_0__, 0LL);
  v6 = CommonEffectComponent__DelayFrameCoroutine(v4, 1, v3, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
  struct System_String_o *v13; // x0
  struct System_String_o **p_playAnimation; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A5C4BE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4BE = 1;
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
    sub_1B8880C(name, v8);
  }
  UnityEngine_Animation__Play_69204472(v12, (System_String_o *)name, 0LL);
  v13 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
  this->fields.playAnimation = v13;
  p_playAnimation = &this->fields.playAnimation;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_playAnimation, (int32_t)v13, v15, v16);
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
  unsigned int v11; // w8
  SePlayer_o *v12; // x0
  SePlayer_o *v13; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4A5C4B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_CommonEffectComponent_PlaySe__);
    byte_4A5C4B6 = 1;
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
      v8 = (_QWORD *)sub_1B885C8(Method_CommonEffectComponent_PlaySe__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
    v11 = v6->max_length;
    if ( !v11 )
      goto LABEL_18;
    v10 = v6->m_Items[0];
    if ( max_length < 2 )
    {
      OverwriteAssetSoundName__PlaySe(v9, v10, 0LL);
      return;
    }
    if ( v11 <= 1 )
LABEL_18:
      sub_1B88814(v9, v10);
    v12 = OverwriteAssetSoundName__PlaySe_38530872(v9, v10, v6->m_Items[1], 1.0, 0LL, 0LL);
    result = 0.0;
    if ( (int)v6->max_length >= 3 )
    {
      v13 = v12;
      IsNullOrEmpty = (System_String_array *)System_Single__TryParse(v6->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v13 )
        {
          SePlayer__set_Pitch(v13, result, 0LL);
          return;
        }
LABEL_17:
        sub_1B8880C(IsNullOrEmpty, v5);
      }
    }
  }
}


void __fastcall CommonEffectComponent__PlaySeContinue(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8
  System_String_o *v5; // x19
  System_String_o *v6; // x20

  if ( (byte_4A5C4B7 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5C4B7 = 1;
  }
  if ( !name || (this = (CommonEffectComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1B8880C(this, name);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    sub_1B88814(this, name);
  v5 = *(System_String_o **)&this->fields.endtime;
  if ( m_CancellationTokenSource >= 2 )
  {
    v6 = *(System_String_o **)&this->fields.touchEffectTime;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playSeContinue_38700028(v5, v6, 0LL);
  }
  else
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playSeContinue(v5, 0LL);
  }
}


void __fastcall CommonEffectComponent__PlaySettedVoice(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *settedVoiceStr; // x1

  settedVoiceStr = this->fields.settedVoiceStr;
  if ( settedVoiceStr )
    CommonEffectComponent__PlayVoice_40648392(this, settedVoiceStr, this->fields.voiceCallback, v2);
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
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  SimpleAnimation_State_c *v17; // x8
  __int64 v18; // x9
  SimpleAnimation_State_c **v19; // x10
  __int64 v20; // x0
  struct System_String_o *v21; // x0
  struct System_String_o **p_playAnimation; // x20
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5C4BD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5C4BD = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      goto LABEL_25;
    Item = SimpleAnimation__get_Item(v10, AnimationName, 0LL);
    if ( !Item )
      return (char)Item;
    klass = Item->klass;
    v12 = this->fields.simpleAnimationComponent;
    v13 = Item;
    v14 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v14;
        p_offset += 2;
        if ( !v14 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v10 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v13,
                                 *(_QWORD *)(p_method + 8));
    if ( !v12 )
LABEL_25:
      sub_1B8880C(v10, v8);
    SimpleAnimation__Play_63844704(v12, (System_String_o *)v10, 0LL);
    v17 = v13->klass;
    v18 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
    {
      v19 = (SimpleAnimation_State_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_22;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 9].method;
    }
    else
    {
LABEL_22:
      v20 = sub_1BDA590(v13, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v21 = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v20)(
                                      v13,
                                      *(_QWORD *)(v20 + 8));
    this->fields.playAnimation = v21;
    p_playAnimation = &this->fields.playAnimation;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_playAnimation, (int32_t)v21, v23, v24);
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

  CommonEffectComponent__PlayVoice_40648392(this, name, 0LL, v3);
}


void __fastcall CommonEffectComponent__PlayVoice_40648392(
        CommonEffectComponent_o *this,
        System_String_o *name,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *IsNullOrEmpty; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  System_String_array *v9; // x20
  System_String_o *v10; // x20
  float v11; // s0
  float v12; // s8
  System_String_o *v13; // x20
  System_String_o *v14; // x21

  if ( (byte_4A5C4B8 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5C4B8 = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name || (IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
      sub_1B8880C(IsNullOrEmpty, v7);
    v8 = *(_QWORD *)&IsNullOrEmpty->max_length;
    v9 = IsNullOrEmpty;
    if ( (int)v8 < 2 )
    {
      if ( (_DWORD)v8 )
      {
        v10 = IsNullOrEmpty->m_Items[0];
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playVoice_38702712(v10, callback, 0LL);
        return;
      }
LABEL_19:
      sub_1B88814(IsNullOrEmpty, v7);
    }
    if ( (_DWORD)v8 == 2 )
    {
      v12 = 1.0;
    }
    else
    {
      v11 = System_Single__Parse(IsNullOrEmpty->m_Items[2], 0LL);
      v8 = *(_QWORD *)&v9->max_length;
      v12 = v11;
    }
    if ( (unsigned int)v8 < 2 )
      goto LABEL_19;
    v14 = v9->m_Items[0];
    v13 = v9->m_Items[1];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_38702940(v14, v13, v12, callback, 0LL);
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
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v8; // 0:x0.8

  v2 = this;
  if ( (byte_4A5C4BA & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4BA = 1;
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
            sub_1B88814(this, method);
          v6 = (UnityEngine_Object_o *)particlelist->m_Items[v5];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (CommonEffectComponent_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v6 )
              sub_1B8880C(this, method);
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v6, 0LL).fields.m_ParticleSystem;
            v8.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem_MainModule__get_prewarm(v8, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem__get_isPlaying(
                                                  (UnityEngine_ParticleSystem_o *)v6,
                                                  0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                UnityEngine_ParticleSystem__Simulate_69739360((UnityEngine_ParticleSystem_o *)v6, 1.0, 0LL);
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
  bool v5; // w21
  _BOOL4 isStart; // w8
  UnityEngine_Object_o *gameObject; // x19

  v5 = isSkip;
  if ( (byte_4A5C4AB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4AB = 1;
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
          UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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

  if ( (byte_4A5C4B0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4B0 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
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
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 methodPtr_low; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  v6 = this;
  if ( (byte_4A5C4B1 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    this = (CommonEffectComponent_o *)sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    byte_4A5C4B1 = 1;
  }
  if ( !tf
    || (this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_1B8880C(this, tf);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_1B8880C(0LL, v7);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v13 = Enumerator->klass;
      v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
        while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v14;
          v15 += 2;
          if ( !v14 )
            goto LABEL_19;
        }
        v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
      }
      else
      {
LABEL_19:
        v16 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                         Enumerator,
                                         *(_QWORD *)(v16 + 8));
      if ( v17 )
      {
        methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_1B88ACC(v17);
          goto LABEL_35;
        }
      }
      CommonEffectComponent__SetChildInit(v6, v17, layer, v18);
    }
    v20 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
    if ( v20 )
    {
      v21 = *(_QWORD *)v20;
      v22 = v20;
      v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
      {
        v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_30;
        }
        v25 = v21 + 16LL * *v24 + 312;
      }
      else
      {
LABEL_30:
        v25 = sub_1BDA590(v20, System_IDisposable_TypeInfo, 0LL);
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


void __fastcall CommonEffectComponent__SetNotifyEventCallback(
        CommonEffectComponent_o *this,
        System_Action_string__o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.notifyEventCallback = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.notifyEventCallback,
    (int32_t)callback,
    (int32_t)method,
    v3);
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

  if ( (byte_4A5C4B9 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5C4B9 = 1;
  }
  if ( !str || (this = (CommonEffectComponent_o *)System_String__Split(str, 0x3Au, 0, 0LL)) == 0LL )
    sub_1B8880C(this, str);
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
  int32_t v3; // w3

  this->fields.touchCallback = inputTouchCallback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.touchCallback,
    (int32_t)inputTouchCallback,
    (int32_t)method,
    v3);
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
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3

  this->fields.settedVoiceStr = voiceStr;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.settedVoiceStr, (int32_t)voiceStr, (int32_t)method, v3);
  this->fields.voiceCallback = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voiceCallback, 0, v5, v6);
}


void __fastcall CommonEffectComponent__SetVoice_40648732(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3

  this->fields.settedVoiceStr = voiceStr;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.settedVoiceStr,
    (int32_t)voiceStr,
    (int32_t)callback,
    (int32_t)method);
  this->fields.voiceCallback = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voiceCallback, (int32_t)callback, v6, v7);
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
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_TrackedReference_o *v21; // x19

  if ( (byte_4A5C4AF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_16552/*"_loop"*/);
    byte_4A5C4AF = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0LL);
    return;
  }
  this->fields.callAfterStop = onStoppedCallback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStop,
    (int32_t)onStoppedCallback,
    isDestroy,
    (int32_t)onStoppedCallback);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_31:
      sub_1B8880C(v10, v11);
    }
    v10 = System_String__Concat_61707032(this->fields.baseName, (System_String_o *)StringLiteral_16552/*"_loop"*/, 0LL);
    if ( !v12 )
      goto LABEL_31;
    Item = SimpleAnimation__get_Item(v12, v10, 0LL);
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
            goto LABEL_23;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_23:
        p_method = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 18LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v17, 1LL, *(_QWORD *)(p_method + 8));
    }
  }
  else
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = (System_String_o *)UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      v14 = this->fields.animationComponent;
      if ( force )
      {
        if ( !v14 )
          goto LABEL_31;
        UnityEngine_Animation__Stop(this->fields.animationComponent, 0LL);
      }
      else
      {
        v10 = System_String__Concat_61707032(this->fields.baseName, (System_String_o *)StringLiteral_16552/*"_loop"*/, 0LL);
        if ( !v14 )
          goto LABEL_31;
        v21 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v14, v10, 0LL);
        v10 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v21, 0LL, 0LL);
        if ( ((unsigned __int8)v10 & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_31;
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
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *v12; // x21
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  ServantStatusBattleListViewItem_o *p_playAnimation; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Object_o *animationComponent; // x21
  int32_t status; // w8
  struct System_String_o **v19; // x0
  struct System_String_o *requestAnimation; // x1
  UnityEngine_Object_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  struct UnityEngine_ParticleSystem_array *particlelist; // x23
  __int64 v25; // x8
  unsigned __int64 v26; // x24
  UnityEngine_Object_o *v27; // x21
  float v28; // s0
  ServantStatusBattleListViewItem_o *p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5C4B3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C4B3 = 1;
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL)
      && (p_playAnimation = (ServantStatusBattleListViewItem_o *)&this->fields.playAnimation, this->fields.playAnimation) )
    {
      v8 = this->fields.simpleAnimationComponent;
      if ( !v8 )
        goto LABEL_82;
      if ( SimpleAnimation__CheckPlaying(v8, 0LL) )
        return;
    }
    else
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_41;
      p_playAnimation = (ServantStatusBattleListViewItem_o *)&this->fields.playAnimation;
      if ( !this->fields.playAnimation )
        goto LABEL_41;
      v8 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v8 )
        goto LABEL_82;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v8, 0LL) )
        return;
    }
    status = this->fields.status;
    if ( status != 6 )
      goto LABEL_42;
    p_playAnimation->klass = 0LL;
    sub_1B88554(p_playAnimation, 0, v15, v16);
LABEL_41:
    status = this->fields.status;
LABEL_42:
    if ( status == 6 )
    {
      if ( !this->fields.isEndless )
      {
        if ( (float)(this->fields.endtime + this->fields.losttime) < this->fields.totaltime )
        {
          p_callAfterStop = (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStop;
          callAfterStop = this->fields.callAfterStop;
          if ( callAfterStop )
          {
            p_callAfterStop->klass = 0LL;
            sub_1B88554(p_callAfterStop, 0, v15, v16);
            ActionExtensions__Call(callAfterStop, 0LL);
          }
          if ( this->fields.isDestroy )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
          }
        }
        return;
      }
      goto LABEL_72;
    }
    if ( status != 4 )
    {
      if ( status != 3 )
        goto LABEL_72;
      if ( this->fields.endtime > this->fields.totaltime )
        return;
    }
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr);
LABEL_72:
    if ( !*p_requestAnimation )
      return;
  }
  v6 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    v8 = this->fields.simpleAnimationComponent;
    if ( !v8 )
      goto LABEL_82;
    if ( SimpleAnimation__CheckPlaying(v8, 0LL) )
      return;
  }
  else
  {
    v9 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    {
      v8 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v8 )
        goto LABEL_82;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v8, 0LL) )
        return;
    }
  }
  if ( System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      v8 = this->fields.simpleAnimationComponent;
      if ( v8 )
      {
        SimpleAnimation__Play_63844704(v8, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_56;
        v8 = this->fields.simpleAnimationComponent;
        if ( v8 )
        {
          SimpleAnimation__Sample(v8, 0LL);
LABEL_56:
          requestAnimation = this->fields.requestAnimation;
          this->fields.playAnimation = requestAnimation;
          v19 = &this->fields.playAnimation;
          goto LABEL_57;
        }
      }
    }
    else
    {
      v21 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
        goto LABEL_56;
      v8 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v8 )
      {
        UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v8, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_56;
        v8 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v8 )
        {
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v8, 0LL);
          goto LABEL_56;
        }
      }
    }
LABEL_82:
    sub_1B8880C(v8, v7);
  }
  this->fields.playAnimation = 0LL;
  v19 = &this->fields.playAnimation;
  LODWORD(requestAnimation) = 0;
LABEL_57:
  sub_1B88554((ServantStatusBattleListViewItem_o *)v19, (int32_t)requestAnimation, v10, v11);
  if ( this->fields.status == 6 )
  {
    particlelist = this->fields.particlelist;
    if ( particlelist )
    {
      v25 = *(_QWORD *)&particlelist->max_length;
      if ( (int)v25 >= 1 )
      {
        v26 = 0LL;
        do
        {
          if ( v26 >= (unsigned int)v25 )
            sub_1B88814(v8, v7);
          v27 = (UnityEngine_Object_o *)particlelist->m_Items[v26];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v8 = (SimpleAnimation_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
          if ( ((unsigned __int8)v8 & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_82;
            UnityEngine_ParticleSystem__Stop_69739868((UnityEngine_ParticleSystem_o *)v27, 0LL);
          }
          LODWORD(v25) = particlelist->max_length;
          ++v26;
        }
        while ( (__int64)v26 < (int)v25 );
      }
    }
    v28 = this->fields.totaltime;
    if ( v28 > this->fields.endtime )
      this->fields.endtime = v28;
  }
  *p_requestAnimation = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestAnimation, 0, v22, v23);
}


void __fastcall CommonEffectComponent__UpdateTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float touchStartTime; // s8
  CommonEffectComponent_c *v5; // x0
  CommonEffectComponent_c *v6; // x0

  if ( (byte_4A5C4C0 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectComponent_TypeInfo);
    byte_4A5C4C0 = 1;
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


void __fastcall CommonEffectComponent___OnRelease_b__77_0(CommonEffectComponent_o *this, const MethodInfo *method)
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


void __fastcall CommonEffectComponent__DelayFrameCoroutine_d__78___ctor(
        CommonEffectComponent__DelayFrameCoroutine_d__78_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CommonEffectComponent__DelayFrameCoroutine_d__78__MoveNext(
        CommonEffectComponent__DelayFrameCoroutine_d__78_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.action, 0LL);
  return 0;
}


Il2CppObject *__fastcall CommonEffectComponent__DelayFrameCoroutine_d__78__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CommonEffectComponent__DelayFrameCoroutine_d__78_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CommonEffectComponent__DelayFrameCoroutine_d__78__System_Collections_IEnumerator_Reset(
        CommonEffectComponent__DelayFrameCoroutine_d__78_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_CommonEffectComponent__DelayFrameCoroutine_d__78_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall CommonEffectComponent__DelayFrameCoroutine_d__78__System_Collections_IEnumerator_get_Current(
        CommonEffectComponent__DelayFrameCoroutine_d__78_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CommonEffectComponent__DelayFrameCoroutine_d__78__System_IDisposable_Dispose(
        CommonEffectComponent__DelayFrameCoroutine_d__78_o *this,
        const MethodInfo *method)
{
  ;
}