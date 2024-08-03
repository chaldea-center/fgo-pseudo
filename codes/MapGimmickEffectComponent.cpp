void __fastcall MapGimmickEffectComponent___ctor(MapGimmickEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49F92F3 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectComponent_TypeInfo, method);
    byte_49F92F3 = 1;
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
  SimpleAnimation_o *AnimationName; // x0
  UnityEngine_Object_o *v9; // x20
  const MethodInfo *v10; // x2
  SimpleAnimation_o *v11; // x20
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x20
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *v18; // x20
  const MethodInfo *v19; // x2
  int32_t v20; // w3
  UnityEngine_Animation_o *v21; // x20
  UnityEngine_TrackedReference_o *v22; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_49F92F1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v5);
    byte_49F92F1 = 1;
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
    v9 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v15 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v15;
              p_offset += 2;
              if ( !v15 )
                goto LABEL_21;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
          }
          else
          {
LABEL_21:
            p_method = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 18LL);
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
          goto LABEL_40;
        }
      }
    }
    else
    {
      v18 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
        goto LABEL_40;
      v21 = this->fields.animationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v19);
      if ( v21 )
      {
        v22 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v21,
                                                  (System_String_o *)AnimationName,
                                                  0LL);
        AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)AnimationName & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v22, 2, 0LL);
        }
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( AnimationName )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_40:
          this->fields.totaltime = 0.0;
          this->fields.loop = 1;
          this->fields.playAnimation = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playAnimation, 0, (int32_t)v19, v20);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    sub_1B64324(AnimationName);
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
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x20
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v19; // x20
  const MethodInfo *v20; // x2
  int32_t v21; // w3
  UnityEngine_Animation_o *v22; // x20
  UnityEngine_TrackedReference_o *v23; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_49F92F0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isOverWrite);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v7);
    byte_49F92F0 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStart,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
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
  v8 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v14 = Item;
        v15 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v15;
            p_offset += 2;
            if ( !v15 )
              goto LABEL_15;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_15:
          p_method = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 18LL);
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
        goto LABEL_41;
      }
    }
    goto LABEL_42;
  }
  v19 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    goto LABEL_41;
  v22 = this->fields.animationComponent;
  AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v20);
  if ( !v22 )
    goto LABEL_42;
  v23 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v22, (System_String_o *)AnimationName, 0LL);
  AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v23, 0LL, 0LL);
  if ( ((unsigned __int8)AnimationName & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_42;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v23, 2, 0LL);
  }
  AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
  if ( !AnimationName )
LABEL_42:
    sub_1B64324(AnimationName);
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0LL);
LABEL_41:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playAnimation, 0, (int32_t)v20, v21);
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
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v17; // x20
  UnityEngine_TrackedReference_o *v18; // x0
  UnityEngine_Object_o *v19; // x20
  System_String_o *baseName; // x0
  __int64 *v21; // x8

  if ( (byte_49F92EE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&status);
    sub_1B640C8(&string_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16483/*"_loop"*/, v6);
    sub_1B640C8(&StringLiteral_16504/*"_start"*/, v7);
    sub_1B640C8(&StringLiteral_16468/*"_end"*/, v8);
    byte_49F92EE = 1;
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
        v10 = this->fields.animationComponent;
        if ( !v10 )
          goto LABEL_47;
        Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                   v10,
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
        v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
        if ( !v10 )
          goto LABEL_47;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v10, this->fields.endAnimationName, 0LL) )
          return this->fields.endAnimationName;
      }
    }
    baseName = this->fields.baseName;
    v21 = &StringLiteral_16468/*"_end"*/;
    return System_String__Concat_61375396(baseName, (System_String_o *)*v21, 0LL);
  }
  if ( status == 4 )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.loopAnimationName, 0LL) )
    {
      v17 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
      {
        v10 = this->fields.animationComponent;
        if ( !v10 )
          goto LABEL_47;
        v18 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v10,
                                                  this->fields.loopAnimationName,
                                                  0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v18, 0LL, 0LL) )
          return this->fields.loopAnimationName;
      }
      v19 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
      {
        v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
        if ( !v10 )
          goto LABEL_47;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v10, this->fields.loopAnimationName, 0LL) )
          return this->fields.loopAnimationName;
      }
    }
    baseName = this->fields.baseName;
    v21 = &StringLiteral_16483/*"_loop"*/;
    return System_String__Concat_61375396(baseName, (System_String_o *)*v21, 0LL);
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
    v10 = this->fields.animationComponent;
    if ( !v10 )
      goto LABEL_47;
    v11 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v10, this->fields.startAnimationName, 0LL);
    if ( UnityEngine_TrackedReference__op_Inequality(v11, 0LL, 0LL) )
      return this->fields.startAnimationName;
  }
  v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( v10 )
    {
      if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v10, this->fields.startAnimationName, 0LL) )
        return this->fields.startAnimationName;
      goto LABEL_43;
    }
LABEL_47:
    sub_1B64324(v10);
  }
