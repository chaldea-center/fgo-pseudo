void __fastcall MapGimmickEffectComponent___ctor(MapGimmickEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapGimmickEffectComponent__ForceLoop(
        MapGimmickEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int requestAnimation; // w8
  UnityEngine_Object_o *animationComponent; // x20
  struct UnityEngine_Animation_o *v8; // x0
  UnityEngine_Object_o *v9; // x20
  const MethodInfo *v10; // x2
  struct UnityEngine_Animation_o *v11; // x20
  System_String_o *AnimationName; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v15; // x20
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_String_o *v19; // x20
  MethodInfo *v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_String_o *v26; // x20
  System_String_o *v27; // x0
  UnityEngine_AnimationState_o *v28; // x20
  struct System_String_o *v29; // x0
  struct System_String_o *settedVoiceStr; // x20
  struct System_String_o *v31; // x0
  struct UnityEngine_Animation_o *v32; // x0

  if ( (byte_40FB5D3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v5);
    byte_40FB5D3 = 1;
  }
  requestAnimation = (int)this->fields.requestAnimation;
  if ( !requestAnimation )
  {
    CommonEffectComponent__Init((CommonEffectComponent_o *)this, 0, 0, 0LL);
    if ( isOverWrite )
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
        v8 = this->fields.animationComponent;
        if ( !v8 )
          goto LABEL_46;
        SimpleAnimation__Stop((SimpleAnimation_o *)v8, 0LL);
      }
      else
      {
        settedVoiceStr = this->fields.settedVoiceStr;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)settedVoiceStr, 0LL, 0LL) )
          goto LABEL_45;
        v31 = this->fields.settedVoiceStr;
        if ( !v31 )
          goto LABEL_46;
        UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v31, 0LL);
      }
    }
LABEL_45:
    ((void (__fastcall *)(MapGimmickEffectComponent_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_NextPlayAnimation.method)(
      this,
      4LL,
      this->klass->vtable._6_ForceStart.methodPtr);
    return;
  }
  if ( requestAnimation != 2 )
  {
    v9 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    {
      v11 = this->fields.animationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v10);
      if ( v11 )
      {
        Item = SimpleAnimation__get_Item((SimpleAnimation_o *)v11, AnimationName, 0LL);
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
            p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 18LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
            v15,
            2LL,
            *(_QWORD *)(p_method + 8));
        }
        v32 = this->fields.animationComponent;
        if ( v32 )
        {
          SimpleAnimation__Stop((SimpleAnimation_o *)v32, 0LL);
          goto LABEL_44;
        }
      }
    }
    else
    {
      v19 = this->fields.settedVoiceStr;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
        goto LABEL_44;
      v26 = this->fields.settedVoiceStr;
      v27 = MapGimmickEffectComponent__GetAnimationName(this, 4, v20);
      if ( v26 )
      {
        v28 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v26, v27, 0LL);
        if ( UnityEngine_TrackedReference__op_Inequality((UnityEngine_TrackedReference_o *)v28, 0LL, 0LL) )
        {
          if ( !v28 )
            goto LABEL_46;
          UnityEngine_AnimationState__set_wrapMode(v28, 2, 0LL);
        }
        v29 = this->fields.settedVoiceStr;
        if ( v29 )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v29, 0LL);
