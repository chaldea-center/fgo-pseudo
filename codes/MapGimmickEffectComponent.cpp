void __fastcall MapGimmickEffectComponent___ctor(MapGimmickEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBAF5 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBAF5 = 1;
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t status; // w8
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v11; // x1
  SimpleAnimation_o *AnimationName; // x0
  UnityEngine_Object_o *v13; // x20
  const MethodInfo *v14; // x2
  SimpleAnimation_o *v15; // x20
  SimpleAnimation_State_o *Item; // x0
  __int64 v17; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v19; // x20
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
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

  if ( (byte_42EBAF3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isOverWrite, (_DWORD)method, v3);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v6, v7, v8);
    byte_42EBAF3 = 1;
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
    v13 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    {
      v15 = this->fields.simpleAnimationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v14);
      if ( v15 )
      {
        Item = SimpleAnimation__get_Item(v15, (System_String_o *)AnimationName, 0LL);
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
                goto LABEL_23;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_23:
            p_method = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 18LL, v17);
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
          goto LABEL_44;
        }
      }
    }
    else
    {
      v23 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
        goto LABEL_44;
      v30 = this->fields.animationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v24);
      if ( v30 )
      {
        v31 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v30,
                                                  (System_String_o *)AnimationName,
                                                  0LL);
        AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v31, 0LL, 0LL);
        if ( ((unsigned __int8)AnimationName & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_46;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v31, 2, 0LL);
        }
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( AnimationName )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_44:
          this->fields.totaltime = 0.0;
          *(&this->fields.loop + 4) = 1;
          this->fields.playAnimation = 0LL;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.playAnimation,
            0LL,
            (System_String_array **)v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          goto LABEL_45;
        }
      }
    }
LABEL_46:
    sub_B5D69C(AnimationName, v11);
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
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *v14; // x20
  const MethodInfo *v15; // x2
  SimpleAnimation_o *v16; // x20
  SimpleAnimation_o *AnimationName; // x0
  __int64 v18; // x1
  SimpleAnimation_State_o *Item; // x0
  __int64 v20; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v22; // x20
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v27; // x20
  MethodInfo *v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Animation_o *v34; // x20
  UnityEngine_TrackedReference_o *v35; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_42EBAF2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isOverWrite, (_DWORD)callback, method);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v11, v12, v13);
    byte_42EBAF2 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_B5D560(
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
  v14 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    v16 = this->fields.simpleAnimationComponent;
    AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v15);
    if ( v16 )
    {
      Item = SimpleAnimation__get_Item(v16, (System_String_o *)AnimationName, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v22 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v23 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v23;
            p_offset += 2;
            if ( v23 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_16;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_16:
          p_method = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 18LL, v20);
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
        goto LABEL_45;
      }
    }
    goto LABEL_46;
  }
  v27 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
    goto LABEL_45;
  v34 = this->fields.animationComponent;
  AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v28);
  if ( !v34 )
    goto LABEL_46;
  v35 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v34, (System_String_o *)AnimationName, 0LL);
  AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v35, 0LL, 0LL);
  if ( ((unsigned __int8)AnimationName & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_46;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v35, 2, 0LL);
  }
  AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
  if ( !AnimationName )
