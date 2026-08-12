void MapGimmickEffectComponent___ctor(MapGimmickEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596D119 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    byte_596D119 = 1;
  }
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method, v2);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void MapGimmickEffectComponent__ForceLoop(
        MapGimmickEffectComponent_o *this,
        bool isOverWrite,
        const MethodInfo *method)
{
  int32_t status; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v9; // x1
  __int64 v10; // x2
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
  __int64 v21; // x0
  UnityEngine_Object_o *v22; // x20
  MethodInfo *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  UnityEngine_Animation_o *v29; // x20
  UnityEngine_TrackedReference_o *v30; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_596D117 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596D117 = 1;
  }
  status = this->fields.status;
  if ( !status )
  {
    CommonEffectComponent__Init((CommonEffectComponent_o *)this, 0, 0, 0);
    if ( isOverWrite )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
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
    v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOverWrite, method);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
    {
      v15 = this->fields.simpleAnimationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v14);
      if ( v15 )
      {
        Item = SimpleAnimation__get_Item(v15, (System_String_o *)AnimationName, 0);
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
                goto LABEL_21;
            }
            v21 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
          }
          else
          {
LABEL_21:
            v21 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 18);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v21)(v18, 2, *(_QWORD *)(v21 + 8));
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
      v22 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
      if ( !UnityEngine_Object__op_Inequality(v22, 0, 0) )
        goto LABEL_40;
      v29 = this->fields.animationComponent;
      AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v23);
      if ( v29 )
      {
        v30 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  v29,
                                                  (System_String_o *)AnimationName,
                                                  0);
        AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v30, 0, 0);
        if ( ((unsigned __int8)AnimationName & 1) != 0 )
        {
          if ( !v30 )
            goto LABEL_42;
          UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v30, 2, 0);
        }
        AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
        if ( AnimationName )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0);
LABEL_40:
          this->fields.playAnimation = 0;
          this->fields.loop = 1;
          this->fields.totaltime = 0.0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.playAnimation,
            0,
            (System_String_o *)v23,
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
    sub_2213CDC(AnimationName, v9);
  }
}


void MapGimmickEffectComponent__ForceStart(
        MapGimmickEffectComponent_o *this,
        bool isOverWrite,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *v13; // x20
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  SimpleAnimation_o *v16; // x20
  SimpleAnimation_o *AnimationName; // x0
  __int64 v18; // x1
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v21; // x20
  __int64 v22; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v24; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v26; // x2
  UnityEngine_Object_o *v27; // x20
  MethodInfo *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  UnityEngine_Animation_o *v34; // x20
  UnityEngine_TrackedReference_o *v35; // x20
  UnityEngine_Object_o *animationComponent; // x20

  if ( (byte_596D116 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596D116 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields.callAfterStart = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callAfterStart,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.status )
  {
    if ( isOverWrite )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v26);
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
  v13 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
  {
    v16 = this->fields.simpleAnimationComponent;
    AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v15);
    if ( v16 )
    {
      Item = SimpleAnimation__get_Item(v16, (System_String_o *)AnimationName, 0);
      if ( Item )
      {
        klass = Item->klass;
        v21 = Item;
        v22 = *(unsigned __int16 *)&Item->klass->_2.rank;
        if ( *(_WORD *)&Item->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v22;
            p_offset += 2;
            if ( !v22 )
              goto LABEL_15;
          }
          v24 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
        }
        else
        {
LABEL_15:
          v24 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 18);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v24)(v21, 2, *(_QWORD *)(v24 + 8));
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
  v27 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( !UnityEngine_Object__op_Inequality(v27, 0, 0) )
    goto LABEL_41;
  v34 = this->fields.animationComponent;
  AnimationName = (SimpleAnimation_o *)MapGimmickEffectComponent__GetAnimationName(this, 4, v28);
  if ( !v34 )
    goto LABEL_42;
  v35 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v34, (System_String_o *)AnimationName, 0);
  AnimationName = (SimpleAnimation_o *)UnityEngine_TrackedReference__op_Inequality(v35, 0, 0);
  if ( ((unsigned __int8)AnimationName & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_42;
    UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)v35, 2, 0);
  }
  AnimationName = (SimpleAnimation_o *)this->fields.animationComponent;
  if ( !AnimationName )
