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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x19
  __int64 v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FD73B & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectComponent_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_23383/*"start"*/, v6);
    sub_1B640C8(&StringLiteral_18926/*"end"*/, v7);
    sub_1B640C8(&StringLiteral_23897/*"touch"*/, v8);
    sub_1B640C8(&StringLiteral_21131/*"loop"*/, v9);
    byte_49FD73B = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo,
                                                                   v1,
                                                                   v2);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v10,
    (const MethodInfo_3151E6C *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
  if ( !v10 )
    sub_1B64324(v11);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    3,
    (Il2CppObject *)StringLiteral_23383/*"start"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    4,
    (Il2CppObject *)StringLiteral_21131/*"loop"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    5,
    (Il2CppObject *)StringLiteral_23897/*"touch"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    6,
    (Il2CppObject *)StringLiteral_18926/*"end"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  CommonEffectComponent_TypeInfo->static_fields->ANIMATION_NAME_TABLE = (struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *)v10;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CommonEffectComponent_TypeInfo->static_fields,
    (int32_t)v10,
    v12,
    v13);
  CommonEffectComponent_TypeInfo->static_fields->DEFAULT_TOUCH_START_TIME = -1.0;
}


void __fastcall CommonEffectComponent___ctor(CommonEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent_c *v8; // x0

  if ( (byte_49FD73A & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectComponent_TypeInfo, method);
    byte_49FD73A = 1;
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
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FD72C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    byte_49FD72C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animationComponent, (int32_t)Component_object, v5, v6);
  v7 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationComponent, (int32_t)v7, v8, v9);
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
  int32_t v8; // w3

  if ( (byte_49FD735 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectComponent__DelayFrameCoroutine_d__75_TypeInfo, *(_QWORD *)&frame);
    byte_49FD735 = 1;
  }
  v6 = sub_1B64314(CommonEffectComponent__DelayFrameCoroutine_d__75_TypeInfo, *(_QWORD *)&frame, action);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 32) = frame;
  *(_QWORD *)(v6 + 40) = action;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)action, v7, v8);
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
void __fastcall CommonEffectComponent__ForceLoop_40309296(
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
  __int64 v17; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Animation_o *v23; // x20
  UnityEngine_TrackedReference_o *v24; // x20

  if ( (byte_49FD728 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_16483/*"_loop"*/, v7);
    byte_49FD728 = 1;
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
        v10 = this->fields.simpleAnimationComponent;
        if ( !v10 )
          goto LABEL_42;
        SimpleAnimation__Stop(v10, 0LL);
      }
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_41;
      v10 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v10 )
        goto LABEL_42;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v10, 0LL);
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
    v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      v13 = this->fields.simpleAnimationComponent;
      v10 = (SimpleAnimation_o *)System_String__Concat_61375396(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16483/*"_loop"*/,
                                   0LL);
      if ( v13 )
      {
        Item = SimpleAnimation__get_Item(v13, (System_String_o *)v10, 0LL);
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
                goto LABEL_26;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_26:
            p_method = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 18LL);
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
          goto LABEL_40;
        }
      }
    }
    else
    {
      v20 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
        goto LABEL_40;
      v23 = this->fields.animationComponent;
      v10 = (SimpleAnimation_o *)System_String__Concat_61375396(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16483/*"_loop"*/,
                                   0LL);
      if ( v23 )
      {
        v24 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v23, (System_String_o *)v10, 0LL);
        v10 = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v24, 0LL, 0LL);
        if ( ((unsigned __int8)v10 & 1) != 0 )
        {
          if ( !v24 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v24, 2, 0LL);
        }
        v10 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v10 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v10, 0LL);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playAnimation, 0, v21, v22);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1B64324(v10);
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
void __fastcall CommonEffectComponent__ForceStart_40308604(
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
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Animation_o *v23; // x20
  UnityEngine_TrackedReference_o *v24; // x20

  if ( (byte_49FD727 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_16483/*"_loop"*/, v8);
    byte_49FD727 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_1B6406C(
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
    v12 = (UnityEngine_Animation_o *)System_String__Concat_61375396(
                                       this->fields.baseName,
                                       (System_String_o *)StringLiteral_16483/*"_loop"*/,
                                       0LL);
    if ( v11 )
    {
      Item = SimpleAnimation__get_Item(v11, (System_String_o *)v12, 0LL);
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
              goto LABEL_15;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_15:
          p_method = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 18LL);
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
        goto LABEL_36;
      }
    }
    goto LABEL_37;
  }
  v20 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    goto LABEL_36;
  v23 = this->fields.animationComponent;
  v12 = (UnityEngine_Animation_o *)System_String__Concat_61375396(
                                     this->fields.baseName,
                                     (System_String_o *)StringLiteral_16483/*"_loop"*/,
                                     0LL);
  if ( !v23 )
    goto LABEL_37;
  v24 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v23, (System_String_o *)v12, 0LL);
  v12 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(v24, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_37;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v24, 2, 0LL);
  }
  v12 = this->fields.animationComponent;
  if ( !v12 )
