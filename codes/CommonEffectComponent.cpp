void CommonEffectComponent___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971F1B & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
    sub_2213A60(&StringLiteral_24909/*"start"*/);
    sub_2213A60(&StringLiteral_19893/*"end"*/);
    sub_2213A60(&StringLiteral_25431/*"touch"*/);
    sub_2213A60(&StringLiteral_22432/*"loop"*/);
    sub_2213A60(&StringLiteral_25439/*"touched_loop"*/);
    byte_5971F1B = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3FBB9EC *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
  if ( !v1 )
    sub_2213CDC(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_24909/*"start"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22432/*"loop"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_25431/*"touch"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_25439/*"touched_loop"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_19893/*"end"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  CommonEffectComponent_TypeInfo->static_fields->ANIMATION_NAME_TABLE = (struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CommonEffectComponent_TypeInfo->static_fields,
    (int32_t)v1,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  CommonEffectComponent_TypeInfo->static_fields->DEFAULT_TOUCH_START_TIME = -1.0;
}


void CommonEffectComponent___ctor(CommonEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent_c *v8; // x0
  int v9; // w8

  if ( (byte_5971F1A & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    byte_5971F1A = 1;
  }
  __asm { FMOV            V0.2S, #5.0 }
  v8 = CommonEffectComponent_TypeInfo;
  this->fields.isDestroy = 1;
  v9 = *(&v8->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields.endtime = _D0;
  if ( !v9 )
  {
    j_il2cpp_runtime_class_init_0(v8, method);
    v8 = CommonEffectComponent_TypeInfo;
  }
  this->fields.touchStartTime = v8->static_fields->DEFAULT_TOUCH_START_TIME;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommonEffectComponent__Awake(CommonEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5971F04 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    byte_5971F04 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animationComponent,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimationComponent,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


System_Collections_IEnumerator_o *CommonEffectComponent__DelayFrameCoroutine(
        CommonEffectComponent_o *this,
        int32_t frame,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5971F12 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent__DelayFrameCoroutine_d__87_TypeInfo);
    byte_5971F12 = 1;
  }
  v6 = sub_2213CCC(CommonEffectComponent__DelayFrameCoroutine_d__87_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 32) = frame;
  *(_QWORD *)(v6 + 40) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)action, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void CommonEffectComponent__ForceLoop(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_ForceLoop.methodPtr)(
    this,
    0,
    this->klass->vtable._7_ForceLoop.method);
}


// local variable allocation has failed, the output may be wrong!
void CommonEffectComponent__ForceLoop_50741972(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t status; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v9; // x1
  SimpleAnimation_o *v10; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x1
  SimpleAnimation_o *v14; // x20
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v17; // x20
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v20; // x0
  UnityEngine_Object_o *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Animation_o *v28; // x20
  UnityEngine_TrackedReference_o *v29; // x20

  if ( (byte_5971EFF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_17237/*"_loop"*/);
    byte_5971EFF = 1;
  }
  status = this->fields.status;
  if ( !status )
  {
    CommonEffectComponent__Init(this, 0, 0, v3);
    if ( isOverWrite )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
      {
        v10 = this->fields.simpleAnimationComponent;
        if ( !v10 )
          goto LABEL_42;
        SimpleAnimation__Stop(v10, 0);
      }
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
        goto LABEL_41;
      v10 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v10 )
        goto LABEL_42;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v10, 0);
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
    v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOverWrite);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
    {
      v14 = this->fields.simpleAnimationComponent;
      v10 = (SimpleAnimation_o *)System_String__Concat_75651716(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_17237/*"_loop"*/,
                                   0);
      if ( v14 )
      {
        Item = SimpleAnimation__get_Item(v14, (System_String_o *)v10, 0);
        if ( Item )
        {
          klass = Item->klass;
          v17 = Item;
          v18 = *(unsigned __int16 *)&Item->klass->_2.rank;
          if ( *(_WORD *)&Item->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v18;
              p_offset += 2;
              if ( !v18 )
                goto LABEL_26;
            }
            v20 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
          }
          else
          {
LABEL_26:
            v20 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 18);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v20)(v17, 2, *(_QWORD *)(v20 + 8));
        }
        v10 = this->fields.simpleAnimationComponent;
        if ( v10 )
        {
          SimpleAnimation__Stop(v10, 0);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v21 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( !UnityEngine_Object__op_Inequality(v21, 0, 0) )
        goto LABEL_40;
      v28 = this->fields.animationComponent;
      v10 = (SimpleAnimation_o *)System_String__Concat_75651716(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_17237/*"_loop"*/,
                                   0);
      if ( v28 )
      {
        v29 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v28, (System_String_o *)v10, 0);
        v10 = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v29, 0, 0);
        if ( ((unsigned __int8)v10 & 1) != 0 )
        {
          if ( !v29 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v29, 2, 0);
        }
        v10 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v10 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v10, 0);
LABEL_40:
          this->fields.playAnimation = 0;
          this->fields.loop = 1;
          this->fields.totaltime = 0.0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playAnimation, 0, v22, v23, v24, v25, v26, v27);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_2213CDC(v10, v9);
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


void CommonEffectComponent__ForceStart_50741280(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v14; // x1
  SimpleAnimation_o *v15; // x20
  UnityEngine_Animation_o *v16; // x0
  __int64 v17; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v20; // x20
  __int64 v21; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v23; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  UnityEngine_Animation_o *v32; // x20
  UnityEngine_TrackedReference_o *v33; // x20

  if ( (byte_5971EFE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_17237/*"_loop"*/);
    byte_5971EFE = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callAfterStart,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.status )
  {
    if ( isOverWrite )
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
      {
        v16 = this->fields.animationComponent;
        if ( !v16 )
          goto LABEL_37;
        UnityEngine_Animation__Stop(v16, 0);
      }
    }
    CommonEffectComponent__Init(this, 0, 0, v12);
    return;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v15 = this->fields.simpleAnimationComponent;
    v16 = (UnityEngine_Animation_o *)System_String__Concat_75651716(
                                       this->fields.baseName,
                                       (System_String_o *)StringLiteral_17237/*"_loop"*/,
                                       0);
    if ( v15 )
    {
      Item = SimpleAnimation__get_Item(v15, (System_String_o *)v16, 0);
      if ( Item )
      {
        klass = Item->klass;
        v20 = Item;
        v21 = *(unsigned __int16 *)&Item->klass->_2.rank;
        if ( *(_WORD *)&Item->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v21;
            p_offset += 2;
            if ( !v21 )
              goto LABEL_15;
          }
          v23 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
        }
        else
        {
LABEL_15:
          v23 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 18);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v23)(v20, 2, *(_QWORD *)(v23 + 8));
      }
      v16 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v16 )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)v16, 0);
        goto LABEL_36;
      }
    }
    goto LABEL_37;
  }
  v25 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( !UnityEngine_Object__op_Inequality(v25, 0, 0) )
    goto LABEL_36;
  v32 = this->fields.animationComponent;
  v16 = (UnityEngine_Animation_o *)System_String__Concat_75651716(
                                     this->fields.baseName,
                                     (System_String_o *)StringLiteral_17237/*"_loop"*/,
                                     0);
  if ( !v32 )
    goto LABEL_37;
  v33 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v32, (System_String_o *)v16, 0);
  v16 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(v33, 0, 0);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    if ( !v33 )
      goto LABEL_37;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v33, 2, 0);
  }
  v16 = this->fields.animationComponent;
  if ( !v16 )
LABEL_37:
    sub_2213CDC(v16, v17);
  UnityEngine_Animation__Stop(v16, 0);
LABEL_36:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playAnimation, 0, v26, v27, v28, v29, v30, v31);
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


