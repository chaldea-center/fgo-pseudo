void __fastcall MapGimmickEffectComponent___ctor(MapGimmickEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12F8D & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectComponent_TypeInfo, method, v2);
    byte_4B12F8D = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickEffectComponent__ForceLoop(
        MapGimmickEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t status; // w8
  __int64 v8; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v10; // x1
  SimpleAnimation_o *AnimationName; // x0
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  SimpleAnimation_o *v15; // x20
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v18; // x20
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *v22; // x20
  const MethodInfo *v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Animation_o *v29; // x20
  UnityEngine_TrackedReference_o *v30; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_4B12F8B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isOverWrite, method);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v5, v6);
    byte_4B12F8B = 1;
  }
  status = this->fields.status;
  if ( !status )
  {
    CommonEffectComponent__Init((CommonEffectComponent_o *)this, 0, 0, 0LL);
    if ( isOverWrite )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
    v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOverWrite);
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      v15 = this->fields.simpleAnimationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v14);
      if ( v15 )
      {
        Item = SimpleAnimation__get_Item(v15, (System_String_o *)AnimationName, 0LL);
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
                goto LABEL_21;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_21:
            p_method = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 18LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
            v18,
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
      v22 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
        goto LABEL_40;
      v29 = this->fields.animationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v23);
      if ( v29 )
      {
        v30 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v29,
                                                  (System_String_o *)AnimationName,
                                                  0LL);
        AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v30, 0LL, 0LL);
        if ( ((unsigned __int8)AnimationName & 1) != 0 )
        {
          if ( !v30 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v30, 2, 0LL);
        }
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( AnimationName )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0LL;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.playAnimation,
            0LL,
            (int64_t)v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1BCAA3C(AnimationName, v10);
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
  __int64 v12; // x2
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  SimpleAnimation_o *v17; // x20
  SimpleAnimation_o *AnimationName; // x0
  __int64 v19; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v22; // x20
  __int64 v23; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v27; // x20
  const MethodInfo *v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_Animation_o *v34; // x20
  UnityEngine_TrackedReference_o *v35; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_4B12F8A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isOverWrite, callback);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v11, v12);
    byte_4B12F8A = 1;
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
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
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
  v14 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    v17 = this->fields.simpleAnimationComponent;
    AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v16);
    if ( v17 )
    {
      Item = SimpleAnimation__get_Item(v17, (System_String_o *)AnimationName, 0LL);
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
          v22,
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
  v27 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( !UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
    goto LABEL_41;
  v34 = this->fields.animationComponent;
  AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v28);
  if ( !v34 )
    goto LABEL_42;
  v35 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v34, (System_String_o *)AnimationName, 0LL);
  AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v35, 0LL, 0LL);
  if ( ((unsigned __int8)AnimationName & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_42;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v35, 2, 0LL);
  }
  AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
  if ( !AnimationName )
