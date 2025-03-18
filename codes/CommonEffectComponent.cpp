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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C233BE & 1) == 0 )
  {
    sub_1C3B764(&CommonEffectComponent_TypeInfo, v1);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__, v2);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo, v4);
    sub_1C3B764(&StringLiteral_23973/*"updateNp"*/, v5);
    sub_1C3B764(&StringLiteral_19369/*"gd"*/, v6);
    sub_1C3B764(&StringLiteral_24496/*"xn--"*/, v7);
    sub_1C3B764(&StringLiteral_21638/*"mstWarBoardStageReinforcements"*/, v8);
    byte_4C233BE = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v9,
    (const MethodInfo_332498C *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
  if ( !v9 )
    sub_1C3B9C0(v10, v11);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v9,
    3,
    (Il2CppObject *)StringLiteral_23973/*"updateNp"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v9,
    4,
    (Il2CppObject *)StringLiteral_21638/*"mstWarBoardStageReinforcements"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v9,
    5,
    (Il2CppObject *)StringLiteral_24496/*"xn--"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v9,
    6,
    (Il2CppObject *)StringLiteral_19369/*"gd"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  CommonEffectComponent_TypeInfo->static_fields->ANIMATION_NAME_TABLE = (struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *)v9;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)CommonEffectComponent_TypeInfo->static_fields,
    (int64_t)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  CommonEffectComponent_TypeInfo->static_fields->DEFAULT_TOUCH_START_TIME = -1.0;
}


void __fastcall CommonEffectComponent___ctor(CommonEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent_c *v8; // x0

  if ( (byte_4C233BD & 1) == 0 )
  {
    sub_1C3B764(&CommonEffectComponent_TypeInfo, method);
    byte_4C233BD = 1;
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  Il2CppObject *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C233A9 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    byte_4C233A9 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.animationComponent,
    (int64_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v11;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimationComponent,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall CommonEffectComponent__DelayFrameCoroutine(
        CommonEffectComponent_o *this,
        int32_t frame,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4C233B6 & 1) == 0 )
  {
    sub_1C3B764(&CommonEffectComponent__DelayFrameCoroutine_d__80_TypeInfo, *(_QWORD *)&frame);
    byte_4C233B6 = 1;
  }
  v6 = sub_1C3B9B0(CommonEffectComponent__DelayFrameCoroutine_d__80_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 32) = frame;
  *(_QWORD *)(v6 + 40) = action;
  sub_1C3B708((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)action, v7, v8, v9, v10, v11, v12);
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
void __fastcall CommonEffectComponent__ForceLoop_42133576(
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_Animation_o *v28; // x20
  UnityEngine_TrackedReference_o *v29; // x20

  if ( (byte_4C233A5 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_1C3B764(&SimpleAnimation_State_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_16872/*"bit_dedicate_reward_"*/, v7);
    byte_4C233A5 = 1;
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
      v11 = (SimpleAnimation_o *)System_String__Concat_63368612(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16872/*"bit_dedicate_reward_"*/,
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
            p_method = sub_1C8D744(Item, SimpleAnimation_State_TypeInfo, 18LL);
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
      v28 = this->fields.animationComponent;
      v11 = (SimpleAnimation_o *)System_String__Concat_63368612(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16872/*"bit_dedicate_reward_"*/,
                                   0LL);
      if ( v28 )
      {
        v29 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v28, (System_String_o *)v11, 0LL);
        v11 = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v29, 0LL, 0LL);
        if ( ((unsigned __int8)v11 & 1) != 0 )
        {
          if ( !v29 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v29, 2, 0LL);
        }
        v11 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v11 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v11, 0LL);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0LL;
          sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.playAnimation, 0LL, v22, v23, v24, v25, v26, v27);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1C3B9C0(v11, v10);
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
void __fastcall CommonEffectComponent__ForceStart_42132884(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v15; // x20
  UnityEngine_Animation_o *v16; // x0
  __int64 v17; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v20; // x20
  __int64 v21; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_Animation_o *v32; // x20
  UnityEngine_TrackedReference_o *v33; // x20

  if ( (byte_4C233A4 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_1C3B764(&SimpleAnimation_State_TypeInfo, v11);
    sub_1C3B764(&StringLiteral_16872/*"bit_dedicate_reward_"*/, v12);
    byte_4C233A4 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callAfterStart,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.status )
  {
    if ( isOverWrite )
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
        v16 = this->fields.animationComponent;
        if ( !v16 )
          goto LABEL_37;
        UnityEngine_Animation__Stop(v16, 0LL);
      }
    }
    CommonEffectComponent__Init(this, 0, 0, v13);
    return;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v15 = this->fields.simpleAnimationComponent;
    v16 = (UnityEngine_Animation_o *)System_String__Concat_63368612(
                                       this->fields.baseName,
                                       (System_String_o *)StringLiteral_16872/*"bit_dedicate_reward_"*/,
                                       0LL);
    if ( v15 )
    {
      Item = SimpleAnimation__get_Item(v15, (System_String_o *)v16, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v20 = Item;
        v21 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v21;
            p_offset += 2;
            if ( !v21 )
              goto LABEL_15;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_15:
          p_method = sub_1C8D744(Item, SimpleAnimation_State_TypeInfo, 18LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
          v20,
          2LL,
          *(_QWORD *)(p_method + 8));
      }
      v16 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v16 )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)v16, 0LL);
        goto LABEL_36;
      }
    }
    goto LABEL_37;
  }
  v25 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
    goto LABEL_36;
  v32 = this->fields.animationComponent;
  v16 = (UnityEngine_Animation_o *)System_String__Concat_63368612(
                                     this->fields.baseName,
                                     (System_String_o *)StringLiteral_16872/*"bit_dedicate_reward_"*/,
                                     0LL);
  if ( !v32 )
    goto LABEL_37;
  v33 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v32, (System_String_o *)v16, 0LL);
  v16 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(v33, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    if ( !v33 )
      goto LABEL_37;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v33, 2, 0LL);
  }
  v16 = this->fields.animationComponent;
  if ( !v16 )
