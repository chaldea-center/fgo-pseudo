void __fastcall MapGimmickEffectComponent___ctor(MapGimmickEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42129CF & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectComponent_TypeInfo, method);
    byte_42129CF = 1;
  }
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  }
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
  SimpleAnimation_o *AnimationName; // x0
  UnityEngine_Object_o *v9; // x20
  const MethodInfo *v10; // x2
  SimpleAnimation_o *v11; // x20
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x20
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *v18; // x20
  MethodInfo *v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Animation_o *v25; // x20
  UnityEngine_TrackedReference_o *v26; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_42129CD & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v5);
    byte_42129CD = 1;
  }
  status = this->fields.status;
  if ( !status )
  {
    CommonEffectComponent__Init((CommonEffectComponent_o *)this, 0, 0, 0LL);
    if ( isOverWrite )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      {
        AnimationName = this->fields.simpleAnimationComponent;
        if ( !AnimationName )
          goto LABEL_46;
        SimpleAnimation__Stop(AnimationName, 0LL);
      }
      else
      {
        animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
          goto LABEL_45;
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( !AnimationName )
          goto LABEL_46;
        UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
      }
    }
LABEL_45:
    ((void (__fastcall *)(MapGimmickEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  if ( status != 2 )
  {
    v9 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    {
      v11 = this->fields.simpleAnimationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v10);
      if ( v11 )
      {
        Item = SimpleAnimation__get_Item(v11, (System_String_o *)AnimationName, 0LL);
        if ( Item )
        {
          klass = Item->klass;
          v14 = Item;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v15 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v15;
              p_offset += 2;
              if ( v15 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_23;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_23:
            p_method = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 18LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
            v14,
            2LL,
            *(_QWORD *)(p_method + 8));
        }
        AnimationName = this->fields.simpleAnimationComponent;
        if ( AnimationName )
        {
          SimpleAnimation__Stop(AnimationName, 0LL);
          goto LABEL_44;
        }
      }
    }
    else
    {
      v18 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
        goto LABEL_44;
      v25 = this->fields.animationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v19);
      if ( v25 )
      {
        v26 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v25,
                                                  (System_String_o *)AnimationName,
                                                  0LL);
        AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v26, 0LL, 0LL);
        if ( ((unsigned __int8)AnimationName & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_46;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v26, 2, 0LL);
        }
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( AnimationName )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_44:
          this->fields.totaltime = 0.0;
          *(&this->fields.loop + 4) = 1;
          this->fields.playAnimation = 0LL;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.playAnimation,
            0LL,
            (System_String_array **)v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          goto LABEL_45;
        }
      }
    }
LABEL_46:
    sub_B0D97C(AnimationName);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickEffectComponent__ForceStart(
        MapGimmickEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  const MethodInfo *v13; // x2
  SimpleAnimation_o *v14; // x20
  SimpleAnimation_o *AnimationName; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v18; // x20
  unsigned __int64 v19; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v23; // x20
  MethodInfo *v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Animation_o *v30; // x20
  UnityEngine_TrackedReference_o *v31; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_42129CC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v11);
    byte_42129CC = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callAfterStart,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.status )
  {
    if ( isOverWrite )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      {
        AnimationName = this->fields.simpleAnimationComponent;
        if ( !AnimationName )
          goto LABEL_46;
        SimpleAnimation__Stop(AnimationName, 0LL);
      }
      else
      {
        animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        {
          AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
          if ( !AnimationName )
            goto LABEL_46;
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
        }
      }
    }
    CommonEffectComponent__Init((CommonEffectComponent_o *)this, 0, 0, 0LL);
    return;
  }
  v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
        v18 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v19 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v19;
            p_offset += 2;
            if ( v19 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_16;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_16:
          p_method = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 18LL);
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
        goto LABEL_45;
      }
    }
    goto LABEL_46;
  }
  v23 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    goto LABEL_45;
  v30 = this->fields.animationComponent;
  AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v24);
  if ( !v30 )
    goto LABEL_46;
  v31 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v30, (System_String_o *)AnimationName, 0LL);
  AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v31, 0LL, 0LL);
  if ( ((unsigned __int8)AnimationName & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_46;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v31, 2, 0LL);
  }
  AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
  if ( !AnimationName )
