void __fastcall MapGimmickEffectComponent___ctor(MapGimmickEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42B302E & 1) == 0 )
  {
    sub_B52984(&CommonEffectComponent_TypeInfo);
    byte_42B302E = 1;
  }
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  }
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall MapGimmickEffectComponent__ForceLoop(
        MapGimmickEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  int32_t status; // w8
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v7; // x1
  SimpleAnimation_o *AnimationName; // x0
  UnityEngine_Object_o *v9; // x20
  const MethodInfo *v10; // x2
  SimpleAnimation_o *v11; // x20
  SimpleAnimation_State_o *Item; // x0
  __int64 v13; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v15; // x20
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *v19; // x20
  MethodInfo *v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Animation_o *v26; // x20
  UnityEngine_TrackedReference_o *v27; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_42B302C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B302C = 1;
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
          v15 = Item;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v16 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v16;
              p_offset += 2;
              if ( v16 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_23;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_23:
            p_method = sub_AEB880(Item, SimpleAnimation_State_TypeInfo, 18LL, v13);
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
          goto LABEL_44;
        }
      }
    }
    else
    {
      v19 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
        goto LABEL_44;
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
            goto LABEL_46;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v27, 2, 0LL);
        }
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( AnimationName )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_44:
          this->fields.totaltime = 0.0;
          *(&this->fields.loop + 4) = 1;
          this->fields.playAnimation = 0LL;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.playAnimation,
            0LL,
            (System_String_array **)v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          goto LABEL_45;
        }
      }
    }
LABEL_46:
    sub_B52A5C(AnimationName, v7);
  }
}


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
  UnityEngine_Object_o *v11; // x20
  const MethodInfo *v12; // x2
  SimpleAnimation_o *v13; // x20
  SimpleAnimation_o *AnimationName; // x0
  __int64 v15; // x1
  SimpleAnimation_State_o *Item; // x0
  __int64 v17; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v19; // x20
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v24; // x20
  MethodInfo *v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Animation_o *v31; // x20
  UnityEngine_TrackedReference_o *v32; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_42B302B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B302B = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_B52920(
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
  v11 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
  {
    v13 = this->fields.simpleAnimationComponent;
    AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v12);
    if ( v13 )
    {
      Item = SimpleAnimation__get_Item(v13, (System_String_o *)AnimationName, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v19 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v20 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v20;
            p_offset += 2;
            if ( v20 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_16;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_16:
          p_method = sub_AEB880(Item, SimpleAnimation_State_TypeInfo, 18LL, v17);
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
        goto LABEL_45;
      }
    }
    goto LABEL_46;
  }
  v24 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    goto LABEL_45;
  v31 = this->fields.animationComponent;
  AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v25);
  if ( !v31 )
    goto LABEL_46;
  v32 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v31, (System_String_o *)AnimationName, 0LL);
  AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v32, 0LL, 0LL);
  if ( ((unsigned __int8)AnimationName & 1) != 0 )
  {
    if ( !v32 )
      goto LABEL_46;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v32, 2, 0LL);
  }
  AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
  if ( !AnimationName )