LABEL_37:
    sub_1C3B9C0(v16, v17);
  UnityEngine_Animation__Stop(v16, 0LL);
LABEL_36:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.playAnimation, 0LL, v26, v27, v28, v29, v30, v31);
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

  if ( (byte_4C233B9 & 1) == 0 )
  {
    sub_1C3B764(&CommonEffectComponent_TypeInfo, *(_QWORD *)&status);
    sub_1C3B764(&System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo, v5);
    sub_1C3B764(&StringLiteral_16438/*"animationId"*/, v6);
    byte_4C233B9 = 1;
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
    p_method = sub_1C8D744(
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
    sub_1C3B9C0(v7, *(_QWORD *)&status);
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
    v18 = sub_1C8D744(
            v14,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            2LL);
  }
  v20 = (System_String_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v18)(
                             v14,
                             (unsigned int)status,
                             *(_QWORD *)(v18 + 8));
  return System_String__Concat_63379872(baseName, (System_String_o *)StringLiteral_16438/*"animationId"*/, v20, 0LL);
}


void __fastcall CommonEffectComponent__GetAnimationStateInfo(
        CommonEffectComponent_o *this,
        System_String_o **name,
        float *time,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_String_o *AnimationName; // x22
  UnityEngine_Object_o *animationComponent; // x23
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_Animation_o *v22; // x0
  UnityEngine_TrackedReference_o *Item; // x22
  System_String_o *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_String_o *baseName; // x1

  if ( (byte_4C233BA & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, name);
    sub_1C3B764(&StringLiteral_1/*""*/, v11);
    byte_4C233BA = 1;
  }
  *name = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)name,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)time,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  *time = -1.0;
  AnimationName = CommonEffectComponent__GetAnimationName(this, this->fields.status, v12);
  if ( AnimationName || (AnimationName = this->fields.baseName) != 0LL )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
    {
      v22 = this->fields.animationComponent;
      if ( !v22 )
        goto LABEL_14;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v22, AnimationName, 0LL);
      v22 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
      if ( ((unsigned __int8)v22 & 1) != 0 )
      {
        if ( Item )
        {
          v24 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
          *name = v24;
          sub_1C3B708((PartyOrganizationUtility_o *)name, (int64_t)v24, v25, v26, v27, v28, v29, v30);
          *time = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)Item, 0LL);
          return;
        }