LABEL_37:
    sub_1B64324(v12);
  UnityEngine_Animation__Stop(v12, 0LL);
LABEL_36:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playAnimation, 0, v21, v22);
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

  if ( (byte_49FD738 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectComponent_TypeInfo, *(_QWORD *)&status);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v6);
    byte_49FD738 = 1;
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
    p_method = sub_1BB60A8(
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
    sub_1B64324(v7);
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
    v18 = sub_1BB60A8(
            v14,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            2LL);
  }
  v20 = (System_String_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v18)(
                             v14,
                             (unsigned int)status,
                             *(_QWORD *)(v18 + 8));
  return System_String__Concat_61386656(baseName, (System_String_o *)StringLiteral_16054/*"_"*/, v20, 0LL);
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
  char v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x0
  char v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x23
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  char v22; // w2
  int32_t v23; // w3
  System_String_o **p_baseName; // x23
  struct System_String_o *v25; // x1
  System_String_o *v26; // x0
  char v27; // w2
  int32_t v28; // w3
  UnityEngine_Object_o *v29; // x22
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *transform; // x22
  int32_t layer; // w0
  const MethodInfo *v33; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v35; // x1
  UnityEngine_Object_o *v36; // x19

  if ( (byte_49FD724 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isSkip);
    sub_1B640C8(&StringLiteral_5785/*"Effect("*/, v7);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v8);
    sub_1B640C8(&StringLiteral_815/*")"*/, v9);
    sub_1B640C8(&StringLiteral_732/*"(Clone)"*/, v10);
    byte_49FD724 = 1;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectName, (int32_t)name, v14, v15);
    gameObject = (UnityEngine_Object_o *)*p_effectName;
    if ( !*p_effectName )
      goto LABEL_37;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_732/*"(Clone)"*/, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)*p_effectName;
      if ( !*p_effectName )
        goto LABEL_37;
      v16 = System_String__Substring_61394392((System_String_o *)gameObject, 0, gameObject->fields.m_CachedPtr - 7, 0LL);
      *p_effectName = v16;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectName, (int32_t)v16, v17, v18);
    }
  }
  if ( this->fields.useAnimNum >= 1 )
  {
    v19 = *p_effectName;
    v20 = System_Int32__ToString((int)this + 136, 0LL);
    v21 = System_String__Concat_61386656(v19, (System_String_o *)StringLiteral_16054/*"_"*/, v20, 0LL);
    *p_effectName = v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectName, (int32_t)v21, v22, v23);
  }
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    v25 = *p_effectName;
    *p_baseName = *p_effectName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseName, (int32_t)v25, isPause, (int32_t)method);
    gameObject = (UnityEngine_Object_o *)*p_baseName;
    if ( !*p_baseName )
      goto LABEL_37;
    gameObject = (UnityEngine_Object_o *)System_String__LastIndexOf((System_String_o *)gameObject, 0x2Fu, 0LL);
    if ( ((unsigned int)gameObject & 0x80000000) == 0 )
    {
      if ( !*p_baseName )
        goto LABEL_37;
      v26 = System_String__Substring(*p_baseName, (int)gameObject + 1, 0LL);
      *p_baseName = v26;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseName, (int32_t)v26, v27, v28);
    }
  }
  v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  gameObject = (UnityEngine_Object_o *)System_String__Concat_61386656(
                                         (System_String_o *)StringLiteral_5785/*"Effect("*/,
                                         this->fields.effectName,
                                         (System_String_o *)StringLiteral_815/*")"*/,
                                         0LL);
  if ( !v29 )
    goto LABEL_37;
  UnityEngine_Object__set_name(v29, (System_String_o *)gameObject, 0LL);
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
    sub_1B64324(gameObject);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  CommonEffectComponent__SetChildInit(this, transform, layer, v33);
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
    v35 = 3LL;
    goto LABEL_33;
  }
  if ( this->fields.loop )
  {
    klass = this->klass;
    v35 = 4LL;
LABEL_33:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))klass->vtable._5_NextPlayAnimation.method)(
      this,
      v35,
      klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  v36 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(v36, 0LL);
}


