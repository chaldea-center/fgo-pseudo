void MapGimmickEffectComponent___ctor(MapGimmickEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C34505 & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectComponent_TypeInfo);
    byte_4C34505 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void MapGimmickEffectComponent__ForceLoop(
        MapGimmickEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  int32_t status; // w8
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *AnimationName; // x0
  UnityEngine_Object_o *v8; // x20
  const MethodInfo *v9; // x2
  SimpleAnimation_o *v10; // x20
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *v17; // x20
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  UnityEngine_Animation_o *v20; // x20
  UnityEngine_TrackedReference_o *v21; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_4C34503 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C34503 = 1;
  }
  status = this->fields.status;
  if ( !status )
  {
    CommonEffectComponent__Init((CommonEffectComponent_o *)this, 0, 0, 0);
    if ( isOverWrite )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
      {
        AnimationName = this->fields.simpleAnimationComponent;
        if ( !AnimationName )
          goto LABEL_42;
        SimpleAnimation__Stop(AnimationName, 0);
      }
      else
      {
        animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
          goto LABEL_41;
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( !AnimationName )
          goto LABEL_42;
        UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0);
      }
    }
LABEL_41:
    ((void (__fastcall *)(MapGimmickEffectComponent_o *, __int64, const MethodInfo *))this->klass->vtable._5_NextPlayAnimation.methodPtr)(
      this,
      4,
      this->klass->vtable._5_NextPlayAnimation.method);
    return;
  }
  if ( status != 2 )
  {
    v8 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
    {
      v10 = this->fields.simpleAnimationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v9);
      if ( v10 )
      {
        Item = SimpleAnimation__get_Item(v10, (System_String_o *)AnimationName, 0);
        if ( Item )
        {
          klass = Item->klass;
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
                goto LABEL_21;
            }
            v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
          }
          else
          {
LABEL_21:
            v16 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 18);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v16)(v13, 2, *(_QWORD *)(v16 + 8));
        }
        AnimationName = this->fields.simpleAnimationComponent;
        if ( AnimationName )
        {
          SimpleAnimation__Stop(AnimationName, 0);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v17 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v17, 0, 0) )
        goto LABEL_40;
      v20 = this->fields.animationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v18);
      if ( v20 )
      {
        v21 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v20,
                                                  (System_String_o *)AnimationName,
                                                  0);
        AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v21, 0, 0);
        if ( ((unsigned __int8)AnimationName & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v21, 2, 0);
        }
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( AnimationName )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playAnimation, 0, (int32_t)v18, v19);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1C32E7C(AnimationName);
  }
}


void MapGimmickEffectComponent__ForceStart(
        MapGimmickEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v7; // x20
  const MethodInfo *v8; // x2
  SimpleAnimation_o *v9; // x20
  SimpleAnimation_o *AnimationName; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v18; // x20
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  UnityEngine_Animation_o *v21; // x20
  UnityEngine_TrackedReference_o *v22; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_4C34502 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C34502 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callAfterStart, (int32_t)callback, (int32_t)callback, method);
  if ( !this->fields.status )
  {
    if ( isOverWrite )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
      {
        AnimationName = this->fields.simpleAnimationComponent;
        if ( !AnimationName )
          goto LABEL_42;
        SimpleAnimation__Stop(AnimationName, 0);
      }
      else
      {
        animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
        {
          AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
          if ( !AnimationName )
            goto LABEL_42;
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0);
        }
      }
    }
    CommonEffectComponent__Init((CommonEffectComponent_o *)this, 0, 0, 0);
    return;
  }
  v7 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    v9 = this->fields.simpleAnimationComponent;
    AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v8);
    if ( v9 )
    {
      Item = SimpleAnimation__get_Item(v9, (System_String_o *)AnimationName, 0);
      if ( Item )
      {
        klass = Item->klass;
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
          v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
        }
        else
        {
LABEL_15:
          v16 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 18);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v16)(v13, 2, *(_QWORD *)(v16 + 8));
      }
      AnimationName = this->fields.simpleAnimationComponent;
      if ( AnimationName )
      {
        SimpleAnimation__Stop(AnimationName, 0);
        goto LABEL_41;
      }
    }
    goto LABEL_42;
  }
  v18 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v18, 0, 0) )
    goto LABEL_41;
  v21 = this->fields.animationComponent;
  AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v19);
  if ( !v21 )
    goto LABEL_42;
  v22 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v21, (System_String_o *)AnimationName, 0);
  AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v22, 0, 0);
  if ( ((unsigned __int8)AnimationName & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_42;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v22, 2, 0);
  }
  AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
  if ( !AnimationName )
