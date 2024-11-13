void __fastcall CommonEffectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B1758E & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_23728/*"start"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_19193/*"end"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_24246/*"touch"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_21439/*"loop"*/, v16, v17);
    byte_4B1758E = 1;
  }
  v18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo,
                                                                   v1,
                                                                   v2,
                                                                   v3);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v18,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
  if ( !v18 )
    sub_1BCAA3C(v19, v20);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v18,
    3,
    (Il2CppObject *)StringLiteral_23728/*"start"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v18,
    4,
    (Il2CppObject *)StringLiteral_21439/*"loop"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v18,
    5,
    (Il2CppObject *)StringLiteral_24246/*"touch"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v18,
    6,
    (Il2CppObject *)StringLiteral_19193/*"end"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  CommonEffectComponent_TypeInfo->static_fields->ANIMATION_NAME_TABLE = (struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *)v18;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CommonEffectComponent_TypeInfo->static_fields,
    (int64_t)v18,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  CommonEffectComponent_TypeInfo->static_fields->DEFAULT_TOUCH_START_TIME = -1.0;
}


void __fastcall CommonEffectComponent___ctor(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CommonEffectComponent_c *v9; // x0

  if ( (byte_4B1758D & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectComponent_TypeInfo, method, v2);
    byte_4B1758D = 1;
  }
  __asm { FMOV            V0.2S, #5.0 }
  *(_QWORD *)&this->fields.endtime = _D0;
  this->fields.isDestroy = 1;
  v9 = CommonEffectComponent_TypeInfo;
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
    v9 = CommonEffectComponent_TypeInfo;
  }
  this->fields.touchStartTime = v9->static_fields->DEFAULT_TOUCH_START_TIME;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectComponent__Awake(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1757D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4, v5);
    byte_4B1757D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animationComponent,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v13;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimationComponent,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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

  if ( (byte_4B17588 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectComponent__DelayFrameCoroutine_d__78_TypeInfo, *(_QWORD *)&frame, action);
    byte_4B17588 = 1;
  }
  v6 = sub_1BCAA2C(CommonEffectComponent__DelayFrameCoroutine_d__78_TypeInfo, *(_QWORD *)&frame, action, method);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 32) = frame;
  *(_QWORD *)(v6 + 40) = action;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)action, v7, v8, v9, v10, v11, v12);
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
void __fastcall CommonEffectComponent__ForceLoop_41385276(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t status; // w8
  __int64 v11; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v13; // x1
  SimpleAnimation_o *v14; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v16; // x20
  __int64 v17; // x1
  SimpleAnimation_o *v18; // x20
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v21; // x20
  __int64 v22; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_Animation_o *v32; // x20
  UnityEngine_TrackedReference_o *v33; // x20

  if ( (byte_4B17579 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isOverWrite, method);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_16721/*"_loop"*/, v8, v9);
    byte_4B17579 = 1;
  }
  status = this->fields.status;
  if ( !status )
  {
    CommonEffectComponent__Init(this, 0, 0, v3);
    if ( isOverWrite )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      {
        v14 = this->fields.simpleAnimationComponent;
        if ( !v14 )
          goto LABEL_42;
        SimpleAnimation__Stop(v14, 0LL);
      }
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_41;
      v14 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v14 )
        goto LABEL_42;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v14, 0LL);
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
    v16 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOverWrite);
    if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    {
      v18 = this->fields.simpleAnimationComponent;
      v14 = (SimpleAnimation_o *)System_String__Concat_62401220(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16721/*"_loop"*/,
                                   0LL);
      if ( v18 )
      {
        Item = SimpleAnimation__get_Item(v18, (System_String_o *)v14, 0LL);
        if ( Item )
        {
          klass = Item->klass;
          v21 = Item;
          v22 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v22;
              p_offset += 2;
              if ( !v22 )
                goto LABEL_26;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_26:
            p_method = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 18LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
            v21,
            2LL,
            *(_QWORD *)(p_method + 8));
        }
        v14 = this->fields.simpleAnimationComponent;
        if ( v14 )
        {
          SimpleAnimation__Stop(v14, 0LL);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v25 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
        goto LABEL_40;
      v32 = this->fields.animationComponent;
      v14 = (SimpleAnimation_o *)System_String__Concat_62401220(
                                   this->fields.baseName,
                                   (System_String_o *)StringLiteral_16721/*"_loop"*/,
                                   0LL);
      if ( v32 )
      {
        v33 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v32, (System_String_o *)v14, 0LL);
        v14 = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v33, 0LL, 0LL);
        if ( ((unsigned __int8)v14 & 1) != 0 )
        {
          if ( !v33 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v33, 2, 0LL);
        }
        v14 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v14 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v14, 0LL);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playAnimation, 0LL, v26, v27, v28, v29, v30, v31);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1BCAA3C(v14, v13);
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
void __fastcall CommonEffectComponent__ForceStart_41384584(
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v18; // x1
  SimpleAnimation_o *v19; // x20
  UnityEngine_Animation_o *v20; // x0
  __int64 v21; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v24; // x20
  __int64 v25; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UnityEngine_Animation_o *v36; // x20
  UnityEngine_TrackedReference_o *v37; // x20

  if ( (byte_4B17578 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isOverWrite, callback);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_16721/*"_loop"*/, v13, v14);
    byte_4B17578 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_1BCA784(
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
        v20 = this->fields.animationComponent;
        if ( !v20 )
          goto LABEL_37;
        UnityEngine_Animation__Stop(v20, 0LL);
      }
    }
    CommonEffectComponent__Init(this, 0, 0, v16);
    return;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v19 = this->fields.simpleAnimationComponent;
    v20 = (UnityEngine_Animation_o *)System_String__Concat_62401220(
                                       this->fields.baseName,
                                       (System_String_o *)StringLiteral_16721/*"_loop"*/,
                                       0LL);
    if ( v19 )
    {
      Item = SimpleAnimation__get_Item(v19, (System_String_o *)v20, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v24 = Item;
        v25 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v25;
            p_offset += 2;
            if ( !v25 )
              goto LABEL_15;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_15:
          p_method = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 18LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
          v24,
          2LL,
          *(_QWORD *)(p_method + 8));
      }
      v20 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v20 )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)v20, 0LL);
        goto LABEL_36;
      }
    }
    goto LABEL_37;
  }
  v29 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( !UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    goto LABEL_36;
  v36 = this->fields.animationComponent;
  v20 = (UnityEngine_Animation_o *)System_String__Concat_62401220(
                                     this->fields.baseName,
                                     (System_String_o *)StringLiteral_16721/*"_loop"*/,
                                     0LL);
  if ( !v36 )
    goto LABEL_37;
  v37 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v36, (System_String_o *)v20, 0LL);
  v20 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(v37, 0LL, 0LL);
  if ( ((unsigned __int8)v20 & 1) != 0 )
  {
    if ( !v37 )
      goto LABEL_37;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v37, 2, 0LL);
  }
  v20 = this->fields.animationComponent;
  if ( !v20 )
