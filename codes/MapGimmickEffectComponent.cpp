void MapGimmickEffectComponent___ctor(MapGimmickEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CEB11C & 1) == 0 )
  {
    sub_1C7BAE8(&CommonEffectComponent_TypeInfo);
    byte_4CEB11C = 1;
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  UnityEngine_Animation_o *v25; // x20
  UnityEngine_TrackedReference_o *v26; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_4CEB11A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CEB11A = 1;
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
            v17 = sub_1C51E70(Item, SimpleAnimation_State_TypeInfo, 18);
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
      v25 = this->fields.animationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v19);
      if ( v25 )
      {
        v26 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v25,
                                                  (System_String_o *)AnimationName,
                                                  0);
        AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v26, 0, 0);
        if ( ((unsigned __int8)AnimationName & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v26, 2, 0);
        }
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( AnimationName )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.playAnimation,
            0,
            (int32_t)v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1C7BD40(AnimationName, v7);
  }
}


void MapGimmickEffectComponent__ForceStart(
        MapGimmickEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_o *v11; // x20
  const MethodInfo *v12; // x2
  SimpleAnimation_o *v13; // x20
  SimpleAnimation_o *AnimationName; // x0
  __int64 v15; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v18; // x20
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v23; // x20
  const MethodInfo *v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_Animation_o *v30; // x20
  UnityEngine_TrackedReference_o *v31; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_4CEB119 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CEB119 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_1C7BA8C(
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
  v11 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
  {
    v13 = this->fields.simpleAnimationComponent;
    AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v12);
    if ( v13 )
    {
      Item = SimpleAnimation__get_Item(v13, (System_String_o *)AnimationName, 0);
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
          v21 = sub_1C51E70(Item, SimpleAnimation_State_TypeInfo, 18);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v21)(v18, 2, *(_QWORD *)(v21 + 8));
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
  v23 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v23, 0, 0) )
    goto LABEL_41;
  v30 = this->fields.animationComponent;
  AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v24);
  if ( !v30 )
    goto LABEL_42;
  v31 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v30, (System_String_o *)AnimationName, 0);
  AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v31, 0, 0);
  if ( ((unsigned __int8)AnimationName & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_42;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v31, 2, 0);
  }
  AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
  if ( !AnimationName )
LABEL_42:
    sub_1C7BD40(AnimationName, v15);
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0);
LABEL_41:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.playAnimation, 0, (int32_t)v24, v25, v26, v27, v28, v29);
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

  if ( (byte_4CEB117 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16625/*"_loop"*/);
    sub_1C7BAE8(&StringLiteral_16644/*"_start"*/);
    sub_1C7BAE8(&StringLiteral_16609/*"_end"*/);
    byte_4CEB117 = 1;
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
    v18 = &StringLiteral_16609/*"_end"*/;
    return System_String__Concat_64176912(baseName, (System_String_o *)*v18, 0);
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
    v18 = &StringLiteral_16625/*"_loop"*/;
    return System_String__Concat_64176912(baseName, (System_String_o *)*v18, 0);
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
    sub_1C7BD40(v7, v6);
  }
LABEL_43:
  baseName = this->fields.baseName;
  v18 = &StringLiteral_16644/*"_start"*/;
  return System_String__Concat_64176912(baseName, (System_String_o *)*v18, 0);
}


void MapGimmickEffectComponent__NextPlayAnimation(
        MapGimmickEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  SimpleAnimation_o *v12; // x20
  System_String_o *AnimationName; // x0
  __int64 v14; // x1
  SimpleAnimation_State_o *Item; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v17; // x20
  UnityEngine_TrackedReference_o *v18; // x21
  GrandQuestFolderBoardItem_o *v19; // x0
  System_Action_o *v20; // x20
  GrandQuestFolderBoardItem_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  SimpleAnimation_o *v23; // x20
  SimpleAnimation_State_o *v24; // x0
  SimpleAnimation_o *v25; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v27; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v29; // x0
  GrandQuestFolderBoardItem_o *v30; // x0
  System_Action_o *v31; // x20
  UnityEngine_Animation_o *v32; // x20
  UnityEngine_Animation_o *v33; // x20
  struct System_String_o *v34; // x1

  if ( (byte_4CEB118 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEB118 = 1;
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
        v12 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v6);
        if ( !v12 )
          goto LABEL_66;
        Item = SimpleAnimation__get_Item(v12, AnimationName, 0);
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
      p_callAfterStart = (GrandQuestFolderBoardItem_o *)&this->fields.callAfterStart;
      callAfterStart = this->fields.callAfterStart;
      if ( callAfterStart )
      {
        p_callAfterStart->klass = 0;
        sub_1C7BA8C(p_callAfterStart, 0, (int32_t)v6, v7, v8, v9, v10, v11);
        ActionExtensions__Call(callAfterStart, 0);
      }
      if ( this->fields.loop )
      {
        v23 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v6);
        if ( !v23 )
          goto LABEL_66;
        v24 = SimpleAnimation__get_Item(v23, AnimationName, 0);
        if ( v24 )
        {
          Item = v24;
          next = 4;
          goto LABEL_36;
        }
      }
    }
    v25 = this->fields.simpleAnimationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v6);
    if ( !v25 )
      goto LABEL_66;
    Item = SimpleAnimation__get_Item(v25, AnimationName, 0);
    next = 6;
    if ( Item )
    {
LABEL_36:
      klass = Item->klass;
      v27 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v27;
          p_offset += 2;
          if ( !v27 )
            goto LABEL_40;
        }
        v29 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9];
      }
      else
      {
LABEL_40:
        v29 = sub_1C51E70(Item, SimpleAnimation_State_TypeInfo, 9);
      }
      AnimationName = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v29)(
                                           Item,
                                           *(_QWORD *)(v29 + 8));
      if ( !this )