LABEL_42:
    sub_1C32E7C(AnimationName);
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0);
LABEL_41:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playAnimation, 0, (int32_t)v19, v20);
  ((void (__fastcall *)(MapGimmickEffectComponent_o *, __int64, const MethodInfo *))this->klass->vtable._5_NextPlayAnimation.methodPtr)(
    this,
    3,
    this->klass->vtable._5_NextPlayAnimation.method);
}


System_String_o *MapGimmickEffectComponent__GetAnimationName(
        MapGimmickEffectComponent_o *this,
        int32_t status,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Animation_o *v6; // x0
  UnityEngine_TrackedReference_o *v7; // x0
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v13; // x20
  UnityEngine_TrackedReference_o *v14; // x0
  UnityEngine_Object_o *v15; // x20
  System_String_o *baseName; // x0
  __int64 *v17; // x8

  if ( (byte_4C34500 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_16562/*"_loop"*/);
    sub_1C32C20(&StringLiteral_16581/*"_start"*/);
    sub_1C32C20(&StringLiteral_16546/*"_end"*/);
    byte_4C34500 = 1;
  }
  if ( status == 6 )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.endAnimationName, 0) )
    {
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
      {
        v6 = this->fields.animationComponent;
        if ( !v6 )
          goto LABEL_47;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v6, this->fields.endAnimationName, 0);
        if ( UnityEngine_TrackedReference__op_Inequality(Item, 0, 0) )
          return this->fields.endAnimationName;
      }
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
      {
        v6 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
        if ( !v6 )
          goto LABEL_47;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v6, this->fields.endAnimationName, 0) )
          return this->fields.endAnimationName;
      }
    }
    baseName = this->fields.baseName;
    v17 = &StringLiteral_16546/*"_end"*/;
    return System_String__Concat_63518544(baseName, (System_String_o *)*v17, 0);
  }
  if ( status == 4 )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.loopAnimationName, 0) )
    {
      v13 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
      {
        v6 = this->fields.animationComponent;
        if ( !v6 )
          goto LABEL_47;
        v14 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v6, this->fields.loopAnimationName, 0);
        if ( UnityEngine_TrackedReference__op_Inequality(v14, 0, 0) )
          return this->fields.loopAnimationName;
      }
      v15 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
      {
        v6 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
        if ( !v6 )
          goto LABEL_47;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v6, this->fields.loopAnimationName, 0) )
          return this->fields.loopAnimationName;
      }
    }
    baseName = this->fields.baseName;
    v17 = &StringLiteral_16562/*"_loop"*/;
    return System_String__Concat_63518544(baseName, (System_String_o *)*v17, 0);
  }
  if ( status != 3 )
    return string_TypeInfo->static_fields->Empty;
  if ( System_String__IsNullOrEmpty(this->fields.startAnimationName, 0) )
    goto LABEL_43;
  v5 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    v6 = this->fields.animationComponent;
    if ( !v6 )
      goto LABEL_47;
    v7 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v6, this->fields.startAnimationName, 0);
    if ( UnityEngine_TrackedReference__op_Inequality(v7, 0, 0) )
      return this->fields.startAnimationName;
  }
  v8 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
  {
    v6 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( v6 )
    {
      if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v6, this->fields.startAnimationName, 0) )
        return this->fields.startAnimationName;
      goto LABEL_43;
    }
