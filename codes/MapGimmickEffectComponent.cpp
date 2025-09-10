void MapGimmickEffectComponent___ctor(MapGimmickEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C23E31 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectComponent_TypeInfo);
    byte_4C23E31 = 1;
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
  __int64 v7; // x1
  SimpleAnimation_o *AnimationName; // x0
  UnityEngine_Object_o *v9; // x20
  const MethodInfo *v10; // x2
  SimpleAnimation_o *v11; // x20
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x20
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Object_o *v18; // x20
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  UnityEngine_Animation_o *v21; // x20
  UnityEngine_TrackedReference_o *v22; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_4C23E2F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C23E2F = 1;
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
    v9 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
    {
      v11 = this->fields.simpleAnimationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v10);
      if ( v11 )
      {
        Item = SimpleAnimation__get_Item(v11, (System_String_o *)AnimationName, 0);
        if ( Item )
        {
          klass = Item->klass;
          v14 = Item;
          v15 = *(unsigned __int16 *)&Item->klass->_2.rank;
          if ( *(_WORD *)&Item->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v15;
              p_offset += 2;
              if ( !v15 )
                goto LABEL_21;
            }
            v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
          }
          else
          {
LABEL_21:
            v17 = sub_1C7DCA8(Item, SimpleAnimation_State_TypeInfo, 18);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v17)(v14, 2, *(_QWORD *)(v17 + 8));
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
      v18 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v18, 0, 0) )
        goto LABEL_40;
      v21 = this->fields.animationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v19);
      if ( v21 )
      {
        v22 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v21,
                                                  (System_String_o *)AnimationName,
                                                  0);
        AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v22, 0, 0);
        if ( ((unsigned __int8)AnimationName & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v22, 2, 0);
        }
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( AnimationName )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playAnimation, 0, (int32_t)v19, v20);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1C2D6EC(AnimationName, v7);
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
  __int64 v11; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x20
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v19; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  UnityEngine_Animation_o *v22; // x20
  UnityEngine_TrackedReference_o *v23; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_4C23E2E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C23E2E = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callAfterStart, (int32_t)callback, (int32_t)callback, method);
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
        v14 = Item;
        v15 = *(unsigned __int16 *)&Item->klass->_2.rank;
        if ( *(_WORD *)&Item->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v15;
            p_offset += 2;
            if ( !v15 )
              goto LABEL_15;
          }
          v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
        }
        else
        {
LABEL_15:
          v17 = sub_1C7DCA8(Item, SimpleAnimation_State_TypeInfo, 18);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v17)(v14, 2, *(_QWORD *)(v17 + 8));
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
  v19 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v19, 0, 0) )
    goto LABEL_41;
  v22 = this->fields.animationComponent;
  AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v20);
  if ( !v22 )
    goto LABEL_42;
  v23 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v22, (System_String_o *)AnimationName, 0);
  AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v23, 0, 0);
  if ( ((unsigned __int8)AnimationName & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_42;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v23, 2, 0);
  }
  AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
  if ( !AnimationName )
LABEL_42:
    sub_1C2D6EC(AnimationName, v11);
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0);
LABEL_41:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playAnimation, 0, (int32_t)v20, v21);
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
  __int64 v6; // x1
  UnityEngine_Animation_o *v7; // x0
  UnityEngine_TrackedReference_o *v8; // x0
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v14; // x20
  UnityEngine_TrackedReference_o *v15; // x0
  UnityEngine_Object_o *v16; // x20
  System_String_o *baseName; // x0
  __int64 *v18; // x8

  if ( (byte_4C23E2C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_16560/*"_loop"*/);
    sub_1C2D490(&StringLiteral_16579/*"_start"*/);
    sub_1C2D490(&StringLiteral_16544/*"_end"*/);
    byte_4C23E2C = 1;
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
        v7 = this->fields.animationComponent;
        if ( !v7 )
          goto LABEL_47;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v7, this->fields.endAnimationName, 0);
        if ( UnityEngine_TrackedReference__op_Inequality(Item, 0, 0) )
          return this->fields.endAnimationName;
      }
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
      {
        v7 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
        if ( !v7 )
          goto LABEL_47;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v7, this->fields.endAnimationName, 0) )
          return this->fields.endAnimationName;
      }
    }
    baseName = this->fields.baseName;
    v18 = &StringLiteral_16544/*"_end"*/;
    return System_String__Concat_63457864(baseName, (System_String_o *)*v18, 0);
  }
  if ( status == 4 )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.loopAnimationName, 0) )
    {
      v14 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
      {
        v7 = this->fields.animationComponent;
        if ( !v7 )
          goto LABEL_47;
        v15 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v7, this->fields.loopAnimationName, 0);
        if ( UnityEngine_TrackedReference__op_Inequality(v15, 0, 0) )
          return this->fields.loopAnimationName;
      }
      v16 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
      {
        v7 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
        if ( !v7 )
          goto LABEL_47;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v7, this->fields.loopAnimationName, 0) )
          return this->fields.loopAnimationName;
      }
    }
    baseName = this->fields.baseName;
    v18 = &StringLiteral_16560/*"_loop"*/;
    return System_String__Concat_63457864(baseName, (System_String_o *)*v18, 0);
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
    v7 = this->fields.animationComponent;
    if ( !v7 )
      goto LABEL_47;
    v8 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v7, this->fields.startAnimationName, 0);
    if ( UnityEngine_TrackedReference__op_Inequality(v8, 0, 0) )
      return this->fields.startAnimationName;
  }
  v9 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
  {
    v7 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( v7 )
    {
      if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v7, this->fields.startAnimationName, 0) )
        return this->fields.startAnimationName;
      goto LABEL_43;
    }
