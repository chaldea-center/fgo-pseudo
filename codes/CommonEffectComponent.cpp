void CommonEffectComponent___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2DF31 & 1) == 0 )
  {
    sub_1C94098(&CommonEffectComponent_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
    sub_1C94098(&StringLiteral_23880/*"start"*/);
    sub_1C94098(&StringLiteral_19148/*"end"*/);
    sub_1C94098(&StringLiteral_24373/*"touch"*/);
    sub_1C94098(&StringLiteral_21556/*"loop"*/);
    byte_4D2DF31 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34EA2E0 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string___ctor__);
  if ( !v1 )
    sub_1C942F0(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_23880/*"start"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_21556/*"loop"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_24373/*"touch"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_19148/*"end"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_CommonEffectComponent_Status__string__Add__);
  CommonEffectComponent_TypeInfo->static_fields->ANIMATION_NAME_TABLE = (struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)CommonEffectComponent_TypeInfo->static_fields,
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

  if ( (byte_4D2DF30 & 1) == 0 )
  {
    sub_1C94098(&CommonEffectComponent_TypeInfo);
    byte_4D2DF30 = 1;
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2DF1B & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    byte_4D2DF1B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.animationComponent,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.simpleAnimationComponent,
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
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2DF29 & 1) == 0 )
  {
    sub_1C94098(&CommonEffectComponent__DelayFrameCoroutine_d__83_TypeInfo);
    byte_4D2DF29 = 1;
  }
  v6 = sub_1C942E4(CommonEffectComponent__DelayFrameCoroutine_d__83_TypeInfo);
  CommonEffectComponent__DelayFrameCoroutine_d__83___ctor(
    (CommonEffectComponent__DelayFrameCoroutine_d__83_o *)v6,
    0,
    0);
  if ( !v6 )
    sub_1C942F0(v7, v8);
  *(_DWORD *)(v6 + 32) = frame;
  *(_QWORD *)(v6 + 40) = action;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 40), (int32_t)action, v9, v10, v11, v12, v13, v14);
  return (System_Collections_IEnumerator_o *)v6;
}


void CommonEffectComponent__ForceLoop(CommonEffectComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CommonEffectComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_ForceLoop.methodPtr)(
    this,
    0,
    this->klass->vtable._7_ForceLoop.method);
}


void CommonEffectComponent__ForceLoop_44523684(
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
  __int64 v18; // x0
  UnityEngine_Object_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_Animation_o *v26; // x20
  UnityEngine_TrackedReference_o *v27; // x20

  if ( (byte_4D2DF17 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    sub_1C94098(&StringLiteral_16623/*"_loop"*/);
    byte_4D2DF17 = 1;
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
        v9 = this->fields.simpleAnimationComponent;
        if ( !v9 )
          goto LABEL_42;
        SimpleAnimation__Stop(v9, 0);
      }
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
        goto LABEL_41;
      v9 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v9 )
        goto LABEL_42;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v9, 0);
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
    v11 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
    {
      v12 = this->fields.simpleAnimationComponent;
      v9 = (SimpleAnimation_o *)System_String__Concat_64417744(
                                  this->fields.baseName,
                                  (System_String_o *)StringLiteral_16623/*"_loop"*/,
                                  0);
      if ( v12 )
      {
        Item = SimpleAnimation__get_Item(v12, (System_String_o *)v9, 0);
        if ( Item )
        {
          klass = Item->klass;
          v15 = Item;
          v16 = *(unsigned __int16 *)&Item->klass->_2.rank;
          if ( *(_WORD *)&Item->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v16;
              p_offset += 2;
              if ( !v16 )
                goto LABEL_26;
            }
            v18 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
          }
          else
          {
LABEL_26:
            v18 = sub_1C6A420(Item, SimpleAnimation_State_TypeInfo, 18);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v18)(v15, 2, *(_QWORD *)(v18 + 8));
        }
        v9 = this->fields.simpleAnimationComponent;
        if ( v9 )
        {
          SimpleAnimation__Stop(v9, 0);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v19 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v19, 0, 0) )
        goto LABEL_40;
      v26 = this->fields.animationComponent;
      v9 = (SimpleAnimation_o *)System_String__Concat_64417744(
                                  this->fields.baseName,
                                  (System_String_o *)StringLiteral_16623/*"_loop"*/,
                                  0);
      if ( v26 )
      {
        v27 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v26, (System_String_o *)v9, 0);
        v9 = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v27, 0, 0);
        if ( ((unsigned __int8)v9 & 1) != 0 )
        {
          if ( !v27 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v27, 2, 0);
        }
        v9 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v9 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v9, 0);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.playAnimation, 0, v20, v21, v22, v23, v24, v25);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1C942F0(v9, v8);
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


void CommonEffectComponent__ForceStart_44522992(
        CommonEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v13; // x20
  UnityEngine_Animation_o *v14; // x0
  __int64 v15; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v18; // x20
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_Animation_o *v30; // x20
  UnityEngine_TrackedReference_o *v31; // x20

  if ( (byte_4D2DF16 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    sub_1C94098(&StringLiteral_16623/*"_loop"*/);
    byte_4D2DF16 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callAfterStart,
    (int32_t)callback,
    (int32_t)callback,
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
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
      {
        v14 = this->fields.animationComponent;
        if ( !v14 )
          goto LABEL_37;
        UnityEngine_Animation__Stop(v14, 0);
      }
    }
    CommonEffectComponent__Init(this, 0, 0, v11);
    return;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v13 = this->fields.simpleAnimationComponent;
    v14 = (UnityEngine_Animation_o *)System_String__Concat_64417744(
                                       this->fields.baseName,
                                       (System_String_o *)StringLiteral_16623/*"_loop"*/,
                                       0);
    if ( v13 )
    {
      Item = SimpleAnimation__get_Item(v13, (System_String_o *)v14, 0);
      if ( Item )
      {
        klass = Item->klass;
        v18 = Item;
        v19 = *(unsigned __int16 *)&Item->klass->_2.rank;
        if ( *(_WORD *)&Item->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v19;
            p_offset += 2;
            if ( !v19 )
              goto LABEL_15;
          }
          v21 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
        }
        else
        {
LABEL_15:
          v21 = sub_1C6A420(Item, SimpleAnimation_State_TypeInfo, 18);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v21)(v18, 2, *(_QWORD *)(v21 + 8));
      }
      v14 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v14 )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)v14, 0);
        goto LABEL_36;
      }
    }
    goto LABEL_37;
  }
  v23 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v23, 0, 0) )
    goto LABEL_36;
  v30 = this->fields.animationComponent;
  v14 = (UnityEngine_Animation_o *)System_String__Concat_64417744(
                                     this->fields.baseName,
                                     (System_String_o *)StringLiteral_16623/*"_loop"*/,
                                     0);
  if ( !v30 )
    goto LABEL_37;
  v31 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v30, (System_String_o *)v14, 0);
  v14 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(v31, 0, 0);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_37;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v31, 2, 0);
  }
  v14 = this->fields.animationComponent;
  if ( !v14 )