LABEL_43:
  baseName = this->fields.baseName;
  v21 = &StringLiteral_16504/*"_start"*/;
  return System_String__Concat_61375396(baseName, (System_String_o *)*v21, 0LL);
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
  SimpleAnimation_o *v10; // x20
  System_String_o *AnimationName; // x0
  SimpleAnimation_State_o *Item; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v14; // x20
  UnityEngine_TrackedReference_o *v15; // x21
  ServantStatusBattleListViewItem_o *v16; // x0
  System_Action_o *v17; // x20
  ServantStatusBattleListViewItem_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  SimpleAnimation_o *v20; // x20
  SimpleAnimation_State_o *v21; // x0
  SimpleAnimation_o *v22; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v24; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  ServantStatusBattleListViewItem_o *v27; // x0
  System_Action_o *v28; // x20
  UnityEngine_Animation_o *v29; // x20
  UnityEngine_Animation_o *v30; // x20
  struct System_String_o *v31; // x1

  v3 = next;
  if ( (byte_49F92EF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&next);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49F92EF = 1;
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
        v10 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v8);
        if ( !v10 )
          goto LABEL_66;
        Item = SimpleAnimation__get_Item(v10, AnimationName, 0LL);
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
      p_callAfterStart = (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStart;
      callAfterStart = this->fields.callAfterStart;
      if ( callAfterStart )
      {
        p_callAfterStart->klass = 0LL;
        sub_1B6406C(p_callAfterStart, 0, (int32_t)v8, v9);
        ActionExtensions__Call(callAfterStart, 0LL);
      }
      if ( this->fields.loop )
      {
        v20 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v8);
        if ( !v20 )
          goto LABEL_66;
        v21 = SimpleAnimation__get_Item(v20, AnimationName, 0LL);
        if ( v21 )
        {
          Item = v21;
          v3 = 4;
          goto LABEL_36;
        }
      }
    }
    v22 = this->fields.simpleAnimationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v8);
    if ( !v22 )
      goto LABEL_66;
    Item = SimpleAnimation__get_Item(v22, AnimationName, 0LL);
    v3 = 6;
    if ( Item )
    {
LABEL_36:
      klass = Item->klass;
      v24 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v24;
          p_offset += 2;
          if ( !v24 )
            goto LABEL_40;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
      }
      else
      {
LABEL_40:
        p_method = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 9LL);
      }
      AnimationName = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                           Item,
                                           *(_QWORD *)(p_method + 8));
      if ( !this )
LABEL_66:
        sub_1B64324(AnimationName);
      goto LABEL_63;
    }
LABEL_64:
    v31 = (struct System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_65;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    if ( v3 == 3 )
    {
      v16 = (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStart;
      v17 = this->fields.callAfterStart;
      if ( v17 )
      {
        v16->klass = 0LL;
        sub_1B6406C(v16, 0, (int32_t)v8, v9);
        ActionExtensions__Call(v17, 0LL);
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
      v14 = this->fields.animationComponent;
      AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v8);
      if ( !v14 )
        goto LABEL_66;
      v15 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v14, AnimationName, 0LL);
      if ( UnityEngine_TrackedReference__op_Equality(v15, 0LL, 0LL) )
      {
        AnimationName = (System_String_o *)this->fields.animationComponent;
        if ( !AnimationName )
          goto LABEL_66;
        v15 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)AnimationName,
                                                  this->fields.baseName,
                                                  0LL);
      }
      if ( !UnityEngine_TrackedReference__op_Equality(v15, 0LL, 0LL) )
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
  v27 = (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStart;
  v28 = this->fields.callAfterStart;
  if ( v28 )
  {
    v27->klass = 0LL;
    sub_1B6406C(v27, 0, (int32_t)v8, v9);
    ActionExtensions__Call(v28, 0LL);
  }
  if ( this->fields.loop )
  {
    v29 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v8);
    if ( !v29 )
      goto LABEL_66;
    v15 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v29, AnimationName, 0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v15, 0LL, 0LL) )
    {
      v3 = 4;
      goto LABEL_60;
    }
  }
LABEL_48:
  v30 = this->fields.animationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 6, v8);
  if ( !v30 )
    goto LABEL_66;
  v15 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v30, AnimationName, 0LL);
  v3 = 6;
LABEL_60:
  AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v15, 0LL, 0LL);
  if ( ((unsigned __int8)AnimationName & 1) == 0 )
    goto LABEL_64;
  if ( !v15 )
    goto LABEL_66;
  AnimationName = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v15, 0LL);
LABEL_63:
  v31 = AnimationName;
LABEL_65:
  this->fields.requestAnimation = v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestAnimation, (int32_t)v31, (int32_t)v8, v9);
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
  SimpleAnimation_State_o *v12; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x19
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x20
  const MethodInfo *v19; // x2
  UnityEngine_Animation_o *v20; // x20
  UnityEngine_TrackedReference_o *Item; // x19

  if ( (byte_49F92F2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isDestroy);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v7);
    byte_49F92F2 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.callAfterStop = callback;
  this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callAfterStop,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
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
    v20 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v19);
    if ( v20 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v20, AnimationName, 0LL);
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
    sub_1B64324(AnimationName);
  }
  v10 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v9);
  if ( !v10 )
    goto LABEL_25;
  v12 = SimpleAnimation__get_Item(v10, AnimationName, 0LL);
  if ( v12 )
  {
    klass = v12->klass;
    v14 = v12;
    v15 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v15;
        p_offset += 2;
        if ( !v15 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1BB60A8(v12, SimpleAnimation_State_TypeInfo, 18LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v14, 1LL, *(_QWORD *)(p_method + 8));
  }
}