LABEL_44:
          *(_DWORD *)&this->fields.isStart = 0;
          LOBYTE(this->fields.particlelist) = 1;
          this->fields.effectName = 0LL;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.effectName,
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
    sub_B170D4();
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
  struct UnityEngine_Animation_o *v14; // x20
  System_String_o *AnimationName; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v18; // x20
  unsigned __int64 v19; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  struct UnityEngine_Animation_o *v23; // x0
  struct System_String_o *v24; // x20
  MethodInfo *v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_String_o *v31; // x20
  System_String_o *v32; // x0
  UnityEngine_AnimationState_o *v33; // x20
  struct System_String_o *v34; // x0
  struct System_String_o *settedVoiceStr; // x20
  struct System_String_o *v36; // x0
  struct UnityEngine_Animation_o *v37; // x0

  if ( (byte_40FB5D2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v11);
    byte_40FB5D2 = 1;
  }
  if ( LODWORD(this->fields.requestAnimation) == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStop = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callAfterStop,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !LODWORD(this->fields.requestAnimation) )
  {
    if ( isOverWrite )
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
        v23 = this->fields.animationComponent;
        if ( !v23 )
          goto LABEL_46;
        SimpleAnimation__Stop((SimpleAnimation_o *)v23, 0LL);
      }
      else
      {
        settedVoiceStr = this->fields.settedVoiceStr;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)settedVoiceStr, 0LL, 0LL) )
        {
          v36 = this->fields.settedVoiceStr;
          if ( !v36 )
            goto LABEL_46;
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v36, 0LL);
        }
      }
    }
    CommonEffectComponent__Init((CommonEffectComponent_o *)this, 0, 0, 0LL);
    return;
  }
  v12 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    v14 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v13);
    if ( v14 )
    {
      Item = SimpleAnimation__get_Item((SimpleAnimation_o *)v14, AnimationName, 0LL);
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
          p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 18LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(
          v18,
          2LL,
          *(_QWORD *)(p_method + 8));
      }
      v37 = this->fields.animationComponent;
      if ( v37 )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)v37, 0LL);
        goto LABEL_45;
      }
    }
    goto LABEL_46;
  }
  v24 = this->fields.settedVoiceStr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL) )
    goto LABEL_45;
  v31 = this->fields.settedVoiceStr;
  v32 = MapGimmickEffectComponent__GetAnimationName(this, 4, v25);
  if ( !v31 )
    goto LABEL_46;
  v33 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v31, v32, 0LL);
  if ( UnityEngine_TrackedReference__op_Inequality((UnityEngine_TrackedReference_o *)v33, 0LL, 0LL) )
  {
    if ( !v33 )
      goto LABEL_46;
    UnityEngine_AnimationState__set_wrapMode(v33, 2, 0LL);
  }
  v34 = this->fields.settedVoiceStr;
  if ( !v34 )