LABEL_46:
    sub_B0D97C(AnimationName);
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_45:
  this->fields.totaltime = 0.0;
  *(&this->fields.loop + 4) = 1;
  this->fields.playAnimation = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.playAnimation,
    0LL,
    (System_String_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
  UnityEngine_Animation_o *v10; // x0
  UnityEngine_TrackedReference_o *v11; // x0
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *v14; // x20
  UnityEngine_TrackedReference_o *v15; // x0
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  System_String_o *baseName; // x0
  __int64 *v21; // x8

  if ( (byte_42129CA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&status);
    sub_B0D8A4(&string_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_16202/*"_loop"*/, v6);
    sub_B0D8A4(&StringLiteral_16226/*"_start"*/, v7);
    sub_B0D8A4(&StringLiteral_16189/*"_end"*/, v8);
    byte_42129CA = 1;
  }
  switch ( status )
  {
    case 6:
      if ( !System_String__IsNullOrEmpty(this->fields.endAnimationName, 0LL) )
      {
        animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        {
          v10 = this->fields.animationComponent;
          if ( !v10 )
            goto LABEL_53;
          Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                     v10,
                                                     this->fields.endAnimationName,
                                                     0LL);
          if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
            return this->fields.endAnimationName;
        }
        simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
        {
          v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
          if ( !v10 )
            goto LABEL_53;
          if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v10, this->fields.endAnimationName, 0LL) )
            return this->fields.endAnimationName;
        }
      }
      baseName = this->fields.baseName;
      v21 = &StringLiteral_16189/*"_end"*/;
      break;
    case 4:
      if ( !System_String__IsNullOrEmpty(this->fields.loopAnimationName, 0LL) )
      {
        v14 = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
        {
          v10 = this->fields.animationComponent;
          if ( !v10 )
            goto LABEL_53;
          v15 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                    v10,
                                                    this->fields.loopAnimationName,
                                                    0LL);
          if ( UnityEngine_TrackedReference__op_Inequality(v15, 0LL, 0LL) )
            return this->fields.loopAnimationName;
        }
        v16 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
        {
          v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
          if ( !v10 )
            goto LABEL_53;
          if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v10, this->fields.loopAnimationName, 0LL) )
            return this->fields.loopAnimationName;
        }
      }
      baseName = this->fields.baseName;
      v21 = &StringLiteral_16202/*"_loop"*/;
      break;
    case 3:
      if ( System_String__IsNullOrEmpty(this->fields.startAnimationName, 0LL) )
        goto LABEL_51;
      v9 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
      {
        v10 = this->fields.animationComponent;
        if ( !v10 )
          goto LABEL_53;
        v11 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v10,
                                                  this->fields.startAnimationName,
                                                  0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v11, 0LL, 0LL) )
          return this->fields.startAnimationName;
      }
      v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
      {
LABEL_51:
        baseName = this->fields.baseName;
        v21 = &StringLiteral_16226/*"_start"*/;
        return System_String__Concat_43849904(baseName, (System_String_o *)*v21, 0LL);
      }
      v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v10 )
      {
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v10, this->fields.startAnimationName, 0LL) )
          return this->fields.startAnimationName;
        goto LABEL_51;
      }
LABEL_53:
      sub_B0D97C(v10);
    default:
      return string_TypeInfo->static_fields->Empty;
  }
  return System_String__Concat_43849904(baseName, (System_String_o *)*v21, 0LL);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  SimpleAnimation_o *v14; // x20
  System_String_o *AnimationName; // x0
  SimpleAnimation_State_o *v16; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v18; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  BattleServantConfConponent_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  BattleServantConfConponent_o *v22; // x0
  System_Action_o *v23; // x20
  SimpleAnimation_o *v24; // x20
  SimpleAnimation_State_o *v25; // x0
  MapGimmickEffectComponent_o *v26; // x22
  SimpleAnimation_o *v27; // x20
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v29; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_String_o *name; // x1
  BattleServantConfConponent_o *v33; // x0
  System_Action_o *v34; // x20
  UnityEngine_Animation_o *v35; // x20
  UnityEngine_Animation_o *v36; // x20
  struct System_String_o **p_requestAnimation; // x0

  v3 = next;
  if ( (byte_42129CB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_42129CB = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
    {
      if ( v3 == 3 )
      {
        p_callAfterStart = (BattleServantConfConponent_o *)&this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          p_callAfterStart->klass = 0LL;
          sub_B0D840(p_callAfterStart, 0LL, v8, v9, v10, v11, v12, v13);
          ActionExtensions__Call(callAfterStart, 0LL);
        }
        v3 = 3;
      }
      else if ( v3 == 4 )
      {
        if ( *(&this->fields.loop + 4) )
          v3 = 4;
        else
          v3 = 6;
      }
      goto LABEL_67;
    }
    switch ( v3 )
    {
      case 3:
        v18 = this->fields.animationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, (const MethodInfo *)v8);
        if ( !v18 )
          goto LABEL_70;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v18, AnimationName, 0LL);
        if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
        {
          AnimationName = (System_String_o *)this->fields.animationComponent;
          if ( !AnimationName )
            goto LABEL_70;
          Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                     (UnityEngine_Animation_o *)AnimationName,
                                                     this->fields.baseName,
                                                     0LL);
        }
        if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
        {
          this->fields.losttime = 0.0;
          v3 = 3;
          goto LABEL_64;
        }
        break;
      case 6:
        goto LABEL_52;
      case 4:
        break;
      default:
        Item = 0LL;
        goto LABEL_64;
    }
    v33 = (BattleServantConfConponent_o *)&this->fields.callAfterStart;
    v34 = this->fields.callAfterStart;
    if ( v34 )
    {
      v33->klass = 0LL;
      sub_B0D840(v33, 0LL, v8, v9, v10, v11, v12, v13);
      ActionExtensions__Call(v34, 0LL);
    }
    if ( *(&this->fields.loop + 4) )
    {
      v35 = this->fields.animationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, (const MethodInfo *)v8);
      if ( !v35 )
        goto LABEL_70;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v35, AnimationName, 0LL);
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        v3 = 4;
        goto LABEL_64;
      }
    }