LABEL_42:
    sub_1BCAA3C(AnimationName, v19);
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_41:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playAnimation, 0LL, (int64_t)v28, v29, v30, v31, v32, v33);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x1
  UnityEngine_Animation_o *v16; // x0
  UnityEngine_TrackedReference_o *v17; // x0
  UnityEngine_Object_o *v18; // x20
  __int64 v20; // x1
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v24; // x1
  UnityEngine_Object_o *v25; // x20
  UnityEngine_TrackedReference_o *v26; // x0
  UnityEngine_Object_o *v27; // x20
  System_String_o *baseName; // x0
  __int64 *v29; // x8

  if ( (byte_4B12F88 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&status, method);
    sub_1BCA7E0(&string_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_16721/*"_loop"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_16742/*"_start"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16706/*"_end"*/, v11, v12);
    byte_4B12F88 = 1;
  }
  if ( status == 6 )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.endAnimationName, 0LL) )
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
        v16 = this->fields.animationComponent;
        if ( !v16 )
          goto LABEL_47;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   v16,
                                                   this->fields.endAnimationName,
                                                   0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
          return this->fields.endAnimationName;
      }
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      {
        v16 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
        if ( !v16 )
          goto LABEL_47;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v16, this->fields.endAnimationName, 0LL) )
          return this->fields.endAnimationName;
      }
    }
    baseName = this->fields.baseName;
    v29 = &StringLiteral_16706/*"_end"*/;
    return System_String__Concat_62401220(baseName, (System_String_o *)*v29, 0LL);
  }
  if ( status == 4 )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.loopAnimationName, 0LL) )
    {
      v25 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
      {
        v16 = this->fields.animationComponent;
        if ( !v16 )
          goto LABEL_47;
        v26 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v16,
                                                  this->fields.loopAnimationName,
                                                  0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v26, 0LL, 0LL) )
          return this->fields.loopAnimationName;
      }
      v27 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
      {
        v16 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
        if ( !v16 )
          goto LABEL_47;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v16, this->fields.loopAnimationName, 0LL) )
          return this->fields.loopAnimationName;
      }
    }
    baseName = this->fields.baseName;
    v29 = &StringLiteral_16721/*"_loop"*/;
    return System_String__Concat_62401220(baseName, (System_String_o *)*v29, 0LL);
  }
  if ( status != 3 )
    return string_TypeInfo->static_fields->Empty;
  if ( System_String__IsNullOrEmpty(this->fields.startAnimationName, 0LL) )
    goto LABEL_43;
  v14 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    v16 = this->fields.animationComponent;
    if ( !v16 )
      goto LABEL_47;
    v17 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v16, this->fields.startAnimationName, 0LL);
    if ( UnityEngine_TrackedReference__op_Inequality(v17, 0LL, 0LL) )
      return this->fields.startAnimationName;
  }
  v18 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( v16 )
    {
      if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v16, this->fields.startAnimationName, 0LL) )
        return this->fields.startAnimationName;
      goto LABEL_43;
    }
LABEL_47:
    sub_1BCAA3C(v16, v15);
  }
LABEL_43:
  baseName = this->fields.baseName;
  v29 = &StringLiteral_16742/*"_start"*/;
  return System_String__Concat_62401220(baseName, (System_String_o *)*v29, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickEffectComponent__NextPlayAnimation(
        MapGimmickEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  SimpleAnimation_o *v17; // x20
  System_String_o *AnimationName; // x0
  __int64 v19; // x1
  SimpleAnimation_State_o *Item; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v22; // x20
  UnityEngine_TrackedReference_o *v23; // x21
  PartyOrganizationUtility_o *v24; // x0
  System_Action_o *v25; // x20
  PartyOrganizationUtility_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  SimpleAnimation_o *v28; // x20
  SimpleAnimation_State_o *v29; // x0
  SimpleAnimation_o *v30; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v32; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  PartyOrganizationUtility_o *v35; // x0
  System_Action_o *v36; // x20
  UnityEngine_Animation_o *v37; // x20
  UnityEngine_Animation_o *v38; // x20
  struct System_String_o *v39; // x1

  v3 = next;
  if ( (byte_4B12F89 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next, method);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B12F89 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    if ( v3 != 6 )
    {
      if ( v3 != 4 )
      {
        if ( v3 != 3 )
          goto LABEL_64;
        v17 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v11);
        if ( !v17 )
          goto LABEL_66;
        Item = SimpleAnimation__get_Item(v17, AnimationName, 0LL);
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
        sub_1BCA784(p_callAfterStart, 0LL, (int64_t)v11, v12, v13, v14, v15, v16);
        ActionExtensions__Call(callAfterStart, 0LL);
      }
      if ( this->fields.loop )
      {
        v28 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v11);
        if ( !v28 )
          goto LABEL_66;
        v29 = SimpleAnimation__get_Item(v28, AnimationName, 0LL);
        if ( v29 )
        {
          Item = v29;
          v3 = 4;
          goto LABEL_36;
        }
      }
    }
    v30 = this->fields.simpleAnimationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v11);
    if ( !v30 )
      goto LABEL_66;
    Item = SimpleAnimation__get_Item(v30, AnimationName, 0LL);
    v3 = 6;
    if ( Item )
    {
LABEL_36:
      klass = Item->klass;
      v32 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v32;
          p_offset += 2;
          if ( !v32 )
            goto LABEL_40;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
      }
      else
      {
LABEL_40:
        p_method = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 9LL);
      }
      AnimationName = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                           Item,
                                           *(_QWORD *)(p_method + 8));
      if ( !this )