LABEL_47:
    sub_1C32E7C(v6);
  }
LABEL_43:
  baseName = this->fields.baseName;
  v17 = &StringLiteral_16581/*"_start"*/;
  return System_String__Concat_63518544(baseName, (System_String_o *)*v17, 0);
}


void MapGimmickEffectComponent__NextPlayAnimation(
        MapGimmickEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  SimpleAnimation_o *v8; // x20
  System_String_o *AnimationName; // x0
  SimpleAnimation_State_o *Item; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v12; // x20
  UnityEngine_TrackedReference_o *v13; // x21
  CGThumbnailListItem_o *v14; // x0
  System_Action_o *v15; // x20
  CGThumbnailListItem_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  SimpleAnimation_o *v18; // x20
  SimpleAnimation_State_o *v19; // x0
  SimpleAnimation_o *v20; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v22; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v24; // x0
  CGThumbnailListItem_o *v25; // x0
  System_Action_o *v26; // x20
  UnityEngine_Animation_o *v27; // x20
  UnityEngine_Animation_o *v28; // x20
  struct System_String_o *v29; // x1

  if ( (byte_4C34501 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C34501 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    if ( next != 6 )
    {
      if ( next != 4 )
      {
        if ( next != 3 )
          goto LABEL_64;
        v8 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v6);
        if ( !v8 )
          goto LABEL_66;
        Item = SimpleAnimation__get_Item(v8, AnimationName, 0);
        if ( Item )
          goto LABEL_13;
        AnimationName = (System_String_o *)this->fields.simpleAnimationComponent;
        if ( !AnimationName )
          goto LABEL_66;
        Item = SimpleAnimation__get_Item((SimpleAnimation_o *)AnimationName, this->fields.baseName, 0);
        if ( Item )
        {
LABEL_13:
          next = 3;
          this->fields.endtime = 0.0;
          goto LABEL_36;
        }
      }
      p_callAfterStart = (CGThumbnailListItem_o *)&this->fields.callAfterStart;
      callAfterStart = this->fields.callAfterStart;
      if ( callAfterStart )
      {
        p_callAfterStart->klass = 0;
        sub_1C32BC4(p_callAfterStart, 0, (int32_t)v6, v7);
        ActionExtensions__Call(callAfterStart, 0);
      }
      if ( this->fields.loop )
      {
        v18 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v6);
        if ( !v18 )
          goto LABEL_66;
        v19 = SimpleAnimation__get_Item(v18, AnimationName, 0);
        if ( v19 )
        {
          Item = v19;
          next = 4;
          goto LABEL_36;
        }
      }
    }
    v20 = this->fields.simpleAnimationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v6);
    if ( !v20 )
      goto LABEL_66;
    Item = SimpleAnimation__get_Item(v20, AnimationName, 0);
    next = 6;
    if ( Item )
    {
LABEL_36:
      klass = Item->klass;
      v22 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v22;
          p_offset += 2;
          if ( !v22 )
            goto LABEL_40;
        }
        v24 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9];
      }
      else
      {
LABEL_40:
        v24 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 9);
      }
      AnimationName = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v24)(
                                           Item,
                                           *(_QWORD *)(v24 + 8));
      if ( !this )
LABEL_66:
        sub_1C32E7C(AnimationName);
      goto LABEL_63;
    }