void CommonEffectComponent__ForceTouchedLoop(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t status; // w8
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v6; // x1
  SimpleAnimation_o *v7; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v12; // x20
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *animationComponent; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_Animation_o *v23; // x20
  UnityEngine_TrackedReference_o *v24; // x20

  if ( (byte_5971F00 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_17271/*"_touched_loop"*/);
    byte_5971F00 = 1;
  }
  status = this->fields.status;
  if ( !status )
  {
    CommonEffectComponent__Init(this, 0, 0, v2);
LABEL_31:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, const MethodInfo *))this->klass->vtable._5_NextPlayAnimation.methodPtr)(
      this,
      6,
      this->klass->vtable._5_NextPlayAnimation.method);
    return;
  }
  if ( status != 2 )
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
    {
      v7 = this->fields.simpleAnimationComponent;
      v8 = System_String__Concat_75651716(this->fields.baseName, (System_String_o *)StringLiteral_17271/*"_touched_loop"*/, 0);
      if ( v7 )
      {
        Item = SimpleAnimation__get_Item(v7, v8, 0);
        if ( Item )
        {
          klass = Item->klass;
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
                goto LABEL_16;
            }
            v15 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
          }
          else
          {
LABEL_16:
            v15 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 18);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v15)(v12, 2, *(_QWORD *)(v15 + 8));
        }
        v8 = (System_String_o *)this->fields.simpleAnimationComponent;
        if ( v8 )
        {
          SimpleAnimation__Stop((SimpleAnimation_o *)v8, 0);
          goto LABEL_30;
        }
      }
    }
    else
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
        goto LABEL_30;
      v23 = this->fields.animationComponent;
      v8 = System_String__Concat_75651716(this->fields.baseName, (System_String_o *)StringLiteral_17271/*"_touched_loop"*/, 0);
      if ( v23 )
      {
        v24 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v23, v8, 0);
        v8 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v24, 0, 0);
        if ( ((unsigned __int8)v8 & 1) != 0 )
        {
          if ( !v24 )
            goto LABEL_32;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v24, 2, 0);
        }
        v8 = (System_String_o *)this->fields.animationComponent;
        if ( v8 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v8, 0);
LABEL_30:
          this->fields.playAnimation = 0;
          this->fields.toucedLoop = 1;
          this->fields.totaltime = 0.0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playAnimation, 0, v17, v18, v19, v20, v21, v22);
          goto LABEL_31;
        }
      }
    }
LABEL_32:
    sub_2213CDC(v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5971F15 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_5971F15 = 1;
  }
  v5 = CommonEffectComponent_TypeInfo;
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, *(_QWORD *)&status);
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
    v10 = sub_224BC3C(
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
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, *(_QWORD *)&status);
    v5 = CommonEffectComponent_TypeInfo;
  }
  v12 = v5->static_fields->ANIMATION_NAME_TABLE;
  if ( !v12 )
LABEL_24:
    sub_2213CDC(v5, *(_QWORD *)&status);
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
    v16 = sub_224BC3C(
            v12,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            2);
  }
  v18 = (System_String_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v16)(
                             v12,
                             (unsigned int)status,
                             *(_QWORD *)(v16 + 8));
  return System_String__Concat_75694928(baseName, (System_String_o *)StringLiteral_16746/*"_"*/, v18, 0);
}


void CommonEffectComponent__GetAnimationStateInfo(
        CommonEffectComponent_o *this,
        System_String_o **name,
        float *time,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v11; // w1
  int32_t status; // w1
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  System_String_o *AnimationName; // x22
  UnityEngine_Object_o *animationComponent; // x23
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_Animation_o *v24; // x0
  UnityEngine_TrackedReference_o *Item; // x22
  System_String_o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *baseName; // x1

  if ( (byte_5971F16 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971F16 = 1;
  }
  v11 = (int)StringLiteral_1/*""*/;
  *name = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)name,
    v11,
    (System_String_o *)time,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  status = this->fields.status;
  *time = -1.0;
  AnimationName = CommonEffectComponent__GetAnimationName(this, status, v13);
  if ( AnimationName || (AnimationName = this->fields.baseName) != 0 )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
    {
      v24 = this->fields.animationComponent;
      if ( !v24 )
        goto LABEL_14;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v24, AnimationName, 0);
      v24 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
      if ( ((unsigned __int8)v24 & 1) != 0 )
      {
        if ( Item )
        {
          v26 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0);
          *name = v26;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)name, (int32_t)v26, v27, v28, v29, v30, v31, v32);
          *time = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)Item, 0);
          return;
        }
LABEL_14:
        sub_2213CDC(v24, v17);
      }
    }
    baseName = this->fields.baseName;
    *name = baseName;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)name, (int32_t)baseName, v18, v19, v20, v21, v22, v23);
  }
}


bool CommonEffectComponent__HasTouchedLoopAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *effectName; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v5; // x1
  int32_t IndexOf; // w0
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  __int64 v8; // x1
  SimpleAnimation_o *v9; // x19
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v12; // x19
  UnityEngine_TrackedReference_o *Item; // x0

  if ( (byte_5971F19 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17271/*"_touched_loop"*/);
    sub_2213A60(&StringLiteral_712/*"(Clone)"*/);
    byte_5971F19 = 1;
  }
  effectName = this->fields.effectName;
  if ( !effectName )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_21;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0);
    if ( !gameObject )
      goto LABEL_21;
    effectName = (struct System_String_o *)gameObject;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_712/*"(Clone)"*/, 0) )
    {
      gameObject = (UnityEngine_Object_o *)System_String__Substring_75702848(
                                             effectName,
                                             0,
                                             effectName->fields._stringLength - 7,
                                             0);
      effectName = (struct System_String_o *)gameObject;
      if ( !gameObject )
        goto LABEL_21;
    }
    IndexOf = System_String__LastIndexOf(effectName, 0x2Fu, 0);
    if ( (IndexOf & 0x80000000) == 0 )
      effectName = System_String__Substring(effectName, IndexOf + 1, 0);
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v9 = this->fields.simpleAnimationComponent;
    gameObject = (UnityEngine_Object_o *)System_String__Concat_75651716(
                                           effectName,
                                           (System_String_o *)StringLiteral_17271/*"_touched_loop"*/,
                                           0);
    if ( v9 )
      return SimpleAnimation__get_Item(v9, (System_String_o *)gameObject, 0) != 0;
LABEL_21:
    sub_2213CDC(gameObject, v5);
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
    return 0;
  v12 = this->fields.animationComponent;
  gameObject = (UnityEngine_Object_o *)System_String__Concat_75651716(
                                         effectName,
                                         (System_String_o *)StringLiteral_17271/*"_touched_loop"*/,
                                         0);
  if ( !v12 )
    goto LABEL_21;
  Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v12, (System_String_o *)gameObject, 0);
  return UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommonEffectComponent__Init(CommonEffectComponent_o *this, bool isSkip, bool isPause, const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_effectName; // x22
  UnityEngine_Object_o *gameObject; // x0
  __int64 v13; // x1
  System_String_o *name; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x23
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o **p_baseName; // x23
  struct System_String_o *v38; // x1
  System_String_o *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  UnityEngine_Object_o *v46; // x22
  __int64 v47; // x1
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *transform; // x22
  int32_t layer; // w0
  const MethodInfo *v51; // x3
  CommonEffectComponent_c *klass; // x8
  CommonEffectComponent_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x1
  UnityEngine_Object_o *v56; // x20

  if ( (byte_5971EFB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6099/*"Effect("*/);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    sub_2213A60(&StringLiteral_712/*"(Clone)"*/);
    byte_5971EFB = 1;
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectName,
      (int32_t)name,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    gameObject = (UnityEngine_Object_o *)*p_effectName;
    if ( !*p_effectName )
      goto LABEL_37;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_712/*"(Clone)"*/, 0) )
    {
      gameObject = (UnityEngine_Object_o *)*p_effectName;
      if ( !*p_effectName )
        goto LABEL_37;
      v21 = System_String__Substring_75702848(
              (System_String_o *)gameObject,
              0,
              LODWORD(gameObject->fields.m_CachedPtr) - 7,
              0);
      *p_effectName = v21;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.effectName,
        (int32_t)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
  }
  if ( this->fields.useAnimNum >= 1 )
  {
    v28 = *p_effectName;
    v29 = System_Int32__ToString((int)this + 136, 0);
    v30 = System_String__Concat_75694928(v28, (System_String_o *)StringLiteral_16746/*"_"*/, v29, 0);
    *p_effectName = v30;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectName,
      (int32_t)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    v38 = *p_effectName;
    *p_baseName = *p_effectName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseName,
      (int32_t)v38,
      (System_String_o *)isPause,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    gameObject = (UnityEngine_Object_o *)*p_baseName;
    if ( !*p_baseName )
      goto LABEL_37;
    gameObject = (UnityEngine_Object_o *)System_String__LastIndexOf((System_String_o *)gameObject, 0x2Fu, 0);
    if ( ((unsigned int)gameObject & 0x80000000) == 0 )
    {
      if ( !*p_baseName )
        goto LABEL_37;
      v39 = System_String__Substring(*p_baseName, (int)gameObject + 1, 0);
      *p_baseName = v39;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseName,
        (int32_t)v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
  }
  v46 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  gameObject = (UnityEngine_Object_o *)System_String__Concat_75694928(
                                         (System_String_o *)StringLiteral_6099/*"Effect("*/,
                                         this->fields.effectName,
                                         (System_String_o *)StringLiteral_789/*")"*/,
                                         0);
  if ( !v46 )
    goto LABEL_37;
  UnityEngine_Object__set_name(v46, (System_String_o *)gameObject, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_37;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
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
    sub_2213CDC(gameObject, v13);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0);
  CommonEffectComponent__SetChildInit(this, transform, layer, v51);
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
    v53 = this;
    v54 = 3;
    goto LABEL_33;
  }
  if ( this->fields.loop )
  {
    klass = this->klass;
    v53 = this;
    v54 = 4;
LABEL_33:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, const MethodInfo *))klass->vtable._5_NextPlayAnimation.methodPtr)(
      v53,
      v54,
      klass->vtable._5_NextPlayAnimation.method);
    return;
  }
  v56 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
  UnityEngine_Object__Destroy_83459800(v56, 0);
  ((void (__fastcall *)(CommonEffectComponent_o *, const MethodInfo *))this->klass->vtable._10_PlayDestroyEffectCallback.methodPtr)(
    this,
    this->klass->vtable._10_PlayDestroyEffectCallback.method);
}