LABEL_14:
        sub_1C3B9C0(v22, v15);
      }
    }
    baseName = this->fields.baseName;
    *name = baseName;
    sub_1C3B708((PartyOrganizationUtility_o *)name, (int64_t)baseName, v16, v17, v18, v19, v20, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__Init(
        CommonEffectComponent_o *this,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_String_o **p_effectName; // x22
  UnityEngine_Object_o *gameObject; // x0
  __int64 v17; // x1
  System_String_o *name; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_String_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_String_o *v32; // x23
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_String_o **p_baseName; // x23
  int64_t v42; // x1
  System_String_o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UnityEngine_Object_o *v50; // x22
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *transform; // x22
  int32_t layer; // w0
  const MethodInfo *v54; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v56; // x1
  UnityEngine_Object_o *v57; // x20

  if ( (byte_4C233A1 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isSkip);
    sub_1C3B764(&StringLiteral_5959/*"EnterTryFault"*/, v11);
    sub_1C3B764(&StringLiteral_16438/*"animationId"*/, v12);
    sub_1C3B764(&StringLiteral_791/*")|("*/, v13);
    sub_1C3B764(&StringLiteral_708/*"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;"*/, v14);
    byte_4C233A1 = 1;
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
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.effectName, (int64_t)name, v19, v20, v21, v22, v23, v24);
    gameObject = (UnityEngine_Object_o *)*p_effectName;
    if ( !*p_effectName )
      goto LABEL_37;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_708/*"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;"*/, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)*p_effectName;
      if ( !*p_effectName )
        goto LABEL_37;
      v25 = System_String__Substring_63387616((System_String_o *)gameObject, 0, gameObject->fields.m_CachedPtr - 7, 0LL);
      *p_effectName = v25;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.effectName, (int64_t)v25, v26, v27, v28, v29, v30, v31);
    }
  }
  if ( this->fields.useAnimNum >= 1 )
  {
    v32 = *p_effectName;
    v33 = System_Int32__ToString((int)this + 136, 0LL);
    v34 = System_String__Concat_63379872(v32, (System_String_o *)StringLiteral_16438/*"animationId"*/, v33, 0LL);
    *p_effectName = v34;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.effectName, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  }
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    v42 = (int64_t)*p_effectName;
    *p_baseName = *p_effectName;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.baseName, v42, isPause, (int32_t)method, v4, v5, v6, v7);
    gameObject = (UnityEngine_Object_o *)*p_baseName;
    if ( !*p_baseName )
      goto LABEL_37;
    gameObject = (UnityEngine_Object_o *)System_String__LastIndexOf((System_String_o *)gameObject, 0x2Fu, 0LL);
    if ( ((unsigned int)gameObject & 0x80000000) == 0 )
    {
      if ( !*p_baseName )
        goto LABEL_37;
      v43 = System_String__Substring(*p_baseName, (int)gameObject + 1, 0LL);
      *p_baseName = v43;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.baseName, (int64_t)v43, v44, v45, v46, v47, v48, v49);
    }
  }
  v50 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  gameObject = (UnityEngine_Object_o *)System_String__Concat_63379872(
                                         (System_String_o *)StringLiteral_5959/*"EnterTryFault"*/,
                                         this->fields.effectName,
                                         (System_String_o *)StringLiteral_791/*")|("*/,
                                         0LL);
  if ( !v50 )
    goto LABEL_37;
  UnityEngine_Object__set_name(v50, (System_String_o *)gameObject, 0LL);
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
    sub_1C3B9C0(gameObject, v17);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  CommonEffectComponent__SetChildInit(this, transform, layer, v54);
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
    v56 = 3LL;
    goto LABEL_33;
  }
  if ( this->fields.loop )
  {
    klass = this->klass;
    v56 = 4LL;
LABEL_33:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))klass->vtable._5_NextPlayAnimation.method)(
      this,
      v56,
      klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  v57 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71122748(v57, 0LL);
  ((void (__fastcall *)(CommonEffectComponent_o *, void *))this->klass->vtable._10_PlayDestroyEffectCallback.method)(
    this,
    this->klass[1]._1.image);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__Init_42129796(
        CommonEffectComponent_o *this,
        System_String_o *effectName,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v11; // x3

  if ( !this->fields.status )
  {
    this->fields.effectName = effectName;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.effectName,
      (int64_t)effectName,
      isSkip,
      isPause,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    CommonEffectComponent__Init(this, isSkip, isPause, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__Init_42129868(
        CommonEffectComponent_o *this,
        AssetData_o *data,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  char v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_String_o *name; // x1
  const MethodInfo *v21; // x3

  if ( !this->fields.status )
  {
    this->fields.asset = data;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.asset,
      (int64_t)data,
      isSkip,
      isPause,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    if ( !data )
      sub_1C3B9C0(v12, v13);
    name = data->fields.name;
    this->fields.effectName = name;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.effectName, (int64_t)name, v14, v15, v16, v17, v18, v19);
    CommonEffectComponent__Init(this, isSkip, isPause, v21);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v36; // x8
  __int64 v37; // x9
  System_Collections_IEnumerator_c **v38; // x10
  __int64 v39; // x0
  UnityEngine_AnimationState_o *v40; // x0
  __int64 v41; // x1
  PartyOrganizationUtility_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  __int64 v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x8
  __int64 v52; // x21
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x21
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x22
  __int64 v69; // x8
  __int64 v70; // x9
  SimpleAnimation_State_c **v71; // x10
  __int64 v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  SimpleAnimation_o *v77; // x20
  SimpleAnimation_State_o *v78; // x21
  PartyOrganizationUtility_o *v79; // x0
  System_Action_o *v80; // x20
  SimpleAnimation_o *v81; // x20
  SimpleAnimation_State_o *v82; // x0
  SimpleAnimation_o *v83; // x20
  SimpleAnimation_State_c *v84; // x8
  __int64 v85; // x9
  SimpleAnimation_State_c **v86; // x10
  __int64 v87; // x0
  UnityEngine_Animation_o *v88; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  PartyOrganizationUtility_o *v90; // x0
  System_Action_o *v91; // x20
  UnityEngine_Animation_o *v92; // x20
  UnityEngine_Animation_o *v93; // x20

  v3 = next;
  if ( (byte_4C233A3 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_AnimationState_TypeInfo, *(_QWORD *)&next);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&SimpleAnimation_State_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_16872/*"bit_dedicate_reward_"*/, v11);
    sub_1C3B764(&StringLiteral_16894/*"bit_incoming_start"*/, v12);
    sub_1C3B764(&StringLiteral_1/*""*/, v13);
    sub_1C3B764(&StringLiteral_16857/*"bit_buddy_result"*/, v14);
    byte_4C233A3 = 1;
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
        p_callAfterStart = (PartyOrganizationUtility_o *)&this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          p_callAfterStart->klass = 0LL;
          sub_1C3B708(p_callAfterStart, 0LL, v24, v25, v26, v27, v28, v29);
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
      sub_1C3B9C0(States, name);
    }
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
    if ( !Enumerator )
      sub_1C3B9C0(0LL, v30);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v33;
          p_offset += 4;
          if ( !v33 )
            goto LABEL_24;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_24:
        p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v36 = Enumerator->klass;
      v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v38 = (System_Collections_IEnumerator_c **)&v36->_1.interfaceOffsets->offset;
        while ( *(v38 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v37;
          v38 += 2;
          if ( !v37 )
            goto LABEL_31;
        }
        v39 = (__int64)&v36->vtable[*(_DWORD *)v38 + 1].method;
      }
      else
      {
LABEL_31:
        v39 = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v40 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v39)(
                                              Enumerator,
                                              *(_QWORD *)(v39 + 8));
      if ( !v40 )
        goto LABEL_135;
      if ( v40->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1C3BC80(v40);
LABEL_135:
        sub_1C3B9C0(v40, v41);
      }
      UnityEngine_AnimationState__get_name(v40, 0LL);
    }
    v44 = sub_1C3B8A0(Enumerator, System_IDisposable_TypeInfo);
    if ( v44 )
    {
      v51 = *(_QWORD *)v44;
      v52 = v44;
      v53 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
      {
        v54 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_46;
        }
        v55 = v51 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_46:
        v55 = sub_1C8D744(v44, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v55)(v52, *(_QWORD *)(v55 + 8));
    }
    switch ( v3 )
    {
      case 3:
        v88 = this->fields.animationComponent;
        States = (__int64)System_String__Concat_63368612(
                            this->fields.baseName,
                            (System_String_o *)StringLiteral_16894/*"bit_incoming_start"*/,
                            0LL);
        if ( !v88 )
          goto LABEL_136;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v88, (System_String_o *)States, 0LL);
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
    v90 = (PartyOrganizationUtility_o *)&this->fields.callAfterStart;
    v91 = this->fields.callAfterStart;
    if ( v91 )
    {
      v90->klass = 0LL;
      sub_1C3B708(v90, 0LL, v45, v46, v47, v48, v49, v50);
      ActionExtensions__Call(v91, 0LL);
    }
    if ( this->fields.loop )
    {
      v92 = this->fields.animationComponent;
      States = (__int64)System_String__Concat_63368612(
                          this->fields.baseName,
                          (System_String_o *)StringLiteral_16872/*"bit_dedicate_reward_"*/,
                          0LL);
      if ( !v92 )
        goto LABEL_136;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v92, (System_String_o *)States, 0LL);
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        v3 = 4;
        goto LABEL_126;
      }
    }
LABEL_124:
    v93 = this->fields.animationComponent;
    States = (__int64)System_String__Concat_63368612(this->fields.baseName, (System_String_o *)StringLiteral_16857/*"bit_buddy_result"*/, 0LL);
    if ( !v93 )
      goto LABEL_136;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v93, (System_String_o *)States, 0LL);
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
    v22 = sub_1C8D744(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  if ( !v57 )
    sub_1C3B9C0(0LL, v56);
  while ( 1 )
  {
    v58 = *(_QWORD *)v57;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_53;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_53:
      v61 = sub_1C8D744(v57, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8)) & 1) == 0 )
      break;
    v62 = *(_QWORD *)v57;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v64 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_60;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_60:
      v65 = sub_1C8D744(v57, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v66 = (*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v57, *(_QWORD *)(v65 + 8));
    v68 = v66;
    if ( !v66 )
      sub_1C3B9C0(0LL, v67);
    v69 = *(_QWORD *)v66;
    v70 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
    {
      v71 = (SimpleAnimation_State_c **)(*(_QWORD *)(v69 + 176) + 8LL);
      while ( *(v71 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v70;
        v71 += 2;
        if ( !v70 )
          goto LABEL_67;
      }
      v72 = v69 + 16LL * (*(_DWORD *)v71 + 9) + 312;
    }
    else
    {
LABEL_67:
      v72 = sub_1C8D744(v66, SimpleAnimation_State_TypeInfo, 9LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8));
  }
  v73 = *(_QWORD *)v57;
  v74 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
  {
    v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      --v74;
      v75 += 4;
      if ( !v74 )
        goto LABEL_74;
    }
    v76 = v73 + 16LL * *v75 + 312;
  }
  else
  {
LABEL_74:
    v76 = sub_1C8D744(v57, System_IDisposable_TypeInfo, 0LL);
  }
  States = (*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v57, *(_QWORD *)(v76 + 8));
  if ( v3 == 3 )
  {
    v77 = this->fields.simpleAnimationComponent;
    States = (__int64)System_String__Concat_63368612(this->fields.baseName, (System_String_o *)StringLiteral_16894/*"bit_incoming_start"*/, 0LL);
    if ( !v77 )
      goto LABEL_136;
    v78 = SimpleAnimation__get_Item(v77, (System_String_o *)States, 0LL);
    if ( v78 )
      goto LABEL_87;
    States = (__int64)this->fields.simpleAnimationComponent;
    if ( !States )
      goto LABEL_136;
    v78 = SimpleAnimation__get_Item((SimpleAnimation_o *)States, this->fields.baseName, 0LL);
    if ( v78 )
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
    v79 = (PartyOrganizationUtility_o *)&this->fields.callAfterStart;
    v80 = this->fields.callAfterStart;
    if ( v80 )
    {
      v79->klass = 0LL;
      sub_1C3B708(v79, 0LL, v24, v25, v26, v27, v28, v29);
      ActionExtensions__Call(v80, 0LL);
    }
    if ( this->fields.loop )
    {
      v81 = this->fields.simpleAnimationComponent;
      States = (__int64)System_String__Concat_63368612(
                          this->fields.baseName,
                          (System_String_o *)StringLiteral_16872/*"bit_dedicate_reward_"*/,
                          0LL);
      if ( !v81 )
        goto LABEL_136;
      v82 = SimpleAnimation__get_Item(v81, (System_String_o *)States, 0LL);
      if ( v82 )
      {
        v78 = v82;
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
  v83 = this->fields.simpleAnimationComponent;
  States = (__int64)System_String__Concat_63368612(this->fields.baseName, (System_String_o *)StringLiteral_16857/*"bit_buddy_result"*/, 0LL);
  if ( !v83 )
    goto LABEL_136;
  States = (__int64)SimpleAnimation__get_Item(v83, (System_String_o *)States, 0LL);
  v78 = (SimpleAnimation_State_o *)States;
  v3 = 6;
  if ( !States )
    goto LABEL_101;
LABEL_96:
  v84 = v78->klass;
  v85 = *(unsigned __int16 *)(&v78->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v78->klass->_2.bitflags2 + 3) )
  {
    v86 = (SimpleAnimation_State_c **)&v84->_1.interfaceOffsets->offset;
    while ( *(v86 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v85;
      v86 += 2;
      if ( !v85 )
        goto LABEL_100;
    }
    v87 = (__int64)&v84->vtable[*(_DWORD *)v86 + 9].method;
  }
  else
  {
LABEL_100:
    v87 = sub_1C8D744(v78, SimpleAnimation_State_TypeInfo, 9LL);
  }
  States = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v87)(v78, *(_QWORD *)(v87 + 8));
  name = (struct System_String_o *)States;
LABEL_104:
  if ( !this )
    goto LABEL_136;
LABEL_130:
  this->fields.requestAnimation = name;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.requestAnimation, (int64_t)name, v24, v25, v26, v27, v28, v29);
  this->fields.status = v3;
}