LABEL_64:
    v29 = (struct System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_65;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    if ( next == 3 )
    {
      v14 = (CGThumbnailListItem_o *)&this->fields.callAfterStart;
      v15 = this->fields.callAfterStart;
      if ( v15 )
      {
        v14->klass = 0;
        sub_1C32BC4(v14, 0, (int32_t)v6, v7);
        ActionExtensions__Call(v15, 0);
      }
      next = 3;
    }
    else if ( next == 4 )
    {
      if ( this->fields.loop )
        next = 4;
      else
        next = 6;
    }
    goto LABEL_64;
  }
  switch ( next )
  {
    case 3:
      v12 = this->fields.animationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v6);
      if ( !v12 )
        goto LABEL_66;
      v13 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v12, AnimationName, 0);
      if ( UnityEngine_TrackedReference__op_Equality(v13, 0, 0) )
      {
        AnimationName = (System_String_o *)this->fields.animationComponent;
        if ( !AnimationName )
          goto LABEL_66;
        v13 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)AnimationName,
                                                  this->fields.baseName,
                                                  0);
      }
      if ( !UnityEngine_TrackedReference__op_Equality(v13, 0, 0) )
      {
        this->fields.endtime = 0.0;
        next = 3;
        goto LABEL_60;
      }
      break;
    case 6:
      goto LABEL_48;
    case 4:
      break;
    default:
      AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(0, 0, 0);
      if ( ((unsigned __int8)AnimationName & 1) != 0 )
        goto LABEL_66;
      goto LABEL_64;
  }
  v25 = (CGThumbnailListItem_o *)&this->fields.callAfterStart;
  v26 = this->fields.callAfterStart;
  if ( v26 )
  {
    v25->klass = 0;
    sub_1C32BC4(v25, 0, (int32_t)v6, v7);
    ActionExtensions__Call(v26, 0);
  }
  if ( this->fields.loop )
  {
    v27 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v6);
    if ( !v27 )
      goto LABEL_66;
    v13 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v27, AnimationName, 0);
    if ( !UnityEngine_TrackedReference__op_Equality(v13, 0, 0) )
    {
      next = 4;
      goto LABEL_60;
    }
  }
LABEL_48:
  v28 = this->fields.animationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v6);
  if ( !v28 )
    goto LABEL_66;
  v13 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v28, AnimationName, 0);
  next = 6;
LABEL_60:
  AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v13, 0, 0);
  if ( ((unsigned __int8)AnimationName & 1) == 0 )
    goto LABEL_64;
  if ( !v13 )
    goto LABEL_66;
  AnimationName = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v13, 0);
LABEL_63:
  v29 = AnimationName;
LABEL_65:
  this->fields.requestAnimation = v29;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.requestAnimation, (int32_t)v29, (int32_t)v6, v7);
  this->fields.status = next;
}


void MapGimmickEffectComponent__Stop(
        MapGimmickEffectComponent_o *this,
        bool isDestroy,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  const MethodInfo *v8; // x2
  SimpleAnimation_o *v9; // x20
  System_String_o *AnimationName; // x0
  SimpleAnimation_State_o *v11; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v13; // x19
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *animationComponent; // x20
  const MethodInfo *v18; // x2
  UnityEngine_Animation_o *v19; // x20
  UnityEngine_TrackedReference_o *Item; // x19

  if ( (byte_4C34504 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C34504 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields.callAfterStop = callback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callAfterStop, (int32_t)callback, (int32_t)callback, method);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
      return;
    v19 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v18);
    if ( v19 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v19, AnimationName, 0);
      AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
      if ( ((unsigned __int8)AnimationName & 1) == 0 )
        return;
      if ( Item )
      {
        UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)Item, 1, 0);
        return;
      }
    }
LABEL_25:
    sub_1C32E7C(AnimationName);
  }
  v9 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v8);
  if ( !v9 )
    goto LABEL_25;
  v11 = SimpleAnimation__get_Item(v9, AnimationName, 0);
  if ( v11 )
  {
    klass = v11->klass;
    v13 = v11;
    v14 = *(unsigned __int16 *)&v11->klass->_2.rank;
    if ( *(_WORD *)&v11->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v14;
        p_offset += 2;
        if ( !v14 )
          goto LABEL_14;
      }
      v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
    }
    else
    {
LABEL_14:
      v16 = sub_1C83438(v11, SimpleAnimation_State_TypeInfo, 18);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v16)(v13, 1, *(_QWORD *)(v16 + 8));
  }
}