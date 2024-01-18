void __fastcall MapGimmickEffectComponent___ctor(MapGimmickEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4185893 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectComponent_TypeInfo, method);
    byte_4185893 = 1;
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
  long double v7; // q0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v9; // x1
  SimpleAnimation_o *AnimationName; // x0
  UnityEngine_Object_o *v11; // x20
  const MethodInfo *v12; // x2
  SimpleAnimation_o *v13; // x20
  SimpleAnimation_State_o *Item; // x0
  __int64 v15; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v17; // x20
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *v21; // x20
  const MethodInfo *v22; // x2
  UnityEngine_Animation_o *v23; // x20
  UnityEngine_TrackedReference_o *v24; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_4185891 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v5);
    byte_4185891 = 1;
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
    ((void (__fastcall *)(MapGimmickEffectComponent_o *, __int64, Il2CppMethodPointer, long double))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr,
      v7);
    return;
  }
  if ( status != 2 )
  {
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
          v17 = Item;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v18 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v18;
              p_offset += 2;
              if ( v18 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_23;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_23:
            p_method = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 18LL, v15);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
            v17,
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
      v21 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
        goto LABEL_44;
      v23 = this->fields.animationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v22);
      if ( v23 )
      {
        v24 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v23,
                                                  (System_String_o *)AnimationName,
                                                  0LL);
        AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v24, 0LL, 0LL);
        if ( ((unsigned __int8)AnimationName & 1) != 0 )
        {
          if ( !v24 )
            goto LABEL_46;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v24, 2, 0LL);
        }
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( AnimationName )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_44:
          this->fields.totaltime = 0.0;
          *(&this->fields.loop + 4) = 1;
          this->fields.playAnimation = 0LL;
          *(__n128 *)&v7 = sub_B2C2F8(&this->fields.playAnimation, 0LL);
          goto LABEL_45;
        }
      }
    }
LABEL_46:
    sub_B2C434(AnimationName, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickEffectComponent__ForceStart(
        MapGimmickEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  const MethodInfo *v9; // x2
  SimpleAnimation_o *v10; // x20
  SimpleAnimation_o *AnimationName; // x0
  __int64 v12; // x1
  SimpleAnimation_State_o *Item; // x0
  __int64 v14; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v16; // x20
  unsigned __int64 v17; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v21; // x20
  const MethodInfo *v22; // x2
  UnityEngine_Animation_o *v23; // x20
  UnityEngine_TrackedReference_o *v24; // x20
  UnityEngine_Object_o *animationComponent; // x20
  long double v26; // q0

  if ( (byte_4185890 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v7);
    byte_4185890 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_B2C2F8(&this->fields.callAfterStart, callback);
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
  v8 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
  {
    v10 = this->fields.simpleAnimationComponent;
    AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v9);
    if ( v10 )
    {
      Item = SimpleAnimation__get_Item(v10, (System_String_o *)AnimationName, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v16 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v17 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v17;
            p_offset += 2;
            if ( v17 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_16;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_16:
          p_method = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 18LL, v14);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
          v16,
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
  v21 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    goto LABEL_45;
  v23 = this->fields.animationComponent;
  AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v22);
  if ( !v23 )
    goto LABEL_46;
  v24 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v23, (System_String_o *)AnimationName, 0LL);
  AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v24, 0LL, 0LL);
  if ( ((unsigned __int8)AnimationName & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_46;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v24, 2, 0LL);
  }
  AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
  if ( !AnimationName )
LABEL_46:
    sub_B2C434(AnimationName, v12);
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_45:
  this->fields.totaltime = 0.0;
  *(&this->fields.loop + 4) = 1;
  this->fields.playAnimation = 0LL;
  *(__n128 *)&v26 = sub_B2C2F8(&this->fields.playAnimation, 0LL);
  ((void (__fastcall *)(MapGimmickEffectComponent_o *, __int64, Il2CppMethodPointer, long double))this->klass->vtable._5_NextPlayAnimation.method)(
    this,
    3LL,
    this->klass->vtable._6_ForceStart.methodPtr,
    v26);
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
  UnityEngine_Object_o *v15; // x20
  UnityEngine_TrackedReference_o *v16; // x0
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  System_String_o *baseName; // x0
  __int64 *v22; // x8

  if ( (byte_418588E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&status);
    sub_B2C35C(&string_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_16154/*"_loop"*/, v6);
    sub_B2C35C(&StringLiteral_16178/*"_start"*/, v7);
    sub_B2C35C(&StringLiteral_16141/*"_end"*/, v8);
    byte_418588E = 1;
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
          v11 = this->fields.animationComponent;
          if ( !v11 )
            goto LABEL_53;
          Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                     v11,
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
          v11 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
          if ( !v11 )
            goto LABEL_53;
          if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v11, this->fields.endAnimationName, 0LL) )
            return this->fields.endAnimationName;
        }
      }
      baseName = this->fields.baseName;
      v22 = &StringLiteral_16141/*"_end"*/;
      break;
    case 4:
      if ( !System_String__IsNullOrEmpty(this->fields.loopAnimationName, 0LL) )
      {
        v15 = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
        {
          v11 = this->fields.animationComponent;
          if ( !v11 )
            goto LABEL_53;
          v16 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                    v11,
                                                    this->fields.loopAnimationName,
                                                    0LL);
          if ( UnityEngine_TrackedReference__op_Inequality(v16, 0LL, 0LL) )
            return this->fields.loopAnimationName;
        }
        v17 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
        {
          v11 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
          if ( !v11 )
            goto LABEL_53;
          if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v11, this->fields.loopAnimationName, 0LL) )
            return this->fields.loopAnimationName;
        }
      }
      baseName = this->fields.baseName;
      v22 = &StringLiteral_16154/*"_loop"*/;
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
        v11 = this->fields.animationComponent;
        if ( !v11 )
          goto LABEL_53;
        v12 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v11,
                                                  this->fields.startAnimationName,
                                                  0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v12, 0LL, 0LL) )
          return this->fields.startAnimationName;
      }
      v13 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
      {
LABEL_51:
        baseName = this->fields.baseName;
        v22 = &StringLiteral_16178/*"_start"*/;
        return System_String__Concat_44305532(baseName, (System_String_o *)*v22, 0LL);
      }
      v11 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v11 )
      {
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v11, this->fields.startAnimationName, 0LL) )
          return this->fields.startAnimationName;
        goto LABEL_51;
      }