void __fastcall CommonEffectComponent__NotifyEvent(
        CommonEffectComponent_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  if ( (byte_4C233AC & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_string___, eventName);
    byte_4C233AC = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.notifyEventCallback,
    (Il2CppObject *)eventName,
    (const MethodInfo_2F42300 *)Method_ActionExtensions_Call_string___);
}


void __fastcall CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *asset; // x21
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C233AB & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    byte_4C233AB = 1;
  }
  asset = this->fields.asset;
  if ( asset )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39213104(asset, 0LL);
    this->fields.asset = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.asset, 0LL, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4C233B5 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_CommonEffectComponent__OnRelease_b__79_0__, v3);
    byte_4C233B5 = 1;
  }
  *(_WORD *)&this->fields.isTouching = 256;
  v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_CommonEffectComponent__OnRelease_b__79_0__, 0LL);
  v7 = CommonEffectComponent__DelayFrameCoroutine(v5, 1, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4C233B8 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    byte_4C233B8 = 1;
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
    sub_1C3B9C0(name, v8);
  }
  UnityEngine_Animation__Play_70867156(v12, (System_String_o *)name, 0LL);
  v13 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
  this->fields.playAnimation = v13;
  p_playAnimation = &this->fields.playAnimation;
  sub_1C3B708((PartyOrganizationUtility_o *)p_playAnimation, (int64_t)v13, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4C233AD & 1) == 0 )
  {
    sub_1C3B764(&Method_CommonEffectComponent_PlaySe__, name);
    byte_4C233AD = 1;
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
      v8 = (_QWORD *)sub_1C3B77C(Method_CommonEffectComponent_PlaySe__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C3B748(v8, v8[4]);
    v11 = v6->max_length;
    if ( !v11 )
      goto LABEL_18;
    v10 = v6->m_Items[0];
    if ( max_length < 2 )
    {
      OverwriteAssetSoundName__PlaySe(v9, v10, 0, 0LL);
      return;
    }
    if ( v11 <= 1 )
LABEL_18:
      sub_1C3B9C8(v9, v10);
    v12 = OverwriteAssetSoundName__PlaySe_40039436(v9, v10, v6->m_Items[1], 1.0, 0LL, 0, 0LL);
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
        sub_1C3B9C0(IsNullOrEmpty, v5);
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
  unsigned int v9; // w8

  if ( (byte_4C233AE & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C3B764(&Method_CommonEffectComponent_PlaySeContinue__, name);
    byte_4C233AE = 1;
  }
  if ( !name || (this = (CommonEffectComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1C3B9C0(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeContinue__;
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeContinue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3B77C(Method_CommonEffectComponent_PlaySeContinue__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
  v9 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v9 )
    goto LABEL_13;
  v8 = *(System_String_o **)&v4->fields.endtime;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, v8, 0, 0LL);
    return;
  }
  if ( v9 <= 1 )
LABEL_13:
    sub_1C3B9C8(v7, v8);
  OverwriteAssetSoundName__PlaySeContinue_40038928(v7, v8, *(System_String_o **)&v4->fields.touchEffectTime, 0, 0LL);
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
  unsigned int v9; // w8

  if ( (byte_4C233B0 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C3B764(
                                        &Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__,
                                        soundInfo);
    byte_4C233B0 = 1;
  }
  if ( !soundInfo || (this = (CommonEffectComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0LL)) == 0LL )
    sub_1C3B9C0(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__;
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3B77C(Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
  v9 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v9 )
    goto LABEL_13;
  v8 = *(System_String_o **)&v4->fields.endtime;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, v8, 1, 0LL);
    return;
  }
  if ( v9 <= 1 )
LABEL_13:
    sub_1C3B9C8(v7, v8);
  OverwriteAssetSoundName__PlaySeContinue_40038928(v7, v8, *(System_String_o **)&v4->fields.touchEffectTime, 1, 0LL);
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
  unsigned int v9; // w8

  if ( (byte_4C233AF & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C3B764(&Method_CommonEffectComponent_PlaySeIgnorePreDelay__, soundInfo);
    byte_4C233AF = 1;
  }
  if ( !soundInfo || (this = (CommonEffectComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0LL)) == 0LL )
    sub_1C3B9C0(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeIgnorePreDelay__;
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3B77C(Method_CommonEffectComponent_PlaySeIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
  v9 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v9 )
    goto LABEL_13;
  v8 = *(System_String_o **)&v4->fields.endtime;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, v8, 1, 0LL);
    return;
  }
  if ( v9 <= 1 )
LABEL_13:
    sub_1C3B9C8(v7, v8);
  OverwriteAssetSoundName__PlaySe_40039436(v7, v8, *(System_String_o **)&v4->fields.touchEffectTime, 1.0, 0LL, 1, 0LL);
}


void __fastcall CommonEffectComponent__PlaySettedVoice(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *settedVoiceStr; // x1

  settedVoiceStr = this->fields.settedVoiceStr;
  if ( settedVoiceStr )
    CommonEffectComponent__PlayVoice_42137616(this, settedVoiceStr, this->fields.voiceCallback, v2);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4C233B7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    sub_1C3B764(&SimpleAnimation_State_TypeInfo, v5);
    byte_4C233B7 = 1;
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
      p_method = sub_1C8D744(Item, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v11 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v14,
                                 *(_QWORD *)(p_method + 8));
    if ( !v13 )
LABEL_25:
      sub_1C3B9C0(v11, v9);
    SimpleAnimation__Play_65506988(v13, (System_String_o *)v11, 0LL);
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
      v21 = sub_1C8D744(v14, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v22 = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v21)(
                                      v14,
                                      *(_QWORD *)(v21 + 8));
    this->fields.playAnimation = v22;
    p_playAnimation = &this->fields.playAnimation;
    sub_1C3B708((PartyOrganizationUtility_o *)p_playAnimation, (int64_t)v22, v24, v25, v26, v27, v28, v29);
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

  CommonEffectComponent__PlayVoice_42137616(this, name, 0LL, v3);
}


void __fastcall CommonEffectComponent__PlayVoice_42137616(
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

  if ( (byte_4C233B1 & 1) == 0 )
  {
    sub_1C3B764(&SoundManager_TypeInfo, name);
    byte_4C233B1 = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name || (IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
      sub_1C3B9C0(IsNullOrEmpty, v7);
    v8 = *(_QWORD *)&IsNullOrEmpty->max_length;
    v9 = IsNullOrEmpty;
    if ( (int)v8 < 2 )
    {
      if ( (_DWORD)v8 )
      {
        v10 = IsNullOrEmpty->m_Items[0];
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playVoice_40137196(v10, callback, 0, 0LL);
        return;
      }
LABEL_19:
      sub_1C3B9C8(IsNullOrEmpty, v7);
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
    SoundManager__playVoice_40137440(v14, v13, v12, callback, 0, 0LL);
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
  if ( (byte_4C233B4 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C233B4 = 1;
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
            sub_1C3B9C8(this, method);
          v6 = (UnityEngine_Object_o *)particlelist->m_Items[v5];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (CommonEffectComponent_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v6 )
              sub_1C3B9C0(this, method);
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
                UnityEngine_ParticleSystem__Simulate_71402856((UnityEngine_ParticleSystem_o *)v6, 1.0, 0LL);
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
  UnityEngine_Object_o *gameObject; // x20

  v5 = isSkip;
  if ( (byte_4C233A2 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isSkip);
    byte_4C233A2 = 1;
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
          UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
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

  if ( (byte_4C233A7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C233A7 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_1C3B9C0(0LL, v4);
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
  if ( (byte_4C233A8 & 1) == 0 )
  {
    sub_1C3B764(&System_IDisposable_TypeInfo, tf);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (CommonEffectComponent_o *)sub_1C3B764(&UnityEngine_Transform_TypeInfo, v8);
    byte_4C233A8 = 1;
  }
  if ( !tf
    || (this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_1C3B9C0(this, tf);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_1C3B9C0(0LL, v9);
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
        p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v18 = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
          sub_1C3BC80(v19);
          goto LABEL_35;
        }
      }
      CommonEffectComponent__SetChildInit(v6, v19, layer, v20);
    }
    v22 = sub_1C3B8A0(Enumerator, System_IDisposable_TypeInfo);
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
        v27 = sub_1C8D744(v22, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.notifyEventCallback = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.notifyEventCallback,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4C233B3 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C3B764(&SoundManager_TypeInfo, str);
    byte_4C233B3 = 1;
  }
  if ( !str || (this = (CommonEffectComponent_o *)System_String__Split(str, 0x3Au, 0, 0LL)) == 0LL )
    sub_1C3B9C0(this, str);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.touchCallback = inputTouchCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.touchCallback,
    (int64_t)inputTouchCallback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  struct System_String_o *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4C233B2 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_16438/*"animationId"*/, *(_QWORD *)&num);
    byte_4C233B2 = 1;
  }
  this->fields.useAnimNum = num;
  if ( isUpdateName )
  {
    if ( this->fields.baseName )
    {
      effectName = this->fields.effectName;
      v8 = System_Int32__ToString((int)this + 136, 0LL);
      v9 = System_String__Concat_63379872(effectName, (System_String_o *)StringLiteral_16438/*"animationId"*/, v8, 0LL);
      this->fields.baseName = v9;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.baseName, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    }
  }
}


void __fastcall CommonEffectComponent__SetVoice(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  this->fields.settedVoiceStr = voiceStr;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.settedVoiceStr,
    (int64_t)voiceStr,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.voiceCallback = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.voiceCallback, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall CommonEffectComponent__SetVoice_42137964(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  this->fields.settedVoiceStr = voiceStr;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.settedVoiceStr,
    (int64_t)voiceStr,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.voiceCallback = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.voiceCallback,
    (int64_t)callback,
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *v15; // x0
  __int64 v16; // x1
  SimpleAnimation_o *v17; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v19; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v22; // x19
  __int64 v23; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_TrackedReference_o *v26; // x19

  if ( (byte_4C233A6 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, force);
    sub_1C3B764(&SimpleAnimation_State_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_16872/*"bit_dedicate_reward_"*/, v13);
    byte_4C233A6 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0LL);
    return;
  }
  this->fields.callAfterStop = onStoppedCallback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callAfterStop,
    (int64_t)onStoppedCallback,
    isDestroy,
    (int32_t)onStoppedCallback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = (System_String_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    v17 = this->fields.simpleAnimationComponent;
    if ( force )
    {
      if ( v17 )
      {
        SimpleAnimation__Stop(this->fields.simpleAnimationComponent, 0LL);
        return;
      }
LABEL_31:
      sub_1C3B9C0(v15, v16);
    }
    v15 = System_String__Concat_63368612(this->fields.baseName, (System_String_o *)StringLiteral_16872/*"bit_dedicate_reward_"*/, 0LL);
    if ( !v17 )
      goto LABEL_31;
    Item = SimpleAnimation__get_Item(v17, v15, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v22 = Item;
      v23 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v23;
          p_offset += 2;
          if ( !v23 )
            goto LABEL_23;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_23:
        p_method = sub_1C8D744(Item, SimpleAnimation_State_TypeInfo, 18LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v22, 1LL, *(_QWORD *)(p_method + 8));
    }
  }
  else
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = (System_String_o *)UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL);
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      v19 = this->fields.animationComponent;
      if ( force )
      {
        if ( !v19 )
          goto LABEL_31;
        UnityEngine_Animation__Stop(this->fields.animationComponent, 0LL);
      }
      else
      {
        v15 = System_String__Concat_63368612(this->fields.baseName, (System_String_o *)StringLiteral_16872/*"bit_dedicate_reward_"*/, 0LL);
        if ( !v19 )
          goto LABEL_31;
        v26 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v19, v15, 0LL);
        v15 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v26, 0LL, 0LL);
        if ( ((unsigned __int8)v15 & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_31;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v26, 1, 0LL);
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

  if ( (byte_4C233BC & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_16872/*"bit_dedicate_reward_"*/, v3);
    byte_4C233BC = 1;
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
    v6 = System_String__Concat_63368612(this->fields.baseName, (System_String_o *)StringLiteral_16872/*"bit_dedicate_reward_"*/, 0LL);
    if ( v10 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v10, v6, 0LL);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
        goto LABEL_19;
      v12 = this->fields.animationComponent;
      v6 = System_String__Concat_63368612(this->fields.baseName, (System_String_o *)StringLiteral_16872/*"bit_dedicate_reward_"*/, 0LL);
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
    sub_1C3B9C0(v6, v7);
  }
  v5 = this->fields.simpleAnimationComponent;
  v6 = System_String__Concat_63368612(this->fields.baseName, (System_String_o *)StringLiteral_16872/*"bit_dedicate_reward_"*/, 0LL);
  if ( !v5 )
    goto LABEL_24;
  if ( !SimpleAnimation__get_Item(v5, v6, 0LL) )
    goto LABEL_19;
  v8 = this->fields.simpleAnimationComponent;
  v6 = System_String__Concat_63368612(this->fields.baseName, (System_String_o *)StringLiteral_16872/*"bit_dedicate_reward_"*/, 0LL);
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
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *v7; // x21
  __int64 v8; // x1
  SimpleAnimation_o *v9; // x0
  UnityEngine_Object_o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  PartyOrganizationUtility_o *p_playAnimation; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Object_o *animationComponent; // x21
  int32_t status; // w8
  struct System_String_o **v28; // x0
  struct System_String_o *requestAnimation; // x1
  UnityEngine_Object_o *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct UnityEngine_ParticleSystem_array *particlelist; // x23
  __int64 v38; // x8
  unsigned __int64 v39; // x24
  UnityEngine_Object_o *v40; // x21
  float v41; // s0
  PartyOrganizationUtility_o *p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4C233AA & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v3);
    byte_4C233AA = 1;
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
      && (p_playAnimation = (PartyOrganizationUtility_o *)&this->fields.playAnimation, this->fields.playAnimation) )
    {
      v9 = this->fields.simpleAnimationComponent;
      if ( !v9 )
        goto LABEL_82;
      if ( SimpleAnimation__CheckPlaying(v9, 0LL) )
        return;
    }
    else
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_41;
      p_playAnimation = (PartyOrganizationUtility_o *)&this->fields.playAnimation;
      if ( !this->fields.playAnimation )
        goto LABEL_41;
      v9 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v9 )
        goto LABEL_82;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v9, 0LL) )
        return;
    }
    status = this->fields.status;
    if ( status != 6 )
      goto LABEL_42;
    p_playAnimation->klass = 0LL;
    sub_1C3B708(p_playAnimation, 0LL, v20, v21, v22, v23, v24, v25);
LABEL_41:
    status = this->fields.status;
LABEL_42:
    if ( status == 6 )
    {
      if ( !this->fields.isEndless )
      {
        if ( (float)(this->fields.endtime + this->fields.losttime) < this->fields.totaltime )
        {
          p_callAfterStop = (PartyOrganizationUtility_o *)&this->fields.callAfterStop;
          callAfterStop = this->fields.callAfterStop;
          if ( callAfterStop )
          {
            p_callAfterStop->klass = 0LL;
            sub_1C3B708(p_callAfterStop, 0LL, v20, v21, v22, v23, v24, v25);
            ActionExtensions__Call(callAfterStop, 0LL);
          }
          if ( this->fields.isDestroy )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
            ((void (__fastcall *)(CommonEffectComponent_o *, void *))this->klass->vtable._10_PlayDestroyEffectCallback.method)(
              this,
              this->klass[1]._1.image);
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
    v9 = this->fields.simpleAnimationComponent;
    if ( !v9 )
      goto LABEL_82;
    if ( SimpleAnimation__CheckPlaying(v9, 0LL) )
      return;
  }
  else
  {
    v10 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
      v9 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v9 )
        goto LABEL_82;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v9, 0LL) )
        return;
    }
  }
  if ( System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v17 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      v9 = this->fields.simpleAnimationComponent;
      if ( v9 )
      {
        SimpleAnimation__Play_65506988(v9, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_56;
        v9 = this->fields.simpleAnimationComponent;
        if ( v9 )
        {
          SimpleAnimation__Sample(v9, 0LL);
LABEL_56:
          requestAnimation = this->fields.requestAnimation;
          this->fields.playAnimation = requestAnimation;
          v28 = &this->fields.playAnimation;
          goto LABEL_57;
        }
      }
    }
    else
    {
      v30 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
        goto LABEL_56;
      v9 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v9 )
      {
        UnityEngine_Animation__Play_70867156((UnityEngine_Animation_o *)v9, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_56;
        v9 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v9 )
        {
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v9, 0LL);
          goto LABEL_56;
        }
      }
    }
