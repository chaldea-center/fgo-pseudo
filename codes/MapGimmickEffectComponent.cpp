void __fastcall MapGimmickEffectComponent___ctor(MapGimmickEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BC47D0 & 1) == 0 )
  {
    sub_1C1ABD4(&CommonEffectComponent_TypeInfo, method);
    byte_4BC47D0 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickEffectComponent__ForceLoop(
        MapGimmickEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t status; // w8
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v8; // x1
  SimpleAnimation_o *AnimationName; // x0
  UnityEngine_Object_o *v10; // x20
  const MethodInfo *v11; // x2
  SimpleAnimation_o *v12; // x20
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v15; // x20
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *v19; // x20
  const MethodInfo *v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Animation_o *v26; // x20
  UnityEngine_TrackedReference_o *v27; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_4BC47CE & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_1C1ABD4(&SimpleAnimation_State_TypeInfo, v5);
    byte_4BC47CE = 1;
  }
  status = this->fields.status;
  if ( !status )
  {
    CommonEffectComponent__Init((CommonEffectComponent_o *)this, 0, 0, 0LL);
    if ( isOverWrite )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      {
        AnimationName = this->fields.simpleAnimationComponent;
        if ( !AnimationName )
          goto LABEL_42;
        SimpleAnimation__Stop(AnimationName, 0LL);
      }
      else
      {
        animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
          goto LABEL_41;
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( !AnimationName )
          goto LABEL_42;
        UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
      }
    }
LABEL_41:
    ((void (__fastcall *)(MapGimmickEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  if ( status != 2 )
  {
    v10 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
      v12 = this->fields.simpleAnimationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v11);
      if ( v12 )
      {
        Item = SimpleAnimation__get_Item(v12, (System_String_o *)AnimationName, 0LL);
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
                goto LABEL_21;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_21:
            p_method = sub_1C6CBB4(Item, SimpleAnimation_State_TypeInfo, 18LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
            v15,
            2LL,
            *(_QWORD *)(p_method + 8));
        }
        AnimationName = this->fields.simpleAnimationComponent;
        if ( AnimationName )
        {
          SimpleAnimation__Stop(AnimationName, 0LL);
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
      v26 = this->fields.animationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v20);
      if ( v26 )
      {
        v27 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v26,
                                                  (System_String_o *)AnimationName,
                                                  0LL);
        AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v27, 0LL, 0LL);
        if ( ((unsigned __int8)AnimationName & 1) != 0 )
        {
          if ( !v27 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v27, 2, 0LL);
        }
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( AnimationName )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0LL;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields.playAnimation,
            0LL,
            (int64_t)v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1C1AE30(AnimationName, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickEffectComponent__ForceStart(
        MapGimmickEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  const MethodInfo *v13; // x2
  SimpleAnimation_o *v14; // x20
  SimpleAnimation_o *AnimationName; // x0
  __int64 v16; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v19; // x20
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v24; // x20
  const MethodInfo *v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_Animation_o *v31; // x20
  UnityEngine_TrackedReference_o *v32; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_4BC47CD & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_1C1ABD4(&SimpleAnimation_State_TypeInfo, v11);
    byte_4BC47CD = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_1C1AB78(
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
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      {
        AnimationName = this->fields.simpleAnimationComponent;
        if ( !AnimationName )
          goto LABEL_42;
        SimpleAnimation__Stop(AnimationName, 0LL);
      }
      else
      {
        animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        {
          AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
          if ( !AnimationName )
            goto LABEL_42;
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
        }
      }
    }
    CommonEffectComponent__Init((CommonEffectComponent_o *)this, 0, 0, 0LL);
    return;
  }
  v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    v14 = this->fields.simpleAnimationComponent;
    AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v13);
    if ( v14 )
    {
      Item = SimpleAnimation__get_Item(v14, (System_String_o *)AnimationName, 0LL);
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
              goto LABEL_15;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_15:
          p_method = sub_1C6CBB4(Item, SimpleAnimation_State_TypeInfo, 18LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
          v19,
          2LL,
          *(_QWORD *)(p_method + 8));
      }
      AnimationName = this->fields.simpleAnimationComponent;
      if ( AnimationName )
      {
        SimpleAnimation__Stop(AnimationName, 0LL);
        goto LABEL_41;
      }
    }
    goto LABEL_42;
  }
  v24 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    goto LABEL_41;
  v31 = this->fields.animationComponent;
  AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v25);
  if ( !v31 )
    goto LABEL_42;
  v32 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v31, (System_String_o *)AnimationName, 0LL);
  AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v32, 0LL, 0LL);
  if ( ((unsigned __int8)AnimationName & 1) != 0 )
  {
    if ( !v32 )
      goto LABEL_42;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v32, 2, 0LL);
  }
  AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
  if ( !AnimationName )