LABEL_46:
    sub_B5D69C(AnimationName, v18);
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_45:
  this->fields.totaltime = 0.0;
  *(&this->fields.loop + 4) = 1;
  this->fields.playAnimation = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.playAnimation,
    0LL,
    (System_String_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_Object_o *v18; // x20
  __int64 v19; // x1
  UnityEngine_Animation_o *v20; // x0
  UnityEngine_TrackedReference_o *v21; // x0
  UnityEngine_Object_o *v22; // x20
  UnityEngine_Object_o *v24; // x20
  UnityEngine_TrackedReference_o *v25; // x0
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  System_String_o *baseName; // x0
  __int64 *v31; // x8

  if ( (byte_42EBAF0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, status, (_DWORD)method, v3);
    sub_B5D5C4(&string_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_16347/*"_loop"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16371/*"_start"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16334/*"_end"*/, v15, v16, v17);
    byte_42EBAF0 = 1;
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
          v20 = this->fields.animationComponent;
          if ( !v20 )
            goto LABEL_53;
          Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                     v20,
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
          v20 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
          if ( !v20 )
            goto LABEL_53;
          if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v20, this->fields.endAnimationName, 0LL) )
            return this->fields.endAnimationName;
        }
      }
      baseName = this->fields.baseName;
      v31 = &StringLiteral_16334/*"_end"*/;
      break;
    case 4:
      if ( !System_String__IsNullOrEmpty(this->fields.loopAnimationName, 0LL) )
      {
        v24 = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
        {
          v20 = this->fields.animationComponent;
          if ( !v20 )
            goto LABEL_53;
          v25 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                    v20,
                                                    this->fields.loopAnimationName,
                                                    0LL);
          if ( UnityEngine_TrackedReference__op_Inequality(v25, 0LL, 0LL) )
            return this->fields.loopAnimationName;
        }
        v26 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
        {
          v20 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
          if ( !v20 )
            goto LABEL_53;
          if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v20, this->fields.loopAnimationName, 0LL) )
            return this->fields.loopAnimationName;
        }
      }
      baseName = this->fields.baseName;
      v31 = &StringLiteral_16347/*"_loop"*/;
      break;
    case 3:
      if ( System_String__IsNullOrEmpty(this->fields.startAnimationName, 0LL) )
        goto LABEL_51;
      v18 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
      {
        v20 = this->fields.animationComponent;
        if ( !v20 )
          goto LABEL_53;
        v21 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v20,
                                                  this->fields.startAnimationName,
                                                  0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v21, 0LL, 0LL) )
          return this->fields.startAnimationName;
      }
      v22 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
      {
LABEL_51:
        baseName = this->fields.baseName;
        v31 = &StringLiteral_16371/*"_start"*/;
        return System_String__Concat_44577788(baseName, (System_String_o *)*v31, 0LL);
      }
      v20 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v20 )
      {
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v20, this->fields.startAnimationName, 0LL) )
          return this->fields.startAnimationName;
        goto LABEL_51;
      }
LABEL_53:
      sub_B5D69C(v20, v19);
    default:
      return string_TypeInfo->static_fields->Empty;
  }
  return System_String__Concat_44577788(baseName, (System_String_o *)*v31, 0LL);
}


void __fastcall MapGimmickEffectComponent__NextPlayAnimation(
        MapGimmickEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  SimpleAnimation_o *v19; // x20
  System_String_o *AnimationName; // x0
  __int64 v21; // x1
  SimpleAnimation_State_o *v22; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v24; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  BattleServantConfConponent_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  BattleServantConfConponent_o *v28; // x0
  System_Action_o *v29; // x20
  SimpleAnimation_o *v30; // x20
  SimpleAnimation_State_o *v31; // x0
  MapGimmickEffectComponent_o *v32; // x22
  SimpleAnimation_o *v33; // x20
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v35; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_String_o *name; // x1
  BattleServantConfConponent_o *v39; // x0
  System_Action_o *v40; // x20
  UnityEngine_Animation_o *v41; // x20
  UnityEngine_Animation_o *v42; // x20
  struct System_String_o **p_requestAnimation; // x0

  v4 = next;
  if ( (byte_42EBAF1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, next, (_DWORD)method, v3);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EBAF1 = 1;
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
      if ( v4 == 3 )
      {
        p_callAfterStart = (BattleServantConfConponent_o *)&this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          p_callAfterStart->klass = 0LL;
          sub_B5D560(p_callAfterStart, 0LL, v13, v14, v15, v16, v17, v18);
          ActionExtensions__Call(callAfterStart, 0LL);
        }
        v4 = 3;
      }
      else if ( v4 == 4 )
      {
        if ( *(&this->fields.loop + 4) )
          v4 = 4;
        else
          v4 = 6;
      }
      goto LABEL_67;
    }
    switch ( v4 )
    {
      case 3:
        v24 = this->fields.animationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, (const MethodInfo *)v13);
        if ( !v24 )
          goto LABEL_70;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v24, AnimationName, 0LL);
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
          v4 = 3;
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
    v39 = (BattleServantConfConponent_o *)&this->fields.callAfterStart;
    v40 = this->fields.callAfterStart;
    if ( v40 )
    {
      v39->klass = 0LL;
      sub_B5D560(v39, 0LL, v13, v14, v15, v16, v17, v18);
      ActionExtensions__Call(v40, 0LL);
    }
    if ( *(&this->fields.loop + 4) )
    {
      v41 = this->fields.animationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, (const MethodInfo *)v13);
      if ( !v41 )
        goto LABEL_70;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v41, AnimationName, 0LL);
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        v4 = 4;
        goto LABEL_64;
      }
    }