LABEL_37:
    sub_1BCAA3C(v20, v21);
  UnityEngine_Animation__Stop(v20, 0LL);
LABEL_36:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playAnimation, 0LL, v30, v31, v32, v33, v34, v35);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CommonEffectComponent_c *v9; // x0
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *ANIMATION_NAME_TABLE; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_String_o *baseName; // x20
  struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *v16; // x21
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c *v17; // x8
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **v19; // x10
  __int64 v20; // x0
  System_String_o *v22; // x2

  if ( (byte_4B1758B & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectComponent_TypeInfo, *(_QWORD *)&status, method);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v7, v8);
    byte_4B1758B = 1;
  }
  v9 = CommonEffectComponent_TypeInfo;
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, *(_QWORD *)&status);
    v9 = CommonEffectComponent_TypeInfo;
  }
  ANIMATION_NAME_TABLE = v9->static_fields->ANIMATION_NAME_TABLE;
  if ( !ANIMATION_NAME_TABLE )
    goto LABEL_24;
  klass = ANIMATION_NAME_TABLE->klass;
  v12 = *(unsigned __int16 *)(&ANIMATION_NAME_TABLE->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&ANIMATION_NAME_TABLE->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(
                 ANIMATION_NAME_TABLE,
                 System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
                 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))p_method)(
          ANIMATION_NAME_TABLE,
          (unsigned int)status,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  v9 = CommonEffectComponent_TypeInfo;
  baseName = this->fields.baseName;
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, *(_QWORD *)&status);
    v9 = CommonEffectComponent_TypeInfo;
  }
  v16 = v9->static_fields->ANIMATION_NAME_TABLE;
  if ( !v16 )