LABEL_66:
        sub_1BCAA3C(AnimationName, v19);
      goto LABEL_63;
    }
LABEL_64:
    v39 = (struct System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_65;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    if ( v3 == 3 )
    {
      v24 = (PartyOrganizationUtility_o *)&this->fields.callAfterStart;
      v25 = this->fields.callAfterStart;
      if ( v25 )
      {
        v24->klass = 0LL;
        sub_1BCA784(v24, 0LL, (int64_t)v11, v12, v13, v14, v15, v16);
        ActionExtensions__Call(v25, 0LL);
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
      v22 = this->fields.animationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v11);
      if ( !v22 )
        goto LABEL_66;
      v23 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v22, AnimationName, 0LL);
      if ( UnityEngine_TrackedReference__op_Equality(v23, 0LL, 0LL) )
      {
        AnimationName = (System_String_o *)this->fields.animationComponent;
        if ( !AnimationName )
          goto LABEL_66;
        v23 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)AnimationName,
                                                  this->fields.baseName,
                                                  0LL);
      }
      if ( !UnityEngine_TrackedReference__op_Equality(v23, 0LL, 0LL) )
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
  v35 = (PartyOrganizationUtility_o *)&this->fields.callAfterStart;
  v36 = this->fields.callAfterStart;
  if ( v36 )
  {
    v35->klass = 0LL;
    sub_1BCA784(v35, 0LL, (int64_t)v11, v12, v13, v14, v15, v16);
    ActionExtensions__Call(v36, 0LL);
  }
  if ( this->fields.loop )
  {
    v37 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v11);
    if ( !v37 )
      goto LABEL_66;
    v23 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v37, AnimationName, 0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v23, 0LL, 0LL) )
    {
      v3 = 4;
      goto LABEL_60;
    }
  }
LABEL_48:
  v38 = this->fields.animationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v11);
  if ( !v38 )
    goto LABEL_66;
  v23 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v38, AnimationName, 0LL);
  v3 = 6;
LABEL_60:
  AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v23, 0LL, 0LL);
  if ( ((unsigned __int8)AnimationName & 1) == 0 )
    goto LABEL_64;
  if ( !v23 )
    goto LABEL_66;
  AnimationName = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v23, 0LL);
LABEL_63:
  v39 = AnimationName;
LABEL_65:
  this->fields.requestAnimation = v39;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.requestAnimation,
    (int64_t)v39,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  __int64 v12; // x2
  __int64 v13; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  SimpleAnimation_o *v17; // x20
  System_String_o *AnimationName; // x0
  __int64 v19; // x1
  SimpleAnimation_State_o *v20; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v22; // x19
  __int64 v23; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  const MethodInfo *v27; // x2
  UnityEngine_Animation_o *v28; // x20
  UnityEngine_TrackedReference_o *Item; // x19

  if ( (byte_4B12F8C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDestroy, callback);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v11, v12);
    byte_4B12F8C = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStop = callback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1BCA784(
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      return;
    v28 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v27);
    if ( v28 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v28, AnimationName, 0LL);
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
    sub_1BCAA3C(AnimationName, v19);
  }
  v17 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v16);
  if ( !v17 )
    goto LABEL_25;
  v20 = SimpleAnimation__get_Item(v17, AnimationName, 0LL);
  if ( v20 )
  {
    klass = v20->klass;
    v22 = v20;
    v23 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v23;
        p_offset += 2;
        if ( !v23 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C1C7C0(v20, SimpleAnimation_State_TypeInfo, 18LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v22, 1LL, *(_QWORD *)(p_method + 8));
  }
}