void __fastcall CommonEffectComponent__Init_40305532(
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectName, (int32_t)effectName, isSkip, isPause);
    CommonEffectComponent__Init(this, isSkip, isPause, v8);
  }
}


void __fastcall CommonEffectComponent__Init_40305604(
        CommonEffectComponent_o *this,
        AssetData_o *data,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  __int64 v9; // x0
  char v10; // w2
  char v11; // w3
  struct System_String_o *name; // x1
  const MethodInfo *v13; // x3

  if ( !this->fields.status )
  {
    this->fields.asset = data;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.asset, (int32_t)data, isSkip, isPause);
    if ( !data )
      sub_1B64324(v9);
    name = data->fields.name;
    this->fields.effectName = name;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectName, (int32_t)name, v10, v11);
    CommonEffectComponent__Init(this, isSkip, isPause, v13);
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
  __int64 States; // x0
  __int64 v17; // x8
  __int64 v18; // x21
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  UnityEngine_Object_o *animationComponent; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v30; // x8
  __int64 v31; // x9
  System_Collections_IEnumerator_c **v32; // x10
  __int64 v33; // x0
  UnityEngine_AnimationState_o *v34; // x0
  ServantStatusBattleListViewItem_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  __int64 v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x8
  __int64 v41; // x21
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x21
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x22
  __int64 v56; // x8
  __int64 v57; // x9
  SimpleAnimation_State_c **v58; // x10
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  SimpleAnimation_o *v64; // x20
  SimpleAnimation_State_o *v65; // x21
  ServantStatusBattleListViewItem_o *v66; // x0
  System_Action_o *v67; // x20
  SimpleAnimation_o *v68; // x20
  SimpleAnimation_State_o *v69; // x0
  SimpleAnimation_o *v70; // x20
  SimpleAnimation_State_c *v71; // x8
  __int64 v72; // x9
  SimpleAnimation_State_c **v73; // x10
  __int64 v74; // x0
  struct System_String_o *name; // x1
  UnityEngine_Animation_o *v76; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  ServantStatusBattleListViewItem_o *v78; // x0
  System_Action_o *v79; // x20
  UnityEngine_Animation_o *v80; // x20
  UnityEngine_Animation_o *v81; // x20

  v3 = next;
  if ( (byte_49FD726 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AnimationState_TypeInfo, *(_QWORD *)&next);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_16483/*"_loop"*/, v11);
    sub_1B640C8(&StringLiteral_16504/*"_start"*/, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    sub_1B640C8(&StringLiteral_16468/*"_end"*/, v14);
    byte_49FD726 = 1;
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
        p_callAfterStart = (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          p_callAfterStart->klass = 0LL;
          sub_1B6406C(p_callAfterStart, 0, v23, v24);
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
      sub_1B64324(States);
    }
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
    if ( !Enumerator )
      sub_1B64324(0LL);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v27;
          p_offset += 4;
          if ( !v27 )
            goto LABEL_24;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_24:
        p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v30 = Enumerator->klass;
      v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v32 = (System_Collections_IEnumerator_c **)&v30->_1.interfaceOffsets->offset;
        while ( *(v32 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v31;
          v32 += 2;
          if ( !v31 )
            goto LABEL_31;
        }
        v33 = (__int64)&v30->vtable[*(_DWORD *)v32 + 1].method;
      }
      else
      {
LABEL_31:
        v33 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v34 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v33)(
                                              Enumerator,
                                              *(_QWORD *)(v33 + 8));
      if ( !v34 )
        goto LABEL_135;
      if ( v34->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1B645E4(v34);
LABEL_135:
        sub_1B64324(v34);
      }
      UnityEngine_AnimationState__get_name(v34, 0LL);
    }
    v37 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
    if ( v37 )
    {
      v40 = *(_QWORD *)v37;
      v41 = v37;
      v42 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
        {
          --v42;
          v43 += 4;
          if ( !v42 )
            goto LABEL_46;
        }
        v44 = v40 + 16LL * *v43 + 312;
      }
      else
      {
LABEL_46:
        v44 = sub_1BB60A8(v37, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
    }
    switch ( v3 )
    {
      case 3:
        v76 = this->fields.animationComponent;
        States = (__int64)System_String__Concat_61375396(
                            this->fields.baseName,
                            (System_String_o *)StringLiteral_16504/*"_start"*/,
                            0LL);
        if ( !v76 )
          goto LABEL_136;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v76, (System_String_o *)States, 0LL);
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
    v78 = (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStart;
    v79 = this->fields.callAfterStart;
    if ( v79 )
    {
      v78->klass = 0LL;
      sub_1B6406C(v78, 0, v38, v39);
      ActionExtensions__Call(v79, 0LL);
    }
    if ( this->fields.loop )
    {
      v80 = this->fields.animationComponent;
      States = (__int64)System_String__Concat_61375396(
                          this->fields.baseName,
                          (System_String_o *)StringLiteral_16483/*"_loop"*/,
                          0LL);
      if ( !v80 )
        goto LABEL_136;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v80, (System_String_o *)States, 0LL);
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        v3 = 4;
        goto LABEL_126;
      }
    }