LABEL_24:
    sub_1BCAA3C(v9, *(_QWORD *)&status);
  v17 = v16->klass;
  v18 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    v19 = (System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_20;
    }
    v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 2].method;
  }
  else
  {
LABEL_20:
    v20 = sub_1C1C7C0(
            v16,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            2LL);
  }
  v22 = (System_String_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v20)(
                             v16,
                             (unsigned int)status,
                             *(_QWORD *)(v20 + 8));
  return System_String__Concat_62412480(baseName, (System_String_o *)StringLiteral_16290/*"_"*/, v22, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_String_o **p_effectName; // x22
  UnityEngine_Object_o *gameObject; // x0
  __int64 v21; // x1
  System_String_o *name; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_String_o *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_String_o *v36; // x23
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_String_o **p_baseName; // x23
  int64_t v46; // x1
  System_String_o *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  UnityEngine_Object_o *v54; // x22
  __int64 v55; // x1
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *transform; // x22
  int32_t layer; // w0
  const MethodInfo *v59; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v61; // x1
  __int64 v62; // x1
  UnityEngine_Object_o *v63; // x20

  if ( (byte_4B17575 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isSkip, isPause);
    sub_1BCA7E0(&StringLiteral_5923/*"Effect("*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_726/*"(Clone)"*/, v17, v18);
    byte_4B17575 = 1;
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectName, (int64_t)name, v23, v24, v25, v26, v27, v28);
    gameObject = (UnityEngine_Object_o *)*p_effectName;
    if ( !*p_effectName )
      goto LABEL_37;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_726/*"(Clone)"*/, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)*p_effectName;
      if ( !*p_effectName )
        goto LABEL_37;
      v29 = System_String__Substring_62420224((System_String_o *)gameObject, 0, gameObject->fields.m_CachedPtr - 7, 0LL);
      *p_effectName = v29;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectName, (int64_t)v29, v30, v31, v32, v33, v34, v35);
    }
  }
  if ( this->fields.useAnimNum >= 1 )
  {
    v36 = *p_effectName;
    v37 = System_Int32__ToString((int)this + 136, 0LL);
    v38 = System_String__Concat_62412480(v36, (System_String_o *)StringLiteral_16290/*"_"*/, v37, 0LL);
    *p_effectName = v38;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectName, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  }
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    v46 = (int64_t)*p_effectName;
    *p_baseName = *p_effectName;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseName, v46, isPause, (int32_t)method, v4, v5, v6, v7);
    gameObject = (UnityEngine_Object_o *)*p_baseName;
    if ( !*p_baseName )
      goto LABEL_37;
    gameObject = (UnityEngine_Object_o *)System_String__LastIndexOf((System_String_o *)gameObject, 0x2Fu, 0LL);
    if ( ((unsigned int)gameObject & 0x80000000) == 0 )
    {
      if ( !*p_baseName )
        goto LABEL_37;
      v47 = System_String__Substring(*p_baseName, (int)gameObject + 1, 0LL);
      *p_baseName = v47;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseName, (int64_t)v47, v48, v49, v50, v51, v52, v53);
    }
  }
  v54 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  gameObject = (UnityEngine_Object_o *)System_String__Concat_62412480(
                                         (System_String_o *)StringLiteral_5923/*"Effect("*/,
                                         this->fields.effectName,
                                         (System_String_o *)StringLiteral_809/*")"*/,
                                         0LL);
  if ( !v54 )
    goto LABEL_37;
  UnityEngine_Object__set_name(v54, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
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
    sub_1BCAA3C(gameObject, v21);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  CommonEffectComponent__SetChildInit(this, transform, layer, v59);
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
    v61 = 3LL;
    goto LABEL_33;
  }
  if ( this->fields.loop )
  {
    klass = this->klass;
    v61 = 4LL;
LABEL_33:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, Il2CppMethodPointer))klass->vtable._5_NextPlayAnimation.method)(
      this,
      v61,
      klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  v63 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
  UnityEngine_Object__Destroy_70154244(v63, 0LL);
  ((void (__fastcall *)(CommonEffectComponent_o *, void *))this->klass->vtable._10_PlayDestroyEffectCallback.method)(
    this,
    this->klass[1]._1.image);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__Init_41381496(
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
    sub_1BCA784(
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
void __fastcall CommonEffectComponent__Init_41381568(
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.asset,
      (int64_t)data,
      isSkip,
      isPause,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    if ( !data )
      sub_1BCAA3C(v12, v13);
    name = data->fields.name;
    this->fields.effectName = name;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectName, (int64_t)name, v14, v15, v16, v17, v18, v19);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  struct System_String_o *name; // x1
  __int64 States; // x0
  __int64 v28; // x8
  __int64 v29; // x21
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  UnityEngine_Object_o *animationComponent; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v46; // x8
  __int64 v47; // x9
  System_Collections_IEnumerator_c **v48; // x10
  __int64 v49; // x0
  UnityEngine_AnimationState_o *v50; // x0
  __int64 v51; // x1
  PartyOrganizationUtility_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  __int64 v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x8
  __int64 v62; // x21
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x21
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x22
  __int64 v79; // x8
  __int64 v80; // x9
  SimpleAnimation_State_c **v81; // x10
  __int64 v82; // x0
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  SimpleAnimation_o *v87; // x20
  SimpleAnimation_State_o *v88; // x21
  PartyOrganizationUtility_o *v89; // x0
  System_Action_o *v90; // x20
  SimpleAnimation_o *v91; // x20
  SimpleAnimation_State_o *v92; // x0
  SimpleAnimation_o *v93; // x20
  SimpleAnimation_State_c *v94; // x8
  __int64 v95; // x9
  SimpleAnimation_State_c **v96; // x10
  __int64 v97; // x0
  UnityEngine_Animation_o *v98; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  PartyOrganizationUtility_o *v100; // x0
  System_Action_o *v101; // x20
  UnityEngine_Animation_o *v102; // x20
  UnityEngine_Animation_o *v103; // x20

  v3 = next;
  if ( (byte_4B17577 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationState_TypeInfo, *(_QWORD *)&next, method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_16721/*"_loop"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_16742/*"_start"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_16706/*"_end"*/, v23, v24);
    byte_4B17577 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
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
          sub_1BCA784(p_callAfterStart, 0LL, v34, v35, v36, v37, v38, v39);
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
      sub_1BCAA3C(States, name);
    }
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v40);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v43;
          p_offset += 4;
          if ( !v43 )
            goto LABEL_24;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_24:
        p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v46 = Enumerator->klass;
      v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v48 = (System_Collections_IEnumerator_c **)&v46->_1.interfaceOffsets->offset;
        while ( *(v48 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v47;
          v48 += 2;
          if ( !v47 )
            goto LABEL_31;
        }
        v49 = (__int64)&v46->vtable[*(_DWORD *)v48 + 1].method;
      }
      else
      {
LABEL_31:
        v49 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v50 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v49)(
                                              Enumerator,
                                              *(_QWORD *)(v49 + 8));
      if ( !v50 )
        goto LABEL_135;
      if ( v50->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1BCACFC(v50);
LABEL_135:
        sub_1BCAA3C(v50, v51);
      }
      UnityEngine_AnimationState__get_name(v50, 0LL);
    }
    v54 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
    if ( v54 )
    {
      v61 = *(_QWORD *)v54;
      v62 = v54;
      v63 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
      {
        v64 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
        {
          --v63;
          v64 += 4;
          if ( !v63 )
            goto LABEL_46;
        }
        v65 = v61 + 16LL * *v64 + 312;
      }
      else
      {
LABEL_46:
        v65 = sub_1C1C7C0(v54, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v65)(v62, *(_QWORD *)(v65 + 8));
    }
    switch ( v3 )
    {
      case 3:
        v98 = this->fields.animationComponent;
        States = (__int64)System_String__Concat_62401220(
                            this->fields.baseName,
                            (System_String_o *)StringLiteral_16742/*"_start"*/,
                            0LL);
        if ( !v98 )
          goto LABEL_136;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v98, (System_String_o *)States, 0LL);
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
    v100 = (PartyOrganizationUtility_o *)&this->fields.callAfterStart;
    v101 = this->fields.callAfterStart;
    if ( v101 )
    {
      v100->klass = 0LL;
      sub_1BCA784(v100, 0LL, v55, v56, v57, v58, v59, v60);
      ActionExtensions__Call(v101, 0LL);
    }
    if ( this->fields.loop )
    {
      v102 = this->fields.animationComponent;
      States = (__int64)System_String__Concat_62401220(
                          this->fields.baseName,
                          (System_String_o *)StringLiteral_16721/*"_loop"*/,
                          0LL);
      if ( !v102 )
        goto LABEL_136;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v102, (System_String_o *)States, 0LL);
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        v3 = 4;
        goto LABEL_126;
      }
    }