LABEL_46:
    sub_B170D4();
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v34, 0LL);
LABEL_45:
  *(_DWORD *)&this->fields.isStart = 0;
  LOBYTE(this->fields.particlelist) = 1;
  this->fields.effectName = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectName,
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
  struct System_String_o *v9; // x20
  struct System_String_o *v10; // x0
  UnityEngine_TrackedReference_o *v11; // x0
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_Animation_o *v13; // x0
  struct System_String_o *v15; // x20
  struct System_String_o *v16; // x0
  UnityEngine_TrackedReference_o *v17; // x0
  UnityEngine_Object_o *v18; // x20
  struct UnityEngine_Animation_o *v19; // x0
  struct System_String_o *settedVoiceStr; // x20
  struct System_String_o *v21; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *animationComponent; // x20
  struct UnityEngine_Animation_o *v24; // x0
  System_String_o *asset; // x0
  __int64 *v26; // x8

  if ( (byte_40FB5D0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&status);
    sub_B16FFC(&string_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_16090, v6);
    sub_B16FFC(&StringLiteral_16113, v7);
    sub_B16FFC(&StringLiteral_16078, v8);
    byte_40FB5D0 = 1;
  }
  switch ( status )
  {
    case 5:
      if ( !System_String__IsNullOrEmpty((System_String_o *)this[1].klass, 0LL) )
      {
        settedVoiceStr = this->fields.settedVoiceStr;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)settedVoiceStr, 0LL, 0LL) )
        {
          v21 = this->fields.settedVoiceStr;
          if ( !v21 )
            goto LABEL_53;
          Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                     (UnityEngine_Animation_o *)v21,
                                                     (System_String_o *)this[1].klass,
                                                     0LL);
          if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
            return (System_String_o *)this[1].klass;
        }
        animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
        {
          v24 = this->fields.animationComponent;
          if ( !v24 )
            goto LABEL_53;
          if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v24, (System_String_o *)this[1].klass, 0LL) )
            return (System_String_o *)this[1].klass;
        }
      }
      asset = (System_String_o *)this->fields.asset;
      v26 = &StringLiteral_16078;
      break;
    case 4:
      if ( !System_String__IsNullOrEmpty(this->fields.endAnimationName, 0LL) )
      {
        v15 = this->fields.settedVoiceStr;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
        {
          v16 = this->fields.settedVoiceStr;
          if ( !v16 )
            goto LABEL_53;
          v17 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                    (UnityEngine_Animation_o *)v16,
                                                    this->fields.endAnimationName,
                                                    0LL);
          if ( UnityEngine_TrackedReference__op_Inequality(v17, 0LL, 0LL) )
            return this->fields.endAnimationName;
        }
        v18 = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
        {
          v19 = this->fields.animationComponent;
          if ( !v19 )
            goto LABEL_53;
          if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v19, this->fields.endAnimationName, 0LL) )
            return this->fields.endAnimationName;
        }
      }
      asset = (System_String_o *)this->fields.asset;
      v26 = &StringLiteral_16090;
      break;
    case 3:
      if ( System_String__IsNullOrEmpty(this->fields.loopAnimationName, 0LL) )
        goto LABEL_51;
      v9 = this->fields.settedVoiceStr;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
      {
        v10 = this->fields.settedVoiceStr;
        if ( !v10 )
          goto LABEL_53;
        v11 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)v10,
                                                  this->fields.loopAnimationName,
                                                  0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v11, 0LL, 0LL) )
          return this->fields.loopAnimationName;
      }
      v12 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
      {
LABEL_51:
        asset = (System_String_o *)this->fields.asset;
        v26 = &StringLiteral_16113;
        return System_String__Concat_43743732(asset, (System_String_o *)*v26, 0LL);
      }
      v13 = this->fields.animationComponent;
      if ( v13 )
      {
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v13, this->fields.loopAnimationName, 0LL) )
          return this->fields.loopAnimationName;
        goto LABEL_51;
      }