LABEL_37:
    sub_1C942F0(v14, v15);
  UnityEngine_Animation__Stop(v14, 0);
LABEL_36:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.playAnimation, 0, v24, v25, v26, v27, v28, v29);
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

  if ( (byte_4D2DF2C & 1) == 0 )
  {
    sub_1C94098(&CommonEffectComponent_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo);
    sub_1C94098(&StringLiteral_16163/*"_"*/);
    byte_4D2DF2C = 1;
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
    v10 = sub_1C6A420(
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
    sub_1C942F0(v5, *(_QWORD *)&status);
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
    v16 = sub_1C6A420(
            v12,
            System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__TypeInfo,
            2);
  }
  v18 = (System_String_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyDictionary_CommonEffectComponent_Status__string__o *, _QWORD, _QWORD))v16)(
                             v12,
                             (unsigned int)status,
                             *(_QWORD *)(v16 + 8));
  return System_String__Concat_64456008(baseName, (System_String_o *)StringLiteral_16163/*"_"*/, v18, 0);
}


void CommonEffectComponent__GetAnimationStateInfo(
        CommonEffectComponent_o *this,
        System_String_o **name,
        float *time,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v11; // x2
  System_String_o *AnimationName; // x22
  UnityEngine_Object_o *animationComponent; // x23
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Animation_o *v21; // x0
  UnityEngine_TrackedReference_o *Item; // x22
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_String_o *baseName; // x1

  if ( (byte_4D2DF2D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DF2D = 1;
  }
  *name = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)name, StringLiteral_1/*""*/, (int32_t)time, (int32_t)method, v4, v5, v6, v7);
  *time = -1.0;
  AnimationName = CommonEffectComponent__GetAnimationName(this, this->fields.status, v11);
  if ( AnimationName || (AnimationName = this->fields.baseName) != 0 )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
    {
      v21 = this->fields.animationComponent;
      if ( !v21 )
        goto LABEL_14;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v21, AnimationName, 0);
      v21 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
      if ( ((unsigned __int8)v21 & 1) != 0 )
      {
        if ( Item )
        {
          v23 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0);
          *name = v23;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)name, (int32_t)v23, v24, v25, v26, v27, v28, v29);
          *time = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)Item, 0);
          return;
        }
LABEL_14:
        sub_1C942F0(v21, v14);
      }
    }
    baseName = this->fields.baseName;
    *name = baseName;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)name, (int32_t)baseName, v15, v16, v17, v18, v19, v20);
  }
}


void CommonEffectComponent__Init(CommonEffectComponent_o *this, bool isSkip, bool isPause, const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o **p_effectName; // x22
  UnityEngine_Object_o *gameObject; // x0
  __int64 v13; // x1
  System_String_o *name; // x0
  char v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_String_o *v21; // x0
  char v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_String_o *v28; // x23
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  char v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_String_o **p_baseName; // x23
  struct System_String_o *v38; // x1
  System_String_o *v39; // x0
  char v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  UnityEngine_Object_o *v46; // x22
  UnityEngine_Object_o *parent; // x22
  UnityEngine_Transform_o *transform; // x22
  int32_t layer; // w0
  const MethodInfo *v50; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v52; // x1
  UnityEngine_Object_o *v53; // x20

  if ( (byte_4D2DF13 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_5854/*"Effect("*/);
    sub_1C94098(&StringLiteral_16163/*"_"*/);
    sub_1C94098(&StringLiteral_756/*")"*/);
    sub_1C94098(&StringLiteral_681/*"(Clone)"*/);
    byte_4D2DF13 = 1;
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
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.effectName, (int32_t)name, v15, v16, v17, v18, v19, v20);
    gameObject = (UnityEngine_Object_o *)*p_effectName;
    if ( !*p_effectName )
      goto LABEL_37;
    if ( System_String__EndsWith((System_String_o *)gameObject, (System_String_o *)StringLiteral_681/*"(Clone)"*/, 0) )
    {
      gameObject = (UnityEngine_Object_o *)*p_effectName;
      if ( !*p_effectName )
        goto LABEL_37;
      v21 = System_String__Substring_64463684(
              (System_String_o *)gameObject,
              0,
              LODWORD(gameObject->fields.m_CachedPtr) - 7,
              0);
      *p_effectName = v21;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.effectName, (int32_t)v21, v22, v23, v24, v25, v26, v27);
    }
  }
  if ( this->fields.useAnimNum >= 1 )
  {
    v28 = *p_effectName;
    v29 = System_Int32__ToString((int)this + 136, 0);
    v30 = System_String__Concat_64456008(v28, (System_String_o *)StringLiteral_16163/*"_"*/, v29, 0);
    *p_effectName = v30;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.effectName, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  }
  p_baseName = &this->fields.baseName;
  if ( !this->fields.baseName )
  {
    v38 = *p_effectName;
    *p_baseName = *p_effectName;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.baseName,
      (int32_t)v38,
      isPause,
      (int32_t)method,
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
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.baseName, (int32_t)v39, v40, v41, v42, v43, v44, v45);
    }
  }
  v46 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  gameObject = (UnityEngine_Object_o *)System_String__Concat_64456008(
                                         (System_String_o *)StringLiteral_5854/*"Effect("*/,
                                         this->fields.effectName,
                                         (System_String_o *)StringLiteral_756/*")"*/,
                                         0);
  if ( !v46 )
    goto LABEL_37;
  UnityEngine_Object__set_name(v46, (System_String_o *)gameObject, 0);
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
    sub_1C942F0(gameObject, v13);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0);
  CommonEffectComponent__SetChildInit(this, transform, layer, v50);
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
    v52 = 3;
    goto LABEL_33;
  }
  if ( this->fields.loop )
  {
    klass = this->klass;
    v52 = 4;
LABEL_33:
    ((void (__fastcall *)(CommonEffectComponent_o *, __int64, const MethodInfo *))klass->vtable._5_NextPlayAnimation.methodPtr)(
      this,
      v52,
      klass->vtable._5_NextPlayAnimation.method);
    return;
  }
  v53 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72110972(v53, 0);
  ((void (__fastcall *)(CommonEffectComponent_o *, const MethodInfo *))this->klass->vtable._10_PlayDestroyEffectCallback.methodPtr)(
    this,
    this->klass->vtable._10_PlayDestroyEffectCallback.method);
}