LABEL_46:
    sub_B52A5C(AnimationName, v15);
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_45:
  this->fields.totaltime = 0.0;
  *(&this->fields.loop + 4) = 1;
  this->fields.playAnimation = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.playAnimation,
    0LL,
    (System_String_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ((void (__fastcall *)(MapGimmickEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
    this,
    3LL,
    this->klass->vtable._6_ForceStart.methodPtr);
}


System_String_o *__fastcall MapGimmickEffectComponent__GetAnimationName(
        MapGimmickEffectComponent_o *this,
        int32_t status,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  __int64 v6; // x1
  UnityEngine_Animation_o *v7; // x0
  UnityEngine_TrackedReference_o *v8; // x0
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *v11; // x20
  UnityEngine_TrackedReference_o *v12; // x0
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  System_String_o *baseName; // x0
  __int64 *v18; // x8

  if ( (byte_42B3029 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_16262/*"_loop"*/);
    sub_B52984(&StringLiteral_16286/*"_start"*/);
    sub_B52984(&StringLiteral_16249/*"_end"*/);
    byte_42B3029 = 1;
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
          v7 = this->fields.animationComponent;
          if ( !v7 )
            goto LABEL_53;
          Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                     v7,
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
          v7 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
          if ( !v7 )
            goto LABEL_53;
          if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v7, this->fields.endAnimationName, 0LL) )
            return this->fields.endAnimationName;
        }
      }
      baseName = this->fields.baseName;
      v18 = &StringLiteral_16249/*"_end"*/;
      break;
    case 4:
      if ( !System_String__IsNullOrEmpty(this->fields.loopAnimationName, 0LL) )
      {
        v11 = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
        {
          v7 = this->fields.animationComponent;
          if ( !v7 )
            goto LABEL_53;
          v12 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                    v7,
                                                    this->fields.loopAnimationName,
                                                    0LL);
          if ( UnityEngine_TrackedReference__op_Inequality(v12, 0LL, 0LL) )
            return this->fields.loopAnimationName;
        }
        v13 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
        {
          v7 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
          if ( !v7 )
            goto LABEL_53;
          if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v7, this->fields.loopAnimationName, 0LL) )
            return this->fields.loopAnimationName;
        }
      }
      baseName = this->fields.baseName;
      v18 = &StringLiteral_16262/*"_loop"*/;
      break;
    case 3:
      if ( System_String__IsNullOrEmpty(this->fields.startAnimationName, 0LL) )
        goto LABEL_51;
      v5 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
      {
        v7 = this->fields.animationComponent;
        if ( !v7 )
          goto LABEL_53;
        v8 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v7, this->fields.startAnimationName, 0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v8, 0LL, 0LL) )
          return this->fields.startAnimationName;
      }
      v9 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
      {
LABEL_51:
        baseName = this->fields.baseName;
        v18 = &StringLiteral_16286/*"_start"*/;
        return System_String__Concat_44568316(baseName, (System_String_o *)*v18, 0LL);
      }
      v7 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v7 )
      {
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v7, this->fields.startAnimationName, 0LL) )
          return this->fields.startAnimationName;
        goto LABEL_51;
      }
LABEL_53:
      sub_B52A5C(v7, v6);
    default:
      return string_TypeInfo->static_fields->Empty;
  }
  return System_String__Concat_44568316(baseName, (System_String_o *)*v18, 0LL);
}


void __fastcall MapGimmickEffectComponent__NextPlayAnimation(
        MapGimmickEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  SimpleAnimation_o *v12; // x20
  System_String_o *AnimationName; // x0
  __int64 v14; // x1
  SimpleAnimation_State_o *v15; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v17; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  BattleServantConfConponent_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  BattleServantConfConponent_o *v21; // x0
  System_Action_o *v22; // x20
  SimpleAnimation_o *v23; // x20
  SimpleAnimation_State_o *v24; // x0
  MapGimmickEffectComponent_o *v25; // x22
  SimpleAnimation_o *v26; // x20
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v28; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_String_o *name; // x1
  BattleServantConfConponent_o *v32; // x0
  System_Action_o *v33; // x20
  UnityEngine_Animation_o *v34; // x20
  UnityEngine_Animation_o *v35; // x20
  struct System_String_o **p_requestAnimation; // x0

  if ( (byte_42B302A & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B302A = 1;
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
      if ( next == 3 )
      {
        p_callAfterStart = (BattleServantConfConponent_o *)&this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          p_callAfterStart->klass = 0LL;
          sub_B52920(p_callAfterStart, 0LL, v6, v7, v8, v9, v10, v11);
          ActionExtensions__Call(callAfterStart, 0LL);
        }
        next = 3;
      }
      else if ( next == 4 )
      {
        if ( *(&this->fields.loop + 4) )
          next = 4;
        else
          next = 6;
      }
      goto LABEL_67;
    }
    switch ( next )
    {
      case 3:
        v17 = this->fields.animationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, (const MethodInfo *)v6);
        if ( !v17 )
          goto LABEL_70;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v17, AnimationName, 0LL);
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
          next = 3;
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
    v32 = (BattleServantConfConponent_o *)&this->fields.callAfterStart;
    v33 = this->fields.callAfterStart;
    if ( v33 )
    {
      v32->klass = 0LL;
      sub_B52920(v32, 0LL, v6, v7, v8, v9, v10, v11);
      ActionExtensions__Call(v33, 0LL);
    }
    if ( *(&this->fields.loop + 4) )
    {
      v34 = this->fields.animationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, (const MethodInfo *)v6);
      if ( !v34 )
        goto LABEL_70;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v34, AnimationName, 0LL);
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        next = 4;
        goto LABEL_64;
      }
    }