LABEL_42:
    sub_1C1AE30(AnimationName, v16);
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_41:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.playAnimation, 0LL, (int64_t)v25, v26, v27, v28, v29, v30);
  ((void (__fastcall *)(MapGimmickEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
    this,
    3LL,
    this->klass->vtable._6_ForceStart.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MapGimmickEffectComponent__GetAnimationName(
        MapGimmickEffectComponent_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  __int64 v10; // x1
  UnityEngine_Animation_o *v11; // x0
  UnityEngine_TrackedReference_o *v12; // x0
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v18; // x20
  UnityEngine_TrackedReference_o *v19; // x0
  UnityEngine_Object_o *v20; // x20
  System_String_o *baseName; // x0
  __int64 *v22; // x8

  if ( (byte_4BC47CB & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&status);
    sub_1C1ABD4(&string_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_16820/*"_loop"*/, v6);
    sub_1C1ABD4(&StringLiteral_16841/*"_start"*/, v7);
    sub_1C1ABD4(&StringLiteral_16805/*"_end"*/, v8);
    byte_4BC47CB = 1;
  }
  if ( status == 6 )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.endAnimationName, 0LL) )
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
        v11 = this->fields.animationComponent;
        if ( !v11 )
          goto LABEL_47;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   v11,
                                                   this->fields.endAnimationName,
                                                   0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
          return this->fields.endAnimationName;
      }
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      {
        v11 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
        if ( !v11 )
          goto LABEL_47;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v11, this->fields.endAnimationName, 0LL) )
          return this->fields.endAnimationName;
      }
    }
    baseName = this->fields.baseName;
    v22 = &StringLiteral_16805/*"_end"*/;
    return System_String__Concat_63040368(baseName, (System_String_o *)*v22, 0LL);
  }
  if ( status == 4 )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.loopAnimationName, 0LL) )
    {
      v18 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
      {
        v11 = this->fields.animationComponent;
        if ( !v11 )
          goto LABEL_47;
        v19 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v11,
                                                  this->fields.loopAnimationName,
                                                  0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v19, 0LL, 0LL) )
          return this->fields.loopAnimationName;
      }
      v20 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
      {
        v11 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
        if ( !v11 )
          goto LABEL_47;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v11, this->fields.loopAnimationName, 0LL) )
          return this->fields.loopAnimationName;
      }
    }
    baseName = this->fields.baseName;
    v22 = &StringLiteral_16820/*"_loop"*/;
    return System_String__Concat_63040368(baseName, (System_String_o *)*v22, 0LL);
  }
  if ( status != 3 )
    return string_TypeInfo->static_fields->Empty;
  if ( System_String__IsNullOrEmpty(this->fields.startAnimationName, 0LL) )
    goto LABEL_43;
  v9 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    v11 = this->fields.animationComponent;
    if ( !v11 )
      goto LABEL_47;
    v12 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v11, this->fields.startAnimationName, 0LL);
    if ( UnityEngine_TrackedReference__op_Inequality(v12, 0LL, 0LL) )
      return this->fields.startAnimationName;
  }
  v13 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( v11 )
    {
      if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v11, this->fields.startAnimationName, 0LL) )
        return this->fields.startAnimationName;
      goto LABEL_43;
    }