LABEL_66:
        sub_1C7BD40(AnimationName, v14);
      goto LABEL_63;
    }
LABEL_64:
    v34 = (struct System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_65;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    if ( next == 3 )
    {
      v19 = (GrandQuestFolderBoardItem_o *)&this->fields.callAfterStart;
      v20 = this->fields.callAfterStart;
      if ( v20 )
      {
        v19->klass = 0;
        sub_1C7BA8C(v19, 0, (int32_t)v6, v7, v8, v9, v10, v11);
        ActionExtensions__Call(v20, 0);
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
      v17 = this->fields.animationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v6);
      if ( !v17 )
        goto LABEL_66;
      v18 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v17, AnimationName, 0);
      if ( UnityEngine_TrackedReference__op_Equality(v18, 0, 0) )
      {
        AnimationName = (System_String_o *)this->fields.animationComponent;
        if ( !AnimationName )
          goto LABEL_66;
        v18 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)AnimationName,
                                                  this->fields.baseName,
                                                  0);
      }
      if ( !UnityEngine_TrackedReference__op_Equality(v18, 0, 0) )
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
  v30 = (GrandQuestFolderBoardItem_o *)&this->fields.callAfterStart;
  v31 = this->fields.callAfterStart;
  if ( v31 )
  {
    v30->klass = 0;
    sub_1C7BA8C(v30, 0, (int32_t)v6, v7, v8, v9, v10, v11);
    ActionExtensions__Call(v31, 0);
  }
  if ( this->fields.loop )
  {
    v32 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v6);
    if ( !v32 )
      goto LABEL_66;
    v18 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v32, AnimationName, 0);
    if ( !UnityEngine_TrackedReference__op_Equality(v18, 0, 0) )
    {
      next = 4;
      goto LABEL_60;
    }
  }
LABEL_48:
  v33 = this->fields.animationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v6);
  if ( !v33 )
    goto LABEL_66;
  v18 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v33, AnimationName, 0);
  next = 6;
LABEL_60:
  AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v18, 0, 0);
  if ( ((unsigned __int8)AnimationName & 1) == 0 )
    goto LABEL_64;
  if ( !v18 )
    goto LABEL_66;
  AnimationName = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v18, 0);
LABEL_63:
  v34 = AnimationName;
LABEL_65:
  this->fields.requestAnimation = v34;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.requestAnimation,
    (int32_t)v34,
    (int32_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.status = next;
}


void MapGimmickEffectComponent__Stop(
        MapGimmickEffectComponent_o *this,
        bool isDestroy,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  const MethodInfo *v12; // x2
  SimpleAnimation_o *v13; // x20
  System_String_o *AnimationName; // x0
  __int64 v15; // x1
  SimpleAnimation_State_o *v16; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v18; // x19
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0
  UnityEngine_Object_o *animationComponent; // x20
  const MethodInfo *v23; // x2
  UnityEngine_Animation_o *v24; // x20
  UnityEngine_TrackedReference_o *Item; // x19

  if ( (byte_4CEB11B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CEB11B = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields.callAfterStop = callback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callAfterStop,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
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
    v24 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v23);
    if ( v24 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v24, AnimationName, 0);
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
    sub_1C7BD40(AnimationName, v15);
  }
  v13 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v12);
  if ( !v13 )
    goto LABEL_25;
  v16 = SimpleAnimation__get_Item(v13, AnimationName, 0);
  if ( v16 )
  {
    klass = v16->klass;
    v18 = v16;
    v19 = *(unsigned __int16 *)&v16->klass->_2.rank;
    if ( *(_WORD *)&v16->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v19;
        p_offset += 2;
        if ( !v19 )
          goto LABEL_14;
      }
      v21 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
    }
    else
    {
LABEL_14:
      v21 = sub_1C51E70(v16, SimpleAnimation_State_TypeInfo, 18);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v21)(v18, 1, *(_QWORD *)(v21 + 8));
  }
}