void CommonEffectComponent__Init_44519904(
        CommonEffectComponent_o *this,
        System_String_o *effectName,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v11; // x3

  if ( !this->fields.status )
  {
    this->fields.effectName = effectName;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.effectName,
      (int32_t)effectName,
      isSkip,
      isPause,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    CommonEffectComponent__Init(this, isSkip, isPause, v11);
  }
}


void CommonEffectComponent__Init_44519976(
        CommonEffectComponent_o *this,
        AssetData_o *data,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  char v14; // w2
  char v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_String_o *name; // x1
  const MethodInfo *v21; // x3

  if ( !this->fields.status )
  {
    this->fields.asset = data;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.asset,
      (int32_t)data,
      isSkip,
      isPause,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    if ( !data )
      sub_1C942F0(v12, v13);
    name = data->fields.name;
    this->fields.effectName = name;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.effectName, (int32_t)name, v14, v15, v16, v17, v18, v19);
    CommonEffectComponent__Init(this, isSkip, isPause, v21);
  }
}


bool CommonEffectComponent__IsTouched(CommonEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isTouched;
}


void CommonEffectComponent__NextPlayAnimation(CommonEffectComponent_o *this, int32_t next, const MethodInfo *method)
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
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  System_Collections_IEnumerator_c *v26; // x8
  __int64 v27; // x9
  System_Collections_IEnumerator_c **v28; // x10
  __int64 v29; // x0
  UnityEngine_AnimationState_o *v30; // x0
  __int64 v31; // x1
  GrandQuestFolderBoardItem_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 v41; // x8
  __int64 v42; // x21
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x21
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x22
  __int64 v59; // x8
  __int64 v60; // x9
  SimpleAnimation_State_c **v61; // x10
  __int64 v62; // x0
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  SimpleAnimation_o *v67; // x20
  SimpleAnimation_State_o *v68; // x21
  GrandQuestFolderBoardItem_o *v69; // x0
  System_Action_o *v70; // x20
  SimpleAnimation_o *v71; // x20
  SimpleAnimation_State_o *v72; // x0
  SimpleAnimation_o *v73; // x20
  SimpleAnimation_State_c *v74; // x8
  __int64 v75; // x9
  SimpleAnimation_State_c **v76; // x10
  __int64 v77; // x0
  UnityEngine_Animation_o *v78; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  GrandQuestFolderBoardItem_o *v80; // x0
  System_Action_o *v81; // x20
  UnityEngine_Animation_o *v82; // x20
  UnityEngine_Animation_o *v83; // x20

  if ( (byte_4D2DF15 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AnimationState_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    sub_1C94098(&StringLiteral_16623/*"_loop"*/);
    sub_1C94098(&StringLiteral_16642/*"_start"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_16607/*"_end"*/);
    byte_4D2DF15 = 1;
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
        p_callAfterStart = (GrandQuestFolderBoardItem_o *)&this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          p_callAfterStart->klass = 0;
          sub_1C9403C(p_callAfterStart, 0, v14, v15, v16, v17, v18, v19);
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
      sub_1C942F0(States, name);
    }
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
    if ( !Enumerator )
      sub_1C942F0(0, v20);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v23;
          p_offset += 4;
          if ( !v23 )
            goto LABEL_24;
        }
        v25 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_24:
        v25 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v25)(
              Enumerator,
              *(_QWORD *)(v25 + 8))
          & 1) == 0 )
        break;
      v26 = Enumerator->klass;
      v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v28 = (System_Collections_IEnumerator_c **)&v26->_1.interfaceOffsets->offset;
        while ( *(v28 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v27;
          v28 += 2;
          if ( !v27 )
            goto LABEL_31;
        }
        v29 = (__int64)&v26->vtable[*(_DWORD *)v28 + 1];
      }
      else
      {
LABEL_31:
        v29 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v30 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v29)(
                                              Enumerator,
                                              *(_QWORD *)(v29 + 8));
      if ( !v30 )
        goto LABEL_135;
      if ( v30->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1C9468C(v30);
LABEL_135:
        sub_1C942F0(v30, v31);
      }
      UnityEngine_AnimationState__get_name(v30, 0);
    }
    v34 = sub_1C941D4(Enumerator, System_IDisposable_TypeInfo);
    if ( v34 )
    {
      v41 = *(_QWORD *)v34;
      v42 = v34;
      v43 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
      {
        v44 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_46;
        }
        v45 = v41 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_46:
        v45 = sub_1C6A420(v34, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
    }
    switch ( next )
    {
      case 3:
        v78 = this->fields.animationComponent;
        States = (__int64)System_String__Concat_64417744(
                            this->fields.baseName,
                            (System_String_o *)StringLiteral_16642/*"_start"*/,
                            0);
        if ( !v78 )
          goto LABEL_136;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v78, (System_String_o *)States, 0);
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
    v80 = (GrandQuestFolderBoardItem_o *)&this->fields.callAfterStart;
    v81 = this->fields.callAfterStart;
    if ( v81 )
    {
      v80->klass = 0;
      sub_1C9403C(v80, 0, v35, v36, v37, v38, v39, v40);
      ActionExtensions__Call(v81, 0);
    }
    if ( this->fields.loop )
    {
      v82 = this->fields.animationComponent;
      States = (__int64)System_String__Concat_64417744(this->fields.baseName, (System_String_o *)StringLiteral_16623/*"_loop"*/, 0);
      if ( !v82 )
        goto LABEL_136;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v82, (System_String_o *)States, 0);
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0, 0) )
      {
        next = 4;
        goto LABEL_126;
      }
    }