LABEL_47:
    sub_1C1AE30(v11, v10);
  }
LABEL_43:
  baseName = this->fields.baseName;
  v22 = &StringLiteral_16841/*"_start"*/;
  return System_String__Concat_63040368(baseName, (System_String_o *)*v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickEffectComponent__NextPlayAnimation(
        MapGimmickEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  SimpleAnimation_o *v14; // x20
  System_String_o *AnimationName; // x0
  __int64 v16; // x1
  SimpleAnimation_State_o *Item; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v19; // x20
  UnityEngine_TrackedReference_o *v20; // x21
  PartyOrganizationUtility_o *v21; // x0
  System_Action_o *v22; // x20
  PartyOrganizationUtility_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  SimpleAnimation_o *v25; // x20
  SimpleAnimation_State_o *v26; // x0
  SimpleAnimation_o *v27; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  PartyOrganizationUtility_o *v32; // x0
  System_Action_o *v33; // x20
  UnityEngine_Animation_o *v34; // x20
  UnityEngine_Animation_o *v35; // x20
  struct System_String_o *v36; // x1

  v3 = next;
  if ( (byte_4BC47CC & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    sub_1C1ABD4(&SimpleAnimation_State_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v6);
    byte_4BC47CC = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    if ( v3 != 6 )
    {
      if ( v3 != 4 )
      {
        if ( v3 != 3 )
          goto LABEL_64;
        v14 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v8);
        if ( !v14 )
          goto LABEL_66;
        Item = SimpleAnimation__get_Item(v14, AnimationName, 0LL);
        if ( Item )
          goto LABEL_13;
        AnimationName = (System_String_o *)this->fields.simpleAnimationComponent;
        if ( !AnimationName )
          goto LABEL_66;
        Item = SimpleAnimation__get_Item((SimpleAnimation_o *)AnimationName, this->fields.baseName, 0LL);
        if ( Item )
        {
LABEL_13:
          v3 = 3;
          this->fields.endtime = 0.0;
          goto LABEL_36;
        }
      }
      p_callAfterStart = (PartyOrganizationUtility_o *)&this->fields.callAfterStart;
      callAfterStart = this->fields.callAfterStart;
      if ( callAfterStart )
      {
        p_callAfterStart->klass = 0LL;
        sub_1C1AB78(p_callAfterStart, 0LL, (int64_t)v8, v9, v10, v11, v12, v13);
        ActionExtensions__Call(callAfterStart, 0LL);
      }
      if ( this->fields.loop )
      {
        v25 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v8);
        if ( !v25 )
          goto LABEL_66;
        v26 = SimpleAnimation__get_Item(v25, AnimationName, 0LL);
        if ( v26 )
        {
          Item = v26;
          v3 = 4;
          goto LABEL_36;
        }
      }
    }
    v27 = this->fields.simpleAnimationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v8);
    if ( !v27 )
      goto LABEL_66;
    Item = SimpleAnimation__get_Item(v27, AnimationName, 0LL);
    v3 = 6;
    if ( Item )
    {
LABEL_36:
      klass = Item->klass;
      v29 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v29;
          p_offset += 2;
          if ( !v29 )
            goto LABEL_40;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
      }
      else
      {
LABEL_40:
        p_method = sub_1C6CBB4(Item, SimpleAnimation_State_TypeInfo, 9LL);
      }
      AnimationName = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                           Item,
                                           *(_QWORD *)(p_method + 8));
      if ( !this )
LABEL_66:
        sub_1C1AE30(AnimationName, v16);
      goto LABEL_63;
    }