LABEL_82:
    sub_1C3B9C0(v9, v8);
  }
  this->fields.playAnimation = 0LL;
  v28 = &this->fields.playAnimation;
  requestAnimation = 0LL;
LABEL_57:
  sub_1C3B708((PartyOrganizationUtility_o *)v28, (int64_t)requestAnimation, v11, v12, v13, v14, v15, v16);
  if ( this->fields.status == 6 )
  {
    particlelist = this->fields.particlelist;
    if ( particlelist )
    {
      v38 = *(_QWORD *)&particlelist->max_length;
      if ( (int)v38 >= 1 )
      {
        v39 = 0LL;
        do
        {
          if ( v39 >= (unsigned int)v38 )
            sub_1C3B9C8(v9, v8);
          v40 = (UnityEngine_Object_o *)particlelist->m_Items[v39];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v9 = (SimpleAnimation_o *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
          if ( ((unsigned __int8)v9 & 1) != 0 )
          {
            if ( !v40 )
              goto LABEL_82;
            UnityEngine_ParticleSystem__Stop_71403364((UnityEngine_ParticleSystem_o *)v40, 0LL);
          }
          LODWORD(v38) = particlelist->max_length;
          ++v39;
        }
        while ( (__int64)v39 < (int)v38 );
      }
    }
    v41 = this->fields.totaltime;
    if ( v41 > this->fields.endtime )
      this->fields.endtime = v41;
  }
  *p_requestAnimation = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.requestAnimation, 0LL, v31, v32, v33, v34, v35, v36);
}