LABEL_124:
    v83 = this->fields.animationComponent;
    States = (__int64)System_String__Concat_64417744(this->fields.baseName, (System_String_o *)StringLiteral_16607/*"_end"*/, 0);
    if ( !v83 )
      goto LABEL_136;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v83, (System_String_o *)States, 0);
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
    v12 = sub_1C6A420(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
  }
  v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
  if ( !v47 )
    sub_1C942F0(0, v46);
  while ( 1 )
  {
    v48 = *(_QWORD *)v47;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_53;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_53:
      v51 = sub_1C6A420(v47, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v47;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v54 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_60;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_60:
      v55 = sub_1C6A420(v47, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
    v58 = v56;
    if ( !v56 )
      sub_1C942F0(0, v57);
    v59 = *(_QWORD *)v56;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v61 = (SimpleAnimation_State_c **)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *(v61 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v60;
        v61 += 2;
        if ( !v60 )
          goto LABEL_67;
      }
      v62 = v59 + 16LL * (*(_DWORD *)v61 + 9) + 312;
    }
    else
    {
LABEL_67:
      v62 = sub_1C6A420(v56, SimpleAnimation_State_TypeInfo, 9);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v62)(v58, *(_QWORD *)(v62 + 8));
  }
  v63 = *(_QWORD *)v47;
  v64 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
  {
    v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_74;
    }
    v66 = v63 + 16LL * *v65 + 312;
  }
  else
  {
LABEL_74:
    v66 = sub_1C6A420(v47, System_IDisposable_TypeInfo, 0);
  }
  States = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v47, *(_QWORD *)(v66 + 8));
  if ( next == 3 )
  {
    v67 = this->fields.simpleAnimationComponent;
    States = (__int64)System_String__Concat_64417744(this->fields.baseName, (System_String_o *)StringLiteral_16642/*"_start"*/, 0);
    if ( !v67 )
      goto LABEL_136;
    v68 = SimpleAnimation__get_Item(v67, (System_String_o *)States, 0);
    if ( v68 )
      goto LABEL_87;
    States = (__int64)this->fields.simpleAnimationComponent;
    if ( !States )
      goto LABEL_136;
    v68 = SimpleAnimation__get_Item((SimpleAnimation_o *)States, this->fields.baseName, 0);
    if ( v68 )
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
    v69 = (GrandQuestFolderBoardItem_o *)&this->fields.callAfterStart;
    v70 = this->fields.callAfterStart;
    if ( v70 )
    {
      v69->klass = 0;
      sub_1C9403C(v69, 0, v14, v15, v16, v17, v18, v19);
      ActionExtensions__Call(v70, 0);
    }
    if ( this->fields.loop )
    {
      v71 = this->fields.simpleAnimationComponent;
      States = (__int64)System_String__Concat_64417744(this->fields.baseName, (System_String_o *)StringLiteral_16623/*"_loop"*/, 0);
      if ( !v71 )
        goto LABEL_136;
      v72 = SimpleAnimation__get_Item(v71, (System_String_o *)States, 0);
      if ( v72 )
      {
        v68 = v72;
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
  v73 = this->fields.simpleAnimationComponent;
  States = (__int64)System_String__Concat_64417744(this->fields.baseName, (System_String_o *)StringLiteral_16607/*"_end"*/, 0);
  if ( !v73 )
    goto LABEL_136;
  States = (__int64)SimpleAnimation__get_Item(v73, (System_String_o *)States, 0);
  v68 = (SimpleAnimation_State_o *)States;
  next = 6;
  if ( !States )
    goto LABEL_101;
LABEL_96:
  v74 = v68->klass;
  v75 = *(unsigned __int16 *)&v68->klass->_2.rank;
  if ( *(_WORD *)&v68->klass->_2.rank )
  {
    v76 = (SimpleAnimation_State_c **)&v74->_1.interfaceOffsets->offset;
    while ( *(v76 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v75;
      v76 += 2;
      if ( !v75 )
        goto LABEL_100;
    }
    v77 = (__int64)&v74->vtable[*(_DWORD *)v76 + 9];
  }
  else
  {
LABEL_100:
    v77 = sub_1C6A420(v68, SimpleAnimation_State_TypeInfo, 9);
  }
  States = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v77)(v68, *(_QWORD *)(v77 + 8));
  name = (struct System_String_o *)States;
LABEL_104:
  if ( !this )
    goto LABEL_136;
LABEL_130:
  this->fields.requestAnimation = name;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.requestAnimation,
    (int32_t)name,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.status = next;
}


void CommonEffectComponent__NotifyEvent(
        CommonEffectComponent_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  if ( (byte_4D2DF1E & 1) == 0 )
  {
    sub_1C94098(&Method_ActionExtensions_Call_string___);
    byte_4D2DF1E = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.notifyEventCallback,
    (Il2CppObject *)eventName,
    (const MethodInfo_30E5920 *)Method_ActionExtensions_Call_string___);
}


void CommonEffectComponent__OnDestroy(CommonEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *asset; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2DF1D & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2DF1D = 1;
  }
  asset = this->fields.asset;
  if ( asset )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41285308(asset, 0);
    this->fields.asset = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.asset, 0, v4, v5, v6, v7, v8, v9);
  }
  this->fields.status = 2;
}