// local variable allocation has failed, the output may be wrong!
void CommonEffectComponent__Init_50738128(
        CommonEffectComponent_o *this,
        System_String_o *effectName,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v11; // x3

  if ( !this->fields.status )
  {
    this->fields.effectName = effectName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectName,
      (int32_t)effectName,
      (System_String_o *)isSkip,
      (System_String_o *)isPause,
      (int32_t)method,
      v5,
      v6,
      v7);
    CommonEffectComponent__Init(this, isSkip, isPause, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void CommonEffectComponent__Init_50738192(
        CommonEffectComponent_o *this,
        AssetData_o *data,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_String_o *name; // x1
  const MethodInfo *v21; // x3

  if ( !this->fields.status )
  {
    this->fields.asset = data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.asset,
      (int32_t)data,
      (System_String_o *)isSkip,
      (System_String_o *)isPause,
      (int32_t)method,
      v5,
      v6,
      v7);
    if ( !data )
      sub_2213CDC(v12, v13);
    name = data->fields.name;
    this->fields.effectName = name;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectName,
      (int32_t)name,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    CommonEffectComponent__Init(this, isSkip, isPause, v21);
  }
}


bool CommonEffectComponent__IsTouchAnimating(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isTouching || this->fields.status == 5;
}


bool CommonEffectComponent__IsTouched(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isTouched;
}


// local variable allocation has failed, the output may be wrong!
void CommonEffectComponent__NextPlayAnimation(CommonEffectComponent_o *this, int32_t next, const MethodInfo *method)
{
  int v3; // w20
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  struct System_String_o *name; // x1
  __int64 States; // x0
  __int64 v8; // x8
  __int64 v9; // x21
  __int64 v10; // x9
  int *v11; // x10
  __int64 v12; // x0
  UnityEngine_Object_o *animationComponent; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 *Enumerator; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  System_Collections_IEnumerator_c **v28; // x10
  __int64 v29; // x0
  UnityEngine_AnimationState_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  MissionNaviTransitionBoardItem_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  __int64 v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x8
  __int64 v43; // x22
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x21
  __int64 v60; // x8
  __int64 v61; // x9
  SimpleAnimation_State_c **v62; // x10
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  MissionNaviTransitionBoardItem_o *v68; // x0
  System_Action_o *v69; // x20
  SimpleAnimation_o *v70; // x20
  SimpleAnimation_State_o *v71; // x0
  SimpleAnimation_State_o *v72; // x21
  SimpleAnimation_o *v73; // x20
  SimpleAnimation_o *v74; // x20
  SimpleAnimation_State_o *v75; // x0
  SimpleAnimation_o *v76; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v78; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v80; // x0
  UnityEngine_Animation_o *v81; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  MissionNaviTransitionBoardItem_o *v83; // x0
  System_Action_o *v84; // x20
  UnityEngine_Animation_o *v85; // x20
  UnityEngine_Animation_o *v86; // x20
  UnityEngine_Animation_o *v87; // x20
  __int64 *v88; // [xsp+20h] [xbp-50h]
  __int64 v89; // [xsp+28h] [xbp-48h]

  v3 = next;
  if ( (byte_5971EFD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AnimationState_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_17237/*"_loop"*/);
    sub_2213A60(&StringLiteral_17256/*"_start"*/);
    sub_2213A60(&StringLiteral_17271/*"_touched_loop"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_17220/*"_end"*/);
    byte_5971EFD = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
    {
      if ( v3 == 4 )
      {
        if ( this->fields.loop )
          v3 = 4;
        else
          v3 = 7;
      }
      else if ( v3 == 3 )
      {
        p_callAfterStart = (MissionNaviTransitionBoardItem_o *)&this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          p_callAfterStart->klass = 0;
          sub_2213A04(p_callAfterStart, 0, v14, v15, v16, v17, v18, v19);
          ActionExtensions__Call(callAfterStart, 0);
        }
        v3 = 3;
      }
      goto LABEL_144;
    }
    States = (__int64)this->fields.animationComponent;
    if ( !States
      || (UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)States, 0),
          (States = (__int64)this->fields.animationComponent) == 0) )
    {
LABEL_153:
      sub_2213CDC(States, name);
    }
    Enumerator = (__int64 *)UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
    v88 = Enumerator;
    while ( 1 )
    {
      if ( !v88 )
        sub_2213CDC(Enumerator, v21);
      v22 = *v88;
      v23 = *(unsigned __int16 *)(*v88 + 302);
      if ( *(_WORD *)(*v88 + 302) )
      {
        v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_25;
        }
        v25 = v22 + 16LL * *v24 + 312;
      }
      else
      {
LABEL_25:
        v25 = sub_224BC3C(v88, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64 *, _QWORD))v25)(v88, *(_QWORD *)(v25 + 8)) & 1) == 0 )
        break;
      v26 = *v88;
      v27 = *(unsigned __int16 *)(*v88 + 302);
      if ( *(_WORD *)(*v88 + 302) )
      {
        v28 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *(v28 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v27;
          v28 += 2;
          if ( !v27 )
            goto LABEL_32;
        }
        v29 = v26 + 16LL * (*(_DWORD *)v28 + 1) + 312;
      }
      else
      {
LABEL_32:
        v29 = sub_224BC3C(v88, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v30 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v29)(
                                              v88,
                                              *(_QWORD *)(v29 + 8));
      if ( !v30 )
        sub_2213CDC(0, v31);
      if ( v30->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_221405C(v30, UnityEngine_AnimationState_TypeInfo, v32);
        goto LABEL_153;
      }
      Enumerator = (__int64 *)UnityEngine_AnimationState__get_name(v30, 0);
    }
    v35 = sub_2213BB4(v88, System_IDisposable_TypeInfo);
    if ( v35 )
    {
      v42 = *(_QWORD *)v35;
      v43 = v35;
      v44 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
      {
        v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_47;
        }
        v46 = v42 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_47:
        v46 = sub_224BC3C(v35, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
    }
    if ( v3 > 5 )
    {
      if ( v3 == 6 )
      {
        if ( this->fields.toucedLoop )
        {
          v86 = this->fields.animationComponent;
          States = (__int64)System_String__Concat_75651716(
                              this->fields.baseName,
                              (System_String_o *)StringLiteral_17271/*"_touched_loop"*/,
                              0);
          if ( !v86 )
            goto LABEL_153;
          Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v86, (System_String_o *)States, 0);
          if ( !UnityEngine_TrackedReference__op_Equality(Item, 0, 0) )
          {
            v3 = 6;
            goto LABEL_141;
          }
        }
      }
      else if ( v3 != 7 )
      {
LABEL_122:
        States = UnityEngine_TrackedReference__op_Inequality(0, 0, 0);
        if ( (States & 1) != 0 || !this )
          goto LABEL_153;
LABEL_144:
        name = (struct System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_145;
      }
    }
    else
    {
      if ( v3 == 3 )
      {
        v81 = this->fields.animationComponent;
        States = (__int64)System_String__Concat_75651716(
                            this->fields.baseName,
                            (System_String_o *)StringLiteral_17256/*"_start"*/,
                            0);
        if ( !v81 )
          goto LABEL_153;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v81, (System_String_o *)States, 0);
        if ( UnityEngine_TrackedReference__op_Equality(Item, 0, 0) )
        {
          States = (__int64)this->fields.animationComponent;
          if ( !States )
            goto LABEL_153;
          Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                     (UnityEngine_Animation_o *)States,
                                                     this->fields.baseName,
                                                     0);
        }
        if ( !UnityEngine_TrackedReference__op_Equality(Item, 0, 0) )
        {
          this->fields.endtime = 0.0;
          v3 = 3;
          goto LABEL_141;
        }
      }
      else if ( v3 != 4 )
      {
        goto LABEL_122;
      }
      v83 = (MissionNaviTransitionBoardItem_o *)&this->fields.callAfterStart;
      v84 = this->fields.callAfterStart;
      if ( v84 )
      {
        v83->klass = 0;
        sub_2213A04(v83, 0, v36, v37, v38, v39, v40, v41);
        ActionExtensions__Call(v84, 0);
      }
      if ( this->fields.loop )
      {
        v85 = this->fields.animationComponent;
        States = (__int64)System_String__Concat_75651716(
                            this->fields.baseName,
                            (System_String_o *)StringLiteral_17237/*"_loop"*/,
                            0);
        if ( !v85 )
          goto LABEL_153;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v85, (System_String_o *)States, 0);
        if ( !UnityEngine_TrackedReference__op_Equality(Item, 0, 0) )
        {
          v3 = 4;
          goto LABEL_141;
        }
      }
    }
    v87 = this->fields.animationComponent;
    States = (__int64)System_String__Concat_75651716(this->fields.baseName, (System_String_o *)StringLiteral_17220/*"_end"*/, 0);
    if ( !v87 )
      goto LABEL_153;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v87, (System_String_o *)States, 0);
    v3 = 7;