LABEL_52:
    v35 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, (const MethodInfo *)v6);
    if ( !v35 )
      goto LABEL_70;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v35, AnimationName, 0LL);
    next = 6;
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
  if ( next != 6 )
  {
    if ( next != 4 )
    {
      if ( next != 3 )
        goto LABEL_44;
      v12 = this->fields.simpleAnimationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, (const MethodInfo *)v6);
      if ( !v12 )
        goto LABEL_70;
      v15 = SimpleAnimation__get_Item(v12, AnimationName, 0LL);
      if ( v15 )
        goto LABEL_14;
      AnimationName = (System_String_o *)this->fields.simpleAnimationComponent;
      if ( !AnimationName )
        goto LABEL_70;
      v15 = SimpleAnimation__get_Item((SimpleAnimation_o *)AnimationName, this->fields.baseName, 0LL);
      if ( v15 )
      {
LABEL_14:
        this->fields.losttime = 0.0;
        next = 3;
LABEL_36:
        v25 = this;
LABEL_39:
        klass = v15->klass;
        if ( *(_WORD *)&v15->klass->_2.bitflags1 )
        {
          v28 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v28;
            p_offset += 2;
            if ( v28 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
              goto LABEL_43;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_43:
          p_method = sub_AEB880(v15, SimpleAnimation_State_TypeInfo, 9LL, v7);
        }
        AnimationName = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                             v15,
                                             *(_QWORD *)(p_method + 8));
        if ( v25 )
        {
          name = AnimationName;
          goto LABEL_61;
        }
LABEL_70:
        sub_B52A5C(AnimationName, v14);
      }
    }
    v21 = (BattleServantConfConponent_o *)&this->fields.callAfterStart;
    v22 = this->fields.callAfterStart;
    if ( v22 )
    {
      v21->klass = 0LL;
      sub_B52920(v21, 0LL, v6, v7, v8, v9, v10, v11);
      ActionExtensions__Call(v22, 0LL);
    }
    if ( *(&this->fields.loop + 4) )
    {
      v23 = this->fields.simpleAnimationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, (const MethodInfo *)v6);
      if ( !v23 )
        goto LABEL_70;
      v24 = SimpleAnimation__get_Item(v23, AnimationName, 0LL);
      if ( v24 )
      {
        v15 = v24;
        next = 4;
        goto LABEL_36;
      }
    }
  }
  v26 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, (const MethodInfo *)v6);
  if ( !v26 )
    goto LABEL_70;
  v15 = SimpleAnimation__get_Item(v26, AnimationName, 0LL);
  next = 6;
  v25 = this;
  if ( v15 )
    goto LABEL_39;
LABEL_44:
  v25 = this;
  name = (struct System_String_o *)StringLiteral_1/*""*/;
LABEL_61:
  v25->fields.requestAnimation = name;
  p_requestAnimation = &v25->fields.requestAnimation;
LABEL_69:
  sub_B52920((BattleServantConfConponent_o *)p_requestAnimation, (System_Int32_array **)name, v6, v7, v8, v9, v10, v11);
  this->fields.status = next;
}


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
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  const MethodInfo *v12; // x2
  SimpleAnimation_o *v13; // x20
  System_String_o *AnimationName; // x0
  __int64 v15; // x1
  SimpleAnimation_State_o *v16; // x0
  __int64 v17; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v19; // x19
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  const MethodInfo *v24; // x2
  UnityEngine_Animation_o *v25; // x20
  UnityEngine_TrackedReference_o *Item; // x19

  if ( (byte_42B302D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B302D = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStop = callback;
  *(&this->fields.loop + 4) = 0;
  this->fields.isDestroy = isDestroy;
  sub_B52920(
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
LABEL_27:
    sub_B52A5C(AnimationName, v15);
  }
  v13 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v12);
  if ( !v13 )
    goto LABEL_27;
  v16 = SimpleAnimation__get_Item(v13, AnimationName, 0LL);
  if ( v16 )
  {
    klass = v16->klass;
    v19 = v16;
    if ( *(_WORD *)&v16->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v20;
        p_offset += 2;
        if ( v20 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AEB880(v16, SimpleAnimation_State_TypeInfo, 18LL, v17);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v19, 1LL, *(_QWORD *)(p_method + 8));
  }
}