LABEL_53:
      sub_B2C434(v11, v10);
    default:
      return string_TypeInfo->static_fields->Empty;
  }
  return System_String__Concat_44305532(baseName, (System_String_o *)*v22, 0LL);
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
  SimpleAnimation_o *v9; // x20
  System_String_o *AnimationName; // x0
  __int64 v11; // x1
  __int64 v12; // x3
  SimpleAnimation_State_o *v13; // x21
  UnityEngine_Object_o *animationComponent; // x21
  const MethodInfo *v15; // x2
  UnityEngine_Animation_o *v16; // x20
  UnityEngine_TrackedReference_o *Item; // x21
  struct System_Action_o **p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  struct System_Action_o **v20; // x0
  System_Action_o *v21; // x20
  SimpleAnimation_o *v22; // x20
  SimpleAnimation_State_o *v23; // x0
  MapGimmickEffectComponent_o *v24; // x22
  SimpleAnimation_o *v25; // x20
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v27; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_String_o *name; // x1
  struct System_Action_o **v31; // x0
  System_Action_o *v32; // x20
  UnityEngine_Animation_o *v33; // x20
  UnityEngine_Animation_o *v34; // x20
  struct System_String_o **p_requestAnimation; // x0

  v3 = next;
  if ( (byte_418588F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418588F = 1;
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
        p_callAfterStart = &this->fields.callAfterStart;
        callAfterStart = this->fields.callAfterStart;
        if ( callAfterStart )
        {
          *p_callAfterStart = 0LL;
          sub_B2C2F8(p_callAfterStart, 0LL);
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
        v16 = this->fields.animationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v15);
        if ( !v16 )
          goto LABEL_70;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v16, AnimationName, 0LL);
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
    v31 = &this->fields.callAfterStart;
    v32 = this->fields.callAfterStart;
    if ( v32 )
    {
      *v31 = 0LL;
      sub_B2C2F8(v31, 0LL);
      ActionExtensions__Call(v32, 0LL);
    }
    if ( *(&this->fields.loop + 4) )
    {
      v33 = this->fields.animationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v15);
      if ( !v33 )
        goto LABEL_70;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v33, AnimationName, 0LL);
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        v3 = 4;
        goto LABEL_64;
      }
    }