void __fastcall CommonEffectComponent__UpdateTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float touchStartTime; // s8
  CommonEffectComponent_c *v5; // x0
  CommonEffectComponent_c *v6; // x0

  if ( (byte_4C233BB & 1) == 0 )
  {
    sub_1C3B764(&CommonEffectComponent_TypeInfo, method);
    byte_4C233BB = 1;
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


void __fastcall CommonEffectComponent___OnRelease_b__79_0(CommonEffectComponent_o *this, const MethodInfo *method)
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


void __fastcall CommonEffectComponent__DelayFrameCoroutine_d__80___ctor(
        CommonEffectComponent__DelayFrameCoroutine_d__80_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CommonEffectComponent__DelayFrameCoroutine_d__80__MoveNext(
        CommonEffectComponent__DelayFrameCoroutine_d__80_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.action, 0LL);
  return 0;
}


Il2CppObject *__fastcall CommonEffectComponent__DelayFrameCoroutine_d__80__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CommonEffectComponent__DelayFrameCoroutine_d__80_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CommonEffectComponent__DelayFrameCoroutine_d__80__System_Collections_IEnumerator_Reset(
        CommonEffectComponent__DelayFrameCoroutine_d__80_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_CommonEffectComponent__DelayFrameCoroutine_d__80_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall CommonEffectComponent__DelayFrameCoroutine_d__80__System_Collections_IEnumerator_get_Current(
        CommonEffectComponent__DelayFrameCoroutine_d__80_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CommonEffectComponent__DelayFrameCoroutine_d__80__System_IDisposable_Dispose(
        CommonEffectComponent__DelayFrameCoroutine_d__80_o *this,
        const MethodInfo *method)
{
  ;
}