LABEL_124:
    v103 = this->fields.animationComponent;
    States = (__int64)System_String__Concat_62401220(this->fields.baseName, (System_String_o *)StringLiteral_16706/*"_end"*/, 0LL);
    if ( !v103 )
      goto LABEL_136;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v103, (System_String_o *)States, 0LL);
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
  v28 = *(_QWORD *)States;
  v29 = States;
  v30 = *(unsigned __int16 *)(*(_QWORD *)States + 302LL);
  if ( *(_WORD *)(*(_QWORD *)States + 302LL) )
  {
    v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)v31 - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_13;
    }
    v32 = v28 + 16LL * *v31 + 312;
  }
  else
  {
LABEL_13:
    v32 = sub_1C1C7C0(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v67 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
  if ( !v67 )
    sub_1BCAA3C(0LL, v66);
  while ( 1 )
  {
    v68 = *(_QWORD *)v67;
    v69 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v70 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v69;
        v70 += 4;
        if ( !v69 )
          goto LABEL_53;
      }
      v71 = v68 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_53:
      v71 = sub_1C1C7C0(v67, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8)) & 1) == 0 )
      break;
    v72 = *(_QWORD *)v67;
    v73 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v74 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v73;
        v74 += 4;
        if ( !v73 )
          goto LABEL_60;
      }
      v75 = v72 + 16LL * *v74 + 312;
    }
    else
    {
LABEL_60:
      v75 = sub_1C1C7C0(v67, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v76 = (*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v67, *(_QWORD *)(v75 + 8));
    v78 = v76;
    if ( !v76 )
      sub_1BCAA3C(0LL, v77);
    v79 = *(_QWORD *)v76;
    v80 = *(unsigned __int16 *)(*(_QWORD *)v76 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v76 + 302LL) )
    {
      v81 = (SimpleAnimation_State_c **)(*(_QWORD *)(v79 + 176) + 8LL);
      while ( *(v81 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v80;
        v81 += 2;
        if ( !v80 )
          goto LABEL_67;
      }
      v82 = v79 + 16LL * (*(_DWORD *)v81 + 9) + 312;
    }
    else
    {
LABEL_67:
      v82 = sub_1C1C7C0(v76, SimpleAnimation_State_TypeInfo, 9LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v82)(v78, *(_QWORD *)(v82 + 8));
  }
  v83 = *(_QWORD *)v67;
  v84 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
  {
    v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      --v84;
      v85 += 4;
      if ( !v84 )
        goto LABEL_74;
    }
    v86 = v83 + 16LL * *v85 + 312;
  }
  else
  {
LABEL_74:
    v86 = sub_1C1C7C0(v67, System_IDisposable_TypeInfo, 0LL);
  }
  States = (*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v67, *(_QWORD *)(v86 + 8));
  if ( v3 == 3 )
  {
    v87 = this->fields.simpleAnimationComponent;
    States = (__int64)System_String__Concat_62401220(this->fields.baseName, (System_String_o *)StringLiteral_16742/*"_start"*/, 0LL);
    if ( !v87 )
      goto LABEL_136;
    v88 = SimpleAnimation__get_Item(v87, (System_String_o *)States, 0LL);
    if ( v88 )
      goto LABEL_87;
    States = (__int64)this->fields.simpleAnimationComponent;
    if ( !States )
      goto LABEL_136;
    v88 = SimpleAnimation__get_Item((SimpleAnimation_o *)States, this->fields.baseName, 0LL);
    if ( v88 )
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
    v89 = (PartyOrganizationUtility_o *)&this->fields.callAfterStart;
    v90 = this->fields.callAfterStart;
    if ( v90 )
    {
      v89->klass = 0LL;
      sub_1BCA784(v89, 0LL, v34, v35, v36, v37, v38, v39);
      ActionExtensions__Call(v90, 0LL);
    }
    if ( this->fields.loop )
    {
      v91 = this->fields.simpleAnimationComponent;
      States = (__int64)System_String__Concat_62401220(
                          this->fields.baseName,
                          (System_String_o *)StringLiteral_16721/*"_loop"*/,
                          0LL);
      if ( !v91 )
        goto LABEL_136;
      v92 = SimpleAnimation__get_Item(v91, (System_String_o *)States, 0LL);
      if ( v92 )
      {
        v88 = v92;
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
  v93 = this->fields.simpleAnimationComponent;
  States = (__int64)System_String__Concat_62401220(this->fields.baseName, (System_String_o *)StringLiteral_16706/*"_end"*/, 0LL);
  if ( !v93 )
    goto LABEL_136;
  States = (__int64)SimpleAnimation__get_Item(v93, (System_String_o *)States, 0LL);
  v88 = (SimpleAnimation_State_o *)States;
  v3 = 6;
  if ( !States )
    goto LABEL_101;
LABEL_96:
  v94 = v88->klass;
  v95 = *(unsigned __int16 *)(&v88->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v88->klass->_2.bitflags2 + 3) )
  {
    v96 = (SimpleAnimation_State_c **)&v94->_1.interfaceOffsets->offset;
    while ( *(v96 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v95;
      v96 += 2;
      if ( !v95 )
        goto LABEL_100;
    }
    v97 = (__int64)&v94->vtable[*(_DWORD *)v96 + 9].method;
  }
  else
  {
LABEL_100:
    v97 = sub_1C1C7C0(v88, SimpleAnimation_State_TypeInfo, 9LL);
  }
  States = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v97)(v88, *(_QWORD *)(v97 + 8));
  name = (struct System_String_o *)States;
LABEL_104:
  if ( !this )
    goto LABEL_136;
LABEL_130:
  this->fields.requestAnimation = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.requestAnimation, (int64_t)name, v34, v35, v36, v37, v38, v39);
  this->fields.status = v3;
}


void __fastcall CommonEffectComponent__NotifyEvent(
        CommonEffectComponent_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  if ( (byte_4B17580 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_string___, eventName, method);
    byte_4B17580 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.notifyEventCallback,
    (Il2CppObject *)eventName,
    (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_string___);
}


void __fastcall CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetData_o *asset; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1757F & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B1757F = 1;
  }
  asset = this->fields.asset;
  if ( asset )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_38505704(asset, 0LL);
    this->fields.asset = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.asset, 0LL, v5, v6, v7, v8, v9, v10);
  }
  this->fields.status = 2;
}