LABEL_42:
    sub_2213CDC(AnimationName, v18);
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)AnimationName, 0);
LABEL_41:
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.playAnimation = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playAnimation,
    0,
    (System_String_o *)v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Animation_o *v10; // x0
  UnityEngine_TrackedReference_o *v11; // x0
  UnityEngine_Object_o *v12; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *v16; // x20
  __int64 v17; // x2
  UnityEngine_TrackedReference_o *v18; // x0
  UnityEngine_Object_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *animationComponent; // x20
  __int64 v23; // x2
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 *v26; // x8

  if ( (byte_596D114 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17237/*"_loop"*/);
    sub_2213A60(&StringLiteral_17256/*"_start"*/);
    sub_2213A60(&StringLiteral_17220/*"_end"*/);
    byte_596D114 = 1;
  }
  switch ( status )
  {
    case 7:
      if ( !System_String__IsNullOrEmpty(this->fields.endAnimationName, 0) )
      {
        animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
        if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
        {
          v10 = this->fields.animationComponent;
          if ( !v10 )
            goto LABEL_47;
          Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                     v10,
                                                     this->fields.endAnimationName,
                                                     0);
          if ( UnityEngine_TrackedReference__op_Inequality(Item, 0, 0) )
            return this->fields.endAnimationName;
        }
        simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v23);
        if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
        {
          v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
          if ( !v10 )
            goto LABEL_47;
          if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v10, this->fields.endAnimationName, 0) )
            return this->fields.endAnimationName;
        }
      }
      v26 = &StringLiteral_17220/*"_end"*/;
      break;
    case 4:
      if ( !System_String__IsNullOrEmpty(this->fields.loopAnimationName, 0) )
      {
        v16 = (UnityEngine_Object_o *)this->fields.animationComponent;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
        if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
        {
          v10 = this->fields.animationComponent;
          if ( !v10 )
            goto LABEL_47;
          v18 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                    v10,
                                                    this->fields.loopAnimationName,
                                                    0);
          if ( UnityEngine_TrackedReference__op_Inequality(v18, 0, 0) )
            return this->fields.loopAnimationName;
        }
        v19 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v17);
        if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
        {
          v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
          if ( !v10 )
            goto LABEL_47;
          if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v10, this->fields.loopAnimationName, 0) )
            return this->fields.loopAnimationName;
        }
      }
      v26 = &StringLiteral_17237/*"_loop"*/;
      break;
    case 3:
      if ( System_String__IsNullOrEmpty(this->fields.startAnimationName, 0) )
        goto LABEL_45;
      v7 = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
      if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
      {
        v10 = this->fields.animationComponent;
        if ( !v10 )
          goto LABEL_47;
        v11 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v10, this->fields.startAnimationName, 0);
        if ( UnityEngine_TrackedReference__op_Inequality(v11, 0, 0) )
          return this->fields.startAnimationName;
      }
      v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( !UnityEngine_Object__op_Inequality(v12, 0, 0) )
      {
LABEL_45:
        v26 = &StringLiteral_17256/*"_start"*/;
        return System_String__Concat_75651716(this->fields.baseName, (System_String_o *)*v26, 0);
      }
      v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( v10 )
      {
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v10, this->fields.startAnimationName, 0) )
          return this->fields.startAnimationName;
        goto LABEL_45;
      }
LABEL_47:
      sub_2213CDC(v10, v8);
    default:
      return **(System_String_o ***)(qword_5984390 + 184);
  }
  return System_String__Concat_75651716(this->fields.baseName, (System_String_o *)*v26, 0);
}