LABEL_52:
    v34 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v15);
    if ( !v34 )
      goto LABEL_70;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v34, AnimationName, 0LL);
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
      v9 = this->fields.simpleAnimationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v8);
      if ( !v9 )
        goto LABEL_70;
      v13 = SimpleAnimation__get_Item(v9, AnimationName, 0LL);
      if ( v13 )
        goto LABEL_14;
      AnimationName = (System_String_o *)this->fields.simpleAnimationComponent;
      if ( !AnimationName )
        goto LABEL_70;
      v13 = SimpleAnimation__get_Item((SimpleAnimation_o *)AnimationName, this->fields.baseName, 0LL);
      if ( v13 )
      {
LABEL_14:
        this->fields.losttime = 0.0;
        v3 = 3;
LABEL_36:
        v24 = this;
LABEL_39:
        klass = v13->klass;
        if ( *(_WORD *)&v13->klass->_2.bitflags1 )
        {
          v27 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v27;
            p_offset += 2;
            if ( v27 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
              goto LABEL_43;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_43:
          p_method = sub_AC5258(v13, SimpleAnimation_State_TypeInfo, 9LL, v12);
        }
        AnimationName = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                             v13,
                                             *(_QWORD *)(p_method + 8));
        if ( v24 )
        {
          name = AnimationName;
          goto LABEL_61;
        }
LABEL_70:
        sub_B2C434(AnimationName, v11);
      }
    }
    v20 = &this->fields.callAfterStart;
    v21 = this->fields.callAfterStart;
    if ( v21 )
    {
      *v20 = 0LL;
      sub_B2C2F8(v20, 0LL);
      ActionExtensions__Call(v21, 0LL);
    }
    if ( *(&this->fields.loop + 4) )
    {
      v22 = this->fields.simpleAnimationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v8);
      if ( !v22 )
        goto LABEL_70;
      v23 = SimpleAnimation__get_Item(v22, AnimationName, 0LL);
      if ( v23 )
      {
        v13 = v23;
        v3 = 4;
        goto LABEL_36;
      }
    }
  }
  v25 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v8);
  if ( !v25 )
    goto LABEL_70;
  v13 = SimpleAnimation__get_Item(v25, AnimationName, 0LL);
  v3 = 6;
  v24 = this;
  if ( v13 )
    goto LABEL_39;
LABEL_44:
  v24 = this;
  name = (struct System_String_o *)StringLiteral_1/*""*/;
LABEL_61:
  v24->fields.requestAnimation = name;
  p_requestAnimation = &v24->fields.requestAnimation;
LABEL_69:
  sub_B2C2F8(p_requestAnimation, name);
  this->fields.status = v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickEffectComponent__Stop(
        MapGimmickEffectComponent_o *this,
        bool isDestroy,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  const MethodInfo *v9; // x2
  SimpleAnimation_o *v10; // x20
  System_String_o *AnimationName; // x0
  __int64 v12; // x1
  SimpleAnimation_State_o *v13; // x0
  __int64 v14; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v16; // x19
  unsigned __int64 v17; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  const MethodInfo *v21; // x2
  UnityEngine_Animation_o *v22; // x20
  UnityEngine_TrackedReference_o *Item; // x19

  if ( (byte_4185892 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isDestroy);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v7);
    byte_4185892 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStop = callback;
  *(&this->fields.loop + 4) = 0;
  this->fields.isDestroy = isDestroy;
  sub_B2C2F8(&this->fields.callAfterStop, callback);
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
    v22 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v21);
    if ( v22 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v22, AnimationName, 0LL);
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
    sub_B2C434(AnimationName, v12);
  }
  v10 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v9);
  if ( !v10 )
    goto LABEL_27;
  v13 = SimpleAnimation__get_Item(v10, AnimationName, 0LL);
  if ( v13 )
  {
    klass = v13->klass;
    v16 = v13;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v17;
        p_offset += 2;
        if ( v17 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AC5258(v13, SimpleAnimation_State_TypeInfo, 18LL, v14);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v16, 1LL, *(_QWORD *)(p_method + 8));
  }
}