void __fastcall CommonEffectComponent__OnRelease(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  CommonEffectComponent_o *v8; // x0
  const MethodInfo *v9; // x3
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_4B17587 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CommonEffectComponent__OnRelease_b__77_0__, v5, v6);
    byte_4B17587 = 1;
  }
  *(_WORD *)&this->fields.isTouching = 256;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CommonEffectComponent__OnRelease_b__77_0__, 0LL);
  v10 = CommonEffectComponent__DelayFrameCoroutine(v8, 1, v7, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
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

  if ( (byte_4B1758A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next, method);
    byte_4B1758A = 1;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
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
    sub_1BCAA3C(name, v8);
  }
  UnityEngine_Animation__Play_69899248(v12, (System_String_o *)name, 0LL);
  v13 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
  this->fields.playAnimation = v13;
  p_playAnimation = &this->fields.playAnimation;
  sub_1BCA784((PartyOrganizationUtility_o *)p_playAnimation, (int64_t)v13, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4B17581 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommonEffectComponent_PlaySe__, name, method);
    byte_4B17581 = 1;
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
      v8 = (_QWORD *)sub_1BCA7F8(Method_CommonEffectComponent_PlaySe__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
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
      sub_1BCAA44(v9, v10);
    v12 = OverwriteAssetSoundName__PlaySe_39322196(v9, v10, v6->m_Items[1], 1.0, 0LL, 0LL);
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
        sub_1BCAA3C(IsNullOrEmpty, v5);
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

  if ( (byte_4B17582 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1BCA7E0(&SoundManager_TypeInfo, name, method);
    byte_4B17582 = 1;
  }
  if ( !name || (this = (CommonEffectComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCAA3C(this, name);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    sub_1BCAA44(this, name);
  v5 = *(System_String_o **)&this->fields.endtime;
  if ( m_CancellationTokenSource >= 2 )
  {
    v6 = *(System_String_o **)&this->fields.touchEffectTime;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, name);
    SoundManager__playSeContinue_39416480(v5, v6, 0LL);
  }
  else
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, name);
    SoundManager__playSeContinue(v5, 0LL);
  }
}


void __fastcall CommonEffectComponent__PlaySettedVoice(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *settedVoiceStr; // x1

  settedVoiceStr = this->fields.settedVoiceStr;
  if ( settedVoiceStr )
    CommonEffectComponent__PlayVoice_41388924(this, settedVoiceStr, this->fields.voiceCallback, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectComponent__PlaySimpleAnimation(
        CommonEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v8; // x2
  System_String_o *AnimationName; // x21
  __int64 v10; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_o *v12; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_o *v14; // x22
  SimpleAnimation_State_o *v15; // x21
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  SimpleAnimation_State_c *v19; // x8
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  struct System_String_o *v23; // x0
  struct System_String_o **p_playAnimation; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B17589 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next, method);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v5, v6);
    byte_4B17589 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
  if ( UnityEngine_Object__op_Equality(simpleAnimationComponent, 0LL, 0LL)
    || (AnimationName = CommonEffectComponent__GetAnimationName(this, next, v8),
        System_String__IsNullOrEmpty(AnimationName, 0LL)) )
  {
    LOBYTE(Item) = 0;
  }
  else
  {
    v12 = this->fields.simpleAnimationComponent;
    if ( !v12 )
      goto LABEL_25;
    Item = SimpleAnimation__get_Item(v12, AnimationName, 0LL);
    if ( !Item )
      return (char)Item;
    klass = Item->klass;
    v14 = this->fields.simpleAnimationComponent;
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
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v12 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v15,
                                 *(_QWORD *)(p_method + 8));
    if ( !v14 )
LABEL_25:
      sub_1BCAA3C(v12, v10);
    SimpleAnimation__Play_64539336(v14, (System_String_o *)v12, 0LL);
    v19 = v15->klass;
    v20 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
    {
      v21 = (SimpleAnimation_State_c **)&v19->_1.interfaceOffsets->offset;
      while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v20;
        v21 += 2;
        if ( !v20 )
          goto LABEL_22;
      }
      v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 9].method;
    }
    else
    {
LABEL_22:
      v22 = sub_1C1C7C0(v15, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v23 = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v22)(
                                      v15,
                                      *(_QWORD *)(v22 + 8));
    this->fields.playAnimation = v23;
    p_playAnimation = &this->fields.playAnimation;
    sub_1BCA784((PartyOrganizationUtility_o *)p_playAnimation, (int64_t)v23, v25, v26, v27, v28, v29, v30);
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

  CommonEffectComponent__PlayVoice_41388924(this, name, 0LL, v3);
}


void __fastcall CommonEffectComponent__PlayVoice_41388924(
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

  if ( (byte_4B17583 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, name, callback);
    byte_4B17583 = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name || (IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
      sub_1BCAA3C(IsNullOrEmpty, v7);
    v8 = *(_QWORD *)&IsNullOrEmpty->max_length;
    v9 = IsNullOrEmpty;
    if ( (int)v8 < 2 )
    {
      if ( (_DWORD)v8 )
      {
        v10 = IsNullOrEmpty->m_Items[0];
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7);
        SoundManager__playVoice_39419164(v10, callback, 0LL);
        return;
      }
LABEL_19:
      sub_1BCAA44(IsNullOrEmpty, v7);
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
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7);
    SoundManager__playVoice_39419392(v14, v13, v12, callback, 0LL);
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
  if ( (byte_4B17586 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17586 = 1;
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
            sub_1BCAA44(this, method);
          v7 = (UnityEngine_Object_o *)particlelist->m_Items[v6];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          this = (CommonEffectComponent_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v7 )
              sub_1BCAA3C(this, method);
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
                UnityEngine_ParticleSystem__Simulate_70434184((UnityEngine_ParticleSystem_o *)v7, 1.0, 0LL);
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
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20

  v5 = isSkip;
  if ( (byte_4B17576 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isSkip, method);
    byte_4B17576 = 1;
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
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
          UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
  __int64 v2; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4B1757B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1757B = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v6 = this->fields.simpleAnimationComponent;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    SimpleAnimation__Rewind(v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectComponent__SetChildInit(
        CommonEffectComponent_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Transform_o *v21; // x0
  const MethodInfo *v22; // x3
  __int64 methodPtr_low; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x19
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  v6 = this;
  if ( (byte_4B1757C & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, tf, *(_QWORD *)&layer);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8);
    this = (CommonEffectComponent_o *)sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v9, v10);
    byte_4B1757C = 1;
  }
  if ( !tf
    || (this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_35:
    sub_1BCAA3C(this, tf);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL) != layer )
  {
    this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v11);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v14;
          p_offset += 4;
          if ( !v14 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v17 = Enumerator->klass;
      v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
        while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v18;
          v19 += 2;
          if ( !v18 )
            goto LABEL_19;
        }
        v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
      }
      else
      {
LABEL_19:
        v20 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v21 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                         Enumerator,
                                         *(_QWORD *)(v20 + 8));
      if ( v21 )
      {
        methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_1BCACFC(v21);
          goto LABEL_35;
        }
      }
      CommonEffectComponent__SetChildInit(v6, v21, layer, v22);
    }
    v24 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
    if ( v24 )
    {
      v25 = *(_QWORD *)v24;
      v26 = v24;
      v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_30;
        }
        v29 = v25 + 16LL * *v28 + 312;
      }
      else
      {
LABEL_30:
        v29 = sub_1C1C7C0(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
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
  sub_1BCA784(
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
  __int64 v5; // x1
  float v6; // s8

  if ( (byte_4B17585 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1BCA7E0(&SoundManager_TypeInfo, str, method);
    byte_4B17585 = 1;
  }
  if ( !str || (this = (CommonEffectComponent_o *)System_String__Split(str, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCAA3C(this, str);
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
  {
    v4 = *(System_String_o **)&this->fields.endtime;
    v6 = System_Single__Parse(*(System_String_o **)&this->fields.touchEffectTime, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v5);
    SoundManager__setPitchSe(v4, v6, 0LL);
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
  sub_1BCA784(
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

  if ( (byte_4B17584 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, *(_QWORD *)&num, isUpdateName);
    byte_4B17584 = 1;
  }
  this->fields.useAnimNum = num;
  if ( isUpdateName )
  {
    if ( this->fields.baseName )
    {
      effectName = this->fields.effectName;
      v8 = System_Int32__ToString((int)this + 136, 0LL);
      v9 = System_String__Concat_62412480(effectName, (System_String_o *)StringLiteral_16290/*"_"*/, v8, 0LL);
      this->fields.baseName = v9;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseName, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.settedVoiceStr,
    (int64_t)voiceStr,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.voiceCallback = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceCallback, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall CommonEffectComponent__SetVoice_41389264(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.settedVoiceStr,
    (int64_t)voiceStr,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.voiceCallback = callback;
  sub_1BCA784(
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *v18; // x0
  __int64 v19; // x1
  SimpleAnimation_o *v20; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v22; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v25; // x19
  __int64 v26; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_TrackedReference_o *v29; // x19

  if ( (byte_4B1757A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, force, isDestroy);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_16721/*"_loop"*/, v14, v15);
    byte_4B1757A = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0LL);
    return;
  }
  this->fields.callAfterStop = onStoppedCallback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1BCA784(
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  v18 = (System_String_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    v20 = this->fields.simpleAnimationComponent;
    if ( force )
    {
      if ( v20 )
      {
        SimpleAnimation__Stop(this->fields.simpleAnimationComponent, 0LL);
        return;
      }
LABEL_31:
      sub_1BCAA3C(v18, v19);
    }
    v18 = System_String__Concat_62401220(this->fields.baseName, (System_String_o *)StringLiteral_16721/*"_loop"*/, 0LL);
    if ( !v20 )
      goto LABEL_31;
    Item = SimpleAnimation__get_Item(v20, v18, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v25 = Item;
      v26 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v26;
          p_offset += 2;
          if ( !v26 )
            goto LABEL_23;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_23:
        p_method = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 18LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v25, 1LL, *(_QWORD *)(p_method + 8));
    }
  }
  else
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    v18 = (System_String_o *)UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL);
    if ( ((unsigned __int8)v18 & 1) != 0 )
    {
      v22 = this->fields.animationComponent;
      if ( force )
      {
        if ( !v22 )
          goto LABEL_31;
        UnityEngine_Animation__Stop(this->fields.animationComponent, 0LL);
      }
      else
      {
        v18 = System_String__Concat_62401220(this->fields.baseName, (System_String_o *)StringLiteral_16721/*"_loop"*/, 0LL);
        if ( !v22 )
          goto LABEL_31;
        v29 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v22, v18, 0LL);
        v18 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v29, 0LL, 0LL);
        if ( ((unsigned __int8)v18 & 1) != 0 )
        {
          if ( !v29 )
            goto LABEL_31;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v29, 1, 0LL);
        }
      }
    }
  }
}


void __fastcall CommonEffectComponent__Update(CommonEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float totaltime; // s8
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *v10; // x21
  SimpleAnimation_o *v11; // x0
  UnityEngine_Object_o *v12; // x21
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_Object_o *v20; // x21
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  PartyOrganizationUtility_o *p_playAnimation; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Object_o *animationComponent; // x21
  int32_t status; // w8
  struct System_String_o **v31; // x0
  struct System_String_o *requestAnimation; // x1
  UnityEngine_Object_o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct UnityEngine_ParticleSystem_array *particlelist; // x23
  __int64 v41; // x8
  unsigned __int64 v42; // x24
  UnityEngine_Object_o *v43; // x21
  float v44; // s0
  PartyOrganizationUtility_o *p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  __int64 v47; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B1757E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B1757E = 1;
  }
  if ( this->fields.status < 3u )
    return;
  totaltime = this->fields.totaltime;
  this->fields.totaltime = totaltime + RealTime__get_deltaTime(0LL);
  CommonEffectComponent__UpdateTouchAnimation(this, v7);
  p_requestAnimation = &this->fields.requestAnimation;
  if ( !this->fields.requestAnimation )
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL)
      && (p_playAnimation = (PartyOrganizationUtility_o *)&this->fields.playAnimation, this->fields.playAnimation) )
    {
      v11 = this->fields.simpleAnimationComponent;
      if ( !v11 )
        goto LABEL_82;
      if ( SimpleAnimation__CheckPlaying(v11, 0LL) )
        return;
    }
    else
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        goto LABEL_41;
      p_playAnimation = (PartyOrganizationUtility_o *)&this->fields.playAnimation;
      if ( !this->fields.playAnimation )
        goto LABEL_41;
      v11 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v11 )
        goto LABEL_82;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v11, 0LL) )
        return;
    }
    status = this->fields.status;
    if ( status != 6 )
      goto LABEL_42;
    p_playAnimation->klass = 0LL;
    sub_1BCA784(p_playAnimation, 0LL, v23, v24, v25, v26, v27, v28);
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
            sub_1BCA784(p_callAfterStop, 0LL, v23, v24, v25, v26, v27, v28);
            ActionExtensions__Call(callAfterStop, 0LL);
          }
          if ( this->fields.isDestroy )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
            UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
  v10 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    v11 = this->fields.simpleAnimationComponent;
    if ( !v11 )
      goto LABEL_82;
    if ( SimpleAnimation__CheckPlaying(v11, 0LL) )
      return;
  }
  else
  {
    v12 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      v11 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v11 )
        goto LABEL_82;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v11, 0LL) )
        return;
    }
  }
  if ( System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v20 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
      v11 = this->fields.simpleAnimationComponent;
      if ( v11 )
      {
        SimpleAnimation__Play_64539336(v11, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_56;
        v11 = this->fields.simpleAnimationComponent;
        if ( v11 )
        {
          SimpleAnimation__Sample(v11, 0LL);
LABEL_56:
          requestAnimation = this->fields.requestAnimation;
          this->fields.playAnimation = requestAnimation;
          v31 = &this->fields.playAnimation;
          goto LABEL_57;
        }
      }
    }
    else
    {
      v33 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( !UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
        goto LABEL_56;
      v11 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v11 )
      {
        UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v11, this->fields.requestAnimation, 0LL);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_56;
        v11 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v11 )
        {
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v11, 0LL);
          goto LABEL_56;
        }
      }
    }