LABEL_64:
    v36 = (struct System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_65;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    if ( v3 == 3 )
    {
      v21 = (PartyOrganizationUtility_o *)&this->fields.callAfterStart;
      v22 = this->fields.callAfterStart;
      if ( v22 )
      {
        v21->klass = 0LL;
        sub_1C1AB78(v21, 0LL, (int64_t)v8, v9, v10, v11, v12, v13);
        ActionExtensions__Call(v22, 0LL);
      }
      v3 = 3;
    }
    else if ( v3 == 4 )
    {
      if ( this->fields.loop )
        v3 = 4;
      else
        v3 = 6;
    }
    goto LABEL_64;
  }
  switch ( v3 )
  {
    case 3:
      v19 = this->fields.animationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v8);
      if ( !v19 )
        goto LABEL_66;
      v20 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v19, AnimationName, 0LL);
      if ( UnityEngine_TrackedReference__op_Equality(v20, 0LL, 0LL) )
      {
        AnimationName = (System_String_o *)this->fields.animationComponent;
        if ( !AnimationName )
          goto LABEL_66;
        v20 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)AnimationName,
                                                  this->fields.baseName,
                                                  0LL);
      }
      if ( !UnityEngine_TrackedReference__op_Equality(v20, 0LL, 0LL) )
      {
        this->fields.endtime = 0.0;
        v3 = 3;
        goto LABEL_60;
      }
      break;
    case 6:
      goto LABEL_48;
    case 4:
      break;
    default:
      AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(0LL, 0LL, 0LL);
      if ( ((unsigned __int8)AnimationName & 1) != 0 )
        goto LABEL_66;
      goto LABEL_64;
  }
  v32 = (PartyOrganizationUtility_o *)&this->fields.callAfterStart;
  v33 = this->fields.callAfterStart;
  if ( v33 )
  {
    v32->klass = 0LL;
    sub_1C1AB78(v32, 0LL, (int64_t)v8, v9, v10, v11, v12, v13);
    ActionExtensions__Call(v33, 0LL);
  }
  if ( this->fields.loop )
  {
    v34 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v8);
    if ( !v34 )
      goto LABEL_66;
    v20 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v34, AnimationName, 0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v20, 0LL, 0LL) )
    {
      v3 = 4;
      goto LABEL_60;
    }
  }
LABEL_48:
  v35 = this->fields.animationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v8);
  if ( !v35 )
    goto LABEL_66;
  v20 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v35, AnimationName, 0LL);
  v3 = 6;
LABEL_60:
  AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v20, 0LL, 0LL);
  if ( ((unsigned __int8)AnimationName & 1) == 0 )
    goto LABEL_64;
  if ( !v20 )
    goto LABEL_66;
  AnimationName = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v20, 0LL);
LABEL_63:
  v36 = AnimationName;
LABEL_65:
  this->fields.requestAnimation = v36;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.requestAnimation,
    (int64_t)v36,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.status = v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickEffectComponent__Stop(
        MapGimmickEffectComponent_o *this,
        bool isDestroy,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  const MethodInfo *v13; // x2
  SimpleAnimation_o *v14; // x20
  System_String_o *AnimationName; // x0
  __int64 v16; // x1
  SimpleAnimation_State_o *v17; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v19; // x19
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  const MethodInfo *v24; // x2
  UnityEngine_Animation_o *v25; // x20
  UnityEngine_TrackedReference_o *Item; // x19

  if ( (byte_4BC47CF & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, isDestroy);
    sub_1C1ABD4(&SimpleAnimation_State_TypeInfo, v11);
    byte_4BC47CF = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStop = callback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callAfterStop,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      return;
    v25 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v24);
    if ( v25 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v25, AnimationName, 0LL);
      AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
      if ( ((unsigned __int8)AnimationName & 1) == 0 )
        return;
      if ( Item )
      {
        UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)Item, 1, 0LL);
        return;
      }
    }
LABEL_25:
    sub_1C1AE30(AnimationName, v16);
  }
  v14 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v13);
  if ( !v14 )
    goto LABEL_25;
  v17 = SimpleAnimation__get_Item(v14, AnimationName, 0LL);
  if ( v17 )
  {
    klass = v17->klass;
    v19 = v17;
    v20 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v20;
        p_offset += 2;
        if ( !v20 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C6CBB4(v17, SimpleAnimation_State_TypeInfo, 18LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v19, 1LL, *(_QWORD *)(p_method + 8));
  }
}