LABEL_124:
    v81 = this->fields.animationComponent;
    States = (__int64)System_String__Concat_61375396(this->fields.baseName, (System_String_o *)StringLiteral_16468/*"_end"*/, 0LL);
    if ( !v81 )
      goto LABEL_136;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v81, (System_String_o *)States, 0LL);
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
  v17 = *(_QWORD *)States;
  v18 = States;
  v19 = *(unsigned __int16 *)(*(_QWORD *)States + 302LL);
  if ( *(_WORD *)(*(_QWORD *)States + 302LL) )
  {
    v20 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)v20 - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_13;
    }
    v21 = v17 + 16LL * *v20 + 312;
  }
  else
  {
LABEL_13:
    v21 = sub_1BB60A8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
  if ( !v45 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v46 = *(_QWORD *)v45;
    v47 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_53;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_53:
      v49 = sub_1BB60A8(v45, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
      break;
    v50 = *(_QWORD *)v45;
    v51 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v52 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_60;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_60:
      v53 = sub_1BB60A8(v45, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v45, *(_QWORD *)(v53 + 8));
    v55 = v54;
    if ( !v54 )
      sub_1B64324(0LL);
    v56 = *(_QWORD *)v54;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
    {
      v58 = (SimpleAnimation_State_c **)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *(v58 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v57;
        v58 += 2;
        if ( !v57 )
          goto LABEL_67;
      }
      v59 = v56 + 16LL * (*(_DWORD *)v58 + 9) + 312;
    }
    else
    {
LABEL_67:
      v59 = sub_1BB60A8(v54, SimpleAnimation_State_TypeInfo, 9LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8));
  }
  v60 = *(_QWORD *)v45;
  v61 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
  {
    v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      --v61;
      v62 += 4;
      if ( !v61 )
        goto LABEL_74;
    }
    v63 = v60 + 16LL * *v62 + 312;
  }
  else
  {
LABEL_74:
    v63 = sub_1BB60A8(v45, System_IDisposable_TypeInfo, 0LL);
  }
  States = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v45, *(_QWORD *)(v63 + 8));
  if ( v3 == 3 )
  {
    v64 = this->fields.simpleAnimationComponent;
    States = (__int64)System_String__Concat_61375396(this->fields.baseName, (System_String_o *)StringLiteral_16504/*"_start"*/, 0LL);
    if ( !v64 )
      goto LABEL_136;
    v65 = SimpleAnimation__get_Item(v64, (System_String_o *)States, 0LL);
    if ( v65 )
      goto LABEL_87;
    States = (__int64)this->fields.simpleAnimationComponent;
    if ( !States )
      goto LABEL_136;
    v65 = SimpleAnimation__get_Item((SimpleAnimation_o *)States, this->fields.baseName, 0LL);
    if ( v65 )
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
    v66 = (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStart;
    v67 = this->fields.callAfterStart;
    if ( v67 )
    {
      v66->klass = 0LL;
      sub_1B6406C(v66, 0, v23, v24);
      ActionExtensions__Call(v67, 0LL);
    }
    if ( this->fields.loop )
    {
      v68 = this->fields.simpleAnimationComponent;
      States = (__int64)System_String__Concat_61375396(
                          this->fields.baseName,
                          (System_String_o *)StringLiteral_16483/*"_loop"*/,
                          0LL);
      if ( !v68 )
        goto LABEL_136;
      v69 = SimpleAnimation__get_Item(v68, (System_String_o *)States, 0LL);
      if ( v69 )
      {
        v65 = v69;
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
  v70 = this->fields.simpleAnimationComponent;
  States = (__int64)System_String__Concat_61375396(this->fields.baseName, (System_String_o *)StringLiteral_16468/*"_end"*/, 0LL);
  if ( !v70 )
    goto LABEL_136;
  States = (__int64)SimpleAnimation__get_Item(v70, (System_String_o *)States, 0LL);
  v65 = (SimpleAnimation_State_o *)States;
  v3 = 6;
  if ( !States )
    goto LABEL_101;
LABEL_96:
  v71 = v65->klass;
  v72 = *(unsigned __int16 *)(&v65->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v65->klass->_2.bitflags2 + 3) )
  {
    v73 = (SimpleAnimation_State_c **)&v71->_1.interfaceOffsets->offset;
    while ( *(v73 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v72;
      v73 += 2;
      if ( !v72 )
        goto LABEL_100;
    }
    v74 = (__int64)&v71->vtable[*(_DWORD *)v73 + 9].method;
  }
  else
  {
LABEL_100:
    v74 = sub_1BB60A8(v65, SimpleAnimation_State_TypeInfo, 9LL);
  }
  States = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v74)(v65, *(_QWORD *)(v74 + 8));
  name = (struct System_String_o *)States;
LABEL_104:
  if ( !this )
    goto LABEL_136;
LABEL_130:
  this->fields.requestAnimation = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestAnimation, (int32_t)name, v23, v24);
  this->fields.status = v3;
}


void __fastcall CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *asset; // x21
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD72E & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_49FD72E = 1;
  }
  asset = this->fields.asset;
  if ( asset )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37477464(asset, 0LL);
    this->fields.asset = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.asset, 0, v4, v5);
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

  if ( (byte_49FD734 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CommonEffectComponent__OnRelease_b__74_0__, v4);
    byte_49FD734 = 1;
  }
  *(_WORD *)&this->fields.isTouching = 256;
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CommonEffectComponent__OnRelease_b__74_0__, 0LL);
  v8 = CommonEffectComponent__DelayFrameCoroutine(v6, 1, v5, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
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
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FD737 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    byte_49FD737 = 1;
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
    || (v11 = this->fields.animationComponent,
        name = (UnityEngine_Animation_o *)UnityEngine_AnimationState__get_name(
                                            (UnityEngine_AnimationState_o *)Item,
                                            0LL),
        !v11) )
  {
LABEL_13:
    sub_1B64324(name);
  }
  UnityEngine_Animation__Play_68872828(v11, (System_String_o *)name, 0LL);
  v12 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
  this->fields.playAnimation = v12;
  p_playAnimation = &this->fields.playAnimation;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_playAnimation, (int32_t)v12, v14, v15);
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
  System_String_array *v5; // x19
  int max_length; // w20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_String_o *v9; // x1
  unsigned int v10; // w8
  SePlayer_o *v11; // x0
  SePlayer_o *v12; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_49FD72F & 1) == 0 )
  {
    sub_1B640C8(&Method_CommonEffectComponent_PlaySe__, name);
    byte_49FD72F = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name )
      goto LABEL_17;
    IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_17;
    v5 = IsNullOrEmpty;
    max_length = IsNullOrEmpty->max_length;
    v7 = Method_CommonEffectComponent_PlaySe__;
    if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySe__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B640E0(Method_CommonEffectComponent_PlaySe__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
    v10 = v5->max_length;
    if ( !v10 )
      goto LABEL_18;
    v9 = v5->m_Items[0];
    if ( max_length < 2 )
    {
      OverwriteAssetSoundName__PlaySe(v8, v9, 0LL);
      return;
    }
    if ( v10 <= 1 )
LABEL_18:
      sub_1B6432C(v8, v9);
    v11 = OverwriteAssetSoundName__PlaySe_38216620(v8, v9, v5->m_Items[1], 1.0, 0LL, 0LL);
    result = 0.0;
    if ( (int)v5->max_length >= 3 )
    {
      v12 = v11;
      IsNullOrEmpty = (System_String_array *)System_Single__TryParse(v5->m_Items[2], &result, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v12 )
        {
          SePlayer__set_Pitch(v12, result, 0LL);
          return;
        }
LABEL_17:
        sub_1B64324(IsNullOrEmpty);
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
  int m_CancellationTokenSource; // w8
  System_String_o *v6; // x19
  System_String_o *v7; // x20

  if ( (byte_49FD730 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1B640C8(&SoundManager_TypeInfo, name);
    byte_49FD730 = 1;
  }
  if ( !name || (this = (CommonEffectComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1B64324(this);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    sub_1B6432C(this, v4);
  v6 = *(System_String_o **)&this->fields.endtime;
  if ( m_CancellationTokenSource >= 2 )
  {
    v7 = *(System_String_o **)&this->fields.touchEffectTime;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playSeContinue_38384164(v6, v7, 0LL);
  }
  else
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playSeContinue(v6, 0LL);
  }
}


void __fastcall CommonEffectComponent__PlaySettedVoice(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *settedVoiceStr; // x1

  settedVoiceStr = this->fields.settedVoiceStr;
  if ( settedVoiceStr )
    CommonEffectComponent__PlayVoice_40312832(this, settedVoiceStr, this->fields.voiceCallback, v2);
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

  if ( (byte_49FD736 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v5);
    byte_49FD736 = 1;
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
      p_method = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v10 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v13,
                                 *(_QWORD *)(p_method + 8));
    if ( !v12 )
LABEL_25:
      sub_1B64324(v10);
    SimpleAnimation__Play_63513060(v12, (System_String_o *)v10, 0LL);
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
      v20 = sub_1BB60A8(v13, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v21 = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v20)(
                                      v13,
                                      *(_QWORD *)(v20 + 8));
    this->fields.playAnimation = v21;
    p_playAnimation = &this->fields.playAnimation;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_playAnimation, (int32_t)v21, v23, v24);
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

  CommonEffectComponent__PlayVoice_40312832(this, name, 0LL, v3);
}


void __fastcall CommonEffectComponent__PlayVoice_40312832(
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

  if ( (byte_49FD731 & 1) == 0 )
  {
    sub_1B640C8(&SoundManager_TypeInfo, name);
    byte_49FD731 = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name || (IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
      sub_1B64324(IsNullOrEmpty);
    v8 = *(_QWORD *)&IsNullOrEmpty->max_length;
    v9 = IsNullOrEmpty;
    if ( (int)v8 < 2 )
    {
      if ( (_DWORD)v8 )
      {
        v10 = IsNullOrEmpty->m_Items[0];
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playVoice_38386944(v10, callback, 0LL);
        return;
      }
LABEL_19:
      sub_1B6432C(IsNullOrEmpty, v7);
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
    SoundManager__playVoice_38387180(v14, v13, v12, callback, 0LL);
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
  if ( (byte_49FD733 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FD733 = 1;
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
            sub_1B6432C(this, method);
          v6 = (UnityEngine_Object_o *)particlelist->m_Items[v5];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (CommonEffectComponent_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v6 )
              sub_1B64324(this);
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
                UnityEngine_ParticleSystem__Simulate_69407716((UnityEngine_ParticleSystem_o *)v6, 1.0, 0LL);
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
  bool v5; // w21
  _BOOL4 isStart; // w8
  UnityEngine_Object_o *gameObject; // x19

  v5 = isSkip;
  if ( (byte_49FD725 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isSkip);
    byte_49FD725 = 1;
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
          UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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

  if ( (byte_49FD72A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FD72A = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v4 = this->fields.simpleAnimationComponent;
    if ( !v4 )
      sub_1B64324(0LL);
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
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Transform_o *v18; // x0
  const MethodInfo *v19; // x3
  __int64 methodPtr_low; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x19
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0

  v6 = this;
  if ( (byte_49FD72B & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, tf);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (CommonEffectComponent_o *)sub_1B640C8(&UnityEngine_Transform_TypeInfo, v8);
    byte_49FD72B = 1;
  }
  if ( !tf
    || (this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_1B64324(this);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_1B64324(0LL);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v14 = Enumerator->klass;
      v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
        while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 2;
          if ( !v15 )
            goto LABEL_19;
        }
        v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
      }
      else
      {
LABEL_19:
        v17 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v18 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                         Enumerator,
                                         *(_QWORD *)(v17 + 8));
      if ( v18 )
      {
        methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_1B645E4(v18);
          goto LABEL_35;
        }
      }
      CommonEffectComponent__SetChildInit(v6, v18, layer, v19);
    }
    v21 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
    if ( v21 )
    {
      v22 = *(_QWORD *)v21;
      v23 = v21;
      v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
      {
        v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_30;
        }
        v26 = v22 + 16LL * *v25 + 312;
      }
      else
      {
LABEL_30:
        v26 = sub_1BB60A8(v21, System_IDisposable_TypeInfo, 0LL);
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
  System_String_o *v4; // x19
  float v5; // s8

  if ( (byte_49FD732 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1B640C8(&SoundManager_TypeInfo, str);
    byte_49FD732 = 1;
  }
  if ( !str || (this = (CommonEffectComponent_o *)System_String__Split(str, 0x3Au, 0, 0LL)) == 0LL )
    sub_1B64324(this);
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
  sub_1B6406C(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.settedVoiceStr, (int32_t)voiceStr, (int32_t)method, v3);
  this->fields.voiceCallback = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceCallback, 0, v5, v6);
}


void __fastcall CommonEffectComponent__SetVoice_40313172(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3

  this->fields.settedVoiceStr = voiceStr;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.settedVoiceStr,
    (int32_t)voiceStr,
    (int32_t)callback,
    (int32_t)method);
  this->fields.voiceCallback = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceCallback, (int32_t)callback, v6, v7);
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
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_TrackedReference_o *v22; // x19

  if ( (byte_49FD729 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, force);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_16483/*"_loop"*/, v10);
    byte_49FD729 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0LL);
    return;
  }
  this->fields.callAfterStop = onStoppedCallback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStop,
    (int32_t)onStoppedCallback,
    isDestroy,
    (int32_t)onStoppedCallback);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_31:
      sub_1B64324(v12);
    }
    v12 = System_String__Concat_61375396(this->fields.baseName, (System_String_o *)StringLiteral_16483/*"_loop"*/, 0LL);
    if ( !v13 )
      goto LABEL_31;
    Item = SimpleAnimation__get_Item(v13, v12, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v18 = Item;
      v19 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v19;
          p_offset += 2;
          if ( !v19 )
            goto LABEL_23;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_23:
        p_method = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 18LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v18, 1LL, *(_QWORD *)(p_method + 8));
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
      v15 = this->fields.animationComponent;
      if ( force )
      {
        if ( !v15 )
          goto LABEL_31;
        UnityEngine_Animation__Stop(this->fields.animationComponent, 0LL);
      }
      else
      {
        v12 = System_String__Concat_61375396(this->fields.baseName, (System_String_o *)StringLiteral_16483/*"_loop"*/, 0LL);
        if ( !v15 )
          goto LABEL_31;
        v22 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v15, v12, 0LL);
        v12 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_31;
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
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  struct UnityEngine_ParticleSystem_array *particlelist; // x23
  __int64 v26; // x8
  unsigned __int64 v27; // x24
  UnityEngine_Object_o *v28; // x21
  float v29; // s0
  ServantStatusBattleListViewItem_o *p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FD72D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FD72D = 1;
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
    sub_1B6406C(p_playAnimation, 0, v15, v16);
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
            sub_1B6406C(p_callAfterStop, 0, v15, v16);
            ActionExtensions__Call(callAfterStop, 0LL);
          }
          if ( this->fields.isDestroy )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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
  v7 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
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
        SimpleAnimation__Play_63513060(v8, this->fields.requestAnimation, 0LL);
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
        UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v8, this->fields.requestAnimation, 0LL);
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
    sub_1B64324(v8);
  }
  this->fields.playAnimation = 0LL;
  v19 = &this->fields.playAnimation;
  LODWORD(requestAnimation) = 0;
LABEL_57:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v19, (int32_t)requestAnimation, v10, v11);
  if ( this->fields.status == 6 )
  {
    particlelist = this->fields.particlelist;
    if ( particlelist )
    {
      v26 = *(_QWORD *)&particlelist->max_length;
      if ( (int)v26 >= 1 )
      {
        v27 = 0LL;
        do
        {
          if ( v27 >= (unsigned int)v26 )
            sub_1B6432C(v8, v22);
          v28 = (UnityEngine_Object_o *)particlelist->m_Items[v27];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v8 = (SimpleAnimation_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
          if ( ((unsigned __int8)v8 & 1) != 0 )
          {
            if ( !v28 )
              goto LABEL_82;
            UnityEngine_ParticleSystem__Stop_69408224((UnityEngine_ParticleSystem_o *)v28, 0LL);
          }
          LODWORD(v26) = particlelist->max_length;
          ++v27;
        }
        while ( (__int64)v27 < (int)v26 );
      }
    }
    v29 = this->fields.totaltime;
    if ( v29 > this->fields.endtime )
      this->fields.endtime = v29;
  }
  *p_requestAnimation = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestAnimation, 0, v23, v24);
}


void __fastcall CommonEffectComponent__UpdateTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float touchStartTime; // s8
  CommonEffectComponent_c *v5; // x0
  CommonEffectComponent_c *v6; // x0

  if ( (byte_49FD739 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectComponent_TypeInfo, method);
    byte_49FD739 = 1;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_CommonEffectComponent__DelayFrameCoroutine_d__75_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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