void CommonEffectComponent__OnRelease(CommonEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  CommonEffectComponent_o *v4; // x0
  const MethodInfo *v5; // x3
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4D2DF28 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CommonEffectComponent__OnRelease_b__82_0__);
    byte_4D2DF28 = 1;
  }
  *(_WORD *)&this->fields.isTouching = 256;
  v3 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_CommonEffectComponent__OnRelease_b__82_0__, 0);
  v6 = CommonEffectComponent__DelayFrameCoroutine(v4, 1, v3, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v6, 0);
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
  __int64 v8; // x1
  UnityEngine_Animation_o *name; // x0
  UnityEngine_TrackedReference_o *Item; // x21
  bool result; // w0
  UnityEngine_Animation_o *v12; // x22
  struct System_String_o *v13; // x0
  struct System_String_o **p_playAnimation; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D2DF2B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DF2B = 1;
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
    || (v12 = this->fields.animationComponent,
        name = (UnityEngine_Animation_o *)UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0),
        !v12) )
  {
LABEL_13:
    sub_1C942F0(name, v8);
  }
  UnityEngine_Animation__Play_71854448(v12, (System_String_o *)name, 0);
  v13 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0);
  this->fields.playAnimation = v13;
  p_playAnimation = &this->fields.playAnimation;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_playAnimation, (int32_t)v13, v15, v16, v17, v18, v19, v20);
  result = 1;
  *((_DWORD *)p_playAnimation - 4) = next;
  return result;
}