// local variable allocation has failed, the output may be wrong!
void MapGimmickEffectComponent__NextPlayAnimation(
        MapGimmickEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  __int64 v6; // x1
  MethodInfo *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  SimpleAnimation_o *v13; // x20
  System_String_o *AnimationName; // x0
  __int64 v15; // x1
  SimpleAnimation_State_o *Item; // x21
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Animation_o *v18; // x20
  UnityEngine_TrackedReference_o *v19; // x21
  MissionNaviTransitionBoardItem_o *v20; // x0
  System_Action_o *v21; // x20
  UnityEngine_Animation_o *v22; // x20
  UnityEngine_Animation_o *v23; // x20
  MissionNaviTransitionBoardItem_o *v24; // x0
  System_Action_o *v25; // x20
  MissionNaviTransitionBoardItem_o *p_callAfterStart; // x0
  System_Action_o *callAfterStart; // x20
  SimpleAnimation_o *v28; // x20
  SimpleAnimation_State_o *v29; // x0
  SimpleAnimation_o *v30; // x20
  SimpleAnimation_State_c *klass; // x8
  __int64 v32; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v34; // x0
  struct System_String_o *v35; // x1

  v3 = next;
  if ( (byte_596D115 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D115 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&next, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    if ( v3 != 7 )
    {
      if ( v3 != 4 )
      {
        if ( v3 != 3 )
          goto LABEL_60;
        v13 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v7);
        if ( !v13 )
          goto LABEL_64;
        Item = SimpleAnimation__get_Item(v13, AnimationName, 0);
        if ( Item )
          goto LABEL_13;
        AnimationName = (System_String_o *)this->fields.simpleAnimationComponent;
        if ( !AnimationName )
          goto LABEL_64;
        Item = SimpleAnimation__get_Item((SimpleAnimation_o *)AnimationName, this->fields.baseName, 0);
        if ( Item )
        {
LABEL_13:
          v3 = 3;
          this->fields.endtime = 0.0;
          goto LABEL_48;
        }
      }
      p_callAfterStart = (MissionNaviTransitionBoardItem_o *)&this->fields.callAfterStart;
      callAfterStart = this->fields.callAfterStart;
      if ( callAfterStart )
      {
        p_callAfterStart->klass = 0;
        sub_2213A04(p_callAfterStart, 0, (System_String_o *)v7, v8, v9, v10, v11, v12);
        ActionExtensions__Call(callAfterStart, 0);
      }
      if ( this->fields.loop )
      {
        v28 = this->fields.simpleAnimationComponent;
        AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v7);
        if ( !v28 )
          goto LABEL_64;
        v29 = SimpleAnimation__get_Item(v28, AnimationName, 0);
        if ( v29 )
        {
          Item = v29;
          v3 = 4;
LABEL_48:
          klass = Item->klass;
          v32 = *(unsigned __int16 *)&Item->klass->_2.rank;
          if ( *(_WORD *)&Item->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v32;
              p_offset += 2;
              if ( !v32 )
                goto LABEL_52;
            }
            v34 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9];
          }
          else
          {
LABEL_52:
            v34 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 9);
          }
          AnimationName = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v34)(
                                               Item,
                                               *(_QWORD *)(v34 + 8));
          if ( this )
            goto LABEL_55;
LABEL_64:
          sub_2213CDC(AnimationName, v15);
        }
      }
    }
    v30 = this->fields.simpleAnimationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 7, v7);
    if ( !v30 )
      goto LABEL_64;
    Item = SimpleAnimation__get_Item(v30, AnimationName, 0);
    v3 = 7;
    if ( Item )
      goto LABEL_48;