LABEL_82:
    sub_1BCAA3C(v11, v8);
  }
  this->fields.playAnimation = 0LL;
  v31 = &this->fields.playAnimation;
  requestAnimation = 0LL;
LABEL_57:
  sub_1BCA784((PartyOrganizationUtility_o *)v31, (int64_t)requestAnimation, v14, v15, v16, v17, v18, v19);
  if ( this->fields.status == 6 )
  {
    particlelist = this->fields.particlelist;
    if ( particlelist )
    {
      v41 = *(_QWORD *)&particlelist->max_length;
      if ( (int)v41 >= 1 )
      {
        v42 = 0LL;
        do
        {
          if ( v42 >= (unsigned int)v41 )
            sub_1BCAA44(v11, v8);
          v43 = (UnityEngine_Object_o *)particlelist->m_Items[v42];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
          v11 = (SimpleAnimation_o *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
          if ( ((unsigned __int8)v11 & 1) != 0 )
          {
            if ( !v43 )
              goto LABEL_82;
            UnityEngine_ParticleSystem__Stop_70434692((UnityEngine_ParticleSystem_o *)v43, 0LL);
          }
          LODWORD(v41) = particlelist->max_length;
          ++v42;
        }
        while ( (__int64)v42 < (int)v41 );
      }
    }
    v44 = this->fields.totaltime;
    if ( v44 > this->fields.endtime )
      this->fields.endtime = v44;
  }
  *p_requestAnimation = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.requestAnimation, 0LL, v34, v35, v36, v37, v38, v39);
}


void __fastcall CommonEffectComponent__UpdateTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float touchStartTime; // s8
  CommonEffectComponent_c *v5; // x0
  __int64 v6; // x1
  CommonEffectComponent_c *v7; // x0

  if ( (byte_4B1758C & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectComponent_TypeInfo, method, v2);
    byte_4B1758C = 1;
  }
  if ( this->fields.status == 5 )
  {
    touchStartTime = this->fields.touchStartTime;
    v5 = CommonEffectComponent_TypeInfo;
    if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
      v5 = CommonEffectComponent_TypeInfo;
    }
    if ( touchStartTime > v5->static_fields->DEFAULT_TOUCH_START_TIME
      && !this->fields.isTouching
      && this->fields.touchEffectTime < (float)(this->fields.totaltime - this->fields.touchStartTime)
      && CommonEffectComponent__PlayAnimation(this, 4, v2) )
    {
      v7 = CommonEffectComponent_TypeInfo;
      if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, v6);
        v7 = CommonEffectComponent_TypeInfo;
      }
      this->fields.touchStartTime = v7->static_fields->DEFAULT_TOUCH_START_TIME;
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_CommonEffectComponent__DelayFrameCoroutine_d__78_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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