void CommonEffectComponent__PlaySe(CommonEffectComponent_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_array *IsNullOrEmpty; // x0
  __int64 v5; // x1
  System_String_array *v6; // x19
  int max_length; // w20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  unsigned int v10; // w8
  System_String_o *v11; // x1
  SePlayer_o *v12; // x0
  SePlayer_o *v13; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4D2DF1F & 1) == 0 )
  {
    sub_1C94098(&Method_CommonEffectComponent_PlaySe__);
    byte_4D2DF1F = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name )
      goto LABEL_17;
    IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_17;
    v6 = IsNullOrEmpty;
    max_length = IsNullOrEmpty->max_length;
    v8 = Method_CommonEffectComponent_PlaySe__;
    if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySe__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C940B0(Method_CommonEffectComponent_PlaySe__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C9407C(v8, v8[4]);
    v10 = v6->max_length;
    if ( !v10 )
      goto LABEL_18;
    v11 = v6->m_Items[0];
    if ( max_length < 2 )
    {
      OverwriteAssetSoundName__PlaySe(v9, v11, 0, 0);
      return;
    }
    if ( v10 <= 1 )
LABEL_18:
      sub_1C942F8(v9);
    v12 = OverwriteAssetSoundName__PlaySe_42182820(v9, v11, v6->m_Items[1], 1.0, 0, 0, 0);
    result = 0.0;
    if ( SLODWORD(v6->max_length) >= 3 )
    {
      v13 = v12;
      IsNullOrEmpty = (System_String_array *)System_Single__TryParse(v6->m_Items[2], &result, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v13 )
        {
          SePlayer__set_Pitch(v13, result, 0);
          return;
        }
LABEL_17:
        sub_1C942F0(IsNullOrEmpty, v5);
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

  if ( (byte_4D2DF20 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C94098(&Method_CommonEffectComponent_PlaySeContinue__);
    byte_4D2DF20 = 1;
  }
  if ( !name || (this = (CommonEffectComponent_o *)System_String__Split(name, 0x3Au, 0, 0)) == 0 )
    sub_1C942F0(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeContinue__;
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeContinue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C940B0(Method_CommonEffectComponent_PlaySeContinue__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C9407C(v6, v6[4]);
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
    sub_1C942F8(v7);
  OverwriteAssetSoundName__PlaySeContinue_42181720(v7, v9, *(System_String_o **)&v4->fields.touchEffectTime, 0, 0);
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

  if ( (byte_4D2DF22 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C94098(&Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__);
    byte_4D2DF22 = 1;
  }
  if ( !soundInfo || (this = (CommonEffectComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0)) == 0 )
    sub_1C942F0(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__;
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C940B0(Method_CommonEffectComponent_PlaySeContinueIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C9407C(v6, v6[4]);
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
    sub_1C942F8(v7);
  OverwriteAssetSoundName__PlaySeContinue_42181720(v7, v9, *(System_String_o **)&v4->fields.touchEffectTime, 1, 0);
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

  if ( (byte_4D2DF21 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C94098(&Method_CommonEffectComponent_PlaySeIgnorePreDelay__);
    byte_4D2DF21 = 1;
  }
  if ( !soundInfo || (this = (CommonEffectComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0)) == 0 )
    sub_1C942F0(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_CommonEffectComponent_PlaySeIgnorePreDelay__;
  if ( (*((_BYTE *)Method_CommonEffectComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C940B0(Method_CommonEffectComponent_PlaySeIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C9407C(v6, v6[4]);
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
    sub_1C942F8(v7);
  OverwriteAssetSoundName__PlaySe_42182820(v7, v9, *(System_String_o **)&v4->fields.touchEffectTime, 1.0, 0, 1, 0);
}


void CommonEffectComponent__PlaySettedVoice(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *settedVoiceStr; // x1

  settedVoiceStr = this->fields.settedVoiceStr;
  if ( settedVoiceStr )
    CommonEffectComponent__PlayVoice_44527740(this, settedVoiceStr, this->fields.voiceCallback, v2);
}


bool CommonEffectComponent__PlaySimpleAnimation(CommonEffectComponent_o *this, int32_t next, const MethodInfo *method)
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
  __int64 v16; // x0
  SimpleAnimation_State_c *v17; // x8
  __int64 v18; // x9
  SimpleAnimation_State_c **v19; // x10
  __int64 v20; // x0
  struct System_String_o *v21; // x0
  struct System_String_o **p_playAnimation; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4D2DF2A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    byte_4D2DF2A = 1;
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
    v10 = this->fields.simpleAnimationComponent;
    if ( !v10 )
      goto LABEL_25;
    Item = SimpleAnimation__get_Item(v10, AnimationName, 0);
    if ( !Item )
      return (char)Item;
    klass = Item->klass;
    v12 = this->fields.simpleAnimationComponent;
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
      v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9];
    }
    else
    {
LABEL_15:
      v16 = sub_1C6A420(Item, SimpleAnimation_State_TypeInfo, 9);
    }
    v10 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v16)(
                                 v13,
                                 *(_QWORD *)(v16 + 8));
    if ( !v12 )
LABEL_25:
      sub_1C942F0(v10, v8);
    SimpleAnimation__Play_67362784(v12, (System_String_o *)v10, 0);
    v17 = v13->klass;
    v18 = *(unsigned __int16 *)&v13->klass->_2.rank;
    if ( *(_WORD *)&v13->klass->_2.rank )
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
      v20 = sub_1C6A420(v13, SimpleAnimation_State_TypeInfo, 9);
    }
    v21 = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v20)(
                                      v13,
                                      *(_QWORD *)(v20 + 8));
    this->fields.playAnimation = v21;
    p_playAnimation = &this->fields.playAnimation;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_playAnimation, (int32_t)v21, v23, v24, v25, v26, v27, v28);
    LOBYTE(Item) = 1;
    *((_DWORD *)p_playAnimation - 4) = next;
  }
  return (char)Item;
}


void CommonEffectComponent__PlayVoice(CommonEffectComponent_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CommonEffectComponent__PlayVoice_44527740(this, name, 0, v3);
}


void CommonEffectComponent__PlayVoice_44527740(
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
  float v11; // s0
  float v12; // s8
  System_String_o *v13; // x20
  System_String_o *v14; // x21

  if ( (byte_4D2DF23 & 1) == 0 )
  {
    sub_1C94098(&SoundManager_TypeInfo);
    byte_4D2DF23 = 1;
  }
  IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(name, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !name || (IsNullOrEmpty = System_String__Split(name, 0x3Au, 0, 0)) == 0 )
      sub_1C942F0(IsNullOrEmpty, v7);
    max_length = IsNullOrEmpty->max_length;
    v9 = IsNullOrEmpty;
    if ( (int)max_length < 2 )
    {
      if ( (_DWORD)max_length )
      {
        v10 = IsNullOrEmpty->m_Items[0];
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playVoice_42280884(v10, callback, 0, 0);
        return;
      }
LABEL_19:
      sub_1C942F8(IsNullOrEmpty);
    }
    if ( (_DWORD)max_length == 2 )
    {
      v12 = 1.0;
    }
    else
    {
      v11 = System_Single__Parse(IsNullOrEmpty->m_Items[2], 0);
      max_length = v9->max_length;
      v12 = v11;
    }
    if ( (unsigned int)max_length < 2 )
      goto LABEL_19;
    v14 = v9->m_Items[0];
    v13 = v9->m_Items[1];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_42281128(v14, v13, v12, callback, 0, 0);
  }
}


void CommonEffectComponent__ResetPrewarmParticleList(CommonEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent_o *v2; // x19
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x1
  UnityEngine_ParticleSystem_MainModule_o v8; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4D2DF26 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DF26 = 1;
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
            sub_1C942F8(this);
          v6 = (UnityEngine_Object_o *)particlelist->m_Items[v5];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (CommonEffectComponent_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v6 )
              sub_1C942F0(this, v7);
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v6, 0).fields.m_ParticleSystem;
            v8.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem_MainModule__get_prewarm(v8, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (CommonEffectComponent_o *)UnityEngine_ParticleSystem__get_isPlaying(
                                                  (UnityEngine_ParticleSystem_o *)v6,
                                                  0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                UnityEngine_ParticleSystem__Simulate_72396512((UnityEngine_ParticleSystem_o *)v6, 1.0, 0);
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
  if ( (byte_4D2DF14 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DF14 = 1;
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
          UnityEngine_Object__Destroy_72110972(gameObject, 0);
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

  if ( (byte_4D2DF19 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DF19 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_1C942F0(0, v4);
    SimpleAnimation__Rewind(v5, 0);
  }
}


void CommonEffectComponent__SetChildInit(
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
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 naturalAligment; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  v6 = this;
  if ( (byte_4D2DF1A & 1) == 0 )
  {
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    this = (CommonEffectComponent_o *)sub_1C94098(&UnityEngine_Transform_TypeInfo);
    byte_4D2DF1A = 1;
  }
  if ( !tf
    || (this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_35:
    sub_1C942F0(this, tf);
  }
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0) != layer )
  {
    this = (CommonEffectComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
    if ( !Enumerator )
      sub_1C942F0(0, v7);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_12;
        }
        v12 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_12:
        v12 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(
              Enumerator,
              *(_QWORD *)(v12 + 8))
          & 1) == 0 )
        break;
      v13 = Enumerator->klass;
      v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
        while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v14;
          v15 += 2;
          if ( !v14 )
            goto LABEL_19;
        }
        v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
      }
      else
      {
LABEL_19:
        v16 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                         Enumerator,
                                         *(_QWORD *)(v16 + 8));
      if ( v17 )
      {
        naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
        if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_1C9468C(v17);
          goto LABEL_35;
        }
      }
      CommonEffectComponent__SetChildInit(v6, v17, layer, v18);
    }
    v20 = sub_1C941D4(Enumerator, System_IDisposable_TypeInfo);
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
        v25 = sub_1C6A420(v20, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.notifyEventCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.notifyEventCallback,
    (int32_t)callback,
    (int32_t)method,
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
  float v5; // s8

  if ( (byte_4D2DF25 & 1) == 0 )
  {
    this = (CommonEffectComponent_o *)sub_1C94098(&SoundManager_TypeInfo);
    byte_4D2DF25 = 1;
  }
  if ( !str || (this = (CommonEffectComponent_o *)System_String__Split(str, 0x3Au, 0, 0)) == 0 )
    sub_1C942F0(this, str);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.touchCallback = inputTouchCallback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.touchCallback,
    (int32_t)inputTouchCallback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2DF24 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16163/*"_"*/);
    byte_4D2DF24 = 1;
  }
  this->fields.useAnimNum = num;
  if ( isUpdateName )
  {
    if ( this->fields.baseName )
    {
      effectName = this->fields.effectName;
      v8 = System_Int32__ToString((int)this + 136, 0);
      v9 = System_String__Concat_64456008(effectName, (System_String_o *)StringLiteral_16163/*"_"*/, v8, 0);
      this->fields.baseName = v9;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.baseName, (int32_t)v9, v10, v11, v12, v13, v14, v15);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  this->fields.settedVoiceStr = voiceStr;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.settedVoiceStr,
    (int32_t)voiceStr,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.voiceCallback = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.voiceCallback, 0, v9, v10, v11, v12, v13, v14);
}


void CommonEffectComponent__SetVoice_44528088(
        CommonEffectComponent_o *this,
        System_String_o *voiceStr,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  this->fields.settedVoiceStr = voiceStr;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.settedVoiceStr,
    (int32_t)voiceStr,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.voiceCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.voiceCallback,
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


void CommonEffectComponent__StopInternal(
        CommonEffectComponent_o *this,
        bool force,
        bool isDestroy,
        System_Action_o *onStoppedCallback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *v13; // x0
  __int64 v14; // x1
  SimpleAnimation_o *v15; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v17; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v20; // x19
  __int64 v21; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v23; // x0
  UnityEngine_TrackedReference_o *v24; // x19

  if ( (byte_4D2DF18 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    sub_1C94098(&StringLiteral_16623/*"_loop"*/);
    byte_4D2DF18 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(onStoppedCallback, 0);
    return;
  }
  this->fields.callAfterStop = onStoppedCallback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callAfterStop,
    (int32_t)onStoppedCallback,
    isDestroy,
    (int32_t)onStoppedCallback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = (System_String_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0);
  if ( ((unsigned __int8)v13 & 1) != 0 )
  {
    v15 = this->fields.simpleAnimationComponent;
    if ( force )
    {
      if ( v15 )
      {
        SimpleAnimation__Stop(this->fields.simpleAnimationComponent, 0);
        return;
      }
LABEL_31:
      sub_1C942F0(v13, v14);
    }
    v13 = System_String__Concat_64417744(this->fields.baseName, (System_String_o *)StringLiteral_16623/*"_loop"*/, 0);
    if ( !v15 )
      goto LABEL_31;
    Item = SimpleAnimation__get_Item(v15, v13, 0);
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
            goto LABEL_23;
        }
        v23 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
      }
      else
      {
LABEL_23:
        v23 = sub_1C6A420(Item, SimpleAnimation_State_TypeInfo, 18);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v23)(v20, 1, *(_QWORD *)(v23 + 8));
    }
  }
  else
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = (System_String_o *)UnityEngine_Object__op_Inequality(animationComponent, 0, 0);
    if ( ((unsigned __int8)v13 & 1) != 0 )
    {
      v17 = this->fields.animationComponent;
      if ( force )
      {
        if ( !v17 )
          goto LABEL_31;
        UnityEngine_Animation__Stop(this->fields.animationComponent, 0);
      }
      else
      {
        v13 = System_String__Concat_64417744(this->fields.baseName, (System_String_o *)StringLiteral_16623/*"_loop"*/, 0);
        if ( !v17 )
          goto LABEL_31;
        v24 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v17, v13, 0);
        v13 = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v24, 0, 0);
        if ( ((unsigned __int8)v13 & 1) != 0 )
        {
          if ( !v24 )
            goto LABEL_31;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v24, 1, 0);
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
  __int64 v6; // x1
  SimpleAnimation_o *v7; // x20
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Animation_o *v9; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v11; // x20
  bool v12; // w20

  if ( (byte_4D2DF2F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_16623/*"_loop"*/);
    byte_4D2DF2F = 1;
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
    v9 = this->fields.animationComponent;
    v5 = System_String__Concat_64417744(this->fields.baseName, (System_String_o *)StringLiteral_16623/*"_loop"*/, 0);
    if ( v9 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v9, v5, 0);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0, 0) )
        goto LABEL_19;
      v11 = this->fields.animationComponent;
      v5 = System_String__Concat_64417744(this->fields.baseName, (System_String_o *)StringLiteral_16623/*"_loop"*/, 0);
      if ( v11 )
      {
        if ( !UnityEngine_Animation__IsPlaying(v11, v5, 0) )
          goto LABEL_19;
LABEL_18:
        v12 = 1;
        ((void (__fastcall *)(CommonEffectComponent_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._8_Stop.methodPtr)(
          this,
          1,
          0,
          this->klass->vtable._8_Stop.method);
        return v12;
      }
    }
LABEL_24:
    sub_1C942F0(v5, v6);
  }
  v4 = this->fields.simpleAnimationComponent;
  v5 = System_String__Concat_64417744(this->fields.baseName, (System_String_o *)StringLiteral_16623/*"_loop"*/, 0);
  if ( !v4 )
    goto LABEL_24;
  if ( !SimpleAnimation__get_Item(v4, v5, 0) )
    goto LABEL_19;
  v7 = this->fields.simpleAnimationComponent;
  v5 = System_String__Concat_64417744(this->fields.baseName, (System_String_o *)StringLiteral_16623/*"_loop"*/, 0);
  if ( !v7 )
    goto LABEL_24;
  if ( SimpleAnimation__IsPlaying(v7, v5, 0) )
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
  __int64 v6; // x1
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x21
  UnityEngine_Object_o *v10; // x19

  if ( (byte_4D2DF27 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DF27 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.particlelist, 0);
  if ( !IsNullOrEmpty )
  {
    particlelist = this->fields.particlelist;
    if ( !particlelist )
LABEL_18:
      sub_1C942F0(IsNullOrEmpty, v6);
    max_length = particlelist->max_length;
    if ( max_length && (int)max_length >= 1 )
    {
      v9 = 0;
      do
      {
        if ( v9 >= (unsigned int)max_length )
          sub_1C942F8(IsNullOrEmpty);
        v10 = (UnityEngine_Object_o *)particlelist->m_Items[v9];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        IsNullOrEmpty = UnityEngine_Object__op_Equality(v10, 0, 0);
        if ( !IsNullOrEmpty )
        {
          if ( !v10 )
            goto LABEL_18;
          IsNullOrEmpty = UnityEngine_ParticleSystem__get_isPlaying((UnityEngine_ParticleSystem_o *)v10, 0);
          if ( IsNullOrEmpty )
          {
            UnityEngine_ParticleSystem__Simulate_72396512((UnityEngine_ParticleSystem_o *)v10, syncTime, 0);
            UnityEngine_ParticleSystem__Play_72396668((UnityEngine_ParticleSystem_o *)v10, 0);
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
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *v7; // x21
  __int64 v8; // x1
  SimpleAnimation_o *v9; // x0
  UnityEngine_Object_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  GrandQuestFolderBoardItem_o *p_playAnimation; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_Object_o *animationComponent; // x21
  int32_t status; // w8
  struct System_String_o **v28; // x0
  struct System_String_o *requestAnimation; // x1
  UnityEngine_Object_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct UnityEngine_ParticleSystem_array *particlelist; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v39; // x24
  UnityEngine_Object_o *v40; // x21
  float v41; // s0
  GrandQuestFolderBoardItem_o *p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4D2DF1C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DF1C = 1;
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
      && (p_playAnimation = (GrandQuestFolderBoardItem_o *)&this->fields.playAnimation, this->fields.playAnimation) )
    {
      v9 = this->fields.simpleAnimationComponent;
      if ( !v9 )
        goto LABEL_85;
      if ( SimpleAnimation__CheckPlaying(v9, 0) )
        return;
    }
    else
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
        goto LABEL_44;
      p_playAnimation = (GrandQuestFolderBoardItem_o *)&this->fields.playAnimation;
      if ( !this->fields.playAnimation )
        goto LABEL_44;
      v9 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v9 )
        goto LABEL_85;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v9, 0) )
        return;
    }
    status = this->fields.status;
    if ( status != 6 )
      goto LABEL_45;
    p_playAnimation->klass = 0;
    sub_1C9403C(p_playAnimation, 0, v20, v21, v22, v23, v24, v25);
LABEL_44:
    status = this->fields.status;
LABEL_45:
    if ( status == 6 )
    {
      if ( !this->fields.isEndless )
      {
        if ( (float)(this->fields.endtime + this->fields.losttime) < this->fields.totaltime )
        {
          p_callAfterStop = (GrandQuestFolderBoardItem_o *)&this->fields.callAfterStop;
          callAfterStop = this->fields.callAfterStop;
          if ( callAfterStop )
          {
            p_callAfterStop->klass = 0;
            sub_1C9403C(p_callAfterStop, 0, v20, v21, v22, v23, v24, v25);
            ActionExtensions__Call(callAfterStop, 0);
          }
          if ( this->fields.isDestroy )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_72110972(gameObject, 0);
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
    v9 = this->fields.simpleAnimationComponent;
    if ( !v9 )
      goto LABEL_85;
    if ( SimpleAnimation__CheckPlaying(v9, 0) )
      return;
  }
  else
  {
    v10 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
    {
      v9 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( !v9 )
        goto LABEL_85;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v9, 0) )
        return;
    }
  }
  if ( System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    v17 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
    {
      v9 = this->fields.simpleAnimationComponent;
      if ( v9 )
      {
        SimpleAnimation__Play_67362784(v9, this->fields.requestAnimation, 0);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_59;
        v9 = this->fields.simpleAnimationComponent;
        if ( v9 )
        {
          SimpleAnimation__Sample(v9, 0);
LABEL_59:
          requestAnimation = this->fields.requestAnimation;
          this->fields.playAnimation = requestAnimation;
          v28 = &this->fields.playAnimation;
          goto LABEL_60;
        }
      }
    }
    else
    {
      v30 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v30, 0, 0) )
        goto LABEL_59;
      v9 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v9 )
      {
        UnityEngine_Animation__Play_71854448((UnityEngine_Animation_o *)v9, this->fields.requestAnimation, 0);
        if ( this->fields.status != 3 || !this->fields._IsOnSublayer_k__BackingField )
          goto LABEL_59;
        v9 = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( v9 )
        {
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v9, 0);
          goto LABEL_59;
        }
      }
    }