LABEL_141:
    States = UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
    if ( (States & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_153;
      name = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0);
      goto LABEL_145;
    }
    goto LABEL_144;
  }
  States = (__int64)this->fields.simpleAnimationComponent;
  if ( !States )
    goto LABEL_153;
  SimpleAnimation__GetClipCount((SimpleAnimation_o *)States, 0);
  States = (__int64)this->fields.simpleAnimationComponent;
  if ( !States )
    goto LABEL_153;
  States = (__int64)SimpleAnimation__GetStates((SimpleAnimation_o *)States, 0);
  if ( !States )
    goto LABEL_153;
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
    v12 = sub_224BC3C(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
  }
  v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
  v89 = v47;
  while ( 1 )
  {
    if ( !v89 )
      sub_2213CDC(v47, v48);
    v49 = *(_QWORD *)v89;
    v50 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
    {
      v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_55;
      }
      v52 = v49 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_55:
      v52 = sub_224BC3C(v89, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v89, *(_QWORD *)(v52 + 8)) & 1) == 0 )
      break;
    v53 = *(_QWORD *)v89;
    v54 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
    {
      v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v55 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v54;
        v55 += 4;
        if ( !v54 )
          goto LABEL_62;
      }
      v56 = v53 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_62:
      v56 = sub_224BC3C(v89, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
    }
    v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v89, *(_QWORD *)(v56 + 8));
    v59 = v57;
    if ( !v57 )
      sub_2213CDC(0, v58);
    v60 = *(_QWORD *)v57;
    v61 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v62 = (SimpleAnimation_State_c **)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *(v62 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v61;
        v62 += 2;
        if ( !v61 )
          goto LABEL_69;
      }
      v63 = v60 + 16LL * (*(_DWORD *)v62 + 9) + 312;
    }
    else
    {
LABEL_69:
      v63 = sub_224BC3C(v57, SimpleAnimation_State_TypeInfo, 9);
    }
    v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8));
  }
  v64 = *(_QWORD *)v89;
  v65 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
  {
    v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_76;
    }
    v67 = v64 + 16LL * *v66 + 312;
  }
  else
  {
LABEL_76:
    v67 = sub_224BC3C(v89, System_IDisposable_TypeInfo, 0);
  }
  States = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v89, *(_QWORD *)(v67 + 8));
  if ( v3 > 5 )
  {
    if ( v3 == 6 )
    {
      if ( this->fields.toucedLoop )
      {
        v74 = this->fields.simpleAnimationComponent;
        States = (__int64)System_String__Concat_75651716(
                            this->fields.baseName,
                            (System_String_o *)StringLiteral_17271/*"_touched_loop"*/,
                            0);
        if ( !v74 )
          goto LABEL_153;
        v75 = SimpleAnimation__get_Item(v74, (System_String_o *)States, 0);
        if ( v75 )
        {
          v72 = v75;
          v3 = 6;
          goto LABEL_104;
        }
      }
    }
    else if ( v3 != 7 )
    {
      goto LABEL_109;
    }
    goto LABEL_102;
  }
  if ( v3 == 3 )
  {
    v73 = this->fields.simpleAnimationComponent;
    States = (__int64)System_String__Concat_75651716(this->fields.baseName, (System_String_o *)StringLiteral_17256/*"_start"*/, 0);
    if ( !v73 )
      goto LABEL_153;
    v72 = SimpleAnimation__get_Item(v73, (System_String_o *)States, 0);
    if ( v72 )
      goto LABEL_97;
    States = (__int64)this->fields.simpleAnimationComponent;
    if ( !States )
      goto LABEL_153;
    v72 = SimpleAnimation__get_Item((SimpleAnimation_o *)States, this->fields.baseName, 0);
    if ( v72 )
    {
LABEL_97:
      this->fields.endtime = 0.0;
      v3 = 3;
      goto LABEL_104;
    }
  }
  else if ( v3 != 4 )
  {
    goto LABEL_109;
  }
  v68 = (MissionNaviTransitionBoardItem_o *)&this->fields.callAfterStart;
  v69 = this->fields.callAfterStart;
  if ( v69 )
  {
    v68->klass = 0;
    sub_2213A04(v68, 0, v14, v15, v16, v17, v18, v19);
    ActionExtensions__Call(v69, 0);
  }
  if ( !this->fields.loop )
    goto LABEL_102;
  v70 = this->fields.simpleAnimationComponent;
  States = (__int64)System_String__Concat_75651716(this->fields.baseName, (System_String_o *)StringLiteral_17237/*"_loop"*/, 0);
  if ( !v70 )
    goto LABEL_153;
  v71 = SimpleAnimation__get_Item(v70, (System_String_o *)States, 0);
  if ( !v71 )
  {
LABEL_102:
    v76 = this->fields.simpleAnimationComponent;
    States = (__int64)System_String__Concat_75651716(this->fields.baseName, (System_String_o *)StringLiteral_17220/*"_end"*/, 0);
    if ( !v76 )
      goto LABEL_153;
    States = (__int64)SimpleAnimation__get_Item(v76, (System_String_o *)States, 0);
    v72 = (SimpleAnimation_State_o *)States;
    v3 = 7;
    if ( States )
      goto LABEL_104;
LABEL_109:
    name = (struct System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_112;
  }
  v72 = v71;
  v3 = 4;
LABEL_104:
  klass = v72->klass;
  v78 = *(unsigned __int16 *)&v72->klass->_2.rank;
  if ( *(_WORD *)&v72->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v78;
      p_offset += 2;
      if ( !v78 )
        goto LABEL_108;
    }
    v80 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9];
  }
  else
  {
LABEL_108:
    v80 = sub_224BC3C(v72, SimpleAnimation_State_TypeInfo, 9);
  }
  States = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v80)(v72, *(_QWORD *)(v80 + 8));
  name = (struct System_String_o *)States;
LABEL_112:
  if ( !this )
    goto LABEL_153;
LABEL_145:
  this->fields.requestAnimation = name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.requestAnimation,
    (int32_t)name,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.status = v3;
}


void CommonEffectComponent__NotifyEvent(
        CommonEffectComponent_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  if ( (byte_5971F07 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_string___);
    byte_5971F07 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.notifyEventCallback,
    (Il2CppObject *)eventName,
    (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_string___);
}


void CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *asset; // x21
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971F06 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_5971F06 = 1;
  }
  asset = this->fields.asset;
  if ( asset )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_47496972(asset, 0);
    this->fields.asset = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.asset, 0, v4, v5, v6, v7, v8, v9);
  }
  this->fields.status = 2;
}