LABEL_53:
      sub_B170D4();
    default:
      return string_TypeInfo->static_fields->Empty;
  }
  return System_String__Concat_43743732(asset, (System_String_o *)*v26, 0LL);
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
  UnityEngine_Object_o *animationComponent; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UnityEngine_Animation_o *v14; // x20
  System_String_o *v15; // x0
  SimpleAnimation_State_o *v16; // x21
  struct UnityEngine_Animation_o *v17; // x0
  struct System_String_o *settedVoiceStr; // x21
  struct System_String_o *v19; // x20
  System_String_o *AnimationName; // x0
  UnityEngine_TrackedReference_o *Item; // x21
  struct System_String_o *v22; // x0
  BattleServantConfConponent_o *p_callAfterStop; // x0
  System_Action_o *callAfterStop; // x20
  BattleServantConfConponent_o *v25; // x0
  System_Action_o *v26; // x20
  struct UnityEngine_Animation_o *v27; // x20
  System_String_o *v28; // x0
  SimpleAnimation_State_o *v29; // x0
  MapGimmickEffectComponent_o *v30; // x22
  struct UnityEngine_Animation_o *v31; // x20
  System_String_o *v32; // x0
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v34; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_String_o *name; // x1
  BattleServantConfConponent_o *v38; // x0
  System_Action_o *v39; // x20
  struct System_String_o *v40; // x20
  System_String_o *v41; // x0
  struct System_String_o *v42; // x20
  System_String_o *v43; // x0
  __int64 v44; // x0
  struct System_String_o **p_playAnimation; // x0

  v3 = next;
  if ( (byte_40FB5D1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FB5D1 = 1;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    settedVoiceStr = this->fields.settedVoiceStr;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)settedVoiceStr, 0LL, 0LL) )
    {
      if ( v3 == 3 )
      {
        p_callAfterStop = (BattleServantConfConponent_o *)&this->fields.callAfterStop;
        callAfterStop = this->fields.callAfterStop;
        if ( callAfterStop )
        {
          p_callAfterStop->klass = 0LL;
          sub_B16F98(p_callAfterStop, 0LL, v8, v9, v10, v11, v12, v13);
          ActionExtensions__Call(callAfterStop, 0LL);
        }
        v3 = 3;
      }
      else if ( v3 == 4 )
      {
        if ( LOBYTE(this->fields.particlelist) )
          v3 = 4;
        else
          v3 = 5;
      }
      goto LABEL_67;
    }
    switch ( v3 )
    {
      case 3:
        v19 = this->fields.settedVoiceStr;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, (const MethodInfo *)v8);
        if ( !v19 )
          goto LABEL_70;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)v19,
                                                   AnimationName,
                                                   0LL);
        if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
        {
          v22 = this->fields.settedVoiceStr;
          if ( !v22 )
            goto LABEL_70;
          Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                     (UnityEngine_Animation_o *)v22,
                                                     (System_String_o *)this->fields.asset,
                                                     0LL);
        }
        if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
        {
          this->fields.losttime = 0.0;
          v3 = 3;
          goto LABEL_64;
        }
        break;
      case 5:
        goto LABEL_52;
      case 4:
        break;
      default:
        Item = 0LL;
        goto LABEL_64;
    }
    v38 = (BattleServantConfConponent_o *)&this->fields.callAfterStop;
    v39 = this->fields.callAfterStop;
    if ( v39 )
    {
      v38->klass = 0LL;
      sub_B16F98(v38, 0LL, v8, v9, v10, v11, v12, v13);
      ActionExtensions__Call(v39, 0LL);
    }
    if ( LOBYTE(this->fields.particlelist) )
    {
      v40 = this->fields.settedVoiceStr;
      v41 = MapGimmickEffectComponent__GetAnimationName(this, 4, (const MethodInfo *)v8);
      if ( !v40 )
        goto LABEL_70;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v40, v41, 0LL);
      if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      {
        v3 = 4;
        goto LABEL_64;
      }
    }
LABEL_52:
    v42 = this->fields.settedVoiceStr;
    v43 = MapGimmickEffectComponent__GetAnimationName(this, 5, (const MethodInfo *)v8);
    if ( !v42 )
      goto LABEL_70;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v42, v43, 0LL);
    v3 = 5;
LABEL_64:
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
    {
      if ( !Item )
        goto LABEL_70;
      name = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)Item, 0LL);
LABEL_68:
      this->fields.playAnimation = name;
      p_playAnimation = &this->fields.playAnimation;
      goto LABEL_69;
    }