LABEL_85:
    sub_1C942F0(v9, v8);
  }
  this->fields.playAnimation = 0;
  v28 = &this->fields.playAnimation;
  LODWORD(requestAnimation) = 0;
LABEL_60:
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v28, (int32_t)requestAnimation, v11, v12, v13, v14, v15, v16);
  if ( this->fields.status == 6 )
  {
    particlelist = this->fields.particlelist;
    if ( particlelist )
    {
      max_length = particlelist->max_length;
      if ( (int)max_length >= 1 )
      {
        v39 = 0;
        do
        {
          if ( v39 >= (unsigned int)max_length )
            sub_1C942F8(v9);
          v40 = (UnityEngine_Object_o *)particlelist->m_Items[v39];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v9 = (SimpleAnimation_o *)UnityEngine_Object__op_Inequality(v40, 0, 0);
          if ( ((unsigned __int8)v9 & 1) != 0 )
          {
            if ( !v40 )
              goto LABEL_85;
            UnityEngine_ParticleSystem__Stop_72397020((UnityEngine_ParticleSystem_o *)v40, 0);
          }
          LODWORD(max_length) = particlelist->max_length;
          ++v39;
        }
        while ( (__int64)v39 < (int)max_length );
      }
    }
    v41 = this->fields.totaltime;
    if ( v41 > this->fields.endtime )
      this->fields.endtime = v41;
  }
  *p_requestAnimation = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.requestAnimation, 0, v31, v32, v33, v34, v35, v36);
}


void CommonEffectComponent__UpdateTouchAnimation(CommonEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float touchStartTime; // s8
  CommonEffectComponent_c *v5; // x0
  CommonEffectComponent_c *v6; // x0

  if ( (byte_4D2DF2E & 1) == 0 )
  {
    sub_1C94098(&CommonEffectComponent_TypeInfo);
    byte_4D2DF2E = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_CommonEffectComponent__DelayFrameCoroutine_d__83_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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