void CommonEffectComponent__OnRelease(CommonEffectComponent_o *this, const MethodInfo *method)
{
  _BOOL4 isDelayTouchAnimation; // w8
  System_Action_o *v4; // x20
  CommonEffectComponent_o *v5; // x0
  const MethodInfo *v6; // x3
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_5971F11 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CommonEffectComponent__OnRelease_b__85_0__);
    byte_5971F11 = 1;
  }
  isDelayTouchAnimation = this->fields.isDelayTouchAnimation;
  *(_WORD *)&this->fields.isTouching = 256;
  if ( !isDelayTouchAnimation )
  {
    v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_CommonEffectComponent__OnRelease_b__85_0__, 0);
    v7 = CommonEffectComponent__DelayFrameCoroutine(v5, 1, v4, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v7, 0);
  }
}


void CommonEffectComponent__OnTouch(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t status; // w9

  status = this->fields.status;
  this->fields.isTouching = 1;
  if ( (unsigned int)(status - 5) >= 2 )
  {
    if ( !this->fields.isDelayTouchAnimation )
    {
      if ( !CommonEffectComponent__PlayAnimation(this, 5, v2) )
        return;
      this->fields.touchStartTime = this->fields.totaltime;
    }
    ActionExtensions__Call(this->fields.touchCallback, 0);
  }
}


bool CommonEffectComponent__PlayAnimation(CommonEffectComponent_o *this, int32_t next, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  return CommonEffectComponent__PlaySimpleAnimation(this, next, method)
      || CommonEffectComponent__PlayNormalAnimation(this, next, v5);
}


void CommonEffectComponent__PlayDelayedTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (unsigned int)(this->fields.status - 5) >= 2 && CommonEffectComponent__PlayAnimation(this, 5, v2) )
    this->fields.touchStartTime = this->fields.totaltime;
}


void CommonEffectComponent__PlayDestroyEffectCallback(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool CommonEffectComponent__PlayNormalAnimation(CommonEffectComponent_o *this, int32_t next, const MethodInfo *method)
{
  UnityEngine_Object_o *animationComponent; // x21
  const MethodInfo *v6; // x2
  System_String_o *AnimationName; // x21
  __int64 v8; // x1
  UnityEngine_Animation_o *name; // x0
  UnityEngine_TrackedReference_o *Item; // x21
  UnityEngine_Animation_o *v12; // x22
  struct System_String_o *v13; // x0
  struct System_String_o **p_playAnimation; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5971F14 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F14 = 1;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
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
    || (v12 = this->fields.animationComponent,
        name = (UnityEngine_Animation_o *)UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0),
        !v12) )
  {
LABEL_13:
    sub_2213CDC(name, v8);
  }
  UnityEngine_Animation__Play_83078544(v12, (System_String_o *)name, 0);
  v13 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0);
  this->fields.playAnimation = v13;
  p_playAnimation = &this->fields.playAnimation;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_playAnimation, (int32_t)v13, v15, v16, v17, v18, v19, v20);
  *((_DWORD *)p_playAnimation - 4) = next;
  return 1;
}


void CommonEffectComponent__PlaySe(CommonEffectComponent_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_array *IsNullOrEmpty; // x0
  __int64 v5; // x1
  System_String_array *v6; // x19
  int max_length; // w9
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  SePlayer_o *v10; // x0
  int v11; // w8
  SePlayer_o *v12; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5971F08 & 1) == 0 )
  {
    sub_2213A60(&Method_CommonEffectComponent_PlaySe__);
    byte_5971F08 = 1;
  }
  result = 0.0;
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( name )
    {
      IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0);
      if ( IsNullOrEmpty )
      {
        v6 = IsNullOrEmpty;
        max_length = IsNullOrEmpty->max_length;
        v8 = Method_CommonEffectComponent_PlaySe__;
        if ( max_length < 2 )
        {
          if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySe__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_2213A78(Method_CommonEffectComponent_PlaySe__);
          v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
          if ( LODWORD(v6->max_length) )
          {
            OverwriteAssetSoundName__PlaySe(v9, v6->m_Items[0], 0, 0);
            return;
          }
LABEL_20:
          sub_2213CE4(v9);
        }
        if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySe__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_2213A78(Method_CommonEffectComponent_PlaySe__);
        v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
        if ( LODWORD(v6->max_length) < 2 )
          goto LABEL_20;
        v10 = OverwriteAssetSoundName__PlaySe_48402488(v9, v6->m_Items[0], v6->m_Items[1], 1.0, 0, 0, 0);
        v11 = v6->max_length;
        result = 0.0;
        if ( v11 < 3 )
          return;
        v12 = v10;
        IsNullOrEmpty = (System_String_array *)System_Single__TryParse(v6->m_Items[2], &result, 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
          return;
        if ( v12 )
        {
          SePlayer__set_Pitch(v12, result, 0);
          return;
        }
      }
    }
    sub_2213CDC(IsNullOrEmpty, v5);
  }
}


void CommonEffectComponent__PlaySeContinue(
        CommonEffectComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v4; // x19
  int m_CancellationTokenSource; // w9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_5971F09 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_2213A60(&Method_CommonEffectComponent_PlaySeContinue__);
    byte_5971F09 = 1;
  }
  if ( !name || (this = (CommonEffectComponent_o *)System_String__Split(name, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeContinue__;
  if ( m_CancellationTokenSource < 2 )
  {
    if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeContinue__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_CommonEffectComponent_PlaySeContinue__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      OverwriteAssetSoundName__PlaySeContinue(v7, *(System_String_o **)&v4->fields.endtime, 0, 0);
      return;
    }
LABEL_15:
    sub_2213CE4(v7);
  }
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeContinue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_CommonEffectComponent_PlaySeContinue__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_15;
  OverwriteAssetSoundName__PlaySeContinue_48401388(
    v7,
    *(System_String_o **)&v4->fields.endtime,
    *(System_String_o **)&v4->fields.touchEffectTime,
    0,
    0);
}


void CommonEffectComponent__PlaySeContinueIgnorePreDelay(
        CommonEffectComponent_o *this,
        System_String_o *soundInfo,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v4; // x19
  int m_CancellationTokenSource; // w9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_5971F0B & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_2213A60(&Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__);
    byte_5971F0B = 1;
  }
  if ( !soundInfo || (this = (CommonEffectComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__;
  if ( m_CancellationTokenSource < 2 )
  {
    if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      OverwriteAssetSoundName__PlaySeContinue(v7, *(System_String_o **)&v4->fields.endtime, 1, 0);
      return;
    }
LABEL_15:
    sub_2213CE4(v7);
  }
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_15;
  OverwriteAssetSoundName__PlaySeContinue_48401388(
    v7,
    *(System_String_o **)&v4->fields.endtime,
    *(System_String_o **)&v4->fields.touchEffectTime,
    1,
    0);
}


void CommonEffectComponent__PlaySeIgnorePreDelay(
        CommonEffectComponent_o *this,
        System_String_o *soundInfo,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v4; // x19
  int m_CancellationTokenSource; // w9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_5971F0A & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_2213A60(&Method_CommonEffectComponent_PlaySeIgnorePreDelay__);
    byte_5971F0A = 1;
  }
  if ( !soundInfo || (this = (CommonEffectComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeIgnorePreDelay__;
  if ( m_CancellationTokenSource < 2 )
  {
    if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_CommonEffectComponent_PlaySeIgnorePreDelay__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      OverwriteAssetSoundName__PlaySe(v7, *(System_String_o **)&v4->fields.endtime, 1, 0);
      return;
    }
LABEL_15:
    sub_2213CE4(v7);
  }
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_CommonEffectComponent_PlaySeIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_15;
  OverwriteAssetSoundName__PlaySe_48402488(
    v7,
    *(System_String_o **)&v4->fields.endtime,
    *(System_String_o **)&v4->fields.touchEffectTime,
    1.0,
    0,
    1,
    0);
}


void CommonEffectComponent__PlaySettedVoice(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *settedVoiceStr; // x1

  settedVoiceStr = this->fields.settedVoiceStr;
  if ( settedVoiceStr )
    CommonEffectComponent__PlayVoice_50746712(this, settedVoiceStr, this->fields.voiceCallback, v2);
}


// local variable allocation has failed, the output may be wrong!
bool CommonEffectComponent__PlaySimpleAnimation(CommonEffectComponent_o *this, int32_t next, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v6; // x2
  System_String_o *AnimationName; // x21
  __int64 v8; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_o *v10; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v12; // x21
  SimpleAnimation_o *v13; // x22
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  SimpleAnimation_State_c *v17; // x8
  __int64 v18; // x9
  SimpleAnimation_State_c **v19; // x10
  __int64 v20; // x0
  struct System_String_o *v21; // x0
  struct System_String_o **p_playAnimation; // x20
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_5971F13 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_5971F13 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
  if ( UnityEngine_Object__op_Equality(simpleAnimationComponent, 0, 0)
    || (AnimationName = CommonEffectComponent__GetAnimationName(this, next, v6),
        System_String__IsNullOrEmpty(AnimationName, 0)) )
  {
    LOBYTE(Item) = 0;
  }
  else
  {
    v10 = this->fields.simpleAnimationComponent;
    if ( !v10 )
      goto LABEL_25;
    Item = SimpleAnimation__get_Item(v10, AnimationName, 0);
    if ( !Item )
      return (char)Item;
    klass = Item->klass;
    v12 = Item;
    v13 = this->fields.simpleAnimationComponent;
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
      v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9];
    }
    else
    {
LABEL_15:
      v16 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 9);
    }
    v10 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v16)(
                                 v12,
                                 *(_QWORD *)(v16 + 8));
    if ( !v13 )
LABEL_25:
      sub_2213CDC(v10, v8);
    SimpleAnimation__Play_78552168(v13, (System_String_o *)v10, 0);
    v17 = v12->klass;
    v18 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      v19 = (SimpleAnimation_State_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_22;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 9];
    }
    else
    {
LABEL_22:
      v20 = sub_224BC3C(v12, SimpleAnimation_State_TypeInfo, 9);
    }
    v21 = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v20)(
                                      v12,
                                      *(_QWORD *)(v20 + 8));
    this->fields.playAnimation = v21;
    p_playAnimation = &this->fields.playAnimation;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_playAnimation, (int32_t)v21, v23, v24, v25, v26, v27, v28);
    *((_DWORD *)p_playAnimation - 4) = next;
    LOBYTE(Item) = 1;
  }
  return (char)Item;
}