LABEL_67:
    name = (struct System_String_o *)StringLiteral_1;
    goto LABEL_68;
  }
  if ( v3 != 5 )
  {
    if ( v3 != 4 )
    {
      if ( v3 != 3 )
        goto LABEL_44;
      v14 = this->fields.animationComponent;
      v15 = MapGimmickEffectComponent__GetAnimationName(this, 3, (const MethodInfo *)v8);
      if ( !v14 )
        goto LABEL_70;
      v16 = SimpleAnimation__get_Item((SimpleAnimation_o *)v14, v15, 0LL);
      if ( v16 )
        goto LABEL_14;
      v17 = this->fields.animationComponent;
      if ( !v17 )
        goto LABEL_70;
      v16 = SimpleAnimation__get_Item((SimpleAnimation_o *)v17, (System_String_o *)this->fields.asset, 0LL);
      if ( v16 )
      {
LABEL_14:
        this->fields.losttime = 0.0;
        v3 = 3;
LABEL_36:
        v30 = this;
LABEL_39:
        klass = v16->klass;
        if ( *(_WORD *)&v16->klass->_2.bitflags1 )
        {
          v34 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v34;
            p_offset += 2;
            if ( v34 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
              goto LABEL_43;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_43:
          p_method = sub_AAFEF8(v16, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v44 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v16, *(_QWORD *)(p_method + 8));
        if ( v30 )
        {
          name = (struct System_String_o *)v44;
          goto LABEL_61;
        }
LABEL_70:
        sub_B170D4();
      }
    }
    v25 = (BattleServantConfConponent_o *)&this->fields.callAfterStop;
    v26 = this->fields.callAfterStop;
    if ( v26 )
    {
      v25->klass = 0LL;
      sub_B16F98(v25, 0LL, v8, v9, v10, v11, v12, v13);
      ActionExtensions__Call(v26, 0LL);
    }
    if ( LOBYTE(this->fields.particlelist) )
    {
      v27 = this->fields.animationComponent;
      v28 = MapGimmickEffectComponent__GetAnimationName(this, 4, (const MethodInfo *)v8);
      if ( !v27 )
        goto LABEL_70;
      v29 = SimpleAnimation__get_Item((SimpleAnimation_o *)v27, v28, 0LL);
      if ( v29 )
      {
        v16 = v29;
        v3 = 4;
        goto LABEL_36;
      }
    }
  }
  v31 = this->fields.animationComponent;
  v32 = MapGimmickEffectComponent__GetAnimationName(this, 5, (const MethodInfo *)v8);
  if ( !v31 )
    goto LABEL_70;
  v16 = SimpleAnimation__get_Item((SimpleAnimation_o *)v31, v32, 0LL);
  v3 = 5;
  v30 = this;
  if ( v16 )
    goto LABEL_39;
LABEL_44:
  v30 = this;
  name = (struct System_String_o *)StringLiteral_1;
LABEL_61:
  v30->fields.playAnimation = name;
  p_playAnimation = &v30->fields.playAnimation;
LABEL_69:
  sub_B16F98((BattleServantConfConponent_o *)p_playAnimation, (System_Int32_array **)name, v8, v9, v10, v11, v12, v13);
  LODWORD(this->fields.requestAnimation) = v3;
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
  UnityEngine_Object_o *animationComponent; // x20
  const MethodInfo *v13; // x2
  struct UnityEngine_Animation_o *v14; // x20
  System_String_o *v15; // x0
  SimpleAnimation_State_o *v16; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v18; // x19
  unsigned __int64 v19; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_String_o *settedVoiceStr; // x20
  const MethodInfo *v23; // x2
  struct System_String_o *v24; // x20
  System_String_o *AnimationName; // x0
  UnityEngine_TrackedReference_o *Item; // x19

  if ( (byte_40FB5D4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isDestroy);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v11);
    byte_40FB5D4 = 1;
  }
  if ( LODWORD(this->fields.requestAnimation) == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  *(_QWORD *)&this->fields.useAnimNum = callback;
  LOBYTE(this->fields.particlelist) = 0;
  *(&this->fields.isStart + 4) = isDestroy;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.useAnimNum,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    settedVoiceStr = this->fields.settedVoiceStr;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)settedVoiceStr, 0LL, 0LL) )
      return;
    v24 = this->fields.settedVoiceStr;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v23);
    if ( v24 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v24,
                                                 AnimationName,
                                                 0LL);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
        return;
      if ( Item )
      {
        UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)Item, 1, 0LL);
        return;
      }
    }
LABEL_27:
    sub_B170D4();
  }
  v14 = this->fields.animationComponent;
  v15 = MapGimmickEffectComponent__GetAnimationName(this, 4, v13);
  if ( !v14 )
    goto LABEL_27;
  v16 = SimpleAnimation__get_Item((SimpleAnimation_o *)v14, v15, 0LL);
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
      p_method = sub_AAFEF8(v16, SimpleAnimation_State_TypeInfo, 18LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v18, 1LL, *(_QWORD *)(p_method + 8));
  }
}