LABEL_47:
    sub_1C2D6EC(v7, v6);
  }
LABEL_43:
  baseName = this->fields.baseName;
  v18 = &StringLiteral_16579/*"_start"*/;
  return System_String__Concat_63457864(baseName, (System_String_o *)*v18, 0);
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
  __int64 v10; // x1
  SimpleAnimation_State_o *Item; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v13; // x20
  UnityEngine_TrackedReference_o *v14; // x21
  CGThumbnailListItem_o *v15; // x0
  System_Action_o *v16; // x20
  CGThumbnailListItem_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  SimpleAnimation_o *v19; // x20
  SimpleAnimation_State_o *v20; // x0
  SimpleAnimation_o *v21; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v23; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v25; // x0
  CGThumbnailListItem_o *v26; // x0
  System_Action_o *v27; // x20
  UnityEngine_Animation_o *v28; // x20
  UnityEngine_Animation_o *v29; // x20
  struct System_String_o *v30; // x1

  if ( (byte_4C23E2D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23E2D = 1;
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
        sub_1C2D434(p_callAfterStart, 0, (int32_t)v6, v7);
        ActionExtensions__Call(callAfterStart, 0);
      }
      if ( this->fields.loop )
      {
        v19 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v6);
        if ( !v19 )
          goto LABEL_66;
        v20 = SimpleAnimation__get_Item(v19, AnimationName, 0);
        if ( v20 )
        {
          Item = v20;
          next = 4;
          goto LABEL_36;
        }
      }
    }
    v21 = this->fields.simpleAnimationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v6);
    if ( !v21 )
      goto LABEL_66;
    Item = SimpleAnimation__get_Item(v21, AnimationName, 0);
    next = 6;
    if ( Item )
    {
LABEL_36:
      klass = Item->klass;
      v23 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v23;
          p_offset += 2;
          if ( !v23 )
            goto LABEL_40;
        }
        v25 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9];
      }
      else
      {
LABEL_40:
        v25 = sub_1C7DCA8(Item, SimpleAnimation_State_TypeInfo, 9);
      }
      AnimationName = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v25)(
                                           Item,
                                           *(_QWORD *)(v25 + 8));
      if ( !this )
LABEL_66:
        sub_1C2D6EC(AnimationName, v10);
      goto LABEL_63;
    }
LABEL_64:
    v30 = (struct System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_65;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    if ( next == 3 )
    {
      v15 = (CGThumbnailListItem_o *)&this->fields.callAfterStart;
      v16 = this->fields.callAfterStart;
      if ( v16 )
      {
        v15->klass = 0;
        sub_1C2D434(v15, 0, (int32_t)v6, v7);
        ActionExtensions__Call(v16, 0);
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
      v13 = this->fields.animationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v6);
      if ( !v13 )
        goto LABEL_66;
      v14 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v13, AnimationName, 0);
      if ( UnityEngine_TrackedReference__op_Equality(v14, 0, 0) )
      {
        AnimationName = (System_String_o *)this->fields.animationComponent;
        if ( !AnimationName )
          goto LABEL_66;
        v14 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)AnimationName,
                                                  this->fields.baseName,
                                                  0);
      }
      if ( !UnityEngine_TrackedReference__op_Equality(v14, 0, 0) )
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
  v26 = (CGThumbnailListItem_o *)&this->fields.callAfterStart;
  v27 = this->fields.callAfterStart;
  if ( v27 )
  {
    v26->klass = 0;
    sub_1C2D434(v26, 0, (int32_t)v6, v7);
    ActionExtensions__Call(v27, 0);
  }
  if ( this->fields.loop )
  {
    v28 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v6);
    if ( !v28 )
      goto LABEL_66;
    v14 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v28, AnimationName, 0);
    if ( !UnityEngine_TrackedReference__op_Equality(v14, 0, 0) )
    {
      next = 4;
      goto LABEL_60;
    }
  }
LABEL_48:
  v29 = this->fields.animationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v6);
  if ( !v29 )
    goto LABEL_66;
  v14 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v29, AnimationName, 0);
  next = 6;
LABEL_60:
  AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v14, 0, 0);
  if ( ((unsigned __int8)AnimationName & 1) == 0 )
    goto LABEL_64;
  if ( !v14 )
    goto LABEL_66;
  AnimationName = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v14, 0);
LABEL_63:
  v30 = AnimationName;
LABEL_65:
  this->fields.requestAnimation = v30;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.requestAnimation, (int32_t)v30, (int32_t)v6, v7);
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
  __int64 v11; // x1
  SimpleAnimation_State_o *v12; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x19
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Object_o *animationComponent; // x20
  const MethodInfo *v19; // x2
  UnityEngine_Animation_o *v20; // x20
  UnityEngine_TrackedReference_o *Item; // x19

  if ( (byte_4C23E30 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C23E30 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields.callAfterStop = callback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callAfterStop, (int32_t)callback, (int32_t)callback, method);
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
    v20 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v19);
    if ( v20 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v20, AnimationName, 0);
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
    sub_1C2D6EC(AnimationName, v11);
  }
  v9 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v8);
  if ( !v9 )
    goto LABEL_25;
  v12 = SimpleAnimation__get_Item(v9, AnimationName, 0);
  if ( v12 )
  {
    klass = v12->klass;
    v14 = v12;
    v15 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v15;
        p_offset += 2;
        if ( !v15 )
          goto LABEL_14;
      }
      v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
    }
    else
    {
LABEL_14:
      v17 = sub_1C7DCA8(v12, SimpleAnimation_State_TypeInfo, 18);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v17)(v14, 1, *(_QWORD *)(v17 + 8));
  }
}