void CommonEffectComponent__PlayVoice(CommonEffectComponent_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CommonEffectComponent__PlayVoice_50746712(this, name, 0, v3);
}


void CommonEffectComponent__PlayVoice_50746712(
        CommonEffectComponent_o *this,
        System_String_o *name,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *IsNullOrEmpty; // x0
  __int64 v7; // x1
  il2cpp_array_size_t max_length; // x8
  System_String_array *v9; // x20
  System_String_o *v10; // x20
  float v11; // s8
  System_String_o *v12; // x20
  System_String_o *v13; // x21

  if ( (byte_5971F0C & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5971F0C = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name || (IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0)) == 0 )
      sub_2213CDC(IsNullOrEmpty, v7);
    max_length = IsNullOrEmpty->max_length;
    v9 = IsNullOrEmpty;
    if ( (int)max_length < 2 )
    {
      if ( (_DWORD)max_length )
      {
        v10 = IsNullOrEmpty->m_Items[0];
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7);
        SoundManager__playVoice_48511440(v10, callback, 0, 0);
        return;
      }
LABEL_19:
      sub_2213CE4(IsNullOrEmpty);
    }
    if ( (_DWORD)max_length == 2 )
    {
      v11 = 1.0;
    }
    else
    {
      v11 = System_Single__Parse(IsNullOrEmpty->m_Items[2], 0);
      max_length = v9->max_length;
    }
    if ( (unsigned int)max_length < 2 )
      goto LABEL_19;
    v13 = v9->m_Items[0];
    v12 = v9->m_Items[1];
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7);
    SoundManager__playVoice_48511684(v13, v12, v11, callback, 0, 0);
  }
}