LABEL_52:
    v36 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, (const MethodInfo *)v8);
    if ( !v36 )
      goto LABEL_70;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v36, AnimationName, 0LL);
    v3 = 6;
LABEL_64:
    AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
    if ( ((unsigned __int8)AnimationName & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_70;
      name = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
LABEL_68:
      this->fields.requestAnimation = name;
      p_requestAnimation = &this->fields.requestAnimation;
      goto LABEL_69;
    }
LABEL_67:
    name = (struct System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_68;
  }
  if ( v3 != 6 )
  {
    if ( v3 != 4 )
    {
      if ( v3 != 3 )
        goto LABEL_44;
      v14 = this->fields.simpleAnimationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, (const MethodInfo *)v8);
      if ( !v14 )
        goto LABEL_70;
      v16 = SimpleAnimation__get_Item(v14, AnimationName, 0LL);
      if ( v16 )
        goto LABEL_14;
      AnimationName = (System_String_o *)this->fields.simpleAnimationComponent;
      if ( !AnimationName )
        goto LABEL_70;
      v16 = SimpleAnimation__get_Item((SimpleAnimation_o *)AnimationName, this->fields.baseName, 0LL);
      if ( v16 )
      {
LABEL_14:
        this->fields.losttime = 0.0;
        v3 = 3;
LABEL_36:
        v26 = this;
LABEL_39:
        klass = v16->klass;
        if ( *(_WORD *)&v16->klass->_2.bitflags1 )
        {
          v29 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v29;
            p_offset += 2;
            if ( v29 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
              goto LABEL_43;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_43:
          p_method = sub_AA67A0(v16, SimpleAnimation_State_TypeInfo, 9LL);
        }
        AnimationName = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                             v16,
                                             *(_QWORD *)(p_method + 8));
        if ( v26 )
        {
          name = AnimationName;
          goto LABEL_61;
        }
LABEL_70:
        sub_B0D97C(AnimationName);
      }
    }
    v22 = (BattleServantConfConponent_o *)&this->fields.callAfterStart;
    v23 = this->fields.callAfterStart;
    if ( v23 )
    {
      v22->klass = 0LL;
      sub_B0D840(v22, 0LL, v8, v9, v10, v11, v12, v13);
      ActionExtensions__Call(v23, 0LL);
    }
    if ( *(&this->fields.loop + 4) )
    {
      v24 = this->fields.simpleAnimationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, (const MethodInfo *)v8);
      if ( !v24 )
        goto LABEL_70;
      v25 = SimpleAnimation__get_Item(v24, AnimationName, 0LL);
      if ( v25 )
      {
        v16 = v25;
        v3 = 4;
        goto LABEL_36;
      }
    }
  }
  v27 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, (const MethodInfo *)v8);
  if ( !v27 )
    goto LABEL_70;
  v16 = SimpleAnimation__get_Item(v27, AnimationName, 0LL);
  v3 = 6;
  v26 = this;
  if ( v16 )
    goto LABEL_39;
LABEL_44:
  v26 = this;
  name = (struct System_String_o *)StringLiteral_1/*""*/;
LABEL_61:
  v26->fields.requestAnimation = name;
  p_requestAnimation = &v26->fields.requestAnimation;
LABEL_69:
  sub_B0D840(
    (BattleServantConfConponent_o *)p_requestAnimation,
    (System_Int32_array **)name,
    v8,
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  const MethodInfo *v13; // x2
  SimpleAnimation_o *v14; // x20
  System_String_o *AnimationName; // x0
  SimpleAnimation_State_o *v16; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v18; // x19
  unsigned __int64 v19; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  const MethodInfo *v23; // x2
  UnityEngine_Animation_o *v24; // x20
  UnityEngine_TrackedReference_o *Item; // x19

  if ( (byte_42129CE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isDestroy);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v11);
    byte_42129CE = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStop = callback;
  *(&this->fields.loop + 4) = 0;
  this->fields.isDestroy = isDestroy;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callAfterStop,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      return;
    v24 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v23);
    if ( v24 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v24, AnimationName, 0LL);
      AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
      if ( ((unsigned __int8)AnimationName & 1) == 0 )
        return;
      if ( Item )
      {
        UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)Item, 1, 0LL);
        return;
      }
    }
LABEL_27:
    sub_B0D97C(AnimationName);
  }
  v14 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v13);
  if ( !v14 )
    goto LABEL_27;
  v16 = SimpleAnimation__get_Item(v14, AnimationName, 0LL);
  if ( v16 )
  {
    klass = v16->klass;
    v18 = v16;
    if ( *(_WORD *)&v16->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v19;
        p_offset += 2;
        if ( v19 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AA67A0(v16, SimpleAnimation_State_TypeInfo, 18LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v18, 1LL, *(_QWORD *)(p_method + 8));
  }
}