LABEL_60:
    v35 = (struct System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_61;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    if ( v3 == 4 )
    {
      if ( this->fields.loop )
        v3 = 4;
      else
        v3 = 7;
    }
    else if ( v3 == 3 )
    {
      v24 = (MissionNaviTransitionBoardItem_o *)&this->fields.callAfterStart;
      v25 = this->fields.callAfterStart;
      if ( v25 )
      {
        v24->klass = 0;
        sub_2213A04(v24, 0, (System_String_o *)v7, v8, v9, v10, v11, v12);
        ActionExtensions__Call(v25, 0);
      }
      v3 = 3;
    }
    goto LABEL_60;
  }
  if ( v3 == 7 )
    goto LABEL_30;
  if ( v3 != 4 )
  {
    if ( v3 != 3 )
    {
      AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(0, 0, 0);
      if ( ((unsigned __int8)AnimationName & 1) != 0 )
        goto LABEL_64;
      goto LABEL_60;
    }
    v18 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 3, v7);
    if ( !v18 )
      goto LABEL_64;
    v19 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v18, AnimationName, 0);
    if ( UnityEngine_TrackedReference__op_Equality(v19, 0, 0) )
    {
      AnimationName = (System_String_o *)this->fields.animationComponent;
      if ( !AnimationName )
        goto LABEL_64;
      v19 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                (UnityEngine_Animation_o *)AnimationName,
                                                this->fields.baseName,
                                                0);
    }
    if ( !UnityEngine_TrackedReference__op_Equality(v19, 0, 0) )
    {
      this->fields.endtime = 0.0;
      v3 = 3;
      goto LABEL_32;
    }
  }
  v20 = (MissionNaviTransitionBoardItem_o *)&this->fields.callAfterStart;
  v21 = this->fields.callAfterStart;
  if ( v21 )
  {
    v20->klass = 0;
    sub_2213A04(v20, 0, (System_String_o *)v7, v8, v9, v10, v11, v12);
    ActionExtensions__Call(v21, 0);
  }
  if ( !this->fields.loop )
    goto LABEL_30;
  v22 = this->fields.animationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v7);
  if ( !v22 )
    goto LABEL_64;
  v19 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v22, AnimationName, 0);
  if ( UnityEngine_TrackedReference__op_Equality(v19, 0, 0) )
  {
LABEL_30:
    v23 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 7, v7);
    if ( !v23 )
      goto LABEL_64;
    v19 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v23, AnimationName, 0);
    v3 = 7;
  }
  else
  {
    v3 = 4;
  }
LABEL_32:
  AnimationName = (System_String_o *)UnityEngine_TrackedReference__op_Inequality(v19, 0, 0);
  if ( ((unsigned __int8)AnimationName & 1) == 0 )
    goto LABEL_60;
  if ( !v19 )
    goto LABEL_64;
  AnimationName = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v19, 0);
LABEL_55:
  v35 = AnimationName;
LABEL_61:
  this->fields.requestAnimation = v35;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.requestAnimation,
    (int32_t)v35,
    (System_String_o *)v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.status = v3;
}


void MapGimmickEffectComponent__Stop(
        MapGimmickEffectComponent_o *this,
        bool isDestroy,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  SimpleAnimation_o *v16; // x20
  System_String_o *AnimationName; // x0
  __int64 v18; // x1
  SimpleAnimation_State_o *v19; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v21; // x19
  __int64 v22; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v24; // x0
  UnityEngine_Object_o *animationComponent; // x20
  const MethodInfo *v26; // x2
  UnityEngine_Animation_o *v27; // x20
  UnityEngine_TrackedReference_o *Item; // x19

  if ( (byte_596D118 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596D118 = 1;
  }
  if ( this->fields.status == 2 )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields.callAfterStop = callback;
  *(_WORD *)&this->fields.loop = 0;
  this->fields.isDestroy = isDestroy;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callAfterStop,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    if ( !UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
      return;
    v27 = this->fields.animationComponent;
    AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v26);
    if ( v27 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v27, AnimationName, 0);
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
    sub_2213CDC(AnimationName, v18);
  }
  v16 = this->fields.simpleAnimationComponent;
  AnimationName = MapGimmickEffectComponent__GetAnimationName(this, 4, v15);
  if ( !v16 )
    goto LABEL_25;
  v19 = SimpleAnimation__get_Item(v16, AnimationName, 0);
  if ( v19 )
  {
    klass = v19->klass;
    v21 = v19;
    v22 = *(unsigned __int16 *)&v19->klass->_2.rank;
    if ( *(_WORD *)&v19->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v22;
        p_offset += 2;
        if ( !v22 )
          goto LABEL_14;
      }
      v24 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
    }
    else
    {
LABEL_14:
      v24 = sub_224BC3C(v19, SimpleAnimation_State_TypeInfo, 18);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v24)(v21, 1, *(_QWORD *)(v24 + 8));
  }
}