void CommonEffectComponent__ResetPrewarmParticleList(CommonEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent_o *v2; // x19
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_5971F0F & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F0F = 1;
  }
  particlelist = v2->fields.particlelist;
  m_ParticleSystem = 0;
  if ( particlelist )
  {
    max_length = particlelist->max_length;
    if ( (int)max_length >= 1 )
    {
      v5 = 0;
      do
      {
        if ( v5 >= (unsigned int)max_length )
          sub_2213CE4(this);
        v6 = (UnityEngine_Object_o *)particlelist->m_Items[v5];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        this = (CommonEffectComponent_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v6 )
            sub_2213CDC(this, method);
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v6, 0).fields.m_ParticleSystem;
          this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem_MainModule__get_prewarm(
                                              (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
                                              0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem__get_isPlaying(
                                                (UnityEngine_ParticleSystem_o *)v6,
                                                0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              UnityEngine_ParticleSystem__Simulate_83836784((UnityEngine_ParticleSystem_o *)v6, 1.0, 0);
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


void CommonEffectComponent__Resume(CommonEffectComponent_o *this, bool isSkip, const MethodInfo *method)
{
  bool v5; // w21
  _BOOL4 isStart; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20

  v5 = isSkip;
  if ( (byte_5971EFC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971EFC = 1;
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
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
          UnityEngine_Object__Destroy_83459800(gameObject, 0);
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
  __int64 v4; // x1
  SimpleAnimation_o *v5; // x0

  if ( (byte_5971F02 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F02 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_2213CDC(0, v4);
    SimpleAnimation__Rewind(v5, 0);
  }
}


void CommonEffectComponent__SetChildInit(
        CommonEffectComponent_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v6; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  __int64 naturalAligment; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  System_Collections_IEnumerator_o *v27; // [xsp+28h] [xbp-38h]

  v6 = this;
  if ( (byte_5971F03 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    this = (CommonEffectComponent_o *)sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_5971F03 = 1;
  }
  if ( !tf )
    goto LABEL_37;
  this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0);
  if ( !this )
    goto LABEL_37;
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0) == layer )
    return;
  this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0);
  if ( !this )
LABEL_37:
    sub_2213CDC(this, tf);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  v27 = Enumerator;
  while ( 1 )
  {
    if ( !v27 )
      goto LABEL_36;
    klass = v27->klass;
    v10 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_13;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v12 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(v27, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = v27->klass;
    v14 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_20;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_20:
      v16 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       v27,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_221405C(v17, UnityEngine_Transform_TypeInfo, v18);
LABEL_36:
        sub_2213CDC(Enumerator, v8);
      }
    }
    CommonEffectComponent__SetChildInit(v6, v17, layer, v19);
  }
  v21 = sub_2213BB4(v27, System_IDisposable_TypeInfo);
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
          goto LABEL_31;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_31:
      v26 = sub_224BC3C(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}


void CommonEffectComponent__SetDelayTouchAnimation(
        CommonEffectComponent_o *this,
        bool isDelay,
        const MethodInfo *method)
{
  this->fields.isDelayTouchAnimation = isDelay;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.notifyEventCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.notifyEventCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommonEffectComponent__SetParam(CommonEffectComponent_o *this, Il2CppObject *param, const MethodInfo *method)
{
  ;
}


void CommonEffectComponent__SetSePitch(CommonEffectComponent_o *this, System_String_o *str, const MethodInfo *method)
{
  System_String_o *v4; // x19
  __int64 v5; // x1
  float v6; // s8

  if ( (byte_5971F0E & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_2213A60(&SoundManager_TypeInfo);
    byte_5971F0E = 1;
  }
  if ( !str || (this = (CommonEffectComponent_o *)System_String__Split(str, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, str);
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
  {
    v4 = *(System_String_o **)&this->fields.endtime;
    v6 = System_Single__Parse(*(System_String_o **)&this->fields.touchEffectTime, 0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v5);
    SoundManager__setPitchSe(v4, v6, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.touchCallback = inputTouchCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.touchCallback,
    (int32_t)inputTouchCallback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommonEffectComponent__SetTouchedState(CommonEffectComponent_o *this, bool enable, const MethodInfo *method)
{
  this->fields.isTouched = enable;
}


void CommonEffectComponent__SetUseAnimNum(
        CommonEffectComponent_o *this,
        int32_t num,
        bool isUpdateName,
        const MethodInfo *method)
{
  System_String_o *effectName; // x21
  System_String_o *v8; // x0
  struct System_String_o *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5971F0D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_5971F0D = 1;
  }
  this->fields.useAnimNum = num;
  if ( isUpdateName )
  {
    if ( this->fields.baseName )
    {
      effectName = this->fields.effectName;
      v8 = System_Int32__ToString((int)this + 136, 0);
      v9 = System_String__Concat_75694928(effectName, (System_String_o *)StringLiteral_16746/*"_"*/, v8, 0);
      this->fields.baseName = v9;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseName, (int32_t)v9, v10, v11, v12, v13, v14, v15);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  this->fields.settedVoiceStr = voiceStr;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.settedVoiceStr,
    (int32_t)voiceStr,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.voiceCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voiceCallback, 0, v9, v10, v11, v12, v13, v14);
}


void CommonEffectComponent__SetVoice_50747060(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  this->fields.settedVoiceStr = voiceStr;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.settedVoiceStr,
    (int32_t)voiceStr,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.voiceCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceCallback,
    (int32_t)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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


// local variable allocation has failed, the output may be wrong!
void CommonEffectComponent__StopInternal(
        CommonEffectComponent_o *this,
        bool force,
        bool isDestroy,
        System_Action_o *onStoppedCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *v14; // x0
  __int64 v15; // x1
  SimpleAnimation_o *v16; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v18; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v21; // x19
  __int64 v22; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v24; // x0
  UnityEngine_TrackedReference_o *v25; // x19

  if ( (byte_5971F01 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_17237/*"_loop"*/);
    byte_5971F01 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0);
    return;
  }
  this->fields.callAfterStop = onStoppedCallback;
  *(_WORD *)&this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callAfterStop,
    (int32_t)onStoppedCallback,
    (System_String_o *)isDestroy,
    (System_String_o *)onStoppedCallback,
    (int32_t)method,
    v5,
    v6,
    v7);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  v14 = (System_String_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    v16 = this->fields.simpleAnimationComponent;
    if ( force )
    {
      if ( v16 )
      {
        SimpleAnimation__Stop(this->fields.simpleAnimationComponent, 0);
        return;
      }
LABEL_31:
      sub_2213CDC(v14, v15);
    }
    v14 = System_String__Concat_75651716(this->fields.baseName, (System_String_o *)StringLiteral_17237/*"_loop"*/, 0);
    if ( !v16 )
      goto LABEL_31;
    Item = SimpleAnimation__get_Item(v16, v14, 0);
    if ( Item )
    {
      klass = Item->klass;
      v21 = Item;
      v22 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v22;
          p_offset += 2;
          if ( !v22 )
            goto LABEL_23;
        }
        v24 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
      }
      else
      {
LABEL_23:
        v24 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 18);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v24)(v21, 1, *(_QWORD *)(v24 + 8));
    }
  }
  else
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    v14 = (System_String_o *)UnityEngine_Object__op_Inequality(animationComponent, 0, 0);
    if ( ((unsigned __int8)v14 & 1) != 0 )
    {
      v18 = this->fields.animationComponent;
      if ( force )
      {
        if ( !v18 )
          goto LABEL_31;
        UnityEngine_Animation__Stop(this->fields.animationComponent, 0);
      }
      else
      {
        v14 = System_String__Concat_75651716(this->fields.baseName, (System_String_o *)StringLiteral_17237/*"_loop"*/, 0);
        if ( !v18 )
          goto LABEL_31;
        v25 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v18, v14, 0);
        v14 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v25, 0, 0);
        if ( ((unsigned __int8)v14 & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_31;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v25, 1, 0);
        }
      }
    }
  }
}


bool CommonEffectComponent__StopOrLoopEnd(CommonEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v4; // x1
  SimpleAnimation_o *v5; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  SimpleAnimation_o *v8; // x20
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Animation_o *v10; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v12; // x20
  bool v13; // w20
  VirtualInvokeData *p__8_Stop; // x8
  const MethodInfo **p_method; // x9

  if ( (byte_5971F18 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17237/*"_loop"*/);
    byte_5971F18 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
      goto LABEL_19;
    v10 = this->fields.animationComponent;
    v6 = System_String__Concat_75651716(this->fields.baseName, (System_String_o *)StringLiteral_17237/*"_loop"*/, 0);
    if ( v10 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v10, v6, 0);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0, 0) )
        goto LABEL_19;
      v12 = this->fields.animationComponent;
      v6 = System_String__Concat_75651716(this->fields.baseName, (System_String_o *)StringLiteral_17237/*"_loop"*/, 0);
      if ( v12 )
      {
        if ( !UnityEngine_Animation__IsPlaying(v12, v6, 0) )
          goto LABEL_19;
LABEL_18:
        v13 = 1;
        p__8_Stop = &this->klass->vtable._8_Stop;
        p_method = &this->klass->vtable._8_Stop.method;
        goto LABEL_22;
      }
    }
LABEL_25:
    sub_2213CDC(v6, v7);
  }
  v5 = this->fields.simpleAnimationComponent;
  v6 = System_String__Concat_75651716(this->fields.baseName, (System_String_o *)StringLiteral_17237/*"_loop"*/, 0);
  if ( !v5 )
    goto LABEL_25;
  if ( !SimpleAnimation__get_Item(v5, v6, 0) )
    goto LABEL_19;
  v8 = this->fields.simpleAnimationComponent;
  v6 = System_String__Concat_75651716(this->fields.baseName, (System_String_o *)StringLiteral_17237/*"_loop"*/, 0);
  if ( !v8 )
    goto LABEL_25;
  if ( SimpleAnimation__IsPlaying(v8, v6, 0) )
    goto LABEL_18;
LABEL_19:
  if ( this->fields.status != 4 || !this->fields.loop )
    return 0;
  v13 = 0;
  p__8_Stop = &this->klass->vtable._9_ForceStop;
  p_method = &this->klass->vtable._9_ForceStop.method;
LABEL_22:
  ((void (__fastcall *)(CommonEffectComponent_o *, __int64, _QWORD, const MethodInfo *))p__8_Stop->methodPtr)(
    this,
    1,
    0,
    *p_method);
  return v13;
}


void CommonEffectComponent__SyncParticleList(CommonEffectComponent_o *this, float syncTime, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x21
  UnityEngine_Object_o *v10; // x19

  if ( (byte_5971F10 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F10 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.particlelist, 0);
  if ( !IsNullOrEmpty )
  {
    particlelist = this->fields.particlelist;
    if ( !particlelist )
LABEL_17:
      sub_2213CDC(IsNullOrEmpty, v6);
    max_length = particlelist->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      do
      {
        if ( v9 >= (unsigned int)max_length )
          sub_2213CE4(IsNullOrEmpty);
        v10 = (UnityEngine_Object_o *)particlelist->m_Items[v9];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        IsNullOrEmpty = UnityEngine_Object__op_Equality(v10, 0, 0);
        if ( !IsNullOrEmpty )
        {
          if ( !v10 )
            goto LABEL_17;
          IsNullOrEmpty = UnityEngine_ParticleSystem__get_isPlaying((UnityEngine_ParticleSystem_o *)v10, 0);
          if ( IsNullOrEmpty )
          {
            UnityEngine_ParticleSystem__Simulate_83836784((UnityEngine_ParticleSystem_o *)v10, syncTime, 0);
            UnityEngine_ParticleSystem__Play_83836996((UnityEngine_ParticleSystem_o *)v10, 0);
          }
        }
        LODWORD(max_length) = particlelist->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)max_length );
    }
  }
}