LABEL_52:
    v42 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, (const MethodInfo *)v13);
    if ( !v42 )
      goto LABEL_70;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v42, AnimationName, 0LL);
    v4 = 6;
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
  if ( v4 != 6 )
  {
    if ( v4 != 4 )
    {
      if ( v4 != 3 )
        goto LABEL_44;
      v19 = this->fields.simpleAnimationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, (const MethodInfo *)v13);
      if ( !v19 )
        goto LABEL_70;
      v22 = SimpleAnimation__get_Item(v19, AnimationName, 0LL);
      if ( v22 )
        goto LABEL_14;
      AnimationName = (System_String_o *)this->fields.simpleAnimationComponent;
      if ( !AnimationName )
        goto LABEL_70;
      v22 = SimpleAnimation__get_Item((SimpleAnimation_o *)AnimationName, this->fields.baseName, 0LL);
      if ( v22 )
      {
LABEL_14:
        this->fields.losttime = 0.0;
        v4 = 3;
LABEL_36:
        v32 = this;
LABEL_39:
        klass = v22->klass;
        if ( *(_WORD *)&v22->klass->_2.bitflags1 )
        {
          v35 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v35;
            p_offset += 2;
            if ( v35 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
              goto LABEL_43;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_43:
          p_method = sub_AF54C0(v22, SimpleAnimation_State_TypeInfo, 9LL, v14);
        }
        AnimationName = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                             v22,
                                             *(_QWORD *)(p_method + 8));
        if ( v32 )
        {
          name = AnimationName;
          goto LABEL_61;
        }
LABEL_70:
        sub_B5D69C(AnimationName, v21);
      }
    }
    v28 = (BattleServantConfConponent_o *)&this->fields.callAfterStart;
    v29 = this->fields.callAfterStart;
    if ( v29 )
    {
      v28->klass = 0LL;
      sub_B5D560(v28, 0LL, v13, v14, v15, v16, v17, v18);
      ActionExtensions__Call(v29, 0LL);
    }
    if ( *(&this->fields.loop + 4) )
    {
      v30 = this->fields.simpleAnimationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, (const MethodInfo *)v13);
      if ( !v30 )
        goto LABEL_70;
      v31 = SimpleAnimation__get_Item(v30, AnimationName, 0LL);
      if ( v31 )
      {
        v22 = v31;
        v4 = 4;
        goto LABEL_36;
      }
    }
  }
  v33 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, (const MethodInfo *)v13);
  if ( !v33 )
    goto LABEL_70;
  v22 = SimpleAnimation__get_Item(v33, AnimationName, 0LL);
  v4 = 6;
  v32 = this;
  if ( v22 )
    goto LABEL_39;
LABEL_44:
  v32 = this;
  name = (struct System_String_o *)StringLiteral_1/*""*/;
LABEL_61:
  v32->fields.requestAnimation = name;
  p_requestAnimation = &v32->fields.requestAnimation;
LABEL_69:
  sub_B5D560(
    (BattleServantConfConponent_o *)p_requestAnimation,
    (System_Int32_array **)name,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.status = v4;
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
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  const MethodInfo *v15; // x2
  SimpleAnimation_o *v16; // x20
  System_String_o *AnimationName; // x0
  __int64 v18; // x1
  SimpleAnimation_State_o *v19; // x0
  __int64 v20; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v22; // x19
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  const MethodInfo *v27; // x2
  UnityEngine_Animation_o *v28; // x20
  UnityEngine_TrackedReference_o *Item; // x19

  if ( (byte_42EBAF4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDestroy, (_DWORD)callback, method);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v11, v12, v13);
    byte_42EBAF4 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStop = callback;
  *(&this->fields.loop + 4) = 0;
  this->fields.isDestroy = isDestroy;
  sub_B5D560(
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
LABEL_27:
    sub_B5D69C(AnimationName, v18);
  }
  v16 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v15);
  if ( !v16 )
    goto LABEL_27;
  v19 = SimpleAnimation__get_Item(v16, AnimationName, 0LL);
  if ( v19 )
  {
    klass = v19->klass;
    v22 = v19;
    if ( *(_WORD *)&v19->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v23;
        p_offset += 2;
        if ( v23 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AF54C0(v19, SimpleAnimation_State_TypeInfo, 18LL, v20);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v22, 1LL, *(_QWORD *)(p_method + 8));
  }
}