void CommonEffectComponent__Update(CommonEffectComponent_o *this, const MethodInfo *method)
{
  float totaltime; // s8
  const MethodInfo *v4; // x1
  float DeltaTimeInActive; // s0
  __int64 status; // x1
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *v8; // x21
  __int64 v9; // x1
  SimpleAnimation_o *v10; // x0
  UnityEngine_Object_o *v11; // x21
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_Object_o *v19; // x21
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  MissionNaviTransitionBoardItem_o *p_playAnimation; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Object_o *animationComponent; // x21
  struct System_String_o *requestAnimation; // x1
  struct System_String_o **v30; // x0
  MissionNaviTransitionBoardItem_o *p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  __int64 v33; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v35; // x21
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct UnityEngine_ParticleSystem_array *particlelist; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v44; // x24
  UnityEngine_Object_o *v45; // x21
  float v46; // s0

  if ( (byte_5971F05 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971F05 = 1;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, status);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0)
      && (p_playAnimation = (MissionNaviTransitionBoardItem_o *)&this->fields.playAnimation, this->fields.playAnimation) )
    {
      v10 = this->fields.simpleAnimationComponent;
      if ( !v10 )
        goto LABEL_89;
      if ( SimpleAnimation__CheckPlaying(v10, 0) )
        return;
    }
    else
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
        goto LABEL_44;
      p_playAnimation = (MissionNaviTransitionBoardItem_o *)&this->fields.playAnimation;
      if ( !this->fields.playAnimation )
        goto LABEL_44;
      v10 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v10 )
        goto LABEL_89;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v10, 0) )
        return;
    }
    status = (unsigned int)this->fields.status;
    if ( (_DWORD)status != 7 )
      goto LABEL_45;
    p_playAnimation->klass = 0;
    sub_2213A04(p_playAnimation, 0, v22, v23, v24, v25, v26, v27);
LABEL_44:
    status = (unsigned int)this->fields.status;
LABEL_45:
    if ( (int)status > 5 )
    {
      if ( (_DWORD)status != 6 )
      {
        if ( (_DWORD)status == 7 && !this->fields.isEndless )
        {
          if ( (float)(this->fields.endtime + this->fields.losttime) < this->fields.totaltime )
          {
            p_callAfterStop = (MissionNaviTransitionBoardItem_o *)&this->fields.callAfterStop;
            callAfterStop = this->fields.callAfterStop;
            if ( callAfterStop )
            {
              p_callAfterStop->klass = 0;
              sub_2213A04(p_callAfterStop, 0, v22, v23, v24, v25, v26, v27);
              ActionExtensions__Call(callAfterStop, 0);
            }
            if ( this->fields.isDestroy )
            {
              gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
              UnityEngine_Object__Destroy_83459800(gameObject, 0);
              ((void (__fastcall *)(CommonEffectComponent_o *, const MethodInfo *))this->klass->vtable._10_PlayDestroyEffectCallback.methodPtr)(
                this,
                this->klass->vtable._10_PlayDestroyEffectCallback.method);
            }
          }
          return;
        }
        goto LABEL_86;
      }
    }
    else if ( (_DWORD)status == 3 )
    {
      if ( this->fields.endtime > this->fields.totaltime )
        return;
      status = 4;
    }
    else if ( (_DWORD)status != 4 )
    {
LABEL_86:
      if ( !*p_requestAnimation )
        return;
      goto LABEL_9;
    }
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, const MethodInfo *))this->klass->vtable._5_NextPlayAnimation.methodPtr)(
      this,
      status,
      this->klass->vtable._5_NextPlayAnimation.method);
    goto LABEL_86;
  }
LABEL_9:
  v8 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, status);
  if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
  {
    v10 = this->fields.simpleAnimationComponent;
    if ( !v10 )
      goto LABEL_89;
    if ( SimpleAnimation__CheckPlaying(v10, 0) )
      return;
  }
  else
  {
    v11 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
    {
      v10 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v10 )
        goto LABEL_89;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v10, 0) )
        return;
    }
  }
  if ( System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    v19 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
    {
      v10 = this->fields.simpleAnimationComponent;
      if ( v10 )
      {
        SimpleAnimation__Play_78552168(v10, this->fields.requestAnimation, 0);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_68;
        v10 = this->fields.simpleAnimationComponent;
        if ( v10 )
        {
          SimpleAnimation__Sample(v10, 0);
LABEL_68:
          requestAnimation = this->fields.requestAnimation;
          this->fields.playAnimation = requestAnimation;
          v30 = &this->fields.playAnimation;
          goto LABEL_69;
        }
      }
    }
    else
    {
      v35 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( !UnityEngine_Object__op_Inequality(v35, 0, 0) )
        goto LABEL_68;
      v10 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v10 )
      {
        UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v10, this->fields.requestAnimation, 0);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_68;
        v10 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v10 )
        {
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v10, 0);
          goto LABEL_68;
        }
      }
    }
LABEL_89:
    sub_2213CDC(v10, v9);
  }
  LODWORD(requestAnimation) = 0;
  this->fields.playAnimation = 0;
  v30 = &this->fields.playAnimation;
LABEL_69:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v30, (int32_t)requestAnimation, v13, v14, v15, v16, v17, v18);
  if ( this->fields.status == 7 )
  {
    particlelist = this->fields.particlelist;
    if ( particlelist )
    {
      max_length = particlelist->max_length;
      if ( (int)max_length >= 1 )
      {
        v44 = 0;
        do
        {
          if ( v44 >= (unsigned int)max_length )
            sub_2213CE4(v10);
          v45 = (UnityEngine_Object_o *)particlelist->m_Items[v44];
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
          v10 = (SimpleAnimation_o *)UnityEngine_Object__op_Inequality(v45, 0, 0);
          if ( ((unsigned __int8)v10 & 1) != 0 )
          {
            if ( !v45 )
              goto LABEL_89;
            UnityEngine_ParticleSystem__Stop_83837444((UnityEngine_ParticleSystem_o *)v45, 0);
          }
          LODWORD(max_length) = particlelist->max_length;
          ++v44;
        }
        while ( (__int64)v44 < (int)max_length );
      }
    }
    v46 = this->fields.totaltime;
    if ( v46 > this->fields.endtime )
      this->fields.endtime = v46;
  }
  *p_requestAnimation = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.requestAnimation, 0, v36, v37, v38, v39, v40, v41);
}


void CommonEffectComponent__UpdateTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float touchStartTime; // s8
  CommonEffectComponent_c *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  CommonEffectComponent_c *v8; // x0

  if ( (byte_5971F17 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    byte_5971F17 = 1;
  }
  if ( this->fields.status == 5 )
  {
    touchStartTime = this->fields.touchStartTime;
    v5 = CommonEffectComponent_TypeInfo;
    if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
      v5 = CommonEffectComponent_TypeInfo;
    }
    if ( touchStartTime > v5->static_fields->DEFAULT_TOUCH_START_TIME
      && !this->fields.isTouching
      && this->fields.touchEffectTime < (float)(this->fields.totaltime - this->fields.touchStartTime)
      && (CommonEffectComponent__PlayAnimation(this, 6, v2) || CommonEffectComponent__PlayAnimation(this, 4, v7)) )
    {
      v8 = CommonEffectComponent_TypeInfo;
      if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, v6);
        v8 = CommonEffectComponent_TypeInfo;
      }
      this->fields.touchStartTime = v8->static_fields->DEFAULT_TOUCH_START_TIME;
    }
  }
}


void CommonEffectComponent___OnRelease_b__85_0(CommonEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isTouched = 0;
}


System_String_o *CommonEffectComponent__get_EffectName(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.effectName;
}


bool CommonEffectComponent__get_IsEndStatus(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.status == 7;
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


void CommonEffectComponent__DelayFrameCoroutine_d__87___ctor(
        CommonEffectComponent__DelayFrameCoroutine_d__87_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CommonEffectComponent__DelayFrameCoroutine_d__87__MoveNext(
        CommonEffectComponent__DelayFrameCoroutine_d__87_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  int32_t currentFrame_5__2; // w8
  Il2CppObject **p__2__current; // x19

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
    this->fields._currentFrame_5__2 = 0;
    this->fields.__1__state = -1;
  }
  if ( _1__state < this->fields.frame )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)p__2__current - 2) = 1;
    return 1;
  }
  ActionExtensions__Call(this->fields.action, 0);
  return 0;
}


Il2CppObject *CommonEffectComponent__DelayFrameCoroutine_d__87__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CommonEffectComponent__DelayFrameCoroutine_d__87_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CommonEffectComponent__DelayFrameCoroutine_d__87__System_Collections_IEnumerator_Reset(
        CommonEffectComponent__DelayFrameCoroutine_d__87_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_CommonEffectComponent__DelayFrameCoroutine_d__87_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *CommonEffectComponent__DelayFrameCoroutine_d__87__System_Collections_IEnumerator_get_Current(
        CommonEffectComponent__DelayFrameCoroutine_d__87_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CommonEffectComponent__DelayFrameCoroutine_d__87__System_IDisposable_Dispose(
        CommonEffectComponent__DelayFrameCoroutine_d__87_o *this,
        const MethodInfo *method)
{
  ;
}